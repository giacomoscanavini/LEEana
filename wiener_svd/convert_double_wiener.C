/*
	This is a revision of the original convert_wiener.C file in the Wire-Cell framework 
	It's meant to be used for the extraction of the double bin total cross section (in my case NCpi0 0p & Np)

	'int RW' is a numerical parameter passed to the script to determine whether or not the reweighting systematics should be included

	It works specifically for two channels [0p & Np] (order must be kept in cov_input.txt)
	
	To run use: 
		root -l --web=off 'convert_double_wiener.C(1)'		(yes reweighting)
		root -l --web=off 'convert_double_wiener.C(0)'		(no reweighting)
*/
void convert_double_wiener(int RW=1){
	gStyle->SetOptStat(0);

	TFile *file1 = new TFile("merge_xs.root");
	TMatrixD *mat_collapse = (TMatrixD*)file1->Get("mat_collapse"); // collapse
	TMatrixD *cov_mat_add = (TMatrixD*)file1->Get("cov_mat_add"); // additional uncertainties
	TVectorD *vec_signal = (TVectorD*)file1->Get("vec_signal"); // xs in pbar
	TMatrixD *mat_R = (TMatrixD*)file1->Get("mat_R"); // smearing matrix

	// Numbers for histo_ are given by the cov_sec in cov_input.txt
  	// It's important to keep the given structure 
	TH1F *hdata_obsch_1 = (TH1F*)file1->Get("hdata_obsch_1"); // BNB data 
	TH1F *histo_sig_1 = (TH1F*)file1->Get("histo_1"); 		// MC signal (ncpio_overlay)
	TH1F *histo_bkg_1 = (TH1F*)file1->Get("histo_3"); 		// MC bkg (nu_overlay + dirt) 
	TH1F *histo_ext_1 = (TH1F*)file1->Get("histo_5"); 		// EXT 
	TH1F *hmc_obsch_1 = (TH1F*)file1->Get("hmc_obsch_1");   // Total MC

	TH1F *hdata_obsch_2 = (TH1F*)file1->Get("hdata_obsch_2"); // BNB data 
	TH1F *histo_sig_2 = (TH1F*)file1->Get("histo_2"); 		// MC signal (ncpio_overlay)
	TH1F *histo_bkg_2 = (TH1F*)file1->Get("histo_4"); 		// MC bkg (nu_overlay + dirt) 
	TH1F *histo_ext_2 = (TH1F*)file1->Get("histo_6"); 		// EXT 
	TH1F *hmc_obsch_2 = (TH1F*)file1->Get("hmc_obsch_2");   // Total MC

	// Number of bins in reco space
	Int_t nbin_R = hdata_obsch_1->GetNbinsX() + 1 + hdata_obsch_2->GetNbinsX() + 1;

	// Number of bins in true space
	Int_t nbin_T = vec_signal->GetNoElements();

	TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbin_T, 0.5, nbin_T+0.5);
	for(int i=0;i!=nbin_T;i++){
		htrue_signal->SetBinContent(i+1,(*vec_signal)(i));
	}
	
	// Export reco distributions for the new file 
  	TH1D *hdata_bnb_N = new TH1D("hdata_bnb_N","hdata_bnb_N",nbin_R,0.5,nbin_R+0.5);
  	TH1D *hsignal_N = new TH1D("hsignal_N","hsignal_N",nbin_R,0.5,nbin_R+0.5);
  	TH1D *hbackground_N = new TH1D("hbackground_N","hbackground_N",nbin_R,0.5,nbin_R+0.5);
  	TH1D *hextbnb_N = new TH1D("hextbnb_N","hextbnb_N",nbin_R,0.5,nbin_R+0.5);
  	for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
		hdata_bnb_N->SetBinContent(i+1, hdata_obsch_1->GetBinContent(i+1) + hdata_obsch_2->GetBinContent(i+1));
		hsignal_N->SetBinContent(i+1, histo_sig_1->GetBinContent(i+1) + histo_sig_2->GetBinContent(i+1));
		hbackground_N->SetBinContent(i+1, histo_bkg_1->GetBinContent(i+1) + histo_bkg_2->GetBinContent(i+1));
		hextbnb_N->SetBinContent(i+1, histo_ext_1->GetBinContent(i+1) + histo_ext_2->GetBinContent(i+1));
  	}

  	// Cross section Numerator for data and prediction
  	TH1D *hmeas = new TH1D("hmeas","hmeas",nbin_R,0.5,nbin_R+0.5);
  	TH1D *hpred = new TH1D("hpred","hpred",nbin_R,0.5,nbin_R+0.5);
  	for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
	    int A = i+1;
	    int B = A + hdata_obsch_1->GetNbinsX() + 1;

	    hmeas->SetBinContent(A, hdata_obsch_1->GetBinContent(i+1) - histo_bkg_1->GetBinContent(i+1) - histo_ext_1->GetBinContent(i+1));
	    hmeas->SetBinContent(B, hdata_obsch_2->GetBinContent(i+1) - histo_bkg_2->GetBinContent(i+1) - histo_ext_2->GetBinContent(i+1));

	    hpred->SetBinContent(A, hmc_obsch_1->GetBinContent(i+1));
	    hpred->SetBinContent(B, hmc_obsch_2->GetBinContent(i+1));
  	}


  	// Create collapsed response matrix
  	TMatrixD mat_collapse_T(mat_collapse->GetNcols(), mat_collapse->GetNrows()); 
	mat_collapse_T.Transpose(*mat_collapse);
	TMatrixD mat_R_collapse = (mat_collapse_T)*(*mat_R);

	TH2D* hR = new TH2D("hR","hR",nbin_R,0.5,nbin_R+0.5, nbin_T,0.5,nbin_T+0.5);
	for (Int_t i=0; i!=nbin_T; i++){
		for (Int_t j=0; j!=nbin_R; j++){
			hR->SetBinContent(j+1,i+1,mat_R_collapse(j,i));
		}
	}

	// Create cov matrix for:
	// MC statistical uncertainties 
	TH2D *hcov_mcstat = new TH2D("hcov_mcstat","hcov_mcstat",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	ifstream infile("mcstat/xs_tot.log");
	double temp, temp1, err2;
	infile >> temp >> temp;
	for (Int_t i=0;i!=nbin_R;i++){
		infile >> temp >> temp >> temp >> err2 >> temp;
		hcov_mcstat->SetBinContent(i+1,i+1,err2);
	}

	// Statistical uncertainties
  	TH2D *hcov_stat = new TH2D("hcov_stat","hcov_stat",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  	for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
    	double meas = hdata_obsch_1->GetBinContent(i+1);
    	double pred = hmc_obsch_1->GetBinContent(i+1);
    	double content;
    	if (pred !=0){
      		if (meas == 0) content = pred/2.;
      		else content = 3./(1./meas+2./pred);
    	}
    	else content = 0;
    	hcov_stat->SetBinContent(i+1,i+1,content);
  	}
  	for (Int_t i=0;i!=hdata_obsch_2->GetNbinsX()+1;i++){
    	double meas = hdata_obsch_2->GetBinContent(i+1);
    	double pred = hmc_obsch_2->GetBinContent(i+1);
    	double content;
    	if (pred !=0){
      		if (meas == 0) content = pred/2.;
      		else content = 3./(1./meas+2./pred);
    	}
    	else content = 0;
    	hcov_stat->SetBinContent(hdata_obsch_1->GetNbinsX()+1+i+1,hdata_obsch_1->GetNbinsX()+1+i+1,content);
  	}

	// Detector systematics
	TH2D *hcov_det = new TH2D("hcov_det","hcov_det",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	int nold = mat_collapse->GetNrows();
	std::cout << nold << std::endl;
	TVectorD vec_nominal(nold);
	int noffset = 0;
	for (Int_t i=0;i!=histo_sig_1->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_1->GetBinContent(i+1);
  	}
  	noffset += histo_sig_1->GetNbinsX()+1;
  	for (Int_t i=0;i!=histo_sig_2->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_2->GetBinContent(i+1);
	}
	noffset += histo_sig_2->GetNbinsX()+1;
  	for (Int_t i=0;i!=histo_bkg_1->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_1->GetBinContent(i+1);
  	}
  	noffset += histo_bkg_1->GetNbinsX()+1;
	for (Int_t i=0;i!=histo_bkg_2->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_2->GetBinContent(i+1);
	}
	noffset += histo_bkg_2->GetNbinsX()+1;
	for (Int_t i=0;i!=histo_ext_1->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_ext_1->GetBinContent(i+1);
  	}
  	noffset += histo_ext_1->GetNbinsX()+1;
	for (Int_t i=0;i!=histo_ext_2->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_ext_2->GetBinContent(i+1);
	}
	noffset += histo_ext_2->GetNbinsX()+1;

	std::map<int, TString> map_det_str;
	map_det_str[1] = "./DetVar/cov_LYDown.root";
	map_det_str[2] = "./DetVar/cov_LYRayleigh.root";
	map_det_str[3] = "./DetVar/cov_Recomb2.root";
	map_det_str[4] = "./DetVar/cov_SCE.root";
	// map_det_str[5] = "./DetVar/cov_WMdEdx.root";
	map_det_str[6] = "./DetVar/cov_WMThetaXZ.root";
	map_det_str[7] = "./DetVar/cov_WMThetaYZ.root";
	map_det_str[8] = "./DetVar/cov_WMX.root";
	map_det_str[9] = "./DetVar/cov_WMYZ.root";
	map_det_str[10] = "./DetVar/cov_LYatt.root";
	TMatrixD frac_det(nold,nold);
	for (auto it = map_det_str.begin(); it!=map_det_str.end(); it++){
	    int idx = it->first;
	    TFile tmp_file(it->second);
	    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_det_mat_%d",idx));
	    frac_det += (*tmp_matrix);
	}

	for (Int_t i=0;i!=nold;i++){
		for (Int_t j=0;j!=nold;j++){
	  		frac_det(i,j) *= vec_nominal(i) * vec_nominal(j);
		}
	}
  	TMatrixD mat_det = mat_collapse_T * frac_det * (*mat_collapse);
  	for (Int_t i=0;i!=nbin_R;i++){
    	for (Int_t j=0;j!=nbin_R;j++){
      		hcov_det->SetBinContent(i+1,j+1,mat_det(i,j));
    	}
  	}
  
	/*
	// Flux systematics
	TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	TMatrixD frac_flux(nold,nold);
	for(Int_t i=1;i!=17;i++){
    	TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
    	TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    	frac_flux += *tmp_matrix;
  	}
  	for (Int_t i=0;i!=nold;i++){
    	for (Int_t j=0;j!=nold;j++){
      		frac_flux(i,j) *= vec_nominal(i) * vec_nominal(j);
    	}
  	}
  	TMatrixD mat_flux = mat_collapse_T * frac_flux * (*mat_collapse);
  	for (Int_t i=0;i!=nbin_R;i++){
    	for (Int_t j=0;j!=nbin_R;j++){
      		hcov_flux->SetBinContent(i+1,j+1,mat_flux(i,j));
    	}
  	}

  	// Xs systematics
  	TH2D *hcov_xs = new TH2D("hcov_xs","hcov_xs",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  	{
	    TFile tmp_file("./XsFlux/cov_xs.root");   // cross section mode
	    //TFile tmp_file("./XsFlux/cov_17.root"); // nominal 
	    TMatrixD *frac_xs = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_17");
    
    	for (Int_t i=0;i!=nold;i++){
      		for (Int_t j=0;j!=nold;j++){
        		(*frac_xs)(i,j) *= vec_nominal(i) * vec_nominal(j);
      		}
    	}
    	TMatrixD mat_xs = mat_collapse_T * (*frac_xs) * (*mat_collapse);
    	for (Int_t i=0;i!=nbin_R;i++){
	      	for (Int_t j=0;j!=nbin_R;j++){
	        	hcov_xs->SetBinContent(i+1,j+1,mat_xs(i,j));
	      	}
    	}
    }
	*/
  	// Flux systematics
	TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	TMatrixD frac_flux(nold,nold);
	for(Int_t i=1;i!=14;i++){
    	TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
    	TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    	frac_flux += *tmp_matrix;
  	}
  	for (Int_t i=0;i!=nold;i++){
    	for (Int_t j=0;j!=nold;j++){
      		frac_flux(i,j) *= vec_nominal(i) * vec_nominal(j);
    	}
  	}
  	TMatrixD mat_flux = mat_collapse_T * frac_flux * (*mat_collapse);
  	for (Int_t i=0;i!=nbin_R;i++){
    	for (Int_t j=0;j!=nbin_R;j++){
      		hcov_flux->SetBinContent(i+1,j+1,mat_flux(i,j));
    	}
  	}
  	// GEANT4 systematics
	TH2D *hcov_geant4 = new TH2D("hcov_geant4","hcov_geant4",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	TMatrixD frac_geant4(nold,nold);
	for(Int_t i=14;i!=17;i++){
		TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
		TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
		frac_geant4 += *tmp_matrix;
	}
	for (Int_t i=0;i!=nold;i++){
		for (Int_t j=0;j!=nold;j++){
			frac_geant4(i,j) *= vec_nominal(i) * vec_nominal(j);
		}
	}
	TMatrixD mat_geant4 = mat_collapse_T * frac_geant4 * (*mat_collapse);
	for (Int_t i=0;i!=nbin_R;i++){
		for (Int_t j=0;j!=nbin_R;j++){
			hcov_geant4->SetBinContent(i+1,j+1,mat_geant4(i,j));
		}
	}
  	// GENIE systematics
  	TH2D *hcov_genie = new TH2D("hcov_genie","hcov_genie",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  	{
	    TFile tmp_file("./XsFlux/cov_xs.root");   // cross section mode
	    //TFile tmp_file("./XsFlux/cov_17.root"); // nominal 
	    TMatrixD *frac_xs = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_17");
    
    	for (Int_t i=0;i!=nold;i++){
      		for (Int_t j=0;j!=nold;j++){
        		(*frac_xs)(i,j) *= vec_nominal(i) * vec_nominal(j);
      		}
    	}
    	TMatrixD mat_xs = mat_collapse_T * (*frac_xs) * (*mat_collapse);
    	for (Int_t i=0;i!=nbin_R;i++){
	      	for (Int_t j=0;j!=nbin_R;j++){
	        	hcov_genie->SetBinContent(i+1,j+1,mat_xs(i,j));
	      	}
    	}
    }

  	// Additional systematic uncertainty (only applied to dirt for now)
	TH2D *hcov_add = new TH2D("hcov_add","hcov_add",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	TMatrixD mat_add = mat_collapse_T * (*cov_mat_add) * (*mat_collapse);
	for (Int_t i=0;i!=nbin_R;i++){
		hcov_add->SetBinContent(i+1,i+1,mat_add(i,i));
	}

	// RW uncor sys
	TH2D *hcov_rw = new TH2D("hcov_rw","hcov_rw",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	{
    	if(RW==1){
	      	TFile tmp_file("./XsFlux/cov_rw.root");   // cross section mode
	      	TMatrixD *frac_rw = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_18");

	      	for (Int_t i=0;i!=nold;i++){
	        	for (Int_t j=0;j!=nold;j++){
	          		(*frac_rw)(i,j) *= vec_nominal(i) * vec_nominal(j);
	        	}
	      	}
	      	TMatrixD mat_rw = mat_collapse_T * (*frac_rw) * (*mat_collapse);
	      	for (Int_t i=0;i!=nbin_R;i++){
	        	for (Int_t j=0;j!=nbin_R;j++){
	          		hcov_rw->SetBinContent(i+1,j+1,mat_rw(i,j));
	        	}
	      	}
    	}
  	} 

	// RW cor sys
	TH2D *hcov_rw_cor = new TH2D("hcov_rw_cor","hcov_rw_cor",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	// RW cor tot
	TH2D *hcov_rw_tot = new TH2D("hcov_rw_tot","hcov_rw_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
	{
		if(RW==1){
			TFile tmp_file("./XsFlux/cov_rw_cor.root");   // cross section mode
			TMatrixD *frac_rw_cor = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_19");

			for (Int_t i=0;i!=nold;i++){
				for (Int_t j=0;j!=nold;j++){
					(*frac_rw_cor)(i,j) *= vec_nominal(i) * vec_nominal(j);
				}
			}
			TMatrixD mat_rw_cor = mat_collapse_T * (*frac_rw_cor) * (*mat_collapse);
			for (Int_t i=0;i!=nbin_R;i++){
				for (Int_t j=0;j!=nbin_R;j++){
					hcov_rw_cor->SetBinContent(i+1,j+1,mat_rw_cor(i,j));
				}
			}
			hcov_rw_tot->Add(hcov_rw);
			hcov_rw_tot->Add(hcov_rw_cor);
		}
	} 

	vec_nominal.Draw();

	// Create Total covariance matrix
  	TH2D *hcov_tot = new TH2D("hcov_tot","hcov_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);

	hcov_tot->Add(hcov_stat);
	hcov_tot->Add(hcov_mcstat);
	hcov_tot->Add(hcov_add);
	hcov_tot->Add(hcov_flux);
	//hcov_tot->Add(hcov_xs);
	hcov_tot->Add(hcov_geant4);
	hcov_tot->Add(hcov_genie);
	hcov_tot->Add(hcov_det);
	if(RW==1) hcov_tot->Add(hcov_rw);
	if(RW==1) hcov_tot->Add(hcov_rw_cor);

	// Creates staked plots to visualize fractional uncertainties
	TH1F *h10 = new TH1F("h10","h10",nbin_R,0.5,nbin_R+0.5); // stat
	TH1F *h20 = new TH1F("h20","h10",nbin_R,0.5,nbin_R+0.5); // mcstat
	TH1F *h30 = new TH1F("h30","h10",nbin_R,0.5,nbin_R+0.5); // add
	TH1F *h40 = new TH1F("h40","h10",nbin_R,0.5,nbin_R+0.5); // flux
	TH1F *h50 = new TH1F("h50","h10",nbin_R,0.5,nbin_R+0.5); // det
	//TH1F *h60 = new TH1F("h60","h10",nbin_R,0.5,nbin_R+0.5); // xs
	TH1F *h59 = new TH1F("h59","h10",nbin_R,0.5,nbin_R+0.5); // geant4
	TH1F *h60 = new TH1F("h60","h10",nbin_R,0.5,nbin_R+0.5); // genie
	TH1F *h61 = new TH1F("h61","h10",nbin_R,0.5,nbin_R+0.5); // rw
	TH1F *h62 = new TH1F("h62","h10",nbin_R,0.5,nbin_R+0.5); // rw_cor
	TH1F *h70 = new TH1F("h70","h10",nbin_R,0.5,nbin_R+0.5); // total
  
	for (Int_t i=0;i!=nbin_R;i++){
		if (hpred->GetBinContent(i+1)==0) continue;

		h10->SetBinContent(i+1,sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h20->SetBinContent(i+1,sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h30->SetBinContent(i+1,sqrt(hcov_add->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h40->SetBinContent(i+1,sqrt(hcov_flux->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h50->SetBinContent(i+1,sqrt(hcov_det->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		//h60->SetBinContent(i+1,sqrt(hcov_xs->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h59->SetBinContent(i+1,sqrt(hcov_geant4->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h60->SetBinContent(i+1,sqrt(hcov_genie->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		if(RW==1) h61->SetBinContent(i+1,sqrt(hcov_rw->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		if(RW==1) h62->SetBinContent(i+1,sqrt(hcov_rw_cor->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
		h70->SetBinContent(i+1,sqrt(hcov_tot->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
	}

	h70->Draw();
	h70->SetXTitle("Bin no");
	h70->SetTitle("Relative Uncertainties");
	h70->SetLineColor(1);
	h70->SetLineWidth(2);

	h10->Draw("same");  //stat
	h10->SetLineColor(9);
	h20->Draw("same");  // mcstat
	h20->SetLineColor(8);
	h30->Draw("same"); //dirt
	h30->SetLineColor(3);
	h40->Draw("same"); //flux
	h40->SetLineColor(2);
	h50->Draw("same"); //det
	h50->SetLineColor(6);
	//h60->Draw("same"); // xs
	//h60->SetLineColor(4);
	h59->Draw("same"); // geant4
	h59->SetLineColor(kBlue-7);
	h60->Draw("same"); // genie
	h60->SetLineColor(4);
	if(RW==1) h61->Draw("same"); // rw
	if(RW==1) h61->SetLineColor(kYellow+1);
	if(RW==1) h62->Draw("same"); // rw_cor
	if(RW==1) h62->SetLineColor(kYellow-7);

	h10->SetLineWidth(2);
	h20->SetLineWidth(2);
	h30->SetLineWidth(2);
	h40->SetLineWidth(2);
	h50->SetLineWidth(2);
	h59->SetLineWidth(2);
	h60->SetLineWidth(2);
	if(RW==1) h61->SetLineWidth(2);
	if(RW==1) h62->SetLineWidth(2);

	h70->GetYaxis()->SetRangeUser(0,1.);

	TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
	le1->AddEntry(h70,"Total","l");
	le1->AddEntry(h10,"Stat.","l");
	le1->AddEntry(h20,"MC stat.","l");
	le1->AddEntry(h30,"Dirt","l");
	le1->AddEntry(h40,"Flux","l");
	le1->AddEntry(h50,"Det.","l");
	//le1->AddEntry(h60,"Xs","l");
	le1->AddEntry(h59,"Geant4","l");
	le1->AddEntry(h60,"Genie","l");
	if(RW==1) le1->AddEntry(h61,"RW","l");
	if(RW==1) le1->AddEntry(h62,"RW cor.","l");
	le1->Draw();  

	TFile *file = new TFile("wiener.root","RECREATE");
	hdata_bnb_N->SetDirectory(file);
	hsignal_N->SetDirectory(file);
	hbackground_N->SetDirectory(file);
	hextbnb_N->SetDirectory(file);

	htrue_signal->SetDirectory(file);
	hmeas->SetDirectory(file);
	hpred->SetDirectory(file);
	hR->SetDirectory(file);

	hcov_stat->SetDirectory(file);
	hcov_mcstat->SetDirectory(file);
	hcov_add->SetDirectory(file);
	hcov_det->SetDirectory(file);
	hcov_flux->SetDirectory(file);
	//hcov_xs->SetDirectory(file);
	hcov_geant4->SetDirectory(file);
	hcov_genie->SetDirectory(file);
	if(RW==1) hcov_rw->SetDirectory(file);
	if(RW==1) hcov_rw_cor->SetDirectory(file);
	if(RW==1) hcov_rw_tot->SetDirectory(file);
	hcov_tot->SetDirectory(file);
	file->Write();
	file->Close();
}
void convert_wiener(int n_diff_xs_reco=1){

  bool just_stat_uncertainty      = false;
  bool use_fakedata               = false;
  bool new_noise                  = true;
  int add_noise                   = 0;

  bool draw = false;
  bool data_wgu = false;
  bool systematics_wgu = false;

  gStyle->SetOptStat(0);
  
  std::string filename1     =     "merge_xs.root";
  if (data_wgu) { filename1 = "wgu/merge_xs.root"; }
  TFile *file1 = new TFile(filename1.c_str());
  TMatrixD *mat_collapse = (TMatrixD*)file1->Get("mat_collapse"); // collapse				// 108 x 36  (36 = 18x2)
  TMatrixD *cov_mat_add  = (TMatrixD*)file1->Get("cov_mat_add"); // additional uncertainties
  TVectorD *vec_signal   = (TVectorD*)file1->Get("vec_signal"); // xs in pbar
  TMatrixD *mat_R        = (TMatrixD*)file1->Get("mat_R"); // smearing matrix				// 108 x 11  (108 = 36x3 = 18x2x3)

  //std::cout << "mat_R      row,col    = " << mat_R->GetNrows() << ", " << mat_R->GetNcols() << std::endl;				//(6 x n_E_reco x n_theta_reco) x (n_E_true x n_theta_true)
  //std::cout << "collapse   row,col    = " << mat_collapse->GetNrows() << ", " << mat_collapse->GetNcols() << std::endl;		//(6 x n_E_reco x n_theta_reco) x (2 x n_E_reco x n_theta_reco)
  //std::cout << "additional row,col    = " << cov_mat_add->GetNrows() << ", " << cov_mat_add->GetNcols() << std::endl;			//(6 x n_E_reco x n_theta_reco) x (6 x n_E_reco x n_theta_reco)
  //std::cout << "signal vec row        = " << vec_signal->GetNrows() << std::endl;							//n_E_true x n_theta_true

  int n_Ebins_reco = mat_R->GetNrows()/n_diff_xs_reco/3/2;		// N_ebin * N_theta * (sig,bkg,ext) * (FC,PC) * (Pmu,Ehad)
  int nbins_histo = n_Ebins_reco*n_diff_xs_reco;			// 18*9
  TH1F *hdata_obsch_1 = new TH1F("hdata_obsch_1_merge","hdata_obsch_1_merge", nbins_histo, 0, nbins_histo);
  TH1F *hdata_obsch_2 = new TH1F("hdata_obsch_2_merge","hdata_obsch_2_merge", nbins_histo, 0, nbins_histo);
  TH1F *hmc_obsch_1   = new TH1F("hmc_obsch_1_merge",  "hmc_obsch_1_merge",   nbins_histo, 0, nbins_histo);
  TH1F *hmc_obsch_2   = new TH1F("hmc_obsch_2_merge",  "hmc_obsch_2_merge",   nbins_histo, 0, nbins_histo);
  TH1F *histo_1       = new TH1F("histo_1_merge",      "histo_1_merge",       nbins_histo, 0, nbins_histo);
  TH1F *histo_2       = new TH1F("histo_2_merge",      "histo_2_merge",       nbins_histo, 0, nbins_histo);
  TH1F *histo_3       = new TH1F("histo_3_merge",      "histo_3_merge",       nbins_histo, 0, nbins_histo);
  TH1F *histo_4       = new TH1F("histo_4_merge",      "histo_4_merge",       nbins_histo, 0, nbins_histo);
  TH1F *histo_5       = new TH1F("histo_5_merge",      "histo_5_merge",       nbins_histo, 0, nbins_histo);
  TH1F *histo_6       = new TH1F("histo_6_merge",      "histo_6_merge",       nbins_histo, 0, nbins_histo);

  for (int i=0;i<n_diff_xs_reco;i++) {
    int FC_index = 1+i;
    int PC_index = 1+i+n_diff_xs_reco;
    std::string FC_data_str = "hdata_obsch_" + std::to_string(FC_index);			// data numuCC FC
    std::string PC_data_str = "hdata_obsch_" + std::to_string(PC_index);			// data numuCC PC
    if (use_fakedata) {
      FC_data_str = "hmc_obsch_" + std::to_string(FC_index);					// fakedata numuCC FC
      PC_data_str = "hmc_obsch_" + std::to_string(PC_index);					// fakedata numuCC PC
    }
    std::string FC_mc_str   = "hmc_obsch_"   + std::to_string(FC_index);			// pred numuCC FC
    std::string PC_mc_str   = "hmc_obsch_"   + std::to_string(PC_index);			// pred numuCC PC
    std::string histo_str_1 = "histo_"       + std::to_string(FC_index + 0*2*n_diff_xs_reco);	// sig numuCC FC
    std::string histo_str_2 = "histo_"       + std::to_string(PC_index + 0*2*n_diff_xs_reco);	// sig numuCC PC
    std::string histo_str_3 = "histo_"       + std::to_string(FC_index + 1*2*n_diff_xs_reco);	// bkg numuCC FC
    std::string histo_str_4 = "histo_"       + std::to_string(PC_index + 1*2*n_diff_xs_reco);	// bkg numuCC PC
    std::string histo_str_5 = "histo_"       + std::to_string(FC_index + 2*2*n_diff_xs_reco);	// EXT FC
    std::string histo_str_6 = "histo_"       + std::to_string(PC_index + 2*2*n_diff_xs_reco);	// EXT PC
    TH1F *hdata_obsch_1_tmp = (TH1F*)file1->Get(FC_data_str.c_str());				// data numuCC FC
    TH1F *hdata_obsch_2_tmp = (TH1F*)file1->Get(PC_data_str.c_str());				// data numuCC PC
    TH1F *hmc_obsch_1_tmp   = (TH1F*)file1->Get(FC_mc_str.c_str());				// pred numuCC FC
    TH1F *hmc_obsch_2_tmp   = (TH1F*)file1->Get(PC_mc_str.c_str());				// pred numuCC PC
    TH1F *histo_1_tmp       = (TH1F*)file1->Get(histo_str_1.c_str());				// sig numuCC FC
    TH1F *histo_2_tmp       = (TH1F*)file1->Get(histo_str_2.c_str());				// sig numuCC PC
    TH1F *histo_3_tmp       = (TH1F*)file1->Get(histo_str_3.c_str());				// bkg numuCC FC
    TH1F *histo_4_tmp       = (TH1F*)file1->Get(histo_str_4.c_str());				// bkg numuCC PC
    TH1F *histo_5_tmp       = (TH1F*)file1->Get(histo_str_5.c_str());				// EXT FC
    TH1F *histo_6_tmp       = (TH1F*)file1->Get(histo_str_6.c_str());				// EXT PC

    for (int j=0;j<n_Ebins_reco;j++) {
      histo_1->SetBinContent(      i*n_Ebins_reco+j+1, histo_1_tmp->GetBinContent(j+1));
      histo_2->SetBinContent(      i*n_Ebins_reco+j+1, histo_2_tmp->GetBinContent(j+1));
      histo_3->SetBinContent(      i*n_Ebins_reco+j+1, histo_3_tmp->GetBinContent(j+1));
      histo_4->SetBinContent(      i*n_Ebins_reco+j+1, histo_4_tmp->GetBinContent(j+1));
      histo_5->SetBinContent(      i*n_Ebins_reco+j+1, histo_5_tmp->GetBinContent(j+1));
      histo_6->SetBinContent(      i*n_Ebins_reco+j+1, histo_6_tmp->GetBinContent(j+1));
      hdata_obsch_1->SetBinContent(i*n_Ebins_reco+j+1, hdata_obsch_1_tmp->GetBinContent(j+1));
      hdata_obsch_2->SetBinContent(i*n_Ebins_reco+j+1, hdata_obsch_2_tmp->GetBinContent(j+1));
      hmc_obsch_1->SetBinContent(  i*n_Ebins_reco+j+1, hmc_obsch_1_tmp->GetBinContent(j+1));
      hmc_obsch_2->SetBinContent(  i*n_Ebins_reco+j+1, hmc_obsch_2_tmp->GetBinContent(j+1));
    }
  }

  int nbin_true = vec_signal->GetNoElements();
  int nbin_meas = hdata_obsch_1->GetNbinsX() + hdata_obsch_2->GetNbinsX();

  std::cout << "nrow R = " << mat_R->GetNrows() << std::endl;
  std::cout << "n_Ebins_reco = " << n_Ebins_reco << std::endl;
  std::cout << "nbin_hdata_obsch_1 = " << hdata_obsch_1->GetNbinsX() << std::endl;
  std::cout << "nbin_hdata_obsch_2 = " << hdata_obsch_2->GetNbinsX() << std::endl;
  std::cout << "nbin_meas = " << nbin_meas << std::endl;
  // response matrix
  
  TMatrixD mat_collapse_T(mat_collapse->GetNcols(), mat_collapse->GetNrows()); 
  mat_collapse_T.Transpose(*mat_collapse);
  TMatrixD mat_R_collapse = (mat_collapse_T)*(*mat_R);
  
  //mat_R_collapse.Draw("COLZ");

  TH2D* hR = new TH2D("hR","hR",nbin_meas,0.5,nbin_meas+0.5, nbin_true, 0.5, nbin_true+0.5);
  for (Int_t i=0;i!=nbin_true;i++){
    for (Int_t j=0;j!=nbin_meas;j++){
      hR->SetBinContent(j+1,i+1,mat_R_collapse(j,i));
    }
  }
  //  hR->Draw("COLZ");
  
  // covariance matrix
  TH2D *hcov_tot    = new TH2D("hcov_tot",   "hcov_tot",   nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  // MC statistical uncertainties ...
  TH2D *hcov_mcstat = new TH2D("hcov_mcstat","hcov_mcstat",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  ifstream infile("mcstat/xs_tot.log");
  double temp, temp1,err2;
  infile >> temp >> temp;
  for (Int_t i=0;i!=nbin_meas;i++){
    infile >> temp >> temp >> temp >> err2 >> temp;
    hcov_mcstat->SetBinContent(i+1,i+1,err2);
  }
  //hcov_mcstat->Draw("COLZ");

  // statistical uncertainties
  TH2D *hcov_stat = new TH2D("hcov_stat","hcov_stat",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  for (int i=0;i<n_diff_xs_reco;i++) {
    for (int j=0;j<n_Ebins_reco;j++) {
      int FC_index =  i                 * n_Ebins_reco + j+1;	//FC
      int PC_index = (i+n_diff_xs_reco) * n_Ebins_reco + j+1;	//PC

      double meas = hdata_obsch_1->GetBinContent(FC_index);
      double pred = hmc_obsch_1->GetBinContent(FC_index);
      double content;
      if (pred !=0){
        if (meas == 0){
	  content = pred/2.;
        }else{
	  content = 3./(1./meas+2./pred);
        }
      }else{
        content = 0;
      }
      hcov_stat->SetBinContent(FC_index,FC_index,content);
      //std::cout << "i,j,FC,PC, FC_content = " << i << ",  " << j << ",  " << FC_index << ",     " << PC_index << ",     " << content << std::endl;

      meas = hdata_obsch_2->GetBinContent(FC_index);
      pred = hmc_obsch_2->GetBinContent(FC_index);
      if (pred !=0){
        if (meas == 0){
	  content = pred/2.;
        }else{
	  content = 3./(1./meas+2./pred);
        }
      }else{
        content = 0;
      }
      hcov_stat->SetBinContent(PC_index,PC_index,content);
    }
  }

  // additional uncertainty
  TH2D *hcov_add = new TH2D("hcov_add","hcov_add",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  TMatrixD mat_add = mat_collapse_T * (*cov_mat_add) * (*mat_collapse);
  //  mat_add.Draw("COLZ");
  for (Int_t i=0;i!=nbin_meas;i++){
    hcov_add->SetBinContent(i+1,i+1,mat_add(i,i));
  }
  //hcov_add->Draw("COLZ");
  
  // detector systematics
  TH2D *hcov_det = new TH2D("hcov_det","hcov_det",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  int nold = mat_collapse->GetNrows();
  TVectorD vec_nominal(nold);

  for (int i=0;i<n_diff_xs_reco;i++) {
    for (int j=0;j<n_Ebins_reco;j++) {
/*
      int index0 =    i    * n_Ebins_reco +j+1;
      int index1 =  2*i    * n_Ebins_reco +j;
      int index2 = (2*i+1) * n_Ebins_reco +j;
      int index3 =  2*i    * n_Ebins_reco +j + 2*nbins_histo;
      int index4 = (2*i+1) * n_Ebins_reco +j + 2*nbins_histo;
      int index5 =  2*i    * n_Ebins_reco +j + 4*nbins_histo;
      int index6 = (2*i+1) * n_Ebins_reco +j + 4*nbins_histo;
      vec_nominal(index1) = histo_1->GetBinContent(index0);
      vec_nominal(index2) = histo_2->GetBinContent(index0);
      vec_nominal(index3) = histo_3->GetBinContent(index0);
      vec_nominal(index4) = histo_4->GetBinContent(index0);
      vec_nominal(index5) = histo_5->GetBinContent(index0);
      vec_nominal(index6) = histo_6->GetBinContent(index0);
*/
      int index0 = i*n_Ebins_reco + j;
      int index1 = index0 + n_Ebins_reco*n_diff_xs_reco*0;
      int index2 = index0 + n_Ebins_reco*n_diff_xs_reco*1;
      int index3 = index0 + n_Ebins_reco*n_diff_xs_reco*2;
      int index4 = index0 + n_Ebins_reco*n_diff_xs_reco*3;
      int index5 = index0 + n_Ebins_reco*n_diff_xs_reco*4;
      int index6 = index0 + n_Ebins_reco*n_diff_xs_reco*5;
      vec_nominal(index1) = histo_1->GetBinContent(index0+1);
      vec_nominal(index2) = histo_2->GetBinContent(index0+1);
      vec_nominal(index3) = histo_3->GetBinContent(index0+1);
      vec_nominal(index4) = histo_4->GetBinContent(index0+1);
      vec_nominal(index5) = histo_5->GetBinContent(index0+1);
      vec_nominal(index6) = histo_6->GetBinContent(index0+1);


    }
  }
  //vec_nominal.Draw();

  std::map<int, TString> map_det_str;
  std::string detvar_prefix = "./DetVar/";
  if (systematics_wgu) { detvar_prefix = "./wgu/DetVar/"; }
  map_det_str[1]  = detvar_prefix+"cov_LYDown.root";
  map_det_str[2]  = detvar_prefix+"cov_LYRayleigh.root";
  map_det_str[3]  = detvar_prefix+"cov_Recomb2.root";
  map_det_str[4]  = detvar_prefix+"cov_SCE.root";
  // map_det_str[5]  = detvar_prefix+"cov_WMdEdx.root";
  map_det_str[6]  = detvar_prefix+"cov_WMThetaXZ.root";
  map_det_str[7]  = detvar_prefix+"cov_WMThetaYZ.root";
  map_det_str[8]  = detvar_prefix+"cov_WMX.root";
  map_det_str[9]  = detvar_prefix+"cov_WMYZ.root";
  map_det_str[10] = detvar_prefix+"cov_LYatt.root";
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
  for (Int_t i=0;i!=nbin_meas;i++){
    for (Int_t j=0;j!=nbin_meas;j++){
      hcov_det->SetBinContent(i+1,j+1,mat_det(i,j));
    }
  }
  
  // Flux systematics
  TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);
  TMatrixD frac_flux(nold,nold);
  std::string flux_str            =     "./XsFlux/cov_%d.root";
  if (systematics_wgu) { flux_str = "./wgu/XsFlux/cov_%d.root"; }
  for(Int_t i=1;i!=17;i++){
    TFile tmp_file(Form(flux_str.c_str(),i));
    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    frac_flux += *tmp_matrix;
  }
  for (Int_t i=0;i!=nold;i++){
    for (Int_t j=0;j!=nold;j++){
      frac_flux(i,j) *= vec_nominal(i) * vec_nominal(j);
    }
  }
  //frac_flux.Draw("COLZ");
  TMatrixD mat_flux = mat_collapse_T * frac_flux * (*mat_collapse);
  //mat_flux.Draw("COLZ");
  for (Int_t i=0;i!=nbin_meas;i++){
    for (Int_t j=0;j!=nbin_meas;j++){
      hcov_flux->SetBinContent(i+1,j+1,mat_flux(i,j));
    }
  }
  // hcov_flux->Draw("COLZ");

  // Xs systematics
  TH2D *hcov_xs      = new TH2D("hcov_xs","hcov_xs",nbin_meas,0.5,nbin_meas+0.5,nbin_meas,0.5,nbin_meas+0.5);

  {
    TFile tmp_file("./XsFlux/cov_xs.root");
    //TFile tmp_file("./XsFlux/cov_17.root");
    TMatrixD *frac_xs = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_17");
    
    for (Int_t i=0;i!=nold;i++){
      for (Int_t j=0;j!=nold;j++){
	(*frac_xs)(i,j) *= vec_nominal(i) * vec_nominal(j);
      }
    }
    //frac_flux.Draw("COLZ");
    TMatrixD mat_xs = mat_collapse_T * (*frac_xs) * (*mat_collapse);

    for (Int_t i=0;i!=nbin_meas;i++){
      for (Int_t j=0;j!=nbin_meas;j++){
	hcov_xs->SetBinContent(i+1,j+1,mat_xs(i,j));
      }
    }
    //    hcov_xs->Draw("COLZ");
  }
  //vec_nominal.Draw();


  //before storing the measured and predicted values, apply a gaussian noise to them for debugging purposes
  TH1D *hnoise           = new TH1D("hnoise",          "hnoise"          ,nbin_meas,               0.5,  nbin_meas                +0.5);
  TH1D *hnoise_collapsed = new TH1D("hnoise_collapsed","hnoise_collapsed",nbin_meas/n_diff_xs_reco,0.5, (nbin_meas/n_diff_xs_reco)+0.5);

  if (new_noise) {
    int seed = std::random_device{}();
    std::cout << "seed = " << seed << std::endl;
    std::mt19937 generator(seed);	// https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine
    for (int i=0;i<n_diff_xs_reco;i++) {
      for (int j=0;j<2*n_Ebins_reco;j++) {
        int index = 2*i*n_Ebins_reco + j+1;

        double sigma = std::sqrt(hcov_stat->GetBinContent(index,index));
        std::normal_distribution<double> dist(0, sigma);
        double noise = dist(generator);

        hnoise->SetBinContent(index, noise);
        hnoise_collapsed->SetBinContent(j+1, hnoise_collapsed->GetBinContent(j+1)+noise);
        //std::cout << "i,j,index, sigma, noise, hnoise_collapsed = " << i << ",  " << j << ",   " << index << ",     " << sigma << ",     " << noise << ",     " << hnoise_collapsed->GetBinContent(j+1) << std::endl;
      }
    }
  } else {
    //read in niose histograms
    TFile *noise_file = new TFile("/uboone/data/users/lcoopert/LEE/LEEana_xs_Emuon/wiener_svd/noise_file.root");
    hnoise           = (TH1D*)noise_file->Get("hnoise"); 
    hnoise_collapsed = (TH1D*)noise_file->Get("hnoise_collapsed"); 
  }

  // true signal ...
  TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbin_true, 0.5, nbin_true+0.5);
  for(int i=0;i!=nbin_true;i++){
    htrue_signal->SetBinContent(i+1,(*vec_signal)(i));
  }
  // measurement ...
  TH1D *hmeas = new TH1D("hmeas","hmeas",nbin_meas,0.5, nbin_meas+0.5);
  TH1D *hpred = new TH1D("hpred","hpred",nbin_meas,0.5, nbin_meas+0.5);
  for (int i=0;i<n_diff_xs_reco;i++) {
    for (int j=0;j<n_Ebins_reco;j++) {
      int FC_index =  i                 * n_Ebins_reco + j+1;	//FC
      int PC_index = (i+n_diff_xs_reco) * n_Ebins_reco + j+1;	//PC
      hmeas->SetBinContent(FC_index, hdata_obsch_1->GetBinContent(FC_index) - histo_3->GetBinContent(FC_index) - histo_5->GetBinContent(FC_index) + add_noise*hnoise->GetBinContent(FC_index));
      hmeas->SetBinContent(PC_index, hdata_obsch_2->GetBinContent(FC_index) - histo_4->GetBinContent(FC_index) - histo_6->GetBinContent(FC_index) + add_noise*hnoise->GetBinContent(PC_index));

      hpred->SetBinContent(FC_index, hmc_obsch_1->GetBinContent(FC_index) );
      hpred->SetBinContent(PC_index, hmc_obsch_2->GetBinContent(FC_index) );
    }
  }


  hcov_tot->Add(hcov_stat);
  if (!just_stat_uncertainty) {
    hcov_tot->Add(hcov_mcstat);
    hcov_tot->Add(hcov_add);
    hcov_tot->Add(hcov_flux);
    hcov_tot->Add(hcov_det);
    hcov_tot->Add(hcov_xs);
  }

  for (Int_t i=0;i!=nbin_meas;i++){
    std::cout << i << " " 
              << sqrt(hcov_tot->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_add->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_flux->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_det->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
	      << sqrt(hcov_xs->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " " 
	      << std::endl;
  }



  // stack plots ...

  TH1F *h10 = new TH1F("h10","h10",nbin_meas,0.5,nbin_meas+0.5); // stat
  TH1F *h20 = new TH1F("h20","h10",nbin_meas,0.5,nbin_meas+0.5); // mcstat
  TH1F *h30 = new TH1F("h30","h10",nbin_meas,0.5,nbin_meas+0.5); // add
  TH1F *h40 = new TH1F("h40","h10",nbin_meas,0.5,nbin_meas+0.5); // det
  TH1F *h50 = new TH1F("h50","h10",nbin_meas,0.5,nbin_meas+0.5); // flux
  TH1F *h60 = new TH1F("h60","h10",nbin_meas,0.5,nbin_meas+0.5); // xs
  TH1F *h70 = new TH1F("h70","h10",nbin_meas,0.5,nbin_meas+0.5); // total

  for (Int_t i=0;i!=nbin_meas;i++){
    // std::cout << i << " " << sqrt(hcov_tot->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_add->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_flux->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_det->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << sqrt(hcov_xs->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1) << " "
    // 	      << std::endl;
    if (hpred->GetBinContent(i+1)!=0){
      h10->SetBinContent(i+1,sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h20->SetBinContent(i+1,sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h30->SetBinContent(i+1,sqrt(hcov_add->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h40->SetBinContent(i+1,sqrt(hcov_flux->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h50->SetBinContent(i+1,sqrt(hcov_det->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h60->SetBinContent(i+1,sqrt(hcov_xs->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
      h70->SetBinContent(i+1,sqrt(hcov_tot->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    }
  }

  if (draw) {
    h70->Draw();
 
    h10->Draw("same"); // stat
    h20->Draw("same"); // mcstat
    h30->Draw("same"); // dirt
    h40->Draw("same"); // flux
    h50->Draw("same"); // det
    h60->Draw("same"); // xs
  }

  h10->SetTitle("Stat, London");
  h20->SetTitle("MCstat, London");
  h30->SetTitle("Dirt, London");
  h40->SetTitle("Flux, London");
  h50->SetTitle("Det, London");
  h60->SetTitle("XS, London");
  h70->SetTitle("London, Relative Uncertainties");
  h70->SetXTitle("Bin no");
  h10->SetLineColor(9);
  h20->SetLineColor(8);
  h30->SetLineColor(3);
  h40->SetLineColor(2);
  h50->SetLineColor(6);
  h60->SetLineColor(4);
  h70->SetLineColor(1);
  h10->SetLineWidth(2);
  h20->SetLineWidth(2);
  h30->SetLineWidth(2);
  h40->SetLineWidth(2);
  h50->SetLineWidth(2);
  h60->SetLineWidth(2);
  h70->SetLineWidth(2);

  h70->GetYaxis()->SetRangeUser(0,1.5);

  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(h70,"Total","l");
  le1->AddEntry(h10,"Stat.","l");
  le1->AddEntry(h20,"MC stat.","l");
  le1->AddEntry(h30,"Dirt","l");
  le1->AddEntry(h40,"Flux","l");
  le1->AddEntry(h50,"Det.","l");
  le1->AddEntry(h60,"Xs","l");
  //le1->Draw();


  if (new_noise) {
    TFile *noise_file = new TFile("noise_file.root","RECREATE");
    hnoise->SetDirectory(noise_file);
    hnoise_collapsed->SetDirectory(noise_file);
    noise_file->Write();
    noise_file->Close();
  }

 TFile *file = new TFile("wiener.root","RECREATE");
 hdata_obsch_1->SetDirectory(file);
 hdata_obsch_2->SetDirectory(file);
 hmc_obsch_1->SetDirectory(file);
 hmc_obsch_2->SetDirectory(file);
 htrue_signal->SetDirectory(file);
 hmeas->SetDirectory(file);
 hpred->SetDirectory(file);
 hR->SetDirectory(file);
 hcov_stat->SetDirectory(file);
 hcov_mcstat->SetDirectory(file);
 hcov_add->SetDirectory(file);
 hcov_det->SetDirectory(file);
 hcov_flux->SetDirectory(file);
 hcov_xs->SetDirectory(file);
 hcov_tot->SetDirectory(file);

 if (!draw) {
   h10->SetDirectory(file);
   h20->SetDirectory(file);
   h30->SetDirectory(file);
   h40->SetDirectory(file);
   h50->SetDirectory(file);
   h60->SetDirectory(file);
   h70->SetDirectory(file);
 }

 file->Write();
 file->Close();

}

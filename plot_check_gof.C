void plot_check_gof(){
  TFile *file1 = new TFile("merge_all.root");
  TMatrixD *cov_mat_add = (TMatrixD*)file1->Get("cov_mat_add");
  TMatrixD *mat_collapse = (TMatrixD*)file1->Get("mat_collapse");
  TH1F **pred = new TH1F*[16];
  for (Int_t i=0;i!=16;i++){
    pred[i] = (TH1F*)file1->Get(Form("histo_%d",i+1));
  }
  TH1F **hdata = new TH1F*[7];
  TH1F **hmc = new TH1F*[7];
  for (Int_t i=0;i!=7;i++){
    hdata[i] = (TH1F*)file1->Get(Form("hdata_obsch_%d",i+1));
    hmc[i] = (TH1F*)file1->Get(Form("hmc_obsch_%d",i+1));
  }
  TMatrixD *mat_collapse_T = new TMatrixD(mat_collapse->GetNcols(),mat_collapse->GetNrows());
  mat_collapse_T->Transpose(*mat_collapse);
  
  // std::cout << mat_collapse->GetNrows() << " " << mat_collapse->GetNcols() << std::endl;
  // std::cout << mat_collapse_T->GetNrows() << " " << mat_collapse_T->GetNcols() << std::endl;
  // std::cout << cov_mat_add->GetNcols() << std::endl;
  
  //check input ...
  TMatrixD *pred_vec = new TMatrixD(cov_mat_add->GetNcols(),1);
  int num = 0;
  for (Int_t i=0;i!=16;i++){
    for (Int_t j=0;j!=pred[i]->GetNbinsX()+1;j++){
      (*pred_vec)(num,0) = pred[i]->GetBinContent(j+1);
      num++;
    }
  }
  TMatrixD pred_obs_vec = (*mat_collapse_T) * (*pred_vec);
  // std::cout << pred_vec->GetNrows() << " " << pred_vec->GetNcols() << std::endl;
  
  TMatrixD data_vec( pred_obs_vec.GetNrows(),1);
  num = 0;
  for (Int_t i=0;i!=7;i++){
    for (Int_t j=0;j!=hdata[i]->GetNbinsX()+1;j++){
      data_vec(num,0) = hdata[i]->GetBinContent(j+1);
      num ++;
    }
  }
  
  // std::cout << pred_obs_vec.GetNrows() << " " << pred_obs_vec.GetNcols() << std::endl;
  
  //  for (Int_t i=0;i!=26;i++){
  //  std::cout << i << " " << hmc[0]->GetBinContent(i+1) << " " << pred_obs_vec(i,0) << " " << (*data_vec)(i,0) << std::endl;
  // }

  // load MC stat covariance matrix ... (at observed space ... )
  TMatrixD *cov_mat_mcstat = new TMatrixD(pred_obs_vec.GetNrows(),pred_obs_vec.GetNrows());
  ifstream infile("mc_stat/0.log");
  double temp,err2;
  infile >> temp >> temp;

  for (Int_t i=0;i!=pred_obs_vec.GetNrows();i++){
    infile >> temp >> temp >> temp >> err2 >> temp;
    (*cov_mat_mcstat)(i,i) = err2;
  }

  cov_mat_mcstat->Draw("COLZ");
  

  TMatrixD *cov_mat_det = new TMatrixD(cov_mat_add->GetNrows(), cov_mat_add->GetNcols());
  //Det variation ...
  TString name[9]={"hist_rootfiles/DetVar/cov_LYDown.root",  //0
		   "hist_rootfiles/DetVar/cov_LYRayleigh.root", // 1
		   "hist_rootfiles/DetVar/cov_Recomb2.root", // 2
		   "hist_rootfiles/DetVar/cov_SCE.root", // 3
		   "hist_rootfiles/DetVar/cov_WMdEdx.root", // 4   not useful
		   "hist_rootfiles/DetVar/cov_WMThetaXZ.root", // 5
		   "hist_rootfiles/DetVar/cov_WMThetaYZ.root", // 6
		   "hist_rootfiles/DetVar/cov_WMX.root",  //7 
		   "hist_rootfiles/DetVar/cov_WMYZ.root"  //8
  };
  for (Int_t i=0;i!=9;i++){
    if(i==4) continue;
    TFile file1(name[i]);
    TMatrixD *frac_cov_det_mat = (TMatrixD*)file1.Get(Form("frac_cov_det_mat_%d",i+1));
    for (Int_t j=0;j!=frac_cov_det_mat->GetNrows();j++){
      for (Int_t k=0;k!=frac_cov_det_mat->GetNcols();k++){
	(*frac_cov_det_mat)(j,k) *= (*pred_vec)(j,0) * (*pred_vec)(k,0);
      }
    }
    (*cov_mat_det) += (*frac_cov_det_mat);
  }

  cov_mat_det->Draw("COLZ");

  TMatrixD *cov_mat_xf = new TMatrixD(cov_mat_add->GetNrows(), cov_mat_add->GetNcols());
  // Xs and Flux covariance matrix ...
  for (Int_t i=0;i!=14;i++){
    TFile file1(Form("hist_rootfiles/XsFlux/cov_%d.root",i+1));
    TMatrixD *frac_cov_xf_mat = (TMatrixD*)file1.Get(Form("frac_cov_xf_mat_%d",i+1));
    for (Int_t j=0;j!=frac_cov_xf_mat->GetNrows();j++){
      for (Int_t k=0;k!=frac_cov_xf_mat->GetNcols();k++){
	(*frac_cov_xf_mat)(j,k) *= (*pred_vec)(j,0) * (*pred_vec)(k,0);
      }
    }
    (*cov_mat_xf) += (*frac_cov_xf_mat);
  }

  cov_mat_xf->Draw("COLZ");

  TMatrixD *cov_mat_tot_before = new TMatrixD(cov_mat_add->GetNrows(), cov_mat_add->GetNcols());
  (*cov_mat_tot_before) += (*cov_mat_xf);
  (*cov_mat_tot_before) += (*cov_mat_det);
  (*cov_mat_tot_before) += (*cov_mat_add); // additional covariance matrix ...

  TMatrixD cov_mat_tot = (*mat_collapse_T) * (*cov_mat_tot_before) * (*mat_collapse);
  cov_mat_tot += (*cov_mat_mcstat); // mc statistical uncertainties ...
  
  cov_mat_tot.Draw("COLZ");


  // add stat term ...
  for    (Int_t i=0;i!=cov_mat_tot.GetNcols();i++){
    double tmp = cov_mat_tot(i,i);
    //    if (i>=104 && i<104+11){
    //  std::cout << i << " " <<cov_mat_tot(i,i) << std::endl;
    // }
    
    if ( cov_mat_tot(i,i)==0 && pred_obs_vec(i,0) ==0){
    // if ( data_vec(i,0)==0 && pred_obs_vec(i,0) ==0){
      for (Int_t j=0;j!=cov_mat_tot.GetNrows();j++){
	cov_mat_tot(j,i) = 0;
	cov_mat_tot(i,j) = 0;
      }
      cov_mat_tot(i,i) = 1e9; // very large uncertainties ...
      std::cout << "Bin: " << i << " not good" << std::endl;
    }else{
      if (pred_obs_vec(i,0)>=0.461 || data_vec(i,0)==0){
	cov_mat_tot(i,i) += pred_obs_vec(i,0); // add stat term ...
      }else{
	//cov_mat_tot(i,i) += pow(pred_obs_vec(i,0) - data_vec(i,0),2)/(2.*(pred_obs_vec(i,0) - data_vec(i,0) + data_vec(i,0) * log(data_vec(i,0)/pred_obs_vec(i,0))));
	cov_mat_tot(i,i) += pred_obs_vec(i,0); // add stat term ...
      }
    }

    // if (i>=104 && i<104+11){
    //   std::cout << i << " " <<cov_mat_tot(i,i) - tmp << std::endl;
    // }
  }

  
  {
    // goodness of numu CC FC, pick a single channel ...
    int offset = 26 + 26  + 26 + 26 ;
    int nbin = 11;
    
    TMatrixD transform(cov_mat_tot.GetNrows(),nbin);
    for (Int_t i = 0; i!= nbin;i++){
      transform(offset+i,i)= 1; //  numu CC FC
    }
    TMatrixD transform_T(nbin,cov_mat_tot.GetNrows());
    transform_T.Transpose(transform);
    TMatrixD cov_temp = transform_T * (cov_mat_tot) * transform;

    
    TMatrixD diff_vec(nbin,1);
    TMatrixD diff_vec_T(1,nbin);
    for (Int_t i=0;i!=nbin;i++){
      diff_vec(i,0) = pred_obs_vec(offset+i,0) - data_vec(offset+i,0);
      diff_vec_T(0,i) = pred_obs_vec(offset+i,0) - data_vec(offset+i,0);
      //std::cout << i << " " << pred_obs_vec(offset+i,0) << " " <<  data_vec(offset+i,0) << " " << diff_vec(i,0) << std::endl;
    }
    TMatrixD cov_temp_invert = cov_temp;
    cov_temp_invert.Invert();
    
    TMatrixD chi2 = diff_vec_T * cov_temp_invert * diff_vec;
    std::cout << chi2(0,0) << std::endl;
    
    cov_temp.Draw("COLZ");
  }

  
  {
    // conditional covariance after numuCC measurements ...
    TMatrixD cov_xx(26+26,26+26);
    TMatrixD cov_yy(26+26+11*3, 26+26+11*3);
    TMatrixD cov_yx(26+26+11*3,26+26);
    TMatrixD cov_xy(26+26,26+26+11*3);
    for (Int_t i=0;i!=52;i++){
      for (Int_t j=0;j!=52;j++){
  	cov_xx(i,j) = cov_mat_tot(52+i,52+j); // numuCC
	cov_yy(i,j) = cov_mat_tot(i,j);  // nueCC

	cov_xy(i,j) = cov_mat_tot(52+i,j); // numu CC -- >nueCC
       	cov_yx(j,i) = cov_mat_tot(j,52+i); // nueCC --> numuCC
      }
      for (Int_t j=0;j!=11*3;j++){
	cov_yy(i,j+52) = cov_mat_tot(i,52+52+j);  // nueCC-> pi0
	cov_yy(j+52,i) = cov_mat_tot(j+52+52,i); // pi0 --> nueCC

	cov_xy(i,52+j) = cov_mat_tot(52+i,52+52+j); //numuCC --> pi0
	cov_yx(52+j,i) = cov_mat_tot(52+52+j,52+i); // pi0 --> numuCC
      }
    }

    for (Int_t i=0;i!=33;i++){
      for (Int_t j=0;j!=33;j++){
	cov_yy(52+i,52+j) = cov_mat_tot(104+i,104+j); // pi0
      }
    }
    TMatrixD cov_xx_inv = cov_xx;
    cov_xx_inv.Invert();
    TMatrixD cov_yy_inv = cov_yy;
    cov_yy_inv.Invert();

    TMatrixD vec_data_cont1(26+26,1);
    TMatrixD vec_data_cont2(26+26+11*3,1);

    TMatrixD vec_pred_cont1(26+26,1);
    TMatrixD vec_pred_cont2(26+26+11*3,1);

    for (Int_t i=0;i!=52;i++){
      vec_data_cont1(i,0) = data_vec(i+52,0);
      vec_pred_cont1(i,0) = pred_obs_vec(i+52,0);
      vec_data_cont2(i,0) = data_vec(i,0);
      vec_pred_cont2(i,0) = pred_obs_vec(i,0);
    }
    for (Int_t i=0;i!=33;i++){
      vec_data_cont2(52+i,0) = data_vec(104+i,0);
      vec_pred_cont2(52+i,0) = pred_obs_vec(104+i,0);
    }
    
    
    TMatrixD vec_after = vec_pred_cont2 + cov_yx * cov_xx_inv * (vec_data_cont1 - vec_pred_cont1);

    // for (Int_t i=0;i!=11;i++){
    //   std::cout << vec_pred_cont2(52+i,0) << " " << cov_yx(52+i,i) << " " << cov_xx_inv(i,i) << " " << vec_data_cont1(i,0) << " " << vec_pred_cont1(i,0) << std::endl;
    // }
    
    
    TMatrixD cov_after = cov_yy - cov_yx  * cov_xx_inv * cov_xy;

    // for (int i=0;i!=11;i++){
    //   std::cout << i << " " << cov_yy(52+i,52+i) << " " << cov_yx(52+i,i) << " " << cov_xx_inv(i,i) << " " << cov_xy(i,52+i) << " " << cov_after(52+i,52+i) << std::endl;
    // }
    
    TMatrixD diff_vec(52+33,1);
    TMatrixD diff_vec_T(1,52+33);

    // numuCC ...
    int nbin = 11;
    int offset = 52;

    for (Int_t i=0;i!=cov_after.GetNrows();i++){
      cov_after(i,i) += vec_after(i,0) - vec_pred_cont2(i,0);
      if (i>=52 && i<52+11)
	//std::cout << cov_after(i,i) << std::endl;
    }
    
    for (Int_t i=0;i!=nbin;i++){
      diff_vec(offset+i,0) = vec_data_cont2(offset+i,0) - vec_after(offset+i,0);
      diff_vec_T(0,offset+i) = vec_data_cont2(offset+i,0) - vec_after(offset+i,0);
      //      std::cout << i << " " << vec_data_cont2(offset+i,0)<< " " << vec_after(offset+i,0) << " " << vec_pred_cont2(offset+i,0) << " " << diff_vec(offset+i,0) << std::endl;
      
    }

    // for (Int_t i=0;i!=52;i++){
    //   for (Int_t j=0;j!=33;j++){
    // 	cov_after(i,j+52) = 0;
    // 	cov_after(j+52,i) = 0;
    //   }
    // }
    // for (Int_t i=0;i!=11;i++){
    //   for (Int_t j=0;j!=22;j++){
    // 	cov_after(52+i,52+11+j) = 0;
    // 	cov_after(52+11+j,52+i) = 0;
    //   }
    // }
    // for (Int_t i=0;i!=cov_after.GetNrows();i++){
    //   if (cov_after(i,i) ==0)  cov_after(i,i) = 1;
    // }
    
    
    TMatrixD cov_after_inv = cov_after;
    cov_after_inv.Invert();

    
    
    TMatrixD chi2 = diff_vec_T * cov_after_inv * diff_vec;
    std::cout << chi2(0,0) << std::endl;
    
  }

  /*  
  // constrainting numu and pi0 ...
  {
     // conditional covariance after numuCC measurements ...
    TMatrixD cov_xx(26+26+33,26+26+33);
    TMatrixD cov_yy(26+26, 26+26);
    TMatrixD cov_yx(26+26,26+26+11*3);
    TMatrixD cov_xy(26+26+11*3,26+26);

    for (Int_t i=0;i!=52;i++){
      for (Int_t j=0;j!=52;j++){
  	cov_xx(i,j) = cov_mat_tot(52+i,52+j); // numuCC
	cov_yy(i,j) = cov_mat_tot(i,j);  // nueCC

	cov_xy(i,j) = cov_mat_tot(52+i,j); // numu CC -- >nueCC
       	cov_yx(j,i) = cov_mat_tot(j,52+i); // nueCC --> numuCC
      }
      for (Int_t j=0;j!=11*3;j++){
	cov_xx(i,j+52) = cov_mat_tot(i,52+52+j);  // nueCC-> pi0
	cov_xx(j+52,i) = cov_mat_tot(j+52+52,i); // pi0 --> nueCC

	cov_xy(52+j,i) = cov_mat_tot(52+52+j,i);
	cov_yx(i,52+j) = cov_mat_tot(i,52+52+j);
      }
    }

    for (Int_t i=0;i!=33;i++){
      for (Int_t j=0;j!=33;j++){
	cov_xx(52+i,52+j) = cov_mat_tot(104+i,104+j); // pi0
      }
    }

    TMatrixD cov_xx_inv = cov_xx;
    cov_xx_inv.Invert();
    TMatrixD cov_yy_inv = cov_yy;
    cov_yy_inv.Invert();

    TMatrixD vec_data_cont1(26+26+11*3,1);
    TMatrixD vec_data_cont2(26+26,1);

    TMatrixD vec_pred_cont1(26+26+11*3,1);
    TMatrixD vec_pred_cont2(26+26,1);

    for (Int_t i=0;i!=52;i++){
      vec_data_cont1(i,0) = data_vec(i+52,0);
      vec_pred_cont1(i,0) = pred_obs_vec(i+52,0);
      vec_data_cont2(i,0) = data_vec(i,0);
      vec_pred_cont2(i,0) = pred_obs_vec(i,0);
    }
    for (Int_t i=0;i!=33;i++){
      vec_data_cont1(52+i,0) = data_vec(104+i,0);
      vec_pred_cont1(52+i,0) = pred_obs_vec(104+i,0);
    }
    
    
    TMatrixD vec_after = vec_pred_cont2 + cov_yx * cov_xx_inv * (vec_data_cont1 - vec_pred_cont1);

    TMatrixD cov_after = cov_yy - cov_yx  * cov_xx_inv * cov_xy;

    TMatrixD diff_vec(52+33,1);
    TMatrixD diff_vec_T(1,52+33);
    for (Int_t i=0;i!=11;i++){
      diff_vec(52+i,0) = vec_data_cont2(52+i,0) - vec_after(52+i,0);
      diff_vec_T(0,52+i) = vec_data_cont2(52+i,0) - vec_after(52+i,0);
    }
    TMatrixD cov_after_inv = cov_after;
    cov_after_inv.Invert();
    
    TMatrixD chi2 = diff_vec_T * cov_after_inv * diff_vec;
    std::cout << chi2(0,0) << std::endl;
  }
  */  
  
}

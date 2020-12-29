void plot_check_stat(){
  TFile *file1 = new TFile("hist_rootfiles/run_data_stat.root");
  TFile *file2 = new TFile("hist_rootfiles/run_pred_stat.root");
  TFile *file3 = new TFile("merge.root");

  TVectorD *vec_mean_1 = (TVectorD*)file1->Get("vec_mean_0");
  TVectorD *vec_mean_2 = (TVectorD*)file2->Get("vec_mean_0");
  TMatrixD *cov_mat_1 = (TMatrixD*)file1->Get("cov_mat_0");
  TMatrixD *cov_mat_2 = (TMatrixD*)file2->Get("cov_mat_0");
  
  TH1F *h10 = new TH1F("h10","h10",vec_mean_1->GetNoElements(),-0.5,vec_mean_1->GetNoElements()-0.5);
  TH1F *h20 = (TH1F*)h10->Clone("h20");
  TH1F *h30 = (TH1F*)h10->Clone("h30");
  TH1F *h40 = (TH1F*)h10->Clone("h40");
  TH1F *h50 = (TH1F*)h10->Clone("h50");

  for (Int_t i = 0; i!= vec_mean_1->GetNoElements(); i++){
    h10->SetBinContent(i+1,(*vec_mean_1)(i));
    h20->SetBinContent(i+1,(*vec_mean_2)(i));
    h40->SetBinContent(i+1,(*cov_mat_1)(i,i));
    h50->SetBinContent(i+1,(*cov_mat_2)(i,i));
  }
  int noff = 0;
  TH1F *h1 = (TH1F*)file3->Get("hmc_obsch_1");
  TH1F *h2 = (TH1F*)file3->Get("hmc_obsch_2");
  TH1F *h3 = (TH1F*)file3->Get("hmc_obsch_3");
  TH1F *h4 = (TH1F*)file3->Get("hmc_obsch_4");
  TH1F *h5 = (TH1F*)file3->Get("hmc_obsch_5");
  TH1F *h6 = (TH1F*)file3->Get("hmc_obsch_6");

  for (Int_t i=0;i!=h1->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h1->GetBinContent(i+1));
  }
  noff += h1->GetNbinsX()+1;
  for (Int_t i=0;i!=h2->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h2->GetBinContent(i+1));
  }
  noff += h2->GetNbinsX()+1;
  for (Int_t i=0;i!=h3->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h3->GetBinContent(i+1));
  }
  noff += h3->GetNbinsX()+1;
  for (Int_t i=0;i!=h4->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h4->GetBinContent(i+1));
  }
  noff += h4->GetNbinsX()+1;
  for (Int_t i=0;i!=h5->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h5->GetBinContent(i+1));
  }
  noff += h5->GetNbinsX()+1;
  for (Int_t i=0;i!=h6->GetNbinsX()+1;i++){
    h30->SetBinContent(noff+i+1,h6->GetBinContent(i+1));
  }


  
  h10->Draw();
  h10->SetLineColor(1);
  h20->Draw("same");
  h20->SetLineColor(2);
  h30->Draw("same");
  h30->SetLineColor(6);
  h40->Draw("same");
  h40->SetLineColor(4);
  h40->SetLineStyle(2);

  h50->Draw("same");
  h50->SetLineColor(2);
  h50->SetLineStyle(2);

  std::cout << h50->GetSum() / h30->GetSum() << std::endl;
}

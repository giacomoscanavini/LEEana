void plot_check_det(){
  TFile **file = new TFile*[9];
  
  file[0] = new TFile("hist_rootfiles/DetVar/cov_LYDown.root"); //1
  file[5] = new TFile("hist_rootfiles/DetVar/cov_WMThetaXZ.root");  //6
  file[1] = new TFile("hist_rootfiles/DetVar/cov_LYRayleigh.root"); //2
  file[6] = new TFile("hist_rootfiles/DetVar/cov_WMThetaYZ.root");  //7
  file[2] = new TFile("hist_rootfiles/DetVar/cov_Recomb2.root"); //3
  file[7] = new TFile("hist_rootfiles/DetVar/cov_WMX.root");  //8
  file[3] = new TFile("hist_rootfiles/DetVar/cov_SCE.root");  //4
  file[8] = new TFile("hist_rootfiles/DetVar/cov_WMYZ.root");  //9
  file[4] = new TFile("hist_rootfiles/DetVar/cov_WMdEdx.root"); //5

  TH1F **h1 = new TH1F*[9];
  TH1F **h2 = new TH1F*[9];
  for (Int_t i=0;i!=9;i++){
    h1[i] = (TH1F*)file[i]->Get("pred_covch_4");
    h2[i] = (TH1F*)file[i]->Get("pred_covch_1");
  }
  

  TCanvas *c1 = new TCanvas("c1","c1",1200,800);
  c1->Divide(3,2);
  c1->cd(1);
  h1[0]->Draw("");  h1[0]->SetLineColor(1);
    
  for (Int_t i=1;i!=9;i++){
    h1[i]->SetLineColor(i+1);
    h1[i]->Draw("histsame");
  }

  c1->cd(2);
  h2[0]->Draw("");  h2[0]->SetLineColor(1);
    
  for (Int_t i=1;i!=9;i++){
    h2[i]->SetLineColor(i+1);
    h2[i]->Draw("histsame");
  }

  c1->cd(3);
  TGraph **g1 = new TGraph*[9];
  TMatrixD** frac_mat = new TMatrixD*[9];
  for(Int_t i=0;i!=9;i++){
    frac_mat[i] = (TMatrixD*)file[i]->Get(Form("frac_cov_det_mat_%d",i+1));
    g1[i] = new TGraph();
    for (Int_t j=0;j!=frac_mat[i]->GetNcols();j++){
      g1[i]->SetPoint(j,j,sqrt((*frac_mat[i])(j,j)));
    }
  }

  g1[0]->Draw("A*");
  g1[0]->SetLineColor(1);
  g1[0]->SetMarkerColor(1);
  g1[0]->SetMarkerStyle(20);
   for (Int_t i=1;i!=9;i++){
     g1[i]->Draw("*same");
     g1[i]->SetLineColor(i+1);
     g1[i]->SetMarkerColor(i+1);
     g1[i]->SetMarkerStyle(20);

  }

   c1->cd(4);
   TLegend *le1 = new TLegend(0.1,0.1,0.89,0.89);
   le1->AddEntry(g1[0],"LYDown","pl");
   le1->AddEntry(g1[1],"LYRayleigh","pl");
   le1->AddEntry(g1[2],"Recomb2","pl");
   le1->AddEntry(g1[3],"SCE","pl");
   le1->AddEntry(g1[4],"WMdEdx","pl");
   le1->AddEntry(g1[5],"WMThetaXZ","pl");
   le1->AddEntry(g1[6],"WMThetaYZ","pl");
   le1->AddEntry(g1[7],"WMX","pl");
   le1->AddEntry(g1[8],"WMYZ","pl");
   le1->Draw();
  
  
}

void compare_truth_uncertainties(){

  TFile *file_wiener  = new TFile("wiener.root");
  TH2D *hcov_stat     = (TH2D*)file_wiener->Get("hcov_stat");
  TH2D *hcov_mcstat   = (TH2D*)file_wiener->Get("hcov_mcstat");
  TH2D *hcov_add      = (TH2D*)file_wiener->Get("hcov_add");
  TH2D *hcov_flux     = (TH2D*)file_wiener->Get("hcov_flux");
  TH2D *hcov_det      = (TH2D*)file_wiener->Get("hcov_det");
  TH2D *hcov_xs       = (TH2D*)file_wiener->Get("hcov_xs");
  TH2D *hcov_tot      = (TH2D*)file_wiener->Get("hcov_tot");

  TFile* file_output  = new TFile("output.root");
  TMatrixD* covRotation   = (TMatrixD*)file_output->Get("covRotation");
  TMatrixD* covRotation_t = (TMatrixD*)file_output->Get("covRotation_t");
  TH1D* unf               = (TH1D*)file_output->Get("unf");

  int n = hcov_tot->GetNbinsX();	//row,column = 288 x 288
  int m = covRotation->GetNrows();	//row,column = 36  x 288
  TMatrixD mcov_stat(n,n);
  TMatrixD mcov_mcstat(n,n);
  TMatrixD mcov_add(n,n);
  TMatrixD mcov_flux(n,n);
  TMatrixD mcov_det(n,n);
  TMatrixD mcov_xs(n,n);
  TMatrixD mcov_tot(n,n);

  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      mcov_stat(i,j)   = hcov_stat->GetBinContent(  i+1,j+1);
      mcov_mcstat(i,j) = hcov_mcstat->GetBinContent(i+1,j+1);
      mcov_add(i,j)    = hcov_add->GetBinContent(   i+1,j+1);
      mcov_flux(i,j)   = hcov_flux->GetBinContent(  i+1,j+1);
      mcov_det(i,j)    = hcov_det->GetBinContent(   i+1,j+1);
      mcov_xs(i,j)     = hcov_xs->GetBinContent(    i+1,j+1);
      mcov_tot(i,j)    = hcov_tot->GetBinContent(   i+1,j+1);
    }
  }

  std::cout << "cR     r,c = " << covRotation->GetNrows()   << ", " << covRotation->GetNcols() << std::endl;
  std::cout << "cR_t   r,c = " << covRotation_t->GetNrows() << ", " << covRotation_t->GetNcols() << std::endl;
  std::cout << "c_stat r,c = " << mcov_stat.GetNrows()     << ", " << mcov_stat.GetNcols() << std::endl;

  TMatrixD mcov_stat_rot   = (*covRotation) * mcov_stat   * (*covRotation_t);
  TMatrixD mcov_mcstat_rot = (*covRotation) * mcov_mcstat * (*covRotation_t);
  TMatrixD mcov_add_rot    = (*covRotation) * mcov_add    * (*covRotation_t);
  TMatrixD mcov_flux_rot   = (*covRotation) * mcov_flux   * (*covRotation_t);
  TMatrixD mcov_det_rot    = (*covRotation) * mcov_det    * (*covRotation_t);
  TMatrixD mcov_xs_rot     = (*covRotation) * mcov_xs     * (*covRotation_t);
  TMatrixD mcov_tot_rot    = (*covRotation) * mcov_tot    * (*covRotation_t);


  TH1D* herr_abs_stat    = new TH1D("herr_abs_stat",  "herr_abs_stat",  m,0.5,m+0.5);
  TH1D* herr_abs_mcstat  = new TH1D("herr_abs_mcstat","herr_abs_mcstat",m,0.5,m+0.5);
  TH1D* herr_abs_add     = new TH1D("herr_abs_add",   "herr_abs_add",   m,0.5,m+0.5);
  TH1D* herr_abs_flux    = new TH1D("herr_abs_flux",  "herr_abs_flux",  m,0.5,m+0.5);
  TH1D* herr_abs_det     = new TH1D("herr_abs_det",   "herr_abs_det",   m,0.5,m+0.5);
  TH1D* herr_abs_xs      = new TH1D("herr_abs_xs",    "herr_abs_xs",    m,0.5,m+0.5);
  TH1D* herr_abs_tot     = new TH1D("herr_abs_tot",   "herr_abs_tot",   m,0.5,m+0.5);

  TH1D* herr_frac_stat   = new TH1D("herr_frac_stat",  "herr_frac_stat",  m,0.5,m+0.5);
  TH1D* herr_frac_mcstat = new TH1D("herr_frac_mcstat","herr_frac_mcstat",m,0.5,m+0.5);
  TH1D* herr_frac_add    = new TH1D("herr_frac_add",   "herr_frac_add",   m,0.5,m+0.5);
  TH1D* herr_frac_flux   = new TH1D("herr_frac_flux",  "herr_frac_flux",  m,0.5,m+0.5);
  TH1D* herr_frac_det    = new TH1D("herr_frac_det",   "herr_frac_det",   m,0.5,m+0.5);
  TH1D* herr_frac_xs     = new TH1D("herr_frac_xs",    "herr_frac_xs",    m,0.5,m+0.5);
  TH1D* herr_frac_tot    = new TH1D("herr_frac_tot",   "herr_frac_tot",   m,0.5,m+0.5);


  std::cout << "\nFractional Uncertainties -------------------------------------------- " << std::endl;
  for (int i=0;i<m;i++) {
    herr_abs_stat->SetBinContent(  i+1, TMath::Sqrt(mcov_stat_rot(  i,i)) );
    herr_abs_mcstat->SetBinContent(i+1, TMath::Sqrt(mcov_mcstat_rot(i,i)) );
    herr_abs_add->SetBinContent(   i+1, TMath::Sqrt(mcov_add_rot(   i,i)) );
    herr_abs_flux->SetBinContent(  i+1, TMath::Sqrt(mcov_flux_rot(  i,i)) );
    herr_abs_det->SetBinContent(   i+1, TMath::Sqrt(mcov_det_rot(   i,i)) );
    herr_abs_xs->SetBinContent(    i+1, TMath::Sqrt(mcov_xs_rot(    i,i)) );
    herr_abs_tot->SetBinContent(   i+1, TMath::Sqrt(mcov_tot_rot(   i,i)) );

    std::cout << "--- BIN " << i+1 << "(/" << m <<") --------- " << std::endl;
    double content = unf->GetBinContent(i+1);
    std::cout << "CV = " << content << " [10e-36 cm^2/Ar]" << std::endl;
    
    double value = TMath::Sqrt(mcov_stat_rot(  i,i)) / content;
    herr_frac_stat->SetBinContent(  i+1, value );
    std::cout << "frac_err_stat = " << value << std::endl; // << " (abs = " << value*content << ")" << std::endl;

    value = TMath::Sqrt(mcov_mcstat_rot(i,i)) / content ;
    herr_frac_mcstat->SetBinContent(i+1, value );
    std::cout << "frac_err_mcstat = " << value << std::endl; // << " (abs = " << value*content << ")" << std::endl;
    
    value = TMath::Sqrt(mcov_add_rot(   i,i)) / content;    
    herr_frac_add->SetBinContent(   i+1, value );
    std::cout << "frac_err_dirt = " << value << std::endl; // << " (abs = " << value*content << ")" << std::endl;
    
    value = TMath::Sqrt(mcov_flux_rot(  i,i)) / content;  
    herr_frac_flux->SetBinContent(  i+1, value );
    std::cout << "frac_err_flux = " << value << std::endl; // << " (abs = " << value*content << ")" << std::endl;
    
    value = TMath::Sqrt(mcov_det_rot(   i,i)) / content;  
    herr_frac_det->SetBinContent(   i+1, value );
    std::cout << "frac_err_det = " << value << std::endl; // << "  (abs = " << value*content << ")" << std::endl;
    
    value = TMath::Sqrt(mcov_xs_rot(    i,i)) / content;  
    herr_frac_xs->SetBinContent(    i+1, value );
    std::cout << "frac_err_xs = " << value << std::endl; // << " (abs = " << value*content << ")" << std::endl;
    
    value = TMath::Sqrt(mcov_tot_rot(   i,i)) / content;  
    herr_frac_tot->SetBinContent(   i+1, value );
    std::cout << "frac_err_tot = " << value << std::endl; // << "  (abs = " << value*content << ")" << std::endl;
  }
  std::cout << "--------------------- THE END ----------------------- \n" << std::endl;

  TCanvas* c1 = new TCanvas("c1","c1");
  c1->cd();

  herr_abs_stat->SetTitle("Stat");
  herr_abs_mcstat->SetTitle("MCstat");
  herr_abs_add->SetTitle("Dirt");
  herr_abs_flux->SetTitle("Flux");
  herr_abs_det->SetTitle("Det");
  herr_abs_xs->SetTitle("XS");
  if(m == 1){
    herr_abs_tot->SetTitle("Absolute Uncertainties");
  }
  else herr_abs_tot->SetTitle("Unfolded Absolute Uncertainties");
  herr_abs_tot->SetXTitle("Bin no");

  herr_abs_stat->SetLineColor(9);
  herr_abs_mcstat->SetLineColor(8);
  herr_abs_add->SetLineColor(3);
  herr_abs_flux->SetLineColor(2);
  herr_abs_det->SetLineColor(6);
  herr_abs_xs->SetLineColor(4);
  herr_abs_tot->SetLineColor(1);

  herr_abs_stat->SetLineWidth(2);
  herr_abs_mcstat->SetLineWidth(2);
  herr_abs_add->SetLineWidth(2);
  herr_abs_flux->SetLineWidth(2);
  herr_abs_det->SetLineWidth(2);
  herr_abs_xs->SetLineWidth(2);
  herr_abs_tot->SetLineWidth(2);

  //herr_abs_tot->GetYaxis()->SetRangeUser(0,0.5);

  herr_abs_tot->Draw();
  herr_abs_stat->Draw("same");
  herr_abs_mcstat->Draw("same");
  herr_abs_add->Draw("same");
  herr_abs_flux->Draw("same");
  herr_abs_det->Draw("same");
  herr_abs_xs->Draw("same");
  herr_abs_tot->Draw("same");		//force it to plot on top

  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(herr_abs_stat,"Stat.","l");
  le1->AddEntry(herr_abs_mcstat,"MC stat.","l");
  le1->AddEntry(herr_abs_add,"Dirt","l");
  le1->AddEntry(herr_abs_flux,"Flux","l");
  le1->AddEntry(herr_abs_det,"Det.","l");
  le1->AddEntry(herr_abs_xs,"Xs","l");
  le1->AddEntry(herr_abs_tot,"Total","l");
  le1->Draw();


  TCanvas* c2 = new TCanvas("c2","c2");
  c2->cd();

  herr_frac_stat->SetTitle("Stat");
  herr_frac_mcstat->SetTitle("MCstat");
  herr_frac_add->SetTitle("Dirt");
  herr_frac_flux->SetTitle("Flux");
  herr_frac_det->SetTitle("Det");
  herr_frac_xs->SetTitle("XS");
  if(m == 1){
    herr_frac_tot->SetTitle("Fractional Uncertainties");
  }
  else herr_frac_tot->SetTitle("Unfolded Fractional Uncertainties");
  herr_frac_tot->SetXTitle("Bin #");

  herr_frac_tot->GetXaxis()->SetLabelSize(0.04);
  herr_frac_tot->GetYaxis()->SetLabelSize(0.04);
  herr_frac_tot->GetXaxis()->SetTitleSize(0.04);
  herr_frac_tot->GetYaxis()->SetTitleSize(0.04);

  herr_frac_stat->SetLineColor(9);
  herr_frac_mcstat->SetLineColor(8);
  herr_frac_add->SetLineColor(3);
  herr_frac_flux->SetLineColor(2);
  herr_frac_det->SetLineColor(6);
  herr_frac_xs->SetLineColor(4);
  herr_frac_tot->SetLineColor(1);

  herr_frac_stat->SetLineWidth(2);
  herr_frac_mcstat->SetLineWidth(2);
  herr_frac_add->SetLineWidth(2);
  herr_frac_flux->SetLineWidth(2);
  herr_frac_det->SetLineWidth(2);
  herr_frac_xs->SetLineWidth(2);
  herr_frac_tot->SetLineWidth(2);


  herr_frac_tot->GetYaxis()->SetRangeUser(0,1);

  herr_frac_tot->Draw();
  herr_frac_stat->Draw("same");
  herr_frac_mcstat->Draw("same");
  herr_frac_add->Draw("same");
  herr_frac_flux->Draw("same");
  herr_frac_det->Draw("same");
  herr_frac_xs->Draw("same");
  herr_frac_tot->Draw("same");		//force it to plot on top

  TLegend *le2 = new TLegend(0.6,0.6,0.89,0.89);
  le2->AddEntry(herr_frac_stat,"Stat.","l");
  le2->AddEntry(herr_frac_mcstat,"MC stat.","l");
  le2->AddEntry(herr_frac_add,"Dirt","l");
  le2->AddEntry(herr_frac_flux,"Flux","l");
  le2->AddEntry(herr_frac_det,"Det.","l");
  le2->AddEntry(herr_frac_xs,"Xs","l");
  le2->AddEntry(herr_frac_tot,"Total","l");
  le2->Draw();


}






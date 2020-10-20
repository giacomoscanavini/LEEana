void compare_weights(){
  TFile *file1 = new TFile("merge_all_new_weights.root");
  TFile *file2 = new TFile("merge_all.root");

  TH1F *he1 = (TH1F*)file1->Get("histo_1");
  TH1F *hm1 = (TH1F*)file1->Get("histo_3");

  TH1F *he2 = (TH1F*)file2->Get("histo_1");
  TH1F *hm2 = (TH1F*)file2->Get("histo_3");

  TCanvas *c1 = new TCanvas("c1","c1",1200,600);
  c1->Divide(2,1);
  c1->cd(1);
  he1->Draw();
  he2->SetLineColor(2);
  he2->Draw("same");
  c1->cd(2);
  hm1->Draw();
  hm2->SetLineColor(2);
  hm2->Draw("same");
  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(hm1,"new weight","l");
  le1->AddEntry(hm2,"old weight","l");
  le1->Draw();

  std::cout << he1->Integral(0,6) << " " << he2->Integral(0,6) << std::endl;
}

void numuCC_xs_1bin_Enu()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 27 00:38:56 2022) by ROOT version 6.24/02
   TCanvas *c1 = new TCanvas("c1", "c1",190,213,1000,700);
   gStyle->SetOptStat(0);
   c1->Range(-0.5475,-0.125,4.9275,1.125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3001[1] = {
   0.831634};
   Double_t Graph0_fy3001[1] = {
   0.3459375};
   Double_t Graph0_felx3001[1] = {
   0.631634};
   Double_t Graph0_fely3001[1] = {
   0.02407245};
   Double_t Graph0_fehx3001[1] = {
   3.168366};
   Double_t Graph0_fehy3001[1] = {
   0.02407245};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineColor(4);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","",100,0,4.38);
   Graph_Graph03001->SetMinimum(0);
   Graph_Graph03001->SetMaximum(1);
   Graph_Graph03001->SetDirectory(0);
   Graph_Graph03001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph03001->SetLineColor(ci);
   Graph_Graph03001->GetXaxis()->SetTitle("E_{#nu} [GeV]");
   Graph_Graph03001->GetXaxis()->SetRange(1,100);
   Graph_Graph03001->GetXaxis()->SetNdivisions(506);
   Graph_Graph03001->GetXaxis()->SetLabelFont(42);
   Graph_Graph03001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph03001->GetXaxis()->SetTitleFont(42);
   Graph_Graph03001->GetYaxis()->SetTitle("#sigma_{CC} (#times 10^{-36} cm^{2} / Ar)");
   Graph_Graph03001->GetYaxis()->SetNdivisions(506);
   Graph_Graph03001->GetYaxis()->SetLabelFont(42);
   Graph_Graph03001->GetYaxis()->SetTitleFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelFont(42);
   Graph_Graph03001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03001);
   
   grae->Draw("ap");
   
   Double_t Graph1_fx1[1] = {
   0.831634};
   Double_t Graph1_fy1[1] = {
   0.3606955};
   TGraph *graph = new TGraph(1,Graph1_fx1,Graph1_fy1);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.731634,1.931634);
   Graph_Graph11->SetMinimum(0.2606955);
   Graph_Graph11->SetMaximum(1.460695);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetNdivisions(506);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetNdivisions(506);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("pl");
   
   Double_t Graph2_fx2[1] = {
   0.831634};
   Double_t Graph2_fy2[1] = {
   0.2737202};
   graph = new TGraph(1,Graph2_fx2,Graph2_fy2);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,0.731634,1.931634);
   Graph_Graph22->SetMinimum(0.1737202);
   Graph_Graph22->SetMaximum(1.37372);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetNdivisions(506);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetNdivisions(506);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("pl");
   
   Double_t Graph3_fx3[1] = {
   0.831634};
   Double_t Graph3_fy3[1] = {
   0.3133551};
   graph = new TGraph(1,Graph3_fx3,Graph3_fy3);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Graph",100,0.731634,1.931634);
   Graph_Graph33->SetMinimum(0.2133551);
   Graph_Graph33->SetMaximum(1.413355);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33->SetLineColor(ci);
   Graph_Graph33->GetXaxis()->SetNdivisions(506);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph33->GetXaxis()->SetTitleOffset(1);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetNdivisions(506);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetTitleOffset(1);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph33);
   
   graph->Draw("l");
   
   TLegend *leg = new TLegend(0.55,0.15,0.89,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Unfolded Xsec","lpe");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextColor(4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","GENIE v2, #chi^{2}/dof=0.4/1","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","GENIE v3, #chi^{2}/dof=9.0/1","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","MC Truth, #chi^{2}/ndf: 1.8/1","l");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

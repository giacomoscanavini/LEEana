void numuCC_xsDelta_2bin_Enu()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 27 00:46:25 2022) by ROOT version 6.24/02
   TCanvas *c1 = new TCanvas("c1", "c1",138,161,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-0.51465,-0.225,4.63185,2.025);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3001[2] = {
   0.8289064,
   2.591052};
   Double_t Graph0_fy3001[2] = {
   1.103247,
   0.6197136};
   Double_t Graph0_felx3001[2] = {
   0.6289064,
   0.5910524};
   Double_t Graph0_fely3001[2] = {
   0.07600761,
   0.1714762};
   Double_t Graph0_fehx3001[2] = {
   1.171094,
   1.408948};
   Double_t Graph0_fehy3001[2] = {
   0.07600761,
   0.1714762};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineColor(4);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","",100,0,4.38);
   Graph_Graph03001->SetMinimum(0);
   Graph_Graph03001->SetMaximum(1.8);
   Graph_Graph03001->SetDirectory(0);
   Graph_Graph03001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph03001->SetLineColor(ci);
   Graph_Graph03001->GetXaxis()->SetTitle("E_{#nu} [GeV]");
   Graph_Graph03001->GetXaxis()->SetRange(1,94);
   Graph_Graph03001->GetXaxis()->SetNdivisions(506);
   Graph_Graph03001->GetXaxis()->SetLabelFont(42);
   Graph_Graph03001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph03001->GetXaxis()->SetTitleFont(42);
   Graph_Graph03001->GetYaxis()->SetTitle("#sigma_{CC} (#times 10^{-38} cm^{2} / GeV / nucleon)");
   Graph_Graph03001->GetYaxis()->SetNdivisions(506);
   Graph_Graph03001->GetYaxis()->SetLabelFont(42);
   Graph_Graph03001->GetYaxis()->SetTitleFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelFont(42);
   Graph_Graph03001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03001);
   
   grae->Draw("ap");
   
   Double_t Graph1_fx1[2] = {
   0.8289064,
   2.591052};
   Double_t Graph1_fy1[2] = {
   1.150811,
   0.8391278};
   TGraph *graph = new TGraph(2,Graph1_fx1,Graph1_fy1);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.6526918,2.767267);
   Graph_Graph11->SetMinimum(0.8079595);
   Graph_Graph11->SetMaximum(1.181979);
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
   
   Double_t Graph2_fx2[2] = {
   0.8289064,
   2.591052};
   Double_t Graph2_fy2[2] = {
   0.8831396,
   0.752866};
   graph = new TGraph(2,Graph2_fx2,Graph2_fy2);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,0.6526918,2.767267);
   Graph_Graph22->SetMinimum(0.7398387);
   Graph_Graph22->SetMaximum(0.896167);
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
   
   Double_t Graph3_fx3[2] = {
   0.8289064,
   2.591052};
   Double_t Graph3_fy3[2] = {
   0.9784469,
   0.811844};
   graph = new TGraph(2,Graph3_fx3,Graph3_fy3);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Graph",100,0.6526918,2.767267);
   Graph_Graph33->SetMinimum(0.7951837);
   Graph_Graph33->SetMaximum(0.9951072);
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
   
   Double_t Graph4_fx3002[1] = {
   0.8};
   Double_t Graph4_fy3002[1] = {
   0.86625};
   Double_t Graph4_felx3002[1] = {
   0.6};
   Double_t Graph4_fely3002[1] = {
   0.20625};
   Double_t Graph4_fehx3002[1] = {
   1.2};
   Double_t Graph4_fehy3002[1] = {
   0.20625};
   grae = new TGraphAsymmErrors(1,Graph4_fx3002,Graph4_fy3002,Graph4_felx3002,Graph4_fehx3002,Graph4_fely3002,Graph4_fehy3002);
   grae->SetName("Graph4");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetLineColor(2);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph43002 = new TH1F("Graph_Graph43002","Graph",100,0.02,2.18);
   Graph_Graph43002->SetMinimum(0.61875);
   Graph_Graph43002->SetMaximum(1.11375);
   Graph_Graph43002->SetDirectory(0);
   Graph_Graph43002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43002->SetLineColor(ci);
   Graph_Graph43002->GetXaxis()->SetNdivisions(506);
   Graph_Graph43002->GetXaxis()->SetLabelFont(42);
   Graph_Graph43002->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph43002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph43002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph43002->GetXaxis()->SetTitleFont(42);
   Graph_Graph43002->GetYaxis()->SetNdivisions(506);
   Graph_Graph43002->GetYaxis()->SetLabelFont(42);
   Graph_Graph43002->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph43002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph43002->GetYaxis()->SetTitleFont(42);
   Graph_Graph43002->GetZaxis()->SetLabelFont(42);
   Graph_Graph43002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph43002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph43002);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.55,0.15,0.89,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","GENIE v2, #chi^{2}/dof=1.8/2","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","GENIE v3, #chi^{2}/dof=10.5/2","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#muB Tuned, #chi^{2}/dof=5.0/2","l");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","MCC8","lpe");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","BNB","lpe");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextColor(4);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

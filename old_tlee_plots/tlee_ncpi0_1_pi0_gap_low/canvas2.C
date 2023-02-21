#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 21:57:08 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-15.06,56.41026,1665.319);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetLeftMargin(0.12);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__4->SetBinContent(1,725.2686);
   hmc__4->SetBinContent(2,199.6098);
   hmc__4->SetBinContent(3,224.5163);
   hmc__4->SetBinContent(4,236.5729);
   hmc__4->SetBinContent(5,239.0171);
   hmc__4->SetBinContent(6,224.3609);
   hmc__4->SetBinContent(7,232.3543);
   hmc__4->SetBinContent(8,218.1828);
   hmc__4->SetBinContent(9,210.3446);
   hmc__4->SetBinContent(10,202.319);
   hmc__4->SetBinContent(11,175.0289);
   hmc__4->SetBinContent(12,167.7025);
   hmc__4->SetBinContent(13,146.9999);
   hmc__4->SetBinContent(14,156.4406);
   hmc__4->SetBinContent(15,139.4989);
   hmc__4->SetBinContent(16,117.6304);
   hmc__4->SetBinContent(17,111.3884);
   hmc__4->SetBinContent(18,106.0471);
   hmc__4->SetBinContent(19,96.2136);
   hmc__4->SetBinContent(20,92.02351);
   hmc__4->SetBinContent(21,1163.432);
   hmc__4->SetBinError(1,175.8442);
   hmc__4->SetBinError(2,71.27791);
   hmc__4->SetBinError(3,71.02106);
   hmc__4->SetBinError(4,70.71265);
   hmc__4->SetBinError(5,73.53275);
   hmc__4->SetBinError(6,71.67885);
   hmc__4->SetBinError(7,70.22172);
   hmc__4->SetBinError(8,65.31351);
   hmc__4->SetBinError(9,60.75253);
   hmc__4->SetBinError(10,62.42976);
   hmc__4->SetBinError(11,54.88264);
   hmc__4->SetBinError(12,58.39604);
   hmc__4->SetBinError(13,44.33437);
   hmc__4->SetBinError(14,43.4325);
   hmc__4->SetBinError(15,40.71518);
   hmc__4->SetBinError(16,38.05803);
   hmc__4->SetBinError(17,33.59702);
   hmc__4->SetBinError(18,30.33066);
   hmc__4->SetBinError(19,29.11142);
   hmc__4->SetBinError(20,29.21057);
   hmc__4->SetBinError(21,270.3365);
   hmc__4->SetMinimum(-15.06);
   hmc__4->SetMaximum(1581.3);
   hmc__4->SetEntries(5727.925);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,50);
   hs2_stack_2->SetMinimum(-1.683776e-08);
   hs2_stack_2->SetMaximum(761.5321);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,18.86082);
   hbadmatch_stack_1->SetBinContent(2,2.127331);
   hbadmatch_stack_1->SetBinContent(3,1.731349);
   hbadmatch_stack_1->SetBinContent(4,5.230434);
   hbadmatch_stack_1->SetBinContent(5,4.391488);
   hbadmatch_stack_1->SetBinContent(6,6.66551);
   hbadmatch_stack_1->SetBinContent(7,3.7462);
   hbadmatch_stack_1->SetBinContent(8,1.316646);
   hbadmatch_stack_1->SetBinContent(9,4.845433);
   hbadmatch_stack_1->SetBinContent(10,3.42322);
   hbadmatch_stack_1->SetBinContent(11,2.601859);
   hbadmatch_stack_1->SetBinContent(12,4.160922);
   hbadmatch_stack_1->SetBinContent(13,1.808302);
   hbadmatch_stack_1->SetBinContent(14,2.066877);
   hbadmatch_stack_1->SetBinContent(15,4.942914);
   hbadmatch_stack_1->SetBinContent(16,2.140519);
   hbadmatch_stack_1->SetBinContent(17,3.545031);
   hbadmatch_stack_1->SetBinContent(18,1.785533);
   hbadmatch_stack_1->SetBinContent(19,2.074717);
   hbadmatch_stack_1->SetBinContent(20,1.801068);
   hbadmatch_stack_1->SetBinContent(21,40.16475);
   hbadmatch_stack_1->SetBinError(1,2.379832);
   hbadmatch_stack_1->SetBinError(2,0.6272497);
   hbadmatch_stack_1->SetBinError(3,0.7008344);
   hbadmatch_stack_1->SetBinError(4,1.132971);
   hbadmatch_stack_1->SetBinError(5,1.402689);
   hbadmatch_stack_1->SetBinError(6,2.206943);
   hbadmatch_stack_1->SetBinError(7,1.208267);
   hbadmatch_stack_1->SetBinError(8,0.5535712);
   hbadmatch_stack_1->SetBinError(9,1.168912);
   hbadmatch_stack_1->SetBinError(10,0.9150906);
   hbadmatch_stack_1->SetBinError(11,0.8501068);
   hbadmatch_stack_1->SetBinError(12,1.289542);
   hbadmatch_stack_1->SetBinError(13,0.7325792);
   hbadmatch_stack_1->SetBinError(14,0.8142184);
   hbadmatch_stack_1->SetBinError(15,1.905266);
   hbadmatch_stack_1->SetBinError(16,0.6700639);
   hbadmatch_stack_1->SetBinError(17,1.073587);
   hbadmatch_stack_1->SetBinError(18,0.7198911);
   hbadmatch_stack_1->SetBinError(19,0.6364876);
   hbadmatch_stack_1->SetBinError(20,0.6245647);
   hbadmatch_stack_1->SetBinError(21,3.740759);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
   color = new TColor(ci, 1, 0.2, 0.2, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#ff3333");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,68.63171);
   hext_stack_2->SetBinContent(2,12.06941);
   hext_stack_2->SetBinContent(3,12.62882);
   hext_stack_2->SetBinContent(4,22.14053);
   hext_stack_2->SetBinContent(5,15.00775);
   hext_stack_2->SetBinContent(6,19.71253);
   hext_stack_2->SetBinContent(7,21.46585);
   hext_stack_2->SetBinContent(8,18.32115);
   hext_stack_2->SetBinContent(9,21.943);
   hext_stack_2->SetBinContent(10,13.00229);
   hext_stack_2->SetBinContent(11,13.25607);
   hext_stack_2->SetBinContent(12,16.36758);
   hext_stack_2->SetBinContent(13,14.13988);
   hext_stack_2->SetBinContent(14,21.6186);
   hext_stack_2->SetBinContent(15,13.09167);
   hext_stack_2->SetBinContent(16,7.067767);
   hext_stack_2->SetBinContent(17,12.86824);
   hext_stack_2->SetBinContent(18,10.19364);
   hext_stack_2->SetBinContent(19,8.179411);
   hext_stack_2->SetBinContent(20,10.59583);
   hext_stack_2->SetBinContent(21,114.451);
   hext_stack_2->SetBinError(1,5.654473);
   hext_stack_2->SetBinError(2,2.272423);
   hext_stack_2->SetBinError(3,2.348507);
   hext_stack_2->SetBinError(4,3.260886);
   hext_stack_2->SetBinError(5,2.417381);
   hext_stack_2->SetBinError(6,3.094408);
   hext_stack_2->SetBinError(7,3.092083);
   hext_stack_2->SetBinError(8,3.026618);
   hext_stack_2->SetBinError(9,3.344081);
   hext_stack_2->SetBinError(10,2.520018);
   hext_stack_2->SetBinError(11,2.515861);
   hext_stack_2->SetBinError(12,2.954694);
   hext_stack_2->SetBinError(13,2.605066);
   hext_stack_2->SetBinError(14,3.32831);
   hext_stack_2->SetBinError(15,2.491863);
   hext_stack_2->SetBinError(16,1.631079);
   hext_stack_2->SetBinError(17,2.428365);
   hext_stack_2->SetBinError(18,2.158396);
   hext_stack_2->SetBinError(19,1.888062);
   hext_stack_2->SetBinError(20,2.165381);
   hext_stack_2->SetBinError(21,7.204446);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3005);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetTitleOffset(1);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetTitleOffset(1);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,7.773042);
   hdirt_stack_3->SetBinContent(2,0.6566868);
   hdirt_stack_3->SetBinContent(3,2.459009);
   hdirt_stack_3->SetBinContent(4,1.894674);
   hdirt_stack_3->SetBinContent(5,3.083285);
   hdirt_stack_3->SetBinContent(6,1.782314);
   hdirt_stack_3->SetBinContent(7,2.334239);
   hdirt_stack_3->SetBinContent(8,2.848139);
   hdirt_stack_3->SetBinContent(9,2.406386);
   hdirt_stack_3->SetBinContent(10,1.261043);
   hdirt_stack_3->SetBinContent(11,0.6951543);
   hdirt_stack_3->SetBinContent(12,1.484591);
   hdirt_stack_3->SetBinContent(13,1.869554);
   hdirt_stack_3->SetBinContent(14,0.6969616);
   hdirt_stack_3->SetBinContent(15,0.7207426);
   hdirt_stack_3->SetBinContent(16,1.271017);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.6168854);
   hdirt_stack_3->SetBinContent(19,0.7625884);
   hdirt_stack_3->SetBinContent(20,0.693397);
   hdirt_stack_3->SetBinContent(21,13.61676);
   hdirt_stack_3->SetBinError(1,1.407454);
   hdirt_stack_3->SetBinError(2,0.3791383);
   hdirt_stack_3->SetBinError(3,0.8463268);
   hdirt_stack_3->SetBinError(4,0.693791);
   hdirt_stack_3->SetBinError(5,0.9280739);
   hdirt_stack_3->SetBinError(6,1.009206);
   hdirt_stack_3->SetBinError(7,0.7942543);
   hdirt_stack_3->SetBinError(8,1.041024);
   hdirt_stack_3->SetBinError(9,0.760715);
   hdirt_stack_3->SetBinError(10,0.543052);
   hdirt_stack_3->SetBinError(11,0.4258516);
   hdirt_stack_3->SetBinError(12,0.6507882);
   hdirt_stack_3->SetBinError(13,1.137129);
   hdirt_stack_3->SetBinError(14,0.4037324);
   hdirt_stack_3->SetBinError(15,0.4348223);
   hdirt_stack_3->SetBinError(16,0.5442829);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.3905183);
   hdirt_stack_3->SetBinError(19,0.4177063);
   hdirt_stack_3->SetBinError(20,0.4014535);
   hdirt_stack_3->SetBinError(21,1.95944);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3004);

   ci = TColor::GetColor("#ff9933");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,58.76724);
   houtFV_stack_4->SetBinContent(2,10.84952);
   houtFV_stack_4->SetBinContent(3,13.11657);
   houtFV_stack_4->SetBinContent(4,15.62405);
   houtFV_stack_4->SetBinContent(5,13.09233);
   houtFV_stack_4->SetBinContent(6,14.35769);
   houtFV_stack_4->SetBinContent(7,13.49729);
   houtFV_stack_4->SetBinContent(8,11.88905);
   houtFV_stack_4->SetBinContent(9,15.26597);
   houtFV_stack_4->SetBinContent(10,12.52152);
   houtFV_stack_4->SetBinContent(11,11.58564);
   houtFV_stack_4->SetBinContent(12,11.83141);
   houtFV_stack_4->SetBinContent(13,9.170574);
   houtFV_stack_4->SetBinContent(14,9.427073);
   houtFV_stack_4->SetBinContent(15,14.67332);
   houtFV_stack_4->SetBinContent(16,10.31505);
   houtFV_stack_4->SetBinContent(17,9.20269);
   houtFV_stack_4->SetBinContent(18,10.74536);
   houtFV_stack_4->SetBinContent(19,6.413311);
   houtFV_stack_4->SetBinContent(20,7.806586);
   houtFV_stack_4->SetBinContent(21,90.97234);
   houtFV_stack_4->SetBinError(1,3.909206);
   houtFV_stack_4->SetBinError(2,1.6262);
   houtFV_stack_4->SetBinError(3,1.712128);
   houtFV_stack_4->SetBinError(4,1.920543);
   houtFV_stack_4->SetBinError(5,1.824333);
   houtFV_stack_4->SetBinError(6,1.961271);
   houtFV_stack_4->SetBinError(7,1.79209);
   houtFV_stack_4->SetBinError(8,1.762379);
   houtFV_stack_4->SetBinError(9,1.906461);
   houtFV_stack_4->SetBinError(10,1.696962);
   houtFV_stack_4->SetBinError(11,1.648526);
   houtFV_stack_4->SetBinError(12,1.69826);
   houtFV_stack_4->SetBinError(13,1.493104);
   houtFV_stack_4->SetBinError(14,1.496019);
   houtFV_stack_4->SetBinError(15,2.00211);
   houtFV_stack_4->SetBinError(16,1.6229);
   houtFV_stack_4->SetBinError(17,1.53015);
   houtFV_stack_4->SetBinError(18,1.699956);
   houtFV_stack_4->SetBinError(19,1.166369);
   houtFV_stack_4->SetBinError(20,1.375533);
   houtFV_stack_4->SetBinError(21,4.751218);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3005);

   ci = TColor::GetColor("#339933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,11.62111);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.097944);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.254053);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.451586);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.524413);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.619619);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.220045);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.994286);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.509121);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.080542);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.390065);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.11369);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.352674);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.026392);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.84518);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.102557);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.458507);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.851994);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.001054);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.707633);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,24.58984);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.251534);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8429683);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7645208);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7631332);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7483397);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7757708);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6344811);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.038524);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6311445);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5418068);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8413344);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7583018);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4860138);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.623026);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4129895);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.689676);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6788833);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3558543);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4819106);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7159009);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.793977);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
   color = new TColor(ci, 1, 0, 0, " ", 0.5);
   hNCpi0inFVcoh_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hNCpi0inFVcoh_stack_5->SetLineColor(ci);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVcoh_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.83697);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.206237);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6681303);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7662464);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.252044);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7913244);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6828141);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6577052);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2908497);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6734507);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6251312);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5505438);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.688175);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3930505);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6634459);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5276794);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6467803);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.544301);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3343505);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1661254);
   hNCpi0inFVqe_stack_6->SetBinContent(21,3.035466);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3349681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3940697);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1891035);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1814006);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3497139);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2818793);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1856411);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2364778);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09089648);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.19702);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2946246);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2055421);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2409387);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1729185);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2299681);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2543716);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2547443);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1939461);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.155646);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0675768);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.5388998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
   color = new TColor(ci, 1, 1, 0, " ", 0.5);
   hNCpi0inFVqe_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   hNCpi0inFVqe_stack_6->SetLineColor(ci);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVqe_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,230.432);
   hNCpi0inFVres_stack_7->SetBinContent(2,91.80595);
   hNCpi0inFVres_stack_7->SetBinContent(3,99.51007);
   hNCpi0inFVres_stack_7->SetBinContent(4,92.66445);
   hNCpi0inFVres_stack_7->SetBinContent(5,98.75013);
   hNCpi0inFVres_stack_7->SetBinContent(6,93.77804);
   hNCpi0inFVres_stack_7->SetBinContent(7,89.87438);
   hNCpi0inFVres_stack_7->SetBinContent(8,91.44569);
   hNCpi0inFVres_stack_7->SetBinContent(9,84.55157);
   hNCpi0inFVres_stack_7->SetBinContent(10,81.90538);
   hNCpi0inFVres_stack_7->SetBinContent(11,70.47293);
   hNCpi0inFVres_stack_7->SetBinContent(12,69.02743);
   hNCpi0inFVres_stack_7->SetBinContent(13,60.35004);
   hNCpi0inFVres_stack_7->SetBinContent(14,56.89522);
   hNCpi0inFVres_stack_7->SetBinContent(15,52.0412);
   hNCpi0inFVres_stack_7->SetBinContent(16,45.06141);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.59322);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.05613);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.2601);
   hNCpi0inFVres_stack_7->SetBinContent(20,35.12444);
   hNCpi0inFVres_stack_7->SetBinContent(21,391.3419);
   hNCpi0inFVres_stack_7->SetBinError(1,4.990792);
   hNCpi0inFVres_stack_7->SetBinError(2,3.121714);
   hNCpi0inFVres_stack_7->SetBinError(3,3.181344);
   hNCpi0inFVres_stack_7->SetBinError(4,2.965862);
   hNCpi0inFVres_stack_7->SetBinError(5,3.228071);
   hNCpi0inFVres_stack_7->SetBinError(6,3.087941);
   hNCpi0inFVres_stack_7->SetBinError(7,2.928537);
   hNCpi0inFVres_stack_7->SetBinError(8,3.125474);
   hNCpi0inFVres_stack_7->SetBinError(9,3.020375);
   hNCpi0inFVres_stack_7->SetBinError(10,3.017632);
   hNCpi0inFVres_stack_7->SetBinError(11,2.655865);
   hNCpi0inFVres_stack_7->SetBinError(12,2.730794);
   hNCpi0inFVres_stack_7->SetBinError(13,2.517095);
   hNCpi0inFVres_stack_7->SetBinError(14,2.444589);
   hNCpi0inFVres_stack_7->SetBinError(15,2.446758);
   hNCpi0inFVres_stack_7->SetBinError(16,2.156797);
   hNCpi0inFVres_stack_7->SetBinError(17,2.053895);
   hNCpi0inFVres_stack_7->SetBinError(18,2.242016);
   hNCpi0inFVres_stack_7->SetBinError(19,1.98197);
   hNCpi0inFVres_stack_7->SetBinError(20,1.943722);
   hNCpi0inFVres_stack_7->SetBinError(21,6.669647);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
   color = new TColor(ci, 0, 0.8, 0.4, " ", 0.5);
   hNCpi0inFVres_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#00cc66");
   hNCpi0inFVres_stack_7->SetLineColor(ci);
   hNCpi0inFVres_stack_7->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVres_stack_7->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVres_stack_7->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVres_stack_7->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVres_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,47.08922);
   hNCpi0inFVdis_stack_8->SetBinContent(2,16.62099);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.86231);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.13273);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.11171);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.31011);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.6834);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.04224);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.92893);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.98697);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.6989);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.47514);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.43378);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.29412);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.26081);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.810406);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.965299);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.77081);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.014854);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.575281);
   hNCpi0inFVdis_stack_8->SetBinContent(21,82.31161);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.392128);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.321615);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.287241);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.618432);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.615636);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.35914);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.386603);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.268293);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.257754);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.522213);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.242519);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.27838);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.33482);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.285528);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.397409);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.223646);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.041423);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.307296);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.002832);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8343074);
   hNCpi0inFVdis_stack_8->SetBinError(21,3.045391);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
   color = new TColor(ci, 1, 0.2, 1, " ", 0.5);
   hNCpi0inFVdis_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#ff33ff");
   hNCpi0inFVdis_stack_8->SetLineColor(ci);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVdis_stack_8->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1397278);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04960734);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2558582);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1663191);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05214635);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03712227);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.3464881);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.08002707);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02871574);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1694829);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1340722);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.030178);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02625185);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1570511);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
   color = new TColor(ci, 0.2, 1, 0.8, " ", 0.5);
   hNCpi0inFVmec_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#33ffcc");
   hNCpi0inFVmec_stack_9->SetLineColor(ci);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVmec_stack_9->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,108.8543);
   hCCpi0inFV_stack_10->SetBinContent(2,27.34716);
   hCCpi0inFV_stack_10->SetBinContent(3,35.24643);
   hCCpi0inFV_stack_10->SetBinContent(4,36.2779);
   hCCpi0inFV_stack_10->SetBinContent(5,37.53723);
   hCCpi0inFV_stack_10->SetBinContent(6,33.80581);
   hCCpi0inFV_stack_10->SetBinContent(7,40.00359);
   hCCpi0inFV_stack_10->SetBinContent(8,39.04966);
   hCCpi0inFV_stack_10->SetBinContent(9,29.3649);
   hCCpi0inFV_stack_10->SetBinContent(10,34.98154);
   hCCpi0inFV_stack_10->SetBinContent(11,32.52983);
   hCCpi0inFV_stack_10->SetBinContent(12,24.99678);
   hCCpi0inFV_stack_10->SetBinContent(13,22.42828);
   hCCpi0inFV_stack_10->SetBinContent(14,25.50381);
   hCCpi0inFV_stack_10->SetBinContent(15,19.70403);
   hCCpi0inFV_stack_10->SetBinContent(16,16.70356);
   hCCpi0inFV_stack_10->SetBinContent(17,15.81527);
   hCCpi0inFV_stack_10->SetBinContent(18,14.21659);
   hCCpi0inFV_stack_10->SetBinContent(19,13.60438);
   hCCpi0inFV_stack_10->SetBinContent(20,14.49596);
   hCCpi0inFV_stack_10->SetBinContent(21,153.4542);
   hCCpi0inFV_stack_10->SetBinError(1,5.205255);
   hCCpi0inFV_stack_10->SetBinError(2,2.579366);
   hCCpi0inFV_stack_10->SetBinError(3,3.004327);
   hCCpi0inFV_stack_10->SetBinError(4,3.002559);
   hCCpi0inFV_stack_10->SetBinError(5,3.053539);
   hCCpi0inFV_stack_10->SetBinError(6,2.932308);
   hCCpi0inFV_stack_10->SetBinError(7,3.210433);
   hCCpi0inFV_stack_10->SetBinError(8,3.183038);
   hCCpi0inFV_stack_10->SetBinError(9,2.662608);
   hCCpi0inFV_stack_10->SetBinError(10,2.946643);
   hCCpi0inFV_stack_10->SetBinError(11,2.883239);
   hCCpi0inFV_stack_10->SetBinError(12,2.555326);
   hCCpi0inFV_stack_10->SetBinError(13,2.342217);
   hCCpi0inFV_stack_10->SetBinError(14,2.574355);
   hCCpi0inFV_stack_10->SetBinError(15,2.214089);
   hCCpi0inFV_stack_10->SetBinError(16,2.03864);
   hCCpi0inFV_stack_10->SetBinError(17,2.019878);
   hCCpi0inFV_stack_10->SetBinError(18,1.866439);
   hCCpi0inFV_stack_10->SetBinError(19,1.777131);
   hCCpi0inFV_stack_10->SetBinError(20,1.907715);
   hCCpi0inFV_stack_10->SetBinError(21,6.196644);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_10->SetLineColor(ci);
   hCCpi0inFV_stack_10->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,61.11259);
   hNCinFV_stack_11->SetBinContent(2,17.52993);
   hNCinFV_stack_11->SetBinContent(3,22.28339);
   hNCinFV_stack_11->SetBinContent(4,18.25748);
   hNCinFV_stack_11->SetBinContent(5,21.08212);
   hNCinFV_stack_11->SetBinContent(6,18.76497);
   hNCinFV_stack_11->SetBinContent(7,23.51642);
   hNCinFV_stack_11->SetBinContent(8,17.35831);
   hNCinFV_stack_11->SetBinContent(9,18.1772);
   hNCinFV_stack_11->SetBinContent(10,18.4544);
   hNCinFV_stack_11->SetBinContent(11,13.87039);
   hNCinFV_stack_11->SetBinContent(12,11.80472);
   hNCinFV_stack_11->SetBinContent(13,12.22445);
   hNCinFV_stack_11->SetBinContent(14,12.32785);
   hNCinFV_stack_11->SetBinContent(15,9.161775);
   hNCinFV_stack_11->SetBinContent(16,11.30192);
   hNCinFV_stack_11->SetBinContent(17,7.873556);
   hNCinFV_stack_11->SetBinContent(18,8.561174);
   hNCinFV_stack_11->SetBinContent(19,10.67831);
   hNCinFV_stack_11->SetBinContent(20,6.212559);
   hNCinFV_stack_11->SetBinContent(21,104.4758);
   hNCinFV_stack_11->SetBinError(1,4.371323);
   hNCinFV_stack_11->SetBinError(2,2.119325);
   hNCinFV_stack_11->SetBinError(3,2.548569);
   hNCinFV_stack_11->SetBinError(4,2.293977);
   hNCinFV_stack_11->SetBinError(5,2.485392);
   hNCinFV_stack_11->SetBinError(6,2.500072);
   hNCinFV_stack_11->SetBinError(7,3.022253);
   hNCinFV_stack_11->SetBinError(8,2.364993);
   hNCinFV_stack_11->SetBinError(9,2.280111);
   hNCinFV_stack_11->SetBinError(10,2.352994);
   hNCinFV_stack_11->SetBinError(11,1.937583);
   hNCinFV_stack_11->SetBinError(12,1.795373);
   hNCinFV_stack_11->SetBinError(13,1.918781);
   hNCinFV_stack_11->SetBinError(14,1.784822);
   hNCinFV_stack_11->SetBinError(15,1.60583);
   hNCinFV_stack_11->SetBinError(16,1.786281);
   hNCinFV_stack_11->SetBinError(17,1.411692);
   hNCinFV_stack_11->SetBinError(18,1.515044);
   hNCinFV_stack_11->SetBinError(19,1.927501);
   hNCinFV_stack_11->SetBinError(20,1.392726);
   hNCinFV_stack_11->SetBinError(21,5.375148);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_11->SetLineColor(ci);
   hNCinFV_stack_11->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,104.3777);
   hnumuCCinFV_stack_12->SetBinContent(2,14.09876);
   hnumuCCinFV_stack_12->SetBinContent(3,12.68518);
   hnumuCCinFV_stack_12->SetBinContent(4,16.10302);
   hnumuCCinFV_stack_12->SetBinContent(5,17.79281);
   hnumuCCinFV_stack_12->SetBinContent(6,10.76279);
   hnumuCCinFV_stack_12->SetBinContent(7,13.63405);
   hnumuCCinFV_stack_12->SetBinContent(8,11.44333);
   hnumuCCinFV_stack_12->SetBinContent(9,10.67004);
   hnumuCCinFV_stack_12->SetBinContent(10,14.08164);
   hnumuCCinFV_stack_12->SetBinContent(11,11.94608);
   hnumuCCinFV_stack_12->SetBinContent(12,11.44576);
   hnumuCCinFV_stack_12->SetBinContent(13,6.344862);
   hnumuCCinFV_stack_12->SetBinContent(14,11.30666);
   hnumuCCinFV_stack_12->SetBinContent(15,8.197613);
   hnumuCCinFV_stack_12->SetBinContent(16,9.048941);
   hnumuCCinFV_stack_12->SetBinContent(17,8.863907);
   hnumuCCinFV_stack_12->SetBinContent(18,5.857856);
   hnumuCCinFV_stack_12->SetBinContent(19,7.023914);
   hnumuCCinFV_stack_12->SetBinContent(20,6.649612);
   hnumuCCinFV_stack_12->SetBinContent(21,127.0693);
   hnumuCCinFV_stack_12->SetBinError(1,6.045525);
   hnumuCCinFV_stack_12->SetBinError(2,2.151518);
   hnumuCCinFV_stack_12->SetBinError(3,1.908316);
   hnumuCCinFV_stack_12->SetBinError(4,2.46109);
   hnumuCCinFV_stack_12->SetBinError(5,3.090202);
   hnumuCCinFV_stack_12->SetBinError(6,1.652245);
   hnumuCCinFV_stack_12->SetBinError(7,1.907513);
   hnumuCCinFV_stack_12->SetBinError(8,1.816984);
   hnumuCCinFV_stack_12->SetBinError(9,1.605745);
   hnumuCCinFV_stack_12->SetBinError(10,2.365701);
   hnumuCCinFV_stack_12->SetBinError(11,1.765644);
   hnumuCCinFV_stack_12->SetBinError(12,1.905019);
   hnumuCCinFV_stack_12->SetBinError(13,1.257964);
   hnumuCCinFV_stack_12->SetBinError(14,1.78689);
   hnumuCCinFV_stack_12->SetBinError(15,1.507342);
   hnumuCCinFV_stack_12->SetBinError(16,2.111009);
   hnumuCCinFV_stack_12->SetBinError(17,1.520337);
   hnumuCCinFV_stack_12->SetBinError(18,1.319435);
   hnumuCCinFV_stack_12->SetBinError(19,1.356597);
   hnumuCCinFV_stack_12->SetBinError(20,1.699697);
   hnumuCCinFV_stack_12->SetBinError(21,6.669908);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_12->SetLineColor(ci);
   hnumuCCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,5.772227);
   hnueCCinFV_stack_13->SetBinContent(2,1.182504);
   hnueCCinFV_stack_13->SetBinContent(3,2.071007);
   hnueCCinFV_stack_13->SetBinContent(4,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(7,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(8,0.8165389);
   hnueCCinFV_stack_13->SetBinContent(9,2.224887);
   hnueCCinFV_stack_13->SetBinContent(10,1.928624);
   hnueCCinFV_stack_13->SetBinContent(11,0.3315399);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,1.189329);
   hnueCCinFV_stack_13->SetBinContent(14,0.8732269);
   hnueCCinFV_stack_13->SetBinContent(15,1.159045);
   hnueCCinFV_stack_13->SetBinContent(16,1.268828);
   hnueCCinFV_stack_13->SetBinContent(17,0.2176802);
   hnueCCinFV_stack_13->SetBinContent(18,0.8468585);
   hnueCCinFV_stack_13->SetBinContent(19,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,17.60291);
   hnueCCinFV_stack_13->SetBinError(1,1.688982);
   hnueCCinFV_stack_13->SetBinError(2,0.5436886);
   hnueCCinFV_stack_13->SetBinError(3,0.8544523);
   hnueCCinFV_stack_13->SetBinError(4,0.4383608);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.4416112);
   hnueCCinFV_stack_13->SetBinError(7,0.4810838);
   hnueCCinFV_stack_13->SetBinError(8,0.5068267);
   hnueCCinFV_stack_13->SetBinError(9,1.366943);
   hnueCCinFV_stack_13->SetBinError(10,0.7397309);
   hnueCCinFV_stack_13->SetBinError(11,0.3266876);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.5456561);
   hnueCCinFV_stack_13->SetBinError(14,0.5554827);
   hnueCCinFV_stack_13->SetBinError(15,0.5936429);
   hnueCCinFV_stack_13->SetBinError(16,0.743831);
   hnueCCinFV_stack_13->SetBinError(17,0.2176802);
   hnueCCinFV_stack_13->SetBinError(18,0.4251302);
   hnueCCinFV_stack_13->SetBinError(19,0.4390927);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.752903);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_13->SetLineColor(ci);
   hnueCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__5->SetBinContent(1,725.2686);
   hmcerror__5->SetBinContent(2,199.6098);
   hmcerror__5->SetBinContent(3,224.5163);
   hmcerror__5->SetBinContent(4,236.5729);
   hmcerror__5->SetBinContent(5,239.0171);
   hmcerror__5->SetBinContent(6,224.3609);
   hmcerror__5->SetBinContent(7,232.3543);
   hmcerror__5->SetBinContent(8,218.1828);
   hmcerror__5->SetBinContent(9,210.3446);
   hmcerror__5->SetBinContent(10,202.319);
   hmcerror__5->SetBinContent(11,175.0289);
   hmcerror__5->SetBinContent(12,167.7025);
   hmcerror__5->SetBinContent(13,146.9999);
   hmcerror__5->SetBinContent(14,156.4406);
   hmcerror__5->SetBinContent(15,139.4989);
   hmcerror__5->SetBinContent(16,117.6304);
   hmcerror__5->SetBinContent(17,111.3884);
   hmcerror__5->SetBinContent(18,106.0471);
   hmcerror__5->SetBinContent(19,96.2136);
   hmcerror__5->SetBinContent(20,92.02351);
   hmcerror__5->SetBinContent(21,1163.432);
   hmcerror__5->SetBinError(1,175.8442);
   hmcerror__5->SetBinError(2,71.27791);
   hmcerror__5->SetBinError(3,71.02106);
   hmcerror__5->SetBinError(4,70.71265);
   hmcerror__5->SetBinError(5,73.53275);
   hmcerror__5->SetBinError(6,71.67885);
   hmcerror__5->SetBinError(7,70.22172);
   hmcerror__5->SetBinError(8,65.31351);
   hmcerror__5->SetBinError(9,60.75253);
   hmcerror__5->SetBinError(10,62.42976);
   hmcerror__5->SetBinError(11,54.88264);
   hmcerror__5->SetBinError(12,58.39604);
   hmcerror__5->SetBinError(13,44.33437);
   hmcerror__5->SetBinError(14,43.4325);
   hmcerror__5->SetBinError(15,40.71518);
   hmcerror__5->SetBinError(16,38.05803);
   hmcerror__5->SetBinError(17,33.59702);
   hmcerror__5->SetBinError(18,30.33066);
   hmcerror__5->SetBinError(19,29.11142);
   hmcerror__5->SetBinError(20,29.21057);
   hmcerror__5->SetBinError(21,270.3365);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3005[20] = {
   753,
   195,
   204,
   233,
   206,
   265,
   220,
   195,
   185,
   193,
   147,
   151,
   125,
   146,
   112,
   127,
   117,
   98,
   106,
   91};
   Double_t _felx3005[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3005[20] = {
   27.44085,
   13.96424,
   14.28286,
   15.26434,
   14.3527,
   16.27882,
   14.8324,
   13.96424,
   13.60147,
   13.89244,
   12.12436,
   12.28821,
   11.18034,
   12.08305,
   10.58301,
   11.26943,
   10.81665,
   10.0209,
   10.29563,
   9.6617};
   Double_t _fehx3005[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3005[20] = {
   27.44085,
   13.96424,
   14.28286,
   15.26434,
   14.3527,
   16.27882,
   14.8324,
   13.96424,
   13.60147,
   13.89244,
   12.12436,
   12.28821,
   11.18034,
   12.08305,
   10.58301,
   11.26943,
   10.81665,
   9.82,
   10.29563,
   9.46};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,55);
   Graph_Graph3005->SetMinimum(11.42805);
   Graph_Graph3005->SetMaximum(850.3511);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.26","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.37e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3869.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. Uncertainty","lf");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 79.3","F");

   ci = 1447;
   color = new TColor(ci, 1, 0.2, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 352.3","F");

   ci = 1448;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 35.6","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 280.2","F");

   ci = 1450;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#339933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  75.2","F");

   ci = 1451;
   color = new TColor(ci, 1, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  14.0","F");

   ci = 1452;
   color = new TColor(ci, 1, 1, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1560.6","F");

   ci = 1453;
   color = new TColor(ci, 0, 0.8, 0.4, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  324.1","F");

   ci = 1454;
   color = new TColor(ci, 1, 0.2, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff33ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1455;
   color = new TColor(ci, 0.2, 1, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#33ffcc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 622.5","F");

   ci = 1456;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 340.6","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 312.3","F");

   ci = 1458;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.1","F");

   ci = 1459;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.95,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(0);
   pad2->SetLeftMargin(0.12);
   pad2->SetTopMargin(0.05);
   pad2->SetBottomMargin(0.2);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   
   Double_t _fx3006[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3006[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3006[20] = {
   0.2424539,
   0.3570863,
   0.3163291,
   0.2989043,
   0.3076465,
   0.3194802,
   0.3022183,
   0.2993523,
   0.2888239,
   0.3085709,
   0.3135633,
   0.3482122,
   0.3015946,
   0.2776294,
   0.2918674,
   0.3235391,
   0.3016205,
   0.2860112,
   0.3025707,
   0.317425};
   Double_t _fehx3006[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3006[20] = {
   0.2424539,
   0.3570863,
   0.3163291,
   0.2989043,
   0.3076465,
   0.3194802,
   0.3022183,
   0.2993523,
   0.2888239,
   0.3085709,
   0.3135633,
   0.3482122,
   0.3015946,
   0.2776294,
   0.2918674,
   0.3235391,
   0.3016205,
   0.2860112,
   0.3025707,
   0.317425};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,55);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3007[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3007[20] = {
   0.2309367,
   0.3373482,
   0.3042056,
   0.2864714,
   0.284636,
   0.2986062,
   0.2634213,
   0.28055,
   0.2691074,
   0.2718535,
   0.2693725,
   0.2635584,
   0.2659929,
   0.2498157,
   0.2569903,
   0.2667696,
   0.2448901,
   0.2463348,
   0.2686355,
   0.2626689};
   Double_t _fehx3007[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3007[20] = {
   0.2309367,
   0.3373482,
   0.3042056,
   0.2864714,
   0.284636,
   0.2986062,
   0.2634213,
   0.28055,
   0.2691074,
   0.2718535,
   0.2693725,
   0.2635584,
   0.2659929,
   0.2498157,
   0.2569903,
   0.2667696,
   0.2448901,
   0.2463348,
   0.2686355,
   0.2626689};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,55);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3008[20] = {
   1.038236,
   0.9769062,
   0.9086199,
   0.9848972,
   0.8618631,
   1.181133,
   0.9468299,
   0.8937462,
   0.8795093,
   0.9539389,
   0.8398613,
   0.9004042,
   0.8503408,
   0.9332618,
   0.8028739,
   1.079653,
   1.050379,
   0.9241174,
   1.101715,
   0.9888777};
   Double_t _felx3008[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3008[20] = {
   0.03783542,
   0.0699577,
   0.06361612,
   0.06452276,
   0.06004885,
   0.07255642,
   0.06383526,
   0.06400249,
   0.06466281,
   0.06866603,
   0.06927059,
   0.07327386,
   0.07605679,
   0.07723729,
   0.07586445,
   0.09580371,
   0.09710757,
   0.09449478,
   0.1070081,
   0.1049916};
   Double_t _fehx3008[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3008[20] = {
   0.03783542,
   0.0699577,
   0.06361612,
   0.06452276,
   0.06004885,
   0.07255642,
   0.06383526,
   0.06400249,
   0.06466281,
   0.06866603,
   0.06927059,
   0.07327386,
   0.07605679,
   0.07723729,
   0.07586445,
   0.09580371,
   0.09710757,
   0.09260034,
   0.1070081,
   0.1027998};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,55);
   Graph_Graph3008->SetMinimum(0.6743414);
   Graph_Graph3008->SetMaximum(1.306357);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.15,0.75,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Total Uncertainty","F");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

   ci = TColor::GetColor("#ffcccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   pad2->Modified();
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

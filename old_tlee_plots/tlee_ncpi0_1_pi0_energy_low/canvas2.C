#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 18:59:34 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-69.23077,-27.24,507.6923,3012.171);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__4->SetBinContent(1,1081.339);
   hmc__4->SetBinContent(2,1334.79);
   hmc__4->SetBinContent(3,1044.528);
   hmc__4->SetBinContent(4,705.3701);
   hmc__4->SetBinContent(5,407.918);
   hmc__4->SetBinContent(6,237.5279);
   hmc__4->SetBinContent(7,151.7129);
   hmc__4->SetBinContent(8,86.91474);
   hmc__4->SetBinContent(9,47.3956);
   hmc__4->SetBinContent(10,37.50887);
   hmc__4->SetBinContent(11,20.4211);
   hmc__4->SetBinContent(12,12.35429);
   hmc__4->SetBinContent(13,6.471381);
   hmc__4->SetBinContent(14,2.514736);
   hmc__4->SetBinContent(15,2.409556);
   hmc__4->SetBinContent(16,5.777972);
   hmc__4->SetBinError(1,251.285);
   hmc__4->SetBinError(2,362.1016);
   hmc__4->SetBinError(3,296.5145);
   hmc__4->SetBinError(4,203.6239);
   hmc__4->SetBinError(5,120.6355);
   hmc__4->SetBinError(6,73.04342);
   hmc__4->SetBinError(7,46.03203);
   hmc__4->SetBinError(8,27.78567);
   hmc__4->SetBinError(9,23.16233);
   hmc__4->SetBinError(10,17.23449);
   hmc__4->SetBinError(11,11.90389);
   hmc__4->SetBinError(12,8.729727);
   hmc__4->SetBinError(13,7.656544);
   hmc__4->SetBinError(14,3.170938);
   hmc__4->SetBinError(15,7.565844);
   hmc__4->SetBinError(16,7.72135);
   hmc__4->SetMinimum(-27.24);
   hmc__4->SetMaximum(2860.2);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",15,0,450);
   hs2_stack_2->SetMinimum(-1.427841e-08);
   hs2_stack_2->SetMaximum(1401.529);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,27.1593);
   hbadmatch_stack_1->SetBinContent(2,32.30911);
   hbadmatch_stack_1->SetBinContent(3,28.63581);
   hbadmatch_stack_1->SetBinContent(4,14.67434);
   hbadmatch_stack_1->SetBinContent(5,7.858643);
   hbadmatch_stack_1->SetBinContent(6,3.69026);
   hbadmatch_stack_1->SetBinContent(7,1.609926);
   hbadmatch_stack_1->SetBinContent(8,1.336595);
   hbadmatch_stack_1->SetBinContent(9,0.9581861);
   hbadmatch_stack_1->SetBinContent(10,0.3824374);
   hbadmatch_stack_1->SetBinContent(13,0.2552519);
   hbadmatch_stack_1->SetBinContent(16,0.5610657);
   hbadmatch_stack_1->SetBinError(1,2.725972);
   hbadmatch_stack_1->SetBinError(2,3.893317);
   hbadmatch_stack_1->SetBinError(3,2.978727);
   hbadmatch_stack_1->SetBinError(4,1.962426);
   hbadmatch_stack_1->SetBinError(5,2.19024);
   hbadmatch_stack_1->SetBinError(6,0.9715577);
   hbadmatch_stack_1->SetBinError(7,0.6437939);
   hbadmatch_stack_1->SetBinError(8,0.7737027);
   hbadmatch_stack_1->SetBinError(9,0.4935077);
   hbadmatch_stack_1->SetBinError(10,0.2705358);
   hbadmatch_stack_1->SetBinError(13,0.255252);
   hbadmatch_stack_1->SetBinError(16,0.5610657);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,141.3006);
   hext_stack_2->SetBinContent(2,147.1818);
   hext_stack_2->SetBinContent(3,87.70268);
   hext_stack_2->SetBinContent(4,52.1995);
   hext_stack_2->SetBinContent(5,16.26226);
   hext_stack_2->SetBinContent(6,12.53226);
   hext_stack_2->SetBinContent(7,5.269787);
   hext_stack_2->SetBinContent(8,1.78639);
   hext_stack_2->SetBinContent(9,1.137595);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinError(1,8.230102);
   hext_stack_2->SetBinError(2,8.240081);
   hext_stack_2->SetBinError(3,6.309227);
   hext_stack_2->SetBinError(4,5.005364);
   hext_stack_2->SetBinError(5,2.733473);
   hext_stack_2->SetBinError(6,2.420289);
   hext_stack_2->SetBinError(7,1.442273);
   hext_stack_2->SetBinError(8,0.8039566);
   hext_stack_2->SetBinError(9,0.6602113);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(16,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,13.97649);
   hdirt_stack_3->SetBinContent(2,18.09022);
   hdirt_stack_3->SetBinContent(3,9.571238);
   hdirt_stack_3->SetBinContent(4,5.058792);
   hdirt_stack_3->SetBinContent(5,2.010839);
   hdirt_stack_3->SetBinContent(6,0.5570828);
   hdirt_stack_3->SetBinError(1,1.941831);
   hdirt_stack_3->SetBinError(2,2.169003);
   hdirt_stack_3->SetBinError(3,1.824064);
   hdirt_stack_3->SetBinError(4,1.510755);
   hdirt_stack_3->SetBinError(5,0.7288922);
   hdirt_stack_3->SetBinError(6,0.4028472);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,91.78987);
   houtFV_stack_4->SetBinContent(2,113.049);
   houtFV_stack_4->SetBinContent(3,85.4542);
   houtFV_stack_4->SetBinContent(4,39.6527);
   houtFV_stack_4->SetBinContent(5,17.20867);
   houtFV_stack_4->SetBinContent(6,11.53756);
   houtFV_stack_4->SetBinContent(7,6.534369);
   houtFV_stack_4->SetBinContent(8,2.797355);
   houtFV_stack_4->SetBinContent(9,1.602835);
   houtFV_stack_4->SetBinContent(10,0.7319179);
   houtFV_stack_4->SetBinContent(12,0.5693454);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,4.817026);
   houtFV_stack_4->SetBinError(2,5.274544);
   houtFV_stack_4->SetBinError(3,4.643069);
   houtFV_stack_4->SetBinError(4,3.105102);
   houtFV_stack_4->SetBinError(5,2.018264);
   houtFV_stack_4->SetBinError(6,1.693073);
   houtFV_stack_4->SetBinError(7,1.260177);
   houtFV_stack_4->SetBinError(8,0.8685288);
   houtFV_stack_4->SetBinError(9,0.6378222);
   houtFV_stack_4->SetBinError(10,0.438694);
   houtFV_stack_4->SetBinError(12,0.4213669);
   houtFV_stack_4->SetBinError(14,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,20.98054);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,22.57047);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.18968);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,13.37527);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.06419);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.708838);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.918015);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.304072);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3096271);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.104168);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8766301);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2761841);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.769227);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.715971);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.304547);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.297129);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.37007);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9274939);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7985808);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7069236);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.09406493);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4097263);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5741882);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1774902);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.663828);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.366746);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.972615);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.170205);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7510542);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.468726);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2565304);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1889282);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1454196);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4366575);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6819945);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6831681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3999162);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2307643);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1694388);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1799647);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1336954);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1294067);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,368.4185);
   hNCpi0inFVres_stack_7->SetBinContent(2,533.2595);
   hNCpi0inFVres_stack_7->SetBinContent(3,414.8753);
   hNCpi0inFVres_stack_7->SetBinContent(4,280.8292);
   hNCpi0inFVres_stack_7->SetBinContent(5,158.804);
   hNCpi0inFVres_stack_7->SetBinContent(6,83.91108);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.86139);
   hNCpi0inFVres_stack_7->SetBinContent(8,28.48829);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.7072);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.10006);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.947908);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.726873);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.539149);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5344627);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2788836);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.6621626);
   hNCpi0inFVres_stack_7->SetBinError(1,6.383083);
   hNCpi0inFVres_stack_7->SetBinError(2,7.503834);
   hNCpi0inFVres_stack_7->SetBinError(3,6.432338);
   hNCpi0inFVres_stack_7->SetBinError(4,5.577133);
   hNCpi0inFVres_stack_7->SetBinError(5,4.056689);
   hNCpi0inFVres_stack_7->SetBinError(6,2.915265);
   hNCpi0inFVres_stack_7->SetBinError(7,2.2824);
   hNCpi0inFVres_stack_7->SetBinError(8,1.960235);
   hNCpi0inFVres_stack_7->SetBinError(9,1.321014);
   hNCpi0inFVres_stack_7->SetBinError(10,1.270839);
   hNCpi0inFVres_stack_7->SetBinError(11,1.214396);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6052032);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4043903);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1745274);
   hNCpi0inFVres_stack_7->SetBinError(15,0.138002);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2104547);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,70.67935);
   hNCpi0inFVdis_stack_8->SetBinContent(2,99.21198);
   hNCpi0inFVdis_stack_8->SetBinContent(3,83.31001);
   hNCpi0inFVdis_stack_8->SetBinContent(4,59.13581);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.98319);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.95885);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.75653);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.29354);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.751793);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.168045);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.740007);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.512512);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.382944);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1405505);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5233744);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8308386);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.903281);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.30582);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.982837);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.685678);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.841098);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.491965);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.34987);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.410719);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5472956);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9384327);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4761958);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.81793);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5155436);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.07701767);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2426194);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4040414);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1731557);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4702629);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.3837368);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1318655);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1651447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1788577);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,108.1394);
   hCCpi0inFV_stack_10->SetBinContent(2,177.0382);
   hCCpi0inFV_stack_10->SetBinContent(3,168.1271);
   hCCpi0inFV_stack_10->SetBinContent(4,124.8807);
   hCCpi0inFV_stack_10->SetBinContent(5,83.84559);
   hCCpi0inFV_stack_10->SetBinContent(6,42.59364);
   hCCpi0inFV_stack_10->SetBinContent(7,29.69005);
   hCCpi0inFV_stack_10->SetBinContent(8,15.79992);
   hCCpi0inFV_stack_10->SetBinContent(9,9.876478);
   hCCpi0inFV_stack_10->SetBinContent(10,5.826839);
   hCCpi0inFV_stack_10->SetBinContent(11,4.192992);
   hCCpi0inFV_stack_10->SetBinContent(12,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(13,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(15,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9286332);
   hCCpi0inFV_stack_10->SetBinError(1,5.204967);
   hCCpi0inFV_stack_10->SetBinError(2,6.655422);
   hCCpi0inFV_stack_10->SetBinError(3,6.501051);
   hCCpi0inFV_stack_10->SetBinError(4,5.630524);
   hCCpi0inFV_stack_10->SetBinError(5,4.560303);
   hCCpi0inFV_stack_10->SetBinError(6,3.259691);
   hCCpi0inFV_stack_10->SetBinError(7,2.780003);
   hCCpi0inFV_stack_10->SetBinError(8,1.974052);
   hCCpi0inFV_stack_10->SetBinError(9,1.558071);
   hCCpi0inFV_stack_10->SetBinError(10,1.178666);
   hCCpi0inFV_stack_10->SetBinError(11,0.9886392);
   hCCpi0inFV_stack_10->SetBinError(12,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(13,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(15,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(16,0.48078);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,87.22984);
   hNCinFV_stack_11->SetBinContent(2,78.78637);
   hNCinFV_stack_11->SetBinContent(3,67.17747);
   hNCinFV_stack_11->SetBinContent(4,58.37431);
   hNCinFV_stack_11->SetBinContent(5,46.28415);
   hNCinFV_stack_11->SetBinContent(6,30.52945);
   hNCinFV_stack_11->SetBinContent(7,27.03954);
   hNCinFV_stack_11->SetBinContent(8,14.57626);
   hNCinFV_stack_11->SetBinContent(9,11.9986);
   hNCinFV_stack_11->SetBinContent(10,10.34539);
   hNCinFV_stack_11->SetBinContent(11,4.728139);
   hNCinFV_stack_11->SetBinContent(12,3.802866);
   hNCinFV_stack_11->SetBinContent(13,1.151212);
   hNCinFV_stack_11->SetBinContent(14,1.30283);
   hNCinFV_stack_11->SetBinContent(16,1.7029);
   hNCinFV_stack_11->SetBinError(1,4.780097);
   hNCinFV_stack_11->SetBinError(2,4.606229);
   hNCinFV_stack_11->SetBinError(3,4.10224);
   hNCinFV_stack_11->SetBinError(4,3.949517);
   hNCinFV_stack_11->SetBinError(5,3.860034);
   hNCinFV_stack_11->SetBinError(6,3.004347);
   hNCinFV_stack_11->SetBinError(7,3.337083);
   hNCinFV_stack_11->SetBinError(8,2.555152);
   hNCinFV_stack_11->SetBinError(9,2.151462);
   hNCinFV_stack_11->SetBinError(10,2.006066);
   hNCinFV_stack_11->SetBinError(11,1.408177);
   hNCinFV_stack_11->SetBinError(12,1.193931);
   hNCinFV_stack_11->SetBinError(13,0.6564187);
   hNCinFV_stack_11->SetBinError(14,0.719995);
   hNCinFV_stack_11->SetBinError(16,0.7759665);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,134.3687);
   hnumuCCinFV_stack_12->SetBinContent(2,98.20807);
   hnumuCCinFV_stack_12->SetBinContent(3,74.66489);
   hnumuCCinFV_stack_12->SetBinContent(4,49.60761);
   hnumuCCinFV_stack_12->SetBinContent(5,28.25481);
   hnumuCCinFV_stack_12->SetBinContent(6,21.52306);
   hnumuCCinFV_stack_12->SetBinContent(7,14.06038);
   hnumuCCinFV_stack_12->SetBinContent(8,8.455685);
   hnumuCCinFV_stack_12->SetBinContent(9,3.907867);
   hnumuCCinFV_stack_12->SetBinContent(10,2.921776);
   hnumuCCinFV_stack_12->SetBinContent(11,1.717185);
   hnumuCCinFV_stack_12->SetBinContent(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(13,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(16,0.5884556);
   hnumuCCinFV_stack_12->SetBinError(1,6.990016);
   hnumuCCinFV_stack_12->SetBinError(2,6.180926);
   hnumuCCinFV_stack_12->SetBinError(3,5.006227);
   hnumuCCinFV_stack_12->SetBinError(4,3.956274);
   hnumuCCinFV_stack_12->SetBinError(5,2.82524);
   hnumuCCinFV_stack_12->SetBinError(6,2.420929);
   hnumuCCinFV_stack_12->SetBinError(7,1.916608);
   hnumuCCinFV_stack_12->SetBinError(8,1.46024);
   hnumuCCinFV_stack_12->SetBinError(9,0.9808007);
   hnumuCCinFV_stack_12->SetBinError(10,0.7931661);
   hnumuCCinFV_stack_12->SetBinError(11,0.6217711);
   hnumuCCinFV_stack_12->SetBinError(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(13,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(16,0.3397478);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,14.45978);
   hnueCCinFV_stack_13->SetBinContent(2,9.247738);
   hnueCCinFV_stack_13->SetBinContent(3,3.463555);
   hnueCCinFV_stack_13->SetBinContent(4,5.356913);
   hnueCCinFV_stack_13->SetBinContent(5,2.52694);
   hnueCCinFV_stack_13->SetBinContent(6,1.517089);
   hnueCCinFV_stack_13->SetBinContent(7,1.716398);
   hnueCCinFV_stack_13->SetBinContent(8,0.8877128);
   hnueCCinFV_stack_13->SetBinContent(10,1.279433);
   hnueCCinFV_stack_13->SetBinContent(11,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.665871);
   hnueCCinFV_stack_13->SetBinError(2,1.640937);
   hnueCCinFV_stack_13->SetBinError(3,0.9912173);
   hnueCCinFV_stack_13->SetBinError(4,1.686811);
   hnueCCinFV_stack_13->SetBinError(5,0.8242495);
   hnueCCinFV_stack_13->SetBinError(6,0.5887087);
   hnueCCinFV_stack_13->SetBinError(7,1.138564);
   hnueCCinFV_stack_13->SetBinError(8,0.4469403);
   hnueCCinFV_stack_13->SetBinError(10,0.6886788);
   hnueCCinFV_stack_13->SetBinError(11,0.5197486);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__5->SetBinContent(1,1081.339);
   hmcerror__5->SetBinContent(2,1334.79);
   hmcerror__5->SetBinContent(3,1044.528);
   hmcerror__5->SetBinContent(4,705.3701);
   hmcerror__5->SetBinContent(5,407.918);
   hmcerror__5->SetBinContent(6,237.5279);
   hmcerror__5->SetBinContent(7,151.7129);
   hmcerror__5->SetBinContent(8,86.91474);
   hmcerror__5->SetBinContent(9,47.3956);
   hmcerror__5->SetBinContent(10,37.50887);
   hmcerror__5->SetBinContent(11,20.4211);
   hmcerror__5->SetBinContent(12,12.35429);
   hmcerror__5->SetBinContent(13,6.471381);
   hmcerror__5->SetBinContent(14,2.514736);
   hmcerror__5->SetBinContent(15,2.409556);
   hmcerror__5->SetBinContent(16,5.777972);
   hmcerror__5->SetBinError(1,251.285);
   hmcerror__5->SetBinError(2,362.1016);
   hmcerror__5->SetBinError(3,296.5145);
   hmcerror__5->SetBinError(4,203.6239);
   hmcerror__5->SetBinError(5,120.6355);
   hmcerror__5->SetBinError(6,73.04342);
   hmcerror__5->SetBinError(7,46.03203);
   hmcerror__5->SetBinError(8,27.78567);
   hmcerror__5->SetBinError(9,23.16233);
   hmcerror__5->SetBinError(10,17.23449);
   hmcerror__5->SetBinError(11,11.90389);
   hmcerror__5->SetBinError(12,8.729727);
   hmcerror__5->SetBinError(13,7.656544);
   hmcerror__5->SetBinError(14,3.170938);
   hmcerror__5->SetBinError(15,7.565844);
   hmcerror__5->SetBinError(16,7.72135);
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
   
   Double_t _fx3005[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3005[15] = {
   1036,
   1362,
   1074,
   669,
   375,
   203,
   97,
   58,
   34,
   29,
   14,
   11,
   4,
   1,
   3};
   Double_t _felx3005[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3005[15] = {
   32.18695,
   36.90528,
   32.77194,
   25.86503,
   19.36492,
   14.24781,
   9.9704,
   7.7446,
   5.9703,
   5.5285,
   3.9102,
   3.4975,
   2.29683,
   1,
   2.143368};
   Double_t _fehx3005[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3005[15] = {
   32.18695,
   36.90528,
   32.77194,
   25.86503,
   19.36492,
   14.24781,
   9.769,
   7.5415,
   5.7635,
   5.3201,
   3.6898,
   3.27,
   1.98186,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,495);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(1538.796);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4970.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  405.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 443.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 438.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   
   Double_t _fx3006[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3006[15] = {
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
   Double_t _felx3006[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3006[15] = {
   0.2323831,
   0.2712799,
   0.283874,
   0.2886767,
   0.2957347,
   0.3075151,
   0.3034154,
   0.3196888,
   0.4887022,
   0.4594778,
   0.5829209,
   0.7066149,
   1.183139,
   1.260943,
   3.139933};
   Double_t _fehx3006[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3006[15] = {
   0.2323831,
   0.2712799,
   0.283874,
   0.2886767,
   0.2957347,
   0.3075151,
   0.3034154,
   0.3196888,
   0.4887022,
   0.4594778,
   0.5829209,
   0.7066149,
   1.183139,
   1.260943,
   3.139933};
   grae = new TGraphAsymmErrors(15,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,495);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3007[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3007[15] = {
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
   Double_t _felx3007[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3007[15] = {
   0.2207831,
   0.2672035,
   0.281294,
   0.2810775,
   0.2757536,
   0.277053,
   0.2730167,
   0.2522575,
   0.2531874,
   0.2646578,
   0.3439539,
   0.354187,
   0.3542515,
   0.5956187,
   0.4587606};
   Double_t _fehx3007[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3007[15] = {
   0.2207831,
   0.2672035,
   0.281294,
   0.2810775,
   0.2757536,
   0.277053,
   0.2730167,
   0.2522575,
   0.2531874,
   0.2646578,
   0.3439539,
   0.354187,
   0.3542515,
   0.5956187,
   0.4587606};
   grae = new TGraphAsymmErrors(15,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,495);
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
   
   Double_t _fx3008[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3008[15] = {
   0.9580711,
   1.020386,
   1.028215,
   0.9484383,
   0.9193024,
   0.8546365,
   0.6393655,
   0.6673206,
   0.7173661,
   0.7731505,
   0.6855653,
   0.8903788,
   0.6181061,
   0.3976561,
   1.245043};
   Double_t _felx3008[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3008[15] = {
   0.02976582,
   0.02764877,
   0.03137487,
   0.03666874,
   0.04747257,
   0.05998372,
   0.06571887,
   0.08910571,
   0.1259674,
   0.1473918,
   0.1914784,
   0.2831,
   0.3549212,
   0.3976561,
   0.8895282};
   Double_t _fehx3008[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3008[15] = {
   0.02976582,
   0.02764877,
   0.03137487,
   0.03666874,
   0.04747257,
   0.05998372,
   0.06439136,
   0.08676894,
   0.1216041,
   0.1418358,
   0.1806856,
   0.2646853,
   0.3062499,
   0.5406969,
   0.7155758};
   grae = new TGraphAsymmErrors(15,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,495);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.15668);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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

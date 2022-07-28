#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sun Jun  5 00:41:48 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-7.648267,1128.205,845.7373);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__19->SetBinContent(0,3.517757);
   hmc__19->SetBinContent(1,67.15352);
   hmc__19->SetBinContent(2,354.6601);
   hmc__19->SetBinContent(3,380.0815);
   hmc__19->SetBinContent(4,382.4134);
   hmc__19->SetBinContent(5,355.0902);
   hmc__19->SetBinContent(6,291.0168);
   hmc__19->SetBinContent(7,246.9007);
   hmc__19->SetBinContent(8,176.7916);
   hmc__19->SetBinContent(9,128.8524);
   hmc__19->SetBinContent(10,99.77027);
   hmc__19->SetBinContent(11,70.61637);
   hmc__19->SetBinContent(12,47.97561);
   hmc__19->SetBinContent(13,34.43345);
   hmc__19->SetBinContent(14,29.34642);
   hmc__19->SetBinContent(15,17.18774);
   hmc__19->SetBinContent(16,57.30354);
   hmc__19->SetBinError(0,0.9712631);
   hmc__19->SetBinError(1,18.53153);
   hmc__19->SetBinError(2,91.66696);
   hmc__19->SetBinError(3,95.79221);
   hmc__19->SetBinError(4,95.66928);
   hmc__19->SetBinError(5,88.15292);
   hmc__19->SetBinError(6,70.2558);
   hmc__19->SetBinError(7,59.5971);
   hmc__19->SetBinError(8,44.86975);
   hmc__19->SetBinError(9,35.98336);
   hmc__19->SetBinError(10,26.52835);
   hmc__19->SetBinError(11,22.08554);
   hmc__19->SetBinError(12,14.21591);
   hmc__19->SetBinError(13,12.33203);
   hmc__19->SetBinError(14,12.5721);
   hmc__19->SetBinError(15,7.989323);
   hmc__19->SetBinError(16,24.67055);
   hmc__19->SetMinimum(-7.648267);
   hmc__19->SetMaximum(803.0681);
   hmc__19->SetEntries(2712.362);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",15,0,1000);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(401.5341);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,5.811872);
   hbadmatch_stack_1->SetBinContent(3,3.561525);
   hbadmatch_stack_1->SetBinContent(4,9.41896);
   hbadmatch_stack_1->SetBinContent(5,6.909897);
   hbadmatch_stack_1->SetBinContent(6,7.935834);
   hbadmatch_stack_1->SetBinContent(7,4.081786);
   hbadmatch_stack_1->SetBinContent(8,6.216609);
   hbadmatch_stack_1->SetBinContent(9,2.144191);
   hbadmatch_stack_1->SetBinContent(10,3.548038);
   hbadmatch_stack_1->SetBinContent(11,2.175651);
   hbadmatch_stack_1->SetBinContent(12,1.8985);
   hbadmatch_stack_1->SetBinContent(13,1.314087);
   hbadmatch_stack_1->SetBinContent(14,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,2.109743);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,1.470825);
   hbadmatch_stack_1->SetBinError(3,0.9463647);
   hbadmatch_stack_1->SetBinError(4,2.587334);
   hbadmatch_stack_1->SetBinError(5,1.328991);
   hbadmatch_stack_1->SetBinError(6,1.440382);
   hbadmatch_stack_1->SetBinError(7,1.02544);
   hbadmatch_stack_1->SetBinError(8,1.321419);
   hbadmatch_stack_1->SetBinError(9,0.7850774);
   hbadmatch_stack_1->SetBinError(10,0.9399785);
   hbadmatch_stack_1->SetBinError(11,0.8477698);
   hbadmatch_stack_1->SetBinError(12,0.7504815);
   hbadmatch_stack_1->SetBinError(13,0.6054587);
   hbadmatch_stack_1->SetBinError(14,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.7254221);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,1.219797);
   hext_stack_2->SetBinContent(1,7.892495);
   hext_stack_2->SetBinContent(2,22.13612);
   hext_stack_2->SetBinContent(3,16.09068);
   hext_stack_2->SetBinContent(4,24.53105);
   hext_stack_2->SetBinContent(5,24.68104);
   hext_stack_2->SetBinContent(6,21.25672);
   hext_stack_2->SetBinContent(7,22.57302);
   hext_stack_2->SetBinContent(8,11.2159);
   hext_stack_2->SetBinContent(9,5.687976);
   hext_stack_2->SetBinContent(10,11.04431);
   hext_stack_2->SetBinContent(11,4.214394);
   hext_stack_2->SetBinContent(12,3.737183);
   hext_stack_2->SetBinContent(13,2.352983);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,7.359033);
   hext_stack_2->SetBinError(0,0.7042499);
   hext_stack_2->SetBinError(1,2.062861);
   hext_stack_2->SetBinError(2,3.240101);
   hext_stack_2->SetBinError(3,2.748253);
   hext_stack_2->SetBinError(4,3.300839);
   hext_stack_2->SetBinError(5,3.570509);
   hext_stack_2->SetBinError(6,3.190072);
   hext_stack_2->SetBinError(7,3.414766);
   hext_stack_2->SetBinError(8,2.388335);
   hext_stack_2->SetBinError(9,1.476277);
   hext_stack_2->SetBinError(10,2.405238);
   hext_stack_2->SetBinError(11,1.305512);
   hext_stack_2->SetBinError(12,1.188642);
   hext_stack_2->SetBinError(13,0.8925942);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,1.853466);
   hext_stack_2->SetEntries(428);

   ci = 1519;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,2.262269);
   hdirt_stack_3->SetBinContent(3,2.10393);
   hdirt_stack_3->SetBinContent(4,2.340576);
   hdirt_stack_3->SetBinContent(5,1.317008);
   hdirt_stack_3->SetBinContent(6,1.540433);
   hdirt_stack_3->SetBinContent(7,0.7023807);
   hdirt_stack_3->SetBinContent(8,4.167396e-09);
   hdirt_stack_3->SetBinContent(9,0.5758626);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.7853966);
   hdirt_stack_3->SetBinError(3,0.7766036);
   hdirt_stack_3->SetBinError(4,1.087147);
   hdirt_stack_3->SetBinError(5,0.5070573);
   hdirt_stack_3->SetBinError(6,0.6243015);
   hdirt_stack_3->SetBinError(7,0.4055848);
   hdirt_stack_3->SetBinError(8,4.167396e-09);
   hdirt_stack_3->SetBinError(9,0.3389606);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetEntries(50);

   ci = 1520;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(1,4.798829);
   houtFV_stack_4->SetBinContent(2,18.71955);
   houtFV_stack_4->SetBinContent(3,17.61585);
   houtFV_stack_4->SetBinContent(4,15.64833);
   houtFV_stack_4->SetBinContent(5,11.73261);
   houtFV_stack_4->SetBinContent(6,8.555167);
   houtFV_stack_4->SetBinContent(7,6.996519);
   houtFV_stack_4->SetBinContent(8,1.713804);
   houtFV_stack_4->SetBinContent(9,3.464564);
   houtFV_stack_4->SetBinContent(10,0.9269427);
   houtFV_stack_4->SetBinContent(11,1.268811);
   houtFV_stack_4->SetBinContent(12,0.846437);
   houtFV_stack_4->SetBinContent(13,0.9269427);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,1.26712);
   houtFV_stack_4->SetBinError(1,1.085665);
   houtFV_stack_4->SetBinError(2,2.141528);
   houtFV_stack_4->SetBinError(3,2.084076);
   houtFV_stack_4->SetBinError(4,1.990066);
   houtFV_stack_4->SetBinError(5,1.723799);
   houtFV_stack_4->SetBinError(6,1.477001);
   houtFV_stack_4->SetBinError(7,1.326098);
   houtFV_stack_4->SetBinError(8,0.6207051);
   houtFV_stack_4->SetBinError(9,0.9613675);
   houtFV_stack_4->SetBinError(10,0.4800908);
   houtFV_stack_4->SetBinError(11,0.5889569);
   houtFV_stack_4->SetBinError(12,0.4265946);
   houtFV_stack_4->SetBinError(13,0.4800908);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.5883944);
   houtFV_stack_4->SetEntries(411);

   ci = 1521;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.254676);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8501219);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5430539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.57029);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4003631);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2770189);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1881969);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2229107);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1522;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.552366);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.42598);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.050326);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.66363);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.450472);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.184922);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.659726);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5781597);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.489117);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4566047);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5214062);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3456701);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2933946);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4445111);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1523;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.6835541);
   hNCpi0inFVres_stack_7->SetBinContent(1,41.79139);
   hNCpi0inFVres_stack_7->SetBinContent(2,231.5028);
   hNCpi0inFVres_stack_7->SetBinContent(3,233.4338);
   hNCpi0inFVres_stack_7->SetBinContent(4,206.5921);
   hNCpi0inFVres_stack_7->SetBinContent(5,178.4691);
   hNCpi0inFVres_stack_7->SetBinContent(6,130.9733);
   hNCpi0inFVres_stack_7->SetBinContent(7,94.82536);
   hNCpi0inFVres_stack_7->SetBinContent(8,62.34513);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.59287);
   hNCpi0inFVres_stack_7->SetBinContent(10,28.46426);
   hNCpi0inFVres_stack_7->SetBinContent(11,19.17586);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.23976);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.725676);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.229942);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.361634);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.01202);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3022172);
   hNCpi0inFVres_stack_7->SetBinError(1,2.132043);
   hNCpi0inFVres_stack_7->SetBinError(2,4.988205);
   hNCpi0inFVres_stack_7->SetBinError(3,5.050183);
   hNCpi0inFVres_stack_7->SetBinError(4,4.630947);
   hNCpi0inFVres_stack_7->SetBinError(5,4.382501);
   hNCpi0inFVres_stack_7->SetBinError(6,3.752393);
   hNCpi0inFVres_stack_7->SetBinError(7,3.214316);
   hNCpi0inFVres_stack_7->SetBinError(8,2.596148);
   hNCpi0inFVres_stack_7->SetBinError(9,2.281148);
   hNCpi0inFVres_stack_7->SetBinError(10,1.763348);
   hNCpi0inFVres_stack_7->SetBinError(11,1.507453);
   hNCpi0inFVres_stack_7->SetBinError(12,1.12331);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9207083);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7309296);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6241806);
   hNCpi0inFVres_stack_7->SetBinError(16,1.108462);
   hNCpi0inFVres_stack_7->SetEntries(24019);

   ci = 1524;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.569383);
   hNCpi0inFVdis_stack_8->SetBinContent(2,29.19481);
   hNCpi0inFVdis_stack_8->SetBinContent(3,30.54962);
   hNCpi0inFVdis_stack_8->SetBinContent(4,36.5699);
   hNCpi0inFVdis_stack_8->SetBinContent(5,31.40074);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.18997);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.55599);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.30587);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.64556);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.08198);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.697281);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.969464);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.140842);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.899784);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.79773);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.130623);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5633843);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.782052);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.78318);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.967264);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.818927);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.617994);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.493358);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.341704);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.152863);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.027711);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9450804);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8123479);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6722165);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5465528);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4423897);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6486425);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1525;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4467362);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2792353);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1526;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,0.5867651);
   hCCpi0inFV_stack_11->SetBinContent(1,2.939718);
   hCCpi0inFV_stack_11->SetBinContent(2,13.26978);
   hCCpi0inFV_stack_11->SetBinContent(3,27.68125);
   hCCpi0inFV_stack_11->SetBinContent(4,35.38062);
   hCCpi0inFV_stack_11->SetBinContent(5,46.09653);
   hCCpi0inFV_stack_11->SetBinContent(6,49.51949);
   hCCpi0inFV_stack_11->SetBinContent(7,52.64529);
   hCCpi0inFV_stack_11->SetBinContent(8,42.77098);
   hCCpi0inFV_stack_11->SetBinContent(9,32.2864);
   hCCpi0inFV_stack_11->SetBinContent(10,24.85118);
   hCCpi0inFV_stack_11->SetBinContent(11,21.75574);
   hCCpi0inFV_stack_11->SetBinContent(12,14.21345);
   hCCpi0inFV_stack_11->SetBinContent(13,12.45936);
   hCCpi0inFV_stack_11->SetBinContent(14,12.49102);
   hCCpi0inFV_stack_11->SetBinContent(15,7.477109);
   hCCpi0inFV_stack_11->SetBinContent(16,18.27773);
   hCCpi0inFV_stack_11->SetBinError(0,0.3387718);
   hCCpi0inFV_stack_11->SetBinError(1,0.9141884);
   hCCpi0inFV_stack_11->SetBinError(2,1.879289);
   hCCpi0inFV_stack_11->SetBinError(3,2.690874);
   hCCpi0inFV_stack_11->SetBinError(4,2.99362);
   hCCpi0inFV_stack_11->SetBinError(5,3.35118);
   hCCpi0inFV_stack_11->SetBinError(6,3.464001);
   hCCpi0inFV_stack_11->SetBinError(7,3.590124);
   hCCpi0inFV_stack_11->SetBinError(8,3.329905);
   hCCpi0inFV_stack_11->SetBinError(9,2.857665);
   hCCpi0inFV_stack_11->SetBinError(10,2.47786);
   hCCpi0inFV_stack_11->SetBinError(11,2.354319);
   hCCpi0inFV_stack_11->SetBinError(12,1.908757);
   hCCpi0inFV_stack_11->SetBinError(13,1.812134);
   hCCpi0inFV_stack_11->SetBinError(14,1.783346);
   hCCpi0inFV_stack_11->SetBinError(15,1.401803);
   hCCpi0inFV_stack_11->SetBinError(16,2.10261);
   hCCpi0inFV_stack_11->SetEntries(1778);

   ci = 1528;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,0.7336084);
   hNCinFV_stack_12->SetBinContent(1,1.462145);
   hNCinFV_stack_12->SetBinContent(2,10.83361);
   hNCinFV_stack_12->SetBinContent(3,13.87794);
   hNCinFV_stack_12->SetBinContent(4,16.47327);
   hNCinFV_stack_12->SetBinContent(5,20.91188);
   hNCinFV_stack_12->SetBinContent(6,14.84461);
   hNCinFV_stack_12->SetBinContent(7,15.00328);
   hNCinFV_stack_12->SetBinContent(8,10.45817);
   hNCinFV_stack_12->SetBinContent(9,11.42545);
   hNCinFV_stack_12->SetBinContent(10,7.180788);
   hNCinFV_stack_12->SetBinContent(11,3.771167);
   hNCinFV_stack_12->SetBinContent(12,2.784209);
   hNCinFV_stack_12->SetBinContent(13,1.660551);
   hNCinFV_stack_12->SetBinContent(14,3.609717);
   hNCinFV_stack_12->SetBinContent(15,2.053982);
   hNCinFV_stack_12->SetBinContent(16,3.953276);
   hNCinFV_stack_12->SetBinError(0,0.4394482);
   hNCinFV_stack_12->SetBinError(1,0.6198731);
   hNCinFV_stack_12->SetBinError(2,1.676037);
   hNCinFV_stack_12->SetBinError(3,1.872493);
   hNCinFV_stack_12->SetBinError(4,1.991231);
   hNCinFV_stack_12->SetBinError(5,2.297252);
   hNCinFV_stack_12->SetBinError(6,1.921742);
   hNCinFV_stack_12->SetBinError(7,1.943213);
   hNCinFV_stack_12->SetBinError(8,1.593852);
   hNCinFV_stack_12->SetBinError(9,1.710513);
   hNCinFV_stack_12->SetBinError(10,1.359959);
   hNCinFV_stack_12->SetBinError(11,0.9421226);
   hNCinFV_stack_12->SetBinError(12,0.8323376);
   hNCinFV_stack_12->SetBinError(13,0.650847);
   hNCinFV_stack_12->SetBinError(14,1.000956);
   hNCinFV_stack_12->SetBinError(15,0.7078105);
   hNCinFV_stack_12->SetBinError(16,1.057809);
   hNCinFV_stack_12->SetEntries(601);

   ci = 1529;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(1,3.609371);
   hnumuCCinFV_stack_13->SetBinContent(2,15.71197);
   hnumuCCinFV_stack_13->SetBinContent(3,30.15502);
   hnumuCCinFV_stack_13->SetBinContent(4,31.46617);
   hnumuCCinFV_stack_13->SetBinContent(5,29.07391);
   hnumuCCinFV_stack_13->SetBinContent(6,28.59305);
   hnumuCCinFV_stack_13->SetBinContent(7,24.04602);
   hnumuCCinFV_stack_13->SetBinContent(8,21.86197);
   hnumuCCinFV_stack_13->SetBinContent(9,11.92951);
   hnumuCCinFV_stack_13->SetBinContent(10,11.86497);
   hnumuCCinFV_stack_13->SetBinContent(11,9.302338);
   hnumuCCinFV_stack_13->SetBinContent(12,6.700812);
   hnumuCCinFV_stack_13->SetBinContent(13,3.47652);
   hnumuCCinFV_stack_13->SetBinContent(14,2.881967);
   hnumuCCinFV_stack_13->SetBinContent(15,0.8928754);
   hnumuCCinFV_stack_13->SetBinContent(16,7.705494);
   hnumuCCinFV_stack_13->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(1,1.505104);
   hnumuCCinFV_stack_13->SetBinError(2,2.120925);
   hnumuCCinFV_stack_13->SetBinError(3,4.158105);
   hnumuCCinFV_stack_13->SetBinError(4,3.316715);
   hnumuCCinFV_stack_13->SetBinError(5,3.289529);
   hnumuCCinFV_stack_13->SetBinError(6,2.991351);
   hnumuCCinFV_stack_13->SetBinError(7,2.7952);
   hnumuCCinFV_stack_13->SetBinError(8,2.885608);
   hnumuCCinFV_stack_13->SetBinError(9,1.974632);
   hnumuCCinFV_stack_13->SetBinError(10,1.864168);
   hnumuCCinFV_stack_13->SetBinError(11,1.646752);
   hnumuCCinFV_stack_13->SetBinError(12,1.359789);
   hnumuCCinFV_stack_13->SetBinError(13,0.9237707);
   hnumuCCinFV_stack_13->SetBinError(14,0.8577475);
   hnumuCCinFV_stack_13->SetBinError(15,0.4794763);
   hnumuCCinFV_stack_13->SetBinError(16,1.439645);
   hnumuCCinFV_stack_13->SetEntries(929);

   ci = 1530;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(1,0.2538659);
   hnueCCinFV_stack_14->SetBinContent(2,1.27068);
   hnueCCinFV_stack_14->SetBinContent(3,1.289075);
   hnueCCinFV_stack_14->SetBinContent(4,1.286577);
   hnueCCinFV_stack_14->SetBinContent(5,1.207113);
   hnueCCinFV_stack_14->SetBinContent(6,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(7,2.660097);
   hnueCCinFV_stack_14->SetBinContent(8,1.215558);
   hnueCCinFV_stack_14->SetBinContent(9,1.276985);
   hnueCCinFV_stack_14->SetBinContent(10,0.6404051);
   hnueCCinFV_stack_14->SetBinContent(11,0.7820846);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,0.9269427);
   hnueCCinFV_stack_14->SetBinError(1,0.2538659);
   hnueCCinFV_stack_14->SetBinError(2,0.6542704);
   hnueCCinFV_stack_14->SetBinError(3,0.5302818);
   hnueCCinFV_stack_14->SetBinError(4,0.5272476);
   hnueCCinFV_stack_14->SetBinError(5,0.5525349);
   hnueCCinFV_stack_14->SetBinError(6,0.3387718);
   hnueCCinFV_stack_14->SetBinError(7,1.045188);
   hnueCCinFV_stack_14->SetBinError(8,0.6206425);
   hnueCCinFV_stack_14->SetBinError(9,0.5806686);
   hnueCCinFV_stack_14->SetBinError(10,0.3722443);
   hnueCCinFV_stack_14->SetBinError(11,0.463181);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,0.4800908);
   hnueCCinFV_stack_14->SetEntries(54);

   ci = 1531;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__20->SetBinContent(0,3.517757);
   hmcerror__20->SetBinContent(1,67.15352);
   hmcerror__20->SetBinContent(2,354.6601);
   hmcerror__20->SetBinContent(3,380.0815);
   hmcerror__20->SetBinContent(4,382.4134);
   hmcerror__20->SetBinContent(5,355.0902);
   hmcerror__20->SetBinContent(6,291.0168);
   hmcerror__20->SetBinContent(7,246.9007);
   hmcerror__20->SetBinContent(8,176.7916);
   hmcerror__20->SetBinContent(9,128.8524);
   hmcerror__20->SetBinContent(10,99.77027);
   hmcerror__20->SetBinContent(11,70.61637);
   hmcerror__20->SetBinContent(12,47.97561);
   hmcerror__20->SetBinContent(13,34.43345);
   hmcerror__20->SetBinContent(14,29.34642);
   hmcerror__20->SetBinContent(15,17.18774);
   hmcerror__20->SetBinContent(16,57.30354);
   hmcerror__20->SetBinError(0,0.9712631);
   hmcerror__20->SetBinError(1,18.53153);
   hmcerror__20->SetBinError(2,91.66696);
   hmcerror__20->SetBinError(3,95.79221);
   hmcerror__20->SetBinError(4,95.66928);
   hmcerror__20->SetBinError(5,88.15292);
   hmcerror__20->SetBinError(6,70.2558);
   hmcerror__20->SetBinError(7,59.5971);
   hmcerror__20->SetBinError(8,44.86975);
   hmcerror__20->SetBinError(9,35.98336);
   hmcerror__20->SetBinError(10,26.52835);
   hmcerror__20->SetBinError(11,22.08554);
   hmcerror__20->SetBinError(12,14.21591);
   hmcerror__20->SetBinError(13,12.33203);
   hmcerror__20->SetBinError(14,12.5721);
   hmcerror__20->SetBinError(15,7.989323);
   hmcerror__20->SetBinError(16,24.67055);
   hmcerror__20->SetEntries(2712.362);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3025[15] = {
   78,
   278,
   297,
   308,
   250,
   214,
   175,
   115,
   85,
   58,
   41,
   29,
   22,
   18,
   15};
   Double_t _felx3025[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3025[15] = {
   8.9562,
   16.67333,
   17.23369,
   17.54993,
   15.81139,
   14.62874,
   13.22876,
   10.72381,
   9.3428,
   7.7446,
   6.5384,
   5.5285,
   4.8417,
   4.4008,
   4.0385};
   Double_t _fehx3025[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3025[15] = {
   8.7542,
   16.67333,
   17.23369,
   17.54993,
   15.81139,
   14.62874,
   13.22876,
   10.72381,
   9.1411,
   7.5415,
   6.3331,
   5.3201,
   4.6299,
   4.1858,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1100);
   Graph_Graph3025->SetMinimum(9.86535);
   Graph_Graph3025->SetMaximum(357.0088);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.9/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1983.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.8","F");

   ci = 1518;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 179.8","F");

   ci = 1519;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 93.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.1","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1301.7","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  241.6","F");

   ci = 1525;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1526;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 395.8","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 136.4","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 231.6","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 12.9","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3026[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3026[15] = {
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
   Double_t _felx3026[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3026[15] = {
   0.2759577,
   0.2584643,
   0.2520307,
   0.2501724,
   0.248255,
   0.241415,
   0.2413808,
   0.2538002,
   0.2792602,
   0.2658944,
   0.3127538,
   0.2963154,
   0.3581411,
   0.4284031,
   0.4648269};
   Double_t _fehx3026[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3026[15] = {
   0.2759577,
   0.2584643,
   0.2520307,
   0.2501724,
   0.248255,
   0.241415,
   0.2413808,
   0.2538002,
   0.2792602,
   0.2658944,
   0.3127538,
   0.2963154,
   0.3581411,
   0.4284031,
   0.4648269};
   grae = new TGraphAsymmErrors(15,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1100);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3027[15] = {
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
   Double_t _felx3027[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3027[15] = {
   0.2274394,
   0.2365877,
   0.2342966,
   0.2327657,
   0.2322123,
   0.2310412,
   0.2211012,
   0.2349221,
   0.239092,
   0.2250457,
   0.2246772,
   0.2233306,
   0.2315805,
   0.2411881,
   0.2630472};
   Double_t _fehx3027[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3027[15] = {
   0.2274394,
   0.2365877,
   0.2342966,
   0.2327657,
   0.2322123,
   0.2310412,
   0.2211012,
   0.2349221,
   0.239092,
   0.2250457,
   0.2246772,
   0.2233306,
   0.2315805,
   0.2411881,
   0.2630472};
   grae = new TGraphAsymmErrors(15,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1100);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3028[15] = {
   1.161518,
   0.7838492,
   0.7814114,
   0.8054112,
   0.7040465,
   0.7353529,
   0.7087869,
   0.6504832,
   0.6596694,
   0.5813355,
   0.5806019,
   0.6044738,
   0.6389136,
   0.6133627,
   0.8727152};
   Double_t _felx3028[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3028[15] = {
   0.133369,
   0.04701215,
   0.04534209,
   0.04589256,
   0.04452781,
   0.05026769,
   0.05357925,
   0.06065788,
   0.07250776,
   0.07762433,
   0.09259043,
   0.1152356,
   0.1406104,
   0.1499604,
   0.234964};
   Double_t _fehx3028[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3028[15] = {
   0.130361,
   0.04701215,
   0.04534209,
   0.04589256,
   0.04452781,
   0.05026769,
   0.05357925,
   0.06065788,
   0.0709424,
   0.07558865,
   0.08968317,
   0.1108918,
   0.1344594,
   0.1426341,
   0.222234};
   grae = new TGraphAsymmErrors(15,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1100);
   Graph_Graph3028->SetMinimum(0.3805547);
   Graph_Graph3028->SetMaximum(1.374726);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 20:33:12 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-3.826484,1.25641,423.1285);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__16->SetBinContent(1,14.99868);
   hmc__16->SetBinContent(2,17.36982);
   hmc__16->SetBinContent(3,15.885);
   hmc__16->SetBinContent(4,16.95668);
   hmc__16->SetBinContent(5,14.91471);
   hmc__16->SetBinContent(6,21.01069);
   hmc__16->SetBinContent(7,20.31208);
   hmc__16->SetBinContent(8,26.86448);
   hmc__16->SetBinContent(9,27.89229);
   hmc__16->SetBinContent(10,28.79471);
   hmc__16->SetBinContent(11,32.99326);
   hmc__16->SetBinContent(12,33.43813);
   hmc__16->SetBinContent(13,39.54797);
   hmc__16->SetBinContent(14,45.64773);
   hmc__16->SetBinContent(15,50.0352);
   hmc__16->SetBinContent(16,61.20377);
   hmc__16->SetBinContent(17,78.00412);
   hmc__16->SetBinContent(18,97.86949);
   hmc__16->SetBinContent(19,120.7071);
   hmc__16->SetBinContent(20,191.3242);
   hmc__16->SetBinError(1,4.086834);
   hmc__16->SetBinError(2,4.62342);
   hmc__16->SetBinError(3,3.819044);
   hmc__16->SetBinError(4,4.184433);
   hmc__16->SetBinError(5,4.792413);
   hmc__16->SetBinError(6,5.675569);
   hmc__16->SetBinError(7,5.115402);
   hmc__16->SetBinError(8,7.472765);
   hmc__16->SetBinError(9,7.131378);
   hmc__16->SetBinError(10,8.95095);
   hmc__16->SetBinError(11,9.515266);
   hmc__16->SetBinError(12,9.539342);
   hmc__16->SetBinError(13,10.9392);
   hmc__16->SetBinError(14,10.64916);
   hmc__16->SetBinError(15,11.78742);
   hmc__16->SetBinError(16,15.4327);
   hmc__16->SetBinError(17,18.94048);
   hmc__16->SetBinError(18,20.00788);
   hmc__16->SetBinError(19,26.52859);
   hmc__16->SetBinError(20,39.12597);
   hmc__16->SetBinError(21,0.3895343);
   hmc__16->SetMinimum(-3.826484);
   hmc__16->SetMaximum(401.7808);
   hmc__16->SetEntries(945.7007);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,-1,1);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(200.8904);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.1209555);
   hbadmatch_stack_1->SetBinContent(11,0.7350143);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinContent(14,0.5430812);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.2995255);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,1.463836);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.1209556);
   hbadmatch_stack_1->SetBinError(11,0.5211687);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetBinError(14,0.3960943);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.2219614);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.620407);
   hbadmatch_stack_1->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,0.6416141);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,1.055394);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,1.454812);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,1.290409);
   hext_stack_2->SetBinContent(18,0.8131978);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,0.6416141);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.6130171);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.8615765);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.788756);
   hext_stack_2->SetBinError(18,0.5750177);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetEntries(22);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(6,0.2574102);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(6,0.2574102);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetEntries(3);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(7,0.3008363);
   houtFV_stack_4->SetBinContent(9,0.2439067);
   houtFV_stack_4->SetBinContent(10,0.5352025);
   houtFV_stack_4->SetBinContent(11,0.2722431);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.6417246);
   houtFV_stack_4->SetBinContent(15,0.1950248);
   houtFV_stack_4->SetBinContent(17,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.4398267);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(7,0.3008363);
   houtFV_stack_4->SetBinError(9,0.2439067);
   houtFV_stack_4->SetBinError(10,0.3921167);
   houtFV_stack_4->SetBinError(11,0.2107163);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(14,0.3731271);
   houtFV_stack_4->SetBinError(15,0.1950249);
   houtFV_stack_4->SetBinError(17,0.2770047);
   houtFV_stack_4->SetBinError(18,0.3129898);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetEntries(20);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1408796);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1028825);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1934917);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2032031);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4310431);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3121674);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.4412365);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.6696143);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.1363559);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7547352);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3225135);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6873943);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.242172);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.9856213);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.8576863);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7369424);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.478094);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.176241);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.101876);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.039758);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.611266);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.996234);
   hNCpi0inFVres_stack_7->SetBinError(1,0.08351144);
   hNCpi0inFVres_stack_7->SetBinError(2,0.07873904);
   hNCpi0inFVres_stack_7->SetBinError(3,0.164988);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1060521);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3332688);
   hNCpi0inFVres_stack_7->SetBinError(6,0.224147);
   hNCpi0inFVres_stack_7->SetBinError(7,0.07642176);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3099455);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1170141);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4183018);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4361123);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4021486);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2775416);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1817684);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3887491);
   hNCpi0inFVres_stack_7->SetBinError(16,0.259414);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3031819);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4215608);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6315046);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7359006);
   hNCpi0inFVres_stack_7->SetEntries(461);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.428757);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2306892);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.06459633);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.452784);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.2759914);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.03300044);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.1936035);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.4969086);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1858747);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5214284);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3149416);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.31008);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.024085);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7434328);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6124897);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6601608);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.662959);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.318291);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.637805);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.422318);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.235443);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1695932);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.03831154);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3367147);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.119231);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.02349207);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1014669);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.192458);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1167728);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2899338);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2148776);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1842818);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4201515);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2135684);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2122915);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2560152);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4597788);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8038192);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6090012);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9241079);
   hNCpi0inFVdis_stack_8->SetEntries(335);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,10.84038);
   hCCpi0inFV_stack_10->SetBinContent(2,14.55153);
   hCCpi0inFV_stack_10->SetBinContent(3,12.56263);
   hCCpi0inFV_stack_10->SetBinContent(4,12.3955);
   hCCpi0inFV_stack_10->SetBinContent(5,11.1436);
   hCCpi0inFV_stack_10->SetBinContent(6,15.25156);
   hCCpi0inFV_stack_10->SetBinContent(7,14.70683);
   hCCpi0inFV_stack_10->SetBinContent(8,16.41289);
   hCCpi0inFV_stack_10->SetBinContent(9,20.8335);
   hCCpi0inFV_stack_10->SetBinContent(10,22.93897);
   hCCpi0inFV_stack_10->SetBinContent(11,22.6525);
   hCCpi0inFV_stack_10->SetBinContent(12,25.39022);
   hCCpi0inFV_stack_10->SetBinContent(13,28.18903);
   hCCpi0inFV_stack_10->SetBinContent(14,33.08433);
   hCCpi0inFV_stack_10->SetBinContent(15,37.29493);
   hCCpi0inFV_stack_10->SetBinContent(16,47.24293);
   hCCpi0inFV_stack_10->SetBinContent(17,61.30967);
   hCCpi0inFV_stack_10->SetBinContent(18,69.44333);
   hCCpi0inFV_stack_10->SetBinContent(19,91.74672);
   hCCpi0inFV_stack_10->SetBinContent(20,138.5315);
   hCCpi0inFV_stack_10->SetBinError(1,1.676827);
   hCCpi0inFV_stack_10->SetBinError(2,1.932621);
   hCCpi0inFV_stack_10->SetBinError(3,1.788948);
   hCCpi0inFV_stack_10->SetBinError(4,1.764664);
   hCCpi0inFV_stack_10->SetBinError(5,1.665471);
   hCCpi0inFV_stack_10->SetBinError(6,1.943138);
   hCCpi0inFV_stack_10->SetBinError(7,1.953633);
   hCCpi0inFV_stack_10->SetBinError(8,1.987241);
   hCCpi0inFV_stack_10->SetBinError(9,2.273027);
   hCCpi0inFV_stack_10->SetBinError(10,2.454998);
   hCCpi0inFV_stack_10->SetBinError(11,2.410881);
   hCCpi0inFV_stack_10->SetBinError(12,2.558537);
   hCCpi0inFV_stack_10->SetBinError(13,2.654473);
   hCCpi0inFV_stack_10->SetBinError(14,2.839785);
   hCCpi0inFV_stack_10->SetBinError(15,3.099053);
   hCCpi0inFV_stack_10->SetBinError(16,3.452903);
   hCCpi0inFV_stack_10->SetBinError(17,3.974673);
   hCCpi0inFV_stack_10->SetBinError(18,4.210584);
   hCCpi0inFV_stack_10->SetBinError(19,4.826367);
   hCCpi0inFV_stack_10->SetBinError(20,5.886552);
   hCCpi0inFV_stack_10->SetEntries(3003);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(5,0.1967154);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.5352025);
   hNCinFV_stack_11->SetBinContent(16,1.608988);
   hNCinFV_stack_11->SetBinContent(17,0.3917402);
   hNCinFV_stack_11->SetBinContent(18,0.1950248);
   hNCinFV_stack_11->SetBinContent(19,2.157107);
   hNCinFV_stack_11->SetBinContent(20,2.640747);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(5,0.1967154);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3921167);
   hNCinFV_stack_11->SetBinError(16,0.6801404);
   hNCinFV_stack_11->SetBinError(17,0.2770047);
   hNCinFV_stack_11->SetBinError(18,0.1950249);
   hNCinFV_stack_11->SetBinError(19,0.6503978);
   hNCinFV_stack_11->SetBinError(20,0.784705);
   hNCinFV_stack_11->SetEntries(46);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.592565);
   hnumuCCinFV_stack_12->SetBinContent(2,0.9514401);
   hnumuCCinFV_stack_12->SetBinContent(3,1.96544);
   hnumuCCinFV_stack_12->SetBinContent(4,3.192914);
   hnumuCCinFV_stack_12->SetBinContent(5,2.532771);
   hnumuCCinFV_stack_12->SetBinContent(6,4.195792);
   hnumuCCinFV_stack_12->SetBinContent(7,4.567859);
   hnumuCCinFV_stack_12->SetBinContent(8,8.144552);
   hnumuCCinFV_stack_12->SetBinContent(9,5.572881);
   hnumuCCinFV_stack_12->SetBinContent(10,3.655973);
   hnumuCCinFV_stack_12->SetBinContent(11,7.255285);
   hnumuCCinFV_stack_12->SetBinContent(12,4.170355);
   hnumuCCinFV_stack_12->SetBinContent(13,8.533681);
   hnumuCCinFV_stack_12->SetBinContent(14,8.438677);
   hnumuCCinFV_stack_12->SetBinContent(15,9.722734);
   hnumuCCinFV_stack_12->SetBinContent(16,10.32042);
   hnumuCCinFV_stack_12->SetBinContent(17,12.89069);
   hnumuCCinFV_stack_12->SetBinContent(18,20.6838);
   hnumuCCinFV_stack_12->SetBinContent(19,18.94435);
   hnumuCCinFV_stack_12->SetBinContent(20,36.86819);
   hnumuCCinFV_stack_12->SetBinError(1,0.809985);
   hnumuCCinFV_stack_12->SetBinError(2,0.4905532);
   hnumuCCinFV_stack_12->SetBinError(3,0.7218936);
   hnumuCCinFV_stack_12->SetBinError(4,0.8368449);
   hnumuCCinFV_stack_12->SetBinError(5,0.744284);
   hnumuCCinFV_stack_12->SetBinError(6,1.10549);
   hnumuCCinFV_stack_12->SetBinError(7,1.08493);
   hnumuCCinFV_stack_12->SetBinError(8,2.657325);
   hnumuCCinFV_stack_12->SetBinError(9,1.273419);
   hnumuCCinFV_stack_12->SetBinError(10,0.9842893);
   hnumuCCinFV_stack_12->SetBinError(11,1.718853);
   hnumuCCinFV_stack_12->SetBinError(12,1.24009);
   hnumuCCinFV_stack_12->SetBinError(13,1.50173);
   hnumuCCinFV_stack_12->SetBinError(14,1.514435);
   hnumuCCinFV_stack_12->SetBinError(15,1.589385);
   hnumuCCinFV_stack_12->SetBinError(16,1.663153);
   hnumuCCinFV_stack_12->SetBinError(17,2.342544);
   hnumuCCinFV_stack_12->SetBinError(18,2.572974);
   hnumuCCinFV_stack_12->SetBinError(19,2.205015);
   hnumuCCinFV_stack_12->SetBinError(20,3.746031);
   hnumuCCinFV_stack_12->SetEntries(711);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,1.460455);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.340721);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.6193387);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__17->SetBinContent(1,14.99868);
   hmcerror__17->SetBinContent(2,17.36982);
   hmcerror__17->SetBinContent(3,15.885);
   hmcerror__17->SetBinContent(4,16.95668);
   hmcerror__17->SetBinContent(5,14.91471);
   hmcerror__17->SetBinContent(6,21.01069);
   hmcerror__17->SetBinContent(7,20.31208);
   hmcerror__17->SetBinContent(8,26.86448);
   hmcerror__17->SetBinContent(9,27.89229);
   hmcerror__17->SetBinContent(10,28.79471);
   hmcerror__17->SetBinContent(11,32.99326);
   hmcerror__17->SetBinContent(12,33.43813);
   hmcerror__17->SetBinContent(13,39.54797);
   hmcerror__17->SetBinContent(14,45.64773);
   hmcerror__17->SetBinContent(15,50.0352);
   hmcerror__17->SetBinContent(16,61.20377);
   hmcerror__17->SetBinContent(17,78.00412);
   hmcerror__17->SetBinContent(18,97.86949);
   hmcerror__17->SetBinContent(19,120.7071);
   hmcerror__17->SetBinContent(20,191.3242);
   hmcerror__17->SetBinError(1,4.086834);
   hmcerror__17->SetBinError(2,4.62342);
   hmcerror__17->SetBinError(3,3.819044);
   hmcerror__17->SetBinError(4,4.184433);
   hmcerror__17->SetBinError(5,4.792413);
   hmcerror__17->SetBinError(6,5.675569);
   hmcerror__17->SetBinError(7,5.115402);
   hmcerror__17->SetBinError(8,7.472765);
   hmcerror__17->SetBinError(9,7.131378);
   hmcerror__17->SetBinError(10,8.95095);
   hmcerror__17->SetBinError(11,9.515266);
   hmcerror__17->SetBinError(12,9.539342);
   hmcerror__17->SetBinError(13,10.9392);
   hmcerror__17->SetBinError(14,10.64916);
   hmcerror__17->SetBinError(15,11.78742);
   hmcerror__17->SetBinError(16,15.4327);
   hmcerror__17->SetBinError(17,18.94048);
   hmcerror__17->SetBinError(18,20.00788);
   hmcerror__17->SetBinError(19,26.52859);
   hmcerror__17->SetBinError(20,39.12597);
   hmcerror__17->SetBinError(21,0.3895343);
   hmcerror__17->SetEntries(945.7007);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3021[20] = {
   19,
   24,
   17,
   16,
   25,
   24,
   27,
   22,
   26,
   33,
   29,
   38,
   45,
   40,
   42,
   56,
   71,
   95,
   141,
   169};
   Double_t _felx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3021[20] = {
   4.5151,
   5.0476,
   4.2835,
   4.1628,
   5.1474,
   5.0476,
   5.3414,
   4.8417,
   5.2453,
   5.8847,
   5.5285,
   6.3013,
   6.8416,
   6.4604,
   6.6155,
   7.6127,
   8.5518,
   9.8686,
   11.87434,
   13};
   Double_t _fehx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3021[20] = {
   4.3011,
   4.837,
   4.0673,
   3.9454,
   4.9374,
   4.837,
   5.1322,
   4.6299,
   5.0358,
   5.6776,
   5.3201,
   6.0955,
   6.637,
   6.2549,
   6.4104,
   7.4094,
   8.3496,
   9.667,
   11.87434,
   13};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(10.65348);
   Graph_Graph3021->SetMaximum(199.0163);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 959.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.4","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9.0","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4.3","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.4","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.6","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 706.5","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 10.5","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 175.2","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.8","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3022[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3022[20] = {
   0.2724795,
   0.2661754,
   0.2404182,
   0.2467719,
   0.3213213,
   0.2701276,
   0.2518404,
   0.2781652,
   0.2556756,
   0.310854,
   0.2884003,
   0.2852834,
   0.2766058,
   0.2332901,
   0.2355826,
   0.2521527,
   0.2428139,
   0.2044343,
   0.2197766,
   0.2045009};
   Double_t _fehx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3022[20] = {
   0.2724795,
   0.2661754,
   0.2404182,
   0.2467719,
   0.3213213,
   0.2701276,
   0.2518404,
   0.2781652,
   0.2556756,
   0.310854,
   0.2884003,
   0.2852834,
   0.2766058,
   0.2332901,
   0.2355826,
   0.2521527,
   0.2428139,
   0.2044343,
   0.2197766,
   0.2045009};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3023[20] = {
   0.2724795,
   0.2661754,
   0.2404182,
   0.2467719,
   0.3213213,
   0.2701276,
   0.2518404,
   0.2781652,
   0.2556756,
   0.310854,
   0.2884003,
   0.2852834,
   0.2766058,
   0.2332901,
   0.2355826,
   0.2521527,
   0.2428139,
   0.2044343,
   0.2197766,
   0.2045009};
   Double_t _fehx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3023[20] = {
   0.2724795,
   0.2661754,
   0.2404182,
   0.2467719,
   0.3213213,
   0.2701276,
   0.2518404,
   0.2781652,
   0.2556756,
   0.310854,
   0.2884003,
   0.2852834,
   0.2766058,
   0.2332901,
   0.2355826,
   0.2521527,
   0.2428139,
   0.2044343,
   0.2197766,
   0.2045009};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3024[20] = {
   1.266778,
   1.381707,
   1.070192,
   0.9435807,
   1.676198,
   1.142275,
   1.329258,
   0.8189251,
   0.9321573,
   1.146044,
   0.8789673,
   1.136427,
   1.137859,
   0.8762758,
   0.8394091,
   0.9149764,
   0.9102083,
   0.9706804,
   1.168117,
   0.8833175};
   Double_t _felx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3024[20] = {
   0.3010331,
   0.2905959,
   0.2696569,
   0.2454961,
   0.3451224,
   0.2402396,
   0.2629667,
   0.1802268,
   0.1880556,
   0.2043674,
   0.1675645,
   0.1884466,
   0.172995,
   0.1415273,
   0.1322169,
   0.1243829,
   0.1096327,
   0.1008343,
   0.09837321,
   0.0679475};
   Double_t _fehx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3024[20] = {
   0.2867652,
   0.2784715,
   0.2560465,
   0.2326752,
   0.3310423,
   0.2302161,
   0.2526674,
   0.1723428,
   0.1805445,
   0.1971751,
   0.1612481,
   0.1822919,
   0.1678215,
   0.1370254,
   0.1281178,
   0.1210612,
   0.1070405,
   0.0987744,
   0.09837321,
   0.0679475};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.5018442);
   Graph_Graph3024->SetMaximum(2.144094);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

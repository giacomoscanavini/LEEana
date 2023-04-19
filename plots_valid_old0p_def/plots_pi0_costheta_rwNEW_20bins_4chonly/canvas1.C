#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue Feb 21 20:01:39 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-13.56317,1.25641,1499.801);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(1,62.00346);
   hmc__1->SetBinContent(2,48.7751);
   hmc__1->SetBinContent(3,46.92048);
   hmc__1->SetBinContent(4,44.7603);
   hmc__1->SetBinContent(5,48.2031);
   hmc__1->SetBinContent(6,45.52906);
   hmc__1->SetBinContent(7,37.80329);
   hmc__1->SetBinContent(8,50.94524);
   hmc__1->SetBinContent(9,60.46917);
   hmc__1->SetBinContent(10,60.04313);
   hmc__1->SetBinContent(11,68.13394);
   hmc__1->SetBinContent(12,85.03383);
   hmc__1->SetBinContent(13,105.9689);
   hmc__1->SetBinContent(14,128.3398);
   hmc__1->SetBinContent(15,153.9194);
   hmc__1->SetBinContent(16,210.2157);
   hmc__1->SetBinContent(17,255.16);
   hmc__1->SetBinContent(18,307.9083);
   hmc__1->SetBinContent(19,447.8166);
   hmc__1->SetBinContent(20,678.1583);
   hmc__1->SetBinError(1,22.88492);
   hmc__1->SetBinError(2,17.13516);
   hmc__1->SetBinError(3,21.66288);
   hmc__1->SetBinError(4,16.26517);
   hmc__1->SetBinError(5,17.21365);
   hmc__1->SetBinError(6,20.87);
   hmc__1->SetBinError(7,14.87819);
   hmc__1->SetBinError(8,18.75107);
   hmc__1->SetBinError(9,18.94918);
   hmc__1->SetBinError(10,23.61246);
   hmc__1->SetBinError(11,20.73153);
   hmc__1->SetBinError(12,27.80002);
   hmc__1->SetBinError(13,34.61863);
   hmc__1->SetBinError(14,38.52758);
   hmc__1->SetBinError(15,43.95819);
   hmc__1->SetBinError(16,62.33134);
   hmc__1->SetBinError(17,73.96551);
   hmc__1->SetBinError(18,90.40574);
   hmc__1->SetBinError(19,102.8985);
   hmc__1->SetBinError(20,168.7182);
   hmc__1->SetBinError(21,0.3895343);
   hmc__1->SetMinimum(-13.56317);
   hmc__1->SetMaximum(1424.132);
   hmc__1->SetEntries(2916.026);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-1.293891e-08);
   hs1_stack_1->SetMaximum(712.0662);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.387199);
   hbadmatch_stack_1->SetBinContent(2,2.441476);
   hbadmatch_stack_1->SetBinContent(3,1.420845);
   hbadmatch_stack_1->SetBinContent(4,0.3917402);
   hbadmatch_stack_1->SetBinContent(5,1.077772);
   hbadmatch_stack_1->SetBinContent(6,2.526026);
   hbadmatch_stack_1->SetBinContent(7,0.785171);
   hbadmatch_stack_1->SetBinContent(8,1.648799);
   hbadmatch_stack_1->SetBinContent(9,1.446953);
   hbadmatch_stack_1->SetBinContent(10,1.0063);
   hbadmatch_stack_1->SetBinContent(11,3.731211);
   hbadmatch_stack_1->SetBinContent(12,2.392469);
   hbadmatch_stack_1->SetBinContent(13,2.285963);
   hbadmatch_stack_1->SetBinContent(14,3.098875);
   hbadmatch_stack_1->SetBinContent(15,2.322523);
   hbadmatch_stack_1->SetBinContent(16,5.733135);
   hbadmatch_stack_1->SetBinContent(17,4.426498);
   hbadmatch_stack_1->SetBinContent(18,7.139307);
   hbadmatch_stack_1->SetBinContent(19,6.044997);
   hbadmatch_stack_1->SetBinContent(20,13.85561);
   hbadmatch_stack_1->SetBinError(1,0.8063799);
   hbadmatch_stack_1->SetBinError(2,1.727939);
   hbadmatch_stack_1->SetBinError(3,0.5385604);
   hbadmatch_stack_1->SetBinError(4,0.2770047);
   hbadmatch_stack_1->SetBinError(5,0.6240045);
   hbadmatch_stack_1->SetBinError(6,0.8660549);
   hbadmatch_stack_1->SetBinError(7,0.3925882);
   hbadmatch_stack_1->SetBinError(8,0.6381106);
   hbadmatch_stack_1->SetBinError(9,0.610963);
   hbadmatch_stack_1->SetBinError(10,0.5171805);
   hbadmatch_stack_1->SetBinError(11,1.792407);
   hbadmatch_stack_1->SetBinError(12,0.7848912);
   hbadmatch_stack_1->SetBinError(13,0.8322909);
   hbadmatch_stack_1->SetBinError(14,0.9782734);
   hbadmatch_stack_1->SetBinError(15,0.7700734);
   hbadmatch_stack_1->SetBinError(16,1.271463);
   hbadmatch_stack_1->SetBinError(17,1.082741);
   hbadmatch_stack_1->SetBinError(18,1.374457);
   hbadmatch_stack_1->SetBinError(19,1.301096);
   hbadmatch_stack_1->SetBinError(20,2.082651);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,8.1391);
   hext_stack_2->SetBinContent(2,5.89704);
   hext_stack_2->SetBinContent(3,3.972198);
   hext_stack_2->SetBinContent(4,5.807659);
   hext_stack_2->SetBinContent(5,3.725593);
   hext_stack_2->SetBinContent(6,5.594185);
   hext_stack_2->SetBinContent(7,2.439593);
   hext_stack_2->SetBinContent(8,7.105247);
   hext_stack_2->SetBinContent(9,12.21945);
   hext_stack_2->SetBinContent(10,5.605774);
   hext_stack_2->SetBinContent(11,11.40184);
   hext_stack_2->SetBinContent(12,14.8637);
   hext_stack_2->SetBinContent(13,14.65022);
   hext_stack_2->SetBinContent(14,22.68558);
   hext_stack_2->SetBinContent(15,26.08237);
   hext_stack_2->SetBinContent(16,20.57763);
   hext_stack_2->SetBinContent(17,21.12104);
   hext_stack_2->SetBinContent(18,17.12295);
   hext_stack_2->SetBinContent(19,36.81507);
   hext_stack_2->SetBinContent(20,32.49857);
   hext_stack_2->SetBinError(1,2.106102);
   hext_stack_2->SetBinError(2,1.701242);
   hext_stack_2->SetBinError(3,1.288106);
   hext_stack_2->SetBinError(4,1.742221);
   hext_stack_2->SetBinError(5,1.216121);
   hext_stack_2->SetBinError(6,1.478305);
   hext_stack_2->SetBinError(7,0.9959598);
   hext_stack_2->SetBinError(8,1.859105);
   hext_stack_2->SetBinError(9,2.384636);
   hext_stack_2->SetBinError(10,1.455784);
   hext_stack_2->SetBinError(11,2.284889);
   hext_stack_2->SetBinError(12,2.694092);
   hext_stack_2->SetBinError(13,2.531438);
   hext_stack_2->SetBinError(14,3.374516);
   hext_stack_2->SetBinError(15,3.553301);
   hext_stack_2->SetBinError(16,2.994836);
   hext_stack_2->SetBinError(17,3.041641);
   hext_stack_2->SetBinError(18,2.594307);
   hext_stack_2->SetBinError(19,4.012683);
   hext_stack_2->SetBinError(20,3.925841);
   hext_stack_2->SetEntries(657);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.061732);
   hdirt_stack_3->SetBinContent(2,0.3671539);
   hdirt_stack_3->SetBinContent(3,1.352749);
   hdirt_stack_3->SetBinContent(4,1.09554);
   hdirt_stack_3->SetBinContent(5,0.5033248);
   hdirt_stack_3->SetBinContent(6,1.292544);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,1.330383);
   hdirt_stack_3->SetBinContent(9,0.742136);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,1.093975);
   hdirt_stack_3->SetBinContent(12,2.074914);
   hdirt_stack_3->SetBinContent(13,2.511211);
   hdirt_stack_3->SetBinContent(14,2.197525);
   hdirt_stack_3->SetBinContent(15,1.37165);
   hdirt_stack_3->SetBinContent(16,2.751901);
   hdirt_stack_3->SetBinContent(17,4.551794);
   hdirt_stack_3->SetBinContent(18,4.064167);
   hdirt_stack_3->SetBinContent(19,3.301553);
   hdirt_stack_3->SetBinContent(20,5.486931);
   hdirt_stack_3->SetBinError(1,0.4080244);
   hdirt_stack_3->SetBinError(2,0.2643781);
   hdirt_stack_3->SetBinError(3,0.6763744);
   hdirt_stack_3->SetBinError(4,0.5845155);
   hdirt_stack_3->SetBinError(5,0.3904789);
   hdirt_stack_3->SetBinError(6,0.5936772);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.6284736);
   hdirt_stack_3->SetBinError(9,0.374946);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.5705956);
   hdirt_stack_3->SetBinError(12,0.7631283);
   hdirt_stack_3->SetBinError(13,0.8454443);
   hdirt_stack_3->SetBinError(14,0.779535);
   hdirt_stack_3->SetBinError(15,0.6162463);
   hdirt_stack_3->SetBinError(16,0.7732855);
   hdirt_stack_3->SetBinError(17,1.428602);
   hdirt_stack_3->SetBinError(18,1.074975);
   hdirt_stack_3->SetBinError(19,1.046667);
   hdirt_stack_3->SetBinError(20,1.256174);
   hdirt_stack_3->SetEntries(156);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,5.173297);
   houtFV_stack_4->SetBinContent(2,5.521927);
   houtFV_stack_4->SetBinContent(3,6.293458);
   houtFV_stack_4->SetBinContent(4,6.206866);
   houtFV_stack_4->SetBinContent(5,7.517584);
   houtFV_stack_4->SetBinContent(6,5.378646);
   houtFV_stack_4->SetBinContent(7,5.48159);
   houtFV_stack_4->SetBinContent(8,6.176625);
   houtFV_stack_4->SetBinContent(9,6.131274);
   houtFV_stack_4->SetBinContent(10,8.611245);
   houtFV_stack_4->SetBinContent(11,8.121255);
   houtFV_stack_4->SetBinContent(12,9.897154);
   houtFV_stack_4->SetBinContent(13,11.14455);
   houtFV_stack_4->SetBinContent(14,15.43999);
   houtFV_stack_4->SetBinContent(15,18.36765);
   houtFV_stack_4->SetBinContent(16,26.10043);
   houtFV_stack_4->SetBinContent(17,31.04161);
   houtFV_stack_4->SetBinContent(18,35.06044);
   houtFV_stack_4->SetBinContent(19,41.39161);
   houtFV_stack_4->SetBinContent(20,43.09458);
   houtFV_stack_4->SetBinError(1,1.143467);
   houtFV_stack_4->SetBinError(2,1.194382);
   houtFV_stack_4->SetBinError(3,1.234516);
   houtFV_stack_4->SetBinError(4,1.233968);
   houtFV_stack_4->SetBinError(5,1.401386);
   houtFV_stack_4->SetBinError(6,1.101088);
   houtFV_stack_4->SetBinError(7,1.127628);
   houtFV_stack_4->SetBinError(8,1.228479);
   houtFV_stack_4->SetBinError(9,1.188725);
   houtFV_stack_4->SetBinError(10,1.463932);
   houtFV_stack_4->SetBinError(11,1.439862);
   houtFV_stack_4->SetBinError(12,1.583367);
   houtFV_stack_4->SetBinError(13,1.683949);
   houtFV_stack_4->SetBinError(14,1.932583);
   houtFV_stack_4->SetBinError(15,2.12256);
   houtFV_stack_4->SetBinError(16,2.617418);
   houtFV_stack_4->SetBinError(17,2.71242);
   houtFV_stack_4->SetBinError(18,3.023502);
   houtFV_stack_4->SetBinError(19,3.267402);
   houtFV_stack_4->SetBinError(20,3.265503);
   houtFV_stack_4->SetEntries(1301);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.929685);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.994198);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.818412);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.065118);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,13.49651);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,54.1993);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6352548);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3199419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.534735);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5669431);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7942591);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.193775);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.417038);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3477539);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.478708);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.324758);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.910658);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1731161);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4310268);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3943225);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4145321);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.61562);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.66026);
   hNCpi0inFVres_stack_7->SetBinContent(3,17.8212);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.0829);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.68727);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.1227);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.56752);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.9611);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.69025);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.17956);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.78186);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.73845);
   hNCpi0inFVres_stack_7->SetBinContent(13,41.20281);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.42604);
   hNCpi0inFVres_stack_7->SetBinContent(15,61.05888);
   hNCpi0inFVres_stack_7->SetBinContent(16,83.09169);
   hNCpi0inFVres_stack_7->SetBinContent(17,107.9963);
   hNCpi0inFVres_stack_7->SetBinContent(18,131.4263);
   hNCpi0inFVres_stack_7->SetBinContent(19,185.9774);
   hNCpi0inFVres_stack_7->SetBinContent(20,248.813);
   hNCpi0inFVres_stack_7->SetBinError(1,1.551456);
   hNCpi0inFVres_stack_7->SetBinError(2,1.250385);
   hNCpi0inFVres_stack_7->SetBinError(3,1.36659);
   hNCpi0inFVres_stack_7->SetBinError(4,1.365392);
   hNCpi0inFVres_stack_7->SetBinError(5,1.456369);
   hNCpi0inFVres_stack_7->SetBinError(6,1.34018);
   hNCpi0inFVres_stack_7->SetBinError(7,1.326387);
   hNCpi0inFVres_stack_7->SetBinError(8,1.354958);
   hNCpi0inFVres_stack_7->SetBinError(9,1.429053);
   hNCpi0inFVres_stack_7->SetBinError(10,1.682421);
   hNCpi0inFVres_stack_7->SetBinError(11,1.630136);
   hNCpi0inFVres_stack_7->SetBinError(12,1.82759);
   hNCpi0inFVres_stack_7->SetBinError(13,2.072239);
   hNCpi0inFVres_stack_7->SetBinError(14,2.291362);
   hNCpi0inFVres_stack_7->SetBinError(15,2.508347);
   hNCpi0inFVres_stack_7->SetBinError(16,3.00442);
   hNCpi0inFVres_stack_7->SetBinError(17,3.395339);
   hNCpi0inFVres_stack_7->SetBinError(18,3.716645);
   hNCpi0inFVres_stack_7->SetBinError(19,4.508567);
   hNCpi0inFVres_stack_7->SetBinError(20,5.164002);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.05947);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.237496);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.067184);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.570056);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.091012);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.216061);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.984316);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.361634);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.179616);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.584834);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.747162);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.713292);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.497404);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.162099);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.509788);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.17599);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.48109);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.72855);
   hNCpi0inFVdis_stack_8->SetBinContent(19,37.14151);
   hNCpi0inFVdis_stack_8->SetBinContent(20,63.72037);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6888973);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6890853);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5508089);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6696548);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4439995);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4178826);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5659695);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6241806);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5707629);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6291492);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4913662);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7027411);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.826086);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7581559);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.017977);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.187182);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.448419);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.647296);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.936054);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.619245);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,7.525896);
   hCCpi0inFV_stack_10->SetBinContent(2,6.583295);
   hCCpi0inFV_stack_10->SetBinContent(3,5.625052);
   hCCpi0inFV_stack_10->SetBinContent(4,4.106273);
   hCCpi0inFV_stack_10->SetBinContent(5,7.582063);
   hCCpi0inFV_stack_10->SetBinContent(6,5.96523);
   hCCpi0inFV_stack_10->SetBinContent(7,4.087476);
   hCCpi0inFV_stack_10->SetBinContent(8,6.076638);
   hCCpi0inFV_stack_10->SetBinContent(9,5.671544);
   hCCpi0inFV_stack_10->SetBinContent(10,7.434137);
   hCCpi0inFV_stack_10->SetBinContent(11,8.996027);
   hCCpi0inFV_stack_10->SetBinContent(12,8.751129);
   hCCpi0inFV_stack_10->SetBinContent(13,13.77819);
   hCCpi0inFV_stack_10->SetBinContent(14,13.14433);
   hCCpi0inFV_stack_10->SetBinContent(15,17.21216);
   hCCpi0inFV_stack_10->SetBinContent(16,26.01001);
   hCCpi0inFV_stack_10->SetBinContent(17,36.81415);
   hCCpi0inFV_stack_10->SetBinContent(18,40.31586);
   hCCpi0inFV_stack_10->SetBinContent(19,65.95573);
   hCCpi0inFV_stack_10->SetBinContent(20,100.5016);
   hCCpi0inFV_stack_10->SetBinError(1,1.352918);
   hCCpi0inFV_stack_10->SetBinError(2,1.261884);
   hCCpi0inFV_stack_10->SetBinError(3,1.161279);
   hCCpi0inFV_stack_10->SetBinError(4,1.000664);
   hCCpi0inFV_stack_10->SetBinError(5,1.31589);
   hCCpi0inFV_stack_10->SetBinError(6,1.210079);
   hCCpi0inFV_stack_10->SetBinError(7,1.026961);
   hCCpi0inFV_stack_10->SetBinError(8,1.293611);
   hCCpi0inFV_stack_10->SetBinError(9,1.143501);
   hCCpi0inFV_stack_10->SetBinError(10,1.360581);
   hCCpi0inFV_stack_10->SetBinError(11,1.468374);
   hCCpi0inFV_stack_10->SetBinError(12,1.468924);
   hCCpi0inFV_stack_10->SetBinError(13,1.89355);
   hCCpi0inFV_stack_10->SetBinError(14,1.820196);
   hCCpi0inFV_stack_10->SetBinError(15,2.107615);
   hCCpi0inFV_stack_10->SetBinError(16,2.533667);
   hCCpi0inFV_stack_10->SetBinError(17,3.087525);
   hCCpi0inFV_stack_10->SetBinError(18,3.162219);
   hCCpi0inFV_stack_10->SetBinError(19,4.076878);
   hCCpi0inFV_stack_10->SetBinError(20,4.981794);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.767786);
   hNCinFV_stack_11->SetBinContent(2,4.05302);
   hNCinFV_stack_11->SetBinContent(3,3.376046);
   hNCinFV_stack_11->SetBinContent(4,2.486059);
   hNCinFV_stack_11->SetBinContent(5,3.912939);
   hNCinFV_stack_11->SetBinContent(6,2.107235);
   hNCinFV_stack_11->SetBinContent(7,2.535931);
   hNCinFV_stack_11->SetBinContent(8,1.320373);
   hNCinFV_stack_11->SetBinContent(9,4.638094);
   hNCinFV_stack_11->SetBinContent(10,2.984305);
   hNCinFV_stack_11->SetBinContent(11,3.319412);
   hNCinFV_stack_11->SetBinContent(12,5.571799);
   hNCinFV_stack_11->SetBinContent(13,4.83481);
   hNCinFV_stack_11->SetBinContent(14,6.837229);
   hNCinFV_stack_11->SetBinContent(15,8.604286);
   hNCinFV_stack_11->SetBinContent(16,13.63135);
   hNCinFV_stack_11->SetBinContent(17,13.14264);
   hNCinFV_stack_11->SetBinContent(18,20.44721);
   hNCinFV_stack_11->SetBinContent(19,31.19471);
   hNCinFV_stack_11->SetBinContent(20,59.19151);
   hNCinFV_stack_11->SetBinError(1,0.9414194);
   hNCinFV_stack_11->SetBinError(2,1.019635);
   hNCinFV_stack_11->SetBinError(3,0.8997438);
   hNCinFV_stack_11->SetBinError(4,0.8559962);
   hNCinFV_stack_11->SetBinError(5,0.981813);
   hNCinFV_stack_11->SetBinError(6,0.6801976);
   hNCinFV_stack_11->SetBinError(7,0.8325131);
   hNCinFV_stack_11->SetBinError(8,0.5548703);
   hNCinFV_stack_11->SetBinError(9,1.074132);
   hNCinFV_stack_11->SetBinError(10,0.8560416);
   hNCinFV_stack_11->SetBinError(11,0.9200768);
   hNCinFV_stack_11->SetBinError(12,1.177666);
   hNCinFV_stack_11->SetBinError(13,1.091997);
   hNCinFV_stack_11->SetBinError(14,1.316223);
   hNCinFV_stack_11->SetBinError(15,1.442009);
   hNCinFV_stack_11->SetBinError(16,1.872748);
   hNCinFV_stack_11->SetBinError(17,1.820015);
   hNCinFV_stack_11->SetBinError(18,2.33016);
   hNCinFV_stack_11->SetBinError(19,2.754817);
   hNCinFV_stack_11->SetBinError(20,3.872518);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.06142);
   hnumuCCinFV_stack_12->SetBinContent(2,2.232033);
   hnumuCCinFV_stack_12->SetBinContent(3,2.477322);
   hnumuCCinFV_stack_12->SetBinContent(4,2.053982);
   hnumuCCinFV_stack_12->SetBinContent(5,2.785028);
   hnumuCCinFV_stack_12->SetBinContent(6,2.587679);
   hnumuCCinFV_stack_12->SetBinContent(7,2.288599);
   hnumuCCinFV_stack_12->SetBinContent(8,4.364749);
   hnumuCCinFV_stack_12->SetBinContent(9,4.328043);
   hnumuCCinFV_stack_12->SetBinContent(10,3.818672);
   hnumuCCinFV_stack_12->SetBinContent(11,2.382061);
   hnumuCCinFV_stack_12->SetBinContent(12,3.173325);
   hnumuCCinFV_stack_12->SetBinContent(13,8.317356);
   hnumuCCinFV_stack_12->SetBinContent(14,7.078355);
   hnumuCCinFV_stack_12->SetBinContent(15,6.696975);
   hnumuCCinFV_stack_12->SetBinContent(16,14.8432);
   hnumuCCinFV_stack_12->SetBinContent(17,12.27807);
   hnumuCCinFV_stack_12->SetBinContent(18,16.53447);
   hnumuCCinFV_stack_12->SetBinContent(19,22.86634);
   hnumuCCinFV_stack_12->SetBinContent(20,43.84953);
   hnumuCCinFV_stack_12->SetBinError(1,0.9654609);
   hnumuCCinFV_stack_12->SetBinError(2,0.8363553);
   hnumuCCinFV_stack_12->SetBinError(3,0.8045639);
   hnumuCCinFV_stack_12->SetBinError(4,0.7078105);
   hnumuCCinFV_stack_12->SetBinError(5,0.8690179);
   hnumuCCinFV_stack_12->SetBinError(6,1.12079);
   hnumuCCinFV_stack_12->SetBinError(7,1.206001);
   hnumuCCinFV_stack_12->SetBinError(8,1.873783);
   hnumuCCinFV_stack_12->SetBinError(9,1.049512);
   hnumuCCinFV_stack_12->SetBinError(10,1.154999);
   hnumuCCinFV_stack_12->SetBinError(11,0.8726338);
   hnumuCCinFV_stack_12->SetBinError(12,0.9236517);
   hnumuCCinFV_stack_12->SetBinError(13,1.607561);
   hnumuCCinFV_stack_12->SetBinError(14,1.548969);
   hnumuCCinFV_stack_12->SetBinError(15,1.344845);
   hnumuCCinFV_stack_12->SetBinError(16,3.078895);
   hnumuCCinFV_stack_12->SetBinError(17,1.818176);
   hnumuCCinFV_stack_12->SetBinError(18,2.158831);
   hnumuCCinFV_stack_12->SetBinError(19,2.426975);
   hnumuCCinFV_stack_12->SetBinError(20,3.404033);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,0.6097559);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.196905);
   hnueCCinFV_stack_13->SetBinContent(15,1.926081);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.181475);
   hnueCCinFV_stack_13->SetBinContent(18,2.525204);
   hnueCCinFV_stack_13->SetBinContent(19,2.194916);
   hnueCCinFV_stack_13->SetBinContent(20,10.84115);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.3525088);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.6198054);
   hnueCCinFV_stack_13->SetBinError(15,1.329164);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.6355789);
   hnueCCinFV_stack_13->SetBinError(18,0.9958059);
   hnueCCinFV_stack_13->SetBinError(19,0.7051348);
   hnueCCinFV_stack_13->SetBinError(20,2.390243);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(1,62.00346);
   hmcerror__2->SetBinContent(2,48.7751);
   hmcerror__2->SetBinContent(3,46.92048);
   hmcerror__2->SetBinContent(4,44.7603);
   hmcerror__2->SetBinContent(5,48.2031);
   hmcerror__2->SetBinContent(6,45.52906);
   hmcerror__2->SetBinContent(7,37.80329);
   hmcerror__2->SetBinContent(8,50.94524);
   hmcerror__2->SetBinContent(9,60.46917);
   hmcerror__2->SetBinContent(10,60.04313);
   hmcerror__2->SetBinContent(11,68.13394);
   hmcerror__2->SetBinContent(12,85.03383);
   hmcerror__2->SetBinContent(13,105.9689);
   hmcerror__2->SetBinContent(14,128.3398);
   hmcerror__2->SetBinContent(15,153.9194);
   hmcerror__2->SetBinContent(16,210.2157);
   hmcerror__2->SetBinContent(17,255.16);
   hmcerror__2->SetBinContent(18,307.9083);
   hmcerror__2->SetBinContent(19,447.8166);
   hmcerror__2->SetBinContent(20,678.1583);
   hmcerror__2->SetBinError(1,22.88492);
   hmcerror__2->SetBinError(2,17.13516);
   hmcerror__2->SetBinError(3,21.66288);
   hmcerror__2->SetBinError(4,16.26517);
   hmcerror__2->SetBinError(5,17.21365);
   hmcerror__2->SetBinError(6,20.87);
   hmcerror__2->SetBinError(7,14.87819);
   hmcerror__2->SetBinError(8,18.75107);
   hmcerror__2->SetBinError(9,18.94918);
   hmcerror__2->SetBinError(10,23.61246);
   hmcerror__2->SetBinError(11,20.73153);
   hmcerror__2->SetBinError(12,27.80002);
   hmcerror__2->SetBinError(13,34.61863);
   hmcerror__2->SetBinError(14,38.52758);
   hmcerror__2->SetBinError(15,43.95819);
   hmcerror__2->SetBinError(16,62.33134);
   hmcerror__2->SetBinError(17,73.96551);
   hmcerror__2->SetBinError(18,90.40574);
   hmcerror__2->SetBinError(19,102.8985);
   hmcerror__2->SetBinError(20,168.7182);
   hmcerror__2->SetBinError(21,0.3895343);
   hmcerror__2->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[20] = {
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
   Double_t _fy3001[20] = {
   60,
   56,
   47,
   42,
   45,
   50,
   54,
   69,
   57,
   57,
   63,
   77,
   112,
   133,
   130,
   209,
   235,
   321,
   445,
   676};
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
   7.8743,
   7.6127,
   6.9882,
   6.6155,
   6.8416,
   7.2025,
   7.4785,
   8.4327,
   7.679,
   7.679,
   8.0648,
   8.8995,
   10.58301,
   11.53256,
   11.40175,
   14.45683,
   15.32971,
   17.91647,
   21.09502,
   26};
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
   7.6713,
   7.4094,
   6.7839,
   6.4104,
   6.637,
   6.9985,
   7.275,
   8.2304,
   7.4757,
   7.4757,
   7.862,
   8.6976,
   10.58301,
   11.53256,
   11.40175,
   14.45683,
   15.32971,
   17.91647,
   21.09502,
   26};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(31.84605);
   Graph_Graph3001->SetMaximum(768.6616);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
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
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
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
   Double_t _fely3002[20] = {
   0.369091,
   0.3513096,
   0.4616936,
   0.3633838,
   0.3571066,
   0.4583885,
   0.3935687,
   0.3680633,
   0.3133693,
   0.3932583,
   0.3042761,
   0.3269289,
   0.3266868,
   0.3001999,
   0.2855922,
   0.2965114,
   0.289879,
   0.2936125,
   0.2297783,
   0.2487888};
   Double_t _fehx3002[20] = {
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
   Double_t _fehy3002[20] = {
   0.369091,
   0.3513096,
   0.4616936,
   0.3633838,
   0.3571066,
   0.4583885,
   0.3935687,
   0.3680633,
   0.3133693,
   0.3932583,
   0.3042761,
   0.3269289,
   0.3266868,
   0.3001999,
   0.2855922,
   0.2965114,
   0.289879,
   0.2936125,
   0.2297783,
   0.2487888};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[20] = {
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
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   0.2102096,
   0.2117488,
   0.215563,
   0.2254282,
   0.2212285,
   0.2140078,
   0.2544106,
   0.2131019,
   0.2013688,
   0.2244511,
   0.2160447,
   0.2234788,
   0.2403328,
   0.2238639,
   0.2395878,
   0.2375507,
   0.2444825,
   0.2252903,
   0.2073202,
   0.2259916};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   0.2102096,
   0.2117488,
   0.215563,
   0.2254282,
   0.2212285,
   0.2140078,
   0.2544106,
   0.2131019,
   0.2013688,
   0.2244511,
   0.2160447,
   0.2234788,
   0.2403328,
   0.2238639,
   0.2395878,
   0.2375507,
   0.2444825,
   0.2252903,
   0.2073202,
   0.2259916};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[20] = {
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
   Double_t _fy3004[20] = {
   0.9676879,
   1.148127,
   1.001695,
   0.9383315,
   0.9335499,
   1.0982,
   1.428447,
   1.354396,
   0.9426291,
   0.9493176,
   0.9246493,
   0.905522,
   1.056914,
   1.036312,
   0.8445976,
   0.994217,
   0.9209908,
   1.042518,
   0.9937103,
   0.9968174};
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
   0.1269977,
   0.1560776,
   0.1489371,
   0.1477984,
   0.1419328,
   0.1581957,
   0.1978267,
   0.1655248,
   0.1269903,
   0.1278914,
   0.1183668,
   0.1046583,
   0.09986899,
   0.08985963,
   0.07407611,
   0.06877143,
   0.06007881,
   0.05818769,
   0.04710639,
   0.03833913};
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
   0.1237237,
   0.1519095,
   0.1445829,
   0.1432162,
   0.1376882,
   0.153715,
   0.1924436,
   0.1615539,
   0.1236283,
   0.1245055,
   0.1153904,
   0.102284,
   0.09986899,
   0.08985963,
   0.07407611,
   0.06877143,
   0.06007881,
   0.05818769,
   0.04710639,
   0.03833913};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.6854846);
   Graph_Graph3004->SetMaximum(1.705928);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

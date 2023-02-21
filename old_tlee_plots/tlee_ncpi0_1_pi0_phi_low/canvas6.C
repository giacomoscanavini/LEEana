#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 23:52:14 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",86,109,1200,900);
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
   pad1->Range(-4.119231,-3.1,3.957692,342.7947);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__16->SetBinContent(1,106.8057);
   hmc__16->SetBinContent(2,113.8414);
   hmc__16->SetBinContent(3,109.799);
   hmc__16->SetBinContent(4,110.9372);
   hmc__16->SetBinContent(5,96.45267);
   hmc__16->SetBinContent(6,102.7196);
   hmc__16->SetBinContent(7,121.5162);
   hmc__16->SetBinContent(8,107.9277);
   hmc__16->SetBinContent(9,105.2759);
   hmc__16->SetBinContent(10,110.7651);
   hmc__16->SetBinContent(11,108.6565);
   hmc__16->SetBinContent(12,119.5024);
   hmc__16->SetBinContent(13,112.2869);
   hmc__16->SetBinContent(14,110.6959);
   hmc__16->SetBinContent(15,117.5341);
   hmc__16->SetBinContent(16,117.9977);
   hmc__16->SetBinContent(17,110.9174);
   hmc__16->SetBinContent(18,121.6045);
   hmc__16->SetBinContent(19,110.243);
   hmc__16->SetBinContent(20,103.3876);
   hmc__16->SetBinContent(21,108.3203);
   hmc__16->SetBinContent(22,111.7466);
   hmc__16->SetBinContent(23,117.6378);
   hmc__16->SetBinContent(24,119.556);
   hmc__16->SetBinContent(25,119.7694);
   hmc__16->SetBinError(1,27.19706);
   hmc__16->SetBinError(2,32.34714);
   hmc__16->SetBinError(3,30.46667);
   hmc__16->SetBinError(4,33.0668);
   hmc__16->SetBinError(5,29.35177);
   hmc__16->SetBinError(6,29.81672);
   hmc__16->SetBinError(7,30.309);
   hmc__16->SetBinError(8,31.72149);
   hmc__16->SetBinError(9,29.63988);
   hmc__16->SetBinError(10,29.10591);
   hmc__16->SetBinError(11,30.062);
   hmc__16->SetBinError(12,36.28414);
   hmc__16->SetBinError(13,33.46957);
   hmc__16->SetBinError(14,32.13511);
   hmc__16->SetBinError(15,37.07158);
   hmc__16->SetBinError(16,34.07209);
   hmc__16->SetBinError(17,29.38362);
   hmc__16->SetBinError(18,35.51474);
   hmc__16->SetBinError(19,31.09152);
   hmc__16->SetBinError(20,31.59094);
   hmc__16->SetBinError(21,29.24234);
   hmc__16->SetBinError(22,30.12817);
   hmc__16->SetBinError(23,35.36155);
   hmc__16->SetBinError(24,36.44055);
   hmc__16->SetBinError(25,39.87928);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-3.1);
   hmc__16->SetMaximum(325.5);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-3.15,3.15);
   hs6_stack_6->SetMinimum(-1.234226e-09);
   hs6_stack_6->SetMaximum(127.6848);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.611324);
   hbadmatch_stack_1->SetBinContent(2,3.30214);
   hbadmatch_stack_1->SetBinContent(3,2.453866);
   hbadmatch_stack_1->SetBinContent(4,3.578678);
   hbadmatch_stack_1->SetBinContent(5,1.785002);
   hbadmatch_stack_1->SetBinContent(6,2.349332);
   hbadmatch_stack_1->SetBinContent(7,3.628185);
   hbadmatch_stack_1->SetBinContent(8,3.648194);
   hbadmatch_stack_1->SetBinContent(9,2.308022);
   hbadmatch_stack_1->SetBinContent(10,1.321932);
   hbadmatch_stack_1->SetBinContent(11,1.645519);
   hbadmatch_stack_1->SetBinContent(12,1.631458);
   hbadmatch_stack_1->SetBinContent(13,0.8015479);
   hbadmatch_stack_1->SetBinContent(14,2.097491);
   hbadmatch_stack_1->SetBinContent(15,3.57104);
   hbadmatch_stack_1->SetBinContent(16,4.031417);
   hbadmatch_stack_1->SetBinContent(17,2.266597);
   hbadmatch_stack_1->SetBinContent(18,1.696064);
   hbadmatch_stack_1->SetBinContent(19,1.558649);
   hbadmatch_stack_1->SetBinContent(20,3.462602);
   hbadmatch_stack_1->SetBinContent(21,3.478567);
   hbadmatch_stack_1->SetBinContent(22,2.94989);
   hbadmatch_stack_1->SetBinContent(23,3.00867);
   hbadmatch_stack_1->SetBinContent(24,2.917531);
   hbadmatch_stack_1->SetBinContent(25,2.496984);
   hbadmatch_stack_1->SetBinError(1,0.8931546);
   hbadmatch_stack_1->SetBinError(2,0.9577584);
   hbadmatch_stack_1->SetBinError(3,0.7516749);
   hbadmatch_stack_1->SetBinError(4,1.022167);
   hbadmatch_stack_1->SetBinError(5,0.6592602);
   hbadmatch_stack_1->SetBinError(6,0.7616784);
   hbadmatch_stack_1->SetBinError(7,1.020636);
   hbadmatch_stack_1->SetBinError(8,1.027314);
   hbadmatch_stack_1->SetBinError(9,0.8190879);
   hbadmatch_stack_1->SetBinError(10,0.5477714);
   hbadmatch_stack_1->SetBinError(11,0.7328518);
   hbadmatch_stack_1->SetBinError(12,0.7261189);
   hbadmatch_stack_1->SetBinError(13,0.4155844);
   hbadmatch_stack_1->SetBinError(14,0.7803393);
   hbadmatch_stack_1->SetBinError(15,1.818602);
   hbadmatch_stack_1->SetBinError(16,1.142241);
   hbadmatch_stack_1->SetBinError(17,0.7649583);
   hbadmatch_stack_1->SetBinError(18,0.6420158);
   hbadmatch_stack_1->SetBinError(19,0.6737274);
   hbadmatch_stack_1->SetBinError(20,0.9602584);
   hbadmatch_stack_1->SetBinError(21,1.220468);
   hbadmatch_stack_1->SetBinError(22,0.928576);
   hbadmatch_stack_1->SetBinError(23,0.9342295);
   hbadmatch_stack_1->SetBinError(24,1.719405);
   hbadmatch_stack_1->SetBinError(25,0.7335141);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.522578);
   hext_stack_2->SetBinContent(2,6.649578);
   hext_stack_2->SetBinContent(3,9.089171);
   hext_stack_2->SetBinContent(4,9.980162);
   hext_stack_2->SetBinContent(5,11.16683);
   hext_stack_2->SetBinContent(6,14.71089);
   hext_stack_2->SetBinContent(7,22.74466);
   hext_stack_2->SetBinContent(8,13.75483);
   hext_stack_2->SetBinContent(9,11.16683);
   hext_stack_2->SetBinContent(10,10.36522);
   hext_stack_2->SetBinContent(11,10.84961);
   hext_stack_2->SetBinContent(12,15.64377);
   hext_stack_2->SetBinContent(13,9.98174);
   hext_stack_2->SetBinContent(14,3.241202);
   hext_stack_2->SetBinContent(15,7.932806);
   hext_stack_2->SetBinContent(16,5.833609);
   hext_stack_2->SetBinContent(17,13.65826);
   hext_stack_2->SetBinContent(18,17.79045);
   hext_stack_2->SetBinContent(19,10.76464);
   hext_stack_2->SetBinContent(20,13.58047);
   hext_stack_2->SetBinContent(21,12.9245);
   hext_stack_2->SetBinContent(22,8.877276);
   hext_stack_2->SetBinContent(23,12.83788);
   hext_stack_2->SetBinContent(24,8.98102);
   hext_stack_2->SetBinContent(25,7.276832);
   hext_stack_2->SetBinError(1,1.84465);
   hext_stack_2->SetBinError(2,1.600367);
   hext_stack_2->SetBinError(3,1.88497);
   hext_stack_2->SetBinError(4,1.951595);
   hext_stack_2->SetBinError(5,2.23033);
   hext_stack_2->SetBinError(6,2.659299);
   hext_stack_2->SetBinError(7,3.201436);
   hext_stack_2->SetBinError(8,2.453048);
   hext_stack_2->SetBinError(9,2.23033);
   hext_stack_2->SetBinError(10,2.139544);
   hext_stack_2->SetBinError(11,2.160541);
   hext_stack_2->SetBinError(12,2.873753);
   hext_stack_2->SetBinError(13,2.368667);
   hext_stack_2->SetBinError(14,1.178414);
   hext_stack_2->SetBinError(15,1.839704);
   hext_stack_2->SetBinError(16,1.60214);
   hext_stack_2->SetBinError(17,2.521856);
   hext_stack_2->SetBinError(18,2.82914);
   hext_stack_2->SetBinError(19,2.22355);
   hext_stack_2->SetBinError(20,2.536689);
   hext_stack_2->SetBinError(21,2.534862);
   hext_stack_2->SetBinError(22,2.122503);
   hext_stack_2->SetBinError(23,2.49606);
   hext_stack_2->SetBinError(24,1.990353);
   hext_stack_2->SetBinError(25,1.837184);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2761429);
   hdirt_stack_3->SetBinContent(2,1.395067);
   hdirt_stack_3->SetBinContent(3,1.233457);
   hdirt_stack_3->SetBinContent(4,1.852706);
   hdirt_stack_3->SetBinContent(5,1.221015);
   hdirt_stack_3->SetBinContent(6,1.971064);
   hdirt_stack_3->SetBinContent(7,1.5962);
   hdirt_stack_3->SetBinContent(8,1.469707);
   hdirt_stack_3->SetBinContent(9,1.388505);
   hdirt_stack_3->SetBinContent(10,2.749665);
   hdirt_stack_3->SetBinContent(11,1.885346);
   hdirt_stack_3->SetBinContent(12,0.5384573);
   hdirt_stack_3->SetBinContent(13,1.799659);
   hdirt_stack_3->SetBinContent(14,1.465769);
   hdirt_stack_3->SetBinContent(15,1.123905);
   hdirt_stack_3->SetBinContent(16,2.199254);
   hdirt_stack_3->SetBinContent(17,1.857172);
   hdirt_stack_3->SetBinContent(18,1.170723);
   hdirt_stack_3->SetBinContent(19,1.566572);
   hdirt_stack_3->SetBinContent(20,1.203031);
   hdirt_stack_3->SetBinContent(21,2.271491);
   hdirt_stack_3->SetBinContent(22,1.995313);
   hdirt_stack_3->SetBinContent(23,0.9507601);
   hdirt_stack_3->SetBinContent(24,1.236582);
   hdirt_stack_3->SetBinContent(25,1.390309);
   hdirt_stack_3->SetBinError(1,0.1952625);
   hdirt_stack_3->SetBinError(2,0.6520855);
   hdirt_stack_3->SetBinError(3,0.6253216);
   hdirt_stack_3->SetBinError(4,0.7740961);
   hdirt_stack_3->SetBinError(5,0.5561081);
   hdirt_stack_3->SetBinError(6,0.7656395);
   hdirt_stack_3->SetBinError(7,0.6340249);
   hdirt_stack_3->SetBinError(8,0.5677231);
   hdirt_stack_3->SetBinError(9,0.5959484);
   hdirt_stack_3->SetBinError(10,1.284461);
   hdirt_stack_3->SetBinError(11,0.6907459);
   hdirt_stack_3->SetBinError(12,0.423524);
   hdirt_stack_3->SetBinError(13,0.630973);
   hdirt_stack_3->SetBinError(14,0.774935);
   hdirt_stack_3->SetBinError(15,0.5310426);
   hdirt_stack_3->SetBinError(16,0.7174017);
   hdirt_stack_3->SetBinError(17,0.7088763);
   hdirt_stack_3->SetBinError(18,0.5693955);
   hdirt_stack_3->SetBinError(19,0.6820645);
   hdirt_stack_3->SetBinError(20,0.5538544);
   hdirt_stack_3->SetBinError(21,0.8363974);
   hdirt_stack_3->SetBinError(22,0.7049347);
   hdirt_stack_3->SetBinError(23,0.4966729);
   hdirt_stack_3->SetBinError(24,0.6025859);
   hdirt_stack_3->SetBinError(25,0.6022451);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.92993);
   houtFV_stack_4->SetBinContent(2,11.82546);
   houtFV_stack_4->SetBinContent(3,11.65812);
   houtFV_stack_4->SetBinContent(4,10.42275);
   houtFV_stack_4->SetBinContent(5,10.58897);
   houtFV_stack_4->SetBinContent(6,8.636378);
   houtFV_stack_4->SetBinContent(7,9.220774);
   houtFV_stack_4->SetBinContent(8,8.51296);
   houtFV_stack_4->SetBinContent(9,11.32153);
   houtFV_stack_4->SetBinContent(10,11.23124);
   houtFV_stack_4->SetBinContent(11,11.24177);
   houtFV_stack_4->SetBinContent(12,13.34574);
   houtFV_stack_4->SetBinContent(13,10.62634);
   houtFV_stack_4->SetBinContent(14,11.61246);
   houtFV_stack_4->SetBinContent(15,11.41351);
   houtFV_stack_4->SetBinContent(16,14.6594);
   houtFV_stack_4->SetBinContent(17,12.70847);
   houtFV_stack_4->SetBinContent(18,10.74154);
   houtFV_stack_4->SetBinContent(19,13.36185);
   houtFV_stack_4->SetBinContent(20,7.430274);
   houtFV_stack_4->SetBinContent(21,9.779032);
   houtFV_stack_4->SetBinContent(22,14.13726);
   houtFV_stack_4->SetBinContent(23,12.43694);
   houtFV_stack_4->SetBinContent(24,11.4738);
   houtFV_stack_4->SetBinContent(25,12.98572);
   houtFV_stack_4->SetBinError(1,1.923942);
   houtFV_stack_4->SetBinError(2,1.694668);
   houtFV_stack_4->SetBinError(3,1.690739);
   houtFV_stack_4->SetBinError(4,1.650329);
   houtFV_stack_4->SetBinError(5,1.631856);
   houtFV_stack_4->SetBinError(6,1.450248);
   houtFV_stack_4->SetBinError(7,1.611057);
   houtFV_stack_4->SetBinError(8,1.401415);
   houtFV_stack_4->SetBinError(9,1.676397);
   houtFV_stack_4->SetBinError(10,1.708384);
   houtFV_stack_4->SetBinError(11,1.662258);
   houtFV_stack_4->SetBinError(12,1.758097);
   houtFV_stack_4->SetBinError(13,1.638848);
   houtFV_stack_4->SetBinError(14,1.678415);
   houtFV_stack_4->SetBinError(15,1.671562);
   houtFV_stack_4->SetBinError(16,1.926521);
   houtFV_stack_4->SetBinError(17,1.791751);
   houtFV_stack_4->SetBinError(18,1.641458);
   houtFV_stack_4->SetBinError(19,1.883163);
   houtFV_stack_4->SetBinError(20,1.354084);
   houtFV_stack_4->SetBinError(21,1.538928);
   houtFV_stack_4->SetBinError(22,1.872098);
   houtFV_stack_4->SetBinError(23,1.726554);
   houtFV_stack_4->SetBinError(24,1.699063);
   houtFV_stack_4->SetBinError(25,1.816215);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.874603);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.020333);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.278287);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.359375);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.007873);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.283879);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.074503);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.333631);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.872997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.589107);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.275807);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.689104);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.983979);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.275707);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.402714);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.96637);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.675303);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.097365);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.678388);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.924647);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.733476);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.590035);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.905318);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.889165);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.599538);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8350826);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5192324);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6754857);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6639116);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7411478);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7645605);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6578375);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7930382);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6684707);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9898327);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.017476);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4124588);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.836207);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7151207);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6308318);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6064599);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6910863);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6755033);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7532439);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6852575);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6578324);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6409014);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8798373);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.848516);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7003405);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2986776);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3509326);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.148119);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3510408);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.291843);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8230031);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1446043);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2169781);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.326243);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.09566832);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.07903675);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2914091);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2095463);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.279055);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2162291);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1876022);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2077802);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4087351);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08440956);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5687249);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1818551);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2687416);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1191865);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1695557);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0597383);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1834858);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1466448);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3464709);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0609107);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.08510031);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2043675);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03962771);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0387805);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1244508);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1477977);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1365436);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1357966);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08567291);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1307771);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1694133);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04472099);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.338939);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07828343);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1263556);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,40.81702);
   hNCpi0inFVres_stack_7->SetBinContent(2,45.83529);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.67397);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.01673);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.26359);
   hNCpi0inFVres_stack_7->SetBinContent(6,38.42804);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.81504);
   hNCpi0inFVres_stack_7->SetBinContent(8,39.82119);
   hNCpi0inFVres_stack_7->SetBinContent(9,41.45839);
   hNCpi0inFVres_stack_7->SetBinContent(10,37.45283);
   hNCpi0inFVres_stack_7->SetBinContent(11,37.43131);
   hNCpi0inFVres_stack_7->SetBinContent(12,43.95084);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.3334);
   hNCpi0inFVres_stack_7->SetBinContent(14,42.96761);
   hNCpi0inFVres_stack_7->SetBinContent(15,45.73854);
   hNCpi0inFVres_stack_7->SetBinContent(16,40.88197);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.9111);
   hNCpi0inFVres_stack_7->SetBinContent(18,43.11388);
   hNCpi0inFVres_stack_7->SetBinContent(19,41.03764);
   hNCpi0inFVres_stack_7->SetBinContent(20,43.66209);
   hNCpi0inFVres_stack_7->SetBinContent(21,38.93503);
   hNCpi0inFVres_stack_7->SetBinContent(22,39.25908);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.37981);
   hNCpi0inFVres_stack_7->SetBinContent(24,47.40169);
   hNCpi0inFVres_stack_7->SetBinContent(25,43.21419);
   hNCpi0inFVres_stack_7->SetBinError(1,2.074288);
   hNCpi0inFVres_stack_7->SetBinError(2,2.393106);
   hNCpi0inFVres_stack_7->SetBinError(3,2.200856);
   hNCpi0inFVres_stack_7->SetBinError(4,2.255775);
   hNCpi0inFVres_stack_7->SetBinError(5,2.030879);
   hNCpi0inFVres_stack_7->SetBinError(6,2.053781);
   hNCpi0inFVres_stack_7->SetBinError(7,2.287546);
   hNCpi0inFVres_stack_7->SetBinError(8,2.255255);
   hNCpi0inFVres_stack_7->SetBinError(9,2.371639);
   hNCpi0inFVres_stack_7->SetBinError(10,2.035226);
   hNCpi0inFVres_stack_7->SetBinError(11,2.040888);
   hNCpi0inFVres_stack_7->SetBinError(12,2.392883);
   hNCpi0inFVres_stack_7->SetBinError(13,2.172328);
   hNCpi0inFVres_stack_7->SetBinError(14,2.189473);
   hNCpi0inFVres_stack_7->SetBinError(15,2.407142);
   hNCpi0inFVres_stack_7->SetBinError(16,2.228685);
   hNCpi0inFVres_stack_7->SetBinError(17,2.201201);
   hNCpi0inFVres_stack_7->SetBinError(18,2.296223);
   hNCpi0inFVres_stack_7->SetBinError(19,2.306434);
   hNCpi0inFVres_stack_7->SetBinError(20,2.247701);
   hNCpi0inFVres_stack_7->SetBinError(21,2.067294);
   hNCpi0inFVres_stack_7->SetBinError(22,2.023656);
   hNCpi0inFVres_stack_7->SetBinError(23,2.256274);
   hNCpi0inFVres_stack_7->SetBinError(24,2.445146);
   hNCpi0inFVres_stack_7->SetBinError(25,2.278101);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.580562);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.250528);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.493141);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.622362);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.903584);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.461514);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.538858);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.520711);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.009593);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.892716);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.56692);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.092809);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.541525);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.770203);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.23494);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.257562);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.759234);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.65451);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.347248);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.531484);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.510475);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.37985);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.678539);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.852752);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.310547);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9876278);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.074585);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.068967);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.049182);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9276712);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8090833);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9673441);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8410802);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8998043);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9603162);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.05333);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7969215);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.844361);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.092525);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.176956);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.940683);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.126067);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.057555);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9973375);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8813685);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8155238);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.268052);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.094465);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.15827);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8126419);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07927215);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06548985);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1303248);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,15.2178);
   hCCpi0inFV_stack_10->SetBinContent(2,13.13618);
   hCCpi0inFV_stack_10->SetBinContent(3,15.98179);
   hCCpi0inFV_stack_10->SetBinContent(4,14.03431);
   hCCpi0inFV_stack_10->SetBinContent(5,10.81143);
   hCCpi0inFV_stack_10->SetBinContent(6,11.92342);
   hCCpi0inFV_stack_10->SetBinContent(7,15.43306);
   hCCpi0inFV_stack_10->SetBinContent(8,15.23783);
   hCCpi0inFV_stack_10->SetBinContent(9,11.87214);
   hCCpi0inFV_stack_10->SetBinContent(10,17.93404);
   hCCpi0inFV_stack_10->SetBinContent(11,16.75574);
   hCCpi0inFV_stack_10->SetBinContent(12,20.20699);
   hCCpi0inFV_stack_10->SetBinContent(13,19.92661);
   hCCpi0inFV_stack_10->SetBinContent(14,15.83034);
   hCCpi0inFV_stack_10->SetBinContent(15,15.98179);
   hCCpi0inFV_stack_10->SetBinContent(16,21.60811);
   hCCpi0inFV_stack_10->SetBinContent(17,12.82383);
   hCCpi0inFV_stack_10->SetBinContent(18,15.80137);
   hCCpi0inFV_stack_10->SetBinContent(19,17.32789);
   hCCpi0inFV_stack_10->SetBinContent(20,9.674863);
   hCCpi0inFV_stack_10->SetBinContent(21,13.48112);
   hCCpi0inFV_stack_10->SetBinContent(22,17.2819);
   hCCpi0inFV_stack_10->SetBinContent(23,16.08045);
   hCCpi0inFV_stack_10->SetBinContent(24,19.48484);
   hCCpi0inFV_stack_10->SetBinContent(25,18.28893);
   hCCpi0inFV_stack_10->SetBinError(1,1.997005);
   hCCpi0inFV_stack_10->SetBinError(2,1.798094);
   hCCpi0inFV_stack_10->SetBinError(3,1.991877);
   hCCpi0inFV_stack_10->SetBinError(4,1.841175);
   hCCpi0inFV_stack_10->SetBinError(5,1.524816);
   hCCpi0inFV_stack_10->SetBinError(6,1.669818);
   hCCpi0inFV_stack_10->SetBinError(7,1.951543);
   hCCpi0inFV_stack_10->SetBinError(8,1.973132);
   hCCpi0inFV_stack_10->SetBinError(9,1.721894);
   hCCpi0inFV_stack_10->SetBinError(10,2.184691);
   hCCpi0inFV_stack_10->SetBinError(11,2.077424);
   hCCpi0inFV_stack_10->SetBinError(12,2.257494);
   hCCpi0inFV_stack_10->SetBinError(13,2.2546);
   hCCpi0inFV_stack_10->SetBinError(14,1.987224);
   hCCpi0inFV_stack_10->SetBinError(15,1.991877);
   hCCpi0inFV_stack_10->SetBinError(16,2.293286);
   hCCpi0inFV_stack_10->SetBinError(17,1.733988);
   hCCpi0inFV_stack_10->SetBinError(18,1.933099);
   hCCpi0inFV_stack_10->SetBinError(19,2.150145);
   hCCpi0inFV_stack_10->SetBinError(20,1.56474);
   hCCpi0inFV_stack_10->SetBinError(21,1.851354);
   hCCpi0inFV_stack_10->SetBinError(22,2.080322);
   hCCpi0inFV_stack_10->SetBinError(23,2.021444);
   hCCpi0inFV_stack_10->SetBinError(24,2.215527);
   hCCpi0inFV_stack_10->SetBinError(25,2.129146);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.287774);
   hNCinFV_stack_11->SetBinContent(2,9.051239);
   hNCinFV_stack_11->SetBinContent(3,9.110705);
   hNCinFV_stack_11->SetBinContent(4,10.30124);
   hNCinFV_stack_11->SetBinContent(5,4.957889);
   hNCinFV_stack_11->SetBinContent(6,8.309732);
   hNCinFV_stack_11->SetBinContent(7,8.925019);
   hNCinFV_stack_11->SetBinContent(8,7.510251);
   hNCinFV_stack_11->SetBinContent(9,7.997025);
   hNCinFV_stack_11->SetBinContent(10,7.035994);
   hNCinFV_stack_11->SetBinContent(11,7.895939);
   hNCinFV_stack_11->SetBinContent(12,8.067713);
   hNCinFV_stack_11->SetBinContent(13,5.833778);
   hNCinFV_stack_11->SetBinContent(14,8.387156);
   hNCinFV_stack_11->SetBinContent(15,9.118853);
   hNCinFV_stack_11->SetBinContent(16,8.850741);
   hNCinFV_stack_11->SetBinContent(17,6.534232);
   hNCinFV_stack_11->SetBinContent(18,10.94984);
   hNCinFV_stack_11->SetBinContent(19,6.436117);
   hNCinFV_stack_11->SetBinContent(20,7.214166);
   hNCinFV_stack_11->SetBinContent(21,8.159669);
   hNCinFV_stack_11->SetBinContent(22,6.559324);
   hNCinFV_stack_11->SetBinContent(23,6.213547);
   hNCinFV_stack_11->SetBinContent(24,6.136782);
   hNCinFV_stack_11->SetBinContent(25,12.5521);
   hNCinFV_stack_11->SetBinError(1,1.394005);
   hNCinFV_stack_11->SetBinError(2,1.752141);
   hNCinFV_stack_11->SetBinError(3,1.533784);
   hNCinFV_stack_11->SetBinError(4,1.756531);
   hNCinFV_stack_11->SetBinError(5,1.235001);
   hNCinFV_stack_11->SetBinError(6,1.570096);
   hNCinFV_stack_11->SetBinError(7,1.477702);
   hNCinFV_stack_11->SetBinError(8,1.398301);
   hNCinFV_stack_11->SetBinError(9,1.600518);
   hNCinFV_stack_11->SetBinError(10,1.381563);
   hNCinFV_stack_11->SetBinError(11,1.507238);
   hNCinFV_stack_11->SetBinError(12,1.45879);
   hNCinFV_stack_11->SetBinError(13,1.232644);
   hNCinFV_stack_11->SetBinError(14,1.433173);
   hNCinFV_stack_11->SetBinError(15,1.52264);
   hNCinFV_stack_11->SetBinError(16,1.501413);
   hNCinFV_stack_11->SetBinError(17,1.282905);
   hNCinFV_stack_11->SetBinError(18,1.899013);
   hNCinFV_stack_11->SetBinError(19,1.280903);
   hNCinFV_stack_11->SetBinError(20,1.394072);
   hNCinFV_stack_11->SetBinError(21,1.515573);
   hNCinFV_stack_11->SetBinError(22,1.285445);
   hNCinFV_stack_11->SetBinError(23,1.16197);
   hNCinFV_stack_11->SetBinError(24,1.186609);
   hNCinFV_stack_11->SetBinError(25,2.102154);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.058486);
   hnumuCCinFV_stack_12->SetBinContent(2,9.463366);
   hnumuCCinFV_stack_12->SetBinContent(3,6.257585);
   hnumuCCinFV_stack_12->SetBinContent(4,6.344016);
   hnumuCCinFV_stack_12->SetBinContent(5,5.960724);
   hnumuCCinFV_stack_12->SetBinContent(6,4.701019);
   hnumuCCinFV_stack_12->SetBinContent(7,4.419469);
   hnumuCCinFV_stack_12->SetBinContent(8,7.295363);
   hnumuCCinFV_stack_12->SetBinContent(9,4.645438);
   hnumuCCinFV_stack_12->SetBinContent(10,7.938618);
   hnumuCCinFV_stack_12->SetBinContent(11,6.716297);
   hnumuCCinFV_stack_12->SetBinContent(12,7.34672);
   hnumuCCinFV_stack_12->SetBinContent(13,9.554193);
   hnumuCCinFV_stack_12->SetBinContent(14,9.289323);
   hnumuCCinFV_stack_12->SetBinContent(15,8.80649);
   hnumuCCinFV_stack_12->SetBinContent(16,6.099948);
   hnumuCCinFV_stack_12->SetBinContent(17,5.708696);
   hnumuCCinFV_stack_12->SetBinContent(18,4.896025);
   hnumuCCinFV_stack_12->SetBinContent(19,6.140932);
   hnumuCCinFV_stack_12->SetBinContent(20,4.269394);
   hnumuCCinFV_stack_12->SetBinContent(21,6.119128);
   hnumuCCinFV_stack_12->SetBinContent(22,6.435599);
   hnumuCCinFV_stack_12->SetBinContent(23,7.018226);
   hnumuCCinFV_stack_12->SetBinContent(24,6.879735);
   hnumuCCinFV_stack_12->SetBinContent(25,9.65241);
   hnumuCCinFV_stack_12->SetBinError(1,1.616974);
   hnumuCCinFV_stack_12->SetBinError(2,1.612696);
   hnumuCCinFV_stack_12->SetBinError(3,1.347576);
   hnumuCCinFV_stack_12->SetBinError(4,1.439932);
   hnumuCCinFV_stack_12->SetBinError(5,1.215838);
   hnumuCCinFV_stack_12->SetBinError(6,1.051297);
   hnumuCCinFV_stack_12->SetBinError(7,1.044357);
   hnumuCCinFV_stack_12->SetBinError(8,1.566639);
   hnumuCCinFV_stack_12->SetBinError(9,1.039466);
   hnumuCCinFV_stack_12->SetBinError(10,1.735441);
   hnumuCCinFV_stack_12->SetBinError(11,1.30697);
   hnumuCCinFV_stack_12->SetBinError(12,1.415686);
   hnumuCCinFV_stack_12->SetBinError(13,2.118161);
   hnumuCCinFV_stack_12->SetBinError(14,1.666484);
   hnumuCCinFV_stack_12->SetBinError(15,1.638104);
   hnumuCCinFV_stack_12->SetBinError(16,1.849638);
   hnumuCCinFV_stack_12->SetBinError(17,1.239028);
   hnumuCCinFV_stack_12->SetBinError(18,1.161503);
   hnumuCCinFV_stack_12->SetBinError(19,1.55368);
   hnumuCCinFV_stack_12->SetBinError(20,1.084407);
   hnumuCCinFV_stack_12->SetBinError(21,1.751919);
   hnumuCCinFV_stack_12->SetBinError(22,1.297193);
   hnumuCCinFV_stack_12->SetBinError(23,1.543663);
   hnumuCCinFV_stack_12->SetBinError(24,1.377261);
   hnumuCCinFV_stack_12->SetBinError(25,1.900165);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.312037);
   hnueCCinFV_stack_13->SetBinContent(2,0.8144805);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,1.276705);
   hnueCCinFV_stack_13->SetBinContent(5,1.434726);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,1.828583);
   hnueCCinFV_stack_13->SetBinContent(9,2.090836);
   hnueCCinFV_stack_13->SetBinContent(10,1.03679);
   hnueCCinFV_stack_13->SetBinContent(11,1.008167);
   hnueCCinFV_stack_13->SetBinContent(12,0.8931725);
   hnueCCinFV_stack_13->SetBinContent(13,0.8251203);
   hnueCCinFV_stack_13->SetBinContent(14,1.467229);
   hnueCCinFV_stack_13->SetBinContent(16,1.311428);
   hnueCCinFV_stack_13->SetBinContent(17,1.798306);
   hnueCCinFV_stack_13->SetBinContent(18,2.505159);
   hnueCCinFV_stack_13->SetBinContent(19,0.7996369);
   hnueCCinFV_stack_13->SetBinContent(20,1.427551);
   hnueCCinFV_stack_13->SetBinContent(21,1.371762);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.558937);
   hnueCCinFV_stack_13->SetBinContent(24,1.120196);
   hnueCCinFV_stack_13->SetBinContent(25,0.7330725);
   hnueCCinFV_stack_13->SetBinError(1,1.536667);
   hnueCCinFV_stack_13->SetBinError(2,0.5061728);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.093835);
   hnueCCinFV_stack_13->SetBinError(5,0.7254927);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.7892615);
   hnueCCinFV_stack_13->SetBinError(9,0.7914692);
   hnueCCinFV_stack_13->SetBinError(10,0.8625403);
   hnueCCinFV_stack_13->SetBinError(11,0.7668684);
   hnueCCinFV_stack_13->SetBinError(12,0.5435604);
   hnueCCinFV_stack_13->SetBinError(13,0.5135658);
   hnueCCinFV_stack_13->SetBinError(14,0.6161243);
   hnueCCinFV_stack_13->SetBinError(16,0.6157922);
   hnueCCinFV_stack_13->SetBinError(17,0.6961947);
   hnueCCinFV_stack_13->SetBinError(18,1.430662);
   hnueCCinFV_stack_13->SetBinError(19,0.4930632);
   hnueCCinFV_stack_13->SetBinError(20,0.7839814);
   hnueCCinFV_stack_13->SetBinError(21,0.5792069);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3931235);
   hnueCCinFV_stack_13->SetBinError(24,0.6425361);
   hnueCCinFV_stack_13->SetBinError(25,0.4278236);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__17->SetBinContent(1,106.8057);
   hmcerror__17->SetBinContent(2,113.8414);
   hmcerror__17->SetBinContent(3,109.799);
   hmcerror__17->SetBinContent(4,110.9372);
   hmcerror__17->SetBinContent(5,96.45267);
   hmcerror__17->SetBinContent(6,102.7196);
   hmcerror__17->SetBinContent(7,121.5162);
   hmcerror__17->SetBinContent(8,107.9277);
   hmcerror__17->SetBinContent(9,105.2759);
   hmcerror__17->SetBinContent(10,110.7651);
   hmcerror__17->SetBinContent(11,108.6565);
   hmcerror__17->SetBinContent(12,119.5024);
   hmcerror__17->SetBinContent(13,112.2869);
   hmcerror__17->SetBinContent(14,110.6959);
   hmcerror__17->SetBinContent(15,117.5341);
   hmcerror__17->SetBinContent(16,117.9977);
   hmcerror__17->SetBinContent(17,110.9174);
   hmcerror__17->SetBinContent(18,121.6045);
   hmcerror__17->SetBinContent(19,110.243);
   hmcerror__17->SetBinContent(20,103.3876);
   hmcerror__17->SetBinContent(21,108.3203);
   hmcerror__17->SetBinContent(22,111.7466);
   hmcerror__17->SetBinContent(23,117.6378);
   hmcerror__17->SetBinContent(24,119.556);
   hmcerror__17->SetBinContent(25,119.7694);
   hmcerror__17->SetBinError(1,27.19706);
   hmcerror__17->SetBinError(2,32.34714);
   hmcerror__17->SetBinError(3,30.46667);
   hmcerror__17->SetBinError(4,33.0668);
   hmcerror__17->SetBinError(5,29.35177);
   hmcerror__17->SetBinError(6,29.81672);
   hmcerror__17->SetBinError(7,30.309);
   hmcerror__17->SetBinError(8,31.72149);
   hmcerror__17->SetBinError(9,29.63988);
   hmcerror__17->SetBinError(10,29.10591);
   hmcerror__17->SetBinError(11,30.062);
   hmcerror__17->SetBinError(12,36.28414);
   hmcerror__17->SetBinError(13,33.46957);
   hmcerror__17->SetBinError(14,32.13511);
   hmcerror__17->SetBinError(15,37.07158);
   hmcerror__17->SetBinError(16,34.07209);
   hmcerror__17->SetBinError(17,29.38362);
   hmcerror__17->SetBinError(18,35.51474);
   hmcerror__17->SetBinError(19,31.09152);
   hmcerror__17->SetBinError(20,31.59094);
   hmcerror__17->SetBinError(21,29.24234);
   hmcerror__17->SetBinError(22,30.12817);
   hmcerror__17->SetBinError(23,35.36155);
   hmcerror__17->SetBinError(24,36.44055);
   hmcerror__17->SetBinError(25,39.87928);
   hmcerror__17->SetBinError(26,0.3895343);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3021[25] = {
   129,
   101,
   119,
   120,
   112,
   97,
   103,
   138,
   102,
   125,
   114,
   112,
   112,
   150,
   107,
   116,
   130,
   119,
   105,
   120,
   109,
   121,
   155,
   111,
   111};
   Double_t _felx3021[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3021[25] = {
   11.35782,
   10.04988,
   10.90871,
   10.95445,
   10.58301,
   9.9704,
   10.14889,
   11.74734,
   10.0995,
   11.18034,
   10.67708,
   10.58301,
   10.58301,
   12.24745,
   10.34408,
   10.77033,
   11.40175,
   10.90871,
   10.24695,
   10.95445,
   10.44031,
   11,
   12.4499,
   10.53565,
   10.53565};
   Double_t _fehx3021[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3021[25] = {
   11.35782,
   10.04988,
   10.90871,
   10.95445,
   10.58301,
   9.769,
   10.14889,
   11.74734,
   10.0995,
   11.18034,
   10.67708,
   10.58301,
   10.58301,
   12.24745,
   10.34408,
   10.77033,
   11.40175,
   10.90871,
   10.24695,
   10.95445,
   10.44031,
   11,
   12.4499,
   10.53565,
   10.53565};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(78.98757);
   Graph_Graph3021->SetMaximum(175.4919);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.2/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3022[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3022[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3022[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3022[25] = {
   0.2546405,
   0.2841423,
   0.2774766,
   0.2980678,
   0.3043127,
   0.290273,
   0.2494235,
   0.2939143,
   0.2815448,
   0.2627714,
   0.2766701,
   0.3036268,
   0.2980718,
   0.2903008,
   0.3154112,
   0.2887522,
   0.2649143,
   0.2920511,
   0.2820271,
   0.3055582,
   0.2699619,
   0.2696114,
   0.3005968,
   0.3047991,
   0.3329673};
   Double_t _fehx3022[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3022[25] = {
   0.2546405,
   0.2841423,
   0.2774766,
   0.2980678,
   0.3043127,
   0.290273,
   0.2494235,
   0.2939143,
   0.2815448,
   0.2627714,
   0.2766701,
   0.3036268,
   0.2980718,
   0.2903008,
   0.3154112,
   0.2887522,
   0.2649143,
   0.2920511,
   0.2820271,
   0.3055582,
   0.2699619,
   0.2696114,
   0.3005968,
   0.3047991,
   0.3329673};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3023[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3023[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3023[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3023[25] = {
   0.2112553,
   0.21967,
   0.2117446,
   0.2174241,
   0.2208156,
   0.215529,
   0.2090836,
   0.2057251,
   0.2119462,
   0.2076706,
   0.2147303,
   0.2081408,
   0.2237268,
   0.2322182,
   0.2311363,
   0.2265188,
   0.2106526,
   0.2020518,
   0.2251782,
   0.2235857,
   0.2096549,
   0.2202452,
   0.2151281,
   0.224295,
   0.2064772};
   Double_t _fehx3023[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3023[25] = {
   0.2112553,
   0.21967,
   0.2117446,
   0.2174241,
   0.2208156,
   0.215529,
   0.2090836,
   0.2057251,
   0.2119462,
   0.2076706,
   0.2147303,
   0.2081408,
   0.2237268,
   0.2322182,
   0.2311363,
   0.2265188,
   0.2106526,
   0.2020518,
   0.2251782,
   0.2235857,
   0.2096549,
   0.2202452,
   0.2151281,
   0.224295,
   0.2064772};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
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
   
   Double_t _fx3024[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3024[25] = {
   1.2078,
   0.8871996,
   1.083798,
   1.081693,
   1.161191,
   0.9443185,
   0.8476236,
   1.278634,
   0.9688826,
   1.128514,
   1.049178,
   0.9372195,
   0.9974446,
   1.355064,
   0.9103739,
   0.9830702,
   1.172043,
   0.9785819,
   0.9524412,
   1.16068,
   1.006275,
   1.082807,
   1.317604,
   0.9284356,
   0.9267811};
   Double_t _felx3024[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3024[25] = {
   0.1063409,
   0.08827966,
   0.09935161,
   0.09874465,
   0.1097223,
   0.09706426,
   0.08351884,
   0.1088446,
   0.09593368,
   0.1009374,
   0.09826453,
   0.08855892,
   0.09424966,
   0.1106405,
   0.08800917,
   0.09127578,
   0.102795,
   0.08970646,
   0.09294874,
   0.1059551,
   0.09638369,
   0.09843696,
   0.1058325,
   0.0881232,
   0.08796617};
   Double_t _fehx3024[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3024[25] = {
   0.1063409,
   0.08827966,
   0.09935161,
   0.09874465,
   0.1097223,
   0.09510358,
   0.08351884,
   0.1088446,
   0.09593368,
   0.1009374,
   0.09826453,
   0.08855892,
   0.09424966,
   0.1106405,
   0.08800917,
   0.09127578,
   0.102795,
   0.08970646,
   0.09294874,
   0.1059551,
   0.09638369,
   0.09843696,
   0.1058325,
   0.0881232,
   0.08796617};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6939448);
   Graph_Graph3024->SetMaximum(1.535864);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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

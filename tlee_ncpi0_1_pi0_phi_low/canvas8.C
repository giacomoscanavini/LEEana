#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 23:52:14 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-1.02,3.957692,112.7905);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__22->SetBinContent(1,34.40561);
   hmc__22->SetBinContent(2,32.38874);
   hmc__22->SetBinContent(3,40.16718);
   hmc__22->SetBinContent(4,39.56828);
   hmc__22->SetBinContent(5,34.38213);
   hmc__22->SetBinContent(6,36.79762);
   hmc__22->SetBinContent(7,45.84907);
   hmc__22->SetBinContent(8,33.9983);
   hmc__22->SetBinContent(9,35.28258);
   hmc__22->SetBinContent(10,34.29523);
   hmc__22->SetBinContent(11,35.50747);
   hmc__22->SetBinContent(12,33.66022);
   hmc__22->SetBinContent(13,37.66071);
   hmc__22->SetBinContent(14,36.66997);
   hmc__22->SetBinContent(15,37.59407);
   hmc__22->SetBinContent(16,33.01752);
   hmc__22->SetBinContent(17,36.84397);
   hmc__22->SetBinContent(18,41.73014);
   hmc__22->SetBinContent(19,37.34166);
   hmc__22->SetBinContent(20,37.86775);
   hmc__22->SetBinContent(21,36.36353);
   hmc__22->SetBinContent(22,40.81918);
   hmc__22->SetBinContent(23,35.77196);
   hmc__22->SetBinContent(24,43.4698);
   hmc__22->SetBinContent(25,42.11163);
   hmc__22->SetBinError(1,16.10564);
   hmc__22->SetBinError(2,16.42496);
   hmc__22->SetBinError(3,15.80242);
   hmc__22->SetBinError(4,16.56184);
   hmc__22->SetBinError(5,11.6997);
   hmc__22->SetBinError(6,14.93403);
   hmc__22->SetBinError(7,14.15598);
   hmc__22->SetBinError(8,12.97055);
   hmc__22->SetBinError(9,16.28708);
   hmc__22->SetBinError(10,13.77721);
   hmc__22->SetBinError(11,13.24224);
   hmc__22->SetBinError(12,15.33635);
   hmc__22->SetBinError(13,16.18918);
   hmc__22->SetBinError(14,14.54726);
   hmc__22->SetBinError(15,13.34493);
   hmc__22->SetBinError(16,13.88295);
   hmc__22->SetBinError(17,14.4362);
   hmc__22->SetBinError(18,13.54248);
   hmc__22->SetBinError(19,15.5337);
   hmc__22->SetBinError(20,12.78754);
   hmc__22->SetBinError(21,13.67078);
   hmc__22->SetBinError(22,20.20907);
   hmc__22->SetBinError(23,17.15777);
   hmc__22->SetBinError(24,21.85202);
   hmc__22->SetBinError(25,16.92394);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-1.02);
   hmc__22->SetMaximum(107.1);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-3.15,3.15);
   hs8_stack_8->SetMinimum(-1.664691e-08);
   hs8_stack_8->SetMaximum(48.14152);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.7007682);
   hbadmatch_stack_1->SetBinContent(2,2.043007);
   hbadmatch_stack_1->SetBinContent(3,2.0042);
   hbadmatch_stack_1->SetBinContent(4,1.961233);
   hbadmatch_stack_1->SetBinContent(5,0.999719);
   hbadmatch_stack_1->SetBinContent(6,1.995242);
   hbadmatch_stack_1->SetBinContent(7,1.697586);
   hbadmatch_stack_1->SetBinContent(8,0.9615706);
   hbadmatch_stack_1->SetBinContent(9,1.831363);
   hbadmatch_stack_1->SetBinContent(10,1.030974);
   hbadmatch_stack_1->SetBinContent(11,1.39783);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.4522963);
   hbadmatch_stack_1->SetBinContent(14,1.321842);
   hbadmatch_stack_1->SetBinContent(15,1.421339);
   hbadmatch_stack_1->SetBinContent(16,2.028399);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,1.169821);
   hbadmatch_stack_1->SetBinContent(19,1.559331);
   hbadmatch_stack_1->SetBinContent(20,1.522868);
   hbadmatch_stack_1->SetBinContent(21,0.911953);
   hbadmatch_stack_1->SetBinContent(22,1.146608);
   hbadmatch_stack_1->SetBinContent(23,0.9269427);
   hbadmatch_stack_1->SetBinContent(24,0.9303237);
   hbadmatch_stack_1->SetBinContent(25,2.040734);
   hbadmatch_stack_1->SetBinError(1,0.3582291);
   hbadmatch_stack_1->SetBinError(2,0.8160164);
   hbadmatch_stack_1->SetBinError(3,0.745756);
   hbadmatch_stack_1->SetBinError(4,0.7725257);
   hbadmatch_stack_1->SetBinError(5,0.5116163);
   hbadmatch_stack_1->SetBinError(6,0.7976193);
   hbadmatch_stack_1->SetBinError(7,0.6686926);
   hbadmatch_stack_1->SetBinError(8,0.5262177);
   hbadmatch_stack_1->SetBinError(9,0.8453965);
   hbadmatch_stack_1->SetBinError(10,0.509875);
   hbadmatch_stack_1->SetBinError(11,1.096874);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.3198713);
   hbadmatch_stack_1->SetBinError(14,0.5477909);
   hbadmatch_stack_1->SetBinError(15,0.7187198);
   hbadmatch_stack_1->SetBinError(16,0.7863862);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.608754);
   hbadmatch_stack_1->SetBinError(19,0.7656636);
   hbadmatch_stack_1->SetBinError(20,0.7310154);
   hbadmatch_stack_1->SetBinError(21,0.5733333);
   hbadmatch_stack_1->SetBinError(22,0.5745682);
   hbadmatch_stack_1->SetBinError(23,0.4800908);
   hbadmatch_stack_1->SetBinError(24,0.4814682);
   hbadmatch_stack_1->SetBinError(25,0.866377);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,4.06158);
   hext_stack_2->SetBinContent(2,6.788031);
   hext_stack_2->SetBinContent(3,7.594048);
   hext_stack_2->SetBinContent(4,10.36081);
   hext_stack_2->SetBinContent(5,11.78967);
   hext_stack_2->SetBinContent(6,9.096352);
   hext_stack_2->SetBinContent(7,18.05583);
   hext_stack_2->SetBinContent(8,10.29738);
   hext_stack_2->SetBinContent(9,8.012237);
   hext_stack_2->SetBinContent(10,8.022189);
   hext_stack_2->SetBinContent(11,6.77367);
   hext_stack_2->SetBinContent(12,3.57278);
   hext_stack_2->SetBinContent(13,3.565599);
   hext_stack_2->SetBinContent(14,7.340263);
   hext_stack_2->SetBinContent(15,7.511847);
   hext_stack_2->SetBinContent(16,6.926483);
   hext_stack_2->SetBinContent(17,7.504666);
   hext_stack_2->SetBinContent(18,11.48405);
   hext_stack_2->SetBinContent(19,10.03641);
   hext_stack_2->SetBinContent(20,9.608273);
   hext_stack_2->SetBinContent(21,6.564605);
   hext_stack_2->SetBinContent(22,4.792576);
   hext_stack_2->SetBinContent(23,4.207213);
   hext_stack_2->SetBinContent(24,8.499399);
   hext_stack_2->SetBinContent(25,6.653987);
   hext_stack_2->SetBinError(1,1.232114);
   hext_stack_2->SetBinError(2,1.774777);
   hext_stack_2->SetBinError(3,1.918771);
   hext_stack_2->SetBinError(4,2.10773);
   hext_stack_2->SetBinError(5,2.377672);
   hext_stack_2->SetBinError(6,1.830822);
   hext_stack_2->SetBinError(7,2.813719);
   hext_stack_2->SetBinError(8,2.028585);
   hext_stack_2->SetBinError(9,1.94446);
   hext_stack_2->SetBinError(10,1.800944);
   hext_stack_2->SetBinError(11,1.884738);
   hext_stack_2->SetBinError(12,1.136966);
   hext_stack_2->SetBinError(13,1.22225);
   hext_stack_2->SetBinError(14,1.924218);
   hext_stack_2->SetBinError(15,1.903048);
   hext_stack_2->SetBinError(16,1.933519);
   hext_stack_2->SetBinError(17,1.955197);
   hext_stack_2->SetBinError(18,2.298001);
   hext_stack_2->SetBinError(19,2.082617);
   hext_stack_2->SetBinError(20,2.185309);
   hext_stack_2->SetBinError(21,1.684461);
   hext_stack_2->SetBinError(22,1.337408);
   hext_stack_2->SetBinError(23,1.380421);
   hext_stack_2->SetBinError(24,1.88013);
   hext_stack_2->SetBinError(25,1.642041);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.4950385);
   hdirt_stack_3->SetBinContent(3,0.9485314);
   hdirt_stack_3->SetBinContent(4,1.713947);
   hdirt_stack_3->SetBinContent(6,0.7368217);
   hdirt_stack_3->SetBinContent(7,0.7380326);
   hdirt_stack_3->SetBinContent(8,1.300249);
   hdirt_stack_3->SetBinContent(9,0.9713526);
   hdirt_stack_3->SetBinContent(10,0.2548162);
   hdirt_stack_3->SetBinContent(11,0.5758626);
   hdirt_stack_3->SetBinContent(12,1.191672);
   hdirt_stack_3->SetBinContent(13,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.6990832);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.7344825);
   hdirt_stack_3->SetBinContent(19,1.317204);
   hdirt_stack_3->SetBinContent(20,1.302281);
   hdirt_stack_3->SetBinContent(21,1.657968);
   hdirt_stack_3->SetBinContent(22,1.482424);
   hdirt_stack_3->SetBinContent(23,0.8713484);
   hdirt_stack_3->SetBinContent(24,0.5303817);
   hdirt_stack_3->SetBinContent(25,0.63311);
   hdirt_stack_3->SetBinError(2,0.2933304);
   hdirt_stack_3->SetBinError(3,0.4941443);
   hdirt_stack_3->SetBinError(4,0.7336522);
   hdirt_stack_3->SetBinError(6,0.4486952);
   hdirt_stack_3->SetBinError(7,0.3757051);
   hdirt_stack_3->SetBinError(8,0.6151544);
   hdirt_stack_3->SetBinError(9,0.5778454);
   hdirt_stack_3->SetBinError(10,0.2548162);
   hdirt_stack_3->SetBinError(11,0.3389606);
   hdirt_stack_3->SetBinError(12,0.566382);
   hdirt_stack_3->SetBinError(13,0.3652866);
   hdirt_stack_3->SetBinError(14,0.4258697);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.5159241);
   hdirt_stack_3->SetBinError(19,0.5071212);
   hdirt_stack_3->SetBinError(20,0.6238617);
   hdirt_stack_3->SetBinError(21,1.062625);
   hdirt_stack_3->SetBinError(22,0.6140286);
   hdirt_stack_3->SetBinError(23,0.4895489);
   hdirt_stack_3->SetBinError(24,0.4158979);
   hdirt_stack_3->SetBinError(25,0.3242013);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,7.282496);
   houtFV_stack_4->SetBinContent(2,6.233402);
   houtFV_stack_4->SetBinContent(3,8.710384);
   houtFV_stack_4->SetBinContent(4,7.152214);
   houtFV_stack_4->SetBinContent(5,6.447261);
   houtFV_stack_4->SetBinContent(6,7.29668);
   houtFV_stack_4->SetBinContent(7,5.628696);
   houtFV_stack_4->SetBinContent(8,6.62558);
   houtFV_stack_4->SetBinContent(9,7.726696);
   houtFV_stack_4->SetBinContent(10,6.23181);
   houtFV_stack_4->SetBinContent(11,7.906983);
   houtFV_stack_4->SetBinContent(12,9.028437);
   houtFV_stack_4->SetBinContent(13,8.284002);
   houtFV_stack_4->SetBinContent(14,5.212401);
   houtFV_stack_4->SetBinContent(15,6.890228);
   houtFV_stack_4->SetBinContent(16,7.358651);
   houtFV_stack_4->SetBinContent(17,8.675379);
   houtFV_stack_4->SetBinContent(18,9.456566);
   houtFV_stack_4->SetBinContent(19,6.375524);
   houtFV_stack_4->SetBinContent(20,6.699825);
   houtFV_stack_4->SetBinContent(21,9.004045);
   houtFV_stack_4->SetBinContent(22,8.887412);
   houtFV_stack_4->SetBinContent(23,8.529099);
   houtFV_stack_4->SetBinContent(24,8.429073);
   houtFV_stack_4->SetBinContent(25,12.36729);
   houtFV_stack_4->SetBinError(1,1.321769);
   houtFV_stack_4->SetBinError(2,1.14073);
   houtFV_stack_4->SetBinError(3,1.543716);
   houtFV_stack_4->SetBinError(4,1.36738);
   houtFV_stack_4->SetBinError(5,1.260444);
   houtFV_stack_4->SetBinError(6,1.350911);
   houtFV_stack_4->SetBinError(7,1.244088);
   houtFV_stack_4->SetBinError(8,1.289073);
   houtFV_stack_4->SetBinError(9,1.326304);
   houtFV_stack_4->SetBinError(10,1.190606);
   houtFV_stack_4->SetBinError(11,1.446145);
   houtFV_stack_4->SetBinError(12,1.790136);
   houtFV_stack_4->SetBinError(13,1.489567);
   houtFV_stack_4->SetBinError(14,1.072172);
   houtFV_stack_4->SetBinError(15,1.360846);
   houtFV_stack_4->SetBinError(16,1.33191);
   houtFV_stack_4->SetBinError(17,1.517151);
   houtFV_stack_4->SetBinError(18,1.646838);
   houtFV_stack_4->SetBinError(19,1.291988);
   houtFV_stack_4->SetBinError(20,1.185344);
   houtFV_stack_4->SetBinError(21,1.452996);
   houtFV_stack_4->SetBinError(22,1.49069);
   houtFV_stack_4->SetBinError(23,1.444626);
   houtFV_stack_4->SetBinError(24,1.470315);
   houtFV_stack_4->SetBinError(25,2.115648);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7017707);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4726148);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.931522);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6691307);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5464904);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5424238);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6485422);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3624597);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6006339);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.06873766);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.626774);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.07767264);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5926517);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8610816);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.568001);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4850277);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5894818);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4442319);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.056661);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.775487);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3608807);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4845476);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6552504);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8329939);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7052659);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2596232);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1960569);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3956949);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2192034);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2942504);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3300282);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3573085);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1541444);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2492889);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04161298);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2186183);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04798097);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.235453);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3802602);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3478157);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1495015);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3316004);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1936944);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3710717);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3459136);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2109545);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1971071);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3643068);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2836307);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.344478);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4605523);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.06630175);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.0587264);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1397558);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.0151491);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2955117);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03831454);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04441126);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1294876);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04049794);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.718952);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.094651);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.60997);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.605313);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.302692);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.750826);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.994651);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.362109);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.720766);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.05574);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.468902);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.567312);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.812185);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.632546);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.561476);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.112514);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.144606);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.794412);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.668261);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.15815);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.710951);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.421322);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.16822);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.916574);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.341845);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5860351);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5433672);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7546559);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6835253);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5367782);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8654001);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6766305);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5588976);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6883186);
   hNCpi0inFVres_stack_7->SetBinError(10,0.748601);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6106387);
   hNCpi0inFVres_stack_7->SetBinError(12,0.791127);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8525204);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8928702);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6521993);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6642974);
   hNCpi0inFVres_stack_7->SetBinError(17,0.67376);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5664484);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6989704);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9710891);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7254379);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7539365);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7582912);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7823898);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7275675);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.877429);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.286278);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.290025);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.071747);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.259264);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7587557);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.840711);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.22478);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.100407);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9699028);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.05141);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.447777);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.150623);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.479269);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8571339);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.230763);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.783386);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9225518);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6312499);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.098194);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8551719);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.256035);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.179745);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.610051);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.834941);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5189416);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3404115);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7449363);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.25346);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3645522);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1715597);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6508065);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4049387);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3069536);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.352157);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3551942);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3701789);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3707433);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4734085);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3772631);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2788323);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5332389);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3552517);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2831447);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4608761);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.199345);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.671349);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3591837);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3957584);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5721751);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,8.960231);
   hCCpi0inFV_stack_10->SetBinContent(2,6.538695);
   hCCpi0inFV_stack_10->SetBinContent(3,8.611567);
   hCCpi0inFV_stack_10->SetBinContent(4,7.263503);
   hCCpi0inFV_stack_10->SetBinContent(5,5.421575);
   hCCpi0inFV_stack_10->SetBinContent(6,6.398738);
   hCCpi0inFV_stack_10->SetBinContent(7,5.619981);
   hCCpi0inFV_stack_10->SetBinContent(8,6.982382);
   hCCpi0inFV_stack_10->SetBinContent(9,5.185131);
   hCCpi0inFV_stack_10->SetBinContent(10,8.846175);
   hCCpi0inFV_stack_10->SetBinContent(11,8.256264);
   hCCpi0inFV_stack_10->SetBinContent(12,6.888792);
   hCCpi0inFV_stack_10->SetBinContent(13,9.20087);
   hCCpi0inFV_stack_10->SetBinContent(14,7.553593);
   hCCpi0inFV_stack_10->SetBinContent(15,8.45467);
   hCCpi0inFV_stack_10->SetBinContent(16,7.323333);
   hCCpi0inFV_stack_10->SetBinContent(17,7.459629);
   hCCpi0inFV_stack_10->SetBinContent(18,7.610432);
   hCCpi0inFV_stack_10->SetBinContent(19,6.647276);
   hCCpi0inFV_stack_10->SetBinContent(20,7.05675);
   hCCpi0inFV_stack_10->SetBinContent(21,6.825531);
   hCCpi0inFV_stack_10->SetBinContent(22,9.16168);
   hCCpi0inFV_stack_10->SetBinContent(23,9.651819);
   hCCpi0inFV_stack_10->SetBinContent(24,7.942894);
   hCCpi0inFV_stack_10->SetBinContent(25,7.126558);
   hCCpi0inFV_stack_10->SetBinError(1,1.533052);
   hCCpi0inFV_stack_10->SetBinError(2,1.278608);
   hCCpi0inFV_stack_10->SetBinError(3,1.470566);
   hCCpi0inFV_stack_10->SetBinError(4,1.350495);
   hCCpi0inFV_stack_10->SetBinError(5,1.143339);
   hCCpi0inFV_stack_10->SetBinError(6,1.248738);
   hCCpi0inFV_stack_10->SetBinError(7,1.160423);
   hCCpi0inFV_stack_10->SetBinError(8,1.34541);
   hCCpi0inFV_stack_10->SetBinError(9,1.145492);
   hCCpi0inFV_stack_10->SetBinError(10,1.490836);
   hCCpi0inFV_stack_10->SetBinError(11,1.469348);
   hCCpi0inFV_stack_10->SetBinError(12,1.301327);
   hCCpi0inFV_stack_10->SetBinError(13,1.575375);
   hCCpi0inFV_stack_10->SetBinError(14,1.406697);
   hCCpi0inFV_stack_10->SetBinError(15,1.482681);
   hCCpi0inFV_stack_10->SetBinError(16,1.416052);
   hCCpi0inFV_stack_10->SetBinError(17,1.344653);
   hCCpi0inFV_stack_10->SetBinError(18,1.393808);
   hCCpi0inFV_stack_10->SetBinError(19,1.302457);
   hCCpi0inFV_stack_10->SetBinError(20,1.314029);
   hCCpi0inFV_stack_10->SetBinError(21,1.284738);
   hCCpi0inFV_stack_10->SetBinError(22,1.562498);
   hCCpi0inFV_stack_10->SetBinError(23,1.600788);
   hCCpi0inFV_stack_10->SetBinError(24,1.433363);
   hCCpi0inFV_stack_10->SetBinError(25,1.322719);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.073831);
   hNCinFV_stack_11->SetBinContent(2,0.9075772);
   hNCinFV_stack_11->SetBinContent(3,1.622542);
   hNCinFV_stack_11->SetBinContent(4,1.15402);
   hNCinFV_stack_11->SetBinContent(5,1.301496);
   hNCinFV_stack_11->SetBinContent(6,1.876651);
   hNCinFV_stack_11->SetBinContent(7,1.114859);
   hNCinFV_stack_11->SetBinContent(8,1.007109);
   hNCinFV_stack_11->SetBinContent(9,1.19326);
   hNCinFV_stack_11->SetBinContent(10,1.21602);
   hNCinFV_stack_11->SetBinContent(11,1.33438);
   hNCinFV_stack_11->SetBinContent(12,0.5997068);
   hNCinFV_stack_11->SetBinContent(13,0.9895284);
   hNCinFV_stack_11->SetBinContent(14,1.376716);
   hNCinFV_stack_11->SetBinContent(15,1.494776);
   hNCinFV_stack_11->SetBinContent(16,0.9576018);
   hNCinFV_stack_11->SetBinContent(17,1.061892);
   hNCinFV_stack_11->SetBinContent(18,1.705333);
   hNCinFV_stack_11->SetBinContent(19,2.072195);
   hNCinFV_stack_11->SetBinContent(20,0.7681229);
   hNCinFV_stack_11->SetBinContent(21,1.440147);
   hNCinFV_stack_11->SetBinContent(22,2.277052);
   hNCinFV_stack_11->SetBinContent(23,1.473459);
   hNCinFV_stack_11->SetBinContent(24,1.997311);
   hNCinFV_stack_11->SetBinContent(25,1.413361);
   hNCinFV_stack_11->SetBinError(1,0.685784);
   hNCinFV_stack_11->SetBinError(2,0.4587115);
   hNCinFV_stack_11->SetBinError(3,0.8581428);
   hNCinFV_stack_11->SetBinError(4,0.5084533);
   hNCinFV_stack_11->SetBinError(5,0.6006646);
   hNCinFV_stack_11->SetBinError(6,0.7231788);
   hNCinFV_stack_11->SetBinError(7,0.5167828);
   hNCinFV_stack_11->SetBinError(8,0.4769253);
   hNCinFV_stack_11->SetBinError(9,0.4942383);
   hNCinFV_stack_11->SetBinError(10,0.6414573);
   hNCinFV_stack_11->SetBinError(11,0.6137954);
   hNCinFV_stack_11->SetBinError(12,0.3054949);
   hNCinFV_stack_11->SetBinError(13,0.5783446);
   hNCinFV_stack_11->SetBinError(14,0.5772544);
   hNCinFV_stack_11->SetBinError(15,0.6374349);
   hNCinFV_stack_11->SetBinError(16,0.4457722);
   hNCinFV_stack_11->SetBinError(17,0.6901635);
   hNCinFV_stack_11->SetBinError(18,0.5887205);
   hNCinFV_stack_11->SetBinError(19,0.7479186);
   hNCinFV_stack_11->SetBinError(20,0.4673281);
   hNCinFV_stack_11->SetBinError(21,0.5790688);
   hNCinFV_stack_11->SetBinError(22,0.6920302);
   hNCinFV_stack_11->SetBinError(23,0.5878328);
   hNCinFV_stack_11->SetBinError(24,1.005525);
   hNCinFV_stack_11->SetBinError(25,0.7909394);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.83184);
   hnumuCCinFV_stack_12->SetBinContent(2,3.226901);
   hnumuCCinFV_stack_12->SetBinContent(3,2.82296);
   hnumuCCinFV_stack_12->SetBinContent(4,3.155804);
   hnumuCCinFV_stack_12->SetBinContent(5,3.296632);
   hnumuCCinFV_stack_12->SetBinContent(6,3.308776);
   hnumuCCinFV_stack_12->SetBinContent(7,4.962637);
   hnumuCCinFV_stack_12->SetBinContent(8,1.659739);
   hnumuCCinFV_stack_12->SetBinContent(9,3.925044);
   hnumuCCinFV_stack_12->SetBinContent(10,2.335847);
   hnumuCCinFV_stack_12->SetBinContent(11,3.056663);
   hnumuCCinFV_stack_12->SetBinContent(12,4.240924);
   hnumuCCinFV_stack_12->SetBinContent(13,6.253786);
   hnumuCCinFV_stack_12->SetBinContent(14,4.19317);
   hnumuCCinFV_stack_12->SetBinContent(15,5.496419);
   hnumuCCinFV_stack_12->SetBinContent(16,2.063246);
   hnumuCCinFV_stack_12->SetBinContent(17,4.753249);
   hnumuCCinFV_stack_12->SetBinContent(18,4.194011);
   hnumuCCinFV_stack_12->SetBinContent(19,3.741166);
   hnumuCCinFV_stack_12->SetBinContent(20,3.388801);
   hnumuCCinFV_stack_12->SetBinContent(21,3.798273);
   hnumuCCinFV_stack_12->SetBinContent(22,5.909522);
   hnumuCCinFV_stack_12->SetBinContent(23,3.10886);
   hnumuCCinFV_stack_12->SetBinContent(24,6.360486);
   hnumuCCinFV_stack_12->SetBinContent(25,3.954034);
   hnumuCCinFV_stack_12->SetBinError(1,1.196634);
   hnumuCCinFV_stack_12->SetBinError(2,0.8453698);
   hnumuCCinFV_stack_12->SetBinError(3,0.8343425);
   hnumuCCinFV_stack_12->SetBinError(4,0.9064478);
   hnumuCCinFV_stack_12->SetBinError(5,1.40189);
   hnumuCCinFV_stack_12->SetBinError(6,0.9621075);
   hnumuCCinFV_stack_12->SetBinError(7,1.221003);
   hnumuCCinFV_stack_12->SetBinError(8,0.5815308);
   hnumuCCinFV_stack_12->SetBinError(9,1.177243);
   hnumuCCinFV_stack_12->SetBinError(10,0.7518403);
   hnumuCCinFV_stack_12->SetBinError(11,0.8299575);
   hnumuCCinFV_stack_12->SetBinError(12,1.083097);
   hnumuCCinFV_stack_12->SetBinError(13,1.29868);
   hnumuCCinFV_stack_12->SetBinError(14,1.017859);
   hnumuCCinFV_stack_12->SetBinError(15,1.185999);
   hnumuCCinFV_stack_12->SetBinError(16,0.7110183);
   hnumuCCinFV_stack_12->SetBinError(17,1.095284);
   hnumuCCinFV_stack_12->SetBinError(18,1.210221);
   hnumuCCinFV_stack_12->SetBinError(19,2.028969);
   hnumuCCinFV_stack_12->SetBinError(20,0.9686371);
   hnumuCCinFV_stack_12->SetBinError(21,0.9654319);
   hnumuCCinFV_stack_12->SetBinError(22,2.520383);
   hnumuCCinFV_stack_12->SetBinError(23,0.8517973);
   hnumuCCinFV_stack_12->SetBinError(24,1.335046);
   hnumuCCinFV_stack_12->SetBinError(25,1.051892);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.47249);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(20,0.488997);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.4203105);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.3344052);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4972556);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.2179626);
   hnueCCinFV_stack_13->SetBinError(20,0.488997);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.2979737);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__23->SetBinContent(1,34.40561);
   hmcerror__23->SetBinContent(2,32.38874);
   hmcerror__23->SetBinContent(3,40.16718);
   hmcerror__23->SetBinContent(4,39.56828);
   hmcerror__23->SetBinContent(5,34.38213);
   hmcerror__23->SetBinContent(6,36.79762);
   hmcerror__23->SetBinContent(7,45.84907);
   hmcerror__23->SetBinContent(8,33.9983);
   hmcerror__23->SetBinContent(9,35.28258);
   hmcerror__23->SetBinContent(10,34.29523);
   hmcerror__23->SetBinContent(11,35.50747);
   hmcerror__23->SetBinContent(12,33.66022);
   hmcerror__23->SetBinContent(13,37.66071);
   hmcerror__23->SetBinContent(14,36.66997);
   hmcerror__23->SetBinContent(15,37.59407);
   hmcerror__23->SetBinContent(16,33.01752);
   hmcerror__23->SetBinContent(17,36.84397);
   hmcerror__23->SetBinContent(18,41.73014);
   hmcerror__23->SetBinContent(19,37.34166);
   hmcerror__23->SetBinContent(20,37.86775);
   hmcerror__23->SetBinContent(21,36.36353);
   hmcerror__23->SetBinContent(22,40.81918);
   hmcerror__23->SetBinContent(23,35.77196);
   hmcerror__23->SetBinContent(24,43.4698);
   hmcerror__23->SetBinContent(25,42.11163);
   hmcerror__23->SetBinError(1,16.10564);
   hmcerror__23->SetBinError(2,16.42496);
   hmcerror__23->SetBinError(3,15.80242);
   hmcerror__23->SetBinError(4,16.56184);
   hmcerror__23->SetBinError(5,11.6997);
   hmcerror__23->SetBinError(6,14.93403);
   hmcerror__23->SetBinError(7,14.15598);
   hmcerror__23->SetBinError(8,12.97055);
   hmcerror__23->SetBinError(9,16.28708);
   hmcerror__23->SetBinError(10,13.77721);
   hmcerror__23->SetBinError(11,13.24224);
   hmcerror__23->SetBinError(12,15.33635);
   hmcerror__23->SetBinError(13,16.18918);
   hmcerror__23->SetBinError(14,14.54726);
   hmcerror__23->SetBinError(15,13.34493);
   hmcerror__23->SetBinError(16,13.88295);
   hmcerror__23->SetBinError(17,14.4362);
   hmcerror__23->SetBinError(18,13.54248);
   hmcerror__23->SetBinError(19,15.5337);
   hmcerror__23->SetBinError(20,12.78754);
   hmcerror__23->SetBinError(21,13.67078);
   hmcerror__23->SetBinError(22,20.20907);
   hmcerror__23->SetBinError(23,17.15777);
   hmcerror__23->SetBinError(24,21.85202);
   hmcerror__23->SetBinError(25,16.92394);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   43,
   31,
   24,
   22,
   33,
   39,
   37,
   37,
   38,
   33,
   37,
   35,
   51,
   50,
   27,
   30,
   41,
   35,
   33,
   34,
   31,
   32,
   34,
   40,
   38};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   6.6917,
   5.7094,
   5.0476,
   4.8417,
   5.8847,
   6.3813,
   6.2203,
   6.2203,
   6.3013,
   5.8847,
   6.2203,
   6.0548,
   7.2725,
   7.2025,
   5.3414,
   5.6197,
   6.5384,
   6.0548,
   5.8847,
   5.9703,
   5.7094,
   5.7977,
   5.9703,
   6.4604,
   6.3013};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   6.4868,
   5.5017,
   4.837,
   4.6299,
   5.6776,
   6.1757,
   6.0141,
   6.0141,
   6.0955,
   5.6776,
   6.0141,
   5.8483,
   7.0686,
   6.9985,
   5.1322,
   5.4117,
   6.3331,
   5.8483,
   5.6776,
   5.7635,
   5.5017,
   5.5904,
   5.7635,
   6.2549,
   6.0955};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(13.06727);
   Graph_Graph3029->SetMaximum(62.15963);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   0.468111,
   0.5071196,
   0.3934164,
   0.4185637,
   0.3402844,
   0.4058423,
   0.3087517,
   0.381506,
   0.4616182,
   0.4017236,
   0.3729423,
   0.4556225,
   0.4298692,
   0.3967077,
   0.3549742,
   0.4204722,
   0.3918198,
   0.3245252,
   0.4159884,
   0.3376896,
   0.3759475,
   0.4950875,
   0.479643,
   0.5026943,
   0.4018828};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0.468111,
   0.5071196,
   0.3934164,
   0.4185637,
   0.3402844,
   0.4058423,
   0.3087517,
   0.381506,
   0.4616182,
   0.4017236,
   0.3729423,
   0.4556225,
   0.4298692,
   0.3967077,
   0.3549742,
   0.4204722,
   0.3918198,
   0.3245252,
   0.4159884,
   0.3376896,
   0.3759475,
   0.4950875,
   0.479643,
   0.5026943,
   0.4018828};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.2085803,
   0.2226184,
   0.1925373,
   0.1827691,
   0.1781956,
   0.184374,
   0.1617943,
   0.1815954,
   0.198809,
   0.1890833,
   0.2081946,
   0.212893,
   0.2100986,
   0.1854078,
   0.1981302,
   0.2054685,
   0.1986407,
   0.1762518,
   0.174999,
   0.176578,
   0.1960961,
   0.2122458,
   0.2039731,
   0.1790965,
   0.1845699};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.2085803,
   0.2226184,
   0.1925373,
   0.1827691,
   0.1781956,
   0.184374,
   0.1617943,
   0.1815954,
   0.198809,
   0.1890833,
   0.2081946,
   0.212893,
   0.2100986,
   0.1854078,
   0.1981302,
   0.2054685,
   0.1986407,
   0.1762518,
   0.174999,
   0.176578,
   0.1960961,
   0.2122458,
   0.2039731,
   0.1790965,
   0.1845699};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   1.249796,
   0.9571227,
   0.5975028,
   0.556001,
   0.9598009,
   1.059851,
   0.8069957,
   1.08829,
   1.077019,
   0.9622329,
   1.042034,
   1.039803,
   1.354197,
   1.363514,
   0.7181983,
   0.9086085,
   1.112801,
   0.8387222,
   0.8837314,
   0.8978617,
   0.8525026,
   0.7839452,
   0.9504652,
   0.9201791,
   0.9023636};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0.1944944,
   0.1762773,
   0.1256648,
   0.1223632,
   0.1711558,
   0.1734161,
   0.1356691,
   0.1829592,
   0.1785952,
   0.1715895,
   0.1751829,
   0.17988,
   0.1931058,
   0.1964141,
   0.1420809,
   0.1702036,
   0.1774619,
   0.1450942,
   0.1575907,
   0.1576619,
   0.157009,
   0.1420337,
   0.1668989,
   0.1486181,
   0.1496333};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0.188539,
   0.1698646,
   0.1204217,
   0.1170104,
   0.1651323,
   0.1678288,
   0.1311717,
   0.1768941,
   0.1727623,
   0.1655507,
   0.1693756,
   0.1737452,
   0.1876917,
   0.190851,
   0.1365162,
   0.1639039,
   0.1718897,
   0.1401457,
   0.1520446,
   0.1522008,
   0.1512972,
   0.1369552,
   0.1611178,
   0.1438907,
   0.1447463};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.3215651);
   Graph_Graph3032->SetMaximum(1.666437);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

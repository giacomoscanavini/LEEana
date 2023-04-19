#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 12:48:26 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-12.89704,3.553846,1426.141);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__1->SetBinContent(1,157.3863);
   hmc__1->SetBinContent(2,392.5882);
   hmc__1->SetBinContent(3,572.1511);
   hmc__1->SetBinContent(4,639.2607);
   hmc__1->SetBinContent(5,644.8521);
   hmc__1->SetBinContent(6,604.716);
   hmc__1->SetBinContent(7,584.0989);
   hmc__1->SetBinContent(8,518.4305);
   hmc__1->SetBinContent(9,442.0759);
   hmc__1->SetBinContent(10,386.5828);
   hmc__1->SetBinContent(11,348.2158);
   hmc__1->SetBinContent(12,315.8553);
   hmc__1->SetBinContent(13,251.4657);
   hmc__1->SetBinContent(14,223.4922);
   hmc__1->SetBinContent(15,212.1782);
   hmc__1->SetBinContent(16,222.5413);
   hmc__1->SetBinContent(17,176.3415);
   hmc__1->SetBinContent(18,166.4702);
   hmc__1->SetBinContent(19,155.9061);
   hmc__1->SetBinContent(20,146.4454);
   hmc__1->SetBinContent(21,118.2204);
   hmc__1->SetBinContent(22,106.7048);
   hmc__1->SetBinContent(23,63.54836);
   hmc__1->SetBinContent(24,24.28323);
   hmc__1->SetBinError(1,46.6594);
   hmc__1->SetBinError(2,102.4011);
   hmc__1->SetBinError(3,137.5983);
   hmc__1->SetBinError(4,150.0934);
   hmc__1->SetBinError(5,154.3009);
   hmc__1->SetBinError(6,155.5577);
   hmc__1->SetBinError(7,154.1016);
   hmc__1->SetBinError(8,143.1248);
   hmc__1->SetBinError(9,119.1749);
   hmc__1->SetBinError(10,102.4744);
   hmc__1->SetBinError(11,93.65626);
   hmc__1->SetBinError(12,85.34164);
   hmc__1->SetBinError(13,76.37006);
   hmc__1->SetBinError(14,59.60564);
   hmc__1->SetBinError(15,55.10542);
   hmc__1->SetBinError(16,54.24334);
   hmc__1->SetBinError(17,45.26647);
   hmc__1->SetBinError(18,45.09224);
   hmc__1->SetBinError(19,43.66305);
   hmc__1->SetBinError(20,42.58602);
   hmc__1->SetBinError(21,35.19351);
   hmc__1->SetBinError(22,31.97767);
   hmc__1->SetBinError(23,23.06624);
   hmc__1->SetBinError(24,12.23205);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-12.89704);
   hmc__1->SetMaximum(1354.189);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,3.15);
   hs1_stack_1->SetMinimum(-3.646956e-09);
   hs1_stack_1->SetMaximum(677.0947);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.438292);
   hbadmatch_stack_1->SetBinContent(2,7.711203);
   hbadmatch_stack_1->SetBinContent(3,10.00302);
   hbadmatch_stack_1->SetBinContent(4,11.69491);
   hbadmatch_stack_1->SetBinContent(5,10.83254);
   hbadmatch_stack_1->SetBinContent(6,11.75533);
   hbadmatch_stack_1->SetBinContent(7,12.50702);
   hbadmatch_stack_1->SetBinContent(8,12.60192);
   hbadmatch_stack_1->SetBinContent(9,9.749218);
   hbadmatch_stack_1->SetBinContent(10,9.813438);
   hbadmatch_stack_1->SetBinContent(11,13.95064);
   hbadmatch_stack_1->SetBinContent(12,10.12639);
   hbadmatch_stack_1->SetBinContent(13,6.59368);
   hbadmatch_stack_1->SetBinContent(14,8.52844);
   hbadmatch_stack_1->SetBinContent(15,7.748268);
   hbadmatch_stack_1->SetBinContent(16,5.746334);
   hbadmatch_stack_1->SetBinContent(17,5.53709);
   hbadmatch_stack_1->SetBinContent(18,2.779865);
   hbadmatch_stack_1->SetBinContent(19,3.71518);
   hbadmatch_stack_1->SetBinContent(20,3.468857);
   hbadmatch_stack_1->SetBinContent(21,4.137415);
   hbadmatch_stack_1->SetBinContent(22,4.272232);
   hbadmatch_stack_1->SetBinContent(23,3.406041);
   hbadmatch_stack_1->SetBinContent(24,0.4161119);
   hbadmatch_stack_1->SetBinError(1,1.1701);
   hbadmatch_stack_1->SetBinError(2,1.753725);
   hbadmatch_stack_1->SetBinError(3,1.631244);
   hbadmatch_stack_1->SetBinError(4,1.716472);
   hbadmatch_stack_1->SetBinError(5,1.723562);
   hbadmatch_stack_1->SetBinError(6,1.778909);
   hbadmatch_stack_1->SetBinError(7,1.93603);
   hbadmatch_stack_1->SetBinError(8,1.854399);
   hbadmatch_stack_1->SetBinError(9,1.65343);
   hbadmatch_stack_1->SetBinError(10,1.735008);
   hbadmatch_stack_1->SetBinError(11,2.717908);
   hbadmatch_stack_1->SetBinError(12,1.894009);
   hbadmatch_stack_1->SetBinError(13,2.030609);
   hbadmatch_stack_1->SetBinError(14,1.551466);
   hbadmatch_stack_1->SetBinError(15,1.459646);
   hbadmatch_stack_1->SetBinError(16,1.236099);
   hbadmatch_stack_1->SetBinError(17,1.235803);
   hbadmatch_stack_1->SetBinError(18,0.867334);
   hbadmatch_stack_1->SetBinError(19,0.9926377);
   hbadmatch_stack_1->SetBinError(20,0.8879638);
   hbadmatch_stack_1->SetBinError(21,1.021412);
   hbadmatch_stack_1->SetBinError(22,1.866376);
   hbadmatch_stack_1->SetBinError(23,0.998373);
   hbadmatch_stack_1->SetBinError(24,0.2946723);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,6.068624);
   hext_stack_2->SetBinContent(2,15.57158);
   hext_stack_2->SetBinContent(3,34.62649);
   hext_stack_2->SetBinContent(4,40.59137);
   hext_stack_2->SetBinContent(5,60.83459);
   hext_stack_2->SetBinContent(6,53.17994);
   hext_stack_2->SetBinContent(7,64.43489);
   hext_stack_2->SetBinContent(8,49.64583);
   hext_stack_2->SetBinContent(9,55.75352);
   hext_stack_2->SetBinContent(10,59.78039);
   hext_stack_2->SetBinContent(11,47.51067);
   hext_stack_2->SetBinContent(12,43.83093);
   hext_stack_2->SetBinContent(13,30.15554);
   hext_stack_2->SetBinContent(14,29.45049);
   hext_stack_2->SetBinContent(15,24.14877);
   hext_stack_2->SetBinContent(16,43.06561);
   hext_stack_2->SetBinContent(17,24.16193);
   hext_stack_2->SetBinContent(18,19.13875);
   hext_stack_2->SetBinContent(19,13.02383);
   hext_stack_2->SetBinContent(20,15.51967);
   hext_stack_2->SetBinContent(21,8.332225);
   hext_stack_2->SetBinContent(22,9.422328);
   hext_stack_2->SetBinContent(23,4.221574);
   hext_stack_2->SetBinContent(24,1.868591);
   hext_stack_2->SetBinError(1,1.677259);
   hext_stack_2->SetBinError(2,2.516035);
   hext_stack_2->SetBinError(3,3.927477);
   hext_stack_2->SetBinError(4,4.333797);
   hext_stack_2->SetBinError(5,5.432637);
   hext_stack_2->SetBinError(6,4.882392);
   hext_stack_2->SetBinError(7,5.669181);
   hext_stack_2->SetBinError(8,4.604642);
   hext_stack_2->SetBinError(9,5.158841);
   hext_stack_2->SetBinError(10,5.196111);
   hext_stack_2->SetBinError(11,4.766706);
   hext_stack_2->SetBinError(12,4.438356);
   hext_stack_2->SetBinError(13,3.752063);
   hext_stack_2->SetBinError(14,3.652251);
   hext_stack_2->SetBinError(15,3.128944);
   hext_stack_2->SetBinError(16,4.71554);
   hext_stack_2->SetBinError(17,3.395006);
   hext_stack_2->SetBinError(18,3.102609);
   hext_stack_2->SetBinError(19,2.397267);
   hext_stack_2->SetBinError(20,2.695811);
   hext_stack_2->SetBinError(21,1.936759);
   hext_stack_2->SetBinError(22,2.293251);
   hext_stack_2->SetBinError(23,1.226034);
   hext_stack_2->SetBinError(24,0.840497);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.8286346);
   hdirt_stack_3->SetBinContent(2,2.326315);
   hdirt_stack_3->SetBinContent(3,4.681113);
   hdirt_stack_3->SetBinContent(4,6.05139);
   hdirt_stack_3->SetBinContent(5,5.006209);
   hdirt_stack_3->SetBinContent(6,6.616713);
   hdirt_stack_3->SetBinContent(7,7.364449);
   hdirt_stack_3->SetBinContent(8,3.898914);
   hdirt_stack_3->SetBinContent(9,5.723714);
   hdirt_stack_3->SetBinContent(10,3.31719);
   hdirt_stack_3->SetBinContent(11,2.617205);
   hdirt_stack_3->SetBinContent(12,2.104681);
   hdirt_stack_3->SetBinContent(13,1.398231);
   hdirt_stack_3->SetBinContent(14,3.592315);
   hdirt_stack_3->SetBinContent(15,2.801856);
   hdirt_stack_3->SetBinContent(16,2.51247);
   hdirt_stack_3->SetBinContent(17,2.366557);
   hdirt_stack_3->SetBinContent(18,2.735487);
   hdirt_stack_3->SetBinContent(19,2.203223);
   hdirt_stack_3->SetBinContent(20,1.081888);
   hdirt_stack_3->SetBinContent(21,1.369227);
   hdirt_stack_3->SetBinContent(22,0.9857053);
   hdirt_stack_3->SetBinContent(23,1.109369);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4472268);
   hdirt_stack_3->SetBinError(2,0.7745098);
   hdirt_stack_3->SetBinError(3,1.140009);
   hdirt_stack_3->SetBinError(4,1.41063);
   hdirt_stack_3->SetBinError(5,1.088613);
   hdirt_stack_3->SetBinError(6,1.324973);
   hdirt_stack_3->SetBinError(7,1.752419);
   hdirt_stack_3->SetBinError(8,0.9575895);
   hdirt_stack_3->SetBinError(9,1.21524);
   hdirt_stack_3->SetBinError(10,0.8932564);
   hdirt_stack_3->SetBinError(11,0.9069981);
   hdirt_stack_3->SetBinError(12,0.730347);
   hdirt_stack_3->SetBinError(13,0.648701);
   hdirt_stack_3->SetBinError(14,1.260941);
   hdirt_stack_3->SetBinError(15,0.8480316);
   hdirt_stack_3->SetBinError(16,0.841128);
   hdirt_stack_3->SetBinError(17,0.7986879);
   hdirt_stack_3->SetBinError(18,0.8782354);
   hdirt_stack_3->SetBinError(19,1.11899);
   hdirt_stack_3->SetBinError(20,0.5065471);
   hdirt_stack_3->SetBinError(21,0.5932625);
   hdirt_stack_3->SetBinError(22,0.4729306);
   hdirt_stack_3->SetBinError(23,0.4884064);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,11.16117);
   houtFV_stack_4->SetBinContent(2,29.32157);
   houtFV_stack_4->SetBinContent(3,52.68633);
   houtFV_stack_4->SetBinContent(4,59.5388);
   houtFV_stack_4->SetBinContent(5,63.70221);
   houtFV_stack_4->SetBinContent(6,64.46051);
   houtFV_stack_4->SetBinContent(7,57.80815);
   houtFV_stack_4->SetBinContent(8,53.92484);
   houtFV_stack_4->SetBinContent(9,37.56036);
   houtFV_stack_4->SetBinContent(10,35.42763);
   houtFV_stack_4->SetBinContent(11,29.38253);
   houtFV_stack_4->SetBinContent(12,28.2151);
   houtFV_stack_4->SetBinContent(13,19.90291);
   houtFV_stack_4->SetBinContent(14,19.4547);
   houtFV_stack_4->SetBinContent(15,22.36578);
   houtFV_stack_4->SetBinContent(16,21.37056);
   houtFV_stack_4->SetBinContent(17,19.96436);
   houtFV_stack_4->SetBinContent(18,16.36753);
   houtFV_stack_4->SetBinContent(19,18.25784);
   houtFV_stack_4->SetBinContent(20,18.67232);
   houtFV_stack_4->SetBinContent(21,16.04667);
   houtFV_stack_4->SetBinContent(22,14.90778);
   houtFV_stack_4->SetBinContent(23,8.367402);
   houtFV_stack_4->SetBinContent(24,3.364739);
   houtFV_stack_4->SetBinError(1,1.737649);
   houtFV_stack_4->SetBinError(2,2.734906);
   houtFV_stack_4->SetBinError(3,3.680247);
   houtFV_stack_4->SetBinError(4,3.91806);
   houtFV_stack_4->SetBinError(5,3.961291);
   houtFV_stack_4->SetBinError(6,4.054794);
   houtFV_stack_4->SetBinError(7,3.802926);
   houtFV_stack_4->SetBinError(8,3.792336);
   houtFV_stack_4->SetBinError(9,2.98673);
   houtFV_stack_4->SetBinError(10,3.031371);
   houtFV_stack_4->SetBinError(11,2.68615);
   houtFV_stack_4->SetBinError(12,2.688628);
   houtFV_stack_4->SetBinError(13,2.271404);
   houtFV_stack_4->SetBinError(14,2.181338);
   houtFV_stack_4->SetBinError(15,2.373604);
   houtFV_stack_4->SetBinError(16,2.567753);
   houtFV_stack_4->SetBinError(17,2.273974);
   houtFV_stack_4->SetBinError(18,2.006954);
   houtFV_stack_4->SetBinError(19,2.053223);
   houtFV_stack_4->SetBinError(20,2.113625);
   houtFV_stack_4->SetBinError(21,2.088384);
   houtFV_stack_4->SetBinError(22,1.948859);
   houtFV_stack_4->SetBinError(23,1.46533);
   houtFV_stack_4->SetBinError(24,0.9306602);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.731155);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,20.76134);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.62965);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.36184);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.69454);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.649858);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.700346);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.397416);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.714862);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.296858);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.099894);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7662537);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.758044);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9346539);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9855013);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.494639);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.588437);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.354432);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.043838);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8407963);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7859676);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5019459);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4611286);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3933343);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3327621);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2040719);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5090049);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3135935);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.116504);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.75754);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.998766);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.676248);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.761116);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.747498);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.68829);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.199372);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7805356);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.367772);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8501219);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3597403);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4010103);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5888321);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4764188);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.560441);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5540384);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4299718);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3353836);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1878515);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4113122);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2770189);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,48.59737);
   hNCpi0inFVres_stack_7->SetBinContent(2,127.1499);
   hNCpi0inFVres_stack_7->SetBinContent(3,190.9744);
   hNCpi0inFVres_stack_7->SetBinContent(4,236.6435);
   hNCpi0inFVres_stack_7->SetBinContent(5,249.0004);
   hNCpi0inFVres_stack_7->SetBinContent(6,238.4835);
   hNCpi0inFVres_stack_7->SetBinContent(7,224.5643);
   hNCpi0inFVres_stack_7->SetBinContent(8,213.1345);
   hNCpi0inFVres_stack_7->SetBinContent(9,164.7616);
   hNCpi0inFVres_stack_7->SetBinContent(10,147.3096);
   hNCpi0inFVres_stack_7->SetBinContent(11,130.3591);
   hNCpi0inFVres_stack_7->SetBinContent(12,115.5693);
   hNCpi0inFVres_stack_7->SetBinContent(13,99.21893);
   hNCpi0inFVres_stack_7->SetBinContent(14,83.3773);
   hNCpi0inFVres_stack_7->SetBinContent(15,79.31883);
   hNCpi0inFVres_stack_7->SetBinContent(16,75.91402);
   hNCpi0inFVres_stack_7->SetBinContent(17,67.07211);
   hNCpi0inFVres_stack_7->SetBinContent(18,62.21708);
   hNCpi0inFVres_stack_7->SetBinContent(19,56.5788);
   hNCpi0inFVres_stack_7->SetBinContent(20,50.12837);
   hNCpi0inFVres_stack_7->SetBinContent(21,39.26942);
   hNCpi0inFVres_stack_7->SetBinContent(22,30.94039);
   hNCpi0inFVres_stack_7->SetBinContent(23,18.16979);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.624622);
   hNCpi0inFVres_stack_7->SetBinError(1,2.358851);
   hNCpi0inFVres_stack_7->SetBinError(2,3.672629);
   hNCpi0inFVres_stack_7->SetBinError(3,4.484576);
   hNCpi0inFVres_stack_7->SetBinError(4,5.05313);
   hNCpi0inFVres_stack_7->SetBinError(5,5.201576);
   hNCpi0inFVres_stack_7->SetBinError(6,5.051255);
   hNCpi0inFVres_stack_7->SetBinError(7,4.937511);
   hNCpi0inFVres_stack_7->SetBinError(8,4.821775);
   hNCpi0inFVres_stack_7->SetBinError(9,4.133578);
   hNCpi0inFVres_stack_7->SetBinError(10,3.926491);
   hNCpi0inFVres_stack_7->SetBinError(11,3.692041);
   hNCpi0inFVres_stack_7->SetBinError(12,3.559825);
   hNCpi0inFVres_stack_7->SetBinError(13,3.282226);
   hNCpi0inFVres_stack_7->SetBinError(14,2.921088);
   hNCpi0inFVres_stack_7->SetBinError(15,2.847841);
   hNCpi0inFVres_stack_7->SetBinError(16,2.770226);
   hNCpi0inFVres_stack_7->SetBinError(17,2.712221);
   hNCpi0inFVres_stack_7->SetBinError(18,2.570295);
   hNCpi0inFVres_stack_7->SetBinError(19,2.514843);
   hNCpi0inFVres_stack_7->SetBinError(20,2.344603);
   hNCpi0inFVres_stack_7->SetBinError(21,2.066377);
   hNCpi0inFVres_stack_7->SetBinError(22,1.795379);
   hNCpi0inFVres_stack_7->SetBinError(23,1.435734);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8925903);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,15.89676);
   hNCpi0inFVdis_stack_8->SetBinContent(2,35.68241);
   hNCpi0inFVdis_stack_8->SetBinContent(3,52.85826);
   hNCpi0inFVdis_stack_8->SetBinContent(4,58.62759);
   hNCpi0inFVdis_stack_8->SetBinContent(5,51.89652);
   hNCpi0inFVdis_stack_8->SetBinContent(6,44.51297);
   hNCpi0inFVdis_stack_8->SetBinContent(7,42.02555);
   hNCpi0inFVdis_stack_8->SetBinContent(8,30.87992);
   hNCpi0inFVdis_stack_8->SetBinContent(9,28.91001);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.59667);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.0851);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.71983);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.98277);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.44858);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.88373);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.87398);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.700927);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.395186);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.61218);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.114275);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.43133);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.900621);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.672774);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.341777);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.933204);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.394455);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.482037);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.31614);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.160273);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.147776);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.739892);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.80421);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.489552);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.52886);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.539663);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.186143);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.067981);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.317678);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.051824);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9723141);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9365297);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.097637);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8686491);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.10714);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8052492);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7334549);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2420254);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,28.49337);
   hCCpi0inFV_stack_10->SetBinContent(2,71.74947);
   hCCpi0inFV_stack_10->SetBinContent(3,102.3247);
   hCCpi0inFV_stack_10->SetBinContent(4,101.3889);
   hCCpi0inFV_stack_10->SetBinContent(5,87.34634);
   hCCpi0inFV_stack_10->SetBinContent(6,89.02513);
   hCCpi0inFV_stack_10->SetBinContent(7,87.68269);
   hCCpi0inFV_stack_10->SetBinContent(8,74.79671);
   hCCpi0inFV_stack_10->SetBinContent(9,62.44479);
   hCCpi0inFV_stack_10->SetBinContent(10,49.81183);
   hCCpi0inFV_stack_10->SetBinContent(11,44.55345);
   hCCpi0inFV_stack_10->SetBinContent(12,37.53507);
   hCCpi0inFV_stack_10->SetBinContent(13,30.29653);
   hCCpi0inFV_stack_10->SetBinContent(14,26.40467);
   hCCpi0inFV_stack_10->SetBinContent(15,30.76638);
   hCCpi0inFV_stack_10->SetBinContent(16,29.42894);
   hCCpi0inFV_stack_10->SetBinContent(17,21.7719);
   hCCpi0inFV_stack_10->SetBinContent(18,24.62399);
   hCCpi0inFV_stack_10->SetBinContent(19,23.05418);
   hCCpi0inFV_stack_10->SetBinContent(20,23.58123);
   hCCpi0inFV_stack_10->SetBinContent(21,13.98951);
   hCCpi0inFV_stack_10->SetBinContent(22,17.78017);
   hCCpi0inFV_stack_10->SetBinContent(23,11.36926);
   hCCpi0inFV_stack_10->SetBinContent(24,4.797966);
   hCCpi0inFV_stack_10->SetBinError(1,2.696086);
   hCCpi0inFV_stack_10->SetBinError(2,4.227104);
   hCCpi0inFV_stack_10->SetBinError(3,5.126579);
   hCCpi0inFV_stack_10->SetBinError(4,5.081735);
   hCCpi0inFV_stack_10->SetBinError(5,4.635098);
   hCCpi0inFV_stack_10->SetBinError(6,4.797193);
   hCCpi0inFV_stack_10->SetBinError(7,4.715362);
   hCCpi0inFV_stack_10->SetBinError(8,4.406641);
   hCCpi0inFV_stack_10->SetBinError(9,4.037334);
   hCCpi0inFV_stack_10->SetBinError(10,3.476823);
   hCCpi0inFV_stack_10->SetBinError(11,3.306765);
   hCCpi0inFV_stack_10->SetBinError(12,3.043819);
   hCCpi0inFV_stack_10->SetBinError(13,2.712021);
   hCCpi0inFV_stack_10->SetBinError(14,2.611917);
   hCCpi0inFV_stack_10->SetBinError(15,2.786638);
   hCCpi0inFV_stack_10->SetBinError(16,2.706666);
   hCCpi0inFV_stack_10->SetBinError(17,2.281899);
   hCCpi0inFV_stack_10->SetBinError(18,2.421695);
   hCCpi0inFV_stack_10->SetBinError(19,2.407743);
   hCCpi0inFV_stack_10->SetBinError(20,2.414401);
   hCCpi0inFV_stack_10->SetBinError(21,1.852448);
   hCCpi0inFV_stack_10->SetBinError(22,2.109616);
   hCCpi0inFV_stack_10->SetBinError(23,1.708273);
   hCCpi0inFV_stack_10->SetBinError(24,1.049092);
   hCCpi0inFV_stack_10->SetEntries(4680);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,12.85402);
   hNCinFV_stack_11->SetBinContent(2,38.46837);
   hNCinFV_stack_11->SetBinContent(3,47.34399);
   hNCinFV_stack_11->SetBinContent(4,54.8111);
   hNCinFV_stack_11->SetBinContent(5,53.52781);
   hNCinFV_stack_11->SetBinContent(6,41.69588);
   hNCinFV_stack_11->SetBinContent(7,33.47282);
   hNCinFV_stack_11->SetBinContent(8,28.39927);
   hNCinFV_stack_11->SetBinContent(9,26.91853);
   hNCinFV_stack_11->SetBinContent(10,16.96198);
   hNCinFV_stack_11->SetBinContent(11,19.39817);
   hNCinFV_stack_11->SetBinContent(12,14.60478);
   hNCinFV_stack_11->SetBinContent(13,18.40168);
   hNCinFV_stack_11->SetBinContent(14,9.684834);
   hNCinFV_stack_11->SetBinContent(15,13.24407);
   hNCinFV_stack_11->SetBinContent(16,11.81719);
   hNCinFV_stack_11->SetBinContent(17,9.777817);
   hNCinFV_stack_11->SetBinContent(18,12.95099);
   hNCinFV_stack_11->SetBinContent(19,11.53872);
   hNCinFV_stack_11->SetBinContent(20,9.092998);
   hNCinFV_stack_11->SetBinContent(21,9.583252);
   hNCinFV_stack_11->SetBinContent(22,8.202403);
   hNCinFV_stack_11->SetBinContent(23,6.408533);
   hNCinFV_stack_11->SetBinContent(24,2.931052);
   hNCinFV_stack_11->SetBinError(1,1.777004);
   hNCinFV_stack_11->SetBinError(2,3.176615);
   hNCinFV_stack_11->SetBinError(3,3.461304);
   hNCinFV_stack_11->SetBinError(4,3.712887);
   hNCinFV_stack_11->SetBinError(5,3.673348);
   hNCinFV_stack_11->SetBinError(6,3.289591);
   hNCinFV_stack_11->SetBinError(7,2.911536);
   hNCinFV_stack_11->SetBinError(8,2.662747);
   hNCinFV_stack_11->SetBinError(9,2.588184);
   hNCinFV_stack_11->SetBinError(10,2.039543);
   hNCinFV_stack_11->SetBinError(11,2.220837);
   hNCinFV_stack_11->SetBinError(12,1.922679);
   hNCinFV_stack_11->SetBinError(13,2.220802);
   hNCinFV_stack_11->SetBinError(14,1.546245);
   hNCinFV_stack_11->SetBinError(15,1.79828);
   hNCinFV_stack_11->SetBinError(16,1.732797);
   hNCinFV_stack_11->SetBinError(17,1.519514);
   hNCinFV_stack_11->SetBinError(18,1.809901);
   hNCinFV_stack_11->SetBinError(19,1.688742);
   hNCinFV_stack_11->SetBinError(20,1.508019);
   hNCinFV_stack_11->SetBinError(21,1.521206);
   hNCinFV_stack_11->SetBinError(22,1.413748);
   hNCinFV_stack_11->SetBinError(23,1.225574);
   hNCinFV_stack_11->SetBinError(24,0.8781425);
   hNCinFV_stack_11->SetEntries(2180);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,13.69388);
   hnumuCCinFV_stack_12->SetBinContent(2,29.70852);
   hnumuCCinFV_stack_12->SetBinContent(3,46.56633);
   hnumuCCinFV_stack_12->SetBinContent(4,47.06267);
   hnumuCCinFV_stack_12->SetBinContent(5,46.37698);
   hnumuCCinFV_stack_12->SetBinContent(6,42.66193);
   hnumuCCinFV_stack_12->SetBinContent(7,43.75113);
   hnumuCCinFV_stack_12->SetBinContent(8,46.19447);
   hnumuCCinFV_stack_12->SetBinContent(9,44.87933);
   hnumuCCinFV_stack_12->SetBinContent(10,38.29798);
   hnumuCCinFV_stack_12->SetBinContent(11,36.27318);
   hnumuCCinFV_stack_12->SetBinContent(12,40.97756);
   hnumuCCinFV_stack_12->SetBinContent(13,29.78814);
   hnumuCCinFV_stack_12->SetBinContent(14,28.13226);
   hnumuCCinFV_stack_12->SetBinContent(15,15.04059);
   hnumuCCinFV_stack_12->SetBinContent(16,19.16261);
   hnumuCCinFV_stack_12->SetBinContent(17,14.74033);
   hnumuCCinFV_stack_12->SetBinContent(18,13.64659);
   hnumuCCinFV_stack_12->SetBinContent(19,14.3576);
   hnumuCCinFV_stack_12->SetBinContent(20,12.82887);
   hnumuCCinFV_stack_12->SetBinContent(21,12.66689);
   hnumuCCinFV_stack_12->SetBinContent(22,9.560146);
   hnumuCCinFV_stack_12->SetBinContent(23,4.497608);
   hnumuCCinFV_stack_12->SetBinContent(24,2.895701);
   hnumuCCinFV_stack_12->SetBinError(1,2.181082);
   hnumuCCinFV_stack_12->SetBinError(2,2.828822);
   hnumuCCinFV_stack_12->SetBinError(3,4.040966);
   hnumuCCinFV_stack_12->SetBinError(4,4.247659);
   hnumuCCinFV_stack_12->SetBinError(5,4.042613);
   hnumuCCinFV_stack_12->SetBinError(6,3.470489);
   hnumuCCinFV_stack_12->SetBinError(7,3.922147);
   hnumuCCinFV_stack_12->SetBinError(8,4.614372);
   hnumuCCinFV_stack_12->SetBinError(9,3.846409);
   hnumuCCinFV_stack_12->SetBinError(10,3.560026);
   hnumuCCinFV_stack_12->SetBinError(11,3.370812);
   hnumuCCinFV_stack_12->SetBinError(12,3.921414);
   hnumuCCinFV_stack_12->SetBinError(13,3.111813);
   hnumuCCinFV_stack_12->SetBinError(14,3.426992);
   hnumuCCinFV_stack_12->SetBinError(15,1.983401);
   hnumuCCinFV_stack_12->SetBinError(16,2.400238);
   hnumuCCinFV_stack_12->SetBinError(17,2.246837);
   hnumuCCinFV_stack_12->SetBinError(18,2.376833);
   hnumuCCinFV_stack_12->SetBinError(19,2.059921);
   hnumuCCinFV_stack_12->SetBinError(20,1.861722);
   hnumuCCinFV_stack_12->SetBinError(21,1.868495);
   hnumuCCinFV_stack_12->SetBinError(22,1.647237);
   hnumuCCinFV_stack_12->SetBinError(23,1.038399);
   hnumuCCinFV_stack_12->SetBinError(24,0.8488235);
   hnumuCCinFV_stack_12->SetEntries(2561);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,6.343863);
   hnueCCinFV_stack_13->SetBinContent(2,12.79759);
   hnueCCinFV_stack_13->SetBinContent(3,5.559671);
   hnueCCinFV_stack_13->SetBinContent(4,2.364614);
   hnueCCinFV_stack_13->SetBinContent(5,2.483114);
   hnueCCinFV_stack_13->SetBinContent(6,2.829411);
   hnueCCinFV_stack_13->SetBinContent(7,2.788806);
   hnueCCinFV_stack_13->SetBinContent(8,0.8406637);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,2.676795);
   hnueCCinFV_stack_13->SetBinContent(11,0.8594293);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.8350031);
   hnueCCinFV_stack_13->SetBinContent(14,1.429033);
   hnueCCinFV_stack_13->SetBinContent(15,0.8424087);
   hnueCCinFV_stack_13->SetBinContent(16,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(17,0.5371754);
   hnueCCinFV_stack_13->SetBinContent(18,0.7874689);
   hnueCCinFV_stack_13->SetBinContent(19,1.323669);
   hnueCCinFV_stack_13->SetBinContent(20,2.076169);
   hnueCCinFV_stack_13->SetBinContent(21,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(22,1.305924);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.452478);
   hnueCCinFV_stack_13->SetBinError(2,3.03048);
   hnueCCinFV_stack_13->SetBinError(3,1.352499);
   hnueCCinFV_stack_13->SetBinError(4,0.72599);
   hnueCCinFV_stack_13->SetBinError(5,0.7753105);
   hnueCCinFV_stack_13->SetBinError(6,1.008351);
   hnueCCinFV_stack_13->SetBinError(7,0.9357048);
   hnueCCinFV_stack_13->SetBinError(8,0.423337);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.9336474);
   hnueCCinFV_stack_13->SetBinError(11,0.5216512);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.4935949);
   hnueCCinFV_stack_13->SetBinError(14,0.774276);
   hnueCCinFV_stack_13->SetBinError(15,0.4244054);
   hnueCCinFV_stack_13->SetBinError(16,0.4213728);
   hnueCCinFV_stack_13->SetBinError(17,0.3828647);
   hnueCCinFV_stack_13->SetBinError(18,0.4658562);
   hnueCCinFV_stack_13->SetBinError(19,1.104131);
   hnueCCinFV_stack_13->SetBinError(20,0.761711);
   hnueCCinFV_stack_13->SetBinError(21,0.4814682);
   hnueCCinFV_stack_13->SetBinError(22,0.6521576);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(187);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__2->SetBinContent(1,157.3863);
   hmcerror__2->SetBinContent(2,392.5882);
   hmcerror__2->SetBinContent(3,572.1511);
   hmcerror__2->SetBinContent(4,639.2607);
   hmcerror__2->SetBinContent(5,644.8521);
   hmcerror__2->SetBinContent(6,604.716);
   hmcerror__2->SetBinContent(7,584.0989);
   hmcerror__2->SetBinContent(8,518.4305);
   hmcerror__2->SetBinContent(9,442.0759);
   hmcerror__2->SetBinContent(10,386.5828);
   hmcerror__2->SetBinContent(11,348.2158);
   hmcerror__2->SetBinContent(12,315.8553);
   hmcerror__2->SetBinContent(13,251.4657);
   hmcerror__2->SetBinContent(14,223.4922);
   hmcerror__2->SetBinContent(15,212.1782);
   hmcerror__2->SetBinContent(16,222.5413);
   hmcerror__2->SetBinContent(17,176.3415);
   hmcerror__2->SetBinContent(18,166.4702);
   hmcerror__2->SetBinContent(19,155.9061);
   hmcerror__2->SetBinContent(20,146.4454);
   hmcerror__2->SetBinContent(21,118.2204);
   hmcerror__2->SetBinContent(22,106.7048);
   hmcerror__2->SetBinContent(23,63.54836);
   hmcerror__2->SetBinContent(24,24.28323);
   hmcerror__2->SetBinError(1,46.6594);
   hmcerror__2->SetBinError(2,102.4011);
   hmcerror__2->SetBinError(3,137.5983);
   hmcerror__2->SetBinError(4,150.0934);
   hmcerror__2->SetBinError(5,154.3009);
   hmcerror__2->SetBinError(6,155.5577);
   hmcerror__2->SetBinError(7,154.1016);
   hmcerror__2->SetBinError(8,143.1248);
   hmcerror__2->SetBinError(9,119.1749);
   hmcerror__2->SetBinError(10,102.4744);
   hmcerror__2->SetBinError(11,93.65626);
   hmcerror__2->SetBinError(12,85.34164);
   hmcerror__2->SetBinError(13,76.37006);
   hmcerror__2->SetBinError(14,59.60564);
   hmcerror__2->SetBinError(15,55.10542);
   hmcerror__2->SetBinError(16,54.24334);
   hmcerror__2->SetBinError(17,45.26647);
   hmcerror__2->SetBinError(18,45.09224);
   hmcerror__2->SetBinError(19,43.66305);
   hmcerror__2->SetBinError(20,42.58602);
   hmcerror__2->SetBinError(21,35.19351);
   hmcerror__2->SetBinError(22,31.97767);
   hmcerror__2->SetBinError(23,23.06624);
   hmcerror__2->SetBinError(24,12.23205);
   hmcerror__2->SetBinError(25,0.3895343);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3001[24] = {
   127,
   324,
   535,
   582,
   596,
   523,
   490,
   420,
   382,
   306,
   306,
   228,
   241,
   171,
   196,
   174,
   151,
   149,
   144,
   131,
   113,
   81,
   58,
   16};
   Double_t _felx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3001[24] = {
   11.26943,
   18,
   23.13007,
   24.12468,
   24.41311,
   22.86919,
   22.13594,
   20.4939,
   19.54482,
   17.49286,
   17.49286,
   15.09967,
   15.52417,
   13.0767,
   14,
   13.19091,
   12.28821,
   12.20656,
   12,
   11.44552,
   10.63015,
   9.1239,
   7.7446,
   4.1628};
   Double_t _fehx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3001[24] = {
   11.26943,
   18,
   23.13007,
   24.12468,
   24.41311,
   22.86919,
   22.13594,
   20.4939,
   19.54482,
   17.49286,
   17.49286,
   15.09967,
   15.52417,
   13.0767,
   14,
   13.19091,
   12.28821,
   12.20656,
   12,
   11.44552,
   10.63015,
   8.9221,
   7.5415,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,3.465);
   Graph_Graph3001->SetMinimum(10.65348);
   Graph_Graph3001->SetMaximum(681.2707);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3002[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3002[24] = {
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
   Double_t _felx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3002[24] = {
   0.2964642,
   0.2608359,
   0.240493,
   0.2347922,
   0.2392811,
   0.2572409,
   0.263828,
   0.2760732,
   0.2695802,
   0.2650776,
   0.2689604,
   0.2701922,
   0.3036997,
   0.2667012,
   0.2597129,
   0.2437451,
   0.2566978,
   0.2708727,
   0.2800599,
   0.2907979,
   0.2976942,
   0.2996834,
   0.3629715,
   0.5037242};
   Double_t _fehx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3002[24] = {
   0.2964642,
   0.2608359,
   0.240493,
   0.2347922,
   0.2392811,
   0.2572409,
   0.263828,
   0.2760732,
   0.2695802,
   0.2650776,
   0.2689604,
   0.2701922,
   0.3036997,
   0.2667012,
   0.2597129,
   0.2437451,
   0.2566978,
   0.2708727,
   0.2800599,
   0.2907979,
   0.2976942,
   0.2996834,
   0.3629715,
   0.5037242};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,3.465);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3003[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3003[24] = {
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
   Double_t _felx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3003[24] = {
   0.2397734,
   0.230092,
   0.2242539,
   0.2251971,
   0.229715,
   0.2471825,
   0.2532361,
   0.2668653,
   0.2613143,
   0.2457745,
   0.2462999,
   0.2468027,
   0.2350963,
   0.2404656,
   0.2400528,
   0.213209,
   0.2313627,
   0.2432715,
   0.2343726,
   0.2320481,
   0.2427697,
   0.2307891,
   0.2341723,
   0.2533167};
   Double_t _fehx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3003[24] = {
   0.2397734,
   0.230092,
   0.2242539,
   0.2251971,
   0.229715,
   0.2471825,
   0.2532361,
   0.2668653,
   0.2613143,
   0.2457745,
   0.2462999,
   0.2468027,
   0.2350963,
   0.2404656,
   0.2400528,
   0.213209,
   0.2313627,
   0.2432715,
   0.2343726,
   0.2320481,
   0.2427697,
   0.2307891,
   0.2341723,
   0.2533167};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,3.465);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3004[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3004[24] = {
   0.8069318,
   0.8252923,
   0.9350677,
   0.9104267,
   0.924243,
   0.8648688,
   0.838899,
   0.8101375,
   0.864105,
   0.7915511,
   0.8787654,
   0.7218496,
   0.9583812,
   0.7651272,
   0.9237519,
   0.7818775,
   0.8562931,
   0.8950548,
   0.9236328,
   0.8945312,
   0.9558422,
   0.7591034,
   0.9126908,
   0.658891};
   Double_t _felx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3004[24] = {
   0.07160362,
   0.04584957,
   0.0404265,
   0.0377384,
   0.03785847,
   0.03781807,
   0.03789759,
   0.03953066,
   0.04421146,
   0.04524996,
   0.05023568,
   0.04780566,
   0.06173476,
   0.05851074,
   0.06598228,
   0.05927398,
   0.06968414,
   0.07332575,
   0.0769694,
   0.07815556,
   0.08991807,
   0.08550597,
   0.1218694,
   0.171427};
   Double_t _fehx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3004[24] = {
   0.07160362,
   0.04584957,
   0.0404265,
   0.0377384,
   0.03785847,
   0.03781807,
   0.03789759,
   0.03953066,
   0.04421146,
   0.04524996,
   0.05023568,
   0.04780566,
   0.06173476,
   0.05851074,
   0.06598228,
   0.05927398,
   0.06968414,
   0.07332575,
   0.0769694,
   0.07815556,
   0.08991807,
   0.08361477,
   0.1186734,
   0.1624743};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,3.465);
   Graph_Graph3004->SetMinimum(0.4316344);
   Graph_Graph3004->SetMaximum(1.10159);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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

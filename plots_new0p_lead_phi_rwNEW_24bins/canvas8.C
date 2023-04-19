#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 18:06:02 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
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
   pad1->Range(-4.119231,-1.135977,3.957692,125.6151);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__22->SetBinContent(1,56.79884);
   hmc__22->SetBinContent(2,49.33775);
   hmc__22->SetBinContent(3,48.72913);
   hmc__22->SetBinContent(4,51.94981);
   hmc__22->SetBinContent(5,38.06265);
   hmc__22->SetBinContent(6,44.55363);
   hmc__22->SetBinContent(7,50.02987);
   hmc__22->SetBinContent(8,41.16759);
   hmc__22->SetBinContent(9,45.09699);
   hmc__22->SetBinContent(10,41.0247);
   hmc__22->SetBinContent(11,47.1636);
   hmc__22->SetBinContent(12,47.26483);
   hmc__22->SetBinContent(13,47.25066);
   hmc__22->SetBinContent(14,45.0689);
   hmc__22->SetBinContent(15,53.54296);
   hmc__22->SetBinContent(16,44.81115);
   hmc__22->SetBinContent(17,54.37058);
   hmc__22->SetBinContent(18,46.08445);
   hmc__22->SetBinContent(19,51.65578);
   hmc__22->SetBinContent(20,49.60652);
   hmc__22->SetBinContent(21,54.3512);
   hmc__22->SetBinContent(22,44.29633);
   hmc__22->SetBinContent(23,49.9459);
   hmc__22->SetBinContent(24,52.09402);
   hmc__22->SetBinError(1,20.78717);
   hmc__22->SetBinError(2,18.52865);
   hmc__22->SetBinError(3,17.80148);
   hmc__22->SetBinError(4,26.38829);
   hmc__22->SetBinError(5,17.69075);
   hmc__22->SetBinError(6,18.79841);
   hmc__22->SetBinError(7,17.69214);
   hmc__22->SetBinError(8,14.93129);
   hmc__22->SetBinError(9,16.12446);
   hmc__22->SetBinError(10,19.13366);
   hmc__22->SetBinError(11,22.63553);
   hmc__22->SetBinError(12,21.93801);
   hmc__22->SetBinError(13,21.58621);
   hmc__22->SetBinError(14,20.884);
   hmc__22->SetBinError(15,18.16602);
   hmc__22->SetBinError(16,22.03485);
   hmc__22->SetBinError(17,17.81536);
   hmc__22->SetBinError(18,17.00223);
   hmc__22->SetBinError(19,17.85342);
   hmc__22->SetBinError(20,20.17342);
   hmc__22->SetBinError(21,17.25226);
   hmc__22->SetBinError(22,15.33727);
   hmc__22->SetBinError(23,18.76728);
   hmc__22->SetBinError(24,20.51836);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.135977);
   hmc__22->SetMaximum(119.2776);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-3.15,3.15);
   hs8_stack_8->SetMinimum(-4.228303e-08);
   hs8_stack_8->SetMaximum(59.63878);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.867566);
   hbadmatch_stack_1->SetBinContent(2,1.125349);
   hbadmatch_stack_1->SetBinContent(3,2.461094);
   hbadmatch_stack_1->SetBinContent(4,3.216286);
   hbadmatch_stack_1->SetBinContent(5,1.662242);
   hbadmatch_stack_1->SetBinContent(6,0.9134152);
   hbadmatch_stack_1->SetBinContent(7,2.863038);
   hbadmatch_stack_1->SetBinContent(8,0.9990247);
   hbadmatch_stack_1->SetBinContent(9,0.9303237);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,2.83131);
   hbadmatch_stack_1->SetBinContent(12,1.072095);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,1.70528);
   hbadmatch_stack_1->SetBinContent(15,4.215632);
   hbadmatch_stack_1->SetBinContent(16,0.8494088);
   hbadmatch_stack_1->SetBinContent(17,2.753247);
   hbadmatch_stack_1->SetBinContent(18,1.175221);
   hbadmatch_stack_1->SetBinContent(19,0.5368956);
   hbadmatch_stack_1->SetBinContent(20,1.712481);
   hbadmatch_stack_1->SetBinContent(21,1.79039);
   hbadmatch_stack_1->SetBinContent(22,1.121968);
   hbadmatch_stack_1->SetBinContent(23,2.140758);
   hbadmatch_stack_1->SetBinContent(24,0.8474461);
   hbadmatch_stack_1->SetBinError(1,0.7397316);
   hbadmatch_stack_1->SetBinError(2,0.5194673);
   hbadmatch_stack_1->SetBinError(3,0.8508808);
   hbadmatch_stack_1->SetBinError(4,0.9615195);
   hbadmatch_stack_1->SetBinError(5,0.6513556);
   hbadmatch_stack_1->SetBinError(6,0.5442304);
   hbadmatch_stack_1->SetBinError(7,1.00484);
   hbadmatch_stack_1->SetBinError(8,0.5144336);
   hbadmatch_stack_1->SetBinError(9,0.4814682);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.8446159);
   hbadmatch_stack_1->SetBinError(12,0.5551335);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.6657327);
   hbadmatch_stack_1->SetBinError(15,1.423215);
   hbadmatch_stack_1->SetBinError(16,0.4262483);
   hbadmatch_stack_1->SetBinError(17,0.9302502);
   hbadmatch_stack_1->SetBinError(18,0.4797863);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.6682468);
   hbadmatch_stack_1->SetBinError(21,0.745555);
   hbadmatch_stack_1->SetBinError(22,0.5181909);
   hbadmatch_stack_1->SetBinError(23,0.8468197);
   hbadmatch_stack_1->SetBinError(24,0.5131738);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,7.048997);
   hext_stack_2->SetBinContent(2,4.780987);
   hext_stack_2->SetBinContent(3,5.765768);
   hext_stack_2->SetBinContent(4,8.496628);
   hext_stack_2->SetBinContent(5,6.81839);
   hext_stack_2->SetBinContent(6,9.547613);
   hext_stack_2->SetBinContent(7,13.13639);
   hext_stack_2->SetBinContent(8,7.131198);
   hext_stack_2->SetBinContent(9,5.911401);
   hext_stack_2->SetBinContent(10,4.45659);
   hext_stack_2->SetBinContent(11,6.81839);
   hext_stack_2->SetBinContent(12,4.703194);
   hext_stack_2->SetBinContent(13,6.146417);
   hext_stack_2->SetBinContent(14,4.214394);
   hext_stack_2->SetBinContent(15,9.880828);
   hext_stack_2->SetBinContent(16,8.346586);
   hext_stack_2->SetBinContent(17,13.1248);
   hext_stack_2->SetBinContent(18,14.14706);
   hext_stack_2->SetBinContent(19,16.83603);
   hext_stack_2->SetBinContent(20,12.97917);
   hext_stack_2->SetBinContent(21,11.51277);
   hext_stack_2->SetBinContent(22,8.10439);
   hext_stack_2->SetBinContent(23,4.360027);
   hext_stack_2->SetBinContent(24,6.139236);
   hext_stack_2->SetBinError(1,1.711052);
   hext_stack_2->SetBinError(2,1.361888);
   hext_stack_2->SetBinError(3,1.450642);
   hext_stack_2->SetBinError(4,1.96754);
   hext_stack_2->SetBinError(5,1.678236);
   hext_stack_2->SetBinError(6,2.027778);
   hext_stack_2->SetBinError(7,2.339576);
   hext_stack_2->SetBinError(8,1.728522);
   hext_stack_2->SetBinError(9,1.57855);
   hext_stack_2->SetBinError(10,1.322689);
   hext_stack_2->SetBinError(11,1.678236);
   hext_stack_2->SetBinError(12,1.389163);
   hext_stack_2->SetBinError(13,1.65474);
   hext_stack_2->SetBinError(14,1.305512);
   hext_stack_2->SetBinError(15,2.118339);
   hext_stack_2->SetBinError(16,1.829927);
   hext_stack_2->SetBinError(17,2.353656);
   hext_stack_2->SetBinError(18,2.566159);
   hext_stack_2->SetBinError(19,2.72416);
   hext_stack_2->SetBinError(20,2.269854);
   hext_stack_2->SetBinError(21,2.115657);
   hext_stack_2->SetBinError(22,1.81755);
   hext_stack_2->SetBinError(23,1.446312);
   hext_stack_2->SetBinError(24,1.714458);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.776099);
   hdirt_stack_3->SetBinContent(2,1.109369);
   hdirt_stack_3->SetBinContent(3,0.3449163);
   hdirt_stack_3->SetBinContent(4,0.7304975);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(6,0.7506552);
   hdirt_stack_3->SetBinContent(7,0.7341927);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.6383081);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.4720574);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.3986344);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,1.534668);
   hdirt_stack_3->SetBinContent(16,0.51637);
   hdirt_stack_3->SetBinContent(17,1.043231);
   hdirt_stack_3->SetBinContent(18,1.281469);
   hdirt_stack_3->SetBinContent(19,1.405758);
   hdirt_stack_3->SetBinContent(20,0.9654288);
   hdirt_stack_3->SetBinContent(21,1.013654);
   hdirt_stack_3->SetBinContent(22,1.270754);
   hdirt_stack_3->SetBinContent(23,2.412559);
   hdirt_stack_3->SetBinContent(24,1.966627);
   hdirt_stack_3->SetBinError(1,0.458477);
   hdirt_stack_3->SetBinError(2,0.4884064);
   hdirt_stack_3->SetBinError(3,0.3382541);
   hdirt_stack_3->SetBinError(4,0.5179555);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(6,0.4587731);
   hdirt_stack_3->SetBinError(7,0.3741159);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.3996177);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2832398);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.2948844);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.6193051);
   hdirt_stack_3->SetBinError(16,0.4027077);
   hdirt_stack_3->SetBinError(17,0.5800463);
   hdirt_stack_3->SetBinError(18,0.6525385);
   hdirt_stack_3->SetBinError(19,0.987048);
   hdirt_stack_3->SetBinError(20,0.5163876);
   hdirt_stack_3->SetBinError(21,0.4590478);
   hdirt_stack_3->SetBinError(22,0.5943722);
   hdirt_stack_3->SetBinError(23,0.8437742);
   hdirt_stack_3->SetBinError(24,0.7441218);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.13762);
   houtFV_stack_4->SetBinContent(2,7.584138);
   houtFV_stack_4->SetBinContent(3,12.88743);
   houtFV_stack_4->SetBinContent(4,11.6319);
   houtFV_stack_4->SetBinContent(5,10.00412);
   houtFV_stack_4->SetBinContent(6,10.22751);
   houtFV_stack_4->SetBinContent(7,8.721566);
   houtFV_stack_4->SetBinContent(8,11.99295);
   houtFV_stack_4->SetBinContent(9,10.00399);
   houtFV_stack_4->SetBinContent(10,8.457766);
   houtFV_stack_4->SetBinContent(11,9.679763);
   houtFV_stack_4->SetBinContent(12,11.8254);
   houtFV_stack_4->SetBinContent(13,11.33507);
   houtFV_stack_4->SetBinContent(14,10.92278);
   houtFV_stack_4->SetBinContent(15,10.85692);
   houtFV_stack_4->SetBinContent(16,9.950266);
   houtFV_stack_4->SetBinContent(17,10.2934);
   houtFV_stack_4->SetBinContent(18,8.099254);
   houtFV_stack_4->SetBinContent(19,7.034646);
   houtFV_stack_4->SetBinContent(20,7.967649);
   houtFV_stack_4->SetBinContent(21,12.38257);
   houtFV_stack_4->SetBinContent(22,7.695663);
   houtFV_stack_4->SetBinContent(23,13.06156);
   houtFV_stack_4->SetBinContent(24,11.31428);
   houtFV_stack_4->SetBinError(1,1.741567);
   houtFV_stack_4->SetBinError(2,1.369839);
   houtFV_stack_4->SetBinError(3,1.780895);
   houtFV_stack_4->SetBinError(4,1.784003);
   houtFV_stack_4->SetBinError(5,1.536308);
   houtFV_stack_4->SetBinError(6,1.665592);
   houtFV_stack_4->SetBinError(7,1.485242);
   houtFV_stack_4->SetBinError(8,1.936849);
   houtFV_stack_4->SetBinError(9,1.625956);
   houtFV_stack_4->SetBinError(10,1.436425);
   houtFV_stack_4->SetBinError(11,1.545603);
   houtFV_stack_4->SetBinError(12,1.817356);
   houtFV_stack_4->SetBinError(13,1.755512);
   houtFV_stack_4->SetBinError(14,1.695016);
   houtFV_stack_4->SetBinError(15,1.676009);
   houtFV_stack_4->SetBinError(16,1.568311);
   houtFV_stack_4->SetBinError(17,1.974338);
   houtFV_stack_4->SetBinError(18,1.392198);
   houtFV_stack_4->SetBinError(19,1.278161);
   houtFV_stack_4->SetBinError(20,1.415724);
   houtFV_stack_4->SetBinError(21,1.834064);
   houtFV_stack_4->SetBinError(22,1.416128);
   houtFV_stack_4->SetBinError(23,1.802776);
   houtFV_stack_4->SetBinError(24,1.698337);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.697004);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.14374);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.157358);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7944901);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.69634);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7513078);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2563433);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.379057);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3883553);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3285446);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2874767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2814331);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2479823);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2126346);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,6.273531);
   hNCpi0inFVres_stack_7->SetBinContent(2,10.8759);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.737957);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.072102);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.924449);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.406799);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.342453);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.976593);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.000268);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.739126);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.260081);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.428481);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.013053);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.19424);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.113779);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.805304);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.205955);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.98549);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.689071);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.316049);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.329107);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.944299);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.628358);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.782388);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7383462);
   hNCpi0inFVres_stack_7->SetBinError(2,1.145186);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8586596);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9511353);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7363229);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6706215);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7746607);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7386975);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8263999);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9066865);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7554988);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7921326);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8190275);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8457961);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8948759);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8619778);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8673422);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8576395);
   hNCpi0inFVres_stack_7->SetBinError(19,1.053858);
   hNCpi0inFVres_stack_7->SetBinError(20,0.777878);
   hNCpi0inFVres_stack_7->SetBinError(21,1.044025);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8053701);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9155506);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9549806);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.938894);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.260244);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.46409);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.550534);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.743426);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.045254);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.492158);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.602758);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.924612);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.54987);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.799058);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.51068);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.38039);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.338208);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.435358);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.757044);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.882262);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.366276);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.510016);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.817748);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.970034);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.630658);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.287312);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4879888);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5225872);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3558418);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5128132);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4471301);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2223273);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4002008);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3335405);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4944596);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5258042);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4107593);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5418448);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3525453);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3603705);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3264641);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4550394);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4661653);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4042329);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5541556);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5787203);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.571558);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3347053);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5045885);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,15.72519);
   hCCpi0inFV_stack_10->SetBinContent(2,11.49994);
   hCCpi0inFV_stack_10->SetBinContent(3,10.62944);
   hCCpi0inFV_stack_10->SetBinContent(4,9.568027);
   hCCpi0inFV_stack_10->SetBinContent(5,6.200592);
   hCCpi0inFV_stack_10->SetBinContent(6,9.689665);
   hCCpi0inFV_stack_10->SetBinContent(7,8.276672);
   hCCpi0inFV_stack_10->SetBinContent(8,5.83773);
   hCCpi0inFV_stack_10->SetBinContent(9,11.51888);
   hCCpi0inFV_stack_10->SetBinContent(10,8.459538);
   hCCpi0inFV_stack_10->SetBinContent(11,8.731467);
   hCCpi0inFV_stack_10->SetBinContent(12,9.689299);
   hCCpi0inFV_stack_10->SetBinContent(13,9.451652);
   hCCpi0inFV_stack_10->SetBinContent(14,8.56395);
   hCCpi0inFV_stack_10->SetBinContent(15,8.155912);
   hCCpi0inFV_stack_10->SetBinContent(16,10.37292);
   hCCpi0inFV_stack_10->SetBinContent(17,11.27922);
   hCCpi0inFV_stack_10->SetBinContent(18,6.005567);
   hCCpi0inFV_stack_10->SetBinContent(19,8.966887);
   hCCpi0inFV_stack_10->SetBinContent(20,9.233079);
   hCCpi0inFV_stack_10->SetBinContent(21,9.893107);
   hCCpi0inFV_stack_10->SetBinContent(22,8.899055);
   hCCpi0inFV_stack_10->SetBinContent(23,9.817365);
   hCCpi0inFV_stack_10->SetBinContent(24,9.418957);
   hCCpi0inFV_stack_10->SetBinError(1,2.055203);
   hCCpi0inFV_stack_10->SetBinError(2,1.737544);
   hCCpi0inFV_stack_10->SetBinError(3,1.64733);
   hCCpi0inFV_stack_10->SetBinError(4,1.524948);
   hCCpi0inFV_stack_10->SetBinError(5,1.287372);
   hCCpi0inFV_stack_10->SetBinError(6,1.609963);
   hCCpi0inFV_stack_10->SetBinError(7,1.472272);
   hCCpi0inFV_stack_10->SetBinError(8,1.215514);
   hCCpi0inFV_stack_10->SetBinError(9,1.681989);
   hCCpi0inFV_stack_10->SetBinError(10,1.391131);
   hCCpi0inFV_stack_10->SetBinError(11,1.486745);
   hCCpi0inFV_stack_10->SetBinError(12,1.481295);
   hCCpi0inFV_stack_10->SetBinError(13,1.504554);
   hCCpi0inFV_stack_10->SetBinError(14,1.387223);
   hCCpi0inFV_stack_10->SetBinError(15,1.428167);
   hCCpi0inFV_stack_10->SetBinError(16,1.665472);
   hCCpi0inFV_stack_10->SetBinError(17,1.745317);
   hCCpi0inFV_stack_10->SetBinError(18,1.272514);
   hCCpi0inFV_stack_10->SetBinError(19,1.550352);
   hCCpi0inFV_stack_10->SetBinError(20,1.532912);
   hCCpi0inFV_stack_10->SetBinError(21,1.567034);
   hCCpi0inFV_stack_10->SetBinError(22,1.427628);
   hCCpi0inFV_stack_10->SetBinError(23,1.650445);
   hCCpi0inFV_stack_10->SetBinError(24,1.546669);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.098782);
   hNCinFV_stack_11->SetBinContent(2,3.27123);
   hNCinFV_stack_11->SetBinContent(3,2.047679);
   hNCinFV_stack_11->SetBinContent(4,2.539312);
   hNCinFV_stack_11->SetBinContent(5,1.855576);
   hNCinFV_stack_11->SetBinContent(6,1.760295);
   hNCinFV_stack_11->SetBinContent(7,0.7868615);
   hNCinFV_stack_11->SetBinContent(8,2.392469);
   hNCinFV_stack_11->SetBinContent(9,1.323754);
   hNCinFV_stack_11->SetBinContent(10,2.348751);
   hNCinFV_stack_11->SetBinContent(11,1.805704);
   hNCinFV_stack_11->SetBinContent(12,2.78759);
   hNCinFV_stack_11->SetBinContent(13,1.950857);
   hNCinFV_stack_11->SetBinContent(14,1.608988);
   hNCinFV_stack_11->SetBinContent(15,3.224131);
   hNCinFV_stack_11->SetBinContent(16,1.073786);
   hNCinFV_stack_11->SetBinContent(17,1.52047);
   hNCinFV_stack_11->SetBinContent(18,1.465526);
   hNCinFV_stack_11->SetBinContent(19,0.5352025);
   hNCinFV_stack_11->SetBinContent(20,3.561535);
   hNCinFV_stack_11->SetBinContent(21,2.629521);
   hNCinFV_stack_11->SetBinContent(22,2.975853);
   hNCinFV_stack_11->SetBinContent(23,2.147572);
   hNCinFV_stack_11->SetBinContent(24,2.835772);
   hNCinFV_stack_11->SetBinError(1,0.6777592);
   hNCinFV_stack_11->SetBinError(2,0.9417298);
   hNCinFV_stack_11->SetBinError(3,0.7358852);
   hNCinFV_stack_11->SetBinError(4,0.8333082);
   hNCinFV_stack_11->SetBinError(5,0.6794384);
   hNCinFV_stack_11->SetBinError(6,0.5867699);
   hNCinFV_stack_11->SetBinError(7,0.3934307);
   hNCinFV_stack_11->SetBinError(8,0.7848912);
   hNCinFV_stack_11->SetBinError(9,0.5560625);
   hNCinFV_stack_11->SetBinError(10,0.6780321);
   hNCinFV_stack_11->SetBinError(11,0.7080169);
   hNCinFV_stack_11->SetBinError(12,0.8331329);
   hNCinFV_stack_11->SetBinError(13,0.7609034);
   hNCinFV_stack_11->SetBinError(14,0.6801404);
   hNCinFV_stack_11->SetBinError(15,0.8539343);
   hNCinFV_stack_11->SetBinError(16,0.5557297);
   hNCinFV_stack_11->SetBinError(17,0.5898325);
   hNCinFV_stack_11->SetBinError(18,0.6209405);
   hNCinFV_stack_11->SetBinError(19,0.3921167);
   hNCinFV_stack_11->SetBinError(20,1.020895);
   hNCinFV_stack_11->SetBinError(21,0.899863);
   hNCinFV_stack_11->SetBinError(22,0.8541054);
   hNCinFV_stack_11->SetBinError(23,0.7859205);
   hNCinFV_stack_11->SetBinError(24,0.808577);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.61164);
   hnumuCCinFV_stack_12->SetBinContent(2,6.328233);
   hnumuCCinFV_stack_12->SetBinContent(3,3.756766);
   hnumuCCinFV_stack_12->SetBinContent(4,4.544844);
   hnumuCCinFV_stack_12->SetBinContent(5,2.619984);
   hnumuCCinFV_stack_12->SetBinContent(6,4.34423);
   hnumuCCinFV_stack_12->SetBinContent(7,6.532799);
   hnumuCCinFV_stack_12->SetBinContent(8,4.664514);
   hnumuCCinFV_stack_12->SetBinContent(9,3.675327);
   hnumuCCinFV_stack_12->SetBinContent(10,5.983091);
   hnumuCCinFV_stack_12->SetBinContent(11,7.746658);
   hnumuCCinFV_stack_12->SetBinContent(12,7.052365);
   hnumuCCinFV_stack_12->SetBinContent(13,8.067586);
   hnumuCCinFV_stack_12->SetBinContent(14,7.392947);
   hnumuCCinFV_stack_12->SetBinContent(15,5.266509);
   hnumuCCinFV_stack_12->SetBinContent(16,4.33527);
   hnumuCCinFV_stack_12->SetBinContent(17,5.765633);
   hnumuCCinFV_stack_12->SetBinContent(18,4.615904);
   hnumuCCinFV_stack_12->SetBinContent(19,4.570159);
   hnumuCCinFV_stack_12->SetBinContent(20,4.2189);
   hnumuCCinFV_stack_12->SetBinContent(21,2.49425);
   hnumuCCinFV_stack_12->SetBinContent(22,3.507206);
   hnumuCCinFV_stack_12->SetBinContent(23,4.753777);
   hnumuCCinFV_stack_12->SetBinContent(24,6.863059);
   hnumuCCinFV_stack_12->SetBinError(1,1.538877);
   hnumuCCinFV_stack_12->SetBinError(2,1.271824);
   hnumuCCinFV_stack_12->SetBinError(3,0.8965445);
   hnumuCCinFV_stack_12->SetBinError(4,1.088483);
   hnumuCCinFV_stack_12->SetBinError(5,0.8537986);
   hnumuCCinFV_stack_12->SetBinError(6,1.06545);
   hnumuCCinFV_stack_12->SetBinError(7,2.221859);
   hnumuCCinFV_stack_12->SetBinError(8,1.509415);
   hnumuCCinFV_stack_12->SetBinError(9,1.177458);
   hnumuCCinFV_stack_12->SetBinError(10,1.266718);
   hnumuCCinFV_stack_12->SetBinError(11,1.834754);
   hnumuCCinFV_stack_12->SetBinError(12,2.507111);
   hnumuCCinFV_stack_12->SetBinError(13,1.525147);
   hnumuCCinFV_stack_12->SetBinError(14,1.453599);
   hnumuCCinFV_stack_12->SetBinError(15,1.195384);
   hnumuCCinFV_stack_12->SetBinError(16,1.097547);
   hnumuCCinFV_stack_12->SetBinError(17,1.371073);
   hnumuCCinFV_stack_12->SetBinError(18,1.323695);
   hnumuCCinFV_stack_12->SetBinError(19,1.089748);
   hnumuCCinFV_stack_12->SetBinError(20,1.086911);
   hnumuCCinFV_stack_12->SetBinError(21,0.7656862);
   hnumuCCinFV_stack_12->SetBinError(22,0.9555876);
   hnumuCCinFV_stack_12->SetBinError(23,1.063917);
   hnumuCCinFV_stack_12->SetBinError(24,1.30652);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(6,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(14,1.076281);
   hnueCCinFV_stack_13->SetBinContent(15,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(18,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(20,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(23,1.157431);
   hnueCCinFV_stack_13->SetBinContent(24,1.136579);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(6,0.1711909);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.2252857);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.1529246);
   hnueCCinFV_stack_13->SetBinError(14,0.5806102);
   hnueCCinFV_stack_13->SetBinError(15,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(18,0.2463303);
   hnueCCinFV_stack_13->SetBinError(20,0.3397478);
   hnueCCinFV_stack_13->SetBinError(23,1.157431);
   hnueCCinFV_stack_13->SetBinError(24,0.7935128);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__23->SetBinContent(1,56.79884);
   hmcerror__23->SetBinContent(2,49.33775);
   hmcerror__23->SetBinContent(3,48.72913);
   hmcerror__23->SetBinContent(4,51.94981);
   hmcerror__23->SetBinContent(5,38.06265);
   hmcerror__23->SetBinContent(6,44.55363);
   hmcerror__23->SetBinContent(7,50.02987);
   hmcerror__23->SetBinContent(8,41.16759);
   hmcerror__23->SetBinContent(9,45.09699);
   hmcerror__23->SetBinContent(10,41.0247);
   hmcerror__23->SetBinContent(11,47.1636);
   hmcerror__23->SetBinContent(12,47.26483);
   hmcerror__23->SetBinContent(13,47.25066);
   hmcerror__23->SetBinContent(14,45.0689);
   hmcerror__23->SetBinContent(15,53.54296);
   hmcerror__23->SetBinContent(16,44.81115);
   hmcerror__23->SetBinContent(17,54.37058);
   hmcerror__23->SetBinContent(18,46.08445);
   hmcerror__23->SetBinContent(19,51.65578);
   hmcerror__23->SetBinContent(20,49.60652);
   hmcerror__23->SetBinContent(21,54.3512);
   hmcerror__23->SetBinContent(22,44.29633);
   hmcerror__23->SetBinContent(23,49.9459);
   hmcerror__23->SetBinContent(24,52.09402);
   hmcerror__23->SetBinError(1,20.78717);
   hmcerror__23->SetBinError(2,18.52865);
   hmcerror__23->SetBinError(3,17.80148);
   hmcerror__23->SetBinError(4,26.38829);
   hmcerror__23->SetBinError(5,17.69075);
   hmcerror__23->SetBinError(6,18.79841);
   hmcerror__23->SetBinError(7,17.69214);
   hmcerror__23->SetBinError(8,14.93129);
   hmcerror__23->SetBinError(9,16.12446);
   hmcerror__23->SetBinError(10,19.13366);
   hmcerror__23->SetBinError(11,22.63553);
   hmcerror__23->SetBinError(12,21.93801);
   hmcerror__23->SetBinError(13,21.58621);
   hmcerror__23->SetBinError(14,20.884);
   hmcerror__23->SetBinError(15,18.16602);
   hmcerror__23->SetBinError(16,22.03485);
   hmcerror__23->SetBinError(17,17.81536);
   hmcerror__23->SetBinError(18,17.00223);
   hmcerror__23->SetBinError(19,17.85342);
   hmcerror__23->SetBinError(20,20.17342);
   hmcerror__23->SetBinError(21,17.25226);
   hmcerror__23->SetBinError(22,15.33727);
   hmcerror__23->SetBinError(23,18.76728);
   hmcerror__23->SetBinError(24,20.51836);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3029[24] = {
   41,
   44,
   40,
   40,
   39,
   47,
   40,
   36,
   31,
   39,
   49,
   47,
   54,
   48,
   54,
   47,
   49,
   49,
   44,
   45,
   52,
   48,
   37,
   53};
   Double_t _felx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3029[24] = {
   6.5384,
   6.7671,
   6.4604,
   6.4604,
   6.3813,
   6.9882,
   6.4604,
   6.1381,
   5.7094,
   6.3813,
   7.1318,
   6.9882,
   7.4785,
   7.0604,
   7.4785,
   6.9882,
   7.1318,
   7.1318,
   6.7671,
   6.8416,
   7.3419,
   7.0604,
   6.2203,
   7.4105};
   Double_t _fehx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3029[24] = {
   6.3331,
   6.5623,
   6.2549,
   6.2549,
   6.1757,
   6.7839,
   6.2549,
   5.9318,
   5.5017,
   6.1757,
   6.9277,
   6.7839,
   7.275,
   6.8561,
   7.275,
   6.7839,
   6.9277,
   6.9277,
   6.5623,
   6.637,
   7.1381,
   6.8561,
   6.0141,
   7.2068};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(21.69216);
   Graph_Graph3029->SetMaximum(64.87344);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all");
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
   
   Double_t _fx3030[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3030[24] = {
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
   Double_t _felx3030[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3030[24] = {
   0.3659788,
   0.3755471,
   0.365315,
   0.5079574,
   0.4647797,
   0.4219277,
   0.3536316,
   0.3626951,
   0.3575506,
   0.4663937,
   0.4799365,
   0.4641509,
   0.4568446,
   0.4633794,
   0.3392794,
   0.491727,
   0.3276653,
   0.3689364,
   0.3456229,
   0.4066688,
   0.3174218,
   0.3462426,
   0.3757522,
   0.3938717};
   Double_t _fehx3030[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3030[24] = {
   0.3659788,
   0.3755471,
   0.365315,
   0.5079574,
   0.4647797,
   0.4219277,
   0.3536316,
   0.3626951,
   0.3575506,
   0.4663937,
   0.4799365,
   0.4641509,
   0.4568446,
   0.4633794,
   0.3392794,
   0.491727,
   0.3276653,
   0.3689364,
   0.3456229,
   0.4066688,
   0.3174218,
   0.3462426,
   0.3757522,
   0.3938717};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
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
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3031[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3031[24] = {
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
   Double_t _felx3031[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3031[24] = {
   0.1840059,
   0.2078765,
   0.2065472,
   0.1911067,
   0.2002084,
   0.1804727,
   0.1733209,
   0.1900141,
   0.1888649,
   0.2044847,
   0.1891625,
   0.2070782,
   0.1833187,
   0.2093486,
   0.1919051,
   0.1941307,
   0.1785165,
   0.1708804,
   0.1714992,
   0.1713408,
   0.1780883,
   0.2027861,
   0.2119651,
   0.1942387};
   Double_t _fehx3031[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3031[24] = {
   0.1840059,
   0.2078765,
   0.2065472,
   0.1911067,
   0.2002084,
   0.1804727,
   0.1733209,
   0.1900141,
   0.1888649,
   0.2044847,
   0.1891625,
   0.2070782,
   0.1833187,
   0.2093486,
   0.1919051,
   0.1941307,
   0.1785165,
   0.1708804,
   0.1714992,
   0.1713408,
   0.1780883,
   0.2027861,
   0.2119651,
   0.1942387};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
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
   
   Double_t _fx3032[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3032[24] = {
   0.7218458,
   0.891812,
   0.8208642,
   0.7699739,
   1.024626,
   1.054908,
   0.7995224,
   0.8744743,
   0.6874073,
   0.9506467,
   1.038937,
   0.9943969,
   1.142841,
   1.065036,
   1.008536,
   1.048846,
   0.9012226,
   1.063265,
   0.8517923,
   0.9071388,
   0.9567405,
   1.083611,
   0.7408015,
   1.017391};
   Double_t _felx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3032[24] = {
   0.115115,
   0.1371587,
   0.1325778,
   0.1243585,
   0.1676525,
   0.1568492,
   0.1291309,
   0.1491003,
   0.1266027,
   0.1555477,
   0.1512141,
   0.147852,
   0.1582729,
   0.1566579,
   0.1396729,
   0.1559478,
   0.1311702,
   0.154755,
   0.1310037,
   0.1379173,
   0.1350826,
   0.1593902,
   0.1245407,
   0.1422524};
   Double_t _fehx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3032[24] = {
   0.1115005,
   0.1330077,
   0.1283606,
   0.1204027,
   0.1622509,
   0.1522637,
   0.1250233,
   0.1440891,
   0.121997,
   0.1505361,
   0.1468866,
   0.1435296,
   0.1539661,
   0.1521249,
   0.1358722,
   0.1513887,
   0.1274163,
   0.1503262,
   0.127039,
   0.1337929,
   0.1313329,
   0.1547781,
   0.1204123,
   0.1383422};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.4872043);
   Graph_Graph3032->SetMaximum(1.370408);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

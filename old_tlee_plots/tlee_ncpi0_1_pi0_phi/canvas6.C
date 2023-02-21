#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 17:07:16 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-4.119231,-2.92,3.957692,322.8905);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__16->SetBinContent(1,110.0807);
   hmc__16->SetBinContent(2,119.3215);
   hmc__16->SetBinContent(3,126.0001);
   hmc__16->SetBinContent(4,108.6395);
   hmc__16->SetBinContent(5,109.5541);
   hmc__16->SetBinContent(6,109.3706);
   hmc__16->SetBinContent(7,108.1731);
   hmc__16->SetBinContent(8,98.82031);
   hmc__16->SetBinContent(9,111.112);
   hmc__16->SetBinContent(10,104.3737);
   hmc__16->SetBinContent(11,109.2319);
   hmc__16->SetBinContent(12,105.8492);
   hmc__16->SetBinContent(13,108.6448);
   hmc__16->SetBinContent(14,103.5031);
   hmc__16->SetBinContent(15,113.9043);
   hmc__16->SetBinContent(16,112.7004);
   hmc__16->SetBinContent(17,113.3025);
   hmc__16->SetBinContent(18,107.2313);
   hmc__16->SetBinContent(19,112.1731);
   hmc__16->SetBinContent(20,117.1551);
   hmc__16->SetBinContent(21,119.6747);
   hmc__16->SetBinContent(22,114.0389);
   hmc__16->SetBinContent(23,122.6634);
   hmc__16->SetBinContent(24,124.8104);
   hmc__16->SetBinContent(25,105.5678);
   hmc__16->SetBinError(1,30.35284);
   hmc__16->SetBinError(2,34.0843);
   hmc__16->SetBinError(3,35.89265);
   hmc__16->SetBinError(4,29.3628);
   hmc__16->SetBinError(5,31.01653);
   hmc__16->SetBinError(6,31.92143);
   hmc__16->SetBinError(7,32.27861);
   hmc__16->SetBinError(8,28.92376);
   hmc__16->SetBinError(9,32.82957);
   hmc__16->SetBinError(10,32.44895);
   hmc__16->SetBinError(11,38.95189);
   hmc__16->SetBinError(12,33.46745);
   hmc__16->SetBinError(13,32.64042);
   hmc__16->SetBinError(14,31.56783);
   hmc__16->SetBinError(15,31.84774);
   hmc__16->SetBinError(16,32.96476);
   hmc__16->SetBinError(17,31.83475);
   hmc__16->SetBinError(18,28.35029);
   hmc__16->SetBinError(19,29.37987);
   hmc__16->SetBinError(20,31.7072);
   hmc__16->SetBinError(21,33.26658);
   hmc__16->SetBinError(22,33.32023);
   hmc__16->SetBinError(23,38.96367);
   hmc__16->SetBinError(24,33.03705);
   hmc__16->SetBinError(25,33.47483);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-2.92);
   hmc__16->SetMaximum(306.6);
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
   hs6_stack_6->SetMinimum(-2.606256e-09);
   hs6_stack_6->SetMaximum(132.3001);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.529689);
   hbadmatch_stack_1->SetBinContent(2,3.888537);
   hbadmatch_stack_1->SetBinContent(3,3.824379);
   hbadmatch_stack_1->SetBinContent(4,1.553723);
   hbadmatch_stack_1->SetBinContent(5,2.520419);
   hbadmatch_stack_1->SetBinContent(6,3.481602);
   hbadmatch_stack_1->SetBinContent(7,3.387197);
   hbadmatch_stack_1->SetBinContent(8,1.646199);
   hbadmatch_stack_1->SetBinContent(9,2.796435);
   hbadmatch_stack_1->SetBinContent(10,0.9930644);
   hbadmatch_stack_1->SetBinContent(11,3.558495);
   hbadmatch_stack_1->SetBinContent(12,2.852194);
   hbadmatch_stack_1->SetBinContent(13,2.528304);
   hbadmatch_stack_1->SetBinContent(14,2.037861);
   hbadmatch_stack_1->SetBinContent(15,4.128798);
   hbadmatch_stack_1->SetBinContent(16,3.191223);
   hbadmatch_stack_1->SetBinContent(17,2.462358);
   hbadmatch_stack_1->SetBinContent(18,3.273814);
   hbadmatch_stack_1->SetBinContent(19,2.318281);
   hbadmatch_stack_1->SetBinContent(20,1.553797);
   hbadmatch_stack_1->SetBinContent(21,2.601323);
   hbadmatch_stack_1->SetBinContent(22,1.59936);
   hbadmatch_stack_1->SetBinContent(23,3.49039);
   hbadmatch_stack_1->SetBinContent(24,1.416858);
   hbadmatch_stack_1->SetBinContent(25,1.9664);
   hbadmatch_stack_1->SetBinError(1,0.7096934);
   hbadmatch_stack_1->SetBinError(2,1.070948);
   hbadmatch_stack_1->SetBinError(3,1.184525);
   hbadmatch_stack_1->SetBinError(4,0.5590352);
   hbadmatch_stack_1->SetBinError(5,0.8911566);
   hbadmatch_stack_1->SetBinError(6,1.057745);
   hbadmatch_stack_1->SetBinError(7,1.038673);
   hbadmatch_stack_1->SetBinError(8,0.6028896);
   hbadmatch_stack_1->SetBinError(9,0.9713283);
   hbadmatch_stack_1->SetBinError(10,0.4558256);
   hbadmatch_stack_1->SetBinError(11,0.993);
   hbadmatch_stack_1->SetBinError(12,0.9376412);
   hbadmatch_stack_1->SetBinError(13,0.8247929);
   hbadmatch_stack_1->SetBinError(14,0.709437);
   hbadmatch_stack_1->SetBinError(15,2.358958);
   hbadmatch_stack_1->SetBinError(16,0.8995022);
   hbadmatch_stack_1->SetBinError(17,0.862129);
   hbadmatch_stack_1->SetBinError(18,1.01228);
   hbadmatch_stack_1->SetBinError(19,0.8081898);
   hbadmatch_stack_1->SetBinError(20,0.5866105);
   hbadmatch_stack_1->SetBinError(21,0.8574579);
   hbadmatch_stack_1->SetBinError(22,0.6694179);
   hbadmatch_stack_1->SetBinError(23,0.9670512);
   hbadmatch_stack_1->SetBinError(24,0.5370584);
   hbadmatch_stack_1->SetBinError(25,0.7002827);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,9.309826);
   hext_stack_2->SetBinContent(2,6.635217);
   hext_stack_2->SetBinContent(3,9.690475);
   hext_stack_2->SetBinContent(4,8.670983);
   hext_stack_2->SetBinContent(5,10.44742);
   hext_stack_2->SetBinContent(6,17.84394);
   hext_stack_2->SetBinContent(7,13.94518);
   hext_stack_2->SetBinContent(8,9.342957);
   hext_stack_2->SetBinContent(9,9.533251);
   hext_stack_2->SetBinContent(10,10.04082);
   hext_stack_2->SetBinContent(11,10.75305);
   hext_stack_2->SetBinContent(12,5.42701);
   hext_stack_2->SetBinContent(13,4.289415);
   hext_stack_2->SetBinContent(14,7.359033);
   hext_stack_2->SetBinContent(15,8.525351);
   hext_stack_2->SetBinContent(16,13.49109);
   hext_stack_2->SetBinContent(17,16.7207);
   hext_stack_2->SetBinContent(18,13.43484);
   hext_stack_2->SetBinContent(19,20.33537);
   hext_stack_2->SetBinContent(20,13.29916);
   hext_stack_2->SetBinContent(21,22.0252);
   hext_stack_2->SetBinContent(22,8.435968);
   hext_stack_2->SetBinContent(23,14.11393);
   hext_stack_2->SetBinContent(24,8.738824);
   hext_stack_2->SetBinContent(25,5.915811);
   hext_stack_2->SetBinError(1,2.049844);
   hext_stack_2->SetBinError(2,1.721504);
   hext_stack_2->SetBinError(3,2.199014);
   hext_stack_2->SetBinError(4,1.858458);
   hext_stack_2->SetBinError(5,2.153541);
   hext_stack_2->SetBinError(6,2.978074);
   hext_stack_2->SetBinError(7,2.380996);
   hext_stack_2->SetBinError(8,1.879408);
   hext_stack_2->SetBinError(9,2.124685);
   hext_stack_2->SetBinError(10,2.114809);
   hext_stack_2->SetBinError(11,2.238359);
   hext_stack_2->SetBinError(12,1.549687);
   hext_stack_2->SetBinError(13,1.402017);
   hext_stack_2->SetBinError(14,1.853466);
   hext_stack_2->SetBinError(15,1.751116);
   hext_stack_2->SetBinError(16,2.564353);
   hext_stack_2->SetBinError(17,2.833839);
   hext_stack_2->SetBinError(18,2.459133);
   hext_stack_2->SetBinError(19,3.202235);
   hext_stack_2->SetBinError(20,2.263261);
   hext_stack_2->SetBinError(21,3.353054);
   hext_stack_2->SetBinError(22,1.790955);
   hext_stack_2->SetBinError(23,2.693483);
   hext_stack_2->SetBinError(24,1.978979);
   hext_stack_2->SetBinError(25,1.620784);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,1.234817);
   hdirt_stack_3->SetBinContent(3,2.131906);
   hdirt_stack_3->SetBinContent(4,0.6951543);
   hdirt_stack_3->SetBinContent(5,1.601985);
   hdirt_stack_3->SetBinContent(6,2.14831);
   hdirt_stack_3->SetBinContent(7,1.30666);
   hdirt_stack_3->SetBinContent(8,2.524927);
   hdirt_stack_3->SetBinContent(9,1.582441);
   hdirt_stack_3->SetBinContent(10,0.6951543);
   hdirt_stack_3->SetBinContent(11,2.030934);
   hdirt_stack_3->SetBinContent(12,0.9714755);
   hdirt_stack_3->SetBinContent(13,0.9472378);
   hdirt_stack_3->SetBinContent(14,0.947653);
   hdirt_stack_3->SetBinContent(15,1.58478);
   hdirt_stack_3->SetBinContent(16,2.744433);
   hdirt_stack_3->SetBinContent(17,2.285565);
   hdirt_stack_3->SetBinContent(18,3.043538);
   hdirt_stack_3->SetBinContent(19,0.8171503);
   hdirt_stack_3->SetBinContent(20,2.762156);
   hdirt_stack_3->SetBinContent(21,1.471387);
   hdirt_stack_3->SetBinContent(22,0.8904731);
   hdirt_stack_3->SetBinContent(23,1.758792);
   hdirt_stack_3->SetBinContent(24,0.9500369);
   hdirt_stack_3->SetBinContent(25,0.2046459);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.5720096);
   hdirt_stack_3->SetBinError(3,0.7477667);
   hdirt_stack_3->SetBinError(4,0.4258516);
   hdirt_stack_3->SetBinError(5,0.6884687);
   hdirt_stack_3->SetBinError(6,0.7667935);
   hdirt_stack_3->SetBinError(7,0.503779);
   hdirt_stack_3->SetBinError(8,0.8178288);
   hdirt_stack_3->SetBinError(9,0.766152);
   hdirt_stack_3->SetBinError(10,0.4258516);
   hdirt_stack_3->SetBinError(11,1.195764);
   hdirt_stack_3->SetBinError(12,0.4684838);
   hdirt_stack_3->SetBinError(13,0.4313462);
   hdirt_stack_3->SetBinError(14,0.495081);
   hdirt_stack_3->SetBinError(15,0.7330241);
   hdirt_stack_3->SetBinError(16,0.8379604);
   hdirt_stack_3->SetBinError(17,0.8494771);
   hdirt_stack_3->SetBinError(18,0.974389);
   hdirt_stack_3->SetBinError(19,0.4133284);
   hdirt_stack_3->SetBinError(20,0.9146845);
   hdirt_stack_3->SetBinError(21,0.5834788);
   hdirt_stack_3->SetBinError(22,0.4366068);
   hdirt_stack_3->SetBinError(23,0.6749744);
   hdirt_stack_3->SetBinError(24,0.56276);
   hdirt_stack_3->SetBinError(25,0.2046459);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.42648);
   houtFV_stack_4->SetBinContent(2,13.32058);
   houtFV_stack_4->SetBinContent(3,13.55988);
   houtFV_stack_4->SetBinContent(4,14.34301);
   houtFV_stack_4->SetBinContent(5,9.436035);
   houtFV_stack_4->SetBinContent(6,10.90099);
   houtFV_stack_4->SetBinContent(7,11.22828);
   houtFV_stack_4->SetBinContent(8,8.11284);
   houtFV_stack_4->SetBinContent(9,14.33453);
   houtFV_stack_4->SetBinContent(10,12.03684);
   houtFV_stack_4->SetBinContent(11,12.63128);
   houtFV_stack_4->SetBinContent(12,13.14634);
   houtFV_stack_4->SetBinContent(13,11.50491);
   houtFV_stack_4->SetBinContent(14,9.708002);
   houtFV_stack_4->SetBinContent(15,9.360717);
   houtFV_stack_4->SetBinContent(16,6.981398);
   houtFV_stack_4->SetBinContent(17,9.656834);
   houtFV_stack_4->SetBinContent(18,11.02833);
   houtFV_stack_4->SetBinContent(19,11.63512);
   houtFV_stack_4->SetBinContent(20,13.57785);
   houtFV_stack_4->SetBinContent(21,8.666614);
   houtFV_stack_4->SetBinContent(22,10.9334);
   houtFV_stack_4->SetBinContent(23,11.55138);
   houtFV_stack_4->SetBinContent(24,12.95867);
   houtFV_stack_4->SetBinContent(25,11.26192);
   houtFV_stack_4->SetBinError(1,1.793664);
   houtFV_stack_4->SetBinError(2,1.80702);
   houtFV_stack_4->SetBinError(3,1.900959);
   houtFV_stack_4->SetBinError(4,1.925584);
   houtFV_stack_4->SetBinError(5,1.589123);
   houtFV_stack_4->SetBinError(6,1.657435);
   houtFV_stack_4->SetBinError(7,1.699188);
   houtFV_stack_4->SetBinError(8,1.401132);
   houtFV_stack_4->SetBinError(9,1.958502);
   houtFV_stack_4->SetBinError(10,1.749833);
   houtFV_stack_4->SetBinError(11,1.781583);
   houtFV_stack_4->SetBinError(12,1.725098);
   houtFV_stack_4->SetBinError(13,1.598058);
   houtFV_stack_4->SetBinError(14,1.483839);
   houtFV_stack_4->SetBinError(15,1.535375);
   houtFV_stack_4->SetBinError(16,1.303685);
   houtFV_stack_4->SetBinError(17,1.515004);
   houtFV_stack_4->SetBinError(18,1.68287);
   houtFV_stack_4->SetBinError(19,1.737683);
   houtFV_stack_4->SetBinError(20,1.901008);
   houtFV_stack_4->SetBinError(21,1.468765);
   houtFV_stack_4->SetBinError(22,1.658643);
   houtFV_stack_4->SetBinError(23,1.676098);
   houtFV_stack_4->SetBinError(24,1.792651);
   houtFV_stack_4->SetBinError(25,1.708147);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.995965);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.481216);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.72926);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.426019);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.373445);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.401472);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.819621);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.796276);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.120473);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.535862);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.69778);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.436807);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.104208);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.667098);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.447898);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.902693);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.824967);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.953021);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.326282);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.384624);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.235006);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.082128);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.274163);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.471972);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.893248);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6539539);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8041368);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6646916);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.106184);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6242044);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6577244);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6196324);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6170483);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5743734);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8612703);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8100078);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9456257);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6893743);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6697908);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6586732);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7949485);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7354918);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6933339);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8260688);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.9951362);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6102273);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6665389);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.554618);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6393438);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.548773);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1711091);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.485068);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2103015);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1965047);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1485528);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3751988);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.330051);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05203149);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05293922);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1486486);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4065661);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4908864);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.160152);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2768364);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1477056);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4978157);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2258139);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1451252);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2789302);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.554856);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08526886);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2932972);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.187402);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1173373);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07259747);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2913572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1003458);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06731433);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06503523);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1898207);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.226553);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02642348);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0435647);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06674852);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1893728);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2033836);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07589652);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1619874);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07459424);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.237905);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1457933);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1011985);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1430214);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2950227);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.0461028);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1317447);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08691755);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05776126);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,42.39353);
   hNCpi0inFVres_stack_7->SetBinContent(2,41.32384);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.51248);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.50063);
   hNCpi0inFVres_stack_7->SetBinContent(5,42.5574);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.91496);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.3605);
   hNCpi0inFVres_stack_7->SetBinContent(8,39.60926);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.79203);
   hNCpi0inFVres_stack_7->SetBinContent(10,42.4698);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.61032);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.61137);
   hNCpi0inFVres_stack_7->SetBinContent(13,37.72246);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.95705);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.50565);
   hNCpi0inFVres_stack_7->SetBinContent(16,43.79623);
   hNCpi0inFVres_stack_7->SetBinContent(17,42.3101);
   hNCpi0inFVres_stack_7->SetBinContent(18,38.74479);
   hNCpi0inFVres_stack_7->SetBinContent(19,39.34931);
   hNCpi0inFVres_stack_7->SetBinContent(20,40.70638);
   hNCpi0inFVres_stack_7->SetBinContent(21,40.98894);
   hNCpi0inFVres_stack_7->SetBinContent(22,44.57883);
   hNCpi0inFVres_stack_7->SetBinContent(23,47.62004);
   hNCpi0inFVres_stack_7->SetBinContent(24,47.17476);
   hNCpi0inFVres_stack_7->SetBinContent(25,40.6896);
   hNCpi0inFVres_stack_7->SetBinError(1,2.213451);
   hNCpi0inFVres_stack_7->SetBinError(2,2.151425);
   hNCpi0inFVres_stack_7->SetBinError(3,2.319213);
   hNCpi0inFVres_stack_7->SetBinError(4,2.170053);
   hNCpi0inFVres_stack_7->SetBinError(5,2.228526);
   hNCpi0inFVres_stack_7->SetBinError(6,2.011528);
   hNCpi0inFVres_stack_7->SetBinError(7,2.10963);
   hNCpi0inFVres_stack_7->SetBinError(8,2.15038);
   hNCpi0inFVres_stack_7->SetBinError(9,2.137371);
   hNCpi0inFVres_stack_7->SetBinError(10,2.360595);
   hNCpi0inFVres_stack_7->SetBinError(11,2.146227);
   hNCpi0inFVres_stack_7->SetBinError(12,2.145194);
   hNCpi0inFVres_stack_7->SetBinError(13,2.037509);
   hNCpi0inFVres_stack_7->SetBinError(14,2.253816);
   hNCpi0inFVres_stack_7->SetBinError(15,2.281812);
   hNCpi0inFVres_stack_7->SetBinError(16,2.333937);
   hNCpi0inFVres_stack_7->SetBinError(17,2.292411);
   hNCpi0inFVres_stack_7->SetBinError(18,2.144085);
   hNCpi0inFVres_stack_7->SetBinError(19,2.166137);
   hNCpi0inFVres_stack_7->SetBinError(20,2.105762);
   hNCpi0inFVres_stack_7->SetBinError(21,2.241825);
   hNCpi0inFVres_stack_7->SetBinError(22,2.311598);
   hNCpi0inFVres_stack_7->SetBinError(23,2.560415);
   hNCpi0inFVres_stack_7->SetBinError(24,2.46548);
   hNCpi0inFVres_stack_7->SetBinError(25,2.180388);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.44763);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.663572);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.611562);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.057383);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.065452);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.700587);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.411839);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.41972);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.328691);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.560606);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.548635);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.844432);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.64725);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.657527);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.683448);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.677591);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.673713);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.665464);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.999639);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.310653);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.899742);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.202555);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.24402);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.059447);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.381004);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9709088);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.177078);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.910117);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9221309);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8778163);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8612478);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9612747);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9229686);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.070407);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9572934);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.166942);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7955505);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9626249);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.04223);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9854603);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.061999);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9709763);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8968573);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.095683);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9393295);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.021213);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.011991);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9163616);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.004696);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.267284);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.08171);
   hCCpi0inFV_stack_10->SetBinContent(2,17.94678);
   hCCpi0inFV_stack_10->SetBinContent(3,15.98179);
   hCCpi0inFV_stack_10->SetBinContent(4,16.12971);
   hCCpi0inFV_stack_10->SetBinContent(5,18.47738);
   hCCpi0inFV_stack_10->SetBinContent(6,13.47774);
   hCCpi0inFV_stack_10->SetBinContent(7,16.26702);
   hCCpi0inFV_stack_10->SetBinContent(8,13.70259);
   hCCpi0inFV_stack_10->SetBinContent(9,15.28218);
   hCCpi0inFV_stack_10->SetBinContent(10,12.88313);
   hCCpi0inFV_stack_10->SetBinContent(11,14.50266);
   hCCpi0inFV_stack_10->SetBinContent(12,14.15252);
   hCCpi0inFV_stack_10->SetBinContent(13,18.81465);
   hCCpi0inFV_stack_10->SetBinContent(14,14.4647);
   hCCpi0inFV_stack_10->SetBinContent(15,16.47158);
   hCCpi0inFV_stack_10->SetBinContent(16,12.87844);
   hCCpi0inFV_stack_10->SetBinContent(17,12.86247);
   hCCpi0inFV_stack_10->SetBinContent(18,15.43029);
   hCCpi0inFV_stack_10->SetBinContent(19,12.09022);
   hCCpi0inFV_stack_10->SetBinContent(20,17.48102);
   hCCpi0inFV_stack_10->SetBinContent(21,18.85851);
   hCCpi0inFV_stack_10->SetBinContent(22,19.95809);
   hCCpi0inFV_stack_10->SetBinContent(23,14.71298);
   hCCpi0inFV_stack_10->SetBinContent(24,20.13814);
   hCCpi0inFV_stack_10->SetBinContent(25,13.09047);
   hCCpi0inFV_stack_10->SetBinError(1,1.987406);
   hCCpi0inFV_stack_10->SetBinError(2,2.068633);
   hCCpi0inFV_stack_10->SetBinError(3,1.991877);
   hCCpi0inFV_stack_10->SetBinError(4,1.961621);
   hCCpi0inFV_stack_10->SetBinError(5,2.122652);
   hCCpi0inFV_stack_10->SetBinError(6,1.850996);
   hCCpi0inFV_stack_10->SetBinError(7,2.030015);
   hCCpi0inFV_stack_10->SetBinError(8,1.810391);
   hCCpi0inFV_stack_10->SetBinError(9,1.946741);
   hCCpi0inFV_stack_10->SetBinError(10,1.872628);
   hCCpi0inFV_stack_10->SetBinError(11,1.907189);
   hCCpi0inFV_stack_10->SetBinError(12,1.854982);
   hCCpi0inFV_stack_10->SetBinError(13,2.163762);
   hCCpi0inFV_stack_10->SetBinError(14,1.902892);
   hCCpi0inFV_stack_10->SetBinError(15,1.991065);
   hCCpi0inFV_stack_10->SetBinError(16,1.796863);
   hCCpi0inFV_stack_10->SetBinError(17,1.777935);
   hCCpi0inFV_stack_10->SetBinError(18,2.001455);
   hCCpi0inFV_stack_10->SetBinError(19,1.677379);
   hCCpi0inFV_stack_10->SetBinError(20,2.123495);
   hCCpi0inFV_stack_10->SetBinError(21,2.230471);
   hCCpi0inFV_stack_10->SetBinError(22,2.281654);
   hCCpi0inFV_stack_10->SetBinError(23,1.902815);
   hCCpi0inFV_stack_10->SetBinError(24,2.282803);
   hCCpi0inFV_stack_10->SetBinError(25,1.775617);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.787418);
   hNCinFV_stack_11->SetBinContent(2,8.124495);
   hNCinFV_stack_11->SetBinContent(3,10.65433);
   hNCinFV_stack_11->SetBinContent(4,7.867019);
   hNCinFV_stack_11->SetBinContent(5,8.705389);
   hNCinFV_stack_11->SetBinContent(6,7.715622);
   hNCinFV_stack_11->SetBinContent(7,7.023312);
   hNCinFV_stack_11->SetBinContent(8,6.707694);
   hNCinFV_stack_11->SetBinContent(9,9.495444);
   hNCinFV_stack_11->SetBinContent(10,7.634131);
   hNCinFV_stack_11->SetBinContent(11,5.476458);
   hNCinFV_stack_11->SetBinContent(12,8.535114);
   hNCinFV_stack_11->SetBinContent(13,10.32589);
   hNCinFV_stack_11->SetBinContent(14,6.949423);
   hNCinFV_stack_11->SetBinContent(15,9.117579);
   hNCinFV_stack_11->SetBinContent(16,8.710795);
   hNCinFV_stack_11->SetBinContent(17,8.504068);
   hNCinFV_stack_11->SetBinContent(18,5.608998);
   hNCinFV_stack_11->SetBinContent(19,6.783868);
   hNCinFV_stack_11->SetBinContent(20,8.232834);
   hNCinFV_stack_11->SetBinContent(21,5.713379);
   hNCinFV_stack_11->SetBinContent(22,7.079934);
   hNCinFV_stack_11->SetBinContent(23,9.498133);
   hNCinFV_stack_11->SetBinContent(24,7.179763);
   hNCinFV_stack_11->SetBinContent(25,7.965742);
   hNCinFV_stack_11->SetBinError(1,1.365037);
   hNCinFV_stack_11->SetBinError(2,1.487979);
   hNCinFV_stack_11->SetBinError(3,1.923615);
   hNCinFV_stack_11->SetBinError(4,1.41228);
   hNCinFV_stack_11->SetBinError(5,1.579311);
   hNCinFV_stack_11->SetBinError(6,1.378679);
   hNCinFV_stack_11->SetBinError(7,1.350989);
   hNCinFV_stack_11->SetBinError(8,1.249293);
   hNCinFV_stack_11->SetBinError(9,1.79086);
   hNCinFV_stack_11->SetBinError(10,1.474571);
   hNCinFV_stack_11->SetBinError(11,1.16777);
   hNCinFV_stack_11->SetBinError(12,1.480697);
   hNCinFV_stack_11->SetBinError(13,1.644317);
   hNCinFV_stack_11->SetBinError(14,1.453289);
   hNCinFV_stack_11->SetBinError(15,1.50629);
   hNCinFV_stack_11->SetBinError(16,1.57722);
   hNCinFV_stack_11->SetBinError(17,1.761543);
   hNCinFV_stack_11->SetBinError(18,1.236128);
   hNCinFV_stack_11->SetBinError(19,1.287917);
   hNCinFV_stack_11->SetBinError(20,1.553563);
   hNCinFV_stack_11->SetBinError(21,1.321731);
   hNCinFV_stack_11->SetBinError(22,1.486542);
   hNCinFV_stack_11->SetBinError(23,1.710781);
   hNCinFV_stack_11->SetBinError(24,1.427743);
   hNCinFV_stack_11->SetBinError(25,1.367858);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.241378);
   hnumuCCinFV_stack_12->SetBinContent(2,8.830076);
   hnumuCCinFV_stack_12->SetBinContent(3,9.622181);
   hnumuCCinFV_stack_12->SetBinContent(4,3.452523);
   hnumuCCinFV_stack_12->SetBinContent(5,4.568767);
   hnumuCCinFV_stack_12->SetBinContent(6,5.79715);
   hnumuCCinFV_stack_12->SetBinContent(7,4.823558);
   hnumuCCinFV_stack_12->SetBinContent(8,6.480136);
   hnumuCCinFV_stack_12->SetBinContent(9,7.554634);
   hnumuCCinFV_stack_12->SetBinContent(10,4.010177);
   hnumuCCinFV_stack_12->SetBinContent(11,6.376378);
   hnumuCCinFV_stack_12->SetBinContent(12,6.718233);
   hnumuCCinFV_stack_12->SetBinContent(13,10.20463);
   hnumuCCinFV_stack_12->SetBinContent(14,5.992147);
   hnumuCCinFV_stack_12->SetBinContent(15,9.507979);
   hnumuCCinFV_stack_12->SetBinContent(16,6.403348);
   hnumuCCinFV_stack_12->SetBinContent(17,4.963215);
   hnumuCCinFV_stack_12->SetBinContent(18,3.534641);
   hnumuCCinFV_stack_12->SetBinContent(19,4.339493);
   hnumuCCinFV_stack_12->SetBinContent(20,6.095101);
   hnumuCCinFV_stack_12->SetBinContent(21,4.750287);
   hnumuCCinFV_stack_12->SetBinContent(22,6.281681);
   hnumuCCinFV_stack_12->SetBinContent(23,7.407818);
   hnumuCCinFV_stack_12->SetBinContent(24,12.38748);
   hnumuCCinFV_stack_12->SetBinContent(25,11.67418);
   hnumuCCinFV_stack_12->SetBinError(1,1.707653);
   hnumuCCinFV_stack_12->SetBinError(2,1.749959);
   hnumuCCinFV_stack_12->SetBinError(3,1.623959);
   hnumuCCinFV_stack_12->SetBinError(4,0.9180351);
   hnumuCCinFV_stack_12->SetBinError(5,1.114032);
   hnumuCCinFV_stack_12->SetBinError(6,1.464323);
   hnumuCCinFV_stack_12->SetBinError(7,1.113327);
   hnumuCCinFV_stack_12->SetBinError(8,1.2619);
   hnumuCCinFV_stack_12->SetBinError(9,1.690642);
   hnumuCCinFV_stack_12->SetBinError(10,0.9721234);
   hnumuCCinFV_stack_12->SetBinError(11,1.343539);
   hnumuCCinFV_stack_12->SetBinError(12,1.429323);
   hnumuCCinFV_stack_12->SetBinError(13,2.162506);
   hnumuCCinFV_stack_12->SetBinError(14,1.272489);
   hnumuCCinFV_stack_12->SetBinError(15,2.069532);
   hnumuCCinFV_stack_12->SetBinError(16,1.250239);
   hnumuCCinFV_stack_12->SetBinError(17,1.090121);
   hnumuCCinFV_stack_12->SetBinError(18,0.9802046);
   hnumuCCinFV_stack_12->SetBinError(19,1.106204);
   hnumuCCinFV_stack_12->SetBinError(20,1.568422);
   hnumuCCinFV_stack_12->SetBinError(21,1.096997);
   hnumuCCinFV_stack_12->SetBinError(22,1.714511);
   hnumuCCinFV_stack_12->SetBinError(23,1.381042);
   hnumuCCinFV_stack_12->SetBinError(24,2.230602);
   hnumuCCinFV_stack_12->SetBinError(25,1.787534);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.21975);
   hnueCCinFV_stack_13->SetBinContent(2,3.387337);
   hnueCCinFV_stack_13->SetBinContent(3,1.471562);
   hnueCCinFV_stack_13->SetBinContent(4,0.7280008);
   hnueCCinFV_stack_13->SetBinContent(5,0.636196);
   hnueCCinFV_stack_13->SetBinContent(6,0.6129823);
   hnueCCinFV_stack_13->SetBinContent(7,1.235395);
   hnueCCinFV_stack_13->SetBinContent(8,0.4256802);
   hnueCCinFV_stack_13->SetBinContent(9,1.198414);
   hnueCCinFV_stack_13->SetBinContent(10,1.365484);
   hnueCCinFV_stack_13->SetBinContent(11,0.6211463);
   hnueCCinFV_stack_13->SetBinContent(12,1.6628);
   hnueCCinFV_stack_13->SetBinContent(13,0.3957363);
   hnueCCinFV_stack_13->SetBinContent(14,1.485757);
   hnueCCinFV_stack_13->SetBinContent(15,1.422827);
   hnueCCinFV_stack_13->SetBinContent(16,0.4253732);
   hnueCCinFV_stack_13->SetBinContent(17,0.749079);
   hnueCCinFV_stack_13->SetBinContent(18,1.368507);
   hnueCCinFV_stack_13->SetBinContent(19,1.899426);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,2.36175);
   hnueCCinFV_stack_13->SetBinContent(22,0.850087);
   hnueCCinFV_stack_13->SetBinContent(23,0.6984651);
   hnueCCinFV_stack_13->SetBinContent(24,1.147058);
   hnueCCinFV_stack_13->SetBinContent(25,0.3917402);
   hnueCCinFV_stack_13->SetBinError(1,0.5542831);
   hnueCCinFV_stack_13->SetBinError(2,1.699132);
   hnueCCinFV_stack_13->SetBinError(3,0.628742);
   hnueCCinFV_stack_13->SetBinError(4,0.4241217);
   hnueCCinFV_stack_13->SetBinError(5,0.4678902);
   hnueCCinFV_stack_13->SetBinError(6,0.4402819);
   hnueCCinFV_stack_13->SetBinError(7,0.6670118);
   hnueCCinFV_stack_13->SetBinError(8,0.3018639);
   hnueCCinFV_stack_13->SetBinError(9,0.6074136);
   hnueCCinFV_stack_13->SetBinError(10,0.9881735);
   hnueCCinFV_stack_13->SetBinError(11,0.4678018);
   hnueCCinFV_stack_13->SetBinError(12,0.5913427);
   hnueCCinFV_stack_13->SetBinError(13,0.2770336);
   hnueCCinFV_stack_13->SetBinError(14,0.8052145);
   hnueCCinFV_stack_13->SetBinError(15,0.6789903);
   hnueCCinFV_stack_13->SetBinError(16,0.3018196);
   hnueCCinFV_stack_13->SetBinError(17,0.4340577);
   hnueCCinFV_stack_13->SetBinError(18,0.6286613);
   hnueCCinFV_stack_13->SetBinError(19,1.354909);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,1.245659);
   hnueCCinFV_stack_13->SetBinError(22,0.5536153);
   hnueCCinFV_stack_13->SetBinError(23,0.4940554);
   hnueCCinFV_stack_13->SetBinError(24,0.6969692);
   hnueCCinFV_stack_13->SetBinError(25,0.2770047);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__17->SetBinContent(1,110.0807);
   hmcerror__17->SetBinContent(2,119.3215);
   hmcerror__17->SetBinContent(3,126.0001);
   hmcerror__17->SetBinContent(4,108.6395);
   hmcerror__17->SetBinContent(5,109.5541);
   hmcerror__17->SetBinContent(6,109.3706);
   hmcerror__17->SetBinContent(7,108.1731);
   hmcerror__17->SetBinContent(8,98.82031);
   hmcerror__17->SetBinContent(9,111.112);
   hmcerror__17->SetBinContent(10,104.3737);
   hmcerror__17->SetBinContent(11,109.2319);
   hmcerror__17->SetBinContent(12,105.8492);
   hmcerror__17->SetBinContent(13,108.6448);
   hmcerror__17->SetBinContent(14,103.5031);
   hmcerror__17->SetBinContent(15,113.9043);
   hmcerror__17->SetBinContent(16,112.7004);
   hmcerror__17->SetBinContent(17,113.3025);
   hmcerror__17->SetBinContent(18,107.2313);
   hmcerror__17->SetBinContent(19,112.1731);
   hmcerror__17->SetBinContent(20,117.1551);
   hmcerror__17->SetBinContent(21,119.6747);
   hmcerror__17->SetBinContent(22,114.0389);
   hmcerror__17->SetBinContent(23,122.6634);
   hmcerror__17->SetBinContent(24,124.8104);
   hmcerror__17->SetBinContent(25,105.5678);
   hmcerror__17->SetBinError(1,30.35284);
   hmcerror__17->SetBinError(2,34.0843);
   hmcerror__17->SetBinError(3,35.89265);
   hmcerror__17->SetBinError(4,29.3628);
   hmcerror__17->SetBinError(5,31.01653);
   hmcerror__17->SetBinError(6,31.92143);
   hmcerror__17->SetBinError(7,32.27861);
   hmcerror__17->SetBinError(8,28.92376);
   hmcerror__17->SetBinError(9,32.82957);
   hmcerror__17->SetBinError(10,32.44895);
   hmcerror__17->SetBinError(11,38.95189);
   hmcerror__17->SetBinError(12,33.46745);
   hmcerror__17->SetBinError(13,32.64042);
   hmcerror__17->SetBinError(14,31.56783);
   hmcerror__17->SetBinError(15,31.84774);
   hmcerror__17->SetBinError(16,32.96476);
   hmcerror__17->SetBinError(17,31.83475);
   hmcerror__17->SetBinError(18,28.35029);
   hmcerror__17->SetBinError(19,29.37987);
   hmcerror__17->SetBinError(20,31.7072);
   hmcerror__17->SetBinError(21,33.26658);
   hmcerror__17->SetBinError(22,33.32023);
   hmcerror__17->SetBinError(23,38.96367);
   hmcerror__17->SetBinError(24,33.03705);
   hmcerror__17->SetBinError(25,33.47483);
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
   106,
   146,
   121,
   141,
   129,
   128,
   107,
   110,
   92,
   120,
   112,
   100,
   97,
   110,
   113,
   131,
   109,
   118,
   111,
   117,
   126,
   128,
   121,
   129,
   116};
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
   10.29563,
   12.08305,
   11,
   11.87434,
   11.35782,
   11.31371,
   10.34408,
   10.48809,
   9.7138,
   10.95445,
   10.58301,
   10.1212,
   9.9704,
   10.48809,
   10.63015,
   11.44552,
   10.44031,
   10.86278,
   10.53565,
   10.81665,
   11.22497,
   11.31371,
   11,
   11.35782,
   10.77033};
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
   10.29563,
   12.08305,
   11,
   11.87434,
   11.35782,
   11.31371,
   10.34408,
   10.48809,
   9.513,
   10.95445,
   10.58301,
   9.92,
   9.769,
   10.48809,
   10.63015,
   11.44552,
   10.44031,
   10.86278,
   10.53565,
   10.81665,
   11.22497,
   11.31371,
   11,
   11.35782,
   10.77033};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(74.70652);
   Graph_Graph3021->SetMaximum(165.6627);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_phi_all");
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
   0.2757326,
   0.2856508,
   0.2848621,
   0.2702775,
   0.283116,
   0.2918649,
   0.2983977,
   0.2926904,
   0.2954639,
   0.3108919,
   0.356598,
   0.3161805,
   0.3004323,
   0.304994,
   0.2796009,
   0.292499,
   0.2809714,
   0.2643844,
   0.2619155,
   0.2706429,
   0.277975,
   0.2921831,
   0.3176471,
   0.2646979,
   0.3170932};
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
   0.2757326,
   0.2856508,
   0.2848621,
   0.2702775,
   0.283116,
   0.2918649,
   0.2983977,
   0.2926904,
   0.2954639,
   0.3108919,
   0.356598,
   0.3161805,
   0.3004323,
   0.304994,
   0.2796009,
   0.292499,
   0.2809714,
   0.2643844,
   0.2619155,
   0.2706429,
   0.277975,
   0.2921831,
   0.3176471,
   0.2646979,
   0.3170932};
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
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   0.2243372,
   0.2218303,
   0.2253706,
   0.2190762,
   0.2209345,
   0.2001627,
   0.2104011,
   0.2261516,
   0.2222486,
   0.2206227,
   0.2155593,
   0.2336343,
   0.2165591,
   0.2195572,
   0.2189799,
   0.2100129,
   0.2086926,
   0.2121831,
   0.2044247,
   0.2064395,
   0.1983551,
   0.225935,
   0.207494,
   0.2110723,
   0.2216425};
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
   0.2243372,
   0.2218303,
   0.2253706,
   0.2190762,
   0.2209345,
   0.2001627,
   0.2104011,
   0.2261516,
   0.2222486,
   0.2206227,
   0.2155593,
   0.2336343,
   0.2165591,
   0.2195572,
   0.2189799,
   0.2100129,
   0.2086926,
   0.2121831,
   0.2044247,
   0.2064395,
   0.1983551,
   0.225935,
   0.207494,
   0.2110723,
   0.2216425};
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
   0.9629297,
   1.223585,
   0.9603166,
   1.297871,
   1.1775,
   1.170333,
   0.9891551,
   1.113131,
   0.8279937,
   1.149715,
   1.025341,
   0.9447403,
   0.8928173,
   1.06277,
   0.9920608,
   1.162373,
   0.9620268,
   1.100424,
   0.9895422,
   0.9986759,
   1.052854,
   1.122424,
   0.9864393,
   1.033568,
   1.09882};
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
   0.093528,
   0.1012646,
   0.08730151,
   0.1093004,
   0.1036731,
   0.1034438,
   0.09562523,
   0.1061329,
   0.08742354,
   0.1049541,
   0.09688564,
   0.09561906,
   0.09177058,
   0.1013312,
   0.09332523,
   0.101557,
   0.09214545,
   0.1013023,
   0.09392319,
   0.09232762,
   0.09379568,
   0.09920924,
   0.0896763,
   0.09100056,
   0.1020229};
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
   0.093528,
   0.1012646,
   0.08730151,
   0.1093004,
   0.1036731,
   0.1034438,
   0.09562523,
   0.1061329,
   0.08561635,
   0.1049541,
   0.09688564,
   0.09371824,
   0.08991683,
   0.1013312,
   0.09332523,
   0.101557,
   0.09214545,
   0.1013023,
   0.09392319,
   0.09232762,
   0.09379568,
   0.09920924,
   0.0896763,
   0.09100056,
   0.1020229};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6739101);
   Graph_Graph3024->SetMaximum(1.473831);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);

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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 09:59:22 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-170,-1.8,163.3333,199.0421);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__22->SetBinContent(0,0.7559202);
   hmc__22->SetBinContent(1,0.650777);
   hmc__22->SetBinContent(2,13.71923);
   hmc__22->SetBinContent(3,39.75648);
   hmc__22->SetBinContent(4,56.78469);
   hmc__22->SetBinContent(5,45.69435);
   hmc__22->SetBinContent(6,35.30365);
   hmc__22->SetBinContent(7,25.08682);
   hmc__22->SetBinContent(8,28.30276);
   hmc__22->SetBinContent(9,23.74147);
   hmc__22->SetBinContent(10,21.87817);
   hmc__22->SetBinContent(11,22.83089);
   hmc__22->SetBinContent(12,26.49502);
   hmc__22->SetBinContent(13,24.42723);
   hmc__22->SetBinContent(14,23.4709);
   hmc__22->SetBinContent(15,26.91649);
   hmc__22->SetBinContent(16,26.65858);
   hmc__22->SetBinContent(17,32.7858);
   hmc__22->SetBinContent(18,31.81668);
   hmc__22->SetBinContent(19,38.00767);
   hmc__22->SetBinContent(20,46.22307);
   hmc__22->SetBinContent(21,47.46862);
   hmc__22->SetBinContent(22,78.18374);
   hmc__22->SetBinContent(23,88.76921);
   hmc__22->SetBinContent(24,86.18939);
   hmc__22->SetBinContent(25,39.76133);
   hmc__22->SetBinContent(26,1.140563);
   hmc__22->SetBinContent(27,0.7447861);
   hmc__22->SetBinError(0,0.4620134);
   hmc__22->SetBinError(1,1.535551);
   hmc__22->SetBinError(2,12.32904);
   hmc__22->SetBinError(3,15.9122);
   hmc__22->SetBinError(4,22.769);
   hmc__22->SetBinError(5,19.20504);
   hmc__22->SetBinError(6,16.20342);
   hmc__22->SetBinError(7,12.87755);
   hmc__22->SetBinError(8,12.61922);
   hmc__22->SetBinError(9,11.32991);
   hmc__22->SetBinError(10,11.03816);
   hmc__22->SetBinError(11,12.13236);
   hmc__22->SetBinError(12,12.40883);
   hmc__22->SetBinError(13,12.73519);
   hmc__22->SetBinError(14,10.159);
   hmc__22->SetBinError(15,20.65094);
   hmc__22->SetBinError(16,12.40426);
   hmc__22->SetBinError(17,10.57594);
   hmc__22->SetBinError(18,11.55191);
   hmc__22->SetBinError(19,14.54699);
   hmc__22->SetBinError(20,13.74984);
   hmc__22->SetBinError(21,18.70707);
   hmc__22->SetBinError(22,22.03351);
   hmc__22->SetBinError(23,19.61938);
   hmc__22->SetBinError(24,20.74174);
   hmc__22->SetBinError(25,26.02679);
   hmc__22->SetBinError(26,3.721086);
   hmc__22->SetBinError(27,0.7095202);
   hmc__22->SetMinimum(-1.8);
   hmc__22->SetMaximum(189);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,-130,130);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(93.20766);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,2.949391);
   hbadmatch_stack_1->SetBinContent(5,0.9354918);
   hbadmatch_stack_1->SetBinContent(6,1.135755);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,1.267963);
   hbadmatch_stack_1->SetBinContent(9,0.8011189);
   hbadmatch_stack_1->SetBinContent(10,0.5587807);
   hbadmatch_stack_1->SetBinContent(11,1.131181);
   hbadmatch_stack_1->SetBinContent(12,1.207444);
   hbadmatch_stack_1->SetBinContent(13,1.442776);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,1.031707);
   hbadmatch_stack_1->SetBinContent(16,0.4049101);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,3.230165);
   hbadmatch_stack_1->SetBinContent(19,2.93699);
   hbadmatch_stack_1->SetBinContent(20,2.762324);
   hbadmatch_stack_1->SetBinContent(21,1.304216);
   hbadmatch_stack_1->SetBinContent(22,2.3265);
   hbadmatch_stack_1->SetBinContent(23,2.621576);
   hbadmatch_stack_1->SetBinContent(24,2.737161);
   hbadmatch_stack_1->SetBinContent(25,0.8770706);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.9072887);
   hbadmatch_stack_1->SetBinError(5,0.5572901);
   hbadmatch_stack_1->SetBinError(6,0.5268401);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,1.089159);
   hbadmatch_stack_1->SetBinError(9,0.5429128);
   hbadmatch_stack_1->SetBinError(10,0.4043614);
   hbadmatch_stack_1->SetBinError(11,0.5128383);
   hbadmatch_stack_1->SetBinError(12,0.7079773);
   hbadmatch_stack_1->SetBinError(13,0.6970332);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.5584804);
   hbadmatch_stack_1->SetBinError(16,0.2465033);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,1.048415);
   hbadmatch_stack_1->SetBinError(19,1.01448);
   hbadmatch_stack_1->SetBinError(20,0.9693111);
   hbadmatch_stack_1->SetBinError(21,0.6033184);
   hbadmatch_stack_1->SetBinError(22,0.8599132);
   hbadmatch_stack_1->SetBinError(23,0.8091324);
   hbadmatch_stack_1->SetBinError(24,0.8916838);
   hbadmatch_stack_1->SetBinError(25,0.5197486);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,1.137595);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,2.103607);
   hext_stack_2->SetBinContent(8,3.234021);
   hext_stack_2->SetBinContent(9,2.014225);
   hext_stack_2->SetBinContent(10,1.697008);
   hext_stack_2->SetBinContent(11,1.544194);
   hext_stack_2->SetBinContent(12,4.270645);
   hext_stack_2->SetBinContent(13,2.27519);
   hext_stack_2->SetBinContent(14,2.752401);
   hext_stack_2->SetBinContent(15,4.468179);
   hext_stack_2->SetBinContent(16,3.972198);
   hext_stack_2->SetBinContent(17,12.92009);
   hext_stack_2->SetBinContent(18,7.415284);
   hext_stack_2->SetBinContent(19,10.11861);
   hext_stack_2->SetBinContent(20,15.29184);
   hext_stack_2->SetBinContent(21,13.31075);
   hext_stack_2->SetBinContent(22,29.93048);
   hext_stack_2->SetBinContent(23,32.01254);
   hext_stack_2->SetBinContent(24,28.60699);
   hext_stack_2->SetBinContent(25,16.14693);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,0.6602113);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.9761052);
   hext_stack_2->SetBinError(8,1.260897);
   hext_stack_2->SetBinError(9,1.045894);
   hext_stack_2->SetBinError(10,0.8873887);
   hext_stack_2->SetBinError(11,0.7753719);
   hext_stack_2->SetBinError(12,1.4943);
   hext_stack_2->SetBinError(13,0.9336798);
   hext_stack_2->SetBinError(14,1.07854);
   hext_stack_2->SetBinError(15,1.297469);
   hext_stack_2->SetBinError(16,1.288106);
   hext_stack_2->SetBinError(17,2.508068);
   hext_stack_2->SetBinError(18,1.990956);
   hext_stack_2->SetBinError(19,2.096994);
   hext_stack_2->SetBinError(20,2.611484);
   hext_stack_2->SetBinError(21,2.248615);
   hext_stack_2->SetBinError(22,3.646108);
   hext_stack_2->SetBinError(23,3.853633);
   hext_stack_2->SetBinError(24,3.465724);
   hext_stack_2->SetBinError(25,2.842792);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(3,1.334496);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.6273471);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,1.285084);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.327738);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.5758626);
   hdirt_stack_3->SetBinContent(14,0.4737118);
   hdirt_stack_3->SetBinContent(16,0.9673651);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.9140499);
   hdirt_stack_3->SetBinContent(21,0.8364257);
   hdirt_stack_3->SetBinContent(22,2.595653);
   hdirt_stack_3->SetBinContent(23,2.847161);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,1.713512);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(3,0.6307253);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3928349);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.9635251);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2290571);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.3389606);
   hdirt_stack_3->SetBinError(14,0.3359264);
   hdirt_stack_3->SetBinError(16,0.4867938);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4788161);
   hdirt_stack_3->SetBinError(21,0.4275364);
   hdirt_stack_3->SetBinError(22,0.9204087);
   hdirt_stack_3->SetBinError(23,0.9056961);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.7399328);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.4157426);
   houtFV_stack_4->SetBinContent(1,0.4805651);
   houtFV_stack_4->SetBinContent(2,9.725164);
   houtFV_stack_4->SetBinContent(3,17.33071);
   houtFV_stack_4->SetBinContent(4,13.46669);
   houtFV_stack_4->SetBinContent(5,11.11972);
   houtFV_stack_4->SetBinContent(6,8.282043);
   houtFV_stack_4->SetBinContent(7,4.391472);
   houtFV_stack_4->SetBinContent(8,5.502603);
   houtFV_stack_4->SetBinContent(9,5.335356);
   houtFV_stack_4->SetBinContent(10,5.950507);
   houtFV_stack_4->SetBinContent(11,4.756156);
   houtFV_stack_4->SetBinContent(12,3.602675);
   houtFV_stack_4->SetBinContent(13,5.822221);
   houtFV_stack_4->SetBinContent(14,4.350835);
   houtFV_stack_4->SetBinContent(15,3.515075);
   houtFV_stack_4->SetBinContent(16,3.876855);
   houtFV_stack_4->SetBinContent(17,3.571678);
   houtFV_stack_4->SetBinContent(18,4.622052);
   houtFV_stack_4->SetBinContent(19,5.641503);
   houtFV_stack_4->SetBinContent(20,4.330544);
   houtFV_stack_4->SetBinContent(21,8.236299);
   houtFV_stack_4->SetBinContent(22,9.709023);
   houtFV_stack_4->SetBinContent(23,13.30221);
   houtFV_stack_4->SetBinContent(24,19.73735);
   houtFV_stack_4->SetBinContent(25,14.74395);
   houtFV_stack_4->SetBinContent(26,0.621141);
   houtFV_stack_4->SetBinError(0,0.3126269);
   houtFV_stack_4->SetBinError(1,0.3457859);
   houtFV_stack_4->SetBinError(2,1.464835);
   houtFV_stack_4->SetBinError(3,2.123657);
   houtFV_stack_4->SetBinError(4,1.860327);
   houtFV_stack_4->SetBinError(5,1.701643);
   houtFV_stack_4->SetBinError(6,1.42582);
   houtFV_stack_4->SetBinError(7,1.019023);
   houtFV_stack_4->SetBinError(8,1.117136);
   houtFV_stack_4->SetBinError(9,1.213831);
   houtFV_stack_4->SetBinError(10,1.252501);
   houtFV_stack_4->SetBinError(11,1.574713);
   houtFV_stack_4->SetBinError(12,0.9134723);
   houtFV_stack_4->SetBinError(13,1.20349);
   houtFV_stack_4->SetBinError(14,1.003683);
   houtFV_stack_4->SetBinError(15,0.9633996);
   houtFV_stack_4->SetBinError(16,0.9782487);
   houtFV_stack_4->SetBinError(17,0.9187167);
   houtFV_stack_4->SetBinError(18,1.004462);
   houtFV_stack_4->SetBinError(19,1.189763);
   houtFV_stack_4->SetBinError(20,0.9782015);
   houtFV_stack_4->SetBinError(21,1.683309);
   houtFV_stack_4->SetBinError(22,1.594765);
   houtFV_stack_4->SetBinError(23,1.840466);
   houtFV_stack_4->SetBinError(24,2.323315);
   houtFV_stack_4->SetBinError(25,1.942853);
   houtFV_stack_4->SetBinError(26,0.3596615);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2387726);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7554681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.240452);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8627108);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3739952);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2533993);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2531333);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2761992);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4216838);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3918163);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.341192);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1901981);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.771487);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3651866);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4324368);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5820339);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2692535);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3226637);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5346038);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3964792);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.000405);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.585243);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.646089);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1554321);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2056575);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3196399);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.498732);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4079961);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1559538);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1451957);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.09618172);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1475746);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2147874);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.28885);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1402007);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.08580616);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3614709);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2988144);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2570833);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.258532);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1460993);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1349309);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.299685);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1811277);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3933456);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.404955);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5398206);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1299965);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05703097);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.09944227);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4394689);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.0555087);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2132539);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03510576);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07734618);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2946717);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04149811);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1390101);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.007068991);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.8621092);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.927516);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.942467);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.344445);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.904827);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.098342);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.670052);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.417927);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.818328);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.017754);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.706195);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.735765);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.271959);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.023569);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.366269);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.822767);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.787226);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.741418);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.536046);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.090212);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.672188);
   hNCpi0inFVres_stack_7->SetBinContent(23,11.2955);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.32107);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.320992);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2297601);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9018419);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9493965);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9517861);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8226869);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4713752);
   hNCpi0inFVres_stack_7->SetBinError(8,0.610829);
   hNCpi0inFVres_stack_7->SetBinError(9,0.657014);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5142462);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6557818);
   hNCpi0inFVres_stack_7->SetBinError(12,0.480094);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4966563);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3915478);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5601167);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6303239);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7993728);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6417253);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7104871);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7321417);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8017891);
   hNCpi0inFVres_stack_7->SetBinError(22,0.953175);
   hNCpi0inFVres_stack_7->SetBinError(23,1.146405);
   hNCpi0inFVres_stack_7->SetBinError(24,1.201152);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3325862);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2323673);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.110507);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.677003);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.689121);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.608398);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9983824);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.415313);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3882222);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2608268);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.198184);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.223158);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.737982);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8125571);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.926095);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8338581);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9923158);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9888349);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.74695);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.65856);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.493468);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.655801);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.513499);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.194949);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7112497);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2021531);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2774551);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6851304);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3800931);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5074176);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2399546);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4907488);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1478611);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.09836889);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3879971);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6019354);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3326399);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2227163);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2980816);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.266806);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3985467);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3591312);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6276108);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5653661);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3421267);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3909423);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7991874);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6958977);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2781381);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(3,5.862105);
   hCCpi0inFV_stack_10->SetBinContent(4,14.64492);
   hCCpi0inFV_stack_10->SetBinContent(5,13.95973);
   hCCpi0inFV_stack_10->SetBinContent(6,9.73043);
   hCCpi0inFV_stack_10->SetBinContent(7,6.469533);
   hCCpi0inFV_stack_10->SetBinContent(8,7.182478);
   hCCpi0inFV_stack_10->SetBinContent(9,8.149498);
   hCCpi0inFV_stack_10->SetBinContent(10,6.102619);
   hCCpi0inFV_stack_10->SetBinContent(11,4.259065);
   hCCpi0inFV_stack_10->SetBinContent(12,7.498725);
   hCCpi0inFV_stack_10->SetBinContent(13,7.015951);
   hCCpi0inFV_stack_10->SetBinContent(14,5.257487);
   hCCpi0inFV_stack_10->SetBinContent(15,7.781454);
   hCCpi0inFV_stack_10->SetBinContent(16,7.570837);
   hCCpi0inFV_stack_10->SetBinContent(17,5.509011);
   hCCpi0inFV_stack_10->SetBinContent(18,7.354913);
   hCCpi0inFV_stack_10->SetBinContent(19,7.877105);
   hCCpi0inFV_stack_10->SetBinContent(20,9.129953);
   hCCpi0inFV_stack_10->SetBinContent(21,8.862707);
   hCCpi0inFV_stack_10->SetBinContent(22,11.69172);
   hCCpi0inFV_stack_10->SetBinContent(23,11.63339);
   hCCpi0inFV_stack_10->SetBinContent(24,8.878294);
   hCCpi0inFV_stack_10->SetBinContent(25,2.368694);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_10->SetBinError(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(3,1.241881);
   hCCpi0inFV_stack_10->SetBinError(4,1.947518);
   hCCpi0inFV_stack_10->SetBinError(5,1.866683);
   hCCpi0inFV_stack_10->SetBinError(6,1.556772);
   hCCpi0inFV_stack_10->SetBinError(7,1.260672);
   hCCpi0inFV_stack_10->SetBinError(8,1.360202);
   hCCpi0inFV_stack_10->SetBinError(9,1.448551);
   hCCpi0inFV_stack_10->SetBinError(10,1.264898);
   hCCpi0inFV_stack_10->SetBinError(11,1.108211);
   hCCpi0inFV_stack_10->SetBinError(12,1.378666);
   hCCpi0inFV_stack_10->SetBinError(13,1.350571);
   hCCpi0inFV_stack_10->SetBinError(14,1.132305);
   hCCpi0inFV_stack_10->SetBinError(15,1.433766);
   hCCpi0inFV_stack_10->SetBinError(16,1.387644);
   hCCpi0inFV_stack_10->SetBinError(17,1.272744);
   hCCpi0inFV_stack_10->SetBinError(18,1.319454);
   hCCpi0inFV_stack_10->SetBinError(19,1.473478);
   hCCpi0inFV_stack_10->SetBinError(20,1.55814);
   hCCpi0inFV_stack_10->SetBinError(21,1.443285);
   hCCpi0inFV_stack_10->SetBinError(22,1.653547);
   hCCpi0inFV_stack_10->SetBinError(23,1.6645);
   hCCpi0inFV_stack_10->SetBinError(24,1.557808);
   hCCpi0inFV_stack_10->SetBinError(25,0.7273567);
   hCCpi0inFV_stack_10->SetBinError(26,0.1950249);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1702119);
   hNCinFV_stack_11->SetBinContent(2,0.2232218);
   hNCinFV_stack_11->SetBinContent(3,2.804522);
   hNCinFV_stack_11->SetBinContent(4,2.422688);
   hNCinFV_stack_11->SetBinContent(5,2.985157);
   hNCinFV_stack_11->SetBinContent(6,1.876365);
   hNCinFV_stack_11->SetBinContent(7,0.7682993);
   hNCinFV_stack_11->SetBinContent(8,1.308917);
   hNCinFV_stack_11->SetBinContent(9,0.9104203);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,2.221655);
   hNCinFV_stack_11->SetBinContent(12,1.140065);
   hNCinFV_stack_11->SetBinContent(13,1.048255);
   hNCinFV_stack_11->SetBinContent(14,1.609848);
   hNCinFV_stack_11->SetBinContent(15,1.5958);
   hNCinFV_stack_11->SetBinContent(16,0.298642);
   hNCinFV_stack_11->SetBinContent(17,1.079398);
   hNCinFV_stack_11->SetBinContent(18,0.4338944);
   hNCinFV_stack_11->SetBinContent(19,1.790418);
   hNCinFV_stack_11->SetBinContent(20,0.665417);
   hNCinFV_stack_11->SetBinContent(21,1.073502);
   hNCinFV_stack_11->SetBinContent(22,1.749206);
   hNCinFV_stack_11->SetBinContent(23,2.683305);
   hNCinFV_stack_11->SetBinContent(24,2.676339);
   hNCinFV_stack_11->SetBinContent(25,0.6966853);
   hNCinFV_stack_11->SetBinError(1,0.1702119);
   hNCinFV_stack_11->SetBinError(2,0.2232218);
   hNCinFV_stack_11->SetBinError(3,0.8960611);
   hNCinFV_stack_11->SetBinError(4,0.7481827);
   hNCinFV_stack_11->SetBinError(5,0.9640772);
   hNCinFV_stack_11->SetBinError(6,0.7353104);
   hNCinFV_stack_11->SetBinError(7,0.406948);
   hNCinFV_stack_11->SetBinError(8,0.5416544);
   hNCinFV_stack_11->SetBinError(9,0.4826971);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.8088946);
   hNCinFV_stack_11->SetBinError(12,0.5567904);
   hNCinFV_stack_11->SetBinError(13,0.5137564);
   hNCinFV_stack_11->SetBinError(14,0.7771783);
   hNCinFV_stack_11->SetBinError(15,0.7312823);
   hNCinFV_stack_11->SetBinError(16,0.2215535);
   hNCinFV_stack_11->SetBinError(17,0.6985843);
   hNCinFV_stack_11->SetBinError(18,0.2689355);
   hNCinFV_stack_11->SetBinError(19,0.6636771);
   hNCinFV_stack_11->SetBinError(20,0.4134443);
   hNCinFV_stack_11->SetBinError(21,0.4212488);
   hNCinFV_stack_11->SetBinError(22,0.6123002);
   hNCinFV_stack_11->SetBinError(23,0.8405025);
   hNCinFV_stack_11->SetBinError(24,1.010597);
   hNCinFV_stack_11->SetBinError(25,0.5825166);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinContent(3,2.646418);
   hnumuCCinFV_stack_12->SetBinContent(4,3.246697);
   hnumuCCinFV_stack_12->SetBinContent(5,4.033032);
   hnumuCCinFV_stack_12->SetBinContent(6,4.484313);
   hnumuCCinFV_stack_12->SetBinContent(7,4.885804);
   hnumuCCinFV_stack_12->SetBinContent(8,3.91923);
   hnumuCCinFV_stack_12->SetBinContent(9,2.229609);
   hnumuCCinFV_stack_12->SetBinContent(10,3.54396);
   hnumuCCinFV_stack_12->SetBinContent(11,2.976092);
   hnumuCCinFV_stack_12->SetBinContent(12,3.711091);
   hnumuCCinFV_stack_12->SetBinContent(13,3.158897);
   hnumuCCinFV_stack_12->SetBinContent(14,4.671348);
   hnumuCCinFV_stack_12->SetBinContent(15,4.209422);
   hnumuCCinFV_stack_12->SetBinContent(16,4.673566);
   hnumuCCinFV_stack_12->SetBinContent(17,3.400013);
   hnumuCCinFV_stack_12->SetBinContent(18,3.358093);
   hnumuCCinFV_stack_12->SetBinContent(19,2.729304);
   hnumuCCinFV_stack_12->SetBinContent(20,6.184789);
   hnumuCCinFV_stack_12->SetBinContent(21,5.809062);
   hnumuCCinFV_stack_12->SetBinContent(22,9.842056);
   hnumuCCinFV_stack_12->SetBinContent(23,6.800764);
   hnumuCCinFV_stack_12->SetBinContent(24,6.267029);
   hnumuCCinFV_stack_12->SetBinContent(25,1.019745);
   hnumuCCinFV_stack_12->SetBinError(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinError(3,0.8441064);
   hnumuCCinFV_stack_12->SetBinError(4,0.8868217);
   hnumuCCinFV_stack_12->SetBinError(5,1.038484);
   hnumuCCinFV_stack_12->SetBinError(6,1.065578);
   hnumuCCinFV_stack_12->SetBinError(7,1.20035);
   hnumuCCinFV_stack_12->SetBinError(8,1.04182);
   hnumuCCinFV_stack_12->SetBinError(9,0.7175669);
   hnumuCCinFV_stack_12->SetBinError(10,0.9387387);
   hnumuCCinFV_stack_12->SetBinError(11,0.9684798);
   hnumuCCinFV_stack_12->SetBinError(12,1.033847);
   hnumuCCinFV_stack_12->SetBinError(13,0.9406251);
   hnumuCCinFV_stack_12->SetBinError(14,1.115633);
   hnumuCCinFV_stack_12->SetBinError(15,1.09886);
   hnumuCCinFV_stack_12->SetBinError(16,1.110483);
   hnumuCCinFV_stack_12->SetBinError(17,0.897813);
   hnumuCCinFV_stack_12->SetBinError(18,1.099384);
   hnumuCCinFV_stack_12->SetBinError(19,0.8086837);
   hnumuCCinFV_stack_12->SetBinError(20,2.199725);
   hnumuCCinFV_stack_12->SetBinError(21,1.203599);
   hnumuCCinFV_stack_12->SetBinError(22,2.935853);
   hnumuCCinFV_stack_12->SetBinError(23,1.314411);
   hnumuCCinFV_stack_12->SetBinError(24,1.262263);
   hnumuCCinFV_stack_12->SetBinError(25,0.5337447);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.9320427);
   hnueCCinFV_stack_13->SetBinContent(6,0.2261597);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(14,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(24,1.134888);
   hnueCCinFV_stack_13->SetBinError(4,0.5818021);
   hnueCCinFV_stack_13->SetBinError(6,0.2261597);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2179626);
   hnueCCinFV_stack_13->SetBinError(14,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.4566905);
   hnueCCinFV_stack_13->SetBinError(24,0.7930954);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__23->SetBinContent(0,0.7559202);
   hmcerror__23->SetBinContent(1,0.650777);
   hmcerror__23->SetBinContent(2,13.71923);
   hmcerror__23->SetBinContent(3,39.75648);
   hmcerror__23->SetBinContent(4,56.78469);
   hmcerror__23->SetBinContent(5,45.69435);
   hmcerror__23->SetBinContent(6,35.30365);
   hmcerror__23->SetBinContent(7,25.08682);
   hmcerror__23->SetBinContent(8,28.30276);
   hmcerror__23->SetBinContent(9,23.74147);
   hmcerror__23->SetBinContent(10,21.87817);
   hmcerror__23->SetBinContent(11,22.83089);
   hmcerror__23->SetBinContent(12,26.49502);
   hmcerror__23->SetBinContent(13,24.42723);
   hmcerror__23->SetBinContent(14,23.4709);
   hmcerror__23->SetBinContent(15,26.91649);
   hmcerror__23->SetBinContent(16,26.65858);
   hmcerror__23->SetBinContent(17,32.7858);
   hmcerror__23->SetBinContent(18,31.81668);
   hmcerror__23->SetBinContent(19,38.00767);
   hmcerror__23->SetBinContent(20,46.22307);
   hmcerror__23->SetBinContent(21,47.46862);
   hmcerror__23->SetBinContent(22,78.18374);
   hmcerror__23->SetBinContent(23,88.76921);
   hmcerror__23->SetBinContent(24,86.18939);
   hmcerror__23->SetBinContent(25,39.76133);
   hmcerror__23->SetBinContent(26,1.140563);
   hmcerror__23->SetBinContent(27,0.7447861);
   hmcerror__23->SetBinError(0,0.4620134);
   hmcerror__23->SetBinError(1,1.535551);
   hmcerror__23->SetBinError(2,12.32904);
   hmcerror__23->SetBinError(3,15.9122);
   hmcerror__23->SetBinError(4,22.769);
   hmcerror__23->SetBinError(5,19.20504);
   hmcerror__23->SetBinError(6,16.20342);
   hmcerror__23->SetBinError(7,12.87755);
   hmcerror__23->SetBinError(8,12.61922);
   hmcerror__23->SetBinError(9,11.32991);
   hmcerror__23->SetBinError(10,11.03816);
   hmcerror__23->SetBinError(11,12.13236);
   hmcerror__23->SetBinError(12,12.40883);
   hmcerror__23->SetBinError(13,12.73519);
   hmcerror__23->SetBinError(14,10.159);
   hmcerror__23->SetBinError(15,20.65094);
   hmcerror__23->SetBinError(16,12.40426);
   hmcerror__23->SetBinError(17,10.57594);
   hmcerror__23->SetBinError(18,11.55191);
   hmcerror__23->SetBinError(19,14.54699);
   hmcerror__23->SetBinError(20,13.74984);
   hmcerror__23->SetBinError(21,18.70707);
   hmcerror__23->SetBinError(22,22.03351);
   hmcerror__23->SetBinError(23,19.61938);
   hmcerror__23->SetBinError(24,20.74174);
   hmcerror__23->SetBinError(25,26.02679);
   hmcerror__23->SetBinError(26,3.721086);
   hmcerror__23->SetBinError(27,0.7095202);
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
   
   Double_t _fx3029[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3029[26] = {
   0,
   10,
   43,
   51,
   55,
   33,
   30,
   34,
   25,
   27,
   36,
   20,
   27,
   22,
   21,
   23,
   24,
   24,
   35,
   35,
   51,
   63,
   82,
   90,
   22,
   1};
   Double_t _felx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3029[26] = {
   0,
   3.34883,
   6.6917,
   7.2725,
   7.546,
   5.8847,
   5.6197,
   5.9703,
   5.1474,
   5.3414,
   6.1381,
   4.6266,
   5.3414,
   4.8417,
   4.7354,
   4.9457,
   5.0476,
   5.0476,
   6.0548,
   6.0548,
   7.2725,
   8.0648,
   9.1791,
   9.6093,
   4.8417,
   1};
   Double_t _fehx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3029[26] = {
   1.1478,
   3.1179,
   6.4868,
   7.0686,
   7.3425,
   5.6776,
   5.4117,
   5.7635,
   4.9374,
   5.1322,
   5.9318,
   4.4133,
   5.1322,
   4.6299,
   4.5229,
   4.7346,
   4.837,
   4.837,
   5.8483,
   5.8483,
   7.0686,
   7.862,
   8.9774,
   9.4079,
   4.6299,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-156,156);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(109.3487);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 884.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 198.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 186.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3030[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3030[26] = {
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
   1,
   1};
   Double_t _felx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3030[26] = {
   2.359565,
   0.898669,
   0.4002417,
   0.4009707,
   0.4202936,
   0.4589729,
   0.5133191,
   0.4458653,
   0.4772204,
   0.5045285,
   0.5314012,
   0.4683458,
   0.5213521,
   0.4328341,
   0.7672228,
   0.4653009,
   0.3225769,
   0.3630772,
   0.3827382,
   0.297467,
   0.3940933,
   0.2818171,
   0.2210156,
   0.2406531,
   0.6545754,
   3.262498};
   Double_t _fehx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3030[26] = {
   2.359565,
   0.898669,
   0.4002417,
   0.4009707,
   0.4202936,
   0.4589729,
   0.5133191,
   0.4458653,
   0.4772204,
   0.5045285,
   0.5314012,
   0.4683458,
   0.5213521,
   0.4328341,
   0.7672228,
   0.4653009,
   0.3225769,
   0.3630772,
   0.3827382,
   0.297467,
   0.3940933,
   0.2818171,
   0.2210156,
   0.2406531,
   0.6545754,
   3.262498};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-156,156);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
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
   
   Double_t _fx3031[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3031[26] = {
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
   1,
   1};
   Double_t _felx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3031[26] = {
   1.003299,
   0.2737158,
   0.227188,
   0.2263628,
   0.2140525,
   0.2347819,
   0.2276664,
   0.2469068,
   0.2645087,
   0.2345476,
   0.2473769,
   0.2048286,
   0.2296912,
   0.1942197,
   0.2134205,
   0.2110066,
   0.1794809,
   0.1959791,
   0.1783624,
   0.1584438,
   0.1628091,
   0.1648716,
   0.1407078,
   0.1459961,
   0.1580055,
   0.6426623};
   Double_t _fehx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3031[26] = {
   1.003299,
   0.2737158,
   0.227188,
   0.2263628,
   0.2140525,
   0.2347819,
   0.2276664,
   0.2469068,
   0.2645087,
   0.2345476,
   0.2473769,
   0.2048286,
   0.2296912,
   0.1942197,
   0.2134205,
   0.2110066,
   0.1794809,
   0.1959791,
   0.1783624,
   0.1584438,
   0.1628091,
   0.1648716,
   0.1407078,
   0.1459961,
   0.1580055,
   0.6426623};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-156,156);
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
   
   Double_t _fx3032[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3032[26] = {
   0,
   0.7289041,
   1.081585,
   0.8981293,
   1.20365,
   0.9347474,
   1.195847,
   1.201296,
   1.05301,
   1.234107,
   1.576811,
   0.7548589,
   1.105324,
   0.9373309,
   0.7801909,
   0.8627617,
   0.7320242,
   0.7543212,
   0.9208668,
   0.7571977,
   1.074394,
   0.8057942,
   0.9237437,
   1.044212,
   0.5533014,
   0.8767598};
   Double_t _felx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3032[26] = {
   0,
   0.2440976,
   0.1683172,
   0.1280715,
   0.1651408,
   0.1666881,
   0.22401,
   0.2109441,
   0.2168105,
   0.2441429,
   0.2688507,
   0.1746215,
   0.2186658,
   0.2062852,
   0.1759293,
   0.18552,
   0.1539569,
   0.1586463,
   0.1593047,
   0.1309909,
   0.1532065,
   0.1031519,
   0.1034041,
   0.1114905,
   0.1217691,
   0.8767598};
   Double_t _fehx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3032[26] = {
   1.763738,
   0.227265,
   0.1631633,
   0.1244807,
   0.1606873,
   0.1608219,
   0.2157188,
   0.2036374,
   0.2079652,
   0.2345809,
   0.2598147,
   0.1665709,
   0.2101016,
   0.1972613,
   0.1680345,
   0.1776014,
   0.1475334,
   0.1520272,
   0.1538716,
   0.1265234,
   0.148911,
   0.100558,
   0.1011319,
   0.1091538,
   0.1164423,
   1.192139};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-156,156);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.275789);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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

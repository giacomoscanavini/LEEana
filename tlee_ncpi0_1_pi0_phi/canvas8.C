#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 17:07:17 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-4.119231,-0.98,3.957692,108.3674);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__22->SetBinContent(1,39.94744);
   hmc__22->SetBinContent(2,36.22537);
   hmc__22->SetBinContent(3,39.37277);
   hmc__22->SetBinContent(4,37.33493);
   hmc__22->SetBinContent(5,36.41753);
   hmc__22->SetBinContent(6,36.05138);
   hmc__22->SetBinContent(7,37.37973);
   hmc__22->SetBinContent(8,32.56035);
   hmc__22->SetBinContent(9,31.0907);
   hmc__22->SetBinContent(10,35.54642);
   hmc__22->SetBinContent(11,30.10219);
   hmc__22->SetBinContent(12,41.17617);
   hmc__22->SetBinContent(13,33.43044);
   hmc__22->SetBinContent(14,37.80935);
   hmc__22->SetBinContent(15,40.20162);
   hmc__22->SetBinContent(16,35.58152);
   hmc__22->SetBinContent(17,38.63823);
   hmc__22->SetBinContent(18,38.14213);
   hmc__22->SetBinContent(19,44.66676);
   hmc__22->SetBinContent(20,33.4977);
   hmc__22->SetBinContent(21,40.55391);
   hmc__22->SetBinContent(22,36.65926);
   hmc__22->SetBinContent(23,41.35089);
   hmc__22->SetBinContent(24,40.30622);
   hmc__22->SetBinContent(25,39.5213);
   hmc__22->SetBinError(1,15.86619);
   hmc__22->SetBinError(2,24.59627);
   hmc__22->SetBinError(3,21.85102);
   hmc__22->SetBinError(4,13.79696);
   hmc__22->SetBinError(5,15.322);
   hmc__22->SetBinError(6,12.70612);
   hmc__22->SetBinError(7,16.21927);
   hmc__22->SetBinError(8,14.11234);
   hmc__22->SetBinError(9,17.30131);
   hmc__22->SetBinError(10,17.35876);
   hmc__22->SetBinError(11,18.37741);
   hmc__22->SetBinError(12,19.85458);
   hmc__22->SetBinError(13,14.77091);
   hmc__22->SetBinError(14,16.90674);
   hmc__22->SetBinError(15,20.70619);
   hmc__22->SetBinError(16,14.92808);
   hmc__22->SetBinError(17,11.94037);
   hmc__22->SetBinError(18,15.47775);
   hmc__22->SetBinError(19,17.90105);
   hmc__22->SetBinError(20,14.83793);
   hmc__22->SetBinError(21,15.73644);
   hmc__22->SetBinError(22,13.43583);
   hmc__22->SetBinError(23,20.34113);
   hmc__22->SetBinError(24,20.97268);
   hmc__22->SetBinError(25,24.60773);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-0.98);
   hmc__22->SetMaximum(102.9);
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
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(46.9001);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.333626);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,1.212346);
   hbadmatch_stack_1->SetBinContent(4,1.628331);
   hbadmatch_stack_1->SetBinContent(5,1.303584);
   hbadmatch_stack_1->SetBinContent(6,2.365479);
   hbadmatch_stack_1->SetBinContent(7,1.006544);
   hbadmatch_stack_1->SetBinContent(8,1.290983);
   hbadmatch_stack_1->SetBinContent(9,1.093308);
   hbadmatch_stack_1->SetBinContent(10,0.8668863);
   hbadmatch_stack_1->SetBinContent(11,1.191064);
   hbadmatch_stack_1->SetBinContent(12,2.051392);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,1.197582);
   hbadmatch_stack_1->SetBinContent(15,1.902911);
   hbadmatch_stack_1->SetBinContent(16,1.129293);
   hbadmatch_stack_1->SetBinContent(17,1.499105);
   hbadmatch_stack_1->SetBinContent(18,2.22676);
   hbadmatch_stack_1->SetBinContent(19,0.7475944);
   hbadmatch_stack_1->SetBinContent(20,0.2855429);
   hbadmatch_stack_1->SetBinContent(21,1.643447);
   hbadmatch_stack_1->SetBinContent(22,1.629193);
   hbadmatch_stack_1->SetBinContent(23,1.54554);
   hbadmatch_stack_1->SetBinContent(24,0.5867651);
   hbadmatch_stack_1->SetBinContent(25,1.783473);
   hbadmatch_stack_1->SetBinError(1,0.516387);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.6234117);
   hbadmatch_stack_1->SetBinError(4,0.6694687);
   hbadmatch_stack_1->SetBinError(5,0.5711049);
   hbadmatch_stack_1->SetBinError(6,0.8659461);
   hbadmatch_stack_1->SetBinError(7,0.53056);
   hbadmatch_stack_1->SetBinError(8,0.7462251);
   hbadmatch_stack_1->SetBinError(9,0.4962946);
   hbadmatch_stack_1->SetBinError(10,0.5054741);
   hbadmatch_stack_1->SetBinError(11,0.5470663);
   hbadmatch_stack_1->SetBinError(12,1.224116);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.6256574);
   hbadmatch_stack_1->SetBinError(15,0.7179869);
   hbadmatch_stack_1->SetBinError(16,0.5271843);
   hbadmatch_stack_1->SetBinError(17,0.6392309);
   hbadmatch_stack_1->SetBinError(18,0.8477392);
   hbadmatch_stack_1->SetBinError(19,0.4486253);
   hbadmatch_stack_1->SetBinError(20,0.2855402);
   hbadmatch_stack_1->SetBinError(21,0.6977939);
   hbadmatch_stack_1->SetBinError(22,0.7948719);
   hbadmatch_stack_1->SetBinError(23,0.8144473);
   hbadmatch_stack_1->SetBinError(24,0.3387718);
   hbadmatch_stack_1->SetBinError(25,0.8272391);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.407382);
   hext_stack_2->SetBinContent(2,4.296596);
   hext_stack_2->SetBinContent(3,5.276968);
   hext_stack_2->SetBinContent(4,7.511847);
   hext_stack_2->SetBinContent(5,9.302646);
   hext_stack_2->SetBinContent(6,10.27143);
   hext_stack_2->SetBinContent(7,11.17124);
   hext_stack_2->SetBinContent(8,6.571785);
   hext_stack_2->SetBinContent(9,4.385977);
   hext_stack_2->SetBinContent(10,7.429645);
   hext_stack_2->SetBinContent(11,3.972198);
   hext_stack_2->SetBinContent(12,7.671841);
   hext_stack_2->SetBinContent(13,6.139236);
   hext_stack_2->SetBinContent(14,5.027592);
   hext_stack_2->SetBinContent(15,9.131062);
   hext_stack_2->SetBinContent(16,6.889002);
   hext_stack_2->SetBinContent(17,12.51349);
   hext_stack_2->SetBinContent(18,9.07481);
   hext_stack_2->SetBinContent(19,14.80304);
   hext_stack_2->SetBinContent(20,10.1258);
   hext_stack_2->SetBinContent(21,10.29738);
   hext_stack_2->SetBinContent(22,8.015008);
   hext_stack_2->SetBinContent(23,11.60373);
   hext_stack_2->SetBinContent(24,5.993603);
   hext_stack_2->SetBinContent(25,5.236656);
   hext_stack_2->SetBinError(1,1.5862);
   hext_stack_2->SetBinError(2,1.328326);
   hext_stack_2->SetBinError(3,1.370748);
   hext_stack_2->SetBinError(4,1.903048);
   hext_stack_2->SetBinError(5,2.098347);
   hext_stack_2->SetBinError(6,2.140944);
   hext_stack_2->SetBinError(7,2.260419);
   hext_stack_2->SetBinError(8,1.62364);
   hext_stack_2->SetBinError(9,1.274103);
   hext_stack_2->SetBinError(10,1.887195);
   hext_stack_2->SetBinError(11,1.288106);
   hext_stack_2->SetBinError(12,1.899118);
   hext_stack_2->SetBinError(13,1.714458);
   hext_stack_2->SetBinError(14,1.426537);
   hext_stack_2->SetBinError(15,2.117566);
   hext_stack_2->SetBinError(16,1.715413);
   hext_stack_2->SetBinError(17,2.47489);
   hext_stack_2->SetBinError(18,1.988847);
   hext_stack_2->SetBinError(19,2.567963);
   hext_stack_2->SetBinError(20,2.048458);
   hext_stack_2->SetBinError(21,2.028585);
   hext_stack_2->SetBinError(22,1.855964);
   hext_stack_2->SetBinError(23,2.477246);
   hext_stack_2->SetBinError(24,1.59747);
   hext_stack_2->SetBinError(25,1.658262);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.5232321);
   hdirt_stack_3->SetBinContent(2,1.570363);
   hdirt_stack_3->SetBinContent(3,0.9561222);
   hdirt_stack_3->SetBinContent(5,1.290705);
   hdirt_stack_3->SetBinContent(6,0.7875552);
   hdirt_stack_3->SetBinContent(9,0.6773466);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.7712369);
   hdirt_stack_3->SetBinContent(13,0.8706918);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.6686302);
   hdirt_stack_3->SetBinContent(18,1.396789);
   hdirt_stack_3->SetBinContent(19,1.049574);
   hdirt_stack_3->SetBinContent(20,1.812722);
   hdirt_stack_3->SetBinContent(21,0.5570828);
   hdirt_stack_3->SetBinContent(22,1.298424);
   hdirt_stack_3->SetBinContent(23,1.263528);
   hdirt_stack_3->SetBinContent(24,1.405285);
   hdirt_stack_3->SetBinContent(25,0.7367032);
   hdirt_stack_3->SetBinError(1,0.3149294);
   hdirt_stack_3->SetBinError(2,0.6883668);
   hdirt_stack_3->SetBinError(3,0.5623509);
   hdirt_stack_3->SetBinError(5,0.6174457);
   hdirt_stack_3->SetBinError(6,0.4670818);
   hdirt_stack_3->SetBinError(9,0.3439585);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4884655);
   hdirt_stack_3->SetBinError(13,0.4088785);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.4348027);
   hdirt_stack_3->SetBinError(18,0.697307);
   hdirt_stack_3->SetBinError(19,0.477222);
   hdirt_stack_3->SetBinError(20,1.04843);
   hdirt_stack_3->SetBinError(21,0.4028472);
   hdirt_stack_3->SetBinError(22,0.5518727);
   hdirt_stack_3->SetBinError(23,0.5736862);
   hdirt_stack_3->SetBinError(24,0.6821521);
   hdirt_stack_3->SetBinError(25,0.3751852);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,8.414924);
   houtFV_stack_4->SetBinContent(2,7.463655);
   houtFV_stack_4->SetBinContent(3,7.458029);
   houtFV_stack_4->SetBinContent(4,8.637929);
   houtFV_stack_4->SetBinContent(5,9.148207);
   houtFV_stack_4->SetBinContent(6,6.151792);
   houtFV_stack_4->SetBinContent(7,10.01793);
   houtFV_stack_4->SetBinContent(8,6.134877);
   houtFV_stack_4->SetBinContent(9,7.413113);
   houtFV_stack_4->SetBinContent(10,6.346076);
   houtFV_stack_4->SetBinContent(11,4.973517);
   houtFV_stack_4->SetBinContent(12,10.8521);
   houtFV_stack_4->SetBinContent(13,7.211198);
   houtFV_stack_4->SetBinContent(14,9.171429);
   houtFV_stack_4->SetBinContent(15,7.132986);
   houtFV_stack_4->SetBinContent(16,8.179565);
   houtFV_stack_4->SetBinContent(17,6.612215);
   houtFV_stack_4->SetBinContent(18,7.101879);
   houtFV_stack_4->SetBinContent(19,4.70599);
   houtFV_stack_4->SetBinContent(20,6.656676);
   houtFV_stack_4->SetBinContent(21,7.956642);
   houtFV_stack_4->SetBinContent(22,8.064486);
   houtFV_stack_4->SetBinContent(23,8.676876);
   houtFV_stack_4->SetBinContent(24,9.450401);
   houtFV_stack_4->SetBinContent(25,8.507653);
   houtFV_stack_4->SetBinError(1,1.451134);
   houtFV_stack_4->SetBinError(2,1.261233);
   houtFV_stack_4->SetBinError(3,1.344703);
   houtFV_stack_4->SetBinError(4,1.514835);
   houtFV_stack_4->SetBinError(5,1.544258);
   houtFV_stack_4->SetBinError(6,1.222259);
   houtFV_stack_4->SetBinError(7,1.632017);
   houtFV_stack_4->SetBinError(8,1.255654);
   houtFV_stack_4->SetBinError(9,1.592346);
   houtFV_stack_4->SetBinError(10,1.247584);
   houtFV_stack_4->SetBinError(11,1.09642);
   houtFV_stack_4->SetBinError(12,1.664611);
   houtFV_stack_4->SetBinError(13,1.41161);
   houtFV_stack_4->SetBinError(14,1.579074);
   houtFV_stack_4->SetBinError(15,1.41496);
   houtFV_stack_4->SetBinError(16,1.449924);
   houtFV_stack_4->SetBinError(17,1.238718);
   houtFV_stack_4->SetBinError(18,1.297978);
   houtFV_stack_4->SetBinError(19,1.09808);
   houtFV_stack_4->SetBinError(20,1.729056);
   houtFV_stack_4->SetBinError(21,1.396111);
   houtFV_stack_4->SetBinError(22,1.367756);
   houtFV_stack_4->SetBinError(23,1.522862);
   houtFV_stack_4->SetBinError(24,1.519854);
   houtFV_stack_4->SetBinError(25,1.449095);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4687397);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.9258692);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1984397);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.7435086);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4823049);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.6636589);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7679094);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5892393);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7189275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7467957);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.5889072);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7027175);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8869108);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5690392);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3178626);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.07488931);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3932148);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2442361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8933173);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6956994);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.523417);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4849862);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.686977);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5557635);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7370041);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2195771);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2940646);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.08474279);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2964774);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2953802);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3697943);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3479913);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2926491);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2820354);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3862251);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2585269);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3586192);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3650007);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2504324);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1578144);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04830404);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1694572);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1206262);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3778274);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2408944);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2035987);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2892865);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2524452);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2937089);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3282023);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4465379);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03861202);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03555292);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.07685162);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2947565);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02988573);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02514784);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05442126);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.151932);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.85606);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.736244);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.755219);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.845822);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.187134);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.245528);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.938653);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.157951);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.412232);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.243219);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.973036);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.200723);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.00212);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.616895);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.845344);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.920716);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.68384);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.960224);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.5994);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.236362);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.404884);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.697755);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.48093);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.542725);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6070598);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6943802);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6919959);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7187526);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5632765);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8317885);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5892489);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6039805);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5900426);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6227477);
   hNCpi0inFVres_stack_7->SetBinError(11,0.821468);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7211316);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6378505);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7076422);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7171983);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7078613);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8248648);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6171064);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7857972);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7230158);
   hNCpi0inFVres_stack_7->SetBinError(21,1.013948);
   hNCpi0inFVres_stack_7->SetBinError(22,0.657897);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4864335);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9668771);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8178085);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.73282);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.67717);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.558679);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.617892);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.7727594);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.9173342);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.921191);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.25855);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.235047);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9711099);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.548209);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.737386);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.091192);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.120363);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.353946);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.045771);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.729318);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9844885);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.041395);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.196968);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.085621);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.316741);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.049116);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.281618);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.822917);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4772091);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6786105);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4430372);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5682818);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.256452);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3460907);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2133557);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3977216);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3847879);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3735604);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5051481);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5091069);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3957672);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.32123);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.299847);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3077824);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5991003);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2840786);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.442585);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3826358);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4016691);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6969585);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4502056);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3061757);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2351481);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,10.13321);
   hCCpi0inFV_stack_10->SetBinContent(2,7.587135);
   hCCpi0inFV_stack_10->SetBinContent(3,10.65306);
   hCCpi0inFV_stack_10->SetBinContent(4,8.194559);
   hCCpi0inFV_stack_10->SetBinContent(5,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(6,6.112338);
   hCCpi0inFV_stack_10->SetBinContent(7,6.040582);
   hCCpi0inFV_stack_10->SetBinContent(8,6.492723);
   hCCpi0inFV_stack_10->SetBinContent(9,8.23411);
   hCCpi0inFV_stack_10->SetBinContent(10,7.355769);
   hCCpi0inFV_stack_10->SetBinContent(11,7.796875);
   hCCpi0inFV_stack_10->SetBinContent(12,8.155478);
   hCCpi0inFV_stack_10->SetBinContent(13,6.79979);
   hCCpi0inFV_stack_10->SetBinContent(14,8.638809);
   hCCpi0inFV_stack_10->SetBinContent(15,5.815006);
   hCCpi0inFV_stack_10->SetBinContent(16,6.840611);
   hCCpi0inFV_stack_10->SetBinContent(17,6.590642);
   hCCpi0inFV_stack_10->SetBinContent(18,7.958114);
   hCCpi0inFV_stack_10->SetBinContent(19,9.618666);
   hCCpi0inFV_stack_10->SetBinContent(20,4.591603);
   hCCpi0inFV_stack_10->SetBinContent(21,7.946106);
   hCCpi0inFV_stack_10->SetBinContent(22,7.218742);
   hCCpi0inFV_stack_10->SetBinContent(23,7.769243);
   hCCpi0inFV_stack_10->SetBinContent(24,6.105311);
   hCCpi0inFV_stack_10->SetBinContent(25,9.161213);
   hCCpi0inFV_stack_10->SetBinError(1,1.681885);
   hCCpi0inFV_stack_10->SetBinError(2,1.316644);
   hCCpi0inFV_stack_10->SetBinError(3,1.668914);
   hCCpi0inFV_stack_10->SetBinError(4,1.481216);
   hCCpi0inFV_stack_10->SetBinError(5,1.144335);
   hCCpi0inFV_stack_10->SetBinError(6,1.185496);
   hCCpi0inFV_stack_10->SetBinError(7,1.198009);
   hCCpi0inFV_stack_10->SetBinError(8,1.326271);
   hCCpi0inFV_stack_10->SetBinError(9,1.486897);
   hCCpi0inFV_stack_10->SetBinError(10,1.343391);
   hCCpi0inFV_stack_10->SetBinError(11,1.364103);
   hCCpi0inFV_stack_10->SetBinError(12,1.4012);
   hCCpi0inFV_stack_10->SetBinError(13,1.311461);
   hCCpi0inFV_stack_10->SetBinError(14,1.447256);
   hCCpi0inFV_stack_10->SetBinError(15,1.176698);
   hCCpi0inFV_stack_10->SetBinError(16,1.316726);
   hCCpi0inFV_stack_10->SetBinError(17,1.316585);
   hCCpi0inFV_stack_10->SetBinError(18,1.482879);
   hCCpi0inFV_stack_10->SetBinError(19,1.619423);
   hCCpi0inFV_stack_10->SetBinError(20,1.09304);
   hCCpi0inFV_stack_10->SetBinError(21,1.461124);
   hCCpi0inFV_stack_10->SetBinError(22,1.324342);
   hCCpi0inFV_stack_10->SetBinError(23,1.401755);
   hCCpi0inFV_stack_10->SetBinError(24,1.240963);
   hCCpi0inFV_stack_10->SetBinError(25,1.520539);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.645771);
   hNCinFV_stack_11->SetBinContent(2,1.87552);
   hNCinFV_stack_11->SetBinContent(3,2.073852);
   hNCinFV_stack_11->SetBinContent(4,1.201947);
   hNCinFV_stack_11->SetBinContent(5,2.356975);
   hNCinFV_stack_11->SetBinContent(6,0.9456409);
   hNCinFV_stack_11->SetBinContent(7,1.207534);
   hNCinFV_stack_11->SetBinContent(8,0.6684092);
   hNCinFV_stack_11->SetBinContent(9,1.073592);
   hNCinFV_stack_11->SetBinContent(10,1.614852);
   hNCinFV_stack_11->SetBinContent(11,1.422821);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,0.9558634);
   hNCinFV_stack_11->SetBinContent(14,0.9777666);
   hNCinFV_stack_11->SetBinContent(15,0.8391919);
   hNCinFV_stack_11->SetBinContent(16,1.518651);
   hNCinFV_stack_11->SetBinContent(17,1.32233);
   hNCinFV_stack_11->SetBinContent(18,1.21951);
   hNCinFV_stack_11->SetBinContent(19,1.983104);
   hNCinFV_stack_11->SetBinContent(20,1.482644);
   hNCinFV_stack_11->SetBinContent(21,1.650758);
   hNCinFV_stack_11->SetBinContent(22,0.5204914);
   hNCinFV_stack_11->SetBinContent(23,1.235971);
   hNCinFV_stack_11->SetBinContent(24,3.127059);
   hNCinFV_stack_11->SetBinContent(25,1.115264);
   hNCinFV_stack_11->SetBinError(1,0.5864695);
   hNCinFV_stack_11->SetBinError(2,0.6852834);
   hNCinFV_stack_11->SetBinError(3,0.7430467);
   hNCinFV_stack_11->SetBinError(4,0.4445054);
   hNCinFV_stack_11->SetBinError(5,0.9759055);
   hNCinFV_stack_11->SetBinError(6,0.5281881);
   hNCinFV_stack_11->SetBinError(7,0.5026182);
   hNCinFV_stack_11->SetBinError(8,0.4143842);
   hNCinFV_stack_11->SetBinError(9,0.556052);
   hNCinFV_stack_11->SetBinError(10,0.9223198);
   hNCinFV_stack_11->SetBinError(11,0.5171657);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.4924551);
   hNCinFV_stack_11->SetBinError(14,0.5016154);
   hNCinFV_stack_11->SetBinError(15,0.4227052);
   hNCinFV_stack_11->SetBinError(16,0.6247164);
   hNCinFV_stack_11->SetBinError(17,0.7339405);
   hNCinFV_stack_11->SetBinError(18,0.5254163);
   hNCinFV_stack_11->SetBinError(19,0.838829);
   hNCinFV_stack_11->SetBinError(20,0.6384953);
   hNCinFV_stack_11->SetBinError(21,0.7125482);
   hNCinFV_stack_11->SetBinError(22,0.3054644);
   hNCinFV_stack_11->SetBinError(23,0.5311154);
   hNCinFV_stack_11->SetBinError(24,1.005958);
   hNCinFV_stack_11->SetBinError(25,0.4916855);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.135797);
   hnumuCCinFV_stack_12->SetBinContent(2,4.882678);
   hnumuCCinFV_stack_12->SetBinContent(3,4.488265);
   hnumuCCinFV_stack_12->SetBinContent(4,3.043696);
   hnumuCCinFV_stack_12->SetBinContent(5,2.289628);
   hnumuCCinFV_stack_12->SetBinContent(6,2.631474);
   hnumuCCinFV_stack_12->SetBinContent(7,3.001283);
   hnumuCCinFV_stack_12->SetBinContent(8,5.615132);
   hnumuCCinFV_stack_12->SetBinContent(9,1.866);
   hnumuCCinFV_stack_12->SetBinContent(10,5.007311);
   hnumuCCinFV_stack_12->SetBinContent(11,3.001343);
   hnumuCCinFV_stack_12->SetBinContent(12,3.642821);
   hnumuCCinFV_stack_12->SetBinContent(13,4.55733);
   hnumuCCinFV_stack_12->SetBinContent(14,4.968203);
   hnumuCCinFV_stack_12->SetBinContent(15,8.21946);
   hnumuCCinFV_stack_12->SetBinContent(16,4.076498);
   hnumuCCinFV_stack_12->SetBinContent(17,2.839234);
   hnumuCCinFV_stack_12->SetBinContent(18,4.251704);
   hnumuCCinFV_stack_12->SetBinContent(19,4.577026);
   hnumuCCinFV_stack_12->SetBinContent(20,3.034957);
   hnumuCCinFV_stack_12->SetBinContent(21,2.657088);
   hnumuCCinFV_stack_12->SetBinContent(22,2.472302);
   hnumuCCinFV_stack_12->SetBinContent(23,2.616421);
   hnumuCCinFV_stack_12->SetBinContent(24,5.242636);
   hnumuCCinFV_stack_12->SetBinContent(25,4.920504);
   hnumuCCinFV_stack_12->SetBinError(1,1.041495);
   hnumuCCinFV_stack_12->SetBinError(2,1.144613);
   hnumuCCinFV_stack_12->SetBinError(3,1.071202);
   hnumuCCinFV_stack_12->SetBinError(4,0.8328627);
   hnumuCCinFV_stack_12->SetBinError(5,0.786783);
   hnumuCCinFV_stack_12->SetBinError(6,0.8214024);
   hnumuCCinFV_stack_12->SetBinError(7,1.389495);
   hnumuCCinFV_stack_12->SetBinError(8,2.190537);
   hnumuCCinFV_stack_12->SetBinError(9,0.623662);
   hnumuCCinFV_stack_12->SetBinError(10,1.200709);
   hnumuCCinFV_stack_12->SetBinError(11,0.8583176);
   hnumuCCinFV_stack_12->SetBinError(12,1.023071);
   hnumuCCinFV_stack_12->SetBinError(13,1.17527);
   hnumuCCinFV_stack_12->SetBinError(14,1.15754);
   hnumuCCinFV_stack_12->SetBinError(15,2.66446);
   hnumuCCinFV_stack_12->SetBinError(16,0.9865749);
   hnumuCCinFV_stack_12->SetBinError(17,0.8910247);
   hnumuCCinFV_stack_12->SetBinError(18,1.025266);
   hnumuCCinFV_stack_12->SetBinError(19,1.306055);
   hnumuCCinFV_stack_12->SetBinError(20,0.8615672);
   hnumuCCinFV_stack_12->SetBinError(21,0.8187695);
   hnumuCCinFV_stack_12->SetBinError(22,0.7985853);
   hnumuCCinFV_stack_12->SetBinError(23,0.8447348);
   hnumuCCinFV_stack_12->SetBinError(24,1.157289);
   hnumuCCinFV_stack_12->SetBinError(25,1.062671);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.422001);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.4228751);
   hnueCCinFV_stack_13->SetBinContent(15,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(16,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(17,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(19,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.9398632);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2990829);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2997418);
   hnueCCinFV_stack_13->SetBinError(15,0.4972556);
   hnueCCinFV_stack_13->SetBinError(16,0.3025491);
   hnueCCinFV_stack_13->SetBinError(17,0.2179626);
   hnueCCinFV_stack_13->SetBinError(19,0.2463303);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.7687429);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__23->SetBinContent(1,39.94744);
   hmcerror__23->SetBinContent(2,36.22537);
   hmcerror__23->SetBinContent(3,39.37277);
   hmcerror__23->SetBinContent(4,37.33493);
   hmcerror__23->SetBinContent(5,36.41753);
   hmcerror__23->SetBinContent(6,36.05138);
   hmcerror__23->SetBinContent(7,37.37973);
   hmcerror__23->SetBinContent(8,32.56035);
   hmcerror__23->SetBinContent(9,31.0907);
   hmcerror__23->SetBinContent(10,35.54642);
   hmcerror__23->SetBinContent(11,30.10219);
   hmcerror__23->SetBinContent(12,41.17617);
   hmcerror__23->SetBinContent(13,33.43044);
   hmcerror__23->SetBinContent(14,37.80935);
   hmcerror__23->SetBinContent(15,40.20162);
   hmcerror__23->SetBinContent(16,35.58152);
   hmcerror__23->SetBinContent(17,38.63823);
   hmcerror__23->SetBinContent(18,38.14213);
   hmcerror__23->SetBinContent(19,44.66676);
   hmcerror__23->SetBinContent(20,33.4977);
   hmcerror__23->SetBinContent(21,40.55391);
   hmcerror__23->SetBinContent(22,36.65926);
   hmcerror__23->SetBinContent(23,41.35089);
   hmcerror__23->SetBinContent(24,40.30622);
   hmcerror__23->SetBinContent(25,39.5213);
   hmcerror__23->SetBinError(1,15.86619);
   hmcerror__23->SetBinError(2,24.59627);
   hmcerror__23->SetBinError(3,21.85102);
   hmcerror__23->SetBinError(4,13.79696);
   hmcerror__23->SetBinError(5,15.322);
   hmcerror__23->SetBinError(6,12.70612);
   hmcerror__23->SetBinError(7,16.21927);
   hmcerror__23->SetBinError(8,14.11234);
   hmcerror__23->SetBinError(9,17.30131);
   hmcerror__23->SetBinError(10,17.35876);
   hmcerror__23->SetBinError(11,18.37741);
   hmcerror__23->SetBinError(12,19.85458);
   hmcerror__23->SetBinError(13,14.77091);
   hmcerror__23->SetBinError(14,16.90674);
   hmcerror__23->SetBinError(15,20.70619);
   hmcerror__23->SetBinError(16,14.92808);
   hmcerror__23->SetBinError(17,11.94037);
   hmcerror__23->SetBinError(18,15.47775);
   hmcerror__23->SetBinError(19,17.90105);
   hmcerror__23->SetBinError(20,14.83793);
   hmcerror__23->SetBinError(21,15.73644);
   hmcerror__23->SetBinError(22,13.43583);
   hmcerror__23->SetBinError(23,20.34113);
   hmcerror__23->SetBinError(24,20.97268);
   hmcerror__23->SetBinError(25,24.60773);
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
   46,
   31,
   22,
   35,
   49,
   32,
   34,
   27,
   32,
   29,
   32,
   40,
   34,
   39,
   42,
   45,
   32,
   43,
   31,
   32,
   41,
   43,
   38,
   28,
   28};
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
   6.9153,
   5.7094,
   4.8417,
   6.0548,
   7.1318,
   5.7977,
   5.9703,
   5.3414,
   5.7977,
   5.5285,
   5.7977,
   6.4604,
   5.9703,
   6.3813,
   6.6155,
   6.8416,
   5.7977,
   6.6917,
   5.7094,
   5.7977,
   6.5384,
   6.6917,
   6.3013,
   5.4358,
   5.4358};
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
   6.7108,
   5.5017,
   4.6299,
   5.8483,
   6.9277,
   5.5904,
   5.7635,
   5.1322,
   5.5904,
   5.3201,
   5.5904,
   6.2549,
   5.7635,
   6.1757,
   6.4104,
   6.637,
   5.5904,
   6.4868,
   5.5017,
   5.5904,
   6.3331,
   6.4868,
   6.0955,
   5.2271,
   5.2271};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(13.28136);
   Graph_Graph3029->SetMaximum(59.80464);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_phi_all");
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
   0.3971767,
   0.6789792,
   0.554978,
   0.3695456,
   0.4207315,
   0.3524448,
   0.4339055,
   0.433421,
   0.5564785,
   0.4883407,
   0.6105008,
   0.4821861,
   0.4418403,
   0.4471577,
   0.5150586,
   0.4195458,
   0.3090299,
   0.4057915,
   0.4007689,
   0.4429537,
   0.3880375,
   0.3665059,
   0.4919152,
   0.5203336,
   0.6226447};
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
   0.3971767,
   0.6789792,
   0.554978,
   0.3695456,
   0.4207315,
   0.3524448,
   0.4339055,
   0.433421,
   0.5564785,
   0.4883407,
   0.6105008,
   0.4821861,
   0.4418403,
   0.4471577,
   0.5150586,
   0.4195458,
   0.3090299,
   0.4057915,
   0.4007689,
   0.4429537,
   0.3880375,
   0.3665059,
   0.4919152,
   0.5203336,
   0.6226447};
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
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   0.1852816,
   0.2042171,
   0.1914546,
   0.2153874,
   0.1849027,
   0.1609418,
   0.1697105,
   0.2075715,
   0.2289353,
   0.1939289,
   0.2199624,
   0.1976964,
   0.1791254,
   0.1949304,
   0.2153746,
   0.2148364,
   0.1695361,
   0.1874267,
   0.1706031,
   0.1853242,
   0.1816256,
   0.1906957,
   0.1858012,
   0.1913844,
   0.1911966};
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
   0.1852816,
   0.2042171,
   0.1914546,
   0.2153874,
   0.1849027,
   0.1609418,
   0.1697105,
   0.2075715,
   0.2289353,
   0.1939289,
   0.2199624,
   0.1976964,
   0.1791254,
   0.1949304,
   0.2153746,
   0.2148364,
   0.1695361,
   0.1874267,
   0.1706031,
   0.1853242,
   0.1816256,
   0.1906957,
   0.1858012,
   0.1913844,
   0.1911966};
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
   1.151513,
   0.8557539,
   0.5587618,
   0.93746,
   1.345506,
   0.8876221,
   0.9095839,
   0.8292294,
   1.029247,
   0.8158347,
   1.063046,
   0.9714356,
   1.017037,
   1.031491,
   1.044734,
   1.264701,
   0.8281954,
   1.127362,
   0.6940284,
   0.9552895,
   1.011,
   1.172964,
   0.9189645,
   0.6946818,
   0.7084787};
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
   0.17311,
   0.1576078,
   0.1229708,
   0.1621752,
   0.1958342,
   0.1608177,
   0.1597203,
   0.1640461,
   0.186477,
   0.155529,
   0.1926006,
   0.1568966,
   0.1785888,
   0.1687757,
   0.164558,
   0.1922796,
   0.1500509,
   0.1754412,
   0.1278221,
   0.1730776,
   0.1612274,
   0.1825378,
   0.1523861,
   0.1348626,
   0.137541};
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
   0.1679908,
   0.1518742,
   0.1175914,
   0.1566442,
   0.1902298,
   0.1550676,
   0.1541878,
   0.1576211,
   0.1798094,
   0.1496663,
   0.1857141,
   0.1519058,
   0.1724028,
   0.1633379,
   0.1594563,
   0.1865294,
   0.1446857,
   0.1700692,
   0.1231721,
   0.1668891,
   0.156165,
   0.1769485,
   0.1474092,
   0.1296847,
   0.1322603};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.3257966);
   Graph_Graph3032->SetMaximum(1.64573);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);

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

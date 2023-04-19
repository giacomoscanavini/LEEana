#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue Feb 21 20:01:39 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-7.960615,1.25641,880.2765);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(1,103.6818);
   hmc__4->SetBinContent(2,90.74577);
   hmc__4->SetBinContent(3,77.94272);
   hmc__4->SetBinContent(4,77.51245);
   hmc__4->SetBinContent(5,79.03354);
   hmc__4->SetBinContent(6,87.61234);
   hmc__4->SetBinContent(7,77.30131);
   hmc__4->SetBinContent(8,86.00443);
   hmc__4->SetBinContent(9,94.37923);
   hmc__4->SetBinContent(10,106.0492);
   hmc__4->SetBinContent(11,113.0638);
   hmc__4->SetBinContent(12,127.7267);
   hmc__4->SetBinContent(13,125.1857);
   hmc__4->SetBinContent(14,134.0162);
   hmc__4->SetBinContent(15,149.4186);
   hmc__4->SetBinContent(16,180.7559);
   hmc__4->SetBinContent(17,213.7697);
   hmc__4->SetBinContent(18,232.0711);
   hmc__4->SetBinContent(19,288.3471);
   hmc__4->SetBinContent(20,398.0308);
   hmc__4->SetBinError(1,38.62203);
   hmc__4->SetBinError(2,32.94426);
   hmc__4->SetBinError(3,32.17436);
   hmc__4->SetBinError(4,31.20328);
   hmc__4->SetBinError(5,29.16843);
   hmc__4->SetBinError(6,31.7666);
   hmc__4->SetBinError(7,32.57701);
   hmc__4->SetBinError(8,31.24623);
   hmc__4->SetBinError(9,35.72819);
   hmc__4->SetBinError(10,39.67426);
   hmc__4->SetBinError(11,43.53753);
   hmc__4->SetBinError(12,47.74804);
   hmc__4->SetBinError(13,48.72553);
   hmc__4->SetBinError(14,55.871);
   hmc__4->SetBinError(15,59.43759);
   hmc__4->SetBinError(16,78.55315);
   hmc__4->SetBinError(17,86.45602);
   hmc__4->SetBinError(18,91.37782);
   hmc__4->SetBinError(19,115.3967);
   hmc__4->SetBinError(20,130.4267);
   hmc__4->SetBinError(21,0.3895343);
   hmc__4->SetMinimum(-7.960615);
   hmc__4->SetMaximum(835.8646);
   hmc__4->SetEntries(2811.899);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,-1,1);
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(417.9323);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.901054);
   hbadmatch_stack_1->SetBinContent(2,1.752971);
   hbadmatch_stack_1->SetBinContent(3,1.292143);
   hbadmatch_stack_1->SetBinContent(4,2.002007);
   hbadmatch_stack_1->SetBinContent(5,1.660551);
   hbadmatch_stack_1->SetBinContent(6,2.052291);
   hbadmatch_stack_1->SetBinContent(7,0.416636);
   hbadmatch_stack_1->SetBinContent(8,2.945445);
   hbadmatch_stack_1->SetBinContent(9,1.360917);
   hbadmatch_stack_1->SetBinContent(10,2.755293);
   hbadmatch_stack_1->SetBinContent(11,3.19593);
   hbadmatch_stack_1->SetBinContent(12,6.062999);
   hbadmatch_stack_1->SetBinContent(13,3.63647);
   hbadmatch_stack_1->SetBinContent(14,2.98202);
   hbadmatch_stack_1->SetBinContent(15,1.529949);
   hbadmatch_stack_1->SetBinContent(16,3.037848);
   hbadmatch_stack_1->SetBinContent(17,5.121969);
   hbadmatch_stack_1->SetBinContent(18,4.189683);
   hbadmatch_stack_1->SetBinContent(19,4.098919);
   hbadmatch_stack_1->SetBinContent(20,4.916766);
   hbadmatch_stack_1->SetBinError(1,0.9207879);
   hbadmatch_stack_1->SetBinError(2,0.7030105);
   hbadmatch_stack_1->SetBinError(3,0.597089);
   hbadmatch_stack_1->SetBinError(4,0.6341526);
   hbadmatch_stack_1->SetBinError(5,0.650847);
   hbadmatch_stack_1->SetBinError(6,0.7073425);
   hbadmatch_stack_1->SetBinError(7,0.2791617);
   hbadmatch_stack_1->SetBinError(8,0.9721823);
   hbadmatch_stack_1->SetBinError(9,0.5811515);
   hbadmatch_stack_1->SetBinError(10,0.8282304);
   hbadmatch_stack_1->SetBinError(11,0.9924618);
   hbadmatch_stack_1->SetBinError(12,2.224916);
   hbadmatch_stack_1->SetBinError(13,1.358544);
   hbadmatch_stack_1->SetBinError(14,0.8881447);
   hbadmatch_stack_1->SetBinError(15,0.6579097);
   hbadmatch_stack_1->SetBinError(16,0.9195236);
   hbadmatch_stack_1->SetBinError(17,1.317318);
   hbadmatch_stack_1->SetBinError(18,1.185156);
   hbadmatch_stack_1->SetBinError(19,0.9597874);
   hbadmatch_stack_1->SetBinError(20,1.113556);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,4.270645);
   hext_stack_2->SetBinContent(2,4.303776);
   hext_stack_2->SetBinContent(3,3.412785);
   hext_stack_2->SetBinContent(4,3.889996);
   hext_stack_2->SetBinContent(5,6.132056);
   hext_stack_2->SetBinContent(6,13.05136);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,7.436825);
   hext_stack_2->SetBinContent(9,11.00242);
   hext_stack_2->SetBinContent(10,14.74119);
   hext_stack_2->SetBinContent(11,5.523572);
   hext_stack_2->SetBinContent(12,11.61532);
   hext_stack_2->SetBinContent(13,9.547613);
   hext_stack_2->SetBinContent(14,5.758588);
   hext_stack_2->SetBinContent(15,11.92812);
   hext_stack_2->SetBinContent(16,15.5947);
   hext_stack_2->SetBinContent(17,12.4357);
   hext_stack_2->SetBinContent(18,11.35);
   hext_stack_2->SetBinContent(19,12.11848);
   hext_stack_2->SetBinContent(20,19.45156);
   hext_stack_2->SetBinError(1,1.4943);
   hext_stack_2->SetBinError(2,1.250299);
   hext_stack_2->SetBinError(3,1.14352);
   hext_stack_2->SetBinError(4,1.264566);
   hext_stack_2->SetBinError(5,1.772165);
   hext_stack_2->SetBinError(6,2.660877);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,1.833113);
   hext_stack_2->SetBinError(9,2.203224);
   hext_stack_2->SetBinError(10,2.840585);
   hext_stack_2->SetBinError(11,1.434997);
   hext_stack_2->SetBinError(12,2.463873);
   hext_stack_2->SetBinError(13,2.027778);
   hext_stack_2->SetBinError(14,1.518408);
   hext_stack_2->SetBinError(15,2.498396);
   hext_stack_2->SetBinError(16,2.743845);
   hext_stack_2->SetBinError(17,2.490003);
   hext_stack_2->SetBinError(18,2.197105);
   hext_stack_2->SetBinError(19,2.42769);
   hext_stack_2->SetBinError(20,3.130095);
   hext_stack_2->SetEntries(428);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.7249213);
   hdirt_stack_3->SetBinContent(3,0.4142144);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.8385887);
   hdirt_stack_3->SetBinContent(7,0.6143302);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(12,2.26337);
   hdirt_stack_3->SetBinContent(13,0.1651799);
   hdirt_stack_3->SetBinContent(14,0.5833645);
   hdirt_stack_3->SetBinContent(15,0.89527);
   hdirt_stack_3->SetBinContent(16,0.5570828);
   hdirt_stack_3->SetBinContent(17,0.6983124);
   hdirt_stack_3->SetBinContent(18,1.056792);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(20,1.242027);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4354434);
   hdirt_stack_3->SetBinError(3,0.2391468);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.5064279);
   hdirt_stack_3->SetBinError(7,0.39051);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(12,1.112637);
   hdirt_stack_3->SetBinError(13,0.1651799);
   hdirt_stack_3->SetBinError(14,0.45339);
   hdirt_stack_3->SetBinError(15,0.5259814);
   hdirt_stack_3->SetBinError(16,0.4028472);
   hdirt_stack_3->SetBinError(17,0.4046009);
   hdirt_stack_3->SetBinError(18,0.4811149);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(20,0.4762468);
   hdirt_stack_3->SetEntries(50);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,6.805254);
   houtFV_stack_4->SetBinContent(2,2.445722);
   houtFV_stack_4->SetBinContent(3,2.195754);
   houtFV_stack_4->SetBinContent(4,3.217977);
   houtFV_stack_4->SetBinContent(5,2.782519);
   houtFV_stack_4->SetBinContent(6,2.458241);
   houtFV_stack_4->SetBinContent(7,1.513708);
   houtFV_stack_4->SetBinContent(8,2.682154);
   houtFV_stack_4->SetBinContent(9,3.412543);
   houtFV_stack_4->SetBinContent(10,2.694);
   houtFV_stack_4->SetBinContent(11,3.462389);
   houtFV_stack_4->SetBinContent(12,4.086949);
   houtFV_stack_4->SetBinContent(13,4.293041);
   houtFV_stack_4->SetBinContent(14,5.158592);
   houtFV_stack_4->SetBinContent(15,4.694729);
   houtFV_stack_4->SetBinContent(16,7.104881);
   houtFV_stack_4->SetBinContent(17,9.725463);
   houtFV_stack_4->SetBinContent(18,7.753817);
   houtFV_stack_4->SetBinContent(19,9.490892);
   houtFV_stack_4->SetBinContent(20,9.092998);
   houtFV_stack_4->SetBinError(1,1.358648);
   houtFV_stack_4->SetBinError(2,0.7600838);
   houtFV_stack_4->SetBinError(3,0.7598403);
   houtFV_stack_4->SetBinError(4,0.9618638);
   houtFV_stack_4->SetBinError(5,0.8319397);
   houtFV_stack_4->SetBinError(6,0.8025556);
   houtFV_stack_4->SetBinError(7,0.5875827);
   houtFV_stack_4->SetBinError(8,0.852436);
   houtFV_stack_4->SetBinError(9,0.9151841);
   houtFV_stack_4->SetBinError(10,0.7598915);
   houtFV_stack_4->SetBinError(11,0.9289615);
   houtFV_stack_4->SetBinError(12,0.9894147);
   houtFV_stack_4->SetBinError(13,1.047435);
   houtFV_stack_4->SetBinError(14,1.205838);
   houtFV_stack_4->SetBinError(15,1.056768);
   houtFV_stack_4->SetBinError(16,1.349917);
   houtFV_stack_4->SetBinError(17,1.552704);
   houtFV_stack_4->SetBinError(18,1.349231);
   houtFV_stack_4->SetBinError(19,1.467949);
   houtFV_stack_4->SetBinError(20,1.508019);
   houtFV_stack_4->SetEntries(411);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5025361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7519718);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.368515);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2820092);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2190947);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.446258);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.059376);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5294358);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.06004);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.185754);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.30093);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.147644);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.441094);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3934993);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.168174);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3759641);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3245714);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5116103);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4668604);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5021399);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,40.93993);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.0712);
   hNCpi0inFVres_stack_7->SetBinContent(3,35.34946);
   hNCpi0inFVres_stack_7->SetBinContent(4,37.4408);
   hNCpi0inFVres_stack_7->SetBinContent(5,35.54242);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.93583);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.00411);
   hNCpi0inFVres_stack_7->SetBinContent(8,38.04296);
   hNCpi0inFVres_stack_7->SetBinContent(9,43.20184);
   hNCpi0inFVres_stack_7->SetBinContent(10,47.84805);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.66116);
   hNCpi0inFVres_stack_7->SetBinContent(12,58.00967);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.43512);
   hNCpi0inFVres_stack_7->SetBinContent(14,68.56487);
   hNCpi0inFVres_stack_7->SetBinContent(15,71.33092);
   hNCpi0inFVres_stack_7->SetBinContent(16,90.38704);
   hNCpi0inFVres_stack_7->SetBinContent(17,98.38279);
   hNCpi0inFVres_stack_7->SetBinContent(18,117.4495);
   hNCpi0inFVres_stack_7->SetBinContent(19,137.6067);
   hNCpi0inFVres_stack_7->SetBinContent(20,163.1169);
   hNCpi0inFVres_stack_7->SetBinError(1,2.085983);
   hNCpi0inFVres_stack_7->SetBinError(2,2.072771);
   hNCpi0inFVres_stack_7->SetBinError(3,1.985889);
   hNCpi0inFVres_stack_7->SetBinError(4,2.050953);
   hNCpi0inFVres_stack_7->SetBinError(5,1.944129);
   hNCpi0inFVres_stack_7->SetBinError(6,1.955374);
   hNCpi0inFVres_stack_7->SetBinError(7,1.944548);
   hNCpi0inFVres_stack_7->SetBinError(8,1.971513);
   hNCpi0inFVres_stack_7->SetBinError(9,2.159387);
   hNCpi0inFVres_stack_7->SetBinError(10,2.306008);
   hNCpi0inFVres_stack_7->SetBinError(11,2.465255);
   hNCpi0inFVres_stack_7->SetBinError(12,2.560903);
   hNCpi0inFVres_stack_7->SetBinError(13,2.476661);
   hNCpi0inFVres_stack_7->SetBinError(14,2.744478);
   hNCpi0inFVres_stack_7->SetBinError(15,2.676121);
   hNCpi0inFVres_stack_7->SetBinError(16,3.159044);
   hNCpi0inFVres_stack_7->SetBinError(17,3.268123);
   hNCpi0inFVres_stack_7->SetBinError(18,3.575697);
   hNCpi0inFVres_stack_7->SetBinError(19,3.869198);
   hNCpi0inFVres_stack_7->SetBinError(20,4.211436);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.186526);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.133199);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.6384);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.122493);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.102475);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.048676);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.340045);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.737134);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.428234);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.806136);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.371354);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.00326);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.453988);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.27548);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.21078);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.0673);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.4154);
   hNCpi0inFVdis_stack_8->SetBinContent(18,21.71326);
   hNCpi0inFVdis_stack_8->SetBinContent(19,29.74202);
   hNCpi0inFVdis_stack_8->SetBinContent(20,47.00072);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9415732);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7224935);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8319156);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8256143);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7364988);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8030715);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7291079);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9287403);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8659941);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8730818);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8080239);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9450797);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.017212);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.247269);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.104411);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.195214);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.341753);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.528881);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.778463);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.202971);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1155977);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,13.80547);
   hCCpi0inFV_stack_10->SetBinContent(2,16.05739);
   hCCpi0inFV_stack_10->SetBinContent(3,12.71419);
   hCCpi0inFV_stack_10->SetBinContent(4,10.29829);
   hCCpi0inFV_stack_10->SetBinContent(5,10.32932);
   hCCpi0inFV_stack_10->SetBinContent(6,11.08358);
   hCCpi0inFV_stack_10->SetBinContent(7,11.48655);
   hCCpi0inFV_stack_10->SetBinContent(8,10.45986);
   hCCpi0inFV_stack_10->SetBinContent(9,9.340882);
   hCCpi0inFV_stack_10->SetBinContent(10,11.76064);
   hCCpi0inFV_stack_10->SetBinContent(11,16.15337);
   hCCpi0inFV_stack_10->SetBinContent(12,13.88343);
   hCCpi0inFV_stack_10->SetBinContent(13,15.97395);
   hCCpi0inFV_stack_10->SetBinContent(14,17.02822);
   hCCpi0inFV_stack_10->SetBinContent(15,17.01596);
   hCCpi0inFV_stack_10->SetBinContent(16,18.99767);
   hCCpi0inFV_stack_10->SetBinContent(17,32.20028);
   hCCpi0inFV_stack_10->SetBinContent(18,31.86096);
   hCCpi0inFV_stack_10->SetBinContent(19,39.70593);
   hCCpi0inFV_stack_10->SetBinContent(20,63.62856);
   hCCpi0inFV_stack_10->SetBinError(1,1.848239);
   hCCpi0inFV_stack_10->SetBinError(2,2.06775);
   hCCpi0inFV_stack_10->SetBinError(3,1.800754);
   hCCpi0inFV_stack_10->SetBinError(4,1.586592);
   hCCpi0inFV_stack_10->SetBinError(5,1.506875);
   hCCpi0inFV_stack_10->SetBinError(6,1.676148);
   hCCpi0inFV_stack_10->SetBinError(7,1.640796);
   hCCpi0inFV_stack_10->SetBinError(8,1.59406);
   hCCpi0inFV_stack_10->SetBinError(9,1.461651);
   hCCpi0inFV_stack_10->SetBinError(10,1.703521);
   hCCpi0inFV_stack_10->SetBinError(11,2.014202);
   hCCpi0inFV_stack_10->SetBinError(12,1.894561);
   hCCpi0inFV_stack_10->SetBinError(13,2.040316);
   hCCpi0inFV_stack_10->SetBinError(14,2.127234);
   hCCpi0inFV_stack_10->SetBinError(15,2.030219);
   hCCpi0inFV_stack_10->SetBinError(16,2.216607);
   hCCpi0inFV_stack_10->SetBinError(17,2.882818);
   hCCpi0inFV_stack_10->SetBinError(18,2.781768);
   hCCpi0inFV_stack_10->SetBinError(19,3.174616);
   hCCpi0inFV_stack_10->SetBinError(20,4.061438);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,13.13588);
   hNCinFV_stack_11->SetBinContent(2,8.409262);
   hNCinFV_stack_11->SetBinContent(3,7.730597);
   hNCinFV_stack_11->SetBinContent(4,5.625052);
   hNCinFV_stack_11->SetBinContent(5,8.256264);
   hNCinFV_stack_11->SetBinContent(6,5.966921);
   hNCinFV_stack_11->SetBinContent(7,6.206746);
   hNCinFV_stack_11->SetBinContent(8,3.56938);
   hNCinFV_stack_11->SetBinContent(9,6.574345);
   hNCinFV_stack_11->SetBinContent(10,7.230659);
   hNCinFV_stack_11->SetBinContent(11,5.32014);
   hNCinFV_stack_11->SetBinContent(12,7.721062);
   hNCinFV_stack_11->SetBinContent(13,7.435828);
   hNCinFV_stack_11->SetBinContent(14,6.892172);
   hNCinFV_stack_11->SetBinContent(15,11.37727);
   hNCinFV_stack_11->SetBinContent(16,13.15217);
   hNCinFV_stack_11->SetBinContent(17,15.68472);
   hNCinFV_stack_11->SetBinContent(18,17.68883);
   hNCinFV_stack_11->SetBinContent(19,33.12419);
   hNCinFV_stack_11->SetBinContent(20,49.57055);
   hNCinFV_stack_11->SetBinError(1,1.819287);
   hNCinFV_stack_11->SetBinError(2,1.42876);
   hNCinFV_stack_11->SetBinError(3,1.345576);
   hNCinFV_stack_11->SetBinError(4,1.161279);
   hNCinFV_stack_11->SetBinError(5,1.469348);
   hNCinFV_stack_11->SetBinError(6,1.210352);
   hNCinFV_stack_11->SetBinError(7,1.208863);
   hNCinFV_stack_11->SetBinError(8,0.9202779);
   hNCinFV_stack_11->SetBinError(9,1.387588);
   hNCinFV_stack_11->SetBinError(10,1.345301);
   hNCinFV_stack_11->SetBinError(11,1.177227);
   hNCinFV_stack_11->SetBinError(12,1.416061);
   hNCinFV_stack_11->SetBinError(13,1.360825);
   hNCinFV_stack_11->SetBinError(14,1.301836);
   hNCinFV_stack_11->SetBinError(15,1.722256);
   hNCinFV_stack_11->SetBinError(16,1.765729);
   hNCinFV_stack_11->SetBinError(17,1.951808);
   hNCinFV_stack_11->SetBinError(18,2.085713);
   hNCinFV_stack_11->SetBinError(19,2.891022);
   hNCinFV_stack_11->SetBinError(20,3.59272);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,12.13217);
   hnumuCCinFV_stack_12->SetBinContent(2,9.959682);
   hnumuCCinFV_stack_12->SetBinContent(3,7.599094);
   hnumuCCinFV_stack_12->SetBinContent(4,7.155645);
   hnumuCCinFV_stack_12->SetBinContent(5,6.857692);
   hnumuCCinFV_stack_12->SetBinContent(6,7.15547);
   hnumuCCinFV_stack_12->SetBinContent(7,7.559082);
   hnumuCCinFV_stack_12->SetBinContent(8,12.68409);
   hnumuCCinFV_stack_12->SetBinContent(9,11.33359);
   hnumuCCinFV_stack_12->SetBinContent(10,11.63151);
   hnumuCCinFV_stack_12->SetBinContent(11,17.97154);
   hnumuCCinFV_stack_12->SetBinContent(12,14.06341);
   hnumuCCinFV_stack_12->SetBinContent(13,15.82589);
   hnumuCCinFV_stack_12->SetBinContent(14,12.34896);
   hnumuCCinFV_stack_12->SetBinContent(15,16.95169);
   hnumuCCinFV_stack_12->SetBinContent(16,16.15621);
   hnumuCCinFV_stack_12->SetBinContent(17,20.87774);
   hnumuCCinFV_stack_12->SetBinContent(18,15.01814);
   hnumuCCinFV_stack_12->SetBinContent(19,17.99846);
   hnumuCCinFV_stack_12->SetBinContent(20,29.10654);
   hnumuCCinFV_stack_12->SetBinError(1,1.826282);
   hnumuCCinFV_stack_12->SetBinError(2,1.697221);
   hnumuCCinFV_stack_12->SetBinError(3,1.787909);
   hnumuCCinFV_stack_12->SetBinError(4,1.394998);
   hnumuCCinFV_stack_12->SetBinError(5,1.753205);
   hnumuCCinFV_stack_12->SetBinError(6,1.377774);
   hnumuCCinFV_stack_12->SetBinError(7,1.460631);
   hnumuCCinFV_stack_12->SetBinError(8,1.993886);
   hnumuCCinFV_stack_12->SetBinError(9,2.036246);
   hnumuCCinFV_stack_12->SetBinError(10,1.863765);
   hnumuCCinFV_stack_12->SetBinError(11,2.510945);
   hnumuCCinFV_stack_12->SetBinError(12,2.388601);
   hnumuCCinFV_stack_12->SetBinError(13,2.421963);
   hnumuCCinFV_stack_12->SetBinError(14,1.835875);
   hnumuCCinFV_stack_12->SetBinError(15,2.541611);
   hnumuCCinFV_stack_12->SetBinError(16,3.153807);
   hnumuCCinFV_stack_12->SetBinError(17,2.834962);
   hnumuCCinFV_stack_12->SetBinError(18,2.291474);
   hnumuCCinFV_stack_12->SetBinError(19,2.480995);
   hnumuCCinFV_stack_12->SetBinError(20,2.666823);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.441907);
   hnueCCinFV_stack_13->SetBinContent(3,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(4,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(5,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(6,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(14,1.005302);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.9857838);
   hnueCCinFV_stack_13->SetBinContent(18,1.130776);
   hnueCCinFV_stack_13->SetBinContent(19,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(20,5.857757);
   hnueCCinFV_stack_13->SetBinError(2,0.3143499);
   hnueCCinFV_stack_13->SetBinError(3,0.2476759);
   hnueCCinFV_stack_13->SetBinError(4,0.2486649);
   hnueCCinFV_stack_13->SetBinError(5,0.3401778);
   hnueCCinFV_stack_13->SetBinError(6,0.4132436);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.3174228);
   hnueCCinFV_stack_13->SetBinError(14,0.5917492);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.5068534);
   hnueCCinFV_stack_13->SetBinError(18,0.5783639);
   hnueCCinFV_stack_13->SetBinError(19,0.48078);
   hnueCCinFV_stack_13->SetBinError(20,1.246638);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(1,103.6818);
   hmcerror__5->SetBinContent(2,90.74577);
   hmcerror__5->SetBinContent(3,77.94272);
   hmcerror__5->SetBinContent(4,77.51245);
   hmcerror__5->SetBinContent(5,79.03354);
   hmcerror__5->SetBinContent(6,87.61234);
   hmcerror__5->SetBinContent(7,77.30131);
   hmcerror__5->SetBinContent(8,86.00443);
   hmcerror__5->SetBinContent(9,94.37923);
   hmcerror__5->SetBinContent(10,106.0492);
   hmcerror__5->SetBinContent(11,113.0638);
   hmcerror__5->SetBinContent(12,127.7267);
   hmcerror__5->SetBinContent(13,125.1857);
   hmcerror__5->SetBinContent(14,134.0162);
   hmcerror__5->SetBinContent(15,149.4186);
   hmcerror__5->SetBinContent(16,180.7559);
   hmcerror__5->SetBinContent(17,213.7697);
   hmcerror__5->SetBinContent(18,232.0711);
   hmcerror__5->SetBinContent(19,288.3471);
   hmcerror__5->SetBinContent(20,398.0308);
   hmcerror__5->SetBinError(1,38.62203);
   hmcerror__5->SetBinError(2,32.94426);
   hmcerror__5->SetBinError(3,32.17436);
   hmcerror__5->SetBinError(4,31.20328);
   hmcerror__5->SetBinError(5,29.16843);
   hmcerror__5->SetBinError(6,31.7666);
   hmcerror__5->SetBinError(7,32.57701);
   hmcerror__5->SetBinError(8,31.24623);
   hmcerror__5->SetBinError(9,35.72819);
   hmcerror__5->SetBinError(10,39.67426);
   hmcerror__5->SetBinError(11,43.53753);
   hmcerror__5->SetBinError(12,47.74804);
   hmcerror__5->SetBinError(13,48.72553);
   hmcerror__5->SetBinError(14,55.871);
   hmcerror__5->SetBinError(15,59.43759);
   hmcerror__5->SetBinError(16,78.55315);
   hmcerror__5->SetBinError(17,86.45602);
   hmcerror__5->SetBinError(18,91.37782);
   hmcerror__5->SetBinError(19,115.3967);
   hmcerror__5->SetBinError(20,130.4267);
   hmcerror__5->SetBinError(21,0.3895343);
   hmcerror__5->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   71,
   51,
   71,
   52,
   76,
   63,
   65,
   79,
   63,
   68,
   75,
   90,
   76,
   102,
   100,
   112,
   145,
   184,
   228,
   265};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   8.5518,
   7.2725,
   8.5518,
   7.3419,
   8.8425,
   8.0648,
   8.1893,
   9.0124,
   8.0648,
   8.3726,
   8.7852,
   9.6093,
   8.8425,
   10.0995,
   10.1212,
   10.58301,
   12.04159,
   13.56466,
   15.09967,
   16.27882};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   8.3496,
   7.0686,
   8.3496,
   7.1381,
   8.6406,
   7.862,
   7.9866,
   8.8105,
   7.862,
   8.1701,
   8.5831,
   9.4079,
   8.6406,
   10.0995,
   9.92,
   10.58301,
   12.04159,
   13.56466,
   15.09967,
   16.27882};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(19.97237);
   Graph_Graph3005->SetMaximum(305.034);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

   ci = 1450;
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

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

   ci = 1454;
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

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.3725054,
   0.3630391,
   0.4127949,
   0.4025583,
   0.3690639,
   0.3625813,
   0.421429,
   0.3633095,
   0.3785599,
   0.3741117,
   0.3850703,
   0.3738296,
   0.3892259,
   0.4168973,
   0.3977924,
   0.4345815,
   0.4044354,
   0.3937493,
   0.4002008,
   0.32768};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.3725054,
   0.3630391,
   0.4127949,
   0.4025583,
   0.3690639,
   0.3625813,
   0.421429,
   0.3633095,
   0.3785599,
   0.3741117,
   0.3850703,
   0.3738296,
   0.3892259,
   0.4168973,
   0.3977924,
   0.4345815,
   0.4044354,
   0.3937493,
   0.4002008,
   0.32768};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.2994923,
   0.310778,
   0.3280146,
   0.3474703,
   0.3264312,
   0.2981416,
   0.3331704,
   0.3217237,
   0.331656,
   0.328438,
   0.3462223,
   0.3381072,
   0.3596036,
   0.3875406,
   0.3770845,
   0.3953308,
   0.3637165,
   0.3726097,
   0.3427193,
   0.3061104};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.2994923,
   0.310778,
   0.3280146,
   0.3474703,
   0.3264312,
   0.2981416,
   0.3331704,
   0.3217237,
   0.331656,
   0.328438,
   0.3462223,
   0.3381072,
   0.3596036,
   0.3875406,
   0.3770845,
   0.3953308,
   0.3637165,
   0.3726097,
   0.3427193,
   0.3061104};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   0.6847876,
   0.5620096,
   0.9109254,
   0.67086,
   0.9616171,
   0.7190768,
   0.8408655,
   0.9185574,
   0.6675197,
   0.6412117,
   0.6633421,
   0.7046293,
   0.6070979,
   0.7611018,
   0.6692606,
   0.6196203,
   0.6783001,
   0.7928606,
   0.7907137,
   0.6657777};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.08248122,
   0.08014147,
   0.109719,
   0.09471898,
   0.1118829,
   0.09205096,
   0.10594,
   0.10479,
   0.085451,
   0.07895013,
   0.07770124,
   0.07523327,
   0.07063504,
   0.07536031,
   0.0677372,
   0.05854862,
   0.05632976,
   0.05845046,
   0.05236629,
   0.0408984};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.08053102,
   0.07789454,
   0.1071248,
   0.09208972,
   0.1093283,
   0.08973622,
   0.1033178,
   0.1024424,
   0.08330222,
   0.07704064,
   0.07591376,
   0.07365647,
   0.06902224,
   0.07536031,
   0.06639065,
   0.05854862,
   0.05632976,
   0.05845046,
   0.05236629,
   0.0408984};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.4229605);
   Graph_Graph3008->SetMaximum(1.129853);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

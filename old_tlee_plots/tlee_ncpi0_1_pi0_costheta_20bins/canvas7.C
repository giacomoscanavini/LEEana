#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Jan  9 21:29:49 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-7.314808,1.25641,808.8637);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__19->SetBinContent(1,90.4133);
   hmc__19->SetBinContent(2,75.46552);
   hmc__19->SetBinContent(3,64.32698);
   hmc__19->SetBinContent(4,62.19947);
   hmc__19->SetBinContent(5,65.33195);
   hmc__19->SetBinContent(6,72.40562);
   hmc__19->SetBinContent(7,61.95348);
   hmc__19->SetBinContent(8,70.20457);
   hmc__19->SetBinContent(9,75.92193);
   hmc__19->SetBinContent(10,85.72102);
   hmc__19->SetBinContent(11,92.12894);
   hmc__19->SetBinContent(12,104.6704);
   hmc__19->SetBinContent(13,101.6842);
   hmc__19->SetBinContent(14,108.2674);
   hmc__19->SetBinContent(15,122.683);
   hmc__19->SetBinContent(16,147.6771);
   hmc__19->SetBinContent(17,183.8493);
   hmc__19->SetBinContent(18,192.3715);
   hmc__19->SetBinContent(19,246.0403);
   hmc__19->SetBinContent(20,365.7404);
   hmc__19->SetBinError(1,35.79607);
   hmc__19->SetBinError(2,30.04363);
   hmc__19->SetBinError(3,29.26532);
   hmc__19->SetBinError(4,28.30588);
   hmc__19->SetBinError(5,26.17726);
   hmc__19->SetBinError(6,30.4367);
   hmc__19->SetBinError(7,27.76602);
   hmc__19->SetBinError(8,29.69973);
   hmc__19->SetBinError(9,32.21404);
   hmc__19->SetBinError(10,35.89353);
   hmc__19->SetBinError(11,41.53917);
   hmc__19->SetBinError(12,43.24728);
   hmc__19->SetBinError(13,43.04173);
   hmc__19->SetBinError(14,48.94404);
   hmc__19->SetBinError(15,50.4744);
   hmc__19->SetBinError(16,67.04365);
   hmc__19->SetBinError(17,73.57896);
   hmc__19->SetBinError(18,74.09635);
   hmc__19->SetBinError(19,96.90413);
   hmc__19->SetBinError(20,104.226);
   hmc__19->SetBinError(21,0.3895343);
   hmc__19->SetMinimum(-7.314808);
   hmc__19->SetMaximum(768.0548);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,-1,1);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(384.0274);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.601571);
   hbadmatch_stack_1->SetBinContent(2,1.456101);
   hbadmatch_stack_1->SetBinContent(3,1.176543);
   hbadmatch_stack_1->SetBinContent(4,1.958582);
   hbadmatch_stack_1->SetBinContent(5,1.268611);
   hbadmatch_stack_1->SetBinContent(6,2.110828);
   hbadmatch_stack_1->SetBinContent(7,0.3305427);
   hbadmatch_stack_1->SetBinContent(8,2.91023);
   hbadmatch_stack_1->SetBinContent(9,1.323523);
   hbadmatch_stack_1->SetBinContent(10,2.321343);
   hbadmatch_stack_1->SetBinContent(11,3.214425);
   hbadmatch_stack_1->SetBinContent(12,6.198365);
   hbadmatch_stack_1->SetBinContent(13,3.349061);
   hbadmatch_stack_1->SetBinContent(14,3.372875);
   hbadmatch_stack_1->SetBinContent(15,1.160401);
   hbadmatch_stack_1->SetBinContent(16,2.667006);
   hbadmatch_stack_1->SetBinContent(17,4.937407);
   hbadmatch_stack_1->SetBinContent(18,4.144476);
   hbadmatch_stack_1->SetBinContent(19,3.644344);
   hbadmatch_stack_1->SetBinContent(20,4.683991);
   hbadmatch_stack_1->SetBinError(1,0.8739797);
   hbadmatch_stack_1->SetBinError(2,0.6051824);
   hbadmatch_stack_1->SetBinError(3,0.539657);
   hbadmatch_stack_1->SetBinError(4,0.6338044);
   hbadmatch_stack_1->SetBinError(5,0.5486714);
   hbadmatch_stack_1->SetBinError(6,0.7258031);
   hbadmatch_stack_1->SetBinError(7,0.2268735);
   hbadmatch_stack_1->SetBinError(8,0.9875017);
   hbadmatch_stack_1->SetBinError(9,0.6313734);
   hbadmatch_stack_1->SetBinError(10,0.7231239);
   hbadmatch_stack_1->SetBinError(11,1.049719);
   hbadmatch_stack_1->SetBinError(12,2.240945);
   hbadmatch_stack_1->SetBinError(13,1.332146);
   hbadmatch_stack_1->SetBinError(14,1.11794);
   hbadmatch_stack_1->SetBinError(15,0.5389783);
   hbadmatch_stack_1->SetBinError(16,0.8336866);
   hbadmatch_stack_1->SetBinError(17,1.283602);
   hbadmatch_stack_1->SetBinError(18,1.171056);
   hbadmatch_stack_1->SetBinError(19,0.8646767);
   hbadmatch_stack_1->SetBinError(20,1.142913);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
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

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
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

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,6.701618);
   houtFV_stack_4->SetBinContent(2,1.939352);
   houtFV_stack_4->SetBinContent(3,1.973864);
   houtFV_stack_4->SetBinContent(4,2.815109);
   houtFV_stack_4->SetBinContent(5,2.611784);
   houtFV_stack_4->SetBinContent(6,2.194707);
   houtFV_stack_4->SetBinContent(7,1.324915);
   houtFV_stack_4->SetBinContent(8,2.615306);
   houtFV_stack_4->SetBinContent(9,2.937535);
   houtFV_stack_4->SetBinContent(10,2.13543);
   houtFV_stack_4->SetBinContent(11,3.25959);
   houtFV_stack_4->SetBinContent(12,3.690278);
   houtFV_stack_4->SetBinContent(13,3.962285);
   houtFV_stack_4->SetBinContent(14,4.749396);
   houtFV_stack_4->SetBinContent(15,4.640244);
   houtFV_stack_4->SetBinContent(16,5.898974);
   houtFV_stack_4->SetBinContent(17,8.840576);
   houtFV_stack_4->SetBinContent(18,7.0292);
   houtFV_stack_4->SetBinContent(19,9.062529);
   houtFV_stack_4->SetBinContent(20,8.439648);
   houtFV_stack_4->SetBinError(1,1.358942);
   houtFV_stack_4->SetBinError(2,0.623982);
   houtFV_stack_4->SetBinError(3,0.7121476);
   houtFV_stack_4->SetBinError(4,0.8589318);
   houtFV_stack_4->SetBinError(5,0.8004354);
   houtFV_stack_4->SetBinError(6,0.736328);
   houtFV_stack_4->SetBinError(7,0.5389453);
   houtFV_stack_4->SetBinError(8,0.839533);
   houtFV_stack_4->SetBinError(9,0.8121154);
   houtFV_stack_4->SetBinError(10,0.645099);
   houtFV_stack_4->SetBinError(11,0.882843);
   houtFV_stack_4->SetBinError(12,0.9200849);
   houtFV_stack_4->SetBinError(13,0.982581);
   houtFV_stack_4->SetBinError(14,1.133675);
   houtFV_stack_4->SetBinError(15,1.065367);
   houtFV_stack_4->SetBinError(16,1.161783);
   houtFV_stack_4->SetBinError(17,1.457516);
   houtFV_stack_4->SetBinError(18,1.232652);
   houtFV_stack_4->SetBinError(19,1.446604);
   houtFV_stack_4->SetBinError(20,1.4466);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1075194);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2825219);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2526288);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2474454);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.860045);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.465613);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.100147);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1997732);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.146251);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1187243);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2745846);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4979183);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7794751);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3520403);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.155859);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1345025);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3986421);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2530937);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2384573);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2339316);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4554627);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2064227);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2577296);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2982927);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2522993);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1301444);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6562901);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5619643);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8298026);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.578708);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.539988);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.631993);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3011966);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1658606);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05585531);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05540298);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1511871);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1364914);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1307984);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1195219);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2190225);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1171967);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1455233);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1127636);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.140955);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05642082);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.227368);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2142454);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2194105);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3555008);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4082387);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3640168);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,30.25118);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.84782);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.91205);
   hNCpi0inFVres_stack_7->SetBinContent(4,24.94012);
   hNCpi0inFVres_stack_7->SetBinContent(5,23.79195);
   hNCpi0inFVres_stack_7->SetBinContent(6,25.38936);
   hNCpi0inFVres_stack_7->SetBinContent(7,24.84725);
   hNCpi0inFVres_stack_7->SetBinContent(8,24.88835);
   hNCpi0inFVres_stack_7->SetBinContent(9,27.3449);
   hNCpi0inFVres_stack_7->SetBinContent(10,31.31523);
   hNCpi0inFVres_stack_7->SetBinContent(11,35.87516);
   hNCpi0inFVres_stack_7->SetBinContent(12,38.443);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.56053);
   hNCpi0inFVres_stack_7->SetBinContent(14,45.95756);
   hNCpi0inFVres_stack_7->SetBinContent(15,48.12581);
   hNCpi0inFVres_stack_7->SetBinContent(16,61.85233);
   hNCpi0inFVres_stack_7->SetBinContent(17,71.85384);
   hNCpi0inFVres_stack_7->SetBinContent(18,83.76098);
   hNCpi0inFVres_stack_7->SetBinContent(19,98.39543);
   hNCpi0inFVres_stack_7->SetBinContent(20,126.7894);
   hNCpi0inFVres_stack_7->SetBinError(1,1.789975);
   hNCpi0inFVres_stack_7->SetBinError(2,1.519554);
   hNCpi0inFVres_stack_7->SetBinError(3,1.496337);
   hNCpi0inFVres_stack_7->SetBinError(4,1.479184);
   hNCpi0inFVres_stack_7->SetBinError(5,1.449634);
   hNCpi0inFVres_stack_7->SetBinError(6,1.506275);
   hNCpi0inFVres_stack_7->SetBinError(7,1.4291);
   hNCpi0inFVres_stack_7->SetBinError(8,1.429599);
   hNCpi0inFVres_stack_7->SetBinError(9,1.468107);
   hNCpi0inFVres_stack_7->SetBinError(10,1.708201);
   hNCpi0inFVres_stack_7->SetBinError(11,1.782293);
   hNCpi0inFVres_stack_7->SetBinError(12,1.839228);
   hNCpi0inFVres_stack_7->SetBinError(13,1.866527);
   hNCpi0inFVres_stack_7->SetBinError(14,2.001339);
   hNCpi0inFVres_stack_7->SetBinError(15,1.964709);
   hNCpi0inFVres_stack_7->SetBinError(16,2.312954);
   hNCpi0inFVres_stack_7->SetBinError(17,2.664059);
   hNCpi0inFVres_stack_7->SetBinError(18,2.833665);
   hNCpi0inFVres_stack_7->SetBinError(19,3.040536);
   hNCpi0inFVres_stack_7->SetBinError(20,3.771364);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.591083);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.567696);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.22791);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.065091);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.511121);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.380733);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.022944);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.984737);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.745572);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.831446);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.392593);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.8107);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.926079);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.81334);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.259552);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.09179);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.88046);
   hNCpi0inFVdis_stack_8->SetBinContent(18,17.23557);
   hNCpi0inFVdis_stack_8->SetBinContent(19,26.74156);
   hNCpi0inFVdis_stack_8->SetBinContent(20,46.53757);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.824694);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5654578);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7271283);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6244626);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6191657);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6109369);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6336104);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7615487);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7500893);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6287831);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6571934);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8546896);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6279636);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.051089);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8883978);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.225054);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.129342);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.314811);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.948394);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.506584);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.170903);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.08439476);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
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

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,12.83919);
   hNCinFV_stack_11->SetBinContent(2,8.788864);
   hNCinFV_stack_11->SetBinContent(3,7.385273);
   hNCinFV_stack_11->SetBinContent(4,5.459653);
   hNCinFV_stack_11->SetBinContent(5,8.651413);
   hNCinFV_stack_11->SetBinContent(6,5.33259);
   hNCinFV_stack_11->SetBinContent(7,5.772295);
   hNCinFV_stack_11->SetBinContent(8,2.930194);
   hNCinFV_stack_11->SetBinContent(9,6.243018);
   hNCinFV_stack_11->SetBinContent(10,6.558927);
   hNCinFV_stack_11->SetBinContent(11,5.480956);
   hNCinFV_stack_11->SetBinContent(12,6.94604);
   hNCinFV_stack_11->SetBinContent(13,7.095839);
   hNCinFV_stack_11->SetBinContent(14,7.373705);
   hNCinFV_stack_11->SetBinContent(15,11.64382);
   hNCinFV_stack_11->SetBinContent(16,13.70173);
   hNCinFV_stack_11->SetBinContent(17,17.27553);
   hNCinFV_stack_11->SetBinContent(18,17.92143);
   hNCinFV_stack_11->SetBinContent(19,34.49722);
   hNCinFV_stack_11->SetBinContent(20,55.7348);
   hNCinFV_stack_11->SetBinError(1,1.871328);
   hNCinFV_stack_11->SetBinError(2,1.546727);
   hNCinFV_stack_11->SetBinError(3,1.312276);
   hNCinFV_stack_11->SetBinError(4,1.149634);
   hNCinFV_stack_11->SetBinError(5,1.731416);
   hNCinFV_stack_11->SetBinError(6,1.115455);
   hNCinFV_stack_11->SetBinError(7,1.152049);
   hNCinFV_stack_11->SetBinError(8,0.7445885);
   hNCinFV_stack_11->SetBinError(9,1.339163);
   hNCinFV_stack_11->SetBinError(10,1.288391);
   hNCinFV_stack_11->SetBinError(11,1.351035);
   hNCinFV_stack_11->SetBinError(12,1.30228);
   hNCinFV_stack_11->SetBinError(13,1.318056);
   hNCinFV_stack_11->SetBinError(14,1.617061);
   hNCinFV_stack_11->SetBinError(15,1.95115);
   hNCinFV_stack_11->SetBinError(16,2.030152);
   hNCinFV_stack_11->SetBinError(17,2.435968);
   hNCinFV_stack_11->SetBinError(18,2.24198);
   hNCinFV_stack_11->SetBinError(19,3.285824);
   hNCinFV_stack_11->SetBinError(20,4.479299);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
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

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
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

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__20->SetBinContent(1,90.4133);
   hmcerror__20->SetBinContent(2,75.46552);
   hmcerror__20->SetBinContent(3,64.32698);
   hmcerror__20->SetBinContent(4,62.19947);
   hmcerror__20->SetBinContent(5,65.33195);
   hmcerror__20->SetBinContent(6,72.40562);
   hmcerror__20->SetBinContent(7,61.95348);
   hmcerror__20->SetBinContent(8,70.20457);
   hmcerror__20->SetBinContent(9,75.92193);
   hmcerror__20->SetBinContent(10,85.72102);
   hmcerror__20->SetBinContent(11,92.12894);
   hmcerror__20->SetBinContent(12,104.6704);
   hmcerror__20->SetBinContent(13,101.6842);
   hmcerror__20->SetBinContent(14,108.2674);
   hmcerror__20->SetBinContent(15,122.683);
   hmcerror__20->SetBinContent(16,147.6771);
   hmcerror__20->SetBinContent(17,183.8493);
   hmcerror__20->SetBinContent(18,192.3715);
   hmcerror__20->SetBinContent(19,246.0403);
   hmcerror__20->SetBinContent(20,365.7404);
   hmcerror__20->SetBinError(1,35.79607);
   hmcerror__20->SetBinError(2,30.04363);
   hmcerror__20->SetBinError(3,29.26532);
   hmcerror__20->SetBinError(4,28.30588);
   hmcerror__20->SetBinError(5,26.17726);
   hmcerror__20->SetBinError(6,30.4367);
   hmcerror__20->SetBinError(7,27.76602);
   hmcerror__20->SetBinError(8,29.69973);
   hmcerror__20->SetBinError(9,32.21404);
   hmcerror__20->SetBinError(10,35.89353);
   hmcerror__20->SetBinError(11,41.53917);
   hmcerror__20->SetBinError(12,43.24728);
   hmcerror__20->SetBinError(13,43.04173);
   hmcerror__20->SetBinError(14,48.94404);
   hmcerror__20->SetBinError(15,50.4744);
   hmcerror__20->SetBinError(16,67.04365);
   hmcerror__20->SetBinError(17,73.57896);
   hmcerror__20->SetBinError(18,74.09635);
   hmcerror__20->SetBinError(19,96.90413);
   hmcerror__20->SetBinError(20,104.226);
   hmcerror__20->SetBinError(21,0.3895343);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
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
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
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
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(19.97237);
   Graph_Graph3025->SetMaximum(305.034);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.5/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

   ci = 1512;
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

   ci = 1513;
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

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  914.1","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.6","F");

   ci = 1522;
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

   ci = 1523;
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

   ci = 1524;
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
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   0.395916,
   0.3981107,
   0.4549463,
   0.4550823,
   0.4006808,
   0.4203638,
   0.4481754,
   0.4230454,
   0.4243048,
   0.4187249,
   0.4508808,
   0.4131759,
   0.4232881,
   0.4520663,
   0.4114213,
   0.453988,
   0.4002134,
   0.3851732,
   0.3938547,
   0.2849726};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   0.395916,
   0.3981107,
   0.4549463,
   0.4550823,
   0.4006808,
   0.4203638,
   0.4481754,
   0.4230454,
   0.4243048,
   0.4187249,
   0.4508808,
   0.4131759,
   0.4232881,
   0.4520663,
   0.4114213,
   0.453988,
   0.4002134,
   0.3851732,
   0.3938547,
   0.2849726};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0.3142308,
   0.3502513,
   0.3745386,
   0.4112769,
   0.3606669,
   0.3473314,
   0.3886417,
   0.384468,
   0.387277,
   0.3844332,
   0.4018356,
   0.3842659,
   0.396775,
   0.4162594,
   0.3932568,
   0.4092231,
   0.3506849,
   0.3663398,
   0.3199723,
   0.2595607};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0.3142308,
   0.3502513,
   0.3745386,
   0.4112769,
   0.3606669,
   0.3473314,
   0.3886417,
   0.384468,
   0.387277,
   0.3844332,
   0.4018356,
   0.3842659,
   0.396775,
   0.4162594,
   0.3932568,
   0.4092231,
   0.3506849,
   0.3663398,
   0.3199723,
   0.2595607};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
   0.7852827,
   0.6758053,
   1.103736,
   0.83602,
   1.16329,
   0.8700982,
   1.049174,
   1.125283,
   0.8297998,
   0.793271,
   0.8140765,
   0.8598422,
   0.7474119,
   0.9421118,
   0.8151088,
   0.7584112,
   0.7886893,
   0.9564825,
   0.9266773,
   0.7245577};
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
   0.09458564,
   0.09636851,
   0.1329427,
   0.118038,
   0.1353472,
   0.1113836,
   0.1321847,
   0.1283734,
   0.1062249,
   0.09767266,
   0.09535766,
   0.09180536,
   0.08696039,
   0.09328297,
   0.08249879,
   0.07166312,
   0.06549708,
   0.07051282,
   0.0613707,
   0.04450922};
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
   0.09234925,
   0.09366661,
   0.1297993,
   0.1147614,
   0.1322569,
   0.1085827,
   0.1289128,
   0.1254975,
   0.1035537,
   0.09531034,
   0.093164,
   0.08988122,
   0.08497483,
   0.09328297,
   0.08085879,
   0.07166312,
   0.06549708,
   0.07051282,
   0.0613707,
   0.04450922};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.5078258);
   Graph_Graph3028->SetMaximum(1.367158);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

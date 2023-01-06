#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 22:48:02 2022) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-3.429912,3.553846,379.2761);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__19->SetBinContent(1,32.16215);
   hmc__19->SetBinContent(2,92.62368);
   hmc__19->SetBinContent(3,134.4871);
   hmc__19->SetBinContent(4,156.0737);
   hmc__19->SetBinContent(5,171.4956);
   hmc__19->SetBinContent(6,159.0171);
   hmc__19->SetBinContent(7,170.5849);
   hmc__19->SetBinContent(8,156.3031);
   hmc__19->SetBinContent(9,137.5836);
   hmc__19->SetBinContent(10,126.7133);
   hmc__19->SetBinContent(11,138.738);
   hmc__19->SetBinContent(12,121.8596);
   hmc__19->SetBinContent(13,111.8393);
   hmc__19->SetBinContent(14,91.16798);
   hmc__19->SetBinContent(15,81.44041);
   hmc__19->SetBinContent(16,86.97962);
   hmc__19->SetBinContent(17,72.51994);
   hmc__19->SetBinContent(18,67.19004);
   hmc__19->SetBinContent(19,56.77173);
   hmc__19->SetBinContent(20,54.12054);
   hmc__19->SetBinContent(21,54.9781);
   hmc__19->SetBinContent(22,43.91609);
   hmc__19->SetBinContent(23,36.21479);
   hmc__19->SetBinContent(24,24.88375);
   hmc__19->SetBinContent(25,9.392544);
   hmc__19->SetBinError(1,12.86984);
   hmc__19->SetBinError(2,28.68842);
   hmc__19->SetBinError(3,42.44168);
   hmc__19->SetBinError(4,51.16644);
   hmc__19->SetBinError(5,55.04756);
   hmc__19->SetBinError(6,58.52712);
   hmc__19->SetBinError(7,65.45557);
   hmc__19->SetBinError(8,65.71566);
   hmc__19->SetBinError(9,61.04169);
   hmc__19->SetBinError(10,55.38166);
   hmc__19->SetBinError(11,51.2639);
   hmc__19->SetBinError(12,53.29661);
   hmc__19->SetBinError(13,47.57988);
   hmc__19->SetBinError(14,36.2771);
   hmc__19->SetBinError(15,42.66741);
   hmc__19->SetBinError(16,33.95395);
   hmc__19->SetBinError(17,29.31679);
   hmc__19->SetBinError(18,28.33061);
   hmc__19->SetBinError(19,27.10572);
   hmc__19->SetBinError(20,23.19453);
   hmc__19->SetBinError(21,23.6559);
   hmc__19->SetBinError(22,20.22484);
   hmc__19->SetBinError(23,26.96526);
   hmc__19->SetBinError(24,11.53294);
   hmc__19->SetBinError(25,7.938628);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-3.429912);
   hmc__19->SetMaximum(360.1408);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,3.15);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(180.0704);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,0.7319179);
   hbadmatch_stack_1->SetBinContent(3,3.001012);
   hbadmatch_stack_1->SetBinContent(4,2.680646);
   hbadmatch_stack_1->SetBinContent(5,1.591391);
   hbadmatch_stack_1->SetBinContent(6,4.27002);
   hbadmatch_stack_1->SetBinContent(7,2.365058);
   hbadmatch_stack_1->SetBinContent(8,3.337932);
   hbadmatch_stack_1->SetBinContent(9,1.501691);
   hbadmatch_stack_1->SetBinContent(10,1.553331);
   hbadmatch_stack_1->SetBinContent(11,7.690585);
   hbadmatch_stack_1->SetBinContent(12,6.009354);
   hbadmatch_stack_1->SetBinContent(13,2.247942);
   hbadmatch_stack_1->SetBinContent(14,2.570043);
   hbadmatch_stack_1->SetBinContent(15,3.302492);
   hbadmatch_stack_1->SetBinContent(16,1.353833);
   hbadmatch_stack_1->SetBinContent(17,1.20664);
   hbadmatch_stack_1->SetBinContent(18,2.463321);
   hbadmatch_stack_1->SetBinContent(19,1.324873);
   hbadmatch_stack_1->SetBinContent(20,0.8068126);
   hbadmatch_stack_1->SetBinContent(21,1.505581);
   hbadmatch_stack_1->SetBinContent(22,1.246772);
   hbadmatch_stack_1->SetBinContent(23,0.8109735);
   hbadmatch_stack_1->SetBinContent(24,1.061289);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.438694);
   hbadmatch_stack_1->SetBinError(3,1.00641);
   hbadmatch_stack_1->SetBinError(4,0.7830378);
   hbadmatch_stack_1->SetBinError(5,0.6164127);
   hbadmatch_stack_1->SetBinError(6,1.112071);
   hbadmatch_stack_1->SetBinError(7,0.7815954);
   hbadmatch_stack_1->SetBinError(8,0.9838454);
   hbadmatch_stack_1->SetBinError(9,0.5972345);
   hbadmatch_stack_1->SetBinError(10,0.5603854);
   hbadmatch_stack_1->SetBinError(11,2.422657);
   hbadmatch_stack_1->SetBinError(12,1.659796);
   hbadmatch_stack_1->SetBinError(13,0.7511693);
   hbadmatch_stack_1->SetBinError(14,0.8712946);
   hbadmatch_stack_1->SetBinError(15,1.001051);
   hbadmatch_stack_1->SetBinError(16,0.4935781);
   hbadmatch_stack_1->SetBinError(17,0.5669221);
   hbadmatch_stack_1->SetBinError(18,0.931414);
   hbadmatch_stack_1->SetBinError(19,0.5832119);
   hbadmatch_stack_1->SetBinError(20,0.4038668);
   hbadmatch_stack_1->SetBinError(21,0.6180179);
   hbadmatch_stack_1->SetBinError(22,0.5824678);
   hbadmatch_stack_1->SetBinError(23,0.4762135);
   hbadmatch_stack_1->SetBinError(24,0.4987455);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,2.999006);
   hext_stack_2->SetBinContent(3,4.028449);
   hext_stack_2->SetBinContent(4,8.496628);
   hext_stack_2->SetBinContent(5,17.53831);
   hext_stack_2->SetBinContent(6,8.877276);
   hext_stack_2->SetBinContent(7,17.56143);
   hext_stack_2->SetBinContent(8,9.361668);
   hext_stack_2->SetBinContent(9,10.58146);
   hext_stack_2->SetBinContent(10,10.93458);
   hext_stack_2->SetBinContent(11,16.33287);
   hext_stack_2->SetBinContent(12,8.470678);
   hext_stack_2->SetBinContent(13,15.3525);
   hext_stack_2->SetBinContent(14,7.340263);
   hext_stack_2->SetBinContent(15,7.869375);
   hext_stack_2->SetBinContent(16,12.35349);
   hext_stack_2->SetBinContent(17,7.291193);
   hext_stack_2->SetBinContent(18,7.643119);
   hext_stack_2->SetBinContent(19,2.27519);
   hext_stack_2->SetBinContent(20,3.897177);
   hext_stack_2->SetBinContent(21,2.517386);
   hext_stack_2->SetBinContent(22,1.461993);
   hext_stack_2->SetBinContent(23,3.215251);
   hext_stack_2->SetBinContent(24,0.973192);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,1.159101);
   hext_stack_2->SetBinError(3,1.479117);
   hext_stack_2->SetBinError(4,1.96754);
   hext_stack_2->SetBinError(5,2.91486);
   hext_stack_2->SetBinError(6,2.122503);
   hext_stack_2->SetBinError(7,3.113626);
   hext_stack_2->SetBinError(8,2.143667);
   hext_stack_2->SetBinError(9,2.256386);
   hext_stack_2->SetBinError(10,2.095639);
   hext_stack_2->SetBinError(11,2.756454);
   hext_stack_2->SetBinError(12,2.083194);
   hext_stack_2->SetBinError(13,2.735606);
   hext_stack_2->SetBinError(14,1.924218);
   hext_stack_2->SetBinError(15,1.748469);
   hext_stack_2->SetBinError(16,2.477907);
   hext_stack_2->SetBinError(17,1.724194);
   hext_stack_2->SetBinError(18,2.100346);
   hext_stack_2->SetBinError(19,0.9336798);
   hext_stack_2->SetBinError(20,1.182339);
   hext_stack_2->SetBinError(21,0.9575503);
   hext_stack_2->SetBinError(22,0.7356036);
   hext_stack_2->SetBinError(23,1.36277);
   hext_stack_2->SetBinError(24,0.5618727);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.3635739);
   hdirt_stack_3->SetBinContent(4,0.5758626);
   hdirt_stack_3->SetBinContent(5,1.284752);
   hdirt_stack_3->SetBinContent(6,0.5845677);
   hdirt_stack_3->SetBinContent(7,0.6566868);
   hdirt_stack_3->SetBinContent(8,0.6763744);
   hdirt_stack_3->SetBinContent(9,0.3339492);
   hdirt_stack_3->SetBinContent(10,0.7222627);
   hdirt_stack_3->SetBinContent(11,0.6763744);
   hdirt_stack_3->SetBinContent(12,0.6566868);
   hdirt_stack_3->SetBinContent(14,1.3681);
   hdirt_stack_3->SetBinContent(16,1.090589);
   hdirt_stack_3->SetBinContent(17,0.5388689);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.857241);
   hdirt_stack_3->SetBinContent(24,0.2761429);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2623873);
   hdirt_stack_3->SetBinError(4,0.3389606);
   hdirt_stack_3->SetBinError(5,0.6087306);
   hdirt_stack_3->SetBinError(6,0.3485997);
   hdirt_stack_3->SetBinError(7,0.3791383);
   hdirt_stack_3->SetBinError(8,0.4782689);
   hdirt_stack_3->SetBinError(9,0.2364324);
   hdirt_stack_3->SetBinError(10,0.4353967);
   hdirt_stack_3->SetBinError(11,0.4782689);
   hdirt_stack_3->SetBinError(12,0.3791383);
   hdirt_stack_3->SetBinError(14,0.9804616);
   hdirt_stack_3->SetBinError(16,0.5347264);
   hdirt_stack_3->SetBinError(17,0.4239131);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(21,0.4318147);
   hdirt_stack_3->SetBinError(24,0.1952625);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(2,2.371798);
   houtFV_stack_4->SetBinContent(3,3.361418);
   houtFV_stack_4->SetBinContent(4,4.808388);
   houtFV_stack_4->SetBinContent(5,8.766642);
   houtFV_stack_4->SetBinContent(6,5.033016);
   houtFV_stack_4->SetBinContent(7,8.057356);
   houtFV_stack_4->SetBinContent(8,6.616907);
   houtFV_stack_4->SetBinContent(9,4.539395);
   houtFV_stack_4->SetBinContent(10,4.912573);
   houtFV_stack_4->SetBinContent(11,3.932391);
   houtFV_stack_4->SetBinContent(12,4.786838);
   houtFV_stack_4->SetBinContent(13,2.519697);
   houtFV_stack_4->SetBinContent(14,2.558441);
   houtFV_stack_4->SetBinContent(15,2.768725);
   houtFV_stack_4->SetBinContent(16,3.660479);
   houtFV_stack_4->SetBinContent(17,2.032375);
   houtFV_stack_4->SetBinContent(18,2.506868);
   houtFV_stack_4->SetBinContent(19,2.146539);
   houtFV_stack_4->SetBinContent(20,2.318179);
   houtFV_stack_4->SetBinContent(21,1.702288);
   houtFV_stack_4->SetBinContent(22,1.952089);
   houtFV_stack_4->SetBinContent(23,3.181036);
   houtFV_stack_4->SetBinContent(24,1.853528);
   houtFV_stack_4->SetBinContent(25,0.4353772);
   houtFV_stack_4->SetBinError(2,0.7445522);
   houtFV_stack_4->SetBinError(3,0.9376653);
   houtFV_stack_4->SetBinError(4,1.042485);
   houtFV_stack_4->SetBinError(5,1.483274);
   houtFV_stack_4->SetBinError(6,1.099828);
   houtFV_stack_4->SetBinError(7,1.37799);
   houtFV_stack_4->SetBinError(8,1.196683);
   houtFV_stack_4->SetBinError(9,0.9298483);
   houtFV_stack_4->SetBinError(10,1.166428);
   houtFV_stack_4->SetBinError(11,1.010015);
   houtFV_stack_4->SetBinError(12,1.036482);
   houtFV_stack_4->SetBinError(13,0.7948513);
   houtFV_stack_4->SetBinError(14,0.8063666);
   houtFV_stack_4->SetBinError(15,0.7673924);
   houtFV_stack_4->SetBinError(16,0.9208091);
   houtFV_stack_4->SetBinError(17,0.6591628);
   houtFV_stack_4->SetBinError(18,0.7566407);
   houtFV_stack_4->SetBinError(19,0.839874);
   houtFV_stack_4->SetBinError(20,0.6962364);
   houtFV_stack_4->SetBinError(21,0.6407017);
   houtFV_stack_4->SetBinError(22,0.7112426);
   houtFV_stack_4->SetBinError(23,0.9732107);
   houtFV_stack_4->SetBinError(24,0.6853178);
   houtFV_stack_4->SetBinError(25,0.3092837);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1763344);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.056782);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6145741);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.8455101);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5180168);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.07685162);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05370995);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4839541);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3051062);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1075194);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08099589);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.08353584);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3489686);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2314189);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.276807);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2183353);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.05442126);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05370994);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2152982);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.200476);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.100147);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.05727274);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2268041);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.707091);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7446489);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9627989);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.275993);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9988843);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8887171);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2030775);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5587739);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2846773);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3101732);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7731372);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1963641);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3251087);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4845709);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2449776);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1246645);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2219442);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1361326);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.63138);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2584987);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2068098);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1156182);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1186519);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2173026);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2376504);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2506115);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4000765);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2626273);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2916029);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05962184);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.197483);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1144361);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1002556);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3177801);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08192381);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1442858);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.199433);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.120726);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0471989);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1355684);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04682498);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2885175);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1425842);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0938146);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08216112);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03635368);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.85105);
   hNCpi0inFVres_stack_7->SetBinContent(2,32.42844);
   hNCpi0inFVres_stack_7->SetBinContent(3,45.90036);
   hNCpi0inFVres_stack_7->SetBinContent(4,60.35255);
   hNCpi0inFVres_stack_7->SetBinContent(5,67.99467);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.5878);
   hNCpi0inFVres_stack_7->SetBinContent(7,71.35925);
   hNCpi0inFVres_stack_7->SetBinContent(8,66.37286);
   hNCpi0inFVres_stack_7->SetBinContent(9,55.92477);
   hNCpi0inFVres_stack_7->SetBinContent(10,52.41207);
   hNCpi0inFVres_stack_7->SetBinContent(11,47.43081);
   hNCpi0inFVres_stack_7->SetBinContent(12,43.57664);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.82283);
   hNCpi0inFVres_stack_7->SetBinContent(14,34.55901);
   hNCpi0inFVres_stack_7->SetBinContent(15,32.24597);
   hNCpi0inFVres_stack_7->SetBinContent(16,30.60337);
   hNCpi0inFVres_stack_7->SetBinContent(17,28.57409);
   hNCpi0inFVres_stack_7->SetBinContent(18,25.52003);
   hNCpi0inFVres_stack_7->SetBinContent(19,23.33163);
   hNCpi0inFVres_stack_7->SetBinContent(20,20.07808);
   hNCpi0inFVres_stack_7->SetBinContent(21,21.6707);
   hNCpi0inFVres_stack_7->SetBinContent(22,15.09092);
   hNCpi0inFVres_stack_7->SetBinContent(23,11.08841);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.944862);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.421309);
   hNCpi0inFVres_stack_7->SetBinError(1,1.338788);
   hNCpi0inFVres_stack_7->SetBinError(2,1.982207);
   hNCpi0inFVres_stack_7->SetBinError(3,2.144665);
   hNCpi0inFVres_stack_7->SetBinError(4,2.377088);
   hNCpi0inFVres_stack_7->SetBinError(5,2.614599);
   hNCpi0inFVres_stack_7->SetBinError(6,2.517593);
   hNCpi0inFVres_stack_7->SetBinError(7,2.63338);
   hNCpi0inFVres_stack_7->SetBinError(8,2.48513);
   hNCpi0inFVres_stack_7->SetBinError(9,2.176047);
   hNCpi0inFVres_stack_7->SetBinError(10,2.092226);
   hNCpi0inFVres_stack_7->SetBinError(11,2.025933);
   hNCpi0inFVres_stack_7->SetBinError(12,1.827075);
   hNCpi0inFVres_stack_7->SetBinError(13,1.861653);
   hNCpi0inFVres_stack_7->SetBinError(14,1.771917);
   hNCpi0inFVres_stack_7->SetBinError(15,1.623647);
   hNCpi0inFVres_stack_7->SetBinError(16,1.619324);
   hNCpi0inFVres_stack_7->SetBinError(17,1.630018);
   hNCpi0inFVres_stack_7->SetBinError(18,1.456227);
   hNCpi0inFVres_stack_7->SetBinError(19,1.394042);
   hNCpi0inFVres_stack_7->SetBinError(20,1.344693);
   hNCpi0inFVres_stack_7->SetBinError(21,1.504028);
   hNCpi0inFVres_stack_7->SetBinError(22,1.196041);
   hNCpi0inFVres_stack_7->SetBinError(23,1.108734);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9786654);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4884843);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.229944);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.973251);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.71661);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.61112);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.48555);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.23677);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.60906);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.15854);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.55254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.28211);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.889976);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.201153);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.25054);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.915151);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.125127);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.905928);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.202967);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.279589);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.997999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.027853);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.91722);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.351247);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.523508);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.830679);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3431367);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.00537);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.032405);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.426592);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.705561);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.611812);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.300297);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.161928);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.090512);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.025978);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.003645);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9828733);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.030299);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7180534);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6494414);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5946817);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6519861);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8066672);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.54272);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6617769);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7725397);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4371133);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6539728);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4867993);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3652337);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.167243);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.08131641);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2789693);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02901978);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.06747636);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1736405);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02121135);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.724922);
   hCCpi0inFV_stack_10->SetBinContent(2,17.56824);
   hCCpi0inFV_stack_10->SetBinContent(3,26.24794);
   hCCpi0inFV_stack_10->SetBinContent(4,23.65601);
   hCCpi0inFV_stack_10->SetBinContent(5,19.37963);
   hCCpi0inFV_stack_10->SetBinContent(6,28.94631);
   hCCpi0inFV_stack_10->SetBinContent(7,27.8456);
   hCCpi0inFV_stack_10->SetBinContent(8,22.81847);
   hCCpi0inFV_stack_10->SetBinContent(9,25.57643);
   hCCpi0inFV_stack_10->SetBinContent(10,19.18271);
   hCCpi0inFV_stack_10->SetBinContent(11,21.22229);
   hCCpi0inFV_stack_10->SetBinContent(12,18.58661);
   hCCpi0inFV_stack_10->SetBinContent(13,18.14336);
   hCCpi0inFV_stack_10->SetBinContent(14,11.89539);
   hCCpi0inFV_stack_10->SetBinContent(15,12.94254);
   hCCpi0inFV_stack_10->SetBinContent(16,12.45729);
   hCCpi0inFV_stack_10->SetBinContent(17,12.70718);
   hCCpi0inFV_stack_10->SetBinContent(18,11.10326);
   hCCpi0inFV_stack_10->SetBinContent(19,9.706455);
   hCCpi0inFV_stack_10->SetBinContent(20,8.744616);
   hCCpi0inFV_stack_10->SetBinContent(21,11.38342);
   hCCpi0inFV_stack_10->SetBinContent(22,7.663258);
   hCCpi0inFV_stack_10->SetBinContent(23,4.939626);
   hCCpi0inFV_stack_10->SetBinContent(24,4.042237);
   hCCpi0inFV_stack_10->SetBinContent(25,2.300681);
   hCCpi0inFV_stack_10->SetBinError(1,1.152719);
   hCCpi0inFV_stack_10->SetBinError(2,2.145845);
   hCCpi0inFV_stack_10->SetBinError(3,2.602991);
   hCCpi0inFV_stack_10->SetBinError(4,2.432497);
   hCCpi0inFV_stack_10->SetBinError(5,2.091267);
   hCCpi0inFV_stack_10->SetBinError(6,2.780852);
   hCCpi0inFV_stack_10->SetBinError(7,2.632334);
   hCCpi0inFV_stack_10->SetBinError(8,2.453768);
   hCCpi0inFV_stack_10->SetBinError(9,2.603686);
   hCCpi0inFV_stack_10->SetBinError(10,2.187016);
   hCCpi0inFV_stack_10->SetBinError(11,2.33282);
   hCCpi0inFV_stack_10->SetBinError(12,2.170122);
   hCCpi0inFV_stack_10->SetBinError(13,2.047914);
   hCCpi0inFV_stack_10->SetBinError(14,1.742575);
   hCCpi0inFV_stack_10->SetBinError(15,1.808986);
   hCCpi0inFV_stack_10->SetBinError(16,1.715057);
   hCCpi0inFV_stack_10->SetBinError(17,1.75482);
   hCCpi0inFV_stack_10->SetBinError(18,1.618268);
   hCCpi0inFV_stack_10->SetBinError(19,1.549361);
   hCCpi0inFV_stack_10->SetBinError(20,1.521762);
   hCCpi0inFV_stack_10->SetBinError(21,1.664388);
   hCCpi0inFV_stack_10->SetBinError(22,1.37978);
   hCCpi0inFV_stack_10->SetBinError(23,1.056002);
   hCCpi0inFV_stack_10->SetBinError(24,1.090407);
   hCCpi0inFV_stack_10->SetBinError(25,0.7495707);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.306489);
   hNCinFV_stack_11->SetBinContent(2,13.84825);
   hNCinFV_stack_11->SetBinContent(3,21.67075);
   hNCinFV_stack_11->SetBinContent(4,22.01781);
   hNCinFV_stack_11->SetBinContent(5,22.81024);
   hNCinFV_stack_11->SetBinContent(6,17.79749);
   hNCinFV_stack_11->SetBinContent(7,14.73261);
   hNCinFV_stack_11->SetBinContent(8,15.44275);
   hNCinFV_stack_11->SetBinContent(9,13.38693);
   hNCinFV_stack_11->SetBinContent(10,8.407838);
   hNCinFV_stack_11->SetBinContent(11,10.56892);
   hNCinFV_stack_11->SetBinContent(12,10.79007);
   hNCinFV_stack_11->SetBinContent(13,6.474896);
   hNCinFV_stack_11->SetBinContent(14,6.517882);
   hNCinFV_stack_11->SetBinContent(15,3.926297);
   hNCinFV_stack_11->SetBinContent(16,9.802973);
   hNCinFV_stack_11->SetBinContent(17,6.484273);
   hNCinFV_stack_11->SetBinContent(18,5.923055);
   hNCinFV_stack_11->SetBinContent(19,5.792867);
   hNCinFV_stack_11->SetBinContent(20,6.011325);
   hNCinFV_stack_11->SetBinContent(21,4.594452);
   hNCinFV_stack_11->SetBinContent(22,6.077567);
   hNCinFV_stack_11->SetBinContent(23,5.201029);
   hNCinFV_stack_11->SetBinContent(24,4.101649);
   hNCinFV_stack_11->SetBinContent(25,1.944062);
   hNCinFV_stack_11->SetBinError(1,1.310533);
   hNCinFV_stack_11->SetBinError(2,2.005186);
   hNCinFV_stack_11->SetBinError(3,2.728405);
   hNCinFV_stack_11->SetBinError(4,2.793718);
   hNCinFV_stack_11->SetBinError(5,2.827756);
   hNCinFV_stack_11->SetBinError(6,2.46684);
   hNCinFV_stack_11->SetBinError(7,2.106984);
   hNCinFV_stack_11->SetBinError(8,2.247);
   hNCinFV_stack_11->SetBinError(9,1.876625);
   hNCinFV_stack_11->SetBinError(10,1.426138);
   hNCinFV_stack_11->SetBinError(11,1.763781);
   hNCinFV_stack_11->SetBinError(12,1.844112);
   hNCinFV_stack_11->SetBinError(13,1.348269);
   hNCinFV_stack_11->SetBinError(14,1.190118);
   hNCinFV_stack_11->SetBinError(15,0.9636684);
   hNCinFV_stack_11->SetBinError(16,1.901486);
   hNCinFV_stack_11->SetBinError(17,1.287849);
   hNCinFV_stack_11->SetBinError(18,1.186784);
   hNCinFV_stack_11->SetBinError(19,1.221273);
   hNCinFV_stack_11->SetBinError(20,1.195623);
   hNCinFV_stack_11->SetBinError(21,1.042882);
   hNCinFV_stack_11->SetBinError(22,1.204135);
   hNCinFV_stack_11->SetBinError(23,1.134825);
   hNCinFV_stack_11->SetBinError(24,1.182711);
   hNCinFV_stack_11->SetBinError(25,0.7230444);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.39793);
   hnumuCCinFV_stack_12->SetBinContent(2,9.074083);
   hnumuCCinFV_stack_12->SetBinContent(3,10.1379);
   hnumuCCinFV_stack_12->SetBinContent(4,11.61307);
   hnumuCCinFV_stack_12->SetBinContent(5,11.34944);
   hnumuCCinFV_stack_12->SetBinContent(6,11.11775);
   hnumuCCinFV_stack_12->SetBinContent(7,13.21196);
   hnumuCCinFV_stack_12->SetBinContent(8,18.33763);
   hnumuCCinFV_stack_12->SetBinContent(9,14.96512);
   hnumuCCinFV_stack_12->SetBinContent(10,18.12679);
   hnumuCCinFV_stack_12->SetBinContent(11,20.75998);
   hnumuCCinFV_stack_12->SetBinContent(12,19.20123);
   hnumuCCinFV_stack_12->SetBinContent(13,19.86713);
   hnumuCCinFV_stack_12->SetBinContent(14,17.99957);
   hnumuCCinFV_stack_12->SetBinContent(15,12.29785);
   hnumuCCinFV_stack_12->SetBinContent(16,9.716063);
   hnumuCCinFV_stack_12->SetBinContent(17,6.662568);
   hnumuCCinFV_stack_12->SetBinContent(18,7.407235);
   hnumuCCinFV_stack_12->SetBinContent(19,7.449868);
   hnumuCCinFV_stack_12->SetBinContent(20,6.714615);
   hnumuCCinFV_stack_12->SetBinContent(21,6.827488);
   hnumuCCinFV_stack_12->SetBinContent(22,5.617038);
   hnumuCCinFV_stack_12->SetBinContent(23,4.938131);
   hnumuCCinFV_stack_12->SetBinContent(24,2.68455);
   hnumuCCinFV_stack_12->SetBinContent(25,1.911625);
   hnumuCCinFV_stack_12->SetBinError(1,0.8249469);
   hnumuCCinFV_stack_12->SetBinError(2,1.50058);
   hnumuCCinFV_stack_12->SetBinError(3,1.583615);
   hnumuCCinFV_stack_12->SetBinError(4,1.689567);
   hnumuCCinFV_stack_12->SetBinError(5,2.046485);
   hnumuCCinFV_stack_12->SetBinError(6,1.906745);
   hnumuCCinFV_stack_12->SetBinError(7,2.137523);
   hnumuCCinFV_stack_12->SetBinError(8,3.533862);
   hnumuCCinFV_stack_12->SetBinError(9,2.02537);
   hnumuCCinFV_stack_12->SetBinError(10,2.64743);
   hnumuCCinFV_stack_12->SetBinError(11,2.519542);
   hnumuCCinFV_stack_12->SetBinError(12,3.019985);
   hnumuCCinFV_stack_12->SetBinError(13,2.384103);
   hnumuCCinFV_stack_12->SetBinError(14,2.425034);
   hnumuCCinFV_stack_12->SetBinError(15,2.040142);
   hnumuCCinFV_stack_12->SetBinError(16,1.59177);
   hnumuCCinFV_stack_12->SetBinError(17,1.361803);
   hnumuCCinFV_stack_12->SetBinError(18,1.778861);
   hnumuCCinFV_stack_12->SetBinError(19,1.785946);
   hnumuCCinFV_stack_12->SetBinError(20,1.405734);
   hnumuCCinFV_stack_12->SetBinError(21,1.371107);
   hnumuCCinFV_stack_12->SetBinError(22,1.323729);
   hnumuCCinFV_stack_12->SetBinError(23,1.140137);
   hnumuCCinFV_stack_12->SetBinError(24,0.8054587);
   hnumuCCinFV_stack_12->SetBinError(25,0.6973363);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.976572);
   hnueCCinFV_stack_13->SetBinContent(2,2.302882);
   hnueCCinFV_stack_13->SetBinContent(3,1.721766);
   hnueCCinFV_stack_13->SetBinContent(4,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.9873133);
   hnueCCinFV_stack_13->SetBinContent(8,0.7890683);
   hnueCCinFV_stack_13->SetBinContent(10,0.591342);
   hnueCCinFV_stack_13->SetBinContent(11,0.9491624);
   hnueCCinFV_stack_13->SetBinContent(12,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(16,0.5043085);
   hnueCCinFV_stack_13->SetBinContent(17,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(19,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(20,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(21,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.6689512);
   hnueCCinFV_stack_13->SetBinError(2,0.8481137);
   hnueCCinFV_stack_13->SetBinError(3,0.6814223);
   hnueCCinFV_stack_13->SetBinError(4,0.340721);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.5074257);
   hnueCCinFV_stack_13->SetBinError(8,0.4671225);
   hnueCCinFV_stack_13->SetBinError(10,0.4228527);
   hnueCCinFV_stack_13->SetBinError(11,0.5701914);
   hnueCCinFV_stack_13->SetBinError(12,0.2504446);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.5946997);
   hnueCCinFV_stack_13->SetBinError(16,0.3566341);
   hnueCCinFV_stack_13->SetBinError(17,0.4132436);
   hnueCCinFV_stack_13->SetBinError(19,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(20,0.2476759);
   hnueCCinFV_stack_13->SetBinError(21,0.2451916);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__20->SetBinContent(1,32.16215);
   hmcerror__20->SetBinContent(2,92.62368);
   hmcerror__20->SetBinContent(3,134.4871);
   hmcerror__20->SetBinContent(4,156.0737);
   hmcerror__20->SetBinContent(5,171.4956);
   hmcerror__20->SetBinContent(6,159.0171);
   hmcerror__20->SetBinContent(7,170.5849);
   hmcerror__20->SetBinContent(8,156.3031);
   hmcerror__20->SetBinContent(9,137.5836);
   hmcerror__20->SetBinContent(10,126.7133);
   hmcerror__20->SetBinContent(11,138.738);
   hmcerror__20->SetBinContent(12,121.8596);
   hmcerror__20->SetBinContent(13,111.8393);
   hmcerror__20->SetBinContent(14,91.16798);
   hmcerror__20->SetBinContent(15,81.44041);
   hmcerror__20->SetBinContent(16,86.97962);
   hmcerror__20->SetBinContent(17,72.51994);
   hmcerror__20->SetBinContent(18,67.19004);
   hmcerror__20->SetBinContent(19,56.77173);
   hmcerror__20->SetBinContent(20,54.12054);
   hmcerror__20->SetBinContent(21,54.9781);
   hmcerror__20->SetBinContent(22,43.91609);
   hmcerror__20->SetBinContent(23,36.21479);
   hmcerror__20->SetBinContent(24,24.88375);
   hmcerror__20->SetBinContent(25,9.392544);
   hmcerror__20->SetBinError(1,12.86984);
   hmcerror__20->SetBinError(2,28.68842);
   hmcerror__20->SetBinError(3,42.44168);
   hmcerror__20->SetBinError(4,51.16644);
   hmcerror__20->SetBinError(5,55.04756);
   hmcerror__20->SetBinError(6,58.52712);
   hmcerror__20->SetBinError(7,65.45557);
   hmcerror__20->SetBinError(8,65.71566);
   hmcerror__20->SetBinError(9,61.04169);
   hmcerror__20->SetBinError(10,55.38166);
   hmcerror__20->SetBinError(11,51.2639);
   hmcerror__20->SetBinError(12,53.29661);
   hmcerror__20->SetBinError(13,47.57988);
   hmcerror__20->SetBinError(14,36.2771);
   hmcerror__20->SetBinError(15,42.66741);
   hmcerror__20->SetBinError(16,33.95395);
   hmcerror__20->SetBinError(17,29.31679);
   hmcerror__20->SetBinError(18,28.33061);
   hmcerror__20->SetBinError(19,27.10572);
   hmcerror__20->SetBinError(20,23.19453);
   hmcerror__20->SetBinError(21,23.6559);
   hmcerror__20->SetBinError(22,20.22484);
   hmcerror__20->SetBinError(23,26.96526);
   hmcerror__20->SetBinError(24,11.53294);
   hmcerror__20->SetBinError(25,7.938628);
   hmcerror__20->SetBinError(26,0.3895343);
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
   
   Double_t _fx3025[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3025[25] = {
   24,
   62,
   96,
   123,
   140,
   141,
   140,
   136,
   137,
   116,
   111,
   102,
   105,
   78,
   78,
   66,
   76,
   65,
   55,
   47,
   46,
   44,
   20,
   21,
   7};
   Double_t _felx3025[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3025[25] = {
   5.0476,
   8.0018,
   9.9196,
   11.09054,
   11.83216,
   11.87434,
   11.83216,
   11.6619,
   11.7047,
   10.77033,
   10.53565,
   10.0995,
   10.24695,
   8.9562,
   8.9562,
   8.2509,
   8.8425,
   8.1893,
   7.546,
   6.9882,
   6.9153,
   6.7671,
   4.6266,
   4.7354,
   2.85954};
   Double_t _fehx3025[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3025[25] = {
   4.837,
   7.7989,
   9.718,
   11.09054,
   11.83216,
   11.87434,
   11.83216,
   11.6619,
   11.7047,
   10.77033,
   10.53565,
   10.0995,
   10.24695,
   8.7542,
   8.7542,
   8.0483,
   8.6406,
   7.9866,
   7.3425,
   6.7839,
   6.7108,
   6.5623,
   4.4133,
   4.5229,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(3.726414);
   Graph_Graph3025->SetMaximum(167.7477);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3026[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3026[25] = {
   0.4001549,
   0.3097309,
   0.3155818,
   0.3278351,
   0.3209852,
   0.3680555,
   0.3837127,
   0.4204373,
   0.4436698,
   0.4370627,
   0.3695014,
   0.4373607,
   0.4254309,
   0.3979149,
   0.5239095,
   0.3903668,
   0.4042583,
   0.4216489,
   0.477451,
   0.4285717,
   0.4302786,
   0.4605338,
   0.7445924,
   0.4634727,
   0.8452053};
   Double_t _fehx3026[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3026[25] = {
   0.4001549,
   0.3097309,
   0.3155818,
   0.3278351,
   0.3209852,
   0.3680555,
   0.3837127,
   0.4204373,
   0.4436698,
   0.4370627,
   0.3695014,
   0.4373607,
   0.4254309,
   0.3979149,
   0.5239095,
   0.3903668,
   0.4042583,
   0.4216489,
   0.477451,
   0.4285717,
   0.4302786,
   0.4605338,
   0.7445924,
   0.4634727,
   0.8452053};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,3.465);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3027[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3027[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3027[25] = {
   0.2775626,
   0.2663161,
   0.2670487,
   0.297004,
   0.3033038,
   0.3358923,
   0.3533065,
   0.396293,
   0.4245902,
   0.4100971,
   0.3506426,
   0.4132945,
   0.3710312,
   0.3752036,
   0.3985975,
   0.3624048,
   0.3697918,
   0.3831715,
   0.4268109,
   0.3586954,
   0.3374039,
   0.36472,
   0.3164103,
   0.3086077,
   0.3249565};
   Double_t _fehx3027[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3027[25] = {
   0.2775626,
   0.2663161,
   0.2670487,
   0.297004,
   0.3033038,
   0.3358923,
   0.3533065,
   0.396293,
   0.4245902,
   0.4100971,
   0.3506426,
   0.4132945,
   0.3710312,
   0.3752036,
   0.3985975,
   0.3624048,
   0.3697918,
   0.3831715,
   0.4268109,
   0.3586954,
   0.3374039,
   0.36472,
   0.3164103,
   0.3086077,
   0.3249565};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,3.465);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3028[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3028[25] = {
   0.7462188,
   0.6693753,
   0.713823,
   0.7880892,
   0.8163474,
   0.8866971,
   0.8207059,
   0.8701042,
   0.9957582,
   0.9154523,
   0.800069,
   0.8370286,
   0.9388474,
   0.8555635,
   0.9577554,
   0.7587984,
   1.047988,
   0.9674053,
   0.968792,
   0.8684319,
   0.8366967,
   1.001911,
   0.5522605,
   0.8439243,
   0.745272};
   Double_t _felx3028[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3028[25] = {
   0.1569423,
   0.08639043,
   0.07375874,
   0.07105961,
   0.06899395,
   0.07467336,
   0.06936231,
   0.07461082,
   0.08507336,
   0.08499761,
   0.07593919,
   0.08287818,
   0.09162213,
   0.09823843,
   0.1099724,
   0.09486015,
   0.121932,
   0.1218826,
   0.1329183,
   0.1291229,
   0.1257828,
   0.1540916,
   0.1277544,
   0.1903009,
   0.3044479};
   Double_t _fehx3028[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3028[25] = {
   0.1503942,
   0.08419985,
   0.07225971,
   0.07105961,
   0.06899395,
   0.07467336,
   0.06936231,
   0.07461082,
   0.08507336,
   0.08499761,
   0.07593919,
   0.08287818,
   0.09162213,
   0.09602274,
   0.1074921,
   0.09253087,
   0.1191479,
   0.1188658,
   0.1293337,
   0.125348,
   0.1220631,
   0.1494281,
   0.1218646,
   0.1817612,
   0.2779364};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.3502432);
   Graph_Graph3028->SetMaximum(1.241399);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

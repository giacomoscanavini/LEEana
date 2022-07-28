#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 09:31:43 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-46.15385,-7.251278,338.4615,611.0156);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hmc__4->SetBinContent(0,164.3052);
   hmc__4->SetBinContent(2,83.86147);
   hmc__4->SetBinContent(3,110.3675);
   hmc__4->SetBinContent(4,99.67875);
   hmc__4->SetBinContent(5,104.3403);
   hmc__4->SetBinContent(6,118.6113);
   hmc__4->SetBinContent(7,142.0358);
   hmc__4->SetBinContent(8,149.0764);
   hmc__4->SetBinContent(9,169.5024);
   hmc__4->SetBinContent(10,195.473);
   hmc__4->SetBinContent(11,270.1255);
   hmc__4->SetBinContent(12,314.5903);
   hmc__4->SetBinContent(13,355.2545);
   hmc__4->SetBinContent(14,362.5639);
   hmc__4->SetBinContent(15,268.8281);
   hmc__4->SetBinContent(16,138.7417);
   hmc__4->SetBinContent(17,78.73745);
   hmc__4->SetBinContent(18,51.15287);
   hmc__4->SetBinContent(19,35.14267);
   hmc__4->SetBinContent(20,29.54925);
   hmc__4->SetBinContent(21,23.03105);
   hmc__4->SetBinContent(22,18.85008);
   hmc__4->SetBinContent(23,19.48639);
   hmc__4->SetBinContent(24,15.23887);
   hmc__4->SetBinContent(25,13.97715);
   hmc__4->SetBinContent(26,10.65409);
   hmc__4->SetBinContent(27,10.61473);
   hmc__4->SetBinContent(28,14.09925);
   hmc__4->SetBinContent(29,10.35417);
   hmc__4->SetBinContent(30,126.6872);
   hmc__4->SetBinError(0,6.062155);
   hmc__4->SetBinError(1,0.4212968);
   hmc__4->SetBinError(2,17.16993);
   hmc__4->SetBinError(3,24.64501);
   hmc__4->SetBinError(4,24.17592);
   hmc__4->SetBinError(5,24.66717);
   hmc__4->SetBinError(6,26.59009);
   hmc__4->SetBinError(7,28.92248);
   hmc__4->SetBinError(8,34.40721);
   hmc__4->SetBinError(9,38.45535);
   hmc__4->SetBinError(10,45.60826);
   hmc__4->SetBinError(11,60.52738);
   hmc__4->SetBinError(12,82.03795);
   hmc__4->SetBinError(13,86.01749);
   hmc__4->SetBinError(14,91.86931);
   hmc__4->SetBinError(15,88.14604);
   hmc__4->SetBinError(16,69.08403);
   hmc__4->SetBinError(17,39.08942);
   hmc__4->SetBinError(18,20.29782);
   hmc__4->SetBinError(19,10.94258);
   hmc__4->SetBinError(20,9.322594);
   hmc__4->SetBinError(21,7.754658);
   hmc__4->SetBinError(22,7.312281);
   hmc__4->SetBinError(23,9.220587);
   hmc__4->SetBinError(24,6.008032);
   hmc__4->SetBinError(25,5.598922);
   hmc__4->SetBinError(26,4.582665);
   hmc__4->SetBinError(27,5.673753);
   hmc__4->SetBinError(28,6.635441);
   hmc__4->SetBinError(29,4.660663);
   hmc__4->SetBinError(30,39.47145);
   hmc__4->SetMinimum(-7.251278);
   hmc__4->SetMaximum(580.1022);
   hmc__4->SetEntries(3457.329);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",29,0,300);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(380.6921);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,3.505185);
   hbadmatch_stack_1->SetBinContent(2,3.082469);
   hbadmatch_stack_1->SetBinContent(3,3.766352);
   hbadmatch_stack_1->SetBinContent(4,2.507183);
   hbadmatch_stack_1->SetBinContent(5,2.550443);
   hbadmatch_stack_1->SetBinContent(6,2.954893);
   hbadmatch_stack_1->SetBinContent(7,4.410555);
   hbadmatch_stack_1->SetBinContent(8,4.125461);
   hbadmatch_stack_1->SetBinContent(9,4.083761);
   hbadmatch_stack_1->SetBinContent(10,5.715487);
   hbadmatch_stack_1->SetBinContent(11,4.687785);
   hbadmatch_stack_1->SetBinContent(12,8.340825);
   hbadmatch_stack_1->SetBinContent(13,6.45136);
   hbadmatch_stack_1->SetBinContent(14,4.431232);
   hbadmatch_stack_1->SetBinContent(15,3.565564);
   hbadmatch_stack_1->SetBinContent(16,1.443039);
   hbadmatch_stack_1->SetBinContent(17,4.015395);
   hbadmatch_stack_1->SetBinContent(18,1.888844);
   hbadmatch_stack_1->SetBinContent(19,1.127039);
   hbadmatch_stack_1->SetBinContent(21,0.396364);
   hbadmatch_stack_1->SetBinContent(22,0.7731665);
   hbadmatch_stack_1->SetBinContent(23,1.270501);
   hbadmatch_stack_1->SetBinContent(24,0.5884556);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.8770706);
   hbadmatch_stack_1->SetBinContent(27,0.9269427);
   hbadmatch_stack_1->SetBinContent(28,0.832776);
   hbadmatch_stack_1->SetBinContent(29,0.7974958);
   hbadmatch_stack_1->SetBinContent(30,2.659453);
   hbadmatch_stack_1->SetBinError(0,1.027458);
   hbadmatch_stack_1->SetBinError(2,0.8781319);
   hbadmatch_stack_1->SetBinError(3,0.9727598);
   hbadmatch_stack_1->SetBinError(4,0.7758653);
   hbadmatch_stack_1->SetBinError(5,0.8435679);
   hbadmatch_stack_1->SetBinError(6,1.054383);
   hbadmatch_stack_1->SetBinError(7,1.124351);
   hbadmatch_stack_1->SetBinError(8,0.9556224);
   hbadmatch_stack_1->SetBinError(9,1.069093);
   hbadmatch_stack_1->SetBinError(10,1.214488);
   hbadmatch_stack_1->SetBinError(11,1.148616);
   hbadmatch_stack_1->SetBinError(12,1.520315);
   hbadmatch_stack_1->SetBinError(13,1.347728);
   hbadmatch_stack_1->SetBinError(14,1.087238);
   hbadmatch_stack_1->SetBinError(15,1.352276);
   hbadmatch_stack_1->SetBinError(16,0.6609395);
   hbadmatch_stack_1->SetBinError(17,2.075504);
   hbadmatch_stack_1->SetBinError(18,0.8372713);
   hbadmatch_stack_1->SetBinError(19,0.5201044);
   hbadmatch_stack_1->SetBinError(21,0.2770433);
   hbadmatch_stack_1->SetBinError(22,0.4586746);
   hbadmatch_stack_1->SetBinError(23,0.5895188);
   hbadmatch_stack_1->SetBinError(24,0.3397478);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.5197486);
   hbadmatch_stack_1->SetBinError(27,0.4800908);
   hbadmatch_stack_1->SetBinError(28,0.5208111);
   hbadmatch_stack_1->SetBinError(29,0.4912934);
   hbadmatch_stack_1->SetBinError(30,0.82747);
   hbadmatch_stack_1->SetEntries(325);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,13.57606);
   hext_stack_2->SetBinContent(2,12.67348);
   hext_stack_2->SetBinContent(3,17.48924);
   hext_stack_2->SetBinContent(4,10.14457);
   hext_stack_2->SetBinContent(5,8.738824);
   hext_stack_2->SetBinContent(6,12.69943);
   hext_stack_2->SetBinContent(7,18.68025);
   hext_stack_2->SetBinContent(8,12.92727);
   hext_stack_2->SetBinContent(9,17.89301);
   hext_stack_2->SetBinContent(10,15.34091);
   hext_stack_2->SetBinContent(11,28.2091);
   hext_stack_2->SetBinContent(12,10.29738);
   hext_stack_2->SetBinContent(13,16.09509);
   hext_stack_2->SetBinContent(14,23.7222);
   hext_stack_2->SetBinContent(15,27.73629);
   hext_stack_2->SetBinContent(16,5.83638);
   hext_stack_2->SetBinContent(17,6.049854);
   hext_stack_2->SetBinContent(18,3.654981);
   hext_stack_2->SetBinContent(19,2.032995);
   hext_stack_2->SetBinContent(20,3.532468);
   hext_stack_2->SetBinContent(21,1.379791);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,1.950793);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,0.7309963);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,1.454812);
   hext_stack_2->SetBinContent(30,7.765632);
   hext_stack_2->SetBinError(0,2.509914);
   hext_stack_2->SetBinError(2,2.471869);
   hext_stack_2->SetBinError(3,2.786869);
   hext_stack_2->SetBinError(4,1.982145);
   hext_stack_2->SetBinError(5,1.978979);
   hext_stack_2->SetBinError(6,2.375217);
   hext_stack_2->SetBinError(7,3.224566);
   hext_stack_2->SetBinError(8,2.467631);
   hext_stack_2->SetBinError(9,3.098176);
   hext_stack_2->SetBinError(10,2.747657);
   hext_stack_2->SetBinError(11,3.844085);
   hext_stack_2->SetBinError(12,2.028585);
   hext_stack_2->SetBinError(13,2.772728);
   hext_stack_2->SetBinError(14,3.468491);
   hext_stack_2->SetBinError(15,3.823692);
   hext_stack_2->SetBinError(16,1.493496);
   hext_stack_2->SetBinError(17,1.75513);
   hext_stack_2->SetBinError(18,1.163091);
   hext_stack_2->SetBinError(19,0.9091828);
   hext_stack_2->SetBinError(20,1.47091);
   hext_stack_2->SetBinError(21,0.6935586);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.8755137);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.5201503);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.8615765);
   hext_stack_2->SetBinError(30,1.89754);
   hext_stack_2->SetEntries(634);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,1.055351);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.7683691);
   hdirt_stack_3->SetBinContent(4,0.8389931);
   hdirt_stack_3->SetBinContent(5,1.038153);
   hdirt_stack_3->SetBinContent(6,1.510482);
   hdirt_stack_3->SetBinContent(7,1.494204);
   hdirt_stack_3->SetBinContent(8,1.363112);
   hdirt_stack_3->SetBinContent(9,0.7759784);
   hdirt_stack_3->SetBinContent(10,0.5868663);
   hdirt_stack_3->SetBinContent(12,2.791565);
   hdirt_stack_3->SetBinContent(13,0.7947583);
   hdirt_stack_3->SetBinContent(14,1.358448);
   hdirt_stack_3->SetBinContent(15,0.9140499);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(20,0.2516114);
   hdirt_stack_3->SetBinContent(28,0.3381872);
   hdirt_stack_3->SetBinContent(30,0.1380715);
   hdirt_stack_3->SetBinError(0,0.5216574);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.4588243);
   hdirt_stack_3->SetBinError(4,0.3909714);
   hdirt_stack_3->SetBinError(5,0.4782007);
   hdirt_stack_3->SetBinError(6,0.6637097);
   hdirt_stack_3->SetBinError(7,0.608529);
   hdirt_stack_3->SetBinError(8,0.6912205);
   hdirt_stack_3->SetBinError(9,0.458477);
   hdirt_stack_3->SetBinError(10,0.3503208);
   hdirt_stack_3->SetBinError(12,1.168167);
   hdirt_stack_3->SetBinError(13,0.4034967);
   hdirt_stack_3->SetBinError(14,0.5718072);
   hdirt_stack_3->SetBinError(15,0.4788161);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(20,0.2516114);
   hdirt_stack_3->SetBinError(28,0.3381872);
   hdirt_stack_3->SetBinError(30,0.1380715);
   hdirt_stack_3->SetEntries(72);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,14.53265);
   houtFV_stack_4->SetBinContent(2,8.405545);
   houtFV_stack_4->SetBinContent(3,15.62725);
   houtFV_stack_4->SetBinContent(4,8.742478);
   houtFV_stack_4->SetBinContent(5,7.480628);
   houtFV_stack_4->SetBinContent(6,10.89497);
   houtFV_stack_4->SetBinContent(7,11.05264);
   houtFV_stack_4->SetBinContent(8,11.9696);
   houtFV_stack_4->SetBinContent(9,10.67544);
   houtFV_stack_4->SetBinContent(10,10.3813);
   houtFV_stack_4->SetBinContent(11,15.55797);
   houtFV_stack_4->SetBinContent(12,14.30156);
   houtFV_stack_4->SetBinContent(13,19.26166);
   houtFV_stack_4->SetBinContent(14,14.70127);
   houtFV_stack_4->SetBinContent(15,14.27671);
   houtFV_stack_4->SetBinContent(16,7.872701);
   houtFV_stack_4->SetBinContent(17,4.69811);
   houtFV_stack_4->SetBinContent(18,2.892406);
   houtFV_stack_4->SetBinContent(19,1.180292);
   houtFV_stack_4->SetBinContent(20,1.895007);
   houtFV_stack_4->SetBinContent(21,1.221329);
   houtFV_stack_4->SetBinContent(22,0.9785053);
   houtFV_stack_4->SetBinContent(23,0.5352025);
   houtFV_stack_4->SetBinContent(24,0.5901461);
   houtFV_stack_4->SetBinContent(25,1.175221);
   houtFV_stack_4->SetBinContent(26,1.073786);
   houtFV_stack_4->SetBinContent(27,0.7302274);
   houtFV_stack_4->SetBinContent(28,0.9269427);
   houtFV_stack_4->SetBinContent(29,0.9286332);
   houtFV_stack_4->SetBinContent(30,6.307806);
   houtFV_stack_4->SetBinError(0,1.943497);
   houtFV_stack_4->SetBinError(2,1.449883);
   houtFV_stack_4->SetBinError(3,2.06946);
   houtFV_stack_4->SetBinError(4,1.488307);
   houtFV_stack_4->SetBinError(5,1.345439);
   houtFV_stack_4->SetBinError(6,1.640588);
   houtFV_stack_4->SetBinError(7,1.649344);
   houtFV_stack_4->SetBinError(8,1.716063);
   houtFV_stack_4->SetBinError(9,1.669447);
   houtFV_stack_4->SetBinError(10,1.637978);
   houtFV_stack_4->SetBinError(11,1.96798);
   houtFV_stack_4->SetBinError(12,1.932525);
   houtFV_stack_4->SetBinError(13,2.177446);
   houtFV_stack_4->SetBinError(14,1.925287);
   houtFV_stack_4->SetBinError(15,1.966644);
   houtFV_stack_4->SetBinError(16,1.35727);
   houtFV_stack_4->SetBinError(17,1.057394);
   houtFV_stack_4->SetBinError(18,0.7853625);
   houtFV_stack_4->SetBinError(19,0.4818523);
   houtFV_stack_4->SetBinError(20,0.6917885);
   houtFV_stack_4->SetBinError(21,0.5001554);
   houtFV_stack_4->SetBinError(22,0.4376048);
   houtFV_stack_4->SetBinError(23,0.3921167);
   houtFV_stack_4->SetBinError(24,0.340721);
   houtFV_stack_4->SetBinError(25,0.4797863);
   houtFV_stack_4->SetBinError(26,0.5557297);
   houtFV_stack_4->SetBinError(27,0.4379386);
   houtFV_stack_4->SetBinError(28,0.4800908);
   houtFV_stack_4->SetBinError(29,0.48078);
   houtFV_stack_4->SetBinError(30,1.263792);
   houtFV_stack_4->SetEntries(950);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.781536);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5845718);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5161542);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2954882);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2081635);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2943888);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2032767);
   hNCpi0inFVcoh_stack_5->SetEntries(117);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,71.65447);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,24.59893);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,33.32236);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,33.4514);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,37.30179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,48.33543);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,53.72781);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,69.65462);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,84.81766);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,108.3358);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,144.4674);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,207.8821);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,238.8852);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,236.5319);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,154.7935);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,82.46013);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,40.31768);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,24.54215);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,15.57275);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,12.67396);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,8.435129);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,8.965239);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,4.990627);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,5.271628);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,4.879195);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,3.499965);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,3.76702);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,4.238989);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,2.523466);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,31.78191);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,2.774895);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.590844);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.881871);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,1.854177);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.002932);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.207516);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.379726);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.742894);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.983196);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.397134);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.841598);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.797401);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,5.042637);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.052822);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,4.097776);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.032326);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.149406);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.706103);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.294157);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.195052);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.914203);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,0.9975396);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.6805121);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.758242);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.7019558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.5556163);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.7017255);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,0.7108498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,0.5305329);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,1.960146);
   hNCpi0inFVnoncoh_stack_6->SetEntries(33079);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_7->SetBinContent(0,14.73162);
   hCCpi0inFV_stack_7->SetBinContent(2,8.405229);
   hCCpi0inFV_stack_7->SetBinContent(3,10.5396);
   hCCpi0inFV_stack_7->SetBinContent(4,13.17011);
   hCCpi0inFV_stack_7->SetBinContent(5,14.95264);
   hCCpi0inFV_stack_7->SetBinContent(6,13.91952);
   hCCpi0inFV_stack_7->SetBinContent(7,20.55818);
   hCCpi0inFV_stack_7->SetBinContent(8,22.17999);
   hCCpi0inFV_stack_7->SetBinContent(9,24.99439);
   hCCpi0inFV_stack_7->SetBinContent(10,30.7047);
   hCCpi0inFV_stack_7->SetBinContent(11,43.89252);
   hCCpi0inFV_stack_7->SetBinContent(12,44.23724);
   hCCpi0inFV_stack_7->SetBinContent(13,48.9867);
   hCCpi0inFV_stack_7->SetBinContent(14,57.53468);
   hCCpi0inFV_stack_7->SetBinContent(15,44.22745);
   hCCpi0inFV_stack_7->SetBinContent(16,25.63443);
   hCCpi0inFV_stack_7->SetBinContent(17,14.4299);
   hCCpi0inFV_stack_7->SetBinContent(18,12.82444);
   hCCpi0inFV_stack_7->SetBinContent(19,11.61999);
   hCCpi0inFV_stack_7->SetBinContent(20,5.993707);
   hCCpi0inFV_stack_7->SetBinContent(21,6.648966);
   hCCpi0inFV_stack_7->SetBinContent(22,5.263474);
   hCCpi0inFV_stack_7->SetBinContent(23,6.353589);
   hCCpi0inFV_stack_7->SetBinContent(24,5.20434);
   hCCpi0inFV_stack_7->SetBinContent(25,5.215324);
   hCCpi0inFV_stack_7->SetBinContent(26,2.979234);
   hCCpi0inFV_stack_7->SetBinContent(27,3.490248);
   hCCpi0inFV_stack_7->SetBinContent(28,4.139964);
   hCCpi0inFV_stack_7->SetBinContent(29,4.063477);
   hCCpi0inFV_stack_7->SetBinContent(30,44.18285);
   hCCpi0inFV_stack_7->SetBinError(0,1.960701);
   hCCpi0inFV_stack_7->SetBinError(2,1.508609);
   hCCpi0inFV_stack_7->SetBinError(3,1.69507);
   hCCpi0inFV_stack_7->SetBinError(4,1.839954);
   hCCpi0inFV_stack_7->SetBinError(5,1.886727);
   hCCpi0inFV_stack_7->SetBinError(6,1.785444);
   hCCpi0inFV_stack_7->SetBinError(7,2.27076);
   hCCpi0inFV_stack_7->SetBinError(8,2.381657);
   hCCpi0inFV_stack_7->SetBinError(9,2.527985);
   hCCpi0inFV_stack_7->SetBinError(10,2.741529);
   hCCpi0inFV_stack_7->SetBinError(11,3.363072);
   hCCpi0inFV_stack_7->SetBinError(12,3.343519);
   hCCpi0inFV_stack_7->SetBinError(13,3.490569);
   hCCpi0inFV_stack_7->SetBinError(14,3.811558);
   hCCpi0inFV_stack_7->SetBinError(15,3.294753);
   hCCpi0inFV_stack_7->SetBinError(16,2.597282);
   hCCpi0inFV_stack_7->SetBinError(17,1.878702);
   hCCpi0inFV_stack_7->SetBinError(18,1.813358);
   hCCpi0inFV_stack_7->SetBinError(19,1.681158);
   hCCpi0inFV_stack_7->SetBinError(20,1.25096);
   hCCpi0inFV_stack_7->SetBinError(21,1.302711);
   hCCpi0inFV_stack_7->SetBinError(22,1.126951);
   hCCpi0inFV_stack_7->SetBinError(23,1.240845);
   hCCpi0inFV_stack_7->SetBinError(24,1.149168);
   hCCpi0inFV_stack_7->SetBinError(25,1.20962);
   hCCpi0inFV_stack_7->SetBinError(26,0.8548804);
   hCCpi0inFV_stack_7->SetBinError(27,0.8928375);
   hCCpi0inFV_stack_7->SetBinError(28,1.007829);
   hCCpi0inFV_stack_7->SetBinError(29,1.05199);
   hCCpi0inFV_stack_7->SetBinError(30,3.342377);
   hCCpi0inFV_stack_7->SetEntries(2444);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hNCinFV_stack_8->SetBinContent(0,17.37946);
   hNCinFV_stack_8->SetBinContent(2,6.482445);
   hNCinFV_stack_8->SetBinContent(3,7.278841);
   hNCinFV_stack_8->SetBinContent(4,8.002914);
   hNCinFV_stack_8->SetBinContent(5,11.18394);
   hNCinFV_stack_8->SetBinContent(6,7.197085);
   hNCinFV_stack_8->SetBinContent(7,6.300336);
   hNCinFV_stack_8->SetBinContent(8,8.36108);
   hNCinFV_stack_8->SetBinContent(9,6.605248);
   hNCinFV_stack_8->SetBinContent(10,8.40419);
   hNCinFV_stack_8->SetBinContent(11,8.789628);
   hNCinFV_stack_8->SetBinContent(12,9.238151);
   hNCinFV_stack_8->SetBinContent(13,7.78216);
   hNCinFV_stack_8->SetBinContent(14,5.229931);
   hNCinFV_stack_8->SetBinContent(15,8.947845);
   hNCinFV_stack_8->SetBinContent(16,4.875147);
   hNCinFV_stack_8->SetBinContent(17,3.324483);
   hNCinFV_stack_8->SetBinContent(18,1.763676);
   hNCinFV_stack_8->SetBinContent(19,0.5352025);
   hNCinFV_stack_8->SetBinContent(20,1.855576);
   hNCinFV_stack_8->SetBinContent(21,0.7319179);
   hNCinFV_stack_8->SetBinContent(22,1.020533);
   hNCinFV_stack_8->SetBinContent(23,0.9286332);
   hNCinFV_stack_8->SetBinContent(24,0.9252522);
   hNCinFV_stack_8->SetBinContent(26,1.073786);
   hNCinFV_stack_8->SetBinContent(27,0.7319179);
   hNCinFV_stack_8->SetBinContent(28,0.1967154);
   hNCinFV_stack_8->SetBinContent(29,0.3401776);
   hNCinFV_stack_8->SetBinContent(30,18.06766);
   hNCinFV_stack_8->SetBinError(0,2.141059);
   hNCinFV_stack_8->SetBinError(2,1.345135);
   hNCinFV_stack_8->SetBinError(3,1.330234);
   hNCinFV_stack_8->SetBinError(4,1.468772);
   hNCinFV_stack_8->SetBinError(5,1.711372);
   hNCinFV_stack_8->SetBinError(6,1.287433);
   hNCinFV_stack_8->SetBinError(7,1.256194);
   hNCinFV_stack_8->SetBinError(8,1.442799);
   hNCinFV_stack_8->SetBinError(9,1.241261);
   hNCinFV_stack_8->SetBinError(10,1.428065);
   hNCinFV_stack_8->SetBinError(11,1.468547);
   hNCinFV_stack_8->SetBinError(12,1.53356);
   hNCinFV_stack_8->SetBinError(13,1.33101);
   hNCinFV_stack_8->SetBinError(14,1.12717);
   hNCinFV_stack_8->SetBinError(15,1.482038);
   hNCinFV_stack_8->SetBinError(16,1.160801);
   hNCinFV_stack_8->SetBinError(17,0.9211559);
   hNCinFV_stack_8->SetBinError(18,0.5878975);
   hNCinFV_stack_8->SetBinError(19,0.3921167);
   hNCinFV_stack_8->SetBinError(20,0.6794384);
   hNCinFV_stack_8->SetBinError(21,0.438694);
   hNCinFV_stack_8->SetBinError(22,0.5892049);
   hNCinFV_stack_8->SetBinError(23,0.48078);
   hNCinFV_stack_8->SetBinError(24,0.4794006);
   hNCinFV_stack_8->SetBinError(26,0.5557297);
   hNCinFV_stack_8->SetBinError(27,0.438694);
   hNCinFV_stack_8->SetBinError(28,0.1967154);
   hNCinFV_stack_8->SetBinError(29,0.3401776);
   hNCinFV_stack_8->SetBinError(30,2.149479);
   hNCinFV_stack_8->SetEntries(696);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_9->SetBinContent(0,23.96512);
   hnumuCCinFV_stack_9->SetBinContent(2,19.23421);
   hnumuCCinFV_stack_9->SetBinContent(3,20.3821);
   hnumuCCinFV_stack_9->SetBinContent(4,21.78421);
   hnumuCCinFV_stack_9->SetBinContent(5,20.06547);
   hnumuCCinFV_stack_9->SetBinContent(6,19.84803);
   hnumuCCinFV_stack_9->SetBinContent(7,25.13023);
   hnumuCCinFV_stack_9->SetBinContent(8,17.61931);
   hnumuCCinFV_stack_9->SetBinContent(9,18.66331);
   hnumuCCinFV_stack_9->SetBinContent(10,15.41922);
   hnumuCCinFV_stack_9->SetBinContent(11,21.76637);
   hnumuCCinFV_stack_9->SetBinContent(12,16.10351);
   hnumuCCinFV_stack_9->SetBinContent(13,16.32511);
   hnumuCCinFV_stack_9->SetBinContent(14,16.8091);
   hnumuCCinFV_stack_9->SetBinContent(15,13.41704);
   hnumuCCinFV_stack_9->SetBinContent(16,9.591673);
   hnumuCCinFV_stack_9->SetBinContent(17,5.397248);
   hnumuCCinFV_stack_9->SetBinContent(18,3.363004);
   hnumuCCinFV_stack_9->SetBinContent(19,2.851862);
   hnumuCCinFV_stack_9->SetBinContent(20,2.899995);
   hnumuCCinFV_stack_9->SetBinContent(21,2.397041);
   hnumuCCinFV_stack_9->SetBinContent(22,1.413162);
   hnumuCCinFV_stack_9->SetBinContent(23,4.015459);
   hnumuCCinFV_stack_9->SetBinContent(24,0.6803578);
   hnumuCCinFV_stack_9->SetBinContent(25,1.423377);
   hnumuCCinFV_stack_9->SetBinContent(26,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(27,0.9683696);
   hnumuCCinFV_stack_9->SetBinContent(28,3.101274);
   hnumuCCinFV_stack_9->SetBinContent(29,0.2461074);
   hnumuCCinFV_stack_9->SetBinContent(30,13.53185);
   hnumuCCinFV_stack_9->SetBinError(0,2.710635);
   hnumuCCinFV_stack_9->SetBinError(2,2.786553);
   hnumuCCinFV_stack_9->SetBinError(3,2.818807);
   hnumuCCinFV_stack_9->SetBinError(4,2.826604);
   hnumuCCinFV_stack_9->SetBinError(5,2.655429);
   hnumuCCinFV_stack_9->SetBinError(6,2.912402);
   hnumuCCinFV_stack_9->SetBinError(7,3.026226);
   hnumuCCinFV_stack_9->SetBinError(8,2.451339);
   hnumuCCinFV_stack_9->SetBinError(9,2.341722);
   hnumuCCinFV_stack_9->SetBinError(10,2.200042);
   hnumuCCinFV_stack_9->SetBinError(11,2.654142);
   hnumuCCinFV_stack_9->SetBinError(12,2.249206);
   hnumuCCinFV_stack_9->SetBinError(13,2.294621);
   hnumuCCinFV_stack_9->SetBinError(14,2.454472);
   hnumuCCinFV_stack_9->SetBinError(15,2.99059);
   hnumuCCinFV_stack_9->SetBinError(16,1.734348);
   hnumuCCinFV_stack_9->SetBinError(17,1.474807);
   hnumuCCinFV_stack_9->SetBinError(18,0.9302166);
   hnumuCCinFV_stack_9->SetBinError(19,0.8548395);
   hnumuCCinFV_stack_9->SetBinError(20,0.825135);
   hnumuCCinFV_stack_9->SetBinError(21,0.8247908);
   hnumuCCinFV_stack_9->SetBinError(22,0.5356828);
   hnumuCCinFV_stack_9->SetBinError(23,1.20505);
   hnumuCCinFV_stack_9->SetBinError(24,0.4810838);
   hnumuCCinFV_stack_9->SetBinError(25,0.6001769);
   hnumuCCinFV_stack_9->SetBinError(26,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(27,0.5711513);
   hnumuCCinFV_stack_9->SetBinError(28,1.512855);
   hnumuCCinFV_stack_9->SetBinError(29,0.2374982);
   hnumuCCinFV_stack_9->SetBinError(30,1.853382);
   hnumuCCinFV_stack_9->SetEntries(1303);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_10->SetBinContent(0,3.123719);
   hnueCCinFV_stack_10->SetBinContent(2,0.7852939);
   hnueCCinFV_stack_10->SetBinContent(3,0.9845065);
   hnueCCinFV_stack_10->SetBinContent(4,0.6182342);
   hnueCCinFV_stack_10->SetBinContent(5,0.8195307);
   hnueCCinFV_stack_10->SetBinContent(6,0.9731586);
   hnueCCinFV_stack_10->SetBinContent(7,0.6536552);
   hnueCCinFV_stack_10->SetBinContent(8,0.8201842);
   hnueCCinFV_stack_10->SetBinContent(9,0.56212);
   hnueCCinFV_stack_10->SetBinContent(11,2.448461);
   hnueCCinFV_stack_10->SetBinContent(12,0.9936023);
   hnueCCinFV_stack_10->SetBinContent(13,0.3662158);
   hnueCCinFV_stack_10->SetBinContent(14,1.72903);
   hnueCCinFV_stack_10->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_10->SetBinContent(16,0.536893);
   hnueCCinFV_stack_10->SetBinContent(17,0.4074658);
   hnueCCinFV_stack_10->SetBinContent(20,0.4469234);
   hnueCCinFV_stack_10->SetBinContent(21,1.764711);
   hnueCCinFV_stack_10->SetBinContent(23,0.9857838);
   hnueCCinFV_stack_10->SetBinContent(25,0.680723);
   hnueCCinFV_stack_10->SetBinContent(30,1.944905);
   hnueCCinFV_stack_10->SetBinError(0,1.334802);
   hnueCCinFV_stack_10->SetBinError(2,0.4648084);
   hnueCCinFV_stack_10->SetBinError(3,0.5010983);
   hnueCCinFV_stack_10->SetBinError(4,0.4496716);
   hnueCCinFV_stack_10->SetBinError(5,0.489334);
   hnueCCinFV_stack_10->SetBinError(6,0.5000346);
   hnueCCinFV_stack_10->SetBinError(7,0.3857121);
   hnueCCinFV_stack_10->SetBinError(8,0.4942593);
   hnueCCinFV_stack_10->SetBinError(9,0.4149909);
   hnueCCinFV_stack_10->SetBinError(11,1.334596);
   hnueCCinFV_stack_10->SetBinError(12,0.5094453);
   hnueCCinFV_stack_10->SetBinError(13,0.2595015);
   hnueCCinFV_stack_10->SetBinError(14,0.8418772);
   hnueCCinFV_stack_10->SetBinError(15,0.3387718);
   hnueCCinFV_stack_10->SetBinError(16,0.3929602);
   hnueCCinFV_stack_10->SetBinError(17,0.2882927);
   hnueCCinFV_stack_10->SetBinError(20,0.3182782);
   hnueCCinFV_stack_10->SetBinError(21,1.581755);
   hnueCCinFV_stack_10->SetBinError(23,0.5068534);
   hnueCCinFV_stack_10->SetBinError(25,0.4810839);
   hnueCCinFV_stack_10->SetBinError(30,0.6618999);
   hnueCCinFV_stack_10->SetEntries(77);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);
   hmcerror__5->SetBinContent(0,164.3052);
   hmcerror__5->SetBinContent(2,83.86147);
   hmcerror__5->SetBinContent(3,110.3675);
   hmcerror__5->SetBinContent(4,99.67875);
   hmcerror__5->SetBinContent(5,104.3403);
   hmcerror__5->SetBinContent(6,118.6113);
   hmcerror__5->SetBinContent(7,142.0358);
   hmcerror__5->SetBinContent(8,149.0764);
   hmcerror__5->SetBinContent(9,169.5024);
   hmcerror__5->SetBinContent(10,195.473);
   hmcerror__5->SetBinContent(11,270.1255);
   hmcerror__5->SetBinContent(12,314.5903);
   hmcerror__5->SetBinContent(13,355.2545);
   hmcerror__5->SetBinContent(14,362.5639);
   hmcerror__5->SetBinContent(15,268.8281);
   hmcerror__5->SetBinContent(16,138.7417);
   hmcerror__5->SetBinContent(17,78.73745);
   hmcerror__5->SetBinContent(18,51.15287);
   hmcerror__5->SetBinContent(19,35.14267);
   hmcerror__5->SetBinContent(20,29.54925);
   hmcerror__5->SetBinContent(21,23.03105);
   hmcerror__5->SetBinContent(22,18.85008);
   hmcerror__5->SetBinContent(23,19.48639);
   hmcerror__5->SetBinContent(24,15.23887);
   hmcerror__5->SetBinContent(25,13.97715);
   hmcerror__5->SetBinContent(26,10.65409);
   hmcerror__5->SetBinContent(27,10.61473);
   hmcerror__5->SetBinContent(28,14.09925);
   hmcerror__5->SetBinContent(29,10.35417);
   hmcerror__5->SetBinContent(30,126.6872);
   hmcerror__5->SetBinError(0,6.062155);
   hmcerror__5->SetBinError(1,0.4212968);
   hmcerror__5->SetBinError(2,17.16993);
   hmcerror__5->SetBinError(3,24.64501);
   hmcerror__5->SetBinError(4,24.17592);
   hmcerror__5->SetBinError(5,24.66717);
   hmcerror__5->SetBinError(6,26.59009);
   hmcerror__5->SetBinError(7,28.92248);
   hmcerror__5->SetBinError(8,34.40721);
   hmcerror__5->SetBinError(9,38.45535);
   hmcerror__5->SetBinError(10,45.60826);
   hmcerror__5->SetBinError(11,60.52738);
   hmcerror__5->SetBinError(12,82.03795);
   hmcerror__5->SetBinError(13,86.01749);
   hmcerror__5->SetBinError(14,91.86931);
   hmcerror__5->SetBinError(15,88.14604);
   hmcerror__5->SetBinError(16,69.08403);
   hmcerror__5->SetBinError(17,39.08942);
   hmcerror__5->SetBinError(18,20.29782);
   hmcerror__5->SetBinError(19,10.94258);
   hmcerror__5->SetBinError(20,9.322594);
   hmcerror__5->SetBinError(21,7.754658);
   hmcerror__5->SetBinError(22,7.312281);
   hmcerror__5->SetBinError(23,9.220587);
   hmcerror__5->SetBinError(24,6.008032);
   hmcerror__5->SetBinError(25,5.598922);
   hmcerror__5->SetBinError(26,4.582665);
   hmcerror__5->SetBinError(27,5.673753);
   hmcerror__5->SetBinError(28,6.635441);
   hmcerror__5->SetBinError(29,4.660663);
   hmcerror__5->SetBinError(30,39.47145);
   hmcerror__5->SetEntries(3457.329);

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
   
   Double_t _fx3005[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3005[29] = {
   0,
   57,
   88,
   84,
   103,
   90,
   116,
   135,
   122,
   151,
   222,
   225,
   302,
   287,
   154,
   82,
   59,
   23,
   20,
   30,
   15,
   15,
   14,
   15,
   13,
   11,
   7,
   8,
   7};
   Double_t _felx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3005[29] = {
   0,
   7.679,
   9.5036,
   9.2886,
   10.14889,
   9.6093,
   10.77033,
   11.61895,
   11.04536,
   12.28821,
   14.89966,
   15,
   17.37815,
   16.94107,
   12.40967,
   9.1791,
   7.8097,
   4.9457,
   4.6266,
   5.6197,
   4.0385,
   4.0385,
   3.9102,
   4.0385,
   3.77763,
   3.4975,
   2.85954,
   3.0307,
   2.85954};
   Double_t _fehx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3005[29] = {
   1.1478,
   7.4757,
   9.3021,
   9.0869,
   10.14889,
   9.4079,
   10.77033,
   11.61895,
   11.04536,
   12.28821,
   14.89966,
   15,
   17.37815,
   16.94107,
   12.40967,
   8.9774,
   7.6066,
   4.7346,
   4.4133,
   5.4117,
   3.8197,
   3.8197,
   3.6898,
   3.8197,
   3.5552,
   3.27,
   2.61053,
   2.7896,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,330);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(351.316);
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
   
   TLegend *leg = new TLegend(0.6,0.3,0.9,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.2/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2455.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 260.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.3","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.0","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.3","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1698.2","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 512.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 128.1","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 301.1","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 17.2","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3006[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3006[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3006[29] = {
   0,
   0.2047416,
   0.2232994,
   0.2425383,
   0.2364107,
   0.2241783,
   0.2036282,
   0.2308025,
   0.2268721,
   0.2333225,
   0.2240713,
   0.2607771,
   0.2421292,
   0.2533879,
   0.32789,
   0.4979328,
   0.4964527,
   0.396807,
   0.311376,
   0.3154934,
   0.3367045,
   0.3879178,
   0.4731807,
   0.394257,
   0.4005767,
   0.4301321,
   0.5345172,
   0.4706238,
   0.4501243};
   Double_t _fehx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3006[29] = {
   0,
   0.2047416,
   0.2232994,
   0.2425383,
   0.2364107,
   0.2241783,
   0.2036282,
   0.2308025,
   0.2268721,
   0.2333225,
   0.2240713,
   0.2607771,
   0.2421292,
   0.2533879,
   0.32789,
   0.4979328,
   0.4964527,
   0.396807,
   0.311376,
   0.3154934,
   0.3367045,
   0.3879178,
   0.4731807,
   0.394257,
   0.4005767,
   0.4301321,
   0.5345172,
   0.4706238,
   0.4501243};
   grae = new TGraphAsymmErrors(29,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,330);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} mass [MeV/c^{2}]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3007[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3007[29] = {
   0,
   0.1787829,
   0.1756273,
   0.193988,
   0.1996957,
   0.2048812,
   0.1914898,
   0.208467,
   0.2144936,
   0.2268502,
   0.2175345,
   0.2523739,
   0.2394295,
   0.2385242,
   0.2231187,
   0.2370921,
   0.2124802,
   0.232695,
   0.2277436,
   0.2272369,
   0.2349085,
   0.2571308,
   0.2400481,
   0.2369312,
   0.2515808,
   0.2671372,
   0.2761012,
   0.2850831,
   0.2465629};
   Double_t _fehx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3007[29] = {
   0,
   0.1787829,
   0.1756273,
   0.193988,
   0.1996957,
   0.2048812,
   0.1914898,
   0.208467,
   0.2144936,
   0.2268502,
   0.2175345,
   0.2523739,
   0.2394295,
   0.2385242,
   0.2231187,
   0.2370921,
   0.2124802,
   0.232695,
   0.2277436,
   0.2272369,
   0.2349085,
   0.2571308,
   0.2400481,
   0.2369312,
   0.2515808,
   0.2671372,
   0.2761012,
   0.2850831,
   0.2465629};
   grae = new TGraphAsymmErrors(29,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,330);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3008[29] = {
   10,
   0.6796924,
   0.7973359,
   0.8427072,
   0.9871542,
   0.7587809,
   0.8166957,
   0.9055757,
   0.719754,
   0.7724851,
   0.8218403,
   0.7152159,
   0.8500948,
   0.7915846,
   0.5728568,
   0.5910264,
   0.7493258,
   0.4496326,
   0.5691088,
   1.015254,
   0.6512947,
   0.7957527,
   0.71845,
   0.9843248,
   0.9300892,
   1.032467,
   0.6594613,
   0.5674063,
   0.6760563};
   Double_t _felx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3008[29] = {
   0,
   0.09156768,
   0.08610865,
   0.09318536,
   0.09726719,
   0.08101503,
   0.07582829,
   0.07793955,
   0.06516346,
   0.06286394,
   0.05515831,
   0.04768106,
   0.04891746,
   0.04672576,
   0.04616212,
   0.06615964,
   0.0991866,
   0.09668469,
   0.1316519,
   0.1901808,
   0.1753502,
   0.2142432,
   0.2006631,
   0.265013,
   0.2702717,
   0.3282777,
   0.2693937,
   0.2149548,
   0.2761728};
   Double_t _fehx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3008[29] = {
   0,
   0.08914345,
   0.08428293,
   0.09116186,
   0.09726719,
   0.07931705,
   0.07582829,
   0.07793955,
   0.06516346,
   0.06286394,
   0.05515831,
   0.04768106,
   0.04891746,
   0.04672576,
   0.04616212,
   0.06470586,
   0.09660714,
   0.09255785,
   0.1255824,
   0.1831417,
   0.16585,
   0.2026358,
   0.1893526,
   0.250655,
   0.2543579,
   0.3069244,
   0.2459348,
   0.1978546,
   0.2521236};
   grae = new TGraphAsymmErrors(29,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,330);
   Graph_Graph3008->SetMinimum(0.3172063);
   Graph_Graph3008->SetMaximum(10.96475);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_pi0_mass_all",29,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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

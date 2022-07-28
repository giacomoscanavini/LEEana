#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 14:37:58 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-27.69231,-0.6786491,203.0769,57.18511);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmc__1->SetBinContent(1,9.412617);
   hmc__1->SetBinContent(2,21.92716);
   hmc__1->SetBinContent(3,31.02896);
   hmc__1->SetBinContent(4,33.93245);
   hmc__1->SetBinContent(5,32.92809);
   hmc__1->SetBinContent(6,28.2641);
   hmc__1->SetBinContent(7,26.10406);
   hmc__1->SetBinContent(8,23.03783);
   hmc__1->SetBinContent(9,20.02099);
   hmc__1->SetBinContent(10,14.10271);
   hmc__1->SetBinContent(11,11.89691);
   hmc__1->SetBinContent(12,9.718207);
   hmc__1->SetBinContent(13,7.936648);
   hmc__1->SetBinContent(14,7.081503);
   hmc__1->SetBinContent(15,7.642393);
   hmc__1->SetBinContent(16,6.423255);
   hmc__1->SetBinContent(17,6.360448);
   hmc__1->SetBinContent(18,6.099152);
   hmc__1->SetBinContent(19,6.030507);
   hmc__1->SetBinContent(20,4.818818);
   hmc__1->SetBinContent(21,3.933233);
   hmc__1->SetBinContent(22,4.083653);
   hmc__1->SetBinContent(23,1.920469);
   hmc__1->SetBinContent(24,0.8085408);
   hmc__1->SetBinError(1,4.145643);
   hmc__1->SetBinError(2,6.599687);
   hmc__1->SetBinError(3,8.255253);
   hmc__1->SetBinError(4,9.234377);
   hmc__1->SetBinError(5,8.016238);
   hmc__1->SetBinError(6,8.027675);
   hmc__1->SetBinError(7,7.127425);
   hmc__1->SetBinError(8,6.429827);
   hmc__1->SetBinError(9,5.56201);
   hmc__1->SetBinError(10,4.191788);
   hmc__1->SetBinError(11,3.855498);
   hmc__1->SetBinError(12,3.780465);
   hmc__1->SetBinError(13,3.396688);
   hmc__1->SetBinError(14,2.566268);
   hmc__1->SetBinError(15,2.936664);
   hmc__1->SetBinError(16,2.293346);
   hmc__1->SetBinError(17,2.416123);
   hmc__1->SetBinError(18,2.299495);
   hmc__1->SetBinError(19,3.04291);
   hmc__1->SetBinError(20,3.436704);
   hmc__1->SetBinError(21,2.137727);
   hmc__1->SetBinError(22,1.986679);
   hmc__1->SetBinError(23,1.335593);
   hmc__1->SetBinError(24,0.8961811);
   hmc__1->SetBinError(25,0.125509);
   hmc__1->SetMinimum(-0.6786491);
   hmc__1->SetMaximum(54.29193);
   hmc__1->SetEntries(321.7148);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,180);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(35.62908);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.3063874);
   hbadmatch_stack_1->SetBinContent(2,0.6850104);
   hbadmatch_stack_1->SetBinContent(3,0.609029);
   hbadmatch_stack_1->SetBinContent(4,0.8582273);
   hbadmatch_stack_1->SetBinContent(5,0.7271939);
   hbadmatch_stack_1->SetBinContent(6,0.6216365);
   hbadmatch_stack_1->SetBinContent(7,0.3672271);
   hbadmatch_stack_1->SetBinContent(8,0.7969092);
   hbadmatch_stack_1->SetBinContent(9,0.3650163);
   hbadmatch_stack_1->SetBinContent(10,0.4518549);
   hbadmatch_stack_1->SetBinContent(11,0.3240148);
   hbadmatch_stack_1->SetBinContent(12,0.2733256);
   hbadmatch_stack_1->SetBinContent(13,0.05576782);
   hbadmatch_stack_1->SetBinContent(14,0.2714777);
   hbadmatch_stack_1->SetBinContent(15,0.3191283);
   hbadmatch_stack_1->SetBinContent(16,0.1869674);
   hbadmatch_stack_1->SetBinContent(17,0.1643085);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.03825059);
   hbadmatch_stack_1->SetBinContent(20,0.06195629);
   hbadmatch_stack_1->SetBinContent(21,0.07470649);
   hbadmatch_stack_1->SetBinContent(22,0.1495803);
   hbadmatch_stack_1->SetBinContent(23,0.1180099);
   hbadmatch_stack_1->SetBinError(1,0.2690447);
   hbadmatch_stack_1->SetBinError(2,0.3640365);
   hbadmatch_stack_1->SetBinError(3,0.2028219);
   hbadmatch_stack_1->SetBinError(4,0.2180048);
   hbadmatch_stack_1->SetBinError(5,0.2038984);
   hbadmatch_stack_1->SetBinError(6,0.1827348);
   hbadmatch_stack_1->SetBinError(7,0.1460408);
   hbadmatch_stack_1->SetBinError(8,0.20816);
   hbadmatch_stack_1->SetBinError(9,0.1361138);
   hbadmatch_stack_1->SetBinError(10,0.155281);
   hbadmatch_stack_1->SetBinError(11,0.1270067);
   hbadmatch_stack_1->SetBinError(12,0.1252177);
   hbadmatch_stack_1->SetBinError(13,0.0279857);
   hbadmatch_stack_1->SetBinError(14,0.1236383);
   hbadmatch_stack_1->SetBinError(15,0.1350825);
   hbadmatch_stack_1->SetBinError(16,0.09204746);
   hbadmatch_stack_1->SetBinError(17,0.09068725);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.02208399);
   hbadmatch_stack_1->SetBinError(20,0.06195629);
   hbadmatch_stack_1->SetBinError(21,0.06325464);
   hbadmatch_stack_1->SetBinError(22,0.105796);
   hbadmatch_stack_1->SetBinError(23,0.06814128);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.6216871);
   hext_stack_2->SetBinContent(2,0.5698761);
   hext_stack_2->SetBinContent(3,1.57466);
   hext_stack_2->SetBinContent(4,1.513311);
   hext_stack_2->SetBinContent(5,1.387881);
   hext_stack_2->SetBinContent(6,2.854844);
   hext_stack_2->SetBinContent(7,2.196347);
   hext_stack_2->SetBinContent(8,2.854844);
   hext_stack_2->SetBinContent(9,2.444476);
   hext_stack_2->SetBinContent(10,2.220887);
   hext_stack_2->SetBinContent(11,1.761439);
   hext_stack_2->SetBinContent(12,1.56239);
   hext_stack_2->SetBinContent(13,0.8425444);
   hext_stack_2->SetBinContent(14,1.179293);
   hext_stack_2->SetBinContent(15,0.5944158);
   hext_stack_2->SetBinContent(16,1.216103);
   hext_stack_2->SetBinContent(17,0.793465);
   hext_stack_2->SetBinContent(18,0.6707665);
   hext_stack_2->SetBinContent(19,0.7321157);
   hext_stack_2->SetBinContent(20,0.4471776);
   hext_stack_2->SetBinContent(21,0.07361911);
   hext_stack_2->SetBinContent(22,0.6094172);
   hext_stack_2->SetBinContent(23,0.06134926);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinError(1,0.3451996);
   hext_stack_2->SetBinError(2,0.2852171);
   hext_stack_2->SetBinError(3,0.4923315);
   hext_stack_2->SetBinError(4,0.4915664);
   hext_stack_2->SetBinError(5,0.4504668);
   hext_stack_2->SetBinError(6,0.6936623);
   hext_stack_2->SetBinError(7,0.6012928);
   hext_stack_2->SetBinError(8,0.6936623);
   hext_stack_2->SetBinError(9,0.6338579);
   hext_stack_2->SetBinError(10,0.6015431);
   hext_stack_2->SetBinError(11,0.5309052);
   hext_stack_2->SetBinError(12,0.4921786);
   hext_stack_2->SetBinError(13,0.3491026);
   hext_stack_2->SetBinError(14,0.447617);
   hext_stack_2->SetBinError(15,0.2857444);
   hext_stack_2->SetBinError(16,0.4481212);
   hext_stack_2->SetBinError(17,0.348239);
   hext_stack_2->SetBinError(18,0.3460707);
   hext_stack_2->SetBinError(19,0.3471566);
   hext_stack_2->SetBinError(20,0.2825656);
   hext_stack_2->SetBinError(21,0.03005488);
   hext_stack_2->SetBinError(22,0.3449814);
   hext_stack_2->SetBinError(23,0.02743622);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetEntries(581);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.03685074);
   hdirt_stack_3->SetBinContent(2,0.1226094);
   hdirt_stack_3->SetBinContent(3,0.2621434);
   hdirt_stack_3->SetBinContent(4,0.366732);
   hdirt_stack_3->SetBinContent(5,0.3157231);
   hdirt_stack_3->SetBinContent(6,0.4181332);
   hdirt_stack_3->SetBinContent(7,0.4808891);
   hdirt_stack_3->SetBinContent(8,0.4917735);
   hdirt_stack_3->SetBinContent(9,0.3781512);
   hdirt_stack_3->SetBinContent(10,0.3574935);
   hdirt_stack_3->SetBinContent(11,0.069238);
   hdirt_stack_3->SetBinContent(12,0.1234627);
   hdirt_stack_3->SetBinContent(13,0.01643923);
   hdirt_stack_3->SetBinContent(14,0.08539969);
   hdirt_stack_3->SetBinContent(15,0.1474543);
   hdirt_stack_3->SetBinContent(16,0.04372665);
   hdirt_stack_3->SetBinContent(17,0.1572861);
   hdirt_stack_3->SetBinContent(18,0.1938315);
   hdirt_stack_3->SetBinContent(19,0.08727986);
   hdirt_stack_3->SetBinContent(20,0.05242869);
   hdirt_stack_3->SetBinContent(21,0.09989946);
   hdirt_stack_3->SetBinContent(22,0.1467181);
   hdirt_stack_3->SetBinContent(23,0.09663776);
   hdirt_stack_3->SetBinError(1,0.03685074);
   hdirt_stack_3->SetBinError(2,0.06482621);
   hdirt_stack_3->SetBinError(3,0.1005486);
   hdirt_stack_3->SetBinError(4,0.2149872);
   hdirt_stack_3->SetBinError(5,0.1036197);
   hdirt_stack_3->SetBinError(6,0.1346428);
   hdirt_stack_3->SetBinError(7,0.1495118);
   hdirt_stack_3->SetBinError(8,0.1456535);
   hdirt_stack_3->SetBinError(9,0.1232118);
   hdirt_stack_3->SetBinError(10,0.1233397);
   hdirt_stack_3->SetBinError(11,0.04651181);
   hdirt_stack_3->SetBinError(12,0.06493958);
   hdirt_stack_3->SetBinError(13,0.01162429);
   hdirt_stack_3->SetBinError(14,0.05423375);
   hdirt_stack_3->SetBinError(15,0.07543205);
   hdirt_stack_3->SetBinError(16,0.01961141);
   hdirt_stack_3->SetBinError(17,0.07788461);
   hdirt_stack_3->SetBinError(18,0.09347868);
   hdirt_stack_3->SetBinError(19,0.0568912);
   hdirt_stack_3->SetBinError(20,0.0449667);
   hdirt_stack_3->SetBinError(21,0.06538714);
   hdirt_stack_3->SetBinError(22,0.07975998);
   hdirt_stack_3->SetBinError(23,0.06305907);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.6483983);
   houtFV_stack_4->SetBinContent(2,1.734176);
   houtFV_stack_4->SetBinContent(3,3.362003);
   houtFV_stack_4->SetBinContent(4,4.739561);
   houtFV_stack_4->SetBinContent(5,3.763122);
   houtFV_stack_4->SetBinContent(6,3.623653);
   houtFV_stack_4->SetBinContent(7,4.33427);
   houtFV_stack_4->SetBinContent(8,3.072152);
   houtFV_stack_4->SetBinContent(9,2.745458);
   houtFV_stack_4->SetBinContent(10,1.759542);
   houtFV_stack_4->SetBinContent(11,1.511141);
   houtFV_stack_4->SetBinContent(12,1.474356);
   houtFV_stack_4->SetBinContent(13,1.222917);
   houtFV_stack_4->SetBinContent(14,1.242715);
   houtFV_stack_4->SetBinContent(15,1.179321);
   houtFV_stack_4->SetBinContent(16,1.09408);
   houtFV_stack_4->SetBinContent(17,1.012477);
   houtFV_stack_4->SetBinContent(18,1.106052);
   houtFV_stack_4->SetBinContent(19,0.9438893);
   houtFV_stack_4->SetBinContent(20,1.018596);
   houtFV_stack_4->SetBinContent(21,0.8392496);
   houtFV_stack_4->SetBinContent(22,0.5976519);
   houtFV_stack_4->SetBinContent(23,0.3554119);
   houtFV_stack_4->SetBinContent(24,0.03825059);
   houtFV_stack_4->SetBinError(1,0.1890155);
   houtFV_stack_4->SetBinError(2,0.3054922);
   houtFV_stack_4->SetBinError(3,0.4277682);
   houtFV_stack_4->SetBinError(4,0.518909);
   houtFV_stack_4->SetBinError(5,0.4564356);
   houtFV_stack_4->SetBinError(6,0.4323557);
   houtFV_stack_4->SetBinError(7,0.489699);
   houtFV_stack_4->SetBinError(8,0.4057924);
   houtFV_stack_4->SetBinError(9,0.3939123);
   houtFV_stack_4->SetBinError(10,0.3050915);
   houtFV_stack_4->SetBinError(11,0.2892595);
   houtFV_stack_4->SetBinError(12,0.2836143);
   houtFV_stack_4->SetBinError(13,0.2573783);
   houtFV_stack_4->SetBinError(14,0.2659326);
   houtFV_stack_4->SetBinError(15,0.2542834);
   houtFV_stack_4->SetBinError(16,0.2415332);
   houtFV_stack_4->SetBinError(17,0.222509);
   houtFV_stack_4->SetBinError(18,0.2507597);
   houtFV_stack_4->SetBinError(19,0.2339136);
   houtFV_stack_4->SetBinError(20,0.2423153);
   houtFV_stack_4->SetBinError(21,0.2030588);
   houtFV_stack_4->SetBinError(22,0.1789111);
   houtFV_stack_4->SetBinError(23,0.1436994);
   houtFV_stack_4->SetBinError(24,0.02208399);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,4.874243);
   hNCpi0inFV_stack_5->SetBinContent(2,11.71976);
   hNCpi0inFV_stack_5->SetBinContent(3,15.78319);
   hNCpi0inFV_stack_5->SetBinContent(4,16.96434);
   hNCpi0inFV_stack_5->SetBinContent(5,17.27014);
   hNCpi0inFV_stack_5->SetBinContent(6,14.00477);
   hNCpi0inFV_stack_5->SetBinContent(7,12.21541);
   hNCpi0inFV_stack_5->SetBinContent(8,9.493295);
   hNCpi0inFV_stack_5->SetBinContent(9,9.721004);
   hNCpi0inFV_stack_5->SetBinContent(10,6.181946);
   hNCpi0inFV_stack_5->SetBinContent(11,5.575692);
   hNCpi0inFV_stack_5->SetBinContent(12,4.345726);
   hNCpi0inFV_stack_5->SetBinContent(13,3.671573);
   hNCpi0inFV_stack_5->SetBinContent(14,3.062966);
   hNCpi0inFV_stack_5->SetBinContent(15,3.073921);
   hNCpi0inFV_stack_5->SetBinContent(16,2.46352);
   hNCpi0inFV_stack_5->SetBinContent(17,3.068537);
   hNCpi0inFV_stack_5->SetBinContent(18,2.636638);
   hNCpi0inFV_stack_5->SetBinContent(19,2.550976);
   hNCpi0inFV_stack_5->SetBinContent(20,2.540021);
   hNCpi0inFV_stack_5->SetBinContent(21,1.927824);
   hNCpi0inFV_stack_5->SetBinContent(22,1.579792);
   hNCpi0inFV_stack_5->SetBinContent(23,0.5356956);
   hNCpi0inFV_stack_5->SetBinContent(24,0.2368697);
   hNCpi0inFV_stack_5->SetBinError(1,0.522018);
   hNCpi0inFV_stack_5->SetBinError(2,0.7886485);
   hNCpi0inFV_stack_5->SetBinError(3,0.9239291);
   hNCpi0inFV_stack_5->SetBinError(4,0.9498819);
   hNCpi0inFV_stack_5->SetBinError(5,0.9725075);
   hNCpi0inFV_stack_5->SetBinError(6,0.8687659);
   hNCpi0inFV_stack_5->SetBinError(7,0.8078831);
   hNCpi0inFV_stack_5->SetBinError(8,0.7213955);
   hNCpi0inFV_stack_5->SetBinError(9,0.7255091);
   hNCpi0inFV_stack_5->SetBinError(10,0.5795998);
   hNCpi0inFV_stack_5->SetBinError(11,0.5502607);
   hNCpi0inFV_stack_5->SetBinError(12,0.4819017);
   hNCpi0inFV_stack_5->SetBinError(13,0.4463683);
   hNCpi0inFV_stack_5->SetBinError(14,0.4050273);
   hNCpi0inFV_stack_5->SetBinError(15,0.4089443);
   hNCpi0inFV_stack_5->SetBinError(16,0.3675101);
   hNCpi0inFV_stack_5->SetBinError(17,0.419896);
   hNCpi0inFV_stack_5->SetBinError(18,0.3826446);
   hNCpi0inFV_stack_5->SetBinError(19,0.3731319);
   hNCpi0inFV_stack_5->SetBinError(20,0.3688348);
   hNCpi0inFV_stack_5->SetBinError(21,0.326945);
   hNCpi0inFV_stack_5->SetBinError(22,0.2953175);
   hNCpi0inFV_stack_5->SetBinError(23,0.167841);
   hNCpi0inFV_stack_5->SetBinError(24,0.1102997);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,1.949865);
   hCCpi0inFV_stack_6->SetBinContent(2,4.30794);
   hCCpi0inFV_stack_6->SetBinContent(3,6.428249);
   hCCpi0inFV_stack_6->SetBinContent(4,6.058366);
   hCCpi0inFV_stack_6->SetBinContent(5,5.866079);
   hCCpi0inFV_stack_6->SetBinContent(6,3.961893);
   hCCpi0inFV_stack_6->SetBinContent(7,4.453119);
   hCCpi0inFV_stack_6->SetBinContent(8,3.737119);
   hCCpi0inFV_stack_6->SetBinContent(9,2.441608);
   hCCpi0inFV_stack_6->SetBinContent(10,1.987752);
   hCCpi0inFV_stack_6->SetBinContent(11,1.603498);
   hCCpi0inFV_stack_6->SetBinContent(12,1.107862);
   hCCpi0inFV_stack_6->SetBinContent(13,1.304672);
   hCCpi0inFV_stack_6->SetBinContent(14,0.7278811);
   hCCpi0inFV_stack_6->SetBinContent(15,1.454282);
   hCCpi0inFV_stack_6->SetBinContent(16,0.849823);
   hCCpi0inFV_stack_6->SetBinContent(17,0.6851086);
   hCCpi0inFV_stack_6->SetBinContent(18,1.018596);
   hCCpi0inFV_stack_6->SetBinContent(19,1.183028);
   hCCpi0inFV_stack_6->SetBinContent(20,0.3625769);
   hCCpi0inFV_stack_6->SetBinContent(21,0.3990328);
   hCCpi0inFV_stack_6->SetBinContent(22,0.6883502);
   hCCpi0inFV_stack_6->SetBinContent(23,0.6914083);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2733256);
   hCCpi0inFV_stack_6->SetBinError(1,0.3290794);
   hCCpi0inFV_stack_6->SetBinError(2,0.4845926);
   hCCpi0inFV_stack_6->SetBinError(3,0.5905962);
   hCCpi0inFV_stack_6->SetBinError(4,0.5655647);
   hCCpi0inFV_stack_6->SetBinError(5,0.5675575);
   hCCpi0inFV_stack_6->SetBinError(6,0.4590352);
   hCCpi0inFV_stack_6->SetBinError(7,0.4865759);
   hCCpi0inFV_stack_6->SetBinError(8,0.4438826);
   hCCpi0inFV_stack_6->SetBinError(9,0.3587298);
   hCCpi0inFV_stack_6->SetBinError(10,0.3344296);
   hCCpi0inFV_stack_6->SetBinError(11,0.3009374);
   hCCpi0inFV_stack_6->SetBinError(12,0.2411351);
   hCCpi0inFV_stack_6->SetBinError(13,0.2730545);
   hCCpi0inFV_stack_6->SetBinError(14,0.1836079);
   hCCpi0inFV_stack_6->SetBinError(15,0.2843925);
   hCCpi0inFV_stack_6->SetBinError(16,0.2107353);
   hCCpi0inFV_stack_6->SetBinError(17,0.1901918);
   hCCpi0inFV_stack_6->SetBinError(18,0.2423153);
   hCCpi0inFV_stack_6->SetBinError(19,0.2587365);
   hCCpi0inFV_stack_6->SetBinError(20,0.1296821);
   hCCpi0inFV_stack_6->SetBinError(21,0.1425864);
   hCCpi0inFV_stack_6->SetBinError(22,0.1955701);
   hCCpi0inFV_stack_6->SetBinError(23,0.2006669);
   hCCpi0inFV_stack_6->SetBinError(24,0.1252177);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.2751203);
   hNCinFV_stack_7->SetBinContent(2,1.169803);
   hNCinFV_stack_7->SetBinContent(3,1.131553);
   hNCinFV_stack_7->SetBinContent(4,1.432173);
   hNCinFV_stack_7->SetBinContent(5,1.840367);
   hNCinFV_stack_7->SetBinContent(6,1.146098);
   hNCinFV_stack_7->SetBinContent(7,0.5119899);
   hNCinFV_stack_7->SetBinContent(8,0.475534);
   hNCinFV_stack_7->SetBinContent(9,0.6851086);
   hNCinFV_stack_7->SetBinContent(10,0.2988259);
   hNCinFV_stack_7->SetBinContent(11,0.3370765);
   hNCinFV_stack_7->SetBinContent(12,0.2988259);
   hNCinFV_stack_7->SetBinContent(13,0.4992397);
   hNCinFV_stack_7->SetBinContent(14,0.2113693);
   hNCinFV_stack_7->SetBinContent(15,0.2113693);
   hNCinFV_stack_7->SetBinContent(16,0.4464442);
   hNCinFV_stack_7->SetBinContent(17,0.08745668);
   hNCinFV_stack_7->SetBinContent(18,0.1129571);
   hNCinFV_stack_7->SetBinContent(19,0.1002069);
   hNCinFV_stack_7->SetBinContent(20,0.1257073);
   hNCinFV_stack_7->SetBinContent(21,0.2368697);
   hNCinFV_stack_7->SetBinContent(22,0.1366628);
   hNCinFV_stack_7->SetBinContent(24,0.1858689);
   hNCinFV_stack_7->SetBinError(1,0.1124887);
   hNCinFV_stack_7->SetBinError(2,0.2523752);
   hNCinFV_stack_7->SetBinError(3,0.2514071);
   hNCinFV_stack_7->SetBinError(4,0.2760152);
   hNCinFV_stack_7->SetBinError(5,0.3205142);
   hNCinFV_stack_7->SetBinError(6,0.2456469);
   hNCinFV_stack_7->SetBinError(7,0.1575428);
   hNCinFV_stack_7->SetBinError(8,0.1459667);
   hNCinFV_stack_7->SetBinError(9,0.1901918);
   hNCinFV_stack_7->SetBinError(10,0.1265093);
   hNCinFV_stack_7->SetBinError(11,0.1284224);
   hNCinFV_stack_7->SetBinError(12,0.1265093);
   hNCinFV_stack_7->SetBinError(13,0.157026);
   hNCinFV_stack_7->SetBinError(14,0.1088158);
   hNCinFV_stack_7->SetBinError(15,0.1088158);
   hNCinFV_stack_7->SetBinError(16,0.1644161);
   hNCinFV_stack_7->SetBinError(17,0.06452687);
   hNCinFV_stack_7->SetBinError(18,0.0669989);
   hNCinFV_stack_7->SetBinError(19,0.0657745);
   hNCinFV_stack_7->SetBinError(20,0.06820132);
   hNCinFV_stack_7->SetBinError(21,0.1102997);
   hNCinFV_stack_7->SetBinError(22,0.08854226);
   hNCinFV_stack_7->SetBinError(24,0.1073114);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.4413554);
   hnumuCCinFV_stack_8->SetBinContent(2,0.9954418);
   hnumuCCinFV_stack_8->SetBinContent(3,1.543439);
   hnumuCCinFV_stack_8->SetBinContent(4,1.93779);
   hnumuCCinFV_stack_8->SetBinContent(5,1.618384);
   hnumuCCinFV_stack_8->SetBinContent(6,1.580815);
   hnumuCCinFV_stack_8->SetBinContent(7,1.326041);
   hnumuCCinFV_stack_8->SetBinContent(8,1.992291);
   hnumuCCinFV_stack_8->SetBinContent(9,1.047673);
   hnumuCCinFV_stack_8->SetBinContent(10,0.8128585);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7148159);
   hnumuCCinFV_stack_8->SetBinContent(12,0.5322584);
   hnumuCCinFV_stack_8->SetBinContent(13,0.3234949);
   hnumuCCinFV_stack_8->SetBinContent(14,0.238445);
   hnumuCCinFV_stack_8->SetBinContent(15,0.5385885);
   hnumuCCinFV_stack_8->SetBinContent(16,0.1225913);
   hnumuCCinFV_stack_8->SetBinContent(17,0.391808);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3220606);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3947606);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1929046);
   hnumuCCinFV_stack_8->SetBinContent(21,0.2001839);
   hnumuCCinFV_stack_8->SetBinContent(22,0.09400596);
   hnumuCCinFV_stack_8->SetBinContent(23,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(1,0.1549571);
   hnumuCCinFV_stack_8->SetBinError(2,0.2437183);
   hnumuCCinFV_stack_8->SetBinError(3,0.3006332);
   hnumuCCinFV_stack_8->SetBinError(4,0.3837077);
   hnumuCCinFV_stack_8->SetBinError(5,0.4939057);
   hnumuCCinFV_stack_8->SetBinError(6,0.2974404);
   hnumuCCinFV_stack_8->SetBinError(7,0.2769995);
   hnumuCCinFV_stack_8->SetBinError(8,0.5721533);
   hnumuCCinFV_stack_8->SetBinError(9,0.2486287);
   hnumuCCinFV_stack_8->SetBinError(10,0.3252959);
   hnumuCCinFV_stack_8->SetBinError(11,0.2594332);
   hnumuCCinFV_stack_8->SetBinError(12,0.2391941);
   hnumuCCinFV_stack_8->SetBinError(13,0.1168023);
   hnumuCCinFV_stack_8->SetBinError(14,0.1069908);
   hnumuCCinFV_stack_8->SetBinError(15,0.1869624);
   hnumuCCinFV_stack_8->SetBinError(16,0.07222332);
   hnumuCCinFV_stack_8->SetBinError(17,0.1482126);
   hnumuCCinFV_stack_8->SetBinError(18,0.1442361);
   hnumuCCinFV_stack_8->SetBinError(19,0.1567562);
   hnumuCCinFV_stack_8->SetBinError(20,0.1032352);
   hnumuCCinFV_stack_8->SetBinError(21,0.1007343);
   hnumuCCinFV_stack_8->SetBinError(22,0.06599846);
   hnumuCCinFV_stack_8->SetBinError(23,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.2587088);
   hnueCCinFV_stack_9->SetBinContent(2,0.6225424);
   hnueCCinFV_stack_9->SetBinContent(3,0.3347042);
   hnueCCinFV_stack_9->SetBinContent(4,0.06195668);
   hnueCCinFV_stack_9->SetBinContent(5,0.139201);
   hnueCCinFV_stack_9->SetBinContent(6,0.05225299);
   hnueCCinFV_stack_9->SetBinContent(7,0.21877);
   hnueCCinFV_stack_9->SetBinContent(8,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(9,0.1924905);
   hnueCCinFV_stack_9->SetBinContent(10,0.03154603);
   hnueCCinFV_stack_9->SetBinContent(14,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(18,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(20,0.01744965);
   hnueCCinFV_stack_9->SetBinContent(21,0.08184811);
   hnueCCinFV_stack_9->SetBinContent(22,0.08147465);
   hnueCCinFV_stack_9->SetBinError(1,0.126165);
   hnueCCinFV_stack_9->SetBinError(2,0.4767572);
   hnueCCinFV_stack_9->SetBinError(3,0.148876);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.08894323);
   hnueCCinFV_stack_9->SetBinError(6,0.03023821);
   hnueCCinFV_stack_9->SetBinError(7,0.1098275);
   hnueCCinFV_stack_9->SetBinError(8,0.08761943);
   hnueCCinFV_stack_9->SetBinError(9,0.1138987);
   hnueCCinFV_stack_9->SetBinError(10,0.02231513);
   hnueCCinFV_stack_9->SetBinError(14,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,0.08761943);
   hnueCCinFV_stack_9->SetBinError(18,0.0127502);
   hnueCCinFV_stack_9->SetBinError(20,0.01622988);
   hnueCCinFV_stack_9->SetBinError(21,0.07026443);
   hnueCCinFV_stack_9->SetBinError(22,0.06495805);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmcerror__2->SetBinContent(1,9.412617);
   hmcerror__2->SetBinContent(2,21.92716);
   hmcerror__2->SetBinContent(3,31.02896);
   hmcerror__2->SetBinContent(4,33.93245);
   hmcerror__2->SetBinContent(5,32.92809);
   hmcerror__2->SetBinContent(6,28.2641);
   hmcerror__2->SetBinContent(7,26.10406);
   hmcerror__2->SetBinContent(8,23.03783);
   hmcerror__2->SetBinContent(9,20.02099);
   hmcerror__2->SetBinContent(10,14.10271);
   hmcerror__2->SetBinContent(11,11.89691);
   hmcerror__2->SetBinContent(12,9.718207);
   hmcerror__2->SetBinContent(13,7.936648);
   hmcerror__2->SetBinContent(14,7.081503);
   hmcerror__2->SetBinContent(15,7.642393);
   hmcerror__2->SetBinContent(16,6.423255);
   hmcerror__2->SetBinContent(17,6.360448);
   hmcerror__2->SetBinContent(18,6.099152);
   hmcerror__2->SetBinContent(19,6.030507);
   hmcerror__2->SetBinContent(20,4.818818);
   hmcerror__2->SetBinContent(21,3.933233);
   hmcerror__2->SetBinContent(22,4.083653);
   hmcerror__2->SetBinContent(23,1.920469);
   hmcerror__2->SetBinContent(24,0.8085408);
   hmcerror__2->SetBinError(1,4.145643);
   hmcerror__2->SetBinError(2,6.599687);
   hmcerror__2->SetBinError(3,8.255253);
   hmcerror__2->SetBinError(4,9.234377);
   hmcerror__2->SetBinError(5,8.016238);
   hmcerror__2->SetBinError(6,8.027675);
   hmcerror__2->SetBinError(7,7.127425);
   hmcerror__2->SetBinError(8,6.429827);
   hmcerror__2->SetBinError(9,5.56201);
   hmcerror__2->SetBinError(10,4.191788);
   hmcerror__2->SetBinError(11,3.855498);
   hmcerror__2->SetBinError(12,3.780465);
   hmcerror__2->SetBinError(13,3.396688);
   hmcerror__2->SetBinError(14,2.566268);
   hmcerror__2->SetBinError(15,2.936664);
   hmcerror__2->SetBinError(16,2.293346);
   hmcerror__2->SetBinError(17,2.416123);
   hmcerror__2->SetBinError(18,2.299495);
   hmcerror__2->SetBinError(19,3.04291);
   hmcerror__2->SetBinError(20,3.436704);
   hmcerror__2->SetBinError(21,2.137727);
   hmcerror__2->SetBinError(22,1.986679);
   hmcerror__2->SetBinError(23,1.335593);
   hmcerror__2->SetBinError(24,0.8961811);
   hmcerror__2->SetBinError(25,0.125509);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
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
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3001[24] = {
   7,
   22,
   29,
   33,
   28,
   33,
   20,
   22,
   16,
   11,
   10,
   6,
   10,
   9,
   3,
   8,
   9,
   7,
   3,
   7,
   7,
   1,
   3,
   2};
   Double_t _felx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3001[24] = {
   2.85954,
   4.8417,
   5.5285,
   5.8847,
   5.4358,
   5.8847,
   4.6266,
   4.8417,
   4.1628,
   3.4975,
   3.34883,
   2.67925,
   3.34883,
   3.19354,
   2.143368,
   3.0307,
   3.19354,
   2.85954,
   2.143368,
   2.85954,
   2.85954,
   1,
   2.143368,
   2};
   Double_t _fehx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3001[24] = {
   2.61053,
   4.6299,
   5.3201,
   5.6776,
   5.2271,
   5.6776,
   4.4133,
   4.6299,
   3.9454,
   3.27,
   3.1179,
   2.41858,
   3.1179,
   2.9582,
   1.72422,
   2.7896,
   2.9582,
   2.61053,
   1.72422,
   2.61053,
   2.61053,
   1.35971,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,198);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(42.54536);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.94#pm0.05(data err)#pm0.19(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.64/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 306.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 28.8","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.4","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  155.5","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 53.5","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.0","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.5","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.4","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
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
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3002[24] = {
   0.4404347,
   0.3009823,
   0.2660499,
   0.27214,
   0.2434468,
   0.2840237,
   0.2730389,
   0.2790986,
   0.277809,
   0.2972329,
   0.3240754,
   0.3890085,
   0.4279751,
   0.3623903,
   0.3842597,
   0.3570379,
   0.3798669,
   0.3770188,
   0.5045861,
   0.7131841,
   0.5435038,
   0.4864955,
   0.6954517,
   1.108393};
   Double_t _fehx3002[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3002[24] = {
   0.4404347,
   0.3009823,
   0.2660499,
   0.27214,
   0.2434468,
   0.2840237,
   0.2730389,
   0.2790986,
   0.277809,
   0.2972329,
   0.3240754,
   0.3890085,
   0.4279751,
   0.3623903,
   0.3842597,
   0.3570379,
   0.3798669,
   0.3770188,
   0.5045861,
   0.7131841,
   0.5435038,
   0.4864955,
   0.6954517,
   1.108393};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,198);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
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
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3003[24] = {
   0.2226596,
   0.2130206,
   0.1909207,
   0.1845262,
   0.195776,
   0.2083694,
   0.2146255,
   0.2044486,
   0.218915,
   0.2060727,
   0.211469,
   0.2010841,
   0.2306669,
   0.2054681,
   0.2380687,
   0.2126682,
   0.203094,
   0.2254813,
   0.2115127,
   0.2369527,
   0.2458216,
   0.2228461,
   0.261427,
   0.4502456};
   Double_t _fehx3003[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3003[24] = {
   0.2226596,
   0.2130206,
   0.1909207,
   0.1845262,
   0.195776,
   0.2083694,
   0.2146255,
   0.2044486,
   0.218915,
   0.2060727,
   0.211469,
   0.2010841,
   0.2306669,
   0.2054681,
   0.2380687,
   0.2126682,
   0.203094,
   0.2254813,
   0.2115127,
   0.2369527,
   0.2458216,
   0.2228461,
   0.261427,
   0.4502456};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,198);
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
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3004[24] = {
   0.7436827,
   1.003322,
   0.9346106,
   0.9725203,
   0.8503379,
   1.167559,
   0.7661644,
   0.954951,
   0.7991614,
   0.7799922,
   0.8405541,
   0.6173978,
   1.259978,
   1.270917,
   0.3925472,
   1.245474,
   1.414995,
   1.147701,
   0.4974706,
   1.452639,
   1.779706,
   0.2448788,
   1.562118,
   2.473592};
   Double_t _felx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3004[24] = {
   0.3037986,
   0.2208083,
   0.1781722,
   0.1734239,
   0.165081,
   0.208204,
   0.1772368,
   0.210163,
   0.2079218,
   0.2480021,
   0.2814873,
   0.2756938,
   0.4219451,
   0.4509692,
   0.2804577,
   0.4718324,
   0.5020936,
   0.4688422,
   0.3554209,
   0.5934111,
   0.7270202,
   0.2448788,
   1.116065,
   2.473592};
   Double_t _fehx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3004[24] = {
   0.2773437,
   0.2111491,
   0.1714559,
   0.1673206,
   0.1587429,
   0.2008767,
   0.1690657,
   0.2009694,
   0.1970632,
   0.2318704,
   0.2620764,
   0.248871,
   0.3928484,
   0.4177362,
   0.2256126,
   0.4342969,
   0.465093,
   0.4280152,
   0.2859163,
   0.5417366,
   0.663711,
   0.3329641,
   0.8978119,
   1.878903};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,198);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(4.787745);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_costheta_high_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

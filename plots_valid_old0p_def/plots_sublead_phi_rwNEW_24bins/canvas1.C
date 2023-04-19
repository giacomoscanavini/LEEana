#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 13:51:02 2023) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-6.741882,3.957692,745.5102);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,322.3268);
   hmc__1->SetBinContent(2,314.0558);
   hmc__1->SetBinContent(3,315.7346);
   hmc__1->SetBinContent(4,307.429);
   hmc__1->SetBinContent(5,282.1496);
   hmc__1->SetBinContent(6,295.9412);
   hmc__1->SetBinContent(7,318.9609);
   hmc__1->SetBinContent(8,292.3999);
   hmc__1->SetBinContent(9,292.9026);
   hmc__1->SetBinContent(10,297.4868);
   hmc__1->SetBinContent(11,325.2786);
   hmc__1->SetBinContent(12,315.659);
   hmc__1->SetBinContent(13,330.3664);
   hmc__1->SetBinContent(14,304.2642);
   hmc__1->SetBinContent(15,320.5833);
   hmc__1->SetBinContent(16,303.0722);
   hmc__1->SetBinContent(17,330.3025);
   hmc__1->SetBinContent(18,310.2065);
   hmc__1->SetBinContent(19,305.9885);
   hmc__1->SetBinContent(20,307.2343);
   hmc__1->SetBinContent(21,310.252);
   hmc__1->SetBinContent(22,299.6333);
   hmc__1->SetBinContent(23,334.4889);
   hmc__1->SetBinContent(24,337.0941);
   hmc__1->SetBinError(1,83.40368);
   hmc__1->SetBinError(2,78.92941);
   hmc__1->SetBinError(3,82.57836);
   hmc__1->SetBinError(4,81.19504);
   hmc__1->SetBinError(5,67.0324);
   hmc__1->SetBinError(6,74.11025);
   hmc__1->SetBinError(7,78.38176);
   hmc__1->SetBinError(8,75.5977);
   hmc__1->SetBinError(9,74.64856);
   hmc__1->SetBinError(10,79.30533);
   hmc__1->SetBinError(11,83.11715);
   hmc__1->SetBinError(12,81.21733);
   hmc__1->SetBinError(13,84.13731);
   hmc__1->SetBinError(14,79.53244);
   hmc__1->SetBinError(15,84.86895);
   hmc__1->SetBinError(16,78.31115);
   hmc__1->SetBinError(17,79.99552);
   hmc__1->SetBinError(18,74.92839);
   hmc__1->SetBinError(19,75.51877);
   hmc__1->SetBinError(20,76.43344);
   hmc__1->SetBinError(21,77.88165);
   hmc__1->SetBinError(22,80.42571);
   hmc__1->SetBinError(23,88.99162);
   hmc__1->SetBinError(24,83.14525);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-6.741882);
   hmc__1->SetMaximum(707.8976);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(353.9488);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,7.260813);
   hbadmatch_stack_1->SetBinContent(2,8.552543);
   hbadmatch_stack_1->SetBinContent(3,8.104695);
   hbadmatch_stack_1->SetBinContent(4,8.947796);
   hbadmatch_stack_1->SetBinContent(5,5.803174);
   hbadmatch_stack_1->SetBinContent(6,9.225263);
   hbadmatch_stack_1->SetBinContent(7,8.603685);
   hbadmatch_stack_1->SetBinContent(8,8.054636);
   hbadmatch_stack_1->SetBinContent(9,8.102707);
   hbadmatch_stack_1->SetBinContent(10,5.004475);
   hbadmatch_stack_1->SetBinContent(11,5.886462);
   hbadmatch_stack_1->SetBinContent(12,5.722306);
   hbadmatch_stack_1->SetBinContent(13,8.76083);
   hbadmatch_stack_1->SetBinContent(14,9.424154);
   hbadmatch_stack_1->SetBinContent(15,7.742893);
   hbadmatch_stack_1->SetBinContent(16,6.719779);
   hbadmatch_stack_1->SetBinContent(17,7.379865);
   hbadmatch_stack_1->SetBinContent(18,6.054572);
   hbadmatch_stack_1->SetBinContent(19,7.378519);
   hbadmatch_stack_1->SetBinContent(20,9.400132);
   hbadmatch_stack_1->SetBinContent(21,6.559974);
   hbadmatch_stack_1->SetBinContent(22,6.393033);
   hbadmatch_stack_1->SetBinContent(23,6.045935);
   hbadmatch_stack_1->SetBinContent(24,9.405194);
   hbadmatch_stack_1->SetBinError(1,1.426413);
   hbadmatch_stack_1->SetBinError(2,1.53248);
   hbadmatch_stack_1->SetBinError(3,1.459188);
   hbadmatch_stack_1->SetBinError(4,1.51879);
   hbadmatch_stack_1->SetBinError(5,1.194159);
   hbadmatch_stack_1->SetBinError(6,1.592083);
   hbadmatch_stack_1->SetBinError(7,1.496079);
   hbadmatch_stack_1->SetBinError(8,1.566687);
   hbadmatch_stack_1->SetBinError(9,2.380375);
   hbadmatch_stack_1->SetBinError(10,1.429786);
   hbadmatch_stack_1->SetBinError(11,1.194461);
   hbadmatch_stack_1->SetBinError(12,1.184227);
   hbadmatch_stack_1->SetBinError(13,1.821584);
   hbadmatch_stack_1->SetBinError(14,2.253451);
   hbadmatch_stack_1->SetBinError(15,1.492392);
   hbadmatch_stack_1->SetBinError(16,1.376458);
   hbadmatch_stack_1->SetBinError(17,1.446684);
   hbadmatch_stack_1->SetBinError(18,1.397716);
   hbadmatch_stack_1->SetBinError(19,1.51933);
   hbadmatch_stack_1->SetBinError(20,1.742157);
   hbadmatch_stack_1->SetBinError(21,1.387843);
   hbadmatch_stack_1->SetBinError(22,1.330688);
   hbadmatch_stack_1->SetBinError(23,1.922701);
   hbadmatch_stack_1->SetBinError(24,1.62205);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,23.6616);
   hext_stack_2->SetBinContent(2,27.81969);
   hext_stack_2->SetBinContent(3,25.88489);
   hext_stack_2->SetBinContent(4,35.22621);
   hext_stack_2->SetBinContent(5,40.55106);
   hext_stack_2->SetBinContent(6,42.85062);
   hext_stack_2->SetBinContent(7,57.16367);
   hext_stack_2->SetBinContent(8,42.11679);
   hext_stack_2->SetBinContent(9,32.32264);
   hext_stack_2->SetBinContent(10,27.68722);
   hext_stack_2->SetBinContent(11,34.53592);
   hext_stack_2->SetBinContent(12,25.56762);
   hext_stack_2->SetBinContent(13,20.91355);
   hext_stack_2->SetBinContent(14,18.50709);
   hext_stack_2->SetBinContent(15,27.79097);
   hext_stack_2->SetBinContent(16,25.14672);
   hext_stack_2->SetBinContent(17,39.51721);
   hext_stack_2->SetBinContent(18,39.77099);
   hext_stack_2->SetBinContent(19,34.47248);
   hext_stack_2->SetBinContent(20,32.01695);
   hext_stack_2->SetBinContent(21,24.34788);
   hext_stack_2->SetBinContent(22,22.7099);
   hext_stack_2->SetBinContent(23,27.58467);
   hext_stack_2->SetBinContent(24,26.17181);
   hext_stack_2->SetBinError(1,3.168016);
   hext_stack_2->SetBinError(2,3.541543);
   hext_stack_2->SetBinError(3,3.441663);
   hext_stack_2->SetBinError(4,3.8608);
   hext_stack_2->SetBinError(5,4.433134);
   hext_stack_2->SetBinError(6,4.272481);
   hext_stack_2->SetBinError(7,5.173133);
   hext_stack_2->SetBinError(8,4.432863);
   hext_stack_2->SetBinError(9,3.745359);
   hext_stack_2->SetBinError(10,3.727043);
   hext_stack_2->SetBinError(11,4.207657);
   hext_stack_2->SetBinError(12,3.587342);
   hext_stack_2->SetBinError(13,3.215371);
   hext_stack_2->SetBinError(14,2.945673);
   hext_stack_2->SetBinError(15,3.6534);
   hext_stack_2->SetBinError(16,3.431572);
   hext_stack_2->SetBinError(17,4.32126);
   hext_stack_2->SetBinError(18,4.318837);
   hext_stack_2->SetBinError(19,4.168573);
   hext_stack_2->SetBinError(20,3.871126);
   hext_stack_2->SetBinError(21,3.323047);
   hext_stack_2->SetBinError(22,3.232248);
   hext_stack_2->SetBinError(23,3.506591);
   hext_stack_2->SetBinError(24,3.339824);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.584551);
   hdirt_stack_3->SetBinContent(2,2.452952);
   hdirt_stack_3->SetBinContent(3,3.362837);
   hdirt_stack_3->SetBinContent(4,4.889368);
   hdirt_stack_3->SetBinContent(5,1.933216);
   hdirt_stack_3->SetBinContent(6,3.177854);
   hdirt_stack_3->SetBinContent(7,3.142778);
   hdirt_stack_3->SetBinContent(8,3.002487);
   hdirt_stack_3->SetBinContent(9,2.501433);
   hdirt_stack_3->SetBinContent(10,3.670234);
   hdirt_stack_3->SetBinContent(11,2.693997);
   hdirt_stack_3->SetBinContent(12,1.980107);
   hdirt_stack_3->SetBinContent(13,2.651097);
   hdirt_stack_3->SetBinContent(14,3.933751);
   hdirt_stack_3->SetBinContent(15,1.973669);
   hdirt_stack_3->SetBinContent(16,2.414127);
   hdirt_stack_3->SetBinContent(17,3.616722);
   hdirt_stack_3->SetBinContent(18,3.709081);
   hdirt_stack_3->SetBinContent(19,4.011354);
   hdirt_stack_3->SetBinContent(20,4.044785);
   hdirt_stack_3->SetBinContent(21,3.389202);
   hdirt_stack_3->SetBinContent(22,2.936343);
   hdirt_stack_3->SetBinContent(23,3.095228);
   hdirt_stack_3->SetBinContent(24,2.863867);
   hdirt_stack_3->SetBinError(1,0.6418467);
   hdirt_stack_3->SetBinError(2,0.8218369);
   hdirt_stack_3->SetBinError(3,0.9632802);
   hdirt_stack_3->SetBinError(4,1.251416);
   hdirt_stack_3->SetBinError(5,0.6267543);
   hdirt_stack_3->SetBinError(6,0.9726444);
   hdirt_stack_3->SetBinError(7,0.8625991);
   hdirt_stack_3->SetBinError(8,0.8433603);
   hdirt_stack_3->SetBinError(9,0.8999524);
   hdirt_stack_3->SetBinError(10,1.321772);
   hdirt_stack_3->SetBinError(11,0.8646748);
   hdirt_stack_3->SetBinError(12,0.7351041);
   hdirt_stack_3->SetBinError(13,0.9198658);
   hdirt_stack_3->SetBinError(14,1.280158);
   hdirt_stack_3->SetBinError(15,0.686718);
   hdirt_stack_3->SetBinError(16,0.7248324);
   hdirt_stack_3->SetBinError(17,1.007897);
   hdirt_stack_3->SetBinError(18,0.9909867);
   hdirt_stack_3->SetBinError(19,1.089264);
   hdirt_stack_3->SetBinError(20,1.356834);
   hdirt_stack_3->SetBinError(21,0.9152322);
   hdirt_stack_3->SetBinError(22,0.9443784);
   hdirt_stack_3->SetBinError(23,0.9069382);
   hdirt_stack_3->SetBinError(24,0.8079021);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,33.72806);
   houtFV_stack_4->SetBinContent(2,29.15992);
   houtFV_stack_4->SetBinContent(3,32.99252);
   houtFV_stack_4->SetBinContent(4,27.90309);
   houtFV_stack_4->SetBinContent(5,24.59272);
   houtFV_stack_4->SetBinContent(6,28.66499);
   houtFV_stack_4->SetBinContent(7,28.77208);
   houtFV_stack_4->SetBinContent(8,25.8344);
   houtFV_stack_4->SetBinContent(9,27.79835);
   houtFV_stack_4->SetBinContent(10,28.2004);
   houtFV_stack_4->SetBinContent(11,33.01981);
   houtFV_stack_4->SetBinContent(12,30.66781);
   houtFV_stack_4->SetBinContent(13,28.14766);
   houtFV_stack_4->SetBinContent(14,27.8311);
   houtFV_stack_4->SetBinContent(15,31.63482);
   houtFV_stack_4->SetBinContent(16,32.86801);
   houtFV_stack_4->SetBinContent(17,32.10402);
   houtFV_stack_4->SetBinContent(18,30.39207);
   houtFV_stack_4->SetBinContent(19,27.60254);
   houtFV_stack_4->SetBinContent(20,30.22387);
   houtFV_stack_4->SetBinContent(21,28.28144);
   houtFV_stack_4->SetBinContent(22,31.31792);
   houtFV_stack_4->SetBinContent(23,32.35397);
   houtFV_stack_4->SetBinContent(24,38.14021);
   houtFV_stack_4->SetBinError(1,2.973461);
   houtFV_stack_4->SetBinError(2,2.636105);
   houtFV_stack_4->SetBinError(3,2.971854);
   houtFV_stack_4->SetBinError(4,2.63786);
   houtFV_stack_4->SetBinError(5,2.450904);
   houtFV_stack_4->SetBinError(6,2.703241);
   houtFV_stack_4->SetBinError(7,2.720842);
   houtFV_stack_4->SetBinError(8,2.523402);
   houtFV_stack_4->SetBinError(9,2.629039);
   houtFV_stack_4->SetBinError(10,2.707489);
   houtFV_stack_4->SetBinError(11,3.018009);
   houtFV_stack_4->SetBinError(12,2.79843);
   houtFV_stack_4->SetBinError(13,2.637608);
   houtFV_stack_4->SetBinError(14,2.613169);
   houtFV_stack_4->SetBinError(15,2.868466);
   houtFV_stack_4->SetBinError(16,2.850994);
   houtFV_stack_4->SetBinError(17,2.855685);
   houtFV_stack_4->SetBinError(18,2.803194);
   houtFV_stack_4->SetBinError(19,2.610969);
   houtFV_stack_4->SetBinError(20,2.706995);
   houtFV_stack_4->SetBinError(21,2.633219);
   houtFV_stack_4->SetBinError(22,2.782815);
   houtFV_stack_4->SetBinError(23,2.894872);
   houtFV_stack_4->SetBinError(24,3.30449);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.295952);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.820652);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.239824);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.336142);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.464936);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.055478);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.361634);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.320196);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.155787);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.283918);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.62552);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.948039);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.866915);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.852128);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.179279);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.309074);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.558678);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.012959);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.547972);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.449238);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.33747);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.089282);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.883604);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.489596);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6499419);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.597634);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7070207);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6762573);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7879454);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6410986);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6241806);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6520343);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6572862);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7804178);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6200617);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7100879);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7766269);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7150033);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5101495);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.689791);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6906836);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5925102);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.797926);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6827965);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6560019);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7681864);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.815655);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7306636);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.087772);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.547126);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.31114);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.004904);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.130122);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.546294);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9489359);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6976678);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.54879);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.437022);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.702245);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.28324);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6976678);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.11584);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.7383537);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8923038);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.39584);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.281744);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3307091);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3774273);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3851684);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3553864);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3695249);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3509774);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3032882);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2285151);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4254218);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3809346);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5074733);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3841566);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2285151);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3780289);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2021557);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2667597);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4502389);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3765671);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,118.6842);
   hNCpi0inFVres_stack_7->SetBinContent(2,123.6908);
   hNCpi0inFVres_stack_7->SetBinContent(3,114.7045);
   hNCpi0inFVres_stack_7->SetBinContent(4,108.8911);
   hNCpi0inFVres_stack_7->SetBinContent(5,103.5677);
   hNCpi0inFVres_stack_7->SetBinContent(6,110.4783);
   hNCpi0inFVres_stack_7->SetBinContent(7,108.9587);
   hNCpi0inFVres_stack_7->SetBinContent(8,102.6385);
   hNCpi0inFVres_stack_7->SetBinContent(9,111.6722);
   hNCpi0inFVres_stack_7->SetBinContent(10,105.9394);
   hNCpi0inFVres_stack_7->SetBinContent(11,119.192);
   hNCpi0inFVres_stack_7->SetBinContent(12,119.8886);
   hNCpi0inFVres_stack_7->SetBinContent(13,122.619);
   hNCpi0inFVres_stack_7->SetBinContent(14,117.3797);
   hNCpi0inFVres_stack_7->SetBinContent(15,120.4217);
   hNCpi0inFVres_stack_7->SetBinContent(16,111.0631);
   hNCpi0inFVres_stack_7->SetBinContent(17,118.3719);
   hNCpi0inFVres_stack_7->SetBinContent(18,109.0689);
   hNCpi0inFVres_stack_7->SetBinContent(19,108.4295);
   hNCpi0inFVres_stack_7->SetBinContent(20,113.1442);
   hNCpi0inFVres_stack_7->SetBinContent(21,116.4102);
   hNCpi0inFVres_stack_7->SetBinContent(22,119.777);
   hNCpi0inFVres_stack_7->SetBinContent(23,126.6978);
   hNCpi0inFVres_stack_7->SetBinContent(24,123.688);
   hNCpi0inFVres_stack_7->SetBinError(1,3.544164);
   hNCpi0inFVres_stack_7->SetBinError(2,3.667112);
   hNCpi0inFVres_stack_7->SetBinError(3,3.478918);
   hNCpi0inFVres_stack_7->SetBinError(4,3.386079);
   hNCpi0inFVres_stack_7->SetBinError(5,3.319572);
   hNCpi0inFVres_stack_7->SetBinError(6,3.407363);
   hNCpi0inFVres_stack_7->SetBinError(7,3.436009);
   hNCpi0inFVres_stack_7->SetBinError(8,3.271316);
   hNCpi0inFVres_stack_7->SetBinError(9,3.476614);
   hNCpi0inFVres_stack_7->SetBinError(10,3.36758);
   hNCpi0inFVres_stack_7->SetBinError(11,3.616357);
   hNCpi0inFVres_stack_7->SetBinError(12,3.576196);
   hNCpi0inFVres_stack_7->SetBinError(13,3.649804);
   hNCpi0inFVres_stack_7->SetBinError(14,3.524535);
   hNCpi0inFVres_stack_7->SetBinError(15,3.600006);
   hNCpi0inFVres_stack_7->SetBinError(16,3.471722);
   hNCpi0inFVres_stack_7->SetBinError(17,3.584666);
   hNCpi0inFVres_stack_7->SetBinError(18,3.435769);
   hNCpi0inFVres_stack_7->SetBinError(19,3.377486);
   hNCpi0inFVres_stack_7->SetBinError(20,3.463426);
   hNCpi0inFVres_stack_7->SetBinError(21,3.510796);
   hNCpi0inFVres_stack_7->SetBinError(22,3.544567);
   hNCpi0inFVres_stack_7->SetBinError(23,3.721835);
   hNCpi0inFVres_stack_7->SetBinError(24,3.656042);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,22.27973);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.77031);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.69213);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.35206);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.00672);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.68177);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.5554);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.16001);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.76375);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.62907);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.28064);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.56254);
   hNCpi0inFVdis_stack_8->SetBinContent(13,25.89064);
   hNCpi0inFVdis_stack_8->SetBinContent(14,22.6147);
   hNCpi0inFVdis_stack_8->SetBinContent(15,24.18956);
   hNCpi0inFVdis_stack_8->SetBinContent(16,25.38211);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.8055);
   hNCpi0inFVdis_stack_8->SetBinContent(18,21.78036);
   hNCpi0inFVdis_stack_8->SetBinContent(19,20.84553);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.63669);
   hNCpi0inFVdis_stack_8->SetBinContent(21,24.31694);
   hNCpi0inFVdis_stack_8->SetBinContent(22,23.65979);
   hNCpi0inFVdis_stack_8->SetBinContent(23,23.61031);
   hNCpi0inFVdis_stack_8->SetBinContent(24,20.92507);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.535042);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.570758);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.77589);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.527459);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.54002);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.327633);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.512307);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.599993);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.517382);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.543176);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.490097);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.385634);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.68113);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.548694);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.583958);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.605941);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.497349);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.523526);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.479875);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.440964);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.584757);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.554067);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.62687);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.447769);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,53.31802);
   hCCpi0inFV_stack_10->SetBinContent(2,43.95102);
   hCCpi0inFV_stack_10->SetBinContent(3,48.7565);
   hCCpi0inFV_stack_10->SetBinContent(4,39.75324);
   hCCpi0inFV_stack_10->SetBinContent(5,36.63988);
   hCCpi0inFV_stack_10->SetBinContent(6,34.03047);
   hCCpi0inFV_stack_10->SetBinContent(7,39.94389);
   hCCpi0inFV_stack_10->SetBinContent(8,36.92236);
   hCCpi0inFV_stack_10->SetBinContent(9,39.47775);
   hCCpi0inFV_stack_10->SetBinContent(10,53.50532);
   hCCpi0inFV_stack_10->SetBinContent(11,53.30331);
   hCCpi0inFV_stack_10->SetBinContent(12,58.29132);
   hCCpi0inFV_stack_10->SetBinContent(13,54.23943);
   hCCpi0inFV_stack_10->SetBinContent(14,43.13078);
   hCCpi0inFV_stack_10->SetBinContent(15,50.36521);
   hCCpi0inFV_stack_10->SetBinContent(16,40.66257);
   hCCpi0inFV_stack_10->SetBinContent(17,47.40137);
   hCCpi0inFV_stack_10->SetBinContent(18,42.36877);
   hCCpi0inFV_stack_10->SetBinContent(19,42.96071);
   hCCpi0inFV_stack_10->SetBinContent(20,37.48957);
   hCCpi0inFV_stack_10->SetBinContent(21,50.70293);
   hCCpi0inFV_stack_10->SetBinContent(22,43.09681);
   hCCpi0inFV_stack_10->SetBinContent(23,55.08075);
   hCCpi0inFV_stack_10->SetBinContent(24,49.62519);
   hCCpi0inFV_stack_10->SetBinError(1,3.683835);
   hCCpi0inFV_stack_10->SetBinError(2,3.288859);
   hCCpi0inFV_stack_10->SetBinError(3,3.49578);
   hCCpi0inFV_stack_10->SetBinError(4,3.157604);
   hCCpi0inFV_stack_10->SetBinError(5,2.984448);
   hCCpi0inFV_stack_10->SetBinError(6,2.87721);
   hCCpi0inFV_stack_10->SetBinError(7,3.216148);
   hCCpi0inFV_stack_10->SetBinError(8,3.043785);
   hCCpi0inFV_stack_10->SetBinError(9,3.0699);
   hCCpi0inFV_stack_10->SetBinError(10,3.749254);
   hCCpi0inFV_stack_10->SetBinError(11,3.747469);
   hCCpi0inFV_stack_10->SetBinError(12,3.819287);
   hCCpi0inFV_stack_10->SetBinError(13,3.725934);
   hCCpi0inFV_stack_10->SetBinError(14,3.297035);
   hCCpi0inFV_stack_10->SetBinError(15,3.552649);
   hCCpi0inFV_stack_10->SetBinError(16,3.14389);
   hCCpi0inFV_stack_10->SetBinError(17,3.452344);
   hCCpi0inFV_stack_10->SetBinError(18,3.282313);
   hCCpi0inFV_stack_10->SetBinError(19,3.27098);
   hCCpi0inFV_stack_10->SetBinError(20,3.079971);
   hCCpi0inFV_stack_10->SetBinError(21,3.623728);
   hCCpi0inFV_stack_10->SetBinError(22,3.35023);
   hCCpi0inFV_stack_10->SetBinError(23,3.675047);
   hCCpi0inFV_stack_10->SetBinError(24,3.51682);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,20.11657);
   hNCinFV_stack_11->SetBinContent(2,21.10968);
   hNCinFV_stack_11->SetBinContent(3,26.47692);
   hNCinFV_stack_11->SetBinContent(4,22.92553);
   hNCinFV_stack_11->SetBinContent(5,15.67857);
   hNCinFV_stack_11->SetBinContent(6,21.13783);
   hNCinFV_stack_11->SetBinContent(7,21.9341);
   hNCinFV_stack_11->SetBinContent(8,20.62665);
   hNCinFV_stack_11->SetBinContent(9,17.97467);
   hNCinFV_stack_11->SetBinContent(10,19.77361);
   hNCinFV_stack_11->SetBinContent(11,23.8311);
   hNCinFV_stack_11->SetBinContent(12,18.16463);
   hNCinFV_stack_11->SetBinContent(13,21.96768);
   hNCinFV_stack_11->SetBinContent(14,21.53124);
   hNCinFV_stack_11->SetBinContent(15,26.12044);
   hNCinFV_stack_11->SetBinContent(16,20.81998);
   hNCinFV_stack_11->SetBinContent(17,23.17948);
   hNCinFV_stack_11->SetBinContent(18,23.10087);
   hNCinFV_stack_11->SetBinContent(19,19.39141);
   hNCinFV_stack_11->SetBinContent(20,22.5158);
   hNCinFV_stack_11->SetBinContent(21,19.93168);
   hNCinFV_stack_11->SetBinContent(22,20.47135);
   hNCinFV_stack_11->SetBinContent(23,20.81983);
   hNCinFV_stack_11->SetBinContent(24,22.49067);
   hNCinFV_stack_11->SetBinError(1,2.26258);
   hNCinFV_stack_11->SetBinError(2,2.262322);
   hNCinFV_stack_11->SetBinError(3,2.581011);
   hNCinFV_stack_11->SetBinError(4,2.371363);
   hNCinFV_stack_11->SetBinError(5,2.001382);
   hNCinFV_stack_11->SetBinError(6,2.351004);
   hNCinFV_stack_11->SetBinError(7,2.371749);
   hNCinFV_stack_11->SetBinError(8,2.263622);
   hNCinFV_stack_11->SetBinError(9,2.168459);
   hNCinFV_stack_11->SetBinError(10,2.280538);
   hNCinFV_stack_11->SetBinError(11,2.458428);
   hNCinFV_stack_11->SetBinError(12,2.176755);
   hNCinFV_stack_11->SetBinError(13,2.403653);
   hNCinFV_stack_11->SetBinError(14,2.237884);
   hNCinFV_stack_11->SetBinError(15,2.595746);
   hNCinFV_stack_11->SetBinError(16,2.271862);
   hNCinFV_stack_11->SetBinError(17,2.413231);
   hNCinFV_stack_11->SetBinError(18,2.419107);
   hNCinFV_stack_11->SetBinError(19,2.22024);
   hNCinFV_stack_11->SetBinError(20,2.395407);
   hNCinFV_stack_11->SetBinError(21,2.255041);
   hNCinFV_stack_11->SetBinError(22,2.245512);
   hNCinFV_stack_11->SetBinError(23,2.237389);
   hNCinFV_stack_11->SetBinError(24,2.364092);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,32.03845);
   hnumuCCinFV_stack_12->SetBinContent(2,27.67132);
   hnumuCCinFV_stack_12->SetBinContent(3,21.49789);
   hnumuCCinFV_stack_12->SetBinContent(4,28.49717);
   hnumuCCinFV_stack_12->SetBinContent(5,22.59216);
   hnumuCCinFV_stack_12->SetBinContent(6,19.91158);
   hnumuCCinFV_stack_12->SetBinContent(7,21.55999);
   hnumuCCinFV_stack_12->SetBinContent(8,23.50418);
   hnumuCCinFV_stack_12->SetBinContent(9,22.82286);
   hnumuCCinFV_stack_12->SetBinContent(10,24.63784);
   hnumuCCinFV_stack_12->SetBinContent(11,25.61915);
   hnumuCCinFV_stack_12->SetBinContent(12,29.57485);
   hnumuCCinFV_stack_12->SetBinContent(13,35.89599);
   hnumuCCinFV_stack_12->SetBinContent(14,34.36253);
   hnumuCCinFV_stack_12->SetBinContent(15,24.29491);
   hnumuCCinFV_stack_12->SetBinContent(16,30.09882);
   hnumuCCinFV_stack_12->SetBinContent(17,26.79548);
   hnumuCCinFV_stack_12->SetBinContent(18,27.64029);
   hnumuCCinFV_stack_12->SetBinContent(19,31.35926);
   hnumuCCinFV_stack_12->SetBinContent(20,26.72369);
   hnumuCCinFV_stack_12->SetBinContent(21,29.98214);
   hnumuCCinFV_stack_12->SetBinContent(22,21.72344);
   hnumuCCinFV_stack_12->SetBinContent(23,28.97283);
   hnumuCCinFV_stack_12->SetBinContent(24,35.98444);
   hnumuCCinFV_stack_12->SetBinError(1,3.152522);
   hnumuCCinFV_stack_12->SetBinError(2,2.993598);
   hnumuCCinFV_stack_12->SetBinError(3,2.324624);
   hnumuCCinFV_stack_12->SetBinError(4,3.109494);
   hnumuCCinFV_stack_12->SetBinError(5,2.844957);
   hnumuCCinFV_stack_12->SetBinError(6,2.563612);
   hnumuCCinFV_stack_12->SetBinError(7,2.389096);
   hnumuCCinFV_stack_12->SetBinError(8,2.559928);
   hnumuCCinFV_stack_12->SetBinError(9,2.848739);
   hnumuCCinFV_stack_12->SetBinError(10,2.844959);
   hnumuCCinFV_stack_12->SetBinError(11,2.748033);
   hnumuCCinFV_stack_12->SetBinError(12,3.175238);
   hnumuCCinFV_stack_12->SetBinError(13,3.439713);
   hnumuCCinFV_stack_12->SetBinError(14,3.168917);
   hnumuCCinFV_stack_12->SetBinError(15,2.621232);
   hnumuCCinFV_stack_12->SetBinError(16,3.240306);
   hnumuCCinFV_stack_12->SetBinError(17,2.903004);
   hnumuCCinFV_stack_12->SetBinError(18,3.149034);
   hnumuCCinFV_stack_12->SetBinError(19,4.031731);
   hnumuCCinFV_stack_12->SetBinError(20,3.607278);
   hnumuCCinFV_stack_12->SetBinError(21,3.764498);
   hnumuCCinFV_stack_12->SetBinError(22,2.519859);
   hnumuCCinFV_stack_12->SetBinError(23,3.04557);
   hnumuCCinFV_stack_12->SetBinError(24,3.541329);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,4.634026);
   hnueCCinFV_stack_13->SetBinContent(2,1.816012);
   hnueCCinFV_stack_13->SetBinContent(3,1.418942);
   hnueCCinFV_stack_13->SetBinContent(4,3.368285);
   hnueCCinFV_stack_13->SetBinContent(5,1.924801);
   hnueCCinFV_stack_13->SetBinContent(6,2.694261);
   hnueCCinFV_stack_13->SetBinContent(7,1.779016);
   hnueCCinFV_stack_13->SetBinContent(8,1.282391);
   hnueCCinFV_stack_13->SetBinContent(9,3.361568);
   hnueCCinFV_stack_13->SetBinContent(10,1.401863);
   hnueCCinFV_stack_13->SetBinContent(11,1.273184);
   hnueCCinFV_stack_13->SetBinContent(12,1.74239);
   hnueCCinFV_stack_13->SetBinContent(13,2.948662);
   hnueCCinFV_stack_13->SetBinContent(15,1.111822);
   hnueCCinFV_stack_13->SetBinContent(16,2.220988);
   hnueCCinFV_stack_13->SetBinContent(17,3.874644);
   hnueCCinFV_stack_13->SetBinContent(18,0.9963523);
   hnueCCinFV_stack_13->SetBinContent(19,3.222984);
   hnueCCinFV_stack_13->SetBinContent(20,4.4179);
   hnueCCinFV_stack_13->SetBinContent(21,1.392541);
   hnueCCinFV_stack_13->SetBinContent(22,0.950986);
   hnueCCinFV_stack_13->SetBinContent(23,3.353543);
   hnueCCinFV_stack_13->SetBinContent(24,2.028289);
   hnueCCinFV_stack_13->SetBinError(1,1.736163);
   hnueCCinFV_stack_13->SetBinError(2,0.7159056);
   hnueCCinFV_stack_13->SetBinError(3,0.5919308);
   hnueCCinFV_stack_13->SetBinError(4,1.364436);
   hnueCCinFV_stack_13->SetBinError(5,0.758036);
   hnueCCinFV_stack_13->SetBinError(6,0.9055813);
   hnueCCinFV_stack_13->SetBinError(7,0.6941512);
   hnueCCinFV_stack_13->SetBinError(8,0.7170494);
   hnueCCinFV_stack_13->SetBinError(9,1.230121);
   hnueCCinFV_stack_13->SetBinError(10,0.8157702);
   hnueCCinFV_stack_13->SetBinError(11,0.6049381);
   hnueCCinFV_stack_13->SetBinError(12,0.7619955);
   hnueCCinFV_stack_13->SetBinError(13,1.061544);
   hnueCCinFV_stack_13->SetBinError(15,0.5107116);
   hnueCCinFV_stack_13->SetBinError(16,0.8224923);
   hnueCCinFV_stack_13->SetBinError(17,1.541507);
   hnueCCinFV_stack_13->SetBinError(18,0.5308562);
   hnueCCinFV_stack_13->SetBinError(19,1.396385);
   hnueCCinFV_stack_13->SetBinError(20,1.857258);
   hnueCCinFV_stack_13->SetBinError(21,0.5820661);
   hnueCCinFV_stack_13->SetBinError(22,0.4744793);
   hnueCCinFV_stack_13->SetBinError(23,1.035758);
   hnueCCinFV_stack_13->SetBinError(24,0.693919);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,322.3268);
   hmcerror__2->SetBinContent(2,314.0558);
   hmcerror__2->SetBinContent(3,315.7346);
   hmcerror__2->SetBinContent(4,307.429);
   hmcerror__2->SetBinContent(5,282.1496);
   hmcerror__2->SetBinContent(6,295.9412);
   hmcerror__2->SetBinContent(7,318.9609);
   hmcerror__2->SetBinContent(8,292.3999);
   hmcerror__2->SetBinContent(9,292.9026);
   hmcerror__2->SetBinContent(10,297.4868);
   hmcerror__2->SetBinContent(11,325.2786);
   hmcerror__2->SetBinContent(12,315.659);
   hmcerror__2->SetBinContent(13,330.3664);
   hmcerror__2->SetBinContent(14,304.2642);
   hmcerror__2->SetBinContent(15,320.5833);
   hmcerror__2->SetBinContent(16,303.0722);
   hmcerror__2->SetBinContent(17,330.3025);
   hmcerror__2->SetBinContent(18,310.2065);
   hmcerror__2->SetBinContent(19,305.9885);
   hmcerror__2->SetBinContent(20,307.2343);
   hmcerror__2->SetBinContent(21,310.252);
   hmcerror__2->SetBinContent(22,299.6333);
   hmcerror__2->SetBinContent(23,334.4889);
   hmcerror__2->SetBinContent(24,337.0941);
   hmcerror__2->SetBinError(1,83.40368);
   hmcerror__2->SetBinError(2,78.92941);
   hmcerror__2->SetBinError(3,82.57836);
   hmcerror__2->SetBinError(4,81.19504);
   hmcerror__2->SetBinError(5,67.0324);
   hmcerror__2->SetBinError(6,74.11025);
   hmcerror__2->SetBinError(7,78.38176);
   hmcerror__2->SetBinError(8,75.5977);
   hmcerror__2->SetBinError(9,74.64856);
   hmcerror__2->SetBinError(10,79.30533);
   hmcerror__2->SetBinError(11,83.11715);
   hmcerror__2->SetBinError(12,81.21733);
   hmcerror__2->SetBinError(13,84.13731);
   hmcerror__2->SetBinError(14,79.53244);
   hmcerror__2->SetBinError(15,84.86895);
   hmcerror__2->SetBinError(16,78.31115);
   hmcerror__2->SetBinError(17,79.99552);
   hmcerror__2->SetBinError(18,74.92839);
   hmcerror__2->SetBinError(19,75.51877);
   hmcerror__2->SetBinError(20,76.43344);
   hmcerror__2->SetBinError(21,77.88165);
   hmcerror__2->SetBinError(22,80.42571);
   hmcerror__2->SetBinError(23,88.99162);
   hmcerror__2->SetBinError(24,83.14525);
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
   Double_t _fy3001[24] = {
   307,
   261,
   273,
   253,
   250,
   237,
   279,
   265,
   250,
   278,
   262,
   284,
   314,
   274,
   261,
   259,
   285,
   241,
   255,
   256,
   255,
   312,
   271,
   262};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   17.52142,
   16.15549,
   16.52271,
   15.90597,
   15.81139,
   15.3948,
   16.70329,
   16.27882,
   15.81139,
   16.67333,
   16.18641,
   16.8523,
   17.72005,
   16.55295,
   16.15549,
   16.09348,
   16.88194,
   15.52417,
   15.96872,
   16,
   15.96872,
   17.66352,
   16.46208,
   16.18641};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   17.52142,
   16.15549,
   16.52271,
   15.90597,
   15.81139,
   15.3948,
   16.70329,
   16.27882,
   15.81139,
   16.67333,
   16.18641,
   16.8523,
   17.72005,
   16.55295,
   16.15549,
   16.09348,
   16.88194,
   15.52417,
   15.96872,
   16,
   15.96872,
   17.66352,
   16.46208,
   16.18641};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(210.5937);
   Graph_Graph3001->SetMaximum(342.7315);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.6/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.2587551,
   0.2513229,
   0.2615436,
   0.2641098,
   0.2375775,
   0.2504222,
   0.245741,
   0.2585422,
   0.2548579,
   0.2665843,
   0.2555261,
   0.2572945,
   0.2546788,
   0.2613927,
   0.2647329,
   0.2583911,
   0.2421887,
   0.2415436,
   0.2468027,
   0.248779,
   0.2510271,
   0.2684138,
   0.2660525,
   0.246653};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.2587551,
   0.2513229,
   0.2615436,
   0.2641098,
   0.2375775,
   0.2504222,
   0.245741,
   0.2585422,
   0.2548579,
   0.2665843,
   0.2555261,
   0.2572945,
   0.2546788,
   0.2613927,
   0.2647329,
   0.2583911,
   0.2421887,
   0.2415436,
   0.2468027,
   0.248779,
   0.2510271,
   0.2684138,
   0.2660525,
   0.246653};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   Double_t _fely3003[24] = {
   0.2366636,
   0.2352606,
   0.2387934,
   0.2257895,
   0.2221849,
   0.2286578,
   0.2186919,
   0.2242774,
   0.2292883,
   0.2347925,
   0.2258582,
   0.2390825,
   0.2327629,
   0.2302551,
   0.2394738,
   0.2366305,
   0.221389,
   0.219881,
   0.2263693,
   0.2298798,
   0.2315733,
   0.241199,
   0.2329433,
   0.2279304};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.2366636,
   0.2352606,
   0.2387934,
   0.2257895,
   0.2221849,
   0.2286578,
   0.2186919,
   0.2242774,
   0.2292883,
   0.2347925,
   0.2258582,
   0.2390825,
   0.2327629,
   0.2302551,
   0.2394738,
   0.2366305,
   0.221389,
   0.219881,
   0.2263693,
   0.2298798,
   0.2315733,
   0.241199,
   0.2329433,
   0.2279304};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3004[24] = {
   0.9524496,
   0.8310625,
   0.8646503,
   0.8229541,
   0.8860547,
   0.8008347,
   0.8747154,
   0.9062931,
   0.8535259,
   0.9344951,
   0.8054635,
   0.8997051,
   0.9504599,
   0.9005332,
   0.8141409,
   0.8545819,
   0.8628454,
   0.7769018,
   0.8333647,
   0.8332403,
   0.8219126,
   1.041273,
   0.8101913,
   0.7772311};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.05435917,
   0.05144147,
   0.05233102,
   0.05173868,
   0.05603902,
   0.0520198,
   0.05236784,
   0.05567315,
   0.05398172,
   0.05604729,
   0.0497617,
   0.05338767,
   0.05363755,
   0.0544032,
   0.05039405,
   0.05310114,
   0.05111055,
   0.05004464,
   0.05218732,
   0.05207752,
   0.05147017,
   0.05895046,
   0.04921562,
   0.0480175};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.05435917,
   0.05144147,
   0.05233102,
   0.05173868,
   0.05603902,
   0.0520198,
   0.05236784,
   0.05567315,
   0.05398172,
   0.05604729,
   0.0497617,
   0.05338767,
   0.05363755,
   0.0544032,
   0.05039405,
   0.05310114,
   0.05111055,
   0.05004464,
   0.05218732,
   0.05207752,
   0.05147017,
   0.05895046,
   0.04921562,
   0.0480175};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.6895206);
   Graph_Graph3004->SetMaximum(1.13756);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

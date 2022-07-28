#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 14:48:27 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-27.69231,-0.4077721,203.0769,34.36016);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmc__4->SetBinContent(1,2.690057);
   hmc__4->SetBinContent(2,9.72326);
   hmc__4->SetBinContent(3,12.81336);
   hmc__4->SetBinContent(4,17.15902);
   hmc__4->SetBinContent(5,20.0418);
   hmc__4->SetBinContent(6,19.19848);
   hmc__4->SetBinContent(7,20.22766);
   hmc__4->SetBinContent(8,20.3886);
   hmc__4->SetBinContent(9,19.73237);
   hmc__4->SetBinContent(10,17.39638);
   hmc__4->SetBinContent(11,16.89983);
   hmc__4->SetBinContent(12,16.44154);
   hmc__4->SetBinContent(13,15.96423);
   hmc__4->SetBinContent(14,14.18917);
   hmc__4->SetBinContent(15,13.19847);
   hmc__4->SetBinContent(16,12.8473);
   hmc__4->SetBinContent(17,10.21966);
   hmc__4->SetBinContent(18,10.1591);
   hmc__4->SetBinContent(19,9.546012);
   hmc__4->SetBinContent(20,8.82944);
   hmc__4->SetBinContent(21,7.65601);
   hmc__4->SetBinContent(22,5.296006);
   hmc__4->SetBinContent(23,3.948486);
   hmc__4->SetBinContent(24,0.9588641);
   hmc__4->SetBinError(1,1.379105);
   hmc__4->SetBinError(2,3.133403);
   hmc__4->SetBinError(3,4.359688);
   hmc__4->SetBinError(4,4.757917);
   hmc__4->SetBinError(5,6.367576);
   hmc__4->SetBinError(6,6.677419);
   hmc__4->SetBinError(7,6.310232);
   hmc__4->SetBinError(8,5.909284);
   hmc__4->SetBinError(9,6.043103);
   hmc__4->SetBinError(10,5.477651);
   hmc__4->SetBinError(11,5.022914);
   hmc__4->SetBinError(12,4.855727);
   hmc__4->SetBinError(13,4.863649);
   hmc__4->SetBinError(14,4.494671);
   hmc__4->SetBinError(15,4.296049);
   hmc__4->SetBinError(16,4.375486);
   hmc__4->SetBinError(17,3.992024);
   hmc__4->SetBinError(18,3.140959);
   hmc__4->SetBinError(19,3.237254);
   hmc__4->SetBinError(20,3.295617);
   hmc__4->SetBinError(21,2.851513);
   hmc__4->SetBinError(22,1.919974);
   hmc__4->SetBinError(23,2.913);
   hmc__4->SetBinError(24,0.655972);
   hmc__4->SetBinError(25,0.125509);
   hmc__4->SetMinimum(-0.4077721);
   hmc__4->SetMaximum(32.62177);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,180);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(21.40803);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.0127502);
   hbadmatch_stack_1->SetBinContent(2,0.06195629);
   hbadmatch_stack_1->SetBinContent(3,0.07470649);
   hbadmatch_stack_1->SetBinContent(4,0.1384575);
   hbadmatch_stack_1->SetBinContent(5,0.1430253);
   hbadmatch_stack_1->SetBinContent(6,0.4835133);
   hbadmatch_stack_1->SetBinContent(7,0.2496199);
   hbadmatch_stack_1->SetBinContent(8,0.5075147);
   hbadmatch_stack_1->SetBinContent(9,0.425685);
   hbadmatch_stack_1->SetBinContent(10,0.7081394);
   hbadmatch_stack_1->SetBinContent(11,0.5134659);
   hbadmatch_stack_1->SetBinContent(12,0.4553249);
   hbadmatch_stack_1->SetBinContent(13,0.2546539);
   hbadmatch_stack_1->SetBinContent(14,0.3326545);
   hbadmatch_stack_1->SetBinContent(15,0.2739733);
   hbadmatch_stack_1->SetBinContent(16,0.2520894);
   hbadmatch_stack_1->SetBinContent(17,0.3184767);
   hbadmatch_stack_1->SetBinContent(18,0.08745668);
   hbadmatch_stack_1->SetBinContent(19,0.2860831);
   hbadmatch_stack_1->SetBinContent(20,0.08745668);
   hbadmatch_stack_1->SetBinContent(21,0.07786341);
   hbadmatch_stack_1->SetBinContent(22,0.07470649);
   hbadmatch_stack_1->SetBinContent(23,0.06195629);
   hbadmatch_stack_1->SetBinError(1,0.0127502);
   hbadmatch_stack_1->SetBinError(2,0.06195629);
   hbadmatch_stack_1->SetBinError(3,0.06325464);
   hbadmatch_stack_1->SetBinError(4,0.0693829);
   hbadmatch_stack_1->SetBinError(5,0.09310539);
   hbadmatch_stack_1->SetBinError(6,0.1601208);
   hbadmatch_stack_1->SetBinError(7,0.1110342);
   hbadmatch_stack_1->SetBinError(8,0.1644528);
   hbadmatch_stack_1->SetBinError(9,0.1487401);
   hbadmatch_stack_1->SetBinError(10,0.381709);
   hbadmatch_stack_1->SetBinError(11,0.1700172);
   hbadmatch_stack_1->SetBinError(12,0.162165);
   hbadmatch_stack_1->SetBinError(13,0.119388);
   hbadmatch_stack_1->SetBinError(14,0.1395232);
   hbadmatch_stack_1->SetBinError(15,0.1184536);
   hbadmatch_stack_1->SetBinError(16,0.1113448);
   hbadmatch_stack_1->SetBinError(17,0.1483075);
   hbadmatch_stack_1->SetBinError(18,0.06452687);
   hbadmatch_stack_1->SetBinError(19,0.1258651);
   hbadmatch_stack_1->SetBinError(20,0.06452687);
   hbadmatch_stack_1->SetBinError(21,0.03181192);
   hbadmatch_stack_1->SetBinError(22,0.06325464);
   hbadmatch_stack_1->SetBinError(23,0.06195629);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.211319);
   hext_stack_2->SetBinContent(2,1.081134);
   hext_stack_2->SetBinContent(3,0.9188949);
   hext_stack_2->SetBinContent(4,1.329263);
   hext_stack_2->SetBinContent(5,0.3462873);
   hext_stack_2->SetBinContent(6,0.5453364);
   hext_stack_2->SetBinContent(7,1.329263);
   hext_stack_2->SetBinContent(8,1.130214);
   hext_stack_2->SetBinContent(9,0.9557045);
   hext_stack_2->SetBinContent(10,0.5698761);
   hext_stack_2->SetBinContent(11,0.5944158);
   hext_stack_2->SetBinContent(12,1.638741);
   hext_stack_2->SetBinContent(13,1.017054);
   hext_stack_2->SetBinContent(14,1.203833);
   hext_stack_2->SetBinContent(15,1.068865);
   hext_stack_2->SetBinContent(16,0.793465);
   hext_stack_2->SetBinContent(17,0.4839872);
   hext_stack_2->SetBinContent(18,0.4839872);
   hext_stack_2->SetBinContent(19,0.4594475);
   hext_stack_2->SetBinContent(20,0.4594475);
   hext_stack_2->SetBinContent(21,0.8820854);
   hext_stack_2->SetBinContent(22,0.833006);
   hext_stack_2->SetBinContent(23,0.4226379);
   hext_stack_2->SetBinContent(24,0.1990491);
   hext_stack_2->SetBinError(1,0.1994269);
   hext_stack_2->SetBinError(2,0.4462696);
   hext_stack_2->SetBinError(3,0.3999846);
   hext_stack_2->SetBinError(4,0.4892641);
   hext_stack_2->SetBinError(5,0.2035366);
   hext_stack_2->SetBinError(6,0.2846888);
   hext_stack_2->SetBinError(7,0.4892641);
   hext_stack_2->SetBinError(8,0.4469438);
   hext_stack_2->SetBinError(9,0.4005488);
   hext_stack_2->SetBinError(10,0.2852171);
   hext_stack_2->SetBinError(11,0.2857444);
   hext_stack_2->SetBinError(12,0.5294854);
   hext_stack_2->SetBinError(13,0.4014873);
   hext_stack_2->SetBinError(14,0.4479532);
   hext_stack_2->SetBinError(15,0.4461009);
   hext_stack_2->SetBinError(16,0.348239);
   hext_stack_2->SetBinError(17,0.2833636);
   hext_stack_2->SetBinError(18,0.2833636);
   hext_stack_2->SetBinError(19,0.2828318);
   hext_stack_2->SetBinError(20,0.2828318);
   hext_stack_2->SetBinError(21,0.3994196);
   hext_stack_2->SetBinError(22,0.3986651);
   hext_stack_2->SetBinError(23,0.2820323);
   hext_stack_2->SetBinError(24,0.1990491);
   hext_stack_2->SetEntries(312);

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(2,0.05242869);
   hdirt_stack_3->SetBinContent(4,0.102526);
   hdirt_stack_3->SetBinContent(5,0.06064831);
   hdirt_stack_3->SetBinContent(6,0.06773126);
   hdirt_stack_3->SetBinContent(7,0.1316815);
   hdirt_stack_3->SetBinContent(8,0.3510569);
   hdirt_stack_3->SetBinContent(9,0.1408468);
   hdirt_stack_3->SetBinContent(10,0.06064831);
   hdirt_stack_3->SetBinContent(11,0.02629034);
   hdirt_stack_3->SetBinContent(12,0.05901156);
   hdirt_stack_3->SetBinContent(14,0.06114161);
   hdirt_stack_3->SetBinContent(15,0.05414451);
   hdirt_stack_3->SetBinContent(16,0.08841814);
   hdirt_stack_3->SetBinContent(17,0.02622191);
   hdirt_stack_3->SetBinContent(18,0.05242869);
   hdirt_stack_3->SetBinContent(19,0.06932814);
   hdirt_stack_3->SetBinContent(20,0.06229768);
   hdirt_stack_3->SetBinContent(22,0.01610539);
   hdirt_stack_3->SetBinContent(23,0.08841814);
   hdirt_stack_3->SetBinError(2,0.0449667);
   hdirt_stack_3->SetBinError(4,0.06731826);
   hdirt_stack_3->SetBinError(5,0.04571177);
   hdirt_stack_3->SetBinError(6,0.05259274);
   hdirt_stack_3->SetBinError(7,0.07471205);
   hdirt_stack_3->SetBinError(8,0.3012512);
   hdirt_stack_3->SetBinError(9,0.07701226);
   hdirt_stack_3->SetBinError(10,0.04571177);
   hdirt_stack_3->SetBinError(11,0.01523707);
   hdirt_stack_3->SetBinError(12,0.05145273);
   hdirt_stack_3->SetBinError(14,0.05355651);
   hdirt_stack_3->SetBinError(15,0.04529091);
   hdirt_stack_3->SetBinError(16,0.06252107);
   hdirt_stack_3->SetBinError(17,0.01519293);
   hdirt_stack_3->SetBinError(18,0.0449667);
   hdirt_stack_3->SetBinError(19,0.05415128);
   hdirt_stack_3->SetBinError(20,0.04603695);
   hdirt_stack_3->SetBinError(22,0.01610539);
   hdirt_stack_3->SetBinError(23,0.06252107);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.149413);
   houtFV_stack_4->SetBinContent(2,0.5849017);
   houtFV_stack_4->SetBinContent(3,1.155259);
   houtFV_stack_4->SetBinContent(4,1.349188);
   houtFV_stack_4->SetBinContent(5,1.838115);
   houtFV_stack_4->SetBinContent(6,1.141645);
   houtFV_stack_4->SetBinContent(7,0.945684);
   houtFV_stack_4->SetBinContent(8,1.321058);
   houtFV_stack_4->SetBinContent(9,1.466611);
   houtFV_stack_4->SetBinContent(10,0.7403431);
   houtFV_stack_4->SetBinContent(11,1.238072);
   houtFV_stack_4->SetBinContent(12,0.649877);
   houtFV_stack_4->SetBinContent(13,0.9225705);
   houtFV_stack_4->SetBinContent(14,0.4099883);
   houtFV_stack_4->SetBinContent(15,0.8508369);
   houtFV_stack_4->SetBinContent(16,0.8327268);
   houtFV_stack_4->SetBinContent(17,0.5292506);
   houtFV_stack_4->SetBinContent(18,0.8322077);
   houtFV_stack_4->SetBinContent(19,0.8714038);
   houtFV_stack_4->SetBinContent(20,0.6595452);
   houtFV_stack_4->SetBinContent(21,0.6039272);
   houtFV_stack_4->SetBinContent(22,0.2988259);
   houtFV_stack_4->SetBinContent(23,0.2545852);
   houtFV_stack_4->SetBinContent(24,0.03825059);
   houtFV_stack_4->SetBinError(1,0.08945557);
   houtFV_stack_4->SetBinError(2,0.1784562);
   houtFV_stack_4->SetBinError(3,0.2579853);
   houtFV_stack_4->SetBinError(4,0.2716526);
   houtFV_stack_4->SetBinError(5,0.318982);
   houtFV_stack_4->SetBinError(6,0.2461859);
   houtFV_stack_4->SetBinError(7,0.2273539);
   houtFV_stack_4->SetBinError(8,0.2735457);
   houtFV_stack_4->SetBinError(9,0.2902932);
   houtFV_stack_4->SetBinError(10,0.1971096);
   houtFV_stack_4->SetBinError(11,0.2602185);
   houtFV_stack_4->SetBinError(12,0.189133);
   houtFV_stack_4->SetBinError(13,0.2337112);
   houtFV_stack_4->SetBinError(14,0.1533597);
   houtFV_stack_4->SetBinError(15,0.2179798);
   houtFV_stack_4->SetBinError(16,0.2172578);
   houtFV_stack_4->SetBinError(17,0.1739107);
   houtFV_stack_4->SetBinError(18,0.2169613);
   houtFV_stack_4->SetBinError(19,0.2253352);
   houtFV_stack_4->SetBinError(20,0.1847372);
   houtFV_stack_4->SetBinError(21,0.1900001);
   houtFV_stack_4->SetBinError(22,0.1265093);
   houtFV_stack_4->SetBinError(23,0.09692133);
   houtFV_stack_4->SetBinError(24,0.02208399);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,1.430379);
   hNCpi0inFV_stack_5->SetBinContent(2,5.338821);
   hNCpi0inFV_stack_5->SetBinContent(3,7.294169);
   hNCpi0inFV_stack_5->SetBinContent(4,8.306965);
   hNCpi0inFV_stack_5->SetBinContent(5,10.7396);
   hNCpi0inFV_stack_5->SetBinContent(6,11.51934);
   hNCpi0inFV_stack_5->SetBinContent(7,11.73237);
   hNCpi0inFV_stack_5->SetBinContent(8,11.43746);
   hNCpi0inFV_stack_5->SetBinContent(9,10.87985);
   hNCpi0inFV_stack_5->SetBinContent(10,10.18574);
   hNCpi0inFV_stack_5->SetBinContent(11,8.30876);
   hNCpi0inFV_stack_5->SetBinContent(12,8.970162);
   hNCpi0inFV_stack_5->SetBinContent(13,8.296009);
   hNCpi0inFV_stack_5->SetBinContent(14,7.840591);
   hNCpi0inFV_stack_5->SetBinContent(15,6.710834);
   hNCpi0inFV_stack_5->SetBinContent(16,6.987749);
   hNCpi0inFV_stack_5->SetBinContent(17,5.462734);
   hNCpi0inFV_stack_5->SetBinContent(18,5.588442);
   hNCpi0inFV_stack_5->SetBinContent(19,4.728419);
   hNCpi0inFV_stack_5->SetBinContent(20,4.9362);
   hNCpi0inFV_stack_5->SetBinContent(21,3.400043);
   hNCpi0inFV_stack_5->SetBinContent(22,2.552771);
   hNCpi0inFV_stack_5->SetBinContent(23,1.955119);
   hNCpi0inFV_stack_5->SetBinContent(24,0.4846948);
   hNCpi0inFV_stack_5->SetBinError(1,0.281443);
   hNCpi0inFV_stack_5->SetBinError(2,0.5390926);
   hNCpi0inFV_stack_5->SetBinError(3,0.6309467);
   hNCpi0inFV_stack_5->SetBinError(4,0.6642774);
   hNCpi0inFV_stack_5->SetBinError(5,0.7649054);
   hNCpi0inFV_stack_5->SetBinError(6,0.7831436);
   hNCpi0inFV_stack_5->SetBinError(7,0.7926414);
   hNCpi0inFV_stack_5->SetBinError(8,0.7882992);
   hNCpi0inFV_stack_5->SetBinError(9,0.7660734);
   hNCpi0inFV_stack_5->SetBinError(10,0.7420528);
   hNCpi0inFV_stack_5->SetBinError(11,0.661996);
   hNCpi0inFV_stack_5->SetBinError(12,0.6863386);
   hNCpi0inFV_stack_5->SetBinError(13,0.6618732);
   hNCpi0inFV_stack_5->SetBinError(14,0.6528186);
   hNCpi0inFV_stack_5->SetBinError(15,0.5999507);
   hNCpi0inFV_stack_5->SetBinError(16,0.6079218);
   hNCpi0inFV_stack_5->SetBinError(17,0.5461666);
   hNCpi0inFV_stack_5->SetBinError(18,0.5504084);
   hNCpi0inFV_stack_5->SetBinError(19,0.5083788);
   hNCpi0inFV_stack_5->SetBinError(20,0.5256819);
   hNCpi0inFV_stack_5->SetBinError(21,0.4248993);
   hNCpi0inFV_stack_5->SetBinError(22,0.3690551);
   hNCpi0inFV_stack_5->SetBinError(23,0.3227886);
   hNCpi0inFV_stack_5->SetBinError(24,0.1658926);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.4473746);
   hCCpi0inFV_stack_6->SetBinContent(2,1.368423);
   hCCpi0inFV_stack_6->SetBinContent(3,1.883959);
   hCCpi0inFV_stack_6->SetBinContent(4,3.536844);
   hCCpi0inFV_stack_6->SetBinContent(5,3.04001);
   hCCpi0inFV_stack_6->SetBinContent(6,3.454045);
   hCCpi0inFV_stack_6->SetBinContent(7,3.065661);
   hCCpi0inFV_stack_6->SetBinContent(8,3.87807);
   hCCpi0inFV_stack_6->SetBinContent(9,3.609583);
   hCCpi0inFV_stack_6->SetBinContent(10,2.708456);
   hCCpi0inFV_stack_6->SetBinContent(11,2.343196);
   hCCpi0inFV_stack_6->SetBinContent(12,2.448822);
   hCCpi0inFV_stack_6->SetBinContent(13,2.420062);
   hCCpi0inFV_stack_6->SetBinContent(14,2.082657);
   hCCpi0inFV_stack_6->SetBinContent(15,1.95522);
   hCCpi0inFV_stack_6->SetBinContent(16,2.044396);
   hCCpi0inFV_stack_6->SetBinContent(17,1.88129);
   hCCpi0inFV_stack_6->SetBinContent(18,2.021476);
   hCCpi0inFV_stack_6->SetBinContent(19,1.958103);
   hCCpi0inFV_stack_6->SetBinContent(20,1.748459);
   hCCpi0inFV_stack_6->SetBinContent(21,1.367454);
   hCCpi0inFV_stack_6->SetBinContent(22,0.8363162);
   hCCpi0inFV_stack_6->SetBinContent(23,0.5391567);
   hCCpi0inFV_stack_6->SetBinContent(24,0.1749134);
   hCCpi0inFV_stack_6->SetBinError(1,0.1595569);
   hCCpi0inFV_stack_6->SetBinError(2,0.2745388);
   hCCpi0inFV_stack_6->SetBinError(3,0.3187381);
   hCCpi0inFV_stack_6->SetBinError(4,0.439704);
   hCCpi0inFV_stack_6->SetBinError(5,0.3988677);
   hCCpi0inFV_stack_6->SetBinError(6,0.4385283);
   hCCpi0inFV_stack_6->SetBinError(7,0.4067898);
   hCCpi0inFV_stack_6->SetBinError(8,0.4612234);
   hCCpi0inFV_stack_6->SetBinError(9,0.4435125);
   hCCpi0inFV_stack_6->SetBinError(10,0.3778595);
   hCCpi0inFV_stack_6->SetBinError(11,0.3483318);
   hCCpi0inFV_stack_6->SetBinError(12,0.3707234);
   hCCpi0inFV_stack_6->SetBinError(13,0.3701003);
   hCCpi0inFV_stack_6->SetBinError(14,0.3322004);
   hCCpi0inFV_stack_6->SetBinError(15,0.3276724);
   hCCpi0inFV_stack_6->SetBinError(16,0.3384677);
   hCCpi0inFV_stack_6->SetBinError(17,0.3213912);
   hCCpi0inFV_stack_6->SetBinError(18,0.3344566);
   hCCpi0inFV_stack_6->SetBinError(19,0.332617);
   hCCpi0inFV_stack_6->SetBinError(20,0.3205954);
   hCCpi0inFV_stack_6->SetBinError(21,0.2771421);
   hCCpi0inFV_stack_6->SetBinError(22,0.2028533);
   hCCpi0inFV_stack_6->SetBinError(23,0.1681394);
   hCCpi0inFV_stack_6->SetBinError(24,0.09125478);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.07470649);
   hNCinFV_stack_7->SetBinContent(2,0.26237);
   hNCinFV_stack_7->SetBinContent(3,0.6833139);
   hNCinFV_stack_7->SetBinContent(4,0.8472717);
   hNCinFV_stack_7->SetBinContent(5,1.031346);
   hNCinFV_stack_7->SetBinContent(6,0.5484458);
   hNCinFV_stack_7->SetBinContent(7,0.8727372);
   hNCinFV_stack_7->SetBinContent(8,0.4372834);
   hNCinFV_stack_7->SetBinContent(9,0.8691828);
   hNCinFV_stack_7->SetBinContent(10,0.6231523);
   hNCinFV_stack_7->SetBinContent(11,1.096892);
   hNCinFV_stack_7->SetBinContent(12,0.6723584);
   hNCinFV_stack_7->SetBinContent(13,0.6723584);
   hNCinFV_stack_7->SetBinContent(14,0.8327268);
   hNCinFV_stack_7->SetBinContent(15,0.845477);
   hNCinFV_stack_7->SetBinContent(16,0.6486527);
   hNCinFV_stack_7->SetBinContent(17,0.475534);
   hNCinFV_stack_7->SetBinContent(18,0.497445);
   hNCinFV_stack_7->SetBinContent(19,0.5339009);
   hNCinFV_stack_7->SetBinContent(20,0.1512077);
   hNCinFV_stack_7->SetBinContent(21,0.6086074);
   hNCinFV_stack_7->SetBinContent(22,0.2131639);
   hNCinFV_stack_7->SetBinContent(23,0.2860757);
   hNCinFV_stack_7->SetBinError(1,0.06325464);
   hNCinFV_stack_7->SetBinError(2,0.1117638);
   hNCinFV_stack_7->SetBinError(3,0.1979865);
   hNCinFV_stack_7->SetBinError(4,0.2105654);
   hNCinFV_stack_7->SetBinError(5,0.2426505);
   hNCinFV_stack_7->SetBinError(6,0.1683246);
   hNCinFV_stack_7->SetBinError(7,0.2183844);
   hNCinFV_stack_7->SetBinError(8,0.1442865);
   hNCinFV_stack_7->SetBinError(9,0.2251986);
   hNCinFV_stack_7->SetBinError(10,0.1798175);
   hNCinFV_stack_7->SetBinError(11,0.238047);
   hNCinFV_stack_7->SetBinError(12,0.1897639);
   hNCinFV_stack_7->SetBinError(13,0.1897639);
   hNCinFV_stack_7->SetBinError(14,0.2172578);
   hNCinFV_stack_7->SetBinError(15,0.2176316);
   hNCinFV_stack_7->SetBinError(16,0.1807193);
   hNCinFV_stack_7->SetBinError(17,0.1459667);
   hNCinFV_stack_7->SetBinError(18,0.1663818);
   hNCinFV_stack_7->SetBinError(19,0.1766249);
   hNCinFV_stack_7->SetBinError(20,0.0705447);
   hNCinFV_stack_7->SetBinError(21,0.18761);
   hNCinFV_stack_7->SetBinError(22,0.09388896);
   hNCinFV_stack_7->SetBinError(23,0.1258651);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.2894085);
   hnumuCCinFV_stack_8->SetBinContent(2,0.8229465);
   hnumuCCinFV_stack_8->SetBinContent(3,0.6634315);
   hnumuCCinFV_stack_8->SetBinContent(4,1.432704);
   hnumuCCinFV_stack_8->SetBinContent(5,2.84277);
   hnumuCCinFV_stack_8->SetBinContent(6,1.350017);
   hnumuCCinFV_stack_8->SetBinContent(7,1.763977);
   hnumuCCinFV_stack_8->SetBinContent(8,1.313199);
   hnumuCCinFV_stack_8->SetBinContent(9,1.384904);
   hnumuCCinFV_stack_8->SetBinContent(10,1.699823);
   hnumuCCinFV_stack_8->SetBinContent(11,2.778736);
   hnumuCCinFV_stack_8->SetBinContent(12,1.547231);
   hnumuCCinFV_stack_8->SetBinContent(13,2.31957);
   hnumuCCinFV_stack_8->SetBinContent(14,1.271388);
   hnumuCCinFV_stack_8->SetBinContent(15,1.37716);
   hnumuCCinFV_stack_8->SetBinContent(16,1.187057);
   hnumuCCinFV_stack_8->SetBinContent(17,1.042166);
   hnumuCCinFV_stack_8->SetBinContent(18,0.5956589);
   hnumuCCinFV_stack_8->SetBinContent(19,0.6265753);
   hnumuCCinFV_stack_8->SetBinContent(20,0.7248269);
   hnumuCCinFV_stack_8->SetBinContent(21,0.7160302);
   hnumuCCinFV_stack_8->SetBinContent(22,0.4091543);
   hnumuCCinFV_stack_8->SetBinContent(23,0.3405366);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(1,0.1339067);
   hnumuCCinFV_stack_8->SetBinError(2,0.2268914);
   hnumuCCinFV_stack_8->SetBinError(3,0.2429808);
   hnumuCCinFV_stack_8->SetBinError(4,0.2966769);
   hnumuCCinFV_stack_8->SetBinError(5,0.715172);
   hnumuCCinFV_stack_8->SetBinError(6,0.2920379);
   hnumuCCinFV_stack_8->SetBinError(7,0.3481802);
   hnumuCCinFV_stack_8->SetBinError(8,0.2883857);
   hnumuCCinFV_stack_8->SetBinError(9,0.3468013);
   hnumuCCinFV_stack_8->SetBinError(10,0.3809466);
   hnumuCCinFV_stack_8->SetBinError(11,0.4978566);
   hnumuCCinFV_stack_8->SetBinError(12,0.2964102);
   hnumuCCinFV_stack_8->SetBinError(13,0.5211503);
   hnumuCCinFV_stack_8->SetBinError(14,0.3428224);
   hnumuCCinFV_stack_8->SetBinError(15,0.3850386);
   hnumuCCinFV_stack_8->SetBinError(16,0.3022892);
   hnumuCCinFV_stack_8->SetBinError(17,0.266762);
   hnumuCCinFV_stack_8->SetBinError(18,0.1920532);
   hnumuCCinFV_stack_8->SetBinError(19,0.1869016);
   hnumuCCinFV_stack_8->SetBinError(20,0.2001358);
   hnumuCCinFV_stack_8->SetBinError(21,0.2162894);
   hnumuCCinFV_stack_8->SetBinError(22,0.1394213);
   hnumuCCinFV_stack_8->SetBinError(23,0.1545881);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(2,0.150278);
   hnueCCinFV_stack_9->SetBinContent(3,0.1396246);
   hnueCCinFV_stack_9->SetBinContent(4,0.1158003);
   hnueCCinFV_stack_9->SetBinContent(6,0.08840221);
   hnueCCinFV_stack_9->SetBinContent(7,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(8,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(10,0.1002069);
   hnueCCinFV_stack_9->SetBinContent(12,1.378697e-05);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.1541936);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(19,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(22,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.06325464);
   hnueCCinFV_stack_9->SetBinError(2,0.08959682);
   hnueCCinFV_stack_9->SetBinError(3,0.08137435);
   hnueCCinFV_stack_9->SetBinError(4,0.07791505);
   hnueCCinFV_stack_9->SetBinError(6,0.06472034);
   hnueCCinFV_stack_9->SetBinError(7,0.08854226);
   hnueCCinFV_stack_9->SetBinError(8,0.0127502);
   hnueCCinFV_stack_9->SetBinError(10,0.0657745);
   hnueCCinFV_stack_9->SetBinError(12,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.1015842);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(19,0.0127502);
   hnueCCinFV_stack_9->SetBinError(22,0.06195629);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmcerror__5->SetBinContent(1,2.690057);
   hmcerror__5->SetBinContent(2,9.72326);
   hmcerror__5->SetBinContent(3,12.81336);
   hmcerror__5->SetBinContent(4,17.15902);
   hmcerror__5->SetBinContent(5,20.0418);
   hmcerror__5->SetBinContent(6,19.19848);
   hmcerror__5->SetBinContent(7,20.22766);
   hmcerror__5->SetBinContent(8,20.3886);
   hmcerror__5->SetBinContent(9,19.73237);
   hmcerror__5->SetBinContent(10,17.39638);
   hmcerror__5->SetBinContent(11,16.89983);
   hmcerror__5->SetBinContent(12,16.44154);
   hmcerror__5->SetBinContent(13,15.96423);
   hmcerror__5->SetBinContent(14,14.18917);
   hmcerror__5->SetBinContent(15,13.19847);
   hmcerror__5->SetBinContent(16,12.8473);
   hmcerror__5->SetBinContent(17,10.21966);
   hmcerror__5->SetBinContent(18,10.1591);
   hmcerror__5->SetBinContent(19,9.546012);
   hmcerror__5->SetBinContent(20,8.82944);
   hmcerror__5->SetBinContent(21,7.65601);
   hmcerror__5->SetBinContent(22,5.296006);
   hmcerror__5->SetBinContent(23,3.948486);
   hmcerror__5->SetBinContent(24,0.9588641);
   hmcerror__5->SetBinError(1,1.379105);
   hmcerror__5->SetBinError(2,3.133403);
   hmcerror__5->SetBinError(3,4.359688);
   hmcerror__5->SetBinError(4,4.757917);
   hmcerror__5->SetBinError(5,6.367576);
   hmcerror__5->SetBinError(6,6.677419);
   hmcerror__5->SetBinError(7,6.310232);
   hmcerror__5->SetBinError(8,5.909284);
   hmcerror__5->SetBinError(9,6.043103);
   hmcerror__5->SetBinError(10,5.477651);
   hmcerror__5->SetBinError(11,5.022914);
   hmcerror__5->SetBinError(12,4.855727);
   hmcerror__5->SetBinError(13,4.863649);
   hmcerror__5->SetBinError(14,4.494671);
   hmcerror__5->SetBinError(15,4.296049);
   hmcerror__5->SetBinError(16,4.375486);
   hmcerror__5->SetBinError(17,3.992024);
   hmcerror__5->SetBinError(18,3.140959);
   hmcerror__5->SetBinError(19,3.237254);
   hmcerror__5->SetBinError(20,3.295617);
   hmcerror__5->SetBinError(21,2.851513);
   hmcerror__5->SetBinError(22,1.919974);
   hmcerror__5->SetBinError(23,2.913);
   hmcerror__5->SetBinError(24,0.655972);
   hmcerror__5->SetBinError(25,0.125509);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   3,
   9,
   7,
   11,
   11,
   18,
   12,
   14,
   12,
   6,
   13,
   13,
   6,
   6,
   7,
   12,
   8,
   11,
   8,
   5,
   8,
   3,
   5,
   0};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   2.143368,
   3.19354,
   2.85954,
   3.4975,
   3.4975,
   4.4008,
   3.64022,
   3.9102,
   3.64022,
   2.67925,
   3.77763,
   3.77763,
   2.67925,
   2.67925,
   2.85954,
   3.64022,
   3.0307,
   3.4975,
   3.0307,
   2.48995,
   3.0307,
   2.143368,
   2.48995,
   0};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   1.72422,
   2.9582,
   2.61053,
   3.27,
   3.27,
   4.1858,
   3.4155,
   3.6898,
   3.4155,
   2.41858,
   3.5552,
   3.5552,
   2.41858,
   2.41858,
   2.61053,
   3.4155,
   2.7896,
   3.27,
   2.7896,
   2.21064,
   2.7896,
   1.72422,
   2.21064,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,198);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(24.40438);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.68#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.71/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 19.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.7","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  165.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.8","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.5126675,
   0.3222584,
   0.3402456,
   0.2772838,
   0.3177147,
   0.3478098,
   0.3119606,
   0.2898327,
   0.3062533,
   0.314873,
   0.2972169,
   0.2953328,
   0.3046591,
   0.3167676,
   0.325496,
   0.3405762,
   0.390622,
   0.3091768,
   0.3391211,
   0.3732532,
   0.3724542,
   0.3625324,
   0.7377512,
   0.6841136};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.5126675,
   0.3222584,
   0.3402456,
   0.2772838,
   0.3177147,
   0.3478098,
   0.3119606,
   0.2898327,
   0.3062533,
   0.314873,
   0.2972169,
   0.2953328,
   0.3046591,
   0.3167676,
   0.325496,
   0.3405762,
   0.390622,
   0.3091768,
   0.3391211,
   0.3732532,
   0.3724542,
   0.3625324,
   0.7377512,
   0.6841136};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,198);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.256748,
   0.2184786,
   0.2173864,
   0.2031141,
   0.2223838,
   0.2347591,
   0.224651,
   0.2258663,
   0.2330361,
   0.2444083,
   0.2326847,
   0.2115134,
   0.2055412,
   0.2199421,
   0.225175,
   0.2038051,
   0.2301752,
   0.2022724,
   0.236189,
   0.2372019,
   0.2163004,
   0.2257968,
   0.2191472,
   0.3588481};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.256748,
   0.2184786,
   0.2173864,
   0.2031141,
   0.2223838,
   0.2347591,
   0.224651,
   0.2258663,
   0.2330361,
   0.2444083,
   0.2326847,
   0.2115134,
   0.2055412,
   0.2199421,
   0.225175,
   0.2038051,
   0.2301752,
   0.2022724,
   0.236189,
   0.2372019,
   0.2163004,
   0.2257968,
   0.2191472,
   0.3588481};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,198);
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
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   1.115218,
   0.9256155,
   0.5463049,
   0.6410623,
   0.5488529,
   0.9375742,
   0.5932472,
   0.6866581,
   0.6081378,
   0.3448993,
   0.7692386,
   0.7906801,
   0.3758402,
   0.4228576,
   0.5303646,
   0.9340481,
   0.7828049,
   1.082773,
   0.8380463,
   0.5662873,
   1.044931,
   0.5664646,
   1.266308,
   0};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.7967743,
   0.3284433,
   0.2231687,
   0.2038287,
   0.1745103,
   0.2292265,
   0.1799625,
   0.1917836,
   0.1844796,
   0.1540119,
   0.2235307,
   0.2297613,
   0.1678283,
   0.1888235,
   0.216657,
   0.283345,
   0.2965559,
   0.3442725,
   0.3174834,
   0.2820054,
   0.395859,
   0.4047141,
   0.6306089,
   0};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.6409604,
   0.3042395,
   0.2037351,
   0.1905703,
   0.163159,
   0.2180277,
   0.168853,
   0.1809737,
   0.1730912,
   0.1390278,
   0.210369,
   0.2162328,
   0.1514999,
   0.1704525,
   0.1977904,
   0.2658534,
   0.2729641,
   0.3218788,
   0.2922267,
   0.2503715,
   0.3643674,
   0.3255699,
   0.5598703,
   1.197041};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.008796);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

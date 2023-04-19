#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 20:57:03 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-3.824826,3.553846,422.9452);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__13->SetBinContent(1,60.88581);
   hmc__13->SetBinContent(2,61.41494);
   hmc__13->SetBinContent(3,71.93054);
   hmc__13->SetBinContent(4,115.0201);
   hmc__13->SetBinContent(5,170.9489);
   hmc__13->SetBinContent(6,185.9685);
   hmc__13->SetBinContent(7,190.3762);
   hmc__13->SetBinContent(8,183.9667);
   hmc__13->SetBinContent(9,191.2413);
   hmc__13->SetBinContent(10,175.651);
   hmc__13->SetBinContent(11,171.7849);
   hmc__13->SetBinContent(12,158.3372);
   hmc__13->SetBinContent(13,145.8948);
   hmc__13->SetBinContent(14,119.0804);
   hmc__13->SetBinContent(15,97.86714);
   hmc__13->SetBinContent(16,97.1627);
   hmc__13->SetBinContent(17,79.42068);
   hmc__13->SetBinContent(18,60.20027);
   hmc__13->SetBinContent(19,49.84362);
   hmc__13->SetBinContent(20,42.94949);
   hmc__13->SetBinContent(21,29.84355);
   hmc__13->SetBinContent(22,21.81963);
   hmc__13->SetBinContent(23,11.18414);
   hmc__13->SetBinContent(24,4.249672);
   hmc__13->SetBinError(1,21.86608);
   hmc__13->SetBinError(2,27.31878);
   hmc__13->SetBinError(3,23.86002);
   hmc__13->SetBinError(4,37.62125);
   hmc__13->SetBinError(5,63.43284);
   hmc__13->SetBinError(6,76.28854);
   hmc__13->SetBinError(7,82.59341);
   hmc__13->SetBinError(8,74.67248);
   hmc__13->SetBinError(9,74.52718);
   hmc__13->SetBinError(10,70.63044);
   hmc__13->SetBinError(11,68.55204);
   hmc__13->SetBinError(12,61.42087);
   hmc__13->SetBinError(13,52.85235);
   hmc__13->SetBinError(14,47.84652);
   hmc__13->SetBinError(15,45.66302);
   hmc__13->SetBinError(16,34.12158);
   hmc__13->SetBinError(17,31.16848);
   hmc__13->SetBinError(18,21.8368);
   hmc__13->SetBinError(19,19.79983);
   hmc__13->SetBinError(20,20.40621);
   hmc__13->SetBinError(21,14.39212);
   hmc__13->SetBinError(22,9.386304);
   hmc__13->SetBinError(23,6.595772);
   hmc__13->SetBinError(24,5.058925);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.824826);
   hmc__13->SetMaximum(401.6067);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,3.15);
   hs5_stack_5->SetMinimum(-1.244044e-08);
   hs5_stack_5->SetMaximum(200.8034);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9930564);
   hbadmatch_stack_1->SetBinContent(2,2.248679);
   hbadmatch_stack_1->SetBinContent(3,1.544332);
   hbadmatch_stack_1->SetBinContent(4,2.187458);
   hbadmatch_stack_1->SetBinContent(5,3.580751);
   hbadmatch_stack_1->SetBinContent(6,4.710143);
   hbadmatch_stack_1->SetBinContent(7,3.918553);
   hbadmatch_stack_1->SetBinContent(8,3.899489);
   hbadmatch_stack_1->SetBinContent(9,4.245391);
   hbadmatch_stack_1->SetBinContent(10,3.857218);
   hbadmatch_stack_1->SetBinContent(11,2.986667);
   hbadmatch_stack_1->SetBinContent(12,4.985105);
   hbadmatch_stack_1->SetBinContent(13,1.977153);
   hbadmatch_stack_1->SetBinContent(14,1.578347);
   hbadmatch_stack_1->SetBinContent(15,1.270501);
   hbadmatch_stack_1->SetBinContent(16,2.768042);
   hbadmatch_stack_1->SetBinContent(17,3.572322);
   hbadmatch_stack_1->SetBinContent(18,0.606793);
   hbadmatch_stack_1->SetBinContent(19,2.033456);
   hbadmatch_stack_1->SetBinContent(20,1.40049);
   hbadmatch_stack_1->SetBinContent(21,1.623502);
   hbadmatch_stack_1->SetBinContent(22,1.3347);
   hbadmatch_stack_1->SetBinContent(23,0.7893693);
   hbadmatch_stack_1->SetBinError(1,0.5276623);
   hbadmatch_stack_1->SetBinError(2,0.8290798);
   hbadmatch_stack_1->SetBinError(3,0.6475521);
   hbadmatch_stack_1->SetBinError(4,0.8181679);
   hbadmatch_stack_1->SetBinError(5,1.048818);
   hbadmatch_stack_1->SetBinError(6,1.081324);
   hbadmatch_stack_1->SetBinError(7,1.043515);
   hbadmatch_stack_1->SetBinError(8,1.005639);
   hbadmatch_stack_1->SetBinError(9,1.087939);
   hbadmatch_stack_1->SetBinError(10,1.038143);
   hbadmatch_stack_1->SetBinError(11,0.9357548);
   hbadmatch_stack_1->SetBinError(12,1.488174);
   hbadmatch_stack_1->SetBinError(13,0.6726422);
   hbadmatch_stack_1->SetBinError(14,0.5564143);
   hbadmatch_stack_1->SetBinError(15,0.5895188);
   hbadmatch_stack_1->SetBinError(16,0.7803611);
   hbadmatch_stack_1->SetBinError(17,1.090392);
   hbadmatch_stack_1->SetBinError(18,0.3506841);
   hbadmatch_stack_1->SetBinError(19,0.7437464);
   hbadmatch_stack_1->SetBinError(20,0.6568554);
   hbadmatch_stack_1->SetBinError(21,0.6262493);
   hbadmatch_stack_1->SetBinError(22,0.6293165);
   hbadmatch_stack_1->SetBinError(23,0.4672861);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.752401);
   hext_stack_2->SetBinContent(2,2.192989);
   hext_stack_2->SetBinContent(3,8.175003);
   hext_stack_2->SetBinContent(4,7.951576);
   hext_stack_2->SetBinContent(5,8.910407);
   hext_stack_2->SetBinContent(6,7.291193);
   hext_stack_2->SetBinContent(7,10.11861);
   hext_stack_2->SetBinContent(8,9.537661);
   hext_stack_2->SetBinContent(9,7.048997);
   hext_stack_2->SetBinContent(10,7.537797);
   hext_stack_2->SetBinContent(11,8.813845);
   hext_stack_2->SetBinContent(12,7.932806);
   hext_stack_2->SetBinContent(13,8.898818);
   hext_stack_2->SetBinContent(14,6.000783);
   hext_stack_2->SetBinContent(15,3.241202);
   hext_stack_2->SetBinContent(16,6.463634);
   hext_stack_2->SetBinContent(17,4.221574);
   hext_stack_2->SetBinContent(18,4.054399);
   hext_stack_2->SetBinContent(19,2.428004);
   hext_stack_2->SetBinContent(20,2.435184);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,1.697008);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(24,1.37261);
   hext_stack_2->SetBinError(1,1.07854);
   hext_stack_2->SetBinError(2,0.9009267);
   hext_stack_2->SetBinError(3,1.851933);
   hext_stack_2->SetBinError(4,1.765568);
   hext_stack_2->SetBinError(5,1.958401);
   hext_stack_2->SetBinError(6,1.724194);
   hext_stack_2->SetBinError(7,2.096994);
   hext_stack_2->SetBinError(8,2.156248);
   hext_stack_2->SetBinError(9,1.711052);
   hext_stack_2->SetBinError(10,1.7757);
   hext_stack_2->SetBinError(11,2.04393);
   hext_stack_2->SetBinError(12,1.839704);
   hext_stack_2->SetBinError(13,1.9752);
   hext_stack_2->SetBinError(14,1.533202);
   hext_stack_2->SetBinError(15,1.178414);
   hext_stack_2->SetBinError(16,1.744878);
   hext_stack_2->SetBinError(17,1.226034);
   hext_stack_2->SetBinError(18,1.311223);
   hext_stack_2->SetBinError(19,1.028599);
   hext_stack_2->SetBinError(20,0.9256422);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.8873887);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(24,0.8259691);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.4007975);
   hdirt_stack_3->SetBinContent(3,0.2623434);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(5,0.2669376);
   hdirt_stack_3->SetBinContent(8,1.248147);
   hdirt_stack_3->SetBinContent(9,0.866941);
   hdirt_stack_3->SetBinContent(10,0.8636529);
   hdirt_stack_3->SetBinContent(11,0.5784179);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.994874);
   hdirt_stack_3->SetBinContent(15,1.076311);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.2605212);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(20,0.4049124);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.2516114);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.4007975);
   hdirt_stack_3->SetBinError(3,0.2623434);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2645965);
   hdirt_stack_3->SetBinError(8,0.6103876);
   hdirt_stack_3->SetBinError(9,0.458805);
   hdirt_stack_3->SetBinError(10,0.3997119);
   hdirt_stack_3->SetBinError(11,0.3389702);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(14,0.5080516);
   hdirt_stack_3->SetBinError(15,0.5870006);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(18,0.2605212);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(20,0.4049124);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.2516114);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.113947);
   houtFV_stack_4->SetBinContent(2,6.388855);
   houtFV_stack_4->SetBinContent(3,6.119446);
   houtFV_stack_4->SetBinContent(4,9.192412);
   houtFV_stack_4->SetBinContent(5,13.14677);
   houtFV_stack_4->SetBinContent(6,11.20666);
   houtFV_stack_4->SetBinContent(7,10.70028);
   houtFV_stack_4->SetBinContent(8,9.374355);
   houtFV_stack_4->SetBinContent(9,10.74359);
   houtFV_stack_4->SetBinContent(10,8.159293);
   houtFV_stack_4->SetBinContent(11,7.393503);
   houtFV_stack_4->SetBinContent(12,5.155281);
   houtFV_stack_4->SetBinContent(13,5.404527);
   houtFV_stack_4->SetBinContent(14,4.549865);
   houtFV_stack_4->SetBinContent(15,5.886761);
   houtFV_stack_4->SetBinContent(16,3.179621);
   houtFV_stack_4->SetBinContent(17,1.65886);
   houtFV_stack_4->SetBinContent(18,2.709786);
   houtFV_stack_4->SetBinContent(19,1.902722);
   houtFV_stack_4->SetBinContent(20,2.980925);
   houtFV_stack_4->SetBinContent(21,2.052291);
   houtFV_stack_4->SetBinContent(22,1.370245);
   houtFV_stack_4->SetBinContent(23,0.3934307);
   houtFV_stack_4->SetBinContent(24,0.1967154);
   houtFV_stack_4->SetBinError(1,1.154118);
   houtFV_stack_4->SetBinError(2,1.301043);
   houtFV_stack_4->SetBinError(3,1.252542);
   houtFV_stack_4->SetBinError(4,1.537175);
   houtFV_stack_4->SetBinError(5,1.837462);
   houtFV_stack_4->SetBinError(6,1.662117);
   houtFV_stack_4->SetBinError(7,1.588365);
   houtFV_stack_4->SetBinError(8,1.549797);
   houtFV_stack_4->SetBinError(9,1.688305);
   houtFV_stack_4->SetBinError(10,1.428631);
   houtFV_stack_4->SetBinError(11,1.404772);
   houtFV_stack_4->SetBinError(12,1.107262);
   houtFV_stack_4->SetBinError(13,1.105939);
   houtFV_stack_4->SetBinError(14,1.049114);
   houtFV_stack_4->SetBinError(15,1.227466);
   houtFV_stack_4->SetBinError(16,0.8779761);
   houtFV_stack_4->SetBinError(17,0.650338);
   houtFV_stack_4->SetBinError(18,0.8032685);
   houtFV_stack_4->SetBinError(19,0.7594125);
   houtFV_stack_4->SetBinError(20,0.8552677);
   houtFV_stack_4->SetBinError(21,0.7073425);
   houtFV_stack_4->SetBinError(22,0.5179089);
   houtFV_stack_4->SetBinError(23,0.2781975);
   houtFV_stack_4->SetBinError(24,0.1967154);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1974492);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.044758);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.15719);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9210359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.255508);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.892472);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8780218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3093236);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3435999);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3020022);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4237414);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3223657);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2784203);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.01933);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.68683);
   hNCpi0inFVres_stack_7->SetBinContent(3,18.57783);
   hNCpi0inFVres_stack_7->SetBinContent(4,37.1465);
   hNCpi0inFVres_stack_7->SetBinContent(5,69.59816);
   hNCpi0inFVres_stack_7->SetBinContent(6,87.14765);
   hNCpi0inFVres_stack_7->SetBinContent(7,90.55426);
   hNCpi0inFVres_stack_7->SetBinContent(8,88.79826);
   hNCpi0inFVres_stack_7->SetBinContent(9,85.60454);
   hNCpi0inFVres_stack_7->SetBinContent(10,86.15009);
   hNCpi0inFVres_stack_7->SetBinContent(11,80.50812);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.13021);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.73035);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.74681);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.38078);
   hNCpi0inFVres_stack_7->SetBinContent(16,37.51368);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.95659);
   hNCpi0inFVres_stack_7->SetBinContent(18,22.54877);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.19244);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.80275);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.60253);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.070854);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.612734);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.339208);
   hNCpi0inFVres_stack_7->SetBinError(1,1.412917);
   hNCpi0inFVres_stack_7->SetBinError(2,1.261439);
   hNCpi0inFVres_stack_7->SetBinError(3,1.452645);
   hNCpi0inFVres_stack_7->SetBinError(4,1.965681);
   hNCpi0inFVres_stack_7->SetBinError(5,2.732848);
   hNCpi0inFVres_stack_7->SetBinError(6,3.016991);
   hNCpi0inFVres_stack_7->SetBinError(7,3.131604);
   hNCpi0inFVres_stack_7->SetBinError(8,3.098236);
   hNCpi0inFVres_stack_7->SetBinError(9,3.051625);
   hNCpi0inFVres_stack_7->SetBinError(10,3.090333);
   hNCpi0inFVres_stack_7->SetBinError(11,2.916123);
   hNCpi0inFVres_stack_7->SetBinError(12,2.948299);
   hNCpi0inFVres_stack_7->SetBinError(13,2.673163);
   hNCpi0inFVres_stack_7->SetBinError(14,2.339659);
   hNCpi0inFVres_stack_7->SetBinError(15,2.173923);
   hNCpi0inFVres_stack_7->SetBinError(16,1.989544);
   hNCpi0inFVres_stack_7->SetBinError(17,1.81042);
   hNCpi0inFVres_stack_7->SetBinError(18,1.534619);
   hNCpi0inFVres_stack_7->SetBinError(19,1.313684);
   hNCpi0inFVres_stack_7->SetBinError(20,1.202977);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9167538);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8811431);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6297675);
   hNCpi0inFVres_stack_7->SetBinError(24,0.426488);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.154788);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.143002);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.904127);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.997458);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.19428);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.92008);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.5906);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.75435);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.92306);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.78123);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.72885);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.42086);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.0951);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.420679);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.992802);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.677917);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.761794);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.600028);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.613814);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.262484);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.75862);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.714862);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6164414);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6664501);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9501465);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9901642);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.393407);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.263263);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.295084);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.276595);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.153735);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.141128);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.169178);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.147647);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.053365);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8996474);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9645444);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7719763);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8806645);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6724574);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7014937);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5557331);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5062564);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4611286);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06238626);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.16885);
   hCCpi0inFV_stack_10->SetBinContent(2,8.143517);
   hCCpi0inFV_stack_10->SetBinContent(3,9.288023);
   hCCpi0inFV_stack_10->SetBinContent(4,16.86569);
   hCCpi0inFV_stack_10->SetBinContent(5,24.22537);
   hCCpi0inFV_stack_10->SetBinContent(6,28.20494);
   hCCpi0inFV_stack_10->SetBinContent(7,27.49045);
   hCCpi0inFV_stack_10->SetBinContent(8,21.87181);
   hCCpi0inFV_stack_10->SetBinContent(9,31.63183);
   hCCpi0inFV_stack_10->SetBinContent(10,28.07069);
   hCCpi0inFV_stack_10->SetBinContent(11,28.27455);
   hCCpi0inFV_stack_10->SetBinContent(12,19.09935);
   hCCpi0inFV_stack_10->SetBinContent(13,20.82975);
   hCCpi0inFV_stack_10->SetBinContent(14,18.95336);
   hCCpi0inFV_stack_10->SetBinContent(15,14.19067);
   hCCpi0inFV_stack_10->SetBinContent(16,17.61987);
   hCCpi0inFV_stack_10->SetBinContent(17,10.28316);
   hCCpi0inFV_stack_10->SetBinContent(18,9.155453);
   hCCpi0inFV_stack_10->SetBinContent(19,7.802112);
   hCCpi0inFV_stack_10->SetBinContent(20,7.326709);
   hCCpi0inFV_stack_10->SetBinContent(21,5.031525);
   hCCpi0inFV_stack_10->SetBinContent(22,2.835772);
   hCCpi0inFV_stack_10->SetBinContent(23,2.298879);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.449365);
   hCCpi0inFV_stack_10->SetBinError(2,1.447485);
   hCCpi0inFV_stack_10->SetBinError(3,1.520578);
   hCCpi0inFV_stack_10->SetBinError(4,2.074388);
   hCCpi0inFV_stack_10->SetBinError(5,2.4461);
   hCCpi0inFV_stack_10->SetBinError(6,2.671695);
   hCCpi0inFV_stack_10->SetBinError(7,2.583723);
   hCCpi0inFV_stack_10->SetBinError(8,2.307217);
   hCCpi0inFV_stack_10->SetBinError(9,2.854015);
   hCCpi0inFV_stack_10->SetBinError(10,2.668004);
   hCCpi0inFV_stack_10->SetBinError(11,2.737662);
   hCCpi0inFV_stack_10->SetBinError(12,2.099505);
   hCCpi0inFV_stack_10->SetBinError(13,2.34732);
   hCCpi0inFV_stack_10->SetBinError(14,2.244801);
   hCCpi0inFV_stack_10->SetBinError(15,1.915801);
   hCCpi0inFV_stack_10->SetBinError(16,2.174376);
   hCCpi0inFV_stack_10->SetBinError(17,1.567476);
   hCCpi0inFV_stack_10->SetBinError(18,1.516986);
   hCCpi0inFV_stack_10->SetBinError(19,1.410721);
   hCCpi0inFV_stack_10->SetBinError(20,1.33809);
   hCCpi0inFV_stack_10->SetBinError(21,1.109574);
   hCCpi0inFV_stack_10->SetBinError(22,0.808577);
   hCCpi0inFV_stack_10->SetBinError(23,0.7066675);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.038287);
   hNCinFV_stack_11->SetBinContent(2,7.899789);
   hNCinFV_stack_11->SetBinContent(3,7.028872);
   hNCinFV_stack_11->SetBinContent(4,13.83253);
   hNCinFV_stack_11->SetBinContent(5,13.87117);
   hNCinFV_stack_11->SetBinContent(6,13.04567);
   hNCinFV_stack_11->SetBinContent(7,10.26822);
   hNCinFV_stack_11->SetBinContent(8,14.54537);
   hNCinFV_stack_11->SetBinContent(9,11.92032);
   hNCinFV_stack_11->SetBinContent(10,10.3472);
   hNCinFV_stack_11->SetBinContent(11,12.31267);
   hNCinFV_stack_11->SetBinContent(12,9.442711);
   hNCinFV_stack_11->SetBinContent(13,13.62181);
   hNCinFV_stack_11->SetBinContent(14,9.618057);
   hNCinFV_stack_11->SetBinContent(15,5.815006);
   hNCinFV_stack_11->SetBinContent(16,8.005688);
   hNCinFV_stack_11->SetBinContent(17,8.665993);
   hNCinFV_stack_11->SetBinContent(18,6.787357);
   hNCinFV_stack_11->SetBinContent(19,4.001457);
   hNCinFV_stack_11->SetBinContent(20,6.05713);
   hNCinFV_stack_11->SetBinContent(21,3.467945);
   hNCinFV_stack_11->SetBinContent(22,2.780828);
   hNCinFV_stack_11->SetBinContent(23,0.9835768);
   hNCinFV_stack_11->SetBinError(1,1.110767);
   hNCinFV_stack_11->SetBinError(2,1.495082);
   hNCinFV_stack_11->SetBinError(3,1.330095);
   hNCinFV_stack_11->SetBinError(4,1.830093);
   hNCinFV_stack_11->SetBinError(5,1.871785);
   hNCinFV_stack_11->SetBinError(6,1.787303);
   hNCinFV_stack_11->SetBinError(7,1.582503);
   hNCinFV_stack_11->SetBinError(8,1.982675);
   hNCinFV_stack_11->SetBinError(9,1.710148);
   hNCinFV_stack_11->SetBinError(10,1.677396);
   hNCinFV_stack_11->SetBinError(11,1.788845);
   hNCinFV_stack_11->SetBinError(12,1.481617);
   hNCinFV_stack_11->SetBinError(13,1.924016);
   hNCinFV_stack_11->SetBinError(14,1.556889);
   hNCinFV_stack_11->SetBinError(15,1.176698);
   hNCinFV_stack_11->SetBinError(16,1.399996);
   hNCinFV_stack_11->SetBinError(17,1.429816);
   hNCinFV_stack_11->SetBinError(18,1.3312);
   hNCinFV_stack_11->SetBinError(19,1.038578);
   hNCinFV_stack_11->SetBinError(20,1.257101);
   hNCinFV_stack_11->SetBinError(21,0.9620561);
   hNCinFV_stack_11->SetBinError(22,0.8315416);
   hNCinFV_stack_11->SetBinError(23,0.4398689);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,15.81662);
   hnumuCCinFV_stack_12->SetBinContent(2,11.96505);
   hnumuCCinFV_stack_12->SetBinContent(3,12.3624);
   hnumuCCinFV_stack_12->SetBinContent(4,17.03989);
   hnumuCCinFV_stack_12->SetBinContent(5,19.23118);
   hnumuCCinFV_stack_12->SetBinContent(6,16.98888);
   hnumuCCinFV_stack_12->SetBinContent(7,19.38386);
   hnumuCCinFV_stack_12->SetBinContent(8,18.2449);
   hnumuCCinFV_stack_12->SetBinContent(9,24.94513);
   hnumuCCinFV_stack_12->SetBinContent(10,16.27025);
   hnumuCCinFV_stack_12->SetBinContent(11,17.60505);
   hnumuCCinFV_stack_12->SetBinContent(12,17.64509);
   hnumuCCinFV_stack_12->SetBinContent(13,17.152);
   hnumuCCinFV_stack_12->SetBinContent(14,15.51474);
   hnumuCCinFV_stack_12->SetBinContent(15,12.07929);
   hnumuCCinFV_stack_12->SetBinContent(16,13.79603);
   hnumuCCinFV_stack_12->SetBinContent(17,10.9349);
   hnumuCCinFV_stack_12->SetBinContent(18,8.60755);
   hnumuCCinFV_stack_12->SetBinContent(19,8.495749);
   hnumuCCinFV_stack_12->SetBinContent(20,4.972007);
   hnumuCCinFV_stack_12->SetBinContent(21,4.709179);
   hnumuCCinFV_stack_12->SetBinContent(22,2.596347);
   hnumuCCinFV_stack_12->SetBinContent(23,1.117768);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5352025);
   hnumuCCinFV_stack_12->SetBinError(1,2.226141);
   hnumuCCinFV_stack_12->SetBinError(2,1.9648);
   hnumuCCinFV_stack_12->SetBinError(3,1.961234);
   hnumuCCinFV_stack_12->SetBinError(4,2.157898);
   hnumuCCinFV_stack_12->SetBinError(5,2.436389);
   hnumuCCinFV_stack_12->SetBinError(6,2.122131);
   hnumuCCinFV_stack_12->SetBinError(7,2.811442);
   hnumuCCinFV_stack_12->SetBinError(8,2.580191);
   hnumuCCinFV_stack_12->SetBinError(9,4.00357);
   hnumuCCinFV_stack_12->SetBinError(10,2.109748);
   hnumuCCinFV_stack_12->SetBinError(11,2.302134);
   hnumuCCinFV_stack_12->SetBinError(12,2.269031);
   hnumuCCinFV_stack_12->SetBinError(13,2.472779);
   hnumuCCinFV_stack_12->SetBinError(14,2.2482);
   hnumuCCinFV_stack_12->SetBinError(15,1.901128);
   hnumuCCinFV_stack_12->SetBinError(16,2.28768);
   hnumuCCinFV_stack_12->SetBinError(17,2.064376);
   hnumuCCinFV_stack_12->SetBinError(18,1.593058);
   hnumuCCinFV_stack_12->SetBinError(19,1.70504);
   hnumuCCinFV_stack_12->SetBinError(20,1.109299);
   hnumuCCinFV_stack_12->SetBinError(21,1.187707);
   hnumuCCinFV_stack_12->SetBinError(22,1.117985);
   hnumuCCinFV_stack_12->SetBinError(23,0.5729121);
   hnumuCCinFV_stack_12->SetBinError(24,0.3921167);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.271793);
   hnueCCinFV_stack_13->SetBinContent(2,2.038366);
   hnueCCinFV_stack_13->SetBinContent(3,1.334025);
   hnueCCinFV_stack_13->SetBinContent(4,1.083121);
   hnueCCinFV_stack_13->SetBinContent(5,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(6,1.643854);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(9,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(10,0.6088403);
   hnueCCinFV_stack_13->SetBinContent(11,0.6494422);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(17,2.504563);
   hnueCCinFV_stack_13->SetBinContent(18,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.5901857);
   hnueCCinFV_stack_13->SetBinError(2,0.7425636);
   hnueCCinFV_stack_13->SetBinError(3,0.618291);
   hnueCCinFV_stack_13->SetBinError(4,0.5642598);
   hnueCCinFV_stack_13->SetBinError(5,0.4213728);
   hnueCCinFV_stack_13->SetBinError(6,0.6959268);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.3921167);
   hnueCCinFV_stack_13->SetBinError(9,0.3387718);
   hnueCCinFV_stack_13->SetBinError(10,0.3519433);
   hnueCCinFV_stack_13->SetBinError(11,0.3778196);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.2502081);
   hnueCCinFV_stack_13->SetBinError(17,1.712688);
   hnueCCinFV_stack_13->SetBinError(18,0.3401776);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__14->SetBinContent(1,60.88581);
   hmcerror__14->SetBinContent(2,61.41494);
   hmcerror__14->SetBinContent(3,71.93054);
   hmcerror__14->SetBinContent(4,115.0201);
   hmcerror__14->SetBinContent(5,170.9489);
   hmcerror__14->SetBinContent(6,185.9685);
   hmcerror__14->SetBinContent(7,190.3762);
   hmcerror__14->SetBinContent(8,183.9667);
   hmcerror__14->SetBinContent(9,191.2413);
   hmcerror__14->SetBinContent(10,175.651);
   hmcerror__14->SetBinContent(11,171.7849);
   hmcerror__14->SetBinContent(12,158.3372);
   hmcerror__14->SetBinContent(13,145.8948);
   hmcerror__14->SetBinContent(14,119.0804);
   hmcerror__14->SetBinContent(15,97.86714);
   hmcerror__14->SetBinContent(16,97.1627);
   hmcerror__14->SetBinContent(17,79.42068);
   hmcerror__14->SetBinContent(18,60.20027);
   hmcerror__14->SetBinContent(19,49.84362);
   hmcerror__14->SetBinContent(20,42.94949);
   hmcerror__14->SetBinContent(21,29.84355);
   hmcerror__14->SetBinContent(22,21.81963);
   hmcerror__14->SetBinContent(23,11.18414);
   hmcerror__14->SetBinContent(24,4.249672);
   hmcerror__14->SetBinError(1,21.86608);
   hmcerror__14->SetBinError(2,27.31878);
   hmcerror__14->SetBinError(3,23.86002);
   hmcerror__14->SetBinError(4,37.62125);
   hmcerror__14->SetBinError(5,63.43284);
   hmcerror__14->SetBinError(6,76.28854);
   hmcerror__14->SetBinError(7,82.59341);
   hmcerror__14->SetBinError(8,74.67248);
   hmcerror__14->SetBinError(9,74.52718);
   hmcerror__14->SetBinError(10,70.63044);
   hmcerror__14->SetBinError(11,68.55204);
   hmcerror__14->SetBinError(12,61.42087);
   hmcerror__14->SetBinError(13,52.85235);
   hmcerror__14->SetBinError(14,47.84652);
   hmcerror__14->SetBinError(15,45.66302);
   hmcerror__14->SetBinError(16,34.12158);
   hmcerror__14->SetBinError(17,31.16848);
   hmcerror__14->SetBinError(18,21.8368);
   hmcerror__14->SetBinError(19,19.79983);
   hmcerror__14->SetBinError(20,20.40621);
   hmcerror__14->SetBinError(21,14.39212);
   hmcerror__14->SetBinError(22,9.386304);
   hmcerror__14->SetBinError(23,6.595772);
   hmcerror__14->SetBinError(24,5.058925);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3017[24] = {
   37,
   49,
   60,
   90,
   120,
   105,
   147,
   136,
   138,
   155,
   119,
   126,
   105,
   82,
   85,
   69,
   54,
   44,
   42,
   34,
   21,
   12,
   13,
   6};
   Double_t _felx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3017[24] = {
   6.2203,
   7.1318,
   7.8743,
   9.6093,
   10.95445,
   10.24695,
   12.12436,
   11.6619,
   11.74734,
   12.4499,
   10.90871,
   11.22497,
   10.24695,
   9.1791,
   9.3428,
   8.4327,
   7.4785,
   6.7671,
   6.6155,
   5.9703,
   4.7354,
   3.64022,
   3.77763,
   2.67925};
   Double_t _fehx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3017[24] = {
   6.0141,
   6.9277,
   7.6713,
   9.4079,
   10.95445,
   10.24695,
   12.12436,
   11.6619,
   11.74734,
   12.4499,
   10.90871,
   11.22497,
   10.24695,
   8.9774,
   9.1411,
   8.2304,
   7.275,
   6.5623,
   6.4104,
   5.7635,
   4.5229,
   3.4155,
   3.5552,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(2.988675);
   Graph_Graph3017->SetMaximum(183.8628);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3018[24] = {
   0.3591325,
   0.444823,
   0.3317092,
   0.3270841,
   0.3710633,
   0.4102229,
   0.4338431,
   0.4059021,
   0.3897023,
   0.4021067,
   0.3990573,
   0.3879117,
   0.3622635,
   0.4018001,
   0.4665818,
   0.3511798,
   0.3924478,
   0.362736,
   0.397239,
   0.4751212,
   0.4822525,
   0.4301771,
   0.5897434,
   1.190427};
   Double_t _fehx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3018[24] = {
   0.3591325,
   0.444823,
   0.3317092,
   0.3270841,
   0.3710633,
   0.4102229,
   0.4338431,
   0.4059021,
   0.3897023,
   0.4021067,
   0.3990573,
   0.3879117,
   0.3622635,
   0.4018001,
   0.4665818,
   0.3511798,
   0.3924478,
   0.362736,
   0.397239,
   0.4751212,
   0.4822525,
   0.4301771,
   0.5897434,
   1.190427};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3019[24] = {
   0.2499017,
   0.2301961,
   0.2207283,
   0.2669877,
   0.3343415,
   0.3901421,
   0.3857414,
   0.3872761,
   0.3651753,
   0.378614,
   0.362829,
   0.3569627,
   0.3391243,
   0.323709,
   0.3531983,
   0.3028336,
   0.3240626,
   0.3019883,
   0.2949013,
   0.2931916,
   0.2792028,
   0.2732852,
   0.3607133,
   0.3937992};
   Double_t _fehx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3019[24] = {
   0.2499017,
   0.2301961,
   0.2207283,
   0.2669877,
   0.3343415,
   0.3901421,
   0.3857414,
   0.3872761,
   0.3651753,
   0.378614,
   0.362829,
   0.3569627,
   0.3391243,
   0.323709,
   0.3531983,
   0.3028336,
   0.3240626,
   0.3019883,
   0.2949013,
   0.2931916,
   0.2792028,
   0.2732852,
   0.3607133,
   0.3937992};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3020[24] = {
   0.607695,
   0.7978514,
   0.834138,
   0.7824719,
   0.7019643,
   0.5646117,
   0.7721553,
   0.7392641,
   0.7216014,
   0.8824317,
   0.6927266,
   0.7957698,
   0.7196969,
   0.6886104,
   0.8685244,
   0.7101491,
   0.6799236,
   0.7308937,
   0.8426355,
   0.7916276,
   0.7036697,
   0.5499636,
   1.16236,
   1.411874};
   Double_t _felx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3020[24] = {
   0.1021634,
   0.1161248,
   0.1094709,
   0.08354453,
   0.06408028,
   0.05510046,
   0.06368629,
   0.06339137,
   0.06142679,
   0.07087862,
   0.06350214,
   0.07089281,
   0.07023522,
   0.07708322,
   0.09546411,
   0.08678948,
   0.09416313,
   0.1124098,
   0.1327251,
   0.1390075,
   0.1586742,
   0.1668324,
   0.3377667,
   0.6304604};
   Double_t _fehx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3020[24] = {
   0.09877671,
   0.1128015,
   0.1066487,
   0.08179353,
   0.06408028,
   0.05510046,
   0.06368629,
   0.06339137,
   0.06142679,
   0.07087862,
   0.06350214,
   0.07089281,
   0.07023522,
   0.0753894,
   0.09340316,
   0.08470741,
   0.09160082,
   0.1090078,
   0.1286103,
   0.1341925,
   0.1515537,
   0.1565334,
   0.3178787,
   0.5691216};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.2233448);
   Graph_Graph3020->SetMaximum(2.140782);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

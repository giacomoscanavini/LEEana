#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 21:27:22 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-9.08762,56.41026,1004.899);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__7->SetBinContent(1,454.381);
   hmc__7->SetBinContent(2,115.1145);
   hmc__7->SetBinContent(3,92.51981);
   hmc__7->SetBinContent(4,99.03007);
   hmc__7->SetBinContent(5,91.58751);
   hmc__7->SetBinContent(6,74.57695);
   hmc__7->SetBinContent(7,77.3519);
   hmc__7->SetBinContent(8,59.53815);
   hmc__7->SetBinContent(9,60.9931);
   hmc__7->SetBinContent(10,56.51984);
   hmc__7->SetBinContent(11,46.11667);
   hmc__7->SetBinContent(12,34.2648);
   hmc__7->SetBinContent(13,28.38214);
   hmc__7->SetBinContent(14,24.49512);
   hmc__7->SetBinContent(15,27.3736);
   hmc__7->SetBinContent(16,20.81874);
   hmc__7->SetBinContent(17,24.66847);
   hmc__7->SetBinContent(18,18.34051);
   hmc__7->SetBinContent(19,19.24806);
   hmc__7->SetBinContent(20,16.41567);
   hmc__7->SetBinContent(21,152.4168);
   hmc__7->SetBinError(1,92.59633);
   hmc__7->SetBinError(2,35.4538);
   hmc__7->SetBinError(3,28.75297);
   hmc__7->SetBinError(4,33.19736);
   hmc__7->SetBinError(5,28.82441);
   hmc__7->SetBinError(6,22.42721);
   hmc__7->SetBinError(7,22.76348);
   hmc__7->SetBinError(8,18.66831);
   hmc__7->SetBinError(9,26.72681);
   hmc__7->SetBinError(10,21.95482);
   hmc__7->SetBinError(11,18.41936);
   hmc__7->SetBinError(12,13.06902);
   hmc__7->SetBinError(13,14.20494);
   hmc__7->SetBinError(14,13.4148);
   hmc__7->SetBinError(15,11.7731);
   hmc__7->SetBinError(16,10.22768);
   hmc__7->SetBinError(17,11.72072);
   hmc__7->SetBinError(18,9.843166);
   hmc__7->SetBinError(19,9.869313);
   hmc__7->SetBinError(20,10.1537);
   hmc__7->SetBinError(21,37.69722);
   hmc__7->SetMinimum(-9.08762);
   hmc__7->SetMaximum(954.2001);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,50);
   hs3_stack_3->SetMinimum(-4.228303e-08);
   hs3_stack_3->SetMaximum(477.1);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,11.29058);
   hbadmatch_stack_1->SetBinContent(2,2.916396);
   hbadmatch_stack_1->SetBinContent(3,2.905399);
   hbadmatch_stack_1->SetBinContent(4,2.831009);
   hbadmatch_stack_1->SetBinContent(5,2.91229);
   hbadmatch_stack_1->SetBinContent(6,1.822507);
   hbadmatch_stack_1->SetBinContent(7,1.959505);
   hbadmatch_stack_1->SetBinContent(8,2.594013);
   hbadmatch_stack_1->SetBinContent(9,1.13252);
   hbadmatch_stack_1->SetBinContent(10,1.202423);
   hbadmatch_stack_1->SetBinContent(11,1.33482);
   hbadmatch_stack_1->SetBinContent(12,0.2507246);
   hbadmatch_stack_1->SetBinContent(13,0.9286332);
   hbadmatch_stack_1->SetBinContent(14,1.600077);
   hbadmatch_stack_1->SetBinContent(15,1.524209);
   hbadmatch_stack_1->SetBinContent(16,1.084467);
   hbadmatch_stack_1->SetBinContent(17,2.59602);
   hbadmatch_stack_1->SetBinContent(18,0.6803553);
   hbadmatch_stack_1->SetBinContent(19,1.103321);
   hbadmatch_stack_1->SetBinContent(20,0.4214836);
   hbadmatch_stack_1->SetBinContent(21,10.93841);
   hbadmatch_stack_1->SetBinError(1,1.742528);
   hbadmatch_stack_1->SetBinError(2,0.9336441);
   hbadmatch_stack_1->SetBinError(3,0.9162913);
   hbadmatch_stack_1->SetBinError(4,0.8891224);
   hbadmatch_stack_1->SetBinError(5,0.8793866);
   hbadmatch_stack_1->SetBinError(6,1.151356);
   hbadmatch_stack_1->SetBinError(7,0.6319247);
   hbadmatch_stack_1->SetBinError(8,0.9213622);
   hbadmatch_stack_1->SetBinError(9,0.529275);
   hbadmatch_stack_1->SetBinError(10,0.4674517);
   hbadmatch_stack_1->SetBinError(11,0.6192561);
   hbadmatch_stack_1->SetBinError(12,0.2507246);
   hbadmatch_stack_1->SetBinError(13,0.48078);
   hbadmatch_stack_1->SetBinError(14,0.8267776);
   hbadmatch_stack_1->SetBinError(15,0.7146696);
   hbadmatch_stack_1->SetBinError(16,0.5870047);
   hbadmatch_stack_1->SetBinError(17,0.9451107);
   hbadmatch_stack_1->SetBinError(18,0.4810838);
   hbadmatch_stack_1->SetBinError(19,0.6168591);
   hbadmatch_stack_1->SetBinError(20,0.2986145);
   hbadmatch_stack_1->SetBinError(21,1.78324);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,83.49541);
   hext_stack_2->SetBinContent(2,14.85652);
   hext_stack_2->SetBinContent(3,12.38662);
   hext_stack_2->SetBinContent(4,15.7431);
   hext_stack_2->SetBinContent(5,16.84756);
   hext_stack_2->SetBinContent(6,9.241985);
   hext_stack_2->SetBinContent(7,16.40789);
   hext_stack_2->SetBinContent(8,12.62882);
   hext_stack_2->SetBinContent(9,13.15951);
   hext_stack_2->SetBinContent(10,10.35363);
   hext_stack_2->SetBinContent(11,6.393022);
   hext_stack_2->SetBinContent(12,4.468179);
   hext_stack_2->SetBinContent(13,5.027592);
   hext_stack_2->SetBinContent(14,1.461993);
   hext_stack_2->SetBinContent(15,5.88986);
   hext_stack_2->SetBinContent(16,4.759445);
   hext_stack_2->SetBinContent(17,7.26965);
   hext_stack_2->SetBinContent(18,2.599588);
   hext_stack_2->SetBinContent(19,6.049854);
   hext_stack_2->SetBinContent(20,4.132192);
   hext_stack_2->SetBinContent(21,34.41302);
   hext_stack_2->SetBinError(1,6.263481);
   hext_stack_2->SetBinError(2,2.731177);
   hext_stack_2->SetBinError(3,2.338876);
   hext_stack_2->SetBinError(4,2.753147);
   hext_stack_2->SetBinError(5,2.947097);
   hext_stack_2->SetBinError(6,1.933744);
   hext_stack_2->SetBinError(7,2.80345);
   hext_stack_2->SetBinError(8,2.348507);
   hext_stack_2->SetBinError(9,2.582997);
   hext_stack_2->SetBinError(10,2.154931);
   hext_stack_2->SetBinError(11,1.708342);
   hext_stack_2->SetBinError(12,1.297469);
   hext_stack_2->SetBinError(13,1.426537);
   hext_stack_2->SetBinError(14,0.7356036);
   hext_stack_2->SetBinError(15,1.759382);
   hext_stack_2->SetBinError(16,1.567911);
   hext_stack_2->SetBinError(17,1.89115);
   hext_stack_2->SetBinError(18,0.9884288);
   hext_stack_2->SetBinError(19,1.75513);
   hext_stack_2->SetBinError(20,1.282292);
   hext_stack_2->SetBinError(21,3.817739);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,6.516809);
   hdirt_stack_3->SetBinContent(2,1.478791);
   hdirt_stack_3->SetBinContent(3,1.04738);
   hdirt_stack_3->SetBinContent(4,1.20138);
   hdirt_stack_3->SetBinContent(5,1.052645);
   hdirt_stack_3->SetBinContent(6,1.197322);
   hdirt_stack_3->SetBinContent(7,1.632407);
   hdirt_stack_3->SetBinContent(8,0.7498547);
   hdirt_stack_3->SetBinContent(9,1.695617);
   hdirt_stack_3->SetBinContent(10,1.147013);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.7524016);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.2212471);
   hdirt_stack_3->SetBinContent(15,0.9257255);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.5373625);
   hdirt_stack_3->SetBinContent(18,0.3851607);
   hdirt_stack_3->SetBinContent(20,0.6112059);
   hdirt_stack_3->SetBinContent(21,1.70001);
   hdirt_stack_3->SetBinError(1,1.297943);
   hdirt_stack_3->SetBinError(2,0.6955206);
   hdirt_stack_3->SetBinError(3,0.5260475);
   hdirt_stack_3->SetBinError(4,0.5728565);
   hdirt_stack_3->SetBinError(5,0.5518548);
   hdirt_stack_3->SetBinError(6,0.4997818);
   hdirt_stack_3->SetBinError(7,0.7416819);
   hdirt_stack_3->SetBinError(8,0.3885538);
   hdirt_stack_3->SetBinError(9,0.7383721);
   hdirt_stack_3->SetBinError(10,0.9535811);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.4142002);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.2189082);
   hdirt_stack_3->SetBinError(15,0.5393673);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.4224891);
   hdirt_stack_3->SetBinError(18,0.2830491);
   hdirt_stack_3->SetBinError(20,0.4492467);
   hdirt_stack_3->SetBinError(21,0.6862135);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,77.13638);
   houtFV_stack_4->SetBinContent(2,17.90578);
   houtFV_stack_4->SetBinContent(3,17.89893);
   houtFV_stack_4->SetBinContent(4,17.08764);
   houtFV_stack_4->SetBinContent(5,19.97772);
   houtFV_stack_4->SetBinContent(6,13.10649);
   houtFV_stack_4->SetBinContent(7,15.96591);
   houtFV_stack_4->SetBinContent(8,13.00869);
   houtFV_stack_4->SetBinContent(9,11.73173);
   houtFV_stack_4->SetBinContent(10,14.23599);
   houtFV_stack_4->SetBinContent(11,10.34645);
   houtFV_stack_4->SetBinContent(12,8.616401);
   houtFV_stack_4->SetBinContent(13,6.752069);
   houtFV_stack_4->SetBinContent(14,4.635239);
   houtFV_stack_4->SetBinContent(15,4.877936);
   houtFV_stack_4->SetBinContent(16,4.558941);
   houtFV_stack_4->SetBinContent(17,4.049639);
   houtFV_stack_4->SetBinContent(18,5.827592);
   houtFV_stack_4->SetBinContent(19,4.727446);
   houtFV_stack_4->SetBinContent(20,2.206374);
   houtFV_stack_4->SetBinContent(21,34.03407);
   houtFV_stack_4->SetBinError(1,4.39748);
   houtFV_stack_4->SetBinError(2,2.07437);
   houtFV_stack_4->SetBinError(3,2.122986);
   houtFV_stack_4->SetBinError(4,2.079928);
   houtFV_stack_4->SetBinError(5,2.20194);
   houtFV_stack_4->SetBinError(6,1.733318);
   houtFV_stack_4->SetBinError(7,2.022254);
   houtFV_stack_4->SetBinError(8,1.829671);
   houtFV_stack_4->SetBinError(9,1.671716);
   houtFV_stack_4->SetBinError(10,2.445289);
   houtFV_stack_4->SetBinError(11,1.658196);
   houtFV_stack_4->SetBinError(12,1.517261);
   houtFV_stack_4->SetBinError(13,1.453963);
   houtFV_stack_4->SetBinError(14,1.068943);
   houtFV_stack_4->SetBinError(15,1.139061);
   houtFV_stack_4->SetBinError(16,1.050434);
   houtFV_stack_4->SetBinError(17,1.018986);
   houtFV_stack_4->SetBinError(18,1.40517);
   houtFV_stack_4->SetBinError(19,1.145779);
   houtFV_stack_4->SetBinError(20,0.7344325);
   houtFV_stack_4->SetBinError(21,2.986847);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.786773);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.639369);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.825557);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5548879);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7155526);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8089711);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9168706);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4265292);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.00319);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2466946);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3127395);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.07085396);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08515355);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1394787);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3936023);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1688855);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.565138);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1753155);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7096149);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9165032);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2406018);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3337031);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2997325);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2950972);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3503568);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.339414);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1958742);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4624925);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.09416474);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1483218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05101595);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.049167);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07135048);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2827018);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1062925);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3126491);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1499347);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3329646);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6501157);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0706446);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1545467);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.07189603);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.07166435);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2408377);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.0719066);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1919463);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1684474);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08521524);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3048982);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03539586);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08326715);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03719945);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05609893);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1374257);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04420412);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1349168);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1144345);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06297452);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,63.66282);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.66713);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.34705);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.02828);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.87662);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.86067);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.46369);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.981039);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.571877);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.434927);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.666775);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.46549);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.185524);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.447047);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.056553);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.372303);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.557243);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.323576);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.036703);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.420734);
   hNCpi0inFVres_stack_7->SetBinContent(21,12.79923);
   hNCpi0inFVres_stack_7->SetBinError(1,2.678217);
   hNCpi0inFVres_stack_7->SetBinError(2,1.333942);
   hNCpi0inFVres_stack_7->SetBinError(3,1.130979);
   hNCpi0inFVres_stack_7->SetBinError(4,1.112758);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9831361);
   hNCpi0inFVres_stack_7->SetBinError(6,1.135902);
   hNCpi0inFVres_stack_7->SetBinError(7,1.02278);
   hNCpi0inFVres_stack_7->SetBinError(8,1.03185);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9572875);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8325241);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8038593);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6186903);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6665252);
   hNCpi0inFVres_stack_7->SetBinError(14,0.747617);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6098963);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5959151);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3393912);
   hNCpi0inFVres_stack_7->SetBinError(18,0.55077);
   hNCpi0inFVres_stack_7->SetBinError(19,0.469344);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3904785);
   hNCpi0inFVres_stack_7->SetBinError(21,1.115362);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,20.86143);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.054047);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.033285);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.389197);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.443062);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.423921);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.423266);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.993583);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.248461);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.098875);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.863931);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.527403);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.568483);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.038033);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.16143);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6317285);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9627724);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2569333);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4992857);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2176487);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.251907);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.801431);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8406054);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6355271);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9382501);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6671857);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7014489);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4311765);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7595183);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5061809);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5562498);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5299918);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6062605);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6553472);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3735608);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3590028);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2224604);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3545134);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1227648);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1588195);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1431556);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9682411);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,98.59822);
   hCCpi0inFV_stack_10->SetBinContent(2,23.65792);
   hCCpi0inFV_stack_10->SetBinContent(3,17.99098);
   hCCpi0inFV_stack_10->SetBinContent(4,20.49816);
   hCCpi0inFV_stack_10->SetBinContent(5,15.81818);
   hCCpi0inFV_stack_10->SetBinContent(6,13.60582);
   hCCpi0inFV_stack_10->SetBinContent(7,13.69586);
   hCCpi0inFV_stack_10->SetBinContent(8,10.16478);
   hCCpi0inFV_stack_10->SetBinContent(9,13.53636);
   hCCpi0inFV_stack_10->SetBinContent(10,12.35026);
   hCCpi0inFV_stack_10->SetBinContent(11,10.35);
   hCCpi0inFV_stack_10->SetBinContent(12,9.918506);
   hCCpi0inFV_stack_10->SetBinContent(13,4.354551);
   hCCpi0inFV_stack_10->SetBinContent(14,6.253845);
   hCCpi0inFV_stack_10->SetBinContent(15,4.390493);
   hCCpi0inFV_stack_10->SetBinContent(16,4.198462);
   hCCpi0inFV_stack_10->SetBinContent(17,4.97528);
   hCCpi0inFV_stack_10->SetBinContent(18,3.075079);
   hCCpi0inFV_stack_10->SetBinContent(19,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(20,3.900023);
   hCCpi0inFV_stack_10->SetBinContent(21,25.90416);
   hCCpi0inFV_stack_10->SetBinError(1,4.97222);
   hCCpi0inFV_stack_10->SetBinError(2,2.470103);
   hCCpi0inFV_stack_10->SetBinError(3,2.174426);
   hCCpi0inFV_stack_10->SetBinError(4,2.263028);
   hCCpi0inFV_stack_10->SetBinError(5,1.970949);
   hCCpi0inFV_stack_10->SetBinError(6,1.866059);
   hCCpi0inFV_stack_10->SetBinError(7,1.902755);
   hCCpi0inFV_stack_10->SetBinError(8,1.609984);
   hCCpi0inFV_stack_10->SetBinError(9,1.857936);
   hCCpi0inFV_stack_10->SetBinError(10,1.792318);
   hCCpi0inFV_stack_10->SetBinError(11,1.661146);
   hCCpi0inFV_stack_10->SetBinError(12,1.607249);
   hCCpi0inFV_stack_10->SetBinError(13,1.000518);
   hCCpi0inFV_stack_10->SetBinError(14,1.272399);
   hCCpi0inFV_stack_10->SetBinError(15,1.008201);
   hCCpi0inFV_stack_10->SetBinError(16,1.056424);
   hCCpi0inFV_stack_10->SetBinError(17,1.063165);
   hCCpi0inFV_stack_10->SetBinError(18,0.879181);
   hCCpi0inFV_stack_10->SetBinError(19,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(20,1.075772);
   hCCpi0inFV_stack_10->SetBinError(21,2.57226);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,21.74452);
   hNCinFV_stack_11->SetBinContent(2,3.704279);
   hNCinFV_stack_11->SetBinContent(3,3.735497);
   hNCinFV_stack_11->SetBinContent(4,4.128195);
   hNCinFV_stack_11->SetBinContent(5,3.609057);
   hNCinFV_stack_11->SetBinContent(6,4.815871);
   hNCinFV_stack_11->SetBinContent(7,4.015894);
   hNCinFV_stack_11->SetBinContent(8,2.153709);
   hNCinFV_stack_11->SetBinContent(9,1.923533);
   hNCinFV_stack_11->SetBinContent(10,2.669019);
   hNCinFV_stack_11->SetBinContent(11,4.00493);
   hNCinFV_stack_11->SetBinContent(12,1.590061);
   hNCinFV_stack_11->SetBinContent(13,0.9399055);
   hNCinFV_stack_11->SetBinContent(14,1.61616);
   hNCinFV_stack_11->SetBinContent(15,1.901611);
   hNCinFV_stack_11->SetBinContent(16,0.2263911);
   hNCinFV_stack_11->SetBinContent(17,0.9558644);
   hNCinFV_stack_11->SetBinContent(18,0.6876966);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.5008303);
   hNCinFV_stack_11->SetBinContent(21,4.948403);
   hNCinFV_stack_11->SetBinError(1,2.466193);
   hNCinFV_stack_11->SetBinError(2,0.9037652);
   hNCinFV_stack_11->SetBinError(3,0.9936146);
   hNCinFV_stack_11->SetBinError(4,1.264042);
   hNCinFV_stack_11->SetBinError(5,0.9967855);
   hNCinFV_stack_11->SetBinError(6,1.297773);
   hNCinFV_stack_11->SetBinError(7,1.1971);
   hNCinFV_stack_11->SetBinError(8,0.6839891);
   hNCinFV_stack_11->SetBinError(9,0.6454334);
   hNCinFV_stack_11->SetBinError(10,0.9393878);
   hNCinFV_stack_11->SetBinError(11,1.039474);
   hNCinFV_stack_11->SetBinError(12,0.6749095);
   hNCinFV_stack_11->SetBinError(13,0.503319);
   hNCinFV_stack_11->SetBinError(14,0.6841318);
   hNCinFV_stack_11->SetBinError(15,0.8385142);
   hNCinFV_stack_11->SetBinError(16,0.1603646);
   hNCinFV_stack_11->SetBinError(17,0.5683359);
   hNCinFV_stack_11->SetBinError(18,0.4242153);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.3724972);
   hNCinFV_stack_11->SetBinError(21,1.18298);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,54.60184);
   hnumuCCinFV_stack_12->SetBinContent(2,25.01072);
   hnumuCCinFV_stack_12->SetBinContent(3,15.94433);
   hnumuCCinFV_stack_12->SetBinContent(4,16.47751);
   hnumuCCinFV_stack_12->SetBinContent(5,14.06814);
   hnumuCCinFV_stack_12->SetBinContent(6,14.44549);
   hnumuCCinFV_stack_12->SetBinContent(7,9.798698);
   hnumuCCinFV_stack_12->SetBinContent(8,4.645188);
   hnumuCCinFV_stack_12->SetBinContent(9,5.971492);
   hnumuCCinFV_stack_12->SetBinContent(10,4.74709);
   hnumuCCinFV_stack_12->SetBinContent(11,4.321225);
   hnumuCCinFV_stack_12->SetBinContent(12,2.352189);
   hnumuCCinFV_stack_12->SetBinContent(13,4.17875);
   hnumuCCinFV_stack_12->SetBinContent(14,3.136322);
   hnumuCCinFV_stack_12->SetBinContent(15,3.506306);
   hnumuCCinFV_stack_12->SetBinContent(16,1.503779);
   hnumuCCinFV_stack_12->SetBinContent(17,1.352226);
   hnumuCCinFV_stack_12->SetBinContent(18,2.335645);
   hnumuCCinFV_stack_12->SetBinContent(19,2.067183);
   hnumuCCinFV_stack_12->SetBinContent(20,1.654011);
   hnumuCCinFV_stack_12->SetBinContent(21,22.23934);
   hnumuCCinFV_stack_12->SetBinError(1,4.4481);
   hnumuCCinFV_stack_12->SetBinError(2,3.090153);
   hnumuCCinFV_stack_12->SetBinError(3,2.144941);
   hnumuCCinFV_stack_12->SetBinError(4,2.532796);
   hnumuCCinFV_stack_12->SetBinError(5,2.7407);
   hnumuCCinFV_stack_12->SetBinError(6,2.130528);
   hnumuCCinFV_stack_12->SetBinError(7,1.71949);
   hnumuCCinFV_stack_12->SetBinError(8,1.139982);
   hnumuCCinFV_stack_12->SetBinError(9,1.219255);
   hnumuCCinFV_stack_12->SetBinError(10,1.116758);
   hnumuCCinFV_stack_12->SetBinError(11,1.096008);
   hnumuCCinFV_stack_12->SetBinError(12,0.7769092);
   hnumuCCinFV_stack_12->SetBinError(13,1.028611);
   hnumuCCinFV_stack_12->SetBinError(14,1.139119);
   hnumuCCinFV_stack_12->SetBinError(15,0.9718714);
   hnumuCCinFV_stack_12->SetBinError(16,0.6343155);
   hnumuCCinFV_stack_12->SetBinError(17,0.5669455);
   hnumuCCinFV_stack_12->SetBinError(18,0.759351);
   hnumuCCinFV_stack_12->SetBinError(19,0.7945944);
   hnumuCCinFV_stack_12->SetBinError(20,0.6981898);
   hnumuCCinFV_stack_12->SetBinError(21,2.688912);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,9.018725);
   hnueCCinFV_stack_13->SetBinContent(2,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(20,1.157431);
   hnueCCinFV_stack_13->SetBinContent(21,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,2.20971);
   hnueCCinFV_stack_13->SetBinError(2,0.1529246);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.3025491);
   hnueCCinFV_stack_13->SetBinError(20,1.157431);
   hnueCCinFV_stack_13->SetBinError(21,0.2781975);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__8->SetBinContent(1,454.381);
   hmcerror__8->SetBinContent(2,115.1145);
   hmcerror__8->SetBinContent(3,92.51981);
   hmcerror__8->SetBinContent(4,99.03007);
   hmcerror__8->SetBinContent(5,91.58751);
   hmcerror__8->SetBinContent(6,74.57695);
   hmcerror__8->SetBinContent(7,77.3519);
   hmcerror__8->SetBinContent(8,59.53815);
   hmcerror__8->SetBinContent(9,60.9931);
   hmcerror__8->SetBinContent(10,56.51984);
   hmcerror__8->SetBinContent(11,46.11667);
   hmcerror__8->SetBinContent(12,34.2648);
   hmcerror__8->SetBinContent(13,28.38214);
   hmcerror__8->SetBinContent(14,24.49512);
   hmcerror__8->SetBinContent(15,27.3736);
   hmcerror__8->SetBinContent(16,20.81874);
   hmcerror__8->SetBinContent(17,24.66847);
   hmcerror__8->SetBinContent(18,18.34051);
   hmcerror__8->SetBinContent(19,19.24806);
   hmcerror__8->SetBinContent(20,16.41567);
   hmcerror__8->SetBinContent(21,152.4168);
   hmcerror__8->SetBinError(1,92.59633);
   hmcerror__8->SetBinError(2,35.4538);
   hmcerror__8->SetBinError(3,28.75297);
   hmcerror__8->SetBinError(4,33.19736);
   hmcerror__8->SetBinError(5,28.82441);
   hmcerror__8->SetBinError(6,22.42721);
   hmcerror__8->SetBinError(7,22.76348);
   hmcerror__8->SetBinError(8,18.66831);
   hmcerror__8->SetBinError(9,26.72681);
   hmcerror__8->SetBinError(10,21.95482);
   hmcerror__8->SetBinError(11,18.41936);
   hmcerror__8->SetBinError(12,13.06902);
   hmcerror__8->SetBinError(13,14.20494);
   hmcerror__8->SetBinError(14,13.4148);
   hmcerror__8->SetBinError(15,11.7731);
   hmcerror__8->SetBinError(16,10.22768);
   hmcerror__8->SetBinError(17,11.72072);
   hmcerror__8->SetBinError(18,9.843166);
   hmcerror__8->SetBinError(19,9.869313);
   hmcerror__8->SetBinError(20,10.1537);
   hmcerror__8->SetBinError(21,37.69722);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3009[20] = {
   448,
   98,
   99,
   88,
   81,
   55,
   56,
   55,
   61,
   55,
   38,
   35,
   24,
   26,
   27,
   22,
   10,
   13,
   18,
   13};
   Double_t _felx3009[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3009[20] = {
   21.16601,
   10.0209,
   10.0712,
   9.5036,
   9.1239,
   7.546,
   7.6127,
   7.546,
   7.9383,
   7.546,
   6.3013,
   6.0548,
   5.0476,
   5.2453,
   5.3414,
   4.8417,
   3.34883,
   3.77763,
   4.4008,
   3.77763};
   Double_t _fehx3009[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3009[20] = {
   21.16601,
   9.82,
   9.87,
   9.3021,
   8.9221,
   7.3425,
   7.4094,
   7.3425,
   7.7354,
   7.3425,
   6.0955,
   5.8483,
   4.837,
   5.0358,
   5.1322,
   4.6299,
   3.1179,
   3.5552,
   4.1858,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,55);
   Graph_Graph3009->SetMinimum(5.986053);
   Graph_Graph3009->SetMaximum(515.4175);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1322.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 43.1","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 253.2","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 22.1","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 274.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.1","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  207.4","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  62.7","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 293.2","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 65.3","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 192.1","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.1","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3010[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3010[20] = {
   0.2037857,
   0.3079872,
   0.3107763,
   0.335225,
   0.3147198,
   0.3007257,
   0.2942847,
   0.3135521,
   0.438194,
   0.3884445,
   0.3994078,
   0.3814124,
   0.5004885,
   0.5476522,
   0.4300896,
   0.4912726,
   0.4751297,
   0.5366898,
   0.5127432,
   0.6185373};
   Double_t _fehx3010[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3010[20] = {
   0.2037857,
   0.3079872,
   0.3107763,
   0.335225,
   0.3147198,
   0.3007257,
   0.2942847,
   0.3135521,
   0.438194,
   0.3884445,
   0.3994078,
   0.3814124,
   0.5004885,
   0.5476522,
   0.4300896,
   0.4912726,
   0.4751297,
   0.5366898,
   0.5127432,
   0.6185373};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,55);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3011[20] = {
   0.1832653,
   0.2317065,
   0.2476913,
   0.2305967,
   0.2116479,
   0.218288,
   0.1913335,
   0.2093751,
   0.2097406,
   0.2059529,
   0.2070809,
   0.234132,
   0.2104165,
   0.2582497,
   0.1916197,
   0.2387651,
   0.1907922,
   0.2131268,
   0.2081618,
   0.3632017};
   Double_t _fehx3011[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3011[20] = {
   0.1832653,
   0.2317065,
   0.2476913,
   0.2305967,
   0.2116479,
   0.218288,
   0.1913335,
   0.2093751,
   0.2097406,
   0.2059529,
   0.2070809,
   0.234132,
   0.2104165,
   0.2582497,
   0.1916197,
   0.2387651,
   0.1907922,
   0.2131268,
   0.2081618,
   0.3632017};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,55);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3012[20] = {
   0.9859568,
   0.8513262,
   1.070041,
   0.888619,
   0.8844001,
   0.7374933,
   0.7239641,
   0.9237775,
   1.000113,
   0.9731097,
   0.8239971,
   1.021456,
   0.8456021,
   1.061436,
   0.9863518,
   1.05674,
   0.4053757,
   0.7088134,
   0.935159,
   0.7919263};
   Double_t _felx3012[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3012[20] = {
   0.04658208,
   0.08705157,
   0.1088545,
   0.09596681,
   0.09961948,
   0.1011841,
   0.09841646,
   0.1267423,
   0.1301508,
   0.1335106,
   0.1366382,
   0.1767061,
   0.1778442,
   0.2141366,
   0.1951296,
   0.2325645,
   0.1357534,
   0.2059719,
   0.228636,
   0.2301234};
   Double_t _fehx3012[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3012[20] = {
   0.04658208,
   0.08530636,
   0.1066799,
   0.09393208,
   0.09741612,
   0.09845535,
   0.09578821,
   0.1233243,
   0.1268242,
   0.1299101,
   0.1321756,
   0.1706795,
   0.1704241,
   0.2055838,
   0.1874872,
   0.222391,
   0.1263921,
   0.1938441,
   0.217466,
   0.2165736};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,55);
   Graph_Graph3012->SetMinimum(0.1686714);
   Graph_Graph3012->SetMaximum(1.380082);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 20:02:46 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
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
   pad1->Range(-61.53846,-11.03309,451.2821,1220.028);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__13->SetBinContent(1,380.216);
   hmc__13->SetBinContent(2,551.6545);
   hmc__13->SetBinContent(3,525.4804);
   hmc__13->SetBinContent(4,398.3434);
   hmc__13->SetBinContent(5,243.9343);
   hmc__13->SetBinContent(6,144.239);
   hmc__13->SetBinContent(7,92.41985);
   hmc__13->SetBinContent(8,63.54899);
   hmc__13->SetBinContent(9,37.62867);
   hmc__13->SetBinContent(10,19.73741);
   hmc__13->SetBinContent(11,15.97473);
   hmc__13->SetBinContent(12,8.560676);
   hmc__13->SetBinContent(13,4.235936);
   hmc__13->SetBinContent(14,2.368043);
   hmc__13->SetBinContent(15,2.981334);
   hmc__13->SetBinContent(16,1.295295);
   hmc__13->SetBinContent(17,4.423787);
   hmc__13->SetBinError(1,99.86744);
   hmc__13->SetBinError(2,186.2022);
   hmc__13->SetBinError(3,193.5644);
   hmc__13->SetBinError(4,149.8596);
   hmc__13->SetBinError(5,99.15497);
   hmc__13->SetBinError(6,58.92042);
   hmc__13->SetBinError(7,40.49544);
   hmc__13->SetBinError(8,28.67479);
   hmc__13->SetBinError(9,25.05253);
   hmc__13->SetBinError(10,10.46186);
   hmc__13->SetBinError(11,9.420985);
   hmc__13->SetBinError(12,7.32013);
   hmc__13->SetBinError(13,4.677217);
   hmc__13->SetBinError(14,4.66016);
   hmc__13->SetBinError(15,5.129109);
   hmc__13->SetBinError(16,1.984779);
   hmc__13->SetBinError(17,5.498821);
   hmc__13->SetMinimum(-11.03309);
   hmc__13->SetMaximum(1158.475);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",16,0,400);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(579.2373);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,9.481777);
   hbadmatch_stack_1->SetBinContent(2,10.36663);
   hbadmatch_stack_1->SetBinContent(3,13.1455);
   hbadmatch_stack_1->SetBinContent(4,10.7975);
   hbadmatch_stack_1->SetBinContent(5,4.114204);
   hbadmatch_stack_1->SetBinContent(6,3.616177);
   hbadmatch_stack_1->SetBinContent(7,3.127768);
   hbadmatch_stack_1->SetBinContent(8,1.121055);
   hbadmatch_stack_1->SetBinContent(9,0.7302274);
   hbadmatch_stack_1->SetBinContent(10,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.577232);
   hbadmatch_stack_1->SetBinError(2,1.616542);
   hbadmatch_stack_1->SetBinError(3,1.963709);
   hbadmatch_stack_1->SetBinError(4,2.009656);
   hbadmatch_stack_1->SetBinError(5,0.9976923);
   hbadmatch_stack_1->SetBinError(6,1.005832);
   hbadmatch_stack_1->SetBinError(7,0.8999062);
   hbadmatch_stack_1->SetBinError(8,0.5741662);
   hbadmatch_stack_1->SetBinError(9,0.4379386);
   hbadmatch_stack_1->SetBinError(10,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,30.07334);
   hext_stack_2->SetBinContent(2,32.16378);
   hext_stack_2->SetBinContent(3,29.2442);
   hext_stack_2->SetBinContent(4,17.64923);
   hext_stack_2->SetBinContent(5,9.570791);
   hext_stack_2->SetBinContent(6,3.979379);
   hext_stack_2->SetBinContent(7,2.435184);
   hext_stack_2->SetBinContent(8,1.779209);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(10,0.6416141);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.6487947);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,3.744047);
   hext_stack_2->SetBinError(2,3.637979);
   hext_stack_2->SetBinError(3,3.505394);
   hext_stack_2->SetBinError(4,2.784186);
   hext_stack_2->SetBinError(5,1.994925);
   hext_stack_2->SetBinError(6,1.207483);
   hext_stack_2->SetBinError(7,0.9256422);
   hext_stack_2->SetBinError(8,0.9206235);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(10,0.6416141);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4587671);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,3.568752);
   hdirt_stack_3->SetBinContent(2,2.24146);
   hdirt_stack_3->SetBinContent(3,1.786874);
   hdirt_stack_3->SetBinContent(4,0.6894026);
   hdirt_stack_3->SetBinContent(5,0.7718884);
   hdirt_stack_3->SetBinContent(6,0.1446783);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinError(1,0.9854315);
   hdirt_stack_3->SetBinError(2,0.7537114);
   hdirt_stack_3->SetBinError(3,0.6643467);
   hdirt_stack_3->SetBinError(4,0.3989221);
   hdirt_stack_3->SetBinError(5,0.4890181);
   hdirt_stack_3->SetBinError(6,0.1446783);
   hdirt_stack_3->SetBinError(7,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,28.73892);
   houtFV_stack_4->SetBinContent(2,31.12799);
   houtFV_stack_4->SetBinContent(3,25.8511);
   houtFV_stack_4->SetBinContent(4,17.8791);
   houtFV_stack_4->SetBinContent(5,11.63775);
   houtFV_stack_4->SetBinContent(6,5.46174);
   houtFV_stack_4->SetBinContent(7,6.856539);
   houtFV_stack_4->SetBinContent(8,4.694729);
   houtFV_stack_4->SetBinContent(9,0.8217539);
   houtFV_stack_4->SetBinContent(10,1.320373);
   houtFV_stack_4->SetBinContent(11,0.3934307);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,2.742925);
   houtFV_stack_4->SetBinError(2,2.783241);
   houtFV_stack_4->SetBinError(3,2.557419);
   houtFV_stack_4->SetBinError(4,2.11644);
   houtFV_stack_4->SetBinError(5,1.671355);
   houtFV_stack_4->SetBinError(6,1.150613);
   houtFV_stack_4->SetBinError(7,1.328048);
   houtFV_stack_4->SetBinError(8,1.056768);
   houtFV_stack_4->SetBinError(9,0.5115109);
   houtFV_stack_4->SetBinError(10,0.5548703);
   houtFV_stack_4->SetBinError(11,0.2781975);
   houtFV_stack_4->SetBinError(14,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.436358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.654084);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.917137);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.050158);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.398251);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.609723);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5893819);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4192003);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3007107);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,109.3682);
   hNCpi0inFVres_stack_7->SetBinContent(2,249.9649);
   hNCpi0inFVres_stack_7->SetBinContent(3,252.6264);
   hNCpi0inFVres_stack_7->SetBinContent(4,187.9276);
   hNCpi0inFVres_stack_7->SetBinContent(5,109.034);
   hNCpi0inFVres_stack_7->SetBinContent(6,62.94777);
   hNCpi0inFVres_stack_7->SetBinContent(7,36.75357);
   hNCpi0inFVres_stack_7->SetBinContent(8,23.38712);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.87093);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.974536);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.25261);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.439766);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.654822);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5717859);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.7817042);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6961718);
   hNCpi0inFVres_stack_7->SetBinError(1,3.351931);
   hNCpi0inFVres_stack_7->SetBinError(2,5.171885);
   hNCpi0inFVres_stack_7->SetBinError(3,5.16777);
   hNCpi0inFVres_stack_7->SetBinError(4,4.548839);
   hNCpi0inFVres_stack_7->SetBinError(5,3.440283);
   hNCpi0inFVres_stack_7->SetBinError(6,2.619276);
   hNCpi0inFVres_stack_7->SetBinError(7,1.956518);
   hNCpi0inFVres_stack_7->SetBinError(8,1.624955);
   hNCpi0inFVres_stack_7->SetBinError(9,1.213314);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9049682);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6983893);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5283275);
   hNCpi0inFVres_stack_7->SetBinError(13,0.267003);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2355051);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3465144);
   hNCpi0inFVres_stack_7->SetBinError(16,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2155126);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,21.90474);
   hNCpi0inFVdis_stack_8->SetBinContent(2,44.73698);
   hNCpi0inFVdis_stack_8->SetBinContent(3,44.18696);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.21507);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.45404);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.51394);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.557276);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.796496);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.844984);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.646108);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6422043);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7817042);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.520563);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.148183);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.140499);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.801835);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.609774);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.08939);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8893864);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7364997);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5909216);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.436411);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3408521);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3465144);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3205179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.5862361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1252919);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2861196);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,28.99296);
   hCCpi0inFV_stack_10->SetBinContent(2,71.82216);
   hCCpi0inFV_stack_10->SetBinContent(3,84.26805);
   hCCpi0inFV_stack_10->SetBinContent(4,67.49388);
   hCCpi0inFV_stack_10->SetBinContent(5,41.71445);
   hCCpi0inFV_stack_10->SetBinContent(6,27.96019);
   hCCpi0inFV_stack_10->SetBinContent(7,16.85017);
   hCCpi0inFV_stack_10->SetBinContent(8,11.13512);
   hCCpi0inFV_stack_10->SetBinContent(9,5.96354);
   hCCpi0inFV_stack_10->SetBinContent(10,3.089358);
   hCCpi0inFV_stack_10->SetBinContent(11,1.907138);
   hCCpi0inFV_stack_10->SetBinContent(12,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(13,1.17353);
   hCCpi0inFV_stack_10->SetBinContent(14,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(15,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(17,1.217248);
   hCCpi0inFV_stack_10->SetBinError(1,2.719695);
   hCCpi0inFV_stack_10->SetBinError(2,4.274348);
   hCCpi0inFV_stack_10->SetBinError(3,4.625021);
   hCCpi0inFV_stack_10->SetBinError(4,4.179993);
   hCCpi0inFV_stack_10->SetBinError(5,3.155533);
   hCCpi0inFV_stack_10->SetBinError(6,2.628183);
   hCCpi0inFV_stack_10->SetBinError(7,2.092233);
   hCCpi0inFV_stack_10->SetBinError(8,1.740697);
   hCCpi0inFV_stack_10->SetBinError(9,1.209805);
   hCCpi0inFV_stack_10->SetBinError(10,0.9034171);
   hCCpi0inFV_stack_10->SetBinError(11,0.6501133);
   hCCpi0inFV_stack_10->SetBinError(12,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(13,0.4790957);
   hCCpi0inFV_stack_10->SetBinError(14,0.438694);
   hCCpi0inFV_stack_10->SetBinError(15,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(17,0.6211758);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,39.43396);
   hNCinFV_stack_11->SetBinContent(2,27.7671);
   hNCinFV_stack_11->SetBinContent(3,28.60383);
   hNCinFV_stack_11->SetBinContent(4,26.36595);
   hNCinFV_stack_11->SetBinContent(5,19.74112);
   hNCinFV_stack_11->SetBinContent(6,15.63316);
   hNCinFV_stack_11->SetBinContent(7,10.84376);
   hNCinFV_stack_11->SetBinContent(8,9.091307);
   hNCinFV_stack_11->SetBinContent(9,7.898099);
   hNCinFV_stack_11->SetBinContent(10,3.95943);
   hNCinFV_stack_11->SetBinContent(11,5.036597);
   hNCinFV_stack_11->SetBinContent(12,1.662242);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,0.6803553);
   hNCinFV_stack_11->SetBinContent(16,0.1950248);
   hNCinFV_stack_11->SetBinContent(17,0.9303237);
   hNCinFV_stack_11->SetBinError(1,3.23662);
   hNCinFV_stack_11->SetBinError(2,2.61122);
   hNCinFV_stack_11->SetBinError(3,2.633174);
   hNCinFV_stack_11->SetBinError(4,2.633422);
   hNCinFV_stack_11->SetBinError(5,2.202393);
   hNCinFV_stack_11->SetBinError(6,1.96177);
   hNCinFV_stack_11->SetBinError(7,1.677222);
   hNCinFV_stack_11->SetBinError(8,1.507799);
   hNCinFV_stack_11->SetBinError(9,1.49486);
   hNCinFV_stack_11->SetBinError(10,0.9607189);
   hNCinFV_stack_11->SetBinError(11,1.110469);
   hNCinFV_stack_11->SetBinError(12,0.6513556);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.4810838);
   hNCinFV_stack_11->SetBinError(16,0.1950249);
   hNCinFV_stack_11->SetBinError(17,0.4814682);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,101.2735);
   hnumuCCinFV_stack_12->SetBinContent(2,74.40269);
   hnumuCCinFV_stack_12->SetBinContent(3,40.24004);
   hnumuCCinFV_stack_12->SetBinContent(4,34.82877);
   hnumuCCinFV_stack_12->SetBinContent(5,21.34184);
   hnumuCCinFV_stack_12->SetBinContent(6,11.10316);
   hnumuCCinFV_stack_12->SetBinContent(7,7.002624);
   hnumuCCinFV_stack_12->SetBinContent(8,6.900948);
   hnumuCCinFV_stack_12->SetBinContent(9,4.43618);
   hnumuCCinFV_stack_12->SetBinContent(10,1.373626);
   hnumuCCinFV_stack_12->SetBinContent(11,2.39585);
   hnumuCCinFV_stack_12->SetBinContent(12,1.015734);
   hnumuCCinFV_stack_12->SetBinContent(13,0.4252982);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,6.278608);
   hnumuCCinFV_stack_12->SetBinError(2,5.490333);
   hnumuCCinFV_stack_12->SetBinError(3,3.401944);
   hnumuCCinFV_stack_12->SetBinError(4,3.140138);
   hnumuCCinFV_stack_12->SetBinError(5,2.638272);
   hnumuCCinFV_stack_12->SetBinError(6,1.678645);
   hnumuCCinFV_stack_12->SetBinError(7,1.403218);
   hnumuCCinFV_stack_12->SetBinError(8,1.400012);
   hnumuCCinFV_stack_12->SetBinError(9,1.052039);
   hnumuCCinFV_stack_12->SetBinError(10,0.519186);
   hnumuCCinFV_stack_12->SetBinError(11,0.7857345);
   hnumuCCinFV_stack_12->SetBinError(12,0.4552852);
   hnumuCCinFV_stack_12->SetBinError(13,0.3015743);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(17,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,5.483306);
   hnueCCinFV_stack_13->SetBinContent(2,3.002506);
   hnueCCinFV_stack_13->SetBinContent(3,0.9682347);
   hnueCCinFV_stack_13->SetBinContent(4,0.9865627);
   hnueCCinFV_stack_13->SetBinContent(5,1.605263);
   hnueCCinFV_stack_13->SetBinContent(6,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(7,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,1.925638);
   hnueCCinFV_stack_13->SetBinError(2,0.9397649);
   hnueCCinFV_stack_13->SetBinError(3,0.4981608);
   hnueCCinFV_stack_13->SetBinError(4,0.4412547);
   hnueCCinFV_stack_13->SetBinError(5,0.7326536);
   hnueCCinFV_stack_13->SetBinError(6,0.5191111);
   hnueCCinFV_stack_13->SetBinError(7,0.2758068);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.2486649);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__14->SetBinContent(1,380.216);
   hmcerror__14->SetBinContent(2,551.6545);
   hmcerror__14->SetBinContent(3,525.4804);
   hmcerror__14->SetBinContent(4,398.3434);
   hmcerror__14->SetBinContent(5,243.9343);
   hmcerror__14->SetBinContent(6,144.239);
   hmcerror__14->SetBinContent(7,92.41985);
   hmcerror__14->SetBinContent(8,63.54899);
   hmcerror__14->SetBinContent(9,37.62867);
   hmcerror__14->SetBinContent(10,19.73741);
   hmcerror__14->SetBinContent(11,15.97473);
   hmcerror__14->SetBinContent(12,8.560676);
   hmcerror__14->SetBinContent(13,4.235936);
   hmcerror__14->SetBinContent(14,2.368043);
   hmcerror__14->SetBinContent(15,2.981334);
   hmcerror__14->SetBinContent(16,1.295295);
   hmcerror__14->SetBinContent(17,4.423787);
   hmcerror__14->SetBinError(1,99.86744);
   hmcerror__14->SetBinError(2,186.2022);
   hmcerror__14->SetBinError(3,193.5644);
   hmcerror__14->SetBinError(4,149.8596);
   hmcerror__14->SetBinError(5,99.15497);
   hmcerror__14->SetBinError(6,58.92042);
   hmcerror__14->SetBinError(7,40.49544);
   hmcerror__14->SetBinError(8,28.67479);
   hmcerror__14->SetBinError(9,25.05253);
   hmcerror__14->SetBinError(10,10.46186);
   hmcerror__14->SetBinError(11,9.420985);
   hmcerror__14->SetBinError(12,7.32013);
   hmcerror__14->SetBinError(13,4.677217);
   hmcerror__14->SetBinError(14,4.66016);
   hmcerror__14->SetBinError(15,5.129109);
   hmcerror__14->SetBinError(16,1.984779);
   hmcerror__14->SetBinError(17,5.498821);
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
   
   Double_t _fx3017[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3017[16] = {
   292,
   428,
   410,
   267,
   207,
   105,
   51,
   29,
   21,
   14,
   6,
   6,
   5,
   3,
   2,
   0};
   Double_t _felx3017[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3017[16] = {
   17.08801,
   20.68816,
   20.24846,
   16.34013,
   14.38749,
   10.24695,
   7.2725,
   5.5285,
   4.7354,
   3.9102,
   2.67925,
   2.67925,
   2.48995,
   2.143368,
   2,
   0};
   Double_t _fehx3017[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3017[16] = {
   17.08801,
   20.68816,
   20.24846,
   16.34013,
   14.38749,
   10.24695,
   7.0686,
   5.3201,
   4.5229,
   3.6898,
   2.41858,
   2.41858,
   2.21064,
   1.72422,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(493.557);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1846.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 130.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1060.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  196.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 365.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 307.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3018[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3018[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3018[16] = {
   0.2626597,
   0.337534,
   0.3683571,
   0.3762072,
   0.4064823,
   0.4084916,
   0.4381682,
   0.4512234,
   0.6657832,
   0.5300521,
   0.5897429,
   0.8550878,
   1.104176,
   1.967937,
   1.720407,
   1.532298};
   Double_t _fehx3018[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3018[16] = {
   0.2626597,
   0.337534,
   0.3683571,
   0.3762072,
   0.4064823,
   0.4084916,
   0.4381682,
   0.4512234,
   0.6657832,
   0.5300521,
   0.5897429,
   0.8550878,
   1.104176,
   1.967937,
   1.720407,
   1.532298};
   grae = new TGraphAsymmErrors(16,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,440);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3019[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3019[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3019[16] = {
   0.2374167,
   0.3267081,
   0.3535479,
   0.3594129,
   0.3803489,
   0.3779546,
   0.3693187,
   0.3532863,
   0.3598405,
   0.3518767,
   0.3172687,
   0.3014988,
   0.520705,
   0.5216038,
   0.446931,
   0.6604192};
   Double_t _fehx3019[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3019[16] = {
   0.2374167,
   0.3267081,
   0.3535479,
   0.3594129,
   0.3803489,
   0.3779546,
   0.3693187,
   0.3532863,
   0.3598405,
   0.3518767,
   0.3172687,
   0.3014988,
   0.520705,
   0.5216038,
   0.446931,
   0.6604192};
   grae = new TGraphAsymmErrors(16,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,440);
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
   
   Double_t _fx3020[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3020[16] = {
   0.7679844,
   0.7758479,
   0.7802384,
   0.670276,
   0.8485893,
   0.7279585,
   0.5518295,
   0.4563408,
   0.5580852,
   0.7093129,
   0.3755931,
   0.7008793,
   1.180377,
   1.266869,
   0.6708405,
   0};
   Double_t _felx3020[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3020[16] = {
   0.04494289,
   0.03750202,
   0.03853323,
   0.04102023,
   0.05898103,
   0.07104147,
   0.0786898,
   0.08699587,
   0.1258455,
   0.1981111,
   0.167718,
   0.3129718,
   0.5878158,
   0.9051221,
   0.6708405,
   0};
   Double_t _fehx3020[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3020[16] = {
   0.04494289,
   0.03750202,
   0.03853323,
   0.04102023,
   0.05898103,
   0.07104147,
   0.07648357,
   0.08371651,
   0.1201983,
   0.1869445,
   0.1514003,
   0.2825221,
   0.5218776,
   0.7281202,
   0.5095604,
   0.8861299};
   grae = new TGraphAsymmErrors(16,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(2.194488);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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

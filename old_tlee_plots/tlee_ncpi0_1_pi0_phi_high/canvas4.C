#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 23:31:32 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.52,3.957692,389.2379);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__10->SetBinContent(1,154.9163);
   hmc__10->SetBinContent(2,154.7574);
   hmc__10->SetBinContent(3,161.9538);
   hmc__10->SetBinContent(4,165.0209);
   hmc__10->SetBinContent(5,134.617);
   hmc__10->SetBinContent(6,139.375);
   hmc__10->SetBinContent(7,154.8737);
   hmc__10->SetBinContent(8,134.9252);
   hmc__10->SetBinContent(9,136.2928);
   hmc__10->SetBinContent(10,148.193);
   hmc__10->SetBinContent(11,147.7285);
   hmc__10->SetBinContent(12,147.6885);
   hmc__10->SetBinContent(13,129.9402);
   hmc__10->SetBinContent(14,140.23);
   hmc__10->SetBinContent(15,156.5565);
   hmc__10->SetBinContent(16,157.3235);
   hmc__10->SetBinContent(17,155.6302);
   hmc__10->SetBinContent(18,140.7499);
   hmc__10->SetBinContent(19,149.5677);
   hmc__10->SetBinContent(20,145.7778);
   hmc__10->SetBinContent(21,149.3399);
   hmc__10->SetBinContent(22,167.0465);
   hmc__10->SetBinContent(23,157.002);
   hmc__10->SetBinContent(24,159.4468);
   hmc__10->SetBinContent(25,140.5078);
   hmc__10->SetBinError(1,48.0033);
   hmc__10->SetBinError(2,47.48773);
   hmc__10->SetBinError(3,49.38649);
   hmc__10->SetBinError(4,38.83062);
   hmc__10->SetBinError(5,32.77681);
   hmc__10->SetBinError(6,36.02427);
   hmc__10->SetBinError(7,38.83054);
   hmc__10->SetBinError(8,33.29451);
   hmc__10->SetBinError(9,34.99759);
   hmc__10->SetBinError(10,40.9573);
   hmc__10->SetBinError(11,50.34839);
   hmc__10->SetBinError(12,38.35653);
   hmc__10->SetBinError(13,35.69576);
   hmc__10->SetBinError(14,38.89752);
   hmc__10->SetBinError(15,41.90234);
   hmc__10->SetBinError(16,40.09666);
   hmc__10->SetBinError(17,40.32185);
   hmc__10->SetBinError(18,33.82219);
   hmc__10->SetBinError(19,37.75671);
   hmc__10->SetBinError(20,41.43007);
   hmc__10->SetBinError(21,37.47415);
   hmc__10->SetBinError(22,41.49479);
   hmc__10->SetBinError(23,41.77353);
   hmc__10->SetBinError(24,50.68239);
   hmc__10->SetBinError(25,38.83227);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-3.52);
   hmc__10->SetMaximum(369.6);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-3.15,3.15);
   hs4_stack_4->SetMinimum(-2.606256e-09);
   hs4_stack_4->SetMaximum(175.3988);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.37019);
   hbadmatch_stack_1->SetBinContent(2,3.413455);
   hbadmatch_stack_1->SetBinContent(3,5.627541);
   hbadmatch_stack_1->SetBinContent(4,3.331748);
   hbadmatch_stack_1->SetBinContent(5,5.048804);
   hbadmatch_stack_1->SetBinContent(6,3.807924);
   hbadmatch_stack_1->SetBinContent(7,7.182331);
   hbadmatch_stack_1->SetBinContent(8,2.677422);
   hbadmatch_stack_1->SetBinContent(9,3.676545);
   hbadmatch_stack_1->SetBinContent(10,2.131733);
   hbadmatch_stack_1->SetBinContent(11,4.202452);
   hbadmatch_stack_1->SetBinContent(12,3.928408);
   hbadmatch_stack_1->SetBinContent(13,1.963019);
   hbadmatch_stack_1->SetBinContent(14,3.631353);
   hbadmatch_stack_1->SetBinContent(15,5.569975);
   hbadmatch_stack_1->SetBinContent(16,5.94567);
   hbadmatch_stack_1->SetBinContent(17,3.473221);
   hbadmatch_stack_1->SetBinContent(18,5.750059);
   hbadmatch_stack_1->SetBinContent(19,3.345126);
   hbadmatch_stack_1->SetBinContent(20,2.230619);
   hbadmatch_stack_1->SetBinContent(21,5.105189);
   hbadmatch_stack_1->SetBinContent(22,3.96323);
   hbadmatch_stack_1->SetBinContent(23,3.516032);
   hbadmatch_stack_1->SetBinContent(24,3.582922);
   hbadmatch_stack_1->SetBinContent(25,1.110317);
   hbadmatch_stack_1->SetBinError(1,0.9533031);
   hbadmatch_stack_1->SetBinError(2,0.8594858);
   hbadmatch_stack_1->SetBinError(3,1.314321);
   hbadmatch_stack_1->SetBinError(4,0.8981705);
   hbadmatch_stack_1->SetBinError(5,1.212271);
   hbadmatch_stack_1->SetBinError(6,1.039039);
   hbadmatch_stack_1->SetBinError(7,1.686696);
   hbadmatch_stack_1->SetBinError(8,0.8619028);
   hbadmatch_stack_1->SetBinError(9,1.147563);
   hbadmatch_stack_1->SetBinError(10,0.7199437);
   hbadmatch_stack_1->SetBinError(11,1.05273);
   hbadmatch_stack_1->SetBinError(12,1.012445);
   hbadmatch_stack_1->SetBinError(13,0.6752577);
   hbadmatch_stack_1->SetBinError(14,1.754061);
   hbadmatch_stack_1->SetBinError(15,1.965003);
   hbadmatch_stack_1->SetBinError(16,1.541267);
   hbadmatch_stack_1->SetBinError(17,0.9897194);
   hbadmatch_stack_1->SetBinError(18,1.364991);
   hbadmatch_stack_1->SetBinError(19,0.9458237);
   hbadmatch_stack_1->SetBinError(20,0.737882);
   hbadmatch_stack_1->SetBinError(21,1.342668);
   hbadmatch_stack_1->SetBinError(22,1.084315);
   hbadmatch_stack_1->SetBinError(23,1.005912);
   hbadmatch_stack_1->SetBinError(24,1.060341);
   hbadmatch_stack_1->SetBinError(25,0.6191254);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.01302);
   hext_stack_2->SetBinContent(2,10.04359);
   hext_stack_2->SetBinContent(3,11.75219);
   hext_stack_2->SetBinContent(4,24.62479);
   hext_stack_2->SetBinContent(5,16.21319);
   hext_stack_2->SetBinContent(6,26.43713);
   hext_stack_2->SetBinContent(7,30.31994);
   hext_stack_2->SetBinContent(8,19.39096);
   hext_stack_2->SetBinContent(9,12.22222);
   hext_stack_2->SetBinContent(10,20.10036);
   hext_stack_2->SetBinContent(11,14.25522);
   hext_stack_2->SetBinContent(12,9.812987);
   hext_stack_2->SetBinContent(13,7.462776);
   hext_stack_2->SetBinContent(14,8.320636);
   hext_stack_2->SetBinContent(15,15.56439);
   hext_stack_2->SetBinContent(16,20.30507);
   hext_stack_2->SetBinContent(17,27.53);
   hext_stack_2->SetBinContent(18,25.67142);
   hext_stack_2->SetBinContent(19,42.49026);
   hext_stack_2->SetBinContent(20,27.31218);
   hext_stack_2->SetBinContent(21,28.12972);
   hext_stack_2->SetBinContent(22,22.08705);
   hext_stack_2->SetBinContent(23,16.98885);
   hext_stack_2->SetBinContent(24,17.24421);
   hext_stack_2->SetBinContent(25,9.152603);
   hext_stack_2->SetBinError(1,2.476213);
   hext_stack_2->SetBinError(2,2.033738);
   hext_stack_2->SetBinError(3,2.203967);
   hext_stack_2->SetBinError(4,3.495706);
   hext_stack_2->SetBinError(5,2.596555);
   hext_stack_2->SetBinError(6,3.521055);
   hext_stack_2->SetBinError(7,3.768044);
   hext_stack_2->SetBinError(8,2.793455);
   hext_stack_2->SetBinError(9,2.313042);
   hext_stack_2->SetBinError(10,3.163537);
   hext_stack_2->SetBinError(11,2.485312);
   hext_stack_2->SetBinError(12,2.006207);
   hext_stack_2->SetBinError(13,1.700535);
   hext_stack_2->SetBinError(14,1.953744);
   hext_stack_2->SetBinError(15,2.555706);
   hext_stack_2->SetBinError(16,3.042574);
   hext_stack_2->SetBinError(17,3.683676);
   hext_stack_2->SetBinError(18,3.315885);
   hext_stack_2->SetBinError(19,4.526067);
   hext_stack_2->SetBinError(20,3.354695);
   hext_stack_2->SetBinError(21,3.612501);
   hext_stack_2->SetBinError(22,3.125457);
   hext_stack_2->SetBinError(23,2.758135);
   hext_stack_2->SetBinError(24,3.064022);
   hext_stack_2->SetBinError(25,1.969893);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9141704);
   hdirt_stack_3->SetBinContent(2,2.206115);
   hdirt_stack_3->SetBinContent(3,2.356284);
   hdirt_stack_3->SetBinContent(4,1.890551);
   hdirt_stack_3->SetBinContent(5,3.062146);
   hdirt_stack_3->SetBinContent(6,2.010238);
   hdirt_stack_3->SetBinContent(7,2.699932);
   hdirt_stack_3->SetBinContent(8,1.45207);
   hdirt_stack_3->SetBinContent(9,0.869074);
   hdirt_stack_3->SetBinContent(10,1.128975);
   hdirt_stack_3->SetBinContent(11,3.025808);
   hdirt_stack_3->SetBinContent(12,1.542147);
   hdirt_stack_3->SetBinContent(13,2.44563);
   hdirt_stack_3->SetBinContent(14,1.047257);
   hdirt_stack_3->SetBinContent(15,2.103228);
   hdirt_stack_3->SetBinContent(16,3.418121);
   hdirt_stack_3->SetBinContent(17,3.974605);
   hdirt_stack_3->SetBinContent(18,3.146424);
   hdirt_stack_3->SetBinContent(19,3.164123);
   hdirt_stack_3->SetBinContent(20,2.427924);
   hdirt_stack_3->SetBinContent(21,2.212869);
   hdirt_stack_3->SetBinContent(22,1.84688);
   hdirt_stack_3->SetBinContent(23,3.444004);
   hdirt_stack_3->SetBinContent(24,2.716254);
   hdirt_stack_3->SetBinContent(25,1.948237);
   hdirt_stack_3->SetBinError(1,0.4788161);
   hdirt_stack_3->SetBinError(2,0.7393728);
   hdirt_stack_3->SetBinError(3,0.77892);
   hdirt_stack_3->SetBinError(4,0.7669944);
   hdirt_stack_3->SetBinError(5,0.9066869);
   hdirt_stack_3->SetBinError(6,0.7542603);
   hdirt_stack_3->SetBinError(7,0.8161223);
   hdirt_stack_3->SetBinError(8,0.782502);
   hdirt_stack_3->SetBinError(9,0.3975253);
   hdirt_stack_3->SetBinError(10,0.5452659);
   hdirt_stack_3->SetBinError(11,1.299218);
   hdirt_stack_3->SetBinError(12,0.600953);
   hdirt_stack_3->SetBinError(13,0.7703258);
   hdirt_stack_3->SetBinError(14,0.4759886);
   hdirt_stack_3->SetBinError(15,0.8375134);
   hdirt_stack_3->SetBinError(16,0.9363811);
   hdirt_stack_3->SetBinError(17,1.121746);
   hdirt_stack_3->SetBinError(18,0.9478657);
   hdirt_stack_3->SetBinError(19,1.237587);
   hdirt_stack_3->SetBinError(20,0.8290421);
   hdirt_stack_3->SetBinError(21,0.7240585);
   hdirt_stack_3->SetBinError(22,0.6412006);
   hdirt_stack_3->SetBinError(23,0.9751852);
   hdirt_stack_3->SetBinError(24,0.8787402);
   hdirt_stack_3->SetBinError(25,0.7404734);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,20.00964);
   houtFV_stack_4->SetBinContent(2,18.80401);
   houtFV_stack_4->SetBinContent(3,23.54919);
   houtFV_stack_4->SetBinContent(4,24.69689);
   houtFV_stack_4->SetBinContent(5,16.14339);
   houtFV_stack_4->SetBinContent(6,17.91319);
   houtFV_stack_4->SetBinContent(7,19.81549);
   houtFV_stack_4->SetBinContent(8,19.10136);
   houtFV_stack_4->SetBinContent(9,20.29705);
   houtFV_stack_4->SetBinContent(10,19.34759);
   houtFV_stack_4->SetBinContent(11,17.94419);
   houtFV_stack_4->SetBinContent(12,21.19167);
   houtFV_stack_4->SetBinContent(13,20.23372);
   houtFV_stack_4->SetBinContent(14,19.54304);
   houtFV_stack_4->SetBinContent(15,18.60063);
   houtFV_stack_4->SetBinContent(16,17.80112);
   houtFV_stack_4->SetBinContent(17,16.24322);
   houtFV_stack_4->SetBinContent(18,18.57228);
   houtFV_stack_4->SetBinContent(19,17.04584);
   houtFV_stack_4->SetBinContent(20,14.24916);
   houtFV_stack_4->SetBinContent(21,17.39496);
   houtFV_stack_4->SetBinContent(22,20.30228);
   houtFV_stack_4->SetBinContent(23,17.81896);
   houtFV_stack_4->SetBinContent(24,21.43458);
   houtFV_stack_4->SetBinContent(25,18.68891);
   houtFV_stack_4->SetBinError(1,2.211514);
   houtFV_stack_4->SetBinError(2,2.142058);
   houtFV_stack_4->SetBinError(3,2.409412);
   houtFV_stack_4->SetBinError(4,2.543639);
   houtFV_stack_4->SetBinError(5,2.088892);
   houtFV_stack_4->SetBinError(6,2.149742);
   houtFV_stack_4->SetBinError(7,2.236181);
   houtFV_stack_4->SetBinError(8,2.30326);
   houtFV_stack_4->SetBinError(9,2.237987);
   houtFV_stack_4->SetBinError(10,2.297698);
   houtFV_stack_4->SetBinError(11,2.105939);
   houtFV_stack_4->SetBinError(12,2.271131);
   houtFV_stack_4->SetBinError(13,2.269749);
   houtFV_stack_4->SetBinError(14,2.250524);
   houtFV_stack_4->SetBinError(15,2.127137);
   houtFV_stack_4->SetBinError(16,2.133964);
   houtFV_stack_4->SetBinError(17,1.92552);
   houtFV_stack_4->SetBinError(18,2.426196);
   houtFV_stack_4->SetBinError(19,2.090174);
   houtFV_stack_4->SetBinError(20,1.895635);
   houtFV_stack_4->SetBinError(21,2.0967);
   houtFV_stack_4->SetBinError(22,2.287741);
   houtFV_stack_4->SetBinError(23,2.087438);
   houtFV_stack_4->SetBinError(24,2.337071);
   houtFV_stack_4->SetBinError(25,2.169658);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.965693);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.105679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.691372);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.373805);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.35752);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.996624);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.450758);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.451265);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.078938);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.925169);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.677444);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.9219);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.10133);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.604608);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.588561);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.338036);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.98768);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.650544);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.720513);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.668997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.265363);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.257333);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.943314);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.298168);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.621225);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6546147);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7519473);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8790254);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9440874);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5675373);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7340431);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7900658);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6995691);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5957523);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.95955);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.864119);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.077896);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7405387);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7147473);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6443149);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.769937);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.8187905);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.624719);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7864871);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.9244424);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7256094);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.691921);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7467238);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7721729);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9081633);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1048219);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.165027);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1844877);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2220792);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5481939);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3744682);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1406853);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3768909);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.09951466);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.189842);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3309899);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1508901);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3196586);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5026491);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2565448);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2228962);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2680758);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6306572);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4700348);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08550374);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3089814);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2478018);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2401874);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1229657);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4976966);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05209299);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06502683);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08766827);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07880081);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2992227);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1915173);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06914645);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2279885);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05404393);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1143196);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1613849);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06737294);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1522197);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2041045);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.160612);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.124151);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1536638);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3002195);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2297926);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04617406);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1086149);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1268132);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1360994);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05968863);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2972493);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,47.54623);
   hNCpi0inFVres_stack_7->SetBinContent(2,50.4557);
   hNCpi0inFVres_stack_7->SetBinContent(3,50.56252);
   hNCpi0inFVres_stack_7->SetBinContent(4,50.44193);
   hNCpi0inFVres_stack_7->SetBinContent(5,43.73037);
   hNCpi0inFVres_stack_7->SetBinContent(6,40.70688);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.39597);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.75876);
   hNCpi0inFVres_stack_7->SetBinContent(9,44.18957);
   hNCpi0inFVres_stack_7->SetBinContent(10,47.0418);
   hNCpi0inFVres_stack_7->SetBinContent(11,47.68813);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.48882);
   hNCpi0inFVres_stack_7->SetBinContent(13,41.81249);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.41872);
   hNCpi0inFVres_stack_7->SetBinContent(15,48.15247);
   hNCpi0inFVres_stack_7->SetBinContent(16,51.40302);
   hNCpi0inFVres_stack_7->SetBinContent(17,44.13845);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.79171);
   hNCpi0inFVres_stack_7->SetBinContent(19,42.10757);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.2508);
   hNCpi0inFVres_stack_7->SetBinContent(21,45.02572);
   hNCpi0inFVres_stack_7->SetBinContent(22,56.30285);
   hNCpi0inFVres_stack_7->SetBinContent(23,48.98721);
   hNCpi0inFVres_stack_7->SetBinContent(24,48.7988);
   hNCpi0inFVres_stack_7->SetBinContent(25,45.29855);
   hNCpi0inFVres_stack_7->SetBinError(1,2.333509);
   hNCpi0inFVres_stack_7->SetBinError(2,2.415044);
   hNCpi0inFVres_stack_7->SetBinError(3,2.394408);
   hNCpi0inFVres_stack_7->SetBinError(4,2.467776);
   hNCpi0inFVres_stack_7->SetBinError(5,2.195143);
   hNCpi0inFVres_stack_7->SetBinError(6,2.064915);
   hNCpi0inFVres_stack_7->SetBinError(7,2.129298);
   hNCpi0inFVres_stack_7->SetBinError(8,2.302468);
   hNCpi0inFVres_stack_7->SetBinError(9,2.28141);
   hNCpi0inFVres_stack_7->SetBinError(10,2.395792);
   hNCpi0inFVres_stack_7->SetBinError(11,2.341132);
   hNCpi0inFVres_stack_7->SetBinError(12,2.290322);
   hNCpi0inFVres_stack_7->SetBinError(13,2.154172);
   hNCpi0inFVres_stack_7->SetBinError(14,2.366661);
   hNCpi0inFVres_stack_7->SetBinError(15,2.37634);
   hNCpi0inFVres_stack_7->SetBinError(16,2.543738);
   hNCpi0inFVres_stack_7->SetBinError(17,2.324098);
   hNCpi0inFVres_stack_7->SetBinError(18,2.125751);
   hNCpi0inFVres_stack_7->SetBinError(19,2.279593);
   hNCpi0inFVres_stack_7->SetBinError(20,2.371082);
   hNCpi0inFVres_stack_7->SetBinError(21,2.399027);
   hNCpi0inFVres_stack_7->SetBinError(22,2.714484);
   hNCpi0inFVres_stack_7->SetBinError(23,2.42385);
   hNCpi0inFVres_stack_7->SetBinError(24,2.371282);
   hNCpi0inFVres_stack_7->SetBinError(25,2.277662);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.780792);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.610363);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.73238);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.15508);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.527723);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.392202);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.461122);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.960123);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.041031);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.679608);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.64954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.20037);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.819985);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.11068);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.43244);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.752454);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.481657);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.687374);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.286657);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.256723);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.818424);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.902147);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.844397);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.27338);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.973099);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.06787);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.142982);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.14061);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.026277);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.087465);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.015948);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.057615);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.11404);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.035896);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.005539);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.217669);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.073727);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.051571);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.202544);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.192926);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9878433);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.075744);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.060504);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.002354);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.076318);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9234042);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.134902);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9664133);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.207565);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.189908);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05331849);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03088901);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,29.72972);
   hCCpi0inFV_stack_10->SetBinContent(2,28.08351);
   hCCpi0inFV_stack_10->SetBinContent(3,27.89369);
   hCCpi0inFV_stack_10->SetBinContent(4,25.79133);
   hCCpi0inFV_stack_10->SetBinContent(5,20.56325);
   hCCpi0inFV_stack_10->SetBinContent(6,20.27463);
   hCCpi0inFV_stack_10->SetBinContent(7,20.34721);
   hCCpi0inFV_stack_10->SetBinContent(8,20.82064);
   hCCpi0inFV_stack_10->SetBinContent(9,21.00003);
   hCCpi0inFV_stack_10->SetBinContent(10,23.70616);
   hCCpi0inFV_stack_10->SetBinContent(11,20.39467);
   hCCpi0inFV_stack_10->SetBinContent(12,26.1728);
   hCCpi0inFV_stack_10->SetBinContent(13,19.10779);
   hCCpi0inFV_stack_10->SetBinContent(14,23.77105);
   hCCpi0inFV_stack_10->SetBinContent(15,23.44765);
   hCCpi0inFV_stack_10->SetBinContent(16,23.82317);
   hCCpi0inFV_stack_10->SetBinContent(17,25.99891);
   hCCpi0inFV_stack_10->SetBinContent(18,17.21872);
   hCCpi0inFV_stack_10->SetBinContent(19,14.75839);
   hCCpi0inFV_stack_10->SetBinContent(20,23.02522);
   hCCpi0inFV_stack_10->SetBinContent(21,24.2049);
   hCCpi0inFV_stack_10->SetBinContent(22,27.78131);
   hCCpi0inFV_stack_10->SetBinContent(23,24.37922);
   hCCpi0inFV_stack_10->SetBinContent(24,24.60497);
   hCCpi0inFV_stack_10->SetBinContent(25,22.22588);
   hCCpi0inFV_stack_10->SetBinError(1,2.73208);
   hCCpi0inFV_stack_10->SetBinError(2,2.677753);
   hCCpi0inFV_stack_10->SetBinError(3,2.641393);
   hCCpi0inFV_stack_10->SetBinError(4,2.508007);
   hCCpi0inFV_stack_10->SetBinError(5,2.271197);
   hCCpi0inFV_stack_10->SetBinError(6,2.250253);
   hCCpi0inFV_stack_10->SetBinError(7,2.274174);
   hCCpi0inFV_stack_10->SetBinError(8,2.303533);
   hCCpi0inFV_stack_10->SetBinError(9,2.262058);
   hCCpi0inFV_stack_10->SetBinError(10,2.486053);
   hCCpi0inFV_stack_10->SetBinError(11,2.235286);
   hCCpi0inFV_stack_10->SetBinError(12,2.573345);
   hCCpi0inFV_stack_10->SetBinError(13,2.154689);
   hCCpi0inFV_stack_10->SetBinError(14,2.325078);
   hCCpi0inFV_stack_10->SetBinError(15,2.415133);
   hCCpi0inFV_stack_10->SetBinError(16,2.487542);
   hCCpi0inFV_stack_10->SetBinError(17,2.594442);
   hCCpi0inFV_stack_10->SetBinError(18,2.040283);
   hCCpi0inFV_stack_10->SetBinError(19,1.943629);
   hCCpi0inFV_stack_10->SetBinError(20,2.450149);
   hCCpi0inFV_stack_10->SetBinError(21,2.55684);
   hCCpi0inFV_stack_10->SetBinError(22,2.616739);
   hCCpi0inFV_stack_10->SetBinError(23,2.450366);
   hCCpi0inFV_stack_10->SetBinError(24,2.556616);
   hCCpi0inFV_stack_10->SetBinError(25,2.322128);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.997924);
   hNCinFV_stack_11->SetBinContent(2,12.64195);
   hNCinFV_stack_11->SetBinContent(3,12.36564);
   hNCinFV_stack_11->SetBinContent(4,9.021978);
   hNCinFV_stack_11->SetBinContent(5,10.46922);
   hNCinFV_stack_11->SetBinContent(6,7.596263);
   hNCinFV_stack_11->SetBinContent(7,7.899293);
   hNCinFV_stack_11->SetBinContent(8,7.20533);
   hNCinFV_stack_11->SetBinContent(9,10.45336);
   hNCinFV_stack_11->SetBinContent(10,8.470883);
   hNCinFV_stack_11->SetBinContent(11,10.63239);
   hNCinFV_stack_11->SetBinContent(12,9.407253);
   hNCinFV_stack_11->SetBinContent(13,8.30421);
   hNCinFV_stack_11->SetBinContent(14,9.180525);
   hNCinFV_stack_11->SetBinContent(15,12.23578);
   hNCinFV_stack_11->SetBinContent(16,10.96456);
   hNCinFV_stack_11->SetBinContent(17,10.28055);
   hNCinFV_stack_11->SetBinContent(18,5.710651);
   hNCinFV_stack_11->SetBinContent(19,5.947108);
   hNCinFV_stack_11->SetBinContent(20,7.172985);
   hNCinFV_stack_11->SetBinContent(21,8.070601);
   hNCinFV_stack_11->SetBinContent(22,10.06124);
   hNCinFV_stack_11->SetBinContent(23,12.84775);
   hNCinFV_stack_11->SetBinContent(24,10.62662);
   hNCinFV_stack_11->SetBinContent(25,6.261701);
   hNCinFV_stack_11->SetBinError(1,1.397907);
   hNCinFV_stack_11->SetBinError(2,1.902843);
   hNCinFV_stack_11->SetBinError(3,1.850629);
   hNCinFV_stack_11->SetBinError(4,1.565718);
   hNCinFV_stack_11->SetBinError(5,1.708956);
   hNCinFV_stack_11->SetBinError(6,1.371058);
   hNCinFV_stack_11->SetBinError(7,1.330236);
   hNCinFV_stack_11->SetBinError(8,1.318099);
   hNCinFV_stack_11->SetBinError(9,1.837402);
   hNCinFV_stack_11->SetBinError(10,1.735587);
   hNCinFV_stack_11->SetBinError(11,1.718102);
   hNCinFV_stack_11->SetBinError(12,1.612253);
   hNCinFV_stack_11->SetBinError(13,1.527202);
   hNCinFV_stack_11->SetBinError(14,1.547574);
   hNCinFV_stack_11->SetBinError(15,2.015333);
   hNCinFV_stack_11->SetBinError(16,1.741072);
   hNCinFV_stack_11->SetBinError(17,1.900463);
   hNCinFV_stack_11->SetBinError(18,1.158764);
   hNCinFV_stack_11->SetBinError(19,1.318144);
   hNCinFV_stack_11->SetBinError(20,1.311496);
   hNCinFV_stack_11->SetBinError(21,1.503092);
   hNCinFV_stack_11->SetBinError(22,1.776409);
   hNCinFV_stack_11->SetBinError(23,1.960162);
   hNCinFV_stack_11->SetBinError(24,1.663085);
   hNCinFV_stack_11->SetBinError(25,1.206605);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,15.9393);
   hnumuCCinFV_stack_12->SetBinContent(2,12.66499);
   hnumuCCinFV_stack_12->SetBinContent(3,10.08114);
   hnumuCCinFV_stack_12->SetBinContent(4,8.742716);
   hnumuCCinFV_stack_12->SetBinContent(5,5.976846);
   hnumuCCinFV_stack_12->SetBinContent(6,8.450963);
   hnumuCCinFV_stack_12->SetBinContent(7,13.55399);
   hnumuCCinFV_stack_12->SetBinContent(8,6.304681);
   hnumuCCinFV_stack_12->SetBinContent(9,10.37304);
   hnumuCCinFV_stack_12->SetBinContent(10,8.447185);
   hnumuCCinFV_stack_12->SetBinContent(11,13.08121);
   hnumuCCinFV_stack_12->SetBinContent(12,13.40515);
   hnumuCCinFV_stack_12->SetBinContent(13,13.19263);
   hnumuCCinFV_stack_12->SetBinContent(14,10.77359);
   hnumuCCinFV_stack_12->SetBinContent(15,14.42272);
   hnumuCCinFV_stack_12->SetBinContent(16,10.44744);
   hnumuCCinFV_stack_12->SetBinContent(17,8.504781);
   hnumuCCinFV_stack_12->SetBinContent(18,8.60554);
   hnumuCCinFV_stack_12->SetBinContent(19,6.033319);
   hnumuCCinFV_stack_12->SetBinContent(20,8.308926);
   hnumuCCinFV_stack_12->SetBinContent(21,4.833055);
   hnumuCCinFV_stack_12->SetBinContent(22,9.551903);
   hnumuCCinFV_stack_12->SetBinContent(23,13.61806);
   hnumuCCinFV_stack_12->SetBinContent(24,12.5415);
   hnumuCCinFV_stack_12->SetBinContent(25,19.20131);
   hnumuCCinFV_stack_12->SetBinError(1,2.076013);
   hnumuCCinFV_stack_12->SetBinError(2,1.845522);
   hnumuCCinFV_stack_12->SetBinError(3,1.575112);
   hnumuCCinFV_stack_12->SetBinError(4,1.672865);
   hnumuCCinFV_stack_12->SetBinError(5,1.228134);
   hnumuCCinFV_stack_12->SetBinError(6,1.570725);
   hnumuCCinFV_stack_12->SetBinError(7,2.594852);
   hnumuCCinFV_stack_12->SetBinError(8,1.469296);
   hnumuCCinFV_stack_12->SetBinError(9,2.045484);
   hnumuCCinFV_stack_12->SetBinError(10,1.450604);
   hnumuCCinFV_stack_12->SetBinError(11,2.349975);
   hnumuCCinFV_stack_12->SetBinError(12,2.85192);
   hnumuCCinFV_stack_12->SetBinError(13,1.943584);
   hnumuCCinFV_stack_12->SetBinError(14,1.783519);
   hnumuCCinFV_stack_12->SetBinError(15,2.413369);
   hnumuCCinFV_stack_12->SetBinError(16,1.583923);
   hnumuCCinFV_stack_12->SetBinError(17,1.531866);
   hnumuCCinFV_stack_12->SetBinError(18,1.657113);
   hnumuCCinFV_stack_12->SetBinError(19,1.273232);
   hnumuCCinFV_stack_12->SetBinError(20,1.424998);
   hnumuCCinFV_stack_12->SetBinError(21,1.102076);
   hnumuCCinFV_stack_12->SetBinError(22,1.903923);
   hnumuCCinFV_stack_12->SetBinError(23,2.409228);
   hnumuCCinFV_stack_12->SetBinError(24,1.961602);
   hnumuCCinFV_stack_12->SetBinError(25,2.576464);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.544767);
   hnueCCinFV_stack_13->SetBinContent(2,2.563004);
   hnueCCinFV_stack_13->SetBinContent(3,2.157398);
   hnueCCinFV_stack_13->SetBinContent(4,0.7280008);
   hnueCCinFV_stack_13->SetBinContent(5,0.9763736);
   hnueCCinFV_stack_13->SetBinContent(6,0.3611468);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.4256802);
   hnueCCinFV_stack_13->SetBinContent(9,0.951866);
   hnueCCinFV_stack_13->SetBinContent(10,2.005462);
   hnueCCinFV_stack_13->SetBinContent(11,0.8464319);
   hnueCCinFV_stack_13->SetBinContent(12,1.466085);
   hnueCCinFV_stack_13->SetBinContent(13,1.176911);
   hnueCCinFV_stack_13->SetBinContent(14,1.325863);
   hnueCCinFV_stack_13->SetBinContent(15,2.182066);
   hnueCCinFV_stack_13->SetBinContent(16,0.8383607);
   hnueCCinFV_stack_13->SetBinContent(17,0.749079);
   hnueCCinFV_stack_13->SetBinContent(18,2.314564);
   hnueCCinFV_stack_13->SetBinContent(19,1.198824);
   hnueCCinFV_stack_13->SetBinContent(20,0.7887285);
   hnueCCinFV_stack_13->SetBinContent(21,2.952771);
   hnueCCinFV_stack_13->SetBinContent(22,0.6134223);
   hnueCCinFV_stack_13->SetBinContent(23,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(24,1.185129);
   hnueCCinFV_stack_13->SetBinContent(25,1.528319);
   hnueCCinFV_stack_13->SetBinError(1,0.6637361);
   hnueCCinFV_stack_13->SetBinError(2,1.619623);
   hnueCCinFV_stack_13->SetBinError(3,0.820446);
   hnueCCinFV_stack_13->SetBinError(4,0.4241217);
   hnueCCinFV_stack_13->SetBinError(5,0.5784825);
   hnueCCinFV_stack_13->SetBinError(6,0.3611468);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.3018639);
   hnueCCinFV_stack_13->SetBinError(9,0.4906566);
   hnueCCinFV_stack_13->SetBinError(10,1.087239);
   hnueCCinFV_stack_13->SetBinError(11,0.5192226);
   hnueCCinFV_stack_13->SetBinError(12,0.5576641);
   hnueCCinFV_stack_13->SetBinError(13,0.4804759);
   hnueCCinFV_stack_13->SetBinError(14,0.7895981);
   hnueCCinFV_stack_13->SetBinError(15,0.8724276);
   hnueCCinFV_stack_13->SetBinError(16,0.4202826);
   hnueCCinFV_stack_13->SetBinError(17,0.4340577);
   hnueCCinFV_stack_13->SetBinError(18,1.218594);
   hnueCCinFV_stack_13->SetBinError(19,0.6173686);
   hnueCCinFV_stack_13->SetBinError(20,0.4667321);
   hnueCCinFV_stack_13->SetBinError(21,1.446829);
   hnueCCinFV_stack_13->SetBinError(22,0.3977043);
   hnueCCinFV_stack_13->SetBinError(23,0.3582875);
   hnueCCinFV_stack_13->SetBinError(24,0.6176974);
   hnueCCinFV_stack_13->SetBinError(25,0.8404726);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__11->SetBinContent(1,154.9163);
   hmcerror__11->SetBinContent(2,154.7574);
   hmcerror__11->SetBinContent(3,161.9538);
   hmcerror__11->SetBinContent(4,165.0209);
   hmcerror__11->SetBinContent(5,134.617);
   hmcerror__11->SetBinContent(6,139.375);
   hmcerror__11->SetBinContent(7,154.8737);
   hmcerror__11->SetBinContent(8,134.9252);
   hmcerror__11->SetBinContent(9,136.2928);
   hmcerror__11->SetBinContent(10,148.193);
   hmcerror__11->SetBinContent(11,147.7285);
   hmcerror__11->SetBinContent(12,147.6885);
   hmcerror__11->SetBinContent(13,129.9402);
   hmcerror__11->SetBinContent(14,140.23);
   hmcerror__11->SetBinContent(15,156.5565);
   hmcerror__11->SetBinContent(16,157.3235);
   hmcerror__11->SetBinContent(17,155.6302);
   hmcerror__11->SetBinContent(18,140.7499);
   hmcerror__11->SetBinContent(19,149.5677);
   hmcerror__11->SetBinContent(20,145.7778);
   hmcerror__11->SetBinContent(21,149.3399);
   hmcerror__11->SetBinContent(22,167.0465);
   hmcerror__11->SetBinContent(23,157.002);
   hmcerror__11->SetBinContent(24,159.4468);
   hmcerror__11->SetBinContent(25,140.5078);
   hmcerror__11->SetBinError(1,48.0033);
   hmcerror__11->SetBinError(2,47.48773);
   hmcerror__11->SetBinError(3,49.38649);
   hmcerror__11->SetBinError(4,38.83062);
   hmcerror__11->SetBinError(5,32.77681);
   hmcerror__11->SetBinError(6,36.02427);
   hmcerror__11->SetBinError(7,38.83054);
   hmcerror__11->SetBinError(8,33.29451);
   hmcerror__11->SetBinError(9,34.99759);
   hmcerror__11->SetBinError(10,40.9573);
   hmcerror__11->SetBinError(11,50.34839);
   hmcerror__11->SetBinError(12,38.35653);
   hmcerror__11->SetBinError(13,35.69576);
   hmcerror__11->SetBinError(14,38.89752);
   hmcerror__11->SetBinError(15,41.90234);
   hmcerror__11->SetBinError(16,40.09666);
   hmcerror__11->SetBinError(17,40.32185);
   hmcerror__11->SetBinError(18,33.82219);
   hmcerror__11->SetBinError(19,37.75671);
   hmcerror__11->SetBinError(20,41.43007);
   hmcerror__11->SetBinError(21,37.47415);
   hmcerror__11->SetBinError(22,41.49479);
   hmcerror__11->SetBinError(23,41.77353);
   hmcerror__11->SetBinError(24,50.68239);
   hmcerror__11->SetBinError(25,38.83227);
   hmcerror__11->SetBinError(26,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3013[25] = {
   155,
   176,
   172,
   165,
   159,
   158,
   157,
   134,
   134,
   124,
   146,
   139,
   144,
   158,
   167,
   169,
   160,
   134,
   154,
   132,
   158,
   163,
   164,
   153,
   148};
   Double_t _felx3013[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3013[25] = {
   12.4499,
   13.2665,
   13.11488,
   12.84523,
   12.60952,
   12.56981,
   12.52996,
   11.57584,
   11.57584,
   11.13553,
   12.08305,
   11.78983,
   12,
   12.56981,
   12.92285,
   13,
   12.64911,
   11.57584,
   12.40967,
   11.48913,
   12.56981,
   12.76715,
   12.80625,
   12.36932,
   12.16553};
   Double_t _fehx3013[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3013[25] = {
   12.4499,
   13.2665,
   13.11488,
   12.84523,
   12.60952,
   12.56981,
   12.52996,
   11.57584,
   11.57584,
   11.13553,
   12.08305,
   11.78983,
   12,
   12.56981,
   12.92285,
   13,
   12.64911,
   11.57584,
   12.40967,
   11.48913,
   12.56981,
   12.76715,
   12.80625,
   12.36932,
   12.16553};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(105.2243);
   Graph_Graph3013->SetMaximum(196.9067);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3014[25] = {
   0.3098661,
   0.3068528,
   0.3049418,
   0.2353073,
   0.2434819,
   0.2584702,
   0.2507239,
   0.2467627,
   0.2567824,
   0.2763781,
   0.3408171,
   0.2597124,
   0.2747093,
   0.2773838,
   0.26765,
   0.2548676,
   0.2590875,
   0.2402998,
   0.2524388,
   0.2842003,
   0.250932,
   0.2484026,
   0.2660701,
   0.3178639,
   0.2763709};
   Double_t _fehx3014[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3014[25] = {
   0.3098661,
   0.3068528,
   0.3049418,
   0.2353073,
   0.2434819,
   0.2584702,
   0.2507239,
   0.2467627,
   0.2567824,
   0.2763781,
   0.3408171,
   0.2597124,
   0.2747093,
   0.2773838,
   0.26765,
   0.2548676,
   0.2590875,
   0.2402998,
   0.2524388,
   0.2842003,
   0.250932,
   0.2484026,
   0.2660701,
   0.3178639,
   0.2763709};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3015[25] = {
   0.2155875,
   0.2193067,
   0.212229,
   0.1937688,
   0.2046351,
   0.1922787,
   0.1885722,
   0.202045,
   0.2131663,
   0.1976733,
   0.2138279,
   0.2101349,
   0.2187603,
   0.2116992,
   0.1921113,
   0.2009194,
   0.1998277,
   0.194118,
   0.1736352,
   0.1940172,
   0.1943506,
   0.1927593,
   0.2000766,
   0.2015513,
   0.216454};
   Double_t _fehx3015[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3015[25] = {
   0.2155875,
   0.2193067,
   0.212229,
   0.1937688,
   0.2046351,
   0.1922787,
   0.1885722,
   0.202045,
   0.2131663,
   0.1976733,
   0.2138279,
   0.2101349,
   0.2187603,
   0.2116992,
   0.1921113,
   0.2009194,
   0.1998277,
   0.194118,
   0.1736352,
   0.1940172,
   0.1943506,
   0.1927593,
   0.2000766,
   0.2015513,
   0.216454};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3016[25] = {
   1.00054,
   1.137264,
   1.062031,
   0.9998733,
   1.181129,
   1.133633,
   1.013729,
   0.993143,
   0.9831777,
   0.8367467,
   0.9882997,
   0.9411702,
   1.108202,
   1.126721,
   1.066708,
   1.07422,
   1.028078,
   0.952043,
   1.029634,
   0.9054879,
   1.057989,
   0.9757763,
   1.044573,
   0.9595675,
   1.053322};
   Double_t _felx3016[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3016[25] = {
   0.08036534,
   0.0857245,
   0.0809791,
   0.07784003,
   0.09366958,
   0.09018696,
   0.08090438,
   0.08579449,
   0.08493362,
   0.07514207,
   0.08179226,
   0.07982902,
   0.09235021,
   0.08963707,
   0.08254431,
   0.08263229,
   0.08127669,
   0.08224399,
   0.08297025,
   0.07881261,
   0.08416911,
   0.0764287,
   0.08156745,
   0.07757643,
   0.08658254};
   Double_t _fehx3016[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3016[25] = {
   0.08036534,
   0.0857245,
   0.0809791,
   0.07784003,
   0.09366958,
   0.09018696,
   0.08090438,
   0.08579449,
   0.08493362,
   0.07514207,
   0.08179226,
   0.07982902,
   0.09235021,
   0.08963707,
   0.08254431,
   0.08263229,
   0.08127669,
   0.08224399,
   0.08297025,
   0.07881261,
   0.08416911,
   0.0764287,
   0.08156745,
   0.07757643,
   0.08658254};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.7102853);
   Graph_Graph3016->SetMaximum(1.326117);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

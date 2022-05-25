#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue Apr 19 22:39:48 2022) by ROOT version 6.26/00
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
   pad1->Range(-27.69231,-0.36,203.0769,30.33474);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmc__4->SetBinContent(1,1.82923);
   hmc__4->SetBinContent(2,6.611784);
   hmc__4->SetBinContent(3,8.713041);
   hmc__4->SetBinContent(4,11.66808);
   hmc__4->SetBinContent(5,13.62836);
   hmc__4->SetBinContent(6,13.0549);
   hmc__4->SetBinContent(7,13.75474);
   hmc__4->SetBinContent(8,13.86418);
   hmc__4->SetBinContent(9,13.41795);
   hmc__4->SetBinContent(10,11.82948);
   hmc__4->SetBinContent(11,11.49183);
   hmc__4->SetBinContent(12,11.1802);
   hmc__4->SetBinContent(13,10.85563);
   hmc__4->SetBinContent(14,9.648591);
   hmc__4->SetBinContent(15,8.974915);
   hmc__4->SetBinContent(16,8.736126);
   hmc__4->SetBinContent(17,6.949336);
   hmc__4->SetBinContent(18,6.908155);
   hmc__4->SetBinContent(19,6.491256);
   hmc__4->SetBinContent(20,6.00399);
   hmc__4->SetBinContent(21,5.206061);
   hmc__4->SetBinContent(22,3.601267);
   hmc__4->SetBinContent(23,2.684957);
   hmc__4->SetBinContent(24,0.6520245);
   hmc__4->SetBinError(1,0.9380746);
   hmc__4->SetBinError(2,2.138598);
   hmc__4->SetBinError(3,2.962538);
   hmc__4->SetBinError(4,3.238028);
   hmc__4->SetBinError(5,4.340947);
   hmc__4->SetBinError(6,4.539654);
   hmc__4->SetBinError(7,4.298279);
   hmc__4->SetBinError(8,4.038363);
   hmc__4->SetBinError(9,4.108726);
   hmc__4->SetBinError(10,3.726592);
   hmc__4->SetBinError(11,3.423425);
   hmc__4->SetBinError(12,3.293088);
   hmc__4->SetBinError(13,3.305847);
   hmc__4->SetBinError(14,3.046938);
   hmc__4->SetBinError(15,2.907326);
   hmc__4->SetBinError(16,2.984372);
   hmc__4->SetBinError(17,2.717461);
   hmc__4->SetBinError(18,2.142502);
   hmc__4->SetBinError(19,2.205123);
   hmc__4->SetBinError(20,2.245955);
   hmc__4->SetBinError(21,1.944942);
   hmc__4->SetBinError(22,1.305469);
   hmc__4->SetBinError(23,1.985766);
   hmc__4->SetBinError(24,0.4487077);
   hmc__4->SetBinError(25,0.0853624);
   hmc__4->SetMinimum(-0.36);
   hmc__4->SetMaximum(28.8);
   hmc__4->SetEntries(204.2995);
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
   hs2_stack_2->SetMinimum(-1.1539e-09);
   hs2_stack_2->SetMaximum(14.55739);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.008670123);
   hbadmatch_stack_1->SetBinContent(2,0.04213005);
   hbadmatch_stack_1->SetBinContent(3,0.05080017);
   hbadmatch_stack_1->SetBinContent(4,0.09415078);
   hbadmatch_stack_1->SetBinContent(5,0.09725673);
   hbadmatch_stack_1->SetBinContent(6,0.3287875);
   hbadmatch_stack_1->SetBinContent(7,0.1697408);
   hbadmatch_stack_1->SetBinContent(8,0.3451084);
   hbadmatch_stack_1->SetBinContent(9,0.2894645);
   hbadmatch_stack_1->SetBinContent(10,0.4815324);
   hbadmatch_stack_1->SetBinContent(11,0.3491552);
   hbadmatch_stack_1->SetBinContent(12,0.3096195);
   hbadmatch_stack_1->SetBinContent(13,0.1731639);
   hbadmatch_stack_1->SetBinContent(14,0.226204);
   hbadmatch_stack_1->SetBinContent(15,0.1863011);
   hbadmatch_stack_1->SetBinContent(16,0.1714201);
   hbadmatch_stack_1->SetBinContent(17,0.2165631);
   hbadmatch_stack_1->SetBinContent(18,0.05947029);
   hbadmatch_stack_1->SetBinContent(19,0.1945356);
   hbadmatch_stack_1->SetBinContent(20,0.05947029);
   hbadmatch_stack_1->SetBinContent(21,0.05294706);
   hbadmatch_stack_1->SetBinContent(22,0.05080017);
   hbadmatch_stack_1->SetBinContent(23,0.04213005);
   hbadmatch_stack_1->SetBinError(1,0.008670123);
   hbadmatch_stack_1->SetBinError(2,0.04213005);
   hbadmatch_stack_1->SetBinError(3,0.04301293);
   hbadmatch_stack_1->SetBinError(4,0.04718016);
   hbadmatch_stack_1->SetBinError(5,0.06331133);
   hbadmatch_stack_1->SetBinError(6,0.1088816);
   hbadmatch_stack_1->SetBinError(7,0.07550283);
   hbadmatch_stack_1->SetBinError(8,0.1118273);
   hbadmatch_stack_1->SetBinError(9,0.1011428);
   hbadmatch_stack_1->SetBinError(10,0.2595607);
   hbadmatch_stack_1->SetBinError(11,0.1156111);
   hbadmatch_stack_1->SetBinError(12,0.1102716);
   hbadmatch_stack_1->SetBinError(13,0.08118343);
   hbadmatch_stack_1->SetBinError(14,0.09487527);
   hbadmatch_stack_1->SetBinError(15,0.08054802);
   hbadmatch_stack_1->SetBinError(16,0.07571405);
   hbadmatch_stack_1->SetBinError(17,0.1008485);
   hbadmatch_stack_1->SetBinError(18,0.04387805);
   hbadmatch_stack_1->SetBinError(19,0.08558783);
   hbadmatch_stack_1->SetBinError(20,0.04387805);
   hbadmatch_stack_1->SetBinError(21,0.02163208);
   hbadmatch_stack_1->SetBinError(22,0.04301293);
   hbadmatch_stack_1->SetBinError(23,0.04213005);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.1436961);
   hext_stack_2->SetBinContent(2,0.7351677);
   hext_stack_2->SetBinContent(3,0.6248455);
   hext_stack_2->SetBinContent(4,0.9038943);
   hext_stack_2->SetBinContent(5,0.2354745);
   hext_stack_2->SetBinContent(6,0.3708272);
   hext_stack_2->SetBinContent(7,0.9038943);
   hext_stack_2->SetBinContent(8,0.7685416);
   hext_stack_2->SetBinContent(9,0.649876);
   hext_stack_2->SetBinContent(10,0.3875142);
   hext_stack_2->SetBinContent(11,0.4042011);
   hext_stack_2->SetBinContent(12,1.114338);
   hext_stack_2->SetBinContent(13,0.6915935);
   hext_stack_2->SetBinContent(14,0.8186026);
   hext_stack_2->SetBinContent(15,0.7268242);
   hext_stack_2->SetBinContent(16,0.5395538);
   hext_stack_2->SetBinContent(17,0.3291097);
   hext_stack_2->SetBinContent(18,0.3291097);
   hext_stack_2->SetBinContent(19,0.3124228);
   hext_stack_2->SetBinContent(20,0.3124228);
   hext_stack_2->SetBinContent(21,0.5998151);
   hext_stack_2->SetBinContent(22,0.5664411);
   hext_stack_2->SetBinContent(23,0.2873923);
   hext_stack_2->SetBinContent(24,0.1353527);
   hext_stack_2->SetBinError(1,0.1356096);
   hext_stack_2->SetBinError(2,0.3034617);
   hext_stack_2->SetBinError(3,0.271988);
   hext_stack_2->SetBinError(4,0.3326977);
   hext_stack_2->SetBinError(5,0.1384041);
   hext_stack_2->SetBinError(6,0.1935873);
   hext_stack_2->SetBinError(7,0.3326977);
   hext_stack_2->SetBinError(8,0.3039201);
   hext_stack_2->SetBinError(9,0.2723717);
   hext_stack_2->SetBinError(10,0.1939466);
   hext_stack_2->SetBinError(11,0.1943052);
   hext_stack_2->SetBinError(12,0.3600481);
   hext_stack_2->SetBinError(13,0.2730099);
   hext_stack_2->SetBinError(14,0.3046065);
   hext_stack_2->SetBinError(15,0.303347);
   hext_stack_2->SetBinError(16,0.2368013);
   hext_stack_2->SetBinError(17,0.1926862);
   hext_stack_2->SetBinError(18,0.1926862);
   hext_stack_2->SetBinError(19,0.1923246);
   hext_stack_2->SetBinError(20,0.1923246);
   hext_stack_2->SetBinError(21,0.2716039);
   hext_stack_2->SetBinError(22,0.2710908);
   hext_stack_2->SetBinError(23,0.1917809);
   hext_stack_2->SetBinError(24,0.1353526);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(2,0.03565134);
   hdirt_stack_3->SetBinContent(4,0.06971735);
   hdirt_stack_3->SetBinContent(5,0.04124067);
   hdirt_stack_3->SetBinContent(6,0.04605706);
   hdirt_stack_3->SetBinContent(7,0.08954298);
   hdirt_stack_3->SetBinContent(8,0.2387174);
   hdirt_stack_3->SetBinContent(9,0.09577534);
   hdirt_stack_3->SetBinContent(10,0.04124067);
   hdirt_stack_3->SetBinContent(11,0.01787741);
   hdirt_stack_3->SetBinContent(12,0.04012766);
   hdirt_stack_3->SetBinContent(14,0.04157609);
   hdirt_stack_3->SetBinContent(15,0.03681809);
   hdirt_stack_3->SetBinContent(16,0.06012401);
   hdirt_stack_3->SetBinContent(17,0.01783088);
   hdirt_stack_3->SetBinContent(18,0.03565134);
   hdirt_stack_3->SetBinContent(19,0.04714293);
   hdirt_stack_3->SetBinContent(20,0.04236224);
   hdirt_stack_3->SetBinContent(22,0.01095165);
   hdirt_stack_3->SetBinContent(23,0.06012401);
   hdirt_stack_3->SetBinError(2,0.03057719);
   hdirt_stack_3->SetBinError(4,0.04577617);
   hdirt_stack_3->SetBinError(5,0.03108384);
   hdirt_stack_3->SetBinError(6,0.03576287);
   hdirt_stack_3->SetBinError(7,0.05080392);
   hdirt_stack_3->SetBinError(8,0.2048497);
   hdirt_stack_3->SetBinError(9,0.05236805);
   hdirt_stack_3->SetBinError(10,0.03108384);
   hdirt_stack_3->SetBinError(11,0.0103612);
   hdirt_stack_3->SetBinError(12,0.03498767);
   hdirt_stack_3->SetBinError(14,0.03641823);
   hdirt_stack_3->SetBinError(15,0.03079766);
   hdirt_stack_3->SetBinError(16,0.04251409);
   hdirt_stack_3->SetBinError(17,0.01033118);
   hdirt_stack_3->SetBinError(18,0.03057719);
   hdirt_stack_3->SetBinError(19,0.03682267);
   hdirt_stack_3->SetBinError(20,0.03130497);
   hdirt_stack_3->SetBinError(22,0.01095165);
   hdirt_stack_3->SetBinError(23,0.04251409);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.1016003);
   houtFV_stack_4->SetBinContent(2,0.3977312);
   houtFV_stack_4->SetBinContent(3,0.7855718);
   houtFV_stack_4->SetBinContent(4,0.9174436);
   houtFV_stack_4->SetBinContent(5,1.249912);
   houtFV_stack_4->SetBinContent(6,0.7763154);
   houtFV_stack_4->SetBinContent(7,0.643062);
   houtFV_stack_4->SetBinContent(8,0.898315);
   houtFV_stack_4->SetBinContent(9,0.9972905);
   houtFV_stack_4->SetBinContent(10,0.503431);
   houtFV_stack_4->SetBinContent(11,0.8418846);
   houtFV_stack_4->SetBinContent(12,0.4419141);
   houtFV_stack_4->SetBinContent(13,0.6273448);
   houtFV_stack_4->SetBinContent(14,0.2787907);
   houtFV_stack_4->SetBinContent(15,0.5785663);
   houtFV_stack_4->SetBinContent(16,0.5662515);
   houtFV_stack_4->SetBinContent(17,0.3598886);
   houtFV_stack_4->SetBinContent(18,0.5658987);
   houtFV_stack_4->SetBinContent(19,0.5925515);
   houtFV_stack_4->SetBinContent(20,0.4484887);
   houtFV_stack_4->SetBinContent(21,0.4106683);
   houtFV_stack_4->SetBinContent(22,0.2032007);
   houtFV_stack_4->SetBinContent(23,0.1731174);
   houtFV_stack_4->SetBinContent(24,0.02601037);
   houtFV_stack_4->SetBinError(1,0.06082946);
   houtFV_stack_4->SetBinError(2,0.1213496);
   houtFV_stack_4->SetBinError(3,0.1754291);
   houtFV_stack_4->SetBinError(4,0.1847228);
   houtFV_stack_4->SetBinError(5,0.2169066);
   houtFV_stack_4->SetBinError(6,0.1674055);
   houtFV_stack_4->SetBinError(7,0.1545998);
   houtFV_stack_4->SetBinError(8,0.1860101);
   houtFV_stack_4->SetBinError(9,0.1973983);
   houtFV_stack_4->SetBinError(10,0.1340338);
   houtFV_stack_4->SetBinError(11,0.1769476);
   houtFV_stack_4->SetBinError(12,0.1286098);
   houtFV_stack_4->SetBinError(13,0.1589227);
   houtFV_stack_4->SetBinError(14,0.104284);
   houtFV_stack_4->SetBinError(15,0.1482255);
   houtFV_stack_4->SetBinError(16,0.1477345);
   houtFV_stack_4->SetBinError(17,0.1182587);
   houtFV_stack_4->SetBinError(18,0.1475329);
   houtFV_stack_4->SetBinError(19,0.1532271);
   houtFV_stack_4->SetBinError(20,0.1256206);
   houtFV_stack_4->SetBinError(21,0.1291994);
   houtFV_stack_4->SetBinError(22,0.08602585);
   houtFV_stack_4->SetBinError(23,0.0659062);
   houtFV_stack_4->SetBinError(24,0.01501709);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,0.9726528);
   hNCpi0inFV_stack_5->SetBinContent(2,3.630381);
   hNCpi0inFV_stack_5->SetBinContent(3,4.960011);
   hNCpi0inFV_stack_5->SetBinContent(4,5.648709);
   hNCpi0inFV_stack_5->SetBinContent(5,7.302893);
   hNCpi0inFV_stack_5->SetBinContent(6,7.833117);
   hNCpi0inFV_stack_5->SetBinContent(7,7.977972);
   hNCpi0inFV_stack_5->SetBinContent(8,7.777434);
   hNCpi0inFV_stack_5->SetBinContent(9,7.398264);
   hNCpi0inFV_stack_5->SetBinContent(10,6.926267);
   hNCpi0inFV_stack_5->SetBinContent(11,5.64993);
   hNCpi0inFV_stack_5->SetBinContent(12,6.099682);
   hNCpi0inFV_stack_5->SetBinContent(13,5.64126);
   hNCpi0inFV_stack_5->SetBinContent(14,5.331577);
   hNCpi0inFV_stack_5->SetBinContent(15,4.563345);
   hNCpi0inFV_stack_5->SetBinContent(16,4.751647);
   hNCpi0inFV_stack_5->SetBinContent(17,3.714642);
   hNCpi0inFV_stack_5->SetBinContent(18,3.800122);
   hNCpi0inFV_stack_5->SetBinContent(19,3.21531);
   hNCpi0inFV_stack_5->SetBinContent(20,3.356599);
   hNCpi0inFV_stack_5->SetBinContent(21,2.312018);
   hNCpi0inFV_stack_5->SetBinContent(22,1.735876);
   hNCpi0inFV_stack_5->SetBinContent(23,1.329475);
   hNCpi0inFV_stack_5->SetBinContent(24,0.3295908);
   hNCpi0inFV_stack_5->SetBinError(1,0.1913802);
   hNCpi0inFV_stack_5->SetBinError(2,0.366581);
   hNCpi0inFV_stack_5->SetBinError(3,0.4290415);
   hNCpi0inFV_stack_5->SetBinError(4,0.4517062);
   hNCpi0inFV_stack_5->SetBinError(5,0.5201329);
   hNCpi0inFV_stack_5->SetBinError(6,0.5325348);
   hNCpi0inFV_stack_5->SetBinError(7,0.5389933);
   hNCpi0inFV_stack_5->SetBinError(8,0.5360406);
   hNCpi0inFV_stack_5->SetBinError(9,0.5209271);
   hNCpi0inFV_stack_5->SetBinError(10,0.5045932);
   hNCpi0inFV_stack_5->SetBinError(11,0.4501549);
   hNCpi0inFV_stack_5->SetBinError(12,0.4667078);
   hNCpi0inFV_stack_5->SetBinError(13,0.4500714);
   hNCpi0inFV_stack_5->SetBinError(14,0.4439143);
   hNCpi0inFV_stack_5->SetBinError(15,0.4079643);
   hNCpi0inFV_stack_5->SetBinError(16,0.4133846);
   hNCpi0inFV_stack_5->SetBinError(17,0.3713913);
   hNCpi0inFV_stack_5->SetBinError(18,0.3742757);
   hNCpi0inFV_stack_5->SetBinError(19,0.3456958);
   hNCpi0inFV_stack_5->SetBinError(20,0.3574617);
   hNCpi0inFV_stack_5->SetBinError(21,0.28893);
   hNCpi0inFV_stack_5->SetBinError(22,0.2509561);
   hNCpi0inFV_stack_5->SetBinError(23,0.2194951);
   hNCpi0inFV_stack_5->SetBinError(24,0.1128063);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.3042133);
   hCCpi0inFV_stack_6->SetBinContent(2,0.9305227);
   hCCpi0inFV_stack_6->SetBinContent(3,1.281086);
   hCCpi0inFV_stack_6->SetBinContent(4,2.405042);
   hCCpi0inFV_stack_6->SetBinContent(5,2.067198);
   hCCpi0inFV_stack_6->SetBinContent(6,2.348739);
   hCCpi0inFV_stack_6->SetBinContent(7,2.08464);
   hCCpi0inFV_stack_6->SetBinContent(8,2.637075);
   hCCpi0inFV_stack_6->SetBinContent(9,2.454504);
   hCCpi0inFV_stack_6->SetBinContent(10,1.841741);
   hCCpi0inFV_stack_6->SetBinContent(11,1.593366);
   hCCpi0inFV_stack_6->SetBinContent(12,1.665191);
   hCCpi0inFV_stack_6->SetBinContent(13,1.645634);
   hCCpi0inFV_stack_6->SetBinContent(14,1.4162);
   hCCpi0inFV_stack_6->SetBinContent(15,1.329544);
   hCCpi0inFV_stack_6->SetBinContent(16,1.390182);
   hCCpi0inFV_stack_6->SetBinContent(17,1.279271);
   hCCpi0inFV_stack_6->SetBinContent(18,1.374597);
   hCCpi0inFV_stack_6->SetBinContent(19,1.331503);
   hCCpi0inFV_stack_6->SetBinContent(20,1.188946);
   hCCpi0inFV_stack_6->SetBinContent(21,0.9298642);
   hCCpi0inFV_stack_6->SetBinContent(22,0.5686926);
   hCCpi0inFV_stack_6->SetBinContent(23,0.3666249);
   hCCpi0inFV_stack_6->SetBinContent(24,0.1189406);
   hCCpi0inFV_stack_6->SetBinError(1,0.1084981);
   hCCpi0inFV_stack_6->SetBinError(2,0.1866854);
   hCCpi0inFV_stack_6->SetBinError(3,0.2167408);
   hCCpi0inFV_stack_6->SetBinError(4,0.2989971);
   hCCpi0inFV_stack_6->SetBinError(5,0.2712286);
   hCCpi0inFV_stack_6->SetBinError(6,0.2981977);
   hCCpi0inFV_stack_6->SetBinError(7,0.2766156);
   hCCpi0inFV_stack_6->SetBinError(8,0.3136302);
   hCCpi0inFV_stack_6->SetBinError(9,0.3015869);
   hCCpi0inFV_stack_6->SetBinError(10,0.2569431);
   hCCpi0inFV_stack_6->SetBinError(11,0.2368644);
   hCCpi0inFV_stack_6->SetBinError(12,0.2520906);
   hCCpi0inFV_stack_6->SetBinError(13,0.2516668);
   hCCpi0inFV_stack_6->SetBinError(14,0.2258951);
   hCCpi0inFV_stack_6->SetBinError(15,0.222816);
   hCCpi0inFV_stack_6->SetBinError(16,0.2301568);
   hCCpi0inFV_stack_6->SetBinError(17,0.2185449);
   hCCpi0inFV_stack_6->SetBinError(18,0.2274293);
   hCCpi0inFV_stack_6->SetBinError(19,0.2261783);
   hCCpi0inFV_stack_6->SetBinError(20,0.2180037);
   hCCpi0inFV_stack_6->SetBinError(21,0.1884556);
   hCCpi0inFV_stack_6->SetBinError(22,0.1379395);
   hCCpi0inFV_stack_6->SetBinError(23,0.1143342);
   hCCpi0inFV_stack_6->SetBinError(24,0.06205293);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.05080017);
   hNCinFV_stack_7->SetBinContent(2,0.1784109);
   hNCinFV_stack_7->SetBinContent(3,0.4646511);
   hNCinFV_stack_7->SetBinContent(4,0.5761421);
   hNCinFV_stack_7->SetBinContent(5,0.7013116);
   hNCinFV_stack_7->SetBinContent(6,0.3729414);
   hNCinFV_stack_7->SetBinContent(7,0.5934585);
   hNCinFV_stack_7->SetBinContent(8,0.2973515);
   hNCinFV_stack_7->SetBinContent(9,0.5910413);
   hNCinFV_stack_7->SetBinContent(10,0.4237416);
   hNCinFV_stack_7->SetBinContent(11,0.7458829);
   hNCinFV_stack_7->SetBinContent(12,0.4572015);
   hNCinFV_stack_7->SetBinContent(13,0.4572015);
   hNCinFV_stack_7->SetBinContent(14,0.5662515);
   hNCinFV_stack_7->SetBinContent(15,0.5749215);
   hNCinFV_stack_7->SetBinContent(16,0.4410819);
   hNCinFV_stack_7->SetBinContent(17,0.3233618);
   hNCinFV_stack_7->SetBinContent(18,0.3382609);
   hNCinFV_stack_7->SetBinContent(19,0.3630507);
   hNCinFV_stack_7->SetBinContent(20,0.1028209);
   hNCinFV_stack_7->SetBinContent(21,0.4138509);
   hNCinFV_stack_7->SetBinContent(22,0.144951);
   hNCinFV_stack_7->SetBinContent(23,0.1945305);
   hNCinFV_stack_7->SetBinError(1,0.04301293);
   hNCinFV_stack_7->SetBinError(2,0.075999);
   hNCinFV_stack_7->SetBinError(3,0.1346301);
   hNCinFV_stack_7->SetBinError(4,0.1431837);
   hNCinFV_stack_7->SetBinError(5,0.1650015);
   hNCinFV_stack_7->SetBinError(6,0.1144601);
   hNCinFV_stack_7->SetBinError(7,0.1485006);
   hNCinFV_stack_7->SetBinError(8,0.09811429);
   hNCinFV_stack_7->SetBinError(9,0.1531342);
   hNCinFV_stack_7->SetBinError(10,0.1222753);
   hNCinFV_stack_7->SetBinError(11,0.1618711);
   hNCinFV_stack_7->SetBinError(12,0.1290388);
   hNCinFV_stack_7->SetBinError(13,0.1290388);
   hNCinFV_stack_7->SetBinError(14,0.1477345);
   hNCinFV_stack_7->SetBinError(15,0.1479887);
   hNCinFV_stack_7->SetBinError(16,0.1228885);
   hNCinFV_stack_7->SetBinError(17,0.09925688);
   hNCinFV_stack_7->SetBinError(18,0.113139);
   hNCinFV_stack_7->SetBinError(19,0.1201043);
   hNCinFV_stack_7->SetBinError(20,0.04797018);
   hNCinFV_stack_7->SetBinError(21,0.1275741);
   hNCinFV_stack_7->SetBinError(22,0.06384418);
   hNCinFV_stack_7->SetBinError(23,0.08558783);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.1967968);
   hnumuCCinFV_stack_8->SetBinContent(2,0.5596009);
   hnumuCCinFV_stack_8->SetBinContent(3,0.4511312);
   hnumuCCinFV_stack_8->SetBinContent(4,0.9742339);
   hnumuCCinFV_stack_8->SetBinContent(5,1.933074);
   hnumuCCinFV_stack_8->SetBinContent(6,0.9180072);
   hnumuCCinFV_stack_8->SetBinContent(7,1.199499);
   hnumuCCinFV_stack_8->SetBinContent(8,0.892971);
   hnumuCCinFV_stack_8->SetBinContent(9,0.9417306);
   hnumuCCinFV_stack_8->SetBinContent(10,1.155874);
   hnumuCCinFV_stack_8->SetBinContent(11,1.889531);
   hnumuCCinFV_stack_8->SetBinContent(12,1.052112);
   hnumuCCinFV_stack_8->SetBinContent(13,1.5773);
   hnumuCCinFV_stack_8->SetBinContent(14,0.8645393);
   hnumuCCinFV_stack_8->SetBinContent(15,0.9364644);
   hnumuCCinFV_stack_8->SetBinContent(16,0.8071949);
   hnumuCCinFV_stack_8->SetBinContent(17,0.7086691);
   hnumuCCinFV_stack_8->SetBinContent(18,0.4050462);
   hnumuCCinFV_stack_8->SetBinContent(19,0.4260693);
   hnumuCCinFV_stack_8->SetBinContent(20,0.4928803);
   hnumuCCinFV_stack_8->SetBinContent(21,0.4868981);
   hnumuCCinFV_stack_8->SetBinContent(22,0.2782238);
   hnumuCCinFV_stack_8->SetBinContent(23,0.2315637);
   hnumuCCinFV_stack_8->SetBinContent(24,0.04213005);
   hnumuCCinFV_stack_8->SetBinError(1,0.09105607);
   hnumuCCinFV_stack_8->SetBinError(2,0.1542853);
   hnumuCCinFV_stack_8->SetBinError(3,0.165226);
   hnumuCCinFV_stack_8->SetBinError(4,0.2017392);
   hnumuCCinFV_stack_8->SetBinError(5,0.4863143);
   hnumuCCinFV_stack_8->SetBinError(6,0.1985848);
   hnumuCCinFV_stack_8->SetBinError(7,0.2367613);
   hnumuCCinFV_stack_8->SetBinError(8,0.1961012);
   hnumuCCinFV_stack_8->SetBinError(9,0.2358236);
   hnumuCCinFV_stack_8->SetBinError(10,0.2590423);
   hnumuCCinFV_stack_8->SetBinError(11,0.3385406);
   hnumuCCinFV_stack_8->SetBinError(12,0.2015578);
   hnumuCCinFV_stack_8->SetBinError(13,0.3543803);
   hnumuCCinFV_stack_8->SetBinError(14,0.233118);
   hnumuCCinFV_stack_8->SetBinError(15,0.2618248);
   hnumuCCinFV_stack_8->SetBinError(16,0.2055555);
   hnumuCCinFV_stack_8->SetBinError(17,0.1813972);
   hnumuCCinFV_stack_8->SetBinError(18,0.1305955);
   hnumuCCinFV_stack_8->SetBinError(19,0.1270924);
   hnumuCCinFV_stack_8->SetBinError(20,0.1360917);
   hnumuCCinFV_stack_8->SetBinError(21,0.147076);
   hnumuCCinFV_stack_8->SetBinError(22,0.09480603);
   hnumuCCinFV_stack_8->SetBinError(23,0.1051193);
   hnumuCCinFV_stack_8->SetBinError(24,0.04213005);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.05080017);
   hnueCCinFV_stack_9->SetBinContent(2,0.1021886);
   hnueCCinFV_stack_9->SetBinContent(3,0.09494425);
   hnueCCinFV_stack_9->SetBinContent(4,0.07874391);
   hnueCCinFV_stack_9->SetBinContent(6,0.06011325);
   hnueCCinFV_stack_9->SetBinContent(7,0.09293021);
   hnueCCinFV_stack_9->SetBinContent(8,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(10,0.06814042);
   hnueCCinFV_stack_9->SetBinContent(12,9.375129e-06);
   hnueCCinFV_stack_9->SetBinContent(13,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(14,0.1048511);
   hnueCCinFV_stack_9->SetBinContent(15,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(16,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(19,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(22,0.04213005);
   hnueCCinFV_stack_9->SetBinError(1,0.04301293);
   hnueCCinFV_stack_9->SetBinError(2,0.06092551);
   hnueCCinFV_stack_9->SetBinError(3,0.05533427);
   hnueCCinFV_stack_9->SetBinError(4,0.05298197);
   hnueCCinFV_stack_9->SetBinError(6,0.04400961);
   hnueCCinFV_stack_9->SetBinError(7,0.06020841);
   hnueCCinFV_stack_9->SetBinError(8,0.008670123);
   hnueCCinFV_stack_9->SetBinError(10,0.04472643);
   hnueCCinFV_stack_9->SetBinError(12,9.375128e-06);
   hnueCCinFV_stack_9->SetBinError(13,0.04213005);
   hnueCCinFV_stack_9->SetBinError(14,0.06907689);
   hnueCCinFV_stack_9->SetBinError(15,0.04213005);
   hnueCCinFV_stack_9->SetBinError(16,0.008670123);
   hnueCCinFV_stack_9->SetBinError(19,0.008670123);
   hnueCCinFV_stack_9->SetBinError(22,0.04213005);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmcerror__5->SetBinContent(1,1.82923);
   hmcerror__5->SetBinContent(2,6.611784);
   hmcerror__5->SetBinContent(3,8.713041);
   hmcerror__5->SetBinContent(4,11.66808);
   hmcerror__5->SetBinContent(5,13.62836);
   hmcerror__5->SetBinContent(6,13.0549);
   hmcerror__5->SetBinContent(7,13.75474);
   hmcerror__5->SetBinContent(8,13.86418);
   hmcerror__5->SetBinContent(9,13.41795);
   hmcerror__5->SetBinContent(10,11.82948);
   hmcerror__5->SetBinContent(11,11.49183);
   hmcerror__5->SetBinContent(12,11.1802);
   hmcerror__5->SetBinContent(13,10.85563);
   hmcerror__5->SetBinContent(14,9.648591);
   hmcerror__5->SetBinContent(15,8.974915);
   hmcerror__5->SetBinContent(16,8.736126);
   hmcerror__5->SetBinContent(17,6.949336);
   hmcerror__5->SetBinContent(18,6.908155);
   hmcerror__5->SetBinContent(19,6.491256);
   hmcerror__5->SetBinContent(20,6.00399);
   hmcerror__5->SetBinContent(21,5.206061);
   hmcerror__5->SetBinContent(22,3.601267);
   hmcerror__5->SetBinContent(23,2.684957);
   hmcerror__5->SetBinContent(24,0.6520245);
   hmcerror__5->SetBinError(1,0.9380746);
   hmcerror__5->SetBinError(2,2.138598);
   hmcerror__5->SetBinError(3,2.962538);
   hmcerror__5->SetBinError(4,3.238028);
   hmcerror__5->SetBinError(5,4.340947);
   hmcerror__5->SetBinError(6,4.539654);
   hmcerror__5->SetBinError(7,4.298279);
   hmcerror__5->SetBinError(8,4.038363);
   hmcerror__5->SetBinError(9,4.108726);
   hmcerror__5->SetBinError(10,3.726592);
   hmcerror__5->SetBinError(11,3.423425);
   hmcerror__5->SetBinError(12,3.293088);
   hmcerror__5->SetBinError(13,3.305847);
   hmcerror__5->SetBinError(14,3.046938);
   hmcerror__5->SetBinError(15,2.907326);
   hmcerror__5->SetBinError(16,2.984372);
   hmcerror__5->SetBinError(17,2.717461);
   hmcerror__5->SetBinError(18,2.142502);
   hmcerror__5->SetBinError(19,2.205123);
   hmcerror__5->SetBinError(20,2.245955);
   hmcerror__5->SetBinError(21,1.944942);
   hmcerror__5->SetBinError(22,1.305469);
   hmcerror__5->SetBinError(23,1.985766);
   hmcerror__5->SetBinError(24,0.4487077);
   hmcerror__5->SetBinError(25,0.0853624);
   hmcerror__5->SetEntries(204.2995);

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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.00#pm0.07(data err)#pm0.22(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 3.623e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.83/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 13.4","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  112.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 34.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 9.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 19.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all");
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
   0.5128249,
   0.3234525,
   0.3400119,
   0.2775117,
   0.3185231,
   0.3477355,
   0.3124944,
   0.2912803,
   0.3062112,
   0.3150258,
   0.2979008,
   0.2945466,
   0.3045284,
   0.315791,
   0.3239392,
   0.3416128,
   0.391039,
   0.310141,
   0.3397067,
   0.3740771,
   0.3735918,
   0.3625026,
   0.7395896,
   0.6881762};
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
   0.5128249,
   0.3234525,
   0.3400119,
   0.2775117,
   0.3185231,
   0.3477355,
   0.3124944,
   0.2912803,
   0.3062112,
   0.3150258,
   0.2979008,
   0.2945466,
   0.3045284,
   0.315791,
   0.3239392,
   0.3416128,
   0.391039,
   0.310141,
   0.3397067,
   0.3740771,
   0.3735918,
   0.3625026,
   0.7395896,
   0.6881762};
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
   Graph_Graph3006->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
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
   0.256742,
   0.2184787,
   0.2173863,
   0.2031143,
   0.2223838,
   0.2347592,
   0.2246509,
   0.2258663,
   0.2330359,
   0.2444084,
   0.2326848,
   0.2115133,
   0.2055413,
   0.2199422,
   0.2251752,
   0.2038048,
   0.2301748,
   0.2022721,
   0.2361884,
   0.2372014,
   0.2162996,
   0.2257959,
   0.2191449,
   0.3588089};
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
   0.256742,
   0.2184787,
   0.2173863,
   0.2031143,
   0.2223838,
   0.2347592,
   0.2246509,
   0.2258663,
   0.2330359,
   0.2444084,
   0.2326848,
   0.2115133,
   0.2055413,
   0.2199422,
   0.2251752,
   0.2038048,
   0.2301748,
   0.2022721,
   0.2361884,
   0.2372014,
   0.2162996,
   0.2257959,
   0.2191449,
   0.3588089};
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
   1.640035,
   1.361206,
   0.8033934,
   0.9427432,
   0.8071404,
   1.378792,
   0.8724266,
   1.009796,
   0.8943246,
   0.5072073,
   1.131239,
   1.16277,
   0.5527087,
   0.6218525,
   0.7799517,
   1.373607,
   1.151189,
   1.592321,
   1.232427,
   0.8327795,
   1.53667,
   0.8330402,
   1.862227,
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
   1.171733,
   0.4830073,
   0.3281908,
   0.2997495,
   0.256634,
   0.3370994,
   0.2646521,
   0.2820361,
   0.2712949,
   0.2264892,
   0.3287232,
   0.3378859,
   0.2468075,
   0.277683,
   0.3186147,
   0.4166858,
   0.4361136,
   0.5062857,
   0.4668896,
   0.4147159,
   0.5821483,
   0.5951706,
   0.9273704,
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
   0.9425935,
   0.4474133,
   0.2996118,
   0.2802518,
   0.2399408,
   0.3206304,
   0.2483144,
   0.266139,
   0.2545471,
   0.2044536,
   0.3093677,
   0.3179909,
   0.222795,
   0.2506667,
   0.2908696,
   0.3909628,
   0.4014196,
   0.4733536,
   0.4297473,
   0.3681951,
   0.5358369,
   0.4787815,
   0.8233427,
   1.760363};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.954127);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);

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

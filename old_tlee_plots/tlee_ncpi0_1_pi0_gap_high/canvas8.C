#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 21:27:23 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-7,56.41026,774.0526);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__22->SetBinContent(1,339.3702);
   hmc__22->SetBinContent(2,53.51796);
   hmc__22->SetBinContent(3,47.14728);
   hmc__22->SetBinContent(4,48.96243);
   hmc__22->SetBinContent(5,49.65819);
   hmc__22->SetBinContent(6,40.11807);
   hmc__22->SetBinContent(7,35.63805);
   hmc__22->SetBinContent(8,35.57955);
   hmc__22->SetBinContent(9,34.78412);
   hmc__22->SetBinContent(10,34.01045);
   hmc__22->SetBinContent(11,23.29169);
   hmc__22->SetBinContent(12,18.6292);
   hmc__22->SetBinContent(13,16.42144);
   hmc__22->SetBinContent(14,12.66841);
   hmc__22->SetBinContent(15,13.91065);
   hmc__22->SetBinContent(16,9.311587);
   hmc__22->SetBinContent(17,11.35211);
   hmc__22->SetBinContent(18,8.476911);
   hmc__22->SetBinContent(19,8.826412);
   hmc__22->SetBinContent(20,8.150446);
   hmc__22->SetBinContent(21,83.73908);
   hmc__22->SetBinError(1,71.00891);
   hmc__22->SetBinError(2,23.01486);
   hmc__22->SetBinError(3,17.71103);
   hmc__22->SetBinError(4,18.00693);
   hmc__22->SetBinError(5,21.62234);
   hmc__22->SetBinError(6,17.44658);
   hmc__22->SetBinError(7,11.87684);
   hmc__22->SetBinError(8,11.8683);
   hmc__22->SetBinError(9,18.08226);
   hmc__22->SetBinError(10,16.58044);
   hmc__22->SetBinError(11,12.57194);
   hmc__22->SetBinError(12,10.10879);
   hmc__22->SetBinError(13,9.277202);
   hmc__22->SetBinError(14,9.600512);
   hmc__22->SetBinError(15,8.805651);
   hmc__22->SetBinError(16,7.948916);
   hmc__22->SetBinError(17,6.321013);
   hmc__22->SetBinError(18,6.665561);
   hmc__22->SetBinError(19,6.443165);
   hmc__22->SetBinError(20,6.05339);
   hmc__22->SetBinError(21,23.67427);
   hmc__22->SetMinimum(-7);
   hmc__22->SetMaximum(735);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,50);
   hs8_stack_8->SetMinimum(-9.393126e-09);
   hs8_stack_8->SetMaximum(356.3387);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,8.551105);
   hbadmatch_stack_1->SetBinContent(2,2.359401);
   hbadmatch_stack_1->SetBinContent(3,1.303913);
   hbadmatch_stack_1->SetBinContent(4,1.469987);
   hbadmatch_stack_1->SetBinContent(5,1.72367);
   hbadmatch_stack_1->SetBinContent(6,1.541292);
   hbadmatch_stack_1->SetBinContent(7,1.034462);
   hbadmatch_stack_1->SetBinContent(8,1.619294);
   hbadmatch_stack_1->SetBinContent(9,0.5823032);
   hbadmatch_stack_1->SetBinContent(10,0.8730519);
   hbadmatch_stack_1->SetBinContent(11,0.8769244);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,0.9651297);
   hbadmatch_stack_1->SetBinContent(15,1.329184);
   hbadmatch_stack_1->SetBinContent(16,0.6346182);
   hbadmatch_stack_1->SetBinContent(17,0.6888063);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.5148656);
   hbadmatch_stack_1->SetBinContent(20,0.1975809);
   hbadmatch_stack_1->SetBinContent(21,5.987079);
   hbadmatch_stack_1->SetBinError(1,1.544662);
   hbadmatch_stack_1->SetBinError(2,0.8731591);
   hbadmatch_stack_1->SetBinError(3,0.6014933);
   hbadmatch_stack_1->SetBinError(4,0.6825031);
   hbadmatch_stack_1->SetBinError(5,0.7205468);
   hbadmatch_stack_1->SetBinError(6,1.13144);
   hbadmatch_stack_1->SetBinError(7,0.4645268);
   hbadmatch_stack_1->SetBinError(8,0.6748525);
   hbadmatch_stack_1->SetBinError(9,0.4175471);
   hbadmatch_stack_1->SetBinError(10,0.4027611);
   hbadmatch_stack_1->SetBinError(11,0.5573734);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.6864262);
   hbadmatch_stack_1->SetBinError(15,0.6875449);
   hbadmatch_stack_1->SetBinError(16,0.4656457);
   hbadmatch_stack_1->SetBinError(17,0.5309);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.5148656);
   hbadmatch_stack_1->SetBinError(20,0.1975809);
   hbadmatch_stack_1->SetBinError(21,1.358487);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,68.96329);
   hext_stack_2->SetBinContent(2,9.772676);
   hext_stack_2->SetBinContent(3,7.302782);
   hext_stack_2->SetBinContent(4,9.947031);
   hext_stack_2->SetBinContent(5,11.9353);
   hext_stack_2->SetBinContent(6,7.373394);
   hext_stack_2->SetBinContent(7,9.164192);
   hext_stack_2->SetBinContent(8,10.51803);
   hext_stack_2->SetBinContent(9,10.00769);
   hext_stack_2->SetBinContent(10,6.870233);
   hext_stack_2->SetBinContent(11,3.889996);
   hext_stack_2->SetBinContent(12,3.654981);
   hext_stack_2->SetBinContent(13,3.737183);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,2.510206);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinContent(17,3.412785);
   hext_stack_2->SetBinContent(18,1.78639);
   hext_stack_2->SetBinContent(19,1.697008);
   hext_stack_2->SetBinContent(20,2.435184);
   hext_stack_2->SetBinContent(21,22.4374);
   hext_stack_2->SetBinError(1,5.645981);
   hext_stack_2->SetBinError(2,2.212635);
   hext_stack_2->SetBinError(3,1.704924);
   hext_stack_2->SetBinError(4,2.116224);
   hext_stack_2->SetBinError(5,2.4578);
   hext_stack_2->SetBinError(6,1.741532);
   hext_stack_2->SetBinError(7,1.953049);
   hext_stack_2->SetBinError(8,2.182638);
   hext_stack_2->SetBinError(9,2.26762);
   hext_stack_2->SetBinError(10,1.791626);
   hext_stack_2->SetBinError(11,1.264566);
   hext_stack_2->SetBinError(12,1.163091);
   hext_stack_2->SetBinError(13,1.188642);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,1.057404);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetBinError(17,1.14352);
   hext_stack_2->SetBinError(18,0.8039566);
   hext_stack_2->SetBinError(19,0.8873887);
   hext_stack_2->SetBinError(20,0.9256422);
   hext_stack_2->SetBinError(21,3.066795);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,5.254683);
   hdirt_stack_3->SetBinContent(2,0.5364639);
   hdirt_stack_3->SetBinContent(3,0.9093084);
   hdirt_stack_3->SetBinContent(4,0.9068468);
   hdirt_stack_3->SetBinContent(5,1.052645);
   hdirt_stack_3->SetBinContent(6,1.197322);
   hdirt_stack_3->SetBinContent(7,1.632407);
   hdirt_stack_3->SetBinContent(8,0.7498547);
   hdirt_stack_3->SetBinContent(9,0.9525174);
   hdirt_stack_3->SetBinContent(10,1.147013);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.6143302);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.9257255);
   hdirt_stack_3->SetBinContent(17,0.399291);
   hdirt_stack_3->SetBinContent(18,0.3851607);
   hdirt_stack_3->SetBinContent(20,0.6112059);
   hdirt_stack_3->SetBinContent(21,1.175663);
   hdirt_stack_3->SetBinError(1,1.140301);
   hdirt_stack_3->SetBinError(2,0.4153422);
   hdirt_stack_3->SetBinError(3,0.5076044);
   hdirt_stack_3->SetBinError(4,0.5334985);
   hdirt_stack_3->SetBinError(5,0.5518548);
   hdirt_stack_3->SetBinError(6,0.4997818);
   hdirt_stack_3->SetBinError(7,0.7416819);
   hdirt_stack_3->SetBinError(8,0.3885538);
   hdirt_stack_3->SetBinError(9,0.5165933);
   hdirt_stack_3->SetBinError(10,0.9535811);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.39051);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.5393673);
   hdirt_stack_3->SetBinError(17,0.399291);
   hdirt_stack_3->SetBinError(18,0.2830491);
   hdirt_stack_3->SetBinError(20,0.4492467);
   hdirt_stack_3->SetBinError(21,0.5774245);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,60.76477);
   houtFV_stack_4->SetBinContent(2,8.493111);
   houtFV_stack_4->SetBinContent(3,10.60721);
   houtFV_stack_4->SetBinContent(4,10.53619);
   houtFV_stack_4->SetBinContent(5,12.35262);
   houtFV_stack_4->SetBinContent(6,8.031754);
   houtFV_stack_4->SetBinContent(7,8.288545);
   houtFV_stack_4->SetBinContent(8,7.404006);
   houtFV_stack_4->SetBinContent(9,7.218921);
   houtFV_stack_4->SetBinContent(10,9.411909);
   houtFV_stack_4->SetBinContent(11,5.8402);
   houtFV_stack_4->SetBinContent(12,4.183189);
   houtFV_stack_4->SetBinContent(13,4.158099);
   houtFV_stack_4->SetBinContent(14,2.627372);
   houtFV_stack_4->SetBinContent(15,1.858957);
   houtFV_stack_4->SetBinContent(16,2.612355);
   houtFV_stack_4->SetBinContent(17,1.413964);
   houtFV_stack_4->SetBinContent(18,2.687469);
   houtFV_stack_4->SetBinContent(19,2.709707);
   houtFV_stack_4->SetBinContent(20,1.194741);
   houtFV_stack_4->SetBinContent(21,20.04504);
   houtFV_stack_4->SetBinError(1,3.896008);
   houtFV_stack_4->SetBinError(2,1.436708);
   houtFV_stack_4->SetBinError(3,1.687235);
   houtFV_stack_4->SetBinError(4,1.664483);
   houtFV_stack_4->SetBinError(5,1.753313);
   houtFV_stack_4->SetBinError(6,1.362544);
   houtFV_stack_4->SetBinError(7,1.474651);
   houtFV_stack_4->SetBinError(8,1.324214);
   houtFV_stack_4->SetBinError(9,1.3318);
   houtFV_stack_4->SetBinError(10,2.092724);
   houtFV_stack_4->SetBinError(11,1.225699);
   houtFV_stack_4->SetBinError(12,1.022281);
   houtFV_stack_4->SetBinError(13,1.007667);
   houtFV_stack_4->SetBinError(14,0.8090899);
   houtFV_stack_4->SetBinError(15,0.6804124);
   houtFV_stack_4->SetBinError(16,0.8149767);
   houtFV_stack_4->SetBinError(17,0.6515799);
   houtFV_stack_4->SetBinError(18,0.8188122);
   houtFV_stack_4->SetBinError(19,0.8799546);
   houtFV_stack_4->SetBinError(20,0.5687405);
   houtFV_stack_4->SetBinError(21,2.264435);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.417779);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.639369);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.825557);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5185342);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5200845);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7810711);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7087103);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4265292);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.00319);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2466946);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3127395);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.07085396);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05725356);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1394787);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2890864);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1688855);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.565138);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1753155);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.540454);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9022303);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2406018);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3337031);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2975197);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2210759);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3492441);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2771876);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1958742);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4624925);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.09416474);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1483218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05101595);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04048438);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07135048);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2626723);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1062925);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3126491);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1499347);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3002205);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5646484);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08576084);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03485305);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1858842);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.0719066);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3015261);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07580944);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02641092);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1337076);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04420412);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,46.01805);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.389998);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.655786);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.487995);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.841017);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.265326);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.904123);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.185119);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.431298);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.202649);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.067709);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.297003);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.745056);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.447775);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.600122);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.000728);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8180381);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.323499);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9397286);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2563384);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.817576);
   hNCpi0inFVres_stack_7->SetBinError(1,2.296214);
   hNCpi0inFVres_stack_7->SetBinError(2,1.018951);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7420862);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7803322);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6117986);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7992914);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5702063);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8368479);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7505427);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6323987);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7121017);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4907793);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4921103);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3009671);
   hNCpi0inFVres_stack_7->SetBinError(15,0.417091);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2858927);
   hNCpi0inFVres_stack_7->SetBinError(17,0.266064);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4874554);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3754733);
   hNCpi0inFVres_stack_7->SetBinError(20,0.0942054);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8104487);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.65306);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.592213);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.949282);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.968156);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.947469);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.405377);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9782629);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.178461);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5162973);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.317621);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.33489);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5450747);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4578613);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5031479);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6385477);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4171226);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3532393);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.07152554);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1044799);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1705499);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.964963);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.351701);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4147361);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5058969);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7456119);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4247183);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5703977);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2467567);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.375157);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2029995);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4198347);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1087407);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2772167);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2316207);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2977223);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2410016);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1759676);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2669626);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.06431781);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.05325359);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1351859);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6866882);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,76.83952);
   hCCpi0inFV_stack_10->SetBinContent(2,9.889085);
   hCCpi0inFV_stack_10->SetBinContent(3,10.39311);
   hCCpi0inFV_stack_10->SetBinContent(4,9.728514);
   hCCpi0inFV_stack_10->SetBinContent(5,6.723955);
   hCCpi0inFV_stack_10->SetBinContent(6,5.749795);
   hCCpi0inFV_stack_10->SetBinContent(7,5.591153);
   hCCpi0inFV_stack_10->SetBinContent(8,6.035396);
   hCCpi0inFV_stack_10->SetBinContent(9,7.272687);
   hCCpi0inFV_stack_10->SetBinContent(10,7.214379);
   hCCpi0inFV_stack_10->SetBinContent(11,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(12,5.472055);
   hCCpi0inFV_stack_10->SetBinContent(13,2.694);
   hCCpi0inFV_stack_10->SetBinContent(14,3.863067);
   hCCpi0inFV_stack_10->SetBinContent(15,2.390778);
   hCCpi0inFV_stack_10->SetBinContent(16,2.539312);
   hCCpi0inFV_stack_10->SetBinContent(17,3.227512);
   hCCpi0inFV_stack_10->SetBinContent(18,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(19,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(20,2.289344);
   hCCpi0inFV_stack_10->SetBinContent(21,12.62722);
   hCCpi0inFV_stack_10->SetBinError(1,4.387488);
   hCCpi0inFV_stack_10->SetBinError(2,1.584795);
   hCCpi0inFV_stack_10->SetBinError(3,1.674692);
   hCCpi0inFV_stack_10->SetBinError(4,1.579022);
   hCCpi0inFV_stack_10->SetBinError(5,1.291514);
   hCCpi0inFV_stack_10->SetBinError(6,1.21597);
   hCCpi0inFV_stack_10->SetBinError(7,1.216509);
   hCCpi0inFV_stack_10->SetBinError(8,1.223445);
   hCCpi0inFV_stack_10->SetBinError(9,1.401963);
   hCCpi0inFV_stack_10->SetBinError(10,1.365222);
   hCCpi0inFV_stack_10->SetBinError(11,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(12,1.210867);
   hCCpi0inFV_stack_10->SetBinError(13,0.7598915);
   hCCpi0inFV_stack_10->SetBinError(14,1.001802);
   hCCpi0inFV_stack_10->SetBinError(15,0.7844693);
   hCCpi0inFV_stack_10->SetBinError(16,0.8333082);
   hCCpi0inFV_stack_10->SetBinError(17,0.8547095);
   hCCpi0inFV_stack_10->SetBinError(18,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(19,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(20,0.8330862);
   hCCpi0inFV_stack_10->SetBinError(21,1.796782);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,13.08317);
   hNCinFV_stack_11->SetBinContent(2,1.453786);
   hNCinFV_stack_11->SetBinContent(3,1.721475);
   hNCinFV_stack_11->SetBinContent(4,1.523642);
   hNCinFV_stack_11->SetBinContent(5,1.778766);
   hNCinFV_stack_11->SetBinContent(6,2.808966);
   hNCinFV_stack_11->SetBinContent(7,1.25474);
   hNCinFV_stack_11->SetBinContent(8,0.3694278);
   hNCinFV_stack_11->SetBinContent(9,0.8056002);
   hNCinFV_stack_11->SetBinContent(10,1.130129);
   hNCinFV_stack_11->SetBinContent(11,1.533318);
   hNCinFV_stack_11->SetBinContent(12,0.517966);
   hNCinFV_stack_11->SetBinContent(13,0.8226788);
   hNCinFV_stack_11->SetBinContent(14,1.080957);
   hNCinFV_stack_11->SetBinContent(15,0.9660043);
   hNCinFV_stack_11->SetBinContent(17,0.1290831);
   hNCinFV_stack_11->SetBinContent(20,0.1687492);
   hNCinFV_stack_11->SetBinContent(21,3.280486);
   hNCinFV_stack_11->SetBinError(1,1.850884);
   hNCinFV_stack_11->SetBinError(2,0.583599);
   hNCinFV_stack_11->SetBinError(3,0.7059022);
   hNCinFV_stack_11->SetBinError(4,0.621614);
   hNCinFV_stack_11->SetBinError(5,0.7086276);
   hNCinFV_stack_11->SetBinError(6,0.9534408);
   hNCinFV_stack_11->SetBinError(7,0.6778498);
   hNCinFV_stack_11->SetBinError(8,0.3694278);
   hNCinFV_stack_11->SetBinError(9,0.4173658);
   hNCinFV_stack_11->SetBinError(10,0.5780805);
   hNCinFV_stack_11->SetBinError(11,0.6813766);
   hNCinFV_stack_11->SetBinError(12,0.3838353);
   hNCinFV_stack_11->SetBinError(13,0.4894772);
   hNCinFV_stack_11->SetBinError(14,0.5606076);
   hNCinFV_stack_11->SetBinError(15,0.637582);
   hNCinFV_stack_11->SetBinError(17,0.129083);
   hNCinFV_stack_11->SetBinError(20,0.1687492);
   hNCinFV_stack_11->SetBinError(21,1.032438);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,34.86948);
   hnumuCCinFV_stack_12->SetBinContent(2,9.391858);
   hnumuCCinFV_stack_12->SetBinContent(3,5.393094);
   hnumuCCinFV_stack_12->SetBinContent(4,4.840677);
   hnumuCCinFV_stack_12->SetBinContent(5,6.782652);
   hnumuCCinFV_stack_12->SetBinContent(6,5.777892);
   hnumuCCinFV_stack_12->SetBinContent(7,3.009552);
   hnumuCCinFV_stack_12->SetBinContent(8,2.056147);
   hnumuCCinFV_stack_12->SetBinContent(9,1.993619);
   hnumuCCinFV_stack_12->SetBinContent(10,2.596775);
   hnumuCCinFV_stack_12->SetBinContent(11,2.432058);
   hnumuCCinFV_stack_12->SetBinContent(12,1.031864);
   hnumuCCinFV_stack_12->SetBinContent(13,1.987003);
   hnumuCCinFV_stack_12->SetBinContent(14,1.256021);
   hnumuCCinFV_stack_12->SetBinContent(15,1.551647);
   hnumuCCinFV_stack_12->SetBinContent(16,0.9252522);
   hnumuCCinFV_stack_12->SetBinContent(17,0.6203078);
   hnumuCCinFV_stack_12->SetBinContent(18,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8299595);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6330177);
   hnumuCCinFV_stack_12->SetBinContent(21,9.666481);
   hnumuCCinFV_stack_12->SetBinError(1,3.717627);
   hnumuCCinFV_stack_12->SetBinError(2,1.671998);
   hnumuCCinFV_stack_12->SetBinError(3,1.228204);
   hnumuCCinFV_stack_12->SetBinError(4,1.203104);
   hnumuCCinFV_stack_12->SetBinError(5,2.207944);
   hnumuCCinFV_stack_12->SetBinError(6,1.24151);
   hnumuCCinFV_stack_12->SetBinError(7,0.9108407);
   hnumuCCinFV_stack_12->SetBinError(8,0.6976706);
   hnumuCCinFV_stack_12->SetBinError(9,0.7326459);
   hnumuCCinFV_stack_12->SetBinError(10,0.8477778);
   hnumuCCinFV_stack_12->SetBinError(11,0.8516845);
   hnumuCCinFV_stack_12->SetBinError(12,0.5421739);
   hnumuCCinFV_stack_12->SetBinError(13,0.6941596);
   hnumuCCinFV_stack_12->SetBinError(14,0.6516043);
   hnumuCCinFV_stack_12->SetBinError(15,0.6505246);
   hnumuCCinFV_stack_12->SetBinError(16,0.4794006);
   hnumuCCinFV_stack_12->SetBinError(17,0.3591306);
   hnumuCCinFV_stack_12->SetBinError(18,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(19,0.4855919);
   hnumuCCinFV_stack_12->SetBinError(20,0.4644514);
   hnumuCCinFV_stack_12->SetBinError(21,1.91129);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,4.373322);
   hnueCCinFV_stack_13->SetBinContent(11,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.248059);
   hnueCCinFV_stack_13->SetBinError(11,0.3025491);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__23->SetBinContent(1,339.3702);
   hmcerror__23->SetBinContent(2,53.51796);
   hmcerror__23->SetBinContent(3,47.14728);
   hmcerror__23->SetBinContent(4,48.96243);
   hmcerror__23->SetBinContent(5,49.65819);
   hmcerror__23->SetBinContent(6,40.11807);
   hmcerror__23->SetBinContent(7,35.63805);
   hmcerror__23->SetBinContent(8,35.57955);
   hmcerror__23->SetBinContent(9,34.78412);
   hmcerror__23->SetBinContent(10,34.01045);
   hmcerror__23->SetBinContent(11,23.29169);
   hmcerror__23->SetBinContent(12,18.6292);
   hmcerror__23->SetBinContent(13,16.42144);
   hmcerror__23->SetBinContent(14,12.66841);
   hmcerror__23->SetBinContent(15,13.91065);
   hmcerror__23->SetBinContent(16,9.311587);
   hmcerror__23->SetBinContent(17,11.35211);
   hmcerror__23->SetBinContent(18,8.476911);
   hmcerror__23->SetBinContent(19,8.826412);
   hmcerror__23->SetBinContent(20,8.150446);
   hmcerror__23->SetBinContent(21,83.73908);
   hmcerror__23->SetBinError(1,71.00891);
   hmcerror__23->SetBinError(2,23.01486);
   hmcerror__23->SetBinError(3,17.71103);
   hmcerror__23->SetBinError(4,18.00693);
   hmcerror__23->SetBinError(5,21.62234);
   hmcerror__23->SetBinError(6,17.44658);
   hmcerror__23->SetBinError(7,11.87684);
   hmcerror__23->SetBinError(8,11.8683);
   hmcerror__23->SetBinError(9,18.08226);
   hmcerror__23->SetBinError(10,16.58044);
   hmcerror__23->SetBinError(11,12.57194);
   hmcerror__23->SetBinError(12,10.10879);
   hmcerror__23->SetBinError(13,9.277202);
   hmcerror__23->SetBinError(14,9.600512);
   hmcerror__23->SetBinError(15,8.805651);
   hmcerror__23->SetBinError(16,7.948916);
   hmcerror__23->SetBinError(17,6.321013);
   hmcerror__23->SetBinError(18,6.665561);
   hmcerror__23->SetBinError(19,6.443165);
   hmcerror__23->SetBinError(20,6.05339);
   hmcerror__23->SetBinError(21,23.67427);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
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
   Double_t _fy3029[20] = {
   350,
   46,
   51,
   53,
   42,
   19,
   21,
   22,
   33,
   34,
   21,
   18,
   9,
   14,
   15,
   12,
   7,
   11,
   11,
   9};
   Double_t _felx3029[20] = {
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
   Double_t _fely3029[20] = {
   18.70829,
   6.9153,
   7.2725,
   7.4105,
   6.6155,
   4.5151,
   4.7354,
   4.8417,
   5.8847,
   5.9703,
   4.7354,
   4.4008,
   3.19354,
   3.9102,
   4.0385,
   3.64022,
   2.85954,
   3.4975,
   3.4975,
   3.19354};
   Double_t _fehx3029[20] = {
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
   Double_t _fehy3029[20] = {
   18.70829,
   6.7108,
   7.0686,
   7.2068,
   6.4104,
   4.3011,
   4.5229,
   4.6299,
   5.6776,
   5.7635,
   4.5229,
   4.1858,
   2.9582,
   3.6898,
   3.8197,
   3.4155,
   2.61053,
   3.27,
   3.27,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,55);
   Graph_Graph3029->SetMinimum(3.726414);
   Graph_Graph3029->SetMaximum(405.1651);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 798.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 27.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 176.7","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 172.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.1","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  110.9","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  31.1","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 174.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.1","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 88.4","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.7","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[20] = {
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
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[20] = {
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
   Double_t _fely3030[20] = {
   0.2092373,
   0.4300399,
   0.3756533,
   0.3677703,
   0.4354235,
   0.4348808,
   0.3332629,
   0.3335708,
   0.5198425,
   0.4875101,
   0.5397608,
   0.5426315,
   0.5649445,
   0.7578306,
   0.633015,
   0.8536585,
   0.5568138,
   0.7863196,
   0.7299868,
   0.7427065};
   Double_t _fehx3030[20] = {
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
   Double_t _fehy3030[20] = {
   0.2092373,
   0.4300399,
   0.3756533,
   0.3677703,
   0.4354235,
   0.4348808,
   0.3332629,
   0.3335708,
   0.5198425,
   0.4875101,
   0.5397608,
   0.5426315,
   0.5649445,
   0.7578306,
   0.633015,
   0.8536585,
   0.5568138,
   0.7863196,
   0.7299868,
   0.7427065};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,55);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   0.1784527,
   0.2003124,
   0.2008329,
   0.1928821,
   0.1827399,
   0.1999295,
   0.1819155,
   0.1842439,
   0.1892178,
   0.1982409,
   0.212471,
   0.2406336,
   0.2297965,
   0.2603101,
   0.2292632,
   0.3037623,
   0.2190654,
   0.2544817,
   0.2618095,
   0.2929024};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   0.1784527,
   0.2003124,
   0.2008329,
   0.1928821,
   0.1827399,
   0.1999295,
   0.1819155,
   0.1842439,
   0.1892178,
   0.1982409,
   0.212471,
   0.2406336,
   0.2297965,
   0.2603101,
   0.2292632,
   0.3037623,
   0.2190654,
   0.2544817,
   0.2618095,
   0.2929024};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,55);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
   1.031322,
   0.8595245,
   1.081717,
   1.082463,
   0.845782,
   0.473602,
   0.5892578,
   0.6183328,
   0.9487087,
   0.9996927,
   0.9016089,
   0.9662249,
   0.548064,
   1.105111,
   1.07831,
   1.288717,
   0.6166253,
   1.297643,
   1.246259,
   1.104234};
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0.05512649,
   0.1292146,
   0.1542507,
   0.1513508,
   0.1332207,
   0.1125453,
   0.1328748,
   0.136081,
   0.1691778,
   0.1755431,
   0.2033085,
   0.2362312,
   0.1944738,
   0.3086574,
   0.2903171,
   0.3909344,
   0.251895,
   0.4125914,
   0.3962539,
   0.391824};
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
   0.05512649,
   0.1253934,
   0.1499259,
   0.1471904,
   0.1290905,
   0.107211,
   0.1269121,
   0.1301281,
   0.1632239,
   0.1694626,
   0.1941851,
   0.2246902,
   0.1801425,
   0.2912598,
   0.2745882,
   0.366801,
   0.2299598,
   0.3857537,
   0.370479,
   0.3629495};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,55);
   Graph_Graph3032->SetMinimum(0.2206096);
   Graph_Graph3032->SetMaximum(1.816377);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

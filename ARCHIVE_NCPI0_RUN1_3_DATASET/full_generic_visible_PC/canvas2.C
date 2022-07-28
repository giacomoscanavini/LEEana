#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  1 13:33:35 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-230.7692,-399.2,1692.308,42042.06);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hmc__4->SetBinContent(1,5773.651);
   hmc__4->SetBinContent(2,17390.04);
   hmc__4->SetBinContent(3,19703.92);
   hmc__4->SetBinContent(4,18669.22);
   hmc__4->SetBinContent(5,16245.65);
   hmc__4->SetBinContent(6,13710.16);
   hmc__4->SetBinContent(7,11301.93);
   hmc__4->SetBinContent(8,8889.09);
   hmc__4->SetBinContent(9,6770.827);
   hmc__4->SetBinContent(10,4987.397);
   hmc__4->SetBinContent(11,3732.71);
   hmc__4->SetBinContent(12,2803.298);
   hmc__4->SetBinContent(13,2141.501);
   hmc__4->SetBinContent(14,1630.062);
   hmc__4->SetBinContent(15,1274.736);
   hmc__4->SetBinContent(16,972.2685);
   hmc__4->SetBinContent(17,764.9053);
   hmc__4->SetBinContent(18,602.5844);
   hmc__4->SetBinContent(19,481.0889);
   hmc__4->SetBinContent(20,429.4294);
   hmc__4->SetBinContent(21,2791.072);
   hmc__4->SetBinError(1,761.064);
   hmc__4->SetBinError(2,2356.845);
   hmc__4->SetBinError(3,2582.327);
   hmc__4->SetBinError(4,2427.861);
   hmc__4->SetBinError(5,2136.374);
   hmc__4->SetBinError(6,1863.217);
   hmc__4->SetBinError(7,1582.449);
   hmc__4->SetBinError(8,1316.83);
   hmc__4->SetBinError(9,1148.008);
   hmc__4->SetBinError(10,956.9971);
   hmc__4->SetBinError(11,694.8937);
   hmc__4->SetBinError(12,569.6318);
   hmc__4->SetBinError(13,462.8235);
   hmc__4->SetBinError(14,407.6156);
   hmc__4->SetBinError(15,250.4126);
   hmc__4->SetBinError(16,272.7553);
   hmc__4->SetBinError(17,206.471);
   hmc__4->SetBinError(18,143.5891);
   hmc__4->SetBinError(19,114.9442);
   hmc__4->SetBinError(20,112.6427);
   hmc__4->SetBinError(21,582.8551);
   hmc__4->SetMinimum(-399.2);
   hmc__4->SetMaximum(39920);
   hmc__4->SetEntries(125394.8);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(20689.11);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,650.7608);
   hbadmatch_stack_1->SetBinContent(2,943.7599);
   hbadmatch_stack_1->SetBinContent(3,624.8862);
   hbadmatch_stack_1->SetBinContent(4,435.331);
   hbadmatch_stack_1->SetBinContent(5,260.9321);
   hbadmatch_stack_1->SetBinContent(6,178.3141);
   hbadmatch_stack_1->SetBinContent(7,121.089);
   hbadmatch_stack_1->SetBinContent(8,90.92152);
   hbadmatch_stack_1->SetBinContent(9,53.8163);
   hbadmatch_stack_1->SetBinContent(10,31.46996);
   hbadmatch_stack_1->SetBinContent(11,25.2253);
   hbadmatch_stack_1->SetBinContent(12,19.95141);
   hbadmatch_stack_1->SetBinContent(13,11.15501);
   hbadmatch_stack_1->SetBinContent(14,7.97036);
   hbadmatch_stack_1->SetBinContent(15,3.180995);
   hbadmatch_stack_1->SetBinContent(16,4.660588);
   hbadmatch_stack_1->SetBinContent(17,1.748346);
   hbadmatch_stack_1->SetBinContent(18,2.028837);
   hbadmatch_stack_1->SetBinContent(19,1.555727);
   hbadmatch_stack_1->SetBinContent(20,4.344836);
   hbadmatch_stack_1->SetBinContent(21,30.30707);
   hbadmatch_stack_1->SetBinError(1,16.39387);
   hbadmatch_stack_1->SetBinError(2,18.35415);
   hbadmatch_stack_1->SetBinError(3,15.67655);
   hbadmatch_stack_1->SetBinError(4,14.51467);
   hbadmatch_stack_1->SetBinError(5,10.02803);
   hbadmatch_stack_1->SetBinError(6,8.746359);
   hbadmatch_stack_1->SetBinError(7,6.736229);
   hbadmatch_stack_1->SetBinError(8,5.475062);
   hbadmatch_stack_1->SetBinError(9,4.283429);
   hbadmatch_stack_1->SetBinError(10,3.072332);
   hbadmatch_stack_1->SetBinError(11,2.895013);
   hbadmatch_stack_1->SetBinError(12,2.584523);
   hbadmatch_stack_1->SetBinError(13,1.763012);
   hbadmatch_stack_1->SetBinError(14,1.570651);
   hbadmatch_stack_1->SetBinError(15,0.9407497);
   hbadmatch_stack_1->SetBinError(16,1.285758);
   hbadmatch_stack_1->SetBinError(17,0.6319724);
   hbadmatch_stack_1->SetBinError(18,0.7421321);
   hbadmatch_stack_1->SetBinError(19,0.6526074);
   hbadmatch_stack_1->SetBinError(20,2.415164);
   hbadmatch_stack_1->SetBinError(21,4.214366);
   hbadmatch_stack_1->SetEntries(13347);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,2224.867);
   hext_stack_2->SetBinContent(2,3621.959);
   hext_stack_2->SetBinContent(3,3261.99);
   hext_stack_2->SetBinContent(4,2694.458);
   hext_stack_2->SetBinContent(5,2163.502);
   hext_stack_2->SetBinContent(6,1897.666);
   hext_stack_2->SetBinContent(7,1789.157);
   hext_stack_2->SetBinContent(8,1365.952);
   hext_stack_2->SetBinContent(9,906.7349);
   hext_stack_2->SetBinContent(10,568.9805);
   hext_stack_2->SetBinContent(11,402.6572);
   hext_stack_2->SetBinContent(12,290.3973);
   hext_stack_2->SetBinContent(13,233.8912);
   hext_stack_2->SetBinContent(14,179.731);
   hext_stack_2->SetBinContent(15,137.9801);
   hext_stack_2->SetBinContent(16,103.1402);
   hext_stack_2->SetBinContent(17,78.94786);
   hext_stack_2->SetBinContent(18,67.35567);
   hext_stack_2->SetBinContent(19,53.45917);
   hext_stack_2->SetBinContent(20,47.66191);
   hext_stack_2->SetBinContent(21,746.6033);
   hext_stack_2->SetBinError(1,32.78577);
   hext_stack_2->SetBinError(2,41.41868);
   hext_stack_2->SetBinError(3,39.06229);
   hext_stack_2->SetBinError(4,35.07235);
   hext_stack_2->SetBinError(5,31.61805);
   hext_stack_2->SetBinError(6,29.7356);
   hext_stack_2->SetBinError(7,29.09178);
   hext_stack_2->SetBinError(8,25.60111);
   hext_stack_2->SetBinError(9,20.97879);
   hext_stack_2->SetBinError(10,16.55566);
   hext_stack_2->SetBinError(11,13.98466);
   hext_stack_2->SetBinError(12,11.72203);
   hext_stack_2->SetBinError(13,10.60452);
   hext_stack_2->SetBinError(14,9.265139);
   hext_stack_2->SetBinError(15,8.0386);
   hext_stack_2->SetBinError(16,6.85665);
   hext_stack_2->SetBinError(17,5.98506);
   hext_stack_2->SetBinError(18,5.56314);
   hext_stack_2->SetBinError(19,4.697778);
   hext_stack_2->SetBinError(20,4.594115);
   hext_stack_2->SetBinError(21,18.71385);
   hext_stack_2->SetEntries(52689);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,704.1707);
   hdirt_stack_3->SetBinContent(2,1217.4);
   hdirt_stack_3->SetBinContent(3,903.0032);
   hdirt_stack_3->SetBinContent(4,570.0332);
   hdirt_stack_3->SetBinContent(5,372.9133);
   hdirt_stack_3->SetBinContent(6,278.5676);
   hdirt_stack_3->SetBinContent(7,199.4458);
   hdirt_stack_3->SetBinContent(8,139.3234);
   hdirt_stack_3->SetBinContent(9,105.085);
   hdirt_stack_3->SetBinContent(10,80.63474);
   hdirt_stack_3->SetBinContent(11,71.95443);
   hdirt_stack_3->SetBinContent(12,47.07146);
   hdirt_stack_3->SetBinContent(13,45.80283);
   hdirt_stack_3->SetBinContent(14,37.54167);
   hdirt_stack_3->SetBinContent(15,30.34995);
   hdirt_stack_3->SetBinContent(16,25.80308);
   hdirt_stack_3->SetBinContent(17,23.79878);
   hdirt_stack_3->SetBinContent(18,14.91616);
   hdirt_stack_3->SetBinContent(19,15.50813);
   hdirt_stack_3->SetBinContent(20,15.84722);
   hdirt_stack_3->SetBinContent(21,100.9602);
   hdirt_stack_3->SetBinError(1,16.45166);
   hdirt_stack_3->SetBinError(2,22.13852);
   hdirt_stack_3->SetBinError(3,19.93997);
   hdirt_stack_3->SetBinError(4,15.12863);
   hdirt_stack_3->SetBinError(5,11.69668);
   hdirt_stack_3->SetBinError(6,10.99293);
   hdirt_stack_3->SetBinError(7,9.082583);
   hdirt_stack_3->SetBinError(8,7.351006);
   hdirt_stack_3->SetBinError(9,6.007619);
   hdirt_stack_3->SetBinError(10,5.300433);
   hdirt_stack_3->SetBinError(11,5.72287);
   hdirt_stack_3->SetBinError(12,4.443909);
   hdirt_stack_3->SetBinError(13,4.275791);
   hdirt_stack_3->SetBinError(14,4.640295);
   hdirt_stack_3->SetBinError(15,3.738921);
   hdirt_stack_3->SetBinError(16,3.383255);
   hdirt_stack_3->SetBinError(17,2.984111);
   hdirt_stack_3->SetBinError(18,2.035403);
   hdirt_stack_3->SetBinError(19,2.329879);
   hdirt_stack_3->SetBinError(20,2.921652);
   hdirt_stack_3->SetBinError(21,6.750204);
   hdirt_stack_3->SetEntries(20115);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,656.604);
   houtFV_stack_4->SetBinContent(2,2072.468);
   houtFV_stack_4->SetBinContent(3,1737.576);
   houtFV_stack_4->SetBinContent(4,1309.124);
   houtFV_stack_4->SetBinContent(5,884.7266);
   houtFV_stack_4->SetBinContent(6,655.3439);
   houtFV_stack_4->SetBinContent(7,473.3115);
   houtFV_stack_4->SetBinContent(8,385.8926);
   houtFV_stack_4->SetBinContent(9,283.9597);
   houtFV_stack_4->SetBinContent(10,206.0353);
   houtFV_stack_4->SetBinContent(11,175.8656);
   houtFV_stack_4->SetBinContent(12,128.0572);
   houtFV_stack_4->SetBinContent(13,103.5073);
   houtFV_stack_4->SetBinContent(14,86.40198);
   houtFV_stack_4->SetBinContent(15,58.48502);
   houtFV_stack_4->SetBinContent(16,44.70785);
   houtFV_stack_4->SetBinContent(17,40.0015);
   houtFV_stack_4->SetBinContent(18,26.42375);
   houtFV_stack_4->SetBinContent(19,18.57701);
   houtFV_stack_4->SetBinContent(20,26.22724);
   houtFV_stack_4->SetBinContent(21,96.16428);
   houtFV_stack_4->SetBinError(1,14.0116);
   houtFV_stack_4->SetBinError(2,25.87758);
   houtFV_stack_4->SetBinError(3,24.21743);
   houtFV_stack_4->SetBinError(4,21.33578);
   houtFV_stack_4->SetBinError(5,17.46784);
   houtFV_stack_4->SetBinError(6,16.06475);
   houtFV_stack_4->SetBinError(7,14.1996);
   houtFV_stack_4->SetBinError(8,13.6668);
   houtFV_stack_4->SetBinError(9,12.01607);
   houtFV_stack_4->SetBinError(10,9.973616);
   houtFV_stack_4->SetBinError(11,9.550704);
   houtFV_stack_4->SetBinError(12,7.27785);
   houtFV_stack_4->SetBinError(13,7.006587);
   houtFV_stack_4->SetBinError(14,7.022402);
   houtFV_stack_4->SetBinError(15,5.34458);
   houtFV_stack_4->SetBinError(16,3.754126);
   houtFV_stack_4->SetBinError(17,4.322132);
   houtFV_stack_4->SetBinError(18,3.409111);
   houtFV_stack_4->SetBinError(19,3.136956);
   houtFV_stack_4->SetBinError(20,5.065333);
   houtFV_stack_4->SetBinError(21,6.395409);
   houtFV_stack_4->SetEntries(37487);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.225776);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.237263);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,6.121086);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.379899);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.858266);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.620952);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.825462);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.12929);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.42274);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.161258);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7112858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.130122);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3278522);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9346587);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8155754);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7077993);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5392643);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5689419);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4046334);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3424653);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3891893);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4420431);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2436282);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3695249);
   hNCpi0inFVcoh_stack_5->SetEntries(638);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,73.02456);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,280.7342);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,252.8892);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,198.6518);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,124.4477);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,89.54625);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,65.38309);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,48.07467);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,30.66272);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,24.81648);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,22.25817);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,14.34947);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,12.56219);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,7.949708);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,8.396444);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,6.874226);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,5.229417);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,4.561838);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,3.330901);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,5.117182);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,22.49681);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.795831);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,5.421341);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,5.136521);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.690217);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.602007);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.118979);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.658868);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.417321);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.78567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.606062);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.653252);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.274816);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.179947);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.9344502);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.9752792);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.8932803);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.7440549);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.7220455);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.5152733);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.7686929);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.635044);
   hNCpi0inFVnoncoh_stack_6->SetEntries(23937);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,35.8518);
   hCCpi0inFV_stack_7->SetBinContent(2,391.4841);
   hCCpi0inFV_stack_7->SetBinContent(3,809.2943);
   hCCpi0inFV_stack_7->SetBinContent(4,1019.793);
   hCCpi0inFV_stack_7->SetBinContent(5,1096.367);
   hCCpi0inFV_stack_7->SetBinContent(6,1026.744);
   hCCpi0inFV_stack_7->SetBinContent(7,908.916);
   hCCpi0inFV_stack_7->SetBinContent(8,760.1548);
   hCCpi0inFV_stack_7->SetBinContent(9,642.08);
   hCCpi0inFV_stack_7->SetBinContent(10,499.4534);
   hCCpi0inFV_stack_7->SetBinContent(11,399.252);
   hCCpi0inFV_stack_7->SetBinContent(12,334.1285);
   hCCpi0inFV_stack_7->SetBinContent(13,267.8785);
   hCCpi0inFV_stack_7->SetBinContent(14,216.2641);
   hCCpi0inFV_stack_7->SetBinContent(15,178.5228);
   hCCpi0inFV_stack_7->SetBinContent(16,153.9461);
   hCCpi0inFV_stack_7->SetBinContent(17,123.3712);
   hCCpi0inFV_stack_7->SetBinContent(18,114.6741);
   hCCpi0inFV_stack_7->SetBinContent(19,86.19113);
   hCCpi0inFV_stack_7->SetBinContent(20,85.47624);
   hCCpi0inFV_stack_7->SetBinContent(21,612.8345);
   hCCpi0inFV_stack_7->SetBinError(1,3.003518);
   hCCpi0inFV_stack_7->SetBinError(2,10.0114);
   hCCpi0inFV_stack_7->SetBinError(3,14.2883);
   hCCpi0inFV_stack_7->SetBinError(4,16.0267);
   hCCpi0inFV_stack_7->SetBinError(5,16.62337);
   hCCpi0inFV_stack_7->SetBinError(6,16.07036);
   hCCpi0inFV_stack_7->SetBinError(7,15.20419);
   hCCpi0inFV_stack_7->SetBinError(8,13.83064);
   hCCpi0inFV_stack_7->SetBinError(9,12.74499);
   hCCpi0inFV_stack_7->SetBinError(10,11.19765);
   hCCpi0inFV_stack_7->SetBinError(11,10.07417);
   hCCpi0inFV_stack_7->SetBinError(12,9.159867);
   hCCpi0inFV_stack_7->SetBinError(13,8.249995);
   hCCpi0inFV_stack_7->SetBinError(14,7.366749);
   hCCpi0inFV_stack_7->SetBinError(15,6.675227);
   hCCpi0inFV_stack_7->SetBinError(16,6.222258);
   hCCpi0inFV_stack_7->SetBinError(17,5.612592);
   hCCpi0inFV_stack_7->SetBinError(18,5.353451);
   hCCpi0inFV_stack_7->SetBinError(19,4.692802);
   hCCpi0inFV_stack_7->SetBinError(20,4.630433);
   hCCpi0inFV_stack_7->SetBinError(21,12.47412);
   hCCpi0inFV_stack_7->SetEntries(41686);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,158.7625);
   hNCinFV_stack_8->SetBinContent(2,763.7964);
   hNCinFV_stack_8->SetBinContent(3,624.7247);
   hNCinFV_stack_8->SetBinContent(4,395.7145);
   hNCinFV_stack_8->SetBinContent(5,252.0467);
   hNCinFV_stack_8->SetBinContent(6,168.1053);
   hNCinFV_stack_8->SetBinContent(7,99.22928);
   hNCinFV_stack_8->SetBinContent(8,64.02187);
   hNCinFV_stack_8->SetBinContent(9,44.70095);
   hNCinFV_stack_8->SetBinContent(10,24.87807);
   hNCinFV_stack_8->SetBinContent(11,26.29034);
   hNCinFV_stack_8->SetBinContent(12,16.47496);
   hNCinFV_stack_8->SetBinContent(13,12.8212);
   hNCinFV_stack_8->SetBinContent(14,10.40999);
   hNCinFV_stack_8->SetBinContent(15,7.032254);
   hNCinFV_stack_8->SetBinContent(16,7.219434);
   hNCinFV_stack_8->SetBinContent(17,6.110383);
   hNCinFV_stack_8->SetBinContent(18,3.819349);
   hNCinFV_stack_8->SetBinContent(19,3.126077);
   hNCinFV_stack_8->SetBinContent(20,1.566961);
   hNCinFV_stack_8->SetBinContent(21,11.6625);
   hNCinFV_stack_8->SetBinError(1,6.319746);
   hNCinFV_stack_8->SetBinError(2,13.78783);
   hNCinFV_stack_8->SetBinError(3,12.56626);
   hNCinFV_stack_8->SetBinError(4,9.87566);
   hNCinFV_stack_8->SetBinError(5,7.944592);
   hNCinFV_stack_8->SetBinError(6,6.496144);
   hNCinFV_stack_8->SetBinError(7,4.99674);
   hNCinFV_stack_8->SetBinError(8,4.081506);
   hNCinFV_stack_8->SetBinError(9,3.341492);
   hNCinFV_stack_8->SetBinError(10,2.490582);
   hNCinFV_stack_8->SetBinError(11,2.574275);
   hNCinFV_stack_8->SetBinError(12,1.991398);
   hNCinFV_stack_8->SetBinError(13,1.772385);
   hNCinFV_stack_8->SetBinError(14,1.606449);
   hNCinFV_stack_8->SetBinError(15,1.330593);
   hNCinFV_stack_8->SetBinError(16,1.415566);
   hNCinFV_stack_8->SetBinError(17,1.241763);
   hNCinFV_stack_8->SetBinError(18,0.9204789);
   hNCinFV_stack_8->SetBinError(19,0.8995382);
   hNCinFV_stack_8->SetBinError(20,0.5540095);
   hNCinFV_stack_8->SetBinError(21,1.766226);
   hNCinFV_stack_8->SetEntries(11587);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,1266.552);
   hnumuCCinFV_stack_9->SetBinContent(2,8074.335);
   hnumuCCinFV_stack_9->SetBinContent(3,11456.74);
   hnumuCCinFV_stack_9->SetBinContent(4,12016.23);
   hnumuCCinFV_stack_9->SetBinContent(5,11059.8);
   hnumuCCinFV_stack_9->SetBinContent(6,9375.544);
   hnumuCCinFV_stack_9->SetBinContent(7,7620.552);
   hnumuCCinFV_stack_9->SetBinContent(8,6006.571);
   hnumuCCinFV_stack_9->SetBinContent(9,4674.387);
   hnumuCCinFV_stack_9->SetBinContent(10,3524.064);
   hnumuCCinFV_stack_9->SetBinContent(11,2590.626);
   hnumuCCinFV_stack_9->SetBinContent(12,1935.88);
   hnumuCCinFV_stack_9->SetBinContent(13,1438.304);
   hnumuCCinFV_stack_9->SetBinContent(14,1067.774);
   hnumuCCinFV_stack_9->SetBinContent(15,840.9855);
   hnumuCCinFV_stack_9->SetBinContent(16,611.603);
   hnumuCCinFV_stack_9->SetBinContent(17,474.8997);
   hnumuCCinFV_stack_9->SetBinContent(18,356.2926);
   hnumuCCinFV_stack_9->SetBinContent(19,293.2814);
   hnumuCCinFV_stack_9->SetBinContent(20,237.7238);
   hnumuCCinFV_stack_9->SetBinContent(21,1092.363);
   hnumuCCinFV_stack_9->SetBinError(1,23.40298);
   hnumuCCinFV_stack_9->SetBinError(2,63.66968);
   hnumuCCinFV_stack_9->SetBinError(3,75.65988);
   hnumuCCinFV_stack_9->SetBinError(4,76.68605);
   hnumuCCinFV_stack_9->SetBinError(5,73.41399);
   hnumuCCinFV_stack_9->SetBinError(6,67.58039);
   hnumuCCinFV_stack_9->SetBinError(7,60.73886);
   hnumuCCinFV_stack_9->SetBinError(8,54.05105);
   hnumuCCinFV_stack_9->SetBinError(9,48.75222);
   hnumuCCinFV_stack_9->SetBinError(10,42.20947);
   hnumuCCinFV_stack_9->SetBinError(11,37.01966);
   hnumuCCinFV_stack_9->SetBinError(12,31.74861);
   hnumuCCinFV_stack_9->SetBinError(13,28.48154);
   hnumuCCinFV_stack_9->SetBinError(14,23.85691);
   hnumuCCinFV_stack_9->SetBinError(15,22.63795);
   hnumuCCinFV_stack_9->SetBinError(16,19.41637);
   hnumuCCinFV_stack_9->SetBinError(17,16.40447);
   hnumuCCinFV_stack_9->SetBinError(18,13.97786);
   hnumuCCinFV_stack_9->SetBinError(19,12.38813);
   hnumuCCinFV_stack_9->SetBinError(20,12.34035);
   hnumuCCinFV_stack_9->SetBinError(21,24.32712);
   hnumuCCinFV_stack_9->SetEntries(308279);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,1.831736);
   hnueCCinFV_stack_10->SetBinContent(2,16.86511);
   hnueCCinFV_stack_10->SetBinContent(3,26.69381);
   hnueCCinFV_stack_10->SetBinContent(4,24.50574);
   hnueCCinFV_stack_10->SetBinContent(5,28.0621);
   hnueCCinFV_stack_10->SetBinContent(6,37.71092);
   hnueCCinFV_stack_10->SetBinContent(7,23.02047);
   hnueCCinFV_stack_10->SetBinContent(8,27.04846);
   hnueCCinFV_stack_10->SetBinContent(9,27.97815);
   hnueCCinFV_stack_10->SetBinContent(10,25.9034);
   hnueCCinFV_stack_10->SetBinContent(11,17.86916);
   hnueCCinFV_stack_10->SetBinContent(12,16.56951);
   hnueCCinFV_stack_10->SetBinContent(13,14.92344);
   hnueCCinFV_stack_10->SetBinContent(14,15.46186);
   hnueCCinFV_stack_10->SetBinContent(15,9.63579);
   hnueCCinFV_stack_10->SetBinContent(16,13.78444);
   hnueCCinFV_stack_10->SetBinContent(17,10.51967);
   hnueCCinFV_stack_10->SetBinContent(18,12.42844);
   hnueCCinFV_stack_10->SetBinContent(19,6.059363);
   hnueCCinFV_stack_10->SetBinContent(20,5.408198);
   hnueCCinFV_stack_10->SetBinContent(21,76.54996);
   hnueCCinFV_stack_10->SetBinError(1,0.7813987);
   hnueCCinFV_stack_10->SetBinError(2,2.77165);
   hnueCCinFV_stack_10->SetBinError(3,3.69551);
   hnueCCinFV_stack_10->SetBinError(4,3.015245);
   hnueCCinFV_stack_10->SetBinError(5,3.463305);
   hnueCCinFV_stack_10->SetBinError(6,4.005641);
   hnueCCinFV_stack_10->SetBinError(7,2.56035);
   hnueCCinFV_stack_10->SetBinError(8,3.432317);
   hnueCCinFV_stack_10->SetBinError(9,3.997752);
   hnueCCinFV_stack_10->SetBinError(10,3.778632);
   hnueCCinFV_stack_10->SetBinError(11,2.619466);
   hnueCCinFV_stack_10->SetBinError(12,2.423385);
   hnueCCinFV_stack_10->SetBinError(13,2.195504);
   hnueCCinFV_stack_10->SetBinError(14,3.350176);
   hnueCCinFV_stack_10->SetBinError(15,1.8398);
   hnueCCinFV_stack_10->SetBinError(16,4.268412);
   hnueCCinFV_stack_10->SetBinError(17,2.005705);
   hnueCCinFV_stack_10->SetBinError(18,2.654232);
   hnueCCinFV_stack_10->SetBinError(19,1.326878);
   hnueCCinFV_stack_10->SetBinError(20,1.27623);
   hnueCCinFV_stack_10->SetBinError(21,6.685923);
   hnueCCinFV_stack_10->SetEntries(1603);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_PC_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__5->SetBinContent(1,5773.651);
   hmcerror__5->SetBinContent(2,17390.04);
   hmcerror__5->SetBinContent(3,19703.92);
   hmcerror__5->SetBinContent(4,18669.22);
   hmcerror__5->SetBinContent(5,16245.65);
   hmcerror__5->SetBinContent(6,13710.16);
   hmcerror__5->SetBinContent(7,11301.93);
   hmcerror__5->SetBinContent(8,8889.09);
   hmcerror__5->SetBinContent(9,6770.827);
   hmcerror__5->SetBinContent(10,4987.397);
   hmcerror__5->SetBinContent(11,3732.71);
   hmcerror__5->SetBinContent(12,2803.298);
   hmcerror__5->SetBinContent(13,2141.501);
   hmcerror__5->SetBinContent(14,1630.062);
   hmcerror__5->SetBinContent(15,1274.736);
   hmcerror__5->SetBinContent(16,972.2685);
   hmcerror__5->SetBinContent(17,764.9053);
   hmcerror__5->SetBinContent(18,602.5844);
   hmcerror__5->SetBinContent(19,481.0889);
   hmcerror__5->SetBinContent(20,429.4294);
   hmcerror__5->SetBinContent(21,2791.072);
   hmcerror__5->SetBinError(1,761.064);
   hmcerror__5->SetBinError(2,2356.845);
   hmcerror__5->SetBinError(3,2582.327);
   hmcerror__5->SetBinError(4,2427.861);
   hmcerror__5->SetBinError(5,2136.374);
   hmcerror__5->SetBinError(6,1863.217);
   hmcerror__5->SetBinError(7,1582.449);
   hmcerror__5->SetBinError(8,1316.83);
   hmcerror__5->SetBinError(9,1148.008);
   hmcerror__5->SetBinError(10,956.9971);
   hmcerror__5->SetBinError(11,694.8937);
   hmcerror__5->SetBinError(12,569.6318);
   hmcerror__5->SetBinError(13,462.8235);
   hmcerror__5->SetBinError(14,407.6156);
   hmcerror__5->SetBinError(15,250.4126);
   hmcerror__5->SetBinError(16,272.7553);
   hmcerror__5->SetBinError(17,206.471);
   hmcerror__5->SetBinError(18,143.5891);
   hmcerror__5->SetBinError(19,114.9442);
   hmcerror__5->SetBinError(20,112.6427);
   hmcerror__5->SetBinError(21,582.8551);
   hmcerror__5->SetEntries(125394.8);

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
   
   Double_t _fx3005[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3005[20] = {
   5354,
   17251,
   19960,
   19538,
   17028,
   13996,
   11343,
   8636,
   6327,
   4711,
   3556,
   2579,
   1898,
   1381,
   1063,
   830,
   644,
   490,
   434,
   324};
   Double_t _felx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3005[20] = {
   73.17103,
   131.3431,
   141.2799,
   139.7784,
   130.4914,
   118.3047,
   106.5035,
   92.93008,
   79.54244,
   68.63672,
   59.63221,
   50.78386,
   43.56604,
   37.16181,
   32.60368,
   28.80972,
   25.37716,
   22.13594,
   20.83267,
   18};
   Double_t _fehx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3005[20] = {
   73.17103,
   131.3431,
   141.2799,
   139.7784,
   130.4914,
   118.3047,
   106.5035,
   92.93008,
   79.54244,
   68.63672,
   59.63221,
   50.78386,
   43.56604,
   37.16181,
   32.60368,
   28.80972,
   25.37716,
   22.13594,
   20.83267,
   18};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(275.4);
   Graph_Graph3005->SetMaximum(22080.81);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.99#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 137343.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3473.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 22090.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4899.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9373.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  34.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1278.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9149.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 2690.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 84922.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 362.3","F");

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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3006[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3006[20] = {
   0.1318168,
   0.1355284,
   0.1310565,
   0.1300462,
   0.1315043,
   0.1359005,
   0.1400159,
   0.14814,
   0.169552,
   0.1918831,
   0.1861633,
   0.2032006,
   0.2161211,
   0.2500613,
   0.1964427,
   0.2805349,
   0.2699302,
   0.2382888,
   0.2389251,
   0.2623079};
   Double_t _fehx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3006[20] = {
   0.1318168,
   0.1355284,
   0.1310565,
   0.1300462,
   0.1315043,
   0.1359005,
   0.1400159,
   0.14814,
   0.169552,
   0.1918831,
   0.1861633,
   0.2032006,
   0.2161211,
   0.2500613,
   0.1964427,
   0.2805349,
   0.2699302,
   0.2382888,
   0.2389251,
   0.2623079};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   
   Double_t _fx3007[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3007[20] = {
   0.09646366,
   0.1153938,
   0.1219015,
   0.1276116,
   0.129845,
   0.1323864,
   0.1339119,
   0.1389018,
   0.145769,
   0.1531202,
   0.1590713,
   0.1617691,
   0.1630885,
   0.1642902,
   0.1780097,
   0.174541,
   0.1684103,
   0.1630343,
   0.1592423,
   0.1837366};
   Double_t _fehx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3007[20] = {
   0.09646366,
   0.1153938,
   0.1219015,
   0.1276116,
   0.129845,
   0.1323864,
   0.1339119,
   0.1389018,
   0.145769,
   0.1531202,
   0.1590713,
   0.1617691,
   0.1630885,
   0.1642902,
   0.1780097,
   0.174541,
   0.1684103,
   0.1630343,
   0.1592423,
   0.1837366};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3008[20] = {
   0.9273162,
   0.9920047,
   1.012997,
   1.046535,
   1.048157,
   1.020849,
   1.003634,
   0.971528,
   0.9344501,
   0.9445809,
   0.9526591,
   0.9199878,
   0.8862942,
   0.8472068,
   0.833898,
   0.8536737,
   0.8419343,
   0.8131641,
   0.9021201,
   0.7544896};
   Double_t _felx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3008[20] = {
   0.01267327,
   0.007552776,
   0.007170141,
   0.007487105,
   0.008032388,
   0.008628978,
   0.009423482,
   0.0104544,
   0.01174782,
   0.01376203,
   0.01597558,
   0.01811575,
   0.02034369,
   0.02279778,
   0.02557681,
   0.02963145,
   0.03317686,
   0.03673501,
   0.04330315,
   0.04191609};
   Double_t _fehx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3008[20] = {
   0.01267327,
   0.007552776,
   0.007170141,
   0.007487105,
   0.008032388,
   0.008628978,
   0.009423482,
   0.0104544,
   0.01174782,
   0.01376203,
   0.01597558,
   0.01811575,
   0.02034369,
   0.02279778,
   0.02557681,
   0.02963145,
   0.03317686,
   0.03673501,
   0.04330315,
   0.04191609};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.6782119);
   Graph_Graph3008->SetMaximum(1.090551);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_PC_bnb_12_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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

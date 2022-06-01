#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 31 22:10:18 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-40,-89.46,293.3333,9421.551);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,158.4398);
   hmc__1->SetBinContent(1,4343.089);
   hmc__1->SetBinContent(2,4000.042);
   hmc__1->SetBinContent(3,4068.347);
   hmc__1->SetBinContent(4,4095.249);
   hmc__1->SetBinContent(5,4038.64);
   hmc__1->SetBinContent(6,4044.561);
   hmc__1->SetBinContent(7,4019.594);
   hmc__1->SetBinContent(8,4022.036);
   hmc__1->SetBinContent(9,4063.008);
   hmc__1->SetBinContent(10,4132.654);
   hmc__1->SetBinContent(11,4099.99);
   hmc__1->SetBinContent(12,4204.089);
   hmc__1->SetBinContent(13,4109.896);
   hmc__1->SetBinContent(14,4097.683);
   hmc__1->SetBinContent(15,4199.394);
   hmc__1->SetBinContent(16,4204.815);
   hmc__1->SetBinContent(17,4141.853);
   hmc__1->SetBinContent(18,4096.046);
   hmc__1->SetBinContent(19,4089.255);
   hmc__1->SetBinContent(20,4106.424);
   hmc__1->SetBinContent(21,4082.106);
   hmc__1->SetBinContent(22,4024.634);
   hmc__1->SetBinContent(23,3981.031);
   hmc__1->SetBinContent(24,3809.363);
   hmc__1->SetBinContent(25,3598.076);
   hmc__1->SetBinContent(26,2674.282);
   hmc__1->SetBinContent(27,104.7484);
   hmc__1->SetBinError(0,7.875355);
   hmc__1->SetBinError(1,562.974);
   hmc__1->SetBinError(2,544.4242);
   hmc__1->SetBinError(3,575.3156);
   hmc__1->SetBinError(4,586.4882);
   hmc__1->SetBinError(5,580.2658);
   hmc__1->SetBinError(6,553.9488);
   hmc__1->SetBinError(7,552.899);
   hmc__1->SetBinError(8,545.928);
   hmc__1->SetBinError(9,555.0745);
   hmc__1->SetBinError(10,547.4155);
   hmc__1->SetBinError(11,531.4267);
   hmc__1->SetBinError(12,568.1215);
   hmc__1->SetBinError(13,524.1981);
   hmc__1->SetBinError(14,501.8011);
   hmc__1->SetBinError(15,542.4881);
   hmc__1->SetBinError(16,530.2654);
   hmc__1->SetBinError(17,513.8369);
   hmc__1->SetBinError(18,525.7741);
   hmc__1->SetBinError(19,531.2331);
   hmc__1->SetBinError(20,499.3576);
   hmc__1->SetBinError(21,513.6516);
   hmc__1->SetBinError(22,516.7637);
   hmc__1->SetBinError(23,567.0944);
   hmc__1->SetBinError(24,497.6727);
   hmc__1->SetBinError(25,508.1165);
   hmc__1->SetBinError(26,405.7326);
   hmc__1->SetBinError(27,28.29898);
   hmc__1->SetMinimum(-89.46);
   hmc__1->SetMaximum(8946);
   hmc__1->SetEntries(96405.82);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(4560.243);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,11.37415);
   hbadmatch_stack_1->SetBinContent(1,116.3092);
   hbadmatch_stack_1->SetBinContent(2,79.53284);
   hbadmatch_stack_1->SetBinContent(3,103.3575);
   hbadmatch_stack_1->SetBinContent(4,109.3754);
   hbadmatch_stack_1->SetBinContent(5,119.3374);
   hbadmatch_stack_1->SetBinContent(6,140.1389);
   hbadmatch_stack_1->SetBinContent(7,143.9977);
   hbadmatch_stack_1->SetBinContent(8,179.3087);
   hbadmatch_stack_1->SetBinContent(9,178.0488);
   hbadmatch_stack_1->SetBinContent(10,192.2113);
   hbadmatch_stack_1->SetBinContent(11,196.3803);
   hbadmatch_stack_1->SetBinContent(12,232.5592);
   hbadmatch_stack_1->SetBinContent(13,227.2211);
   hbadmatch_stack_1->SetBinContent(14,232.0432);
   hbadmatch_stack_1->SetBinContent(15,234.4585);
   hbadmatch_stack_1->SetBinContent(16,254.9182);
   hbadmatch_stack_1->SetBinContent(17,242.2057);
   hbadmatch_stack_1->SetBinContent(18,244.1124);
   hbadmatch_stack_1->SetBinContent(19,257.9875);
   hbadmatch_stack_1->SetBinContent(20,244.2947);
   hbadmatch_stack_1->SetBinContent(21,217.0291);
   hbadmatch_stack_1->SetBinContent(22,220.3452);
   hbadmatch_stack_1->SetBinContent(23,192.8343);
   hbadmatch_stack_1->SetBinContent(24,194.4314);
   hbadmatch_stack_1->SetBinContent(25,181.306);
   hbadmatch_stack_1->SetBinContent(26,128.7061);
   hbadmatch_stack_1->SetBinContent(27,9.437651);
   hbadmatch_stack_1->SetBinError(0,1.785429);
   hbadmatch_stack_1->SetBinError(1,7.312909);
   hbadmatch_stack_1->SetBinError(2,4.904582);
   hbadmatch_stack_1->SetBinError(3,5.786199);
   hbadmatch_stack_1->SetBinError(4,6.631893);
   hbadmatch_stack_1->SetBinError(5,6.829995);
   hbadmatch_stack_1->SetBinError(6,7.675235);
   hbadmatch_stack_1->SetBinError(7,7.028774);
   hbadmatch_stack_1->SetBinError(8,9.832584);
   hbadmatch_stack_1->SetBinError(9,8.489308);
   hbadmatch_stack_1->SetBinError(10,8.66655);
   hbadmatch_stack_1->SetBinError(11,8.130218);
   hbadmatch_stack_1->SetBinError(12,10.55444);
   hbadmatch_stack_1->SetBinError(13,8.974828);
   hbadmatch_stack_1->SetBinError(14,9.536865);
   hbadmatch_stack_1->SetBinError(15,9.386047);
   hbadmatch_stack_1->SetBinError(16,13.33575);
   hbadmatch_stack_1->SetBinError(17,9.45286);
   hbadmatch_stack_1->SetBinError(18,9.745202);
   hbadmatch_stack_1->SetBinError(19,11.69741);
   hbadmatch_stack_1->SetBinError(20,10.57081);
   hbadmatch_stack_1->SetBinError(21,9.6463);
   hbadmatch_stack_1->SetBinError(22,9.133419);
   hbadmatch_stack_1->SetBinError(23,8.440071);
   hbadmatch_stack_1->SetBinError(24,9.049918);
   hbadmatch_stack_1->SetBinError(25,8.924411);
   hbadmatch_stack_1->SetBinError(26,7.627244);
   hbadmatch_stack_1->SetBinError(27,1.745626);
   hbadmatch_stack_1->SetEntries(18491);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,85.56437);
   hext_stack_2->SetBinContent(1,1212.027);
   hext_stack_2->SetBinContent(2,929.3151);
   hext_stack_2->SetBinContent(3,922.895);
   hext_stack_2->SetBinContent(4,942.3005);
   hext_stack_2->SetBinContent(5,910.8357);
   hext_stack_2->SetBinContent(6,953.2598);
   hext_stack_2->SetBinContent(7,965.06);
   hext_stack_2->SetBinContent(8,946.0471);
   hext_stack_2->SetBinContent(9,952.2465);
   hext_stack_2->SetBinContent(10,1017.622);
   hext_stack_2->SetBinContent(11,1013.267);
   hext_stack_2->SetBinContent(12,1049.938);
   hext_stack_2->SetBinContent(13,1059.774);
   hext_stack_2->SetBinContent(14,1046.769);
   hext_stack_2->SetBinContent(15,1095.55);
   hext_stack_2->SetBinContent(16,1117.163);
   hext_stack_2->SetBinContent(17,1124.373);
   hext_stack_2->SetBinContent(18,1027.481);
   hext_stack_2->SetBinContent(19,1032.391);
   hext_stack_2->SetBinContent(20,1081.137);
   hext_stack_2->SetBinContent(21,1043.099);
   hext_stack_2->SetBinContent(22,973.7015);
   hext_stack_2->SetBinContent(23,994.8373);
   hext_stack_2->SetBinContent(24,948.4672);
   hext_stack_2->SetBinContent(25,869.8767);
   hext_stack_2->SetBinContent(26,753.9242);
   hext_stack_2->SetBinContent(27,49.71242);
   hext_stack_2->SetBinError(0,6.141774);
   hext_stack_2->SetBinError(1,24.02148);
   hext_stack_2->SetBinError(2,20.91914);
   hext_stack_2->SetBinError(3,20.84797);
   hext_stack_2->SetBinError(4,21.2125);
   hext_stack_2->SetBinError(5,20.64645);
   hext_stack_2->SetBinError(6,21.08872);
   hext_stack_2->SetBinError(7,21.2398);
   hext_stack_2->SetBinError(8,20.95171);
   hext_stack_2->SetBinError(9,20.97541);
   hext_stack_2->SetBinError(10,21.90191);
   hext_stack_2->SetBinError(11,21.65636);
   hext_stack_2->SetBinError(12,21.99666);
   hext_stack_2->SetBinError(13,22.20627);
   hext_stack_2->SetBinError(14,21.94838);
   hext_stack_2->SetBinError(15,22.55798);
   hext_stack_2->SetBinError(16,22.78776);
   hext_stack_2->SetBinError(17,23.00692);
   hext_stack_2->SetBinError(18,21.63713);
   hext_stack_2->SetBinError(19,21.85743);
   hext_stack_2->SetBinError(20,22.48959);
   hext_stack_2->SetBinError(21,22.27378);
   hext_stack_2->SetBinError(22,21.38866);
   hext_stack_2->SetBinError(23,21.68557);
   hext_stack_2->SetBinError(24,21.09458);
   hext_stack_2->SetBinError(25,20.27947);
   hext_stack_2->SetBinError(26,18.83971);
   hext_stack_2->SetBinError(27,5.013364);
   hext_stack_2->SetEntries(60612);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,6.838547);
   hdirt_stack_3->SetBinContent(1,482.1089);
   hdirt_stack_3->SetBinContent(2,185.5295);
   hdirt_stack_3->SetBinContent(3,176.2678);
   hdirt_stack_3->SetBinContent(4,177.0972);
   hdirt_stack_3->SetBinContent(5,173.8597);
   hdirt_stack_3->SetBinContent(6,179.4242);
   hdirt_stack_3->SetBinContent(7,185.256);
   hdirt_stack_3->SetBinContent(8,205.3747);
   hdirt_stack_3->SetBinContent(9,194.7098);
   hdirt_stack_3->SetBinContent(10,205.4032);
   hdirt_stack_3->SetBinContent(11,211.8968);
   hdirt_stack_3->SetBinContent(12,229.7985);
   hdirt_stack_3->SetBinContent(13,225.5275);
   hdirt_stack_3->SetBinContent(14,227.3984);
   hdirt_stack_3->SetBinContent(15,234.0764);
   hdirt_stack_3->SetBinContent(16,237.2362);
   hdirt_stack_3->SetBinContent(17,225.0224);
   hdirt_stack_3->SetBinContent(18,247.4988);
   hdirt_stack_3->SetBinContent(19,226.5591);
   hdirt_stack_3->SetBinContent(20,244.3975);
   hdirt_stack_3->SetBinContent(21,255.4454);
   hdirt_stack_3->SetBinContent(22,230.5783);
   hdirt_stack_3->SetBinContent(23,245.4404);
   hdirt_stack_3->SetBinContent(24,212.0468);
   hdirt_stack_3->SetBinContent(25,231.8135);
   hdirt_stack_3->SetBinContent(26,384.6206);
   hdirt_stack_3->SetBinContent(27,8.958625);
   hdirt_stack_3->SetBinError(0,1.84294);
   hdirt_stack_3->SetBinError(1,14.04278);
   hdirt_stack_3->SetBinError(2,8.900706);
   hdirt_stack_3->SetBinError(3,8.755115);
   hdirt_stack_3->SetBinError(4,8.772118);
   hdirt_stack_3->SetBinError(5,8.35536);
   hdirt_stack_3->SetBinError(6,7.893823);
   hdirt_stack_3->SetBinError(7,8.751728);
   hdirt_stack_3->SetBinError(8,9.384114);
   hdirt_stack_3->SetBinError(9,8.660413);
   hdirt_stack_3->SetBinError(10,9.280239);
   hdirt_stack_3->SetBinError(11,9.938597);
   hdirt_stack_3->SetBinError(12,9.50529);
   hdirt_stack_3->SetBinError(13,9.142499);
   hdirt_stack_3->SetBinError(14,9.410472);
   hdirt_stack_3->SetBinError(15,9.728589);
   hdirt_stack_3->SetBinError(16,10.42292);
   hdirt_stack_3->SetBinError(17,8.983344);
   hdirt_stack_3->SetBinError(18,10.77233);
   hdirt_stack_3->SetBinError(19,9.541631);
   hdirt_stack_3->SetBinError(20,9.76666);
   hdirt_stack_3->SetBinError(21,9.8564);
   hdirt_stack_3->SetBinError(22,9.31165);
   hdirt_stack_3->SetBinError(23,9.700333);
   hdirt_stack_3->SetBinError(24,8.55885);
   hdirt_stack_3->SetBinError(25,9.737902);
   hdirt_stack_3->SetBinError(26,13.42151);
   hdirt_stack_3->SetBinError(27,1.993681);
   hdirt_stack_3->SetEntries(24330);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,35.29827);
   houtFV_stack_4->SetBinContent(1,1170.134);
   houtFV_stack_4->SetBinContent(2,283.0271);
   houtFV_stack_4->SetBinContent(3,255.4041);
   houtFV_stack_4->SetBinContent(4,221.7248);
   houtFV_stack_4->SetBinContent(5,232.7528);
   houtFV_stack_4->SetBinContent(6,242.3949);
   houtFV_stack_4->SetBinContent(7,244.9287);
   houtFV_stack_4->SetBinContent(8,220.8011);
   houtFV_stack_4->SetBinContent(9,233.5022);
   houtFV_stack_4->SetBinContent(10,223.9416);
   houtFV_stack_4->SetBinContent(11,245.3888);
   houtFV_stack_4->SetBinContent(12,226.8019);
   houtFV_stack_4->SetBinContent(13,220.5977);
   houtFV_stack_4->SetBinContent(14,238.4784);
   houtFV_stack_4->SetBinContent(15,224.5195);
   houtFV_stack_4->SetBinContent(16,239.8669);
   houtFV_stack_4->SetBinContent(17,226.0661);
   houtFV_stack_4->SetBinContent(18,241.7068);
   houtFV_stack_4->SetBinContent(19,230.6399);
   houtFV_stack_4->SetBinContent(20,230.465);
   houtFV_stack_4->SetBinContent(21,223.5018);
   houtFV_stack_4->SetBinContent(22,245.4222);
   houtFV_stack_4->SetBinContent(23,257.904);
   houtFV_stack_4->SetBinContent(24,271.2996);
   houtFV_stack_4->SetBinContent(25,342.4049);
   houtFV_stack_4->SetBinContent(26,706.3951);
   houtFV_stack_4->SetBinContent(27,21.68756);
   houtFV_stack_4->SetBinError(0,2.993178);
   houtFV_stack_4->SetBinError(1,21.74393);
   houtFV_stack_4->SetBinError(2,9.778898);
   houtFV_stack_4->SetBinError(3,8.776017);
   houtFV_stack_4->SetBinError(4,8.044566);
   houtFV_stack_4->SetBinError(5,8.973516);
   houtFV_stack_4->SetBinError(6,8.616897);
   houtFV_stack_4->SetBinError(7,9.829652);
   houtFV_stack_4->SetBinError(8,8.521382);
   houtFV_stack_4->SetBinError(9,8.74724);
   houtFV_stack_4->SetBinError(10,9.739379);
   houtFV_stack_4->SetBinError(11,8.83735);
   houtFV_stack_4->SetBinError(12,8.158453);
   houtFV_stack_4->SetBinError(13,9.064021);
   houtFV_stack_4->SetBinError(14,9.110114);
   houtFV_stack_4->SetBinError(15,8.989102);
   houtFV_stack_4->SetBinError(16,10.02723);
   houtFV_stack_4->SetBinError(17,9.452384);
   houtFV_stack_4->SetBinError(18,9.844798);
   houtFV_stack_4->SetBinError(19,8.941945);
   houtFV_stack_4->SetBinError(20,9.207793);
   houtFV_stack_4->SetBinError(21,8.549817);
   houtFV_stack_4->SetBinError(22,9.054179);
   houtFV_stack_4->SetBinError(23,9.224011);
   houtFV_stack_4->SetBinError(24,8.761541);
   houtFV_stack_4->SetBinError(25,10.92558);
   houtFV_stack_4->SetBinError(26,16.5681);
   houtFV_stack_4->SetBinError(27,2.329185);
   houtFV_stack_4->SetEntries(30909);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.135938);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.293726);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.62703);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.455053);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.76229);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.261497);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.149145);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.219732);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.0246);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.479882);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.08862);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.981914);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.377595);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.997612);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.3305);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,6.972872);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,8.062308);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,8.048522);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.762122);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,7.06603);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.349854);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,6.788526);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.898878);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,7.90603);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.81485);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.675008);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5705923);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9282516);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9301712);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8094677);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8540013);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.855443);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7444274);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8047661);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8215586);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7752472);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9509738);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.76306);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9469663);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8584332);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7946672);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8834224);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9635019);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9425717);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8346013);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8328114);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.8855491);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8316034);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7526172);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.934346);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8019401);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.493212);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(3116);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,2.343448);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,65.66954);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,128.5481);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,135.9008);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,147.1678);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,142.4264);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,146.6971);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,139.8411);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,152.0874);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,148.4274);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,139.954);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,141.6857);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,144.3243);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,134.8862);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,140.6348);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,143.7323);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,145.1206);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,144.7406);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,140.1292);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,137.4371);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,134.5149);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,146.5543);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,137.8947);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,138.3301);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,128.019);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,110.4846);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,44.71841);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,1.562072);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.5671721);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.623761);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.67851);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.805121);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.987426);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.8837);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.949093);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.829776);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.999242);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.005205);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.922368);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.856513);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.889149);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.689018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.89291);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.916558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.966785);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,3.89986);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,3.868329);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,3.801121);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.760423);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,3.966567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,3.852777);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.846458);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.669351);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.430114);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.204223);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.3501449);
   hNCpi0inFVnoncoh_stack_6->SetEntries(64545);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,1.610679);
   hCCpi0inFV_stack_7->SetBinContent(1,156.123);
   hCCpi0inFV_stack_7->SetBinContent(2,283.4792);
   hCCpi0inFV_stack_7->SetBinContent(3,285.7628);
   hCCpi0inFV_stack_7->SetBinContent(4,291.5526);
   hCCpi0inFV_stack_7->SetBinContent(5,276.251);
   hCCpi0inFV_stack_7->SetBinContent(6,284.267);
   hCCpi0inFV_stack_7->SetBinContent(7,270.402);
   hCCpi0inFV_stack_7->SetBinContent(8,276.9623);
   hCCpi0inFV_stack_7->SetBinContent(9,273.344);
   hCCpi0inFV_stack_7->SetBinContent(10,282.3817);
   hCCpi0inFV_stack_7->SetBinContent(11,257.0067);
   hCCpi0inFV_stack_7->SetBinContent(12,266.0488);
   hCCpi0inFV_stack_7->SetBinContent(13,244.3826);
   hCCpi0inFV_stack_7->SetBinContent(14,248.8867);
   hCCpi0inFV_stack_7->SetBinContent(15,255.1165);
   hCCpi0inFV_stack_7->SetBinContent(16,260.2867);
   hCCpi0inFV_stack_7->SetBinContent(17,255.7794);
   hCCpi0inFV_stack_7->SetBinContent(18,259.358);
   hCCpi0inFV_stack_7->SetBinContent(19,230.1453);
   hCCpi0inFV_stack_7->SetBinContent(20,237.9807);
   hCCpi0inFV_stack_7->SetBinContent(21,241.0271);
   hCCpi0inFV_stack_7->SetBinContent(22,246.4157);
   hCCpi0inFV_stack_7->SetBinContent(23,249.1646);
   hCCpi0inFV_stack_7->SetBinContent(24,252.4183);
   hCCpi0inFV_stack_7->SetBinContent(25,239.1969);
   hCCpi0inFV_stack_7->SetBinContent(26,95.16237);
   hCCpi0inFV_stack_7->SetBinContent(27,2.289344);
   hCCpi0inFV_stack_7->SetBinError(0,0.6806271);
   hCCpi0inFV_stack_7->SetBinError(1,6.228922);
   hCCpi0inFV_stack_7->SetBinError(2,8.422701);
   hCCpi0inFV_stack_7->SetBinError(3,8.460754);
   hCCpi0inFV_stack_7->SetBinError(4,8.575702);
   hCCpi0inFV_stack_7->SetBinError(5,8.33679);
   hCCpi0inFV_stack_7->SetBinError(6,8.425716);
   hCCpi0inFV_stack_7->SetBinError(7,8.248864);
   hCCpi0inFV_stack_7->SetBinError(8,8.353689);
   hCCpi0inFV_stack_7->SetBinError(9,8.257724);
   hCCpi0inFV_stack_7->SetBinError(10,8.450502);
   hCCpi0inFV_stack_7->SetBinError(11,8.040147);
   hCCpi0inFV_stack_7->SetBinError(12,8.180945);
   hCCpi0inFV_stack_7->SetBinError(13,7.824302);
   hCCpi0inFV_stack_7->SetBinError(14,8.123495);
   hCCpi0inFV_stack_7->SetBinError(15,8.018762);
   hCCpi0inFV_stack_7->SetBinError(16,8.083345);
   hCCpi0inFV_stack_7->SetBinError(17,8.05905);
   hCCpi0inFV_stack_7->SetBinError(18,8.084247);
   hCCpi0inFV_stack_7->SetBinError(19,7.512712);
   hCCpi0inFV_stack_7->SetBinError(20,7.733395);
   hCCpi0inFV_stack_7->SetBinError(21,7.747313);
   hCCpi0inFV_stack_7->SetBinError(22,7.85588);
   hCCpi0inFV_stack_7->SetBinError(23,7.855695);
   hCCpi0inFV_stack_7->SetBinError(24,8.020921);
   hCCpi0inFV_stack_7->SetBinError(25,7.760845);
   hCCpi0inFV_stack_7->SetBinError(26,4.882119);
   hCCpi0inFV_stack_7->SetBinError(27,0.8330862);
   hCCpi0inFV_stack_7->SetEntries(27943);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(0,2.342597);
   hNCinFV_stack_8->SetBinContent(1,77.79048);
   hNCinFV_stack_8->SetBinContent(2,168.0253);
   hNCinFV_stack_8->SetBinContent(3,152.1779);
   hNCinFV_stack_8->SetBinContent(4,148.7488);
   hNCinFV_stack_8->SetBinContent(5,143.8786);
   hNCinFV_stack_8->SetBinContent(6,149.1313);
   hNCinFV_stack_8->SetBinContent(7,140.53);
   hNCinFV_stack_8->SetBinContent(8,145.9095);
   hNCinFV_stack_8->SetBinContent(9,131.6747);
   hNCinFV_stack_8->SetBinContent(10,126.6461);
   hNCinFV_stack_8->SetBinContent(11,140.8993);
   hNCinFV_stack_8->SetBinContent(12,137.871);
   hNCinFV_stack_8->SetBinContent(13,144.5883);
   hNCinFV_stack_8->SetBinContent(14,132.2543);
   hNCinFV_stack_8->SetBinContent(15,131.3382);
   hNCinFV_stack_8->SetBinContent(16,136.4339);
   hNCinFV_stack_8->SetBinContent(17,123.7025);
   hNCinFV_stack_8->SetBinContent(18,127.0736);
   hNCinFV_stack_8->SetBinContent(19,135.8919);
   hNCinFV_stack_8->SetBinContent(20,130.5151);
   hNCinFV_stack_8->SetBinContent(21,130.7605);
   hNCinFV_stack_8->SetBinContent(22,120.2249);
   hNCinFV_stack_8->SetBinContent(23,134.449);
   hNCinFV_stack_8->SetBinContent(24,143.507);
   hNCinFV_stack_8->SetBinContent(25,111.0951);
   hNCinFV_stack_8->SetBinContent(26,38.64612);
   hNCinFV_stack_8->SetBinContent(27,1.26712);
   hNCinFV_stack_8->SetBinError(0,0.8097566);
   hNCinFV_stack_8->SetBinError(1,4.423708);
   hNCinFV_stack_8->SetBinError(2,6.512353);
   hNCinFV_stack_8->SetBinError(3,6.060507);
   hNCinFV_stack_8->SetBinError(4,6.116202);
   hNCinFV_stack_8->SetBinError(5,6.005308);
   hNCinFV_stack_8->SetBinError(6,6.08327);
   hNCinFV_stack_8->SetBinError(7,5.882286);
   hNCinFV_stack_8->SetBinError(8,6.023185);
   hNCinFV_stack_8->SetBinError(9,5.691213);
   hNCinFV_stack_8->SetBinError(10,5.640666);
   hNCinFV_stack_8->SetBinError(11,5.955732);
   hNCinFV_stack_8->SetBinError(12,5.840072);
   hNCinFV_stack_8->SetBinError(13,6.092597);
   hNCinFV_stack_8->SetBinError(14,5.750237);
   hNCinFV_stack_8->SetBinError(15,5.774736);
   hNCinFV_stack_8->SetBinError(16,5.831696);
   hNCinFV_stack_8->SetBinError(17,5.596124);
   hNCinFV_stack_8->SetBinError(18,5.602662);
   hNCinFV_stack_8->SetBinError(19,5.887563);
   hNCinFV_stack_8->SetBinError(20,5.701176);
   hNCinFV_stack_8->SetBinError(21,5.782279);
   hNCinFV_stack_8->SetBinError(22,5.49998);
   hNCinFV_stack_8->SetBinError(23,5.791228);
   hNCinFV_stack_8->SetBinError(24,6.011055);
   hNCinFV_stack_8->SetBinError(25,5.261553);
   hNCinFV_stack_8->SetBinError(26,3.128028);
   hNCinFV_stack_8->SetBinError(27,0.5883944);
   hNCinFV_stack_8->SetEntries(14605);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(0,13.0083);
   hnumuCCinFV_stack_9->SetBinContent(1,1046.708);
   hnumuCCinFV_stack_9->SetBinContent(2,1911.848);
   hnumuCCinFV_stack_9->SetBinContent(3,2009.663);
   hnumuCCinFV_stack_9->SetBinContent(4,2033.6);
   hnumuCCinFV_stack_9->SetBinContent(5,2012.488);
   hnumuCCinFV_stack_9->SetBinContent(6,1920.901);
   hnumuCCinFV_stack_9->SetBinContent(7,1902.579);
   hnumuCCinFV_stack_9->SetBinContent(8,1868.239);
   hnumuCCinFV_stack_9->SetBinContent(9,1925.01);
   hnumuCCinFV_stack_9->SetBinContent(10,1919.041);
   hnumuCCinFV_stack_9->SetBinContent(11,1868.012);
   hnumuCCinFV_stack_9->SetBinContent(12,1894.63);
   hnumuCCinFV_stack_9->SetBinContent(13,1825.824);
   hnumuCCinFV_stack_9->SetBinContent(14,1808.875);
   hnumuCCinFV_stack_9->SetBinContent(15,1855.063);
   hnumuCCinFV_stack_9->SetBinContent(16,1792.354);
   hnumuCCinFV_stack_9->SetBinContent(17,1774.73);
   hnumuCCinFV_stack_9->SetBinContent(18,1784.138);
   hnumuCCinFV_stack_9->SetBinContent(19,1814.496);
   hnumuCCinFV_stack_9->SetBinContent(20,1779.234);
   hnumuCCinFV_stack_9->SetBinContent(21,1801.933);
   hnumuCCinFV_stack_9->SetBinContent(22,1825.143);
   hnumuCCinFV_stack_9->SetBinContent(23,1745.927);
   hnumuCCinFV_stack_9->SetBinContent(24,1633.559);
   hnumuCCinFV_stack_9->SetBinContent(25,1485.19);
   hnumuCCinFV_stack_9->SetBinContent(26,514.434);
   hnumuCCinFV_stack_9->SetBinContent(27,9.77779);
   hnumuCCinFV_stack_9->SetBinError(0,2.704497);
   hnumuCCinFV_stack_9->SetBinError(1,22.62856);
   hnumuCCinFV_stack_9->SetBinError(2,29.06764);
   hnumuCCinFV_stack_9->SetBinError(3,31.40688);
   hnumuCCinFV_stack_9->SetBinError(4,30.86187);
   hnumuCCinFV_stack_9->SetBinError(5,30.45185);
   hnumuCCinFV_stack_9->SetBinError(6,28.77664);
   hnumuCCinFV_stack_9->SetBinError(7,29.06224);
   hnumuCCinFV_stack_9->SetBinError(8,28.72099);
   hnumuCCinFV_stack_9->SetBinError(9,28.71737);
   hnumuCCinFV_stack_9->SetBinError(10,29.73916);
   hnumuCCinFV_stack_9->SetBinError(11,28.84834);
   hnumuCCinFV_stack_9->SetBinError(12,29.29742);
   hnumuCCinFV_stack_9->SetBinError(13,28.34546);
   hnumuCCinFV_stack_9->SetBinError(14,27.83847);
   hnumuCCinFV_stack_9->SetBinError(15,29.97691);
   hnumuCCinFV_stack_9->SetBinError(16,27.43279);
   hnumuCCinFV_stack_9->SetBinError(17,27.87116);
   hnumuCCinFV_stack_9->SetBinError(18,28.65381);
   hnumuCCinFV_stack_9->SetBinError(19,28.42228);
   hnumuCCinFV_stack_9->SetBinError(20,27.58851);
   hnumuCCinFV_stack_9->SetBinError(21,28.98949);
   hnumuCCinFV_stack_9->SetBinError(22,29.35084);
   hnumuCCinFV_stack_9->SetBinError(23,27.95956);
   hnumuCCinFV_stack_9->SetBinError(24,26.93236);
   hnumuCCinFV_stack_9->SetBinError(25,25.30063);
   hnumuCCinFV_stack_9->SetBinError(26,14.71993);
   hnumuCCinFV_stack_9->SetBinError(27,1.969657);
   hnumuCCinFV_stack_9->SetEntries(168676);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(0,0.003675268);
   hnueCCinFV_stack_10->SetBinContent(1,13.08308);
   hnueCCinFV_stack_10->SetBinContent(2,23.44239);
   hnueCCinFV_stack_10->SetBinContent(3,19.29106);
   hnueCCinFV_stack_10->SetBinContent(4,17.2259);
   hnueCCinFV_stack_10->SetBinContent(5,20.04775);
   hnueCCinFV_stack_10->SetBinContent(6,21.08481);
   hnueCCinFV_stack_10->SetBinContent(7,20.85078);
   hnueCCinFV_stack_10->SetBinContent(8,21.08635);
   hnueCCinFV_stack_10->SetBinContent(9,20.02004);
   hnueCCinFV_stack_10->SetBinContent(10,19.97403);
   hnueCCinFV_stack_10->SetBinContent(11,17.36468);
   hnueCCinFV_stack_10->SetBinContent(12,16.13577);
   hnueCCinFV_stack_10->SetBinContent(13,19.71709);
   hnueCCinFV_stack_10->SetBinContent(14,15.34445);
   hnueCCinFV_stack_10->SetBinContent(15,19.20887);
   hnueCCinFV_stack_10->SetBinContent(16,14.4632);
   hnueCCinFV_stack_10->SetBinContent(17,17.16995);
   hnueCCinFV_stack_10->SetBinContent(18,16.49903);
   hnueCCinFV_stack_10->SetBinContent(19,16.9456);
   hnueCCinFV_stack_10->SetBinContent(20,16.81876);
   hnueCCinFV_stack_10->SetBinContent(21,15.40572);
   hnueCCinFV_stack_10->SetBinContent(22,18.11928);
   hnueCCinFV_stack_10->SetBinContent(23,16.24479);
   hnueCCinFV_stack_10->SetBinContent(24,17.70845);
   hnueCCinFV_stack_10->SetBinContent(25,20.8935);
   hnueCCinFV_stack_10->SetBinContent(26,6.000228);
   hnueCCinFV_stack_10->SetBinError(0,0.003675269);
   hnueCCinFV_stack_10->SetBinError(1,2.251666);
   hnueCCinFV_stack_10->SetBinError(2,3.886325);
   hnueCCinFV_stack_10->SetBinError(3,2.534762);
   hnueCCinFV_stack_10->SetBinError(4,2.455341);
   hnueCCinFV_stack_10->SetBinError(5,2.476286);
   hnueCCinFV_stack_10->SetBinError(6,3.175444);
   hnueCCinFV_stack_10->SetBinError(7,3.147772);
   hnueCCinFV_stack_10->SetBinError(8,3.267723);
   hnueCCinFV_stack_10->SetBinError(9,2.561474);
   hnueCCinFV_stack_10->SetBinError(10,2.510525);
   hnueCCinFV_stack_10->SetBinError(11,2.167115);
   hnueCCinFV_stack_10->SetBinError(12,2.643513);
   hnueCCinFV_stack_10->SetBinError(13,2.962365);
   hnueCCinFV_stack_10->SetBinError(14,2.050302);
   hnueCCinFV_stack_10->SetBinError(15,2.472512);
   hnueCCinFV_stack_10->SetBinError(16,1.98132);
   hnueCCinFV_stack_10->SetBinError(17,2.644427);
   hnueCCinFV_stack_10->SetBinError(18,2.261328);
   hnueCCinFV_stack_10->SetBinError(19,2.892889);
   hnueCCinFV_stack_10->SetBinError(20,2.479213);
   hnueCCinFV_stack_10->SetBinError(21,2.141845);
   hnueCCinFV_stack_10->SetBinError(22,3.442457);
   hnueCCinFV_stack_10->SetBinError(23,2.313571);
   hnueCCinFV_stack_10->SetBinError(24,2.65071);
   hnueCCinFV_stack_10->SetBinError(25,3.018041);
   hnueCCinFV_stack_10->SetBinError(26,1.457611);
   hnueCCinFV_stack_10->SetEntries(1752);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,158.4398);
   hmcerror__2->SetBinContent(1,4343.089);
   hmcerror__2->SetBinContent(2,4000.042);
   hmcerror__2->SetBinContent(3,4068.347);
   hmcerror__2->SetBinContent(4,4095.249);
   hmcerror__2->SetBinContent(5,4038.64);
   hmcerror__2->SetBinContent(6,4044.561);
   hmcerror__2->SetBinContent(7,4019.594);
   hmcerror__2->SetBinContent(8,4022.036);
   hmcerror__2->SetBinContent(9,4063.008);
   hmcerror__2->SetBinContent(10,4132.654);
   hmcerror__2->SetBinContent(11,4099.99);
   hmcerror__2->SetBinContent(12,4204.089);
   hmcerror__2->SetBinContent(13,4109.896);
   hmcerror__2->SetBinContent(14,4097.683);
   hmcerror__2->SetBinContent(15,4199.394);
   hmcerror__2->SetBinContent(16,4204.815);
   hmcerror__2->SetBinContent(17,4141.853);
   hmcerror__2->SetBinContent(18,4096.046);
   hmcerror__2->SetBinContent(19,4089.255);
   hmcerror__2->SetBinContent(20,4106.424);
   hmcerror__2->SetBinContent(21,4082.106);
   hmcerror__2->SetBinContent(22,4024.634);
   hmcerror__2->SetBinContent(23,3981.031);
   hmcerror__2->SetBinContent(24,3809.363);
   hmcerror__2->SetBinContent(25,3598.076);
   hmcerror__2->SetBinContent(26,2674.282);
   hmcerror__2->SetBinContent(27,104.7484);
   hmcerror__2->SetBinError(0,7.875355);
   hmcerror__2->SetBinError(1,562.974);
   hmcerror__2->SetBinError(2,544.4242);
   hmcerror__2->SetBinError(3,575.3156);
   hmcerror__2->SetBinError(4,586.4882);
   hmcerror__2->SetBinError(5,580.2658);
   hmcerror__2->SetBinError(6,553.9488);
   hmcerror__2->SetBinError(7,552.899);
   hmcerror__2->SetBinError(8,545.928);
   hmcerror__2->SetBinError(9,555.0745);
   hmcerror__2->SetBinError(10,547.4155);
   hmcerror__2->SetBinError(11,531.4267);
   hmcerror__2->SetBinError(12,568.1215);
   hmcerror__2->SetBinError(13,524.1981);
   hmcerror__2->SetBinError(14,501.8011);
   hmcerror__2->SetBinError(15,542.4881);
   hmcerror__2->SetBinError(16,530.2654);
   hmcerror__2->SetBinError(17,513.8369);
   hmcerror__2->SetBinError(18,525.7741);
   hmcerror__2->SetBinError(19,531.2331);
   hmcerror__2->SetBinError(20,499.3576);
   hmcerror__2->SetBinError(21,513.6516);
   hmcerror__2->SetBinError(22,516.7637);
   hmcerror__2->SetBinError(23,567.0944);
   hmcerror__2->SetBinError(24,497.6727);
   hmcerror__2->SetBinError(25,508.1165);
   hmcerror__2->SetBinError(26,405.7326);
   hmcerror__2->SetBinError(27,28.29898);
   hmcerror__2->SetEntries(96405.82);

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
   
   Double_t _fx3001[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3001[26] = {
   4466,
   4283,
   4365,
   4369,
   4249,
   4262,
   4307,
   4338,
   4302,
   4263,
   4473,
   4287,
   4362,
   4378,
   4318,
   4344,
   4307,
   4285,
   4078,
   4219,
   4069,
   3991,
   3847,
   3680,
   3374,
   2266};
   Double_t _felx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3001[26] = {
   66.82814,
   65.44463,
   66.06815,
   66.09841,
   65.18435,
   65.28399,
   65.62774,
   65.8635,
   65.58963,
   65.29165,
   66.88049,
   65.47519,
   66.04544,
   66.16646,
   65.71149,
   65.90903,
   65.62774,
   65.45991,
   63.85922,
   64.95383,
   63.78871,
   63.17436,
   62.02419,
   60.663,
   58.08614,
   47.60252};
   Double_t _fehx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3001[26] = {
   66.82814,
   65.44463,
   66.06815,
   66.09841,
   65.18435,
   65.28399,
   65.62774,
   65.8635,
   65.58963,
   65.29165,
   66.88049,
   65.47519,
   66.04544,
   66.16646,
   65.71149,
   65.90903,
   65.62774,
   65.45991,
   63.85922,
   64.95383,
   63.78871,
   63.17436,
   62.02419,
   60.663,
   58.08614,
   47.60252};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(1986.249);
   Graph_Graph3001->SetMaximum(4772.029);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 107482.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4862.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 25983.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6034.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7700.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  169.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3459.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6518.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 3403.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 45753.6","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 460.1","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("generic_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3002[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3002[26] = {
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
   1,
   1};
   Double_t _felx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3002[26] = {
   0.1296253,
   0.1361046,
   0.1414126,
   0.1432118,
   0.1436785,
   0.1369614,
   0.137551,
   0.1357342,
   0.1366166,
   0.132461,
   0.1296166,
   0.1351354,
   0.1275454,
   0.1224597,
   0.1291825,
   0.1261091,
   0.1240597,
   0.1283614,
   0.1299095,
   0.121604,
   0.12583,
   0.1284002,
   0.1424491,
   0.1306446,
   0.1412189,
   0.1517165};
   Double_t _fehx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3002[26] = {
   0.1296253,
   0.1361046,
   0.1414126,
   0.1432118,
   0.1436785,
   0.1369614,
   0.137551,
   0.1357342,
   0.1366166,
   0.132461,
   0.1296166,
   0.1351354,
   0.1275454,
   0.1224597,
   0.1291825,
   0.1261091,
   0.1240597,
   0.1283614,
   0.1299095,
   0.121604,
   0.12583,
   0.1284002,
   0.1424491,
   0.1306446,
   0.1412189,
   0.1517165};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3003[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3003[26] = {
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
   1,
   1};
   Double_t _felx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3003[26] = {
   0.112282,
   0.1133396,
   0.1190173,
   0.1146384,
   0.1145997,
   0.1127243,
   0.1144678,
   0.1110281,
   0.1130295,
   0.1119391,
   0.1112462,
   0.1129721,
   0.1087427,
   0.1099961,
   0.1110064,
   0.108788,
   0.1063849,
   0.1113239,
   0.1123635,
   0.1055962,
   0.1118711,
   0.1125826,
   0.1113273,
   0.1101923,
   0.1137141,
   0.1176462};
   Double_t _fehx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3003[26] = {
   0.112282,
   0.1133396,
   0.1190173,
   0.1146384,
   0.1145997,
   0.1127243,
   0.1144678,
   0.1110281,
   0.1130295,
   0.1119391,
   0.1112462,
   0.1129721,
   0.1087427,
   0.1099961,
   0.1110064,
   0.108788,
   0.1063849,
   0.1113239,
   0.1123635,
   0.1055962,
   0.1118711,
   0.1125826,
   0.1113273,
   0.1101923,
   0.1137141,
   0.1176462};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
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
   
   Double_t _fx3004[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3004[26] = {
   1.0283,
   1.070739,
   1.072917,
   1.066846,
   1.052087,
   1.053761,
   1.071501,
   1.078558,
   1.058821,
   1.03154,
   1.090978,
   1.019721,
   1.061341,
   1.068409,
   1.028244,
   1.033101,
   1.039873,
   1.046131,
   0.9972476,
   1.027415,
   0.9967894,
   0.991643,
   0.9663326,
   0.9660407,
   0.9377233,
   0.8473302};
   Double_t _felx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3004[26] = {
   0.01538724,
   0.01636099,
   0.01623956,
   0.01614027,
   0.01614017,
   0.01614118,
   0.01632696,
   0.01637566,
   0.01614312,
   0.01579896,
   0.01631235,
   0.01557417,
   0.01606986,
   0.01614729,
   0.01564785,
   0.01567465,
   0.01584502,
   0.01598124,
   0.01561635,
   0.01581761,
   0.01562642,
   0.01569692,
   0.01557993,
   0.01592471,
   0.01614367,
   0.01780011};
   Double_t _fehx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3004[26] = {
   0.01538724,
   0.01636099,
   0.01623956,
   0.01614027,
   0.01614017,
   0.01614118,
   0.01632696,
   0.01637566,
   0.01614312,
   0.01579896,
   0.01631235,
   0.01557417,
   0.01606986,
   0.01614729,
   0.01564785,
   0.01567465,
   0.01584502,
   0.01598124,
   0.01561635,
   0.01581761,
   0.01562642,
   0.01569692,
   0.01557993,
   0.01592471,
   0.01614367,
   0.01780011};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.801754);
   Graph_Graph3004->SetMaximum(1.135067);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Mar 13 17:22:30 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(0.2307692,-22.15047,6.641026,2449.376);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hmc__1->SetBinContent(4,926.8092);
   hmc__1->SetBinContent(5,1107.523);
   hmc__1->SetBinContent(6,1006.133);
   hmc__1->SetBinContent(7,857.8746);
   hmc__1->SetBinContent(8,725.1661);
   hmc__1->SetBinContent(9,656.1648);
   hmc__1->SetBinContent(10,547.9679);
   hmc__1->SetBinContent(11,479.4377);
   hmc__1->SetBinContent(12,399.4149);
   hmc__1->SetBinContent(13,290.2348);
   hmc__1->SetBinContent(14,173.5199);
   hmc__1->SetBinContent(15,87.01595);
   hmc__1->SetBinContent(16,46.75081);
   hmc__1->SetBinContent(17,20.71253);
   hmc__1->SetBinContent(18,6.873823);
   hmc__1->SetBinContent(19,1.784112);
   hmc__1->SetBinContent(20,0.2510999);
   hmc__1->SetBinContent(21,0.6705194);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,0.3895343);
   hmc__1->SetBinError(3,0.3895343);
   hmc__1->SetBinError(4,168.976);
   hmc__1->SetBinError(5,208.4994);
   hmc__1->SetBinError(6,203.1307);
   hmc__1->SetBinError(7,178.4308);
   hmc__1->SetBinError(8,155.4312);
   hmc__1->SetBinError(9,153.3549);
   hmc__1->SetBinError(10,130.0632);
   hmc__1->SetBinError(11,119.9079);
   hmc__1->SetBinError(12,101.4642);
   hmc__1->SetBinError(13,76.96332);
   hmc__1->SetBinError(14,47.19257);
   hmc__1->SetBinError(15,25.48434);
   hmc__1->SetBinError(16,17.00397);
   hmc__1->SetBinError(17,9.923523);
   hmc__1->SetBinError(18,4.544881);
   hmc__1->SetBinError(19,2.656048);
   hmc__1->SetBinError(20,0.6213783);
   hmc__1->SetBinError(21,3.99314);
   hmc__1->SetMinimum(-22.15047);
   hmc__1->SetMaximum(2325.799);
   hmc__1->SetEntries(7241.585);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,1,6);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1162.899);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,37.23051);
   hbadmatch_stack_1->SetBinContent(5,38.98334);
   hbadmatch_stack_1->SetBinContent(6,28.84724);
   hbadmatch_stack_1->SetBinContent(7,23.48694);
   hbadmatch_stack_1->SetBinContent(8,17.69221);
   hbadmatch_stack_1->SetBinContent(9,13.29057);
   hbadmatch_stack_1->SetBinContent(10,7.439643);
   hbadmatch_stack_1->SetBinContent(11,4.790009);
   hbadmatch_stack_1->SetBinContent(12,5.010263);
   hbadmatch_stack_1->SetBinContent(13,2.587494);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinError(4,3.303657);
   hbadmatch_stack_1->SetBinError(5,3.754551);
   hbadmatch_stack_1->SetBinError(6,3.448676);
   hbadmatch_stack_1->SetBinError(7,2.919258);
   hbadmatch_stack_1->SetBinError(8,2.177571);
   hbadmatch_stack_1->SetBinError(9,1.867532);
   hbadmatch_stack_1->SetBinError(10,1.380065);
   hbadmatch_stack_1->SetBinError(11,1.110898);
   hbadmatch_stack_1->SetBinError(12,1.505405);
   hbadmatch_stack_1->SetBinError(13,0.8087577);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,131.088);
   hext_stack_2->SetBinContent(5,135.1032);
   hext_stack_2->SetBinContent(6,103.9777);
   hext_stack_2->SetBinContent(7,82.05023);
   hext_stack_2->SetBinContent(8,61.43997);
   hext_stack_2->SetBinContent(9,39.77105);
   hext_stack_2->SetBinContent(10,26.82338);
   hext_stack_2->SetBinContent(11,16.66168);
   hext_stack_2->SetBinContent(12,8.771955);
   hext_stack_2->SetBinContent(13,4.52443);
   hext_stack_2->SetBinContent(14,1.78639);
   hext_stack_2->SetBinContent(15,1.779209);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinError(4,7.53275);
   hext_stack_2->SetBinError(5,7.562693);
   hext_stack_2->SetBinError(6,6.713714);
   hext_stack_2->SetBinError(7,5.716721);
   hext_stack_2->SetBinError(8,5.065645);
   hext_stack_2->SetBinError(9,4.161963);
   hext_stack_2->SetBinError(10,3.320929);
   hext_stack_2->SetBinError(11,2.799714);
   hext_stack_2->SetBinError(12,1.801853);
   hext_stack_2->SetBinError(13,1.487279);
   hext_stack_2->SetBinError(14,0.8039566);
   hext_stack_2->SetBinError(15,0.9206235);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetEntries(1541);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,12.52861);
   hdirt_stack_3->SetBinContent(5,17.1855);
   hdirt_stack_3->SetBinContent(6,12.84865);
   hdirt_stack_3->SetBinContent(7,9.238682);
   hdirt_stack_3->SetBinContent(8,6.981198);
   hdirt_stack_3->SetBinContent(9,6.638345);
   hdirt_stack_3->SetBinContent(10,2.64005);
   hdirt_stack_3->SetBinContent(11,1.271017);
   hdirt_stack_3->SetBinContent(12,2.191746);
   hdirt_stack_3->SetBinContent(13,1.005603);
   hdirt_stack_3->SetBinContent(14,0.2827498);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,1.828305);
   hdirt_stack_3->SetBinError(5,2.274503);
   hdirt_stack_3->SetBinError(6,1.834132);
   hdirt_stack_3->SetBinError(7,1.765942);
   hdirt_stack_3->SetBinError(8,1.436085);
   hdirt_stack_3->SetBinError(9,1.668688);
   hdirt_stack_3->SetBinError(10,0.8125231);
   hdirt_stack_3->SetBinError(11,0.5442829);
   hdirt_stack_3->SetBinError(12,0.9076);
   hdirt_stack_3->SetBinError(13,0.4680051);
   hdirt_stack_3->SetBinError(14,0.1999888);
   hdirt_stack_3->SetBinError(15,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,135.5157);
   houtFV_stack_4->SetBinContent(5,156.402);
   houtFV_stack_4->SetBinContent(6,130.883);
   houtFV_stack_4->SetBinContent(7,92.93723);
   houtFV_stack_4->SetBinContent(8,70.84291);
   houtFV_stack_4->SetBinContent(9,53.90152);
   houtFV_stack_4->SetBinContent(10,38.36186);
   houtFV_stack_4->SetBinContent(11,19.48922);
   houtFV_stack_4->SetBinContent(12,13.99157);
   houtFV_stack_4->SetBinContent(13,6.725847);
   houtFV_stack_4->SetBinContent(14,1.660551);
   houtFV_stack_4->SetBinContent(15,1.127039);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,5.859173);
   houtFV_stack_4->SetBinError(5,6.400617);
   houtFV_stack_4->SetBinError(6,5.810951);
   houtFV_stack_4->SetBinError(7,4.807946);
   houtFV_stack_4->SetBinError(8,4.189016);
   houtFV_stack_4->SetBinError(9,3.686016);
   houtFV_stack_4->SetBinError(10,3.120964);
   houtFV_stack_4->SetBinError(11,2.198775);
   houtFV_stack_4->SetBinError(12,1.932003);
   houtFV_stack_4->SetBinError(13,1.315354);
   houtFV_stack_4->SetBinError(14,0.650847);
   houtFV_stack_4->SetBinError(15,0.5201044);
   houtFV_stack_4->SetBinError(16,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.506286);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.756152);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.255112);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.712474);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.75208);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.712554);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.37933);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,10.30511);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.95081);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.409309);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.066525);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.703914);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.535018);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.812844);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7720188);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9745471);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9359414);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9744471);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9179917);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8912444);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9133512);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.078649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.178766);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9912115);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.804564);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7915185);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7848934);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4567469);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.967626);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.049325);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.426812);
   hNCpi0inFVqe_stack_6->SetBinContent(7,3.66787);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.60783);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.245794);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.911322);
   hNCpi0inFVqe_stack_6->SetBinContent(11,3.12548);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.99627);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.007976);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5081119);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3955537);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5084305);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.6416047);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5199112);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4966846);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3979248);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.6022839);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5375171);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4258024);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,174.0492);
   hNCpi0inFVres_stack_7->SetBinContent(5,248.7822);
   hNCpi0inFVres_stack_7->SetBinContent(6,267.5519);
   hNCpi0inFVres_stack_7->SetBinContent(7,272.2664);
   hNCpi0inFVres_stack_7->SetBinContent(8,266.5244);
   hNCpi0inFVres_stack_7->SetBinContent(9,292.0165);
   hNCpi0inFVres_stack_7->SetBinContent(10,276.4417);
   hNCpi0inFVres_stack_7->SetBinContent(11,280.8839);
   hNCpi0inFVres_stack_7->SetBinContent(12,250.1228);
   hNCpi0inFVres_stack_7->SetBinContent(13,192.973);
   hNCpi0inFVres_stack_7->SetBinContent(14,121.412);
   hNCpi0inFVres_stack_7->SetBinContent(15,59.3935);
   hNCpi0inFVres_stack_7->SetBinContent(16,31.45523);
   hNCpi0inFVres_stack_7->SetBinContent(17,14.89469);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.532105);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.380558);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2231999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.473804);
   hNCpi0inFVres_stack_7->SetBinError(4,4.313018);
   hNCpi0inFVres_stack_7->SetBinError(5,5.156321);
   hNCpi0inFVres_stack_7->SetBinError(6,5.32955);
   hNCpi0inFVres_stack_7->SetBinError(7,5.368697);
   hNCpi0inFVres_stack_7->SetBinError(8,5.293822);
   hNCpi0inFVres_stack_7->SetBinError(9,5.680693);
   hNCpi0inFVres_stack_7->SetBinError(10,5.426426);
   hNCpi0inFVres_stack_7->SetBinError(11,5.498809);
   hNCpi0inFVres_stack_7->SetBinError(12,5.15298);
   hNCpi0inFVres_stack_7->SetBinError(13,4.546535);
   hNCpi0inFVres_stack_7->SetBinError(14,3.636557);
   hNCpi0inFVres_stack_7->SetBinError(15,2.447878);
   hNCpi0inFVres_stack_7->SetBinError(16,1.904231);
   hNCpi0inFVres_stack_7->SetBinError(17,1.340665);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6702836);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3962917);
   hNCpi0inFVres_stack_7->SetBinError(20,0.07891307);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2438946);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,45.84053);
   hNCpi0inFVdis_stack_8->SetBinContent(5,60.56401);
   hNCpi0inFVdis_stack_8->SetBinContent(6,60.78735);
   hNCpi0inFVdis_stack_8->SetBinContent(7,60.15698);
   hNCpi0inFVdis_stack_8->SetBinContent(8,56.02442);
   hNCpi0inFVdis_stack_8->SetBinContent(9,53.77495);
   hNCpi0inFVdis_stack_8->SetBinContent(10,53.97392);
   hNCpi0inFVdis_stack_8->SetBinContent(11,44.30868);
   hNCpi0inFVdis_stack_8->SetBinContent(12,41.58927);
   hNCpi0inFVdis_stack_8->SetBinContent(13,29.89314);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.41448);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.591743);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.043356);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.451472);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9212041);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.173355);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.561827);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.497059);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.590495);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.437269);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.325183);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.387265);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.117112);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.120801);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.792885);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.338558);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9780687);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6400354);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4141412);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3520856);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.3764861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5025361);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2236377);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2820092);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,154.858);
   hCCpi0inFV_stack_10->SetBinContent(5,198.7517);
   hCCpi0inFV_stack_10->SetBinContent(6,169.0755);
   hCCpi0inFV_stack_10->SetBinContent(7,149.7892);
   hCCpi0inFV_stack_10->SetBinContent(8,118.257);
   hCCpi0inFV_stack_10->SetBinContent(9,95.41708);
   hCCpi0inFV_stack_10->SetBinContent(10,67.81468);
   hCCpi0inFV_stack_10->SetBinContent(11,59.1089);
   hCCpi0inFV_stack_10->SetBinContent(12,37.32044);
   hCCpi0inFV_stack_10->SetBinContent(13,22.50753);
   hCCpi0inFV_stack_10->SetBinContent(14,12.43985);
   hCCpi0inFV_stack_10->SetBinContent(15,4.983344);
   hCCpi0inFV_stack_10->SetBinContent(16,2.443297);
   hCCpi0inFV_stack_10->SetBinContent(17,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(18,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,6.245339);
   hCCpi0inFV_stack_10->SetBinError(5,7.121053);
   hCCpi0inFV_stack_10->SetBinError(6,6.504473);
   hCCpi0inFV_stack_10->SetBinError(7,6.185844);
   hCCpi0inFV_stack_10->SetBinError(8,5.390841);
   hCCpi0inFV_stack_10->SetBinError(9,4.916994);
   hCCpi0inFV_stack_10->SetBinError(10,4.083012);
   hCCpi0inFV_stack_10->SetBinError(11,3.880152);
   hCCpi0inFV_stack_10->SetBinError(12,3.081582);
   hCCpi0inFV_stack_10->SetBinError(13,2.320171);
   hCCpi0inFV_stack_10->SetBinError(14,1.825099);
   hCCpi0inFV_stack_10->SetBinError(15,1.127594);
   hCCpi0inFV_stack_10->SetBinError(16,0.7592126);
   hCCpi0inFV_stack_10->SetBinError(17,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(18,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,68.29836);
   hNCinFV_stack_11->SetBinContent(5,77.55006);
   hNCinFV_stack_11->SetBinContent(6,81.72287);
   hNCinFV_stack_11->SetBinContent(7,68.05132);
   hNCinFV_stack_11->SetBinContent(8,58.92583);
   hNCinFV_stack_11->SetBinContent(9,52.58854);
   hNCinFV_stack_11->SetBinContent(10,37.4377);
   hNCinFV_stack_11->SetBinContent(11,23.94714);
   hNCinFV_stack_11->SetBinContent(12,17.24107);
   hNCinFV_stack_11->SetBinContent(13,13.92443);
   hNCinFV_stack_11->SetBinContent(14,7.859577);
   hNCinFV_stack_11->SetBinContent(15,3.077896);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.7319179);
   hNCinFV_stack_11->SetBinError(4,4.178138);
   hNCinFV_stack_11->SetBinError(5,4.40161);
   hNCinFV_stack_11->SetBinError(6,4.525658);
   hNCinFV_stack_11->SetBinError(7,4.173082);
   hNCinFV_stack_11->SetBinError(8,3.845799);
   hNCinFV_stack_11->SetBinError(9,3.61365);
   hNCinFV_stack_11->SetBinError(10,3.120856);
   hNCinFV_stack_11->SetBinError(11,2.402615);
   hNCinFV_stack_11->SetBinError(12,2.123464);
   hNCinFV_stack_11->SetBinError(13,1.861519);
   hNCinFV_stack_11->SetBinError(14,1.39371);
   hNCinFV_stack_11->SetBinError(15,0.9216738);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.438694);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,148.2824);
   hnumuCCinFV_stack_12->SetBinContent(5,150.7815);
   hnumuCCinFV_stack_12->SetBinContent(6,127.6671);
   hnumuCCinFV_stack_12->SetBinContent(7,83.47057);
   hnumuCCinFV_stack_12->SetBinContent(8,51.05798);
   hnumuCCinFV_stack_12->SetBinContent(9,36.97978);
   hnumuCCinFV_stack_12->SetBinContent(10,24.52098);
   hnumuCCinFV_stack_12->SetBinContent(11,14.11374);
   hnumuCCinFV_stack_12->SetBinContent(12,8.061874);
   hnumuCCinFV_stack_12->SetBinContent(13,3.899895);
   hnumuCCinFV_stack_12->SetBinContent(14,2.719455);
   hnumuCCinFV_stack_12->SetBinContent(15,1.428143);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7779026);
   hnumuCCinFV_stack_12->SetBinError(4,6.993152);
   hnumuCCinFV_stack_12->SetBinError(5,7.070853);
   hnumuCCinFV_stack_12->SetBinError(6,6.759002);
   hnumuCCinFV_stack_12->SetBinError(7,5.399975);
   hnumuCCinFV_stack_12->SetBinError(8,4.557275);
   hnumuCCinFV_stack_12->SetBinError(9,3.811719);
   hnumuCCinFV_stack_12->SetBinError(10,2.600774);
   hnumuCCinFV_stack_12->SetBinError(11,1.916517);
   hnumuCCinFV_stack_12->SetBinError(12,1.483846);
   hnumuCCinFV_stack_12->SetBinError(13,0.9696761);
   hnumuCCinFV_stack_12->SetBinError(14,0.8985341);
   hnumuCCinFV_stack_12->SetBinError(15,0.5418769);
   hnumuCCinFV_stack_12->SetBinError(16,0.4609809);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,11.61624);
   hnueCCinFV_stack_13->SetBinContent(5,12.50286);
   hnueCCinFV_stack_13->SetBinContent(6,11.8947);
   hnueCCinFV_stack_13->SetBinContent(7,3.670202);
   hnueCCinFV_stack_13->SetBinContent(8,6.976487);
   hnueCCinFV_stack_13->SetBinContent(9,1.66063);
   hnueCCinFV_stack_13->SetBinContent(10,2.042401);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,1.111003);
   hnueCCinFV_stack_13->SetBinContent(13,0.5528322);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,2.674452);
   hnueCCinFV_stack_13->SetBinError(5,2.206328);
   hnueCCinFV_stack_13->SetBinError(6,1.909922);
   hnueCCinFV_stack_13->SetBinError(7,1.173481);
   hnueCCinFV_stack_13->SetBinError(8,2.148448);
   hnueCCinFV_stack_13->SetBinError(9,0.6411275);
   hnueCCinFV_stack_13->SetBinError(10,0.8059834);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.565759);
   hnueCCinFV_stack_13->SetBinError(13,0.3928765);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__2->SetBinContent(4,926.8092);
   hmcerror__2->SetBinContent(5,1107.523);
   hmcerror__2->SetBinContent(6,1006.133);
   hmcerror__2->SetBinContent(7,857.8746);
   hmcerror__2->SetBinContent(8,725.1661);
   hmcerror__2->SetBinContent(9,656.1648);
   hmcerror__2->SetBinContent(10,547.9679);
   hmcerror__2->SetBinContent(11,479.4377);
   hmcerror__2->SetBinContent(12,399.4149);
   hmcerror__2->SetBinContent(13,290.2348);
   hmcerror__2->SetBinContent(14,173.5199);
   hmcerror__2->SetBinContent(15,87.01595);
   hmcerror__2->SetBinContent(16,46.75081);
   hmcerror__2->SetBinContent(17,20.71253);
   hmcerror__2->SetBinContent(18,6.873823);
   hmcerror__2->SetBinContent(19,1.784112);
   hmcerror__2->SetBinContent(20,0.2510999);
   hmcerror__2->SetBinContent(21,0.6705194);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,0.3895343);
   hmcerror__2->SetBinError(3,0.3895343);
   hmcerror__2->SetBinError(4,168.976);
   hmcerror__2->SetBinError(5,208.4994);
   hmcerror__2->SetBinError(6,203.1307);
   hmcerror__2->SetBinError(7,178.4308);
   hmcerror__2->SetBinError(8,155.4312);
   hmcerror__2->SetBinError(9,153.3549);
   hmcerror__2->SetBinError(10,130.0632);
   hmcerror__2->SetBinError(11,119.9079);
   hmcerror__2->SetBinError(12,101.4642);
   hmcerror__2->SetBinError(13,76.96332);
   hmcerror__2->SetBinError(14,47.19257);
   hmcerror__2->SetBinError(15,25.48434);
   hmcerror__2->SetBinError(16,17.00397);
   hmcerror__2->SetBinError(17,9.923523);
   hmcerror__2->SetBinError(18,4.544881);
   hmcerror__2->SetBinError(19,2.656048);
   hmcerror__2->SetBinError(20,0.6213783);
   hmcerror__2->SetBinError(21,3.99314);
   hmcerror__2->SetEntries(7241.585);

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
   
   Double_t _fx3001[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3001[20] = {
   0,
   0,
   0,
   829,
   991,
   962,
   762,
   621,
   554,
   461,
   397,
   306,
   256,
   151,
   78,
   38,
   23,
   8,
   5,
   2};
   Double_t _felx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3001[20] = {
   0,
   0,
   0,
   28.79236,
   31.48015,
   31.01612,
   27.60435,
   24.91987,
   23.5372,
   21.47091,
   19.92486,
   17.49286,
   16,
   12.28821,
   8.9562,
   6.3013,
   4.9457,
   3.0307,
   2.48995,
   2};
   Double_t _fehx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3001[20] = {
   1.1478,
   1.1478,
   1.1478,
   28.79236,
   31.48015,
   31.01612,
   27.60435,
   24.91987,
   23.5372,
   21.47091,
   19.92486,
   17.49286,
   16,
   12.28821,
   8.7542,
   6.0955,
   4.7346,
   2.7896,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0.5,6.5);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1124.728);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/20","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 614.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2754.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1094.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3002[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3002[20] = {
   0,
   0,
   0,
   0.1823202,
   0.1882573,
   0.2018924,
   0.2079917,
   0.2143387,
   0.233714,
   0.2373555,
   0.250101,
   0.2540322,
   0.265176,
   0.271972,
   0.2928697,
   0.3637149,
   0.4791071,
   0.6611869,
   1.488723,
   2.474626};
   Double_t _fehx3002[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3002[20] = {
   0,
   0,
   0,
   0.1823202,
   0.1882573,
   0.2018924,
   0.2079917,
   0.2143387,
   0.233714,
   0.2373555,
   0.250101,
   0.2540322,
   0.265176,
   0.271972,
   0.2928697,
   0.3637149,
   0.4791071,
   0.6611869,
   1.488723,
   2.474626};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0.5,6.5);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("BDT Score");
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
   
   Double_t _fx3003[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3003[20] = {
   0,
   0,
   0,
   0.1678898,
   0.1758283,
   0.1845535,
   0.1931718,
   0.2017477,
   0.2163357,
   0.2252016,
   0.2344273,
   0.2394937,
   0.2468337,
   0.2381372,
   0.2382522,
   0.2529295,
   0.2504116,
   0.3089296,
   0.4235071,
   1.29032};
   Double_t _fehx3003[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3003[20] = {
   0,
   0,
   0,
   0.1678898,
   0.1758283,
   0.1845535,
   0.1931718,
   0.2017477,
   0.2163357,
   0.2252016,
   0.2344273,
   0.2394937,
   0.2468337,
   0.2381372,
   0.2382522,
   0.2529295,
   0.2504116,
   0.3089296,
   0.4235071,
   1.29032};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0.5,6.5);
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
   
   Double_t _fx3004[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3004[20] = {
   10,
   10,
   10,
   0.8944667,
   0.8947892,
   0.9561357,
   0.8882417,
   0.8563556,
   0.8443001,
   0.8412902,
   0.8280533,
   0.7661207,
   0.8820444,
   0.870217,
   0.8963874,
   0.8128202,
   1.110439,
   1.163836,
   2.802515,
   7.964959};
   Double_t _felx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3004[20] = {
   0,
   0,
   0,
   0.03106611,
   0.02842392,
   0.03082705,
   0.0321776,
   0.03436436,
   0.03587087,
   0.03918279,
   0.0415588,
   0.04379621,
   0.05512777,
   0.07081725,
   0.102926,
   0.1347848,
   0.2387781,
   0.4409046,
   1.395624,
   7.964959};
   Double_t _fehx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3004[20] = {
   0,
   0,
   0,
   0.03106611,
   0.02842392,
   0.03082705,
   0.0321776,
   0.03436436,
   0.03587087,
   0.03918279,
   0.0415588,
   0.04379621,
   0.05512777,
   0.07081725,
   0.1006045,
   0.1303828,
   0.2285862,
   0.4058295,
   1.23907,
   6.050063};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0.5,6.5);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(15.41652);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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

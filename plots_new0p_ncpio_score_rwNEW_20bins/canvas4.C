#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Mar 13 17:22:31 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(0.2307692,-15.62341,6.641026,1727.62);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__10->SetBinContent(4,650.3419);
   hmc__10->SetBinContent(5,781.1704);
   hmc__10->SetBinContent(6,685.4045);
   hmc__10->SetBinContent(7,597.2423);
   hmc__10->SetBinContent(8,484.1793);
   hmc__10->SetBinContent(9,420.1028);
   hmc__10->SetBinContent(10,337.9438);
   hmc__10->SetBinContent(11,262.9491);
   hmc__10->SetBinContent(12,215.7063);
   hmc__10->SetBinContent(13,155.8393);
   hmc__10->SetBinContent(14,109.6151);
   hmc__10->SetBinContent(15,65.42896);
   hmc__10->SetBinContent(16,41.93948);
   hmc__10->SetBinContent(17,20.30832);
   hmc__10->SetBinContent(18,6.678523);
   hmc__10->SetBinContent(19,1.575194);
   hmc__10->SetBinContent(20,0.1952999);
   hmc__10->SetBinContent(21,0.6426194);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,0.3895343);
   hmc__10->SetBinError(3,0.3895343);
   hmc__10->SetBinError(4,126.0493);
   hmc__10->SetBinError(5,159.2678);
   hmc__10->SetBinError(6,139.6357);
   hmc__10->SetBinError(7,124.754);
   hmc__10->SetBinError(8,104.078);
   hmc__10->SetBinError(9,100.7881);
   hmc__10->SetBinError(10,90.34518);
   hmc__10->SetBinError(11,66.87628);
   hmc__10->SetBinError(12,57.34372);
   hmc__10->SetBinError(13,43.55189);
   hmc__10->SetBinError(14,31.69253);
   hmc__10->SetBinError(15,20.03827);
   hmc__10->SetBinError(16,16.24028);
   hmc__10->SetBinError(17,10.05467);
   hmc__10->SetBinError(18,4.70507);
   hmc__10->SetBinError(19,2.426275);
   hmc__10->SetBinError(20,0.7174405);
   hmc__10->SetBinError(21,11.81117);
   hmc__10->SetMinimum(-15.62341);
   hmc__10->SetMaximum(1640.458);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,1,6);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(820.2289);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,27.19269);
   hbadmatch_stack_1->SetBinContent(5,28.25027);
   hbadmatch_stack_1->SetBinContent(6,23.53736);
   hbadmatch_stack_1->SetBinContent(7,14.53567);
   hbadmatch_stack_1->SetBinContent(8,10.57498);
   hbadmatch_stack_1->SetBinContent(9,8.649832);
   hbadmatch_stack_1->SetBinContent(10,3.772529);
   hbadmatch_stack_1->SetBinContent(11,2.681084);
   hbadmatch_stack_1->SetBinContent(12,1.463836);
   hbadmatch_stack_1->SetBinContent(13,0.5884556);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinError(4,2.846574);
   hbadmatch_stack_1->SetBinError(5,3.335709);
   hbadmatch_stack_1->SetBinError(6,3.223382);
   hbadmatch_stack_1->SetBinError(7,2.414323);
   hbadmatch_stack_1->SetBinError(8,1.702947);
   hbadmatch_stack_1->SetBinError(9,1.532034);
   hbadmatch_stack_1->SetBinError(10,0.9746932);
   hbadmatch_stack_1->SetBinError(11,0.8779318);
   hbadmatch_stack_1->SetBinError(12,0.620407);
   hbadmatch_stack_1->SetBinError(13,0.3397478);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,103.4067);
   hext_stack_2->SetBinContent(5,107.9886);
   hext_stack_2->SetBinContent(6,84.53493);
   hext_stack_2->SetBinContent(7,67.85567);
   hext_stack_2->SetBinContent(8,49.03899);
   hext_stack_2->SetBinContent(9,30.93126);
   hext_stack_2->SetBinContent(10,18.57335);
   hext_stack_2->SetBinContent(11,9.227624);
   hext_stack_2->SetBinContent(12,6.172367);
   hext_stack_2->SetBinContent(13,2.745221);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinError(4,6.692418);
   hext_stack_2->SetBinError(5,6.737273);
   hext_stack_2->SetBinError(6,6.072653);
   hext_stack_2->SetBinError(7,5.212276);
   hext_stack_2->SetBinError(8,4.537932);
   hext_stack_2->SetBinError(9,3.689549);
   hext_stack_2->SetBinError(10,2.708805);
   hext_stack_2->SetBinError(11,2.035134);
   hext_stack_2->SetBinError(12,1.506547);
   hext_stack_2->SetBinError(13,1.168097);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,11.49456);
   hdirt_stack_3->SetBinContent(5,15.86299);
   hdirt_stack_3->SetBinContent(6,11.8468);
   hdirt_stack_3->SetBinContent(7,7.539953);
   hdirt_stack_3->SetBinContent(8,5.886965);
   hdirt_stack_3->SetBinContent(9,5.577004);
   hdirt_stack_3->SetBinContent(10,2.02694);
   hdirt_stack_3->SetBinContent(11,0.8332258);
   hdirt_stack_3->SetBinContent(12,1.634663);
   hdirt_stack_3->SetBinContent(13,0.6486359);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinError(4,1.775008);
   hdirt_stack_3->SetBinError(5,2.215653);
   hdirt_stack_3->SetBinError(6,1.755654);
   hdirt_stack_3->SetBinError(7,1.610443);
   hdirt_stack_3->SetBinError(8,1.283737);
   hdirt_stack_3->SetBinError(9,1.571094);
   hdirt_stack_3->SetBinError(10,0.7304975);
   hdirt_stack_3->SetBinError(11,0.4476755);
   hdirt_stack_3->SetBinError(12,0.8132969);
   hdirt_stack_3->SetBinError(13,0.3899356);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,116.7003);
   houtFV_stack_4->SetBinContent(5,127.224);
   houtFV_stack_4->SetBinContent(6,109.0571);
   houtFV_stack_4->SetBinContent(7,79.66441);
   houtFV_stack_4->SetBinContent(8,56.94365);
   houtFV_stack_4->SetBinContent(9,40.25429);
   houtFV_stack_4->SetBinContent(10,27.96997);
   houtFV_stack_4->SetBinContent(11,12.24696);
   houtFV_stack_4->SetBinContent(12,9.516939);
   houtFV_stack_4->SetBinContent(13,4.689695);
   houtFV_stack_4->SetBinContent(14,1.660551);
   houtFV_stack_4->SetBinContent(15,0.9303237);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,5.429421);
   houtFV_stack_4->SetBinError(5,5.779186);
   houtFV_stack_4->SetBinError(6,5.332426);
   houtFV_stack_4->SetBinError(7,4.444843);
   houtFV_stack_4->SetBinError(8,3.777584);
   houtFV_stack_4->SetBinError(9,3.211108);
   houtFV_stack_4->SetBinError(10,2.6657);
   houtFV_stack_4->SetBinError(11,1.742072);
   houtFV_stack_4->SetBinError(12,1.565987);
   houtFV_stack_4->SetBinError(13,1.084326);
   houtFV_stack_4->SetBinError(14,0.650847);
   houtFV_stack_4->SetBinError(15,0.4814682);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.478386);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.616652);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.199312);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.656673);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.75208);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.712554);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.989225);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,10.05467);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.95081);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.130974);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.038625);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.648114);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.4377);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.812844);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7715145);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9725482);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9351093);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.973648);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9179917);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8912444);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8815106);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.069105);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.178766);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.98042);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8040801);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7905345);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7788369);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4567469);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.29769);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.129122);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8650677);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.705484);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.129954);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.283904);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.295194);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4171068);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2907294);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2385154);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5876191);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3221642);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3661742);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3408511);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,125.41);
   hNCpi0inFVres_stack_7->SetBinContent(5,181.9141);
   hNCpi0inFVres_stack_7->SetBinContent(6,183.2023);
   hNCpi0inFVres_stack_7->SetBinContent(7,183.8724);
   hNCpi0inFVres_stack_7->SetBinContent(8,172.3441);
   hNCpi0inFVres_stack_7->SetBinContent(9,174.9214);
   hNCpi0inFVres_stack_7->SetBinContent(10,157.6355);
   hNCpi0inFVres_stack_7->SetBinContent(11,141.1214);
   hNCpi0inFVres_stack_7->SetBinContent(12,119.6343);
   hNCpi0inFVres_stack_7->SetBinContent(13,91.35741);
   hNCpi0inFVres_stack_7->SetBinContent(14,72.44215);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.84301);
   hNCpi0inFVres_stack_7->SetBinContent(16,27.53593);
   hNCpi0inFVres_stack_7->SetBinContent(17,14.54627);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.392606);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.17164);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.445904);
   hNCpi0inFVres_stack_7->SetBinError(4,3.660342);
   hNCpi0inFVres_stack_7->SetBinError(5,4.419585);
   hNCpi0inFVres_stack_7->SetBinError(6,4.407864);
   hNCpi0inFVres_stack_7->SetBinError(7,4.402999);
   hNCpi0inFVres_stack_7->SetBinError(8,4.251676);
   hNCpi0inFVres_stack_7->SetBinError(9,4.402239);
   hNCpi0inFVres_stack_7->SetBinError(10,4.1037);
   hNCpi0inFVres_stack_7->SetBinError(11,3.908924);
   hNCpi0inFVres_stack_7->SetBinError(12,3.528287);
   hNCpi0inFVres_stack_7->SetBinError(13,3.099848);
   hNCpi0inFVres_stack_7->SetBinError(14,2.812499);
   hNCpi0inFVres_stack_7->SetBinError(15,2.040043);
   hNCpi0inFVres_stack_7->SetBinError(16,1.772545);
   hNCpi0inFVres_stack_7->SetBinError(17,1.334506);
   hNCpi0inFVres_stack_7->SetBinError(18,0.667374);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3800824);
   hNCpi0inFVres_stack_7->SetBinError(20,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2422936);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.26107);
   hNCpi0inFVdis_stack_8->SetBinContent(5,40.37047);
   hNCpi0inFVdis_stack_8->SetBinContent(6,39.44477);
   hNCpi0inFVdis_stack_8->SetBinContent(7,40.91804);
   hNCpi0inFVdis_stack_8->SetBinContent(8,35.37285);
   hNCpi0inFVdis_stack_8->SetBinContent(9,34.28457);
   hNCpi0inFVdis_stack_8->SetBinContent(10,31.65084);
   hNCpi0inFVdis_stack_8->SetBinContent(11,25.08202);
   hNCpi0inFVdis_stack_8->SetBinContent(12,22.72032);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.02289);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.74163);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.6394);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.47157);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.395672);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8654041);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.808824);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.078678);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.008753);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.192538);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.907395);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.852164);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.806509);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.571087);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.54223);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.368701);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.100145);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8626174);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5951325);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4122573);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3498677);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,103.7473);
   hCCpi0inFV_stack_10->SetBinContent(5,128.062);
   hCCpi0inFV_stack_10->SetBinContent(6,106.9237);
   hCCpi0inFV_stack_10->SetBinContent(7,102.344);
   hCCpi0inFV_stack_10->SetBinContent(8,79.52841);
   hCCpi0inFV_stack_10->SetBinContent(9,62.89583);
   hCCpi0inFV_stack_10->SetBinContent(10,47.31293);
   hCCpi0inFV_stack_10->SetBinContent(11,37.03976);
   hCCpi0inFV_stack_10->SetBinContent(12,25.29469);
   hCCpi0inFV_stack_10->SetBinContent(13,16.70214);
   hCCpi0inFV_stack_10->SetBinContent(14,9.166925);
   hCCpi0inFV_stack_10->SetBinContent(15,4.446451);
   hCCpi0inFV_stack_10->SetBinContent(16,2.248272);
   hCCpi0inFV_stack_10->SetBinContent(17,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(18,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,5.120195);
   hCCpi0inFV_stack_10->SetBinError(5,5.707829);
   hCCpi0inFV_stack_10->SetBinError(6,5.155475);
   hCCpi0inFV_stack_10->SetBinError(7,5.108973);
   hCCpi0inFV_stack_10->SetBinError(8,4.441544);
   hCCpi0inFV_stack_10->SetBinError(9,3.948255);
   hCCpi0inFV_stack_10->SetBinError(10,3.399148);
   hCCpi0inFV_stack_10->SetBinError(11,3.067912);
   hCCpi0inFV_stack_10->SetBinError(12,2.515518);
   hCCpi0inFV_stack_10->SetBinError(13,2.019685);
   hCCpi0inFV_stack_10->SetBinError(14,1.56316);
   hCCpi0inFV_stack_10->SetBinError(15,1.056906);
   hCCpi0inFV_stack_10->SetBinError(16,0.7337364);
   hCCpi0inFV_stack_10->SetBinError(17,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(18,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,40.85694);
   hNCinFV_stack_11->SetBinContent(5,47.22021);
   hNCinFV_stack_11->SetBinContent(6,47.86338);
   hNCinFV_stack_11->SetBinContent(7,43.77462);
   hNCinFV_stack_11->SetBinContent(8,34.90139);
   hNCinFV_stack_11->SetBinContent(9,31.06852);
   hNCinFV_stack_11->SetBinContent(10,25.76397);
   hNCinFV_stack_11->SetBinContent(11,14.71913);
   hNCinFV_stack_11->SetBinContent(12,9.381613);
   hNCinFV_stack_11->SetBinContent(13,8.746058);
   hNCinFV_stack_11->SetBinContent(14,4.0901);
   hNCinFV_stack_11->SetBinContent(15,2.88118);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.7319179);
   hNCinFV_stack_11->SetBinError(4,3.195689);
   hNCinFV_stack_11->SetBinError(5,3.422414);
   hNCinFV_stack_11->SetBinError(6,3.453953);
   hNCinFV_stack_11->SetBinError(7,3.336722);
   hNCinFV_stack_11->SetBinError(8,2.95109);
   hNCinFV_stack_11->SetBinError(9,2.802918);
   hNCinFV_stack_11->SetBinError(10,2.610399);
   hNCinFV_stack_11->SetBinError(11,1.850601);
   hNCinFV_stack_11->SetBinError(12,1.558471);
   hNCinFV_stack_11->SetBinError(13,1.468248);
   hNCinFV_stack_11->SetBinError(14,1.027373);
   hNCinFV_stack_11->SetBinError(15,0.9004364);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.438694);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,75.81027);
   hnumuCCinFV_stack_12->SetBinContent(5,85.09969);
   hnumuCCinFV_stack_12->SetBinContent(6,61.38828);
   hnumuCCinFV_stack_12->SetBinContent(7,42.76338);
   hnumuCCinFV_stack_12->SetBinContent(8,24.91371);
   hnumuCCinFV_stack_12->SetBinContent(9,21.55211);
   hnumuCCinFV_stack_12->SetBinContent(10,12.68318);
   hnumuCCinFV_stack_12->SetBinContent(11,7.67314);
   hnumuCCinFV_stack_12->SetBinContent(12,6.87072);
   hnumuCCinFV_stack_12->SetBinContent(13,3.276075);
   hnumuCCinFV_stack_12->SetBinContent(14,1.516319);
   hnumuCCinFV_stack_12->SetBinContent(15,1.427456);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7779026);
   hnumuCCinFV_stack_12->SetBinError(4,5.045211);
   hnumuCCinFV_stack_12->SetBinError(5,5.320332);
   hnumuCCinFV_stack_12->SetBinError(6,4.482084);
   hnumuCCinFV_stack_12->SetBinError(7,4.056414);
   hnumuCCinFV_stack_12->SetBinError(8,2.622695);
   hnumuCCinFV_stack_12->SetBinError(9,3.181453);
   hnumuCCinFV_stack_12->SetBinError(10,1.939103);
   hnumuCCinFV_stack_12->SetBinError(11,1.375972);
   hnumuCCinFV_stack_12->SetBinError(12,1.380472);
   hnumuCCinFV_stack_12->SetBinError(13,0.9019895);
   hnumuCCinFV_stack_12->SetBinError(14,0.6389896);
   hnumuCCinFV_stack_12->SetBinError(15,0.5418765);
   hnumuCCinFV_stack_12->SetBinError(16,0.4609809);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,7.658013);
   hnueCCinFV_stack_13->SetBinContent(5,9.376524);
   hnueCCinFV_stack_13->SetBinContent(6,8.402072);
   hnueCCinFV_stack_13->SetBinContent(7,2.388601);
   hnueCCinFV_stack_13->SetBinContent(8,5.79221);
   hnueCCinFV_stack_13->SetBinContent(9,1.125428);
   hnueCCinFV_stack_13->SetBinContent(10,1.505508);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,0.7708256);
   hnueCCinFV_stack_13->SetBinContent(13,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,1.959434);
   hnueCCinFV_stack_13->SetBinError(5,1.996022);
   hnueCCinFV_stack_13->SetBinError(6,1.627502);
   hnueCCinFV_stack_13->SetBinError(7,1.048585);
   hnueCCinFV_stack_13->SetBinError(8,2.078299);
   hnueCCinFV_stack_13->SetBinError(9,0.5072366);
   hnueCCinFV_stack_13->SetBinError(10,0.7036984);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.4520646);
   hnueCCinFV_stack_13->SetBinError(13,0.3041673);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__11->SetBinContent(4,650.3419);
   hmcerror__11->SetBinContent(5,781.1704);
   hmcerror__11->SetBinContent(6,685.4045);
   hmcerror__11->SetBinContent(7,597.2423);
   hmcerror__11->SetBinContent(8,484.1793);
   hmcerror__11->SetBinContent(9,420.1028);
   hmcerror__11->SetBinContent(10,337.9438);
   hmcerror__11->SetBinContent(11,262.9491);
   hmcerror__11->SetBinContent(12,215.7063);
   hmcerror__11->SetBinContent(13,155.8393);
   hmcerror__11->SetBinContent(14,109.6151);
   hmcerror__11->SetBinContent(15,65.42896);
   hmcerror__11->SetBinContent(16,41.93948);
   hmcerror__11->SetBinContent(17,20.30832);
   hmcerror__11->SetBinContent(18,6.678523);
   hmcerror__11->SetBinContent(19,1.575194);
   hmcerror__11->SetBinContent(20,0.1952999);
   hmcerror__11->SetBinContent(21,0.6426194);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,0.3895343);
   hmcerror__11->SetBinError(3,0.3895343);
   hmcerror__11->SetBinError(4,126.0493);
   hmcerror__11->SetBinError(5,159.2678);
   hmcerror__11->SetBinError(6,139.6357);
   hmcerror__11->SetBinError(7,124.754);
   hmcerror__11->SetBinError(8,104.078);
   hmcerror__11->SetBinError(9,100.7881);
   hmcerror__11->SetBinError(10,90.34518);
   hmcerror__11->SetBinError(11,66.87628);
   hmcerror__11->SetBinError(12,57.34372);
   hmcerror__11->SetBinError(13,43.55189);
   hmcerror__11->SetBinError(14,31.69253);
   hmcerror__11->SetBinError(15,20.03827);
   hmcerror__11->SetBinError(16,16.24028);
   hmcerror__11->SetBinError(17,10.05467);
   hmcerror__11->SetBinError(18,4.70507);
   hmcerror__11->SetBinError(19,2.426275);
   hmcerror__11->SetBinError(20,0.7174405);
   hmcerror__11->SetBinError(21,11.81117);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   0,
   0,
   0,
   629,
   719,
   726,
   548,
   456,
   379,
   302,
   250,
   176,
   162,
   108,
   71,
   35,
   22,
   5,
   5,
   2};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   0,
   0,
   0,
   25.07987,
   26.81418,
   26.94439,
   23.4094,
   21.35416,
   19.46792,
   17.37815,
   15.81139,
   13.2665,
   12.72792,
   10.3923,
   8.5518,
   6.0548,
   4.8417,
   2.48995,
   2.48995,
   2};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   1.1478,
   1.1478,
   1.1478,
   25.07987,
   26.81418,
   26.94439,
   23.4094,
   21.35416,
   19.46792,
   17.37815,
   15.81139,
   13.2665,
   12.72792,
   10.3923,
   8.3496,
   5.8483,
   4.6299,
   2.21064,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0.5,6.5);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(828.2388);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1693.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 727.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0,
   0,
   0,
   0.1938201,
   0.2038836,
   0.2037274,
   0.2088834,
   0.2149575,
   0.239913,
   0.2673379,
   0.2543317,
   0.2658416,
   0.2794666,
   0.2891256,
   0.3062599,
   0.3872315,
   0.4951014,
   0.7045076,
   1.540302,
   3.673532};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0,
   0,
   0,
   0.1938201,
   0.2038836,
   0.2037274,
   0.2088834,
   0.2149575,
   0.239913,
   0.2673379,
   0.2543317,
   0.2658416,
   0.2794666,
   0.2891256,
   0.3062599,
   0.3872315,
   0.4951014,
   0.7045076,
   1.540302,
   3.673532};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0.5,6.5);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("BDT Score");
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0,
   0,
   0,
   0.169113,
   0.1753312,
   0.1823708,
   0.1835856,
   0.195747,
   0.2067387,
   0.2129956,
   0.2191203,
   0.2249012,
   0.2285713,
   0.228546,
   0.2397028,
   0.2546937,
   0.2512335,
   0.306376,
   0.4502452,
   1.550107};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0,
   0,
   0,
   0.169113,
   0.1753312,
   0.1823708,
   0.1835856,
   0.195747,
   0.2067387,
   0.2129956,
   0.2191203,
   0.2249012,
   0.2285713,
   0.228546,
   0.2397028,
   0.2546937,
   0.2512335,
   0.306376,
   0.4502452,
   1.550107};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0.5,6.5);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   10,
   10,
   10,
   0.9671836,
   0.9204138,
   1.059229,
   0.9175505,
   0.9417998,
   0.90216,
   0.8936398,
   0.9507544,
   0.8159242,
   1.039532,
   0.9852659,
   1.085146,
   0.8345359,
   1.0833,
   0.7486685,
   3.174212,
   10.24066};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0,
   0,
   0,
   0.03856414,
   0.03432564,
   0.03931166,
   0.03919582,
   0.04410382,
   0.04634085,
   0.05142319,
   0.06013099,
   0.0615026,
   0.08167337,
   0.09480725,
   0.1307036,
   0.1443699,
   0.2384097,
   0.3728294,
   1.580726,
   10.24066};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0,
   0,
   0,
   0.03856414,
   0.03432564,
   0.03931166,
   0.03919582,
   0.04410382,
   0.04634085,
   0.05142319,
   0.06013099,
   0.0615026,
   0.08167337,
   0.09480725,
   0.1276132,
   0.1394462,
   0.2279805,
   0.3310073,
   1.403408,
   7.778652};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0.5,6.5);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(19.82124);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

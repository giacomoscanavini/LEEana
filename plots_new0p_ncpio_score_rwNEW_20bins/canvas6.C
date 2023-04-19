#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Mar 13 17:22:32 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.2307692,-10.72789,6.641026,1186.279);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__16->SetBinContent(4,415.4239);
   hmc__16->SetBinContent(5,536.3947);
   hmc__16->SetBinContent(6,499.2714);
   hmc__16->SetBinContent(7,454.5529);
   hmc__16->SetBinContent(8,383.1824);
   hmc__16->SetBinContent(9,334.7446);
   hmc__16->SetBinContent(10,281.4537);
   hmc__16->SetBinContent(11,227.1211);
   hmc__16->SetBinContent(12,188.9373);
   hmc__16->SetBinContent(13,136.4235);
   hmc__16->SetBinContent(14,99.46645);
   hmc__16->SetBinContent(15,60.28232);
   hmc__16->SetBinContent(16,38.5282);
   hmc__16->SetBinContent(17,18.56353);
   hmc__16->SetBinContent(18,6.371455);
   hmc__16->SetBinContent(19,1.449976);
   hmc__16->SetBinContent(20,0.1952999);
   hmc__16->SetBinContent(21,0.6426194);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,0.3895343);
   hmc__16->SetBinError(3,0.3895343);
   hmc__16->SetBinError(4,94.35039);
   hmc__16->SetBinError(5,116.5759);
   hmc__16->SetBinError(6,106.1669);
   hmc__16->SetBinError(7,96.47157);
   hmc__16->SetBinError(8,87.76115);
   hmc__16->SetBinError(9,84.88217);
   hmc__16->SetBinError(10,81.34665);
   hmc__16->SetBinError(11,58.71082);
   hmc__16->SetBinError(12,50.81255);
   hmc__16->SetBinError(13,39.35581);
   hmc__16->SetBinError(14,28.75523);
   hmc__16->SetBinError(15,19.08866);
   hmc__16->SetBinError(16,15.35804);
   hmc__16->SetBinError(17,9.496961);
   hmc__16->SetBinError(18,4.555014);
   hmc__16->SetBinError(19,2.32422);
   hmc__16->SetBinError(20,0.7812943);
   hmc__16->SetBinError(21,11.2247);
   hmc__16->SetMinimum(-10.72789);
   hmc__16->SetMaximum(1126.429);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,1,6);
   hs6_stack_6->SetMinimum(-3.646956e-09);
   hs6_stack_6->SetMaximum(563.2145);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,16.06541);
   hbadmatch_stack_1->SetBinContent(5,17.60195);
   hbadmatch_stack_1->SetBinContent(6,17.51761);
   hbadmatch_stack_1->SetBinContent(7,11.4998);
   hbadmatch_stack_1->SetBinContent(8,7.096733);
   hbadmatch_stack_1->SetBinContent(9,6.561292);
   hbadmatch_stack_1->SetBinContent(10,2.842202);
   hbadmatch_stack_1->SetBinContent(11,1.805704);
   hbadmatch_stack_1->SetBinContent(12,1.070405);
   hbadmatch_stack_1->SetBinContent(13,0.5884556);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinError(4,2.152978);
   hbadmatch_stack_1->SetBinError(5,2.667311);
   hbadmatch_stack_1->SetBinError(6,2.973381);
   hbadmatch_stack_1->SetBinError(7,2.266084);
   hbadmatch_stack_1->SetBinError(8,1.374617);
   hbadmatch_stack_1->SetBinError(9,1.353226);
   hbadmatch_stack_1->SetBinError(10,0.8474758);
   hbadmatch_stack_1->SetBinError(11,0.7080169);
   hbadmatch_stack_1->SetBinError(12,0.5545368);
   hbadmatch_stack_1->SetBinError(13,0.3397478);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,46.63688);
   hext_stack_2->SetBinContent(5,56.89513);
   hext_stack_2->SetBinContent(6,50.13627);
   hext_stack_2->SetBinContent(7,42.71494);
   hext_stack_2->SetBinContent(8,31.9304);
   hext_stack_2->SetBinContent(9,22.81528);
   hext_stack_2->SetBinContent(10,13.21418);
   hext_stack_2->SetBinContent(11,7.537797);
   hext_stack_2->SetBinContent(12,5.441371);
   hext_stack_2->SetBinContent(13,2.745221);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinError(4,4.516275);
   hext_stack_2->SetBinError(5,4.821265);
   hext_stack_2->SetBinError(6,4.6797);
   hext_stack_2->SetBinError(7,4.162825);
   hext_stack_2->SetBinError(8,3.668786);
   hext_stack_2->SetBinError(9,3.221081);
   hext_stack_2->SetBinError(10,2.323485);
   hext_stack_2->SetBinError(11,1.7757);
   hext_stack_2->SetBinError(12,1.413905);
   hext_stack_2->SetBinError(13,1.168097);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,7.47416);
   hdirt_stack_3->SetBinContent(5,8.725624);
   hdirt_stack_3->SetBinContent(6,7.225269);
   hdirt_stack_3->SetBinContent(7,5.949529);
   hdirt_stack_3->SetBinContent(8,3.325188);
   hdirt_stack_3->SetBinContent(9,4.847584);
   hdirt_stack_3->SetBinContent(10,1.437199);
   hdirt_stack_3->SetBinContent(11,0.6951543);
   hdirt_stack_3->SetBinContent(12,1.634663);
   hdirt_stack_3->SetBinContent(13,0.6486359);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinError(4,1.461509);
   hdirt_stack_3->SetBinError(5,1.534615);
   hdirt_stack_3->SetBinError(6,1.35131);
   hdirt_stack_3->SetBinError(7,1.461342);
   hdirt_stack_3->SetBinError(8,0.9252407);
   hdirt_stack_3->SetBinError(9,1.51743);
   hdirt_stack_3->SetBinError(10,0.5690354);
   hdirt_stack_3->SetBinError(11,0.4258516);
   hdirt_stack_3->SetBinError(12,0.8132969);
   hdirt_stack_3->SetBinError(13,0.3899356);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,54.10091);
   houtFV_stack_4->SetBinContent(5,69.07067);
   houtFV_stack_4->SetBinContent(6,61.42178);
   houtFV_stack_4->SetBinContent(7,50.33062);
   houtFV_stack_4->SetBinContent(8,38.01576);
   houtFV_stack_4->SetBinContent(9,26.09579);
   houtFV_stack_4->SetBinContent(10,20.18257);
   houtFV_stack_4->SetBinContent(11,9.76282);
   houtFV_stack_4->SetBinContent(12,6.532633);
   houtFV_stack_4->SetBinContent(13,3.562656);
   houtFV_stack_4->SetBinContent(14,1.320373);
   houtFV_stack_4->SetBinContent(15,0.3934307);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,3.612779);
   houtFV_stack_4->SetBinError(5,4.147151);
   houtFV_stack_4->SetBinError(6,3.951939);
   houtFV_stack_4->SetBinError(7,3.533423);
   houtFV_stack_4->SetBinError(8,3.074312);
   houtFV_stack_4->SetBinError(9,2.594163);
   houtFV_stack_4->SetBinError(10,2.265707);
   houtFV_stack_4->SetBinError(11,1.562251);
   houtFV_stack_4->SetBinError(12,1.3113);
   houtFV_stack_4->SetBinError(13,0.9514486);
   houtFV_stack_4->SetBinError(14,0.5548703);
   houtFV_stack_4->SetBinError(15,0.2781975);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.111278);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.541418);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.90179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.03913);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.775908);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.862432);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.25004);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.975944);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,9.793621);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.086216);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.230685);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.452814);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.130632);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.784944);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6423116);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8649455);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.856277);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8630305);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8581689);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8470992);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8467159);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9140258);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.127576);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9303453);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7511502);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7870806);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7518414);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4558939);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.073322);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8650677);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.258748);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.256004);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.100558);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2880395);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2385154);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5170337);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3651098);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3118299);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,107.8582);
   hNCpi0inFVres_stack_7->SetBinContent(5,161.0707);
   hNCpi0inFVres_stack_7->SetBinContent(6,161.8939);
   hNCpi0inFVres_stack_7->SetBinContent(7,163.5311);
   hNCpi0inFVres_stack_7->SetBinContent(8,155.6019);
   hNCpi0inFVres_stack_7->SetBinContent(9,157.2008);
   hNCpi0inFVres_stack_7->SetBinContent(10,142.2449);
   hNCpi0inFVres_stack_7->SetBinContent(11,128.5435);
   hNCpi0inFVres_stack_7->SetBinContent(12,108.6618);
   hNCpi0inFVres_stack_7->SetBinContent(13,82.87877);
   hNCpi0inFVres_stack_7->SetBinContent(14,66.93538);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.91632);
   hNCpi0inFVres_stack_7->SetBinContent(16,25.20543);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.47195);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.113438);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.17164);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.445904);
   hNCpi0inFVres_stack_7->SetBinError(4,3.405107);
   hNCpi0inFVres_stack_7->SetBinError(5,4.18085);
   hNCpi0inFVres_stack_7->SetBinError(6,4.13477);
   hNCpi0inFVres_stack_7->SetBinError(7,4.161061);
   hNCpi0inFVres_stack_7->SetBinError(8,4.06679);
   hNCpi0inFVres_stack_7->SetBinError(9,4.177816);
   hNCpi0inFVres_stack_7->SetBinError(10,3.906674);
   hNCpi0inFVres_stack_7->SetBinError(11,3.726659);
   hNCpi0inFVres_stack_7->SetBinError(12,3.3769);
   hNCpi0inFVres_stack_7->SetBinError(13,2.943013);
   hNCpi0inFVres_stack_7->SetBinError(14,2.713004);
   hNCpi0inFVres_stack_7->SetBinError(15,1.97846);
   hNCpi0inFVres_stack_7->SetBinError(16,1.685485);
   hNCpi0inFVres_stack_7->SetBinError(17,1.282932);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6362743);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3800824);
   hNCpi0inFVres_stack_7->SetBinError(20,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2422936);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,26.02001);
   hNCpi0inFVdis_stack_8->SetBinContent(5,33.85862);
   hNCpi0inFVdis_stack_8->SetBinContent(6,33.25377);
   hNCpi0inFVdis_stack_8->SetBinContent(7,34.62838);
   hNCpi0inFVdis_stack_8->SetBinContent(8,31.62311);
   hNCpi0inFVdis_stack_8->SetBinContent(9,29.34858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,27.29858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.25099);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.53115);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.15508);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.59872);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.472);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.234752);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.339872);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8375041);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.669805);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.900548);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.845937);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.013109);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.815339);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.69829);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.655662);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.480466);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.467174);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.297087);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.042066);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.859906);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5837978);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4103648);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3487535);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,64.54892);
   hCCpi0inFV_stack_10->SetBinContent(5,81.65992);
   hCCpi0inFV_stack_10->SetBinContent(6,72.81142);
   hCCpi0inFV_stack_10->SetBinContent(7,72.1134);
   hCCpi0inFV_stack_10->SetBinContent(8,56.57426);
   hCCpi0inFV_stack_10->SetBinContent(9,43.39771);
   hCCpi0inFV_stack_10->SetBinContent(10,34.45553);
   hCCpi0inFV_stack_10->SetBinContent(11,28.41612);
   hCCpi0inFV_stack_10->SetBinContent(12,20.99229);
   hCCpi0inFV_stack_10->SetBinContent(13,11.57);
   hCCpi0inFV_stack_10->SetBinContent(14,7.575909);
   hCCpi0inFV_stack_10->SetBinContent(15,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(16,2.051557);
   hCCpi0inFV_stack_10->SetBinContent(17,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(18,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,4.032685);
   hCCpi0inFV_stack_10->SetBinError(5,4.545785);
   hCCpi0inFV_stack_10->SetBinError(6,4.261763);
   hCCpi0inFV_stack_10->SetBinError(7,4.263004);
   hCCpi0inFV_stack_10->SetBinError(8,3.735122);
   hCCpi0inFV_stack_10->SetBinError(9,3.244735);
   hCCpi0inFV_stack_10->SetBinError(10,2.897437);
   hCCpi0inFV_stack_10->SetBinError(11,2.690668);
   hCCpi0inFV_stack_10->SetBinError(12,2.292574);
   hCCpi0inFV_stack_10->SetBinError(13,1.692893);
   hCCpi0inFV_stack_10->SetBinError(14,1.38836);
   hCCpi0inFV_stack_10->SetBinError(15,1.00081);
   hCCpi0inFV_stack_10->SetBinError(16,0.7068749);
   hCCpi0inFV_stack_10->SetBinError(17,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(18,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,33.96938);
   hNCinFV_stack_11->SetBinContent(5,38.96733);
   hNCinFV_stack_11->SetBinContent(6,40.63441);
   hNCinFV_stack_11->SetBinContent(7,34.5931);
   hNCinFV_stack_11->SetBinContent(8,30.45663);
   hNCinFV_stack_11->SetBinContent(9,26.13674);
   hNCinFV_stack_11->SetBinContent(10,22.3913);
   hNCinFV_stack_11->SetBinContent(11,12.37823);
   hNCinFV_stack_11->SetBinContent(12,7.474474);
   hNCinFV_stack_11->SetBinContent(13,7.819116);
   hNCinFV_stack_11->SetBinContent(14,3.553207);
   hNCinFV_stack_11->SetBinContent(15,2.541003);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinError(4,2.911436);
   hNCinFV_stack_11->SetBinError(5,3.091158);
   hNCinFV_stack_11->SetBinError(6,3.181292);
   hNCinFV_stack_11->SetBinError(7,2.957178);
   hNCinFV_stack_11->SetBinError(8,2.755457);
   hNCinFV_stack_11->SetBinError(9,2.558495);
   hNCinFV_stack_11->SetBinError(10,2.450708);
   hNCinFV_stack_11->SetBinError(11,1.664236);
   hNCinFV_stack_11->SetBinError(12,1.416398);
   hNCinFV_stack_11->SetBinError(13,1.387539);
   hNCinFV_stack_11->SetBinError(14,0.9492505);
   hNCinFV_stack_11->SetBinError(15,0.8337055);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,46.74806);
   hnumuCCinFV_stack_12->SetBinContent(5,54.26654);
   hnumuCCinFV_stack_12->SetBinContent(6,39.66823);
   hnumuCCinFV_stack_12->SetBinContent(7,28.0254);
   hnumuCCinFV_stack_12->SetBinContent(8,15.54027);
   hnumuCCinFV_stack_12->SetBinContent(9,9.475362);
   hnumuCCinFV_stack_12->SetBinContent(10,8.192392);
   hnumuCCinFV_stack_12->SetBinContent(11,5.512742);
   hnumuCCinFV_stack_12->SetBinContent(12,4.93345);
   hnumuCCinFV_stack_12->SetBinContent(13,2.493359);
   hnumuCCinFV_stack_12->SetBinContent(14,1.516319);
   hnumuCCinFV_stack_12->SetBinContent(15,1.230741);
   hnumuCCinFV_stack_12->SetBinContent(16,0.437725);
   hnumuCCinFV_stack_12->SetBinError(4,4.034652);
   hnumuCCinFV_stack_12->SetBinError(5,4.510828);
   hnumuCCinFV_stack_12->SetBinError(6,3.718282);
   hnumuCCinFV_stack_12->SetBinError(7,2.786148);
   hnumuCCinFV_stack_12->SetBinError(8,2.123865);
   hnumuCCinFV_stack_12->SetBinError(9,1.527741);
   hnumuCCinFV_stack_12->SetBinError(10,1.546159);
   hnumuCCinFV_stack_12->SetBinError(11,1.160392);
   hnumuCCinFV_stack_12->SetBinError(12,1.152347);
   hnumuCCinFV_stack_12->SetBinError(13,0.773782);
   hnumuCCinFV_stack_12->SetBinError(14,0.6389896);
   hnumuCCinFV_stack_12->SetBinError(15,0.5049091);
   hnumuCCinFV_stack_12->SetBinError(16,0.311099);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,6.844273);
   hnueCCinFV_stack_13->SetBinContent(5,6.635626);
   hnueCCinFV_stack_13->SetBinContent(6,6.802417);
   hnueCCinFV_stack_13->SetBinContent(7,1.645454);
   hnueCCinFV_stack_13->SetBinContent(8,5.33552);
   hnueCCinFV_stack_13->SetBinContent(9,0.9287121);
   hnueCCinFV_stack_13->SetBinContent(10,0.9686154);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,0.7708256);
   hnueCCinFV_stack_13->SetBinContent(13,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,1.91656);
   hnueCCinFV_stack_13->SetBinError(5,1.524845);
   hnueCCinFV_stack_13->SetBinError(6,1.467825);
   hnueCCinFV_stack_13->SetBinError(7,0.7397708);
   hnueCCinFV_stack_13->SetBinError(8,2.027501);
   hnueCCinFV_stack_13->SetBinError(9,0.4675383);
   hnueCCinFV_stack_13->SetBinError(10,0.5837582);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.4520646);
   hnueCCinFV_stack_13->SetBinError(13,0.3041673);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__17->SetBinContent(4,415.4239);
   hmcerror__17->SetBinContent(5,536.3947);
   hmcerror__17->SetBinContent(6,499.2714);
   hmcerror__17->SetBinContent(7,454.5529);
   hmcerror__17->SetBinContent(8,383.1824);
   hmcerror__17->SetBinContent(9,334.7446);
   hmcerror__17->SetBinContent(10,281.4537);
   hmcerror__17->SetBinContent(11,227.1211);
   hmcerror__17->SetBinContent(12,188.9373);
   hmcerror__17->SetBinContent(13,136.4235);
   hmcerror__17->SetBinContent(14,99.46645);
   hmcerror__17->SetBinContent(15,60.28232);
   hmcerror__17->SetBinContent(16,38.5282);
   hmcerror__17->SetBinContent(17,18.56353);
   hmcerror__17->SetBinContent(18,6.371455);
   hmcerror__17->SetBinContent(19,1.449976);
   hmcerror__17->SetBinContent(20,0.1952999);
   hmcerror__17->SetBinContent(21,0.6426194);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,0.3895343);
   hmcerror__17->SetBinError(3,0.3895343);
   hmcerror__17->SetBinError(4,94.35039);
   hmcerror__17->SetBinError(5,116.5759);
   hmcerror__17->SetBinError(6,106.1669);
   hmcerror__17->SetBinError(7,96.47157);
   hmcerror__17->SetBinError(8,87.76115);
   hmcerror__17->SetBinError(9,84.88217);
   hmcerror__17->SetBinError(10,81.34665);
   hmcerror__17->SetBinError(11,58.71082);
   hmcerror__17->SetBinError(12,50.81255);
   hmcerror__17->SetBinError(13,39.35581);
   hmcerror__17->SetBinError(14,28.75523);
   hmcerror__17->SetBinError(15,19.08866);
   hmcerror__17->SetBinError(16,15.35804);
   hmcerror__17->SetBinError(17,9.496961);
   hmcerror__17->SetBinError(18,4.555014);
   hmcerror__17->SetBinError(19,2.32422);
   hmcerror__17->SetBinError(20,0.7812943);
   hmcerror__17->SetBinError(21,11.2247);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
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
   Double_t _fy3021[20] = {
   0,
   0,
   0,
   410,
   496,
   526,
   419,
   360,
   309,
   253,
   221,
   159,
   145,
   96,
   66,
   32,
   21,
   4,
   3,
   2};
   Double_t _felx3021[20] = {
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
   Double_t _fely3021[20] = {
   0,
   0,
   0,
   20.24846,
   22.27106,
   22.93469,
   20.46949,
   18.97367,
   17.5784,
   15.90597,
   14.86607,
   12.60952,
   12.04159,
   9.9196,
   8.2509,
   5.7977,
   4.7354,
   2.29683,
   2.143368,
   2};
   Double_t _fehx3021[20] = {
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
   Double_t _fehy3021[20] = {
   1.1478,
   1.1478,
   1.1478,
   20.24846,
   22.27106,
   22.93469,
   20.46949,
   18.97367,
   17.5784,
   15.90597,
   14.86607,
   12.60952,
   12.04159,
   9.718,
   8.0483,
   5.5904,
   4.5229,
   1.98186,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0.5,6.5);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(603.8282);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.5","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.9","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[20] = {
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
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
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
   Double_t _fely3022[20] = {
   0,
   0,
   0,
   0.2271184,
   0.2173324,
   0.2126437,
   0.212234,
   0.2290323,
   0.2535729,
   0.2890232,
   0.2585001,
   0.2689387,
   0.2884827,
   0.2890948,
   0.3166543,
   0.3986181,
   0.5115924,
   0.7149096,
   1.602937,
   4.000485};
   Double_t _fehx3022[20] = {
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
   Double_t _fehy3022[20] = {
   0,
   0,
   0,
   0.2271184,
   0.2173324,
   0.2126437,
   0.212234,
   0.2290323,
   0.2535729,
   0.2890232,
   0.2585001,
   0.2689387,
   0.2884827,
   0.2890948,
   0.3166543,
   0.3986181,
   0.5115924,
   0.7149096,
   1.602937,
   4.000485};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0.5,6.5);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
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
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
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
   Double_t _fely3023[20] = {
   0,
   0,
   0,
   0.1873705,
   0.1878504,
   0.1903217,
   0.191898,
   0.205978,
   0.2144199,
   0.2187736,
   0.2218875,
   0.2287248,
   0.2302151,
   0.2273559,
   0.2398119,
   0.2524155,
   0.2561991,
   0.3095856,
   0.4610353,
   1.550107};
   Double_t _fehx3023[20] = {
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
   Double_t _fehy3023[20] = {
   0,
   0,
   0,
   0.1873705,
   0.1878504,
   0.1903217,
   0.191898,
   0.205978,
   0.2144199,
   0.2187736,
   0.2218875,
   0.2287248,
   0.2302151,
   0.2273559,
   0.2398119,
   0.2524155,
   0.2561991,
   0.3095856,
   0.4610353,
   1.550107};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0.5,6.5);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
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
   Double_t _fy3024[20] = {
   10,
   10,
   10,
   0.9869437,
   0.9246922,
   1.053535,
   0.9217849,
   0.9395003,
   0.9230917,
   0.8989046,
   0.9730492,
   0.8415492,
   1.062867,
   0.9651495,
   1.094848,
   0.8305605,
   1.13125,
   0.6278001,
   2.069,
   10.24066};
   Double_t _felx3024[20] = {
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
   Double_t _fely3024[20] = {
   0,
   0,
   0,
   0.04874168,
   0.0415199,
   0.04593632,
   0.04503214,
   0.04951601,
   0.05251285,
   0.05651365,
   0.06545437,
   0.06673919,
   0.0882663,
   0.0997281,
   0.136871,
   0.1504794,
   0.2550916,
   0.3604875,
   1.478209,
   10.24066};
   Double_t _fehx3024[20] = {
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
   Double_t _fehy3024[20] = {
   0,
   0,
   0,
   0.04874168,
   0.0415199,
   0.04593632,
   0.04503214,
   0.04951601,
   0.05251285,
   0.05651365,
   0.06545437,
   0.06673919,
   0.0882663,
   0.09770128,
   0.1335101,
   0.1450989,
   0.2436444,
   0.311053,
   1.189137,
   7.778652};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0.5,6.5);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(19.82124);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

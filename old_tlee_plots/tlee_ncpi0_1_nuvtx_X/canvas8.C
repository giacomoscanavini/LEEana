#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Oct 21 23:07:16 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-40,-1.18,293.3333,130.4832);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__22->SetBinContent(0,3.828549);
   hmc__22->SetBinContent(1,46.4064);
   hmc__22->SetBinContent(2,49.47824);
   hmc__22->SetBinContent(3,49.9614);
   hmc__22->SetBinContent(4,37.19732);
   hmc__22->SetBinContent(5,31.90372);
   hmc__22->SetBinContent(6,32.02519);
   hmc__22->SetBinContent(7,26.45246);
   hmc__22->SetBinContent(8,29.55998);
   hmc__22->SetBinContent(9,27.10277);
   hmc__22->SetBinContent(10,30.47088);
   hmc__22->SetBinContent(11,28.31705);
   hmc__22->SetBinContent(12,27.62167);
   hmc__22->SetBinContent(13,29.1741);
   hmc__22->SetBinContent(14,24.19922);
   hmc__22->SetBinContent(15,29.88742);
   hmc__22->SetBinContent(16,27.19127);
   hmc__22->SetBinContent(17,28.06062);
   hmc__22->SetBinContent(18,36.54339);
   hmc__22->SetBinContent(19,25.38555);
   hmc__22->SetBinContent(20,30.65645);
   hmc__22->SetBinContent(21,38.80978);
   hmc__22->SetBinContent(22,41.56347);
   hmc__22->SetBinContent(23,49.65806);
   hmc__22->SetBinContent(24,56.81557);
   hmc__22->SetBinContent(25,57.47116);
   hmc__22->SetBinContent(26,34.82334);
   hmc__22->SetBinContent(27,2.99926);
   hmc__22->SetBinError(0,1.0622);
   hmc__22->SetBinError(1,15.41109);
   hmc__22->SetBinError(2,19.58083);
   hmc__22->SetBinError(3,15.97654);
   hmc__22->SetBinError(4,15.11759);
   hmc__22->SetBinError(5,13.49106);
   hmc__22->SetBinError(6,14.91585);
   hmc__22->SetBinError(7,13.71904);
   hmc__22->SetBinError(8,12.83239);
   hmc__22->SetBinError(9,12.17141);
   hmc__22->SetBinError(10,13.75367);
   hmc__22->SetBinError(11,9.867415);
   hmc__22->SetBinError(12,12.60197);
   hmc__22->SetBinError(13,10.20606);
   hmc__22->SetBinError(14,12.38342);
   hmc__22->SetBinError(15,10.60715);
   hmc__22->SetBinError(16,13.55257);
   hmc__22->SetBinError(17,12.64179);
   hmc__22->SetBinError(18,16.30114);
   hmc__22->SetBinError(19,13.81413);
   hmc__22->SetBinError(20,11.31462);
   hmc__22->SetBinError(21,15.35274);
   hmc__22->SetBinError(22,15.01434);
   hmc__22->SetBinError(23,27.04427);
   hmc__22->SetBinError(24,18.59925);
   hmc__22->SetBinError(25,20.23398);
   hmc__22->SetBinError(26,23.45248);
   hmc__22->SetBinError(27,3.715403);
   hmc__22->SetMinimum(-1.18);
   hmc__22->SetMaximum(123.9);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,0,260);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(60.34472);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,1.309151);
   hbadmatch_stack_1->SetBinContent(2,0.5352025);
   hbadmatch_stack_1->SetBinContent(3,0.4281982);
   hbadmatch_stack_1->SetBinContent(4,0.8345842);
   hbadmatch_stack_1->SetBinContent(5,0.2705525);
   hbadmatch_stack_1->SetBinContent(6,0.3934307);
   hbadmatch_stack_1->SetBinContent(7,0.6927344);
   hbadmatch_stack_1->SetBinContent(8,1.209909);
   hbadmatch_stack_1->SetBinContent(9,0.9871703);
   hbadmatch_stack_1->SetBinContent(10,0.5220689);
   hbadmatch_stack_1->SetBinContent(11,0.882038);
   hbadmatch_stack_1->SetBinContent(12,1.507246);
   hbadmatch_stack_1->SetBinContent(13,0.9097561);
   hbadmatch_stack_1->SetBinContent(14,1.2999);
   hbadmatch_stack_1->SetBinContent(15,1.206089);
   hbadmatch_stack_1->SetBinContent(16,1.904666);
   hbadmatch_stack_1->SetBinContent(17,0.6245391);
   hbadmatch_stack_1->SetBinContent(18,1.615183);
   hbadmatch_stack_1->SetBinContent(19,2.429616);
   hbadmatch_stack_1->SetBinContent(20,1.761275);
   hbadmatch_stack_1->SetBinContent(21,1.415552);
   hbadmatch_stack_1->SetBinContent(22,1.735738);
   hbadmatch_stack_1->SetBinContent(23,2.930954);
   hbadmatch_stack_1->SetBinContent(24,1.508659);
   hbadmatch_stack_1->SetBinContent(25,1.466392);
   hbadmatch_stack_1->SetBinContent(26,2.407263);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6873098);
   hbadmatch_stack_1->SetBinError(2,0.3921167);
   hbadmatch_stack_1->SetBinError(3,0.3037782);
   hbadmatch_stack_1->SetBinError(4,0.3956857);
   hbadmatch_stack_1->SetBinError(5,0.209139);
   hbadmatch_stack_1->SetBinError(6,0.2781975);
   hbadmatch_stack_1->SetBinError(7,0.3553908);
   hbadmatch_stack_1->SetBinError(8,0.4947364);
   hbadmatch_stack_1->SetBinError(9,0.4746373);
   hbadmatch_stack_1->SetBinError(10,0.3857528);
   hbadmatch_stack_1->SetBinError(11,0.5127904);
   hbadmatch_stack_1->SetBinError(12,0.8294523);
   hbadmatch_stack_1->SetBinError(13,0.5329788);
   hbadmatch_stack_1->SetBinError(14,0.7041547);
   hbadmatch_stack_1->SetBinError(15,0.6337895);
   hbadmatch_stack_1->SetBinError(16,0.8012169);
   hbadmatch_stack_1->SetBinError(17,0.4258209);
   hbadmatch_stack_1->SetBinError(18,0.6675579);
   hbadmatch_stack_1->SetBinError(19,1.239986);
   hbadmatch_stack_1->SetBinError(20,0.6993634);
   hbadmatch_stack_1->SetBinError(21,0.7615425);
   hbadmatch_stack_1->SetBinError(22,0.7388309);
   hbadmatch_stack_1->SetBinError(23,0.9684023);
   hbadmatch_stack_1->SetBinError(24,0.6300133);
   hbadmatch_stack_1->SetBinError(25,0.6212153);
   hbadmatch_stack_1->SetBinError(26,0.907677);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,8.477858);
   hext_stack_2->SetBinContent(2,6.489584);
   hext_stack_2->SetBinContent(3,12.29006);
   hext_stack_2->SetBinContent(4,8.485039);
   hext_stack_2->SetBinContent(5,6.165187);
   hext_stack_2->SetBinContent(6,8.656622);
   hext_stack_2->SetBinContent(7,5.89704);
   hext_stack_2->SetBinContent(8,5.89704);
   hext_stack_2->SetBinContent(9,5.001641);
   hext_stack_2->SetBinContent(10,9.526072);
   hext_stack_2->SetBinContent(11,10.58146);
   hext_stack_2->SetBinContent(12,4.703194);
   hext_stack_2->SetBinContent(13,9.305417);
   hext_stack_2->SetBinContent(14,5.027592);
   hext_stack_2->SetBinContent(15,9.753906);
   hext_stack_2->SetBinContent(16,5.199175);
   hext_stack_2->SetBinContent(17,8.417198);
   hext_stack_2->SetBinContent(18,8.447557);
   hext_stack_2->SetBinContent(19,2.994597);
   hext_stack_2->SetBinContent(20,6.400202);
   hext_stack_2->SetBinContent(21,5.669206);
   hext_stack_2->SetBinContent(22,6.071396);
   hext_stack_2->SetBinContent(23,8.846975);
   hext_stack_2->SetBinContent(24,10.2902);
   hext_stack_2->SetBinContent(25,15.50531);
   hext_stack_2->SetBinContent(26,3.647801);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,2.034329);
   hext_stack_2->SetBinError(2,1.605029);
   hext_stack_2->SetBinError(3,2.410945);
   hext_stack_2->SetBinError(4,1.984261);
   hext_stack_2->SetBinError(5,1.571905);
   hext_stack_2->SetBinError(6,1.963739);
   hext_stack_2->SetBinError(7,1.701242);
   hext_stack_2->SetBinError(8,1.701242);
   hext_stack_2->SetBinError(9,1.582242);
   hext_stack_2->SetBinError(10,2.171517);
   hext_stack_2->SetBinError(11,2.256386);
   hext_stack_2->SetBinError(12,1.389163);
   hext_stack_2->SetBinError(13,2.016615);
   hext_stack_2->SetBinError(14,1.426537);
   hext_stack_2->SetBinError(15,2.272231);
   hext_stack_2->SetBinError(16,1.397849);
   hext_stack_2->SetBinError(17,1.864082);
   hext_stack_2->SetBinError(18,1.772411);
   hext_stack_2->SetBinError(19,1.099269);
   hext_stack_2->SetBinError(20,1.648403);
   hext_stack_2->SetBinError(21,1.564185);
   hext_stack_2->SetBinError(22,1.573809);
   hext_stack_2->SetBinError(23,1.872956);
   hext_stack_2->SetBinError(24,2.077585);
   hext_stack_2->SetBinError(25,2.76944);
   hext_stack_2->SetBinError(26,1.246589);
   hext_stack_2->SetBinError(27,0.6416141);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(2,1.758908);
   hdirt_stack_3->SetBinContent(3,0.5638119);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2989119);
   hdirt_stack_3->SetBinContent(6,0.5522859);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(8,0.6926074);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.4759863);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.3986344);
   hdirt_stack_3->SetBinContent(18,1.200645);
   hdirt_stack_3->SetBinContent(20,0.5852764);
   hdirt_stack_3->SetBinContent(21,2.46618);
   hdirt_stack_3->SetBinContent(22,0.4965173);
   hdirt_stack_3->SetBinContent(23,0.9098686);
   hdirt_stack_3->SetBinContent(24,2.855974);
   hdirt_stack_3->SetBinContent(25,1.791767);
   hdirt_stack_3->SetBinContent(26,1.698144);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(2,0.7430146);
   hdirt_stack_3->SetBinError(3,0.4029034);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.211975);
   hdirt_stack_3->SetBinError(6,0.2761429);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(8,0.4009512);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2832671);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.2948844);
   hdirt_stack_3->SetBinError(18,0.6300436);
   hdirt_stack_3->SetBinError(20,0.4188361);
   hdirt_stack_3->SetBinError(21,1.139922);
   hdirt_stack_3->SetBinError(22,0.3734153);
   hdirt_stack_3->SetBinError(23,0.4190489);
   hdirt_stack_3->SetBinError(24,0.8774884);
   hdirt_stack_3->SetBinError(25,0.754641);
   hdirt_stack_3->SetBinError(26,0.732511);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,2.681942);
   houtFV_stack_4->SetBinContent(1,23.63402);
   houtFV_stack_4->SetBinContent(2,11.03439);
   houtFV_stack_4->SetBinContent(3,10.28186);
   houtFV_stack_4->SetBinContent(4,6.579775);
   houtFV_stack_4->SetBinContent(5,4.705473);
   houtFV_stack_4->SetBinContent(6,3.311561);
   houtFV_stack_4->SetBinContent(7,5.032293);
   houtFV_stack_4->SetBinContent(8,5.749783);
   houtFV_stack_4->SetBinContent(9,5.707253);
   houtFV_stack_4->SetBinContent(10,4.229626);
   houtFV_stack_4->SetBinContent(11,2.457799);
   houtFV_stack_4->SetBinContent(12,5.625175);
   houtFV_stack_4->SetBinContent(13,5.463839);
   houtFV_stack_4->SetBinContent(14,4.226747);
   houtFV_stack_4->SetBinContent(15,3.128898);
   houtFV_stack_4->SetBinContent(16,5.333936);
   houtFV_stack_4->SetBinContent(17,3.959768);
   houtFV_stack_4->SetBinContent(18,6.594306);
   houtFV_stack_4->SetBinContent(19,4.416619);
   houtFV_stack_4->SetBinContent(20,6.64515);
   houtFV_stack_4->SetBinContent(21,7.312367);
   houtFV_stack_4->SetBinContent(22,8.255547);
   houtFV_stack_4->SetBinContent(23,8.637861);
   houtFV_stack_4->SetBinContent(24,10.96);
   houtFV_stack_4->SetBinContent(25,9.202494);
   houtFV_stack_4->SetBinContent(26,14.96994);
   houtFV_stack_4->SetBinContent(27,2.301723);
   houtFV_stack_4->SetBinError(0,0.8781228);
   houtFV_stack_4->SetBinError(1,2.513553);
   houtFV_stack_4->SetBinError(2,1.706088);
   houtFV_stack_4->SetBinError(3,1.644207);
   houtFV_stack_4->SetBinError(4,1.314827);
   houtFV_stack_4->SetBinError(5,1.050955);
   houtFV_stack_4->SetBinError(6,0.8590272);
   houtFV_stack_4->SetBinError(7,1.12056);
   houtFV_stack_4->SetBinError(8,1.405124);
   houtFV_stack_4->SetBinError(9,1.260538);
   houtFV_stack_4->SetBinError(10,1.082596);
   houtFV_stack_4->SetBinError(11,0.7169921);
   houtFV_stack_4->SetBinError(12,1.190018);
   houtFV_stack_4->SetBinError(13,1.145304);
   houtFV_stack_4->SetBinError(14,0.9689643);
   houtFV_stack_4->SetBinError(15,0.8963535);
   houtFV_stack_4->SetBinError(16,1.15177);
   houtFV_stack_4->SetBinError(17,1.008479);
   houtFV_stack_4->SetBinError(18,1.293939);
   houtFV_stack_4->SetBinError(19,0.9502544);
   houtFV_stack_4->SetBinError(20,1.393351);
   houtFV_stack_4->SetBinError(21,1.372903);
   houtFV_stack_4->SetBinError(22,1.486266);
   houtFV_stack_4->SetBinError(23,1.828854);
   houtFV_stack_4->SetBinError(24,1.568452);
   houtFV_stack_4->SetBinError(25,1.521558);
   houtFV_stack_4->SetBinError(26,1.903326);
   houtFV_stack_4->SetBinError(27,0.7673941);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5244197);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8502793);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.05273);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3930815);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6947832);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1681247);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2668617);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1288862);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.132526);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8196945);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.075028);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3629266);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2570913);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4485428);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1375007);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.0913662);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.23919);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.345261);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.063833);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1966627);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4794973);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6776838);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6546655);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.083331);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.35424);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1341052);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2725299);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3963171);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3400714);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1708578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3409693);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.07891445);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1029286);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06517092);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06670532);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3806618);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4028211);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.298521);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.120079);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2308686);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06356324);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04892851);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5060236);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1156502);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3216013);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.109862);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1892202);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3427792);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3085478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3418254);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4366722);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06782815);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02802274);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05389722);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4903767);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2239659);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05911);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.0587264);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.0555087);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0403654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3031187);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1394222);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03756552);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04441126);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04149811);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.649092);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.973457);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.399782);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.393808);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.482349);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.996159);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.307845);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.47757);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.899449);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.589);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.007219);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.050213);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.983593);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.239906);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.867314);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.987868);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.472445);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.425394);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.085256);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.60159);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.158247);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.288211);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.958944);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.778117);
   hNCpi0inFVres_stack_7->SetBinContent(25,8.629733);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.964484);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4605238);
   hNCpi0inFVres_stack_7->SetBinError(2,0.939956);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7899292);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8965266);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6644578);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6767718);
   hNCpi0inFVres_stack_7->SetBinError(7,0.726732);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8017154);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7331513);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5663865);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5446583);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6128623);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5463863);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4389741);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7172926);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7118299);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4306464);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5764603);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6928318);
   hNCpi0inFVres_stack_7->SetBinError(20,0.534039);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7764883);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7497459);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8920386);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7572256);
   hNCpi0inFVres_stack_7->SetBinError(25,1.093102);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5236882);
   hNCpi0inFVres_stack_7->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.127606);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.06067);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.826959);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.853256);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.198625);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.254665);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5796915);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.16447);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.9010268);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.235232);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3972946);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.1483);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8299996);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.06592);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.662087);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5497346);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8983024);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.325855);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.187174);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5093008);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.371094);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.593039);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.431284);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.775366);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.598265);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.5223852);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2686559);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5211236);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4012199);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5214341);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3921111);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.563147);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.15768);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3455043);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2926331);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4960516);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1435628);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4079006);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.258698);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3553625);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5572159);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.191975);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3614174);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4204591);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3099841);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1674763);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7243042);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.50158);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4900154);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7512333);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3320024);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2246154);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,5.174987);
   hCCpi0inFV_stack_10->SetBinContent(2,10.69522);
   hCCpi0inFV_stack_10->SetBinContent(3,11.86091);
   hCCpi0inFV_stack_10->SetBinContent(4,8.518824);
   hCCpi0inFV_stack_10->SetBinContent(5,8.290745);
   hCCpi0inFV_stack_10->SetBinContent(6,8.791467);
   hCCpi0inFV_stack_10->SetBinContent(7,6.010046);
   hCCpi0inFV_stack_10->SetBinContent(8,6.553918);
   hCCpi0inFV_stack_10->SetBinContent(9,8.355848);
   hCCpi0inFV_stack_10->SetBinContent(10,6.734104);
   hCCpi0inFV_stack_10->SetBinContent(11,4.693038);
   hCCpi0inFV_stack_10->SetBinContent(12,5.768515);
   hCCpi0inFV_stack_10->SetBinContent(13,5.281494);
   hCCpi0inFV_stack_10->SetBinContent(14,5.461912);
   hCCpi0inFV_stack_10->SetBinContent(15,5.759243);
   hCCpi0inFV_stack_10->SetBinContent(16,5.911977);
   hCCpi0inFV_stack_10->SetBinContent(17,5.766759);
   hCCpi0inFV_stack_10->SetBinContent(18,7.6224);
   hCCpi0inFV_stack_10->SetBinContent(19,5.130187);
   hCCpi0inFV_stack_10->SetBinContent(20,7.435751);
   hCCpi0inFV_stack_10->SetBinContent(21,6.242759);
   hCCpi0inFV_stack_10->SetBinContent(22,6.751641);
   hCCpi0inFV_stack_10->SetBinContent(23,8.785419);
   hCCpi0inFV_stack_10->SetBinContent(24,12.69036);
   hCCpi0inFV_stack_10->SetBinContent(25,9.237662);
   hCCpi0inFV_stack_10->SetBinContent(26,3.462874);
   hCCpi0inFV_stack_10->SetBinError(1,1.143756);
   hCCpi0inFV_stack_10->SetBinError(2,1.6535);
   hCCpi0inFV_stack_10->SetBinError(3,1.777333);
   hCCpi0inFV_stack_10->SetBinError(4,1.499901);
   hCCpi0inFV_stack_10->SetBinError(5,1.474402);
   hCCpi0inFV_stack_10->SetBinError(6,1.52077);
   hCCpi0inFV_stack_10->SetBinError(7,1.133421);
   hCCpi0inFV_stack_10->SetBinError(8,1.356387);
   hCCpi0inFV_stack_10->SetBinError(9,1.415104);
   hCCpi0inFV_stack_10->SetBinError(10,1.345519);
   hCCpi0inFV_stack_10->SetBinError(11,1.056454);
   hCCpi0inFV_stack_10->SetBinError(12,1.193982);
   hCCpi0inFV_stack_10->SetBinError(13,1.109741);
   hCCpi0inFV_stack_10->SetBinError(14,1.209225);
   hCCpi0inFV_stack_10->SetBinError(15,1.217789);
   hCCpi0inFV_stack_10->SetBinError(16,1.225813);
   hCCpi0inFV_stack_10->SetBinError(17,1.283502);
   hCCpi0inFV_stack_10->SetBinError(18,1.373524);
   hCCpi0inFV_stack_10->SetBinError(19,1.161816);
   hCCpi0inFV_stack_10->SetBinError(20,1.365561);
   hCCpi0inFV_stack_10->SetBinError(21,1.227608);
   hCCpi0inFV_stack_10->SetBinError(22,1.296452);
   hCCpi0inFV_stack_10->SetBinError(23,1.473949);
   hCCpi0inFV_stack_10->SetBinError(24,1.826556);
   hCCpi0inFV_stack_10->SetBinError(25,1.48793);
   hCCpi0inFV_stack_10->SetBinError(26,0.961023);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,0.7799972);
   hNCinFV_stack_11->SetBinContent(2,3.441287);
   hNCinFV_stack_11->SetBinContent(3,2.261885);
   hNCinFV_stack_11->SetBinContent(4,2.03604);
   hNCinFV_stack_11->SetBinContent(5,1.133247);
   hNCinFV_stack_11->SetBinContent(6,1.105054);
   hNCinFV_stack_11->SetBinContent(7,0.09347265);
   hNCinFV_stack_11->SetBinContent(8,0.9021298);
   hNCinFV_stack_11->SetBinContent(9,0.6693317);
   hNCinFV_stack_11->SetBinContent(10,1.143539);
   hNCinFV_stack_11->SetBinContent(11,1.917027);
   hNCinFV_stack_11->SetBinContent(12,1.246498);
   hNCinFV_stack_11->SetBinContent(13,1.292538);
   hNCinFV_stack_11->SetBinContent(14,1.157801);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.4792664);
   hNCinFV_stack_11->SetBinContent(17,1.107036);
   hNCinFV_stack_11->SetBinContent(18,1.475766);
   hNCinFV_stack_11->SetBinContent(19,0.7692889);
   hNCinFV_stack_11->SetBinContent(20,0.4654257);
   hNCinFV_stack_11->SetBinContent(21,1.414876);
   hNCinFV_stack_11->SetBinContent(22,0.8799634);
   hNCinFV_stack_11->SetBinContent(23,0.7091712);
   hNCinFV_stack_11->SetBinContent(24,2.804883);
   hNCinFV_stack_11->SetBinContent(25,3.64357);
   hNCinFV_stack_11->SetBinContent(26,0.9629593);
   hNCinFV_stack_11->SetBinError(1,0.4242947);
   hNCinFV_stack_11->SetBinError(2,1.126289);
   hNCinFV_stack_11->SetBinError(3,0.7363283);
   hNCinFV_stack_11->SetBinError(4,0.768719);
   hNCinFV_stack_11->SetBinError(5,0.5353239);
   hNCinFV_stack_11->SetBinError(6,0.6908147);
   hNCinFV_stack_11->SetBinError(7,0.09347264);
   hNCinFV_stack_11->SetBinError(8,0.4705577);
   hNCinFV_stack_11->SetBinError(9,0.342751);
   hNCinFV_stack_11->SetBinError(10,0.5562616);
   hNCinFV_stack_11->SetBinError(11,0.7006396);
   hNCinFV_stack_11->SetBinError(12,0.6376641);
   hNCinFV_stack_11->SetBinError(13,0.6659559);
   hNCinFV_stack_11->SetBinError(14,0.541275);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.2604194);
   hNCinFV_stack_11->SetBinError(17,0.5081651);
   hNCinFV_stack_11->SetBinError(18,0.8535203);
   hNCinFV_stack_11->SetBinError(19,0.6064766);
   hNCinFV_stack_11->SetBinError(20,0.3155732);
   hNCinFV_stack_11->SetBinError(21,0.5278395);
   hNCinFV_stack_11->SetBinError(22,0.387412);
   hNCinFV_stack_11->SetBinError(23,0.4135905);
   hNCinFV_stack_11->SetBinError(24,0.860221);
   hNCinFV_stack_11->SetBinError(25,1.00563);
   hNCinFV_stack_11->SetBinError(26,0.4309689);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,2.729269);
   hnumuCCinFV_stack_12->SetBinContent(2,4.585344);
   hnumuCCinFV_stack_12->SetBinContent(3,2.675324);
   hnumuCCinFV_stack_12->SetBinContent(4,1.826773);
   hnumuCCinFV_stack_12->SetBinContent(5,3.976754);
   hnumuCCinFV_stack_12->SetBinContent(6,2.887832);
   hnumuCCinFV_stack_12->SetBinContent(7,2.465465);
   hnumuCCinFV_stack_12->SetBinContent(8,2.340419);
   hnumuCCinFV_stack_12->SetBinContent(9,0.8768651);
   hnumuCCinFV_stack_12->SetBinContent(10,2.612435);
   hnumuCCinFV_stack_12->SetBinContent(11,2.950631);
   hnumuCCinFV_stack_12->SetBinContent(12,2.733617);
   hnumuCCinFV_stack_12->SetBinContent(13,2.850373);
   hnumuCCinFV_stack_12->SetBinContent(14,2.922005);
   hnumuCCinFV_stack_12->SetBinContent(15,2.954271);
   hnumuCCinFV_stack_12->SetBinContent(16,3.179598);
   hnumuCCinFV_stack_12->SetBinContent(17,2.720062);
   hnumuCCinFV_stack_12->SetBinContent(18,4.29431);
   hnumuCCinFV_stack_12->SetBinContent(19,3.308978);
   hnumuCCinFV_stack_12->SetBinContent(20,3.055816);
   hnumuCCinFV_stack_12->SetBinContent(21,7.083282);
   hnumuCCinFV_stack_12->SetBinContent(22,9.311964);
   hnumuCCinFV_stack_12->SetBinContent(23,9.785841);
   hnumuCCinFV_stack_12->SetBinContent(24,5.068679);
   hnumuCCinFV_stack_12->SetBinContent(25,4.789496);
   hnumuCCinFV_stack_12->SetBinContent(26,4.053386);
   hnumuCCinFV_stack_12->SetBinError(1,0.854664);
   hnumuCCinFV_stack_12->SetBinError(2,1.084748);
   hnumuCCinFV_stack_12->SetBinError(3,0.8436856);
   hnumuCCinFV_stack_12->SetBinError(4,0.677832);
   hnumuCCinFV_stack_12->SetBinError(5,1.080315);
   hnumuCCinFV_stack_12->SetBinError(6,0.8679539);
   hnumuCCinFV_stack_12->SetBinError(7,0.8571967);
   hnumuCCinFV_stack_12->SetBinError(8,0.7195455);
   hnumuCCinFV_stack_12->SetBinError(9,0.4411497);
   hnumuCCinFV_stack_12->SetBinError(10,0.8171883);
   hnumuCCinFV_stack_12->SetBinError(11,0.8388566);
   hnumuCCinFV_stack_12->SetBinError(12,0.87378);
   hnumuCCinFV_stack_12->SetBinError(13,1.073614);
   hnumuCCinFV_stack_12->SetBinError(14,0.8310343);
   hnumuCCinFV_stack_12->SetBinError(15,0.9370868);
   hnumuCCinFV_stack_12->SetBinError(16,0.8570056);
   hnumuCCinFV_stack_12->SetBinError(17,0.7984188);
   hnumuCCinFV_stack_12->SetBinError(18,1.091039);
   hnumuCCinFV_stack_12->SetBinError(19,0.9641429);
   hnumuCCinFV_stack_12->SetBinError(20,1.370853);
   hnumuCCinFV_stack_12->SetBinError(21,1.384086);
   hnumuCCinFV_stack_12->SetBinError(22,2.474071);
   hnumuCCinFV_stack_12->SetBinError(23,2.634526);
   hnumuCCinFV_stack_12->SetBinError(24,1.178799);
   hnumuCCinFV_stack_12->SetBinError(25,1.141857);
   hnumuCCinFV_stack_12->SetBinError(26,1.051623);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.6840218);
   hnueCCinFV_stack_13->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(8,0.4432483);
   hnueCCinFV_stack_13->SetBinContent(9,0.4228751);
   hnueCCinFV_stack_13->SetBinContent(15,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.3025491);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.526453);
   hnueCCinFV_stack_13->SetBinError(7,0.2781975);
   hnueCCinFV_stack_13->SetBinError(8,0.3134667);
   hnueCCinFV_stack_13->SetBinError(9,0.2997418);
   hnueCCinFV_stack_13->SetBinError(15,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4566905);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.3152389);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__23->SetBinContent(0,3.828549);
   hmcerror__23->SetBinContent(1,46.4064);
   hmcerror__23->SetBinContent(2,49.47824);
   hmcerror__23->SetBinContent(3,49.9614);
   hmcerror__23->SetBinContent(4,37.19732);
   hmcerror__23->SetBinContent(5,31.90372);
   hmcerror__23->SetBinContent(6,32.02519);
   hmcerror__23->SetBinContent(7,26.45246);
   hmcerror__23->SetBinContent(8,29.55998);
   hmcerror__23->SetBinContent(9,27.10277);
   hmcerror__23->SetBinContent(10,30.47088);
   hmcerror__23->SetBinContent(11,28.31705);
   hmcerror__23->SetBinContent(12,27.62167);
   hmcerror__23->SetBinContent(13,29.1741);
   hmcerror__23->SetBinContent(14,24.19922);
   hmcerror__23->SetBinContent(15,29.88742);
   hmcerror__23->SetBinContent(16,27.19127);
   hmcerror__23->SetBinContent(17,28.06062);
   hmcerror__23->SetBinContent(18,36.54339);
   hmcerror__23->SetBinContent(19,25.38555);
   hmcerror__23->SetBinContent(20,30.65645);
   hmcerror__23->SetBinContent(21,38.80978);
   hmcerror__23->SetBinContent(22,41.56347);
   hmcerror__23->SetBinContent(23,49.65806);
   hmcerror__23->SetBinContent(24,56.81557);
   hmcerror__23->SetBinContent(25,57.47116);
   hmcerror__23->SetBinContent(26,34.82334);
   hmcerror__23->SetBinContent(27,2.99926);
   hmcerror__23->SetBinError(0,1.0622);
   hmcerror__23->SetBinError(1,15.41109);
   hmcerror__23->SetBinError(2,19.58083);
   hmcerror__23->SetBinError(3,15.97654);
   hmcerror__23->SetBinError(4,15.11759);
   hmcerror__23->SetBinError(5,13.49106);
   hmcerror__23->SetBinError(6,14.91585);
   hmcerror__23->SetBinError(7,13.71904);
   hmcerror__23->SetBinError(8,12.83239);
   hmcerror__23->SetBinError(9,12.17141);
   hmcerror__23->SetBinError(10,13.75367);
   hmcerror__23->SetBinError(11,9.867415);
   hmcerror__23->SetBinError(12,12.60197);
   hmcerror__23->SetBinError(13,10.20606);
   hmcerror__23->SetBinError(14,12.38342);
   hmcerror__23->SetBinError(15,10.60715);
   hmcerror__23->SetBinError(16,13.55257);
   hmcerror__23->SetBinError(17,12.64179);
   hmcerror__23->SetBinError(18,16.30114);
   hmcerror__23->SetBinError(19,13.81413);
   hmcerror__23->SetBinError(20,11.31462);
   hmcerror__23->SetBinError(21,15.35274);
   hmcerror__23->SetBinError(22,15.01434);
   hmcerror__23->SetBinError(23,27.04427);
   hmcerror__23->SetBinError(24,18.59925);
   hmcerror__23->SetBinError(25,20.23398);
   hmcerror__23->SetBinError(26,23.45248);
   hmcerror__23->SetBinError(27,3.715403);
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
   
   Double_t _fx3029[26] = {
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
   Double_t _fy3029[26] = {
   50,
   59,
   38,
   35,
   31,
   24,
   33,
   34,
   24,
   22,
   24,
   35,
   30,
   31,
   26,
   28,
   21,
   25,
   31,
   32,
   37,
   32,
   43,
   50,
   56,
   31};
   Double_t _felx3029[26] = {
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
   Double_t _fely3029[26] = {
   7.2025,
   7.8097,
   6.3013,
   6.0548,
   5.7094,
   5.0476,
   5.8847,
   5.9703,
   5.0476,
   4.8417,
   5.0476,
   6.0548,
   5.6197,
   5.7094,
   5.2453,
   5.4358,
   4.7354,
   5.1474,
   5.7094,
   5.7977,
   6.2203,
   5.7977,
   6.6917,
   7.2025,
   7.6127,
   5.7094};
   Double_t _fehx3029[26] = {
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
   Double_t _fehy3029[26] = {
   6.9985,
   7.6066,
   6.0955,
   5.8483,
   5.5017,
   4.837,
   5.6776,
   5.7635,
   4.837,
   4.6299,
   4.837,
   5.8483,
   5.4117,
   5.5017,
   5.0358,
   5.2271,
   4.5229,
   4.9374,
   5.5017,
   5.5904,
   6.0141,
   5.5904,
   6.4868,
   6.9985,
   7.4094,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,286);
   Graph_Graph3029->SetMinimum(11.2304);
   Graph_Graph3029->SetMaximum(71.6408);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 882.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 197.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 187.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[26] = {
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
   Double_t _fy3030[26] = {
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
   Double_t _felx3030[26] = {
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
   Double_t _fely3030[26] = {
   0.3320898,
   0.3957462,
   0.3197778,
   0.4064161,
   0.4228679,
   0.4657537,
   0.5186302,
   0.4341135,
   0.4490836,
   0.451371,
   0.348462,
   0.4562349,
   0.349833,
   0.5117279,
   0.3549036,
   0.4984163,
   0.4505172,
   0.4460763,
   0.544173,
   0.369078,
   0.3955894,
   0.3612388,
   0.5446098,
   0.3273618,
   0.3520719,
   0.67347};
   Double_t _fehx3030[26] = {
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
   Double_t _fehy3030[26] = {
   0.3320898,
   0.3957462,
   0.3197778,
   0.4064161,
   0.4228679,
   0.4657537,
   0.5186302,
   0.4341135,
   0.4490836,
   0.451371,
   0.348462,
   0.4562349,
   0.349833,
   0.5117279,
   0.3549036,
   0.4984163,
   0.4505172,
   0.4460763,
   0.544173,
   0.369078,
   0.3955894,
   0.3612388,
   0.5446098,
   0.3273618,
   0.3520719,
   0.67347};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,286);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3031[26] = {
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
   Double_t _fy3031[26] = {
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
   Double_t _felx3031[26] = {
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
   Double_t _fely3031[26] = {
   0.1886509,
   0.204349,
   0.1961688,
   0.1893404,
   0.215328,
   0.1878049,
   0.2123856,
   0.2044506,
   0.1970391,
   0.1769489,
   0.1783862,
   0.1848839,
   0.1899462,
   0.2124141,
   0.1874394,
   0.2030672,
   0.1945455,
   0.1768151,
   0.239402,
   0.2031592,
   0.1756501,
   0.1931009,
   0.2160259,
   0.1807258,
   0.1782165,
   0.2086839};
   Double_t _fehx3031[26] = {
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
   Double_t _fehy3031[26] = {
   0.1886509,
   0.204349,
   0.1961688,
   0.1893404,
   0.215328,
   0.1878049,
   0.2123856,
   0.2044506,
   0.1970391,
   0.1769489,
   0.1783862,
   0.1848839,
   0.1899462,
   0.2124141,
   0.1874394,
   0.2030672,
   0.1945455,
   0.1768151,
   0.239402,
   0.2031592,
   0.1756501,
   0.1931009,
   0.2160259,
   0.1807258,
   0.1782165,
   0.2086839};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,286);
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
   
   Double_t _fx3032[26] = {
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
   Double_t _fy3032[26] = {
   1.077438,
   1.192443,
   0.7605872,
   0.9409279,
   0.9716736,
   0.74941,
   1.247521,
   1.150204,
   0.8855183,
   0.7220008,
   0.8475459,
   1.267121,
   1.028309,
   1.281033,
   0.8699312,
   1.029742,
   0.7483797,
   0.6841182,
   1.221167,
   1.043826,
   0.953368,
   0.7699069,
   0.8659219,
   0.8800405,
   0.9744018,
   0.8902075};
   Double_t _felx3032[26] = {
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
   Double_t _fely3032[26] = {
   0.1552049,
   0.1578411,
   0.1261234,
   0.1627752,
   0.1789572,
   0.1576134,
   0.2224633,
   0.2019724,
   0.1862393,
   0.158896,
   0.178253,
   0.2192047,
   0.1926263,
   0.2359332,
   0.1755019,
   0.1999097,
   0.1687561,
   0.1408572,
   0.2249075,
   0.1891184,
   0.1602766,
   0.1394903,
   0.1347556,
   0.1267698,
   0.1324612,
   0.1639533};
   Double_t _fehx3032[26] = {
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
   Double_t _fehy3032[26] = {
   0.1508089,
   0.1537363,
   0.1220042,
   0.1572237,
   0.172447,
   0.1510373,
   0.2146341,
   0.1949764,
   0.1784688,
   0.1519451,
   0.1708158,
   0.2117287,
   0.1854967,
   0.2273503,
   0.1684923,
   0.1922345,
   0.1611832,
   0.1351106,
   0.2167257,
   0.1823564,
   0.1549635,
   0.1345027,
   0.1306294,
   0.1231793,
   0.1289238,
   0.1579889};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,286);
   Graph_Graph3032->SetMinimum(0.4467488);
   Graph_Graph3032->SetMaximum(1.604895);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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

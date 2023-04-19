#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Mar 13 20:05:49 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-169.2308,-2.928975,1241.026,323.883);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__16->SetBinContent(0,1.725646);
   hmc__16->SetBinContent(1,92.70241);
   hmc__16->SetBinContent(2,125.5773);
   hmc__16->SetBinContent(3,124.8426);
   hmc__16->SetBinContent(4,116.8236);
   hmc__16->SetBinContent(5,134.3905);
   hmc__16->SetBinContent(6,131.4552);
   hmc__16->SetBinContent(7,123.492);
   hmc__16->SetBinContent(8,128.4106);
   hmc__16->SetBinContent(9,127.4165);
   hmc__16->SetBinContent(10,116.3648);
   hmc__16->SetBinContent(11,115.1069);
   hmc__16->SetBinContent(12,118.9146);
   hmc__16->SetBinContent(13,124.5428);
   hmc__16->SetBinContent(14,136.5546);
   hmc__16->SetBinContent(15,136.9308);
   hmc__16->SetBinContent(16,119.522);
   hmc__16->SetBinContent(17,126.1072);
   hmc__16->SetBinContent(18,126.7425);
   hmc__16->SetBinContent(19,122.0587);
   hmc__16->SetBinContent(20,130.5432);
   hmc__16->SetBinContent(21,146.4487);
   hmc__16->SetBinContent(22,116.4478);
   hmc__16->SetBinContent(23,120.2252);
   hmc__16->SetBinContent(24,130.7153);
   hmc__16->SetBinContent(25,123.7779);
   hmc__16->SetBinContent(26,131.6577);
   hmc__16->SetBinContent(27,128.1387);
   hmc__16->SetBinContent(28,128.2761);
   hmc__16->SetBinContent(29,108.5919);
   hmc__16->SetBinContent(30,67.18107);
   hmc__16->SetBinContent(31,1.320648);
   hmc__16->SetBinError(0,0.5991823);
   hmc__16->SetBinError(1,24.22858);
   hmc__16->SetBinError(2,34.10615);
   hmc__16->SetBinError(3,38.23837);
   hmc__16->SetBinError(4,28.26072);
   hmc__16->SetBinError(5,35.3562);
   hmc__16->SetBinError(6,38.41489);
   hmc__16->SetBinError(7,29.83407);
   hmc__16->SetBinError(8,35.50399);
   hmc__16->SetBinError(9,35.32764);
   hmc__16->SetBinError(10,27.9395);
   hmc__16->SetBinError(11,30.33383);
   hmc__16->SetBinError(12,30.51327);
   hmc__16->SetBinError(13,30.95274);
   hmc__16->SetBinError(14,33.82327);
   hmc__16->SetBinError(15,43.28661);
   hmc__16->SetBinError(16,34.26939);
   hmc__16->SetBinError(17,31.15475);
   hmc__16->SetBinError(18,30.76574);
   hmc__16->SetBinError(19,29.20495);
   hmc__16->SetBinError(20,32.89478);
   hmc__16->SetBinError(21,37.56487);
   hmc__16->SetBinError(22,39.88211);
   hmc__16->SetBinError(23,30.30403);
   hmc__16->SetBinError(24,39.0495);
   hmc__16->SetBinError(25,32.78892);
   hmc__16->SetBinError(26,39.0401);
   hmc__16->SetBinError(27,32.79754);
   hmc__16->SetBinError(28,31.16237);
   hmc__16->SetBinError(29,37.53634);
   hmc__16->SetBinError(30,20.81984);
   hmc__16->SetBinError(31,3.009633);
   hmc__16->SetBinError(32,0.3895343);
   hmc__16->SetBinError(33,0.3895343);
   hmc__16->SetMinimum(-2.928975);
   hmc__16->SetMaximum(307.5424);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",32,0,1100);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(153.7712);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,2.876492);
   hbadmatch_stack_1->SetBinContent(2,2.376844);
   hbadmatch_stack_1->SetBinContent(3,1.900774);
   hbadmatch_stack_1->SetBinContent(4,3.981561);
   hbadmatch_stack_1->SetBinContent(5,4.740697);
   hbadmatch_stack_1->SetBinContent(6,4.765225);
   hbadmatch_stack_1->SetBinContent(7,1.900498);
   hbadmatch_stack_1->SetBinContent(8,2.288793);
   hbadmatch_stack_1->SetBinContent(9,3.298618);
   hbadmatch_stack_1->SetBinContent(10,2.231648);
   hbadmatch_stack_1->SetBinContent(11,1.517099);
   hbadmatch_stack_1->SetBinContent(12,3.780915);
   hbadmatch_stack_1->SetBinContent(13,1.513708);
   hbadmatch_stack_1->SetBinContent(14,4.388113);
   hbadmatch_stack_1->SetBinContent(15,1.867923);
   hbadmatch_stack_1->SetBinContent(16,3.104706);
   hbadmatch_stack_1->SetBinContent(17,2.057363);
   hbadmatch_stack_1->SetBinContent(18,1.802323);
   hbadmatch_stack_1->SetBinContent(19,1.534175);
   hbadmatch_stack_1->SetBinContent(20,3.580038);
   hbadmatch_stack_1->SetBinContent(21,6.738088);
   hbadmatch_stack_1->SetBinContent(22,2.623864);
   hbadmatch_stack_1->SetBinContent(23,2.109978);
   hbadmatch_stack_1->SetBinContent(24,3.613967);
   hbadmatch_stack_1->SetBinContent(25,1.712114);
   hbadmatch_stack_1->SetBinContent(26,1.708733);
   hbadmatch_stack_1->SetBinContent(27,3.271162);
   hbadmatch_stack_1->SetBinContent(28,1.985604);
   hbadmatch_stack_1->SetBinContent(29,2.10731);
   hbadmatch_stack_1->SetBinContent(30,1.861376);
   hbadmatch_stack_1->SetBinError(1,0.8191208);
   hbadmatch_stack_1->SetBinError(2,0.7716723);
   hbadmatch_stack_1->SetBinError(3,0.6938744);
   hbadmatch_stack_1->SetBinError(4,1.066658);
   hbadmatch_stack_1->SetBinError(5,1.245582);
   hbadmatch_stack_1->SetBinError(6,1.327889);
   hbadmatch_stack_1->SetBinError(7,0.6936688);
   hbadmatch_stack_1->SetBinError(8,0.8368238);
   hbadmatch_stack_1->SetBinError(9,0.9926206);
   hbadmatch_stack_1->SetBinError(10,0.8240308);
   hbadmatch_stack_1->SetBinError(11,0.5887087);
   hbadmatch_stack_1->SetBinError(12,2.08498);
   hbadmatch_stack_1->SetBinError(13,0.5875827);
   hbadmatch_stack_1->SetBinError(14,1.826331);
   hbadmatch_stack_1->SetBinError(15,0.67421);
   hbadmatch_stack_1->SetBinError(16,0.8942802);
   hbadmatch_stack_1->SetBinError(17,0.7087455);
   hbadmatch_stack_1->SetBinError(18,0.7070809);
   hbadmatch_stack_1->SetBinError(19,0.6662535);
   hbadmatch_stack_1->SetBinError(20,0.9915082);
   hbadmatch_stack_1->SetBinError(21,1.376461);
   hbadmatch_stack_1->SetBinError(22,0.7772599);
   hbadmatch_stack_1->SetBinError(23,0.7822456);
   hbadmatch_stack_1->SetBinError(24,1.043463);
   hbadmatch_stack_1->SetBinError(25,0.6201715);
   hbadmatch_stack_1->SetBinError(26,0.6191027);
   hbadmatch_stack_1->SetBinError(27,1.798705);
   hbadmatch_stack_1->SetBinError(28,0.8113273);
   hbadmatch_stack_1->SetBinError(29,0.8353745);
   hbadmatch_stack_1->SetBinError(30,0.7363857);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,6.075805);
   hext_stack_2->SetBinContent(2,7.779993);
   hext_stack_2->SetBinContent(3,10.19364);
   hext_stack_2->SetBinContent(4,8.828205);
   hext_stack_2->SetBinContent(5,12.4716);
   hext_stack_2->SetBinContent(6,11.83439);
   hext_stack_2->SetBinContent(7,9.373258);
   hext_stack_2->SetBinContent(8,10.60742);
   hext_stack_2->SetBinContent(9,7.716561);
   hext_stack_2->SetBinContent(10,9.413568);
   hext_stack_2->SetBinContent(11,13.85303);
   hext_stack_2->SetBinContent(12,6.007964);
   hext_stack_2->SetBinContent(13,9.331367);
   hext_stack_2->SetBinContent(14,13.09885);
   hext_stack_2->SetBinContent(15,9.972982);
   hext_stack_2->SetBinContent(16,8.678164);
   hext_stack_2->SetBinContent(17,7.855014);
   hext_stack_2->SetBinContent(18,10.5368);
   hext_stack_2->SetBinContent(19,12.05064);
   hext_stack_2->SetBinContent(20,10.6968);
   hext_stack_2->SetBinContent(21,18.65278);
   hext_stack_2->SetBinContent(22,9.145422);
   hext_stack_2->SetBinContent(23,9.481409);
   hext_stack_2->SetBinContent(24,8.346586);
   hext_stack_2->SetBinContent(25,6.000783);
   hext_stack_2->SetBinContent(26,8.98102);
   hext_stack_2->SetBinContent(27,8.917588);
   hext_stack_2->SetBinContent(28,10.51803);
   hext_stack_2->SetBinContent(29,4.620993);
   hext_stack_2->SetBinContent(30,2.357392);
   hext_stack_2->SetBinError(1,1.616168);
   hext_stack_2->SetBinError(2,1.788367);
   hext_stack_2->SetBinError(3,2.158396);
   hext_stack_2->SetBinError(4,1.942999);
   hext_stack_2->SetBinError(5,2.279058);
   hext_stack_2->SetBinError(6,2.217557);
   hext_stack_2->SetBinError(7,2.128199);
   hext_stack_2->SetBinError(8,2.150068);
   hext_stack_2->SetBinError(9,1.694369);
   hext_stack_2->SetBinError(10,1.91268);
   hext_stack_2->SetBinError(11,2.479229);
   hext_stack_2->SetBinError(12,1.466119);
   hext_stack_2->SetBinError(13,1.896907);
   hext_stack_2->SetBinError(14,2.451159);
   hext_stack_2->SetBinError(15,2.002479);
   hext_stack_2->SetBinError(16,1.803515);
   hext_stack_2->SetBinError(17,1.859985);
   hext_stack_2->SetBinError(18,2.120525);
   hext_stack_2->SetBinError(19,2.330491);
   hext_stack_2->SetBinError(20,2.116998);
   hext_stack_2->SetBinError(21,2.781013);
   hext_stack_2->SetBinError(22,2.020317);
   hext_stack_2->SetBinError(23,2.029984);
   hext_stack_2->SetBinError(24,1.829927);
   hext_stack_2->SetBinError(25,1.533202);
   hext_stack_2->SetBinError(26,1.990353);
   hext_stack_2->SetBinError(27,1.90634);
   hext_stack_2->SetBinError(28,2.182638);
   hext_stack_2->SetBinError(29,1.367364);
   hext_stack_2->SetBinError(30,0.9653222);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,5.774215);
   hdirt_stack_3->SetBinContent(2,4.960975);
   hdirt_stack_3->SetBinContent(3,4.01859);
   hdirt_stack_3->SetBinContent(4,1.228641);
   hdirt_stack_3->SetBinContent(5,0.8487517);
   hdirt_stack_3->SetBinContent(6,1.312822);
   hdirt_stack_3->SetBinContent(7,1.573012);
   hdirt_stack_3->SetBinContent(8,1.31892);
   hdirt_stack_3->SetBinContent(9,1.471133);
   hdirt_stack_3->SetBinContent(10,1.901039);
   hdirt_stack_3->SetBinContent(11,0.8520056);
   hdirt_stack_3->SetBinContent(12,0.3695036);
   hdirt_stack_3->SetBinContent(13,1.512961);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,0.9396383);
   hdirt_stack_3->SetBinContent(16,1.023377);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.7567513);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,1.276893);
   hdirt_stack_3->SetBinContent(22,1.07357);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,1.983438);
   hdirt_stack_3->SetBinContent(27,0.9712972);
   hdirt_stack_3->SetBinContent(28,0.9140499);
   hdirt_stack_3->SetBinContent(29,0.6951543);
   hdirt_stack_3->SetBinContent(30,0.3569671);
   hdirt_stack_3->SetBinError(1,1.29128);
   hdirt_stack_3->SetBinError(2,1.150517);
   hdirt_stack_3->SetBinError(3,1.00992);
   hdirt_stack_3->SetBinError(4,0.5169031);
   hdirt_stack_3->SetBinError(5,0.4973496);
   hdirt_stack_3->SetBinError(6,0.6152015);
   hdirt_stack_3->SetBinError(7,0.6762364);
   hdirt_stack_3->SetBinError(8,0.5583609);
   hdirt_stack_3->SetBinError(9,0.6257402);
   hdirt_stack_3->SetBinError(10,1.174715);
   hdirt_stack_3->SetBinError(11,0.3911799);
   hdirt_stack_3->SetBinError(12,0.2657029);
   hdirt_stack_3->SetBinError(13,0.7120011);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.4868118);
   hdirt_stack_3->SetBinError(16,0.5655242);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.4605545);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.5924964);
   hdirt_stack_3->SetBinError(22,0.5046897);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.209415);
   hdirt_stack_3->SetBinError(27,0.4684838);
   hdirt_stack_3->SetBinError(28,0.4788161);
   hdirt_stack_3->SetBinError(29,0.4258516);
   hdirt_stack_3->SetBinError(30,0.258803);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.536893);
   houtFV_stack_4->SetBinContent(1,23.27599);
   houtFV_stack_4->SetBinContent(2,15.92295);
   houtFV_stack_4->SetBinContent(3,9.837324);
   houtFV_stack_4->SetBinContent(4,10.00136);
   houtFV_stack_4->SetBinContent(5,8.77484);
   houtFV_stack_4->SetBinContent(6,11.48198);
   houtFV_stack_4->SetBinContent(7,10.21587);
   houtFV_stack_4->SetBinContent(8,10.79407);
   houtFV_stack_4->SetBinContent(9,10.48227);
   houtFV_stack_4->SetBinContent(10,8.942774);
   houtFV_stack_4->SetBinContent(11,9.972841);
   houtFV_stack_4->SetBinContent(12,9.153648);
   houtFV_stack_4->SetBinContent(13,7.48954);
   houtFV_stack_4->SetBinContent(14,10.76344);
   houtFV_stack_4->SetBinContent(15,12.16548);
   houtFV_stack_4->SetBinContent(16,9.876478);
   houtFV_stack_4->SetBinContent(17,11.71656);
   houtFV_stack_4->SetBinContent(18,10.69448);
   houtFV_stack_4->SetBinContent(19,9.040827);
   houtFV_stack_4->SetBinContent(20,12.17931);
   houtFV_stack_4->SetBinContent(21,11.38196);
   houtFV_stack_4->SetBinContent(22,10.74108);
   houtFV_stack_4->SetBinContent(23,10.30856);
   houtFV_stack_4->SetBinContent(24,9.99498);
   houtFV_stack_4->SetBinContent(25,12.84248);
   houtFV_stack_4->SetBinContent(26,9.628778);
   houtFV_stack_4->SetBinContent(27,13.83253);
   houtFV_stack_4->SetBinContent(28,10.29861);
   houtFV_stack_4->SetBinContent(29,15.11096);
   houtFV_stack_4->SetBinContent(30,13.18767);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.3929602);
   houtFV_stack_4->SetBinError(1,2.430028);
   houtFV_stack_4->SetBinError(2,2.001069);
   houtFV_stack_4->SetBinError(3,1.591548);
   houtFV_stack_4->SetBinError(4,1.595822);
   houtFV_stack_4->SetBinError(5,1.432173);
   houtFV_stack_4->SetBinError(6,1.676992);
   houtFV_stack_4->SetBinError(7,1.551242);
   houtFV_stack_4->SetBinError(8,1.647907);
   houtFV_stack_4->SetBinError(9,1.553401);
   houtFV_stack_4->SetBinError(10,1.481367);
   houtFV_stack_4->SetBinError(11,1.531978);
   houtFV_stack_4->SetBinError(12,1.498375);
   houtFV_stack_4->SetBinError(13,1.400945);
   houtFV_stack_4->SetBinError(14,1.620985);
   houtFV_stack_4->SetBinError(15,1.727495);
   houtFV_stack_4->SetBinError(16,1.558071);
   houtFV_stack_4->SetBinError(17,1.693769);
   houtFV_stack_4->SetBinError(18,1.671912);
   houtFV_stack_4->SetBinError(19,1.454126);
   houtFV_stack_4->SetBinError(20,1.747335);
   houtFV_stack_4->SetBinError(21,1.745064);
   houtFV_stack_4->SetBinError(22,1.617497);
   houtFV_stack_4->SetBinError(23,1.630742);
   houtFV_stack_4->SetBinError(24,1.598365);
   houtFV_stack_4->SetBinError(25,1.810015);
   houtFV_stack_4->SetBinError(26,1.567571);
   houtFV_stack_4->SetBinError(27,1.830093);
   houtFV_stack_4->SetBinError(28,1.589875);
   houtFV_stack_4->SetBinError(29,2.015351);
   houtFV_stack_4->SetBinError(30,1.82543);
   houtFV_stack_4->SetBinError(31,0.3929602);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.938894);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.565816);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.481116);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.385462);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.249202);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.861506);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.261156);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.857434);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.20702);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.177952);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.899616);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.192402);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.584338);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.651924);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.58317);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.263652);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.580762);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.711052);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.277934);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.244962);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.273694);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.829366);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.838912);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.248866);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.812611);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,3.958992);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.404896);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,3.877788);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.49199);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4879888);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5555585);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5042668);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5323031);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6059881);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.615283);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5795039);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5210948);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6105738);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5359458);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5157142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5600354);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6648912);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6160206);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5977427);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6273941);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5373969);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6768331);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6223072);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4768956);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4974676);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.487855);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3716245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5492757);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7793369);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.6486932);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.6924659);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.6901204);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3569339);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.3442606);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.4593539);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1818869);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7953222);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.41966);
   hNCpi0inFVres_stack_7->SetBinContent(2,49.2613);
   hNCpi0inFVres_stack_7->SetBinContent(3,51.50362);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.53564);
   hNCpi0inFVres_stack_7->SetBinContent(5,50.69616);
   hNCpi0inFVres_stack_7->SetBinContent(6,54.43878);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.8711);
   hNCpi0inFVres_stack_7->SetBinContent(8,52.80729);
   hNCpi0inFVres_stack_7->SetBinContent(9,55.57236);
   hNCpi0inFVres_stack_7->SetBinContent(10,50.74516);
   hNCpi0inFVres_stack_7->SetBinContent(11,48.37165);
   hNCpi0inFVres_stack_7->SetBinContent(12,52.52794);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.25709);
   hNCpi0inFVres_stack_7->SetBinContent(14,57.57931);
   hNCpi0inFVres_stack_7->SetBinContent(15,57.14275);
   hNCpi0inFVres_stack_7->SetBinContent(16,52.60898);
   hNCpi0inFVres_stack_7->SetBinContent(17,55.52172);
   hNCpi0inFVres_stack_7->SetBinContent(18,55.02735);
   hNCpi0inFVres_stack_7->SetBinContent(19,51.70073);
   hNCpi0inFVres_stack_7->SetBinContent(20,52.31222);
   hNCpi0inFVres_stack_7->SetBinContent(21,52.15294);
   hNCpi0inFVres_stack_7->SetBinContent(22,46.57259);
   hNCpi0inFVres_stack_7->SetBinContent(23,53.78046);
   hNCpi0inFVres_stack_7->SetBinContent(24,56.31425);
   hNCpi0inFVres_stack_7->SetBinContent(25,50.15072);
   hNCpi0inFVres_stack_7->SetBinContent(26,57.29776);
   hNCpi0inFVres_stack_7->SetBinContent(27,50.2622);
   hNCpi0inFVres_stack_7->SetBinContent(28,58.1475);
   hNCpi0inFVres_stack_7->SetBinContent(29,48.09266);
   hNCpi0inFVres_stack_7->SetBinContent(30,23.25045);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1952999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.356662);
   hNCpi0inFVres_stack_7->SetBinError(1,1.656955);
   hNCpi0inFVres_stack_7->SetBinError(2,2.27853);
   hNCpi0inFVres_stack_7->SetBinError(3,2.386464);
   hNCpi0inFVres_stack_7->SetBinError(4,2.195213);
   hNCpi0inFVres_stack_7->SetBinError(5,2.311823);
   hNCpi0inFVres_stack_7->SetBinError(6,2.43844);
   hNCpi0inFVres_stack_7->SetBinError(7,2.268314);
   hNCpi0inFVres_stack_7->SetBinError(8,2.411368);
   hNCpi0inFVres_stack_7->SetBinError(9,2.413653);
   hNCpi0inFVres_stack_7->SetBinError(10,2.319765);
   hNCpi0inFVres_stack_7->SetBinError(11,2.250903);
   hNCpi0inFVres_stack_7->SetBinError(12,2.36577);
   hNCpi0inFVres_stack_7->SetBinError(13,2.438786);
   hNCpi0inFVres_stack_7->SetBinError(14,2.496305);
   hNCpi0inFVres_stack_7->SetBinError(15,2.478101);
   hNCpi0inFVres_stack_7->SetBinError(16,2.34705);
   hNCpi0inFVres_stack_7->SetBinError(17,2.443874);
   hNCpi0inFVres_stack_7->SetBinError(18,2.489463);
   hNCpi0inFVres_stack_7->SetBinError(19,2.355809);
   hNCpi0inFVres_stack_7->SetBinError(20,2.37055);
   hNCpi0inFVres_stack_7->SetBinError(21,2.325532);
   hNCpi0inFVres_stack_7->SetBinError(22,2.213107);
   hNCpi0inFVres_stack_7->SetBinError(23,2.406153);
   hNCpi0inFVres_stack_7->SetBinError(24,2.547073);
   hNCpi0inFVres_stack_7->SetBinError(25,2.245493);
   hNCpi0inFVres_stack_7->SetBinError(26,2.47313);
   hNCpi0inFVres_stack_7->SetBinError(27,2.260508);
   hNCpi0inFVres_stack_7->SetBinError(28,2.525679);
   hNCpi0inFVres_stack_7->SetBinError(29,2.281076);
   hNCpi0inFVres_stack_7->SetBinError(30,1.661296);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07381642);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.901215);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.172987);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.03973);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.714882);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.06704);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.96731);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.59989);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.32951);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.83638);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.663738);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.064716);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.856037);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.744932);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.03905);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.52914);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.33542);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.35128);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.31756);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.61309);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.08324);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.31748);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.605105);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.15365);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.01049);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.57248);
   hNCpi0inFVdis_stack_8->SetBinContent(26,10.77741);
   hNCpi0inFVdis_stack_8->SetBinContent(27,11.68367);
   hNCpi0inFVdis_stack_8->SetBinContent(28,11.1559);
   hNCpi0inFVdis_stack_8->SetBinContent(29,5.900037);
   hNCpi0inFVdis_stack_8->SetBinContent(30,5.103564);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8579048);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9606694);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.078349);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.008984);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.037324);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9990337);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.081982);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.026859);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.123859);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.032749);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9984172);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9570497);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9309022);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.015776);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.090403);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.110299);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.129443);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.042035);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.125848);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.063142);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.020968);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9704109);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.022967);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.022015);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.060026);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.035697);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.102942);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.107579);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.7118204);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7640375);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,9.913434);
   hCCpi0inFV_stack_10->SetBinContent(2,14.49526);
   hCCpi0inFV_stack_10->SetBinContent(3,17.28756);
   hCCpi0inFV_stack_10->SetBinContent(4,16.88638);
   hCCpi0inFV_stack_10->SetBinContent(5,20.27107);
   hCCpi0inFV_stack_10->SetBinContent(6,17.36387);
   hCCpi0inFV_stack_10->SetBinContent(7,16.62628);
   hCCpi0inFV_stack_10->SetBinContent(8,16.78819);
   hCCpi0inFV_stack_10->SetBinContent(9,17.28931);
   hCCpi0inFV_stack_10->SetBinContent(10,15.54187);
   hCCpi0inFV_stack_10->SetBinContent(11,16.0178);
   hCCpi0inFV_stack_10->SetBinContent(12,16.53519);
   hCCpi0inFV_stack_10->SetBinContent(13,19.02475);
   hCCpi0inFV_stack_10->SetBinContent(14,18.86168);
   hCCpi0inFV_stack_10->SetBinContent(15,22.58404);
   hCCpi0inFV_stack_10->SetBinContent(16,14.60237);
   hCCpi0inFV_stack_10->SetBinContent(17,14.84955);
   hCCpi0inFV_stack_10->SetBinContent(18,16.51296);
   hCCpi0inFV_stack_10->SetBinContent(19,15.7189);
   hCCpi0inFV_stack_10->SetBinContent(20,17.75331);
   hCCpi0inFV_stack_10->SetBinContent(21,16.86009);
   hCCpi0inFV_stack_10->SetBinContent(22,18.27557);
   hCCpi0inFV_stack_10->SetBinContent(23,16.46205);
   hCCpi0inFV_stack_10->SetBinContent(24,20.64195);
   hCCpi0inFV_stack_10->SetBinContent(25,17.17947);
   hCCpi0inFV_stack_10->SetBinContent(26,20.16028);
   hCCpi0inFV_stack_10->SetBinContent(27,18.00422);
   hCCpi0inFV_stack_10->SetBinContent(28,14.89526);
   hCCpi0inFV_stack_10->SetBinContent(29,13.29144);
   hCCpi0inFV_stack_10->SetBinContent(30,10.79643);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.606631);
   hCCpi0inFV_stack_10->SetBinError(2,1.869968);
   hCCpi0inFV_stack_10->SetBinError(3,2.113793);
   hCCpi0inFV_stack_10->SetBinError(4,1.962579);
   hCCpi0inFV_stack_10->SetBinError(5,2.219161);
   hCCpi0inFV_stack_10->SetBinError(6,2.059233);
   hCCpi0inFV_stack_10->SetBinError(7,1.992586);
   hCCpi0inFV_stack_10->SetBinError(8,2.047432);
   hCCpi0inFV_stack_10->SetBinError(9,2.095681);
   hCCpi0inFV_stack_10->SetBinError(10,1.982714);
   hCCpi0inFV_stack_10->SetBinError(11,2.032345);
   hCCpi0inFV_stack_10->SetBinError(12,2.052297);
   hCCpi0inFV_stack_10->SetBinError(13,2.182782);
   hCCpi0inFV_stack_10->SetBinError(14,2.172896);
   hCCpi0inFV_stack_10->SetBinError(15,2.347635);
   hCCpi0inFV_stack_10->SetBinError(16,1.832882);
   hCCpi0inFV_stack_10->SetBinError(17,1.97308);
   hCCpi0inFV_stack_10->SetBinError(18,2.059843);
   hCCpi0inFV_stack_10->SetBinError(19,2.039739);
   hCCpi0inFV_stack_10->SetBinError(20,2.029256);
   hCCpi0inFV_stack_10->SetBinError(21,2.006613);
   hCCpi0inFV_stack_10->SetBinError(22,2.10124);
   hCCpi0inFV_stack_10->SetBinError(23,2.039361);
   hCCpi0inFV_stack_10->SetBinError(24,2.308688);
   hCCpi0inFV_stack_10->SetBinError(25,2.099083);
   hCCpi0inFV_stack_10->SetBinError(26,2.296867);
   hCCpi0inFV_stack_10->SetBinError(27,2.065024);
   hCCpi0inFV_stack_10->SetBinError(28,1.978277);
   hCCpi0inFV_stack_10->SetBinError(29,1.863273);
   hCCpi0inFV_stack_10->SetBinError(30,1.699643);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,3.039249);
   hNCinFV_stack_11->SetBinContent(2,8.111112);
   hNCinFV_stack_11->SetBinContent(3,7.820806);
   hNCinFV_stack_11->SetBinContent(4,8.059549);
   hNCinFV_stack_11->SetBinContent(5,11.09204);
   hNCinFV_stack_11->SetBinContent(6,7.377503);
   hNCinFV_stack_11->SetBinContent(7,10.74172);
   hNCinFV_stack_11->SetBinContent(8,8.45467);
   hNCinFV_stack_11->SetBinContent(9,9.141179);
   hNCinFV_stack_11->SetBinContent(10,9.23477);
   hNCinFV_stack_11->SetBinContent(11,6.845682);
   hNCinFV_stack_11->SetBinContent(12,10.25699);
   hNCinFV_stack_11->SetBinContent(13,9.038054);
   hNCinFV_stack_11->SetBinContent(14,8.304445);
   hNCinFV_stack_11->SetBinContent(15,7.817425);
   hNCinFV_stack_11->SetBinContent(16,9.579411);
   hNCinFV_stack_11->SetBinContent(17,9.725172);
   hNCinFV_stack_11->SetBinContent(18,8.117266);
   hNCinFV_stack_11->SetBinContent(19,8.648005);
   hNCinFV_stack_11->SetBinContent(20,11.28706);
   hNCinFV_stack_11->SetBinContent(21,12.9487);
   hNCinFV_stack_11->SetBinContent(22,7.36905);
   hNCinFV_stack_11->SetBinContent(23,8.122337);
   hNCinFV_stack_11->SetBinContent(24,9.62989);
   hNCinFV_stack_11->SetBinContent(25,10.78374);
   hNCinFV_stack_11->SetBinContent(26,8.749439);
   hNCinFV_stack_11->SetBinContent(27,8.394047);
   hNCinFV_stack_11->SetBinContent(28,9.758263);
   hNCinFV_stack_11->SetBinContent(29,8.846411);
   hNCinFV_stack_11->SetBinContent(30,4.498013);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.8337521);
   hNCinFV_stack_11->SetBinError(2,1.442671);
   hNCinFV_stack_11->SetBinError(3,1.387778);
   hNCinFV_stack_11->SetBinError(4,1.456121);
   hNCinFV_stack_11->SetBinError(5,1.677135);
   hNCinFV_stack_11->SetBinError(6,1.374112);
   hNCinFV_stack_11->SetBinError(7,1.641063);
   hNCinFV_stack_11->SetBinError(8,1.482681);
   hNCinFV_stack_11->SetBinError(9,1.494593);
   hNCinFV_stack_11->SetBinError(10,1.533128);
   hNCinFV_stack_11->SetBinError(11,1.31748);
   hNCinFV_stack_11->SetBinError(12,1.642653);
   hNCinFV_stack_11->SetBinError(13,1.520456);
   hNCinFV_stack_11->SetBinError(14,1.455566);
   hNCinFV_stack_11->SetBinError(15,1.3873);
   hNCinFV_stack_11->SetBinError(16,1.506507);
   hNCinFV_stack_11->SetBinError(17,1.59558);
   hNCinFV_stack_11->SetBinError(18,1.37307);
   hNCinFV_stack_11->SetBinError(19,1.495231);
   hNCinFV_stack_11->SetBinError(20,1.688436);
   hNCinFV_stack_11->SetBinError(21,1.753982);
   hNCinFV_stack_11->SetBinError(22,1.372907);
   hNCinFV_stack_11->SetBinError(23,1.373793);
   hNCinFV_stack_11->SetBinError(24,1.558377);
   hNCinFV_stack_11->SetBinError(25,1.687825);
   hNCinFV_stack_11->SetBinError(26,1.468699);
   hNCinFV_stack_11->SetBinError(27,1.426673);
   hNCinFV_stack_11->SetBinError(28,1.536803);
   hNCinFV_stack_11->SetBinError(29,1.508335);
   hNCinFV_stack_11->SetBinError(30,1.038297);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,7.097437);
   hnumuCCinFV_stack_12->SetBinContent(2,9.441046);
   hnumuCCinFV_stack_12->SetBinContent(3,9.17408);
   hnumuCCinFV_stack_12->SetBinContent(4,8.156156);
   hnumuCCinFV_stack_12->SetBinContent(5,7.968962);
   hnumuCCinFV_stack_12->SetBinContent(6,7.793617);
   hnumuCCinFV_stack_12->SetBinContent(7,7.459975);
   hnumuCCinFV_stack_12->SetBinContent(8,10.18735);
   hnumuCCinFV_stack_12->SetBinContent(9,6.11651);
   hnumuCCinFV_stack_12->SetBinContent(10,4.735424);
   hnumuCCinFV_stack_12->SetBinContent(11,5.102862);
   hnumuCCinFV_stack_12->SetBinContent(12,5.92826);
   hnumuCCinFV_stack_12->SetBinContent(13,7.952231);
   hnumuCCinFV_stack_12->SetBinContent(14,7.632462);
   hnumuCCinFV_stack_12->SetBinContent(15,8.298021);
   hnumuCCinFV_stack_12->SetBinContent(16,4.35026);
   hnumuCCinFV_stack_12->SetBinContent(17,7.27192);
   hnumuCCinFV_stack_12->SetBinContent(18,8.198046);
   hnumuCCinFV_stack_12->SetBinContent(19,6.173404);
   hnumuCCinFV_stack_12->SetBinContent(20,7.77684);
   hnumuCCinFV_stack_12->SetBinContent(21,12.38088);
   hnumuCCinFV_stack_12->SetBinContent(22,6.650461);
   hnumuCCinFV_stack_12->SetBinContent(23,6.939416);
   hnumuCCinFV_stack_12->SetBinContent(24,7.238512);
   hnumuCCinFV_stack_12->SetBinContent(25,6.661016);
   hnumuCCinFV_stack_12->SetBinContent(26,6.709044);
   hnumuCCinFV_stack_12->SetBinContent(27,6.588927);
   hnumuCCinFV_stack_12->SetBinContent(28,5.955771);
   hnumuCCinFV_stack_12->SetBinContent(29,7.406533);
   hnumuCCinFV_stack_12->SetBinContent(30,4.695168);
   hnumuCCinFV_stack_12->SetBinError(1,1.676176);
   hnumuCCinFV_stack_12->SetBinError(2,1.648136);
   hnumuCCinFV_stack_12->SetBinError(3,1.620076);
   hnumuCCinFV_stack_12->SetBinError(4,1.441571);
   hnumuCCinFV_stack_12->SetBinError(5,1.461923);
   hnumuCCinFV_stack_12->SetBinError(6,1.5729);
   hnumuCCinFV_stack_12->SetBinError(7,1.9715);
   hnumuCCinFV_stack_12->SetBinError(8,2.028235);
   hnumuCCinFV_stack_12->SetBinError(9,1.355915);
   hnumuCCinFV_stack_12->SetBinError(10,1.383993);
   hnumuCCinFV_stack_12->SetBinError(11,1.156705);
   hnumuCCinFV_stack_12->SetBinError(12,1.698423);
   hnumuCCinFV_stack_12->SetBinError(13,1.550524);
   hnumuCCinFV_stack_12->SetBinError(14,1.424982);
   hnumuCCinFV_stack_12->SetBinError(15,1.562354);
   hnumuCCinFV_stack_12->SetBinError(16,1.033893);
   hnumuCCinFV_stack_12->SetBinError(17,1.494463);
   hnumuCCinFV_stack_12->SetBinError(18,1.495566);
   hnumuCCinFV_stack_12->SetBinError(19,1.469161);
   hnumuCCinFV_stack_12->SetBinError(20,2.031381);
   hnumuCCinFV_stack_12->SetBinError(21,1.858072);
   hnumuCCinFV_stack_12->SetBinError(22,1.32759);
   hnumuCCinFV_stack_12->SetBinError(23,1.288135);
   hnumuCCinFV_stack_12->SetBinError(24,1.449939);
   hnumuCCinFV_stack_12->SetBinError(25,1.262856);
   hnumuCCinFV_stack_12->SetBinError(26,1.409339);
   hnumuCCinFV_stack_12->SetBinError(27,1.772739);
   hnumuCCinFV_stack_12->SetBinError(28,1.239402);
   hnumuCCinFV_stack_12->SetBinError(29,1.623733);
   hnumuCCinFV_stack_12->SetBinError(30,1.446832);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,1.325324);
   hnueCCinFV_stack_13->SetBinContent(8,1.586209);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(11,0.498003);
   hnueCCinFV_stack_13->SetBinContent(12,0.6781358);
   hnueCCinFV_stack_13->SetBinContent(13,0.8849428);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.47188);
   hnueCCinFV_stack_13->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_13->SetBinContent(17,0.4679016);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.321025);
   hnueCCinFV_stack_13->SetBinContent(20,1.077868);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.170972);
   hnueCCinFV_stack_13->SetBinContent(23,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.395914);
   hnueCCinFV_stack_13->SetBinContent(27,1.389486);
   hnueCCinFV_stack_13->SetBinContent(28,0.3099382);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.2758068);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.6500905);
   hnueCCinFV_stack_13->SetBinError(8,0.6140084);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.4139598);
   hnueCCinFV_stack_13->SetBinError(11,0.3522085);
   hnueCCinFV_stack_13->SetBinError(12,0.4944773);
   hnueCCinFV_stack_13->SetBinError(13,0.5647814);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6336633);
   hnueCCinFV_stack_13->SetBinError(16,0.3532401);
   hnueCCinFV_stack_13->SetBinError(17,0.4679016);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.7882246);
   hnueCCinFV_stack_13->SetBinError(20,0.5370783);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.706044);
   hnueCCinFV_stack_13->SetBinError(23,0.3041673);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.5940294);
   hnueCCinFV_stack_13->SetBinError(27,0.6820323);
   hnueCCinFV_stack_13->SetBinError(28,0.3099382);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.1950249);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__17->SetBinContent(0,1.725646);
   hmcerror__17->SetBinContent(1,92.70241);
   hmcerror__17->SetBinContent(2,125.5773);
   hmcerror__17->SetBinContent(3,124.8426);
   hmcerror__17->SetBinContent(4,116.8236);
   hmcerror__17->SetBinContent(5,134.3905);
   hmcerror__17->SetBinContent(6,131.4552);
   hmcerror__17->SetBinContent(7,123.492);
   hmcerror__17->SetBinContent(8,128.4106);
   hmcerror__17->SetBinContent(9,127.4165);
   hmcerror__17->SetBinContent(10,116.3648);
   hmcerror__17->SetBinContent(11,115.1069);
   hmcerror__17->SetBinContent(12,118.9146);
   hmcerror__17->SetBinContent(13,124.5428);
   hmcerror__17->SetBinContent(14,136.5546);
   hmcerror__17->SetBinContent(15,136.9308);
   hmcerror__17->SetBinContent(16,119.522);
   hmcerror__17->SetBinContent(17,126.1072);
   hmcerror__17->SetBinContent(18,126.7425);
   hmcerror__17->SetBinContent(19,122.0587);
   hmcerror__17->SetBinContent(20,130.5432);
   hmcerror__17->SetBinContent(21,146.4487);
   hmcerror__17->SetBinContent(22,116.4478);
   hmcerror__17->SetBinContent(23,120.2252);
   hmcerror__17->SetBinContent(24,130.7153);
   hmcerror__17->SetBinContent(25,123.7779);
   hmcerror__17->SetBinContent(26,131.6577);
   hmcerror__17->SetBinContent(27,128.1387);
   hmcerror__17->SetBinContent(28,128.2761);
   hmcerror__17->SetBinContent(29,108.5919);
   hmcerror__17->SetBinContent(30,67.18107);
   hmcerror__17->SetBinContent(31,1.320648);
   hmcerror__17->SetBinError(0,0.5991823);
   hmcerror__17->SetBinError(1,24.22858);
   hmcerror__17->SetBinError(2,34.10615);
   hmcerror__17->SetBinError(3,38.23837);
   hmcerror__17->SetBinError(4,28.26072);
   hmcerror__17->SetBinError(5,35.3562);
   hmcerror__17->SetBinError(6,38.41489);
   hmcerror__17->SetBinError(7,29.83407);
   hmcerror__17->SetBinError(8,35.50399);
   hmcerror__17->SetBinError(9,35.32764);
   hmcerror__17->SetBinError(10,27.9395);
   hmcerror__17->SetBinError(11,30.33383);
   hmcerror__17->SetBinError(12,30.51327);
   hmcerror__17->SetBinError(13,30.95274);
   hmcerror__17->SetBinError(14,33.82327);
   hmcerror__17->SetBinError(15,43.28661);
   hmcerror__17->SetBinError(16,34.26939);
   hmcerror__17->SetBinError(17,31.15475);
   hmcerror__17->SetBinError(18,30.76574);
   hmcerror__17->SetBinError(19,29.20495);
   hmcerror__17->SetBinError(20,32.89478);
   hmcerror__17->SetBinError(21,37.56487);
   hmcerror__17->SetBinError(22,39.88211);
   hmcerror__17->SetBinError(23,30.30403);
   hmcerror__17->SetBinError(24,39.0495);
   hmcerror__17->SetBinError(25,32.78892);
   hmcerror__17->SetBinError(26,39.0401);
   hmcerror__17->SetBinError(27,32.79754);
   hmcerror__17->SetBinError(28,31.16237);
   hmcerror__17->SetBinError(29,37.53634);
   hmcerror__17->SetBinError(30,20.81984);
   hmcerror__17->SetBinError(31,3.009633);
   hmcerror__17->SetBinError(32,0.3895343);
   hmcerror__17->SetBinError(33,0.3895343);
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
   
   Double_t _fx3021[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3021[32] = {
   85,
   124,
   123,
   117,
   128,
   133,
   123,
   125,
   138,
   112,
   127,
   116,
   112,
   113,
   135,
   121,
   127,
   133,
   120,
   121,
   114,
   126,
   124,
   94,
   121,
   123,
   114,
   105,
   105,
   62,
   1,
   0};
   Double_t _felx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3021[32] = {
   9.3428,
   11.13553,
   11.09054,
   10.81665,
   11.31371,
   11.53256,
   11.09054,
   11.18034,
   11.74734,
   10.58301,
   11.26943,
   10.77033,
   10.58301,
   10.63015,
   11.61895,
   11,
   11.26943,
   11.53256,
   10.95445,
   11,
   10.67708,
   11.22497,
   11.13553,
   9.8173,
   11,
   11.09054,
   10.67708,
   10.24695,
   10.24695,
   8.0018,
   1,
   0};
   Double_t _fehx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3021[32] = {
   9.1411,
   11.13553,
   11.09054,
   10.81665,
   11.31371,
   11.53256,
   11.09054,
   11.18034,
   11.74734,
   10.58301,
   11.26943,
   10.77033,
   10.58301,
   10.63015,
   11.61895,
   11,
   11.26943,
   11.53256,
   10.95445,
   11,
   10.67708,
   11.22497,
   11.13553,
   9.616,
   11,
   11.09054,
   10.67708,
   10.24695,
   10.24695,
   7.7989,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1210);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(164.7221);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/32","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 340.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 261.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3022[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3022[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3022[32] = {
   0.2613587,
   0.2715949,
   0.3062927,
   0.2419093,
   0.2630857,
   0.2922279,
   0.2415871,
   0.2764879,
   0.2772612,
   0.2401027,
   0.2635275,
   0.2565983,
   0.2485308,
   0.2476905,
   0.3161204,
   0.2867203,
   0.2470497,
   0.2427422,
   0.2392698,
   0.2519839,
   0.2565052,
   0.3424891,
   0.2520605,
   0.298737,
   0.2649012,
   0.2965273,
   0.2559535,
   0.242932,
   0.3456643,
   0.3099064,
   2.278905,
   0};
   Double_t _fehx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3022[32] = {
   0.2613587,
   0.2715949,
   0.3062927,
   0.2419093,
   0.2630857,
   0.2922279,
   0.2415871,
   0.2764879,
   0.2772612,
   0.2401027,
   0.2635275,
   0.2565983,
   0.2485308,
   0.2476905,
   0.3161204,
   0.2867203,
   0.2470497,
   0.2427422,
   0.2392698,
   0.2519839,
   0.2565052,
   0.3424891,
   0.2520605,
   0.298737,
   0.2649012,
   0.2965273,
   0.2559535,
   0.242932,
   0.3456643,
   0.3099064,
   2.278905,
   0};
   grae = new TGraphAsymmErrors(32,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1210);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3023[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3023[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3023[32] = {
   0.1969737,
   0.2029974,
   0.2057984,
   0.1995775,
   0.2034114,
   0.2024062,
   0.2006679,
   0.2013226,
   0.2099427,
   0.202729,
   0.197124,
   0.212941,
   0.1962751,
   0.204044,
   0.2076712,
   0.217477,
   0.214539,
   0.2055514,
   0.1998566,
   0.2050874,
   0.1951917,
   0.1987489,
   0.2102735,
   0.2049045,
   0.2214287,
   0.2085374,
   0.2062615,
   0.2071945,
   0.2225692,
   0.2261298,
   0.5765653,
   0};
   Double_t _fehx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3023[32] = {
   0.1969737,
   0.2029974,
   0.2057984,
   0.1995775,
   0.2034114,
   0.2024062,
   0.2006679,
   0.2013226,
   0.2099427,
   0.202729,
   0.197124,
   0.212941,
   0.1962751,
   0.204044,
   0.2076712,
   0.217477,
   0.214539,
   0.2055514,
   0.1998566,
   0.2050874,
   0.1951917,
   0.1987489,
   0.2102735,
   0.2049045,
   0.2214287,
   0.2085374,
   0.2062615,
   0.2071945,
   0.2225692,
   0.2261298,
   0.5765653,
   0};
   grae = new TGraphAsymmErrors(32,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1210);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3024[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3024[32] = {
   0.9169125,
   0.9874395,
   0.9852408,
   1.00151,
   0.9524486,
   1.011751,
   0.9960161,
   0.9734398,
   1.083063,
   0.9624906,
   1.103322,
   0.9754902,
   0.8992889,
   0.827508,
   0.9858995,
   1.012366,
   1.00708,
   1.049372,
   0.9831338,
   0.9268966,
   0.7784293,
   1.08203,
   1.031397,
   0.7191201,
   0.9775572,
   0.9342407,
   0.8896611,
   0.8185471,
   0.9669228,
   0.922879,
   0.7572038,
   10};
   Double_t _felx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3024[32] = {
   0.1007827,
   0.08867468,
   0.08883617,
   0.09258961,
   0.08418536,
   0.08772995,
   0.08980775,
   0.0870671,
   0.09219641,
   0.09094682,
   0.09790403,
   0.09057199,
   0.08497481,
   0.07784541,
   0.08485272,
   0.09203326,
   0.08936388,
   0.0909921,
   0.08974742,
   0.08426332,
   0.07290659,
   0.09639487,
   0.09262222,
   0.07510444,
   0.08886884,
   0.08423765,
   0.08332439,
   0.07988202,
   0.09436201,
   0.119108,
   0.7572038,
   0};
   Double_t _fehx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3024[32] = {
   0.09860693,
   0.08867468,
   0.08883617,
   0.09258961,
   0.08418536,
   0.08772995,
   0.08980775,
   0.0870671,
   0.09219641,
   0.09094682,
   0.09790403,
   0.09057199,
   0.08497481,
   0.07784541,
   0.08485272,
   0.09203326,
   0.08936388,
   0.0909921,
   0.08974742,
   0.08426332,
   0.07290659,
   0.09639487,
   0.09262222,
   0.07356446,
   0.08886884,
   0.08423765,
   0.08332439,
   0.07988202,
   0.09436201,
   0.1160878,
   1.029578,
   0};
   grae = new TGraphAsymmErrors(32,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1210);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(11);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Feb 20 23:56:13 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-169.2308,-212.8676,1241.026,23538.68);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,583.1268);
   hmc__1->SetBinContent(1,10643.38);
   hmc__1->SetBinContent(2,7827.315);
   hmc__1->SetBinContent(3,7547.752);
   hmc__1->SetBinContent(4,7608.455);
   hmc__1->SetBinContent(5,7749.436);
   hmc__1->SetBinContent(6,7696.292);
   hmc__1->SetBinContent(7,7415.705);
   hmc__1->SetBinContent(8,7781.885);
   hmc__1->SetBinContent(9,7587.875);
   hmc__1->SetBinContent(10,7614.986);
   hmc__1->SetBinContent(11,7379.838);
   hmc__1->SetBinContent(12,7310.471);
   hmc__1->SetBinContent(13,7411.589);
   hmc__1->SetBinContent(14,7335.409);
   hmc__1->SetBinContent(15,7419.417);
   hmc__1->SetBinContent(16,7544.221);
   hmc__1->SetBinContent(17,7307.543);
   hmc__1->SetBinContent(18,7342.267);
   hmc__1->SetBinContent(19,7471.583);
   hmc__1->SetBinContent(20,7265.712);
   hmc__1->SetBinContent(21,8648.399);
   hmc__1->SetBinContent(22,7502.745);
   hmc__1->SetBinContent(23,7197.317);
   hmc__1->SetBinContent(24,7040.733);
   hmc__1->SetBinContent(25,7252.613);
   hmc__1->SetBinContent(26,7184.877);
   hmc__1->SetBinContent(27,7020.932);
   hmc__1->SetBinContent(28,6970.468);
   hmc__1->SetBinContent(29,7054.514);
   hmc__1->SetBinContent(30,5894.452);
   hmc__1->SetBinContent(31,218.4695);
   hmc__1->SetBinError(0,14.91881);
   hmc__1->SetBinError(1,1294.876);
   hmc__1->SetBinError(2,988.1608);
   hmc__1->SetBinError(3,962.8294);
   hmc__1->SetBinError(4,974.3554);
   hmc__1->SetBinError(5,1019.022);
   hmc__1->SetBinError(6,999.5841);
   hmc__1->SetBinError(7,962.0661);
   hmc__1->SetBinError(8,970.3312);
   hmc__1->SetBinError(9,975.6437);
   hmc__1->SetBinError(10,998.8521);
   hmc__1->SetBinError(11,951.7538);
   hmc__1->SetBinError(12,942.8174);
   hmc__1->SetBinError(13,959.3186);
   hmc__1->SetBinError(14,958.7803);
   hmc__1->SetBinError(15,944.2967);
   hmc__1->SetBinError(16,984.9623);
   hmc__1->SetBinError(17,940.1935);
   hmc__1->SetBinError(18,969.0846);
   hmc__1->SetBinError(19,968.5737);
   hmc__1->SetBinError(20,930.6248);
   hmc__1->SetBinError(21,993.9229);
   hmc__1->SetBinError(22,946.9179);
   hmc__1->SetBinError(23,929.5666);
   hmc__1->SetBinError(24,918.5885);
   hmc__1->SetBinError(25,973.8257);
   hmc__1->SetBinError(26,935.8622);
   hmc__1->SetBinError(27,939.7577);
   hmc__1->SetBinError(28,936.0734);
   hmc__1->SetBinError(29,950.5282);
   hmc__1->SetBinError(30,774.4734);
   hmc__1->SetBinError(31,61.53117);
   hmc__1->SetBinError(32,0.3895343);
   hmc__1->SetBinError(33,0.3895343);
   hmc__1->SetMinimum(-212.8676);
   hmc__1->SetMaximum(22351.1);
   hmc__1->SetEntries(201707.3);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(11175.55);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,75.25246);
   hbadmatch_stack_1->SetBinContent(1,522.1997);
   hbadmatch_stack_1->SetBinContent(2,255.7026);
   hbadmatch_stack_1->SetBinContent(3,221.3186);
   hbadmatch_stack_1->SetBinContent(4,214.3566);
   hbadmatch_stack_1->SetBinContent(5,204.1208);
   hbadmatch_stack_1->SetBinContent(6,200.7702);
   hbadmatch_stack_1->SetBinContent(7,199.9618);
   hbadmatch_stack_1->SetBinContent(8,182.5054);
   hbadmatch_stack_1->SetBinContent(9,174.3656);
   hbadmatch_stack_1->SetBinContent(10,163.2546);
   hbadmatch_stack_1->SetBinContent(11,163.1348);
   hbadmatch_stack_1->SetBinContent(12,164.367);
   hbadmatch_stack_1->SetBinContent(13,150.688);
   hbadmatch_stack_1->SetBinContent(14,160.1302);
   hbadmatch_stack_1->SetBinContent(15,142.6016);
   hbadmatch_stack_1->SetBinContent(16,139.8719);
   hbadmatch_stack_1->SetBinContent(17,142.8663);
   hbadmatch_stack_1->SetBinContent(18,163.3859);
   hbadmatch_stack_1->SetBinContent(19,170.7066);
   hbadmatch_stack_1->SetBinContent(20,172.8129);
   hbadmatch_stack_1->SetBinContent(21,340.6824);
   hbadmatch_stack_1->SetBinContent(22,184.2205);
   hbadmatch_stack_1->SetBinContent(23,144.0318);
   hbadmatch_stack_1->SetBinContent(24,168.2794);
   hbadmatch_stack_1->SetBinContent(25,170.1954);
   hbadmatch_stack_1->SetBinContent(26,206.4481);
   hbadmatch_stack_1->SetBinContent(27,189.9467);
   hbadmatch_stack_1->SetBinContent(28,212.9696);
   hbadmatch_stack_1->SetBinContent(29,303.4164);
   hbadmatch_stack_1->SetBinContent(30,395.3265);
   hbadmatch_stack_1->SetBinContent(31,18.22723);
   hbadmatch_stack_1->SetBinError(0,5.310703);
   hbadmatch_stack_1->SetBinError(1,15.76818);
   hbadmatch_stack_1->SetBinError(2,10.5196);
   hbadmatch_stack_1->SetBinError(3,8.922348);
   hbadmatch_stack_1->SetBinError(4,9.515028);
   hbadmatch_stack_1->SetBinError(5,8.538147);
   hbadmatch_stack_1->SetBinError(6,10.50425);
   hbadmatch_stack_1->SetBinError(7,9.13197);
   hbadmatch_stack_1->SetBinError(8,7.596758);
   hbadmatch_stack_1->SetBinError(9,8.76478);
   hbadmatch_stack_1->SetBinError(10,7.377613);
   hbadmatch_stack_1->SetBinError(11,8.318351);
   hbadmatch_stack_1->SetBinError(12,8.262966);
   hbadmatch_stack_1->SetBinError(13,7.035205);
   hbadmatch_stack_1->SetBinError(14,7.947369);
   hbadmatch_stack_1->SetBinError(15,6.861758);
   hbadmatch_stack_1->SetBinError(16,7.777257);
   hbadmatch_stack_1->SetBinError(17,7.31272);
   hbadmatch_stack_1->SetBinError(18,8.303072);
   hbadmatch_stack_1->SetBinError(19,12.11047);
   hbadmatch_stack_1->SetBinError(20,7.956398);
   hbadmatch_stack_1->SetBinError(21,12.14815);
   hbadmatch_stack_1->SetBinError(22,9.014239);
   hbadmatch_stack_1->SetBinError(23,7.261055);
   hbadmatch_stack_1->SetBinError(24,7.703825);
   hbadmatch_stack_1->SetBinError(25,9.284709);
   hbadmatch_stack_1->SetBinError(26,9.527478);
   hbadmatch_stack_1->SetBinError(27,8.5614);
   hbadmatch_stack_1->SetBinError(28,9.184833);
   hbadmatch_stack_1->SetBinError(29,10.09525);
   hbadmatch_stack_1->SetBinError(30,14.04617);
   hbadmatch_stack_1->SetBinError(31,2.378677);
   hbadmatch_stack_1->SetEntries(23972);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,212.7417);
   hext_stack_2->SetBinContent(1,1927.594);
   hext_stack_2->SetBinContent(2,1213.205);
   hext_stack_2->SetBinContent(3,1172.85);
   hext_stack_2->SetBinContent(4,1230.693);
   hext_stack_2->SetBinContent(5,1217.161);
   hext_stack_2->SetBinContent(6,1147.289);
   hext_stack_2->SetBinContent(7,1095.971);
   hext_stack_2->SetBinContent(8,1333.025);
   hext_stack_2->SetBinContent(9,1090.723);
   hext_stack_2->SetBinContent(10,1032.758);
   hext_stack_2->SetBinContent(11,1009.371);
   hext_stack_2->SetBinContent(12,897.1665);
   hext_stack_2->SetBinContent(13,970.285);
   hext_stack_2->SetBinContent(14,983.1562);
   hext_stack_2->SetBinContent(15,1050.213);
   hext_stack_2->SetBinContent(16,1079.766);
   hext_stack_2->SetBinContent(17,973.2875);
   hext_stack_2->SetBinContent(18,946.3974);
   hext_stack_2->SetBinContent(19,972.8709);
   hext_stack_2->SetBinContent(20,996.7701);
   hext_stack_2->SetBinContent(21,2107.635);
   hext_stack_2->SetBinContent(22,1273.108);
   hext_stack_2->SetBinContent(23,945.7572);
   hext_stack_2->SetBinContent(24,923.4166);
   hext_stack_2->SetBinContent(25,814.5996);
   hext_stack_2->SetBinContent(26,881.3604);
   hext_stack_2->SetBinContent(27,761.5139);
   hext_stack_2->SetBinContent(28,732.0722);
   hext_stack_2->SetBinContent(29,821.5928);
   hext_stack_2->SetBinContent(30,833.8199);
   hext_stack_2->SetBinContent(31,59.80187);
   hext_stack_2->SetBinError(0,9.200478);
   hext_stack_2->SetBinError(1,30.09598);
   hext_stack_2->SetBinError(2,23.8866);
   hext_stack_2->SetBinError(3,23.3646);
   hext_stack_2->SetBinError(4,23.8454);
   hext_stack_2->SetBinError(5,23.65443);
   hext_stack_2->SetBinError(6,23.1007);
   hext_stack_2->SetBinError(7,22.46406);
   hext_stack_2->SetBinError(8,25.20365);
   hext_stack_2->SetBinError(9,22.492);
   hext_stack_2->SetBinError(10,22.03144);
   hext_stack_2->SetBinError(11,21.8055);
   hext_stack_2->SetBinError(12,20.09818);
   hext_stack_2->SetBinError(13,21.27474);
   hext_stack_2->SetBinError(14,21.31159);
   hext_stack_2->SetBinError(15,21.95451);
   hext_stack_2->SetBinError(16,22.4849);
   hext_stack_2->SetBinError(17,21.26594);
   hext_stack_2->SetBinError(18,20.94304);
   hext_stack_2->SetBinError(19,21.30594);
   hext_stack_2->SetBinError(20,21.59977);
   hext_stack_2->SetBinError(21,32.00857);
   hext_stack_2->SetBinError(22,24.63284);
   hext_stack_2->SetBinError(23,21.10267);
   hext_stack_2->SetBinError(24,20.71046);
   hext_stack_2->SetBinError(25,19.45212);
   hext_stack_2->SetBinError(26,20.34522);
   hext_stack_2->SetBinError(27,18.8632);
   hext_stack_2->SetBinError(28,18.54945);
   hext_stack_2->SetBinError(29,19.61438);
   hext_stack_2->SetBinError(30,19.70082);
   hext_stack_2->SetBinError(31,5.265584);
   hext_stack_2->SetEntries(75986);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,29.70954);
   hdirt_stack_3->SetBinContent(1,2067.042);
   hdirt_stack_3->SetBinContent(2,485.2774);
   hdirt_stack_3->SetBinContent(3,323.1946);
   hdirt_stack_3->SetBinContent(4,283.5042);
   hdirt_stack_3->SetBinContent(5,241.6977);
   hdirt_stack_3->SetBinContent(6,215.9682);
   hdirt_stack_3->SetBinContent(7,202.759);
   hdirt_stack_3->SetBinContent(8,183.1295);
   hdirt_stack_3->SetBinContent(9,162.264);
   hdirt_stack_3->SetBinContent(10,157.2256);
   hdirt_stack_3->SetBinContent(11,135.7964);
   hdirt_stack_3->SetBinContent(12,147.2183);
   hdirt_stack_3->SetBinContent(13,136.5959);
   hdirt_stack_3->SetBinContent(14,135.2693);
   hdirt_stack_3->SetBinContent(15,140.2649);
   hdirt_stack_3->SetBinContent(16,129.144);
   hdirt_stack_3->SetBinContent(17,126.321);
   hdirt_stack_3->SetBinContent(18,128.1884);
   hdirt_stack_3->SetBinContent(19,140.9823);
   hdirt_stack_3->SetBinContent(20,147.8519);
   hdirt_stack_3->SetBinContent(21,254.9941);
   hdirt_stack_3->SetBinContent(22,156.8865);
   hdirt_stack_3->SetBinContent(23,114.7988);
   hdirt_stack_3->SetBinContent(24,112.2769);
   hdirt_stack_3->SetBinContent(25,98.3563);
   hdirt_stack_3->SetBinContent(26,116.8187);
   hdirt_stack_3->SetBinContent(27,97.84592);
   hdirt_stack_3->SetBinContent(28,113.7673);
   hdirt_stack_3->SetBinContent(29,137.5143);
   hdirt_stack_3->SetBinContent(30,130.3008);
   hdirt_stack_3->SetBinContent(31,5.843284);
   hdirt_stack_3->SetBinError(0,3.138857);
   hdirt_stack_3->SetBinError(1,29.72113);
   hdirt_stack_3->SetBinError(2,13.93576);
   hdirt_stack_3->SetBinError(3,10.65946);
   hdirt_stack_3->SetBinError(4,11.29941);
   hdirt_stack_3->SetBinError(5,9.302058);
   hdirt_stack_3->SetBinError(6,8.859897);
   hdirt_stack_3->SetBinError(7,9.931644);
   hdirt_stack_3->SetBinError(8,8.288663);
   hdirt_stack_3->SetBinError(9,7.74459);
   hdirt_stack_3->SetBinError(10,7.763938);
   hdirt_stack_3->SetBinError(11,7.393775);
   hdirt_stack_3->SetBinError(12,7.815795);
   hdirt_stack_3->SetBinError(13,8.222795);
   hdirt_stack_3->SetBinError(14,7.068734);
   hdirt_stack_3->SetBinError(15,7.555546);
   hdirt_stack_3->SetBinError(16,6.384523);
   hdirt_stack_3->SetBinError(17,7.39482);
   hdirt_stack_3->SetBinError(18,6.777726);
   hdirt_stack_3->SetBinError(19,9.028442);
   hdirt_stack_3->SetBinError(20,7.528709);
   hdirt_stack_3->SetBinError(21,9.80636);
   hdirt_stack_3->SetBinError(22,7.827999);
   hdirt_stack_3->SetBinError(23,6.153725);
   hdirt_stack_3->SetBinError(24,6.902356);
   hdirt_stack_3->SetBinError(25,5.293362);
   hdirt_stack_3->SetBinError(26,6.679989);
   hdirt_stack_3->SetBinError(27,5.822381);
   hdirt_stack_3->SetBinError(28,6.716391);
   hdirt_stack_3->SetBinError(29,7.250423);
   hdirt_stack_3->SetBinError(30,7.974237);
   hdirt_stack_3->SetBinError(31,1.23749);
   hdirt_stack_3->SetEntries(28480);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,48.65607);
   houtFV_stack_4->SetBinContent(1,1751.05);
   houtFV_stack_4->SetBinContent(2,455.9854);
   houtFV_stack_4->SetBinContent(3,397.6221);
   houtFV_stack_4->SetBinContent(4,395.5941);
   houtFV_stack_4->SetBinContent(5,407.8517);
   houtFV_stack_4->SetBinContent(6,378.5305);
   houtFV_stack_4->SetBinContent(7,384.4852);
   houtFV_stack_4->SetBinContent(8,386.829);
   houtFV_stack_4->SetBinContent(9,359.644);
   houtFV_stack_4->SetBinContent(10,371.692);
   houtFV_stack_4->SetBinContent(11,357.9747);
   houtFV_stack_4->SetBinContent(12,366.9158);
   houtFV_stack_4->SetBinContent(13,340.3643);
   houtFV_stack_4->SetBinContent(14,344.3304);
   houtFV_stack_4->SetBinContent(15,400.3065);
   houtFV_stack_4->SetBinContent(16,385.7831);
   houtFV_stack_4->SetBinContent(17,346.4917);
   houtFV_stack_4->SetBinContent(18,344.5567);
   houtFV_stack_4->SetBinContent(19,381.4965);
   houtFV_stack_4->SetBinContent(20,379.7116);
   houtFV_stack_4->SetBinContent(21,469.2354);
   houtFV_stack_4->SetBinContent(22,387.3353);
   houtFV_stack_4->SetBinContent(23,332.3001);
   houtFV_stack_4->SetBinContent(24,319.6187);
   houtFV_stack_4->SetBinContent(25,324.2257);
   houtFV_stack_4->SetBinContent(26,312.0399);
   houtFV_stack_4->SetBinContent(27,294.8104);
   houtFV_stack_4->SetBinContent(28,273.9291);
   houtFV_stack_4->SetBinContent(29,257.9896);
   houtFV_stack_4->SetBinContent(30,251.1066);
   houtFV_stack_4->SetBinContent(31,21.17734);
   houtFV_stack_4->SetBinError(0,3.714927);
   houtFV_stack_4->SetBinError(1,25.3723);
   houtFV_stack_4->SetBinError(2,13.19147);
   houtFV_stack_4->SetBinError(3,11.88727);
   houtFV_stack_4->SetBinError(4,11.34992);
   houtFV_stack_4->SetBinError(5,13.0093);
   houtFV_stack_4->SetBinError(6,11.9975);
   houtFV_stack_4->SetBinError(7,11.44023);
   houtFV_stack_4->SetBinError(8,11.08906);
   houtFV_stack_4->SetBinError(9,11.08353);
   houtFV_stack_4->SetBinError(10,11.59018);
   houtFV_stack_4->SetBinError(11,10.93624);
   houtFV_stack_4->SetBinError(12,11.4276);
   houtFV_stack_4->SetBinError(13,10.78911);
   houtFV_stack_4->SetBinError(14,10.99944);
   houtFV_stack_4->SetBinError(15,12.92601);
   houtFV_stack_4->SetBinError(16,12.83262);
   houtFV_stack_4->SetBinError(17,10.31028);
   houtFV_stack_4->SetBinError(18,10.71058);
   houtFV_stack_4->SetBinError(19,11.73941);
   houtFV_stack_4->SetBinError(20,12.1386);
   houtFV_stack_4->SetBinError(21,12.19911);
   houtFV_stack_4->SetBinError(22,12.11526);
   houtFV_stack_4->SetBinError(23,9.789637);
   houtFV_stack_4->SetBinError(24,10.95318);
   houtFV_stack_4->SetBinError(25,10.30622);
   houtFV_stack_4->SetBinError(26,10.13752);
   houtFV_stack_4->SetBinError(27,9.13131);
   houtFV_stack_4->SetBinError(28,8.859008);
   houtFV_stack_4->SetBinError(29,8.481802);
   houtFV_stack_4->SetBinError(30,9.287523);
   houtFV_stack_4->SetBinError(31,2.4007);
   houtFV_stack_4->SetEntries(48988);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.8228858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.41577);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.147578);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.047428);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.893477);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.781968);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.37185);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.286822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.133872);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.829964);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.371185);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.604764);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.068526);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.316554);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.23543);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.651354);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.549131);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.689632);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.258842);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.41296);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.89855);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.894244);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,7.08264);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.030818);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.759377);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.773435);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,7.373266);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,7.568734);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,6.373018);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,5.672517);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,3.861674);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2499367);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5938231);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8058944);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7188036);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6974129);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8793844);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7788781);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7945447);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8081043);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8099488);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7874921);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7387418);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.866818);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8386721);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8957095);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8442226);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7595667);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7955242);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7661995);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8062967);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8033948);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9680693);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8439534);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7056884);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7500271);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.048551);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.8761594);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8976987);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.8315257);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.7182615);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.6413517);
   hNCpi0inFVcoh_stack_5->SetEntries(3360);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.048166);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.85353);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.031804);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.185754);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.47854);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.394008);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.925108);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.701076);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.818917);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.883758);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.50644);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.078058);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.199372);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.617872);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.911826);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.812676);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.757044);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.004568);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.199204);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.841576);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.54779);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.757876);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.812844);
   hNCpi0inFVqe_stack_6->SetBinContent(24,2.34012);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.74093);
   hNCpi0inFVqe_stack_6->SetBinContent(26,2.30093);
   hNCpi0inFVqe_stack_6->SetBinContent(27,1.757708);
   hNCpi0inFVqe_stack_6->SetBinContent(28,1.407458);
   hNCpi0inFVqe_stack_6->SetBinContent(29,1.436358);
   hNCpi0inFVqe_stack_6->SetBinContent(30,1.98058);
   hNCpi0inFVqe_stack_6->SetBinContent(31,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4649807);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4441458);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2739576);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3245714);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3911843);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3625241);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4452399);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4156262);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.6478435);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4723172);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.392178);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4201277);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3353836);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.352361);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5065776);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4193552);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4550394);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2465393);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.282353);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4781865);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3591081);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4757384);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4567469);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.4945902);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.376997);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.5116103);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.4399638);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.3252697);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.398251);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.5280208);
   hNCpi0inFVqe_stack_6->SetBinError(31,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(986);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,20.62353);
   hNCpi0inFVres_stack_7->SetBinContent(1,136.6509);
   hNCpi0inFVres_stack_7->SetBinContent(2,164.98);
   hNCpi0inFVres_stack_7->SetBinContent(3,178.2037);
   hNCpi0inFVres_stack_7->SetBinContent(4,158.0832);
   hNCpi0inFVres_stack_7->SetBinContent(5,187.9647);
   hNCpi0inFVres_stack_7->SetBinContent(6,188.7976);
   hNCpi0inFVres_stack_7->SetBinContent(7,191.1208);
   hNCpi0inFVres_stack_7->SetBinContent(8,182.4188);
   hNCpi0inFVres_stack_7->SetBinContent(9,187.3987);
   hNCpi0inFVres_stack_7->SetBinContent(10,182.7309);
   hNCpi0inFVres_stack_7->SetBinContent(11,178.3733);
   hNCpi0inFVres_stack_7->SetBinContent(12,178.9012);
   hNCpi0inFVres_stack_7->SetBinContent(13,179.4402);
   hNCpi0inFVres_stack_7->SetBinContent(14,195.8026);
   hNCpi0inFVres_stack_7->SetBinContent(15,187.1113);
   hNCpi0inFVres_stack_7->SetBinContent(16,184.3237);
   hNCpi0inFVres_stack_7->SetBinContent(17,185.1287);
   hNCpi0inFVres_stack_7->SetBinContent(18,180.4044);
   hNCpi0inFVres_stack_7->SetBinContent(19,183.5004);
   hNCpi0inFVres_stack_7->SetBinContent(20,182.8218);
   hNCpi0inFVres_stack_7->SetBinContent(21,196.1218);
   hNCpi0inFVres_stack_7->SetBinContent(22,174.9449);
   hNCpi0inFVres_stack_7->SetBinContent(23,177.7735);
   hNCpi0inFVres_stack_7->SetBinContent(24,179.8162);
   hNCpi0inFVres_stack_7->SetBinContent(25,178.7637);
   hNCpi0inFVres_stack_7->SetBinContent(26,186.6241);
   hNCpi0inFVres_stack_7->SetBinContent(27,180.3314);
   hNCpi0inFVres_stack_7->SetBinContent(28,188.397);
   hNCpi0inFVres_stack_7->SetBinContent(29,189.8578);
   hNCpi0inFVres_stack_7->SetBinContent(30,143.4111);
   hNCpi0inFVres_stack_7->SetBinContent(31,3.500134);
   hNCpi0inFVres_stack_7->SetBinError(0,1.134919);
   hNCpi0inFVres_stack_7->SetBinError(1,3.792872);
   hNCpi0inFVres_stack_7->SetBinError(2,4.185812);
   hNCpi0inFVres_stack_7->SetBinError(3,4.455614);
   hNCpi0inFVres_stack_7->SetBinError(4,4.074765);
   hNCpi0inFVres_stack_7->SetBinError(5,4.478793);
   hNCpi0inFVres_stack_7->SetBinError(6,4.479308);
   hNCpi0inFVres_stack_7->SetBinError(7,4.545129);
   hNCpi0inFVres_stack_7->SetBinError(8,4.427701);
   hNCpi0inFVres_stack_7->SetBinError(9,4.471517);
   hNCpi0inFVres_stack_7->SetBinError(10,4.341597);
   hNCpi0inFVres_stack_7->SetBinError(11,4.315948);
   hNCpi0inFVres_stack_7->SetBinError(12,4.375438);
   hNCpi0inFVres_stack_7->SetBinError(13,4.346886);
   hNCpi0inFVres_stack_7->SetBinError(14,4.625534);
   hNCpi0inFVres_stack_7->SetBinError(15,4.502491);
   hNCpi0inFVres_stack_7->SetBinError(16,4.415394);
   hNCpi0inFVres_stack_7->SetBinError(17,4.475947);
   hNCpi0inFVres_stack_7->SetBinError(18,4.373002);
   hNCpi0inFVres_stack_7->SetBinError(19,4.406497);
   hNCpi0inFVres_stack_7->SetBinError(20,4.436476);
   hNCpi0inFVres_stack_7->SetBinError(21,4.552815);
   hNCpi0inFVres_stack_7->SetBinError(22,4.389807);
   hNCpi0inFVres_stack_7->SetBinError(23,4.351419);
   hNCpi0inFVres_stack_7->SetBinError(24,4.4314);
   hNCpi0inFVres_stack_7->SetBinError(25,4.279718);
   hNCpi0inFVres_stack_7->SetBinError(26,4.444344);
   hNCpi0inFVres_stack_7->SetBinError(27,4.381882);
   hNCpi0inFVres_stack_7->SetBinError(28,4.509243);
   hNCpi0inFVres_stack_7->SetBinError(29,4.570996);
   hNCpi0inFVres_stack_7->SetBinError(30,3.999115);
   hNCpi0inFVres_stack_7->SetBinError(31,0.5843529);
   hNCpi0inFVres_stack_7->SetEntries(100358);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,4.743175);
   hNCpi0inFVdis_stack_8->SetBinContent(1,38.90273);
   hNCpi0inFVdis_stack_8->SetBinContent(2,46.91306);
   hNCpi0inFVdis_stack_8->SetBinContent(3,49.85054);
   hNCpi0inFVdis_stack_8->SetBinContent(4,49.20484);
   hNCpi0inFVdis_stack_8->SetBinContent(5,57.10722);
   hNCpi0inFVdis_stack_8->SetBinContent(6,47.50159);
   hNCpi0inFVdis_stack_8->SetBinContent(7,54.53898);
   hNCpi0inFVdis_stack_8->SetBinContent(8,50.09798);
   hNCpi0inFVdis_stack_8->SetBinContent(9,48.56861);
   hNCpi0inFVdis_stack_8->SetBinContent(10,52.02522);
   hNCpi0inFVdis_stack_8->SetBinContent(11,46.93246);
   hNCpi0inFVdis_stack_8->SetBinContent(12,47.84917);
   hNCpi0inFVdis_stack_8->SetBinContent(13,51.94218);
   hNCpi0inFVdis_stack_8->SetBinContent(14,48.75027);
   hNCpi0inFVdis_stack_8->SetBinContent(15,45.01318);
   hNCpi0inFVdis_stack_8->SetBinContent(16,48.77737);
   hNCpi0inFVdis_stack_8->SetBinContent(17,52.97485);
   hNCpi0inFVdis_stack_8->SetBinContent(18,50.82172);
   hNCpi0inFVdis_stack_8->SetBinContent(19,46.38541);
   hNCpi0inFVdis_stack_8->SetBinContent(20,44.83399);
   hNCpi0inFVdis_stack_8->SetBinContent(21,51.42372);
   hNCpi0inFVdis_stack_8->SetBinContent(22,45.51006);
   hNCpi0inFVdis_stack_8->SetBinContent(23,49.41856);
   hNCpi0inFVdis_stack_8->SetBinContent(24,44.54966);
   hNCpi0inFVdis_stack_8->SetBinContent(25,46.61343);
   hNCpi0inFVdis_stack_8->SetBinContent(26,49.86348);
   hNCpi0inFVdis_stack_8->SetBinContent(27,47.20797);
   hNCpi0inFVdis_stack_8->SetBinContent(28,50.186);
   hNCpi0inFVdis_stack_8->SetBinContent(29,51.18011);
   hNCpi0inFVdis_stack_8->SetBinContent(30,38.13613);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.088604);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.5564323);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.048469);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.301813);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.360967);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.312609);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.494616);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.212256);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.432052);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.332078);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.260652);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.397237);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.220174);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.211626);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.321889);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.248827);
   hNCpi0inFVdis_stack_8->SetBinError(15,2.172848);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.28799);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.419117);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.358988);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.164637);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.186494);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.314529);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.200732);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.270358);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.142862);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.151788);
   hNCpi0inFVdis_stack_8->SetBinError(26,2.303418);
   hNCpi0inFVdis_stack_8->SetBinError(27,2.197074);
   hNCpi0inFVdis_stack_8->SetBinError(28,2.329267);
   hNCpi0inFVdis_stack_8->SetBinError(29,2.350199);
   hNCpi0inFVdis_stack_8->SetBinError(30,2.022142);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3586568);
   hNCpi0inFVdis_stack_8->SetEntries(27026);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3485861);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2218905);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
   hNCpi0inFVmec_stack_9->SetEntries(66);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(0,18.99562);
   hCCpi0inFV_stack_10->SetBinContent(1,364.8431);
   hCCpi0inFV_stack_10->SetBinContent(2,482.0729);
   hCCpi0inFV_stack_10->SetBinContent(3,478.0803);
   hCCpi0inFV_stack_10->SetBinContent(4,503.9174);
   hCCpi0inFV_stack_10->SetBinContent(5,498.1522);
   hCCpi0inFV_stack_10->SetBinContent(6,492.5755);
   hCCpi0inFV_stack_10->SetBinContent(7,497.614);
   hCCpi0inFV_stack_10->SetBinContent(8,494.5414);
   hCCpi0inFV_stack_10->SetBinContent(9,494.019);
   hCCpi0inFV_stack_10->SetBinContent(10,524.7968);
   hCCpi0inFV_stack_10->SetBinContent(11,510.8051);
   hCCpi0inFV_stack_10->SetBinContent(12,497.3078);
   hCCpi0inFV_stack_10->SetBinContent(13,489.5362);
   hCCpi0inFV_stack_10->SetBinContent(14,509.0376);
   hCCpi0inFV_stack_10->SetBinContent(15,494.3982);
   hCCpi0inFV_stack_10->SetBinContent(16,529.5136);
   hCCpi0inFV_stack_10->SetBinContent(17,511.8036);
   hCCpi0inFV_stack_10->SetBinContent(18,482.9352);
   hCCpi0inFV_stack_10->SetBinContent(19,500.4459);
   hCCpi0inFV_stack_10->SetBinContent(20,491.348);
   hCCpi0inFV_stack_10->SetBinContent(21,486.3796);
   hCCpi0inFV_stack_10->SetBinContent(22,492.4255);
   hCCpi0inFV_stack_10->SetBinContent(23,492.0858);
   hCCpi0inFV_stack_10->SetBinContent(24,487.6757);
   hCCpi0inFV_stack_10->SetBinContent(25,509.7712);
   hCCpi0inFV_stack_10->SetBinContent(26,505.3084);
   hCCpi0inFV_stack_10->SetBinContent(27,497.8596);
   hCCpi0inFV_stack_10->SetBinContent(28,485.8868);
   hCCpi0inFV_stack_10->SetBinContent(29,482.2836);
   hCCpi0inFV_stack_10->SetBinContent(30,380.1812);
   hCCpi0inFV_stack_10->SetBinContent(31,11.66849);
   hCCpi0inFV_stack_10->SetBinError(0,2.248902);
   hCCpi0inFV_stack_10->SetBinError(1,9.600632);
   hCCpi0inFV_stack_10->SetBinError(2,11.00148);
   hCCpi0inFV_stack_10->SetBinError(3,11.00754);
   hCCpi0inFV_stack_10->SetBinError(4,11.24548);
   hCCpi0inFV_stack_10->SetBinError(5,11.17987);
   hCCpi0inFV_stack_10->SetBinError(6,11.12881);
   hCCpi0inFV_stack_10->SetBinError(7,11.12317);
   hCCpi0inFV_stack_10->SetBinError(8,11.19676);
   hCCpi0inFV_stack_10->SetBinError(9,11.19504);
   hCCpi0inFV_stack_10->SetBinError(10,11.47122);
   hCCpi0inFV_stack_10->SetBinError(11,11.40126);
   hCCpi0inFV_stack_10->SetBinError(12,11.19043);
   hCCpi0inFV_stack_10->SetBinError(13,11.10709);
   hCCpi0inFV_stack_10->SetBinError(14,11.29767);
   hCCpi0inFV_stack_10->SetBinError(15,11.14305);
   hCCpi0inFV_stack_10->SetBinError(16,11.55334);
   hCCpi0inFV_stack_10->SetBinError(17,11.37654);
   hCCpi0inFV_stack_10->SetBinError(18,11.02439);
   hCCpi0inFV_stack_10->SetBinError(19,11.21652);
   hCCpi0inFV_stack_10->SetBinError(20,11.05263);
   hCCpi0inFV_stack_10->SetBinError(21,11.15883);
   hCCpi0inFV_stack_10->SetBinError(22,11.1525);
   hCCpi0inFV_stack_10->SetBinError(23,11.12467);
   hCCpi0inFV_stack_10->SetBinError(24,11.08192);
   hCCpi0inFV_stack_10->SetBinError(25,11.38729);
   hCCpi0inFV_stack_10->SetBinError(26,11.37473);
   hCCpi0inFV_stack_10->SetBinError(27,11.28627);
   hCCpi0inFV_stack_10->SetBinError(28,11.17091);
   hCCpi0inFV_stack_10->SetBinError(29,10.96771);
   hCCpi0inFV_stack_10->SetBinError(30,9.812248);
   hCCpi0inFV_stack_10->SetBinError(31,1.727692);
   hCCpi0inFV_stack_10->SetEntries(62846);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,23.10577);
   hNCinFV_stack_11->SetBinContent(1,350.3026);
   hNCinFV_stack_11->SetBinContent(2,427.993);
   hNCinFV_stack_11->SetBinContent(3,416.4868);
   hNCinFV_stack_11->SetBinContent(4,449.3237);
   hNCinFV_stack_11->SetBinContent(5,450.9691);
   hNCinFV_stack_11->SetBinContent(6,475.2791);
   hNCinFV_stack_11->SetBinContent(7,473.7115);
   hNCinFV_stack_11->SetBinContent(8,467.8646);
   hNCinFV_stack_11->SetBinContent(9,489.6023);
   hNCinFV_stack_11->SetBinContent(10,479.6569);
   hNCinFV_stack_11->SetBinContent(11,488.0604);
   hNCinFV_stack_11->SetBinContent(12,476.1483);
   hNCinFV_stack_11->SetBinContent(13,471.1808);
   hNCinFV_stack_11->SetBinContent(14,447.0154);
   hNCinFV_stack_11->SetBinContent(15,476.2156);
   hNCinFV_stack_11->SetBinContent(16,476.489);
   hNCinFV_stack_11->SetBinContent(17,474.3624);
   hNCinFV_stack_11->SetBinContent(18,505.31);
   hNCinFV_stack_11->SetBinContent(19,500.1908);
   hNCinFV_stack_11->SetBinContent(20,458.6005);
   hNCinFV_stack_11->SetBinContent(21,503.0505);
   hNCinFV_stack_11->SetBinContent(22,474.319);
   hNCinFV_stack_11->SetBinContent(23,467.1113);
   hNCinFV_stack_11->SetBinContent(24,457.7436);
   hNCinFV_stack_11->SetBinContent(25,485.1825);
   hNCinFV_stack_11->SetBinContent(26,461.7396);
   hNCinFV_stack_11->SetBinContent(27,474.2534);
   hNCinFV_stack_11->SetBinContent(28,500.3177);
   hNCinFV_stack_11->SetBinContent(29,479.631);
   hNCinFV_stack_11->SetBinContent(30,380.4998);
   hNCinFV_stack_11->SetBinContent(31,7.235731);
   hNCinFV_stack_11->SetBinError(0,2.401605);
   hNCinFV_stack_11->SetBinError(1,9.405976);
   hNCinFV_stack_11->SetBinError(2,10.39812);
   hNCinFV_stack_11->SetBinError(3,10.38051);
   hNCinFV_stack_11->SetBinError(4,10.66174);
   hNCinFV_stack_11->SetBinError(5,10.67283);
   hNCinFV_stack_11->SetBinError(6,10.91751);
   hNCinFV_stack_11->SetBinError(7,10.90337);
   hNCinFV_stack_11->SetBinError(8,10.84286);
   hNCinFV_stack_11->SetBinError(9,11.0716);
   hNCinFV_stack_11->SetBinError(10,10.94991);
   hNCinFV_stack_11->SetBinError(11,11.08038);
   hNCinFV_stack_11->SetBinError(12,10.9363);
   hNCinFV_stack_11->SetBinError(13,10.85829);
   hNCinFV_stack_11->SetBinError(14,10.55657);
   hNCinFV_stack_11->SetBinError(15,10.90659);
   hNCinFV_stack_11->SetBinError(16,10.81463);
   hNCinFV_stack_11->SetBinError(17,10.82764);
   hNCinFV_stack_11->SetBinError(18,11.33932);
   hNCinFV_stack_11->SetBinError(19,11.31254);
   hNCinFV_stack_11->SetBinError(20,10.69794);
   hNCinFV_stack_11->SetBinError(21,11.2254);
   hNCinFV_stack_11->SetBinError(22,11.01867);
   hNCinFV_stack_11->SetBinError(23,10.76737);
   hNCinFV_stack_11->SetBinError(24,10.74603);
   hNCinFV_stack_11->SetBinError(25,11.09304);
   hNCinFV_stack_11->SetBinError(26,10.71766);
   hNCinFV_stack_11->SetBinError(27,10.89868);
   hNCinFV_stack_11->SetBinError(28,11.17845);
   hNCinFV_stack_11->SetBinError(29,11.03626);
   hNCinFV_stack_11->SetBinError(30,9.77553);
   hNCinFV_stack_11->SetBinError(31,1.34604);
   hNCinFV_stack_11->SetEntries(59719);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,146.8475);
   hnumuCCinFV_stack_12->SetBinContent(1,3453.401);
   hnumuCCinFV_stack_12->SetBinContent(2,4254.951);
   hnumuCCinFV_stack_12->SetBinContent(3,4277.276);
   hnumuCCinFV_stack_12->SetBinContent(4,4278.028);
   hnumuCCinFV_stack_12->SetBinContent(5,4442.296);
   hnumuCCinFV_stack_12->SetBinContent(6,4512.322);
   hnumuCCinFV_stack_12->SetBinContent(7,4267.703);
   hnumuCCinFV_stack_12->SetBinContent(8,4456.517);
   hnumuCCinFV_stack_12->SetBinContent(9,4533.329);
   hnumuCCinFV_stack_12->SetBinContent(10,4600.293);
   hnumuCCinFV_stack_12->SetBinContent(11,4447.022);
   hnumuCCinFV_stack_12->SetBinContent(12,4491.511);
   hnumuCCinFV_stack_12->SetBinContent(13,4579.331);
   hnumuCCinFV_stack_12->SetBinContent(14,4465.102);
   hnumuCCinFV_stack_12->SetBinContent(15,4444.222);
   hnumuCCinFV_stack_12->SetBinContent(16,4533.933);
   hnumuCCinFV_stack_12->SetBinContent(17,4446.659);
   hnumuCCinFV_stack_12->SetBinContent(18,4491.25);
   hnumuCCinFV_stack_12->SetBinContent(19,4528.614);
   hnumuCCinFV_stack_12->SetBinContent(20,4345.609);
   hnumuCCinFV_stack_12->SetBinContent(21,4194.82);
   hnumuCCinFV_stack_12->SetBinContent(22,4268.674);
   hnumuCCinFV_stack_12->SetBinContent(23,4429.177);
   hnumuCCinFV_stack_12->SetBinContent(24,4306.833);
   hnumuCCinFV_stack_12->SetBinContent(25,4576.75);
   hnumuCCinFV_stack_12->SetBinContent(26,4422.181);
   hnumuCCinFV_stack_12->SetBinContent(27,4434.769);
   hnumuCCinFV_stack_12->SetBinContent(28,4365.303);
   hnumuCCinFV_stack_12->SetBinContent(29,4284.459);
   hnumuCCinFV_stack_12->SetBinContent(30,3318.073);
   hnumuCCinFV_stack_12->SetBinContent(31,89.28371);
   hnumuCCinFV_stack_12->SetBinError(0,8.547073);
   hnumuCCinFV_stack_12->SetBinError(1,42.5596);
   hnumuCCinFV_stack_12->SetBinError(2,45.35706);
   hnumuCCinFV_stack_12->SetBinError(3,46.64047);
   hnumuCCinFV_stack_12->SetBinError(4,46.36133);
   hnumuCCinFV_stack_12->SetBinError(5,47.98949);
   hnumuCCinFV_stack_12->SetBinError(6,47.96268);
   hnumuCCinFV_stack_12->SetBinError(7,45.52066);
   hnumuCCinFV_stack_12->SetBinError(8,46.88975);
   hnumuCCinFV_stack_12->SetBinError(9,47.66794);
   hnumuCCinFV_stack_12->SetBinError(10,48.142);
   hnumuCCinFV_stack_12->SetBinError(11,46.3835);
   hnumuCCinFV_stack_12->SetBinError(12,46.66036);
   hnumuCCinFV_stack_12->SetBinError(13,47.65265);
   hnumuCCinFV_stack_12->SetBinError(14,46.64773);
   hnumuCCinFV_stack_12->SetBinError(15,46.53034);
   hnumuCCinFV_stack_12->SetBinError(16,47.62107);
   hnumuCCinFV_stack_12->SetBinError(17,46.50596);
   hnumuCCinFV_stack_12->SetBinError(18,46.9738);
   hnumuCCinFV_stack_12->SetBinError(19,46.46965);
   hnumuCCinFV_stack_12->SetBinError(20,47.38475);
   hnumuCCinFV_stack_12->SetBinError(21,44.93182);
   hnumuCCinFV_stack_12->SetBinError(22,45.65537);
   hnumuCCinFV_stack_12->SetBinError(23,46.48304);
   hnumuCCinFV_stack_12->SetBinError(24,46.30255);
   hnumuCCinFV_stack_12->SetBinError(25,48.09389);
   hnumuCCinFV_stack_12->SetBinError(26,46.64862);
   hnumuCCinFV_stack_12->SetBinError(27,47.62188);
   hnumuCCinFV_stack_12->SetBinError(28,46.65838);
   hnumuCCinFV_stack_12->SetBinError(29,47.04637);
   hnumuCCinFV_stack_12->SetBinError(30,39.9769);
   hnumuCCinFV_stack_12->SetBinError(31,6.564442);
   hnumuCCinFV_stack_12->SetEntries(466222);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(0,1.433319);
   hnueCCinFV_stack_13->SetBinContent(1,25.93032);
   hnueCCinFV_stack_13->SetBinContent(2,33.14961);
   hnueCCinFV_stack_13->SetBinContent(3,26.7893);
   hnueCCinFV_stack_13->SetBinContent(4,39.12586);
   hnueCCinFV_stack_13->SetBinContent(5,33.77142);
   hnueCCinFV_stack_13->SetBinContent(6,29.40873);
   hnueCCinFV_stack_13->SetBinContent(7,39.59943);
   hnueCCinFV_stack_13->SetBinContent(8,36.77256);
   hnueCCinFV_stack_13->SetBinContent(9,39.08875);
   hnueCCinFV_stack_13->SetBinContent(10,42.27085);
   hnueCCinFV_stack_13->SetBinContent(11,34.97806);
   hnueCCinFV_stack_13->SetBinContent(12,33.80016);
   hnueCCinFV_stack_13->SetBinContent(13,34.6815);
   hnueCCinFV_stack_13->SetBinContent(14,37.90546);
   hnueCCinFV_stack_13->SetBinContent(15,30.25639);
   hnueCCinFV_stack_13->SetBinContent(16,29.17483);
   hnueCCinFV_stack_13->SetBinContent(17,40.20162);
   hnueCCinFV_stack_13->SetBinContent(18,42.69745);
   hnueCCinFV_stack_13->SetBinContent(19,39.72222);
   hnueCCinFV_stack_13->SetBinContent(20,37.50089);
   hnueCCinFV_stack_13->SetBinContent(21,34.50278);
   hnueCCinFV_stack_13->SetBinContent(22,36.2297);
   hnueCCinFV_stack_13->SetBinContent(23,37.96335);
   hnueCCinFV_stack_13->SetBinContent(24,32.31192);
   hnueCCinFV_stack_13->SetBinContent(25,37.61228);
   hnueCCinFV_stack_13->SetBinContent(26,32.81923);
   hnueCCinFV_stack_13->SetBinContent(27,33.03922);
   hnueCCinFV_stack_13->SetBinContent(28,39.85841);
   hnueCCinFV_stack_13->SetBinContent(29,39.45255);
   hnueCCinFV_stack_13->SetBinContent(30,17.62951);
   hnueCCinFV_stack_13->SetBinContent(31,0.4476171);
   hnueCCinFV_stack_13->SetBinError(0,0.722508);
   hnueCCinFV_stack_13->SetBinError(1,2.81716);
   hnueCCinFV_stack_13->SetBinError(2,4.351877);
   hnueCCinFV_stack_13->SetBinError(3,2.752459);
   hnueCCinFV_stack_13->SetBinError(4,4.719756);
   hnueCCinFV_stack_13->SetBinError(5,4.169463);
   hnueCCinFV_stack_13->SetBinError(6,2.747912);
   hnueCCinFV_stack_13->SetBinError(7,4.166737);
   hnueCCinFV_stack_13->SetBinError(8,3.453739);
   hnueCCinFV_stack_13->SetBinError(9,4.245738);
   hnueCCinFV_stack_13->SetBinError(10,5.239725);
   hnueCCinFV_stack_13->SetBinError(11,3.797705);
   hnueCCinFV_stack_13->SetBinError(12,3.52922);
   hnueCCinFV_stack_13->SetBinError(13,3.307924);
   hnueCCinFV_stack_13->SetBinError(14,3.958738);
   hnueCCinFV_stack_13->SetBinError(15,3.465471);
   hnueCCinFV_stack_13->SetBinError(16,3.578857);
   hnueCCinFV_stack_13->SetBinError(17,3.951934);
   hnueCCinFV_stack_13->SetBinError(18,5.123693);
   hnueCCinFV_stack_13->SetBinError(19,4.010451);
   hnueCCinFV_stack_13->SetBinError(20,3.76685);
   hnueCCinFV_stack_13->SetBinError(21,3.589396);
   hnueCCinFV_stack_13->SetBinError(22,3.881059);
   hnueCCinFV_stack_13->SetBinError(23,5.32447);
   hnueCCinFV_stack_13->SetBinError(24,3.981126);
   hnueCCinFV_stack_13->SetBinError(25,3.658855);
   hnueCCinFV_stack_13->SetBinError(26,3.447435);
   hnueCCinFV_stack_13->SetBinError(27,3.457583);
   hnueCCinFV_stack_13->SetBinError(28,5.861664);
   hnueCCinFV_stack_13->SetBinError(29,4.592908);
   hnueCCinFV_stack_13->SetBinError(30,2.246179);
   hnueCCinFV_stack_13->SetBinError(31,0.3188238);
   hnueCCinFV_stack_13->SetEntries(3908);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,583.1268);
   hmcerror__2->SetBinContent(1,10643.38);
   hmcerror__2->SetBinContent(2,7827.315);
   hmcerror__2->SetBinContent(3,7547.752);
   hmcerror__2->SetBinContent(4,7608.455);
   hmcerror__2->SetBinContent(5,7749.436);
   hmcerror__2->SetBinContent(6,7696.292);
   hmcerror__2->SetBinContent(7,7415.705);
   hmcerror__2->SetBinContent(8,7781.885);
   hmcerror__2->SetBinContent(9,7587.875);
   hmcerror__2->SetBinContent(10,7614.986);
   hmcerror__2->SetBinContent(11,7379.838);
   hmcerror__2->SetBinContent(12,7310.471);
   hmcerror__2->SetBinContent(13,7411.589);
   hmcerror__2->SetBinContent(14,7335.409);
   hmcerror__2->SetBinContent(15,7419.417);
   hmcerror__2->SetBinContent(16,7544.221);
   hmcerror__2->SetBinContent(17,7307.543);
   hmcerror__2->SetBinContent(18,7342.267);
   hmcerror__2->SetBinContent(19,7471.583);
   hmcerror__2->SetBinContent(20,7265.712);
   hmcerror__2->SetBinContent(21,8648.399);
   hmcerror__2->SetBinContent(22,7502.745);
   hmcerror__2->SetBinContent(23,7197.317);
   hmcerror__2->SetBinContent(24,7040.733);
   hmcerror__2->SetBinContent(25,7252.613);
   hmcerror__2->SetBinContent(26,7184.877);
   hmcerror__2->SetBinContent(27,7020.932);
   hmcerror__2->SetBinContent(28,6970.468);
   hmcerror__2->SetBinContent(29,7054.514);
   hmcerror__2->SetBinContent(30,5894.452);
   hmcerror__2->SetBinContent(31,218.4695);
   hmcerror__2->SetBinError(0,14.91881);
   hmcerror__2->SetBinError(1,1294.876);
   hmcerror__2->SetBinError(2,988.1608);
   hmcerror__2->SetBinError(3,962.8294);
   hmcerror__2->SetBinError(4,974.3554);
   hmcerror__2->SetBinError(5,1019.022);
   hmcerror__2->SetBinError(6,999.5841);
   hmcerror__2->SetBinError(7,962.0661);
   hmcerror__2->SetBinError(8,970.3312);
   hmcerror__2->SetBinError(9,975.6437);
   hmcerror__2->SetBinError(10,998.8521);
   hmcerror__2->SetBinError(11,951.7538);
   hmcerror__2->SetBinError(12,942.8174);
   hmcerror__2->SetBinError(13,959.3186);
   hmcerror__2->SetBinError(14,958.7803);
   hmcerror__2->SetBinError(15,944.2967);
   hmcerror__2->SetBinError(16,984.9623);
   hmcerror__2->SetBinError(17,940.1935);
   hmcerror__2->SetBinError(18,969.0846);
   hmcerror__2->SetBinError(19,968.5737);
   hmcerror__2->SetBinError(20,930.6248);
   hmcerror__2->SetBinError(21,993.9229);
   hmcerror__2->SetBinError(22,946.9179);
   hmcerror__2->SetBinError(23,929.5666);
   hmcerror__2->SetBinError(24,918.5885);
   hmcerror__2->SetBinError(25,973.8257);
   hmcerror__2->SetBinError(26,935.8622);
   hmcerror__2->SetBinError(27,939.7577);
   hmcerror__2->SetBinError(28,936.0734);
   hmcerror__2->SetBinError(29,950.5282);
   hmcerror__2->SetBinError(30,774.4734);
   hmcerror__2->SetBinError(31,61.53117);
   hmcerror__2->SetBinError(32,0.3895343);
   hmcerror__2->SetBinError(33,0.3895343);
   hmcerror__2->SetEntries(201707.3);

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
   
   Double_t _fx3001[32] = {
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
   Double_t _fy3001[32] = {
   9294,
   7839,
   7384,
   7704,
   7874,
   7843,
   7651,
   7752,
   7568,
   7485,
   7465,
   7483,
   7402,
   7556,
   7685,
   7520,
   7365,
   7537,
   7442,
   7286,
   8314,
   7609,
   7222,
   7040,
   7137,
   7164,
   7207,
   6838,
   6962,
   5653,
   185,
   1};
   Double_t _felx3001[32] = {
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
   Double_t _fely3001[32] = {
   96.40539,
   88.53813,
   85.9302,
   87.77243,
   88.73556,
   88.56071,
   87.46999,
   88.04544,
   86.99425,
   86.51589,
   86.40023,
   86.50434,
   86.03488,
   86.92526,
   87.66413,
   86.71793,
   85.81958,
   86.8159,
   86.26703,
   85.35807,
   91.18114,
   87.22958,
   84.98235,
   83.90471,
   84.48077,
   84.64042,
   84.89405,
   82.6922,
   83.4386,
   75.18643,
   13.60147,
   1};
   Double_t _fehx3001[32] = {
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
   Double_t _fehy3001[32] = {
   96.40539,
   88.53813,
   85.9302,
   87.77243,
   88.73556,
   88.56071,
   87.46999,
   88.04544,
   86.99425,
   86.51589,
   86.40023,
   86.50434,
   86.03488,
   86.92526,
   87.66413,
   86.71793,
   85.81958,
   86.8159,
   86.26703,
   85.35807,
   91.18114,
   87.22958,
   84.98235,
   83.90471,
   84.48077,
   84.64042,
   84.89405,
   82.6922,
   83.4386,
   75.18643,
   13.60147,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(10329.45);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=66.0/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 224467.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6242.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 32495.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7029.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 12181.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  182.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  51.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  5393.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1454.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  3.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 14679.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 13945.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 130539.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1048.7","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[32] = {
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
   Double_t _fy3002[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[32] = {
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
   Double_t _fely3002[32] = {
   0.1216602,
   0.1262452,
   0.1275651,
   0.1280622,
   0.1314963,
   0.1298787,
   0.1297336,
   0.124691,
   0.1285793,
   0.1311693,
   0.1289667,
   0.1289681,
   0.129435,
   0.1307058,
   0.1272737,
   0.1305585,
   0.1286607,
   0.1319871,
   0.1296343,
   0.1280844,
   0.1149256,
   0.1262095,
   0.1291546,
   0.1304677,
   0.1342724,
   0.1302544,
   0.1338509,
   0.1342913,
   0.1347404,
   0.1313902,
   0.2816466,
   0};
   Double_t _fehx3002[32] = {
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
   Double_t _fehy3002[32] = {
   0.1216602,
   0.1262452,
   0.1275651,
   0.1280622,
   0.1314963,
   0.1298787,
   0.1297336,
   0.124691,
   0.1285793,
   0.1311693,
   0.1289667,
   0.1289681,
   0.129435,
   0.1307058,
   0.1272737,
   0.1305585,
   0.1286607,
   0.1319871,
   0.1296343,
   0.1280844,
   0.1149256,
   0.1262095,
   0.1291546,
   0.1304677,
   0.1342724,
   0.1302544,
   0.1338509,
   0.1342913,
   0.1347404,
   0.1313902,
   0.2816466,
   0};
   grae = new TGraphAsymmErrors(32,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1210);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3003[32] = {
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
   Double_t _fy3003[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[32] = {
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
   Double_t _fely3003[32] = {
   0.1198237,
   0.1238876,
   0.12462,
   0.1241469,
   0.1301162,
   0.1272117,
   0.1271036,
   0.123199,
   0.1269482,
   0.1297321,
   0.1275996,
   0.1273776,
   0.1280726,
   0.1291388,
   0.125851,
   0.1297257,
   0.1273059,
   0.1302836,
   0.1275784,
   0.1275002,
   0.1124634,
   0.1245002,
   0.1277429,
   0.1294958,
   0.132865,
   0.1292622,
   0.132904,
   0.131893,
   0.1324306,
   0.1271633,
   0.1197042,
   0};
   Double_t _fehx3003[32] = {
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
   Double_t _fehy3003[32] = {
   0.1198237,
   0.1238876,
   0.12462,
   0.1241469,
   0.1301162,
   0.1272117,
   0.1271036,
   0.123199,
   0.1269482,
   0.1297321,
   0.1275996,
   0.1273776,
   0.1280726,
   0.1291388,
   0.125851,
   0.1297257,
   0.1273059,
   0.1302836,
   0.1275784,
   0.1275002,
   0.1124634,
   0.1245002,
   0.1277429,
   0.1294958,
   0.132865,
   0.1292622,
   0.132904,
   0.131893,
   0.1324306,
   0.1271633,
   0.1197042,
   0};
   grae = new TGraphAsymmErrors(32,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1210);
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
   
   Double_t _fx3004[32] = {
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
   Double_t _fy3004[32] = {
   0.8732188,
   1.001493,
   0.9783045,
   1.012558,
   1.016074,
   1.019062,
   1.031729,
   0.9961597,
   0.9973807,
   0.9829302,
   1.01154,
   1.0236,
   0.9987062,
   1.030072,
   1.035796,
   0.9967894,
   1.007863,
   1.026522,
   0.9960406,
   1.002792,
   0.961334,
   1.014162,
   1.003429,
   0.9998959,
   0.9840592,
   0.9970943,
   1.026502,
   0.9809959,
   0.9868858,
   0.9590375,
   0.8468003,
   10};
   Double_t _felx3004[32] = {
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
   Double_t _fely3004[32] = {
   0.009057779,
   0.01131143,
   0.01138487,
   0.01153617,
   0.01145058,
   0.01150693,
   0.01179524,
   0.01131415,
   0.0114649,
   0.01136127,
   0.0117076,
   0.01183294,
   0.01160816,
   0.01185009,
   0.0118155,
   0.01149462,
   0.01174397,
   0.01182413,
   0.01154602,
   0.01174807,
   0.01054312,
   0.01162636,
   0.0118075,
   0.01191704,
   0.01164832,
   0.01178036,
   0.01209156,
   0.01186322,
   0.01182769,
   0.01275546,
   0.062258,
   0};
   Double_t _fehx3004[32] = {
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
   Double_t _fehy3004[32] = {
   0.009057779,
   0.01131143,
   0.01138487,
   0.01153617,
   0.01145058,
   0.01150693,
   0.01179524,
   0.01131415,
   0.0114649,
   0.01136127,
   0.0117076,
   0.01183294,
   0.01160816,
   0.01185009,
   0.0118155,
   0.01149462,
   0.01174397,
   0.01182413,
   0.01154602,
   0.01174807,
   0.01054312,
   0.01162636,
   0.0118075,
   0.01191704,
   0.01164832,
   0.01178036,
   0.01209156,
   0.01186322,
   0.01182769,
   0.01275546,
   0.062258,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0.7060881);
   Graph_Graph3004->SetMaximum(10.92155);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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

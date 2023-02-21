#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 10:27:34 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-1.86,1241.026,205.6768);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__7->SetBinContent(0,0.5884556);
   hmc__7->SetBinContent(1,65.30382);
   hmc__7->SetBinContent(2,55.22239);
   hmc__7->SetBinContent(3,52.51881);
   hmc__7->SetBinContent(4,59.49208);
   hmc__7->SetBinContent(5,50.70594);
   hmc__7->SetBinContent(6,55.53321);
   hmc__7->SetBinContent(7,52.77027);
   hmc__7->SetBinContent(8,75.06722);
   hmc__7->SetBinContent(9,57.51493);
   hmc__7->SetBinContent(10,42.98796);
   hmc__7->SetBinContent(11,52.13124);
   hmc__7->SetBinContent(12,44.1601);
   hmc__7->SetBinContent(13,47.68923);
   hmc__7->SetBinContent(14,47.50805);
   hmc__7->SetBinContent(15,50.78647);
   hmc__7->SetBinContent(16,48.09212);
   hmc__7->SetBinContent(17,42.3438);
   hmc__7->SetBinContent(18,38.09221);
   hmc__7->SetBinContent(19,43.28109);
   hmc__7->SetBinContent(20,52.52273);
   hmc__7->SetBinContent(21,81.10512);
   hmc__7->SetBinContent(22,55.6071);
   hmc__7->SetBinContent(23,43.34283);
   hmc__7->SetBinContent(24,45.71807);
   hmc__7->SetBinContent(25,44.71479);
   hmc__7->SetBinContent(26,44.23656);
   hmc__7->SetBinContent(27,46.86387);
   hmc__7->SetBinContent(28,46.75469);
   hmc__7->SetBinContent(29,70.0629);
   hmc__7->SetBinContent(30,79.15614);
   hmc__7->SetBinContent(31,2.279248);
   hmc__7->SetBinError(0,0.3397478);
   hmc__7->SetBinError(1,27.21955);
   hmc__7->SetBinError(2,18.00305);
   hmc__7->SetBinError(3,30.14051);
   hmc__7->SetBinError(4,17.6202);
   hmc__7->SetBinError(5,18.28425);
   hmc__7->SetBinError(6,14.83108);
   hmc__7->SetBinError(7,20.83805);
   hmc__7->SetBinError(8,24.45717);
   hmc__7->SetBinError(9,17.67806);
   hmc__7->SetBinError(10,16.02055);
   hmc__7->SetBinError(11,20.68466);
   hmc__7->SetBinError(12,14.23186);
   hmc__7->SetBinError(13,17.52397);
   hmc__7->SetBinError(14,15.62053);
   hmc__7->SetBinError(15,17.17389);
   hmc__7->SetBinError(16,18.7462);
   hmc__7->SetBinError(17,17.67116);
   hmc__7->SetBinError(18,20.79029);
   hmc__7->SetBinError(19,19.60022);
   hmc__7->SetBinError(20,17.40905);
   hmc__7->SetBinError(21,21.15503);
   hmc__7->SetBinError(22,23.44918);
   hmc__7->SetBinError(23,17.41405);
   hmc__7->SetBinError(24,20.33748);
   hmc__7->SetBinError(25,17.36245);
   hmc__7->SetBinError(26,17.06251);
   hmc__7->SetBinError(27,15.98081);
   hmc__7->SetBinError(28,15.80541);
   hmc__7->SetBinError(29,21.76561);
   hmc__7->SetBinError(30,24.6736);
   hmc__7->SetBinError(31,5.116935);
   hmc__7->SetBinError(32,0.3895343);
   hmc__7->SetBinError(33,0.3895343);
   hmc__7->SetMinimum(-1.86);
   hmc__7->SetMaximum(195.3);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",32,0,1100);
   hs3_stack_3->SetMinimum(-4.228303e-08);
   hs3_stack_3->SetMaximum(85.16037);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.123658);
   hbadmatch_stack_1->SetBinContent(2,2.754017);
   hbadmatch_stack_1->SetBinContent(3,2.004025);
   hbadmatch_stack_1->SetBinContent(4,2.916221);
   hbadmatch_stack_1->SetBinContent(5,1.37723);
   hbadmatch_stack_1->SetBinContent(6,1.64014);
   hbadmatch_stack_1->SetBinContent(7,1.715307);
   hbadmatch_stack_1->SetBinContent(8,3.241382);
   hbadmatch_stack_1->SetBinContent(9,2.154891);
   hbadmatch_stack_1->SetBinContent(10,1.662494);
   hbadmatch_stack_1->SetBinContent(11,1.587278);
   hbadmatch_stack_1->SetBinContent(12,1.419497);
   hbadmatch_stack_1->SetBinContent(13,1.310523);
   hbadmatch_stack_1->SetBinContent(14,3.038575);
   hbadmatch_stack_1->SetBinContent(15,2.063704);
   hbadmatch_stack_1->SetBinContent(16,1.818292);
   hbadmatch_stack_1->SetBinContent(17,0.9445238);
   hbadmatch_stack_1->SetBinContent(18,0.6618339);
   hbadmatch_stack_1->SetBinContent(19,1.316414);
   hbadmatch_stack_1->SetBinContent(20,1.637532);
   hbadmatch_stack_1->SetBinContent(21,2.439312);
   hbadmatch_stack_1->SetBinContent(22,2.388017);
   hbadmatch_stack_1->SetBinContent(23,0.3931986);
   hbadmatch_stack_1->SetBinContent(24,1.744826);
   hbadmatch_stack_1->SetBinContent(25,2.106521);
   hbadmatch_stack_1->SetBinContent(26,1.049222);
   hbadmatch_stack_1->SetBinContent(27,1.676212);
   hbadmatch_stack_1->SetBinContent(28,0.779369);
   hbadmatch_stack_1->SetBinContent(29,1.921556);
   hbadmatch_stack_1->SetBinContent(30,2.948368);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.5188295);
   hbadmatch_stack_1->SetBinError(2,0.912696);
   hbadmatch_stack_1->SetBinError(3,0.7439213);
   hbadmatch_stack_1->SetBinError(4,0.9136191);
   hbadmatch_stack_1->SetBinError(5,0.5846347);
   hbadmatch_stack_1->SetBinError(6,0.6533545);
   hbadmatch_stack_1->SetBinError(7,0.6540024);
   hbadmatch_stack_1->SetBinError(8,1.318845);
   hbadmatch_stack_1->SetBinError(9,0.7849589);
   hbadmatch_stack_1->SetBinError(10,0.7458769);
   hbadmatch_stack_1->SetBinError(11,0.6209181);
   hbadmatch_stack_1->SetBinError(12,0.6544241);
   hbadmatch_stack_1->SetBinError(13,0.5873552);
   hbadmatch_stack_1->SetBinError(14,0.9588199);
   hbadmatch_stack_1->SetBinError(15,0.8218485);
   hbadmatch_stack_1->SetBinError(16,0.7845498);
   hbadmatch_stack_1->SetBinError(17,0.4824867);
   hbadmatch_stack_1->SetBinError(18,0.4031921);
   hbadmatch_stack_1->SetBinError(19,0.5673595);
   hbadmatch_stack_1->SetBinError(20,0.6912075);
   hbadmatch_stack_1->SetBinError(21,0.9302955);
   hbadmatch_stack_1->SetBinError(22,0.7907877);
   hbadmatch_stack_1->SetBinError(23,0.2429642);
   hbadmatch_stack_1->SetBinError(24,0.6947636);
   hbadmatch_stack_1->SetBinError(25,0.9037085);
   hbadmatch_stack_1->SetBinError(26,0.4766764);
   hbadmatch_stack_1->SetBinError(27,0.629231);
   hbadmatch_stack_1->SetBinError(28,0.4619229);
   hbadmatch_stack_1->SetBinError(29,0.699962);
   hbadmatch_stack_1->SetBinError(30,0.9991774);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,6.884593);
   hext_stack_2->SetBinContent(2,9.86483);
   hext_stack_2->SetBinContent(3,11.57343);
   hext_stack_2->SetBinContent(4,13.09885);
   hext_stack_2->SetBinContent(5,12.32754);
   hext_stack_2->SetBinContent(6,14.90836);
   hext_stack_2->SetBinContent(7,10.29461);
   hext_stack_2->SetBinContent(8,22.97685);
   hext_stack_2->SetBinContent(9,12.72261);
   hext_stack_2->SetBinContent(10,5.993603);
   hext_stack_2->SetBinContent(11,9.857649);
   hext_stack_2->SetBinContent(12,9.86483);
   hext_stack_2->SetBinContent(13,9.615453);
   hext_stack_2->SetBinContent(14,9.272285);
   hext_stack_2->SetBinContent(15,5.81043);
   hext_stack_2->SetBinContent(16,8.022189);
   hext_stack_2->SetBinContent(17,5.248246);
   hext_stack_2->SetBinContent(18,4.054399);
   hext_stack_2->SetBinContent(19,6.578966);
   hext_stack_2->SetBinContent(20,13.17387);
   hext_stack_2->SetBinContent(21,25.47829);
   hext_stack_2->SetBinContent(22,6.724599);
   hext_stack_2->SetBinContent(23,4.538791);
   hext_stack_2->SetBinContent(24,10.25707);
   hext_stack_2->SetBinContent(25,5.993603);
   hext_stack_2->SetBinContent(26,4.994461);
   hext_stack_2->SetBinContent(27,7.384983);
   hext_stack_2->SetBinContent(28,4.93821);
   hext_stack_2->SetBinContent(29,5.598593);
   hext_stack_2->SetBinContent(30,8.802256);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,1.675566);
   hext_stack_2->SetBinError(2,2.101979);
   hext_stack_2->SetBinError(3,2.26709);
   hext_stack_2->SetBinError(4,2.451159);
   hext_stack_2->SetBinError(5,2.570702);
   hext_stack_2->SetBinError(6,2.802281);
   hext_stack_2->SetBinError(7,2.109853);
   hext_stack_2->SetBinError(8,3.487445);
   hext_stack_2->SetBinError(9,2.347232);
   hext_stack_2->SetBinError(10,1.59747);
   hext_stack_2->SetBinError(11,2.149306);
   hext_stack_2->SetBinError(12,2.101979);
   hext_stack_2->SetBinError(13,2.138779);
   hext_stack_2->SetBinError(14,2.176332);
   hext_stack_2->SetBinError(15,1.642867);
   hext_stack_2->SetBinError(16,1.800944);
   hext_stack_2->SetBinError(17,1.638217);
   hext_stack_2->SetBinError(18,1.311223);
   hext_stack_2->SetBinError(19,1.560451);
   hext_stack_2->SetBinError(20,2.503891);
   hext_stack_2->SetBinError(21,3.417561);
   hext_stack_2->SetBinError(22,1.680019);
   hext_stack_2->SetBinError(23,1.345212);
   hext_stack_2->SetBinError(24,2.232945);
   hext_stack_2->SetBinError(25,1.59747);
   hext_stack_2->SetBinError(26,1.644594);
   hext_stack_2->SetBinError(27,1.722456);
   hext_stack_2->SetBinError(28,1.475167);
   hext_stack_2->SetBinError(29,1.523321);
   hext_stack_2->SetBinError(30,2.060031);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,3.18617);
   hdirt_stack_3->SetBinContent(2,1.097687);
   hdirt_stack_3->SetBinContent(3,1.939264);
   hdirt_stack_3->SetBinContent(4,0.6345888);
   hdirt_stack_3->SetBinContent(5,1.539088);
   hdirt_stack_3->SetBinContent(6,1.333462);
   hdirt_stack_3->SetBinContent(7,0.7563787);
   hdirt_stack_3->SetBinContent(8,1.896463);
   hdirt_stack_3->SetBinContent(9,1.094478);
   hdirt_stack_3->SetBinContent(10,0.5852764);
   hdirt_stack_3->SetBinContent(11,0.8750882);
   hdirt_stack_3->SetBinContent(12,1.124462);
   hdirt_stack_3->SetBinContent(13,0.63311);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,1.165545);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(19,0.2256247);
   hdirt_stack_3->SetBinContent(21,1.493902);
   hdirt_stack_3->SetBinContent(22,0.2761429);
   hdirt_stack_3->SetBinContent(23,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.6951543);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.691244);
   hdirt_stack_3->SetBinContent(29,0.4762587);
   hdirt_stack_3->SetBinContent(30,0.2188956);
   hdirt_stack_3->SetBinError(1,0.9224794);
   hdirt_stack_3->SetBinError(2,0.546338);
   hdirt_stack_3->SetBinError(3,1.047812);
   hdirt_stack_3->SetBinError(4,0.398124);
   hdirt_stack_3->SetBinError(5,0.7185778);
   hdirt_stack_3->SetBinError(6,0.5839897);
   hdirt_stack_3->SetBinError(7,0.4758281);
   hdirt_stack_3->SetBinError(8,0.7617468);
   hdirt_stack_3->SetBinError(9,0.4894654);
   hdirt_stack_3->SetBinError(10,0.4188361);
   hdirt_stack_3->SetBinError(11,0.540832);
   hdirt_stack_3->SetBinError(12,0.5926468);
   hdirt_stack_3->SetBinError(13,0.3242013);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.6016336);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(19,0.218999);
   hdirt_stack_3->SetBinError(21,0.631155);
   hdirt_stack_3->SetBinError(22,0.1952625);
   hdirt_stack_3->SetBinError(23,0.2188956);
   hdirt_stack_3->SetBinError(26,0.4258516);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(28,0.5027721);
   hdirt_stack_3->SetBinError(29,0.3652866);
   hdirt_stack_3->SetBinError(30,0.2188956);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,25.63953);
   houtFV_stack_4->SetBinContent(2,11.78189);
   houtFV_stack_4->SetBinContent(3,9.522136);
   houtFV_stack_4->SetBinContent(4,10.88609);
   houtFV_stack_4->SetBinContent(5,8.659663);
   houtFV_stack_4->SetBinContent(6,10.59506);
   houtFV_stack_4->SetBinContent(7,10.28433);
   houtFV_stack_4->SetBinContent(8,13.68133);
   houtFV_stack_4->SetBinContent(9,8.510334);
   houtFV_stack_4->SetBinContent(10,7.296726);
   houtFV_stack_4->SetBinContent(11,11.0962);
   houtFV_stack_4->SetBinContent(12,8.778403);
   houtFV_stack_4->SetBinContent(13,10.51345);
   houtFV_stack_4->SetBinContent(14,8.00451);
   houtFV_stack_4->SetBinContent(15,12.00777);
   houtFV_stack_4->SetBinContent(16,8.643822);
   houtFV_stack_4->SetBinContent(17,8.562918);
   houtFV_stack_4->SetBinContent(18,7.375913);
   houtFV_stack_4->SetBinContent(19,11.85771);
   houtFV_stack_4->SetBinContent(20,9.665274);
   houtFV_stack_4->SetBinContent(21,15.40235);
   houtFV_stack_4->SetBinContent(22,8.916679);
   houtFV_stack_4->SetBinContent(23,10.16854);
   houtFV_stack_4->SetBinContent(24,10.12285);
   houtFV_stack_4->SetBinContent(25,10.13074);
   houtFV_stack_4->SetBinContent(26,7.296834);
   houtFV_stack_4->SetBinContent(27,10.25819);
   houtFV_stack_4->SetBinContent(28,6.180008);
   houtFV_stack_4->SetBinContent(29,7.218049);
   houtFV_stack_4->SetBinContent(30,8.701483);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,2.765629);
   houtFV_stack_4->SetBinError(2,1.742274);
   houtFV_stack_4->SetBinError(3,1.507719);
   houtFV_stack_4->SetBinError(4,1.87448);
   houtFV_stack_4->SetBinError(5,1.429848);
   houtFV_stack_4->SetBinError(6,1.655743);
   houtFV_stack_4->SetBinError(7,1.585963);
   houtFV_stack_4->SetBinError(8,1.922493);
   houtFV_stack_4->SetBinError(9,1.402402);
   houtFV_stack_4->SetBinError(10,1.366852);
   houtFV_stack_4->SetBinError(11,1.680941);
   houtFV_stack_4->SetBinError(12,1.485488);
   houtFV_stack_4->SetBinError(13,1.731563);
   houtFV_stack_4->SetBinError(14,1.419737);
   houtFV_stack_4->SetBinError(15,1.695965);
   houtFV_stack_4->SetBinError(16,1.478856);
   houtFV_stack_4->SetBinError(17,1.395482);
   houtFV_stack_4->SetBinError(18,1.320407);
   houtFV_stack_4->SetBinError(19,1.899844);
   houtFV_stack_4->SetBinError(20,1.594456);
   houtFV_stack_4->SetBinError(21,1.994319);
   houtFV_stack_4->SetBinError(22,1.454601);
   houtFV_stack_4->SetBinError(23,1.931889);
   houtFV_stack_4->SetBinError(24,1.573465);
   houtFV_stack_4->SetBinError(25,1.576642);
   houtFV_stack_4->SetBinError(26,1.41274);
   houtFV_stack_4->SetBinError(27,1.56677);
   houtFV_stack_4->SetBinError(28,1.209717);
   houtFV_stack_4->SetBinError(29,1.283911);
   houtFV_stack_4->SetBinError(30,1.482492);
   houtFV_stack_4->SetBinError(31,0.3929602);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4920949);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1439229);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3498756);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3287398);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3195107);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5334769);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3795274);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.158448);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7127182);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3391299);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.147073);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2619032);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6297572);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.12815);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3077527);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6408032);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.06498046);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1026188);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3012156);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.056726);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.328719);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5732709);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2792596);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.672873);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.8382865);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.7323035);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.4799847);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.190139);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.290608);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.28932);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06441057);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2861781);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1326673);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1391432);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1967148);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2123527);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06312375);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3188421);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1407482);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06944519);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.146209);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3134108);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4861673);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1287011);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3387256);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04627183);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06759654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1633408);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3135378);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4560982);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2546803);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1327596);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3671365);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3447411);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.343833);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1819257);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3765392);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4411399);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4336356);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04295554);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03873478);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1737429);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1290912);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03984302);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03464893);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1496887);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03399719);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.07534129);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05019341);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1249454);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.04671451);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2361305);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.0587264);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2942513);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03060678);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03000036);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08956798);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07122207);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02384855);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0245005);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1291561);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02411083);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04418018);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0290913);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1082626);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.03365108);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.144966);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.04441126);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.532094);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.705876);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.879064);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.784901);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.776123);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.222054);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.863965);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.753406);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.708638);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.976576);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.324336);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.032576);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.365262);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.30871);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.619874);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.286229);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.17819);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.677424);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.203146);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.405722);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.567312);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.298358);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.642642);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.907023);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.408926);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.159355);
   hNCpi0inFVres_stack_7->SetBinContent(27,7.382328);
   hNCpi0inFVres_stack_7->SetBinContent(28,8.149474);
   hNCpi0inFVres_stack_7->SetBinContent(29,14.38088);
   hNCpi0inFVres_stack_7->SetBinContent(30,15.64042);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.08441579);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7391287);
   hNCpi0inFVres_stack_7->SetBinError(2,0.812593);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6849238);
   hNCpi0inFVres_stack_7->SetBinError(4,0.631544);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8512461);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7307759);
   hNCpi0inFVres_stack_7->SetBinError(7,0.815459);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8598392);
   hNCpi0inFVres_stack_7->SetBinError(9,1.062495);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8127465);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8855177);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7084877);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6577711);
   hNCpi0inFVres_stack_7->SetBinError(14,0.916198);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8970559);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6911738);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8728002);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7596893);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8782759);
   hNCpi0inFVres_stack_7->SetBinError(20,0.939435);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8321278);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8955457);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7987525);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5997078);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9742497);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8447013);
   hNCpi0inFVres_stack_7->SetBinError(27,0.8288872);
   hNCpi0inFVres_stack_7->SetBinError(28,0.8768964);
   hNCpi0inFVres_stack_7->SetBinError(29,1.267003);
   hNCpi0inFVres_stack_7->SetBinError(30,1.289552);
   hNCpi0inFVres_stack_7->SetBinError(31,0.04293191);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.5484);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.191641);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.926897);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.293739);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.9351158);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.698649);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.714959);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.449795);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.975064);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.407798);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9813814);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.717842);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.880417);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.712917);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.963673);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.881997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.363746);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.385718);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.542444);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.968627);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.179241);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.081422);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.801427);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.914841);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.939697);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.284731);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.214256);
   hNCpi0inFVdis_stack_8->SetBinContent(28,2.506507);
   hNCpi0inFVdis_stack_8->SetBinContent(29,4.630715);
   hNCpi0inFVdis_stack_8->SetBinContent(30,3.85502);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8827079);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6105086);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4940924);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7244881);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2248033);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4938349);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.446018);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3317916);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4753711);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3648394);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2414396);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7849714);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7377176);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6082572);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.681782);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4533763);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5855294);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.876571);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6071286);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4615922);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4437067);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4177203);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3913065);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4711725);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5138197);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4587157);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.5941623);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.5705644);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.9385978);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6368183);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,10.02735);
   hCCpi0inFV_stack_10->SetBinContent(2,10.63005);
   hCCpi0inFV_stack_10->SetBinContent(3,10.62151);
   hCCpi0inFV_stack_10->SetBinContent(4,11.01432);
   hCCpi0inFV_stack_10->SetBinContent(5,10.88805);
   hCCpi0inFV_stack_10->SetBinContent(6,9.125179);
   hCCpi0inFV_stack_10->SetBinContent(7,8.43215);
   hCCpi0inFV_stack_10->SetBinContent(8,11.44006);
   hCCpi0inFV_stack_10->SetBinContent(9,10.63316);
   hCCpi0inFV_stack_10->SetBinContent(10,12.59032);
   hCCpi0inFV_stack_10->SetBinContent(11,10.09278);
   hCCpi0inFV_stack_10->SetBinContent(12,8.015831);
   hCCpi0inFV_stack_10->SetBinContent(13,9.032006);
   hCCpi0inFV_stack_10->SetBinContent(14,9.017072);
   hCCpi0inFV_stack_10->SetBinContent(15,11.58255);
   hCCpi0inFV_stack_10->SetBinContent(16,9.566494);
   hCCpi0inFV_stack_10->SetBinContent(17,8.937079);
   hCCpi0inFV_stack_10->SetBinContent(18,8.685475);
   hCCpi0inFV_stack_10->SetBinContent(19,8.670103);
   hCCpi0inFV_stack_10->SetBinContent(20,9.086236);
   hCCpi0inFV_stack_10->SetBinContent(21,11.53302);
   hCCpi0inFV_stack_10->SetBinContent(22,13.2849);
   hCCpi0inFV_stack_10->SetBinContent(23,9.7107);
   hCCpi0inFV_stack_10->SetBinContent(24,6.538695);
   hCCpi0inFV_stack_10->SetBinContent(25,9.136356);
   hCCpi0inFV_stack_10->SetBinContent(26,10.28889);
   hCCpi0inFV_stack_10->SetBinContent(27,9.541047);
   hCCpi0inFV_stack_10->SetBinContent(28,13.00425);
   hCCpi0inFV_stack_10->SetBinContent(29,17.48455);
   hCCpi0inFV_stack_10->SetBinContent(30,20.48573);
   hCCpi0inFV_stack_10->SetBinError(1,1.602461);
   hCCpi0inFV_stack_10->SetBinError(2,1.648161);
   hCCpi0inFV_stack_10->SetBinError(3,1.680753);
   hCCpi0inFV_stack_10->SetBinError(4,1.615776);
   hCCpi0inFV_stack_10->SetBinError(5,1.666778);
   hCCpi0inFV_stack_10->SetBinError(6,1.513594);
   hCCpi0inFV_stack_10->SetBinError(7,1.45365);
   hCCpi0inFV_stack_10->SetBinError(8,1.653235);
   hCCpi0inFV_stack_10->SetBinError(9,1.621937);
   hCCpi0inFV_stack_10->SetBinError(10,1.80948);
   hCCpi0inFV_stack_10->SetBinError(11,1.636321);
   hCCpi0inFV_stack_10->SetBinError(12,1.401414);
   hCCpi0inFV_stack_10->SetBinError(13,1.473625);
   hCCpi0inFV_stack_10->SetBinError(14,1.525911);
   hCCpi0inFV_stack_10->SetBinError(15,1.712539);
   hCCpi0inFV_stack_10->SetBinError(16,1.569361);
   hCCpi0inFV_stack_10->SetBinError(17,1.528387);
   hCCpi0inFV_stack_10->SetBinError(18,1.548331);
   hCCpi0inFV_stack_10->SetBinError(19,1.498326);
   hCCpi0inFV_stack_10->SetBinError(20,1.50714);
   hCCpi0inFV_stack_10->SetBinError(21,1.75698);
   hCCpi0inFV_stack_10->SetBinError(22,1.841898);
   hCCpi0inFV_stack_10->SetBinError(23,1.549778);
   hCCpi0inFV_stack_10->SetBinError(24,1.278608);
   hCCpi0inFV_stack_10->SetBinError(25,1.463721);
   hCCpi0inFV_stack_10->SetBinError(26,1.645647);
   hCCpi0inFV_stack_10->SetBinError(27,1.611685);
   hCCpi0inFV_stack_10->SetBinError(28,1.799282);
   hCCpi0inFV_stack_10->SetBinError(29,2.057079);
   hCCpi0inFV_stack_10->SetBinError(30,2.322104);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,1.636262);
   hNCinFV_stack_11->SetBinContent(2,2.638781);
   hNCinFV_stack_11->SetBinContent(3,2.411351);
   hNCinFV_stack_11->SetBinContent(4,2.215559);
   hNCinFV_stack_11->SetBinContent(5,1.132548);
   hNCinFV_stack_11->SetBinContent(6,1.829684);
   hNCinFV_stack_11->SetBinContent(7,1.932783);
   hNCinFV_stack_11->SetBinContent(8,0.9846445);
   hNCinFV_stack_11->SetBinContent(9,1.677312);
   hNCinFV_stack_11->SetBinContent(10,0.9969867);
   hNCinFV_stack_11->SetBinContent(11,3.01361);
   hNCinFV_stack_11->SetBinContent(12,0.4665405);
   hNCinFV_stack_11->SetBinContent(13,1.91782);
   hNCinFV_stack_11->SetBinContent(14,1.457292);
   hNCinFV_stack_11->SetBinContent(15,1.348743);
   hNCinFV_stack_11->SetBinContent(16,2.89183);
   hNCinFV_stack_11->SetBinContent(17,1.957709);
   hNCinFV_stack_11->SetBinContent(18,2.094625);
   hNCinFV_stack_11->SetBinContent(19,0.9190985);
   hNCinFV_stack_11->SetBinContent(20,1.337168);
   hNCinFV_stack_11->SetBinContent(21,3.498623);
   hNCinFV_stack_11->SetBinContent(22,3.766578);
   hNCinFV_stack_11->SetBinContent(23,1.136856);
   hNCinFV_stack_11->SetBinContent(24,3.51185);
   hNCinFV_stack_11->SetBinContent(25,3.022699);
   hNCinFV_stack_11->SetBinContent(26,3.184197);
   hNCinFV_stack_11->SetBinContent(27,1.759243);
   hNCinFV_stack_11->SetBinContent(28,2.916822);
   hNCinFV_stack_11->SetBinContent(29,5.008615);
   hNCinFV_stack_11->SetBinContent(30,7.205603);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.6262055);
   hNCinFV_stack_11->SetBinError(2,0.9850144);
   hNCinFV_stack_11->SetBinError(3,0.7906837);
   hNCinFV_stack_11->SetBinError(4,1.081179);
   hNCinFV_stack_11->SetBinError(5,0.4242022);
   hNCinFV_stack_11->SetBinError(6,0.8762736);
   hNCinFV_stack_11->SetBinError(7,0.6722995);
   hNCinFV_stack_11->SetBinError(8,0.3966146);
   hNCinFV_stack_11->SetBinError(9,0.7584694);
   hNCinFV_stack_11->SetBinError(10,0.5334027);
   hNCinFV_stack_11->SetBinError(11,1.002794);
   hNCinFV_stack_11->SetBinError(12,0.2556208);
   hNCinFV_stack_11->SetBinError(13,0.8464574);
   hNCinFV_stack_11->SetBinError(14,0.5525982);
   hNCinFV_stack_11->SetBinError(15,0.551704);
   hNCinFV_stack_11->SetBinError(16,0.9910158);
   hNCinFV_stack_11->SetBinError(17,0.7683066);
   hNCinFV_stack_11->SetBinError(18,0.8602199);
   hNCinFV_stack_11->SetBinError(19,0.4171942);
   hNCinFV_stack_11->SetBinError(20,0.6659156);
   hNCinFV_stack_11->SetBinError(21,0.9276622);
   hNCinFV_stack_11->SetBinError(22,1.071785);
   hNCinFV_stack_11->SetBinError(23,0.4555612);
   hNCinFV_stack_11->SetBinError(24,0.943618);
   hNCinFV_stack_11->SetBinError(25,0.9689145);
   hNCinFV_stack_11->SetBinError(26,0.8767363);
   hNCinFV_stack_11->SetBinError(27,0.7349439);
   hNCinFV_stack_11->SetBinError(28,0.9011051);
   hNCinFV_stack_11->SetBinError(29,1.210486);
   hNCinFV_stack_11->SetBinError(30,1.362531);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,8.277203);
   hnumuCCinFV_stack_12->SetBinContent(2,7.022565);
   hnumuCCinFV_stack_12->SetBinContent(3,6.229461);
   hnumuCCinFV_stack_12->SetBinContent(4,10.29795);
   hnumuCCinFV_stack_12->SetBinContent(5,5.546801);
   hnumuCCinFV_stack_12->SetBinContent(6,7.823827);
   hnumuCCinFV_stack_12->SetBinContent(7,9.850571);
   hnumuCCinFV_stack_12->SetBinContent(8,11.86753);
   hnumuCCinFV_stack_12->SetBinContent(9,10.68803);
   hnumuCCinFV_stack_12->SetBinContent(10,4.551199);
   hnumuCCinFV_stack_12->SetBinContent(11,6.834692);
   hnumuCCinFV_stack_12->SetBinContent(12,5.553198);
   hnumuCCinFV_stack_12->SetBinContent(13,5.389316);
   hnumuCCinFV_stack_12->SetBinContent(14,4.614532);
   hnumuCCinFV_stack_12->SetBinContent(15,6.135522);
   hnumuCCinFV_stack_12->SetBinContent(16,6.297725);
   hnumuCCinFV_stack_12->SetBinContent(17,6.719109);
   hnumuCCinFV_stack_12->SetBinContent(18,4.321304);
   hnumuCCinFV_stack_12->SetBinContent(19,4.643588);
   hnumuCCinFV_stack_12->SetBinContent(20,7.625424);
   hnumuCCinFV_stack_12->SetBinContent(21,9.87541);
   hnumuCCinFV_stack_12->SetBinContent(22,8.904407);
   hnumuCCinFV_stack_12->SetBinContent(23,7.933486);
   hnumuCCinFV_stack_12->SetBinContent(24,5.223883);
   hnumuCCinFV_stack_12->SetBinContent(25,3.749358);
   hnumuCCinFV_stack_12->SetBinContent(26,6.248724);
   hnumuCCinFV_stack_12->SetBinContent(27,5.074771);
   hnumuCCinFV_stack_12->SetBinContent(28,6.671968);
   hnumuCCinFV_stack_12->SetBinContent(29,10.34772);
   hnumuCCinFV_stack_12->SetBinContent(30,9.449748);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.892397);
   hnumuCCinFV_stack_12->SetBinError(2,1.86156);
   hnumuCCinFV_stack_12->SetBinError(3,1.51475);
   hnumuCCinFV_stack_12->SetBinError(4,1.689174);
   hnumuCCinFV_stack_12->SetBinError(5,1.418244);
   hnumuCCinFV_stack_12->SetBinError(6,1.518638);
   hnumuCCinFV_stack_12->SetBinError(7,2.654657);
   hnumuCCinFV_stack_12->SetBinError(8,2.582648);
   hnumuCCinFV_stack_12->SetBinError(9,1.873619);
   hnumuCCinFV_stack_12->SetBinError(10,1.069251);
   hnumuCCinFV_stack_12->SetBinError(11,1.338985);
   hnumuCCinFV_stack_12->SetBinError(12,1.239476);
   hnumuCCinFV_stack_12->SetBinError(13,1.25427);
   hnumuCCinFV_stack_12->SetBinError(14,1.055568);
   hnumuCCinFV_stack_12->SetBinError(15,1.24569);
   hnumuCCinFV_stack_12->SetBinError(16,1.477567);
   hnumuCCinFV_stack_12->SetBinError(17,1.463396);
   hnumuCCinFV_stack_12->SetBinError(18,1.065323);
   hnumuCCinFV_stack_12->SetBinError(19,1.116463);
   hnumuCCinFV_stack_12->SetBinError(20,1.77625);
   hnumuCCinFV_stack_12->SetBinError(21,1.629721);
   hnumuCCinFV_stack_12->SetBinError(22,1.632068);
   hnumuCCinFV_stack_12->SetBinError(23,1.738331);
   hnumuCCinFV_stack_12->SetBinError(24,1.175134);
   hnumuCCinFV_stack_12->SetBinError(25,1.028353);
   hnumuCCinFV_stack_12->SetBinError(26,1.320142);
   hnumuCCinFV_stack_12->SetBinError(27,1.16205);
   hnumuCCinFV_stack_12->SetBinError(28,1.34533);
   hnumuCCinFV_stack_12->SetBinError(29,1.885614);
   hnumuCCinFV_stack_12->SetBinError(30,1.574479);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(19,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(23,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(24,1.186408);
   hnueCCinFV_stack_13->SetBinContent(25,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5749257);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,1.569686);
   hnueCCinFV_stack_13->SetBinContent(30,0.4992645);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.5475369);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.4972556);
   hnueCCinFV_stack_13->SetBinError(19,0.1711909);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4494399);
   hnueCCinFV_stack_13->SetBinError(23,0.2179626);
   hnueCCinFV_stack_13->SetBinError(24,0.8065664);
   hnueCCinFV_stack_13->SetBinError(25,0.3921167);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3359115);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,1.569686);
   hnueCCinFV_stack_13->SetBinError(30,0.3608779);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__8->SetBinContent(0,0.5884556);
   hmcerror__8->SetBinContent(1,65.30382);
   hmcerror__8->SetBinContent(2,55.22239);
   hmcerror__8->SetBinContent(3,52.51881);
   hmcerror__8->SetBinContent(4,59.49208);
   hmcerror__8->SetBinContent(5,50.70594);
   hmcerror__8->SetBinContent(6,55.53321);
   hmcerror__8->SetBinContent(7,52.77027);
   hmcerror__8->SetBinContent(8,75.06722);
   hmcerror__8->SetBinContent(9,57.51493);
   hmcerror__8->SetBinContent(10,42.98796);
   hmcerror__8->SetBinContent(11,52.13124);
   hmcerror__8->SetBinContent(12,44.1601);
   hmcerror__8->SetBinContent(13,47.68923);
   hmcerror__8->SetBinContent(14,47.50805);
   hmcerror__8->SetBinContent(15,50.78647);
   hmcerror__8->SetBinContent(16,48.09212);
   hmcerror__8->SetBinContent(17,42.3438);
   hmcerror__8->SetBinContent(18,38.09221);
   hmcerror__8->SetBinContent(19,43.28109);
   hmcerror__8->SetBinContent(20,52.52273);
   hmcerror__8->SetBinContent(21,81.10512);
   hmcerror__8->SetBinContent(22,55.6071);
   hmcerror__8->SetBinContent(23,43.34283);
   hmcerror__8->SetBinContent(24,45.71807);
   hmcerror__8->SetBinContent(25,44.71479);
   hmcerror__8->SetBinContent(26,44.23656);
   hmcerror__8->SetBinContent(27,46.86387);
   hmcerror__8->SetBinContent(28,46.75469);
   hmcerror__8->SetBinContent(29,70.0629);
   hmcerror__8->SetBinContent(30,79.15614);
   hmcerror__8->SetBinContent(31,2.279248);
   hmcerror__8->SetBinError(0,0.3397478);
   hmcerror__8->SetBinError(1,27.21955);
   hmcerror__8->SetBinError(2,18.00305);
   hmcerror__8->SetBinError(3,30.14051);
   hmcerror__8->SetBinError(4,17.6202);
   hmcerror__8->SetBinError(5,18.28425);
   hmcerror__8->SetBinError(6,14.83108);
   hmcerror__8->SetBinError(7,20.83805);
   hmcerror__8->SetBinError(8,24.45717);
   hmcerror__8->SetBinError(9,17.67806);
   hmcerror__8->SetBinError(10,16.02055);
   hmcerror__8->SetBinError(11,20.68466);
   hmcerror__8->SetBinError(12,14.23186);
   hmcerror__8->SetBinError(13,17.52397);
   hmcerror__8->SetBinError(14,15.62053);
   hmcerror__8->SetBinError(15,17.17389);
   hmcerror__8->SetBinError(16,18.7462);
   hmcerror__8->SetBinError(17,17.67116);
   hmcerror__8->SetBinError(18,20.79029);
   hmcerror__8->SetBinError(19,19.60022);
   hmcerror__8->SetBinError(20,17.40905);
   hmcerror__8->SetBinError(21,21.15503);
   hmcerror__8->SetBinError(22,23.44918);
   hmcerror__8->SetBinError(23,17.41405);
   hmcerror__8->SetBinError(24,20.33748);
   hmcerror__8->SetBinError(25,17.36245);
   hmcerror__8->SetBinError(26,17.06251);
   hmcerror__8->SetBinError(27,15.98081);
   hmcerror__8->SetBinError(28,15.80541);
   hmcerror__8->SetBinError(29,21.76561);
   hmcerror__8->SetBinError(30,24.6736);
   hmcerror__8->SetBinError(31,5.116935);
   hmcerror__8->SetBinError(32,0.3895343);
   hmcerror__8->SetBinError(33,0.3895343);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[32] = {
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
   Double_t _fy3009[32] = {
   49,
   65,
   49,
   51,
   47,
   44,
   58,
   60,
   45,
   45,
   47,
   38,
   38,
   58,
   49,
   50,
   36,
   30,
   41,
   43,
   93,
   48,
   42,
   40,
   47,
   46,
   49,
   51,
   59,
   51,
   0,
   0};
   Double_t _felx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3009[32] = {
   7.1318,
   8.1893,
   7.1318,
   7.2725,
   6.9882,
   6.7671,
   7.7446,
   7.8743,
   6.8416,
   6.8416,
   6.9882,
   6.3013,
   6.3013,
   7.7446,
   7.1318,
   7.2025,
   6.1381,
   5.6197,
   6.5384,
   6.6917,
   9.7658,
   7.0604,
   6.6155,
   6.4604,
   6.9882,
   6.9153,
   7.1318,
   7.2725,
   7.8097,
   7.2725,
   0,
   0};
   Double_t _fehx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3009[32] = {
   6.9277,
   7.9866,
   6.9277,
   7.0686,
   6.7839,
   6.5623,
   7.5415,
   7.6713,
   6.637,
   6.637,
   6.7839,
   6.0955,
   6.0955,
   7.5415,
   6.9277,
   6.9985,
   5.9318,
   5.4117,
   6.3331,
   6.4868,
   9.564,
   6.8561,
   6.4104,
   6.2549,
   6.7839,
   6.7108,
   6.9277,
   7.0686,
   7.6066,
   7.0686,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1210);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(112.8204);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1469.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.3","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.2","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[32] = {
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
   Double_t _fy3010[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3010[32] = {
   0.4168141,
   0.3260099,
   0.5738994,
   0.2961772,
   0.3605939,
   0.2670668,
   0.3948825,
   0.3258036,
   0.3073646,
   0.3726754,
   0.3967806,
   0.3222788,
   0.3674617,
   0.3287976,
   0.3381588,
   0.3897977,
   0.4173257,
   0.5457885,
   0.4528588,
   0.3314574,
   0.2608347,
   0.4216939,
   0.4017746,
   0.4448455,
   0.3882934,
   0.3857106,
   0.3410049,
   0.3380497,
   0.3106582,
   0.3117079,
   2.24501,
   0};
   Double_t _fehx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3010[32] = {
   0.4168141,
   0.3260099,
   0.5738994,
   0.2961772,
   0.3605939,
   0.2670668,
   0.3948825,
   0.3258036,
   0.3073646,
   0.3726754,
   0.3967806,
   0.3222788,
   0.3674617,
   0.3287976,
   0.3381588,
   0.3897977,
   0.4173257,
   0.5457885,
   0.4528588,
   0.3314574,
   0.2608347,
   0.4216939,
   0.4017746,
   0.4448455,
   0.3882934,
   0.3857106,
   0.3410049,
   0.3380497,
   0.3106582,
   0.3117079,
   2.24501,
   0};
   grae = new TGraphAsymmErrors(32,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1210);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[32] = {
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
   Double_t _fy3011[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3011[32] = {
   0.1913713,
   0.2016313,
   0.2078137,
   0.1806456,
   0.2053619,
   0.1726891,
   0.2041093,
   0.1696151,
   0.1776867,
   0.2336592,
   0.191934,
   0.2045305,
   0.1909942,
   0.2072188,
   0.2276059,
   0.2373961,
   0.2107793,
   0.2163764,
   0.2288982,
   0.2058372,
   0.1637238,
   0.2127951,
   0.2323593,
   0.2103707,
   0.2127876,
   0.2411434,
   0.2203914,
   0.2259948,
   0.2210288,
   0.2286297,
   0.4364629,
   0};
   Double_t _fehx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3011[32] = {
   0.1913713,
   0.2016313,
   0.2078137,
   0.1806456,
   0.2053619,
   0.1726891,
   0.2041093,
   0.1696151,
   0.1776867,
   0.2336592,
   0.191934,
   0.2045305,
   0.1909942,
   0.2072188,
   0.2276059,
   0.2373961,
   0.2107793,
   0.2163764,
   0.2288982,
   0.2058372,
   0.1637238,
   0.2127951,
   0.2323593,
   0.2103707,
   0.2127876,
   0.2411434,
   0.2203914,
   0.2259948,
   0.2210288,
   0.2286297,
   0.4364629,
   0};
   grae = new TGraphAsymmErrors(32,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1210);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[32] = {
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
   Double_t _fy3012[32] = {
   0.750339,
   1.177059,
   0.9329991,
   0.857257,
   0.9269132,
   0.7923187,
   1.099104,
   0.7992836,
   0.7824055,
   1.046805,
   0.9015708,
   0.8605054,
   0.7968256,
   1.220846,
   0.9648239,
   1.039671,
   0.8501834,
   0.7875627,
   0.9472959,
   0.8186932,
   1.14666,
   0.8631991,
   0.9690183,
   0.8749275,
   1.051106,
   1.039864,
   1.045582,
   1.0908,
   0.8421004,
   0.6442962,
   0,
   10};
   Double_t _felx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3012[32] = {
   0.1092095,
   0.1482967,
   0.1357952,
   0.1222432,
   0.1378182,
   0.1218568,
   0.1467607,
   0.1048966,
   0.1189535,
   0.1591516,
   0.1340501,
   0.1426922,
   0.1321326,
   0.1630166,
   0.1404272,
   0.1497647,
   0.1449586,
   0.1475289,
   0.1510683,
   0.1274058,
   0.1204092,
   0.1269694,
   0.1526319,
   0.1413095,
   0.1562839,
   0.1563254,
   0.1521812,
   0.1555459,
   0.111467,
   0.09187538,
   0,
   0};
   Double_t _fehx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3012[32] = {
   0.1060842,
   0.1446261,
   0.1319089,
   0.1188158,
   0.1337891,
   0.1181689,
   0.1429119,
   0.1021924,
   0.1153961,
   0.1543921,
   0.1301312,
   0.1380319,
   0.1278171,
   0.1587415,
   0.1364084,
   0.1455228,
   0.1400866,
   0.1420684,
   0.1463249,
   0.1235046,
   0.117921,
   0.1232954,
   0.1478999,
   0.1368146,
   0.1517149,
   0.1517026,
   0.147826,
   0.1511848,
   0.1085682,
   0.08929946,
   0.5035872,
   0};
   grae = new TGraphAsymmErrors(32,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1210);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(11);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 20:27:24 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-1.026061,293.3333,113.4608);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__25->SetBinContent(0,0.717828);
   hmc__25->SetBinContent(1,37.18081);
   hmc__25->SetBinContent(2,29.96583);
   hmc__25->SetBinContent(3,25.68149);
   hmc__25->SetBinContent(4,20.18786);
   hmc__25->SetBinContent(5,18.73187);
   hmc__25->SetBinContent(6,18.42518);
   hmc__25->SetBinContent(7,15.67968);
   hmc__25->SetBinContent(8,18.1405);
   hmc__25->SetBinContent(9,17.91954);
   hmc__25->SetBinContent(10,21.2325);
   hmc__25->SetBinContent(11,17.3418);
   hmc__25->SetBinContent(12,22.90874);
   hmc__25->SetBinContent(13,23.066);
   hmc__25->SetBinContent(14,26.56855);
   hmc__25->SetBinContent(15,19.80532);
   hmc__25->SetBinContent(16,24.25692);
   hmc__25->SetBinContent(17,26.4529);
   hmc__25->SetBinContent(18,28.5461);
   hmc__25->SetBinContent(19,26.64945);
   hmc__25->SetBinContent(20,28.21824);
   hmc__25->SetBinContent(21,32.86977);
   hmc__25->SetBinContent(22,38.74338);
   hmc__25->SetBinContent(23,51.30306);
   hmc__25->SetBinContent(24,45.34676);
   hmc__25->SetBinContent(25,45.56358);
   hmc__25->SetBinContent(26,38.37663);
   hmc__25->SetBinContent(27,1.177336);
   hmc__25->SetBinError(0,0.4273494);
   hmc__25->SetBinError(1,16.61039);
   hmc__25->SetBinError(2,15.97612);
   hmc__25->SetBinError(3,11.75416);
   hmc__25->SetBinError(4,12.01047);
   hmc__25->SetBinError(5,12.23821);
   hmc__25->SetBinError(6,8.915725);
   hmc__25->SetBinError(7,9.976039);
   hmc__25->SetBinError(8,12.33192);
   hmc__25->SetBinError(9,8.412751);
   hmc__25->SetBinError(10,12.74409);
   hmc__25->SetBinError(11,12.2987);
   hmc__25->SetBinError(12,13.33632);
   hmc__25->SetBinError(13,12.8894);
   hmc__25->SetBinError(14,9.963654);
   hmc__25->SetBinError(15,11.97562);
   hmc__25->SetBinError(16,12.8946);
   hmc__25->SetBinError(17,18.05134);
   hmc__25->SetBinError(18,17.15227);
   hmc__25->SetBinError(19,12.41913);
   hmc__25->SetBinError(20,13.63326);
   hmc__25->SetBinError(21,20.35378);
   hmc__25->SetBinError(22,15.02357);
   hmc__25->SetBinError(23,20.5706);
   hmc__25->SetBinError(24,16.60882);
   hmc__25->SetBinError(25,27.28844);
   hmc__25->SetBinError(26,15.68707);
   hmc__25->SetBinError(27,4.203501);
   hmc__25->SetMinimum(-1.026061);
   hmc__25->SetMaximum(107.7364);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",26,0,260);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(53.86822);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,0.7336084);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.7302274);
   hbadmatch_stack_1->SetBinContent(4,0.7791866);
   hbadmatch_stack_1->SetBinContent(5,0.1950248);
   hbadmatch_stack_1->SetBinContent(6,0.8537275);
   hbadmatch_stack_1->SetBinContent(8,0.6803553);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.5884556);
   hbadmatch_stack_1->SetBinContent(11,1.239929);
   hbadmatch_stack_1->SetBinContent(12,1.362599);
   hbadmatch_stack_1->SetBinContent(13,1.26712);
   hbadmatch_stack_1->SetBinContent(14,1.517089);
   hbadmatch_stack_1->SetBinContent(15,0.7319179);
   hbadmatch_stack_1->SetBinContent(16,0.800496);
   hbadmatch_stack_1->SetBinContent(17,0.9801958);
   hbadmatch_stack_1->SetBinContent(18,1.020667);
   hbadmatch_stack_1->SetBinContent(19,0.5884556);
   hbadmatch_stack_1->SetBinContent(20,0.5884556);
   hbadmatch_stack_1->SetBinContent(21,0.9583585);
   hbadmatch_stack_1->SetBinContent(22,1.491589);
   hbadmatch_stack_1->SetBinContent(23,2.559958);
   hbadmatch_stack_1->SetBinContent(24,0.4117681);
   hbadmatch_stack_1->SetBinContent(25,1.01506);
   hbadmatch_stack_1->SetBinContent(26,1.643643);
   hbadmatch_stack_1->SetBinError(1,0.4394482);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.4379386);
   hbadmatch_stack_1->SetBinError(4,0.4618265);
   hbadmatch_stack_1->SetBinError(5,0.1950249);
   hbadmatch_stack_1->SetBinError(6,0.4284689);
   hbadmatch_stack_1->SetBinError(8,0.4810838);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.3397478);
   hbadmatch_stack_1->SetBinError(11,0.6287267);
   hbadmatch_stack_1->SetBinError(12,0.7250442);
   hbadmatch_stack_1->SetBinError(13,0.5883944);
   hbadmatch_stack_1->SetBinError(14,0.5887087);
   hbadmatch_stack_1->SetBinError(15,0.438694);
   hbadmatch_stack_1->SetBinError(16,0.4708987);
   hbadmatch_stack_1->SetBinError(17,0.4383608);
   hbadmatch_stack_1->SetBinError(18,0.5349865);
   hbadmatch_stack_1->SetBinError(19,0.3397478);
   hbadmatch_stack_1->SetBinError(20,0.3397478);
   hbadmatch_stack_1->SetBinError(21,0.4935862);
   hbadmatch_stack_1->SetBinError(22,0.5661541);
   hbadmatch_stack_1->SetBinError(23,0.9010235);
   hbadmatch_stack_1->SetBinError(24,0.2914526);
   hbadmatch_stack_1->SetBinError(25,0.5218519);
   hbadmatch_stack_1->SetBinError(26,0.6985535);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(1,0.8131978);
   hext_stack_2->SetBinContent(2,2.420823);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,1.779209);
   hext_stack_2->SetBinContent(6,1.37261);
   hext_stack_2->SetBinContent(7,0.6416141);
   hext_stack_2->SetBinContent(8,1.290409);
   hext_stack_2->SetBinContent(9,3.532468);
   hext_stack_2->SetBinContent(10,1.779209);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,3.15182);
   hext_stack_2->SetBinContent(13,2.110787);
   hext_stack_2->SetBinContent(14,6.677107);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,3.166181);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,6.374251);
   hext_stack_2->SetBinContent(19,1.379791);
   hext_stack_2->SetBinContent(20,1.689827);
   hext_stack_2->SetBinContent(21,5.248246);
   hext_stack_2->SetBinContent(22,7.650299);
   hext_stack_2->SetBinContent(23,9.02291);
   hext_stack_2->SetBinContent(24,7.023046);
   hext_stack_2->SetBinContent(25,6.139236);
   hext_stack_2->SetBinContent(26,8.299094);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(1,0.5750177);
   hext_stack_2->SetBinError(2,1.122148);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,0.9206235);
   hext_stack_2->SetBinError(6,0.8259691);
   hext_stack_2->SetBinError(7,0.6416141);
   hext_stack_2->SetBinError(8,0.788756);
   hext_stack_2->SetBinError(9,1.47091);
   hext_stack_2->SetBinError(10,0.9206235);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,1.23684);
   hext_stack_2->SetBinError(13,0.8669371);
   hext_stack_2->SetBinError(14,1.973462);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,1.061777);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,1.784857);
   hext_stack_2->SetBinError(19,0.6935586);
   hext_stack_2->SetBinError(20,0.9943139);
   hext_stack_2->SetBinError(21,1.638217);
   hext_stack_2->SetBinError(22,2.05189);
   hext_stack_2->SetBinError(23,2.211894);
   hext_stack_2->SetBinError(24,1.842873);
   hext_stack_2->SetBinError(25,1.714458);
   hext_stack_2->SetBinError(26,2.102551);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.4192812);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.400075);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.566972);
   hdirt_stack_3->SetBinContent(23,0.4004149);
   hdirt_stack_3->SetBinContent(24,0.4049124);
   hdirt_stack_3->SetBinContent(25,0.002351481);
   hdirt_stack_3->SetBinContent(26,0.6027733);
   hdirt_stack_3->SetBinError(1,0.3058667);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(17,0.296158);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.4505768);
   hdirt_stack_3->SetBinError(23,0.2964588);
   hdirt_stack_3->SetBinError(24,0.4049124);
   hdirt_stack_3->SetBinError(25,0.002351481);
   hdirt_stack_3->SetBinError(26,0.4293907);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,0.1967154);
   houtFV_stack_4->SetBinContent(1,22.06991);
   houtFV_stack_4->SetBinContent(2,3.122696);
   houtFV_stack_4->SetBinContent(3,3.719604);
   houtFV_stack_4->SetBinContent(4,3.324483);
   houtFV_stack_4->SetBinContent(5,2.982615);
   houtFV_stack_4->SetBinContent(6,3.124082);
   houtFV_stack_4->SetBinContent(7,3.004297);
   houtFV_stack_4->SetBinContent(8,3.174259);
   houtFV_stack_4->SetBinContent(9,1.324836);
   houtFV_stack_4->SetBinContent(10,4.256456);
   houtFV_stack_4->SetBinContent(11,1.607298);
   houtFV_stack_4->SetBinContent(12,3.767786);
   houtFV_stack_4->SetBinContent(13,4.05705);
   houtFV_stack_4->SetBinContent(14,3.101233);
   houtFV_stack_4->SetBinContent(15,2.832391);
   houtFV_stack_4->SetBinContent(16,3.409248);
   houtFV_stack_4->SetBinContent(17,6.185956);
   houtFV_stack_4->SetBinContent(18,2.929362);
   houtFV_stack_4->SetBinContent(19,3.568211);
   houtFV_stack_4->SetBinContent(20,4.966813);
   houtFV_stack_4->SetBinContent(21,2.180665);
   houtFV_stack_4->SetBinContent(22,2.875364);
   houtFV_stack_4->SetBinContent(23,4.391664);
   houtFV_stack_4->SetBinContent(24,4.541731);
   houtFV_stack_4->SetBinContent(25,5.908051);
   houtFV_stack_4->SetBinContent(26,13.8188);
   houtFV_stack_4->SetBinContent(27,0.8546757);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,2.357678);
   houtFV_stack_4->SetBinError(2,0.8988017);
   houtFV_stack_4->SetBinError(3,0.9625925);
   houtFV_stack_4->SetBinError(4,0.9211559);
   houtFV_stack_4->SetBinError(5,0.8556548);
   houtFV_stack_4->SetBinError(6,0.8579087);
   houtFV_stack_4->SetBinError(7,0.9694234);
   houtFV_stack_4->SetBinError(8,0.8768439);
   houtFV_stack_4->SetBinError(9,0.6098044);
   houtFV_stack_4->SetBinError(10,1.042865);
   houtFV_stack_4->SetBinError(11,0.6796534);
   houtFV_stack_4->SetBinError(12,0.9414194);
   houtFV_stack_4->SetBinError(13,1.050267);
   houtFV_stack_4->SetBinError(14,0.9270297);
   houtFV_stack_4->SetBinError(15,0.8077575);
   houtFV_stack_4->SetBinError(16,0.9569391);
   houtFV_stack_4->SetBinError(17,1.255852);
   houtFV_stack_4->SetBinError(18,0.8777653);
   houtFV_stack_4->SetBinError(19,0.9199182);
   houtFV_stack_4->SetBinError(20,1.151343);
   houtFV_stack_4->SetBinError(21,0.6835527);
   houtFV_stack_4->SetBinError(22,0.8190281);
   houtFV_stack_4->SetBinError(23,1.008605);
   houtFV_stack_4->SetBinError(24,1.11103);
   houtFV_stack_4->SetBinError(25,1.205254);
   houtFV_stack_4->SetBinError(26,1.872395);
   houtFV_stack_4->SetBinError(27,0.5300589);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04832419);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.53161);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.198648);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.405733);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.43786);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.605596);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.479218);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.144914);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.162772);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.045684);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.039948);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.392942);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.851632);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.398847);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.876788);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.822316);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.000005);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.188928);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.587073);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.9419);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.38406);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.096426);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.89358);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.413301);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.831297);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.634006);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.891238);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7039401);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9422962);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9106126);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7034326);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7516686);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7839011);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7476017);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8401405);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6593065);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5376982);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7147768);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7466468);
   hNCpi0inFVres_stack_7->SetBinError(13,0.830199);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6513379);
   hNCpi0inFVres_stack_7->SetBinError(15,0.629046);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5748392);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7903296);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6569404);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8512629);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7728589);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8672669);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9750133);
   hNCpi0inFVres_stack_7->SetBinError(23,1.022777);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9795262);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9972467);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6712994);
   hNCpi0inFVres_stack_7->SetBinError(27,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.770989);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.771326);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.393344);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.19854);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6267538);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.948272);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.850954);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.380726);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.213158);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.21399);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.590476);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6412039);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.15719);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8644038);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.03214);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.800226);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.700412);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.050494);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.565648);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.329662);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.138434);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.366276);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3676763);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4479997);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3806789);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3053129);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1943021);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3247714);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3098478);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4356673);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3903545);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.414298);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4708042);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2532885);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3435999);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2652967);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3749275);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.503495);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4315529);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4911687);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5252489);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5308387);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6191721);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4042329);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,3.471326);
   hCCpi0inFV_stack_10->SetBinContent(2,8.075333);
   hCCpi0inFV_stack_10->SetBinContent(3,4.407804);
   hCCpi0inFV_stack_10->SetBinContent(4,2.696858);
   hCCpi0inFV_stack_10->SetBinContent(5,3.034178);
   hCCpi0inFV_stack_10->SetBinContent(6,3.911248);
   hCCpi0inFV_stack_10->SetBinContent(7,2.350796);
   hCCpi0inFV_stack_10->SetBinContent(8,2.096761);
   hCCpi0inFV_stack_10->SetBinContent(9,3.614091);
   hCCpi0inFV_stack_10->SetBinContent(10,5.329703);
   hCCpi0inFV_stack_10->SetBinContent(11,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(12,3.741624);
   hCCpi0inFV_stack_10->SetBinContent(13,2.647509);
   hCCpi0inFV_stack_10->SetBinContent(14,6.12528);
   hCCpi0inFV_stack_10->SetBinContent(15,4.214521);
   hCCpi0inFV_stack_10->SetBinContent(16,5.478209);
   hCCpi0inFV_stack_10->SetBinContent(17,4.736971);
   hCCpi0inFV_stack_10->SetBinContent(18,7.238106);
   hCCpi0inFV_stack_10->SetBinContent(19,4.888752);
   hCCpi0inFV_stack_10->SetBinContent(20,5.158802);
   hCCpi0inFV_stack_10->SetBinContent(21,6.479487);
   hCCpi0inFV_stack_10->SetBinContent(22,6.838164);
   hCCpi0inFV_stack_10->SetBinContent(23,8.409026);
   hCCpi0inFV_stack_10->SetBinContent(24,10.1409);
   hCCpi0inFV_stack_10->SetBinContent(25,8.593351);
   hCCpi0inFV_stack_10->SetBinContent(26,5.10794);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,0.9627442);
   hCCpi0inFV_stack_10->SetBinError(2,1.417034);
   hCCpi0inFV_stack_10->SetBinError(3,0.9811778);
   hCCpi0inFV_stack_10->SetBinError(4,0.8001634);
   hCCpi0inFV_stack_10->SetBinError(5,0.8325598);
   hCCpi0inFV_stack_10->SetBinError(6,0.9814756);
   hCCpi0inFV_stack_10->SetBinError(7,0.7227205);
   hCCpi0inFV_stack_10->SetBinError(8,0.7209763);
   hCCpi0inFV_stack_10->SetBinError(9,0.9646921);
   hCCpi0inFV_stack_10->SetBinError(10,1.11922);
   hCCpi0inFV_stack_10->SetBinError(11,0.89917);
   hCCpi0inFV_stack_10->SetBinError(12,1.048684);
   hCCpi0inFV_stack_10->SetBinError(13,0.7863911);
   hCCpi0inFV_stack_10->SetBinError(14,1.274933);
   hCCpi0inFV_stack_10->SetBinError(15,1.099361);
   hCCpi0inFV_stack_10->SetBinError(16,1.127041);
   hCCpi0inFV_stack_10->SetBinError(17,1.09354);
   hCCpi0inFV_stack_10->SetBinError(18,1.391057);
   hCCpi0inFV_stack_10->SetBinError(19,1.139219);
   hCCpi0inFV_stack_10->SetBinError(20,1.144105);
   hCCpi0inFV_stack_10->SetBinError(21,1.316171);
   hCCpi0inFV_stack_10->SetBinError(22,1.28671);
   hCCpi0inFV_stack_10->SetBinError(23,1.471699);
   hCCpi0inFV_stack_10->SetBinError(24,1.555628);
   hCCpi0inFV_stack_10->SetBinError(25,1.507339);
   hCCpi0inFV_stack_10->SetBinError(26,1.183767);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,0.9286332);
   hNCinFV_stack_11->SetBinContent(2,2.107235);
   hNCinFV_stack_11->SetBinContent(3,2.877799);
   hNCinFV_stack_11->SetBinContent(4,1.125349);
   hNCinFV_stack_11->SetBinContent(5,1.123658);
   hNCinFV_stack_11->SetBinContent(6,0.785171);
   hNCinFV_stack_11->SetBinContent(7,0.536893);
   hNCinFV_stack_11->SetBinContent(8,0.7868615);
   hNCinFV_stack_11->SetBinContent(9,1.855576);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.9818863);
   hNCinFV_stack_11->SetBinContent(12,1.268811);
   hNCinFV_stack_11->SetBinContent(13,1.608988);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,1.268811);
   hNCinFV_stack_11->SetBinContent(17,0.9785053);
   hNCinFV_stack_11->SetBinContent(18,2.189451);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,1.465526);
   hNCinFV_stack_11->SetBinContent(21,2.055672);
   hNCinFV_stack_11->SetBinContent(22,1.713804);
   hNCinFV_stack_11->SetBinContent(23,3.66128);
   hNCinFV_stack_11->SetBinContent(24,1.608988);
   hNCinFV_stack_11->SetBinContent(25,3.212905);
   hNCinFV_stack_11->SetBinContent(26,1.178602);
   hNCinFV_stack_11->SetBinError(1,0.48078);
   hNCinFV_stack_11->SetBinError(2,0.6801976);
   hNCinFV_stack_11->SetBinError(3,0.8997006);
   hNCinFV_stack_11->SetBinError(4,0.5194673);
   hNCinFV_stack_11->SetBinError(5,0.5188295);
   hNCinFV_stack_11->SetBinError(6,0.3925882);
   hNCinFV_stack_11->SetBinError(7,0.3929602);
   hNCinFV_stack_11->SetBinError(8,0.3934307);
   hNCinFV_stack_11->SetBinError(9,0.6794384);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.4391155);
   hNCinFV_stack_11->SetBinError(12,0.5889569);
   hNCinFV_stack_11->SetBinError(13,0.6801404);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.5889569);
   hNCinFV_stack_11->SetBinError(17,0.4376048);
   hNCinFV_stack_11->SetBinError(18,0.7860589);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.6209405);
   hNCinFV_stack_11->SetBinError(21,0.7082781);
   hNCinFV_stack_11->SetBinError(22,0.6207051);
   hNCinFV_stack_11->SetBinError(23,0.9812871);
   hNCinFV_stack_11->SetBinError(24,0.6801404);
   hNCinFV_stack_11->SetBinError(25,0.9608305);
   hNCinFV_stack_11->SetBinError(26,0.4811646);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,2.985799);
   hnumuCCinFV_stack_12->SetBinContent(2,3.677411);
   hnumuCCinFV_stack_12->SetBinContent(3,1.885798);
   hnumuCCinFV_stack_12->SetBinContent(4,2.950141);
   hnumuCCinFV_stack_12->SetBinContent(5,2.465129);
   hnumuCCinFV_stack_12->SetBinContent(6,1.260115);
   hnumuCCinFV_stack_12->SetBinContent(7,3.374407);
   hnumuCCinFV_stack_12->SetBinContent(8,2.781918);
   hnumuCCinFV_stack_12->SetBinContent(9,2.246698);
   hnumuCCinFV_stack_12->SetBinContent(10,2.82549);
   hnumuCCinFV_stack_12->SetBinContent(11,3.790117);
   hnumuCCinFV_stack_12->SetBinContent(12,3.126605);
   hnumuCCinFV_stack_12->SetBinContent(13,4.191353);
   hnumuCCinFV_stack_12->SetBinContent(14,3.929796);
   hnumuCCinFV_stack_12->SetBinContent(15,5.048099);
   hnumuCCinFV_stack_12->SetBinContent(16,5.241669);
   hnumuCCinFV_stack_12->SetBinContent(17,5.641346);
   hnumuCCinFV_stack_12->SetBinContent(18,2.978666);
   hnumuCCinFV_stack_12->SetBinContent(19,8.010812);
   hnumuCCinFV_stack_12->SetBinContent(20,6.969057);
   hnumuCCinFV_stack_12->SetBinContent(21,6.491631);
   hnumuCCinFV_stack_12->SetBinContent(22,7.39859);
   hnumuCCinFV_stack_12->SetBinContent(23,8.69407);
   hnumuCCinFV_stack_12->SetBinContent(24,8.789732);
   hnumuCCinFV_stack_12->SetBinContent(25,6.857014);
   hnumuCCinFV_stack_12->SetBinContent(26,2.440362);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,0.9363855);
   hnumuCCinFV_stack_12->SetBinError(2,0.9451286);
   hnumuCCinFV_stack_12->SetBinError(3,0.7441957);
   hnumuCCinFV_stack_12->SetBinError(4,0.8597182);
   hnumuCCinFV_stack_12->SetBinError(5,0.7959484);
   hnumuCCinFV_stack_12->SetBinError(6,0.5738101);
   hnumuCCinFV_stack_12->SetBinError(7,1.276437);
   hnumuCCinFV_stack_12->SetBinError(8,0.9234159);
   hnumuCCinFV_stack_12->SetBinError(9,0.7643385);
   hnumuCCinFV_stack_12->SetBinError(10,0.895293);
   hnumuCCinFV_stack_12->SetBinError(11,1.169889);
   hnumuCCinFV_stack_12->SetBinError(12,1.133957);
   hnumuCCinFV_stack_12->SetBinError(13,1.071467);
   hnumuCCinFV_stack_12->SetBinError(14,1.068666);
   hnumuCCinFV_stack_12->SetBinError(15,1.26736);
   hnumuCCinFV_stack_12->SetBinError(16,1.757719);
   hnumuCCinFV_stack_12->SetBinError(17,1.184354);
   hnumuCCinFV_stack_12->SetBinError(18,0.9298155);
   hnumuCCinFV_stack_12->SetBinError(19,1.476272);
   hnumuCCinFV_stack_12->SetBinError(20,1.508372);
   hnumuCCinFV_stack_12->SetBinError(21,1.460455);
   hnumuCCinFV_stack_12->SetBinError(22,1.651305);
   hnumuCCinFV_stack_12->SetBinError(23,1.622723);
   hnumuCCinFV_stack_12->SetBinError(24,2.041929);
   hnumuCCinFV_stack_12->SetBinError(25,1.432213);
   hnumuCCinFV_stack_12->SetBinError(26,0.8090918);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(6,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(10,1.157431);
   hnueCCinFV_stack_13->SetBinContent(11,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(22,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(23,1.961426);
   hnueCCinFV_stack_13->SetBinContent(25,0.756103);
   hnueCCinFV_stack_13->SetBinError(3,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.3172361);
   hnueCCinFV_stack_13->SetBinError(6,0.2171002);
   hnueCCinFV_stack_13->SetBinError(10,1.157431);
   hnueCCinFV_stack_13->SetBinError(11,0.2331833);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.1711909);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.4494399);
   hnueCCinFV_stack_13->SetBinError(22,0.1529246);
   hnueCCinFV_stack_13->SetBinError(23,1.59394);
   hnueCCinFV_stack_13->SetBinError(25,0.4499676);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__26->SetBinContent(0,0.717828);
   hmcerror__26->SetBinContent(1,37.18081);
   hmcerror__26->SetBinContent(2,29.96583);
   hmcerror__26->SetBinContent(3,25.68149);
   hmcerror__26->SetBinContent(4,20.18786);
   hmcerror__26->SetBinContent(5,18.73187);
   hmcerror__26->SetBinContent(6,18.42518);
   hmcerror__26->SetBinContent(7,15.67968);
   hmcerror__26->SetBinContent(8,18.1405);
   hmcerror__26->SetBinContent(9,17.91954);
   hmcerror__26->SetBinContent(10,21.2325);
   hmcerror__26->SetBinContent(11,17.3418);
   hmcerror__26->SetBinContent(12,22.90874);
   hmcerror__26->SetBinContent(13,23.066);
   hmcerror__26->SetBinContent(14,26.56855);
   hmcerror__26->SetBinContent(15,19.80532);
   hmcerror__26->SetBinContent(16,24.25692);
   hmcerror__26->SetBinContent(17,26.4529);
   hmcerror__26->SetBinContent(18,28.5461);
   hmcerror__26->SetBinContent(19,26.64945);
   hmcerror__26->SetBinContent(20,28.21824);
   hmcerror__26->SetBinContent(21,32.86977);
   hmcerror__26->SetBinContent(22,38.74338);
   hmcerror__26->SetBinContent(23,51.30306);
   hmcerror__26->SetBinContent(24,45.34676);
   hmcerror__26->SetBinContent(25,45.56358);
   hmcerror__26->SetBinContent(26,38.37663);
   hmcerror__26->SetBinContent(27,1.177336);
   hmcerror__26->SetBinError(0,0.4273494);
   hmcerror__26->SetBinError(1,16.61039);
   hmcerror__26->SetBinError(2,15.97612);
   hmcerror__26->SetBinError(3,11.75416);
   hmcerror__26->SetBinError(4,12.01047);
   hmcerror__26->SetBinError(5,12.23821);
   hmcerror__26->SetBinError(6,8.915725);
   hmcerror__26->SetBinError(7,9.976039);
   hmcerror__26->SetBinError(8,12.33192);
   hmcerror__26->SetBinError(9,8.412751);
   hmcerror__26->SetBinError(10,12.74409);
   hmcerror__26->SetBinError(11,12.2987);
   hmcerror__26->SetBinError(12,13.33632);
   hmcerror__26->SetBinError(13,12.8894);
   hmcerror__26->SetBinError(14,9.963654);
   hmcerror__26->SetBinError(15,11.97562);
   hmcerror__26->SetBinError(16,12.8946);
   hmcerror__26->SetBinError(17,18.05134);
   hmcerror__26->SetBinError(18,17.15227);
   hmcerror__26->SetBinError(19,12.41913);
   hmcerror__26->SetBinError(20,13.63326);
   hmcerror__26->SetBinError(21,20.35378);
   hmcerror__26->SetBinError(22,15.02357);
   hmcerror__26->SetBinError(23,20.5706);
   hmcerror__26->SetBinError(24,16.60882);
   hmcerror__26->SetBinError(25,27.28844);
   hmcerror__26->SetBinError(26,15.68707);
   hmcerror__26->SetBinError(27,4.203501);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[26] = {
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
   Double_t _fy3033[26] = {
   28,
   18,
   27,
   20,
   16,
   16,
   18,
   12,
   19,
   16,
   19,
   12,
   19,
   12,
   16,
   17,
   26,
   21,
   22,
   26,
   35,
   34,
   31,
   34,
   38,
   29};
   Double_t _felx3033[26] = {
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
   Double_t _fely3033[26] = {
   5.4358,
   4.4008,
   5.3414,
   4.6266,
   4.1628,
   4.1628,
   4.4008,
   3.64022,
   4.5151,
   4.1628,
   4.5151,
   3.64022,
   4.5151,
   3.64022,
   4.1628,
   4.2835,
   5.2453,
   4.7354,
   4.8417,
   5.2453,
   6.0548,
   5.9703,
   5.7094,
   5.9703,
   6.3013,
   5.5285};
   Double_t _fehx3033[26] = {
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
   Double_t _fehy3033[26] = {
   5.2271,
   4.1858,
   5.1322,
   4.4133,
   3.9454,
   3.9454,
   4.1858,
   3.4155,
   4.3011,
   3.9454,
   4.3011,
   3.4155,
   4.3011,
   3.4155,
   3.9454,
   4.0673,
   5.0358,
   4.5229,
   4.6299,
   5.0358,
   5.8483,
   5.7635,
   5.5017,
   5.7635,
   6.0955,
   5.3201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,286);
   Graph_Graph3033->SetMinimum(4.786208);
   Graph_Graph3033->SetMaximum(47.66907);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 581.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.1","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 120.2","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 131.9","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.1","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[26] = {
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
   Double_t _fy3034[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[26] = {
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
   Double_t _fely3034[26] = {
   0.4467463,
   0.5331446,
   0.4576902,
   0.5949351,
   0.6533364,
   0.4838881,
   0.6362401,
   0.6798003,
   0.4694737,
   0.6002164,
   0.7091942,
   0.5821499,
   0.558805,
   0.3750168,
   0.6046671,
   0.5315842,
   0.6823956,
   0.6008622,
   0.4660182,
   0.4831366,
   0.6192248,
   0.3877712,
   0.4009624,
   0.3662626,
   0.5989091,
   0.4087661};
   Double_t _fehx3034[26] = {
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
   Double_t _fehy3034[26] = {
   0.4467463,
   0.5331446,
   0.4576902,
   0.5949351,
   0.6533364,
   0.4838881,
   0.6362401,
   0.6798003,
   0.4694737,
   0.6002164,
   0.7091942,
   0.5821499,
   0.558805,
   0.3750168,
   0.6046671,
   0.5315842,
   0.6823956,
   0.6008622,
   0.4660182,
   0.4831366,
   0.6192248,
   0.3877712,
   0.4009624,
   0.3662626,
   0.5989091,
   0.4087661};
   grae = new TGraphAsymmErrors(26,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,286);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[26] = {
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
   Double_t _fy3035[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[26] = {
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
   Double_t _fely3035[26] = {
   0.2469619,
   0.2915626,
   0.3322182,
   0.2840626,
   0.3216803,
   0.2978273,
   0.3257424,
   0.339716,
   0.2603904,
   0.3247097,
   0.2811557,
   0.240235,
   0.2531457,
   0.2257524,
   0.2709964,
   0.2408249,
   0.250507,
   0.225491,
   0.2451186,
   0.2635913,
   0.2422403,
   0.2250386,
   0.222113,
   0.2434197,
   0.2345555,
   0.2170001};
   Double_t _fehx3035[26] = {
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
   Double_t _fehy3035[26] = {
   0.2469619,
   0.2915626,
   0.3322182,
   0.2840626,
   0.3216803,
   0.2978273,
   0.3257424,
   0.339716,
   0.2603904,
   0.3247097,
   0.2811557,
   0.240235,
   0.2531457,
   0.2257524,
   0.2709964,
   0.2408249,
   0.250507,
   0.225491,
   0.2451186,
   0.2635913,
   0.2422403,
   0.2250386,
   0.222113,
   0.2434197,
   0.2345555,
   0.2170001};
   grae = new TGraphAsymmErrors(26,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,286);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[26] = {
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
   Double_t _fy3036[26] = {
   0.7530767,
   0.6006842,
   1.051341,
   0.9906944,
   0.8541592,
   0.8683769,
   1.147983,
   0.6615032,
   1.060295,
   0.7535618,
   1.095619,
   0.5238174,
   0.8237232,
   0.4516618,
   0.8078639,
   0.7008308,
   0.9828789,
   0.7356522,
   0.825533,
   0.92139,
   1.064808,
   0.8775692,
   0.6042524,
   0.7497779,
   0.8339994,
   0.7556682};
   Double_t _felx3036[26] = {
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
   Double_t _fely3036[26] = {
   0.1461991,
   0.1468606,
   0.2079864,
   0.2291773,
   0.2222309,
   0.22593,
   0.2806691,
   0.2006681,
   0.2519652,
   0.1960579,
   0.2603594,
   0.1589009,
   0.195747,
   0.1370123,
   0.210186,
   0.1765888,
   0.1982883,
   0.1658861,
   0.1816811,
   0.1858833,
   0.1842057,
   0.1540986,
   0.1112877,
   0.1316588,
   0.1382969,
   0.144059};
   Double_t _fehx3036[26] = {
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
   Double_t _fehy3036[26] = {
   0.140586,
   0.1396858,
   0.1998405,
   0.2186116,
   0.210625,
   0.2141309,
   0.266957,
   0.1882803,
   0.2400229,
   0.1858189,
   0.2480193,
   0.1490915,
   0.1864692,
   0.1285542,
   0.1992091,
   0.1676758,
   0.1903685,
   0.158442,
   0.1737334,
   0.1784591,
   0.1779234,
   0.1487609,
   0.1072392,
   0.1270984,
   0.1337801,
   0.1386286};
   grae = new TGraphAsymmErrors(26,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,286);
   Graph_Graph3036->SetMinimum(0.2046204);
   Graph_Graph3036->SetMaximum(1.524969);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

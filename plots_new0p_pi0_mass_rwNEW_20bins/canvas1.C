#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 13:44:46 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-15.32172,451.2821,1694.259);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__1->SetBinContent(1,181.1761);
   hmc__1->SetBinContent(2,235.8209);
   hmc__1->SetBinContent(3,268.3992);
   hmc__1->SetBinContent(4,276.5848);
   hmc__1->SetBinContent(5,298.931);
   hmc__1->SetBinContent(6,338.1404);
   hmc__1->SetBinContent(7,371.7094);
   hmc__1->SetBinContent(8,387.0141);
   hmc__1->SetBinContent(9,472.1655);
   hmc__1->SetBinContent(10,604.2792);
   hmc__1->SetBinContent(11,712.6117);
   hmc__1->SetBinContent(12,766.0858);
   hmc__1->SetBinContent(13,657.337);
   hmc__1->SetBinContent(14,410.644);
   hmc__1->SetBinContent(15,232.2621);
   hmc__1->SetBinContent(16,160.5399);
   hmc__1->SetBinContent(17,111.3187);
   hmc__1->SetBinContent(18,90.56165);
   hmc__1->SetBinContent(19,75.04724);
   hmc__1->SetBinContent(20,72.09172);
   hmc__1->SetBinContent(21,62.73417);
   hmc__1->SetBinContent(22,48.63745);
   hmc__1->SetBinContent(23,47.41221);
   hmc__1->SetBinContent(24,44.05557);
   hmc__1->SetBinContent(25,35.06035);
   hmc__1->SetBinContent(26,34.45328);
   hmc__1->SetBinContent(27,32.7007);
   hmc__1->SetBinContent(28,25.85806);
   hmc__1->SetBinContent(29,27.82906);
   hmc__1->SetBinContent(30,27.51482);
   hmc__1->SetBinContent(31,20.45642);
   hmc__1->SetBinContent(32,19.5812);
   hmc__1->SetBinContent(33,14.30063);
   hmc__1->SetBinContent(34,15.38799);
   hmc__1->SetBinContent(35,155.6032);
   hmc__1->SetBinError(1,59.28735);
   hmc__1->SetBinError(2,63.73668);
   hmc__1->SetBinError(3,58.5824);
   hmc__1->SetBinError(4,64.06689);
   hmc__1->SetBinError(5,72.60179);
   hmc__1->SetBinError(6,77.3914);
   hmc__1->SetBinError(7,114.9958);
   hmc__1->SetBinError(8,101.1966);
   hmc__1->SetBinError(9,125.8127);
   hmc__1->SetBinError(10,179.257);
   hmc__1->SetBinError(11,210.2873);
   hmc__1->SetBinError(12,219.5498);
   hmc__1->SetBinError(13,202.7212);
   hmc__1->SetBinError(14,142.5632);
   hmc__1->SetBinError(15,80.96113);
   hmc__1->SetBinError(16,47.62298);
   hmc__1->SetBinError(17,33.00017);
   hmc__1->SetBinError(18,29.10603);
   hmc__1->SetBinError(19,26.69614);
   hmc__1->SetBinError(20,29.24559);
   hmc__1->SetBinError(21,27.14576);
   hmc__1->SetBinError(22,18.93658);
   hmc__1->SetBinError(23,20.87731);
   hmc__1->SetBinError(24,20.51663);
   hmc__1->SetBinError(25,19.37529);
   hmc__1->SetBinError(26,21.83807);
   hmc__1->SetBinError(27,16.5672);
   hmc__1->SetBinError(28,15.07697);
   hmc__1->SetBinError(29,13.59307);
   hmc__1->SetBinError(30,14.98389);
   hmc__1->SetBinError(31,13.09725);
   hmc__1->SetBinError(32,11.78478);
   hmc__1->SetBinError(33,9.176628);
   hmc__1->SetBinError(34,12.33538);
   hmc__1->SetBinError(35,63.25595);
   hmc__1->SetMinimum(-15.32172);
   hmc__1->SetMaximum(1608.78);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",34,0,400);
   hs1_stack_1->SetMinimum(-1.429819e-08);
   hs1_stack_1->SetMaximum(804.3901);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,6.468472);
   hbadmatch_stack_1->SetBinContent(2,9.419398);
   hbadmatch_stack_1->SetBinContent(3,10.65596);
   hbadmatch_stack_1->SetBinContent(4,6.881686);
   hbadmatch_stack_1->SetBinContent(5,9.169657);
   hbadmatch_stack_1->SetBinContent(6,11.63974);
   hbadmatch_stack_1->SetBinContent(7,14.06124);
   hbadmatch_stack_1->SetBinContent(8,11.33245);
   hbadmatch_stack_1->SetBinContent(9,12.42768);
   hbadmatch_stack_1->SetBinContent(10,12.4991);
   hbadmatch_stack_1->SetBinContent(11,11.14997);
   hbadmatch_stack_1->SetBinContent(12,13.74033);
   hbadmatch_stack_1->SetBinContent(13,10.85444);
   hbadmatch_stack_1->SetBinContent(14,8.511345);
   hbadmatch_stack_1->SetBinContent(15,7.901584);
   hbadmatch_stack_1->SetBinContent(16,4.768334);
   hbadmatch_stack_1->SetBinContent(17,1.857266);
   hbadmatch_stack_1->SetBinContent(18,1.47015);
   hbadmatch_stack_1->SetBinContent(19,1.463836);
   hbadmatch_stack_1->SetBinContent(20,1.700109);
   hbadmatch_stack_1->SetBinContent(21,2.102773);
   hbadmatch_stack_1->SetBinContent(22,1.321927);
   hbadmatch_stack_1->SetBinContent(23,1.608988);
   hbadmatch_stack_1->SetBinContent(24,0.9286332);
   hbadmatch_stack_1->SetBinContent(25,1.381994);
   hbadmatch_stack_1->SetBinContent(26,0.9865863);
   hbadmatch_stack_1->SetBinContent(27,0.5901461);
   hbadmatch_stack_1->SetBinContent(28,0.4331311);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.7319179);
   hbadmatch_stack_1->SetBinContent(34,0.3934307);
   hbadmatch_stack_1->SetBinContent(35,1.125349);
   hbadmatch_stack_1->SetBinError(1,1.453671);
   hbadmatch_stack_1->SetBinError(2,1.81454);
   hbadmatch_stack_1->SetBinError(3,1.687213);
   hbadmatch_stack_1->SetBinError(4,1.328541);
   hbadmatch_stack_1->SetBinError(5,1.619527);
   hbadmatch_stack_1->SetBinError(6,1.846052);
   hbadmatch_stack_1->SetBinError(7,1.91043);
   hbadmatch_stack_1->SetBinError(8,1.953546);
   hbadmatch_stack_1->SetBinError(9,1.854593);
   hbadmatch_stack_1->SetBinError(10,1.816074);
   hbadmatch_stack_1->SetBinError(11,1.767006);
   hbadmatch_stack_1->SetBinError(12,2.462116);
   hbadmatch_stack_1->SetBinError(13,2.018091);
   hbadmatch_stack_1->SetBinError(14,2.073013);
   hbadmatch_stack_1->SetBinError(15,2.360541);
   hbadmatch_stack_1->SetBinError(16,1.229287);
   hbadmatch_stack_1->SetBinError(17,0.6799255);
   hbadmatch_stack_1->SetBinError(18,0.6209577);
   hbadmatch_stack_1->SetBinError(19,0.620407);
   hbadmatch_stack_1->SetBinError(20,0.6639801);
   hbadmatch_stack_1->SetBinError(21,0.7226673);
   hbadmatch_stack_1->SetBinError(22,0.6206167);
   hbadmatch_stack_1->SetBinError(23,0.6801404);
   hbadmatch_stack_1->SetBinError(24,0.48078);
   hbadmatch_stack_1->SetBinError(25,0.7161744);
   hbadmatch_stack_1->SetBinError(26,0.5240452);
   hbadmatch_stack_1->SetBinError(27,0.340721);
   hbadmatch_stack_1->SetBinError(28,0.3075538);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.438694);
   hbadmatch_stack_1->SetBinError(34,0.2781975);
   hbadmatch_stack_1->SetBinError(35,0.5194673);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,23.01117);
   hext_stack_2->SetBinContent(2,29.82238);
   hext_stack_2->SetBinContent(3,47.71545);
   hext_stack_2->SetBinContent(4,43.45911);
   hext_stack_2->SetBinContent(5,36.47914);
   hext_stack_2->SetBinContent(6,42.60124);
   hext_stack_2->SetBinContent(7,40.93296);
   hext_stack_2->SetBinContent(8,38.21804);
   hext_stack_2->SetBinContent(9,39.96418);
   hext_stack_2->SetBinContent(10,47.45561);
   hext_stack_2->SetBinContent(11,36.83825);
   hext_stack_2->SetBinContent(12,44.21441);
   hext_stack_2->SetBinContent(13,43.04533);
   hext_stack_2->SetBinContent(14,20.34538);
   hext_stack_2->SetBinContent(15,13.60919);
   hext_stack_2->SetBinContent(16,15.48937);
   hext_stack_2->SetBinContent(17,8.750413);
   hext_stack_2->SetBinContent(18,5.911401);
   hext_stack_2->SetBinContent(19,3.807795);
   hext_stack_2->SetBinContent(20,5.598593);
   hext_stack_2->SetBinContent(21,4.136601);
   hext_stack_2->SetBinContent(22,2.923985);
   hext_stack_2->SetBinContent(23,2.510206);
   hext_stack_2->SetBinContent(24,2.428004);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.916804);
   hext_stack_2->SetBinContent(27,1.290409);
   hext_stack_2->SetBinContent(28,0.6487947);
   hext_stack_2->SetBinContent(29,1.461993);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,0.8131978);
   hext_stack_2->SetBinContent(35,5.680795);
   hext_stack_2->SetBinError(1,3.058498);
   hext_stack_2->SetBinError(2,3.517398);
   hext_stack_2->SetBinError(3,4.543168);
   hext_stack_2->SetBinError(4,4.397209);
   hext_stack_2->SetBinError(5,3.838236);
   hext_stack_2->SetBinError(6,4.290705);
   hext_stack_2->SetBinError(7,4.100962);
   hext_stack_2->SetBinError(8,4.055921);
   hext_stack_2->SetBinError(9,4.078886);
   hext_stack_2->SetBinError(10,4.478252);
   hext_stack_2->SetBinError(11,3.996182);
   hext_stack_2->SetBinError(12,4.320425);
   hext_stack_2->SetBinError(13,4.401287);
   hext_stack_2->SetBinError(14,2.895923);
   hext_stack_2->SetBinError(15,2.372759);
   hext_stack_2->SetBinError(16,2.504065);
   hext_stack_2->SetBinError(17,1.962213);
   hext_stack_2->SetBinError(18,1.57855);
   hext_stack_2->SetBinError(19,1.24058);
   hext_stack_2->SetBinError(20,1.523321);
   hext_stack_2->SetBinError(21,1.33394);
   hext_stack_2->SetBinError(22,1.040301);
   hext_stack_2->SetBinError(23,1.057404);
   hext_stack_2->SetBinError(24,1.028599);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.132884);
   hext_stack_2->SetBinError(27,0.788756);
   hext_stack_2->SetBinError(28,0.4587671);
   hext_stack_2->SetBinError(29,0.7356036);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.5750177);
   hext_stack_2->SetBinError(35,1.542918);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.873683);
   hdirt_stack_3->SetBinContent(2,4.123341);
   hdirt_stack_3->SetBinContent(3,3.260415);
   hdirt_stack_3->SetBinContent(4,4.710588);
   hdirt_stack_3->SetBinContent(5,5.024939);
   hdirt_stack_3->SetBinContent(6,5.310221);
   hdirt_stack_3->SetBinContent(7,5.776726);
   hdirt_stack_3->SetBinContent(8,5.648034);
   hdirt_stack_3->SetBinContent(9,4.543724);
   hdirt_stack_3->SetBinContent(10,5.231871);
   hdirt_stack_3->SetBinContent(11,6.861405);
   hdirt_stack_3->SetBinContent(12,3.944119);
   hdirt_stack_3->SetBinContent(13,5.30054);
   hdirt_stack_3->SetBinContent(14,1.509301);
   hdirt_stack_3->SetBinContent(15,2.685964);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.6085784);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,1.142423);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.8865253);
   hdirt_stack_3->SetBinError(2,1.191333);
   hdirt_stack_3->SetBinError(3,0.8958128);
   hdirt_stack_3->SetBinError(4,1.085916);
   hdirt_stack_3->SetBinError(5,1.115533);
   hdirt_stack_3->SetBinError(6,1.171977);
   hdirt_stack_3->SetBinError(7,1.2596);
   hdirt_stack_3->SetBinError(8,1.271366);
   hdirt_stack_3->SetBinError(9,1.402095);
   hdirt_stack_3->SetBinError(10,1.438858);
   hdirt_stack_3->SetBinError(11,1.429995);
   hdirt_stack_3->SetBinError(12,1.074573);
   hdirt_stack_3->SetBinError(13,1.379656);
   hdirt_stack_3->SetBinError(14,0.6311453);
   hdirt_stack_3->SetBinError(15,0.8942396);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.3609533);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.530726);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,26.41922);
   houtFV_stack_4->SetBinContent(2,32.70713);
   houtFV_stack_4->SetBinContent(3,41.08385);
   houtFV_stack_4->SetBinContent(4,35.83141);
   houtFV_stack_4->SetBinContent(5,35.69196);
   houtFV_stack_4->SetBinContent(6,42.56401);
   houtFV_stack_4->SetBinContent(7,47.30473);
   houtFV_stack_4->SetBinContent(8,41.53412);
   houtFV_stack_4->SetBinContent(9,47.13142);
   houtFV_stack_4->SetBinContent(10,55.16146);
   houtFV_stack_4->SetBinContent(11,50.02842);
   houtFV_stack_4->SetBinContent(12,57.81875);
   houtFV_stack_4->SetBinContent(13,53.66279);
   houtFV_stack_4->SetBinContent(14,38.11302);
   houtFV_stack_4->SetBinContent(15,20.33364);
   houtFV_stack_4->SetBinContent(16,13.29221);
   houtFV_stack_4->SetBinContent(17,9.907639);
   houtFV_stack_4->SetBinContent(18,8.588598);
   houtFV_stack_4->SetBinContent(19,8.45438);
   houtFV_stack_4->SetBinContent(20,6.511948);
   houtFV_stack_4->SetBinContent(21,5.230222);
   houtFV_stack_4->SetBinContent(22,5.866569);
   houtFV_stack_4->SetBinContent(23,5.274184);
   houtFV_stack_4->SetBinContent(24,2.8307);
   houtFV_stack_4->SetBinContent(25,3.221046);
   houtFV_stack_4->SetBinContent(26,2.699071);
   houtFV_stack_4->SetBinContent(27,3.957386);
   houtFV_stack_4->SetBinContent(28,1.754141);
   houtFV_stack_4->SetBinContent(29,2.290579);
   houtFV_stack_4->SetBinContent(30,2.050601);
   houtFV_stack_4->SetBinContent(31,1.515398);
   houtFV_stack_4->SetBinContent(32,1.375317);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,11.43739);
   houtFV_stack_4->SetBinError(1,2.637656);
   houtFV_stack_4->SetBinError(2,2.865499);
   houtFV_stack_4->SetBinError(3,3.252529);
   houtFV_stack_4->SetBinError(4,3.176227);
   houtFV_stack_4->SetBinError(5,3.00312);
   houtFV_stack_4->SetBinError(6,3.221595);
   houtFV_stack_4->SetBinError(7,3.425848);
   houtFV_stack_4->SetBinError(8,3.270353);
   houtFV_stack_4->SetBinError(9,3.392089);
   houtFV_stack_4->SetBinError(10,3.733179);
   houtFV_stack_4->SetBinError(11,3.516659);
   houtFV_stack_4->SetBinError(12,3.846021);
   houtFV_stack_4->SetBinError(13,3.899458);
   houtFV_stack_4->SetBinError(14,3.129479);
   houtFV_stack_4->SetBinError(15,2.213247);
   houtFV_stack_4->SetBinError(16,1.765525);
   houtFV_stack_4->SetBinError(17,1.526205);
   houtFV_stack_4->SetBinError(18,1.481777);
   houtFV_stack_4->SetBinError(19,1.390688);
   houtFV_stack_4->SetBinError(20,1.282);
   houtFV_stack_4->SetBinError(21,1.195287);
   houtFV_stack_4->SetBinError(22,1.160012);
   houtFV_stack_4->SetBinError(23,1.220262);
   houtFV_stack_4->SetBinError(24,0.8073475);
   houtFV_stack_4->SetBinError(25,0.8882534);
   houtFV_stack_4->SetBinError(26,0.7611976);
   houtFV_stack_4->SetBinError(27,0.9920221);
   houtFV_stack_4->SetBinError(28,0.7350354);
   houtFV_stack_4->SetBinError(29,0.7462165);
   houtFV_stack_4->SetBinError(30,0.7068742);
   houtFV_stack_4->SetBinError(31,0.588146);
   houtFV_stack_4->SetBinError(32,0.5198233);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.773503);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.561576);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.844816);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.091676);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.50047);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.525874);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.274437);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.028242);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.90976);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.005989);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.046937);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,9.216169);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,12.66484);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.72668);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.726587);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.441196);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.249034);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.658894);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.172472);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.380558);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8222219);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,2.32883);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4109174);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5625206);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4285357);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6379547);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5915793);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5267281);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6298701);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7642499);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.743119);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9451827);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9845466);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.258118);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.10913);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.9541652);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8464104);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5783275);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4222841);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4046342);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3962917);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2756104);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5123705);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.450976);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.18409);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.045422);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.869308);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.845648);
   hNCpi0inFVqe_stack_6->SetBinContent(11,3.012712);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.789175);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.65018);
   hNCpi0inFVqe_stack_6->SetBinContent(14,2.455544);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.031308);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.682722);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4666525);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2584844);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2866851);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4434882);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.5793924);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.5242597);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4506696);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5454244);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.5277748);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3482878);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2684567);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,46.03536);
   hNCpi0inFVres_stack_7->SetBinContent(2,62.51236);
   hNCpi0inFVres_stack_7->SetBinContent(3,68.11862);
   hNCpi0inFVres_stack_7->SetBinContent(4,79.86755);
   hNCpi0inFVres_stack_7->SetBinContent(5,93.51144);
   hNCpi0inFVres_stack_7->SetBinContent(6,103.9621);
   hNCpi0inFVres_stack_7->SetBinContent(7,120.4753);
   hNCpi0inFVres_stack_7->SetBinContent(8,145.0025);
   hNCpi0inFVres_stack_7->SetBinContent(9,190.7924);
   hNCpi0inFVres_stack_7->SetBinContent(10,265.9085);
   hNCpi0inFVres_stack_7->SetBinContent(11,350.0884);
   hNCpi0inFVres_stack_7->SetBinContent(12,371.1681);
   hNCpi0inFVres_stack_7->SetBinContent(13,302.167);
   hNCpi0inFVres_stack_7->SetBinContent(14,176.9853);
   hNCpi0inFVres_stack_7->SetBinContent(15,89.0909);
   hNCpi0inFVres_stack_7->SetBinContent(16,55.19192);
   hNCpi0inFVres_stack_7->SetBinContent(17,35.33284);
   hNCpi0inFVres_stack_7->SetBinContent(18,26.71368);
   hNCpi0inFVres_stack_7->SetBinContent(19,21.77719);
   hNCpi0inFVres_stack_7->SetBinContent(20,17.70943);
   hNCpi0inFVres_stack_7->SetBinContent(21,16.49511);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.74187);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.54175);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.82583);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.063547);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.276441);
   hNCpi0inFVres_stack_7->SetBinContent(27,8.104331);
   hNCpi0inFVres_stack_7->SetBinContent(28,5.25801);
   hNCpi0inFVres_stack_7->SetBinContent(29,5.601771);
   hNCpi0inFVres_stack_7->SetBinContent(30,5.466264);
   hNCpi0inFVres_stack_7->SetBinContent(31,5.690801);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.847888);
   hNCpi0inFVres_stack_7->SetBinContent(33,4.535107);
   hNCpi0inFVres_stack_7->SetBinContent(34,3.988724);
   hNCpi0inFVres_stack_7->SetBinContent(35,22.52867);
   hNCpi0inFVres_stack_7->SetBinError(1,2.235461);
   hNCpi0inFVres_stack_7->SetBinError(2,2.590732);
   hNCpi0inFVres_stack_7->SetBinError(3,2.695071);
   hNCpi0inFVres_stack_7->SetBinError(4,2.896938);
   hNCpi0inFVres_stack_7->SetBinError(5,3.177696);
   hNCpi0inFVres_stack_7->SetBinError(6,3.30405);
   hNCpi0inFVres_stack_7->SetBinError(7,3.601294);
   hNCpi0inFVres_stack_7->SetBinError(8,3.877214);
   hNCpi0inFVres_stack_7->SetBinError(9,4.477453);
   hNCpi0inFVres_stack_7->SetBinError(10,5.288803);
   hNCpi0inFVres_stack_7->SetBinError(11,6.188226);
   hNCpi0inFVres_stack_7->SetBinError(12,6.233057);
   hNCpi0inFVres_stack_7->SetBinError(13,5.726397);
   hNCpi0inFVres_stack_7->SetBinError(14,4.451621);
   hNCpi0inFVres_stack_7->SetBinError(15,3.146911);
   hNCpi0inFVres_stack_7->SetBinError(16,2.465518);
   hNCpi0inFVres_stack_7->SetBinError(17,1.98118);
   hNCpi0inFVres_stack_7->SetBinError(18,1.622457);
   hNCpi0inFVres_stack_7->SetBinError(19,1.508915);
   hNCpi0inFVres_stack_7->SetBinError(20,1.353402);
   hNCpi0inFVres_stack_7->SetBinError(21,1.318736);
   hNCpi0inFVres_stack_7->SetBinError(22,1.068649);
   hNCpi0inFVres_stack_7->SetBinError(23,0.99978);
   hNCpi0inFVres_stack_7->SetBinError(24,1.144959);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9550146);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8582705);
   hNCpi0inFVres_stack_7->SetBinError(27,1.017117);
   hNCpi0inFVres_stack_7->SetBinError(28,0.753522);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7308848);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7706313);
   hNCpi0inFVres_stack_7->SetBinError(31,0.847138);
   hNCpi0inFVres_stack_7->SetBinError(32,0.6094568);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7780459);
   hNCpi0inFVres_stack_7->SetBinError(34,0.7020488);
   hNCpi0inFVres_stack_7->SetBinError(35,1.539831);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.394939);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.66691);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.55165);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.73349);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.32745);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.89003);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.13409);
   hNCpi0inFVdis_stack_8->SetBinContent(8,26.85585);
   hNCpi0inFVdis_stack_8->SetBinContent(9,34.81983);
   hNCpi0inFVdis_stack_8->SetBinContent(10,45.68128);
   hNCpi0inFVdis_stack_8->SetBinContent(11,61.6139);
   hNCpi0inFVdis_stack_8->SetBinContent(12,70.78658);
   hNCpi0inFVdis_stack_8->SetBinContent(13,57.15138);
   hNCpi0inFVdis_stack_8->SetBinContent(14,35.91591);
   hNCpi0inFVdis_stack_8->SetBinContent(15,17.52725);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.01864);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.007092);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.651186);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.589154);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.20005);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.302338);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.23392);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.788016);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.77623);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.24413);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.424484);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.510016);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.924612);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.119912);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.801138);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.365444);
   hNCpi0inFVdis_stack_8->SetBinContent(32,1.185258);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.63033);
   hNCpi0inFVdis_stack_8->SetBinContent(35,9.676355);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8949121);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.259303);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.200062);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.151821);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.308563);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.390401);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.604022);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.694505);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.895694);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.175817);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.537785);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.768458);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.45612);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.953997);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.370997);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.121865);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.033691);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8245926);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7609745);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7576001);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5274665);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.567057);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5126865);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5718419);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4562491);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.483179);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.5541556);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4944596);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4999391);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5623475);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3796552);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3893562);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4370792);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.010782);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5998541);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2983287);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,16.3423);
   hCCpi0inFV_stack_10->SetBinContent(2,23.72938);
   hCCpi0inFV_stack_10->SetBinContent(3,25.80004);
   hCCpi0inFV_stack_10->SetBinContent(4,29.98683);
   hCCpi0inFV_stack_10->SetBinContent(5,32.05487);
   hCCpi0inFV_stack_10->SetBinContent(6,42.63624);
   hCCpi0inFV_stack_10->SetBinContent(7,49.09562);
   hCCpi0inFV_stack_10->SetBinContent(8,52.67307);
   hCCpi0inFV_stack_10->SetBinContent(9,70.27673);
   hCCpi0inFV_stack_10->SetBinContent(10,90.52393);
   hCCpi0inFV_stack_10->SetBinContent(11,102.4006);
   hCCpi0inFV_stack_10->SetBinContent(12,117.9499);
   hCCpi0inFV_stack_10->SetBinContent(13,107.241);
   hCCpi0inFV_stack_10->SetBinContent(14,63.79578);
   hCCpi0inFV_stack_10->SetBinContent(15,39.40421);
   hCCpi0inFV_stack_10->SetBinContent(16,27.51326);
   hCCpi0inFV_stack_10->SetBinContent(17,20.87456);
   hCCpi0inFV_stack_10->SetBinContent(18,16.80388);
   hCCpi0inFV_stack_10->SetBinContent(19,14.69232);
   hCCpi0inFV_stack_10->SetBinContent(20,12.99241);
   hCCpi0inFV_stack_10->SetBinContent(21,12.83966);
   hCCpi0inFV_stack_10->SetBinContent(22,10.11015);
   hCCpi0inFV_stack_10->SetBinContent(23,9.165219);
   hCCpi0inFV_stack_10->SetBinContent(24,10.11796);
   hCCpi0inFV_stack_10->SetBinContent(25,9.0767);
   hCCpi0inFV_stack_10->SetBinContent(26,8.318025);
   hCCpi0inFV_stack_10->SetBinContent(27,7.18586);
   hCCpi0inFV_stack_10->SetBinContent(28,6.687223);
   hCCpi0inFV_stack_10->SetBinContent(29,6.245393);
   hCCpi0inFV_stack_10->SetBinContent(30,7.40862);
   hCCpi0inFV_stack_10->SetBinContent(31,3.594757);
   hCCpi0inFV_stack_10->SetBinContent(32,3.427608);
   hCCpi0inFV_stack_10->SetBinContent(33,2.194063);
   hCCpi0inFV_stack_10->SetBinContent(34,4.297917);
   hCCpi0inFV_stack_10->SetBinContent(35,37.56116);
   hCCpi0inFV_stack_10->SetBinError(1,2.075476);
   hCCpi0inFV_stack_10->SetBinError(2,2.478873);
   hCCpi0inFV_stack_10->SetBinError(3,2.591282);
   hCCpi0inFV_stack_10->SetBinError(4,2.710956);
   hCCpi0inFV_stack_10->SetBinError(5,2.802237);
   hCCpi0inFV_stack_10->SetBinError(6,3.243763);
   hCCpi0inFV_stack_10->SetBinError(7,3.526838);
   hCCpi0inFV_stack_10->SetBinError(8,3.692203);
   hCCpi0inFV_stack_10->SetBinError(9,4.172937);
   hCCpi0inFV_stack_10->SetBinError(10,4.773431);
   hCCpi0inFV_stack_10->SetBinError(11,5.110999);
   hCCpi0inFV_stack_10->SetBinError(12,5.425918);
   hCCpi0inFV_stack_10->SetBinError(13,5.198713);
   hCCpi0inFV_stack_10->SetBinError(14,3.983659);
   hCCpi0inFV_stack_10->SetBinError(15,3.175579);
   hCCpi0inFV_stack_10->SetBinError(16,2.584411);
   hCCpi0inFV_stack_10->SetBinError(17,2.27691);
   hCCpi0inFV_stack_10->SetBinError(18,2.030401);
   hCCpi0inFV_stack_10->SetBinError(19,1.953297);
   hCCpi0inFV_stack_10->SetBinError(20,1.797993);
   hCCpi0inFV_stack_10->SetBinError(21,1.736037);
   hCCpi0inFV_stack_10->SetBinError(22,1.618629);
   hCCpi0inFV_stack_10->SetBinError(23,1.606491);
   hCCpi0inFV_stack_10->SetBinError(24,1.595704);
   hCCpi0inFV_stack_10->SetBinError(25,1.57039);
   hCCpi0inFV_stack_10->SetBinError(26,1.431671);
   hCCpi0inFV_stack_10->SetBinError(27,1.360689);
   hCCpi0inFV_stack_10->SetBinError(28,1.308985);
   hCCpi0inFV_stack_10->SetBinError(29,1.271098);
   hCCpi0inFV_stack_10->SetBinError(30,1.389559);
   hCCpi0inFV_stack_10->SetBinError(31,0.9705399);
   hCCpi0inFV_stack_10->SetBinError(32,0.8778096);
   hCCpi0inFV_stack_10->SetBinError(33,0.7594044);
   hCCpi0inFV_stack_10->SetBinError(34,1.018842);
   hCCpi0inFV_stack_10->SetBinError(35,3.065137);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,16.79269);
   hNCinFV_stack_11->SetBinContent(2,17.0359);
   hNCinFV_stack_11->SetBinContent(3,15.82649);
   hNCinFV_stack_11->SetBinContent(4,22.3157);
   hNCinFV_stack_11->SetBinContent(5,28.27816);
   hNCinFV_stack_11->SetBinContent(6,21.00993);
   hNCinFV_stack_11->SetBinContent(7,25.55843);
   hNCinFV_stack_11->SetBinContent(8,20.87492);
   hNCinFV_stack_11->SetBinContent(9,26.68824);
   hNCinFV_stack_11->SetBinContent(10,26.84339);
   hNCinFV_stack_11->SetBinContent(11,36.30014);
   hNCinFV_stack_11->SetBinContent(12,30.25086);
   hNCinFV_stack_11->SetBinContent(13,29.65686);
   hNCinFV_stack_11->SetBinContent(14,21.09737);
   hNCinFV_stack_11->SetBinContent(15,15.14506);
   hNCinFV_stack_11->SetBinContent(16,12.506);
   hNCinFV_stack_11->SetBinContent(17,10.93409);
   hNCinFV_stack_11->SetBinContent(18,10.30856);
   hNCinFV_stack_11->SetBinContent(19,10.20374);
   hNCinFV_stack_11->SetBinContent(20,8.832886);
   hNCinFV_stack_11->SetBinContent(21,10.04337);
   hNCinFV_stack_11->SetBinContent(22,3.909558);
   hNCinFV_stack_11->SetBinContent(23,6.405152);
   hNCinFV_stack_11->SetBinContent(24,7.230659);
   hNCinFV_stack_11->SetBinContent(25,3.659589);
   hNCinFV_stack_11->SetBinContent(26,4.406114);
   hNCinFV_stack_11->SetBinContent(27,4.8365);
   hNCinFV_stack_11->SetBinContent(28,3.869221);
   hNCinFV_stack_11->SetBinContent(29,4.985034);
   hNCinFV_stack_11->SetBinContent(30,5.070172);
   hNCinFV_stack_11->SetBinContent(31,4.199863);
   hNCinFV_stack_11->SetBinContent(32,4.543422);
   hNCinFV_stack_11->SetBinContent(33,2.539312);
   hNCinFV_stack_11->SetBinContent(34,3.127768);
   hNCinFV_stack_11->SetBinContent(35,36.80515);
   hNCinFV_stack_11->SetBinError(1,2.114088);
   hNCinFV_stack_11->SetBinError(2,2.113549);
   hNCinFV_stack_11->SetBinError(3,1.971272);
   hNCinFV_stack_11->SetBinError(4,2.387038);
   hNCinFV_stack_11->SetBinError(5,2.712848);
   hNCinFV_stack_11->SetBinError(6,2.279781);
   hNCinFV_stack_11->SetBinError(7,2.53662);
   hNCinFV_stack_11->SetBinError(8,2.263557);
   hNCinFV_stack_11->SetBinError(9,2.551009);
   hNCinFV_stack_11->SetBinError(10,2.536505);
   hNCinFV_stack_11->SetBinError(11,3.02118);
   hNCinFV_stack_11->SetBinError(12,2.71144);
   hNCinFV_stack_11->SetBinError(13,2.762442);
   hNCinFV_stack_11->SetBinError(14,2.347351);
   hNCinFV_stack_11->SetBinError(15,1.962763);
   hNCinFV_stack_11->SetBinError(16,1.79926);
   hNCinFV_stack_11->SetBinError(17,1.670504);
   hNCinFV_stack_11->SetBinError(18,1.630742);
   hNCinFV_stack_11->SetBinError(19,1.654278);
   hNCinFV_stack_11->SetBinError(20,1.506578);
   hNCinFV_stack_11->SetBinError(21,1.6288);
   hNCinFV_stack_11->SetBinError(22,0.9811382);
   hNCinFV_stack_11->SetBinError(23,1.225034);
   hNCinFV_stack_11->SetBinError(24,1.345301);
   hNCinFV_stack_11->SetBinError(25,0.9809496);
   hNCinFV_stack_11->SetBinError(26,0.9808403);
   hNCinFV_stack_11->SetBinError(27,1.0923);
   hNCinFV_stack_11->SetBinError(28,0.8986823);
   hNCinFV_stack_11->SetBinError(29,1.127887);
   hNCinFV_stack_11->SetBinError(30,1.17707);
   hNCinFV_stack_11->SetBinError(31,1.057357);
   hNCinFV_stack_11->SetBinError(32,1.111328);
   hNCinFV_stack_11->SetBinError(33,0.8333082);
   hNCinFV_stack_11->SetBinError(34,0.8999062);
   hNCinFV_stack_11->SetBinError(35,3.021631);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,28.93737);
   hnumuCCinFV_stack_12->SetBinContent(2,33.94467);
   hnumuCCinFV_stack_12->SetBinContent(3,35.909);
   hnumuCCinFV_stack_12->SetBinContent(4,33.43286);
   hnumuCCinFV_stack_12->SetBinContent(5,35.32456);
   hnumuCCinFV_stack_12->SetBinContent(6,41.14712);
   hnumuCCinFV_stack_12->SetBinContent(7,37.93098);
   hnumuCCinFV_stack_12->SetBinContent(8,36.67855);
   hnumuCCinFV_stack_12->SetBinContent(9,35.11309);
   hnumuCCinFV_stack_12->SetBinContent(10,41.92281);
   hnumuCCinFV_stack_12->SetBinContent(11,40.6144);
   hnumuCCinFV_stack_12->SetBinContent(12,38.67904);
   hnumuCCinFV_stack_12->SetBinContent(13,31.46643);
   hnumuCCinFV_stack_12->SetBinContent(14,31.86554);
   hnumuCCinFV_stack_12->SetBinContent(15,18.45674);
   hnumuCCinFV_stack_12->SetBinContent(16,14.80286);
   hnumuCCinFV_stack_12->SetBinContent(17,10.80344);
   hnumuCCinFV_stack_12->SetBinContent(18,11.32529);
   hnumuCCinFV_stack_12->SetBinContent(19,7.066525);
   hnumuCCinFV_stack_12->SetBinContent(20,8.875105);
   hnumuCCinFV_stack_12->SetBinContent(21,6.083355);
   hnumuCCinFV_stack_12->SetBinContent(22,6.448174);
   hnumuCCinFV_stack_12->SetBinContent(23,6.092417);
   hnumuCCinFV_stack_12->SetBinContent(24,5.597029);
   hnumuCCinFV_stack_12->SetBinContent(25,4.3536);
   hnumuCCinFV_stack_12->SetBinContent(26,4.854149);
   hnumuCCinFV_stack_12->SetBinContent(27,3.168426);
   hnumuCCinFV_stack_12->SetBinContent(28,4.014942);
   hnumuCCinFV_stack_12->SetBinContent(29,3.376046);
   hnumuCCinFV_stack_12->SetBinContent(30,3.300561);
   hnumuCCinFV_stack_12->SetBinContent(31,2.556957);
   hnumuCCinFV_stack_12->SetBinContent(32,3.528168);
   hnumuCCinFV_stack_12->SetBinContent(33,1.699483);
   hnumuCCinFV_stack_12->SetBinContent(34,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(35,23.46125);
   hnumuCCinFV_stack_12->SetBinError(1,3.164135);
   hnumuCCinFV_stack_12->SetBinError(2,3.846772);
   hnumuCCinFV_stack_12->SetBinError(3,3.728863);
   hnumuCCinFV_stack_12->SetBinError(4,3.322337);
   hnumuCCinFV_stack_12->SetBinError(5,3.679483);
   hnumuCCinFV_stack_12->SetBinError(6,3.772003);
   hnumuCCinFV_stack_12->SetBinError(7,3.699993);
   hnumuCCinFV_stack_12->SetBinError(8,3.187534);
   hnumuCCinFV_stack_12->SetBinError(9,3.53433);
   hnumuCCinFV_stack_12->SetBinError(10,3.51546);
   hnumuCCinFV_stack_12->SetBinError(11,3.600686);
   hnumuCCinFV_stack_12->SetBinError(12,3.710046);
   hnumuCCinFV_stack_12->SetBinError(13,3.754821);
   hnumuCCinFV_stack_12->SetBinError(14,3.483514);
   hnumuCCinFV_stack_12->SetBinError(15,2.248189);
   hnumuCCinFV_stack_12->SetBinError(16,1.991111);
   hnumuCCinFV_stack_12->SetBinError(17,1.689215);
   hnumuCCinFV_stack_12->SetBinError(18,1.725094);
   hnumuCCinFV_stack_12->SetBinError(19,1.359557);
   hnumuCCinFV_stack_12->SetBinError(20,1.578186);
   hnumuCCinFV_stack_12->SetBinError(21,1.369721);
   hnumuCCinFV_stack_12->SetBinError(22,1.349597);
   hnumuCCinFV_stack_12->SetBinError(23,2.566603);
   hnumuCCinFV_stack_12->SetBinError(24,1.232088);
   hnumuCCinFV_stack_12->SetBinError(25,1.115093);
   hnumuCCinFV_stack_12->SetBinError(26,1.154466);
   hnumuCCinFV_stack_12->SetBinError(27,0.9096595);
   hnumuCCinFV_stack_12->SetBinError(28,0.9746122);
   hnumuCCinFV_stack_12->SetBinError(29,0.8997438);
   hnumuCCinFV_stack_12->SetBinError(30,0.9168915);
   hnumuCCinFV_stack_12->SetBinError(31,0.7521807);
   hnumuCCinFV_stack_12->SetBinError(32,0.9030904);
   hnumuCCinFV_stack_12->SetBinError(33,0.6636524);
   hnumuCCinFV_stack_12->SetBinError(34,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(35,2.388774);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,3.836905);
   hnueCCinFV_stack_13->SetBinContent(2,5.066339);
   hnueCCinFV_stack_13->SetBinContent(3,4.037627);
   hnueCCinFV_stack_13->SetBinContent(4,2.391441);
   hnueCCinFV_stack_13->SetBinContent(5,1.482865);
   hnueCCinFV_stack_13->SetBinContent(6,3.598485);
   hnueCCinFV_stack_13->SetBinContent(7,1.171105);
   hnueCCinFV_stack_13->SetBinContent(8,2.185591);
   hnueCCinFV_stack_13->SetBinContent(9,2.449232);
   hnueCCinFV_stack_13->SetBinContent(10,1.019172);
   hnueCCinFV_stack_13->SetBinContent(11,3.887493);
   hnueCCinFV_stack_13->SetBinContent(12,1.744804);
   hnueCCinFV_stack_13->SetBinContent(13,2.30286);
   hnueCCinFV_stack_13->SetBinContent(14,1.26712);
   hnueCCinFV_stack_13->SetBinContent(15,1.607187);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.9942417);
   hnueCCinFV_stack_13->SetBinContent(18,0.7007893);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,2.064511);
   hnueCCinFV_stack_13->SetBinContent(21,0.6183392);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,1.734149);
   hnueCCinFV_stack_13->SetBinContent(25,0.196839);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5008826);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,4.746995);
   hnueCCinFV_stack_13->SetBinError(1,1.285037);
   hnueCCinFV_stack_13->SetBinError(2,1.812762);
   hnueCCinFV_stack_13->SetBinError(3,1.156459);
   hnueCCinFV_stack_13->SetBinError(4,0.9600136);
   hnueCCinFV_stack_13->SetBinError(5,0.5643895);
   hnueCCinFV_stack_13->SetBinError(6,1.514818);
   hnueCCinFV_stack_13->SetBinError(7,0.6177499);
   hnueCCinFV_stack_13->SetBinError(8,0.8226269);
   hnueCCinFV_stack_13->SetBinError(9,1.30231);
   hnueCCinFV_stack_13->SetBinError(10,0.5199676);
   hnueCCinFV_stack_13->SetBinError(11,1.132728);
   hnueCCinFV_stack_13->SetBinError(12,0.6985861);
   hnueCCinFV_stack_13->SetBinError(13,0.9990662);
   hnueCCinFV_stack_13->SetBinError(14,0.5883944);
   hnueCCinFV_stack_13->SetBinError(15,0.6947991);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.5109251);
   hnueCCinFV_stack_13->SetBinError(18,0.4071227);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,1.609916);
   hnueCCinFV_stack_13->SetBinError(21,0.4394254);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.7895654);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3622357);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,1.408109);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__2->SetBinContent(1,181.1761);
   hmcerror__2->SetBinContent(2,235.8209);
   hmcerror__2->SetBinContent(3,268.3992);
   hmcerror__2->SetBinContent(4,276.5848);
   hmcerror__2->SetBinContent(5,298.931);
   hmcerror__2->SetBinContent(6,338.1404);
   hmcerror__2->SetBinContent(7,371.7094);
   hmcerror__2->SetBinContent(8,387.0141);
   hmcerror__2->SetBinContent(9,472.1655);
   hmcerror__2->SetBinContent(10,604.2792);
   hmcerror__2->SetBinContent(11,712.6117);
   hmcerror__2->SetBinContent(12,766.0858);
   hmcerror__2->SetBinContent(13,657.337);
   hmcerror__2->SetBinContent(14,410.644);
   hmcerror__2->SetBinContent(15,232.2621);
   hmcerror__2->SetBinContent(16,160.5399);
   hmcerror__2->SetBinContent(17,111.3187);
   hmcerror__2->SetBinContent(18,90.56165);
   hmcerror__2->SetBinContent(19,75.04724);
   hmcerror__2->SetBinContent(20,72.09172);
   hmcerror__2->SetBinContent(21,62.73417);
   hmcerror__2->SetBinContent(22,48.63745);
   hmcerror__2->SetBinContent(23,47.41221);
   hmcerror__2->SetBinContent(24,44.05557);
   hmcerror__2->SetBinContent(25,35.06035);
   hmcerror__2->SetBinContent(26,34.45328);
   hmcerror__2->SetBinContent(27,32.7007);
   hmcerror__2->SetBinContent(28,25.85806);
   hmcerror__2->SetBinContent(29,27.82906);
   hmcerror__2->SetBinContent(30,27.51482);
   hmcerror__2->SetBinContent(31,20.45642);
   hmcerror__2->SetBinContent(32,19.5812);
   hmcerror__2->SetBinContent(33,14.30063);
   hmcerror__2->SetBinContent(34,15.38799);
   hmcerror__2->SetBinContent(35,155.6032);
   hmcerror__2->SetBinError(1,59.28735);
   hmcerror__2->SetBinError(2,63.73668);
   hmcerror__2->SetBinError(3,58.5824);
   hmcerror__2->SetBinError(4,64.06689);
   hmcerror__2->SetBinError(5,72.60179);
   hmcerror__2->SetBinError(6,77.3914);
   hmcerror__2->SetBinError(7,114.9958);
   hmcerror__2->SetBinError(8,101.1966);
   hmcerror__2->SetBinError(9,125.8127);
   hmcerror__2->SetBinError(10,179.257);
   hmcerror__2->SetBinError(11,210.2873);
   hmcerror__2->SetBinError(12,219.5498);
   hmcerror__2->SetBinError(13,202.7212);
   hmcerror__2->SetBinError(14,142.5632);
   hmcerror__2->SetBinError(15,80.96113);
   hmcerror__2->SetBinError(16,47.62298);
   hmcerror__2->SetBinError(17,33.00017);
   hmcerror__2->SetBinError(18,29.10603);
   hmcerror__2->SetBinError(19,26.69614);
   hmcerror__2->SetBinError(20,29.24559);
   hmcerror__2->SetBinError(21,27.14576);
   hmcerror__2->SetBinError(22,18.93658);
   hmcerror__2->SetBinError(23,20.87731);
   hmcerror__2->SetBinError(24,20.51663);
   hmcerror__2->SetBinError(25,19.37529);
   hmcerror__2->SetBinError(26,21.83807);
   hmcerror__2->SetBinError(27,16.5672);
   hmcerror__2->SetBinError(28,15.07697);
   hmcerror__2->SetBinError(29,13.59307);
   hmcerror__2->SetBinError(30,14.98389);
   hmcerror__2->SetBinError(31,13.09725);
   hmcerror__2->SetBinError(32,11.78478);
   hmcerror__2->SetBinError(33,9.176628);
   hmcerror__2->SetBinError(34,12.33538);
   hmcerror__2->SetBinError(35,63.25595);
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
   
   Double_t _fx3001[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3001[34] = {
   177,
   212,
   243,
   249,
   286,
   300,
   363,
   354,
   426,
   568,
   582,
   726,
   568,
   278,
   224,
   117,
   89,
   81,
   67,
   53,
   44,
   60,
   46,
   33,
   21,
   28,
   28,
   20,
   19,
   19,
   17,
   18,
   13,
   6};
   Double_t _felx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3001[34] = {
   13.30413,
   14.56022,
   15.58846,
   15.77973,
   16.91153,
   17.32051,
   19.05256,
   18.81489,
   20.63977,
   23.83275,
   24.12468,
   26.94439,
   23.83275,
   16.67333,
   14.96663,
   10.81665,
   9.5566,
   9.1239,
   8.3119,
   7.4105,
   6.7671,
   7.8743,
   6.9153,
   5.8847,
   4.7354,
   5.4358,
   5.4358,
   4.6266,
   4.5151,
   4.5151,
   4.2835,
   4.4008,
   3.77763,
   2.67925};
   Double_t _fehx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3001[34] = {
   13.30413,
   14.56022,
   15.58846,
   15.77973,
   16.91153,
   17.32051,
   19.05256,
   18.81489,
   20.63977,
   23.83275,
   24.12468,
   26.94439,
   23.83275,
   16.67333,
   14.96663,
   10.81665,
   9.3552,
   8.9221,
   8.1094,
   7.2068,
   6.5623,
   7.6713,
   6.7108,
   5.6776,
   4.5229,
   5.2271,
   5.2271,
   4.4133,
   4.3011,
   4.3011,
   4.0673,
   4.1858,
   3.5552,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(2.988675);
   Graph_Graph3001->SetMaximum(827.9068);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.5/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6335.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 179.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 609.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 710.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2732.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  529.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1057.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 475.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 630.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 48.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3002[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3002[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3002[34] = {
   0.3272361,
   0.2702758,
   0.2182659,
   0.2316356,
   0.2428714,
   0.2288736,
   0.3093702,
   0.2614803,
   0.266459,
   0.2966461,
   0.2950938,
   0.2865864,
   0.3083977,
   0.3471698,
   0.3485766,
   0.2966428,
   0.2964478,
   0.3213947,
   0.3557244,
   0.405672,
   0.4327109,
   0.3893415,
   0.4403362,
   0.4656989,
   0.5526267,
   0.6338461,
   0.5066314,
   0.5830668,
   0.4884489,
   0.5445753,
   0.6402514,
   0.6018417,
   0.6416942,
   0.8016242};
   Double_t _fehx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3002[34] = {
   0.3272361,
   0.2702758,
   0.2182659,
   0.2316356,
   0.2428714,
   0.2288736,
   0.3093702,
   0.2614803,
   0.266459,
   0.2966461,
   0.2950938,
   0.2865864,
   0.3083977,
   0.3471698,
   0.3485766,
   0.2966428,
   0.2964478,
   0.3213947,
   0.3557244,
   0.405672,
   0.4327109,
   0.3893415,
   0.4403362,
   0.4656989,
   0.5526267,
   0.6338461,
   0.5066314,
   0.5830668,
   0.4884489,
   0.5445753,
   0.6402514,
   0.6018417,
   0.6416942,
   0.8016242};
   grae = new TGraphAsymmErrors(34,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3003[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3003[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3003[34] = {
   0.1907727,
   0.1883933,
   0.1793749,
   0.186593,
   0.1983099,
   0.1992859,
   0.2039375,
   0.225594,
   0.2374475,
   0.2594524,
   0.2804197,
   0.2754494,
   0.259306,
   0.2470085,
   0.2374,
   0.2402111,
   0.240966,
   0.2465809,
   0.2398712,
   0.2286015,
   0.253028,
   0.233601,
   0.2592349,
   0.2628151,
   0.2631538,
   0.25356,
   0.2575764,
   0.252542,
   0.2806214,
   0.257765,
   0.2927891,
   0.2626836,
   0.3268594,
   0.3154237};
   Double_t _fehx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3003[34] = {
   0.1907727,
   0.1883933,
   0.1793749,
   0.186593,
   0.1983099,
   0.1992859,
   0.2039375,
   0.225594,
   0.2374475,
   0.2594524,
   0.2804197,
   0.2754494,
   0.259306,
   0.2470085,
   0.2374,
   0.2402111,
   0.240966,
   0.2465809,
   0.2398712,
   0.2286015,
   0.253028,
   0.233601,
   0.2592349,
   0.2628151,
   0.2631538,
   0.25356,
   0.2575764,
   0.252542,
   0.2806214,
   0.257765,
   0.2927891,
   0.2626836,
   0.3268594,
   0.3154237};
   grae = new TGraphAsymmErrors(34,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
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
   
   Double_t _fx3004[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3004[34] = {
   0.9769502,
   0.8989874,
   0.9053679,
   0.9002665,
   0.9567426,
   0.8872056,
   0.9765693,
   0.9146954,
   0.902226,
   0.9399629,
   0.8167141,
   0.9476745,
   0.8640925,
   0.6769855,
   0.9644276,
   0.728791,
   0.7995064,
   0.8944183,
   0.892771,
   0.7351746,
   0.7013721,
   1.233617,
   0.9702142,
   0.749054,
   0.5989672,
   0.8126948,
   0.8562509,
   0.7734534,
   0.6827396,
   0.6905369,
   0.8310348,
   0.9192493,
   0.9090511,
   0.3899145};
   Double_t _felx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3004[34] = {
   0.07343207,
   0.0617427,
   0.05807938,
   0.05705207,
   0.05657338,
   0.05122284,
   0.0512566,
   0.04861551,
   0.04371299,
   0.03943997,
   0.03385389,
   0.0351715,
   0.03625652,
   0.04060289,
   0.06443853,
   0.06737675,
   0.08584902,
   0.1007479,
   0.1107556,
   0.1027927,
   0.1078694,
   0.1618979,
   0.1458548,
   0.1335745,
   0.1350642,
   0.1577731,
   0.1662289,
   0.178923,
   0.1622441,
   0.164097,
   0.2093963,
   0.2247462,
   0.2641584,
   0.1741131};
   Double_t _fehx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3004[34] = {
   0.07343207,
   0.0617427,
   0.05807938,
   0.05705207,
   0.05657338,
   0.05122284,
   0.0512566,
   0.04861551,
   0.04371299,
   0.03943997,
   0.03385389,
   0.0351715,
   0.03625652,
   0.04060289,
   0.06443853,
   0.06737675,
   0.0840398,
   0.09851962,
   0.1080573,
   0.0999671,
   0.1046049,
   0.1577241,
   0.1415416,
   0.1288736,
   0.1290033,
   0.1517156,
   0.1598468,
   0.1706741,
   0.1545543,
   0.1563194,
   0.1988275,
   0.2137663,
   0.2486045,
   0.1571733};
   grae = new TGraphAsymmErrors(34,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0.09824747);
   Graph_Graph3004->SetMaximum(1.508895);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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

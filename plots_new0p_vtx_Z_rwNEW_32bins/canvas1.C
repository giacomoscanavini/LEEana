#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Mar 13 20:05:48 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-169.2308,-5.651373,1241.026,624.9228);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,2.314102);
   hmc__1->SetBinContent(1,197.6609);
   hmc__1->SetBinContent(2,244.4592);
   hmc__1->SetBinContent(3,238.9994);
   hmc__1->SetBinContent(4,241.2414);
   hmc__1->SetBinContent(5,252.1687);
   hmc__1->SetBinContent(6,249.1126);
   hmc__1->SetBinContent(7,250.0351);
   hmc__1->SetBinContent(8,268.2547);
   hmc__1->SetBinContent(9,253.3853);
   hmc__1->SetBinContent(10,243.217);
   hmc__1->SetBinContent(11,245.6105);
   hmc__1->SetBinContent(12,230.2936);
   hmc__1->SetBinContent(13,245.8879);
   hmc__1->SetBinContent(14,270.6039);
   hmc__1->SetBinContent(15,258.6088);
   hmc__1->SetBinContent(16,249.1561);
   hmc__1->SetBinContent(17,246.1359);
   hmc__1->SetBinContent(18,240.578);
   hmc__1->SetBinContent(19,241.5194);
   hmc__1->SetBinContent(20,250.0743);
   hmc__1->SetBinContent(21,282.5686);
   hmc__1->SetBinContent(22,244.8026);
   hmc__1->SetBinContent(23,234.1112);
   hmc__1->SetBinContent(24,246.7204);
   hmc__1->SetBinContent(25,240.3929);
   hmc__1->SetBinContent(26,245.5018);
   hmc__1->SetBinContent(27,248.7873);
   hmc__1->SetBinContent(28,245.0589);
   hmc__1->SetBinContent(29,240.6746);
   hmc__1->SetBinContent(30,181.5252);
   hmc__1->SetBinContent(31,4.845335);
   hmc__1->SetBinError(0,0.6888018);
   hmc__1->SetBinError(1,48.01441);
   hmc__1->SetBinError(2,55.21599);
   hmc__1->SetBinError(3,57.47069);
   hmc__1->SetBinError(4,51.39553);
   hmc__1->SetBinError(5,57.92092);
   hmc__1->SetBinError(6,59.73304);
   hmc__1->SetBinError(7,55.7757);
   hmc__1->SetBinError(8,62.12461);
   hmc__1->SetBinError(9,56.3343);
   hmc__1->SetBinError(10,53.14532);
   hmc__1->SetBinError(11,57.76965);
   hmc__1->SetBinError(12,50.48775);
   hmc__1->SetBinError(13,52.87798);
   hmc__1->SetBinError(14,65.24389);
   hmc__1->SetBinError(15,66.54797);
   hmc__1->SetBinError(16,59.70491);
   hmc__1->SetBinError(17,59.27009);
   hmc__1->SetBinError(18,55.47651);
   hmc__1->SetBinError(19,53.4925);
   hmc__1->SetBinError(20,56.70526);
   hmc__1->SetBinError(21,63.22407);
   hmc__1->SetBinError(22,60.30072);
   hmc__1->SetBinError(23,53.04957);
   hmc__1->SetBinError(24,56.62993);
   hmc__1->SetBinError(25,57.17879);
   hmc__1->SetBinError(26,62.63605);
   hmc__1->SetBinError(27,54.11885);
   hmc__1->SetBinError(28,56.32708);
   hmc__1->SetBinError(29,56.37617);
   hmc__1->SetBinError(30,42.90774);
   hmc__1->SetBinError(31,4.771105);
   hmc__1->SetBinError(32,0.3895343);
   hmc__1->SetBinError(33,0.3895343);
   hmc__1->SetMinimum(-5.651373);
   hmc__1->SetMaximum(593.3941);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(296.697);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,4.39358);
   hbadmatch_stack_1->SetBinContent(2,6.0152);
   hbadmatch_stack_1->SetBinContent(3,5.001228);
   hbadmatch_stack_1->SetBinContent(4,10.64673);
   hbadmatch_stack_1->SetBinContent(5,9.318146);
   hbadmatch_stack_1->SetBinContent(6,6.604402);
   hbadmatch_stack_1->SetBinContent(7,6.131242);
   hbadmatch_stack_1->SetBinContent(8,7.631514);
   hbadmatch_stack_1->SetBinContent(9,6.43699);
   hbadmatch_stack_1->SetBinContent(10,4.503319);
   hbadmatch_stack_1->SetBinContent(11,5.083748);
   hbadmatch_stack_1->SetBinContent(12,6.103376);
   hbadmatch_stack_1->SetBinContent(13,3.554508);
   hbadmatch_stack_1->SetBinContent(14,9.190955);
   hbadmatch_stack_1->SetBinContent(15,4.284768);
   hbadmatch_stack_1->SetBinContent(16,5.588519);
   hbadmatch_stack_1->SetBinContent(17,5.030384);
   hbadmatch_stack_1->SetBinContent(18,4.576429);
   hbadmatch_stack_1->SetBinContent(19,4.446368);
   hbadmatch_stack_1->SetBinContent(20,7.317999);
   hbadmatch_stack_1->SetBinContent(21,11.34314);
   hbadmatch_stack_1->SetBinContent(22,6.915047);
   hbadmatch_stack_1->SetBinContent(23,4.252908);
   hbadmatch_stack_1->SetBinContent(24,6.317188);
   hbadmatch_stack_1->SetBinContent(25,4.781006);
   hbadmatch_stack_1->SetBinContent(26,4.247337);
   hbadmatch_stack_1->SetBinContent(27,6.186935);
   hbadmatch_stack_1->SetBinContent(28,3.841692);
   hbadmatch_stack_1->SetBinContent(29,4.351854);
   hbadmatch_stack_1->SetBinContent(30,6.241897);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,1.00873);
   hbadmatch_stack_1->SetBinError(2,1.268693);
   hbadmatch_stack_1->SetBinError(3,1.169142);
   hbadmatch_stack_1->SetBinError(4,2.006098);
   hbadmatch_stack_1->SetBinError(5,1.646954);
   hbadmatch_stack_1->SetBinError(6,1.49046);
   hbadmatch_stack_1->SetBinError(7,1.359995);
   hbadmatch_stack_1->SetBinError(8,1.724881);
   hbadmatch_stack_1->SetBinError(9,1.381051);
   hbadmatch_stack_1->SetBinError(10,1.143245);
   hbadmatch_stack_1->SetBinError(11,1.158231);
   hbadmatch_stack_1->SetBinError(12,2.236158);
   hbadmatch_stack_1->SetBinError(13,0.9496376);
   hbadmatch_stack_1->SetBinError(14,2.146237);
   hbadmatch_stack_1->SetBinError(15,1.058935);
   hbadmatch_stack_1->SetBinError(16,1.206563);
   hbadmatch_stack_1->SetBinError(17,1.13642);
   hbadmatch_stack_1->SetBinError(18,1.117625);
   hbadmatch_stack_1->SetBinError(19,1.063352);
   hbadmatch_stack_1->SetBinError(20,1.458446);
   hbadmatch_stack_1->SetBinError(21,1.840402);
   hbadmatch_stack_1->SetBinError(22,1.32701);
   hbadmatch_stack_1->SetBinError(23,1.044104);
   hbadmatch_stack_1->SetBinError(24,1.367033);
   hbadmatch_stack_1->SetBinError(25,1.122363);
   hbadmatch_stack_1->SetBinError(26,0.9693236);
   hbadmatch_stack_1->SetBinError(27,1.980758);
   hbadmatch_stack_1->SetBinError(28,1.086195);
   hbadmatch_stack_1->SetBinError(29,1.138622);
   hbadmatch_stack_1->SetBinError(30,1.408536);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,14.01579);
   hext_stack_2->SetBinContent(2,21.68045);
   hext_stack_2->SetBinContent(3,22.27022);
   hext_stack_2->SetBinContent(4,22.74744);
   hext_stack_2->SetBinContent(5,23.31403);
   hext_stack_2->SetBinContent(6,22.98245);
   hext_stack_2->SetBinContent(7,24.19948);
   hext_stack_2->SetBinContent(8,26.88404);
   hext_stack_2->SetBinContent(9,20.78952);
   hext_stack_2->SetBinContent(10,19.13717);
   hext_stack_2->SetBinContent(11,25.91084);
   hext_stack_2->SetBinContent(12,16.78973);
   hext_stack_2->SetBinContent(13,20.58758);
   hext_stack_2->SetBinContent(14,24.18348);
   hext_stack_2->SetBinContent(15,17.18197);
   hext_stack_2->SetBinContent(16,20.82537);
   hext_stack_2->SetBinContent(17,15.39281);
   hext_stack_2->SetBinContent(18,19.12281);
   hext_stack_2->SetBinContent(19,23.65001);
   hext_stack_2->SetBinContent(20,22.04957);
   hext_stack_2->SetBinContent(21,42.96318);
   hext_stack_2->SetBinContent(22,18.46961);
   hext_stack_2->SetBinContent(23,15.9594);
   hext_stack_2->SetBinContent(24,20.56163);
   hext_stack_2->SetBinContent(25,14.91837);
   hext_stack_2->SetBinContent(26,14.07922);
   hext_stack_2->SetBinContent(27,19.37219);
   hext_stack_2->SetBinContent(28,18.44366);
   hext_stack_2->SetBinContent(29,14.43398);
   hext_stack_2->SetBinContent(30,10.779);
   hext_stack_2->SetBinContent(31,1.137595);
   hext_stack_2->SetBinError(1,2.407345);
   hext_stack_2->SetBinError(2,3.098896);
   hext_stack_2->SetBinError(3,3.101835);
   hext_stack_2->SetBinError(4,3.148471);
   hext_stack_2->SetBinError(5,3.172262);
   hext_stack_2->SetBinError(6,3.187352);
   hext_stack_2->SetBinError(7,3.315344);
   hext_stack_2->SetBinError(8,3.419395);
   hext_stack_2->SetBinError(9,2.831454);
   hext_stack_2->SetBinError(10,2.7972);
   hext_stack_2->SetBinError(11,3.372916);
   hext_stack_2->SetBinError(12,2.520903);
   hext_stack_2->SetBinError(13,2.903707);
   hext_stack_2->SetBinError(14,3.304915);
   hext_stack_2->SetBinError(15,2.631098);
   hext_stack_2->SetBinError(16,2.888172);
   hext_stack_2->SetBinError(17,2.571509);
   hext_stack_2->SetBinError(18,2.868227);
   hext_stack_2->SetBinError(19,3.178428);
   hext_stack_2->SetBinError(20,2.995435);
   hext_stack_2->SetBinError(21,4.24038);
   hext_stack_2->SetBinError(22,2.807336);
   hext_stack_2->SetBinError(23,2.600583);
   hext_stack_2->SetBinError(24,2.983287);
   hext_stack_2->SetBinError(25,2.446394);
   hext_stack_2->SetBinError(26,2.474405);
   hext_stack_2->SetBinError(27,2.840893);
   hext_stack_2->SetBinError(28,2.889571);
   hext_stack_2->SetBinError(29,2.42787);
   hext_stack_2->SetBinError(30,2.131143);
   hext_stack_2->SetBinError(31,0.6602113);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,9.354599);
   hdirt_stack_3->SetBinContent(2,7.000653);
   hdirt_stack_3->SetBinContent(3,6.614541);
   hdirt_stack_3->SetBinContent(4,3.063942);
   hdirt_stack_3->SetBinContent(5,2.726027);
   hdirt_stack_3->SetBinContent(6,2.646285);
   hdirt_stack_3->SetBinContent(7,2.329391);
   hdirt_stack_3->SetBinContent(8,3.215383);
   hdirt_stack_3->SetBinContent(9,2.955294);
   hdirt_stack_3->SetBinContent(10,3.327973);
   hdirt_stack_3->SetBinContent(11,1.727094);
   hdirt_stack_3->SetBinContent(12,1.493965);
   hdirt_stack_3->SetBinContent(13,2.625488);
   hdirt_stack_3->SetBinContent(14,1.253978);
   hdirt_stack_3->SetBinContent(15,1.515501);
   hdirt_stack_3->SetBinContent(16,2.188922);
   hdirt_stack_3->SetBinContent(17,1.193192);
   hdirt_stack_3->SetBinContent(18,1.156151);
   hdirt_stack_3->SetBinContent(19,0.982376);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,2.930987);
   hdirt_stack_3->SetBinContent(22,1.568609);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.7321214);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.940626);
   hdirt_stack_3->SetBinContent(27,1.409088);
   hdirt_stack_3->SetBinContent(28,1.908545);
   hdirt_stack_3->SetBinContent(29,1.171413);
   hdirt_stack_3->SetBinContent(30,0.5758626);
   hdirt_stack_3->SetBinError(1,1.611529);
   hdirt_stack_3->SetBinError(2,1.343846);
   hdirt_stack_3->SetBinError(3,1.50386);
   hdirt_stack_3->SetBinError(4,0.9034885);
   hdirt_stack_3->SetBinError(5,0.9370599);
   hdirt_stack_3->SetBinError(6,0.8482434);
   hdirt_stack_3->SetBinError(7,0.8268664);
   hdirt_stack_3->SetBinError(8,0.9444708);
   hdirt_stack_3->SetBinError(9,0.8446888);
   hdirt_stack_3->SetBinError(10,1.345897);
   hdirt_stack_3->SetBinError(11,0.6674736);
   hdirt_stack_3->SetBinError(12,0.649483);
   hdirt_stack_3->SetBinError(13,0.8531346);
   hdirt_stack_3->SetBinError(14,0.6057728);
   hdirt_stack_3->SetBinError(15,0.5931947);
   hdirt_stack_3->SetBinError(16,0.8257001);
   hdirt_stack_3->SetBinError(17,0.5921466);
   hdirt_stack_3->SetBinError(18,0.5870455);
   hdirt_stack_3->SetBinError(19,0.5099715);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.8803808);
   hdirt_stack_3->SetBinError(22,0.5837417);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.4557629);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.308701);
   hdirt_stack_3->SetBinError(27,0.5615226);
   hdirt_stack_3->SetBinError(28,0.7269063);
   hdirt_stack_3->SetBinError(29,0.5610561);
   hdirt_stack_3->SetBinError(30,0.3389606);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.9286332);
   houtFV_stack_4->SetBinContent(1,51.88361);
   houtFV_stack_4->SetBinContent(2,30.43332);
   houtFV_stack_4->SetBinContent(3,22.03037);
   houtFV_stack_4->SetBinContent(4,23.27081);
   houtFV_stack_4->SetBinContent(5,20.10213);
   houtFV_stack_4->SetBinContent(6,24.65736);
   houtFV_stack_4->SetBinContent(7,22.62136);
   houtFV_stack_4->SetBinContent(8,27.32465);
   houtFV_stack_4->SetBinContent(9,20.55249);
   houtFV_stack_4->SetBinContent(10,18.95343);
   houtFV_stack_4->SetBinContent(11,23.64134);
   houtFV_stack_4->SetBinContent(12,20.58894);
   houtFV_stack_4->SetBinContent(13,18.52156);
   houtFV_stack_4->SetBinContent(14,20.65697);
   houtFV_stack_4->SetBinContent(15,25.71962);
   houtFV_stack_4->SetBinContent(16,22.79636);
   houtFV_stack_4->SetBinContent(17,22.46648);
   houtFV_stack_4->SetBinContent(18,19.43167);
   houtFV_stack_4->SetBinContent(19,23.02692);
   houtFV_stack_4->SetBinContent(20,24.41424);
   houtFV_stack_4->SetBinContent(21,29.0221);
   houtFV_stack_4->SetBinContent(22,22.70131);
   houtFV_stack_4->SetBinContent(23,23.32507);
   houtFV_stack_4->SetBinContent(24,23.24128);
   houtFV_stack_4->SetBinContent(25,25.55433);
   houtFV_stack_4->SetBinContent(26,18.49935);
   houtFV_stack_4->SetBinContent(27,27.04047);
   houtFV_stack_4->SetBinContent(28,18.77643);
   houtFV_stack_4->SetBinContent(29,24.54228);
   houtFV_stack_4->SetBinContent(30,24.23639);
   houtFV_stack_4->SetBinContent(31,1.270501);
   houtFV_stack_4->SetBinError(0,0.48078);
   houtFV_stack_4->SetBinError(1,3.673537);
   houtFV_stack_4->SetBinError(2,2.770799);
   houtFV_stack_4->SetBinError(3,2.342157);
   houtFV_stack_4->SetBinError(4,2.589378);
   houtFV_stack_4->SetBinError(5,2.217968);
   houtFV_stack_4->SetBinError(6,2.495637);
   houtFV_stack_4->SetBinError(7,2.329472);
   houtFV_stack_4->SetBinError(8,2.676705);
   houtFV_stack_4->SetBinError(9,2.177454);
   houtFV_stack_4->SetBinError(10,2.199277);
   houtFV_stack_4->SetBinError(11,2.381603);
   houtFV_stack_4->SetBinError(12,2.227379);
   houtFV_stack_4->SetBinError(13,2.193423);
   houtFV_stack_4->SetBinError(14,2.277889);
   houtFV_stack_4->SetBinError(15,2.498962);
   houtFV_stack_4->SetBinError(16,2.443273);
   houtFV_stack_4->SetBinError(17,2.343056);
   houtFV_stack_4->SetBinError(18,2.207003);
   houtFV_stack_4->SetBinError(19,2.423515);
   houtFV_stack_4->SetBinError(20,2.51035);
   houtFV_stack_4->SetBinError(21,2.766847);
   houtFV_stack_4->SetBinError(22,2.387228);
   houtFV_stack_4->SetBinError(23,2.681585);
   houtFV_stack_4->SetBinError(24,2.419353);
   houtFV_stack_4->SetBinError(25,2.502829);
   houtFV_stack_4->SetBinError(26,2.212917);
   houtFV_stack_4->SetBinError(27,2.57859);
   houtFV_stack_4->SetBinError(28,2.178492);
   houtFV_stack_4->SetBinError(29,2.514988);
   houtFV_stack_4->SetBinError(30,2.490689);
   houtFV_stack_4->SetBinError(31,0.5895188);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.966794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.18012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.676416);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.789848);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.890406);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.126224);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.915978);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.192402);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.40232);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.000174);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.290384);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.359802);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.793256);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.363546);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.53161);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.61207);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.124648);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.766852);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.417434);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.705148);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.570552);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.084042);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.270365);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.485683);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.412465);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,4.794832);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,5.003918);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,4.282006);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.759284);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.715694);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4887857);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6511889);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5096409);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5780474);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6567927);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6266693);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6380559);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5600354);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6150197);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6026599);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.556433);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5641898);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6742883);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7101788);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7039401);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6403904);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5860714);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6779822);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6254264);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5289409);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6341812);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6311047);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4128065);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5613079);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8344855);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.7098588);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.7411092);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7030643);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.4927503);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.481566);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.254676);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.031972);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.01769);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.200372);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.29769);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.9065858);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.36794);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4742997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6832176);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.200372);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.253844);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.8780218);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.311972);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.7383537);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4003631);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3283469);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3378888);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2652967);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4055949);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4171068);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2545655);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4493736);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1150346);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1606779);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4055949);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3755322);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2784203);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.4094153);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.2021557);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2013529);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7953222);
   hNCpi0inFVres_stack_7->SetBinContent(1,48.42396);
   hNCpi0inFVres_stack_7->SetBinContent(2,84.99818);
   hNCpi0inFVres_stack_7->SetBinContent(3,87.85847);
   hNCpi0inFVres_stack_7->SetBinContent(4,75.99824);
   hNCpi0inFVres_stack_7->SetBinContent(5,91.43197);
   hNCpi0inFVres_stack_7->SetBinContent(6,94.78714);
   hNCpi0inFVres_stack_7->SetBinContent(7,91.89897);
   hNCpi0inFVres_stack_7->SetBinContent(8,91.72812);
   hNCpi0inFVres_stack_7->SetBinContent(9,98.11206);
   hNCpi0inFVres_stack_7->SetBinContent(10,94.06888);
   hNCpi0inFVres_stack_7->SetBinContent(11,92.51326);
   hNCpi0inFVres_stack_7->SetBinContent(12,94.23795);
   hNCpi0inFVres_stack_7->SetBinContent(13,97.25816);
   hNCpi0inFVres_stack_7->SetBinContent(14,109.0346);
   hNCpi0inFVres_stack_7->SetBinContent(15,101.5915);
   hNCpi0inFVres_stack_7->SetBinContent(16,98.51876);
   hNCpi0inFVres_stack_7->SetBinContent(17,101.2821);
   hNCpi0inFVres_stack_7->SetBinContent(18,100.1123);
   hNCpi0inFVres_stack_7->SetBinContent(19,98.02174);
   hNCpi0inFVres_stack_7->SetBinContent(20,93.41872);
   hNCpi0inFVres_stack_7->SetBinContent(21,84.34518);
   hNCpi0inFVres_stack_7->SetBinContent(22,84.93709);
   hNCpi0inFVres_stack_7->SetBinContent(23,95.21141);
   hNCpi0inFVres_stack_7->SetBinContent(24,93.81183);
   hNCpi0inFVres_stack_7->SetBinContent(25,94.48964);
   hNCpi0inFVres_stack_7->SetBinContent(26,100.4048);
   hNCpi0inFVres_stack_7->SetBinContent(27,96.61293);
   hNCpi0inFVres_stack_7->SetBinContent(28,106.0367);
   hNCpi0inFVres_stack_7->SetBinContent(29,97.3495);
   hNCpi0inFVres_stack_7->SetBinContent(30,55.64132);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.4463997);
   hNCpi0inFVres_stack_7->SetBinError(0,0.356662);
   hNCpi0inFVres_stack_7->SetBinError(1,2.258944);
   hNCpi0inFVres_stack_7->SetBinError(2,2.992911);
   hNCpi0inFVres_stack_7->SetBinError(3,3.117533);
   hNCpi0inFVres_stack_7->SetBinError(4,2.839687);
   hNCpi0inFVres_stack_7->SetBinError(5,3.089335);
   hNCpi0inFVres_stack_7->SetBinError(6,3.167702);
   hNCpi0inFVres_stack_7->SetBinError(7,3.104626);
   hNCpi0inFVres_stack_7->SetBinError(8,3.167866);
   hNCpi0inFVres_stack_7->SetBinError(9,3.2282);
   hNCpi0inFVres_stack_7->SetBinError(10,3.135748);
   hNCpi0inFVres_stack_7->SetBinError(11,3.076532);
   hNCpi0inFVres_stack_7->SetBinError(12,3.165541);
   hNCpi0inFVres_stack_7->SetBinError(13,3.228805);
   hNCpi0inFVres_stack_7->SetBinError(14,3.467132);
   hNCpi0inFVres_stack_7->SetBinError(15,3.296945);
   hNCpi0inFVres_stack_7->SetBinError(16,3.195004);
   hNCpi0inFVres_stack_7->SetBinError(17,3.308778);
   hNCpi0inFVres_stack_7->SetBinError(18,3.309445);
   hNCpi0inFVres_stack_7->SetBinError(19,3.260591);
   hNCpi0inFVres_stack_7->SetBinError(20,3.17817);
   hNCpi0inFVres_stack_7->SetBinError(21,2.968668);
   hNCpi0inFVres_stack_7->SetBinError(22,3.023489);
   hNCpi0inFVres_stack_7->SetBinError(23,3.180233);
   hNCpi0inFVres_stack_7->SetBinError(24,3.21154);
   hNCpi0inFVres_stack_7->SetBinError(25,3.113639);
   hNCpi0inFVres_stack_7->SetBinError(26,3.268505);
   hNCpi0inFVres_stack_7->SetBinError(27,3.203683);
   hNCpi0inFVres_stack_7->SetBinError(28,3.432733);
   hNCpi0inFVres_stack_7->SetBinError(29,3.277854);
   hNCpi0inFVres_stack_7->SetBinError(30,2.499461);
   hNCpi0inFVres_stack_7->SetBinError(31,0.1115999);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.75609);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.86686);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.05378);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.31384);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.54352);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.85673);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.15908);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.55365);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.14646);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.83789);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.02504);
   hNCpi0inFVdis_stack_8->SetBinContent(12,19.90971);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.47402);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.10501);
   hNCpi0inFVdis_stack_8->SetBinContent(15,18.14038);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.5887);
   hNCpi0inFVdis_stack_8->SetBinContent(17,21.23381);
   hNCpi0inFVdis_stack_8->SetBinContent(18,19.98097);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.83065);
   hNCpi0inFVdis_stack_8->SetBinContent(20,17.70993);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.07794);
   hNCpi0inFVdis_stack_8->SetBinContent(22,17.86072);
   hNCpi0inFVdis_stack_8->SetBinContent(23,18.37836);
   hNCpi0inFVdis_stack_8->SetBinContent(24,17.41565);
   hNCpi0inFVdis_stack_8->SetBinContent(25,18.39481);
   hNCpi0inFVdis_stack_8->SetBinContent(26,20.86082);
   hNCpi0inFVdis_stack_8->SetBinContent(27,18.86529);
   hNCpi0inFVdis_stack_8->SetBinContent(28,19.70296);
   hNCpi0inFVdis_stack_8->SetBinContent(29,15.96716);
   hNCpi0inFVdis_stack_8->SetBinContent(30,11.69779);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.175266);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.302128);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.373196);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.360047);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.425304);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.361025);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.440988);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.369175);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.45648);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.440222);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.311905);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.416653);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.354551);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.418575);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.382119);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.427396);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.475089);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.493793);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.333556);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.389234);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.303995);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.384182);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.365236);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.369861);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.360071);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.495225);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.405967);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.459839);
   hNCpi0inFVdis_stack_8->SetBinError(29,1.253805);
   hNCpi0inFVdis_stack_8->SetBinError(30,1.149736);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,25.54154);
   hCCpi0inFV_stack_10->SetBinContent(2,33.33617);
   hCCpi0inFV_stack_10->SetBinContent(3,34.73953);
   hCCpi0inFV_stack_10->SetBinContent(4,37.61742);
   hCCpi0inFV_stack_10->SetBinContent(5,41.40598);
   hCCpi0inFV_stack_10->SetBinContent(6,35.1253);
   hCCpi0inFV_stack_10->SetBinContent(7,33.5579);
   hCCpi0inFV_stack_10->SetBinContent(8,39.7008);
   hCCpi0inFV_stack_10->SetBinContent(9,37.49786);
   hCCpi0inFV_stack_10->SetBinContent(10,42.34924);
   hCCpi0inFV_stack_10->SetBinContent(11,37.07203);
   hCCpi0inFV_stack_10->SetBinContent(12,33.77409);
   hCCpi0inFV_stack_10->SetBinContent(13,39.14711);
   hCCpi0inFV_stack_10->SetBinContent(14,38.23489);
   hCCpi0inFV_stack_10->SetBinContent(15,43.63696);
   hCCpi0inFV_stack_10->SetBinContent(16,34.7705);
   hCCpi0inFV_stack_10->SetBinContent(17,32.14782);
   hCCpi0inFV_stack_10->SetBinContent(18,33.81395);
   hCCpi0inFV_stack_10->SetBinContent(19,32.34821);
   hCCpi0inFV_stack_10->SetBinContent(20,35.38889);
   hCCpi0inFV_stack_10->SetBinContent(21,38.73186);
   hCCpi0inFV_stack_10->SetBinContent(22,40.84343);
   hCCpi0inFV_stack_10->SetBinContent(23,33.62416);
   hCCpi0inFV_stack_10->SetBinContent(24,37.58176);
   hCCpi0inFV_stack_10->SetBinContent(25,34.91674);
   hCCpi0inFV_stack_10->SetBinContent(26,41.30252);
   hCCpi0inFV_stack_10->SetBinContent(27,34.8712);
   hCCpi0inFV_stack_10->SetBinContent(28,37.32085);
   hCCpi0inFV_stack_10->SetBinContent(29,36.98442);
   hCCpi0inFV_stack_10->SetBinContent(30,36.65387);
   hCCpi0inFV_stack_10->SetBinContent(31,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,2.559047);
   hCCpi0inFV_stack_10->SetBinError(2,2.866219);
   hCCpi0inFV_stack_10->SetBinError(3,3.003805);
   hCCpi0inFV_stack_10->SetBinError(4,3.000836);
   hCCpi0inFV_stack_10->SetBinError(5,3.224463);
   hCCpi0inFV_stack_10->SetBinError(6,2.936815);
   hCCpi0inFV_stack_10->SetBinError(7,2.870575);
   hCCpi0inFV_stack_10->SetBinError(8,3.163648);
   hCCpi0inFV_stack_10->SetBinError(9,3.073126);
   hCCpi0inFV_stack_10->SetBinError(10,3.293876);
   hCCpi0inFV_stack_10->SetBinError(11,3.122326);
   hCCpi0inFV_stack_10->SetBinError(12,2.919785);
   hCCpi0inFV_stack_10->SetBinError(13,3.122215);
   hCCpi0inFV_stack_10->SetBinError(14,3.077379);
   hCCpi0inFV_stack_10->SetBinError(15,3.26362);
   hCCpi0inFV_stack_10->SetBinError(16,2.905123);
   hCCpi0inFV_stack_10->SetBinError(17,2.893526);
   hCCpi0inFV_stack_10->SetBinError(18,2.919877);
   hCCpi0inFV_stack_10->SetBinError(19,2.899392);
   hCCpi0inFV_stack_10->SetBinError(20,2.916575);
   hCCpi0inFV_stack_10->SetBinError(21,3.15021);
   hCCpi0inFV_stack_10->SetBinError(22,3.180876);
   hCCpi0inFV_stack_10->SetBinError(23,2.959112);
   hCCpi0inFV_stack_10->SetBinError(24,3.09878);
   hCCpi0inFV_stack_10->SetBinError(25,2.937123);
   hCCpi0inFV_stack_10->SetBinError(26,3.280261);
   hCCpi0inFV_stack_10->SetBinError(27,2.964629);
   hCCpi0inFV_stack_10->SetBinError(28,3.088074);
   hCCpi0inFV_stack_10->SetBinError(29,3.027436);
   hCCpi0inFV_stack_10->SetBinError(30,3.102874);
   hCCpi0inFV_stack_10->SetBinError(31,0.4383608);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,8.989872);
   hNCinFV_stack_11->SetBinContent(2,16.02044);
   hNCinFV_stack_11->SetBinContent(3,15.2919);
   hNCinFV_stack_11->SetBinContent(4,14.2198);
   hNCinFV_stack_11->SetBinContent(5,17.88446);
   hNCinFV_stack_11->SetBinContent(6,15.49308);
   hNCinFV_stack_11->SetBinContent(7,19.04616);
   hNCinFV_stack_11->SetBinContent(8,15.54356);
   hNCinFV_stack_11->SetBinContent(9,16.61382);
   hNCinFV_stack_11->SetBinContent(10,16.94738);
   hNCinFV_stack_11->SetBinContent(11,16.85271);
   hNCinFV_stack_11->SetBinContent(12,14.95172);
   hNCinFV_stack_11->SetBinContent(13,15.627);
   hNCinFV_stack_11->SetBinContent(14,19.9917);
   hNCinFV_stack_11->SetBinContent(15,14.71129);
   hNCinFV_stack_11->SetBinContent(16,19.30566);
   hNCinFV_stack_11->SetBinContent(17,19.2093);
   hNCinFV_stack_11->SetBinContent(18,16.08323);
   hNCinFV_stack_11->SetBinContent(19,17.6793);
   hNCinFV_stack_11->SetBinContent(20,19.49961);
   hNCinFV_stack_11->SetBinContent(21,21.9318);
   hNCinFV_stack_11->SetBinContent(22,19.12683);
   hNCinFV_stack_11->SetBinContent(23,16.18696);
   hNCinFV_stack_11->SetBinContent(24,20.07346);
   hNCinFV_stack_11->SetBinContent(25,20.59743);
   hNCinFV_stack_11->SetBinContent(26,16.6683);
   hNCinFV_stack_11->SetBinContent(27,17.28864);
   hNCinFV_stack_11->SetBinContent(28,17.0388);
   hNCinFV_stack_11->SetBinContent(29,17.87601);
   hNCinFV_stack_11->SetBinContent(30,14.60647);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,1.533656);
   hNCinFV_stack_11->SetBinError(2,2.03025);
   hNCinFV_stack_11->SetBinError(3,1.982621);
   hNCinFV_stack_11->SetBinError(4,1.903316);
   hNCinFV_stack_11->SetBinError(5,2.141696);
   hNCinFV_stack_11->SetBinError(6,1.942381);
   hNCinFV_stack_11->SetBinError(7,2.193572);
   hNCinFV_stack_11->SetBinError(8,1.982881);
   hNCinFV_stack_11->SetBinError(9,2.020862);
   hNCinFV_stack_11->SetBinError(10,2.086241);
   hNCinFV_stack_11->SetBinError(11,2.105633);
   hNCinFV_stack_11->SetBinError(12,1.953219);
   hNCinFV_stack_11->SetBinError(13,2.011099);
   hNCinFV_stack_11->SetBinError(14,2.247116);
   hNCinFV_stack_11->SetBinError(15,1.902641);
   hNCinFV_stack_11->SetBinError(16,2.148831);
   hNCinFV_stack_11->SetBinError(17,2.167511);
   hNCinFV_stack_11->SetBinError(18,1.972038);
   hNCinFV_stack_11->SetBinError(19,2.131866);
   hNCinFV_stack_11->SetBinError(20,2.20306);
   hNCinFV_stack_11->SetBinError(21,2.329357);
   hNCinFV_stack_11->SetBinError(22,2.263131);
   hNCinFV_stack_11->SetBinError(23,2.002394);
   hNCinFV_stack_11->SetBinError(24,2.271909);
   hNCinFV_stack_11->SetBinError(25,2.347193);
   hNCinFV_stack_11->SetBinError(26,2.000759);
   hNCinFV_stack_11->SetBinError(27,2.066436);
   hNCinFV_stack_11->SetBinError(28,2.032719);
   hNCinFV_stack_11->SetBinError(29,2.140923);
   hNCinFV_stack_11->SetBinError(30,1.922851);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,19.19289);
   hnumuCCinFV_stack_12->SetBinContent(2,23.65788);
   hnumuCCinFV_stack_12->SetBinContent(3,24.3626);
   hnumuCCinFV_stack_12->SetBinContent(4,30.69926);
   hnumuCCinFV_stack_12->SetBinContent(5,18.51806);
   hnumuCCinFV_stack_12->SetBinContent(6,22.78282);
   hnumuCCinFV_stack_12->SetBinContent(7,23.93111);
   hnumuCCinFV_stack_12->SetBinContent(8,32.24468);
   hnumuCCinFV_stack_12->SetBinContent(9,24.83976);
   hnumuCCinFV_stack_12->SetBinContent(10,18.73304);
   hnumuCCinFV_stack_12->SetBinContent(11,20.98966);
   hnumuCCinFV_stack_12->SetBinContent(12,16.60244);
   hnumuCCinFV_stack_12->SetBinContent(13,23.09469);
   hnumuCCinFV_stack_12->SetBinContent(14,20.98862);
   hnumuCCinFV_stack_12->SetBinContent(15,23.4469);
   hnumuCCinFV_stack_12->SetBinContent(16,18.8367);
   hnumuCCinFV_stack_12->SetBinContent(17,22.6128);
   hnumuCCinFV_stack_12->SetBinContent(18,20.4294);
   hnumuCCinFV_stack_12->SetBinContent(19,17.52634);
   hnumuCCinFV_stack_12->SetBinContent(20,23.77621);
   hnumuCCinFV_stack_12->SetBinContent(21,28.34617);
   hnumuCCinFV_stack_12->SetBinContent(22,24.72252);
   hnumuCCinFV_stack_12->SetBinContent(23,22.52396);
   hnumuCCinFV_stack_12->SetBinContent(24,19.68818);
   hnumuCCinFV_stack_12->SetBinContent(25,17.24279);
   hnumuCCinFV_stack_12->SetBinContent(26,18.59134);
   hnumuCCinFV_stack_12->SetBinContent(27,18.74296);
   hnumuCCinFV_stack_12->SetBinContent(28,16.26548);
   hnumuCCinFV_stack_12->SetBinContent(29,21.50533);
   hnumuCCinFV_stack_12->SetBinContent(30,18.27822);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.843616);
   hnumuCCinFV_stack_12->SetBinError(2,3.040312);
   hnumuCCinFV_stack_12->SetBinError(3,2.766615);
   hnumuCCinFV_stack_12->SetBinError(4,2.989903);
   hnumuCCinFV_stack_12->SetBinError(5,2.313896);
   hnumuCCinFV_stack_12->SetBinError(6,2.734323);
   hnumuCCinFV_stack_12->SetBinError(7,3.578827);
   hnumuCCinFV_stack_12->SetBinError(8,3.769836);
   hnumuCCinFV_stack_12->SetBinError(9,2.998668);
   hnumuCCinFV_stack_12->SetBinError(10,2.473315);
   hnumuCCinFV_stack_12->SetBinError(11,2.391677);
   hnumuCCinFV_stack_12->SetBinError(12,2.393344);
   hnumuCCinFV_stack_12->SetBinError(13,2.646933);
   hnumuCCinFV_stack_12->SetBinError(14,3.297245);
   hnumuCCinFV_stack_12->SetBinError(15,2.601825);
   hnumuCCinFV_stack_12->SetBinError(16,2.407059);
   hnumuCCinFV_stack_12->SetBinError(17,2.942948);
   hnumuCCinFV_stack_12->SetBinError(18,2.495815);
   hnumuCCinFV_stack_12->SetBinError(19,2.324403);
   hnumuCCinFV_stack_12->SetBinError(20,3.313502);
   hnumuCCinFV_stack_12->SetBinError(21,2.745417);
   hnumuCCinFV_stack_12->SetBinError(22,2.671345);
   hnumuCCinFV_stack_12->SetBinError(23,2.595011);
   hnumuCCinFV_stack_12->SetBinError(24,2.318007);
   hnumuCCinFV_stack_12->SetBinError(25,2.337032);
   hnumuCCinFV_stack_12->SetBinError(26,2.366552);
   hnumuCCinFV_stack_12->SetBinError(27,2.563097);
   hnumuCCinFV_stack_12->SetBinError(28,2.035825);
   hnumuCCinFV_stack_12->SetBinError(29,2.737759);
   hnumuCCinFV_stack_12->SetBinError(30,2.392281);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.305493);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.6402578);
   hnueCCinFV_stack_13->SetBinContent(4,1.9952);
   hnueCCinFV_stack_13->SetBinContent(5,2.946188);
   hnueCCinFV_stack_13->SetBinContent(6,0.977303);
   hnueCCinFV_stack_13->SetBinContent(7,2.253958);
   hnueCCinFV_stack_13->SetBinContent(8,2.315725);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,1.060783);
   hnueCCinFV_stack_13->SetBinContent(11,1.085857);
   hnueCCinFV_stack_13->SetBinContent(12,1.338508);
   hnueCCinFV_stack_13->SetBinContent(13,2.60502);
   hnueCCinFV_stack_13->SetBinContent(14,1.637758);
   hnueCCinFV_stack_13->SetBinContent(15,2.257051);
   hnueCCinFV_stack_13->SetBinContent(16,2.161972);
   hnueCCinFV_stack_13->SetBinContent(17,1.550959);
   hnueCCinFV_stack_13->SetBinContent(18,1.602102);
   hnueCCinFV_stack_13->SetBinContent(19,1.878912);
   hnueCCinFV_stack_13->SetBinContent(20,1.614761);
   hnueCCinFV_stack_13->SetBinContent(21,2.357428);
   hnueCCinFV_stack_13->SetBinContent(22,2.177566);
   hnueCCinFV_stack_13->SetBinContent(23,1.059023);
   hnueCCinFV_stack_13->SetBinContent(24,2.502004);
   hnueCCinFV_stack_13->SetBinContent(25,2.497455);
   hnueCCinFV_stack_13->SetBinContent(26,1.800674);
   hnueCCinFV_stack_13->SetBinContent(27,2.417496);
   hnueCCinFV_stack_13->SetBinContent(28,0.7033689);
   hnueCCinFV_stack_13->SetBinContent(29,3.036338);
   hnueCCinFV_stack_13->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_13->SetBinError(1,0.6094479);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.3723889);
   hnueCCinFV_stack_13->SetBinError(4,0.7872795);
   hnueCCinFV_stack_13->SetBinError(5,1.849411);
   hnueCCinFV_stack_13->SetBinError(6,0.5020508);
   hnueCCinFV_stack_13->SetBinError(7,0.8085586);
   hnueCCinFV_stack_13->SetBinError(8,0.8026899);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.5588594);
   hnueCCinFV_stack_13->SetBinError(11,0.5487395);
   hnueCCinFV_stack_13->SetBinError(12,0.6800867);
   hnueCCinFV_stack_13->SetBinError(13,1.023969);
   hnueCCinFV_stack_13->SetBinError(14,0.6927579);
   hnueCCinFV_stack_13->SetBinError(15,0.7454225);
   hnueCCinFV_stack_13->SetBinError(16,1.2417);
   hnueCCinFV_stack_13->SetBinError(17,0.7478497);
   hnueCCinFV_stack_13->SetBinError(18,0.9585051);
   hnueCCinFV_stack_13->SetBinError(19,0.8945046);
   hnueCCinFV_stack_13->SetBinError(20,0.6654854);
   hnueCCinFV_stack_13->SetBinError(21,0.8058879);
   hnueCCinFV_stack_13->SetBinError(22,0.8848417);
   hnueCCinFV_stack_13->SetBinError(23,0.5426262);
   hnueCCinFV_stack_13->SetBinError(24,1.009049);
   hnueCCinFV_stack_13->SetBinError(25,0.9181021);
   hnueCCinFV_stack_13->SetBinError(26,0.6594318);
   hnueCCinFV_stack_13->SetBinError(27,0.8260393);
   hnueCCinFV_stack_13->SetBinError(28,0.4164799);
   hnueCCinFV_stack_13->SetBinError(29,1.684419);
   hnueCCinFV_stack_13->SetBinError(30,0.4102043);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,2.314102);
   hmcerror__2->SetBinContent(1,197.6609);
   hmcerror__2->SetBinContent(2,244.4592);
   hmcerror__2->SetBinContent(3,238.9994);
   hmcerror__2->SetBinContent(4,241.2414);
   hmcerror__2->SetBinContent(5,252.1687);
   hmcerror__2->SetBinContent(6,249.1126);
   hmcerror__2->SetBinContent(7,250.0351);
   hmcerror__2->SetBinContent(8,268.2547);
   hmcerror__2->SetBinContent(9,253.3853);
   hmcerror__2->SetBinContent(10,243.217);
   hmcerror__2->SetBinContent(11,245.6105);
   hmcerror__2->SetBinContent(12,230.2936);
   hmcerror__2->SetBinContent(13,245.8879);
   hmcerror__2->SetBinContent(14,270.6039);
   hmcerror__2->SetBinContent(15,258.6088);
   hmcerror__2->SetBinContent(16,249.1561);
   hmcerror__2->SetBinContent(17,246.1359);
   hmcerror__2->SetBinContent(18,240.578);
   hmcerror__2->SetBinContent(19,241.5194);
   hmcerror__2->SetBinContent(20,250.0743);
   hmcerror__2->SetBinContent(21,282.5686);
   hmcerror__2->SetBinContent(22,244.8026);
   hmcerror__2->SetBinContent(23,234.1112);
   hmcerror__2->SetBinContent(24,246.7204);
   hmcerror__2->SetBinContent(25,240.3929);
   hmcerror__2->SetBinContent(26,245.5018);
   hmcerror__2->SetBinContent(27,248.7873);
   hmcerror__2->SetBinContent(28,245.0589);
   hmcerror__2->SetBinContent(29,240.6746);
   hmcerror__2->SetBinContent(30,181.5252);
   hmcerror__2->SetBinContent(31,4.845335);
   hmcerror__2->SetBinError(0,0.6888018);
   hmcerror__2->SetBinError(1,48.01441);
   hmcerror__2->SetBinError(2,55.21599);
   hmcerror__2->SetBinError(3,57.47069);
   hmcerror__2->SetBinError(4,51.39553);
   hmcerror__2->SetBinError(5,57.92092);
   hmcerror__2->SetBinError(6,59.73304);
   hmcerror__2->SetBinError(7,55.7757);
   hmcerror__2->SetBinError(8,62.12461);
   hmcerror__2->SetBinError(9,56.3343);
   hmcerror__2->SetBinError(10,53.14532);
   hmcerror__2->SetBinError(11,57.76965);
   hmcerror__2->SetBinError(12,50.48775);
   hmcerror__2->SetBinError(13,52.87798);
   hmcerror__2->SetBinError(14,65.24389);
   hmcerror__2->SetBinError(15,66.54797);
   hmcerror__2->SetBinError(16,59.70491);
   hmcerror__2->SetBinError(17,59.27009);
   hmcerror__2->SetBinError(18,55.47651);
   hmcerror__2->SetBinError(19,53.4925);
   hmcerror__2->SetBinError(20,56.70526);
   hmcerror__2->SetBinError(21,63.22407);
   hmcerror__2->SetBinError(22,60.30072);
   hmcerror__2->SetBinError(23,53.04957);
   hmcerror__2->SetBinError(24,56.62993);
   hmcerror__2->SetBinError(25,57.17879);
   hmcerror__2->SetBinError(26,62.63605);
   hmcerror__2->SetBinError(27,54.11885);
   hmcerror__2->SetBinError(28,56.32708);
   hmcerror__2->SetBinError(29,56.37617);
   hmcerror__2->SetBinError(30,42.90774);
   hmcerror__2->SetBinError(31,4.771105);
   hmcerror__2->SetBinError(32,0.3895343);
   hmcerror__2->SetBinError(33,0.3895343);
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
   167,
   232,
   223,
   205,
   218,
   235,
   227,
   240,
   248,
   202,
   226,
   201,
   204,
   221,
   229,
   221,
   219,
   220,
   209,
   207,
   256,
   222,
   228,
   172,
   222,
   219,
   214,
   213,
   205,
   136,
   2,
   0};
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
   12.92285,
   15.23155,
   14.93318,
   14.31782,
   14.76482,
   15.32971,
   15.06652,
   15.49193,
   15.74802,
   14.21267,
   15.0333,
   14.17745,
   14.28286,
   14.86607,
   15.13275,
   14.86607,
   14.79865,
   14.8324,
   14.45683,
   14.38749,
   16,
   14.89966,
   15.09967,
   13.11488,
   14.89966,
   14.79865,
   14.62874,
   14.59452,
   14.31782,
   11.6619,
   2,
   0};
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
   12.92285,
   15.23155,
   14.93318,
   14.31782,
   14.76482,
   15.32971,
   15.06652,
   15.49193,
   15.74802,
   14.21267,
   15.0333,
   14.17745,
   14.28286,
   14.86607,
   15.13275,
   14.86607,
   14.79865,
   14.8324,
   14.45683,
   14.38749,
   16,
   14.89966,
   15.09967,
   13.11488,
   14.89966,
   14.79865,
   14.62874,
   14.59452,
   14.31782,
   11.6619,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(299.2);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6443.0","lp");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 721.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2754.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 511.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxZ_all");
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
   0.242913,
   0.22587,
   0.2404638,
   0.2130461,
   0.2296912,
   0.2397833,
   0.2230715,
   0.2315881,
   0.2223266,
   0.2185099,
   0.2352084,
   0.2192321,
   0.2150491,
   0.2411047,
   0.2573306,
   0.2396286,
   0.2408023,
   0.2305967,
   0.2214833,
   0.2267536,
   0.2237476,
   0.2463238,
   0.2265999,
   0.2295308,
   0.2378556,
   0.2551348,
   0.2175306,
   0.2298512,
   0.2342423,
   0.2363735,
   0.9846801,
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
   0.242913,
   0.22587,
   0.2404638,
   0.2130461,
   0.2296912,
   0.2397833,
   0.2230715,
   0.2315881,
   0.2223266,
   0.2185099,
   0.2352084,
   0.2192321,
   0.2150491,
   0.2411047,
   0.2573306,
   0.2396286,
   0.2408023,
   0.2305967,
   0.2214833,
   0.2267536,
   0.2237476,
   0.2463238,
   0.2265999,
   0.2295308,
   0.2378556,
   0.2551348,
   0.2175306,
   0.2298512,
   0.2342423,
   0.2363735,
   0.9846801,
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
   0.1925336,
   0.196632,
   0.1993731,
   0.1879751,
   0.2002518,
   0.2042507,
   0.196616,
   0.1995593,
   0.2004312,
   0.1983582,
   0.197093,
   0.2041059,
   0.2003556,
   0.2056505,
   0.2064224,
   0.2143633,
   0.2154356,
   0.2095527,
   0.2034215,
   0.2021307,
   0.1811541,
   0.1974307,
   0.2077144,
   0.2035397,
   0.2164084,
   0.2096225,
   0.2028459,
   0.2121047,
   0.2112329,
   0.2012685,
   0.3066372,
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
   0.1925336,
   0.196632,
   0.1993731,
   0.1879751,
   0.2002518,
   0.2042507,
   0.196616,
   0.1995593,
   0.2004312,
   0.1983582,
   0.197093,
   0.2041059,
   0.2003556,
   0.2056505,
   0.2064224,
   0.2143633,
   0.2154356,
   0.2095527,
   0.2034215,
   0.2021307,
   0.1811541,
   0.1974307,
   0.2077144,
   0.2035397,
   0.2164084,
   0.2096225,
   0.2028459,
   0.2121047,
   0.2112329,
   0.2012685,
   0.3066372,
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
   0.8448812,
   0.9490338,
   0.9330569,
   0.8497714,
   0.8645007,
   0.9433485,
   0.9078727,
   0.894672,
   0.9787465,
   0.8305341,
   0.9201562,
   0.8727987,
   0.8296463,
   0.8166918,
   0.8855073,
   0.8869942,
   0.8897523,
   0.9144642,
   0.865355,
   0.8277539,
   0.9059746,
   0.9068531,
   0.9738963,
   0.6971454,
   0.9234881,
   0.8920506,
   0.8601726,
   0.869179,
   0.8517726,
   0.7492073,
   0.4127682,
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
   0.06537887,
   0.06230712,
   0.06248211,
   0.05935061,
   0.05855137,
   0.06153727,
   0.06025763,
   0.05775083,
   0.06215046,
   0.05843618,
   0.06120788,
   0.06156248,
   0.05808686,
   0.05493664,
   0.05851597,
   0.05966569,
   0.06012389,
   0.06165316,
   0.05985786,
   0.05753287,
   0.05662341,
   0.06086399,
   0.06449786,
   0.05315684,
   0.06198046,
   0.06027919,
   0.05880019,
   0.05955516,
   0.05949038,
   0.064244,
   0.4127682,
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
   0.06537887,
   0.06230712,
   0.06248211,
   0.05935061,
   0.05855137,
   0.06153727,
   0.06025763,
   0.05775083,
   0.06215046,
   0.05843618,
   0.06120788,
   0.06156248,
   0.05808686,
   0.05493664,
   0.05851597,
   0.05966569,
   0.06012389,
   0.06165316,
   0.05985786,
   0.05753287,
   0.05662341,
   0.06086399,
   0.06449786,
   0.05315684,
   0.06198046,
   0.06027919,
   0.05880019,
   0.05955516,
   0.05949038,
   0.064244,
   0.3135325,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);

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

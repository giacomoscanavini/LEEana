#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 23:12:05 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1538462,-11.88441,1.128205,1314.165);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__4->SetBinContent(1,248.6724);
   hmc__4->SetBinContent(2,241.0428);
   hmc__4->SetBinContent(3,241.1694);
   hmc__4->SetBinContent(4,242.2132);
   hmc__4->SetBinContent(5,240.8498);
   hmc__4->SetBinContent(6,251.5552);
   hmc__4->SetBinContent(7,236.3619);
   hmc__4->SetBinContent(8,251.2649);
   hmc__4->SetBinContent(9,255.216);
   hmc__4->SetBinContent(10,250.0809);
   hmc__4->SetBinContent(11,261.4738);
   hmc__4->SetBinContent(12,265.2722);
   hmc__4->SetBinContent(13,274.6031);
   hmc__4->SetBinContent(14,269.1963);
   hmc__4->SetBinContent(15,273.6796);
   hmc__4->SetBinContent(16,307.6716);
   hmc__4->SetBinContent(17,324.3937);
   hmc__4->SetBinContent(18,355.6485);
   hmc__4->SetBinContent(19,404.0305);
   hmc__4->SetBinContent(20,594.2203);
   hmc__4->SetBinContent(21,0.1394999);
   hmc__4->SetBinError(1,75.12466);
   hmc__4->SetBinError(2,71.33607);
   hmc__4->SetBinError(3,73.53441);
   hmc__4->SetBinError(4,72.46038);
   hmc__4->SetBinError(5,69.81629);
   hmc__4->SetBinError(6,69.72139);
   hmc__4->SetBinError(7,73.6298);
   hmc__4->SetBinError(8,69.97584);
   hmc__4->SetBinError(9,69.64752);
   hmc__4->SetBinError(10,68.24584);
   hmc__4->SetBinError(11,76.52714);
   hmc__4->SetBinError(12,70.3007);
   hmc__4->SetBinError(13,75.0319);
   hmc__4->SetBinError(14,75.98099);
   hmc__4->SetBinError(15,79.57403);
   hmc__4->SetBinError(16,79.97241);
   hmc__4->SetBinError(17,82.73493);
   hmc__4->SetBinError(18,88.37553);
   hmc__4->SetBinError(19,99.02467);
   hmc__4->SetBinError(20,134.066);
   hmc__4->SetBinError(21,0.5511715);
   hmc__4->SetMinimum(-11.88441);
   hmc__4->SetMaximum(1247.863);
   hmc__4->SetEntries(5727.925);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1);
   hs2_stack_2->SetMinimum(-1.293891e-08);
   hs2_stack_2->SetMaximum(623.9312);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,8.16622);
   hbadmatch_stack_1->SetBinContent(2,8.069157);
   hbadmatch_stack_1->SetBinContent(3,4.778258);
   hbadmatch_stack_1->SetBinContent(4,6.492939);
   hbadmatch_stack_1->SetBinContent(5,8.348141);
   hbadmatch_stack_1->SetBinContent(6,5.222394);
   hbadmatch_stack_1->SetBinContent(7,6.386844);
   hbadmatch_stack_1->SetBinContent(8,4.879613);
   hbadmatch_stack_1->SetBinContent(9,5.635772);
   hbadmatch_stack_1->SetBinContent(10,6.380584);
   hbadmatch_stack_1->SetBinContent(11,6.158998);
   hbadmatch_stack_1->SetBinContent(12,5.63614);
   hbadmatch_stack_1->SetBinContent(13,5.486738);
   hbadmatch_stack_1->SetBinContent(14,4.220184);
   hbadmatch_stack_1->SetBinContent(15,5.118426);
   hbadmatch_stack_1->SetBinContent(16,4.763131);
   hbadmatch_stack_1->SetBinContent(17,7.0121);
   hbadmatch_stack_1->SetBinContent(18,5.51014);
   hbadmatch_stack_1->SetBinContent(19,6.604325);
   hbadmatch_stack_1->SetBinContent(20,9.204632);
   hbadmatch_stack_1->SetBinError(1,1.599929);
   hbadmatch_stack_1->SetBinError(2,1.458702);
   hbadmatch_stack_1->SetBinError(3,1.080995);
   hbadmatch_stack_1->SetBinError(4,1.328793);
   hbadmatch_stack_1->SetBinError(5,1.510554);
   hbadmatch_stack_1->SetBinError(6,1.527252);
   hbadmatch_stack_1->SetBinError(7,1.307733);
   hbadmatch_stack_1->SetBinError(8,1.13102);
   hbadmatch_stack_1->SetBinError(9,1.960556);
   hbadmatch_stack_1->SetBinError(10,1.379965);
   hbadmatch_stack_1->SetBinError(11,1.345426);
   hbadmatch_stack_1->SetBinError(12,1.261164);
   hbadmatch_stack_1->SetBinError(13,1.2495);
   hbadmatch_stack_1->SetBinError(14,1.03529);
   hbadmatch_stack_1->SetBinError(15,1.178829);
   hbadmatch_stack_1->SetBinError(16,1.072298);
   hbadmatch_stack_1->SetBinError(17,2.246367);
   hbadmatch_stack_1->SetBinError(18,1.901669);
   hbadmatch_stack_1->SetBinError(19,1.353268);
   hbadmatch_stack_1->SetBinError(20,1.817731);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,17.5036);
   hext_stack_2->SetBinContent(2,22.28175);
   hext_stack_2->SetBinContent(3,14.66182);
   hext_stack_2->SetBinContent(4,12.00157);
   hext_stack_2->SetBinContent(5,14.49741);
   hext_stack_2->SetBinContent(6,19.65627);
   hext_stack_2->SetBinContent(7,10.05077);
   hext_stack_2->SetBinContent(8,29.45207);
   hext_stack_2->SetBinContent(9,21.52487);
   hext_stack_2->SetBinContent(10,16.97449);
   hext_stack_2->SetBinContent(11,15.00775);
   hext_stack_2->SetBinContent(12,26.05365);
   hext_stack_2->SetBinContent(13,25.22174);
   hext_stack_2->SetBinContent(14,20.21128);
   hext_stack_2->SetBinContent(15,19.0665);
   hext_stack_2->SetBinContent(16,28.20475);
   hext_stack_2->SetBinContent(17,26.88404);
   hext_stack_2->SetBinContent(18,38.48657);
   hext_stack_2->SetBinContent(19,38.82816);
   hext_stack_2->SetBinContent(20,50.18364);
   hext_stack_2->SetBinError(1,2.713713);
   hext_stack_2->SetBinError(2,3.29935);
   hext_stack_2->SetBinError(3,2.518353);
   hext_stack_2->SetBinError(4,2.168275);
   hext_stack_2->SetBinError(5,2.494378);
   hext_stack_2->SetBinError(6,3.007788);
   hext_stack_2->SetBinError(7,1.983656);
   hext_stack_2->SetBinError(8,3.891118);
   hext_stack_2->SetBinError(9,3.123015);
   hext_stack_2->SetBinError(10,2.830143);
   hext_stack_2->SetBinError(11,2.417381);
   hext_stack_2->SetBinError(12,3.6648);
   hext_stack_2->SetBinError(13,3.469435);
   hext_stack_2->SetBinError(14,3.043558);
   hext_stack_2->SetBinError(15,3.004758);
   hext_stack_2->SetBinError(16,3.648486);
   hext_stack_2->SetBinError(17,3.419395);
   hext_stack_2->SetBinError(18,4.468467);
   hext_stack_2->SetBinError(19,4.243028);
   hext_stack_2->SetBinError(20,4.846476);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,0.7713597);
   hdirt_stack_3->SetBinContent(2,1.397555);
   hdirt_stack_3->SetBinContent(3,1.662002);
   hdirt_stack_3->SetBinContent(4,1.490762);
   hdirt_stack_3->SetBinContent(5,3.215888);
   hdirt_stack_3->SetBinContent(6,2.905924);
   hdirt_stack_3->SetBinContent(7,1.984786);
   hdirt_stack_3->SetBinContent(8,1.107611);
   hdirt_stack_3->SetBinContent(9,2.190143);
   hdirt_stack_3->SetBinContent(10,2.153229);
   hdirt_stack_3->SetBinContent(11,1.14619);
   hdirt_stack_3->SetBinContent(12,1.339415);
   hdirt_stack_3->SetBinContent(13,3.297934);
   hdirt_stack_3->SetBinContent(14,2.605781);
   hdirt_stack_3->SetBinContent(15,1.642716);
   hdirt_stack_3->SetBinContent(16,2.562511);
   hdirt_stack_3->SetBinContent(17,2.663629);
   hdirt_stack_3->SetBinContent(18,5.274969);
   hdirt_stack_3->SetBinContent(19,3.236341);
   hdirt_stack_3->SetBinContent(20,6.615915);
   hdirt_stack_3->SetBinError(1,0.352378);
   hdirt_stack_3->SetBinError(2,0.5912969);
   hdirt_stack_3->SetBinError(3,0.7350312);
   hdirt_stack_3->SetBinError(4,0.5412374);
   hdirt_stack_3->SetBinError(5,1.226715);
   hdirt_stack_3->SetBinError(6,0.9335047);
   hdirt_stack_3->SetBinError(7,0.800072);
   hdirt_stack_3->SetBinError(8,0.4672859);
   hdirt_stack_3->SetBinError(9,0.7367752);
   hdirt_stack_3->SetBinError(10,0.8108443);
   hdirt_stack_3->SetBinError(11,0.5715167);
   hdirt_stack_3->SetBinError(12,0.6292002);
   hdirt_stack_3->SetBinError(13,1.326065);
   hdirt_stack_3->SetBinError(14,0.7867921);
   hdirt_stack_3->SetBinError(15,0.678766);
   hdirt_stack_3->SetBinError(16,0.8472775);
   hdirt_stack_3->SetBinError(17,0.8908155);
   hdirt_stack_3->SetBinError(18,1.128301);
   hdirt_stack_3->SetBinError(19,1.009236);
   hdirt_stack_3->SetBinError(20,1.293292);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,11.03421);
   houtFV_stack_4->SetBinContent(2,12.1021);
   houtFV_stack_4->SetBinContent(3,12.50672);
   houtFV_stack_4->SetBinContent(4,15.55556);
   houtFV_stack_4->SetBinContent(5,15.584);
   houtFV_stack_4->SetBinContent(6,12.81091);
   houtFV_stack_4->SetBinContent(7,13.3247);
   houtFV_stack_4->SetBinContent(8,13.59373);
   houtFV_stack_4->SetBinContent(9,16.43522);
   houtFV_stack_4->SetBinContent(10,17.19723);
   houtFV_stack_4->SetBinContent(11,17.65358);
   houtFV_stack_4->SetBinContent(12,16.52592);
   houtFV_stack_4->SetBinContent(13,17.38482);
   houtFV_stack_4->SetBinContent(14,19.07482);
   houtFV_stack_4->SetBinContent(15,22.06345);
   houtFV_stack_4->SetBinContent(16,24.15199);
   houtFV_stack_4->SetBinContent(17,19.58813);
   houtFV_stack_4->SetBinContent(18,26.36334);
   houtFV_stack_4->SetBinContent(19,33.84935);
   houtFV_stack_4->SetBinContent(20,60.42361);
   houtFV_stack_4->SetBinError(1,1.604381);
   houtFV_stack_4->SetBinError(2,1.722331);
   houtFV_stack_4->SetBinError(3,1.782624);
   houtFV_stack_4->SetBinError(4,2.02164);
   houtFV_stack_4->SetBinError(5,1.968594);
   houtFV_stack_4->SetBinError(6,1.788866);
   houtFV_stack_4->SetBinError(7,1.770065);
   houtFV_stack_4->SetBinError(8,1.86949);
   houtFV_stack_4->SetBinError(9,2.033262);
   houtFV_stack_4->SetBinError(10,2.159281);
   houtFV_stack_4->SetBinError(11,2.102038);
   houtFV_stack_4->SetBinError(12,2.061163);
   houtFV_stack_4->SetBinError(13,2.076541);
   houtFV_stack_4->SetBinError(14,2.196376);
   houtFV_stack_4->SetBinError(15,2.383688);
   houtFV_stack_4->SetBinError(16,2.423838);
   houtFV_stack_4->SetBinError(17,2.228938);
   houtFV_stack_4->SetBinError(18,2.529117);
   houtFV_stack_4->SetBinError(19,2.903304);
   houtFV_stack_4->SetBinError(20,3.862851);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.485524);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.675752);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.666374);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.594044);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.74733);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.898952);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.240825);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.635562);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.86317);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.81866);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.968369);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.183024);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.270964);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.962895);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.313314);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.601188);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.365449);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.206946);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,7.504477);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,12.70286);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6533269);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5227108);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6370896);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4800137);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5236408);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5286339);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.742902);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4881876);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6458371);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6305907);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5367925);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6680541);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7670878);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7036172);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7846043);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.626462);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6888963);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8122679);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.972382);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.216944);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.269622);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5858997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9344858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6689357);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.772495);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.311972);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.073322);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.658726);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.617544);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.868812);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.924444);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.9768358);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.21399);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.882262);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.184753);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3747542);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1278538);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2560898);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1793726);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5343105);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4094153);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2880395);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3815298);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.4507425);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4928828);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4601427);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3045688);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.414298);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4661653);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2309144);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,108.3745);
   hNCpi0inFVres_stack_7->SetBinContent(2,100.7571);
   hNCpi0inFVres_stack_7->SetBinContent(3,109.8941);
   hNCpi0inFVres_stack_7->SetBinContent(4,104.5165);
   hNCpi0inFVres_stack_7->SetBinContent(5,102.9892);
   hNCpi0inFVres_stack_7->SetBinContent(6,105.7484);
   hNCpi0inFVres_stack_7->SetBinContent(7,113.8885);
   hNCpi0inFVres_stack_7->SetBinContent(8,104.1597);
   hNCpi0inFVres_stack_7->SetBinContent(9,110.9296);
   hNCpi0inFVres_stack_7->SetBinContent(10,112.9978);
   hNCpi0inFVres_stack_7->SetBinContent(11,119.3808);
   hNCpi0inFVres_stack_7->SetBinContent(12,116.908);
   hNCpi0inFVres_stack_7->SetBinContent(13,116.4713);
   hNCpi0inFVres_stack_7->SetBinContent(14,120.5544);
   hNCpi0inFVres_stack_7->SetBinContent(15,122.7484);
   hNCpi0inFVres_stack_7->SetBinContent(16,133.4906);
   hNCpi0inFVres_stack_7->SetBinContent(17,133.1463);
   hNCpi0inFVres_stack_7->SetBinContent(18,144.4783);
   hNCpi0inFVres_stack_7->SetBinContent(19,158.5107);
   hNCpi0inFVres_stack_7->SetBinContent(20,230.1668);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,3.443647);
   hNCpi0inFVres_stack_7->SetBinError(2,3.274993);
   hNCpi0inFVres_stack_7->SetBinError(3,3.44148);
   hNCpi0inFVres_stack_7->SetBinError(4,3.361681);
   hNCpi0inFVres_stack_7->SetBinError(5,3.273878);
   hNCpi0inFVres_stack_7->SetBinError(6,3.331306);
   hNCpi0inFVres_stack_7->SetBinError(7,3.558212);
   hNCpi0inFVres_stack_7->SetBinError(8,3.253547);
   hNCpi0inFVres_stack_7->SetBinError(9,3.484107);
   hNCpi0inFVres_stack_7->SetBinError(10,3.480959);
   hNCpi0inFVres_stack_7->SetBinError(11,3.580166);
   hNCpi0inFVres_stack_7->SetBinError(12,3.556025);
   hNCpi0inFVres_stack_7->SetBinError(13,3.525731);
   hNCpi0inFVres_stack_7->SetBinError(14,3.603698);
   hNCpi0inFVres_stack_7->SetBinError(15,3.597392);
   hNCpi0inFVres_stack_7->SetBinError(16,3.830497);
   hNCpi0inFVres_stack_7->SetBinError(17,3.715886);
   hNCpi0inFVres_stack_7->SetBinError(18,3.970966);
   hNCpi0inFVres_stack_7->SetBinError(19,4.115712);
   hNCpi0inFVres_stack_7->SetBinError(20,4.988901);
   hNCpi0inFVres_stack_7->SetBinError(21,0.05579997);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,21.11441);
   hNCpi0inFVdis_stack_8->SetBinContent(2,21.11142);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.69731);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.29493);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.47451);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.83392);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.05652);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.54144);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.73958);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.94293);
   hNCpi0inFVdis_stack_8->SetBinContent(11,20.46871);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.42115);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.79073);
   hNCpi0inFVdis_stack_8->SetBinContent(14,22.0429);
   hNCpi0inFVdis_stack_8->SetBinContent(15,23.29209);
   hNCpi0inFVdis_stack_8->SetBinContent(16,27.73554);
   hNCpi0inFVdis_stack_8->SetBinContent(17,25.14099);
   hNCpi0inFVdis_stack_8->SetBinContent(18,29.93085);
   hNCpi0inFVdis_stack_8->SetBinContent(19,29.76526);
   hNCpi0inFVdis_stack_8->SetBinContent(20,43.63062);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.516741);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.512929);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.424439);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.53576);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.337369);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.512265);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.369364);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.372581);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.530746);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.497652);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.440312);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.555903);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.496829);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.482721);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.513079);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.728409);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.630554);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.82649);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.764548);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.111912);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,33.96427);
   hCCpi0inFV_stack_10->SetBinContent(2,33.19294);
   hCCpi0inFV_stack_10->SetBinContent(3,36.56184);
   hCCpi0inFV_stack_10->SetBinContent(4,39.81407);
   hCCpi0inFV_stack_10->SetBinContent(5,37.3452);
   hCCpi0inFV_stack_10->SetBinContent(6,35.1923);
   hCCpi0inFV_stack_10->SetBinContent(7,37.23946);
   hCCpi0inFV_stack_10->SetBinContent(8,39.47693);
   hCCpi0inFV_stack_10->SetBinContent(9,29.9781);
   hCCpi0inFV_stack_10->SetBinContent(10,33.24177);
   hCCpi0inFV_stack_10->SetBinContent(11,37.25352);
   hCCpi0inFV_stack_10->SetBinContent(12,35.17252);
   hCCpi0inFV_stack_10->SetBinContent(13,38.553);
   hCCpi0inFV_stack_10->SetBinContent(14,35.37017);
   hCCpi0inFV_stack_10->SetBinContent(15,35.56957);
   hCCpi0inFV_stack_10->SetBinContent(16,35.27507);
   hCCpi0inFV_stack_10->SetBinContent(17,47.18187);
   hCCpi0inFV_stack_10->SetBinContent(18,42.63647);
   hCCpi0inFV_stack_10->SetBinContent(19,44.20308);
   hCCpi0inFV_stack_10->SetBinContent(20,68.69909);
   hCCpi0inFV_stack_10->SetBinError(1,2.925565);
   hCCpi0inFV_stack_10->SetBinError(2,2.896049);
   hCCpi0inFV_stack_10->SetBinError(3,3.005724);
   hCCpi0inFV_stack_10->SetBinError(4,3.157623);
   hCCpi0inFV_stack_10->SetBinError(5,3.057347);
   hCCpi0inFV_stack_10->SetBinError(6,2.977588);
   hCCpi0inFV_stack_10->SetBinError(7,3.037168);
   hCCpi0inFV_stack_10->SetBinError(8,3.12397);
   hCCpi0inFV_stack_10->SetBinError(9,2.772568);
   hCCpi0inFV_stack_10->SetBinError(10,2.819536);
   hCCpi0inFV_stack_10->SetBinError(11,3.028198);
   hCCpi0inFV_stack_10->SetBinError(12,2.956118);
   hCCpi0inFV_stack_10->SetBinError(13,3.173991);
   hCCpi0inFV_stack_10->SetBinError(14,3.031);
   hCCpi0inFV_stack_10->SetBinError(15,2.95328);
   hCCpi0inFV_stack_10->SetBinError(16,2.963533);
   hCCpi0inFV_stack_10->SetBinError(17,3.503301);
   hCCpi0inFV_stack_10->SetBinError(18,3.305324);
   hCCpi0inFV_stack_10->SetBinError(19,3.288479);
   hCCpi0inFV_stack_10->SetBinError(20,4.150274);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,22.57412);
   hNCinFV_stack_11->SetBinContent(2,24.8119);
   hNCinFV_stack_11->SetBinContent(3,18.23587);
   hNCinFV_stack_11->SetBinContent(4,19.21099);
   hNCinFV_stack_11->SetBinContent(5,22.23334);
   hNCinFV_stack_11->SetBinContent(6,22.81069);
   hNCinFV_stack_11->SetBinContent(7,16.42509);
   hNCinFV_stack_11->SetBinContent(8,20.94376);
   hNCinFV_stack_11->SetBinContent(9,22.41436);
   hNCinFV_stack_11->SetBinContent(10,19.4379);
   hNCinFV_stack_11->SetBinContent(11,21.74185);
   hNCinFV_stack_11->SetBinContent(12,17.50564);
   hNCinFV_stack_11->SetBinContent(13,17.41036);
   hNCinFV_stack_11->SetBinContent(14,18.21173);
   hNCinFV_stack_11->SetBinContent(15,18.96102);
   hNCinFV_stack_11->SetBinContent(16,19.15098);
   hNCinFV_stack_11->SetBinContent(17,20.84571);
   hNCinFV_stack_11->SetBinContent(18,22.759);
   hNCinFV_stack_11->SetBinContent(19,29.42318);
   hNCinFV_stack_11->SetBinContent(20,43.52127);
   hNCinFV_stack_11->SetBinError(1,2.387809);
   hNCinFV_stack_11->SetBinError(2,2.536662);
   hNCinFV_stack_11->SetBinError(3,2.123344);
   hNCinFV_stack_11->SetBinError(4,2.167663);
   hNCinFV_stack_11->SetBinError(5,2.321053);
   hNCinFV_stack_11->SetBinError(6,2.357725);
   hNCinFV_stack_11->SetBinError(7,2.001329);
   hNCinFV_stack_11->SetBinError(8,2.330034);
   hNCinFV_stack_11->SetBinError(9,2.411766);
   hNCinFV_stack_11->SetBinError(10,2.210993);
   hNCinFV_stack_11->SetBinError(11,2.321606);
   hNCinFV_stack_11->SetBinError(12,2.077691);
   hNCinFV_stack_11->SetBinError(13,2.049259);
   hNCinFV_stack_11->SetBinError(14,2.212671);
   hNCinFV_stack_11->SetBinError(15,2.167578);
   hNCinFV_stack_11->SetBinError(16,2.175877);
   hNCinFV_stack_11->SetBinError(17,2.347131);
   hNCinFV_stack_11->SetBinError(18,2.394931);
   hNCinFV_stack_11->SetBinError(19,2.7274);
   hNCinFV_stack_11->SetBinError(20,3.336468);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,17.77828);
   hnumuCCinFV_stack_12->SetBinContent(2,12.95553);
   hnumuCCinFV_stack_12->SetBinContent(3,17.62363);
   hnumuCCinFV_stack_12->SetBinContent(4,17.34915);
   hnumuCCinFV_stack_12->SetBinContent(5,13.93514);
   hnumuCCinFV_stack_12->SetBinContent(6,20.6936);
   hnumuCCinFV_stack_12->SetBinContent(7,13.11793);
   hnumuCCinFV_stack_12->SetBinContent(8,14.67906);
   hnumuCCinFV_stack_12->SetBinContent(9,18.21453);
   hnumuCCinFV_stack_12->SetBinContent(10,14.354);
   hnumuCCinFV_stack_12->SetBinContent(11,18.62069);
   hnumuCCinFV_stack_12->SetBinContent(12,19.0038);
   hnumuCCinFV_stack_12->SetBinContent(13,21.65497);
   hnumuCCinFV_stack_12->SetBinContent(14,17.9017);
   hnumuCCinFV_stack_12->SetBinContent(15,16.24633);
   hnumuCCinFV_stack_12->SetBinContent(16,23.09577);
   hnumuCCinFV_stack_12->SetBinContent(17,31.00763);
   hnumuCCinFV_stack_12->SetBinContent(18,29.26801);
   hnumuCCinFV_stack_12->SetBinContent(19,46.06104);
   hnumuCCinFV_stack_12->SetBinContent(20,55.84303);
   hnumuCCinFV_stack_12->SetBinError(1,2.738465);
   hnumuCCinFV_stack_12->SetBinError(2,1.889842);
   hnumuCCinFV_stack_12->SetBinError(3,2.259908);
   hnumuCCinFV_stack_12->SetBinError(4,2.189606);
   hnumuCCinFV_stack_12->SetBinError(5,2.022362);
   hnumuCCinFV_stack_12->SetBinError(6,2.532575);
   hnumuCCinFV_stack_12->SetBinError(7,1.959637);
   hnumuCCinFV_stack_12->SetBinError(8,2.046791);
   hnumuCCinFV_stack_12->SetBinError(9,2.646269);
   hnumuCCinFV_stack_12->SetBinError(10,1.961068);
   hnumuCCinFV_stack_12->SetBinError(11,2.468915);
   hnumuCCinFV_stack_12->SetBinError(12,2.557343);
   hnumuCCinFV_stack_12->SetBinError(13,2.707123);
   hnumuCCinFV_stack_12->SetBinError(14,2.364617);
   hnumuCCinFV_stack_12->SetBinError(15,2.171753);
   hnumuCCinFV_stack_12->SetBinError(16,2.935383);
   hnumuCCinFV_stack_12->SetBinError(17,3.43403);
   hnumuCCinFV_stack_12->SetBinError(18,3.098517);
   hnumuCCinFV_stack_12->SetBinError(19,4.615183);
   hnumuCCinFV_stack_12->SetBinError(20,4.225418);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,2.608347);
   hnueCCinFV_stack_13->SetBinContent(2,1.073786);
   hnueCCinFV_stack_13->SetBinContent(3,0.7793396);
   hnueCCinFV_stack_13->SetBinContent(4,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(5,0.7827686);
   hnueCCinFV_stack_13->SetBinContent(6,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.251764);
   hnueCCinFV_stack_13->SetBinContent(9,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(10,0.5369257);
   hnueCCinFV_stack_13->SetBinContent(12,0.742202);
   hnueCCinFV_stack_13->SetBinContent(13,1.276544);
   hnueCCinFV_stack_13->SetBinContent(14,2.199515);
   hnueCCinFV_stack_13->SetBinContent(15,1.761066);
   hnueCCinFV_stack_13->SetBinContent(16,2.715637);
   hnueCCinFV_stack_13->SetBinContent(17,4.329781);
   hnueCCinFV_stack_13->SetBinContent(18,3.491962);
   hnueCCinFV_stack_13->SetBinContent(19,4.10657);
   hnueCCinFV_stack_13->SetBinContent(20,11.98825);
   hnueCCinFV_stack_13->SetBinError(1,1.456281);
   hnueCCinFV_stack_13->SetBinError(2,0.5557297);
   hnueCCinFV_stack_13->SetBinError(3,0.4619074);
   hnueCCinFV_stack_13->SetBinError(4,0.4814682);
   hnueCCinFV_stack_13->SetBinError(5,0.4785163);
   hnueCCinFV_stack_13->SetBinError(6,0.4379386);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.5894075);
   hnueCCinFV_stack_13->SetBinError(9,0.2451269);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.4287931);
   hnueCCinFV_stack_13->SetBinError(13,0.6422743);
   hnueCCinFV_stack_13->SetBinError(14,0.8317697);
   hnueCCinFV_stack_13->SetBinError(15,0.6843881);
   hnueCCinFV_stack_13->SetBinError(16,0.9187014);
   hnueCCinFV_stack_13->SetBinError(17,1.470962);
   hnueCCinFV_stack_13->SetBinError(18,1.045303);
   hnueCCinFV_stack_13->SetBinError(19,1.151605);
   hnueCCinFV_stack_13->SetBinError(20,2.429099);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__5->SetBinContent(1,248.6724);
   hmcerror__5->SetBinContent(2,241.0428);
   hmcerror__5->SetBinContent(3,241.1694);
   hmcerror__5->SetBinContent(4,242.2132);
   hmcerror__5->SetBinContent(5,240.8498);
   hmcerror__5->SetBinContent(6,251.5552);
   hmcerror__5->SetBinContent(7,236.3619);
   hmcerror__5->SetBinContent(8,251.2649);
   hmcerror__5->SetBinContent(9,255.216);
   hmcerror__5->SetBinContent(10,250.0809);
   hmcerror__5->SetBinContent(11,261.4738);
   hmcerror__5->SetBinContent(12,265.2722);
   hmcerror__5->SetBinContent(13,274.6031);
   hmcerror__5->SetBinContent(14,269.1963);
   hmcerror__5->SetBinContent(15,273.6796);
   hmcerror__5->SetBinContent(16,307.6716);
   hmcerror__5->SetBinContent(17,324.3937);
   hmcerror__5->SetBinContent(18,355.6485);
   hmcerror__5->SetBinContent(19,404.0305);
   hmcerror__5->SetBinContent(20,594.2203);
   hmcerror__5->SetBinContent(21,0.1394999);
   hmcerror__5->SetBinError(1,75.12466);
   hmcerror__5->SetBinError(2,71.33607);
   hmcerror__5->SetBinError(3,73.53441);
   hmcerror__5->SetBinError(4,72.46038);
   hmcerror__5->SetBinError(5,69.81629);
   hmcerror__5->SetBinError(6,69.72139);
   hmcerror__5->SetBinError(7,73.6298);
   hmcerror__5->SetBinError(8,69.97584);
   hmcerror__5->SetBinError(9,69.64752);
   hmcerror__5->SetBinError(10,68.24584);
   hmcerror__5->SetBinError(11,76.52714);
   hmcerror__5->SetBinError(12,70.3007);
   hmcerror__5->SetBinError(13,75.0319);
   hmcerror__5->SetBinError(14,75.98099);
   hmcerror__5->SetBinError(15,79.57403);
   hmcerror__5->SetBinError(16,79.97241);
   hmcerror__5->SetBinError(17,82.73493);
   hmcerror__5->SetBinError(18,88.37553);
   hmcerror__5->SetBinError(19,99.02467);
   hmcerror__5->SetBinError(20,134.066);
   hmcerror__5->SetBinError(21,0.5511715);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3005[20] = {
   201,
   212,
   232,
   197,
   220,
   198,
   190,
   219,
   215,
   212,
   187,
   246,
   241,
   211,
   253,
   262,
   258,
   318,
   338,
   564};
   Double_t _felx3005[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3005[20] = {
   14.17745,
   14.56022,
   15.23155,
   14.03567,
   14.8324,
   14.07125,
   13.78405,
   14.79865,
   14.66288,
   14.56022,
   13.67479,
   15.68439,
   15.52417,
   14.52584,
   15.90597,
   16.18641,
   16.06238,
   17.83255,
   18.38478,
   23.74868};
   Double_t _fehx3005[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3005[20] = {
   14.17745,
   14.56022,
   15.23155,
   14.03567,
   14.8324,
   14.07125,
   13.78405,
   14.79865,
   14.66288,
   14.56022,
   13.67479,
   15.68439,
   15.52417,
   14.52584,
   15.90597,
   16.18641,
   16.06238,
   17.83255,
   18.38478,
   23.74868};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1.1);
   Graph_Graph3005->SetMinimum(131.8829);
   Graph_Graph3005->SetMaximum(629.191);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.1","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   
   Double_t _fx3006[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3006[20] = {
   0.302103,
   0.2959477,
   0.3049076,
   0.2991595,
   0.2898748,
   0.2771613,
   0.311513,
   0.2784943,
   0.2728963,
   0.272895,
   0.2926762,
   0.2650135,
   0.2732376,
   0.2822513,
   0.2907562,
   0.2599278,
   0.2550448,
   0.2484912,
   0.245092,
   0.2256167};
   Double_t _fehx3006[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3006[20] = {
   0.302103,
   0.2959477,
   0.3049076,
   0.2991595,
   0.2898748,
   0.2771613,
   0.311513,
   0.2784943,
   0.2728963,
   0.272895,
   0.2926762,
   0.2650135,
   0.2732376,
   0.2822513,
   0.2907562,
   0.2599278,
   0.2550448,
   0.2484912,
   0.245092,
   0.2256167};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1.1);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3007[20] = {
   0.262683,
   0.2698912,
   0.2773225,
   0.2699554,
   0.268882,
   0.2553795,
   0.2811437,
   0.2498549,
   0.2527401,
   0.2535396,
   0.2506523,
   0.2444619,
   0.2494291,
   0.2519145,
   0.2473106,
   0.2424975,
   0.2277473,
   0.2292306,
   0.2219848,
   0.2106943};
   Double_t _fehx3007[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3007[20] = {
   0.262683,
   0.2698912,
   0.2773225,
   0.2699554,
   0.268882,
   0.2553795,
   0.2811437,
   0.2498549,
   0.2527401,
   0.2535396,
   0.2506523,
   0.2444619,
   0.2494291,
   0.2519145,
   0.2473106,
   0.2424975,
   0.2277473,
   0.2292306,
   0.2219848,
   0.2106943};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1.1);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3008[20] = {
   0.8082924,
   0.8795118,
   0.9619792,
   0.813333,
   0.9134324,
   0.7871035,
   0.8038521,
   0.87159,
   0.8424236,
   0.8477256,
   0.7151769,
   0.9273495,
   0.8776303,
   0.7838148,
   0.9244388,
   0.8515574,
   0.7953298,
   0.8941413,
   0.8365705,
   0.9491429};
   Double_t _felx3008[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3008[20] = {
   0.05701255,
   0.06040512,
   0.06315703,
   0.05794757,
   0.0615836,
   0.05593701,
   0.05831756,
   0.05889659,
   0.05745281,
   0.05822203,
   0.05229892,
   0.05912564,
   0.05653314,
   0.05396003,
   0.05811897,
   0.05260939,
   0.04951507,
   0.05014096,
   0.04550343,
   0.03996612};
   Double_t _fehx3008[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3008[20] = {
   0.05701255,
   0.06040512,
   0.06315703,
   0.05794757,
   0.0615836,
   0.05593701,
   0.05831756,
   0.05889659,
   0.05745281,
   0.05822203,
   0.05229892,
   0.05912564,
   0.05653314,
   0.05396003,
   0.05811897,
   0.05260939,
   0.04951507,
   0.05014096,
   0.04550343,
   0.03996612};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1.1);
   Graph_Graph3008->SetMinimum(0.6266522);
   Graph_Graph3008->SetMaximum(1.061362);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_costheta_CM_all",20,0,1);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,1,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

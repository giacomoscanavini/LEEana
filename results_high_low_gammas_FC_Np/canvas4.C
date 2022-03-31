void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar 31 00:48:08 2022) by ROOT version 6.14/06
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
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
   pad1->Range(-27.69231,-0.3280197,203.0769,27.63997);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmc__10->SetBinContent(1,2.378481);
   hmc__10->SetBinContent(2,7.655197);
   hmc__10->SetBinContent(3,10.1801);
   hmc__10->SetBinContent(4,12.73701);
   hmc__10->SetBinContent(5,15.73383);
   hmc__10->SetBinContent(6,15.06698);
   hmc__10->SetBinContent(7,15.72753);
   hmc__10->SetBinContent(8,16.40098);
   hmc__10->SetBinContent(9,15.52146);
   hmc__10->SetBinContent(10,14.11702);
   hmc__10->SetBinContent(11,13.367);
   hmc__10->SetBinContent(12,13.02468);
   hmc__10->SetBinContent(13,13.32746);
   hmc__10->SetBinContent(14,12.25037);
   hmc__10->SetBinContent(15,10.28577);
   hmc__10->SetBinContent(16,10.38377);
   hmc__10->SetBinContent(17,8.477783);
   hmc__10->SetBinContent(18,8.768014);
   hmc__10->SetBinContent(19,7.603394);
   hmc__10->SetBinContent(20,7.029859);
   hmc__10->SetBinContent(21,5.728339);
   hmc__10->SetBinContent(22,4.591682);
   hmc__10->SetBinContent(23,2.685196);
   hmc__10->SetBinContent(24,0.7712006);
   hmc__10->SetBinError(1,1.710104);
   hmc__10->SetBinError(2,2.821115);
   hmc__10->SetBinError(3,3.752616);
   hmc__10->SetBinError(4,4.039685);
   hmc__10->SetBinError(5,5.073932);
   hmc__10->SetBinError(6,5.926887);
   hmc__10->SetBinError(7,5.704745);
   hmc__10->SetBinError(8,4.999465);
   hmc__10->SetBinError(9,5.240465);
   hmc__10->SetBinError(10,4.914113);
   hmc__10->SetBinError(11,4.390467);
   hmc__10->SetBinError(12,4.355535);
   hmc__10->SetBinError(13,4.251737);
   hmc__10->SetBinError(14,4.018812);
   hmc__10->SetBinError(15,3.524915);
   hmc__10->SetBinError(16,3.50422);
   hmc__10->SetBinError(17,3.307877);
   hmc__10->SetBinError(18,2.805933);
   hmc__10->SetBinError(19,3.140713);
   hmc__10->SetBinError(20,2.864061);
   hmc__10->SetBinError(21,2.330896);
   hmc__10->SetBinError(22,1.800847);
   hmc__10->SetBinError(23,2.195505);
   hmc__10->SetBinError(24,0.5158742);
   hmc__10->SetBinError(25,0.125509);
   hmc__10->SetMinimum(-0.3280197);
   hmc__10->SetMaximum(26.24157);
   hmc__10->SetEntries(240.4242);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetLabelSize(0.035);
   hmc__10->GetXaxis()->SetTitleSize(0.035);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetLabelSize(0.035);
   hmc__10->GetZaxis()->SetTitleSize(0.035);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,180);
   hs4_stack_4->SetMinimum(-6.202043e-09);
   hs4_stack_4->SetMaximum(17.22104);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.0127502);
   hbadmatch_stack_1->SetBinContent(2,0.06195629);
   hbadmatch_stack_1->SetBinContent(3,0.07470649);
   hbadmatch_stack_1->SetBinContent(4,0.1129571);
   hbadmatch_stack_1->SetBinContent(5,0.06195629);
   hbadmatch_stack_1->SetBinContent(6,0.3341003);
   hbadmatch_stack_1->SetBinContent(7,0.05100079);
   hbadmatch_stack_1->SetBinContent(8,0.4176);
   hbadmatch_stack_1->SetBinContent(9,0.276272);
   hbadmatch_stack_1->SetBinContent(10,0.54725);
   hbadmatch_stack_1->SetBinContent(11,0.308504);
   hbadmatch_stack_1->SetBinContent(12,0.305912);
   hbadmatch_stack_1->SetBinContent(13,0.1307413);
   hbadmatch_stack_1->SetBinContent(14,0.3071541);
   hbadmatch_stack_1->SetBinContent(15,0.1081132);
   hbadmatch_stack_1->SetBinContent(16,0.2520894);
   hbadmatch_stack_1->SetBinContent(17,0.2437702);
   hbadmatch_stack_1->SetBinContent(19,0.2733329);
   hbadmatch_stack_1->SetBinContent(20,0.06195629);
   hbadmatch_stack_1->SetBinContent(21,0.05100079);
   hbadmatch_stack_1->SetBinContent(22,0.07470649);
   hbadmatch_stack_1->SetBinContent(23,0.06195629);
   hbadmatch_stack_1->SetBinError(1,0.0127502);
   hbadmatch_stack_1->SetBinError(2,0.06195629);
   hbadmatch_stack_1->SetBinError(3,0.06325464);
   hbadmatch_stack_1->SetBinError(4,0.0669989);
   hbadmatch_stack_1->SetBinError(5,0.06195629);
   hbadmatch_stack_1->SetBinError(6,0.132802);
   hbadmatch_stack_1->SetBinError(7,0.02550039);
   hbadmatch_stack_1->SetBinError(8,0.1510374);
   hbadmatch_stack_1->SetBinError(9,0.1188332);
   hbadmatch_stack_1->SetBinError(10,0.3671331);
   hbadmatch_stack_1->SetBinError(11,0.130482);
   hbadmatch_stack_1->SetBinError(12,0.1352597);
   hbadmatch_stack_1->SetBinError(13,0.08109461);
   hbadmatch_stack_1->SetBinError(14,0.1383531);
   hbadmatch_stack_1->SetBinError(15,0.06745667);
   hbadmatch_stack_1->SetBinError(16,0.1113448);
   hbadmatch_stack_1->SetBinError(17,0.1341415);
   hbadmatch_stack_1->SetBinError(19,0.1252177);
   hbadmatch_stack_1->SetBinError(20,0.06195629);
   hbadmatch_stack_1->SetBinError(21,0.02550039);
   hbadmatch_stack_1->SetBinError(22,0.06325464);
   hbadmatch_stack_1->SetBinError(23,0.06195629);
   hbadmatch_stack_1->SetEntries(113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1461;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleOffset(0);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.211319);
   hext_stack_2->SetBinContent(2,0.6462268);
   hext_stack_2->SetBinContent(3,0.4717173);
   hext_stack_2->SetBinContent(4,1.093404);
   hext_stack_2->SetBinContent(5,0.09815882);
   hext_stack_2->SetBinContent(6,0.2726682);
   hext_stack_2->SetBinContent(7,0.6953062);
   hext_stack_2->SetBinContent(8,0.6830363);
   hext_stack_2->SetBinContent(9,0.9188949);
   hext_stack_2->SetBinContent(10,0.3217476);
   hext_stack_2->SetBinContent(11,0.1472382);
   hext_stack_2->SetBinContent(12,0.9434346);
   hext_stack_2->SetBinContent(13,0.9802442);
   hext_stack_2->SetBinContent(14,0.9311647);
   hext_stack_2->SetBinContent(15,0.6584966);
   hext_stack_2->SetBinContent(16,0.5453364);
   hext_stack_2->SetBinContent(17,0.4839872);
   hext_stack_2->SetBinContent(18,0.4717173);
   hext_stack_2->SetBinContent(19,0.02453971);
   hext_stack_2->SetBinContent(20,0.4349078);
   hext_stack_2->SetBinContent(21,0.4594475);
   hext_stack_2->SetBinContent(22,0.8207361);
   hext_stack_2->SetBinContent(23,0.02453971);
   hext_stack_2->SetBinContent(24,0.1990491);
   hext_stack_2->SetBinError(1,0.1994269);
   hext_stack_2->SetBinError(2,0.3456354);
   hext_stack_2->SetBinError(3,0.2830978);
   hext_stack_2->SetBinError(4,0.4464383);
   hext_stack_2->SetBinError(5,0.03470438);
   hext_stack_2->SetBinError(6,0.2013053);
   hext_stack_2->SetBinError(7,0.3465055);
   hext_stack_2->SetBinError(8,0.3462882);
   hext_stack_2->SetBinError(9,0.3999846);
   hext_stack_2->SetBinError(10,0.2027956);
   hext_stack_2->SetBinError(11,0.04250402);
   hext_stack_2->SetBinError(12,0.4003608);
   hext_stack_2->SetBinError(13,0.4009245);
   hext_stack_2->SetBinError(14,0.4001727);
   hext_stack_2->SetBinError(15,0.3458531);
   hext_stack_2->SetBinError(16,0.2846888);
   hext_stack_2->SetBinError(17,0.2833636);
   hext_stack_2->SetBinError(18,0.2830978);
   hext_stack_2->SetBinError(19,0.01735219);
   hext_stack_2->SetBinError(20,0.282299);
   hext_stack_2->SetBinError(21,0.2828318);
   hext_stack_2->SetBinError(22,0.3984762);
   hext_stack_2->SetBinError(23,0.01735219);
   hext_stack_2->SetBinError(24,0.1990491);
   hext_stack_2->SetEntries(215);

   ci = 1462;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetLabelSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetLabelSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleOffset(0);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetLabelSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(2,0.008219617);
   hdirt_stack_3->SetBinContent(4,0.05242869);
   hdirt_stack_3->SetBinContent(5,0.06064831);
   hdirt_stack_3->SetBinContent(6,0.06773126);
   hdirt_stack_3->SetBinContent(7,0.1119078);
   hdirt_stack_3->SetBinContent(8,0.306095);
   hdirt_stack_3->SetBinContent(9,0.05242869);
   hdirt_stack_3->SetBinContent(10,0.01643924);
   hdirt_stack_3->SetBinContent(11,0.01643923);
   hdirt_stack_3->SetBinContent(12,0.05901156);
   hdirt_stack_3->SetBinContent(14,0.06114161);
   hdirt_stack_3->SetBinContent(15,0.05414451);
   hdirt_stack_3->SetBinContent(16,0.08841814);
   hdirt_stack_3->SetBinContent(17,0.01800229);
   hdirt_stack_3->SetBinContent(18,0.05242869);
   hdirt_stack_3->SetBinContent(19,0.06932814);
   hdirt_stack_3->SetBinContent(20,0.05242869);
   hdirt_stack_3->SetBinContent(23,0.04420907);
   hdirt_stack_3->SetBinError(2,0.008219618);
   hdirt_stack_3->SetBinError(4,0.0449667);
   hdirt_stack_3->SetBinError(5,0.04571177);
   hdirt_stack_3->SetBinError(6,0.05259274);
   hdirt_stack_3->SetBinError(7,0.07339201);
   hdirt_stack_3->SetBinError(8,0.2979887);
   hdirt_stack_3->SetBinError(9,0.0449667);
   hdirt_stack_3->SetBinError(10,0.01162429);
   hdirt_stack_3->SetBinError(11,0.01162429);
   hdirt_stack_3->SetBinError(12,0.05145273);
   hdirt_stack_3->SetBinError(14,0.05355651);
   hdirt_stack_3->SetBinError(15,0.04529091);
   hdirt_stack_3->SetBinError(16,0.06252107);
   hdirt_stack_3->SetBinError(17,0.01277744);
   hdirt_stack_3->SetBinError(18,0.0449667);
   hdirt_stack_3->SetBinError(19,0.05415128);
   hdirt_stack_3->SetBinError(20,0.0449667);
   hdirt_stack_3->SetBinError(23,0.04420907);
   hdirt_stack_3->SetEntries(40);

   ci = 1463;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleOffset(0);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.07470649);
   houtFV_stack_4->SetBinContent(2,0.1986191);
   houtFV_stack_4->SetBinContent(3,0.4099883);
   houtFV_stack_4->SetBinContent(4,0.4615107);
   houtFV_stack_4->SetBinContent(5,0.8867986);
   houtFV_stack_4->SetBinContent(6,0.3168554);
   houtFV_stack_4->SetBinContent(7,0.497445);
   houtFV_stack_4->SetBinContent(8,0.7070196);
   houtFV_stack_4->SetBinContent(9,0.5958572);
   houtFV_stack_4->SetBinContent(10,0.3258844);
   houtFV_stack_4->SetBinContent(11,0.6578135);
   houtFV_stack_4->SetBinContent(12,0.2143882);
   houtFV_stack_4->SetBinContent(13,0.4845582);
   houtFV_stack_4->SetBinContent(14,0.2478252);
   houtFV_stack_4->SetBinContent(15,0.3755251);
   houtFV_stack_4->SetBinContent(16,0.2988259);
   houtFV_stack_4->SetBinContent(17,0.2885444);
   houtFV_stack_4->SetBinContent(18,0.6572944);
   houtFV_stack_4->SetBinContent(19,0.4741656);
   houtFV_stack_4->SetBinContent(20,0.2860757);
   houtFV_stack_4->SetBinContent(21,0.206689);
   houtFV_stack_4->SetBinContent(22,0.1366628);
   houtFV_stack_4->SetBinContent(23,0.07650118);
   houtFV_stack_4->SetBinContent(24,0.0127502);
   houtFV_stack_4->SetBinError(1,0.06325464);
   houtFV_stack_4->SetBinError(2,0.1080662);
   houtFV_stack_4->SetBinError(3,0.1533597);
   houtFV_stack_4->SetBinError(4,0.1607096);
   houtFV_stack_4->SetBinError(5,0.2233817);
   houtFV_stack_4->SetBinError(6,0.1150757);
   houtFV_stack_4->SetBinError(7,0.1663818);
   houtFV_stack_4->SetBinError(8,0.2062754);
   houtFV_stack_4->SetBinError(9,0.1871762);
   houtFV_stack_4->SetBinError(10,0.1279527);
   houtFV_stack_4->SetBinError(11,0.1971637);
   houtFV_stack_4->SetBinError(12,0.1092107);
   houtFV_stack_4->SetBinError(13,0.1638409);
   houtFV_stack_4->SetBinError(14,0.1239126);
   houtFV_stack_4->SetBinError(15,0.1416341);
   houtFV_stack_4->SetBinError(16,0.1265093);
   houtFV_stack_4->SetBinError(17,0.1261391);
   houtFV_stack_4->SetBinError(18,0.196837);
   houtFV_stack_4->SetBinError(19,0.1655879);
   houtFV_stack_4->SetBinError(20,0.1258651);
   houtFV_stack_4->SetBinError(21,0.1128867);
   houtFV_stack_4->SetBinError(22,0.08854226);
   houtFV_stack_4->SetBinError(23,0.03123147);
   houtFV_stack_4->SetBinError(24,0.0127502);
   houtFV_stack_4->SetEntries(218);

   ci = 1464;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleOffset(0);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,1.293716);
   hNCpi0inFV_stack_5->SetBinContent(2,4.777626);
   hNCpi0inFV_stack_5->SetBinContent(3,6.384941);
   hNCpi0inFV_stack_5->SetBinContent(4,7.000499);
   hNCpi0inFV_stack_5->SetBinContent(5,9.320176);
   hNCpi0inFV_stack_5->SetBinContent(6,10.27304);
   hNCpi0inFV_stack_5->SetBinContent(7,10.23644);
   hNCpi0inFV_stack_5->SetBinContent(8,10.01804);
   hNCpi0inFV_stack_5->SetBinContent(9,9.522385);
   hNCpi0inFV_stack_5->SetBinContent(10,8.766313);
   hNCpi0inFV_stack_5->SetBinContent(11,7.636401);
   hNCpi0inFV_stack_5->SetBinContent(12,7.960728);
   hNCpi0inFV_stack_5->SetBinContent(13,7.486988);
   hNCpi0inFV_stack_5->SetBinContent(14,6.944114);
   hNCpi0inFV_stack_5->SetBinContent(15,6.051226);
   hNCpi0inFV_stack_5->SetBinContent(16,6.242478);
   hNCpi0inFV_stack_5->SetBinContent(17,4.876038);
   hNCpi0inFV_stack_5->SetBinContent(18,5.063702);
   hNCpi0inFV_stack_5->SetBinContent(19,4.316637);
   hNCpi0inFV_stack_5->SetBinContent(20,4.190929);
   hNCpi0inFV_stack_5->SetBinContent(21,3.225129);
   hNCpi0inFV_stack_5->SetBinContent(22,2.365107);
   hNCpi0inFV_stack_5->SetBinContent(23,1.656293);
   hNCpi0inFV_stack_5->SetBinContent(24,0.4099883);
   hNCpi0inFV_stack_5->SetBinError(1,0.2671524);
   hNCpi0inFV_stack_5->SetBinError(2,0.5119815);
   hNCpi0inFV_stack_5->SetBinError(3,0.5915382);
   hNCpi0inFV_stack_5->SetBinError(4,0.6080555);
   hNCpi0inFV_stack_5->SetBinError(5,0.7134833);
   hNCpi0inFV_stack_5->SetBinError(6,0.7407059);
   hNCpi0inFV_stack_5->SetBinError(7,0.7424844);
   hNCpi0inFV_stack_5->SetBinError(8,0.7385078);
   hNCpi0inFV_stack_5->SetBinError(9,0.7174156);
   hNCpi0inFV_stack_5->SetBinError(10,0.6889271);
   hNCpi0inFV_stack_5->SetBinError(11,0.6342147);
   hNCpi0inFV_stack_5->SetBinError(12,0.6469606);
   hNCpi0inFV_stack_5->SetBinError(13,0.6278742);
   hNCpi0inFV_stack_5->SetBinError(14,0.6149458);
   hNCpi0inFV_stack_5->SetBinError(15,0.5692918);
   hNCpi0inFV_stack_5->SetBinError(16,0.5714295);
   hNCpi0inFV_stack_5->SetBinError(17,0.5191118);
   hNCpi0inFV_stack_5->SetBinError(18,0.5272258);
   hNCpi0inFV_stack_5->SetBinError(19,0.4878069);
   hNCpi0inFV_stack_5->SetBinError(20,0.4830157);
   hNCpi0inFV_stack_5->SetBinError(21,0.4149843);
   hNCpi0inFV_stack_5->SetBinError(22,0.3573677);
   hNCpi0inFV_stack_5->SetBinError(23,0.2969644);
   hNCpi0inFV_stack_5->SetBinError(24,0.1533597);
   hNCpi0inFV_stack_5->SetEntries(3845);

   ci = 1465;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleOffset(0);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.4218743);
   hCCpi0inFV_stack_6->SetBinContent(2,0.9711843);
   hCCpi0inFV_stack_6->SetBinContent(3,1.469946);
   hCCpi0inFV_stack_6->SetBinContent(4,2.515142);
   hCCpi0inFV_stack_6->SetBinContent(5,2.427814);
   hCCpi0inFV_stack_6->SetBinContent(6,2.320158);
   hCCpi0inFV_stack_6->SetBinContent(7,2.177444);
   hCCpi0inFV_stack_6->SetBinContent(8,2.829992);
   hCCpi0inFV_stack_6->SetBinContent(9,2.939587);
   hCCpi0inFV_stack_6->SetBinContent(10,2.090897);
   hCCpi0inFV_stack_6->SetBinContent(11,1.7565);
   hCCpi0inFV_stack_6->SetBinContent(12,1.817724);
   hCCpi0inFV_stack_6->SetBinContent(13,1.674421);
   hCCpi0inFV_stack_6->SetBinContent(14,1.68461);
   hCCpi0inFV_stack_6->SetBinContent(15,1.358379);
   hCCpi0inFV_stack_6->SetBinContent(16,1.461289);
   hCCpi0inFV_stack_6->SetBinContent(17,1.505085);
   hCCpi0inFV_stack_6->SetBinContent(18,1.507825);
   hCCpi0inFV_stack_6->SetBinContent(19,1.587458);
   hCCpi0inFV_stack_6->SetBinContent(20,1.289265);
   hCCpi0inFV_stack_6->SetBinContent(21,0.8709775);
   hCCpi0inFV_stack_6->SetBinContent(22,0.6359025);
   hCCpi0inFV_stack_6->SetBinContent(23,0.3405376);
   hCCpi0inFV_stack_6->SetBinContent(24,0.08745668);
   hCCpi0inFV_stack_6->SetBinError(1,0.1585348);
   hCCpi0inFV_stack_6->SetBinError(2,0.2280678);
   hCCpi0inFV_stack_6->SetBinError(3,0.284673);
   hCCpi0inFV_stack_6->SetBinError(4,0.3750819);
   hCCpi0inFV_stack_6->SetBinError(5,0.360485);
   hCCpi0inFV_stack_6->SetBinError(6,0.3547996);
   hCCpi0inFV_stack_6->SetBinError(7,0.3452849);
   hCCpi0inFV_stack_6->SetBinError(8,0.3957908);
   hCCpi0inFV_stack_6->SetBinError(9,0.3993251);
   hCCpi0inFV_stack_6->SetBinError(10,0.336869);
   hCCpi0inFV_stack_6->SetBinError(11,0.3041614);
   hCCpi0inFV_stack_6->SetBinError(12,0.3201331);
   hCCpi0inFV_stack_6->SetBinError(13,0.3091819);
   hCCpi0inFV_stack_6->SetBinError(14,0.2976454);
   hCCpi0inFV_stack_6->SetBinError(15,0.2657185);
   hCCpi0inFV_stack_6->SetBinError(16,0.2822906);
   hCCpi0inFV_stack_6->SetBinError(17,0.2884637);
   hCCpi0inFV_stack_6->SetBinError(18,0.286195);
   hCCpi0inFV_stack_6->SetBinError(19,0.299118);
   hCCpi0inFV_stack_6->SetBinError(20,0.2749295);
   hCCpi0inFV_stack_6->SetBinError(21,0.2183773);
   hCCpi0inFV_stack_6->SetBinError(22,0.180269);
   hCCpi0inFV_stack_6->SetBinError(23,0.128812);
   hCCpi0inFV_stack_6->SetBinError(24,0.06452687);
   hCCpi0inFV_stack_6->SetEntries(968);

   ci = 1466;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleOffset(0);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs4->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.0127502);
   hNCinFV_stack_7->SetBinContent(2,0.2004138);
   hNCinFV_stack_7->SetBinContent(3,0.6578135);
   hNCinFV_stack_7->SetBinContent(4,0.8217714);
   hNCinFV_stack_7->SetBinContent(5,1.031346);
   hNCinFV_stack_7->SetBinContent(6,0.5484458);
   hNCinFV_stack_7->SetBinContent(7,0.7215645);
   hNCinFV_stack_7->SetBinContent(8,0.4372834);
   hNCinFV_stack_7->SetBinContent(9,0.7817261);
   hNCinFV_stack_7->SetBinContent(10,0.4609891);
   hNCinFV_stack_7->SetBinContent(11,1.033141);
   hNCinFV_stack_7->SetBinContent(12,0.6596082);
   hNCinFV_stack_7->SetBinContent(13,0.5484458);
   hNCinFV_stack_7->SetBinContent(14,0.8327268);
   hNCinFV_stack_7->SetBinContent(15,0.7835208);
   hNCinFV_stack_7->SetBinContent(16,0.5739462);
   hNCinFV_stack_7->SetBinContent(17,0.475534);
   hNCinFV_stack_7->SetBinContent(18,0.4354887);
   hNCinFV_stack_7->SetBinContent(19,0.4099883);
   hNCinFV_stack_7->SetBinContent(20,0.1512077);
   hNCinFV_stack_7->SetBinContent(21,0.4846948);
   hNCinFV_stack_7->SetBinContent(22,0.1876636);
   hNCinFV_stack_7->SetBinContent(23,0.2733256);
   hNCinFV_stack_7->SetBinError(1,0.0127502);
   hNCinFV_stack_7->SetBinError(2,0.09301919);
   hNCinFV_stack_7->SetBinError(3,0.1971637);
   hNCinFV_stack_7->SetBinError(4,0.2097919);
   hNCinFV_stack_7->SetBinError(5,0.2426505);
   hNCinFV_stack_7->SetBinError(6,0.1683246);
   hNCinFV_stack_7->SetBinError(7,0.1992144);
   hNCinFV_stack_7->SetBinError(8,0.1442865);
   hNCinFV_stack_7->SetBinError(9,0.2157561);
   hNCinFV_stack_7->SetBinError(10,0.1554653);
   hNCinFV_stack_7->SetBinError(11,0.2363335);
   hNCinFV_stack_7->SetBinError(12,0.1893351);
   hNCinFV_stack_7->SetBinError(13,0.1683246);
   hNCinFV_stack_7->SetBinError(14,0.2172578);
   hNCinFV_stack_7->SetBinError(15,0.2086263);
   hNCinFV_stack_7->SetBinError(16,0.1692877);
   hNCinFV_stack_7->SetBinError(17,0.1459667);
   hNCinFV_stack_7->SetBinError(18,0.1544161);
   hNCinFV_stack_7->SetBinError(19,0.1533597);
   hNCinFV_stack_7->SetBinError(20,0.0705447);
   hNCinFV_stack_7->SetBinError(21,0.1658926);
   hNCinFV_stack_7->SetBinError(22,0.0921412);
   hNCinFV_stack_7->SetBinError(23,0.1252177);
   hNCinFV_stack_7->SetEntries(330);

   ci = 1467;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleOffset(0);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.2894085);
   hnumuCCinFV_stack_8->SetBinContent(2,0.6406735);
   hnumuCCinFV_stack_8->SetBinContent(3,0.6199496);
   hnumuCCinFV_stack_8->SetBinContent(4,0.665475);
   hnumuCCinFV_stack_8->SetBinContent(5,1.846934);
   hnumuCCinFV_stack_8->SetBinContent(6,0.9212279);
   hnumuCCinFV_stack_8->SetBinContent(7,1.099761);
   hnumuCCinFV_stack_8->SetBinContent(8,0.989172);
   hnumuCCinFV_stack_8->SetBinContent(9,0.4343109);
   hnumuCCinFV_stack_8->SetBinContent(10,1.487297);
   hnumuCCinFV_stack_8->SetBinContent(11,1.810966);
   hnumuCCinFV_stack_8->SetBinContent(12,1.063861);
   hnumuCCinFV_stack_8->SetBinContent(13,1.960107);
   hnumuCCinFV_stack_8->SetBinContent(14,1.228887);
   hnumuCCinFV_stack_8->SetBinContent(15,0.8344036);
   hnumuCCinFV_stack_8->SetBinContent(16,0.9086336);
   hnumuCCinFV_stack_8->SetBinContent(17,0.5868223);
   hnumuCCinFV_stack_8->SetBinContent(18,0.579558);
   hnumuCCinFV_stack_8->SetBinContent(19,0.4351935);
   hnumuCCinFV_stack_8->SetBinContent(20,0.5630882);
   hnumuCCinFV_stack_8->SetBinContent(21,0.4304002);
   hnumuCCinFV_stack_8->SetBinContent(22,0.3089474);
   hnumuCCinFV_stack_8->SetBinContent(23,0.2078333);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(1,0.1339067);
   hnumuCCinFV_stack_8->SetBinError(2,0.2072354);
   hnumuCCinFV_stack_8->SetBinError(3,0.2416689);
   hnumuCCinFV_stack_8->SetBinError(4,0.1910603);
   hnumuCCinFV_stack_8->SetBinError(5,0.5378411);
   hnumuCCinFV_stack_8->SetBinError(6,0.2452927);
   hnumuCCinFV_stack_8->SetBinError(7,0.2790175);
   hnumuCCinFV_stack_8->SetBinError(8,0.2558385);
   hnumuCCinFV_stack_8->SetBinError(9,0.144606);
   hnumuCCinFV_stack_8->SetBinError(10,0.3631422);
   hnumuCCinFV_stack_8->SetBinError(11,0.3936964);
   hnumuCCinFV_stack_8->SetBinError(12,0.2476752);
   hnumuCCinFV_stack_8->SetBinError(13,0.5006648);
   hnumuCCinFV_stack_8->SetBinError(14,0.3419386);
   hnumuCCinFV_stack_8->SetBinError(15,0.2276874);
   hnumuCCinFV_stack_8->SetBinError(16,0.2748277);
   hnumuCCinFV_stack_8->SetBinError(17,0.1965868);
   hnumuCCinFV_stack_8->SetBinError(18,0.1913771);
   hnumuCCinFV_stack_8->SetBinError(19,0.1506922);
   hnumuCCinFV_stack_8->SetBinError(20,0.174278);
   hnumuCCinFV_stack_8->SetBinError(21,0.1619535);
   hnumuCCinFV_stack_8->SetBinError(22,0.122931);
   hnumuCCinFV_stack_8->SetBinError(23,0.1226938);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetEntries(468);

   ci = 1468;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleOffset(0);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(2,0.150278);
   hnueCCinFV_stack_9->SetBinContent(3,0.09104282);
   hnueCCinFV_stack_9->SetBinContent(4,0.01382533);
   hnueCCinFV_stack_9->SetBinContent(6,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(7,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(8,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(10,0.1002069);
   hnueCCinFV_stack_9->SetBinContent(12,1.378697e-05);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(19,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(22,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.06195629);
   hnueCCinFV_stack_9->SetBinError(2,0.08959682);
   hnueCCinFV_stack_9->SetBinError(3,0.06528093);
   hnueCCinFV_stack_9->SetBinError(4,0.01382533);
   hnueCCinFV_stack_9->SetBinError(6,0.0127502);
   hnueCCinFV_stack_9->SetBinError(7,0.08854226);
   hnueCCinFV_stack_9->SetBinError(8,0.0127502);
   hnueCCinFV_stack_9->SetBinError(10,0.0657745);
   hnueCCinFV_stack_9->SetBinError(12,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(19,0.0127502);
   hnueCCinFV_stack_9->SetBinError(22,0.06195629);
   hnueCCinFV_stack_9->SetEntries(25);

   ci = 1469;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleOffset(0);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnueCCinFV_stack_9,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmcerror__11->SetBinContent(1,2.378481);
   hmcerror__11->SetBinContent(2,7.655197);
   hmcerror__11->SetBinContent(3,10.1801);
   hmcerror__11->SetBinContent(4,12.73701);
   hmcerror__11->SetBinContent(5,15.73383);
   hmcerror__11->SetBinContent(6,15.06698);
   hmcerror__11->SetBinContent(7,15.72753);
   hmcerror__11->SetBinContent(8,16.40098);
   hmcerror__11->SetBinContent(9,15.52146);
   hmcerror__11->SetBinContent(10,14.11702);
   hmcerror__11->SetBinContent(11,13.367);
   hmcerror__11->SetBinContent(12,13.02468);
   hmcerror__11->SetBinContent(13,13.32746);
   hmcerror__11->SetBinContent(14,12.25037);
   hmcerror__11->SetBinContent(15,10.28577);
   hmcerror__11->SetBinContent(16,10.38377);
   hmcerror__11->SetBinContent(17,8.477783);
   hmcerror__11->SetBinContent(18,8.768014);
   hmcerror__11->SetBinContent(19,7.603394);
   hmcerror__11->SetBinContent(20,7.029859);
   hmcerror__11->SetBinContent(21,5.728339);
   hmcerror__11->SetBinContent(22,4.591682);
   hmcerror__11->SetBinContent(23,2.685196);
   hmcerror__11->SetBinContent(24,0.7712006);
   hmcerror__11->SetBinError(1,1.710104);
   hmcerror__11->SetBinError(2,2.821115);
   hmcerror__11->SetBinError(3,3.752616);
   hmcerror__11->SetBinError(4,4.039685);
   hmcerror__11->SetBinError(5,5.073932);
   hmcerror__11->SetBinError(6,5.926887);
   hmcerror__11->SetBinError(7,5.704745);
   hmcerror__11->SetBinError(8,4.999465);
   hmcerror__11->SetBinError(9,5.240465);
   hmcerror__11->SetBinError(10,4.914113);
   hmcerror__11->SetBinError(11,4.390467);
   hmcerror__11->SetBinError(12,4.355535);
   hmcerror__11->SetBinError(13,4.251737);
   hmcerror__11->SetBinError(14,4.018812);
   hmcerror__11->SetBinError(15,3.524915);
   hmcerror__11->SetBinError(16,3.50422);
   hmcerror__11->SetBinError(17,3.307877);
   hmcerror__11->SetBinError(18,2.805933);
   hmcerror__11->SetBinError(19,3.140713);
   hmcerror__11->SetBinError(20,2.864061);
   hmcerror__11->SetBinError(21,2.330896);
   hmcerror__11->SetBinError(22,1.800847);
   hmcerror__11->SetBinError(23,2.195505);
   hmcerror__11->SetBinError(24,0.5158742);
   hmcerror__11->SetBinError(25,0.125509);
   hmcerror__11->SetEntries(240.4242);

   ci = TColor::GetColor("#666666");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetLabelSize(0.035);
   hmcerror__11->GetXaxis()->SetTitleSize(0.035);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetLabelSize(0.035);
   hmcerror__11->GetYaxis()->SetTitleSize(0.035);
   hmcerror__11->GetYaxis()->SetTitleOffset(0);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetLabelSize(0.035);
   hmcerror__11->GetZaxis()->SetTitleSize(0.035);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3013[24] = {
   3,
   6,
   5,
   9,
   11,
   13,
   7,
   10,
   8,
   3,
   12,
   9,
   5,
   4,
   5,
   12,
   6,
   10,
   4,
   2,
   7,
   2,
   3,
   0};
   Double_t _felx3013[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3013[24] = {
   2.143368,
   2.67925,
   2.48995,
   3.19354,
   3.4975,
   3.77763,
   2.85954,
   3.34883,
   3.0307,
   2.143368,
   3.64022,
   3.19354,
   2.48995,
   2.29683,
   2.48995,
   3.64022,
   2.67925,
   3.34883,
   2.29683,
   2,
   2.85954,
   2,
   2.143368,
   0};
   Double_t _fehx3013[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3013[24] = {
   1.72422,
   2.41858,
   2.21064,
   2.9582,
   3.27,
   3.5552,
   2.61053,
   3.1179,
   2.7896,
   1.72422,
   3.4155,
   2.9582,
   2.21064,
   1.98186,
   2.21064,
   3.4155,
   2.41858,
   3.1179,
   1.98186,
   1.51917,
   2.61053,
   1.51917,
   1.72422,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,198);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(18.21072);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.64#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.53/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 156.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

   ci = 1461;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

   ci = 1462;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1463;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.9","F");

   ci = 1464;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  146.0","F");

   ci = 1465;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 37.7","F");

   ci = 1466;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.5","F");

   ci = 1467;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 20.0","F");

   ci = 1468;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

   ci = 1469;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3014[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3014[24] = {
   0.7189901,
   0.3685229,
   0.3686226,
   0.3171611,
   0.3224854,
   0.3933693,
   0.3627234,
   0.3048271,
   0.337627,
   0.3480984,
   0.3284556,
   0.3344063,
   0.3190207,
   0.3280563,
   0.3426983,
   0.337471,
   0.3901818,
   0.3200192,
   0.4130673,
   0.4074137,
   0.4069061,
   0.3921977,
   0.8176331,
   0.6689234};
   Double_t _fehx3014[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3014[24] = {
   0.7189901,
   0.3685229,
   0.3686226,
   0.3171611,
   0.3224854,
   0.3933693,
   0.3627234,
   0.3048271,
   0.337627,
   0.3480984,
   0.3284556,
   0.3344063,
   0.3190207,
   0.3280563,
   0.3426983,
   0.337471,
   0.3901818,
   0.3200192,
   0.4130673,
   0.4074137,
   0.4069061,
   0.3921977,
   0.8176331,
   0.6689234};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,198);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Reconstructed cos#theta");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3015[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3015[24] = {
   0.2627737,
   0.238726,
   0.2301517,
   0.2186849,
   0.2279123,
   0.2542906,
   0.2533226,
   0.2411443,
   0.2449113,
   0.2572988,
   0.2501127,
   0.2297804,
   0.2140715,
   0.2258619,
   0.2428497,
   0.2164529,
   0.2335738,
   0.2061864,
   0.2702651,
   0.2460638,
   0.2432367,
   0.2300215,
   0.2559988,
   0.4109053};
   Double_t _fehx3015[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3015[24] = {
   0.2627737,
   0.238726,
   0.2301517,
   0.2186849,
   0.2279123,
   0.2542906,
   0.2533226,
   0.2411443,
   0.2449113,
   0.2572988,
   0.2501127,
   0.2297804,
   0.2140715,
   0.2258619,
   0.2428497,
   0.2164529,
   0.2335738,
   0.2061864,
   0.2702651,
   0.2460638,
   0.2432367,
   0.2300215,
   0.2559988,
   0.4109053};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,198);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3016[24] = {
   1.261309,
   0.7837813,
   0.4911541,
   0.7066021,
   0.6991304,
   0.8628141,
   0.4450793,
   0.6097195,
   0.5154154,
   0.2125094,
   0.8977331,
   0.6909959,
   0.3751652,
   0.3265206,
   0.4861087,
   1.15565,
   0.7077322,
   1.140509,
   0.5260809,
   0.2845007,
   1.221995,
   0.4355702,
   1.117237,
   0};
   Double_t _felx3016[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3016[24] = {
   0.90115,
   0.349991,
   0.2445898,
   0.2507291,
   0.2222917,
   0.2507225,
   0.1818174,
   0.2041847,
   0.1952587,
   0.1518286,
   0.2723288,
   0.2451914,
   0.1868285,
   0.1874906,
   0.2420773,
   0.3505683,
   0.3160319,
   0.3819371,
   0.3020796,
   0.2845007,
   0.4991918,
   0.4355702,
   0.7982167,
   0};
   Double_t _fehx3016[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3016[24] = {
   0.7249249,
   0.3159396,
   0.217153,
   0.2322523,
   0.2078324,
   0.2359597,
   0.1659847,
   0.1901044,
   0.1797253,
   0.1221376,
   0.2555173,
   0.2271227,
   0.165871,
   0.1617796,
   0.2149223,
   0.3289268,
   0.2852845,
   0.3555993,
   0.2606547,
   0.2161025,
   0.455722,
   0.3308526,
   0.6421208,
   1.488329};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,198);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.184858);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT3_FC_Np_bnb_10_kine_pio_costheta_low_all",24,0,180);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetLabelSize(0.035);
   hist__12->GetXaxis()->SetTitleSize(0.035);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetLabelSize(0.035);
   hist__12->GetYaxis()->SetTitleSize(0.035);
   hist__12->GetYaxis()->SetTitleOffset(0);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetLabelSize(0.035);
   hist__12->GetZaxis()->SetTitleSize(0.035);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(0,1,180,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

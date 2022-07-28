#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Jun  6 14:11:37 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-0.5512961,1.25641,60.96174);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__19->SetBinContent(1,7.472598);
   hmc__19->SetBinContent(2,5.723899);
   hmc__19->SetBinContent(3,5.82558);
   hmc__19->SetBinContent(4,5.355699);
   hmc__19->SetBinContent(5,4.619812);
   hmc__19->SetBinContent(6,6.576559);
   hmc__19->SetBinContent(7,6.214805);
   hmc__19->SetBinContent(8,5.891842);
   hmc__19->SetBinContent(9,5.250712);
   hmc__19->SetBinContent(10,5.512352);
   hmc__19->SetBinContent(11,6.49609);
   hmc__19->SetBinContent(12,6.716939);
   hmc__19->SetBinContent(13,7.808639);
   hmc__19->SetBinContent(14,7.600853);
   hmc__19->SetBinContent(15,9.126804);
   hmc__19->SetBinContent(16,9.12649);
   hmc__19->SetBinContent(17,7.87946);
   hmc__19->SetBinContent(18,10.95869);
   hmc__19->SetBinContent(19,11.25106);
   hmc__19->SetBinContent(20,11.54414);
   hmc__19->SetBinContent(21,14.67996);
   hmc__19->SetBinContent(22,16.60367);
   hmc__19->SetBinContent(23,16.14988);
   hmc__19->SetBinContent(24,21.86179);
   hmc__19->SetBinContent(25,27.5648);
   hmc__19->SetBinError(1,3.05592);
   hmc__19->SetBinError(2,2.241817);
   hmc__19->SetBinError(3,2.775825);
   hmc__19->SetBinError(4,2.621936);
   hmc__19->SetBinError(5,2.42251);
   hmc__19->SetBinError(6,2.584663);
   hmc__19->SetBinError(7,2.750219);
   hmc__19->SetBinError(8,2.669507);
   hmc__19->SetBinError(9,2.727033);
   hmc__19->SetBinError(10,2.292377);
   hmc__19->SetBinError(11,3.197746);
   hmc__19->SetBinError(12,2.720513);
   hmc__19->SetBinError(13,2.835146);
   hmc__19->SetBinError(14,2.835154);
   hmc__19->SetBinError(15,3.216681);
   hmc__19->SetBinError(16,3.812051);
   hmc__19->SetBinError(17,2.993107);
   hmc__19->SetBinError(18,4.041475);
   hmc__19->SetBinError(19,3.659199);
   hmc__19->SetBinError(20,4.228835);
   hmc__19->SetBinError(21,6.114955);
   hmc__19->SetBinError(22,5.459236);
   hmc__19->SetBinError(23,6.264424);
   hmc__19->SetBinError(24,6.528789);
   hmc__19->SetBinError(25,8.26124);
   hmc__19->SetBinError(26,0.1094984);
   hmc__19->SetMinimum(-0.5512961);
   hmc__19->SetMaximum(57.88609);
   hmc__19->SetEntries(240.4242);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-1,1);
   hs7_stack_7->SetMinimum(-1.084988e-09);
   hs7_stack_7->SetMaximum(28.94305);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1665565);
   hbadmatch_stack_1->SetBinContent(2,0.0416512);
   hbadmatch_stack_1->SetBinContent(3,0.07470649);
   hbadmatch_stack_1->SetBinContent(4,0.08739009);
   hbadmatch_stack_1->SetBinContent(5,0.1239126);
   hbadmatch_stack_1->SetBinContent(6,0.07470649);
   hbadmatch_stack_1->SetBinContent(7,0.2860757);
   hbadmatch_stack_1->SetBinContent(8,7.363834e-06);
   hbadmatch_stack_1->SetBinContent(9,0.02850325);
   hbadmatch_stack_1->SetBinContent(10,0.2599248);
   hbadmatch_stack_1->SetBinContent(11,0.2002021);
   hbadmatch_stack_1->SetBinContent(12,0.1662662);
   hbadmatch_stack_1->SetBinContent(13,0.0941118);
   hbadmatch_stack_1->SetBinContent(14,0.08925137);
   hbadmatch_stack_1->SetBinContent(15,0.2128569);
   hbadmatch_stack_1->SetBinContent(16,0.4970959);
   hbadmatch_stack_1->SetBinContent(17,0.1117575);
   hbadmatch_stack_1->SetBinContent(18,0.08745668);
   hbadmatch_stack_1->SetBinContent(19,0.02785167);
   hbadmatch_stack_1->SetBinContent(20,0.2473246);
   hbadmatch_stack_1->SetBinContent(21,0.2578575);
   hbadmatch_stack_1->SetBinContent(22,0.2034298);
   hbadmatch_stack_1->SetBinContent(23,0.2574606);
   hbadmatch_stack_1->SetBinContent(24,0.1469641);
   hbadmatch_stack_1->SetBinContent(25,0.3864653);
   hbadmatch_stack_1->SetBinError(1,0.09108347);
   hbadmatch_stack_1->SetBinError(2,0.0242071);
   hbadmatch_stack_1->SetBinError(3,0.06325464);
   hbadmatch_stack_1->SetBinError(4,0.07572108);
   hbadmatch_stack_1->SetBinError(5,0.08761943);
   hbadmatch_stack_1->SetBinError(6,0.06325464);
   hbadmatch_stack_1->SetBinError(7,0.1258651);
   hbadmatch_stack_1->SetBinError(8,7.363834e-06);
   hbadmatch_stack_1->SetBinError(9,0.02026638);
   hbadmatch_stack_1->SetBinError(10,0.1311964);
   hbadmatch_stack_1->SetBinError(11,0.1082644);
   hbadmatch_stack_1->SetBinError(12,0.1003024);
   hbadmatch_stack_1->SetBinError(13,0.08025523);
   hbadmatch_stack_1->SetBinError(14,0.03373385);
   hbadmatch_stack_1->SetBinError(15,0.1077949);
   hbadmatch_stack_1->SetBinError(16,0.3693323);
   hbadmatch_stack_1->SetBinError(17,0.07675265);
   hbadmatch_stack_1->SetBinError(18,0.06452687);
   hbadmatch_stack_1->SetBinError(19,0.01976416);
   hbadmatch_stack_1->SetBinError(20,0.1149271);
   hbadmatch_stack_1->SetBinError(21,0.1157278);
   hbadmatch_stack_1->SetBinError(22,0.09348035);
   hbadmatch_stack_1->SetBinError(23,0.1122052);
   hbadmatch_stack_1->SetBinError(24,0.09603287);
   hbadmatch_stack_1->SetBinError(25,0.1469039);
   hbadmatch_stack_1->SetEntries(113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.2481285);
   hext_stack_2->SetBinContent(2,0.06134926);
   hext_stack_2->SetBinContent(3,0.04907941);
   hext_stack_2->SetBinContent(4,0.02453971);
   hext_stack_2->SetBinContent(5,0.2358586);
   hext_stack_2->SetBinContent(6,0.4471776);
   hext_stack_2->SetBinContent(7,0.4471776);
   hext_stack_2->SetBinContent(8,0.6953062);
   hext_stack_2->SetBinContent(9,0.03680956);
   hext_stack_2->SetBinContent(10,0.3094778);
   hext_stack_2->SetBinContent(11,0.5698761);
   hext_stack_2->SetBinContent(12,0.2726682);
   hext_stack_2->SetBinContent(13,1.044325);
   hext_stack_2->SetBinContent(14,0.04907941);
   hext_stack_2->SetBinContent(15,0.8698155);
   hext_stack_2->SetBinContent(16,0.707576);
   hext_stack_2->SetBinContent(17,0.3094778);
   hext_stack_2->SetBinContent(18,0.6830363);
   hext_stack_2->SetBinContent(19,1.068865);
   hext_stack_2->SetBinContent(20,1.130214);
   hext_stack_2->SetBinContent(21,0.496257);
   hext_stack_2->SetBinContent(22,0.6707665);
   hext_stack_2->SetBinContent(23,0.4717173);
   hext_stack_2->SetBinContent(24,0.9066251);
   hext_stack_2->SetBinContent(25,0.7321157);
   hext_stack_2->SetBinError(1,0.2005561);
   hext_stack_2->SetBinError(2,0.02743622);
   hext_stack_2->SetBinError(3,0.0245397);
   hext_stack_2->SetBinError(4,0.01735219);
   hext_stack_2->SetBinError(5,0.2001804);
   hext_stack_2->SetBinError(6,0.2825656);
   hext_stack_2->SetBinError(7,0.2825656);
   hext_stack_2->SetBinError(8,0.3465055);
   hext_stack_2->SetBinError(9,0.02125201);
   hext_stack_2->SetBinError(10,0.202424);
   hext_stack_2->SetBinError(11,0.2852171);
   hext_stack_2->SetBinError(12,0.2013053);
   hext_stack_2->SetBinError(13,0.4457633);
   hext_stack_2->SetBinError(14,0.0245397);
   hext_stack_2->SetBinError(15,0.3992311);
   hext_stack_2->SetBinError(16,0.3467226);
   hext_stack_2->SetBinError(17,0.202424);
   hext_stack_2->SetBinError(18,0.3462882);
   hext_stack_2->SetBinError(19,0.4461009);
   hext_stack_2->SetBinError(20,0.4469438);
   hext_stack_2->SetBinError(21,0.2836291);
   hext_stack_2->SetBinError(22,0.3460707);
   hext_stack_2->SetBinError(23,0.2830978);
   hext_stack_2->SetBinError(24,0.3997964);
   hext_stack_2->SetBinError(25,0.3471566);
   hext_stack_2->SetEntries(215);

   ci = 1519;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.05365718);
   hdirt_stack_3->SetBinContent(2,0.008219617);
   hdirt_stack_3->SetBinContent(3,0.09722701);
   hdirt_stack_3->SetBinContent(4,0.08841814);
   hdirt_stack_3->SetBinContent(5,0.008219617);
   hdirt_stack_3->SetBinContent(6,0.04420907);
   hdirt_stack_3->SetBinContent(7,0.01643923);
   hdirt_stack_3->SetBinContent(8,0.08841814);
   hdirt_stack_3->SetBinContent(12,0.008219617);
   hdirt_stack_3->SetBinContent(14,0.008219617);
   hdirt_stack_3->SetBinContent(15,0.3143146);
   hdirt_stack_3->SetBinContent(16,0.05288891);
   hdirt_stack_3->SetBinContent(18,0.05079194);
   hdirt_stack_3->SetBinContent(19,0.008219617);
   hdirt_stack_3->SetBinContent(20,0.008219617);
   hdirt_stack_3->SetBinContent(21,0.01800229);
   hdirt_stack_3->SetBinContent(22,0.08692703);
   hdirt_stack_3->SetBinContent(23,0.008219618);
   hdirt_stack_3->SetBinContent(24,0.06773126);
   hdirt_stack_3->SetBinContent(25,0.1548884);
   hdirt_stack_3->SetBinError(1,0.0452074);
   hdirt_stack_3->SetBinError(2,0.008219618);
   hdirt_stack_3->SetBinError(3,0.06895787);
   hdirt_stack_3->SetBinError(4,0.06252107);
   hdirt_stack_3->SetBinError(5,0.008219618);
   hdirt_stack_3->SetBinError(6,0.04420907);
   hdirt_stack_3->SetBinError(7,0.01162429);
   hdirt_stack_3->SetBinError(8,0.06252107);
   hdirt_stack_3->SetBinError(12,0.008219618);
   hdirt_stack_3->SetBinError(14,0.008219618);
   hdirt_stack_3->SetBinError(15,0.2981021);
   hdirt_stack_3->SetBinError(16,0.05288891);
   hdirt_stack_3->SetBinError(18,0.05079194);
   hdirt_stack_3->SetBinError(19,0.008219618);
   hdirt_stack_3->SetBinError(20,0.008219618);
   hdirt_stack_3->SetBinError(21,0.01277744);
   hdirt_stack_3->SetBinError(22,0.04818201);
   hdirt_stack_3->SetBinError(23,0.008219618);
   hdirt_stack_3->SetBinError(24,0.05259274);
   hdirt_stack_3->SetBinError(25,0.08555188);
   hdirt_stack_3->SetEntries(40);

   ci = 1520;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,0.3370875);
   houtFV_stack_4->SetBinContent(2,0.2955468);
   houtFV_stack_4->SetBinContent(3,0.1129571);
   houtFV_stack_4->SetBinContent(4,0.1621632);
   houtFV_stack_4->SetBinContent(5,0.1749134);
   houtFV_stack_4->SetBinContent(6,0.3352818);
   houtFV_stack_4->SetBinContent(7,0.2113693);
   houtFV_stack_4->SetBinContent(8,0.1002069);
   houtFV_stack_4->SetBinContent(9,0.2768101);
   houtFV_stack_4->SetBinContent(10,0.1366628);
   houtFV_stack_4->SetBinContent(11,0.2733256);
   houtFV_stack_4->SetBinContent(12,0.3368399);
   houtFV_stack_4->SetBinContent(13,0.1858689);
   houtFV_stack_4->SetBinContent(14,0.375545);
   houtFV_stack_4->SetBinContent(15,0.6246919);
   houtFV_stack_4->SetBinContent(16,0.2988259);
   houtFV_stack_4->SetBinContent(17,0.1906825);
   houtFV_stack_4->SetBinContent(18,0.4393613);
   houtFV_stack_4->SetBinContent(19,0.3480321);
   houtFV_stack_4->SetBinContent(20,0.3395452);
   houtFV_stack_4->SetBinContent(21,0.8115453);
   houtFV_stack_4->SetBinContent(22,0.7703366);
   houtFV_stack_4->SetBinContent(23,0.4245332);
   houtFV_stack_4->SetBinContent(24,0.8564326);
   houtFV_stack_4->SetBinContent(25,0.4737393);
   houtFV_stack_4->SetBinError(1,0.1284224);
   houtFV_stack_4->SetBinError(2,0.1364527);
   houtFV_stack_4->SetBinError(3,0.0669989);
   houtFV_stack_4->SetBinError(4,0.09035965);
   houtFV_stack_4->SetBinError(5,0.09125478);
   houtFV_stack_4->SetBinError(6,0.139707);
   houtFV_stack_4->SetBinError(7,0.1088158);
   houtFV_stack_4->SetBinError(8,0.0657745);
   houtFV_stack_4->SetBinError(9,0.1256203);
   houtFV_stack_4->SetBinError(10,0.08854226);
   houtFV_stack_4->SetBinError(11,0.1252177);
   houtFV_stack_4->SetBinError(12,0.1398578);
   houtFV_stack_4->SetBinError(13,0.1073114);
   houtFV_stack_4->SetBinError(14,0.1471215);
   houtFV_stack_4->SetBinError(15,0.2016278);
   houtFV_stack_4->SetBinError(16,0.1265093);
   houtFV_stack_4->SetBinError(17,0.09260723);
   houtFV_stack_4->SetBinError(18,0.154784);
   houtFV_stack_4->SetBinError(19,0.1402876);
   houtFV_stack_4->SetBinError(20,0.1286909);
   houtFV_stack_4->SetBinError(21,0.2134555);
   houtFV_stack_4->SetBinError(22,0.2194839);
   houtFV_stack_4->SetBinError(23,0.143722);
   houtFV_stack_4->SetBinError(24,0.2248374);
   houtFV_stack_4->SetBinError(25,0.1559873);
   houtFV_stack_4->SetEntries(218);

   ci = 1521;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2368697);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1102997);
   hNCpi0inFVcoh_stack_5->SetEntries(12);

   ci = 1522;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02550039);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07470649);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1858689);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2605754);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1621632);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2241195);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0180315);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06325464);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1073114);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1245668);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.09035965);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1095603);
   hNCpi0inFVqe_stack_6->SetEntries(40);

   ci = 1523;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.185084);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.913553);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.403358);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.99742);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.215694);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.134083);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.077511);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.565521);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.50177);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.252116);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.991849);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.797281);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.77537);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.711618);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.988534);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.701125);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.948488);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.916083);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.951019);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.961974);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.973204);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.331087);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.862777);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.11612);
   hNCpi0inFVres_stack_7->SetBinContent(25,13.20312);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4180311);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3950251);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3580494);
   hNCpi0inFVres_stack_7->SetBinError(4,0.40775);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3459904);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4172526);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4014772);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3692753);
   hNCpi0inFVres_stack_7->SetBinError(9,0.368173);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3286959);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3924213);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4515485);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4444316);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4435162);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4542407);
   hNCpi0inFVres_stack_7->SetBinError(16,0.511028);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4570258);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5166614);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5654793);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5682914);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6102721);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6850099);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6919808);
   hNCpi0inFVres_stack_7->SetBinError(24,0.733181);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8486129);
   hNCpi0inFVres_stack_7->SetEntries(3132);

   ci = 1524;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6486527);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7197698);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6341078);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6960641);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3625769);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3370765);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6705637);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2496199);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4099883);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3625769);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4992397);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6596082);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3735324);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5866964);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6486527);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6104021);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4737393);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.426789);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.366628);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.056846);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.503291);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.880412);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.732794);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.075716);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.232769);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1807193);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2066691);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1884745);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1983966);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1296821);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1284224);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1975755);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1110342);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1533597);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1296821);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.157026);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1893351);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1414417);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1697671);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1807193);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1793649);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1559873);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.291996);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2799952);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2433196);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2936614);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3165301);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2986022);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.405228);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4772215);
   hNCpi0inFVdis_stack_8->SetEntries(658);

   ci = 1525;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetEntries(3);

   ci = 1526;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,1.572374);
   hCCpi0inFV_stack_11->SetBinContent(2,0.7980657);
   hCCpi0inFV_stack_11->SetBinContent(3,1.443129);
   hCCpi0inFV_stack_11->SetBinContent(4,0.4667847);
   hCCpi0inFV_stack_11->SetBinContent(5,0.9201835);
   hCCpi0inFV_stack_11->SetBinContent(6,0.9056386);
   hCCpi0inFV_stack_11->SetBinContent(7,0.8837277);
   hCCpi0inFV_stack_11->SetBinContent(8,0.8946831);
   hCCpi0inFV_stack_11->SetBinContent(9,0.9329337);
   hCCpi0inFV_stack_11->SetBinContent(10,1.044096);
   hCCpi0inFV_stack_11->SetBinContent(11,0.8072265);
   hCCpi0inFV_stack_11->SetBinContent(12,0.7215645);
   hCCpi0inFV_stack_11->SetBinContent(13,1.454174);
   hCCpi0inFV_stack_11->SetBinContent(14,1.56937);
   hCCpi0inFV_stack_11->SetBinContent(15,0.7853155);
   hCCpi0inFV_stack_11->SetBinContent(16,0.9602288);
   hCCpi0inFV_stack_11->SetBinContent(17,1.012423);
   hCCpi0inFV_stack_11->SetBinContent(18,1.778411);
   hCCpi0inFV_stack_11->SetBinContent(19,1.058641);
   hCCpi0inFV_stack_11->SetBinContent(20,1.259055);
   hCCpi0inFV_stack_11->SetBinContent(21,1.977442);
   hCCpi0inFV_stack_11->SetBinContent(22,2.835257);
   hCCpi0inFV_stack_11->SetBinContent(23,2.53425);
   hCCpi0inFV_stack_11->SetBinContent(24,4.232129);
   hCCpi0inFV_stack_11->SetBinContent(25,4.894365);
   hCCpi0inFV_stack_11->SetBinError(1,0.3038371);
   hCCpi0inFV_stack_11->SetBinError(2,0.2016476);
   hCCpi0inFV_stack_11->SetBinError(3,0.2817316);
   hCCpi0inFV_stack_11->SetBinError(4,0.1458141);
   hCCpi0inFV_stack_11->SetBinError(5,0.2266378);
   hCCpi0inFV_stack_11->SetBinError(6,0.2328687);
   hCCpi0inFV_stack_11->SetBinError(7,0.2187492);
   hCCpi0inFV_stack_11->SetBinError(8,0.2259193);
   hCCpi0inFV_stack_11->SetBinError(9,0.2269961);
   hCCpi0inFV_stack_11->SetBinError(10,0.2429853);
   hCCpi0inFV_stack_11->SetBinError(11,0.2165082);
   hCCpi0inFV_stack_11->SetBinError(12,0.1992144);
   hCCpi0inFV_stack_11->SetBinError(13,0.2900937);
   hCCpi0inFV_stack_11->SetBinError(14,0.295152);
   hCCpi0inFV_stack_11->SetBinError(15,0.2012441);
   hCCpi0inFV_stack_11->SetBinError(16,0.2209675);
   hCCpi0inFV_stack_11->SetBinError(17,0.2263548);
   hCCpi0inFV_stack_11->SetBinError(18,0.314469);
   hCCpi0inFV_stack_11->SetBinError(19,0.2370204);
   hCCpi0inFV_stack_11->SetBinError(20,0.2546198);
   hCCpi0inFV_stack_11->SetBinError(21,0.3186848);
   hCCpi0inFV_stack_11->SetBinError(22,0.3976118);
   hCCpi0inFV_stack_11->SetBinError(23,0.3759691);
   hCCpi0inFV_stack_11->SetBinError(24,0.4834564);
   hCCpi0inFV_stack_11->SetBinError(25,0.5122689);
   hCCpi0inFV_stack_11->SetEntries(968);

   ci = 1528;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.6851086);
   hNCinFV_stack_12->SetBinContent(2,0.3607822);
   hNCinFV_stack_12->SetBinContent(3,0.3862826);
   hNCinFV_stack_12->SetBinContent(4,0.5339009);
   hNCinFV_stack_12->SetBinContent(5,0.2988259);
   hNCinFV_stack_12->SetBinContent(6,0.2496199);
   hNCinFV_stack_12->SetBinContent(7,0.1621632);
   hNCinFV_stack_12->SetBinContent(8,0.2988259);
   hNCinFV_stack_12->SetBinContent(9,0.4227385);
   hNCinFV_stack_12->SetBinContent(10,0.1239126);
   hNCinFV_stack_12->SetBinContent(11,0.4354887);
   hNCinFV_stack_12->SetBinContent(12,0.2131639);
   hNCinFV_stack_12->SetBinContent(13,0.1749134);
   hNCinFV_stack_12->SetBinContent(14,0.2113693);
   hNCinFV_stack_12->SetBinContent(15,0.2988259);
   hNCinFV_stack_12->SetBinContent(16,0.1129571);
   hNCinFV_stack_12->SetBinContent(17,0.3607822);
   hNCinFV_stack_12->SetBinContent(18,0.3480321);
   hNCinFV_stack_12->SetBinContent(19,0.561196);
   hNCinFV_stack_12->SetBinContent(20,0.5721515);
   hNCinFV_stack_12->SetBinContent(21,0.881933);
   hNCinFV_stack_12->SetBinContent(22,0.6596082);
   hNCinFV_stack_12->SetBinContent(23,1.144303);
   hNCinFV_stack_12->SetBinContent(24,1.393923);
   hNCinFV_stack_12->SetBinContent(25,1.632587);
   hNCinFV_stack_12->SetBinError(1,0.1901918);
   hNCinFV_stack_12->SetBinError(2,0.1408658);
   hNCinFV_stack_12->SetBinError(3,0.1420152);
   hNCinFV_stack_12->SetBinError(4,0.1766249);
   hNCinFV_stack_12->SetBinError(5,0.1265093);
   hNCinFV_stack_12->SetBinError(6,0.1110342);
   hNCinFV_stack_12->SetBinError(7,0.09035965);
   hNCinFV_stack_12->SetBinError(8,0.1265093);
   hNCinFV_stack_12->SetBinError(9,0.1538888);
   hNCinFV_stack_12->SetBinError(10,0.08761943);
   hNCinFV_stack_12->SetBinError(11,0.1544161);
   hNCinFV_stack_12->SetBinError(12,0.09388896);
   hNCinFV_stack_12->SetBinError(13,0.09125478);
   hNCinFV_stack_12->SetBinError(14,0.1088158);
   hNCinFV_stack_12->SetBinError(15,0.1265093);
   hNCinFV_stack_12->SetBinError(16,0.0669989);
   hNCinFV_stack_12->SetBinError(17,0.1408658);
   hNCinFV_stack_12->SetBinError(18,0.1402876);
   hNCinFV_stack_12->SetBinError(19,0.1688068);
   hNCinFV_stack_12->SetBinError(20,0.1780002);
   hNCinFV_stack_12->SetBinError(21,0.2255592);
   hNCinFV_stack_12->SetBinError(22,0.1893351);
   hNCinFV_stack_12->SetBinError(23,0.2517303);
   hNCinFV_stack_12->SetBinError(24,0.2751303);
   hNCinFV_stack_12->SetBinError(25,0.2912679);
   hNCinFV_stack_12->SetEntries(330);

   ci = 1529;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.5759489);
   hnumuCCinFV_stack_13->SetBinContent(2,0.5249611);
   hnumuCCinFV_stack_13->SetBinContent(3,0.562776);
   hnumuCCinFV_stack_13->SetBinContent(4,0.2862673);
   hnumuCCinFV_stack_13->SetBinContent(5,0.2796271);
   hnumuCCinFV_stack_13->SetBinContent(6,1.036002);
   hnumuCCinFV_stack_13->SetBinContent(7,0.385072);
   hnumuCCinFV_stack_13->SetBinContent(8,0.9992532);
   hnumuCCinFV_stack_13->SetBinContent(9,0.5172455);
   hnumuCCinFV_stack_13->SetBinContent(10,1.010834);
   hnumuCCinFV_stack_13->SetBinContent(11,0.6314263);
   hnumuCCinFV_stack_13->SetBinContent(12,0.5285774);
   hnumuCCinFV_stack_13->SetBinContent(13,0.7063435);
   hnumuCCinFV_stack_13->SetBinContent(14,0.9122466);
   hnumuCCinFV_stack_13->SetBinContent(15,1.197929);
   hnumuCCinFV_stack_13->SetBinContent(16,1.110683);
   hnumuCCinFV_stack_13->SetBinContent(17,1.224285);
   hnumuCCinFV_stack_13->SetBinContent(18,1.079319);
   hnumuCCinFV_stack_13->SetBinContent(19,0.7858986);
   hnumuCCinFV_stack_13->SetBinContent(20,0.8449005);
   hnumuCCinFV_stack_13->SetBinContent(21,1.363193);
   hnumuCCinFV_stack_13->SetBinContent(22,1.029181);
   hnumuCCinFV_stack_13->SetBinContent(23,0.5644138);
   hnumuCCinFV_stack_13->SetBinContent(24,0.8165274);
   hnumuCCinFV_stack_13->SetBinContent(25,1.001956);
   hnumuCCinFV_stack_13->SetBinError(1,0.1774721);
   hnumuCCinFV_stack_13->SetBinError(2,0.1698615);
   hnumuCCinFV_stack_13->SetBinError(3,0.1819162);
   hnumuCCinFV_stack_13->SetBinError(4,0.1224993);
   hnumuCCinFV_stack_13->SetBinError(5,0.1181453);
   hnumuCCinFV_stack_13->SetBinError(6,0.4480137);
   hnumuCCinFV_stack_13->SetBinError(7,0.1676315);
   hnumuCCinFV_stack_13->SetBinError(8,0.2842291);
   hnumuCCinFV_stack_13->SetBinError(9,0.1819724);
   hnumuCCinFV_stack_13->SetBinError(10,0.258181);
   hnumuCCinFV_stack_13->SetBinError(11,0.2694954);
   hnumuCCinFV_stack_13->SetBinError(12,0.177677);
   hnumuCCinFV_stack_13->SetBinError(13,0.2062264);
   hnumuCCinFV_stack_13->SetBinError(14,0.2338867);
   hnumuCCinFV_stack_13->SetBinError(15,0.466615);
   hnumuCCinFV_stack_13->SetBinError(16,0.3072951);
   hnumuCCinFV_stack_13->SetBinError(17,0.3024428);
   hnumuCCinFV_stack_13->SetBinError(18,0.3294379);
   hnumuCCinFV_stack_13->SetBinError(19,0.2132615);
   hnumuCCinFV_stack_13->SetBinError(20,0.2911029);
   hnumuCCinFV_stack_13->SetBinError(21,0.3300485);
   hnumuCCinFV_stack_13->SetBinError(22,0.2967073);
   hnumuCCinFV_stack_13->SetBinError(23,0.1690757);
   hnumuCCinFV_stack_13->SetBinError(24,0.2182538);
   hnumuCCinFV_stack_13->SetBinError(25,0.2289489);
   hnumuCCinFV_stack_13->SetEntries(468);

   ci = 1530;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_14->SetBinContent(7,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.02550039);
   hnueCCinFV_stack_14->SetBinContent(20,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(21,0.07470649);
   hnueCCinFV_stack_14->SetBinContent(22,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(23,0.07470649);
   hnueCCinFV_stack_14->SetBinContent(24,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(25,0.391809);
   hnueCCinFV_stack_14->SetBinError(6,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.0127502);
   hnueCCinFV_stack_14->SetBinError(11,0.06195629);
   hnueCCinFV_stack_14->SetBinError(15,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.0180315);
   hnueCCinFV_stack_14->SetBinError(20,0.06195629);
   hnueCCinFV_stack_14->SetBinError(21,0.06325464);
   hnueCCinFV_stack_14->SetBinError(22,0.0127502);
   hnueCCinFV_stack_14->SetBinError(23,0.06325464);
   hnueCCinFV_stack_14->SetBinError(24,0.0127502);
   hnueCCinFV_stack_14->SetBinError(25,0.1425485);
   hnueCCinFV_stack_14->SetEntries(25);

   ci = 1531;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__20->SetBinContent(1,7.472598);
   hmcerror__20->SetBinContent(2,5.723899);
   hmcerror__20->SetBinContent(3,5.82558);
   hmcerror__20->SetBinContent(4,5.355699);
   hmcerror__20->SetBinContent(5,4.619812);
   hmcerror__20->SetBinContent(6,6.576559);
   hmcerror__20->SetBinContent(7,6.214805);
   hmcerror__20->SetBinContent(8,5.891842);
   hmcerror__20->SetBinContent(9,5.250712);
   hmcerror__20->SetBinContent(10,5.512352);
   hmcerror__20->SetBinContent(11,6.49609);
   hmcerror__20->SetBinContent(12,6.716939);
   hmcerror__20->SetBinContent(13,7.808639);
   hmcerror__20->SetBinContent(14,7.600853);
   hmcerror__20->SetBinContent(15,9.126804);
   hmcerror__20->SetBinContent(16,9.12649);
   hmcerror__20->SetBinContent(17,7.87946);
   hmcerror__20->SetBinContent(18,10.95869);
   hmcerror__20->SetBinContent(19,11.25106);
   hmcerror__20->SetBinContent(20,11.54414);
   hmcerror__20->SetBinContent(21,14.67996);
   hmcerror__20->SetBinContent(22,16.60367);
   hmcerror__20->SetBinContent(23,16.14988);
   hmcerror__20->SetBinContent(24,21.86179);
   hmcerror__20->SetBinContent(25,27.5648);
   hmcerror__20->SetBinError(1,3.05592);
   hmcerror__20->SetBinError(2,2.241817);
   hmcerror__20->SetBinError(3,2.775825);
   hmcerror__20->SetBinError(4,2.621936);
   hmcerror__20->SetBinError(5,2.42251);
   hmcerror__20->SetBinError(6,2.584663);
   hmcerror__20->SetBinError(7,2.750219);
   hmcerror__20->SetBinError(8,2.669507);
   hmcerror__20->SetBinError(9,2.727033);
   hmcerror__20->SetBinError(10,2.292377);
   hmcerror__20->SetBinError(11,3.197746);
   hmcerror__20->SetBinError(12,2.720513);
   hmcerror__20->SetBinError(13,2.835146);
   hmcerror__20->SetBinError(14,2.835154);
   hmcerror__20->SetBinError(15,3.216681);
   hmcerror__20->SetBinError(16,3.812051);
   hmcerror__20->SetBinError(17,2.993107);
   hmcerror__20->SetBinError(18,4.041475);
   hmcerror__20->SetBinError(19,3.659199);
   hmcerror__20->SetBinError(20,4.228835);
   hmcerror__20->SetBinError(21,6.114955);
   hmcerror__20->SetBinError(22,5.459236);
   hmcerror__20->SetBinError(23,6.264424);
   hmcerror__20->SetBinError(24,6.528789);
   hmcerror__20->SetBinError(25,8.26124);
   hmcerror__20->SetBinError(26,0.1094984);
   hmcerror__20->SetEntries(240.4242);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3025[25] = {
   2,
   5,
   1,
   8,
   3,
   5,
   4,
   3,
   5,
   3,
   3,
   5,
   6,
   8,
   5,
   6,
   7,
   4,
   4,
   7,
   9,
   12,
   10,
   14,
   17};
   Double_t _felx3025[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3025[25] = {
   2,
   2.48995,
   1,
   3.0307,
   2.143368,
   2.48995,
   2.29683,
   2.143368,
   2.48995,
   2.143368,
   2.143368,
   2.48995,
   2.67925,
   3.0307,
   2.48995,
   2.67925,
   2.85954,
   2.29683,
   2.29683,
   2.85954,
   3.19354,
   3.64022,
   3.34883,
   3.9102,
   4.2835};
   Double_t _fehx3025[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3025[25] = {
   1.51917,
   2.21064,
   1.35971,
   2.7896,
   1.72422,
   2.21064,
   1.98186,
   1.72422,
   2.21064,
   1.72422,
   1.72422,
   2.21064,
   2.41858,
   2.7896,
   2.21064,
   2.41858,
   2.61053,
   1.98186,
   1.98186,
   2.61053,
   2.9582,
   3.4155,
   3.1179,
   3.6898,
   4.0673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(23.17403);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.64#pm0.16","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 156.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

   ci = 1518;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 8.9","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  118.5","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.2","F");

   ci = 1525;
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

   ci = 1526;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 37.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 12.5","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 20.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 0.8","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3026[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3026[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3026[25] = {
   0.4089501,
   0.3916592,
   0.4764891,
   0.48956,
   0.524374,
   0.3930114,
   0.4425269,
   0.4530854,
   0.5193645,
   0.4158618,
   0.4922569,
   0.4050227,
   0.3630782,
   0.3730047,
   0.3524433,
   0.4176908,
   0.3798619,
   0.3687917,
   0.3252316,
   0.3663186,
   0.4165511,
   0.328797,
   0.3878929,
   0.2986393,
   0.2997025};
   Double_t _fehx3026[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3026[25] = {
   0.4089501,
   0.3916592,
   0.4764891,
   0.48956,
   0.524374,
   0.3930114,
   0.4425269,
   0.4530854,
   0.5193645,
   0.4158618,
   0.4922569,
   0.4050227,
   0.3630782,
   0.3730047,
   0.3524433,
   0.4176908,
   0.3798619,
   0.3687917,
   0.3252316,
   0.3663186,
   0.4165511,
   0.328797,
   0.3878929,
   0.2986393,
   0.2997025};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3027[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3027[25] = {
   0.247082,
   0.2458625,
   0.2330939,
   0.2512098,
   0.2569304,
   0.2463071,
   0.227199,
   0.2240461,
   0.2578276,
   0.2196389,
   0.2496537,
   0.2726824,
   0.2380111,
   0.2311683,
   0.2679562,
   0.2597941,
   0.2586013,
   0.2641431,
   0.2675558,
   0.2678336,
   0.2601589,
   0.2721559,
   0.2523742,
   0.2198685,
   0.2240767};
   Double_t _fehx3027[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3027[25] = {
   0.247082,
   0.2458625,
   0.2330939,
   0.2512098,
   0.2569304,
   0.2463071,
   0.227199,
   0.2240461,
   0.2578276,
   0.2196389,
   0.2496537,
   0.2726824,
   0.2380111,
   0.2311683,
   0.2679562,
   0.2597941,
   0.2586013,
   0.2641431,
   0.2675558,
   0.2678336,
   0.2601589,
   0.2721559,
   0.2523742,
   0.2198685,
   0.2240767};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3028[25] = {
   0.2676445,
   0.8735305,
   0.1716567,
   1.493736,
   0.649377,
   0.760276,
   0.6436244,
   0.5091786,
   0.9522518,
   0.5442323,
   0.4618162,
   0.7443867,
   0.7683798,
   1.052513,
   0.5478369,
   0.6574269,
   0.8883857,
   0.365007,
   0.3555222,
   0.6063681,
   0.6130806,
   0.7227319,
   0.6191996,
   0.6403868,
   0.6167285};
   Double_t _felx3028[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3028[25] = {
   0.2676445,
   0.4350094,
   0.1716567,
   0.5658832,
   0.4639513,
   0.3786098,
   0.3695739,
   0.3637857,
   0.4742119,
   0.38883,
   0.3299474,
   0.3706971,
   0.3431136,
   0.3987315,
   0.2728173,
   0.2935685,
   0.3629106,
   0.2095897,
   0.2041435,
   0.2477048,
   0.2175441,
   0.2192419,
   0.2073594,
   0.17886,
   0.1553974};
   Double_t _fehx3028[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3028[25] = {
   0.2032988,
   0.3862123,
   0.2334034,
   0.5208658,
   0.3732229,
   0.3361393,
   0.3188933,
   0.2926453,
   0.4210172,
   0.3127921,
   0.2654243,
   0.3291142,
   0.3097313,
   0.3670114,
   0.242214,
   0.2650066,
   0.3313082,
   0.1808482,
   0.1761488,
   0.2261346,
   0.2015128,
   0.2057076,
   0.1930602,
   0.1687785,
   0.1475541};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(2.216062);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

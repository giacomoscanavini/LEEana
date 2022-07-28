#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Jun  6 14:11:37 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-1.307692,-0.1778044,1.25641,19.66142);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__25->SetBinContent(1,2.575521);
   hmc__25->SetBinContent(2,1.532811);
   hmc__25->SetBinContent(3,1.264511);
   hmc__25->SetBinContent(4,1.526677);
   hmc__25->SetBinContent(5,1.400595);
   hmc__25->SetBinContent(6,0.924234);
   hmc__25->SetBinContent(7,1.113711);
   hmc__25->SetBinContent(8,0.8417622);
   hmc__25->SetBinContent(9,1.434653);
   hmc__25->SetBinContent(10,1.112008);
   hmc__25->SetBinContent(11,1.667941);
   hmc__25->SetBinContent(12,1.547185);
   hmc__25->SetBinContent(13,1.769475);
   hmc__25->SetBinContent(14,1.452982);
   hmc__25->SetBinContent(15,1.794782);
   hmc__25->SetBinContent(16,1.55217);
   hmc__25->SetBinContent(17,2.961346);
   hmc__25->SetBinContent(18,2.29025);
   hmc__25->SetBinContent(19,2.896977);
   hmc__25->SetBinContent(20,2.436222);
   hmc__25->SetBinContent(21,3.731186);
   hmc__25->SetBinContent(22,4.013123);
   hmc__25->SetBinContent(23,4.479122);
   hmc__25->SetBinContent(24,6.502519);
   hmc__25->SetBinContent(25,8.890221);
   hmc__25->SetBinError(1,1.666158);
   hmc__25->SetBinError(2,1.573635);
   hmc__25->SetBinError(3,1.682352);
   hmc__25->SetBinError(4,1.111656);
   hmc__25->SetBinError(5,1.519557);
   hmc__25->SetBinError(6,0.8190119);
   hmc__25->SetBinError(7,0.8574421);
   hmc__25->SetBinError(8,0.6098723);
   hmc__25->SetBinError(9,1.851925);
   hmc__25->SetBinError(10,0.8511121);
   hmc__25->SetBinError(11,1.342747);
   hmc__25->SetBinError(12,1.187618);
   hmc__25->SetBinError(13,1.078923);
   hmc__25->SetBinError(14,1.602675);
   hmc__25->SetBinError(15,1.389133);
   hmc__25->SetBinError(16,1.018425);
   hmc__25->SetBinError(17,1.648319);
   hmc__25->SetBinError(18,1.40035);
   hmc__25->SetBinError(19,1.942951);
   hmc__25->SetBinError(20,2.592802);
   hmc__25->SetBinError(21,1.769207);
   hmc__25->SetBinError(22,2.450008);
   hmc__25->SetBinError(23,2.509318);
   hmc__25->SetBinError(24,2.620139);
   hmc__25->SetBinError(25,4.151373);
   hmc__25->SetBinError(26,0.1094984);
   hmc__25->SetMinimum(-0.1778044);
   hmc__25->SetMaximum(18.66946);
   hmc__25->SetEntries(60.01759);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-1,1);
   hs9_stack_9->SetMinimum(-6.202043e-09);
   hs9_stack_9->SetMaximum(9.334732);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.0127502);
   hbadmatch_stack_1->SetBinContent(2,0.0127502);
   hbadmatch_stack_1->SetBinContent(3,0.08388051);
   hbadmatch_stack_1->SetBinContent(4,0.07470649);
   hbadmatch_stack_1->SetBinContent(6,0.0127502);
   hbadmatch_stack_1->SetBinContent(7,0.07470649);
   hbadmatch_stack_1->SetBinContent(8,0.0127502);
   hbadmatch_stack_1->SetBinContent(9,0.07470649);
   hbadmatch_stack_1->SetBinContent(10,0.06831884);
   hbadmatch_stack_1->SetBinContent(11,0.1690235);
   hbadmatch_stack_1->SetBinContent(13,0.06195629);
   hbadmatch_stack_1->SetBinContent(15,0.1334994);
   hbadmatch_stack_1->SetBinContent(16,0.0127502);
   hbadmatch_stack_1->SetBinContent(17,0.07470649);
   hbadmatch_stack_1->SetBinContent(19,0.1654289);
   hbadmatch_stack_1->SetBinContent(20,0.04070852);
   hbadmatch_stack_1->SetBinContent(21,0.1430055);
   hbadmatch_stack_1->SetBinContent(22,0.2117683);
   hbadmatch_stack_1->SetBinContent(23,0.149413);
   hbadmatch_stack_1->SetBinContent(24,0.07470649);
   hbadmatch_stack_1->SetBinContent(25,0.08745668);
   hbadmatch_stack_1->SetBinError(1,0.0127502);
   hbadmatch_stack_1->SetBinError(2,0.0127502);
   hbadmatch_stack_1->SetBinError(3,0.07226402);
   hbadmatch_stack_1->SetBinError(4,0.06325464);
   hbadmatch_stack_1->SetBinError(6,0.0127502);
   hbadmatch_stack_1->SetBinError(7,0.06325464);
   hbadmatch_stack_1->SetBinError(8,0.0127502);
   hbadmatch_stack_1->SetBinError(9,0.06325464);
   hbadmatch_stack_1->SetBinError(10,0.06831885);
   hbadmatch_stack_1->SetBinError(11,0.09145264);
   hbadmatch_stack_1->SetBinError(13,0.06195629);
   hbadmatch_stack_1->SetBinError(15,0.09464139);
   hbadmatch_stack_1->SetBinError(16,0.0127502);
   hbadmatch_stack_1->SetBinError(17,0.06325464);
   hbadmatch_stack_1->SetBinError(19,0.09084945);
   hbadmatch_stack_1->SetBinError(20,0.0235886);
   hbadmatch_stack_1->SetBinError(21,0.08967555);
   hbadmatch_stack_1->SetBinError(22,0.1161058);
   hbadmatch_stack_1->SetBinError(23,0.08945557);
   hbadmatch_stack_1->SetBinError(24,0.06325464);
   hbadmatch_stack_1->SetBinError(25,0.06452687);
   hbadmatch_stack_1->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.2235888);
   hext_stack_2->SetBinContent(2,0.03680956);
   hext_stack_2->SetBinContent(3,0.03680956);
   hext_stack_2->SetBinContent(4,0.1990491);
   hext_stack_2->SetBinContent(5,0.211319);
   hext_stack_2->SetBinContent(7,0.2481285);
   hext_stack_2->SetBinContent(8,0.211319);
   hext_stack_2->SetBinContent(9,0.2358586);
   hext_stack_2->SetBinContent(10,0.2235888);
   hext_stack_2->SetBinContent(11,0.03680956);
   hext_stack_2->SetBinContent(12,0.4349078);
   hext_stack_2->SetBinContent(13,0.2235888);
   hext_stack_2->SetBinContent(14,0.09815882);
   hext_stack_2->SetBinContent(15,0.211319);
   hext_stack_2->SetBinContent(16,0.211319);
   hext_stack_2->SetBinContent(17,0.833006);
   hext_stack_2->SetBinContent(18,0.4103681);
   hext_stack_2->SetBinContent(19,0.02453971);
   hext_stack_2->SetBinContent(20,0.4226379);
   hext_stack_2->SetBinContent(21,0.4594475);
   hext_stack_2->SetBinContent(22,0.4839872);
   hext_stack_2->SetBinContent(23,0.4594475);
   hext_stack_2->SetBinContent(24,0.2358586);
   hext_stack_2->SetBinContent(25,0.2481285);
   hext_stack_2->SetBinError(1,0.199804);
   hext_stack_2->SetBinError(2,0.02125201);
   hext_stack_2->SetBinError(3,0.02125201);
   hext_stack_2->SetBinError(4,0.1990491);
   hext_stack_2->SetBinError(5,0.1994269);
   hext_stack_2->SetBinError(7,0.2005561);
   hext_stack_2->SetBinError(8,0.1994269);
   hext_stack_2->SetBinError(9,0.2001804);
   hext_stack_2->SetBinError(10,0.199804);
   hext_stack_2->SetBinError(11,0.02125201);
   hext_stack_2->SetBinError(12,0.282299);
   hext_stack_2->SetBinError(13,0.199804);
   hext_stack_2->SetBinError(14,0.03470438);
   hext_stack_2->SetBinError(15,0.1994269);
   hext_stack_2->SetBinError(16,0.1994269);
   hext_stack_2->SetBinError(17,0.3986651);
   hext_stack_2->SetBinError(18,0.2817652);
   hext_stack_2->SetBinError(19,0.01735219);
   hext_stack_2->SetBinError(20,0.2820323);
   hext_stack_2->SetBinError(21,0.2828318);
   hext_stack_2->SetBinError(22,0.2833636);
   hext_stack_2->SetBinError(23,0.2828318);
   hext_stack_2->SetBinError(24,0.2001804);
   hext_stack_2->SetBinError(25,0.2005561);
   hext_stack_2->SetEntries(97);

   ci = 1547;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(6,0.04420907);
   hdirt_stack_3->SetBinContent(12,0.04420907);
   hdirt_stack_3->SetBinContent(13,0.009838338);
   hdirt_stack_3->SetBinContent(18,0.009851102);
   hdirt_stack_3->SetBinContent(19,0.01068823);
   hdirt_stack_3->SetBinContent(20,0.04420907);
   hdirt_stack_3->SetBinContent(22,0.05407806);
   hdirt_stack_3->SetBinContent(23,0.008219617);
   hdirt_stack_3->SetBinContent(25,0.1546209);
   hdirt_stack_3->SetBinError(6,0.04420907);
   hdirt_stack_3->SetBinError(12,0.04420907);
   hdirt_stack_3->SetBinError(13,0.009838337);
   hdirt_stack_3->SetBinError(18,0.009851101);
   hdirt_stack_3->SetBinError(19,0.009963801);
   hdirt_stack_3->SetBinError(20,0.04420907);
   hdirt_stack_3->SetBinError(22,0.04529723);
   hdirt_stack_3->SetBinError(23,0.008219618);
   hdirt_stack_3->SetBinError(25,0.0817191);
   hdirt_stack_3->SetEntries(14);

   ci = 1548;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,0.9329337);
   houtFV_stack_4->SetBinContent(2,0.2496199);
   houtFV_stack_4->SetBinContent(3,0.4732577);
   houtFV_stack_4->SetBinContent(4,0.4099883);
   houtFV_stack_4->SetBinContent(5,0.3175879);
   houtFV_stack_4->SetBinContent(6,0.149413);
   houtFV_stack_4->SetBinContent(7,0.2605754);
   houtFV_stack_4->SetBinContent(8,0.1129571);
   houtFV_stack_4->SetBinContent(9,0.2241195);
   houtFV_stack_4->SetBinContent(10,0.05100079);
   houtFV_stack_4->SetBinContent(11,0.2521434);
   houtFV_stack_4->SetBinContent(12,0.2113693);
   houtFV_stack_4->SetBinContent(13,0.1785497);
   houtFV_stack_4->SetBinContent(14,0.2368697);
   houtFV_stack_4->SetBinContent(15,0.3337899);
   houtFV_stack_4->SetBinContent(16,0.2605754);
   houtFV_stack_4->SetBinContent(17,0.3097815);
   houtFV_stack_4->SetBinContent(18,0.2259142);
   houtFV_stack_4->SetBinContent(19,0.2988259);
   houtFV_stack_4->SetBinContent(20,0.5594013);
   houtFV_stack_4->SetBinContent(21,0.4607655);
   houtFV_stack_4->SetBinContent(22,0.6001256);
   houtFV_stack_4->SetBinContent(23,1.018596);
   houtFV_stack_4->SetBinContent(24,1.506166);
   houtFV_stack_4->SetBinContent(25,1.157655);
   houtFV_stack_4->SetBinError(1,0.2269961);
   houtFV_stack_4->SetBinError(2,0.1110342);
   houtFV_stack_4->SetBinError(3,0.1695715);
   houtFV_stack_4->SetBinError(4,0.1533597);
   houtFV_stack_4->SetBinError(5,0.135629);
   houtFV_stack_4->SetBinError(6,0.08945557);
   houtFV_stack_4->SetBinError(7,0.1245668);
   houtFV_stack_4->SetBinError(8,0.0669989);
   houtFV_stack_4->SetBinError(9,0.1095603);
   houtFV_stack_4->SetBinError(10,0.02550039);
   houtFV_stack_4->SetBinError(11,0.1275199);
   houtFV_stack_4->SetBinError(12,0.1088158);
   houtFV_stack_4->SetBinError(13,0.09183346);
   houtFV_stack_4->SetBinError(14,0.1102997);
   houtFV_stack_4->SetBinError(15,0.150812);
   houtFV_stack_4->SetBinError(16,0.1245668);
   houtFV_stack_4->SetBinError(17,0.1385385);
   houtFV_stack_4->SetBinError(18,0.09475075);
   houtFV_stack_4->SetBinError(19,0.1265093);
   houtFV_stack_4->SetBinError(20,0.1775429);
   houtFV_stack_4->SetBinError(21,0.1603621);
   houtFV_stack_4->SetBinError(22,0.1791044);
   houtFV_stack_4->SetBinError(23,0.2423153);
   houtFV_stack_4->SetBinError(24,0.2921673);
   houtFV_stack_4->SetBinError(25,0.2334892);
   houtFV_stack_4->SetEntries(276);

   ci = 1549;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.0127502);
   hNCpi0inFVcoh_stack_5->SetEntries(1);

   ci = 1550;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02550039);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0180315);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.0127502);
   hNCpi0inFVqe_stack_6->SetEntries(6);

   ci = 1551;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5356956);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1621632);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.3480321);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2733256);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.4227385);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.149413);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.1749134);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.1002069);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.4099883);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.1876636);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5958572);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.3115761);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6341078);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3480321);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2496199);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.6705637);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2878704);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.475534);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.033141);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.561196);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.8855224);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.9584341);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.909228);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.705499);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.131827);
   hNCpi0inFVres_stack_7->SetBinError(1,0.167841);
   hNCpi0inFVres_stack_7->SetBinError(2,0.09035965);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1402876);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1252177);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1538888);
   hNCpi0inFVres_stack_7->SetBinError(6,0.08945557);
   hNCpi0inFVres_stack_7->SetBinError(7,0.09125478);
   hNCpi0inFVres_stack_7->SetBinError(8,0.0657745);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1533597);
   hNCpi0inFVres_stack_7->SetBinError(10,0.0921412);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1871762);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1271502);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1884745);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1402876);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1110342);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1975755);
   hNCpi0inFVres_stack_7->SetBinError(17,0.113209);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1459667);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2363335);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1688068);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2117203);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2277112);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2194911);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3030905);
   hNCpi0inFVres_stack_7->SetBinError(25,0.330899);
   hNCpi0inFVres_stack_7->SetEntries(398);

   ci = 1552;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2988259);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1366628);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1366628);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1129571);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1002069);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1366628);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1002069);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1749134);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3862826);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2605754);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2733256);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.6833139);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.25726);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1265093);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.08854226);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.08854226);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.0669989);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.0657745);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.08854226);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.0657745);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.09125478);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1420152);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1245668);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1252177);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1979865);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2604937);
   hNCpi0inFVdis_stack_8->SetEntries(118);

   ci = 1553;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1554;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1555;
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
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,0.6596082);
   hCCpi0inFV_stack_11->SetBinContent(2,0.5566674);
   hCCpi0inFV_stack_11->SetBinContent(3,0.2478252);
   hCCpi0inFV_stack_11->SetBinContent(4,0.2988259);
   hCCpi0inFV_stack_11->SetBinContent(5,0.1366628);
   hCCpi0inFV_stack_11->SetBinContent(6,0.480992);
   hCCpi0inFV_stack_11->SetBinContent(7,0.2368697);
   hCCpi0inFV_stack_11->SetBinContent(8,0.2302474);
   hCCpi0inFV_stack_11->SetBinContent(9,0.2860757);
   hCCpi0inFV_stack_11->SetBinContent(10,0.4165352);
   hCCpi0inFV_stack_11->SetBinContent(11,0.2099457);
   hCCpi0inFV_stack_11->SetBinContent(12,0.2860757);
   hCCpi0inFV_stack_11->SetBinContent(13,0.3480321);
   hCCpi0inFV_stack_11->SetBinContent(14,0.2860757);
   hCCpi0inFV_stack_11->SetBinContent(15,0.1621632);
   hCCpi0inFV_stack_11->SetBinContent(16,0.1257073);
   hCCpi0inFV_stack_11->SetBinContent(17,0.6341078);
   hCCpi0inFV_stack_11->SetBinContent(18,0.5570384);
   hCCpi0inFV_stack_11->SetBinContent(19,0.6094157);
   hCCpi0inFV_stack_11->SetBinContent(20,0.4636573);
   hCCpi0inFV_stack_11->SetBinContent(21,0.7894511);
   hCCpi0inFV_stack_11->SetBinContent(22,0.9495161);
   hCCpi0inFV_stack_11->SetBinContent(23,0.8727722);
   hCCpi0inFV_stack_11->SetBinContent(24,1.09165);
   hCCpi0inFV_stack_11->SetBinContent(25,2.13656);
   hCCpi0inFV_stack_11->SetBinError(1,0.1893351);
   hCCpi0inFV_stack_11->SetBinError(2,0.1808325);
   hCCpi0inFV_stack_11->SetBinError(3,0.1239126);
   hCCpi0inFV_stack_11->SetBinError(4,0.1265093);
   hCCpi0inFV_stack_11->SetBinError(5,0.08854226);
   hCCpi0inFV_stack_11->SetBinError(6,0.1735953);
   hCCpi0inFV_stack_11->SetBinError(7,0.1102997);
   hCCpi0inFV_stack_11->SetBinError(8,0.1191089);
   hCCpi0inFV_stack_11->SetBinError(9,0.1258651);
   hCCpi0inFV_stack_11->SetBinError(10,0.1500792);
   hCCpi0inFV_stack_11->SetBinError(11,0.1149353);
   hCCpi0inFV_stack_11->SetBinError(12,0.1258651);
   hCCpi0inFV_stack_11->SetBinError(13,0.1402876);
   hCCpi0inFV_stack_11->SetBinError(14,0.1258651);
   hCCpi0inFV_stack_11->SetBinError(15,0.09035965);
   hCCpi0inFV_stack_11->SetBinError(16,0.06820132);
   hCCpi0inFV_stack_11->SetBinError(17,0.1884745);
   hCCpi0inFV_stack_11->SetBinError(18,0.1809805);
   hCCpi0inFV_stack_11->SetBinError(19,0.1833174);
   hCCpi0inFV_stack_11->SetBinError(20,0.1557069);
   hCCpi0inFV_stack_11->SetBinError(21,0.1937489);
   hCCpi0inFV_stack_11->SetBinError(22,0.2341586);
   hCCpi0inFV_stack_11->SetBinError(23,0.211336);
   hCCpi0inFV_stack_11->SetBinError(24,0.2431356);
   hCCpi0inFV_stack_11->SetBinError(25,0.3310983);
   hCCpi0inFV_stack_11->SetEntries(346);

   ci = 1556;
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
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(2,0.06195629);
   hNCinFV_stack_12->SetBinContent(3,0.06195629);
   hNCinFV_stack_12->SetBinContent(4,0.0127502);
   hNCinFV_stack_12->SetBinContent(5,0.06195629);
   hNCinFV_stack_12->SetBinContent(7,0.0127502);
   hNCinFV_stack_12->SetBinContent(8,0.06195629);
   hNCinFV_stack_12->SetBinContent(9,0.01450996);
   hNCinFV_stack_12->SetBinContent(12,0.0127502);
   hNCinFV_stack_12->SetBinContent(13,0.0127502);
   hNCinFV_stack_12->SetBinContent(14,0.0127502);
   hNCinFV_stack_12->SetBinContent(15,0.06195629);
   hNCinFV_stack_12->SetBinContent(17,0.0127502);
   hNCinFV_stack_12->SetBinContent(18,0.0127502);
   hNCinFV_stack_12->SetBinContent(20,0.0127502);
   hNCinFV_stack_12->SetBinContent(22,0.07470649);
   hNCinFV_stack_12->SetBinContent(23,0.1621632);
   hNCinFV_stack_12->SetBinContent(24,0.3480321);
   hNCinFV_stack_12->SetBinContent(25,0.2496199);
   hNCinFV_stack_12->SetBinError(2,0.06195629);
   hNCinFV_stack_12->SetBinError(3,0.06195629);
   hNCinFV_stack_12->SetBinError(4,0.0127502);
   hNCinFV_stack_12->SetBinError(5,0.06195629);
   hNCinFV_stack_12->SetBinError(7,0.0127502);
   hNCinFV_stack_12->SetBinError(8,0.06195629);
   hNCinFV_stack_12->SetBinError(9,0.01287106);
   hNCinFV_stack_12->SetBinError(12,0.0127502);
   hNCinFV_stack_12->SetBinError(13,0.0127502);
   hNCinFV_stack_12->SetBinError(14,0.0127502);
   hNCinFV_stack_12->SetBinError(15,0.06195629);
   hNCinFV_stack_12->SetBinError(17,0.0127502);
   hNCinFV_stack_12->SetBinError(18,0.0127502);
   hNCinFV_stack_12->SetBinError(20,0.0127502);
   hNCinFV_stack_12->SetBinError(22,0.06325464);
   hNCinFV_stack_12->SetBinError(23,0.09035965);
   hNCinFV_stack_12->SetBinError(24,0.1402876);
   hNCinFV_stack_12->SetBinError(25,0.1110342);
   hNCinFV_stack_12->SetEntries(38);

   ci = 1557;
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
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.2109449);
   hnumuCCinFV_stack_13->SetBinContent(2,0.1540182);
   hnumuCCinFV_stack_13->SetBinContent(4,0.04188124);
   hnumuCCinFV_stack_13->SetBinContent(5,0.1883739);
   hnumuCCinFV_stack_13->SetBinContent(6,0.07470649);
   hnumuCCinFV_stack_13->SetBinContent(7,0.09301769);
   hnumuCCinFV_stack_13->SetBinContent(8,0.1123254);
   hnumuCCinFV_stack_13->SetBinContent(9,0.1893948);
   hnumuCCinFV_stack_13->SetBinContent(10,0.02823818);
   hnumuCCinFV_stack_13->SetBinContent(11,0.2292483);
   hnumuCCinFV_stack_13->SetBinContent(12,0.2207967);
   hnumuCCinFV_stack_13->SetBinContent(13,0.2751511);
   hnumuCCinFV_stack_13->SetBinContent(14,0.3963892);
   hnumuCCinFV_stack_13->SetBinContent(15,0.5422273);
   hnumuCCinFV_stack_13->SetBinContent(16,0.2457536);
   hnumuCCinFV_stack_13->SetBinContent(17,0.6724611);
   hnumuCCinFV_stack_13->SetBinContent(18,0.3260926);
   hnumuCCinFV_stack_13->SetBinContent(19,0.5545242);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2697054);
   hnumuCCinFV_stack_13->SetBinContent(21,0.6067117);
   hnumuCCinFV_stack_13->SetBinContent(22,0.4199316);
   hnumuCCinFV_stack_13->SetBinContent(23,0.5640011);
   hnumuCCinFV_stack_13->SetBinContent(24,0.8445432);
   hnumuCCinFV_stack_13->SetBinContent(25,1.325922);
   hnumuCCinFV_stack_13->SetBinError(1,0.1155749);
   hnumuCCinFV_stack_13->SetBinError(2,0.101447);
   hnumuCCinFV_stack_13->SetBinError(4,0.02436118);
   hnumuCCinFV_stack_13->SetBinError(5,0.107123);
   hnumuCCinFV_stack_13->SetBinError(6,0.06325464);
   hnumuCCinFV_stack_13->SetBinError(7,0.07858392);
   hnumuCCinFV_stack_13->SetBinError(8,0.07612797);
   hnumuCCinFV_stack_13->SetBinError(9,0.1079139);
   hnumuCCinFV_stack_13->SetBinError(10,0.02006104);
   hnumuCCinFV_stack_13->SetBinError(11,0.1264101);
   hnumuCCinFV_stack_13->SetBinError(12,0.1158585);
   hnumuCCinFV_stack_13->SetBinError(13,0.1276948);
   hnumuCCinFV_stack_13->SetBinError(14,0.1627802);
   hnumuCCinFV_stack_13->SetBinError(15,0.1894179);
   hnumuCCinFV_stack_13->SetBinError(16,0.121633);
   hnumuCCinFV_stack_13->SetBinError(17,0.3772196);
   hnumuCCinFV_stack_13->SetBinError(18,0.1323412);
   hnumuCCinFV_stack_13->SetBinError(19,0.1743304);
   hnumuCCinFV_stack_13->SetBinError(20,0.1187707);
   hnumuCCinFV_stack_13->SetBinError(21,0.1914564);
   hnumuCCinFV_stack_13->SetBinError(22,0.1513839);
   hnumuCCinFV_stack_13->SetBinError(23,0.1863045);
   hnumuCCinFV_stack_13->SetBinError(24,0.2288112);
   hnumuCCinFV_stack_13->SetBinError(25,0.5345271);
   hnumuCCinFV_stack_13->SetEntries(191);

   ci = 1558;
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
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_14->SetBinContent(5,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.04858173);
   hnueCCinFV_stack_14->SetBinContent(23,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(24,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(25,0.1156707);
   hnueCCinFV_stack_14->SetBinError(4,0.07948712);
   hnueCCinFV_stack_14->SetBinError(5,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.04858173);
   hnueCCinFV_stack_14->SetBinError(23,0.06195629);
   hnueCCinFV_stack_14->SetBinError(24,0.0127502);
   hnueCCinFV_stack_14->SetBinError(25,0.07789216);
   hnueCCinFV_stack_14->SetEntries(9);

   ci = 1559;
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
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__26->SetBinContent(1,2.575521);
   hmcerror__26->SetBinContent(2,1.532811);
   hmcerror__26->SetBinContent(3,1.264511);
   hmcerror__26->SetBinContent(4,1.526677);
   hmcerror__26->SetBinContent(5,1.400595);
   hmcerror__26->SetBinContent(6,0.924234);
   hmcerror__26->SetBinContent(7,1.113711);
   hmcerror__26->SetBinContent(8,0.8417622);
   hmcerror__26->SetBinContent(9,1.434653);
   hmcerror__26->SetBinContent(10,1.112008);
   hmcerror__26->SetBinContent(11,1.667941);
   hmcerror__26->SetBinContent(12,1.547185);
   hmcerror__26->SetBinContent(13,1.769475);
   hmcerror__26->SetBinContent(14,1.452982);
   hmcerror__26->SetBinContent(15,1.794782);
   hmcerror__26->SetBinContent(16,1.55217);
   hmcerror__26->SetBinContent(17,2.961346);
   hmcerror__26->SetBinContent(18,2.29025);
   hmcerror__26->SetBinContent(19,2.896977);
   hmcerror__26->SetBinContent(20,2.436222);
   hmcerror__26->SetBinContent(21,3.731186);
   hmcerror__26->SetBinContent(22,4.013123);
   hmcerror__26->SetBinContent(23,4.479122);
   hmcerror__26->SetBinContent(24,6.502519);
   hmcerror__26->SetBinContent(25,8.890221);
   hmcerror__26->SetBinError(1,1.666158);
   hmcerror__26->SetBinError(2,1.573635);
   hmcerror__26->SetBinError(3,1.682352);
   hmcerror__26->SetBinError(4,1.111656);
   hmcerror__26->SetBinError(5,1.519557);
   hmcerror__26->SetBinError(6,0.8190119);
   hmcerror__26->SetBinError(7,0.8574421);
   hmcerror__26->SetBinError(8,0.6098723);
   hmcerror__26->SetBinError(9,1.851925);
   hmcerror__26->SetBinError(10,0.8511121);
   hmcerror__26->SetBinError(11,1.342747);
   hmcerror__26->SetBinError(12,1.187618);
   hmcerror__26->SetBinError(13,1.078923);
   hmcerror__26->SetBinError(14,1.602675);
   hmcerror__26->SetBinError(15,1.389133);
   hmcerror__26->SetBinError(16,1.018425);
   hmcerror__26->SetBinError(17,1.648319);
   hmcerror__26->SetBinError(18,1.40035);
   hmcerror__26->SetBinError(19,1.942951);
   hmcerror__26->SetBinError(20,2.592802);
   hmcerror__26->SetBinError(21,1.769207);
   hmcerror__26->SetBinError(22,2.450008);
   hmcerror__26->SetBinError(23,2.509318);
   hmcerror__26->SetBinError(24,2.620139);
   hmcerror__26->SetBinError(25,4.151373);
   hmcerror__26->SetBinError(26,0.1094984);
   hmcerror__26->SetEntries(60.01759);

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
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   3,
   3,
   3,
   2,
   0,
   0,
   0,
   1,
   2,
   1,
   1,
   3,
   0,
   1,
   1,
   1,
   2,
   1,
   2,
   1,
   6,
   3,
   3,
   6,
   6};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   2.143368,
   2.143368,
   2.143368,
   2,
   0,
   0,
   0,
   1,
   2,
   1,
   1,
   2.143368,
   0,
   1,
   1,
   1,
   2,
   1,
   2,
   1,
   2.67925,
   2.143368,
   2.143368,
   2.67925,
   2.67925};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   1.72422,
   1.72422,
   1.72422,
   1.51917,
   1.1478,
   1.1478,
   1.1478,
   1.35971,
   1.51917,
   1.35971,
   1.35971,
   1.72422,
   1.1478,
   1.35971,
   1.35971,
   1.35971,
   1.51917,
   1.35971,
   1.51917,
   1.35971,
   2.41858,
   1.72422,
   1.72422,
   2.41858,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(9.260438);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 52.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 1.8","F");

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 6.4","F");

   ci = 1547;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.4","F");

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 10.8","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

   ci = 1550;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  14.5","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  4.3","F");

   ci = 1553;
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

   ci = 1554;
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

   ci = 1555;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 13.1","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 1.3","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 8.6","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 0.4","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.6469205,
   1.026633,
   1.330437,
   0.7281539,
   1.084937,
   0.886152,
   0.7698961,
   0.7245185,
   1.290852,
   0.7653829,
   0.8050324,
   0.7675988,
   0.6097418,
   1.103025,
   0.7739845,
   0.6561303,
   0.5566112,
   0.61144,
   0.6706822,
   1.064272,
   0.4741675,
   0.6104991,
   0.5602253,
   0.4029422,
   0.4669595};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0.6469205,
   1.026633,
   1.330437,
   0.7281539,
   1.084937,
   0.886152,
   0.7698961,
   0.7245185,
   1.290852,
   0.7653829,
   0.8050324,
   0.7675988,
   0.6097418,
   1.103025,
   0.7739845,
   0.6561303,
   0.5566112,
   0.61144,
   0.6706822,
   1.064272,
   0.4741675,
   0.6104991,
   0.5602253,
   0.4029422,
   0.4669595};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-1.2,1.2);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0.295525,
   0.2970572,
   0.342567,
   0.2934498,
   0.324726,
   0.4041123,
   0.3322828,
   0.3760375,
   0.3370869,
   0.3273492,
   0.3234524,
   0.3018418,
   0.2831592,
   0.2927784,
   0.2679056,
   0.3334133,
   0.2826035,
   0.2604131,
   0.3434007,
   0.294425,
   0.2258535,
   0.2230071,
   0.2528208,
   0.2274528,
   0.2263207};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0.295525,
   0.2970572,
   0.342567,
   0.2934498,
   0.324726,
   0.4041123,
   0.3322828,
   0.3760375,
   0.3370869,
   0.3273492,
   0.3234524,
   0.3018418,
   0.2831592,
   0.2927784,
   0.2679056,
   0.3334133,
   0.2826035,
   0.2604131,
   0.3434007,
   0.294425,
   0.2258535,
   0.2230071,
   0.2528208,
   0.2274528,
   0.2263207};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-1.2,1.2);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   1.164813,
   1.957189,
   2.372458,
   1.310035,
   0,
   0,
   0,
   1.187984,
   1.394065,
   0.8992739,
   0.5995416,
   1.939005,
   0,
   0.6882397,
   0.5571708,
   0.6442595,
   0.6753685,
   0.4366336,
   0.6903748,
   0.4104716,
   1.608068,
   0.7475476,
   0.6697741,
   0.9227193,
   0.6748989};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0.8322074,
   1.398325,
   1.695017,
   1.310035,
   0,
   0,
   0,
   1.187984,
   1.394065,
   0.8992739,
   0.5995416,
   1.385334,
   0,
   0.6882397,
   0.5571708,
   0.6442595,
   0.6753685,
   0.4366336,
   0.6903748,
   0.4104716,
   0.7180692,
   0.5340898,
   0.4785241,
   0.4120326,
   0.3013705};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0.6694644,
   1.124875,
   1.363546,
   0.995083,
   0.8195091,
   1.241893,
   1.030608,
   1.615314,
   1.058911,
   1.222752,
   0.8152027,
   1.114424,
   0.6486671,
   0.9358064,
   0.7575907,
   0.8760061,
   0.5129998,
   0.5936951,
   0.5243984,
   0.5581224,
   0.6482067,
   0.4296455,
   0.384946,
   0.3719451,
   0.2720495};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(4.109605);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_8_pi0_costheta_all",25,-1,1);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Jun  6 14:11:37 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-0.36,1.25641,39.80842);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__22->SetBinContent(1,1.494416);
   hmc__22->SetBinContent(2,1.365754);
   hmc__22->SetBinContent(3,1.179878);
   hmc__22->SetBinContent(4,1.090187);
   hmc__22->SetBinContent(5,0.9709927);
   hmc__22->SetBinContent(6,1.288036);
   hmc__22->SetBinContent(7,1.608365);
   hmc__22->SetBinContent(8,1.426354);
   hmc__22->SetBinContent(9,0.9324739);
   hmc__22->SetBinContent(10,0.9575635);
   hmc__22->SetBinContent(11,1.249261);
   hmc__22->SetBinContent(12,1.696197);
   hmc__22->SetBinContent(13,1.912821);
   hmc__22->SetBinContent(14,1.706758);
   hmc__22->SetBinContent(15,1.440873);
   hmc__22->SetBinContent(16,1.622104);
   hmc__22->SetBinContent(17,2.062203);
   hmc__22->SetBinContent(18,2.162372);
   hmc__22->SetBinContent(19,2.33981);
   hmc__22->SetBinContent(20,3.828933);
   hmc__22->SetBinContent(21,4.765377);
   hmc__22->SetBinContent(22,5.022341);
   hmc__22->SetBinContent(23,7.902762);
   hmc__22->SetBinContent(24,9.967603);
   hmc__22->SetBinContent(25,17.11004);
   hmc__22->SetBinError(1,1.410213);
   hmc__22->SetBinError(2,1.242513);
   hmc__22->SetBinError(3,0.7846815);
   hmc__22->SetBinError(4,1.429023);
   hmc__22->SetBinError(5,0.8902566);
   hmc__22->SetBinError(6,1.088447);
   hmc__22->SetBinError(7,0.993718);
   hmc__22->SetBinError(8,1.684037);
   hmc__22->SetBinError(9,0.7802382);
   hmc__22->SetBinError(10,0.7511263);
   hmc__22->SetBinError(11,1.02423);
   hmc__22->SetBinError(12,1.168484);
   hmc__22->SetBinError(13,1.343407);
   hmc__22->SetBinError(14,1.581501);
   hmc__22->SetBinError(15,1.329567);
   hmc__22->SetBinError(16,1.074116);
   hmc__22->SetBinError(17,1.437611);
   hmc__22->SetBinError(18,1.825415);
   hmc__22->SetBinError(19,1.221588);
   hmc__22->SetBinError(20,1.975446);
   hmc__22->SetBinError(21,3.099555);
   hmc__22->SetBinError(22,1.784735);
   hmc__22->SetBinError(23,3.146706);
   hmc__22->SetBinError(24,3.393312);
   hmc__22->SetBinError(25,5.227039);
   hmc__22->SetBinError(26,0.1094984);
   hmc__22->SetMinimum(-0.36);
   hmc__22->SetMaximum(37.8);
   hmc__22->SetEntries(76.16875);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-1,1);
   hs8_stack_8->SetMinimum(-2.61074e-09);
   hs8_stack_8->SetMaximum(17.96554);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.02550039);
   hbadmatch_stack_1->SetBinContent(2,0.07310785);
   hbadmatch_stack_1->SetBinContent(3,0.02550039);
   hbadmatch_stack_1->SetBinContent(4,0.07470649);
   hbadmatch_stack_1->SetBinContent(6,0.0127502);
   hbadmatch_stack_1->SetBinContent(7,0.0127502);
   hbadmatch_stack_1->SetBinContent(8,8.413401e-07);
   hbadmatch_stack_1->SetBinContent(10,0.07057949);
   hbadmatch_stack_1->SetBinContent(11,0.02550039);
   hbadmatch_stack_1->SetBinContent(12,0.1165412);
   hbadmatch_stack_1->SetBinContent(13,0.07691942);
   hbadmatch_stack_1->SetBinContent(14,0.05100079);
   hbadmatch_stack_1->SetBinContent(15,0.08745668);
   hbadmatch_stack_1->SetBinContent(16,0.07470649);
   hbadmatch_stack_1->SetBinContent(17,0.02550039);
   hbadmatch_stack_1->SetBinContent(18,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.1513405);
   hbadmatch_stack_1->SetBinContent(20,0.2643225);
   hbadmatch_stack_1->SetBinContent(21,0.05100079);
   hbadmatch_stack_1->SetBinContent(22,0.08799168);
   hbadmatch_stack_1->SetBinContent(23,0.2756442);
   hbadmatch_stack_1->SetBinContent(24,0.3735324);
   hbadmatch_stack_1->SetBinContent(25,0.5683321);
   hbadmatch_stack_1->SetBinError(1,0.0180315);
   hbadmatch_stack_1->SetBinError(2,0.07310785);
   hbadmatch_stack_1->SetBinError(3,0.0180315);
   hbadmatch_stack_1->SetBinError(4,0.06325464);
   hbadmatch_stack_1->SetBinError(6,0.0127502);
   hbadmatch_stack_1->SetBinError(7,0.0127502);
   hbadmatch_stack_1->SetBinError(8,8.413401e-07);
   hbadmatch_stack_1->SetBinError(10,0.07057949);
   hbadmatch_stack_1->SetBinError(11,0.0180315);
   hbadmatch_stack_1->SetBinError(12,0.0865492);
   hbadmatch_stack_1->SetBinError(13,0.07691942);
   hbadmatch_stack_1->SetBinError(14,0.02550039);
   hbadmatch_stack_1->SetBinError(15,0.06452687);
   hbadmatch_stack_1->SetBinError(16,0.06325464);
   hbadmatch_stack_1->SetBinError(17,0.0180315);
   hbadmatch_stack_1->SetBinError(18,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.08975058);
   hbadmatch_stack_1->SetBinError(20,0.1329312);
   hbadmatch_stack_1->SetBinError(21,0.02550039);
   hbadmatch_stack_1->SetBinError(22,0.06463471);
   hbadmatch_stack_1->SetBinError(23,0.125475);
   hbadmatch_stack_1->SetBinError(24,0.1414417);
   hbadmatch_stack_1->SetBinError(25,0.3533442);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.04907941);
   hext_stack_2->SetBinContent(2,0.2235888);
   hext_stack_2->SetBinContent(3,0.3980982);
   hext_stack_2->SetBinContent(4,0.03680956);
   hext_stack_2->SetBinContent(5,0.4594475);
   hext_stack_2->SetBinContent(6,0.2726682);
   hext_stack_2->SetBinContent(7,0.6707665);
   hext_stack_2->SetBinContent(8,0.2481285);
   hext_stack_2->SetBinContent(9,0.2726682);
   hext_stack_2->SetBinContent(10,0.2481285);
   hext_stack_2->SetBinContent(11,0.2726682);
   hext_stack_2->SetBinContent(12,0.707576);
   hext_stack_2->SetBinContent(13,0.5207967);
   hext_stack_2->SetBinContent(14,0.3217476);
   hext_stack_2->SetBinContent(15,0.6584966);
   hext_stack_2->SetBinContent(16,0.2849381);
   hext_stack_2->SetBinContent(17,0.09815882);
   hext_stack_2->SetBinContent(18,0.4839872);
   hext_stack_2->SetBinContent(19,0.06134926);
   hext_stack_2->SetBinContent(20,0.7443856);
   hext_stack_2->SetBinContent(21,0.7198459);
   hext_stack_2->SetBinContent(22,1.105674);
   hext_stack_2->SetBinContent(23,1.228373);
   hext_stack_2->SetBinContent(24,0.4321763);
   hext_stack_2->SetBinContent(25,1.923679);
   hext_stack_2->SetBinError(1,0.0245397);
   hext_stack_2->SetBinError(2,0.199804);
   hext_stack_2->SetBinError(3,0.2814979);
   hext_stack_2->SetBinError(4,0.02125201);
   hext_stack_2->SetBinError(5,0.2828318);
   hext_stack_2->SetBinError(6,0.2013053);
   hext_stack_2->SetBinError(7,0.3460707);
   hext_stack_2->SetBinError(8,0.2005561);
   hext_stack_2->SetBinError(9,0.2013053);
   hext_stack_2->SetBinError(10,0.2005561);
   hext_stack_2->SetBinError(11,0.2013053);
   hext_stack_2->SetBinError(12,0.3467226);
   hext_stack_2->SetBinError(13,0.2841594);
   hext_stack_2->SetBinError(14,0.2027956);
   hext_stack_2->SetBinError(15,0.3458531);
   hext_stack_2->SetBinError(16,0.2016789);
   hext_stack_2->SetBinError(17,0.03470438);
   hext_stack_2->SetBinError(18,0.2833636);
   hext_stack_2->SetBinError(19,0.02743622);
   hext_stack_2->SetBinError(20,0.3473733);
   hext_stack_2->SetBinError(21,0.3469397);
   hext_stack_2->SetBinError(22,0.4466068);
   hext_stack_2->SetBinError(23,0.4482892);
   hext_stack_2->SetBinError(24,0.2061092);
   hext_stack_2->SetBinError(25,0.5665944);
   hext_stack_2->SetEntries(253);

   ci = 1533;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.09789576);
   hdirt_stack_3->SetBinContent(2,0.01643923);
   hdirt_stack_3->SetBinContent(3,0.05242869);
   hdirt_stack_3->SetBinContent(4,0.008219617);
   hdirt_stack_3->SetBinContent(5,0.1232693);
   hdirt_stack_3->SetBinContent(6,0.05298468);
   hdirt_stack_3->SetBinContent(7,0.04420907);
   hdirt_stack_3->SetBinContent(10,0.01749792);
   hdirt_stack_3->SetBinContent(11,0.01643923);
   hdirt_stack_3->SetBinContent(12,0.009784245);
   hdirt_stack_3->SetBinContent(13,0.008219617);
   hdirt_stack_3->SetBinContent(15,0.009568449);
   hdirt_stack_3->SetBinContent(16,0.008219617);
   hdirt_stack_3->SetBinContent(17,0.04420907);
   hdirt_stack_3->SetBinContent(18,0.05069567);
   hdirt_stack_3->SetBinContent(19,0.09634832);
   hdirt_stack_3->SetBinContent(20,0.1572861);
   hdirt_stack_3->SetBinContent(21,0.06064831);
   hdirt_stack_3->SetBinContent(22,0.07001154);
   hdirt_stack_3->SetBinContent(23,0.1518091);
   hdirt_stack_3->SetBinContent(24,0.2087855);
   hdirt_stack_3->SetBinContent(25,0.1334885);
   hdirt_stack_3->SetBinError(1,0.06307161);
   hdirt_stack_3->SetBinError(2,0.01162429);
   hdirt_stack_3->SetBinError(3,0.0449667);
   hdirt_stack_3->SetBinError(4,0.008219618);
   hdirt_stack_3->SetBinError(5,0.07157855);
   hdirt_stack_3->SetBinError(6,0.05298468);
   hdirt_stack_3->SetBinError(7,0.04420907);
   hdirt_stack_3->SetBinError(10,0.01239552);
   hdirt_stack_3->SetBinError(11,0.01162429);
   hdirt_stack_3->SetBinError(12,0.009784245);
   hdirt_stack_3->SetBinError(13,0.008219618);
   hdirt_stack_3->SetBinError(15,0.009568449);
   hdirt_stack_3->SetBinError(16,0.008219618);
   hdirt_stack_3->SetBinError(17,0.04420907);
   hdirt_stack_3->SetBinError(18,0.05069567);
   hdirt_stack_3->SetBinError(19,0.06816686);
   hdirt_stack_3->SetBinError(20,0.07788461);
   hdirt_stack_3->SetBinError(21,0.04571177);
   hdirt_stack_3->SetBinError(22,0.04666086);
   hdirt_stack_3->SetBinError(23,0.07869535);
   hdirt_stack_3->SetBinError(24,0.09337135);
   hdirt_stack_3->SetBinError(25,0.07303713);
   hdirt_stack_3->SetEntries(57);

   ci = 1534;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,0.4938693);
   houtFV_stack_4->SetBinContent(2,0.5594013);
   houtFV_stack_4->SetBinContent(3,0.3370765);
   houtFV_stack_4->SetBinContent(4,0.2478252);
   houtFV_stack_4->SetBinContent(5,0.07470649);
   houtFV_stack_4->SetBinContent(6,0.3607822);
   houtFV_stack_4->SetBinContent(7,0.4494866);
   houtFV_stack_4->SetBinContent(8,0.53559);
   houtFV_stack_4->SetBinContent(9,0.3735324);
   houtFV_stack_4->SetBinContent(10,0.2605754);
   houtFV_stack_4->SetBinContent(11,0.3607822);
   houtFV_stack_4->SetBinContent(12,0.274855);
   houtFV_stack_4->SetBinContent(13,0.6705637);
   houtFV_stack_4->SetBinContent(14,0.3243263);
   houtFV_stack_4->SetBinContent(15,0.2004138);
   houtFV_stack_4->SetBinContent(16,0.2878704);
   houtFV_stack_4->SetBinContent(17,0.5849017);
   houtFV_stack_4->SetBinContent(18,0.5240903);
   houtFV_stack_4->SetBinContent(19,0.5516055);
   houtFV_stack_4->SetBinContent(20,0.7248884);
   houtFV_stack_4->SetBinContent(21,1.290163);
   houtFV_stack_4->SetBinContent(22,1.301022);
   houtFV_stack_4->SetBinContent(23,1.611494);
   houtFV_stack_4->SetBinContent(24,2.120652);
   houtFV_stack_4->SetBinContent(25,2.566914);
   houtFV_stack_4->SetBinError(1,0.1595729);
   houtFV_stack_4->SetBinError(2,0.1775429);
   houtFV_stack_4->SetBinError(3,0.1284224);
   houtFV_stack_4->SetBinError(4,0.1239126);
   houtFV_stack_4->SetBinError(5,0.06325464);
   houtFV_stack_4->SetBinError(6,0.1408658);
   houtFV_stack_4->SetBinError(7,0.1550493);
   houtFV_stack_4->SetBinError(8,0.1729707);
   houtFV_stack_4->SetBinError(9,0.1414417);
   houtFV_stack_4->SetBinError(10,0.1245668);
   houtFV_stack_4->SetBinError(11,0.1408658);
   houtFV_stack_4->SetBinError(12,0.1191389);
   houtFV_stack_4->SetBinError(13,0.1975755);
   houtFV_stack_4->SetBinError(14,0.1277878);
   houtFV_stack_4->SetBinError(15,0.09301919);
   houtFV_stack_4->SetBinError(16,0.113209);
   houtFV_stack_4->SetBinError(17,0.1784562);
   houtFV_stack_4->SetBinError(18,0.1714856);
   houtFV_stack_4->SetBinError(19,0.1685934);
   houtFV_stack_4->SetBinError(20,0.1994547);
   houtFV_stack_4->SetBinError(21,0.2756346);
   houtFV_stack_4->SetBinError(22,0.2557747);
   houtFV_stack_4->SetBinError(23,0.2938847);
   houtFV_stack_4->SetBinError(24,0.3482235);
   houtFV_stack_4->SetBinError(25,0.3695937);
   houtFV_stack_4->SetEntries(454);

   ci = 1535;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1366628);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3735324);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08854226);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1414417);
   hNCpi0inFVcoh_stack_5->SetEntries(16);

   ci = 1536;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06195629);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1537;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3097815);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.149413);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.08745668);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3607822);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.1621632);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.2605754);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.2241195);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.08745668);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.1129571);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.3097815);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.06195629);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.07650118);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.3225317);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5831071);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1986191);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1512077);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.646858);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.3243263);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5849017);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.5229454);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5374903);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.796271);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.628998);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.376063);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.687639);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1385385);
   hNCpi0inFVres_stack_7->SetBinError(2,0.08945557);
   hNCpi0inFVres_stack_7->SetBinError(3,0.06452687);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1408658);
   hNCpi0inFVres_stack_7->SetBinError(5,0.09035965);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1245668);
   hNCpi0inFVres_stack_7->SetBinError(7,0.1095603);
   hNCpi0inFVres_stack_7->SetBinError(8,0.06452687);
   hNCpi0inFVres_stack_7->SetBinError(9,0.0669989);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1385385);
   hNCpi0inFVres_stack_7->SetBinError(11,0.06195629);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03123147);
   hNCpi0inFVres_stack_7->SetBinError(13,0.139124);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1867415);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1080662);
   hNCpi0inFVres_stack_7->SetBinError(16,0.0705447);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1889053);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1277878);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1784562);
   hNCpi0inFVres_stack_7->SetBinError(20,0.167356);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1585713);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2090156);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3014771);
   hNCpi0inFVres_stack_7->SetBinError(24,0.361801);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3834933);
   hNCpi0inFVres_stack_7->SetEntries(346);

   ci = 1538;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2860757);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2605754);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1749134);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3990328);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.9329337);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.643543);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.06195629);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1258651);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1245668);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.09125478);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1425864);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2269961);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2966906);
   hNCpi0inFVdis_stack_8->SetEntries(117);

   ci = 1539;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1540;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1541;
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
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,0.3816269);
   hCCpi0inFV_stack_11->SetBinContent(2,0.1366628);
   hCCpi0inFV_stack_11->SetBinContent(3,0.1771822);
   hCCpi0inFV_stack_11->SetBinContent(4,0.149413);
   hCCpi0inFV_stack_11->SetBinContent(5,0.1366628);
   hCCpi0inFV_stack_11->SetBinContent(6,0.08745668);
   hCCpi0inFV_stack_11->SetBinContent(7,0.1621632);
   hCCpi0inFV_stack_11->SetBinContent(8,0.2715462);
   hCCpi0inFV_stack_11->SetBinContent(9,0.09860966);
   hCCpi0inFV_stack_11->SetBinContent(10,0.0127502);
   hCCpi0inFV_stack_11->SetBinContent(11,0.2860757);
   hCCpi0inFV_stack_11->SetBinContent(12,0.3461297);
   hCCpi0inFV_stack_11->SetBinContent(13,0.1002069);
   hCCpi0inFV_stack_11->SetBinContent(14,0.3370765);
   hCCpi0inFV_stack_11->SetBinContent(15,0.149413);
   hCCpi0inFV_stack_11->SetBinContent(16,0.6960641);
   hCCpi0inFV_stack_11->SetBinContent(17,0.4591944);
   hCCpi0inFV_stack_11->SetBinContent(18,0.26237);
   hCCpi0inFV_stack_11->SetBinContent(19,0.5017872);
   hCCpi0inFV_stack_11->SetBinContent(20,0.7580204);
   hCCpi0inFV_stack_11->SetBinContent(21,1.118803);
   hCCpi0inFV_stack_11->SetBinContent(22,0.9474787);
   hCCpi0inFV_stack_11->SetBinContent(23,1.499871);
   hCCpi0inFV_stack_11->SetBinContent(24,2.512724);
   hCCpi0inFV_stack_11->SetBinContent(25,5.251757);
   hCCpi0inFV_stack_11->SetBinError(1,0.1451698);
   hCCpi0inFV_stack_11->SetBinError(2,0.08854226);
   hCCpi0inFV_stack_11->SetBinError(3,0.09159934);
   hCCpi0inFV_stack_11->SetBinError(4,0.08945557);
   hCCpi0inFV_stack_11->SetBinError(5,0.08854226);
   hCCpi0inFV_stack_11->SetBinError(6,0.06452687);
   hCCpi0inFV_stack_11->SetBinError(7,0.09035965);
   hCCpi0inFV_stack_11->SetBinError(8,0.1303713);
   hCCpi0inFV_stack_11->SetBinError(9,0.07530007);
   hCCpi0inFV_stack_11->SetBinError(10,0.0127502);
   hCCpi0inFV_stack_11->SetBinError(11,0.1258651);
   hCCpi0inFV_stack_11->SetBinError(12,0.1330266);
   hCCpi0inFV_stack_11->SetBinError(13,0.0657745);
   hCCpi0inFV_stack_11->SetBinError(14,0.1284224);
   hCCpi0inFV_stack_11->SetBinError(15,0.08945557);
   hCCpi0inFV_stack_11->SetBinError(16,0.1983966);
   hCCpi0inFV_stack_11->SetBinError(17,0.1649097);
   hCCpi0inFV_stack_11->SetBinError(18,0.1117638);
   hCCpi0inFV_stack_11->SetBinError(19,0.1572534);
   hCCpi0inFV_stack_11->SetBinError(20,0.2078456);
   hCCpi0inFV_stack_11->SetBinError(21,0.2510836);
   hCCpi0inFV_stack_11->SetBinError(22,0.2205993);
   hCCpi0inFV_stack_11->SetBinError(23,0.2720864);
   hCCpi0inFV_stack_11->SetBinError(24,0.3688837);
   hCCpi0inFV_stack_11->SetBinError(25,0.5334685);
   hCCpi0inFV_stack_11->SetEntries(456);

   ci = 1542;
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
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.06195629);
   hNCinFV_stack_12->SetBinContent(2,0.06195629);
   hNCinFV_stack_12->SetBinContent(6,0.06195629);
   hNCinFV_stack_12->SetBinContent(8,0.0127502);
   hNCinFV_stack_12->SetBinContent(9,0.06195629);
   hNCinFV_stack_12->SetBinContent(10,0.0127502);
   hNCinFV_stack_12->SetBinContent(17,0.0127502);
   hNCinFV_stack_12->SetBinContent(18,0.0127502);
   hNCinFV_stack_12->SetBinContent(19,0.06195629);
   hNCinFV_stack_12->SetBinContent(21,0.07470649);
   hNCinFV_stack_12->SetBinContent(22,0.0127502);
   hNCinFV_stack_12->SetBinContent(23,0.2605754);
   hNCinFV_stack_12->SetBinContent(24,0.1621632);
   hNCinFV_stack_12->SetBinContent(25,0.3735324);
   hNCinFV_stack_12->SetBinError(1,0.06195629);
   hNCinFV_stack_12->SetBinError(2,0.06195629);
   hNCinFV_stack_12->SetBinError(6,0.06195629);
   hNCinFV_stack_12->SetBinError(8,0.0127502);
   hNCinFV_stack_12->SetBinError(9,0.06195629);
   hNCinFV_stack_12->SetBinError(10,0.0127502);
   hNCinFV_stack_12->SetBinError(17,0.0127502);
   hNCinFV_stack_12->SetBinError(18,0.0127502);
   hNCinFV_stack_12->SetBinError(19,0.06195629);
   hNCinFV_stack_12->SetBinError(21,0.06325464);
   hNCinFV_stack_12->SetBinError(22,0.0127502);
   hNCinFV_stack_12->SetBinError(23,0.1245668);
   hNCinFV_stack_12->SetBinError(24,0.09035965);
   hNCinFV_stack_12->SetBinError(25,0.1414417);
   hNCinFV_stack_12->SetEntries(32);

   ci = 1543;
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
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.07470649);
   hnumuCCinFV_stack_13->SetBinContent(2,0.02127255);
   hnumuCCinFV_stack_13->SetBinContent(3,0.0893852);
   hnumuCCinFV_stack_13->SetBinContent(4,0.2124307);
   hnumuCCinFV_stack_13->SetBinContent(5,0.01474336);
   hnumuCCinFV_stack_13->SetBinContent(6,0.1169062);
   hnumuCCinFV_stack_13->SetBinContent(7,0.0448703);
   hnumuCCinFV_stack_13->SetBinContent(8,0.1961751);
   hnumuCCinFV_stack_13->SetBinContent(11,0.1511323);
   hnumuCCinFV_stack_13->SetBinContent(12,0.02814689);
   hnumuCCinFV_stack_13->SetBinContent(13,0.1516265);
   hnumuCCinFV_stack_13->SetBinContent(14,0.01479296);
   hnumuCCinFV_stack_13->SetBinContent(15,0.07494888);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1190973);
   hnumuCCinFV_stack_13->SetBinContent(17,0.1159239);
   hnumuCCinFV_stack_13->SetBinContent(18,0.3802393);
   hnumuCCinFV_stack_13->SetBinContent(19,0.2685646);
   hnumuCCinFV_stack_13->SetBinContent(20,0.3710088);
   hnumuCCinFV_stack_13->SetBinContent(21,0.5901879);
   hnumuCCinFV_stack_13->SetBinContent(22,0.4642726);
   hnumuCCinFV_stack_13->SetBinContent(23,0.723053);
   hnumuCCinFV_stack_13->SetBinContent(24,0.7119107);
   hnumuCCinFV_stack_13->SetBinContent(25,1.376825);
   hnumuCCinFV_stack_13->SetBinError(1,0.06325464);
   hnumuCCinFV_stack_13->SetBinError(2,0.01533617);
   hnumuCCinFV_stack_13->SetBinError(3,0.06493546);
   hnumuCCinFV_stack_13->SetBinError(4,0.1231989);
   hnumuCCinFV_stack_13->SetBinError(5,0.01474336);
   hnumuCCinFV_stack_13->SetBinError(6,0.08169708);
   hnumuCCinFV_stack_13->SetBinError(7,0.02646372);
   hnumuCCinFV_stack_13->SetBinError(8,0.1135739);
   hnumuCCinFV_stack_13->SetBinError(11,0.1068681);
   hnumuCCinFV_stack_13->SetBinError(12,0.01999064);
   hnumuCCinFV_stack_13->SetBinError(13,0.09770314);
   hnumuCCinFV_stack_13->SetBinError(14,0.01479296);
   hnumuCCinFV_stack_13->SetBinError(15,0.07494888);
   hnumuCCinFV_stack_13->SetBinError(16,0.07939952);
   hnumuCCinFV_stack_13->SetBinError(17,0.06762625);
   hnumuCCinFV_stack_13->SetBinError(18,0.1553516);
   hnumuCCinFV_stack_13->SetBinError(19,0.1249218);
   hnumuCCinFV_stack_13->SetBinError(20,0.149899);
   hnumuCCinFV_stack_13->SetBinError(21,0.1951039);
   hnumuCCinFV_stack_13->SetBinError(22,0.1600278);
   hnumuCCinFV_stack_13->SetBinError(23,0.217875);
   hnumuCCinFV_stack_13->SetBinError(24,0.1973178);
   hnumuCCinFV_stack_13->SetBinError(25,0.3437915);
   hnumuCCinFV_stack_13->SetEntries(151);

   ci = 1544;
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
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(23,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(25,0.2107977);
   hnueCCinFV_stack_14->SetBinError(23,0.06195629);
   hnueCCinFV_stack_14->SetBinError(25,0.1110102);
   hnueCCinFV_stack_14->SetEntries(6);

   ci = 1545;
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
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__23->SetBinContent(1,1.494416);
   hmcerror__23->SetBinContent(2,1.365754);
   hmcerror__23->SetBinContent(3,1.179878);
   hmcerror__23->SetBinContent(4,1.090187);
   hmcerror__23->SetBinContent(5,0.9709927);
   hmcerror__23->SetBinContent(6,1.288036);
   hmcerror__23->SetBinContent(7,1.608365);
   hmcerror__23->SetBinContent(8,1.426354);
   hmcerror__23->SetBinContent(9,0.9324739);
   hmcerror__23->SetBinContent(10,0.9575635);
   hmcerror__23->SetBinContent(11,1.249261);
   hmcerror__23->SetBinContent(12,1.696197);
   hmcerror__23->SetBinContent(13,1.912821);
   hmcerror__23->SetBinContent(14,1.706758);
   hmcerror__23->SetBinContent(15,1.440873);
   hmcerror__23->SetBinContent(16,1.622104);
   hmcerror__23->SetBinContent(17,2.062203);
   hmcerror__23->SetBinContent(18,2.162372);
   hmcerror__23->SetBinContent(19,2.33981);
   hmcerror__23->SetBinContent(20,3.828933);
   hmcerror__23->SetBinContent(21,4.765377);
   hmcerror__23->SetBinContent(22,5.022341);
   hmcerror__23->SetBinContent(23,7.902762);
   hmcerror__23->SetBinContent(24,9.967603);
   hmcerror__23->SetBinContent(25,17.11004);
   hmcerror__23->SetBinError(1,1.410213);
   hmcerror__23->SetBinError(2,1.242513);
   hmcerror__23->SetBinError(3,0.7846815);
   hmcerror__23->SetBinError(4,1.429023);
   hmcerror__23->SetBinError(5,0.8902566);
   hmcerror__23->SetBinError(6,1.088447);
   hmcerror__23->SetBinError(7,0.993718);
   hmcerror__23->SetBinError(8,1.684037);
   hmcerror__23->SetBinError(9,0.7802382);
   hmcerror__23->SetBinError(10,0.7511263);
   hmcerror__23->SetBinError(11,1.02423);
   hmcerror__23->SetBinError(12,1.168484);
   hmcerror__23->SetBinError(13,1.343407);
   hmcerror__23->SetBinError(14,1.581501);
   hmcerror__23->SetBinError(15,1.329567);
   hmcerror__23->SetBinError(16,1.074116);
   hmcerror__23->SetBinError(17,1.437611);
   hmcerror__23->SetBinError(18,1.825415);
   hmcerror__23->SetBinError(19,1.221588);
   hmcerror__23->SetBinError(20,1.975446);
   hmcerror__23->SetBinError(21,3.099555);
   hmcerror__23->SetBinError(22,1.784735);
   hmcerror__23->SetBinError(23,3.146706);
   hmcerror__23->SetBinError(24,3.393312);
   hmcerror__23->SetBinError(25,5.227039);
   hmcerror__23->SetBinError(26,0.1094984);
   hmcerror__23->SetEntries(76.16875);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   2,
   2,
   2,
   1,
   0,
   3,
   0,
   0,
   0,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   2,
   2,
   4,
   4,
   4,
   4,
   14,
   18};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   2,
   2,
   2,
   1,
   0,
   2.143368,
   0,
   0,
   0,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   2,
   2,
   2.29683,
   2.29683,
   2.29683,
   2.29683,
   3.9102,
   4.4008};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   1.51917,
   1.51917,
   1.51917,
   1.35971,
   1.1478,
   1.72422,
   1.1478,
   1.1478,
   1.1478,
   1.35971,
   1.35971,
   1.35971,
   1.35971,
   1.35971,
   1.1478,
   1.1478,
   1.1478,
   1.51917,
   1.51917,
   1.98186,
   1.98186,
   1.98186,
   1.98186,
   3.6898,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(24.40438);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 67.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2.6","F");

   ci = 1532;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.4","F");

   ci = 1533;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 17.1","F");

   ci = 1535;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1537;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  13.6","F");

   ci = 1538;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  4.5","F");

   ci = 1539;
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

   ci = 1540;
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

   ci = 1541;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 16.8","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 1.2","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 6.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 0.3","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   0.9436547,
   0.9097631,
   0.665053,
   1.310806,
   0.916852,
   0.8450434,
   0.6178435,
   1.180659,
   0.83674,
   0.7844141,
   0.8198686,
   0.6888849,
   0.7023172,
   0.9266111,
   0.9227511,
   0.6621745,
   0.6971238,
   0.8441726,
   0.5220887,
   0.5159259,
   0.6504322,
   0.3553592,
   0.398178,
   0.3404341,
   0.3054954};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0.9436547,
   0.9097631,
   0.665053,
   1.310806,
   0.916852,
   0.8450434,
   0.6178435,
   1.180659,
   0.83674,
   0.7844141,
   0.8198686,
   0.6888849,
   0.7023172,
   0.9266111,
   0.9227511,
   0.6621745,
   0.6971238,
   0.8441726,
   0.5220887,
   0.5159259,
   0.6504322,
   0.3553592,
   0.398178,
   0.3404341,
   0.3054954};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.3420221,
   0.3199129,
   0.3496457,
   0.3392227,
   0.3829321,
   0.3192387,
   0.3088417,
   0.359701,
   0.4114599,
   0.3484511,
   0.3074276,
   0.27752,
   0.2833456,
   0.3207669,
   0.3296509,
   0.307071,
   0.2829888,
   0.3076993,
   0.2620251,
   0.2411269,
   0.2564341,
   0.2157321,
   0.2266993,
   0.1949916,
   0.1861726};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.3420221,
   0.3199129,
   0.3496457,
   0.3392227,
   0.3829321,
   0.3192387,
   0.3088417,
   0.359701,
   0.4114599,
   0.3484511,
   0.3074276,
   0.27752,
   0.2833456,
   0.3207669,
   0.3296509,
   0.307071,
   0.2829888,
   0.3076993,
   0.2620251,
   0.2411269,
   0.2564341,
   0.2157321,
   0.2266993,
   0.1949916,
   0.1861726};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   1.338315,
   1.464392,
   1.69509,
   0.917274,
   0,
   2.329127,
   0,
   0,
   0,
   1.044317,
   0.8004733,
   0.5895542,
   0.5227881,
   0.5859062,
   0,
   0,
   0,
   0.9249104,
   0.8547704,
   1.044677,
   0.8393879,
   0.7964414,
   0.5061522,
   1.40455,
   1.052014};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   1.338315,
   1.464392,
   1.69509,
   0.917274,
   0,
   1.664059,
   0,
   0,
   0,
   1.044317,
   0.8004733,
   0.5895542,
   0.5227881,
   0.5859062,
   0,
   0,
   0,
   0.9249104,
   0.8547704,
   0.5998616,
   0.4819828,
   0.4573226,
   0.2906364,
   0.3922909,
   0.2572057};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   1.016564,
   1.11233,
   1.287565,
   1.247227,
   1.182089,
   1.338642,
   0.7136439,
   0.8047091,
   1.230919,
   1.419968,
   1.088412,
   0.8016227,
   0.7108402,
   0.7966625,
   0.7966004,
   0.7075996,
   0.5565893,
   0.7025481,
   0.6492708,
   0.5176011,
   0.4158873,
   0.3946088,
   0.2507807,
   0.3701793,
   0.24464};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(4.034546);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_8_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

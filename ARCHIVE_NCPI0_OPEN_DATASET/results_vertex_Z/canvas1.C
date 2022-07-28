#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr 15 15:15:55 2022) by ROOT version 6.26/00
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
   pad1->Range(-161.5385,-20.1626,1184.615,1698.964);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hmc__1->SetBinContent(0,3.169787);
   hmc__1->SetBinContent(1,1008.13);
   hmc__1->SetBinContent(2,759.6816);
   hmc__1->SetBinContent(3,769.7245);
   hmc__1->SetBinContent(4,765.8813);
   hmc__1->SetBinContent(5,766.0036);
   hmc__1->SetBinContent(6,754.1057);
   hmc__1->SetBinContent(7,769.1771);
   hmc__1->SetBinContent(8,760.2839);
   hmc__1->SetBinContent(9,744.4707);
   hmc__1->SetBinContent(10,732.3838);
   hmc__1->SetBinContent(11,742.004);
   hmc__1->SetBinContent(12,745.7578);
   hmc__1->SetBinContent(13,753.5905);
   hmc__1->SetBinContent(14,740.8586);
   hmc__1->SetBinContent(15,750.812);
   hmc__1->SetBinContent(16,736.8486);
   hmc__1->SetBinContent(17,820.1808);
   hmc__1->SetBinContent(18,755.7426);
   hmc__1->SetBinContent(19,721.5906);
   hmc__1->SetBinContent(20,725.949);
   hmc__1->SetBinContent(21,724.5477);
   hmc__1->SetBinContent(22,720.2432);
   hmc__1->SetBinContent(23,697.325);
   hmc__1->SetBinContent(24,715.34);
   hmc__1->SetBinContent(25,325.4195);
   hmc__1->SetBinContent(26,0.06605495);
   hmc__1->SetBinError(0,0.4094911);
   hmc__1->SetBinError(1,158.2641);
   hmc__1->SetBinError(2,101.3074);
   hmc__1->SetBinError(3,102.4372);
   hmc__1->SetBinError(4,101.3878);
   hmc__1->SetBinError(5,102.6036);
   hmc__1->SetBinError(6,100.7481);
   hmc__1->SetBinError(7,104.6471);
   hmc__1->SetBinError(8,104.3012);
   hmc__1->SetBinError(9,99.78014);
   hmc__1->SetBinError(10,98.94427);
   hmc__1->SetBinError(11,99.1595);
   hmc__1->SetBinError(12,100.0513);
   hmc__1->SetBinError(13,100.8558);
   hmc__1->SetBinError(14,101.2671);
   hmc__1->SetBinError(15,102.3555);
   hmc__1->SetBinError(16,101.8523);
   hmc__1->SetBinError(17,98.32166);
   hmc__1->SetBinError(18,96.06136);
   hmc__1->SetBinError(19,97.41705);
   hmc__1->SetBinError(20,97.07377);
   hmc__1->SetBinError(21,98.45426);
   hmc__1->SetBinError(22,96.2905);
   hmc__1->SetBinError(23,94.00668);
   hmc__1->SetBinError(24,97.64903);
   hmc__1->SetBinError(25,44.29828);
   hmc__1->SetBinError(26,0.2856391);
   hmc__1->SetMinimum(-20.1626);
   hmc__1->SetMaximum(1613.008);
   hmc__1->SetEntries(16480.37);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1050);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(1058.536);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hbadmatch_stack_1->SetBinContent(0,0.2991319);
   hbadmatch_stack_1->SetBinContent(1,45.86532);
   hbadmatch_stack_1->SetBinContent(2,21.83997);
   hbadmatch_stack_1->SetBinContent(3,20.7877);
   hbadmatch_stack_1->SetBinContent(4,19.61228);
   hbadmatch_stack_1->SetBinContent(5,18.63533);
   hbadmatch_stack_1->SetBinContent(6,20.33578);
   hbadmatch_stack_1->SetBinContent(7,17.46627);
   hbadmatch_stack_1->SetBinContent(8,16.2233);
   hbadmatch_stack_1->SetBinContent(9,15.21462);
   hbadmatch_stack_1->SetBinContent(10,15.79394);
   hbadmatch_stack_1->SetBinContent(11,15.39887);
   hbadmatch_stack_1->SetBinContent(12,13.78996);
   hbadmatch_stack_1->SetBinContent(13,14.9233);
   hbadmatch_stack_1->SetBinContent(14,12.75365);
   hbadmatch_stack_1->SetBinContent(15,14.83044);
   hbadmatch_stack_1->SetBinContent(16,18.48509);
   hbadmatch_stack_1->SetBinContent(17,27.21941);
   hbadmatch_stack_1->SetBinContent(18,21.23071);
   hbadmatch_stack_1->SetBinContent(19,14.29404);
   hbadmatch_stack_1->SetBinContent(20,18.37134);
   hbadmatch_stack_1->SetBinContent(21,19.80962);
   hbadmatch_stack_1->SetBinContent(22,18.58956);
   hbadmatch_stack_1->SetBinContent(23,22.62777);
   hbadmatch_stack_1->SetBinContent(24,34.12358);
   hbadmatch_stack_1->SetBinContent(25,22.13528);
   hbadmatch_stack_1->SetBinError(0,0.1372386);
   hbadmatch_stack_1->SetBinError(1,1.933588);
   hbadmatch_stack_1->SetBinError(2,1.179088);
   hbadmatch_stack_1->SetBinError(3,1.276899);
   hbadmatch_stack_1->SetBinError(4,1.227656);
   hbadmatch_stack_1->SetBinError(5,1.088553);
   hbadmatch_stack_1->SetBinError(6,1.26096);
   hbadmatch_stack_1->SetBinError(7,1.094389);
   hbadmatch_stack_1->SetBinError(8,1.417856);
   hbadmatch_stack_1->SetBinError(9,1.029608);
   hbadmatch_stack_1->SetBinError(10,0.9943477);
   hbadmatch_stack_1->SetBinError(11,1.082912);
   hbadmatch_stack_1->SetBinError(12,1.197666);
   hbadmatch_stack_1->SetBinError(13,0.9972607);
   hbadmatch_stack_1->SetBinError(14,1.018088);
   hbadmatch_stack_1->SetBinError(15,1.29818);
   hbadmatch_stack_1->SetBinError(16,1.327961);
   hbadmatch_stack_1->SetBinError(17,1.370747);
   hbadmatch_stack_1->SetBinError(18,1.361109);
   hbadmatch_stack_1->SetBinError(19,1.052421);
   hbadmatch_stack_1->SetBinError(20,1.63062);
   hbadmatch_stack_1->SetBinError(21,1.413166);
   hbadmatch_stack_1->SetBinError(22,1.20271);
   hbadmatch_stack_1->SetBinError(23,1.570869);
   hbadmatch_stack_1->SetBinError(24,1.665341);
   hbadmatch_stack_1->SetBinError(25,1.2833);
   hbadmatch_stack_1->SetEntries(12616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hext_stack_2->SetBinContent(0,0.04907941);
   hext_stack_2->SetBinContent(1,142.5731);
   hext_stack_2->SetBinContent(2,94.1321);
   hext_stack_2->SetBinContent(3,101.0743);
   hext_stack_2->SetBinContent(4,95.30316);
   hext_stack_2->SetBinContent(5,92.49609);
   hext_stack_2->SetBinContent(6,97.89764);
   hext_stack_2->SetBinContent(7,91.16275);
   hext_stack_2->SetBinContent(8,76.88577);
   hext_stack_2->SetBinContent(9,83.90568);
   hext_stack_2->SetBinContent(10,70.75478);
   hext_stack_2->SetBinContent(11,74.42767);
   hext_stack_2->SetBinContent(12,79.44613);
   hext_stack_2->SetBinContent(13,83.0999);
   hext_stack_2->SetBinContent(14,76.89261);
   hext_stack_2->SetBinContent(15,74.5531);
   hext_stack_2->SetBinContent(16,71.98454);
   hext_stack_2->SetBinContent(17,163.6601);
   hext_stack_2->SetBinContent(18,125.6159);
   hext_stack_2->SetBinContent(19,78.26688);
   hext_stack_2->SetBinContent(20,74.56129);
   hext_stack_2->SetBinContent(21,72.77124);
   hext_stack_2->SetBinContent(22,63.28235);
   hext_stack_2->SetBinContent(23,62.7234);
   hext_stack_2->SetBinContent(24,68.00906);
   hext_stack_2->SetBinContent(25,42.4409);
   hext_stack_2->SetBinError(0,0.0245397);
   hext_stack_2->SetBinError(1,4.874307);
   hext_stack_2->SetBinError(2,3.956577);
   hext_stack_2->SetBinError(3,4.128065);
   hext_stack_2->SetBinError(4,3.925382);
   hext_stack_2->SetBinError(5,3.92573);
   hext_stack_2->SetBinError(6,4.022937);
   hext_stack_2->SetBinError(7,3.909407);
   hext_stack_2->SetBinError(8,3.536356);
   hext_stack_2->SetBinError(9,3.75716);
   hext_stack_2->SetBinError(10,3.363813);
   hext_stack_2->SetBinError(11,3.500369);
   hext_stack_2->SetBinError(12,3.603244);
   hext_stack_2->SetBinError(13,3.695974);
   hext_stack_2->SetBinError(14,3.572974);
   hext_stack_2->SetBinError(15,3.505895);
   hext_stack_2->SetBinError(16,3.420834);
   hext_stack_2->SetBinError(17,5.350487);
   hext_stack_2->SetBinError(18,4.641464);
   hext_stack_2->SetBinError(19,3.621824);
   hext_stack_2->SetBinError(20,3.52178);
   hext_stack_2->SetBinError(21,3.497464);
   hext_stack_2->SetBinError(22,3.248745);
   hext_stack_2->SetBinError(23,3.259117);
   hext_stack_2->SetBinError(24,3.364331);
   hext_stack_2->SetBinError(25,2.650837);
   hext_stack_2->SetEntries(39405);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hdirt_stack_3->SetBinContent(0,0.2853052);
   hdirt_stack_3->SetBinContent(1,197.5452);
   hdirt_stack_3->SetBinContent(2,42.73812);
   hdirt_stack_3->SetBinContent(3,31.90672);
   hdirt_stack_3->SetBinContent(4,26.67566);
   hdirt_stack_3->SetBinContent(5,22.07158);
   hdirt_stack_3->SetBinContent(6,19.48103);
   hdirt_stack_3->SetBinContent(7,17.11119);
   hdirt_stack_3->SetBinContent(8,17.09211);
   hdirt_stack_3->SetBinContent(9,13.90142);
   hdirt_stack_3->SetBinContent(10,14.75379);
   hdirt_stack_3->SetBinContent(11,14.89015);
   hdirt_stack_3->SetBinContent(12,14.04178);
   hdirt_stack_3->SetBinContent(13,14.11557);
   hdirt_stack_3->SetBinContent(14,12.88347);
   hdirt_stack_3->SetBinContent(15,13.75954);
   hdirt_stack_3->SetBinContent(16,13.49908);
   hdirt_stack_3->SetBinContent(17,23.37951);
   hdirt_stack_3->SetBinContent(18,19.80585);
   hdirt_stack_3->SetBinContent(19,14.50941);
   hdirt_stack_3->SetBinContent(20,11.66089);
   hdirt_stack_3->SetBinContent(21,11.82893);
   hdirt_stack_3->SetBinContent(22,10.21009);
   hdirt_stack_3->SetBinContent(23,11.10915);
   hdirt_stack_3->SetBinContent(24,15.72711);
   hdirt_stack_3->SetBinContent(25,7.81066);
   hdirt_stack_3->SetBinError(0,0.09951993);
   hdirt_stack_3->SetBinError(1,3.943972);
   hdirt_stack_3->SetBinError(2,1.717537);
   hdirt_stack_3->SetBinError(3,1.372949);
   hdirt_stack_3->SetBinError(4,1.311612);
   hdirt_stack_3->SetBinError(5,1.255002);
   hdirt_stack_3->SetBinError(6,1.116861);
   hdirt_stack_3->SetBinError(7,0.8941779);
   hdirt_stack_3->SetBinError(8,1.100835);
   hdirt_stack_3->SetBinError(9,0.9165989);
   hdirt_stack_3->SetBinError(10,0.8985135);
   hdirt_stack_3->SetBinError(11,1.098931);
   hdirt_stack_3->SetBinError(12,0.8492826);
   hdirt_stack_3->SetBinError(13,0.8530553);
   hdirt_stack_3->SetBinError(14,0.934209);
   hdirt_stack_3->SetBinError(15,0.9808121);
   hdirt_stack_3->SetBinError(16,0.7897592);
   hdirt_stack_3->SetBinError(17,1.258907);
   hdirt_stack_3->SetBinError(18,1.012678);
   hdirt_stack_3->SetBinError(19,1.096913);
   hdirt_stack_3->SetBinError(20,0.8549307);
   hdirt_stack_3->SetBinError(21,0.7875421);
   hdirt_stack_3->SetBinError(22,0.6803106);
   hdirt_stack_3->SetBinError(23,0.7128668);
   hdirt_stack_3->SetBinError(24,1.037641);
   hdirt_stack_3->SetBinError(25,0.5831009);
   hdirt_stack_3->SetEntries(20994);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   houtFV_stack_4->SetBinContent(0,2.053532);
   houtFV_stack_4->SetBinContent(1,157.5663);
   houtFV_stack_4->SetBinContent(2,44.74821);
   houtFV_stack_4->SetBinContent(3,42.84669);
   houtFV_stack_4->SetBinContent(4,43.13425);
   houtFV_stack_4->SetBinContent(5,40.40984);
   houtFV_stack_4->SetBinContent(6,39.1899);
   houtFV_stack_4->SetBinContent(7,39.75396);
   houtFV_stack_4->SetBinContent(8,38.16972);
   houtFV_stack_4->SetBinContent(9,40.12779);
   houtFV_stack_4->SetBinContent(10,37.62949);
   houtFV_stack_4->SetBinContent(11,35.78455);
   houtFV_stack_4->SetBinContent(12,40.58246);
   houtFV_stack_4->SetBinContent(13,39.49012);
   houtFV_stack_4->SetBinContent(14,36.55973);
   houtFV_stack_4->SetBinContent(15,38.73959);
   houtFV_stack_4->SetBinContent(16,39.50657);
   houtFV_stack_4->SetBinContent(17,42.83602);
   houtFV_stack_4->SetBinContent(18,42.40769);
   houtFV_stack_4->SetBinContent(19,34.98227);
   houtFV_stack_4->SetBinContent(20,36.05097);
   houtFV_stack_4->SetBinContent(21,34.63009);
   houtFV_stack_4->SetBinContent(22,31.832);
   houtFV_stack_4->SetBinContent(23,27.21429);
   houtFV_stack_4->SetBinContent(24,28.72766);
   houtFV_stack_4->SetBinContent(25,14.88207);
   houtFV_stack_4->SetBinError(0,0.3339828);
   houtFV_stack_4->SetBinError(1,3.684003);
   houtFV_stack_4->SetBinError(2,1.96124);
   houtFV_stack_4->SetBinError(3,2.065432);
   houtFV_stack_4->SetBinError(4,2.023206);
   houtFV_stack_4->SetBinError(5,1.841947);
   houtFV_stack_4->SetBinError(6,1.651837);
   houtFV_stack_4->SetBinError(7,1.745139);
   houtFV_stack_4->SetBinError(8,1.641254);
   houtFV_stack_4->SetBinError(9,1.90931);
   houtFV_stack_4->SetBinError(10,1.560008);
   houtFV_stack_4->SetBinError(11,1.617152);
   houtFV_stack_4->SetBinError(12,1.825008);
   houtFV_stack_4->SetBinError(13,1.757751);
   houtFV_stack_4->SetBinError(14,1.530091);
   houtFV_stack_4->SetBinError(15,1.889076);
   houtFV_stack_4->SetBinError(16,1.801596);
   houtFV_stack_4->SetBinError(17,1.855324);
   houtFV_stack_4->SetBinError(18,1.792798);
   houtFV_stack_4->SetBinError(19,1.503927);
   houtFV_stack_4->SetBinError(20,1.753062);
   houtFV_stack_4->SetBinError(21,1.554469);
   houtFV_stack_4->SetBinError(22,1.359941);
   houtFV_stack_4->SetBinError(23,1.263522);
   houtFV_stack_4->SetBinError(24,1.428459);
   houtFV_stack_4->SetBinError(25,0.9598159);
   houtFV_stack_4->SetEntries(25917);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hNCpi0inFV_stack_5->SetBinContent(0,0.1129571);
   hNCpi0inFV_stack_5->SetBinContent(1,21.19282);
   hNCpi0inFV_stack_5->SetBinContent(2,25.41263);
   hNCpi0inFV_stack_5->SetBinContent(3,26.60173);
   hNCpi0inFV_stack_5->SetBinContent(4,28.00757);
   hNCpi0inFV_stack_5->SetBinContent(5,26.22934);
   hNCpi0inFV_stack_5->SetBinContent(6,28.14621);
   hNCpi0inFV_stack_5->SetBinContent(7,29.16858);
   hNCpi0inFV_stack_5->SetBinContent(8,28.14676);
   hNCpi0inFV_stack_5->SetBinContent(9,28.2739);
   hNCpi0inFV_stack_5->SetBinContent(10,27.99878);
   hNCpi0inFV_stack_5->SetBinContent(11,29.04132);
   hNCpi0inFV_stack_5->SetBinContent(12,27.85465);
   hNCpi0inFV_stack_5->SetBinContent(13,27.87846);
   hNCpi0inFV_stack_5->SetBinContent(14,28.07887);
   hNCpi0inFV_stack_5->SetBinContent(15,29.73289);
   hNCpi0inFV_stack_5->SetBinContent(16,28.31214);
   hNCpi0inFV_stack_5->SetBinContent(17,27.6211);
   hNCpi0inFV_stack_5->SetBinContent(18,25.18327);
   hNCpi0inFV_stack_5->SetBinContent(19,25.75183);
   hNCpi0inFV_stack_5->SetBinContent(20,29.76067);
   hNCpi0inFV_stack_5->SetBinContent(21,29.07017);
   hNCpi0inFV_stack_5->SetBinContent(22,27.51967);
   hNCpi0inFV_stack_5->SetBinContent(23,27.26248);
   hNCpi0inFV_stack_5->SetBinContent(24,27.81392);
   hNCpi0inFV_stack_5->SetBinContent(25,11.04938);
   hNCpi0inFV_stack_5->SetBinError(0,0.0669989);
   hNCpi0inFV_stack_5->SetBinError(1,1.069123);
   hNCpi0inFV_stack_5->SetBinError(2,1.159897);
   hNCpi0inFV_stack_5->SetBinError(3,1.196567);
   hNCpi0inFV_stack_5->SetBinError(4,1.221143);
   hNCpi0inFV_stack_5->SetBinError(5,1.188967);
   hNCpi0inFV_stack_5->SetBinError(6,1.231807);
   hNCpi0inFV_stack_5->SetBinError(7,1.26149);
   hNCpi0inFV_stack_5->SetBinError(8,1.224378);
   hNCpi0inFV_stack_5->SetBinError(9,1.241095);
   hNCpi0inFV_stack_5->SetBinError(10,1.235987);
   hNCpi0inFV_stack_5->SetBinError(11,1.26018);
   hNCpi0inFV_stack_5->SetBinError(12,1.2242);
   hNCpi0inFV_stack_5->SetBinError(13,1.23042);
   hNCpi0inFV_stack_5->SetBinError(14,1.233931);
   hNCpi0inFV_stack_5->SetBinError(15,1.269979);
   hNCpi0inFV_stack_5->SetBinError(16,1.244196);
   hNCpi0inFV_stack_5->SetBinError(17,1.204027);
   hNCpi0inFV_stack_5->SetBinError(18,1.155978);
   hNCpi0inFV_stack_5->SetBinError(19,1.172186);
   hNCpi0inFV_stack_5->SetBinError(20,1.269291);
   hNCpi0inFV_stack_5->SetBinError(21,1.258572);
   hNCpi0inFV_stack_5->SetBinError(22,1.21654);
   hNCpi0inFV_stack_5->SetBinError(23,1.212228);
   hNCpi0inFV_stack_5->SetBinError(24,1.231473);
   hNCpi0inFV_stack_5->SetBinError(25,0.7773501);
   hNCpi0inFV_stack_5->SetEntries(17673);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hCCpi0inFV_stack_6->SetBinContent(0,0.1366628);
   hCCpi0inFV_stack_6->SetBinContent(1,44.12244);
   hCCpi0inFV_stack_6->SetBinContent(2,56.60225);
   hCCpi0inFV_stack_6->SetBinContent(3,57.02793);
   hCCpi0inFV_stack_6->SetBinContent(4,59.02607);
   hCCpi0inFV_stack_6->SetBinContent(5,58.2276);
   hCCpi0inFV_stack_6->SetBinContent(6,58.43616);
   hCCpi0inFV_stack_6->SetBinContent(7,55.43761);
   hCCpi0inFV_stack_6->SetBinContent(8,58.32738);
   hCCpi0inFV_stack_6->SetBinContent(9,59.95615);
   hCCpi0inFV_stack_6->SetBinContent(10,57.88257);
   hCCpi0inFV_stack_6->SetBinContent(11,57.38772);
   hCCpi0inFV_stack_6->SetBinContent(12,60.71436);
   hCCpi0inFV_stack_6->SetBinContent(13,62.79342);
   hCCpi0inFV_stack_6->SetBinContent(14,55.1531);
   hCCpi0inFV_stack_6->SetBinContent(15,57.55898);
   hCCpi0inFV_stack_6->SetBinContent(16,60.44764);
   hCCpi0inFV_stack_6->SetBinContent(17,53.4985);
   hCCpi0inFV_stack_6->SetBinContent(18,53.90028);
   hCCpi0inFV_stack_6->SetBinContent(19,58.02697);
   hCCpi0inFV_stack_6->SetBinContent(20,55.3163);
   hCCpi0inFV_stack_6->SetBinContent(21,54.63415);
   hCCpi0inFV_stack_6->SetBinContent(22,59.36739);
   hCCpi0inFV_stack_6->SetBinContent(23,55.21513);
   hCCpi0inFV_stack_6->SetBinContent(24,53.38963);
   hCCpi0inFV_stack_6->SetBinContent(25,23.76844);
   hCCpi0inFV_stack_6->SetBinError(0,0.08854226);
   hCCpi0inFV_stack_6->SetBinError(1,1.549408);
   hCCpi0inFV_stack_6->SetBinError(2,1.750079);
   hCCpi0inFV_stack_6->SetBinError(3,1.760215);
   hCCpi0inFV_stack_6->SetBinError(4,1.789049);
   hCCpi0inFV_stack_6->SetBinError(5,1.778886);
   hCCpi0inFV_stack_6->SetBinError(6,1.78683);
   hCCpi0inFV_stack_6->SetBinError(7,1.719888);
   hCCpi0inFV_stack_6->SetBinError(8,1.7706);
   hCCpi0inFV_stack_6->SetBinError(9,1.803603);
   hCCpi0inFV_stack_6->SetBinError(10,1.772311);
   hCCpi0inFV_stack_6->SetBinError(11,1.763101);
   hCCpi0inFV_stack_6->SetBinError(12,1.823429);
   hCCpi0inFV_stack_6->SetBinError(13,1.85018);
   hCCpi0inFV_stack_6->SetBinError(14,1.720208);
   hCCpi0inFV_stack_6->SetBinError(15,1.761274);
   hCCpi0inFV_stack_6->SetBinError(16,1.821093);
   hCCpi0inFV_stack_6->SetBinError(17,1.69605);
   hCCpi0inFV_stack_6->SetBinError(18,1.69502);
   hCCpi0inFV_stack_6->SetBinError(19,1.77642);
   hCCpi0inFV_stack_6->SetBinError(20,1.721373);
   hCCpi0inFV_stack_6->SetBinError(21,1.703355);
   hCCpi0inFV_stack_6->SetBinError(22,1.796163);
   hCCpi0inFV_stack_6->SetBinError(23,1.734239);
   hCCpi0inFV_stack_6->SetBinError(24,1.702031);
   hCCpi0inFV_stack_6->SetBinError(25,1.13239);
   hCCpi0inFV_stack_6->SetEntries(36603);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hNCinFV_stack_7->SetBinContent(0,0.1239126);
   hNCinFV_stack_7->SetBinContent(1,35.76041);
   hNCinFV_stack_7->SetBinContent(2,41.95215);
   hNCinFV_stack_7->SetBinContent(3,42.73378);
   hNCinFV_stack_7->SetBinContent(4,45.72174);
   hNCinFV_stack_7->SetBinContent(5,46.0955);
   hNCinFV_stack_7->SetBinContent(6,45.88074);
   hNCinFV_stack_7->SetBinContent(7,49.32406);
   hNCinFV_stack_7->SetBinContent(8,46.68056);
   hNCinFV_stack_7->SetBinContent(9,48.25168);
   hNCinFV_stack_7->SetBinContent(10,45.82333);
   hNCinFV_stack_7->SetBinContent(11,48.02337);
   hNCinFV_stack_7->SetBinContent(12,46.53878);
   hNCinFV_stack_7->SetBinContent(13,47.84341);
   hNCinFV_stack_7->SetBinContent(14,50.05919);
   hNCinFV_stack_7->SetBinContent(15,50.41693);
   hNCinFV_stack_7->SetBinContent(16,47.77372);
   hNCinFV_stack_7->SetBinContent(17,45.95725);
   hNCinFV_stack_7->SetBinContent(18,46.91614);
   hNCinFV_stack_7->SetBinContent(19,46.60249);
   hNCinFV_stack_7->SetBinContent(20,46.60093);
   hNCinFV_stack_7->SetBinContent(21,44.5835);
   hNCinFV_stack_7->SetBinContent(22,49.84784);
   hNCinFV_stack_7->SetBinContent(23,51.46571);
   hNCinFV_stack_7->SetBinContent(24,47.01637);
   hNCinFV_stack_7->SetBinContent(25,19.42454);
   hNCinFV_stack_7->SetBinError(0,0.08761943);
   hNCinFV_stack_7->SetBinError(1,1.380421);
   hNCinFV_stack_7->SetBinError(2,1.497383);
   hNCinFV_stack_7->SetBinError(3,1.504755);
   hNCinFV_stack_7->SetBinError(4,1.572699);
   hNCinFV_stack_7->SetBinError(5,1.572299);
   hNCinFV_stack_7->SetBinError(6,1.568405);
   hNCinFV_stack_7->SetBinError(7,1.630194);
   hNCinFV_stack_7->SetBinError(8,1.581316);
   hNCinFV_stack_7->SetBinError(9,1.610586);
   hNCinFV_stack_7->SetBinError(10,1.56624);
   hNCinFV_stack_7->SetBinError(11,1.616258);
   hNCinFV_stack_7->SetBinError(12,1.584885);
   hNCinFV_stack_7->SetBinError(13,1.610798);
   hNCinFV_stack_7->SetBinError(14,1.65348);
   hNCinFV_stack_7->SetBinError(15,1.643378);
   hNCinFV_stack_7->SetBinError(16,1.593394);
   hNCinFV_stack_7->SetBinError(17,1.568716);
   hNCinFV_stack_7->SetBinError(18,1.578942);
   hNCinFV_stack_7->SetBinError(19,1.587742);
   hNCinFV_stack_7->SetBinError(20,1.577159);
   hNCinFV_stack_7->SetBinError(21,1.54153);
   hNCinFV_stack_7->SetBinError(22,1.645352);
   hNCinFV_stack_7->SetBinError(23,1.67132);
   hNCinFV_stack_7->SetBinError(24,1.580759);
   hNCinFV_stack_7->SetBinError(25,1.022978);
   hNCinFV_stack_7->SetEntries(30232);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hnumuCCinFV_stack_8->SetBinContent(0,0.09420767);
   hnumuCCinFV_stack_8->SetBinContent(1,360.4233);
   hnumuCCinFV_stack_8->SetBinContent(2,429.5136);
   hnumuCCinFV_stack_8->SetBinContent(3,443.2175);
   hnumuCCinFV_stack_8->SetBinContent(4,445.2191);
   hnumuCCinFV_stack_8->SetBinContent(5,458.7106);
   hnumuCCinFV_stack_8->SetBinContent(6,440.7512);
   hnumuCCinFV_stack_8->SetBinContent(7,465.3606);
   hnumuCCinFV_stack_8->SetBinContent(8,475.0027);
   hnumuCCinFV_stack_8->SetBinContent(9,451.6701);
   hnumuCCinFV_stack_8->SetBinContent(10,457.8594);
   hnumuCCinFV_stack_8->SetBinContent(11,462.684);
   hnumuCCinFV_stack_8->SetBinContent(12,459.6625);
   hnumuCCinFV_stack_8->SetBinContent(13,461.3704);
   hnumuCCinFV_stack_8->SetBinContent(14,465.2716);
   hnumuCCinFV_stack_8->SetBinContent(15,466.9097);
   hnumuCCinFV_stack_8->SetBinContent(16,452.906);
   hnumuCCinFV_stack_8->SetBinContent(17,433.258);
   hnumuCCinFV_stack_8->SetBinContent(18,416.4509);
   hnumuCCinFV_stack_8->SetBinContent(19,446.082);
   hnumuCCinFV_stack_8->SetBinContent(20,449.9588);
   hnumuCCinFV_stack_8->SetBinContent(21,454.3906);
   hnumuCCinFV_stack_8->SetBinContent(22,456.4903);
   hnumuCCinFV_stack_8->SetBinContent(23,437.3156);
   hnumuCCinFV_stack_8->SetBinContent(24,436.2943);
   hnumuCCinFV_stack_8->SetBinContent(25,182.9064);
   hnumuCCinFV_stack_8->SetBinContent(26,0.06605495);
   hnumuCCinFV_stack_8->SetBinError(0,0.0810619);
   hnumuCCinFV_stack_8->SetBinError(1,6.181329);
   hnumuCCinFV_stack_8->SetBinError(2,6.708517);
   hnumuCCinFV_stack_8->SetBinError(3,6.993565);
   hnumuCCinFV_stack_8->SetBinError(4,6.867411);
   hnumuCCinFV_stack_8->SetBinError(5,6.919695);
   hnumuCCinFV_stack_8->SetBinError(6,6.927818);
   hnumuCCinFV_stack_8->SetBinError(7,7.298571);
   hnumuCCinFV_stack_8->SetBinError(8,7.092949);
   hnumuCCinFV_stack_8->SetBinError(9,6.862957);
   hnumuCCinFV_stack_8->SetBinError(10,7.076131);
   hnumuCCinFV_stack_8->SetBinError(11,6.963452);
   hnumuCCinFV_stack_8->SetBinError(12,6.969266);
   hnumuCCinFV_stack_8->SetBinError(13,7.061147);
   hnumuCCinFV_stack_8->SetBinError(14,7.197289);
   hnumuCCinFV_stack_8->SetBinError(15,6.968237);
   hnumuCCinFV_stack_8->SetBinError(16,6.984691);
   hnumuCCinFV_stack_8->SetBinError(17,6.576126);
   hnumuCCinFV_stack_8->SetBinError(18,6.672872);
   hnumuCCinFV_stack_8->SetBinError(19,6.968643);
   hnumuCCinFV_stack_8->SetBinError(20,6.791405);
   hnumuCCinFV_stack_8->SetBinError(21,7.02394);
   hnumuCCinFV_stack_8->SetBinError(22,6.977451);
   hnumuCCinFV_stack_8->SetBinError(23,6.613991);
   hnumuCCinFV_stack_8->SetBinError(24,6.821549);
   hnumuCCinFV_stack_8->SetBinError(25,4.462381);
   hnumuCCinFV_stack_8->SetBinError(26,0.06605495);
   hnumuCCinFV_stack_8->SetEntries(241660);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hnueCCinFV_stack_9->SetBinContent(0,0.01499802);
   hnueCCinFV_stack_9->SetBinContent(1,3.080968);
   hnueCCinFV_stack_9->SetBinContent(2,2.742521);
   hnueCCinFV_stack_9->SetBinContent(3,3.528106);
   hnueCCinFV_stack_9->SetBinContent(4,3.181454);
   hnueCCinFV_stack_9->SetBinContent(5,3.127697);
   hnueCCinFV_stack_9->SetBinContent(6,3.987115);
   hnueCCinFV_stack_9->SetBinContent(7,4.392012);
   hnueCCinFV_stack_9->SetBinContent(8,3.755528);
   hnueCCinFV_stack_9->SetBinContent(9,3.169351);
   hnueCCinFV_stack_9->SetBinContent(10,3.887639);
   hnueCCinFV_stack_9->SetBinContent(11,4.366453);
   hnueCCinFV_stack_9->SetBinContent(12,3.127149);
   hnueCCinFV_stack_9->SetBinContent(13,2.075923);
   hnueCCinFV_stack_9->SetBinContent(14,3.206368);
   hnueCCinFV_stack_9->SetBinContent(15,4.310889);
   hnueCCinFV_stack_9->SetBinContent(16,3.933869);
   hnueCCinFV_stack_9->SetBinContent(17,2.750972);
   hnueCCinFV_stack_9->SetBinContent(18,4.231895);
   hnueCCinFV_stack_9->SetBinContent(19,3.074766);
   hnueCCinFV_stack_9->SetBinContent(20,3.667884);
   hnueCCinFV_stack_9->SetBinContent(21,2.829436);
   hnueCCinFV_stack_9->SetBinContent(22,3.10397);
   hnueCCinFV_stack_9->SetBinContent(23,2.391539);
   hnueCCinFV_stack_9->SetBinContent(24,4.238297);
   hnueCCinFV_stack_9->SetBinContent(25,1.001822);
   hnueCCinFV_stack_9->SetBinError(0,0.01486091);
   hnueCCinFV_stack_9->SetBinError(1,0.5902808);
   hnueCCinFV_stack_9->SetBinError(2,0.4169584);
   hnueCCinFV_stack_9->SetBinError(3,0.465381);
   hnueCCinFV_stack_9->SetBinError(4,0.6482825);
   hnueCCinFV_stack_9->SetBinError(5,0.4313755);
   hnueCCinFV_stack_9->SetBinError(6,0.5025669);
   hnueCCinFV_stack_9->SetBinError(7,0.6178381);
   hnueCCinFV_stack_9->SetBinError(8,0.5603861);
   hnueCCinFV_stack_9->SetBinError(9,0.4321893);
   hnueCCinFV_stack_9->SetBinError(10,0.5463418);
   hnueCCinFV_stack_9->SetBinError(11,0.7336712);
   hnueCCinFV_stack_9->SetBinError(12,0.4254308);
   hnueCCinFV_stack_9->SetBinError(13,0.3397969);
   hnueCCinFV_stack_9->SetBinError(14,0.7345038);
   hnueCCinFV_stack_9->SetBinError(15,0.8157);
   hnueCCinFV_stack_9->SetBinError(16,0.5349701);
   hnueCCinFV_stack_9->SetBinError(17,0.4087688);
   hnueCCinFV_stack_9->SetBinError(18,0.8350927);
   hnueCCinFV_stack_9->SetBinError(19,0.4362632);
   hnueCCinFV_stack_9->SetBinError(20,0.4999577);
   hnueCCinFV_stack_9->SetBinError(21,0.4057311);
   hnueCCinFV_stack_9->SetBinError(22,0.4534414);
   hnueCCinFV_stack_9->SetBinError(23,0.3869919);
   hnueCCinFV_stack_9->SetBinError(24,0.7354603);
   hnueCCinFV_stack_9->SetBinError(25,0.2517297);
   hnueCCinFV_stack_9->SetEntries(2003);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hmcerror__2->SetBinContent(0,3.169787);
   hmcerror__2->SetBinContent(1,1008.13);
   hmcerror__2->SetBinContent(2,759.6816);
   hmcerror__2->SetBinContent(3,769.7245);
   hmcerror__2->SetBinContent(4,765.8813);
   hmcerror__2->SetBinContent(5,766.0036);
   hmcerror__2->SetBinContent(6,754.1057);
   hmcerror__2->SetBinContent(7,769.1771);
   hmcerror__2->SetBinContent(8,760.2839);
   hmcerror__2->SetBinContent(9,744.4707);
   hmcerror__2->SetBinContent(10,732.3838);
   hmcerror__2->SetBinContent(11,742.004);
   hmcerror__2->SetBinContent(12,745.7578);
   hmcerror__2->SetBinContent(13,753.5905);
   hmcerror__2->SetBinContent(14,740.8586);
   hmcerror__2->SetBinContent(15,750.812);
   hmcerror__2->SetBinContent(16,736.8486);
   hmcerror__2->SetBinContent(17,820.1808);
   hmcerror__2->SetBinContent(18,755.7426);
   hmcerror__2->SetBinContent(19,721.5906);
   hmcerror__2->SetBinContent(20,725.949);
   hmcerror__2->SetBinContent(21,724.5477);
   hmcerror__2->SetBinContent(22,720.2432);
   hmcerror__2->SetBinContent(23,697.325);
   hmcerror__2->SetBinContent(24,715.34);
   hmcerror__2->SetBinContent(25,325.4195);
   hmcerror__2->SetBinContent(26,0.06605495);
   hmcerror__2->SetBinError(0,0.4094911);
   hmcerror__2->SetBinError(1,158.2641);
   hmcerror__2->SetBinError(2,101.3074);
   hmcerror__2->SetBinError(3,102.4372);
   hmcerror__2->SetBinError(4,101.3878);
   hmcerror__2->SetBinError(5,102.6036);
   hmcerror__2->SetBinError(6,100.7481);
   hmcerror__2->SetBinError(7,104.6471);
   hmcerror__2->SetBinError(8,104.3012);
   hmcerror__2->SetBinError(9,99.78014);
   hmcerror__2->SetBinError(10,98.94427);
   hmcerror__2->SetBinError(11,99.1595);
   hmcerror__2->SetBinError(12,100.0513);
   hmcerror__2->SetBinError(13,100.8558);
   hmcerror__2->SetBinError(14,101.2671);
   hmcerror__2->SetBinError(15,102.3555);
   hmcerror__2->SetBinError(16,101.8523);
   hmcerror__2->SetBinError(17,98.32166);
   hmcerror__2->SetBinError(18,96.06136);
   hmcerror__2->SetBinError(19,97.41705);
   hmcerror__2->SetBinError(20,97.07377);
   hmcerror__2->SetBinError(21,98.45426);
   hmcerror__2->SetBinError(22,96.2905);
   hmcerror__2->SetBinError(23,94.00668);
   hmcerror__2->SetBinError(24,97.64903);
   hmcerror__2->SetBinError(25,44.29828);
   hmcerror__2->SetBinError(26,0.2856391);
   hmcerror__2->SetEntries(16480.37);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3001[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3001[25] = {
   1006,
   788,
   765,
   858,
   776,
   799,
   763,
   740,
   722,
   799,
   736,
   802,
   759,
   735,
   743,
   775,
   840,
   802,
   784,
   715,
   753,
   705,
   707,
   733,
   334};
   Double_t _felx3001[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3001[25] = {
   31.7175,
   28.07134,
   27.65863,
   29.29164,
   27.85678,
   28.26659,
   27.62245,
   27.20294,
   26.87006,
   28.26659,
   27.12932,
   28.3196,
   27.54995,
   27.11088,
   27.25803,
   27.83882,
   28.98275,
   28.3196,
   28,
   26.73948,
   27.44085,
   26.55184,
   26.58947,
   27.07397,
   18.27567};
   Double_t _fehx3001[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3001[25] = {
   31.7175,
   28.07134,
   27.65863,
   29.29164,
   27.85678,
   28.26659,
   27.62245,
   27.20294,
   26.87006,
   28.26659,
   27.12932,
   28.3196,
   27.54995,
   27.11088,
   27.25803,
   27.83882,
   28.98275,
   28.3196,
   28,
   26.73948,
   27.44085,
   26.55184,
   26.58947,
   27.07397,
   18.27567};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1155);
   Graph_Graph3001->SetMinimum(243.525);
   Graph_Graph3001->SetMaximum(1109.917);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.02#pm0.01(data err)#pm0.13(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.75/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18939.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 500.4","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 2157.9","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 612.5","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1047.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  671.1","F");

   ci = 1438;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1386.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1137.3","F");

   ci = 1440;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10909.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 83.2","F");

   ci = 1442;
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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-161.7,-0.5333333,1185.8,2.133333);
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
   
   Double_t _fx3002[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3002[25] = {
   0.1569878,
   0.1333551,
   0.1330829,
   0.1323805,
   0.1339466,
   0.1335994,
   0.1360507,
   0.1371872,
   0.1340283,
   0.1350989,
   0.1336374,
   0.1341606,
   0.1338337,
   0.1366889,
   0.1363263,
   0.1382269,
   0.119878,
   0.1271086,
   0.1350032,
   0.1337198,
   0.1358837,
   0.1336916,
   0.1348104,
   0.1365072,
   0.1361267};
   Double_t _fehx3002[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3002[25] = {
   0.1569878,
   0.1333551,
   0.1330829,
   0.1323805,
   0.1339466,
   0.1335994,
   0.1360507,
   0.1371872,
   0.1340283,
   0.1350989,
   0.1336374,
   0.1341606,
   0.1338337,
   0.1366889,
   0.1363263,
   0.1382269,
   0.119878,
   0.1271086,
   0.1350032,
   0.1337198,
   0.1358837,
   0.1336916,
   0.1348104,
   0.1365072,
   0.1361267};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1155);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Vertex Z [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3003[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3003[25] = {
   0.155382,
   0.131096,
   0.1303576,
   0.1301843,
   0.1320983,
   0.1313843,
   0.1347567,
   0.13584,
   0.1327196,
   0.1340677,
   0.1322389,
   0.1332913,
   0.1321775,
   0.1353095,
   0.1343066,
   0.1371334,
   0.1183129,
   0.1260683,
   0.134032,
   0.1326396,
   0.1345803,
   0.1326744,
   0.1328871,
   0.1331767,
   0.1289407};
   Double_t _fehx3003[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3003[25] = {
   0.155382,
   0.131096,
   0.1303576,
   0.1301843,
   0.1320983,
   0.1313843,
   0.1347567,
   0.13584,
   0.1327196,
   0.1340677,
   0.1322389,
   0.1332913,
   0.1321775,
   0.1353095,
   0.1343066,
   0.1371334,
   0.1183129,
   0.1260683,
   0.134032,
   0.1326396,
   0.1345803,
   0.1326744,
   0.1328871,
   0.1331767,
   0.1289407};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1155);
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
   
   Double_t _fx3004[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3004[25] = {
   0.9978874,
   1.037277,
   0.9938621,
   1.120278,
   1.01305,
   1.059533,
   0.9919693,
   0.9733207,
   0.9698165,
   1.090958,
   0.9919084,
   1.075416,
   1.007178,
   0.9920922,
   0.9895952,
   1.051776,
   1.024164,
   1.061208,
   1.086489,
   0.9849176,
   1.039269,
   0.978836,
   1.013874,
   1.024688,
   1.026368};
   Double_t _felx3004[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3004[25] = {
   0.03146172,
   0.03695145,
   0.03593316,
   0.03824566,
   0.03636638,
   0.03748359,
   0.0359117,
   0.03577998,
   0.03609283,
   0.03859532,
   0.03656223,
   0.03797426,
   0.03655826,
   0.03659387,
   0.03630473,
   0.03778092,
   0.03533703,
   0.03747255,
   0.03880317,
   0.03683383,
   0.03787307,
   0.0368651,
   0.03813067,
   0.0378477,
   0.05616034};
   Double_t _fehx3004[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3004[25] = {
   0.03146172,
   0.03695145,
   0.03593316,
   0.03824566,
   0.03636638,
   0.03748359,
   0.0359117,
   0.03577998,
   0.03609283,
   0.03859532,
   0.03656223,
   0.03797426,
   0.03655826,
   0.03659387,
   0.03630473,
   0.03778092,
   0.03533703,
   0.03747255,
   0.03880317,
   0.03683383,
   0.03787307,
   0.0368651,
   0.03813067,
   0.0378477,
   0.05616034};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1155);
   Graph_Graph3004->SetMinimum(0.9112437);
   Graph_Graph3004->SetMaximum(1.181004);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_reco_nuvtxZ_all",25,0,1050);

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
   TLine *line = new TLine(0,1,1050,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

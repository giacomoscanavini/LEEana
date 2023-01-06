#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 23:31:33 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-2.84,3.957692,314.0442);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__16->SetBinContent(1,110.7988);
   hmc__16->SetBinContent(2,118.9787);
   hmc__16->SetBinContent(3,123.4274);
   hmc__16->SetBinContent(4,123.8157);
   hmc__16->SetBinContent(5,102.7175);
   hmc__16->SetBinContent(6,107.5119);
   hmc__16->SetBinContent(7,110.3056);
   hmc__16->SetBinContent(8,102.217);
   hmc__16->SetBinContent(9,105.8879);
   hmc__16->SetBinContent(10,110.973);
   hmc__16->SetBinContent(11,113.9226);
   hmc__16->SetBinContent(12,108.3714);
   hmc__16->SetBinContent(13,98.53383);
   hmc__16->SetBinContent(14,106.3225);
   hmc__16->SetBinContent(15,118.9595);
   hmc__16->SetBinContent(16,117.7355);
   hmc__16->SetBinContent(17,116.715);
   hmc__16->SetBinContent(18,100.7525);
   hmc__16->SetBinContent(19,110.021);
   hmc__16->SetBinContent(20,105.9942);
   hmc__16->SetBinContent(21,111.7495);
   hmc__16->SetBinContent(22,126.6605);
   hmc__16->SetBinContent(23,121.8158);
   hmc__16->SetBinContent(24,119.9745);
   hmc__16->SetBinContent(25,101.7349);
   hmc__16->SetBinError(1,40.43874);
   hmc__16->SetBinError(2,38.68414);
   hmc__16->SetBinError(3,42.6952);
   hmc__16->SetBinError(4,30.10267);
   hmc__16->SetBinError(5,26.74271);
   hmc__16->SetBinError(6,26.96331);
   hmc__16->SetBinError(7,33.57215);
   hmc__16->SetBinError(8,27.42478);
   hmc__16->SetBinError(9,28.73738);
   hmc__16->SetBinError(10,32.80924);
   hmc__16->SetBinError(11,37.06627);
   hmc__16->SetBinError(12,30.0123);
   hmc__16->SetBinError(13,30.07696);
   hmc__16->SetBinError(14,31.78967);
   hmc__16->SetBinError(15,34.53784);
   hmc__16->SetBinError(16,32.91656);
   hmc__16->SetBinError(17,32.0384);
   hmc__16->SetBinError(18,27.15702);
   hmc__16->SetBinError(19,25.942);
   hmc__16->SetBinError(20,33.8836);
   hmc__16->SetBinError(21,29.7628);
   hmc__16->SetBinError(22,36.23843);
   hmc__16->SetBinError(23,35.09987);
   hmc__16->SetBinError(24,38.49993);
   hmc__16->SetBinError(25,28.95814);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-2.84);
   hmc__16->SetMaximum(298.2);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-3.15,3.15);
   hs6_stack_6->SetMinimum(-2.606256e-09);
   hs6_stack_6->SetMaximum(132.9935);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.792981);
   hbadmatch_stack_1->SetBinContent(2,2.575568);
   hbadmatch_stack_1->SetBinContent(3,3.580345);
   hbadmatch_stack_1->SetBinContent(4,1.585007);
   hbadmatch_stack_1->SetBinContent(5,3.559313);
   hbadmatch_stack_1->SetBinContent(6,3.429317);
   hbadmatch_stack_1->SetBinContent(7,4.797459);
   hbadmatch_stack_1->SetBinContent(8,1.76449);
   hbadmatch_stack_1->SetBinContent(9,3.179241);
   hbadmatch_stack_1->SetBinContent(10,1.875413);
   hbadmatch_stack_1->SetBinContent(11,2.249517);
   hbadmatch_stack_1->SetBinContent(12,2.555095);
   hbadmatch_stack_1->SetBinContent(13,1.229411);
   hbadmatch_stack_1->SetBinContent(14,3.325706);
   hbadmatch_stack_1->SetBinContent(15,3.750391);
   hbadmatch_stack_1->SetBinContent(16,2.977106);
   hbadmatch_stack_1->SetBinContent(17,2.8426);
   hbadmatch_stack_1->SetBinContent(18,3.386809);
   hbadmatch_stack_1->SetBinContent(19,2.216508);
   hbadmatch_stack_1->SetBinContent(20,1.945079);
   hbadmatch_stack_1->SetBinContent(21,2.577465);
   hbadmatch_stack_1->SetBinContent(22,2.709733);
   hbadmatch_stack_1->SetBinContent(23,2.153808);
   hbadmatch_stack_1->SetBinContent(24,1.628737);
   hbadmatch_stack_1->SetBinContent(25,0.913601);
   hbadmatch_stack_1->SetBinError(1,0.5985205);
   hbadmatch_stack_1->SetBinError(2,0.7312504);
   hbadmatch_stack_1->SetBinError(3,1.042548);
   hbadmatch_stack_1->SetBinError(4,0.6129272);
   hbadmatch_stack_1->SetBinError(5,1.019481);
   hbadmatch_stack_1->SetBinError(6,1.003903);
   hbadmatch_stack_1->SetBinError(7,1.397551);
   hbadmatch_stack_1->SetBinError(8,0.7104183);
   hbadmatch_stack_1->SetBinError(9,1.057122);
   hbadmatch_stack_1->SetBinError(10,0.6727696);
   hbadmatch_stack_1->SetBinError(11,0.7748462);
   hbadmatch_stack_1->SetBinError(12,0.7947995);
   hbadmatch_stack_1->SetBinError(13,0.512697);
   hbadmatch_stack_1->SetBinError(14,1.739672);
   hbadmatch_stack_1->SetBinError(15,1.806775);
   hbadmatch_stack_1->SetBinError(16,0.8917031);
   hbadmatch_stack_1->SetBinError(17,0.9197235);
   hbadmatch_stack_1->SetBinError(18,1.036267);
   hbadmatch_stack_1->SetBinError(19,0.7829597);
   hbadmatch_stack_1->SetBinError(20,0.6803944);
   hbadmatch_stack_1->SetBinError(21,0.9342277);
   hbadmatch_stack_1->SetBinError(22,0.8799455);
   hbadmatch_stack_1->SetBinError(23,0.7510633);
   hbadmatch_stack_1->SetBinError(24,0.6283636);
   hbadmatch_stack_1->SetBinError(25,0.5870428);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,7.930035);
   hext_stack_2->SetBinContent(2,6.318);
   hext_stack_2->SetBinContent(3,6.717419);
   hext_stack_2->SetBinContent(4,13.74047);
   hext_stack_2->SetBinContent(5,9.477);
   hext_stack_2->SetBinContent(6,18.35869);
   hext_stack_2->SetBinContent(7,15.85125);
   hext_stack_2->SetBinContent(8,11.76378);
   hext_stack_2->SetBinContent(9,8.242843);
   hext_stack_2->SetBinContent(10,11.08185);
   hext_stack_2->SetBinContent(11,9.787037);
   hext_stack_2->SetBinContent(12,5.027592);
   hext_stack_2->SetBinContent(13,4.620993);
   hext_stack_2->SetBinContent(14,3.001777);
   hext_stack_2->SetBinContent(15,8.179411);
   hext_stack_2->SetBinContent(16,13.82267);
   hext_stack_2->SetBinContent(17,15.83689);
   hext_stack_2->SetBinContent(18,13.82985);
   hext_stack_2->SetBinContent(19,25.68018);
   hext_stack_2->SetBinContent(20,13.07573);
   hext_stack_2->SetBinContent(21,17.01915);
   hext_stack_2->SetBinContent(22,13.09167);
   hext_stack_2->SetBinContent(23,10.84243);
   hext_stack_2->SetBinContent(24,10.40711);
   hext_stack_2->SetBinContent(25,4.620993);
   hext_stack_2->SetBinError(1,1.928947);
   hext_stack_2->SetBinError(2,1.630074);
   hext_stack_2->SetBinError(3,1.738869);
   hext_stack_2->SetBinError(4,2.533742);
   hext_stack_2->SetBinError(5,1.996425);
   hext_stack_2->SetBinError(6,2.936981);
   hext_stack_2->SetBinError(7,2.677952);
   hext_stack_2->SetBinError(8,2.188925);
   hext_stack_2->SetBinError(9,1.972853);
   hext_stack_2->SetBinError(10,2.291421);
   hext_stack_2->SetBinError(11,2.119752);
   hext_stack_2->SetBinError(12,1.426537);
   hext_stack_2->SetBinError(13,1.367364);
   hext_stack_2->SetBinError(14,1.003589);
   hext_stack_2->SetBinError(15,1.888062);
   hext_stack_2->SetBinError(16,2.545572);
   hext_stack_2->SetBinError(17,2.752059);
   hext_stack_2->SetBinError(18,2.50574);
   hext_stack_2->SetBinError(19,3.549049);
   hext_stack_2->SetBinError(20,2.193154);
   hext_stack_2->SetBinError(21,2.933319);
   hext_stack_2->SetBinError(22,2.491863);
   hext_stack_2->SetBinError(23,2.206613);
   hext_stack_2->SetBinError(24,2.347046);
   hext_stack_2->SetBinError(25,1.367364);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,1.096746);
   hdirt_stack_3->SetBinContent(3,2.011368);
   hdirt_stack_3->SetBinContent(4,1.498241);
   hdirt_stack_3->SetBinContent(5,2.047585);
   hdirt_stack_3->SetBinContent(6,1.872167);
   hdirt_stack_3->SetBinContent(7,1.972943);
   hdirt_stack_3->SetBinContent(8,1.313999);
   hdirt_stack_3->SetBinContent(9,0.7310024);
   hdirt_stack_3->SetBinContent(10,0.6287382);
   hdirt_stack_3->SetBinContent(11,2.668841);
   hdirt_stack_3->SetBinContent(12,1.07009);
   hdirt_stack_3->SetBinContent(13,1.8281);
   hdirt_stack_3->SetBinContent(14,0.8283614);
   hdirt_stack_3->SetBinContent(15,1.131876);
   hdirt_stack_3->SetBinContent(16,2.302464);
   hdirt_stack_3->SetBinContent(17,3.596306);
   hdirt_stack_3->SetBinContent(18,2.193906);
   hdirt_stack_3->SetBinContent(19,1.408086);
   hdirt_stack_3->SetBinContent(20,2.173108);
   hdirt_stack_3->SetBinContent(21,1.24744);
   hdirt_stack_3->SetBinContent(22,0.8332258);
   hdirt_stack_3->SetBinContent(23,2.17325);
   hdirt_stack_3->SetBinContent(24,0.9038851);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.5550958);
   hdirt_stack_3->SetBinError(3,0.7016413);
   hdirt_stack_3->SetBinError(4,0.6590699);
   hdirt_stack_3->SetBinError(5,0.6920762);
   hdirt_stack_3->SetBinError(6,0.7415152);
   hdirt_stack_3->SetBinError(7,0.6861028);
   hdirt_stack_3->SetBinError(8,0.7702244);
   hdirt_stack_3->SetBinError(9,0.372777);
   hdirt_stack_3->SetBinError(10,0.3958337);
   hdirt_stack_3->SetBinError(11,1.273181);
   hdirt_stack_3->SetBinError(12,0.5300186);
   hdirt_stack_3->SetBinError(13,0.6771483);
   hdirt_stack_3->SetBinError(14,0.4226699);
   hdirt_stack_3->SetBinError(15,0.6062371);
   hdirt_stack_3->SetBinError(16,0.797805);
   hdirt_stack_3->SetBinError(17,1.056033);
   hdirt_stack_3->SetBinError(18,0.7947205);
   hdirt_stack_3->SetBinError(19,0.6520926);
   hdirt_stack_3->SetBinError(20,0.7889104);
   hdirt_stack_3->SetBinError(21,0.5075476);
   hdirt_stack_3->SetBinError(22,0.4476755);
   hdirt_stack_3->SetBinError(23,0.7731157);
   hdirt_stack_3->SetBinError(24,0.4931997);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.53788);
   houtFV_stack_4->SetBinContent(2,13.74065);
   houtFV_stack_4->SetBinContent(3,13.85822);
   houtFV_stack_4->SetBinContent(4,14.99597);
   houtFV_stack_4->SetBinContent(5,9.002129);
   houtFV_stack_4->SetBinContent(6,10.85605);
   houtFV_stack_4->SetBinContent(7,11.53946);
   houtFV_stack_4->SetBinContent(8,11.59236);
   houtFV_stack_4->SetBinContent(9,12.07519);
   houtFV_stack_4->SetBinContent(10,12.01204);
   houtFV_stack_4->SetBinContent(11,11.75676);
   houtFV_stack_4->SetBinContent(12,11.46794);
   houtFV_stack_4->SetBinContent(13,12.38939);
   houtFV_stack_4->SetBinContent(14,10.50326);
   houtFV_stack_4->SetBinContent(15,12.53344);
   houtFV_stack_4->SetBinContent(16,9.06503);
   houtFV_stack_4->SetBinContent(17,9.54045);
   houtFV_stack_4->SetBinContent(18,10.80934);
   houtFV_stack_4->SetBinContent(19,11.86795);
   houtFV_stack_4->SetBinContent(20,7.617004);
   houtFV_stack_4->SetBinContent(21,11.74491);
   houtFV_stack_4->SetBinContent(22,11.14143);
   houtFV_stack_4->SetBinContent(23,10.89558);
   houtFV_stack_4->SetBinContent(24,12.02387);
   houtFV_stack_4->SetBinContent(25,10.7359);
   houtFV_stack_4->SetBinError(1,1.65143);
   houtFV_stack_4->SetBinError(2,1.855727);
   houtFV_stack_4->SetBinError(3,1.866586);
   houtFV_stack_4->SetBinError(4,1.946317);
   houtFV_stack_4->SetBinError(5,1.589204);
   houtFV_stack_4->SetBinError(6,1.684182);
   houtFV_stack_4->SetBinError(7,1.698646);
   houtFV_stack_4->SetBinError(8,1.67902);
   houtFV_stack_4->SetBinError(9,1.721901);
   houtFV_stack_4->SetBinError(10,1.828577);
   houtFV_stack_4->SetBinError(11,1.728451);
   houtFV_stack_4->SetBinError(12,1.621361);
   houtFV_stack_4->SetBinError(13,1.693309);
   houtFV_stack_4->SetBinError(14,1.56686);
   houtFV_stack_4->SetBinError(15,1.761377);
   houtFV_stack_4->SetBinError(16,1.549757);
   houtFV_stack_4->SetBinError(17,1.487042);
   houtFV_stack_4->SetBinError(18,1.607452);
   houtFV_stack_4->SetBinError(19,1.784444);
   houtFV_stack_4->SetBinError(20,1.339504);
   houtFV_stack_4->SetBinError(21,1.761734);
   houtFV_stack_4->SetBinError(22,1.681531);
   houtFV_stack_4->SetBinError(23,1.60353);
   houtFV_stack_4->SetBinError(24,1.795341);
   houtFV_stack_4->SetBinError(25,1.623558);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.569799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.890427);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.761868);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.750225);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.020222);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.600881);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.477762);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.973409);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.451723);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.129663);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.950687);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.89989);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.582174);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.907178);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.239761);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.869661);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.566032);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.428566);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.778227);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.983973);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.007846);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.49926);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.25945);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.474153);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.308666);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6340255);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7473554);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8109324);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.91212);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5053531);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.71186);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6932159);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6136063);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5469781);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9050234);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7923554);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9755718);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6688772);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6556368);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6232179);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.741001);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7912001);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6179235);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6974377);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8635403);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7195005);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.601326);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6995303);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6838016);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8993608);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1048219);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.165027);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1603467);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2150102);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.132866);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3569247);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1406853);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3768909);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08128619);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.17913);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3030899);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1438211);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3012396);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3282582);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2565448);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2228962);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2680758);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5794473);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4700348);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08550374);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2075311);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2478018);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1665535);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08246781);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4794681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05209299);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06502683);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08427892);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0784831);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05731981);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1907121);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06914645);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2279885);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05087701);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1138166);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.158955);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06700107);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1511012);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.154664);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.160612);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.124151);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1536638);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2972825);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2297926);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04617406);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07618373);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1268132);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1257443);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04384803);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2966898);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,43.22677);
   hNCpi0inFVres_stack_7->SetBinContent(2,44.08436);
   hNCpi0inFVres_stack_7->SetBinContent(3,44.81609);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.17648);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.06355);
   hNCpi0inFVres_stack_7->SetBinContent(6,36.9464);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.25854);
   hNCpi0inFVres_stack_7->SetBinContent(8,39.88622);
   hNCpi0inFVres_stack_7->SetBinContent(9,39.69912);
   hNCpi0inFVres_stack_7->SetBinContent(10,42.71722);
   hNCpi0inFVres_stack_7->SetBinContent(11,43.02847);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.74943);
   hNCpi0inFVres_stack_7->SetBinContent(13,37.56864);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.80405);
   hNCpi0inFVres_stack_7->SetBinContent(15,43.23045);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.19371);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.15696);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.02053);
   hNCpi0inFVres_stack_7->SetBinContent(19,38.598);
   hNCpi0inFVres_stack_7->SetBinContent(20,40.43496);
   hNCpi0inFVres_stack_7->SetBinContent(21,39.62568);
   hNCpi0inFVres_stack_7->SetBinContent(22,51.33822);
   hNCpi0inFVres_stack_7->SetBinContent(23,45.02547);
   hNCpi0inFVres_stack_7->SetBinContent(24,43.49819);
   hNCpi0inFVres_stack_7->SetBinContent(25,39.65271);
   hNCpi0inFVres_stack_7->SetBinError(1,2.247894);
   hNCpi0inFVres_stack_7->SetBinError(2,2.264062);
   hNCpi0inFVres_stack_7->SetBinError(3,2.254158);
   hNCpi0inFVres_stack_7->SetBinError(4,2.340947);
   hNCpi0inFVres_stack_7->SetBinError(5,2.113959);
   hNCpi0inFVres_stack_7->SetBinError(6,1.949936);
   hNCpi0inFVres_stack_7->SetBinError(7,2.051869);
   hNCpi0inFVres_stack_7->SetBinError(8,2.203242);
   hNCpi0inFVres_stack_7->SetBinError(9,2.185717);
   hNCpi0inFVres_stack_7->SetBinError(10,2.303785);
   hNCpi0inFVres_stack_7->SetBinError(11,2.225311);
   hNCpi0inFVres_stack_7->SetBinError(12,2.206502);
   hNCpi0inFVres_stack_7->SetBinError(13,2.051505);
   hNCpi0inFVres_stack_7->SetBinError(14,2.285747);
   hNCpi0inFVres_stack_7->SetBinError(15,2.256215);
   hNCpi0inFVres_stack_7->SetBinError(16,2.427859);
   hNCpi0inFVres_stack_7->SetBinError(17,2.153428);
   hNCpi0inFVres_stack_7->SetBinError(18,1.97893);
   hNCpi0inFVres_stack_7->SetBinError(19,2.20368);
   hNCpi0inFVres_stack_7->SetBinError(20,2.220373);
   hNCpi0inFVres_stack_7->SetBinError(21,2.222272);
   hNCpi0inFVres_stack_7->SetBinError(22,2.613412);
   hNCpi0inFVres_stack_7->SetBinError(23,2.352955);
   hNCpi0inFVres_stack_7->SetBinError(24,2.233693);
   hNCpi0inFVres_stack_7->SetBinError(25,2.154063);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.570948);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.944923);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.126524);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.881653);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.079499);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.634153);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.567327);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.001722);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.885199);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.014421);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.489273);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.334412);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.249817);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.11148);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.171842);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.575312);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.010055);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.102953);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.257307);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.102093);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.921699);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.272261);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.943591);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.97128);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.542424);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.006327);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9389708);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9817119);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9493035);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9980158);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9909933);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.004454);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.089513);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9588076);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8677312);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.016856);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.049527);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9413654);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.158552);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.108489);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9343701);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9238582);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.043097);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9599776);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.008718);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8818516);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8500249);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8639337);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.155859);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.131953);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05331849);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03088901);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,18.08859);
   hCCpi0inFV_stack_10->SetBinContent(2,17.99585);
   hCCpi0inFV_stack_10->SetBinContent(3,19.31992);
   hCCpi0inFV_stack_10->SetBinContent(4,18.91562);
   hCCpi0inFV_stack_10->SetBinContent(5,15.04639);
   hCCpi0inFV_stack_10->SetBinContent(6,13.65441);
   hCCpi0inFV_stack_10->SetBinContent(7,13.19251);
   hCCpi0inFV_stack_10->SetBinContent(8,14.79127);
   hCCpi0inFV_stack_10->SetBinContent(9,13.42998);
   hCCpi0inFV_stack_10->SetBinContent(10,14.79365);
   hCCpi0inFV_stack_10->SetBinContent(11,13.28272);
   hCCpi0inFV_stack_10->SetBinContent(12,18.26177);
   hCCpi0inFV_stack_10->SetBinContent(13,12.70312);
   hCCpi0inFV_stack_10->SetBinContent(14,16.29624);
   hCCpi0inFV_stack_10->SetBinContent(15,16.16374);
   hCCpi0inFV_stack_10->SetBinContent(16,16.56578);
   hCCpi0inFV_stack_10->SetBinContent(17,16.77199);
   hCCpi0inFV_stack_10->SetBinContent(18,11.01643);
   hCCpi0inFV_stack_10->SetBinContent(19,9.681454);
   hCCpi0inFV_stack_10->SetBinContent(20,16.43796);
   hCCpi0inFV_stack_10->SetBinContent(21,17.27408);
   hCCpi0inFV_stack_10->SetBinContent(22,19.60811);
   hCCpi0inFV_stack_10->SetBinContent(23,16.80054);
   hCCpi0inFV_stack_10->SetBinContent(24,17.52393);
   hCCpi0inFV_stack_10->SetBinContent(25,14.52073);
   hCCpi0inFV_stack_10->SetBinError(1,2.071986);
   hCCpi0inFV_stack_10->SetBinError(2,2.13897);
   hCCpi0inFV_stack_10->SetBinError(3,2.182869);
   hCCpi0inFV_stack_10->SetBinError(4,2.131057);
   hCCpi0inFV_stack_10->SetBinError(5,1.932298);
   hCCpi0inFV_stack_10->SetBinError(6,1.821491);
   hCCpi0inFV_stack_10->SetBinError(7,1.809089);
   hCCpi0inFV_stack_10->SetBinError(8,1.947326);
   hCCpi0inFV_stack_10->SetBinError(9,1.824688);
   hCCpi0inFV_stack_10->SetBinError(10,1.982601);
   hCCpi0inFV_stack_10->SetBinError(11,1.840693);
   hCCpi0inFV_stack_10->SetBinError(12,2.172288);
   hCCpi0inFV_stack_10->SetBinError(13,1.732285);
   hCCpi0inFV_stack_10->SetBinError(14,1.932777);
   hCCpi0inFV_stack_10->SetBinError(15,2.015281);
   hCCpi0inFV_stack_10->SetBinError(16,2.06873);
   hCCpi0inFV_stack_10->SetBinError(17,2.045808);
   hCCpi0inFV_stack_10->SetBinError(18,1.582645);
   hCCpi0inFV_stack_10->SetBinError(19,1.545817);
   hCCpi0inFV_stack_10->SetBinError(20,2.066678);
   hCCpi0inFV_stack_10->SetBinError(21,2.165251);
   hCCpi0inFV_stack_10->SetBinError(22,2.204367);
   hCCpi0inFV_stack_10->SetBinError(23,2.067378);
   hCCpi0inFV_stack_10->SetBinError(24,2.146507);
   hCCpi0inFV_stack_10->SetBinError(25,1.839937);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,6.459088);
   hNCinFV_stack_11->SetBinContent(2,10.74272);
   hNCinFV_stack_11->SetBinContent(3,11.4941);
   hNCinFV_stack_11->SetBinContent(4,7.990459);
   hNCinFV_stack_11->SetBinContent(5,7.694207);
   hNCinFV_stack_11->SetBinContent(6,6.641721);
   hNCinFV_stack_11->SetBinContent(7,7.310837);
   hNCinFV_stack_11->SetBinContent(8,5.334199);
   hNCinFV_stack_11->SetBinContent(9,10.05993);
   hNCinFV_stack_11->SetBinContent(10,7.751654);
   hNCinFV_stack_11->SetBinContent(11,8.992817);
   hNCinFV_stack_11->SetBinContent(12,7.356824);
   hNCinFV_stack_11->SetBinContent(13,7.373886);
   hNCinFV_stack_11->SetBinContent(14,8.17205);
   hNCinFV_stack_11->SetBinContent(15,11.08694);
   hNCinFV_stack_11->SetBinContent(16,8.545678);
   hNCinFV_stack_11->SetBinContent(17,9.234674);
   hNCinFV_stack_11->SetBinContent(18,4.909272);
   hNCinFV_stack_11->SetBinContent(19,5.384675);
   hNCinFV_stack_11->SetBinContent(20,6.229834);
   hNCinFV_stack_11->SetBinContent(21,6.314439);
   hNCinFV_stack_11->SetBinContent(22,8.679878);
   hNCinFV_stack_11->SetBinContent(23,10.29722);
   hNCinFV_stack_11->SetBinContent(24,9.229259);
   hNCinFV_stack_11->SetBinContent(25,4.110476);
   hNCinFV_stack_11->SetBinError(1,1.273899);
   hNCinFV_stack_11->SetBinError(2,1.780763);
   hNCinFV_stack_11->SetBinError(3,1.797015);
   hNCinFV_stack_11->SetBinError(4,1.463356);
   hNCinFV_stack_11->SetBinError(5,1.38342);
   hNCinFV_stack_11->SetBinError(6,1.284227);
   hNCinFV_stack_11->SetBinError(7,1.286118);
   hNCinFV_stack_11->SetBinError(8,1.088645);
   hNCinFV_stack_11->SetBinError(9,1.816219);
   hNCinFV_stack_11->SetBinError(10,1.696912);
   hNCinFV_stack_11->SetBinError(11,1.590506);
   hNCinFV_stack_11->SetBinError(12,1.326544);
   hNCinFV_stack_11->SetBinError(13,1.449322);
   hNCinFV_stack_11->SetBinError(14,1.454293);
   hNCinFV_stack_11->SetBinError(15,1.933885);
   hNCinFV_stack_11->SetBinError(16,1.425681);
   hNCinFV_stack_11->SetBinError(17,1.833364);
   hNCinFV_stack_11->SetBinError(18,1.087209);
   hNCinFV_stack_11->SetBinError(19,1.253948);
   hNCinFV_stack_11->SetBinError(20,1.217764);
   hNCinFV_stack_11->SetBinError(21,1.376244);
   hNCinFV_stack_11->SetBinError(22,1.654072);
   hNCinFV_stack_11->SetBinError(23,1.75488);
   hNCinFV_stack_11->SetBinError(24,1.494975);
   hNCinFV_stack_11->SetBinError(25,0.9969406);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.835056);
   hnumuCCinFV_stack_12->SetBinContent(2,7.861405);
   hnumuCCinFV_stack_12->SetBinContent(3,7.109541);
   hnumuCCinFV_stack_12->SetBinContent(4,5.338572);
   hnumuCCinFV_stack_12->SetBinContent(5,4.618327);
   hnumuCCinFV_stack_12->SetBinContent(6,4.746751);
   hnumuCCinFV_stack_12->SetBinContent(7,7.589825);
   hnumuCCinFV_stack_12->SetBinContent(8,3.992945);
   hnumuCCinFV_stack_12->SetBinContent(9,7.256738);
   hnumuCCinFV_stack_12->SetBinContent(10,4.765542);
   hnumuCCinFV_stack_12->SetBinContent(11,8.792228);
   hnumuCCinFV_stack_12->SetBinContent(12,6.23517);
   hnumuCCinFV_stack_12->SetBinContent(13,7.706862);
   hnumuCCinFV_stack_12->SetBinContent(14,6.944429);
   hnumuCCinFV_stack_12->SetBinContent(15,9.185745);
   hnumuCCinFV_stack_12->SetBinContent(16,6.911167);
   hnumuCCinFV_stack_12->SetBinContent(17,6.141894);
   hnumuCCinFV_stack_12->SetBinContent(18,4.160884);
   hnumuCCinFV_stack_12->SetBinContent(19,2.726034);
   hnumuCCinFV_stack_12->SetBinContent(20,4.120179);
   hnumuCCinFV_stack_12->SetBinContent(21,3.230861);
   hnumuCCinFV_stack_12->SetBinContent(22,7.496437);
   hnumuCCinFV_stack_12->SetBinContent(23,10.88397);
   hnumuCCinFV_stack_12->SetBinContent(24,9.046502);
   hnumuCCinFV_stack_12->SetBinContent(25,13.32014);
   hnumuCCinFV_stack_12->SetBinError(1,1.533699);
   hnumuCCinFV_stack_12->SetBinError(2,1.462999);
   hnumuCCinFV_stack_12->SetBinError(3,1.35326);
   hnumuCCinFV_stack_12->SetBinError(4,1.407283);
   hnumuCCinFV_stack_12->SetBinError(5,1.088103);
   hnumuCCinFV_stack_12->SetBinError(6,1.186774);
   hnumuCCinFV_stack_12->SetBinError(7,1.40161);
   hnumuCCinFV_stack_12->SetBinError(8,1.262305);
   hnumuCCinFV_stack_12->SetBinError(9,1.505166);
   hnumuCCinFV_stack_12->SetBinError(10,1.066794);
   hnumuCCinFV_stack_12->SetBinError(11,2.065037);
   hnumuCCinFV_stack_12->SetBinError(12,1.304479);
   hnumuCCinFV_stack_12->SetBinError(13,1.511729);
   hnumuCCinFV_stack_12->SetBinError(14,1.41963);
   hnumuCCinFV_stack_12->SetBinError(15,2.07676);
   hnumuCCinFV_stack_12->SetBinError(16,1.27609);
   hnumuCCinFV_stack_12->SetBinError(17,1.161816);
   hnumuCCinFV_stack_12->SetBinError(18,1.098228);
   hnumuCCinFV_stack_12->SetBinError(19,0.7997503);
   hnumuCCinFV_stack_12->SetBinError(20,1.003157);
   hnumuCCinFV_stack_12->SetBinError(21,0.9113208);
   hnumuCCinFV_stack_12->SetBinError(22,1.770859);
   hnumuCCinFV_stack_12->SetBinError(23,2.258639);
   hnumuCCinFV_stack_12->SetBinError(24,1.750023);
   hnumuCCinFV_stack_12->SetBinError(25,2.263625);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.544767);
   hnueCCinFV_stack_13->SetBinContent(2,2.563004);
   hnueCCinFV_stack_13->SetBinContent(3,1.471686);
   hnueCCinFV_stack_13->SetBinContent(4,0.7280008);
   hnueCCinFV_stack_13->SetBinContent(5,0.9763736);
   hnueCCinFV_stack_13->SetBinContent(6,0.3611468);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.4256802);
   hnueCCinFV_stack_13->SetBinContent(9,0.7551507);
   hnueCCinFV_stack_13->SetBinContent(10,2.005462);
   hnueCCinFV_stack_13->SetBinContent(11,0.6211463);
   hnueCCinFV_stack_13->SetBinContent(12,1.269369);
   hnueCCinFV_stack_13->SetBinContent(13,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(14,1.099703);
   hnueCCinFV_stack_13->SetBinContent(15,1.029396);
   hnueCCinFV_stack_13->SetBinContent(16,0.620398);
   hnueCCinFV_stack_13->SetBinContent(17,0.749079);
   hnueCCinFV_stack_13->SetBinContent(18,2.314564);
   hnueCCinFV_stack_13->SetBinContent(19,0.9524934);
   hnueCCinFV_stack_13->SetBinContent(20,0.7887285);
   hnueCCinFV_stack_13->SetBinContent(21,2.561031);
   hnueCCinFV_stack_13->SetBinContent(22,0.6134223);
   hnueCCinFV_stack_13->SetBinContent(23,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(24,1.185129);
   hnueCCinFV_stack_13->SetBinContent(25,0.3917402);
   hnueCCinFV_stack_13->SetBinError(1,0.6637361);
   hnueCCinFV_stack_13->SetBinError(2,1.619623);
   hnueCCinFV_stack_13->SetBinError(3,0.6287421);
   hnueCCinFV_stack_13->SetBinError(4,0.4241217);
   hnueCCinFV_stack_13->SetBinError(5,0.5784825);
   hnueCCinFV_stack_13->SetBinError(6,0.3611468);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.3018639);
   hnueCCinFV_stack_13->SetBinError(9,0.4494964);
   hnueCCinFV_stack_13->SetBinError(10,1.087239);
   hnueCCinFV_stack_13->SetBinError(11,0.4678018);
   hnueCCinFV_stack_13->SetBinError(12,0.5218164);
   hnueCCinFV_stack_13->SetBinError(13,0.4383608);
   hnueCCinFV_stack_13->SetBinError(14,0.7565163);
   hnueCCinFV_stack_13->SetBinError(15,0.6193819);
   hnueCCinFV_stack_13->SetBinError(16,0.3593463);
   hnueCCinFV_stack_13->SetBinError(17,0.4340577);
   hnueCCinFV_stack_13->SetBinError(18,1.218594);
   hnueCCinFV_stack_13->SetBinError(19,0.5660966);
   hnueCCinFV_stack_13->SetBinError(20,0.4667321);
   hnueCCinFV_stack_13->SetBinError(21,1.420064);
   hnueCCinFV_stack_13->SetBinError(22,0.3977043);
   hnueCCinFV_stack_13->SetBinError(23,0.3582875);
   hnueCCinFV_stack_13->SetBinError(24,0.6176974);
   hnueCCinFV_stack_13->SetBinError(25,0.2770047);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__17->SetBinContent(1,110.7988);
   hmcerror__17->SetBinContent(2,118.9787);
   hmcerror__17->SetBinContent(3,123.4274);
   hmcerror__17->SetBinContent(4,123.8157);
   hmcerror__17->SetBinContent(5,102.7175);
   hmcerror__17->SetBinContent(6,107.5119);
   hmcerror__17->SetBinContent(7,110.3056);
   hmcerror__17->SetBinContent(8,102.217);
   hmcerror__17->SetBinContent(9,105.8879);
   hmcerror__17->SetBinContent(10,110.973);
   hmcerror__17->SetBinContent(11,113.9226);
   hmcerror__17->SetBinContent(12,108.3714);
   hmcerror__17->SetBinContent(13,98.53383);
   hmcerror__17->SetBinContent(14,106.3225);
   hmcerror__17->SetBinContent(15,118.9595);
   hmcerror__17->SetBinContent(16,117.7355);
   hmcerror__17->SetBinContent(17,116.715);
   hmcerror__17->SetBinContent(18,100.7525);
   hmcerror__17->SetBinContent(19,110.021);
   hmcerror__17->SetBinContent(20,105.9942);
   hmcerror__17->SetBinContent(21,111.7495);
   hmcerror__17->SetBinContent(22,126.6605);
   hmcerror__17->SetBinContent(23,121.8158);
   hmcerror__17->SetBinContent(24,119.9745);
   hmcerror__17->SetBinContent(25,101.7349);
   hmcerror__17->SetBinError(1,40.43874);
   hmcerror__17->SetBinError(2,38.68414);
   hmcerror__17->SetBinError(3,42.6952);
   hmcerror__17->SetBinError(4,30.10267);
   hmcerror__17->SetBinError(5,26.74271);
   hmcerror__17->SetBinError(6,26.96331);
   hmcerror__17->SetBinError(7,33.57215);
   hmcerror__17->SetBinError(8,27.42478);
   hmcerror__17->SetBinError(9,28.73738);
   hmcerror__17->SetBinError(10,32.80924);
   hmcerror__17->SetBinError(11,37.06627);
   hmcerror__17->SetBinError(12,30.0123);
   hmcerror__17->SetBinError(13,30.07696);
   hmcerror__17->SetBinError(14,31.78967);
   hmcerror__17->SetBinError(15,34.53784);
   hmcerror__17->SetBinError(16,32.91656);
   hmcerror__17->SetBinError(17,32.0384);
   hmcerror__17->SetBinError(18,27.15702);
   hmcerror__17->SetBinError(19,25.942);
   hmcerror__17->SetBinError(20,33.8836);
   hmcerror__17->SetBinError(21,29.7628);
   hmcerror__17->SetBinError(22,36.23843);
   hmcerror__17->SetBinError(23,35.09987);
   hmcerror__17->SetBinError(24,38.49993);
   hmcerror__17->SetBinError(25,28.95814);
   hmcerror__17->SetBinError(26,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3021[25] = {
   124,
   136,
   142,
   128,
   132,
   122,
   121,
   109,
   107,
   94,
   111,
   98,
   113,
   112,
   124,
   135,
   116,
   106,
   116,
   96,
   119,
   124,
   124,
   120,
   109};
   Double_t _felx3021[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3021[25] = {
   11.13553,
   11.6619,
   11.91638,
   11.31371,
   11.48913,
   11.04536,
   11,
   10.44031,
   10.34408,
   9.8173,
   10.53565,
   10.0209,
   10.63015,
   10.58301,
   11.13553,
   11.61895,
   10.77033,
   10.29563,
   10.77033,
   9.9196,
   10.90871,
   11.13553,
   11.13553,
   10.95445,
   10.44031};
   Double_t _fehx3021[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3021[25] = {
   11.13553,
   11.6619,
   11.91638,
   11.31371,
   11.48913,
   11.04536,
   11,
   10.44031,
   10.34408,
   9.616,
   10.53565,
   9.82,
   10.63015,
   10.58301,
   11.13553,
   11.61895,
   10.77033,
   10.29563,
   10.77033,
   9.718,
   10.90871,
   11.13553,
   11.13553,
   10.95445,
   10.44031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(77.20933);
   Graph_Graph3021->SetMaximum(160.8897);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3022[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3022[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3022[25] = {
   0.3649745,
   0.3251351,
   0.3459134,
   0.2431248,
   0.2603522,
   0.2507936,
   0.3043558,
   0.2682997,
   0.2713944,
   0.2956506,
   0.3253637,
   0.2769393,
   0.305245,
   0.2989928,
   0.2903326,
   0.2795807,
   0.2745011,
   0.2695417,
   0.2357914,
   0.3196742,
   0.2663351,
   0.2861068,
   0.2881388,
   0.3209009,
   0.2846431};
   Double_t _fehx3022[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3022[25] = {
   0.3649745,
   0.3251351,
   0.3459134,
   0.2431248,
   0.2603522,
   0.2507936,
   0.3043558,
   0.2682997,
   0.2713944,
   0.2956506,
   0.3253637,
   0.2769393,
   0.305245,
   0.2989928,
   0.2903326,
   0.2795807,
   0.2745011,
   0.2695417,
   0.2357914,
   0.3196742,
   0.2663351,
   0.2861068,
   0.2881388,
   0.3209009,
   0.2846431};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3023[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3023[25] = {
   0.2406853,
   0.2289429,
   0.2241536,
   0.2106902,
   0.217615,
   0.202899,
   0.2065401,
   0.2185996,
   0.2250996,
   0.2143286,
   0.2269641,
   0.2226119,
   0.2367293,
   0.2273812,
   0.2028473,
   0.2074166,
   0.215979,
   0.2154438,
   0.1900623,
   0.2150843,
   0.2037214,
   0.2053883,
   0.209386,
   0.214486,
   0.2315072};
   Double_t _fehx3023[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3023[25] = {
   0.2406853,
   0.2289429,
   0.2241536,
   0.2106902,
   0.217615,
   0.202899,
   0.2065401,
   0.2185996,
   0.2250996,
   0.2143286,
   0.2269641,
   0.2226119,
   0.2367293,
   0.2273812,
   0.2028473,
   0.2074166,
   0.215979,
   0.2154438,
   0.1900623,
   0.2150843,
   0.2037214,
   0.2053883,
   0.209386,
   0.214486,
   0.2315072};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3024[25] = {
   1.119146,
   1.143062,
   1.150474,
   1.033795,
   1.285079,
   1.134758,
   1.096952,
   1.066359,
   1.010503,
   0.8470527,
   0.9743459,
   0.9042976,
   1.146814,
   1.053399,
   1.042371,
   1.146638,
   0.993874,
   1.052083,
   1.054345,
   0.9057103,
   1.064882,
   0.9789951,
   1.01793,
   1.000212,
   1.071412};
   Double_t _felx3024[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3024[25] = {
   0.1005023,
   0.09801676,
   0.0965456,
   0.09137539,
   0.1118517,
   0.1027362,
   0.09972294,
   0.1021387,
   0.09768897,
   0.08846564,
   0.09248082,
   0.09246812,
   0.1078832,
   0.09953684,
   0.0936077,
   0.09868692,
   0.09227888,
   0.1021873,
   0.09789344,
   0.09358629,
   0.09761759,
   0.08791635,
   0.09141281,
   0.09130649,
   0.1026227};
   Double_t _fehx3024[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3024[25] = {
   0.1005023,
   0.09801676,
   0.0965456,
   0.09137539,
   0.1118517,
   0.1027362,
   0.09972294,
   0.1021387,
   0.09768897,
   0.08665168,
   0.09248082,
   0.09061431,
   0.1078832,
   0.09953684,
   0.0936077,
   0.09868692,
   0.09227888,
   0.1021873,
   0.09789344,
   0.0916843,
   0.09761759,
   0.08791635,
   0.09141281,
   0.09130649,
   0.1026227};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6947527);
   Graph_Graph3024->SetMaximum(1.460765);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

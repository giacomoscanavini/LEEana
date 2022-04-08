#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 12:29:02 2022) by ROOT version 6.26/00
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
   pad1->Range(-27.69231,-0.90728,203.0769,76.45028);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmc__4->SetBinContent(1,6.137187);
   hmc__4->SetBinContent(2,22.90191);
   hmc__4->SetBinContent(3,32.64705);
   hmc__4->SetBinContent(4,39.37679);
   hmc__4->SetBinContent(5,45.364);
   hmc__4->SetBinContent(6,42.78019);
   hmc__4->SetBinContent(7,44.46231);
   hmc__4->SetBinContent(8,41.53754);
   hmc__4->SetBinContent(9,42.03128);
   hmc__4->SetBinContent(10,35.31612);
   hmc__4->SetBinContent(11,31.434);
   hmc__4->SetBinContent(12,31.64204);
   hmc__4->SetBinContent(13,28.64252);
   hmc__4->SetBinContent(14,25.2254);
   hmc__4->SetBinContent(15,25.08464);
   hmc__4->SetBinContent(16,24.31073);
   hmc__4->SetBinContent(17,19.55162);
   hmc__4->SetBinContent(18,19.54099);
   hmc__4->SetBinContent(19,18.49391);
   hmc__4->SetBinContent(20,16.76844);
   hmc__4->SetBinContent(21,15.67131);
   hmc__4->SetBinContent(22,11.36333);
   hmc__4->SetBinContent(23,7.962756);
   hmc__4->SetBinContent(24,2.791742);
   hmc__4->SetBinError(1,2.160889);
   hmc__4->SetBinError(2,5.771813);
   hmc__4->SetBinError(3,8.703802);
   hmc__4->SetBinError(4,8.577256);
   hmc__4->SetBinError(5,10.74811);
   hmc__4->SetBinError(6,11.2991);
   hmc__4->SetBinError(7,10.4416);
   hmc__4->SetBinError(8,9.925459);
   hmc__4->SetBinError(9,10.2018);
   hmc__4->SetBinError(10,8.526398);
   hmc__4->SetBinError(11,7.82097);
   hmc__4->SetBinError(12,7.619593);
   hmc__4->SetBinError(13,7.374305);
   hmc__4->SetBinError(14,7.117866);
   hmc__4->SetBinError(15,6.719562);
   hmc__4->SetBinError(16,8.219127);
   hmc__4->SetBinError(17,5.263326);
   hmc__4->SetBinError(18,5.176431);
   hmc__4->SetBinError(19,5.411813);
   hmc__4->SetBinError(20,5.179355);
   hmc__4->SetBinError(21,4.767599);
   hmc__4->SetBinError(22,3.588433);
   hmc__4->SetBinError(23,2.887972);
   hmc__4->SetBinError(24,2.103695);
   hmc__4->SetBinError(25,0.125509);
   hmc__4->SetMinimum(-0.90728);
   hmc__4->SetMaximum(72.5824);
   hmc__4->SetEntries(622.1566);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,180);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(47.6322);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.0127502);
   hbadmatch_stack_1->SetBinContent(2,0.488757);
   hbadmatch_stack_1->SetBinContent(3,0.4646994);
   hbadmatch_stack_1->SetBinContent(4,0.7301513);
   hbadmatch_stack_1->SetBinContent(5,1.01577);
   hbadmatch_stack_1->SetBinContent(6,0.8611011);
   hbadmatch_stack_1->SetBinContent(7,0.6544816);
   hbadmatch_stack_1->SetBinContent(8,1.05427);
   hbadmatch_stack_1->SetBinContent(9,1.092787);
   hbadmatch_stack_1->SetBinContent(10,1.136479);
   hbadmatch_stack_1->SetBinContent(11,1.081967);
   hbadmatch_stack_1->SetBinContent(12,0.7690466);
   hbadmatch_stack_1->SetBinContent(13,0.5194618);
   hbadmatch_stack_1->SetBinContent(14,0.4820675);
   hbadmatch_stack_1->SetBinContent(15,0.5899798);
   hbadmatch_stack_1->SetBinContent(16,0.5388057);
   hbadmatch_stack_1->SetBinContent(17,0.5431312);
   hbadmatch_stack_1->SetBinContent(18,0.3543841);
   hbadmatch_stack_1->SetBinContent(19,0.3792625);
   hbadmatch_stack_1->SetBinContent(20,0.3761078);
   hbadmatch_stack_1->SetBinContent(21,0.07786341);
   hbadmatch_stack_1->SetBinContent(22,0.1263631);
   hbadmatch_stack_1->SetBinContent(23,0.3833293);
   hbadmatch_stack_1->SetBinError(1,0.0127502);
   hbadmatch_stack_1->SetBinError(2,0.1724056);
   hbadmatch_stack_1->SetBinError(3,0.1511326);
   hbadmatch_stack_1->SetBinError(4,0.1965927);
   hbadmatch_stack_1->SetBinError(5,0.3921197);
   hbadmatch_stack_1->SetBinError(6,0.2065949);
   hbadmatch_stack_1->SetBinError(7,0.1862262);
   hbadmatch_stack_1->SetBinError(8,0.2408534);
   hbadmatch_stack_1->SetBinError(9,0.2412377);
   hbadmatch_stack_1->SetBinError(10,0.4203812);
   hbadmatch_stack_1->SetBinError(11,0.247763);
   hbadmatch_stack_1->SetBinError(12,0.2106412);
   hbadmatch_stack_1->SetBinError(13,0.163746);
   hbadmatch_stack_1->SetBinError(14,0.1657378);
   hbadmatch_stack_1->SetBinError(15,0.1846901);
   hbadmatch_stack_1->SetBinError(16,0.1621198);
   hbadmatch_stack_1->SetBinError(17,0.1844247);
   hbadmatch_stack_1->SetBinError(18,0.1357183);
   hbadmatch_stack_1->SetBinError(19,0.1307247);
   hbadmatch_stack_1->SetBinError(20,0.141697);
   hbadmatch_stack_1->SetBinError(21,0.03181192);
   hbadmatch_stack_1->SetBinError(22,0.07018559);
   hbadmatch_stack_1->SetBinError(23,0.2764926);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.4717173);
   hext_stack_2->SetBinContent(2,2.284967);
   hext_stack_2->SetBinContent(3,1.798249);
   hext_stack_2->SetBinContent(4,3.017083);
   hext_stack_2->SetBinContent(5,2.891653);
   hext_stack_2->SetBinContent(6,1.869137);
   hext_stack_2->SetBinContent(7,3.176591);
   hext_stack_2->SetBinContent(8,2.741683);
   hext_stack_2->SetBinContent(9,2.530365);
   hext_stack_2->SetBinContent(10,3.029353);
   hext_stack_2->SetBinContent(11,1.3238);
   hext_stack_2->SetBinContent(12,3.948248);
   hext_stack_2->SetBinContent(13,3.326561);
   hext_stack_2->SetBinContent(14,2.582175);
   hext_stack_2->SetBinContent(15,2.569906);
   hext_stack_2->SetBinContent(16,1.920947);
   hext_stack_2->SetBinContent(17,1.464231);
   hext_stack_2->SetBinContent(18,0.7811952);
   hext_stack_2->SetBinContent(19,0.8180047);
   hext_stack_2->SetBinContent(20,1.105674);
   hext_stack_2->SetBinContent(21,1.93868);
   hext_stack_2->SetBinContent(22,1.093404);
   hext_stack_2->SetBinContent(23,0.6462268);
   hext_stack_2->SetBinContent(24,0.4226379);
   hext_stack_2->SetBinError(1,0.2830978);
   hext_stack_2->SetBinError(2,0.6323121);
   hext_stack_2->SetBinError(3,0.5313304);
   hext_stack_2->SetBinError(4,0.7213434);
   hext_stack_2->SetBinError(5,0.6939878);
   hext_stack_2->SetBinError(6,0.4959874);
   hext_stack_2->SetBinError(7,0.7226987);
   hext_stack_2->SetBinError(8,0.6652824);
   hext_stack_2->SetBinError(9,0.6346886);
   hext_stack_2->SetBinError(10,0.7214478);
   hext_stack_2->SetBinError(11,0.4061475);
   hext_stack_2->SetBinError(12,0.8249088);
   hext_stack_2->SetBinError(13,0.7492075);
   hext_stack_2->SetBinError(14,0.6638099);
   hext_stack_2->SetBinError(15,0.6636965);
   hext_stack_2->SetBinError(16,0.5327452);
   hext_stack_2->SetBinError(17,0.4909535);
   hext_stack_2->SetBinError(18,0.3480228);
   hext_stack_2->SetBinError(19,0.3486711);
   hext_stack_2->SetBinError(20,0.4466068);
   hext_stack_2->SetBinError(21,0.5986581);
   hext_stack_2->SetBinError(22,0.4464383);
   hext_stack_2->SetBinError(23,0.3456354);
   hext_stack_2->SetBinError(24,0.2820323);
   hext_stack_2->SetEntries(893);

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.009731955);
   hdirt_stack_3->SetBinContent(2,0.2098189);
   hdirt_stack_3->SetBinContent(3,0.1490664);
   hdirt_stack_3->SetBinContent(4,0.2729472);
   hdirt_stack_3->SetBinContent(5,0.3565369);
   hdirt_stack_3->SetBinContent(6,0.2642668);
   hdirt_stack_3->SetBinContent(7,0.3255101);
   hdirt_stack_3->SetBinContent(8,0.6501512);
   hdirt_stack_3->SetBinContent(9,0.5775199);
   hdirt_stack_3->SetBinContent(10,0.2464841);
   hdirt_stack_3->SetBinContent(11,0.3383864);
   hdirt_stack_3->SetBinContent(12,0.3250691);
   hdirt_stack_3->SetBinContent(13,0.2541765);
   hdirt_stack_3->SetBinContent(14,0.2060025);
   hdirt_stack_3->SetBinContent(15,0.2704455);
   hdirt_stack_3->SetBinContent(16,0.1835148);
   hdirt_stack_3->SetBinContent(17,0.2112778);
   hdirt_stack_3->SetBinContent(18,0.2703631);
   hdirt_stack_3->SetBinContent(19,0.3502624);
   hdirt_stack_3->SetBinContent(20,0.1519738);
   hdirt_stack_3->SetBinContent(21,0.1839582);
   hdirt_stack_3->SetBinContent(22,0.1651453);
   hdirt_stack_3->SetBinContent(23,0.1048574);
   hdirt_stack_3->SetBinContent(24,0.04420907);
   hdirt_stack_3->SetBinError(1,0.009731955);
   hdirt_stack_3->SetBinError(2,0.1012421);
   hdirt_stack_3->SetBinError(3,0.07744966);
   hdirt_stack_3->SetBinError(4,0.1058396);
   hdirt_stack_3->SetBinError(5,0.1207579);
   hdirt_stack_3->SetBinError(6,0.09601693);
   hdirt_stack_3->SetBinError(7,0.1094663);
   hdirt_stack_3->SetBinError(8,0.3215267);
   hdirt_stack_3->SetBinError(9,0.150823);
   hdirt_stack_3->SetBinError(10,0.0863074);
   hdirt_stack_3->SetBinError(11,0.1182784);
   hdirt_stack_3->SetBinError(12,0.1236607);
   hdirt_stack_3->SetBinError(13,0.1002124);
   hdirt_stack_3->SetBinError(14,0.09576124);
   hdirt_stack_3->SetBinError(15,0.1105393);
   hdirt_stack_3->SetBinError(16,0.07935345);
   hdirt_stack_3->SetBinError(17,0.0900897);
   hdirt_stack_3->SetBinError(18,0.100884);
   hdirt_stack_3->SetBinError(19,0.2149426);
   hdirt_stack_3->SetBinError(20,0.07765222);
   hdirt_stack_3->SetBinError(21,0.08031666);
   hdirt_stack_3->SetBinError(22,0.08355729);
   hdirt_stack_3->SetBinError(23,0.06359251);
   hdirt_stack_3->SetBinError(24,0.04420907);
   hdirt_stack_3->SetEntries(224);

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.5024613);
   houtFV_stack_4->SetBinContent(2,1.794022);
   houtFV_stack_4->SetBinContent(3,3.64826);
   houtFV_stack_4->SetBinContent(4,4.369314);
   houtFV_stack_4->SetBinContent(5,4.724372);
   houtFV_stack_4->SetBinContent(6,4.874749);
   houtFV_stack_4->SetBinContent(7,3.7409);
   houtFV_stack_4->SetBinContent(8,3.567312);
   houtFV_stack_4->SetBinContent(9,4.006949);
   houtFV_stack_4->SetBinContent(10,2.504343);
   houtFV_stack_4->SetBinContent(11,2.692247);
   houtFV_stack_4->SetBinContent(12,3.004626);
   houtFV_stack_4->SetBinContent(13,2.265315);
   houtFV_stack_4->SetBinContent(14,2.169709);
   houtFV_stack_4->SetBinContent(15,2.708169);
   houtFV_stack_4->SetBinContent(16,2.45552);
   houtFV_stack_4->SetBinContent(17,2.096128);
   houtFV_stack_4->SetBinContent(18,2.264381);
   houtFV_stack_4->SetBinContent(19,2.562358);
   houtFV_stack_4->SetBinContent(20,2.112039);
   houtFV_stack_4->SetBinContent(21,2.651);
   houtFV_stack_4->SetBinContent(22,1.170887);
   houtFV_stack_4->SetBinContent(23,0.9552971);
   houtFV_stack_4->SetBinContent(24,0.26237);
   houtFV_stack_4->SetBinError(1,0.1573204);
   houtFV_stack_4->SetBinError(2,0.3121288);
   houtFV_stack_4->SetBinError(3,0.4513922);
   houtFV_stack_4->SetBinError(4,0.4860198);
   houtFV_stack_4->SetBinError(5,0.5103871);
   houtFV_stack_4->SetBinError(6,0.5221362);
   houtFV_stack_4->SetBinError(7,0.4531886);
   houtFV_stack_4->SetBinError(8,0.4360705);
   houtFV_stack_4->SetBinError(9,0.4745893);
   houtFV_stack_4->SetBinError(10,0.3640786);
   houtFV_stack_4->SetBinError(11,0.3717086);
   houtFV_stack_4->SetBinError(12,0.4107147);
   houtFV_stack_4->SetBinError(13,0.3591841);
   houtFV_stack_4->SetBinError(14,0.3524337);
   houtFV_stack_4->SetBinError(15,0.3860018);
   houtFV_stack_4->SetBinError(16,0.3665926);
   houtFV_stack_4->SetBinError(17,0.3469363);
   houtFV_stack_4->SetBinError(18,0.3510792);
   houtFV_stack_4->SetBinError(19,0.3814486);
   houtFV_stack_4->SetBinError(20,0.3185242);
   houtFV_stack_4->SetBinError(21,0.3955117);
   houtFV_stack_4->SetBinError(22,0.2595553);
   houtFV_stack_4->SetBinError(23,0.2176707);
   houtFV_stack_4->SetBinError(24,0.1117638);
   houtFV_stack_4->SetEntries(1630);

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,3.470601);
   hNCpi0inFV_stack_5->SetBinContent(2,11.4283);
   hNCpi0inFV_stack_5->SetBinContent(3,16.88767);
   hNCpi0inFV_stack_5->SetBinContent(4,18.64555);
   hNCpi0inFV_stack_5->SetBinContent(5,23.65305);
   hNCpi0inFV_stack_5->SetBinContent(6,23.04246);
   hNCpi0inFV_stack_5->SetBinContent(7,24.38704);
   hNCpi0inFV_stack_5->SetBinContent(8,22.44181);
   hNCpi0inFV_stack_5->SetBinContent(9,22.23363);
   hNCpi0inFV_stack_5->SetBinContent(10,18.06996);
   hNCpi0inFV_stack_5->SetBinContent(11,15.63);
   hNCpi0inFV_stack_5->SetBinContent(12,15.73936);
   hNCpi0inFV_stack_5->SetBinContent(13,14.80463);
   hNCpi0inFV_stack_5->SetBinContent(14,12.48873);
   hNCpi0inFV_stack_5->SetBinContent(15,11.00735);
   hNCpi0inFV_stack_5->SetBinContent(16,12.62181);
   hNCpi0inFV_stack_5->SetBinContent(17,9.198059);
   hNCpi0inFV_stack_5->SetBinContent(18,10.79976);
   hNCpi0inFV_stack_5->SetBinContent(19,9.061396);
   hNCpi0inFV_stack_5->SetBinContent(20,8.664158);
   hNCpi0inFV_stack_5->SetBinContent(21,6.326346);
   hNCpi0inFV_stack_5->SetBinContent(22,5.216704);
   hNCpi0inFV_stack_5->SetBinContent(23,3.560411);
   hNCpi0inFV_stack_5->SetBinContent(24,1.206259);
   hNCpi0inFV_stack_5->SetBinError(1,0.4307179);
   hNCpi0inFV_stack_5->SetBinError(2,0.7843479);
   hNCpi0inFV_stack_5->SetBinError(3,0.9606412);
   hNCpi0inFV_stack_5->SetBinError(4,0.9938293);
   hNCpi0inFV_stack_5->SetBinError(5,1.138171);
   hNCpi0inFV_stack_5->SetBinError(6,1.114414);
   hNCpi0inFV_stack_5->SetBinError(7,1.148952);
   hNCpi0inFV_stack_5->SetBinError(8,1.104107);
   hNCpi0inFV_stack_5->SetBinError(9,1.10427);
   hNCpi0inFV_stack_5->SetBinError(10,0.9839843);
   hNCpi0inFV_stack_5->SetBinError(11,0.9112362);
   hNCpi0inFV_stack_5->SetBinError(12,0.9170015);
   hNCpi0inFV_stack_5->SetBinError(13,0.890163);
   hNCpi0inFV_stack_5->SetBinError(14,0.8175295);
   hNCpi0inFV_stack_5->SetBinError(15,0.7671337);
   hNCpi0inFV_stack_5->SetBinError(16,0.8259817);
   hNCpi0inFV_stack_5->SetBinError(17,0.7059429);
   hNCpi0inFV_stack_5->SetBinError(18,0.7693793);
   hNCpi0inFV_stack_5->SetBinError(19,0.7003683);
   hNCpi0inFV_stack_5->SetBinError(20,0.6834904);
   hNCpi0inFV_stack_5->SetBinError(21,0.5802989);
   hNCpi0inFV_stack_5->SetBinError(22,0.5290727);
   hNCpi0inFV_stack_5->SetBinError(23,0.4378699);
   hNCpi0inFV_stack_5->SetBinError(24,0.2592426);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.9958204);
   hCCpi0inFV_stack_6->SetBinContent(2,4.141448);
   hCCpi0inFV_stack_6->SetBinContent(3,6.124451);
   hCCpi0inFV_stack_6->SetBinContent(4,7.820614);
   hCCpi0inFV_stack_6->SetBinContent(5,7.090645);
   hCCpi0inFV_stack_6->SetBinContent(6,7.527672);
   hCCpi0inFV_stack_6->SetBinContent(7,6.59322);
   hCCpi0inFV_stack_6->SetBinContent(8,7.06407);
   hCCpi0inFV_stack_6->SetBinContent(9,6.98233);
   hCCpi0inFV_stack_6->SetBinContent(10,5.660259);
   hCCpi0inFV_stack_6->SetBinContent(11,5.253397);
   hCCpi0inFV_stack_6->SetBinContent(12,4.256322);
   hCCpi0inFV_stack_6->SetBinContent(13,3.757413);
   hCCpi0inFV_stack_6->SetBinContent(14,3.838294);
   hCCpi0inFV_stack_6->SetBinContent(15,4.187424);
   hCCpi0inFV_stack_6->SetBinContent(16,3.800941);
   hCCpi0inFV_stack_6->SetBinContent(17,3.227801);
   hCCpi0inFV_stack_6->SetBinContent(18,3.349746);
   hCCpi0inFV_stack_6->SetBinContent(19,3.411121);
   hCCpi0inFV_stack_6->SetBinContent(20,2.671031);
   hCCpi0inFV_stack_6->SetBinContent(21,2.575508);
   hCCpi0inFV_stack_6->SetBinContent(22,2.256715);
   hCCpi0inFV_stack_6->SetBinContent(23,1.370104);
   hCCpi0inFV_stack_6->SetBinContent(24,0.3990328);
   hCCpi0inFV_stack_6->SetBinError(1,0.2319302);
   hCCpi0inFV_stack_6->SetBinError(2,0.4732548);
   hCCpi0inFV_stack_6->SetBinError(3,0.5845164);
   hCCpi0inFV_stack_6->SetBinError(4,0.6494076);
   hCCpi0inFV_stack_6->SetBinError(5,0.6152253);
   hCCpi0inFV_stack_6->SetBinError(6,0.6442382);
   hCCpi0inFV_stack_6->SetBinError(7,0.5937358);
   hCCpi0inFV_stack_6->SetBinError(8,0.6200404);
   hCCpi0inFV_stack_6->SetBinError(9,0.6163954);
   hCCpi0inFV_stack_6->SetBinError(10,0.5470927);
   hCCpi0inFV_stack_6->SetBinError(11,0.5275787);
   hCCpi0inFV_stack_6->SetBinError(12,0.4802086);
   hCCpi0inFV_stack_6->SetBinError(13,0.4469397);
   hCCpi0inFV_stack_6->SetBinError(14,0.4571649);
   hCCpi0inFV_stack_6->SetBinError(15,0.482085);
   hCCpi0inFV_stack_6->SetBinError(16,0.4600874);
   hCCpi0inFV_stack_6->SetBinError(17,0.415075);
   hCCpi0inFV_stack_6->SetBinError(18,0.4298378);
   hCCpi0inFV_stack_6->SetBinError(19,0.4336468);
   hCCpi0inFV_stack_6->SetBinError(20,0.3926992);
   hCCpi0inFV_stack_6->SetBinError(21,0.3754846);
   hCCpi0inFV_stack_6->SetBinError(22,0.3468074);
   hCCpi0inFV_stack_6->SetBinError(23,0.2771083);
   hCCpi0inFV_stack_6->SetBinError(24,0.1425864);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.1384575);
   hNCinFV_stack_7->SetBinContent(2,0.8090212);
   hNCinFV_stack_7->SetBinContent(3,1.430379);
   hNCinFV_stack_7->SetBinContent(4,1.619837);
   hNCinFV_stack_7->SetBinContent(5,1.876823);
   hNCinFV_stack_7->SetBinContent(6,1.459469);
   hNCinFV_stack_7->SetBinContent(7,1.756465);
   hNCinFV_stack_7->SetBinContent(8,1.109642);
   hNCinFV_stack_7->SetBinContent(9,1.765661);
   hNCinFV_stack_7->SetBinContent(10,1.306466);
   hNCinFV_stack_7->SetBinContent(11,1.597926);
   hNCinFV_stack_7->SetBinContent(12,1.195304);
   hNCinFV_stack_7->SetBinContent(13,0.9584341);
   hNCinFV_stack_7->SetBinContent(14,1.381173);
   hNCinFV_stack_7->SetBinContent(15,1.24451);
   hNCinFV_stack_7->SetBinContent(16,1.095097);
   hNCinFV_stack_7->SetBinContent(17,0.9237729);
   hNCinFV_stack_7->SetBinContent(18,0.8709775);
   hNCinFV_stack_7->SetBinContent(19,0.7707705);
   hNCinFV_stack_7->SetBinContent(20,0.475534);
   hNCinFV_stack_7->SetBinContent(21,0.7470649);
   hNCinFV_stack_7->SetBinContent(22,0.561196);
   hNCinFV_stack_7->SetBinContent(23,0.4482389);
   hNCinFV_stack_7->SetBinContent(24,0.1986191);
   hNCinFV_stack_7->SetBinError(1,0.0693829);
   hNCinFV_stack_7->SetBinError(2,0.2094041);
   hNCinFV_stack_7->SetBinError(3,0.281443);
   hNCinFV_stack_7->SetBinError(4,0.2909887);
   hNCinFV_stack_7->SetBinError(5,0.3259491);
   hNCinFV_stack_7->SetBinError(6,0.271079);
   hNCinFV_stack_7->SetBinError(7,0.3091003);
   hNCinFV_stack_7->SetBinError(8,0.2383882);
   hNCinFV_stack_7->SetBinError(9,0.3142104);
   hNCinFV_stack_7->SetBinError(10,0.2674565);
   hNCinFV_stack_7->SetBinError(11,0.2798174);
   hNCinFV_stack_7->SetBinError(12,0.2530186);
   hNCinFV_stack_7->SetBinError(13,0.2277112);
   hNCinFV_stack_7->SetBinError(14,0.2748347);
   hNCinFV_stack_7->SetBinError(15,0.2601815);
   hNCinFV_stack_7->SetBinError(16,0.2443197);
   hNCinFV_stack_7->SetBinError(17,0.2128689);
   hNCinFV_stack_7->SetBinError(18,0.2183773);
   hNCinFV_stack_7->SetBinError(19,0.2082363);
   hNCinFV_stack_7->SetBinError(20,0.1459667);
   hNCinFV_stack_7->SetBinError(21,0.2000287);
   hNCinFV_stack_7->SetBinError(22,0.1688068);
   hNCinFV_stack_7->SetBinError(23,0.1549416);
   hNCinFV_stack_7->SetBinError(24,0.1080662);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.4425187);
   hnumuCCinFV_stack_8->SetBinContent(2,1.490335);
   hnumuCCinFV_stack_8->SetBinContent(3,1.433578);
   hnumuCCinFV_stack_8->SetBinContent(4,2.515208);
   hnumuCCinFV_stack_8->SetBinContent(5,3.631229);
   hnumuCCinFV_stack_8->SetBinContent(6,2.737625);
   hnumuCCinFV_stack_8->SetBinContent(7,3.501703);
   hnumuCCinFV_stack_8->SetBinContent(8,2.625888);
   hnumuCCinFV_stack_8->SetBinContent(9,2.640835);
   hnumuCCinFV_stack_8->SetBinContent(10,3.152881);
   hnumuCCinFV_stack_8->SetBinContent(11,3.503533);
   hnumuCCinFV_stack_8->SetBinContent(12,2.388763);
   hnumuCCinFV_stack_8->SetBinContent(13,2.632614);
   hnumuCCinFV_stack_8->SetBinContent(14,1.923052);
   hnumuCCinFV_stack_8->SetBinContent(15,2.426094);
   hnumuCCinFV_stack_8->SetBinContent(16,1.585801);
   hnumuCCinFV_stack_8->SetBinContent(17,1.887225);
   hnumuCCinFV_stack_8->SetBinContent(18,0.8374302);
   hnumuCCinFV_stack_8->SetBinContent(19,1.003496);
   hnumuCCinFV_stack_8->SetBinContent(20,1.134059);
   hnumuCCinFV_stack_8->SetBinContent(21,1.170887);
   hnumuCCinFV_stack_8->SetBinContent(22,0.691442);
   hnumuCCinFV_stack_8->SetBinContent(23,0.4323354);
   hnumuCCinFV_stack_8->SetBinContent(24,0.2586139);
   hnumuCCinFV_stack_8->SetBinError(1,0.161373);
   hnumuCCinFV_stack_8->SetBinError(2,0.3024215);
   hnumuCCinFV_stack_8->SetBinError(3,0.3127907);
   hnumuCCinFV_stack_8->SetBinError(4,0.3893342);
   hnumuCCinFV_stack_8->SetBinError(5,0.742279);
   hnumuCCinFV_stack_8->SetBinError(6,0.4116712);
   hnumuCCinFV_stack_8->SetBinError(7,0.5683721);
   hnumuCCinFV_stack_8->SetBinError(8,0.4100179);
   hnumuCCinFV_stack_8->SetBinError(9,0.4658879);
   hnumuCCinFV_stack_8->SetBinError(10,0.659375);
   hnumuCCinFV_stack_8->SetBinError(11,0.5410876);
   hnumuCCinFV_stack_8->SetBinError(12,0.4029397);
   hnumuCCinFV_stack_8->SetBinError(13,0.5337905);
   hnumuCCinFV_stack_8->SetBinError(14,0.3919777);
   hnumuCCinFV_stack_8->SetBinError(15,0.5918497);
   hnumuCCinFV_stack_8->SetBinError(16,0.3385041);
   hnumuCCinFV_stack_8->SetBinError(17,0.3498474);
   hnumuCCinFV_stack_8->SetBinError(18,0.221751);
   hnumuCCinFV_stack_8->SetBinError(19,0.2388214);
   hnumuCCinFV_stack_8->SetBinError(20,0.2597947);
   hnumuCCinFV_stack_8->SetBinError(21,0.2664222);
   hnumuCCinFV_stack_8->SetBinError(22,0.196437);
   hnumuCCinFV_stack_8->SetBinError(23,0.1678738);
   hnumuCCinFV_stack_8->SetBinError(24,0.1296441);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.09312885);
   hnueCCinFV_stack_9->SetBinContent(2,0.2552479);
   hnueCCinFV_stack_9->SetBinContent(3,0.7106932);
   hnueCCinFV_stack_9->SetBinContent(4,0.3860766);
   hnueCCinFV_stack_9->SetBinContent(5,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(6,0.1437048);
   hnueCCinFV_stack_9->SetBinContent(7,0.3264019);
   hnueCCinFV_stack_9->SetBinContent(8,0.2827172);
   hnueCCinFV_stack_9->SetBinContent(9,0.2012009);
   hnueCCinFV_stack_9->SetBinContent(10,0.2098984);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.01530216);
   hnueCCinFV_stack_9->SetBinContent(13,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(14,0.1541936);
   hnueCCinFV_stack_9->SetBinContent(15,0.08076376);
   hnueCCinFV_stack_9->SetBinContent(16,0.1082995);
   hnueCCinFV_stack_9->SetBinContent(18,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(19,0.1372353);
   hnueCCinFV_stack_9->SetBinContent(20,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(22,0.08147465);
   hnueCCinFV_stack_9->SetBinContent(23,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.06588272);
   hnueCCinFV_stack_9->SetBinError(2,0.1132687);
   hnueCCinFV_stack_9->SetBinError(3,0.4823529);
   hnueCCinFV_stack_9->SetBinError(4,0.1482532);
   hnueCCinFV_stack_9->SetBinError(5,0.08761943);
   hnueCCinFV_stack_9->SetBinError(6,0.07286343);
   hnueCCinFV_stack_9->SetBinError(7,0.1364692);
   hnueCCinFV_stack_9->SetBinError(8,0.1292037);
   hnueCCinFV_stack_9->SetBinError(9,0.1084012);
   hnueCCinFV_stack_9->SetBinError(10,0.1021935);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.01528838);
   hnueCCinFV_stack_9->SetBinError(13,0.08761943);
   hnueCCinFV_stack_9->SetBinError(14,0.1015842);
   hnueCCinFV_stack_9->SetBinError(15,0.064748);
   hnueCCinFV_stack_9->SetBinError(16,0.08473972);
   hnueCCinFV_stack_9->SetBinError(18,0.0127502);
   hnueCCinFV_stack_9->SetBinError(19,0.1065842);
   hnueCCinFV_stack_9->SetBinError(20,0.063966);
   hnueCCinFV_stack_9->SetBinError(22,0.06495805);
   hnueCCinFV_stack_9->SetBinError(23,0.06195629);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmcerror__5->SetBinContent(1,6.137187);
   hmcerror__5->SetBinContent(2,22.90191);
   hmcerror__5->SetBinContent(3,32.64705);
   hmcerror__5->SetBinContent(4,39.37679);
   hmcerror__5->SetBinContent(5,45.364);
   hmcerror__5->SetBinContent(6,42.78019);
   hmcerror__5->SetBinContent(7,44.46231);
   hmcerror__5->SetBinContent(8,41.53754);
   hmcerror__5->SetBinContent(9,42.03128);
   hmcerror__5->SetBinContent(10,35.31612);
   hmcerror__5->SetBinContent(11,31.434);
   hmcerror__5->SetBinContent(12,31.64204);
   hmcerror__5->SetBinContent(13,28.64252);
   hmcerror__5->SetBinContent(14,25.2254);
   hmcerror__5->SetBinContent(15,25.08464);
   hmcerror__5->SetBinContent(16,24.31073);
   hmcerror__5->SetBinContent(17,19.55162);
   hmcerror__5->SetBinContent(18,19.54099);
   hmcerror__5->SetBinContent(19,18.49391);
   hmcerror__5->SetBinContent(20,16.76844);
   hmcerror__5->SetBinContent(21,15.67131);
   hmcerror__5->SetBinContent(22,11.36333);
   hmcerror__5->SetBinContent(23,7.962756);
   hmcerror__5->SetBinContent(24,2.791742);
   hmcerror__5->SetBinError(1,2.160889);
   hmcerror__5->SetBinError(2,5.771813);
   hmcerror__5->SetBinError(3,8.703802);
   hmcerror__5->SetBinError(4,8.577256);
   hmcerror__5->SetBinError(5,10.74811);
   hmcerror__5->SetBinError(6,11.2991);
   hmcerror__5->SetBinError(7,10.4416);
   hmcerror__5->SetBinError(8,9.925459);
   hmcerror__5->SetBinError(9,10.2018);
   hmcerror__5->SetBinError(10,8.526398);
   hmcerror__5->SetBinError(11,7.82097);
   hmcerror__5->SetBinError(12,7.619593);
   hmcerror__5->SetBinError(13,7.374305);
   hmcerror__5->SetBinError(14,7.117866);
   hmcerror__5->SetBinError(15,6.719562);
   hmcerror__5->SetBinError(16,8.219127);
   hmcerror__5->SetBinError(17,5.263326);
   hmcerror__5->SetBinError(18,5.176431);
   hmcerror__5->SetBinError(19,5.411813);
   hmcerror__5->SetBinError(20,5.179355);
   hmcerror__5->SetBinError(21,4.767599);
   hmcerror__5->SetBinError(22,3.588433);
   hmcerror__5->SetBinError(23,2.887972);
   hmcerror__5->SetBinError(24,2.103695);
   hmcerror__5->SetBinError(25,0.125509);
   hmcerror__5->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   7,
   19,
   33,
   30,
   32,
   41,
   34,
   27,
   28,
   15,
   31,
   27,
   25,
   17,
   21,
   20,
   25,
   18,
   21,
   12,
   17,
   6,
   7,
   1};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   2.85954,
   4.5151,
   5.8847,
   5.6197,
   5.7977,
   6.5384,
   5.9703,
   5.3414,
   5.4358,
   4.0385,
   5.7094,
   5.3414,
   5.1474,
   4.2835,
   4.7354,
   4.6266,
   5.1474,
   4.4008,
   4.7354,
   3.64022,
   4.2835,
   2.67925,
   2.85954,
   1};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   2.61053,
   4.3011,
   5.6776,
   5.4117,
   5.5904,
   6.3331,
   5.7635,
   5.1322,
   5.2271,
   3.8197,
   5.5017,
   5.1322,
   4.9374,
   4.0673,
   4.5229,
   4.4133,
   4.9374,
   4.1858,
   4.5229,
   3.4155,
   4.0673,
   2.41858,
   2.61053,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,198);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(52.06641);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.90/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 63.1","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  320.6","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 104.4","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.7","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 46.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_bnb_10_kine_pio_costheta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.3520977,
   0.2520232,
   0.266603,
   0.2178252,
   0.2369305,
   0.2641199,
   0.2348416,
   0.2389515,
   0.2427193,
   0.2414307,
   0.2488061,
   0.240806,
   0.25746,
   0.2821706,
   0.2678756,
   0.3380864,
   0.2692015,
   0.2649012,
   0.2926268,
   0.3088751,
   0.3042247,
   0.3157906,
   0.362685,
   0.7535418};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.3520977,
   0.2520232,
   0.266603,
   0.2178252,
   0.2369305,
   0.2641199,
   0.2348416,
   0.2389515,
   0.2427193,
   0.2414307,
   0.2488061,
   0.240806,
   0.25746,
   0.2821706,
   0.2678756,
   0.3380864,
   0.2692015,
   0.2649012,
   0.2926268,
   0.3088751,
   0.3042247,
   0.3157906,
   0.362685,
   0.7535418};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,198);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.2140857,
   0.1858061,
   0.1860051,
   0.1855823,
   0.2003496,
   0.2076384,
   0.2053545,
   0.2016435,
   0.2146499,
   0.2122126,
   0.2140488,
   0.1966195,
   0.1861241,
   0.2047264,
   0.2030695,
   0.188222,
   0.2142933,
   0.1997785,
   0.2219147,
   0.2091647,
   0.1890634,
   0.2008446,
   0.1976216,
   0.2674881};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.2140857,
   0.1858061,
   0.1860051,
   0.1855823,
   0.2003496,
   0.2076384,
   0.2053545,
   0.2016435,
   0.2146499,
   0.2122126,
   0.2140488,
   0.1966195,
   0.1861241,
   0.2047264,
   0.2030695,
   0.188222,
   0.2142933,
   0.1997785,
   0.2219147,
   0.2091647,
   0.1890634,
   0.2008446,
   0.1976216,
   0.2674881};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,198);
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
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   1.140588,
   0.829625,
   1.010811,
   0.7618702,
   0.7054052,
   0.9583876,
   0.7646926,
   0.6500144,
   0.6661705,
   0.4247352,
   0.9861932,
   0.8532951,
   0.8728281,
   0.6739239,
   0.8371656,
   0.8226819,
   1.278666,
   0.9211407,
   1.135509,
   0.71563,
   1.084785,
   0.5280142,
   0.8790926,
   0.3581992};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.4659366,
   0.1971495,
   0.1802521,
   0.1427161,
   0.127804,
   0.1528371,
   0.1342778,
   0.1285921,
   0.1293275,
   0.1143529,
   0.1816313,
   0.168807,
   0.1797118,
   0.169809,
   0.1887769,
   0.190311,
   0.2632722,
   0.2252087,
   0.2560519,
   0.2170875,
   0.2733339,
   0.2357803,
   0.3591143,
   0.3581992};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.4253627,
   0.1878053,
   0.1739085,
   0.1374338,
   0.1232343,
   0.1480382,
   0.1296266,
   0.1235557,
   0.1243621,
   0.1081574,
   0.1750238,
   0.1621956,
   0.1723801,
   0.1612383,
   0.1803055,
   0.1815371,
   0.2525314,
   0.2142061,
   0.2445616,
   0.2036862,
   0.259538,
   0.2128408,
   0.3278425,
   0.4870471};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.722545);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_bnb_10_kine_pio_costheta_low_all",24,0,180);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

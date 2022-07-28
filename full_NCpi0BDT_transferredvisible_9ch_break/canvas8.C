#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Jun  5 00:24:19 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-230.7692,-2.846346,1692.308,314.7459);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hmc__22->SetBinContent(2,2.735728);
   hmc__22->SetBinContent(3,71.31759);
   hmc__22->SetBinContent(4,137.8242);
   hmc__22->SetBinContent(5,142.3173);
   hmc__22->SetBinContent(6,119.1932);
   hmc__22->SetBinContent(7,108.1447);
   hmc__22->SetBinContent(8,92.40665);
   hmc__22->SetBinContent(9,66.78907);
   hmc__22->SetBinContent(10,42.65722);
   hmc__22->SetBinContent(11,38.79406);
   hmc__22->SetBinContent(12,25.4391);
   hmc__22->SetBinContent(13,21.86002);
   hmc__22->SetBinContent(14,17.99942);
   hmc__22->SetBinContent(15,14.12756);
   hmc__22->SetBinContent(16,5.662883);
   hmc__22->SetBinContent(17,6.731386);
   hmc__22->SetBinContent(18,4.572897);
   hmc__22->SetBinContent(19,4.362951);
   hmc__22->SetBinContent(20,2.862585);
   hmc__22->SetBinContent(21,16.82522);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,2.034173);
   hmc__22->SetBinError(3,12.31873);
   hmc__22->SetBinError(4,25.79924);
   hmc__22->SetBinError(5,26.97953);
   hmc__22->SetBinError(6,24.18718);
   hmc__22->SetBinError(7,21.44817);
   hmc__22->SetBinError(8,20.0837);
   hmc__22->SetBinError(9,14.2551);
   hmc__22->SetBinError(10,14.31522);
   hmc__22->SetBinError(11,10.77483);
   hmc__22->SetBinError(12,11.36845);
   hmc__22->SetBinError(13,7.927318);
   hmc__22->SetBinError(14,8.314333);
   hmc__22->SetBinError(15,7.160057);
   hmc__22->SetBinError(16,3.287262);
   hmc__22->SetBinError(17,4.287777);
   hmc__22->SetBinError(18,2.760044);
   hmc__22->SetBinError(19,5.143066);
   hmc__22->SetBinError(20,3.543365);
   hmc__22->SetBinError(21,6.553709);
   hmc__22->SetMinimum(-2.846346);
   hmc__22->SetMaximum(298.8663);
   hmc__22->SetEntries(926.8397);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,1500);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(149.4331);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,3.121682);
   hbadmatch_stack_1->SetBinContent(4,4.496835);
   hbadmatch_stack_1->SetBinContent(5,4.892949);
   hbadmatch_stack_1->SetBinContent(6,4.162719);
   hbadmatch_stack_1->SetBinContent(7,3.843267);
   hbadmatch_stack_1->SetBinContent(8,3.5145);
   hbadmatch_stack_1->SetBinContent(9,1.268811);
   hbadmatch_stack_1->SetBinContent(10,1.268811);
   hbadmatch_stack_1->SetBinContent(11,1.127039);
   hbadmatch_stack_1->SetBinContent(12,1.205357);
   hbadmatch_stack_1->SetBinContent(13,0.7868615);
   hbadmatch_stack_1->SetBinContent(14,1.215558);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,1.152493);
   hbadmatch_stack_1->SetBinError(3,1.007312);
   hbadmatch_stack_1->SetBinError(4,1.456036);
   hbadmatch_stack_1->SetBinError(5,1.19255);
   hbadmatch_stack_1->SetBinError(6,1.012587);
   hbadmatch_stack_1->SetBinError(7,1.155033);
   hbadmatch_stack_1->SetBinError(8,1.013532);
   hbadmatch_stack_1->SetBinError(9,0.5889569);
   hbadmatch_stack_1->SetBinError(10,0.5889569);
   hbadmatch_stack_1->SetBinError(11,0.5201044);
   hbadmatch_stack_1->SetBinError(12,0.5666676);
   hbadmatch_stack_1->SetBinError(13,0.3934307);
   hbadmatch_stack_1->SetBinError(14,0.6206425);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.5302552);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(3,25.99462);
   hext_stack_2->SetBinContent(4,39.23589);
   hext_stack_2->SetBinContent(5,35.5103);
   hext_stack_2->SetBinContent(6,26.51051);
   hext_stack_2->SetBinContent(7,17.03357);
   hext_stack_2->SetBinContent(8,12.4357);
   hext_stack_2->SetBinContent(9,11.11499);
   hext_stack_2->SetBinContent(10,6.075805);
   hext_stack_2->SetBinContent(11,8.649442);
   hext_stack_2->SetBinContent(12,0.973192);
   hext_stack_2->SetBinContent(13,2.103607);
   hext_stack_2->SetBinContent(14,2.923985);
   hext_stack_2->SetBinContent(15,1.868591);
   hext_stack_2->SetBinContent(16,1.137595);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(18,1.544194);
   hext_stack_2->SetBinContent(19,0.973192);
   hext_stack_2->SetBinContent(21,3.248382);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(3,3.638476);
   hext_stack_2->SetBinError(4,4.166634);
   hext_stack_2->SetBinError(5,3.985209);
   hext_stack_2->SetBinError(6,3.491084);
   hext_stack_2->SetBinError(7,2.621363);
   hext_stack_2->SetBinError(8,2.490003);
   hext_stack_2->SetBinError(9,2.14031);
   hext_stack_2->SetBinError(10,1.616168);
   hext_stack_2->SetBinError(11,2.014317);
   hext_stack_2->SetBinError(12,0.5618727);
   hext_stack_2->SetBinError(13,0.9761052);
   hext_stack_2->SetBinError(14,1.040301);
   hext_stack_2->SetBinError(15,0.840497);
   hext_stack_2->SetBinError(16,0.6602113);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(18,0.7753719);
   hext_stack_2->SetBinError(19,0.5618727);
   hext_stack_2->SetBinError(21,1.089706);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(3,3.604763);
   hdirt_stack_3->SetBinContent(4,5.149699);
   hdirt_stack_3->SetBinContent(5,3.002892);
   hdirt_stack_3->SetBinContent(6,1.281234);
   hdirt_stack_3->SetBinContent(7,1.171068);
   hdirt_stack_3->SetBinContent(8,1.980762);
   hdirt_stack_3->SetBinContent(9,1.747331);
   hdirt_stack_3->SetBinContent(10,0.4762587);
   hdirt_stack_3->SetBinContent(11,0.165479);
   hdirt_stack_3->SetBinContent(12,0.2761429);
   hdirt_stack_3->SetBinContent(15,0.3895662);
   hdirt_stack_3->SetBinError(3,0.9670973);
   hdirt_stack_3->SetBinError(4,1.126389);
   hdirt_stack_3->SetBinError(5,0.9738709);
   hdirt_stack_3->SetBinError(6,0.545926);
   hdirt_stack_3->SetBinError(7,0.5625166);
   hdirt_stack_3->SetBinError(8,1.079789);
   hdirt_stack_3->SetBinError(9,0.7376358);
   hdirt_stack_3->SetBinError(10,0.3652866);
   hdirt_stack_3->SetBinError(11,0.165479);
   hdirt_stack_3->SetBinError(12,0.1952625);
   hdirt_stack_3->SetBinError(15,0.3895662);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,1.515398);
   houtFV_stack_4->SetBinContent(3,18.56832);
   houtFV_stack_4->SetBinContent(4,35.17531);
   houtFV_stack_4->SetBinContent(5,38.65828);
   houtFV_stack_4->SetBinContent(6,28.34485);
   houtFV_stack_4->SetBinContent(7,23.55464);
   houtFV_stack_4->SetBinContent(8,16.71209);
   houtFV_stack_4->SetBinContent(9,11.82395);
   houtFV_stack_4->SetBinContent(10,8.255261);
   houtFV_stack_4->SetBinContent(11,5.376775);
   houtFV_stack_4->SetBinContent(12,5.07195);
   houtFV_stack_4->SetBinContent(13,2.734337);
   houtFV_stack_4->SetBinContent(14,3.04805);
   houtFV_stack_4->SetBinContent(15,1.030359);
   houtFV_stack_4->SetBinContent(16,0.4057469);
   houtFV_stack_4->SetBinContent(17,1.282357);
   houtFV_stack_4->SetBinContent(18,0.3934307);
   houtFV_stack_4->SetBinContent(19,1.172562);
   houtFV_stack_4->SetBinContent(21,0.5884556);
   houtFV_stack_4->SetBinError(2,0.588146);
   houtFV_stack_4->SetBinError(3,2.167863);
   houtFV_stack_4->SetBinError(4,2.966665);
   houtFV_stack_4->SetBinError(5,3.379812);
   houtFV_stack_4->SetBinError(6,2.828996);
   houtFV_stack_4->SetBinError(7,2.428805);
   houtFV_stack_4->SetBinError(8,2.041608);
   houtFV_stack_4->SetBinError(9,1.733561);
   houtFV_stack_4->SetBinError(10,1.397974);
   houtFV_stack_4->SetBinError(11,1.161405);
   houtFV_stack_4->SetBinError(12,1.144407);
   houtFV_stack_4->SetBinError(13,0.8558255);
   houtFV_stack_4->SetBinError(14,0.9474927);
   houtFV_stack_4->SetBinError(15,0.5574108);
   houtFV_stack_4->SetBinError(16,0.2870385);
   houtFV_stack_4->SetBinError(17,0.6596257);
   houtFV_stack_4->SetBinError(18,0.2781975);
   houtFV_stack_4->SetBinError(19,0.5392737);
   houtFV_stack_4->SetBinError(21,0.3397478);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.017858);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.882262);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.285816);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.04883);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.241722);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.21299);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.96189);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9069222);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3833116);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4661653);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4988347);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4502381);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3737142);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3458579);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3355772);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3610006);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.07891307);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.673285);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.51689);
   hNCpi0inFVres_stack_7->SetBinContent(5,26.89571);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.72652);
   hNCpi0inFVres_stack_7->SetBinContent(7,17.21951);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.032);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.463525);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.022936);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.997429);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.666542);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.47754);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.9623858);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.7800399);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.6277541);
   hNCpi0inFVres_stack_7->SetBinError(2,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9831953);
   hNCpi0inFVres_stack_7->SetBinError(4,1.560524);
   hNCpi0inFVres_stack_7->SetBinError(5,1.727789);
   hNCpi0inFVres_stack_7->SetBinError(6,1.363191);
   hNCpi0inFVres_stack_7->SetBinError(7,1.306628);
   hNCpi0inFVres_stack_7->SetBinError(8,1.115195);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8889848);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7977633);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4787277);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6623006);
   hNCpi0inFVres_stack_7->SetBinError(13,0.317805);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2576051);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2855518);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(17,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(18,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(19,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2996304);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.78328);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.842984);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.364874);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.727574);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.849631);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.820156);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.024169);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.133194);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.910994);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8373359);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7953222);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5719541);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7112858);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4114692);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4951142);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6909186);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6982033);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.673373);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.635152);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5382407);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4376721);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4871906);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2981109);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.356662);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2970212);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2436282);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(3,2.622167);
   hCCpi0inFV_stack_11->SetBinContent(4,11.09527);
   hCCpi0inFV_stack_11->SetBinContent(5,13.40819);
   hCCpi0inFV_stack_11->SetBinContent(6,18.90486);
   hCCpi0inFV_stack_11->SetBinContent(7,25.38466);
   hCCpi0inFV_stack_11->SetBinContent(8,29.3971);
   hCCpi0inFV_stack_11->SetBinContent(9,20.05798);
   hCCpi0inFV_stack_11->SetBinContent(10,15.08262);
   hCCpi0inFV_stack_11->SetBinContent(11,14.84158);
   hCCpi0inFV_stack_11->SetBinContent(12,10.66809);
   hCCpi0inFV_stack_11->SetBinContent(13,11.13237);
   hCCpi0inFV_stack_11->SetBinContent(14,8.159293);
   hCCpi0inFV_stack_11->SetBinContent(15,4.665985);
   hCCpi0inFV_stack_11->SetBinContent(16,2.834081);
   hCCpi0inFV_stack_11->SetBinContent(17,2.932743);
   hCCpi0inFV_stack_11->SetBinContent(18,1.011133);
   hCCpi0inFV_stack_11->SetBinContent(19,1.65886);
   hCCpi0inFV_stack_11->SetBinContent(20,1.373626);
   hCCpi0inFV_stack_11->SetBinContent(21,7.769243);
   hCCpi0inFV_stack_11->SetBinError(3,0.9000965);
   hCCpi0inFV_stack_11->SetBinError(4,1.65537);
   hCCpi0inFV_stack_11->SetBinError(5,1.862223);
   hCCpi0inFV_stack_11->SetBinError(6,2.172541);
   hCCpi0inFV_stack_11->SetBinError(7,2.559235);
   hCCpi0inFV_stack_11->SetBinError(8,2.727468);
   hCCpi0inFV_stack_11->SetBinError(9,2.258258);
   hCCpi0inFV_stack_11->SetBinError(10,1.936259);
   hCCpi0inFV_stack_11->SetBinError(11,1.93728);
   hCCpi0inFV_stack_11->SetBinError(12,1.693528);
   hCCpi0inFV_stack_11->SetBinError(13,1.722726);
   hCCpi0inFV_stack_11->SetBinError(14,1.428631);
   hCCpi0inFV_stack_11->SetBinError(15,1.079588);
   hCCpi0inFV_stack_11->SetBinError(16,0.8081673);
   hCCpi0inFV_stack_11->SetBinError(17,0.8785195);
   hCCpi0inFV_stack_11->SetBinError(18,0.4528634);
   hCCpi0inFV_stack_11->SetBinError(19,0.650338);
   hCCpi0inFV_stack_11->SetBinError(20,0.519186);
   hCCpi0inFV_stack_11->SetBinError(21,1.401755);
   hCCpi0inFV_stack_11->SetEntries(859);

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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.1967154);
   hNCinFV_stack_12->SetBinContent(3,0.7319179);
   hNCinFV_stack_12->SetBinContent(4,1.950857);
   hNCinFV_stack_12->SetBinContent(5,2.449103);
   hNCinFV_stack_12->SetBinContent(6,1.566961);
   hNCinFV_stack_12->SetBinContent(7,2.394159);
   hNCinFV_stack_12->SetBinContent(8,2.144191);
   hNCinFV_stack_12->SetBinContent(9,1.708733);
   hNCinFV_stack_12->SetBinContent(10,0.3934307);
   hNCinFV_stack_12->SetBinContent(11,0.5884556);
   hNCinFV_stack_12->SetBinContent(12,0.1967154);
   hNCinFV_stack_12->SetBinContent(13,0.1950248);
   hNCinFV_stack_12->SetBinContent(15,0.1967154);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinError(2,0.1967154);
   hNCinFV_stack_12->SetBinError(3,0.438694);
   hNCinFV_stack_12->SetBinError(4,0.7609034);
   hNCinFV_stack_12->SetBinError(5,0.7609545);
   hNCinFV_stack_12->SetBinError(6,0.5540095);
   hNCinFV_stack_12->SetBinError(7,0.785313);
   hNCinFV_stack_12->SetBinError(8,0.7850774);
   hNCinFV_stack_12->SetBinError(9,0.6191027);
   hNCinFV_stack_12->SetBinError(10,0.2781975);
   hNCinFV_stack_12->SetBinError(11,0.3397478);
   hNCinFV_stack_12->SetBinError(12,0.1967154);
   hNCinFV_stack_12->SetBinError(13,0.1950249);
   hNCinFV_stack_12->SetBinError(15,0.1967154);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetEntries(65);

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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(3,4.976778);
   hnumuCCinFV_stack_13->SetBinContent(4,13.33873);
   hnumuCCinFV_stack_13->SetBinContent(5,10.26744);
   hnumuCCinFV_stack_13->SetBinContent(6,11.86331);
   hnumuCCinFV_stack_13->SetBinContent(7,11.11624);
   hnumuCCinFV_stack_13->SetBinContent(8,7.314513);
   hnumuCCinFV_stack_13->SetBinContent(9,6.617691);
   hnumuCCinFV_stack_13->SetBinContent(10,1.818609);
   hnumuCCinFV_stack_13->SetBinContent(11,2.676682);
   hnumuCCinFV_stack_13->SetBinContent(12,1.942679);
   hnumuCCinFV_stack_13->SetBinContent(13,2.089907);
   hnumuCCinFV_stack_13->SetBinContent(14,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(15,3.556778);
   hnumuCCinFV_stack_13->SetBinContent(16,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(17,1.153993);
   hnumuCCinFV_stack_13->SetBinContent(18,0.6465525);
   hnumuCCinFV_stack_13->SetBinContent(20,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(21,1.18159);
   hnumuCCinFV_stack_13->SetBinError(3,1.31039);
   hnumuCCinFV_stack_13->SetBinError(4,1.988122);
   hnumuCCinFV_stack_13->SetBinError(5,2.426115);
   hnumuCCinFV_stack_13->SetBinError(6,1.924319);
   hnumuCCinFV_stack_13->SetBinError(7,2.700453);
   hnumuCCinFV_stack_13->SetBinError(8,1.271935);
   hnumuCCinFV_stack_13->SetBinError(9,1.370053);
   hnumuCCinFV_stack_13->SetBinError(10,0.6750619);
   hnumuCCinFV_stack_13->SetBinError(11,0.8334844);
   hnumuCCinFV_stack_13->SetBinError(12,0.6615577);
   hnumuCCinFV_stack_13->SetBinError(13,0.778505);
   hnumuCCinFV_stack_13->SetBinError(14,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(15,1.45223);
   hnumuCCinFV_stack_13->SetBinError(16,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(17,0.5309769);
   hnumuCCinFV_stack_13->SetBinError(18,0.3761177);
   hnumuCCinFV_stack_13->SetBinError(20,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(21,0.5585289);
   hnumuCCinFV_stack_13->SetEntries(320);

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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(8,0.7868615);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.6857124);
   hnueCCinFV_stack_14->SetBinContent(14,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.7431479);
   hnueCCinFV_stack_14->SetBinContent(21,1.322814);
   hnueCCinFV_stack_14->SetBinError(3,0.1950249);
   hnueCCinFV_stack_14->SetBinError(5,0.3025491);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(8,0.3934307);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.5270816);
   hnueCCinFV_stack_14->SetBinError(14,0.2463303);
   hnueCCinFV_stack_14->SetBinError(15,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.7431478);
   hnueCCinFV_stack_14->SetBinError(21,0.6298195);
   hnueCCinFV_stack_14->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__23->SetBinContent(2,2.735728);
   hmcerror__23->SetBinContent(3,71.31759);
   hmcerror__23->SetBinContent(4,137.8242);
   hmcerror__23->SetBinContent(5,142.3173);
   hmcerror__23->SetBinContent(6,119.1932);
   hmcerror__23->SetBinContent(7,108.1447);
   hmcerror__23->SetBinContent(8,92.40665);
   hmcerror__23->SetBinContent(9,66.78907);
   hmcerror__23->SetBinContent(10,42.65722);
   hmcerror__23->SetBinContent(11,38.79406);
   hmcerror__23->SetBinContent(12,25.4391);
   hmcerror__23->SetBinContent(13,21.86002);
   hmcerror__23->SetBinContent(14,17.99942);
   hmcerror__23->SetBinContent(15,14.12756);
   hmcerror__23->SetBinContent(16,5.662883);
   hmcerror__23->SetBinContent(17,6.731386);
   hmcerror__23->SetBinContent(18,4.572897);
   hmcerror__23->SetBinContent(19,4.362951);
   hmcerror__23->SetBinContent(20,2.862585);
   hmcerror__23->SetBinContent(21,16.82522);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,2.034173);
   hmcerror__23->SetBinError(3,12.31873);
   hmcerror__23->SetBinError(4,25.79924);
   hmcerror__23->SetBinError(5,26.97953);
   hmcerror__23->SetBinError(6,24.18718);
   hmcerror__23->SetBinError(7,21.44817);
   hmcerror__23->SetBinError(8,20.0837);
   hmcerror__23->SetBinError(9,14.2551);
   hmcerror__23->SetBinError(10,14.31522);
   hmcerror__23->SetBinError(11,10.77483);
   hmcerror__23->SetBinError(12,11.36845);
   hmcerror__23->SetBinError(13,7.927318);
   hmcerror__23->SetBinError(14,8.314333);
   hmcerror__23->SetBinError(15,7.160057);
   hmcerror__23->SetBinError(16,3.287262);
   hmcerror__23->SetBinError(17,4.287777);
   hmcerror__23->SetBinError(18,2.760044);
   hmcerror__23->SetBinError(19,5.143066);
   hmcerror__23->SetBinError(20,3.543365);
   hmcerror__23->SetBinError(21,6.553709);
   hmcerror__23->SetEntries(926.8397);

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
   
   Double_t _fx3029[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3029[20] = {
   0,
   4,
   74,
   132,
   121,
   133,
   101,
   81,
   68,
   45,
   28,
   24,
   13,
   10,
   8,
   10,
   5,
   4,
   8,
   1};
   Double_t _felx3029[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3029[20] = {
   0,
   2.29683,
   8.7275,
   11.48913,
   11,
   11.53256,
   10.04988,
   9.1239,
   8.3726,
   6.8416,
   5.4358,
   5.0476,
   3.77763,
   3.34883,
   3.0307,
   3.34883,
   2.48995,
   2.29683,
   3.0307,
   1};
   Double_t _fehx3029[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3029[20] = {
   1.1478,
   1.98186,
   8.5253,
   11.48913,
   11,
   11.53256,
   10.04988,
   8.9221,
   8.1701,
   6.637,
   5.2271,
   4.837,
   3.5552,
   3.1179,
   2.7896,
   3.1179,
   2.21064,
   1.98186,
   2.7896,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1650);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(158.9858);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 870.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 31.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 195.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 195.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 80.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 3.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3030[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3030[20] = {
   0,
   0.7435581,
   0.1727306,
   0.1871894,
   0.1895731,
   0.2029242,
   0.1983284,
   0.2173404,
   0.2134346,
   0.3355872,
   0.2777444,
   0.4468887,
   0.3626401,
   0.4619223,
   0.5068147,
   0.5804927,
   0.6369828,
   0.6035657,
   1.178804,
   1.23782};
   Double_t _fehx3030[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3030[20] = {
   0,
   0.7435581,
   0.1727306,
   0.1871894,
   0.1895731,
   0.2029242,
   0.1983284,
   0.2173404,
   0.2134346,
   0.3355872,
   0.2777444,
   0.4468887,
   0.3626401,
   0.4619223,
   0.5068147,
   0.5804927,
   0.6369828,
   0.6035657,
   1.178804,
   1.23782};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1650);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3031[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3031[20] = {
   0,
   0.3845989,
   0.1328367,
   0.1462771,
   0.1594231,
   0.1625016,
   0.1718714,
   0.1816227,
   0.1812035,
   0.2020579,
   0.1828927,
   0.2310493,
   0.2292649,
   0.2296459,
   0.2695415,
   0.2863909,
   0.2998117,
   0.2891069,
   0.2959567,
   0.6645656};
   Double_t _fehx3031[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3031[20] = {
   0,
   0.3845989,
   0.1328367,
   0.1462771,
   0.1594231,
   0.1625016,
   0.1718714,
   0.1816227,
   0.1812035,
   0.2020579,
   0.1828927,
   0.2310493,
   0.2292649,
   0.2296459,
   0.2695415,
   0.2863909,
   0.2998117,
   0.2891069,
   0.2959567,
   0.6645656};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1650);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3032[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3032[20] = {
   10,
   1.462134,
   1.037612,
   0.9577416,
   0.850213,
   1.115836,
   0.933934,
   0.8765603,
   1.018131,
   1.054921,
   0.7217601,
   0.9434295,
   0.5946931,
   0.5555735,
   0.5662689,
   1.765885,
   0.7427891,
   0.874719,
   1.833621,
   0.3493346};
   Double_t _felx3032[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3032[20] = {
   0,
   0.8395682,
   0.1223751,
   0.0833607,
   0.07729209,
   0.09675523,
   0.09292991,
   0.0987364,
   0.1253588,
   0.1603855,
   0.1401194,
   0.198419,
   0.17281,
   0.1860521,
   0.2145239,
   0.5913649,
   0.3699015,
   0.5022702,
   0.6946446,
   0.3493346};
   Double_t _fehx3032[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3032[20] = {
   0,
   0.7244361,
   0.1195399,
   0.0833607,
   0.07729209,
   0.09675523,
   0.09292991,
   0.09655258,
   0.1223269,
   0.1555892,
   0.1347397,
   0.1901404,
   0.1626348,
   0.1732223,
   0.197458,
   0.5505853,
   0.3284078,
   0.4333927,
   0.6393838,
   0.4749937};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1650);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_transferred_visible_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Oct 23 18:43:59 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-61.53846,-7.4,451.2821,818.2842);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__10->SetBinContent(1,79.07688);
   hmc__10->SetBinContent(2,120.9183);
   hmc__10->SetBinContent(3,150.8879);
   hmc__10->SetBinContent(4,160.8911);
   hmc__10->SetBinContent(5,160.3149);
   hmc__10->SetBinContent(6,183.201);
   hmc__10->SetBinContent(7,196.7061);
   hmc__10->SetBinContent(8,195.3957);
   hmc__10->SetBinContent(9,227.6697);
   hmc__10->SetBinContent(10,278.4041);
   hmc__10->SetBinContent(11,307.6623);
   hmc__10->SetBinContent(12,332.0968);
   hmc__10->SetBinContent(13,313.9803);
   hmc__10->SetBinContent(14,216.7011);
   hmc__10->SetBinContent(15,136);
   hmc__10->SetBinContent(16,92.571);
   hmc__10->SetBinContent(17,67.91238);
   hmc__10->SetBinContent(18,52.78049);
   hmc__10->SetBinContent(19,46.8848);
   hmc__10->SetBinContent(20,44.75412);
   hmc__10->SetBinContent(21,38.91216);
   hmc__10->SetBinContent(22,29.23322);
   hmc__10->SetBinContent(23,32.41429);
   hmc__10->SetBinContent(24,25.65741);
   hmc__10->SetBinContent(25,19.78083);
   hmc__10->SetBinContent(26,18.98995);
   hmc__10->SetBinContent(27,19.99329);
   hmc__10->SetBinContent(28,15.09128);
   hmc__10->SetBinContent(29,15.06764);
   hmc__10->SetBinContent(30,16.33346);
   hmc__10->SetBinContent(31,11.05914);
   hmc__10->SetBinContent(32,11.25801);
   hmc__10->SetBinContent(33,7.815069);
   hmc__10->SetBinContent(34,9.184544);
   hmc__10->SetBinContent(35,93.8606);
   hmc__10->SetBinError(1,25.43122);
   hmc__10->SetBinError(2,37.72039);
   hmc__10->SetBinError(3,40.90739);
   hmc__10->SetBinError(4,48.97244);
   hmc__10->SetBinError(5,46.66974);
   hmc__10->SetBinError(6,44.18717);
   hmc__10->SetBinError(7,74.1412);
   hmc__10->SetBinError(8,45.70103);
   hmc__10->SetBinError(9,60.0332);
   hmc__10->SetBinError(10,76.74512);
   hmc__10->SetBinError(11,77.44621);
   hmc__10->SetBinError(12,87.92707);
   hmc__10->SetBinError(13,74.6539);
   hmc__10->SetBinError(14,53.11793);
   hmc__10->SetBinError(15,38.95704);
   hmc__10->SetBinError(16,27.6792);
   hmc__10->SetBinError(17,20.36111);
   hmc__10->SetBinError(18,20.12557);
   hmc__10->SetBinError(19,15.49737);
   hmc__10->SetBinError(20,20.68889);
   hmc__10->SetBinError(21,17.20891);
   hmc__10->SetBinError(22,12.8374);
   hmc__10->SetBinError(23,14.93421);
   hmc__10->SetBinError(24,11.67724);
   hmc__10->SetBinError(25,14.43395);
   hmc__10->SetBinError(26,13.01827);
   hmc__10->SetBinError(27,10.35793);
   hmc__10->SetBinError(28,10.52396);
   hmc__10->SetBinError(29,12.88868);
   hmc__10->SetBinError(30,10.95617);
   hmc__10->SetBinError(31,7.996639);
   hmc__10->SetBinError(32,8.473532);
   hmc__10->SetBinError(33,6.625648);
   hmc__10->SetBinError(34,10.01942);
   hmc__10->SetBinError(35,28.10685);
   hmc__10->SetMinimum(-7.4);
   hmc__10->SetMaximum(777);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",34,0,400);
   hs4_stack_4->SetMinimum(-1.429819e-08);
   hs4_stack_4->SetMaximum(348.7017);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.220427);
   hbadmatch_stack_1->SetBinContent(2,5.953716);
   hbadmatch_stack_1->SetBinContent(3,6.109488);
   hbadmatch_stack_1->SetBinContent(4,4.10112);
   hbadmatch_stack_1->SetBinContent(5,4.780455);
   hbadmatch_stack_1->SetBinContent(6,7.7863);
   hbadmatch_stack_1->SetBinContent(7,9.483763);
   hbadmatch_stack_1->SetBinContent(8,6.581758);
   hbadmatch_stack_1->SetBinContent(9,5.459948);
   hbadmatch_stack_1->SetBinContent(10,5.423374);
   hbadmatch_stack_1->SetBinContent(11,3.74454);
   hbadmatch_stack_1->SetBinContent(12,8.153753);
   hbadmatch_stack_1->SetBinContent(13,5.63118);
   hbadmatch_stack_1->SetBinContent(14,5.855937);
   hbadmatch_stack_1->SetBinContent(15,3.84608);
   hbadmatch_stack_1->SetBinContent(16,2.106878);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,1.465526);
   hbadmatch_stack_1->SetBinContent(19,0.9286332);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,1.332349);
   hbadmatch_stack_1->SetBinContent(22,0.5734949);
   hbadmatch_stack_1->SetBinContent(23,0.1199161);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(27,0.4140642);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(33,0.3917402);
   hbadmatch_stack_1->SetBinContent(34,0.2855402);
   hbadmatch_stack_1->SetBinContent(35,0.757781);
   hbadmatch_stack_1->SetBinError(1,1.031167);
   hbadmatch_stack_1->SetBinError(2,1.58342);
   hbadmatch_stack_1->SetBinError(3,1.286734);
   hbadmatch_stack_1->SetBinError(4,1.026586);
   hbadmatch_stack_1->SetBinError(5,1.069644);
   hbadmatch_stack_1->SetBinError(6,1.505789);
   hbadmatch_stack_1->SetBinError(7,1.661059);
   hbadmatch_stack_1->SetBinError(8,1.623322);
   hbadmatch_stack_1->SetBinError(9,1.220405);
   hbadmatch_stack_1->SetBinError(10,1.220686);
   hbadmatch_stack_1->SetBinError(11,1.052764);
   hbadmatch_stack_1->SetBinError(12,2.180275);
   hbadmatch_stack_1->SetBinError(13,1.363459);
   hbadmatch_stack_1->SetBinError(14,1.866783);
   hbadmatch_stack_1->SetBinError(15,1.124867);
   hbadmatch_stack_1->SetBinError(16,0.7820349);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.6209405);
   hbadmatch_stack_1->SetBinError(19,0.48078);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.5759166);
   hbadmatch_stack_1->SetBinError(22,0.4317845);
   hbadmatch_stack_1->SetBinError(23,0.1199161);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(27,0.313132);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(33,0.2770047);
   hbadmatch_stack_1->SetBinError(34,0.2855402);
   hbadmatch_stack_1->SetBinError(35,0.5945516);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,19.42403);
   hext_stack_2->SetBinContent(2,21.35328);
   hext_stack_2->SetBinContent(3,42.01028);
   hext_stack_2->SetBinContent(4,37.97742);
   hext_stack_2->SetBinContent(5,26.4096);
   hext_stack_2->SetBinContent(6,35.9329);
   hext_stack_2->SetBinContent(7,32.00101);
   hext_stack_2->SetBinContent(8,34.43336);
   hext_stack_2->SetBinContent(9,29.06984);
   hext_stack_2->SetBinContent(10,33.90708);
   hext_stack_2->SetBinContent(11,27.95814);
   hext_stack_2->SetBinContent(12,27.45617);
   hext_stack_2->SetBinContent(13,31.25282);
   hext_stack_2->SetBinContent(14,15.29625);
   hext_stack_2->SetBinContent(15,11.31964);
   hext_stack_2->SetBinContent(16,9.477);
   hext_stack_2->SetBinContent(17,7.295601);
   hext_stack_2->SetBinContent(18,3.972198);
   hext_stack_2->SetBinContent(19,3.401196);
   hext_stack_2->SetBinContent(20,4.460999);
   hext_stack_2->SetBinContent(21,5.248246);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,4.110651);
   hext_stack_2->SetBinContent(24,3.946247);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.868591);
   hext_stack_2->SetBinContent(27,1.290409);
   hext_stack_2->SetBinContent(29,1.137595);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,2.032995);
   hext_stack_2->SetBinError(1,2.909316);
   hext_stack_2->SetBinError(2,3.13596);
   hext_stack_2->SetBinError(3,4.531017);
   hext_stack_2->SetBinError(4,4.26699);
   hext_stack_2->SetBinError(5,3.326327);
   hext_stack_2->SetBinError(6,4.014506);
   hext_stack_2->SetBinError(7,3.685941);
   hext_stack_2->SetBinError(8,4.01369);
   hext_stack_2->SetBinError(9,3.564426);
   hext_stack_2->SetBinError(10,3.884385);
   hext_stack_2->SetBinError(11,3.623698);
   hext_stack_2->SetBinError(12,3.342154);
   hext_stack_2->SetBinError(13,3.922339);
   hext_stack_2->SetBinError(14,2.637228);
   hext_stack_2->SetBinError(15,2.271702);
   hext_stack_2->SetBinError(16,1.996425);
   hext_stack_2->SetBinError(17,1.762942);
   hext_stack_2->SetBinError(18,1.288106);
   hext_stack_2->SetBinError(19,1.172056);
   hext_stack_2->SetBinError(20,1.372818);
   hext_stack_2->SetBinError(21,1.638217);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,1.499292);
   hext_stack_2->SetBinError(24,1.458663);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.840497);
   hext_stack_2->SetBinError(27,0.788756);
   hext_stack_2->SetBinError(29,0.6602113);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.9091828);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.334814);
   hdirt_stack_3->SetBinContent(2,3.98527);
   hdirt_stack_3->SetBinContent(3,2.692162);
   hdirt_stack_3->SetBinContent(4,3.498134);
   hdirt_stack_3->SetBinContent(5,3.773705);
   hdirt_stack_3->SetBinContent(6,2.691962);
   hdirt_stack_3->SetBinContent(7,4.413614);
   hdirt_stack_3->SetBinContent(8,4.733984);
   hdirt_stack_3->SetBinContent(9,3.956858);
   hdirt_stack_3->SetBinContent(10,3.74448);
   hdirt_stack_3->SetBinContent(11,5.119441);
   hdirt_stack_3->SetBinContent(12,2.73035);
   hdirt_stack_3->SetBinContent(13,4.022917);
   hdirt_stack_3->SetBinContent(14,1.171114);
   hdirt_stack_3->SetBinContent(15,2.685964);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,1.142423);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.7786044);
   hdirt_stack_3->SetBinError(2,1.183304);
   hdirt_stack_3->SetBinError(3,0.8290161);
   hdirt_stack_3->SetBinError(4,0.9774514);
   hdirt_stack_3->SetBinError(5,0.9571685);
   hdirt_stack_3->SetBinError(6,0.7986967);
   hdirt_stack_3->SetBinError(7,1.052999);
   hdirt_stack_3->SetBinError(8,1.177755);
   hdirt_stack_3->SetBinError(9,1.357626);
   hdirt_stack_3->SetBinError(10,1.021055);
   hdirt_stack_3->SetBinError(11,1.269725);
   hdirt_stack_3->SetBinError(12,0.9212356);
   hdirt_stack_3->SetBinError(13,1.26702);
   hdirt_stack_3->SetBinError(14,0.532892);
   hdirt_stack_3->SetBinError(15,0.8942396);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.530726);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,15.14916);
   houtFV_stack_4->SetBinContent(2,19.06815);
   houtFV_stack_4->SetBinContent(3,25.91887);
   houtFV_stack_4->SetBinContent(4,24.90713);
   houtFV_stack_4->SetBinContent(5,23.78076);
   houtFV_stack_4->SetBinContent(6,27.74342);
   houtFV_stack_4->SetBinContent(7,31.23027);
   houtFV_stack_4->SetBinContent(8,28.12323);
   houtFV_stack_4->SetBinContent(9,32.16059);
   houtFV_stack_4->SetBinContent(10,34.83263);
   houtFV_stack_4->SetBinContent(11,29.9029);
   houtFV_stack_4->SetBinContent(12,36.70438);
   houtFV_stack_4->SetBinContent(13,34.9753);
   houtFV_stack_4->SetBinContent(14,25.8966);
   houtFV_stack_4->SetBinContent(15,13.96654);
   houtFV_stack_4->SetBinContent(16,9.633069);
   houtFV_stack_4->SetBinContent(17,8.03034);
   houtFV_stack_4->SetBinContent(18,7.170989);
   houtFV_stack_4->SetBinContent(19,6.931259);
   houtFV_stack_4->SetBinContent(20,5.787083);
   houtFV_stack_4->SetBinContent(21,4.3609);
   houtFV_stack_4->SetBinContent(22,4.013821);
   houtFV_stack_4->SetBinContent(23,3.238138);
   houtFV_stack_4->SetBinContent(24,1.882922);
   houtFV_stack_4->SetBinContent(25,2.617652);
   houtFV_stack_4->SetBinContent(26,1.491262);
   houtFV_stack_4->SetBinContent(27,3.177295);
   houtFV_stack_4->SetBinContent(28,0.6803553);
   houtFV_stack_4->SetBinContent(29,1.558661);
   houtFV_stack_4->SetBinContent(30,1.031573);
   houtFV_stack_4->SetBinContent(31,0.8039448);
   houtFV_stack_4->SetBinContent(32,0.9553829);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,8.821075);
   houtFV_stack_4->SetBinError(1,1.984045);
   houtFV_stack_4->SetBinError(2,2.158408);
   houtFV_stack_4->SetBinError(3,2.611381);
   houtFV_stack_4->SetBinError(4,2.717453);
   houtFV_stack_4->SetBinError(5,2.446394);
   houtFV_stack_4->SetBinError(6,2.599447);
   houtFV_stack_4->SetBinError(7,2.780227);
   houtFV_stack_4->SetBinError(8,2.729924);
   houtFV_stack_4->SetBinError(9,2.780817);
   houtFV_stack_4->SetBinError(10,2.922952);
   houtFV_stack_4->SetBinError(11,2.702613);
   houtFV_stack_4->SetBinError(12,3.065761);
   houtFV_stack_4->SetBinError(13,3.175257);
   houtFV_stack_4->SetBinError(14,2.597751);
   houtFV_stack_4->SetBinError(15,1.827496);
   houtFV_stack_4->SetBinError(16,1.502691);
   houtFV_stack_4->SetBinError(17,1.455934);
   houtFV_stack_4->SetBinError(18,1.426469);
   houtFV_stack_4->SetBinError(19,1.28309);
   houtFV_stack_4->SetBinError(20,1.226613);
   houtFV_stack_4->SetBinError(21,1.072251);
   houtFV_stack_4->SetBinError(22,0.9506571);
   houtFV_stack_4->SetBinError(23,0.8722495);
   houtFV_stack_4->SetBinError(24,0.6750601);
   houtFV_stack_4->SetBinError(25,0.7829816);
   houtFV_stack_4->SetBinError(26,0.5482918);
   houtFV_stack_4->SetBinError(27,0.9121348);
   houtFV_stack_4->SetBinError(28,0.4810838);
   houtFV_stack_4->SetBinError(29,0.6036445);
   houtFV_stack_4->SetBinError(30,0.4290063);
   houtFV_stack_4->SetBinError(31,0.3858172);
   houtFV_stack_4->SetBinError(32,0.427899);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.526842);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.454822);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.158831);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.242688);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.177509);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.975149);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.428578);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.971887);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.680209);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.401943);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.295627);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,9.936219);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,13.04979);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,12.61081);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,9.187944);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.818478);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.089286);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.766509);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.944291);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.339924);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.533582);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.367405);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.8326606);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8117927);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2928489);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4992333);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1429171);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.4267102);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.5005244);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5596033);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3789449);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.07406837);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2601449);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5605762);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,2.174409);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4181151);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.676837);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5327602);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6489948);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5476249);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6541994);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6777157);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7802744);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8510078);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.033523);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.146265);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.405899);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.328028);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.111243);
   hNCpi0inFVcoh_stack_5->SetBinError(15,1.064369);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7380147);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4902176);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7764742);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4746644);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5042491);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4802207);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3435034);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3232464);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1328472);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2017138);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06950435);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1938284);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2833044);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2608273);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1486782);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.05571912);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1544868);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3452832);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5585632);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.06537335);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1532855);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06773257);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1439722);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1041077);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.563728);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2786696);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.09628156);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2320924);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8708228);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8440018);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5369899);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9850273);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6353722);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.632035);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1753155);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.0944154);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.06689942);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.0566724);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0696628);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.07226992);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03469857);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.03546278);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.1628412);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03940893);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08895197);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04258999);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06292073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06408313);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2345381);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1211833);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0580987);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08161682);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3447808);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2966346);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1638403);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4060303);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2318247);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2459255);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1499347);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05306982);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04473242);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02863013);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04330004);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05746958);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02453713);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02508921);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.12496);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.93017);
   hNCpi0inFVres_stack_7->SetBinContent(2,30.47176);
   hNCpi0inFVres_stack_7->SetBinContent(3,33.98671);
   hNCpi0inFVres_stack_7->SetBinContent(4,42.47691);
   hNCpi0inFVres_stack_7->SetBinContent(5,47.50494);
   hNCpi0inFVres_stack_7->SetBinContent(6,47.94791);
   hNCpi0inFVres_stack_7->SetBinContent(7,53.74613);
   hNCpi0inFVres_stack_7->SetBinContent(8,57.25163);
   hNCpi0inFVres_stack_7->SetBinContent(9,74.21201);
   hNCpi0inFVres_stack_7->SetBinContent(10,96.95613);
   hNCpi0inFVres_stack_7->SetBinContent(11,118.4651);
   hNCpi0inFVres_stack_7->SetBinContent(12,124.4409);
   hNCpi0inFVres_stack_7->SetBinContent(13,117.4783);
   hNCpi0inFVres_stack_7->SetBinContent(14,83.295);
   hNCpi0inFVres_stack_7->SetBinContent(15,45.80764);
   hNCpi0inFVres_stack_7->SetBinContent(16,29.14246);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.40314);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.95913);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.80938);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.38);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.379475);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.337207);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.535982);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.78085);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.842129);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.993573);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.814635);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.466741);
   hNCpi0inFVres_stack_7->SetBinContent(29,2.636773);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.848729);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.698513);
   hNCpi0inFVres_stack_7->SetBinContent(32,2.310731);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.266967);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.245415);
   hNCpi0inFVres_stack_7->SetBinContent(35,15.67121);
   hNCpi0inFVres_stack_7->SetBinError(1,1.327315);
   hNCpi0inFVres_stack_7->SetBinError(2,1.91999);
   hNCpi0inFVres_stack_7->SetBinError(3,1.995158);
   hNCpi0inFVres_stack_7->SetBinError(4,2.340137);
   hNCpi0inFVres_stack_7->SetBinError(5,2.456649);
   hNCpi0inFVres_stack_7->SetBinError(6,2.34118);
   hNCpi0inFVres_stack_7->SetBinError(7,2.502947);
   hNCpi0inFVres_stack_7->SetBinError(8,2.59196);
   hNCpi0inFVres_stack_7->SetBinError(9,2.873948);
   hNCpi0inFVres_stack_7->SetBinError(10,3.326739);
   hNCpi0inFVres_stack_7->SetBinError(11,3.666898);
   hNCpi0inFVres_stack_7->SetBinError(12,3.953032);
   hNCpi0inFVres_stack_7->SetBinError(13,3.761202);
   hNCpi0inFVres_stack_7->SetBinError(14,3.174042);
   hNCpi0inFVres_stack_7->SetBinError(15,2.368957);
   hNCpi0inFVres_stack_7->SetBinError(16,1.814083);
   hNCpi0inFVres_stack_7->SetBinError(17,1.496631);
   hNCpi0inFVres_stack_7->SetBinError(18,1.117471);
   hNCpi0inFVres_stack_7->SetBinError(19,1.254556);
   hNCpi0inFVres_stack_7->SetBinError(20,1.150767);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9838435);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8480171);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7854296);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8848172);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7074369);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6287693);
   hNCpi0inFVres_stack_7->SetBinError(27,0.741721);
   hNCpi0inFVres_stack_7->SetBinError(28,0.8067867);
   hNCpi0inFVres_stack_7->SetBinError(29,0.4334378);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7761562);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4875825);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5207651);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5248936);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5182119);
   hNCpi0inFVres_stack_7->SetBinError(35,1.501891);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.608379);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.702414);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.572467);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.713714);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.678804);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.38179);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.22293);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.52378);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.42084);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.13645);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.87119);
   hNCpi0inFVdis_stack_8->SetBinContent(12,26.95577);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.89854);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.49917);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.507574);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.54916);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.860401);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.925791);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.942068);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.370077);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.553809);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.808008);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.452502);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.098308);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.169402);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.333393);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.448468);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.352714);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.9674239);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.644096);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.003423);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.3992885);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.714738);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.9754298);
   hNCpi0inFVdis_stack_8->SetBinContent(35,6.567444);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6970359);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.07392);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8545548);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8049261);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9197825);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9236067);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.240444);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.148903);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.391814);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.557634);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.75993);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.841942);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.491733);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.505559);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9431222);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7946409);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5901952);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5764724);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8800464);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7100003);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.324042);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4364875);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3464631);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2563759);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2902798);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2905196);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4394725);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4807083);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.2965162);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4913554);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3806272);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1722336);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3905971);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2975317);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.104508);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,6.053749);
   hCCpi0inFV_stack_10->SetBinContent(2,12.98155);
   hCCpi0inFV_stack_10->SetBinContent(3,14.59633);
   hCCpi0inFV_stack_10->SetBinContent(4,15.8126);
   hCCpi0inFV_stack_10->SetBinContent(5,19.34769);
   hCCpi0inFV_stack_10->SetBinContent(6,20.13286);
   hCCpi0inFV_stack_10->SetBinContent(7,25.66247);
   hCCpi0inFV_stack_10->SetBinContent(8,25.92164);
   hCCpi0inFV_stack_10->SetBinContent(9,32.57248);
   hCCpi0inFV_stack_10->SetBinContent(10,46.64622);
   hCCpi0inFV_stack_10->SetBinContent(11,52.45833);
   hCCpi0inFV_stack_10->SetBinContent(12,57.87326);
   hCCpi0inFV_stack_10->SetBinContent(13,55.07696);
   hCCpi0inFV_stack_10->SetBinContent(14,33.02795);
   hCCpi0inFV_stack_10->SetBinContent(15,24.46418);
   hCCpi0inFV_stack_10->SetBinContent(16,15.74136);
   hCCpi0inFV_stack_10->SetBinContent(17,11.88023);
   hCCpi0inFV_stack_10->SetBinContent(18,10.70983);
   hCCpi0inFV_stack_10->SetBinContent(19,8.353383);
   hCCpi0inFV_stack_10->SetBinContent(20,7.662737);
   hCCpi0inFV_stack_10->SetBinContent(21,6.801963);
   hCCpi0inFV_stack_10->SetBinContent(22,5.428337);
   hCCpi0inFV_stack_10->SetBinContent(23,6.77275);
   hCCpi0inFV_stack_10->SetBinContent(24,5.576871);
   hCCpi0inFV_stack_10->SetBinContent(25,4.14661);
   hCCpi0inFV_stack_10->SetBinContent(26,4.938283);
   hCCpi0inFV_stack_10->SetBinContent(27,4.933472);
   hCCpi0inFV_stack_10->SetBinContent(28,4.254807);
   hCCpi0inFV_stack_10->SetBinContent(29,3.709461);
   hCCpi0inFV_stack_10->SetBinContent(30,4.312732);
   hCCpi0inFV_stack_10->SetBinContent(31,1.965463);
   hCCpi0inFV_stack_10->SetBinContent(32,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(33,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(34,3.032487);
   hCCpi0inFV_stack_10->SetBinContent(35,22.95299);
   hCCpi0inFV_stack_10->SetBinError(1,1.256574);
   hCCpi0inFV_stack_10->SetBinError(2,1.792541);
   hCCpi0inFV_stack_10->SetBinError(3,1.921818);
   hCCpi0inFV_stack_10->SetBinError(4,1.985199);
   hCCpi0inFV_stack_10->SetBinError(5,2.184752);
   hCCpi0inFV_stack_10->SetBinError(6,2.219744);
   hCCpi0inFV_stack_10->SetBinError(7,2.549945);
   hCCpi0inFV_stack_10->SetBinError(8,2.626534);
   hCCpi0inFV_stack_10->SetBinError(9,2.851373);
   hCCpi0inFV_stack_10->SetBinError(10,3.415448);
   hCCpi0inFV_stack_10->SetBinError(11,3.662542);
   hCCpi0inFV_stack_10->SetBinError(12,3.789709);
   hCCpi0inFV_stack_10->SetBinError(13,3.752912);
   hCCpi0inFV_stack_10->SetBinError(14,2.823439);
   hCCpi0inFV_stack_10->SetBinError(15,2.485588);
   hCCpi0inFV_stack_10->SetBinError(16,1.942305);
   hCCpi0inFV_stack_10->SetBinError(17,1.740362);
   hCCpi0inFV_stack_10->SetBinError(18,1.594176);
   hCCpi0inFV_stack_10->SetBinError(19,1.490354);
   hCCpi0inFV_stack_10->SetBinError(20,1.428835);
   hCCpi0inFV_stack_10->SetBinError(21,1.256752);
   hCCpi0inFV_stack_10->SetBinError(22,1.144497);
   hCCpi0inFV_stack_10->SetBinError(23,1.401699);
   hCCpi0inFV_stack_10->SetBinError(24,1.178509);
   hCCpi0inFV_stack_10->SetBinError(25,1.075328);
   hCCpi0inFV_stack_10->SetBinError(26,1.084327);
   hCCpi0inFV_stack_10->SetBinError(27,1.145041);
   hCCpi0inFV_stack_10->SetBinError(28,1.039394);
   hCCpi0inFV_stack_10->SetBinError(29,0.9605263);
   hCCpi0inFV_stack_10->SetBinError(30,1.061749);
   hCCpi0inFV_stack_10->SetBinError(31,0.6215361);
   hCCpi0inFV_stack_10->SetBinError(32,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(33,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(34,0.832162);
   hCCpi0inFV_stack_10->SetBinError(35,2.386848);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,4.403304);
   hNCinFV_stack_11->SetBinContent(2,4.914581);
   hNCinFV_stack_11->SetBinContent(3,5.803885);
   hNCinFV_stack_11->SetBinContent(4,10.33491);
   hNCinFV_stack_11->SetBinContent(5,11.72916);
   hNCinFV_stack_11->SetBinContent(6,12.08952);
   hNCinFV_stack_11->SetBinContent(7,11.63689);
   hNCinFV_stack_11->SetBinContent(8,8.691909);
   hNCinFV_stack_11->SetBinContent(9,11.44464);
   hNCinFV_stack_11->SetBinContent(10,10.98233);
   hNCinFV_stack_11->SetBinContent(11,14.77348);
   hNCinFV_stack_11->SetBinContent(12,16.09929);
   hNCinFV_stack_11->SetBinContent(13,14.15649);
   hNCinFV_stack_11->SetBinContent(14,8.029023);
   hNCinFV_stack_11->SetBinContent(15,7.234085);
   hNCinFV_stack_11->SetBinContent(16,7.15167);
   hNCinFV_stack_11->SetBinContent(17,6.470878);
   hNCinFV_stack_11->SetBinContent(18,3.375634);
   hNCinFV_stack_11->SetBinContent(19,4.518837);
   hNCinFV_stack_11->SetBinContent(20,3.638139);
   hNCinFV_stack_11->SetBinContent(21,5.024148);
   hNCinFV_stack_11->SetBinContent(22,2.372593);
   hNCinFV_stack_11->SetBinContent(23,3.763539);
   hNCinFV_stack_11->SetBinContent(24,3.043486);
   hNCinFV_stack_11->SetBinContent(25,2.326605);
   hNCinFV_stack_11->SetBinContent(26,2.17473);
   hNCinFV_stack_11->SetBinContent(27,1.323423);
   hNCinFV_stack_11->SetBinContent(28,2.371689);
   hNCinFV_stack_11->SetBinContent(29,2.520061);
   hNCinFV_stack_11->SetBinContent(30,2.552239);
   hNCinFV_stack_11->SetBinContent(31,1.586974);
   hNCinFV_stack_11->SetBinContent(32,3.578356);
   hNCinFV_stack_11->SetBinContent(33,0.8676867);
   hNCinFV_stack_11->SetBinContent(34,1.548202);
   hNCinFV_stack_11->SetBinContent(35,19.2934);
   hNCinFV_stack_11->SetBinError(1,1.064519);
   hNCinFV_stack_11->SetBinError(2,1.104583);
   hNCinFV_stack_11->SetBinError(3,1.140703);
   hNCinFV_stack_11->SetBinError(4,1.669525);
   hNCinFV_stack_11->SetBinError(5,1.750249);
   hNCinFV_stack_11->SetBinError(6,1.837647);
   hNCinFV_stack_11->SetBinError(7,1.725294);
   hNCinFV_stack_11->SetBinError(8,1.473992);
   hNCinFV_stack_11->SetBinError(9,1.68248);
   hNCinFV_stack_11->SetBinError(10,1.601068);
   hNCinFV_stack_11->SetBinError(11,1.901256);
   hNCinFV_stack_11->SetBinError(12,2.048361);
   hNCinFV_stack_11->SetBinError(13,2.04121);
   hNCinFV_stack_11->SetBinError(14,1.400907);
   hNCinFV_stack_11->SetBinError(15,1.403653);
   hNCinFV_stack_11->SetBinError(16,1.57621);
   hNCinFV_stack_11->SetBinError(17,1.540872);
   hNCinFV_stack_11->SetBinError(18,0.8539349);
   hNCinFV_stack_11->SetBinError(19,1.027226);
   hNCinFV_stack_11->SetBinError(20,1.03447);
   hNCinFV_stack_11->SetBinError(21,1.460721);
   hNCinFV_stack_11->SetBinError(22,0.8545803);
   hNCinFV_stack_11->SetBinError(23,0.9460109);
   hNCinFV_stack_11->SetBinError(24,0.9997452);
   hNCinFV_stack_11->SetBinError(25,0.9729278);
   hNCinFV_stack_11->SetBinError(26,0.9130439);
   hNCinFV_stack_11->SetBinError(27,0.5572761);
   hNCinFV_stack_11->SetBinError(28,1.142653);
   hNCinFV_stack_11->SetBinError(29,0.8940687);
   hNCinFV_stack_11->SetBinError(30,0.8089261);
   hNCinFV_stack_11->SetBinError(31,0.5965551);
   hNCinFV_stack_11->SetBinError(32,1.231727);
   hNCinFV_stack_11->SetBinError(33,0.6099787);
   hNCinFV_stack_11->SetBinError(34,0.6887645);
   hNCinFV_stack_11->SetBinError(35,2.456085);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,7.07626);
   hnumuCCinFV_stack_12->SetBinContent(2,8.809849);
   hnumuCCinFV_stack_12->SetBinContent(3,8.457179);
   hnumuCCinFV_stack_12->SetBinContent(4,10.22005);
   hnumuCCinFV_stack_12->SetBinContent(5,11.12128);
   hnumuCCinFV_stack_12->SetBinContent(6,13.83493);
   hnumuCCinFV_stack_12->SetBinContent(7,13.84772);
   hnumuCCinFV_stack_12->SetBinContent(8,12.38309);
   hnumuCCinFV_stack_12->SetBinContent(9,15.98358);
   hnumuCCinFV_stack_12->SetBinContent(10,15.74529);
   hnumuCCinFV_stack_12->SetBinContent(11,17.64429);
   hnumuCCinFV_stack_12->SetBinContent(12,16.86776);
   hnumuCCinFV_stack_12->SetBinContent(13,15.49558);
   hnumuCCinFV_stack_12->SetBinContent(14,16.44926);
   hnumuCCinFV_stack_12->SetBinContent(15,10.30735);
   hnumuCCinFV_stack_12->SetBinContent(16,8.4793);
   hnumuCCinFV_stack_12->SetBinContent(17,6.015422);
   hnumuCCinFV_stack_12->SetBinContent(18,5.636513);
   hnumuCCinFV_stack_12->SetBinContent(19,4.384552);
   hnumuCCinFV_stack_12->SetBinContent(20,4.874421);
   hnumuCCinFV_stack_12->SetBinContent(21,3.045626);
   hnumuCCinFV_stack_12->SetBinContent(22,4.663233);
   hnumuCCinFV_stack_12->SetBinContent(23,3.794151);
   hnumuCCinFV_stack_12->SetBinContent(24,2.681114);
   hnumuCCinFV_stack_12->SetBinContent(25,3.179713);
   hnumuCCinFV_stack_12->SetBinContent(26,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(27,1.663932);
   hnumuCCinFV_stack_12->SetBinContent(28,1.852124);
   hnumuCCinFV_stack_12->SetBinContent(29,1.375317);
   hnumuCCinFV_stack_12->SetBinContent(30,1.758112);
   hnumuCCinFV_stack_12->SetBinContent(31,1.576761);
   hnumuCCinFV_stack_12->SetBinContent(32,1.757318);
   hnumuCCinFV_stack_12->SetBinContent(33,1.26712);
   hnumuCCinFV_stack_12->SetBinContent(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(35,12.21862);
   hnumuCCinFV_stack_12->SetBinError(1,1.777009);
   hnumuCCinFV_stack_12->SetBinError(2,2.001983);
   hnumuCCinFV_stack_12->SetBinError(3,1.667986);
   hnumuCCinFV_stack_12->SetBinError(4,1.698945);
   hnumuCCinFV_stack_12->SetBinError(5,1.906021);
   hnumuCCinFV_stack_12->SetBinError(6,2.109876);
   hnumuCCinFV_stack_12->SetBinError(7,2.373829);
   hnumuCCinFV_stack_12->SetBinError(8,1.797514);
   hnumuCCinFV_stack_12->SetBinError(9,2.623151);
   hnumuCCinFV_stack_12->SetBinError(10,2.090079);
   hnumuCCinFV_stack_12->SetBinError(11,2.456771);
   hnumuCCinFV_stack_12->SetBinError(12,2.326169);
   hnumuCCinFV_stack_12->SetBinError(13,2.089891);
   hnumuCCinFV_stack_12->SetBinError(14,2.769623);
   hnumuCCinFV_stack_12->SetBinError(15,1.734883);
   hnumuCCinFV_stack_12->SetBinError(16,1.521745);
   hnumuCCinFV_stack_12->SetBinError(17,1.245131);
   hnumuCCinFV_stack_12->SetBinError(18,1.240198);
   hnumuCCinFV_stack_12->SetBinError(19,1.102075);
   hnumuCCinFV_stack_12->SetBinError(20,1.094356);
   hnumuCCinFV_stack_12->SetBinError(21,0.9109887);
   hnumuCCinFV_stack_12->SetBinError(22,1.182099);
   hnumuCCinFV_stack_12->SetBinError(23,2.307799);
   hnumuCCinFV_stack_12->SetBinError(24,0.8671317);
   hnumuCCinFV_stack_12->SetBinError(25,0.94571);
   hnumuCCinFV_stack_12->SetBinError(26,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(27,0.6518637);
   hnumuCCinFV_stack_12->SetBinError(28,0.6797418);
   hnumuCCinFV_stack_12->SetBinError(29,0.5198233);
   hnumuCCinFV_stack_12->SetBinError(30,0.6952699);
   hnumuCCinFV_stack_12->SetBinError(31,0.611241);
   hnumuCCinFV_stack_12->SetBinError(32,0.6360812);
   hnumuCCinFV_stack_12->SetBinError(33,0.5883944);
   hnumuCCinFV_stack_12->SetBinError(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(35,1.734338);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.356388);
   hnueCCinFV_stack_13->SetBinContent(2,3.36562);
   hnueCCinFV_stack_13->SetBinContent(3,2.430127);
   hnueCCinFV_stack_13->SetBinContent(4,1.487184);
   hnueCCinFV_stack_13->SetBinContent(5,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(6,2.667124);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.974841);
   hnueCCinFV_stack_13->SetBinContent(9,0.7549087);
   hnueCCinFV_stack_13->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_13->SetBinContent(11,1.909141);
   hnueCCinFV_stack_13->SetBinContent(12,1.209602);
   hnueCCinFV_stack_13->SetBinContent(13,1.361864);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,1.410471);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(23,1.393971);
   hnueCCinFV_stack_13->SetBinContent(25,0.196839);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5008826);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(35,3.207831);
   hnueCCinFV_stack_13->SetBinError(1,1.121856);
   hnueCCinFV_stack_13->SetBinError(2,1.690818);
   hnueCCinFV_stack_13->SetBinError(3,0.8933854);
   hnueCCinFV_stack_13->SetBinError(4,0.845849);
   hnueCCinFV_stack_13->SetBinError(5,0.4383608);
   hnueCCinFV_stack_13->SetBinError(6,1.430043);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.7951725);
   hnueCCinFV_stack_13->SetBinError(9,0.4493869);
   hnueCCinFV_stack_13->SetBinError(10,0.4909786);
   hnueCCinFV_stack_13->SetBinError(11,0.7705845);
   hnueCCinFV_stack_13->SetBinError(12,0.5781583);
   hnueCCinFV_stack_13->SetBinError(13,0.8248735);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.6663699);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(23,0.7125256);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3622357);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(35,1.275576);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__11->SetBinContent(1,79.07688);
   hmcerror__11->SetBinContent(2,120.9183);
   hmcerror__11->SetBinContent(3,150.8879);
   hmcerror__11->SetBinContent(4,160.8911);
   hmcerror__11->SetBinContent(5,160.3149);
   hmcerror__11->SetBinContent(6,183.201);
   hmcerror__11->SetBinContent(7,196.7061);
   hmcerror__11->SetBinContent(8,195.3957);
   hmcerror__11->SetBinContent(9,227.6697);
   hmcerror__11->SetBinContent(10,278.4041);
   hmcerror__11->SetBinContent(11,307.6623);
   hmcerror__11->SetBinContent(12,332.0968);
   hmcerror__11->SetBinContent(13,313.9803);
   hmcerror__11->SetBinContent(14,216.7011);
   hmcerror__11->SetBinContent(15,136);
   hmcerror__11->SetBinContent(16,92.571);
   hmcerror__11->SetBinContent(17,67.91238);
   hmcerror__11->SetBinContent(18,52.78049);
   hmcerror__11->SetBinContent(19,46.8848);
   hmcerror__11->SetBinContent(20,44.75412);
   hmcerror__11->SetBinContent(21,38.91216);
   hmcerror__11->SetBinContent(22,29.23322);
   hmcerror__11->SetBinContent(23,32.41429);
   hmcerror__11->SetBinContent(24,25.65741);
   hmcerror__11->SetBinContent(25,19.78083);
   hmcerror__11->SetBinContent(26,18.98995);
   hmcerror__11->SetBinContent(27,19.99329);
   hmcerror__11->SetBinContent(28,15.09128);
   hmcerror__11->SetBinContent(29,15.06764);
   hmcerror__11->SetBinContent(30,16.33346);
   hmcerror__11->SetBinContent(31,11.05914);
   hmcerror__11->SetBinContent(32,11.25801);
   hmcerror__11->SetBinContent(33,7.815069);
   hmcerror__11->SetBinContent(34,9.184544);
   hmcerror__11->SetBinContent(35,93.8606);
   hmcerror__11->SetBinError(1,25.43122);
   hmcerror__11->SetBinError(2,37.72039);
   hmcerror__11->SetBinError(3,40.90739);
   hmcerror__11->SetBinError(4,48.97244);
   hmcerror__11->SetBinError(5,46.66974);
   hmcerror__11->SetBinError(6,44.18717);
   hmcerror__11->SetBinError(7,74.1412);
   hmcerror__11->SetBinError(8,45.70103);
   hmcerror__11->SetBinError(9,60.0332);
   hmcerror__11->SetBinError(10,76.74512);
   hmcerror__11->SetBinError(11,77.44621);
   hmcerror__11->SetBinError(12,87.92707);
   hmcerror__11->SetBinError(13,74.6539);
   hmcerror__11->SetBinError(14,53.11793);
   hmcerror__11->SetBinError(15,38.95704);
   hmcerror__11->SetBinError(16,27.6792);
   hmcerror__11->SetBinError(17,20.36111);
   hmcerror__11->SetBinError(18,20.12557);
   hmcerror__11->SetBinError(19,15.49737);
   hmcerror__11->SetBinError(20,20.68889);
   hmcerror__11->SetBinError(21,17.20891);
   hmcerror__11->SetBinError(22,12.8374);
   hmcerror__11->SetBinError(23,14.93421);
   hmcerror__11->SetBinError(24,11.67724);
   hmcerror__11->SetBinError(25,14.43395);
   hmcerror__11->SetBinError(26,13.01827);
   hmcerror__11->SetBinError(27,10.35793);
   hmcerror__11->SetBinError(28,10.52396);
   hmcerror__11->SetBinError(29,12.88868);
   hmcerror__11->SetBinError(30,10.95617);
   hmcerror__11->SetBinError(31,7.996639);
   hmcerror__11->SetBinError(32,8.473532);
   hmcerror__11->SetBinError(33,6.625648);
   hmcerror__11->SetBinError(34,10.01942);
   hmcerror__11->SetBinError(35,28.10685);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3013[34] = {
   93,
   127,
   145,
   140,
   182,
   184,
   200,
   227,
   237,
   313,
   305,
   370,
   338,
   182,
   148,
   90,
   66,
   52,
   48,
   36,
   30,
   40,
   38,
   22,
   15,
   21,
   18,
   10,
   16,
   13,
   14,
   13,
   10,
   3};
   Double_t _felx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3013[34] = {
   9.7658,
   11.26943,
   12.04159,
   11.83216,
   13.49074,
   13.56466,
   14.14214,
   15.06652,
   15.3948,
   17.69181,
   17.46425,
   19.23538,
   18.38478,
   13.49074,
   12.16553,
   9.6093,
   8.2509,
   7.3419,
   7.0604,
   6.1381,
   5.6197,
   6.4604,
   6.3013,
   4.8417,
   4.0385,
   4.7354,
   4.4008,
   3.34883,
   4.1628,
   3.77763,
   3.9102,
   3.77763,
   3.34883,
   2.143368};
   Double_t _fehx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3013[34] = {
   9.564,
   11.26943,
   12.04159,
   11.83216,
   13.49074,
   13.56466,
   14.14214,
   15.06652,
   15.3948,
   17.69181,
   17.46425,
   19.23538,
   18.38478,
   13.49074,
   12.16553,
   9.4079,
   8.0483,
   7.1381,
   6.8561,
   5.9318,
   5.4117,
   6.2549,
   6.0955,
   4.6299,
   3.8197,
   4.5229,
   4.1858,
   3.1179,
   3.9454,
   3.5552,
   3.6898,
   3.5552,
   3.1179,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0.7709688);
   Graph_Graph3013->SetMaximum(428.0733);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.3/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3746.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 96.8","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 475.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 467.9","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  107.9","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.9","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1138.8","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  231.3","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 556.2","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 212.5","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 254.8","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.6","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3014[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3014[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3014[34] = {
   0.3216012,
   0.3119494,
   0.2711111,
   0.3043825,
   0.2911129,
   0.241195,
   0.3769136,
   0.2338896,
   0.2636855,
   0.2756609,
   0.2517247,
   0.2647634,
   0.2377662,
   0.2451207,
   0.2864487,
   0.2990051,
   0.2998144,
   0.381307,
   0.3305414,
   0.462279,
   0.4422502,
   0.4391375,
   0.4607293,
   0.4551217,
   0.7296941,
   0.685535,
   0.5180702,
   0.6973534,
   0.855388,
   0.6707808,
   0.7230797,
   0.7526672,
   0.8478041,
   1.0909};
   Double_t _fehx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3014[34] = {
   0.3216012,
   0.3119494,
   0.2711111,
   0.3043825,
   0.2911129,
   0.241195,
   0.3769136,
   0.2338896,
   0.2636855,
   0.2756609,
   0.2517247,
   0.2647634,
   0.2377662,
   0.2451207,
   0.2864487,
   0.2990051,
   0.2998144,
   0.381307,
   0.3305414,
   0.462279,
   0.4422502,
   0.4391375,
   0.4607293,
   0.4551217,
   0.7296941,
   0.685535,
   0.5180702,
   0.6973534,
   0.855388,
   0.6707808,
   0.7230797,
   0.7526672,
   0.8478041,
   1.0909};
   grae = new TGraphAsymmErrors(34,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3015[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3015[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3015[34] = {
   0.1683159,
   0.1887389,
   0.1665499,
   0.1715487,
   0.1949155,
   0.1734185,
   0.19012,
   0.1881265,
   0.203345,
   0.2103744,
   0.2165134,
   0.2165469,
   0.2091361,
   0.214766,
   0.2129663,
   0.2155761,
   0.2254028,
   0.2630112,
   0.2256523,
   0.2181837,
   0.2236579,
   0.2379512,
   0.2520857,
   0.2560678,
   0.2584982,
   0.2527759,
   0.2403522,
   0.3015153,
   0.2462933,
   0.2617465,
   0.3317145,
   0.3195402,
   0.3646662,
   0.3359976};
   Double_t _fehx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3015[34] = {
   0.1683159,
   0.1887389,
   0.1665499,
   0.1715487,
   0.1949155,
   0.1734185,
   0.19012,
   0.1881265,
   0.203345,
   0.2103744,
   0.2165134,
   0.2165469,
   0.2091361,
   0.214766,
   0.2129663,
   0.2155761,
   0.2254028,
   0.2630112,
   0.2256523,
   0.2181837,
   0.2236579,
   0.2379512,
   0.2520857,
   0.2560678,
   0.2584982,
   0.2527759,
   0.2403522,
   0.3015153,
   0.2462933,
   0.2617465,
   0.3317145,
   0.3195402,
   0.3646662,
   0.3359976};
   grae = new TGraphAsymmErrors(34,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
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
   
   Double_t _fx3016[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3016[34] = {
   1.176071,
   1.050296,
   0.9609783,
   0.8701536,
   1.135266,
   1.004361,
   1.016746,
   1.161745,
   1.040982,
   1.124265,
   0.9913467,
   1.114133,
   1.076501,
   0.8398664,
   1.088235,
   0.9722267,
   0.9718405,
   0.9852125,
   1.023786,
   0.8043951,
   0.7709672,
   1.368306,
   1.172322,
   0.8574522,
   0.75831,
   1.105848,
   0.9003019,
   0.6626343,
   1.061878,
   0.7959123,
   1.265921,
   1.154734,
   1.279579,
   0.3266357};
   Double_t _felx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3016[34] = {
   0.1234975,
   0.09319868,
   0.0798049,
   0.0735414,
   0.08415149,
   0.07404249,
   0.07189477,
   0.07710772,
   0.06761902,
   0.06354722,
   0.05676435,
   0.05792102,
   0.05855392,
   0.06225504,
   0.08945237,
   0.1038046,
   0.1214933,
   0.1391025,
   0.1505904,
   0.1371516,
   0.1444201,
   0.2209952,
   0.1943988,
   0.1887057,
   0.2041623,
   0.2493635,
   0.2201138,
   0.221905,
   0.2762742,
   0.2312817,
   0.3535718,
   0.3355505,
   0.4285093,
   0.2333668};
   Double_t _fehx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3016[34] = {
   0.1209456,
   0.09319868,
   0.0798049,
   0.0735414,
   0.08415149,
   0.07404249,
   0.07189477,
   0.07710772,
   0.06761902,
   0.06354722,
   0.05676435,
   0.05792102,
   0.05855392,
   0.06225504,
   0.08945237,
   0.101629,
   0.1185101,
   0.1352413,
   0.1462329,
   0.132542,
   0.1390748,
   0.2139655,
   0.1880498,
   0.1804508,
   0.1931011,
   0.2381734,
   0.2093602,
   0.2066028,
   0.2618459,
   0.2176636,
   0.3336426,
   0.315793,
   0.39896,
   0.1877306};
   grae = new TGraphAsymmErrors(34,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0.08394198);
   Graph_Graph3016->SetMaximum(1.837066);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

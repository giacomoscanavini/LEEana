#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Oct 21 20:21:52 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-9.510078,1692.308,1051.614);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__13->SetBinContent(1,80.88764);
   hmc__13->SetBinContent(2,332.2201);
   hmc__13->SetBinContent(3,475.5039);
   hmc__13->SetBinContent(4,427.7119);
   hmc__13->SetBinContent(5,339.4413);
   hmc__13->SetBinContent(6,261.4296);
   hmc__13->SetBinContent(7,224.1827);
   hmc__13->SetBinContent(8,163.0542);
   hmc__13->SetBinContent(9,126.3521);
   hmc__13->SetBinContent(10,91.43833);
   hmc__13->SetBinContent(11,67.44707);
   hmc__13->SetBinContent(12,54.57859);
   hmc__13->SetBinContent(13,36.75654);
   hmc__13->SetBinContent(14,31.57673);
   hmc__13->SetBinContent(15,26.05181);
   hmc__13->SetBinContent(16,23.96129);
   hmc__13->SetBinContent(17,19.03996);
   hmc__13->SetBinContent(18,20.70598);
   hmc__13->SetBinContent(19,15.52163);
   hmc__13->SetBinContent(20,16.88812);
   hmc__13->SetBinContent(21,11.71864);
   hmc__13->SetBinContent(22,11.11478);
   hmc__13->SetBinContent(23,9.992686);
   hmc__13->SetBinContent(24,7.221843);
   hmc__13->SetBinContent(25,8.084678);
   hmc__13->SetBinContent(26,166.7624);
   hmc__13->SetBinError(1,28.3887);
   hmc__13->SetBinError(2,129.8599);
   hmc__13->SetBinError(3,195.5478);
   hmc__13->SetBinError(4,175.372);
   hmc__13->SetBinError(5,135.5071);
   hmc__13->SetBinError(6,99.65705);
   hmc__13->SetBinError(7,85.7985);
   hmc__13->SetBinError(8,57.74529);
   hmc__13->SetBinError(9,41.01991);
   hmc__13->SetBinError(10,30.48645);
   hmc__13->SetBinError(11,22.86896);
   hmc__13->SetBinError(12,21.21522);
   hmc__13->SetBinError(13,16.67921);
   hmc__13->SetBinError(14,14.9362);
   hmc__13->SetBinError(15,12.00139);
   hmc__13->SetBinError(16,12.37059);
   hmc__13->SetBinError(17,10.92518);
   hmc__13->SetBinError(18,12.41648);
   hmc__13->SetBinError(19,9.619874);
   hmc__13->SetBinError(20,13.40942);
   hmc__13->SetBinError(21,8.147413);
   hmc__13->SetBinError(22,8.985275);
   hmc__13->SetBinError(23,7.058232);
   hmc__13->SetBinError(24,5.210532);
   hmc__13->SetBinError(25,8.422918);
   hmc__13->SetBinError(26,56.37871);
   hmc__13->SetMinimum(-9.510078);
   hmc__13->SetMaximum(998.5581);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,1500);
   hs5_stack_5->SetMinimum(-4.228303e-08);
   hs5_stack_5->SetMaximum(499.279);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,3.647832);
   hbadmatch_stack_1->SetBinContent(2,12.36947);
   hbadmatch_stack_1->SetBinContent(3,13.45294);
   hbadmatch_stack_1->SetBinContent(4,9.402469);
   hbadmatch_stack_1->SetBinContent(5,7.940498);
   hbadmatch_stack_1->SetBinContent(6,4.790877);
   hbadmatch_stack_1->SetBinContent(7,4.246114);
   hbadmatch_stack_1->SetBinContent(8,2.773826);
   hbadmatch_stack_1->SetBinContent(9,3.167549);
   hbadmatch_stack_1->SetBinContent(10,1.410359);
   hbadmatch_stack_1->SetBinContent(11,1.002571);
   hbadmatch_stack_1->SetBinContent(12,2.008144);
   hbadmatch_stack_1->SetBinContent(13,0.7633783);
   hbadmatch_stack_1->SetBinContent(14,0.8830107);
   hbadmatch_stack_1->SetBinContent(15,1.25226);
   hbadmatch_stack_1->SetBinContent(16,0.8105889);
   hbadmatch_stack_1->SetBinContent(17,1.027982);
   hbadmatch_stack_1->SetBinContent(18,0.1221502);
   hbadmatch_stack_1->SetBinContent(19,0.0102018);
   hbadmatch_stack_1->SetBinContent(20,1.237531);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,2.874694);
   hbadmatch_stack_1->SetBinError(1,1.01054);
   hbadmatch_stack_1->SetBinError(2,1.880715);
   hbadmatch_stack_1->SetBinError(3,2.77156);
   hbadmatch_stack_1->SetBinError(4,1.605843);
   hbadmatch_stack_1->SetBinError(5,1.502096);
   hbadmatch_stack_1->SetBinError(6,1.119099);
   hbadmatch_stack_1->SetBinError(7,0.9374369);
   hbadmatch_stack_1->SetBinError(8,0.9240857);
   hbadmatch_stack_1->SetBinError(9,0.9395938);
   hbadmatch_stack_1->SetBinError(10,0.6964521);
   hbadmatch_stack_1->SetBinError(11,0.4905432);
   hbadmatch_stack_1->SetBinError(12,0.7701647);
   hbadmatch_stack_1->SetBinError(13,0.5429729);
   hbadmatch_stack_1->SetBinError(14,0.5491453);
   hbadmatch_stack_1->SetBinError(15,0.7339954);
   hbadmatch_stack_1->SetBinError(16,0.5014128);
   hbadmatch_stack_1->SetBinError(17,0.5590662);
   hbadmatch_stack_1->SetBinError(18,0.1221502);
   hbadmatch_stack_1->SetBinError(19,0.0102018);
   hbadmatch_stack_1->SetBinError(20,0.5864556);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.8665024);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,6.318);
   hext_stack_2->SetBinContent(2,40.99514);
   hext_stack_2->SetBinContent(3,51.80444);
   hext_stack_2->SetBinContent(4,30.44686);
   hext_stack_2->SetBinContent(5,28.36915);
   hext_stack_2->SetBinContent(6,21.79018);
   hext_stack_2->SetBinContent(7,17.59015);
   hext_stack_2->SetBinContent(8,11.7869);
   hext_stack_2->SetBinContent(9,15.72874);
   hext_stack_2->SetBinContent(10,6.075805);
   hext_stack_2->SetBinContent(11,9.429508);
   hext_stack_2->SetBinContent(12,5.725457);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,2.428004);
   hext_stack_2->SetBinContent(15,1.78639);
   hext_stack_2->SetBinContent(16,2.599588);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(18,2.752401);
   hext_stack_2->SetBinContent(19,1.868591);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,0.8131978);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,12.75568);
   hext_stack_2->SetBinError(1,1.630074);
   hext_stack_2->SetBinError(2,4.540248);
   hext_stack_2->SetBinError(3,5.113969);
   hext_stack_2->SetBinError(4,3.677293);
   hext_stack_2->SetBinError(5,3.664919);
   hext_stack_2->SetBinError(6,3.316116);
   hext_stack_2->SetBinError(7,2.981587);
   hext_stack_2->SetBinError(8,2.447376);
   hext_stack_2->SetBinError(9,2.825283);
   hext_stack_2->SetBinError(10,1.616168);
   hext_stack_2->SetBinError(11,2.248955);
   hext_stack_2->SetBinError(12,1.72489);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,1.028599);
   hext_stack_2->SetBinError(15,0.8039566);
   hext_stack_2->SetBinError(16,0.9884288);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(18,1.07854);
   hext_stack_2->SetBinError(19,0.840497);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.5750177);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,2.483994);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.6085784);
   hdirt_stack_3->SetBinContent(2,3.28968);
   hdirt_stack_3->SetBinContent(3,2.486947);
   hdirt_stack_3->SetBinContent(4,2.76345);
   hdirt_stack_3->SetBinContent(5,2.050918);
   hdirt_stack_3->SetBinContent(6,0.5059223);
   hdirt_stack_3->SetBinContent(7,0.6143302);
   hdirt_stack_3->SetBinContent(8,0.7670878);
   hdirt_stack_3->SetBinContent(9,0.6787259);
   hdirt_stack_3->SetBinContent(10,0.4026575);
   hdirt_stack_3->SetBinContent(11,0.4142144);
   hdirt_stack_3->SetBinContent(12,0.375357);
   hdirt_stack_3->SetBinContent(17,0.481239);
   hdirt_stack_3->SetBinContent(26,0.5388689);
   hdirt_stack_3->SetBinError(1,0.3609533);
   hdirt_stack_3->SetBinError(2,0.9596777);
   hdirt_stack_3->SetBinError(3,1.122148);
   hdirt_stack_3->SetBinError(4,0.7666712);
   hdirt_stack_3->SetBinError(5,0.7566472);
   hdirt_stack_3->SetBinError(6,0.3763795);
   hdirt_stack_3->SetBinError(7,0.39051);
   hdirt_stack_3->SetBinError(8,0.5461925);
   hdirt_stack_3->SetBinError(9,0.4782747);
   hdirt_stack_3->SetBinError(10,0.2984452);
   hdirt_stack_3->SetBinError(11,0.2391468);
   hdirt_stack_3->SetBinError(12,0.2690641);
   hdirt_stack_3->SetBinError(17,0.3416714);
   hdirt_stack_3->SetBinError(26,0.4239131);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,8.22654);
   houtFV_stack_4->SetBinContent(2,18.90506);
   houtFV_stack_4->SetBinContent(3,23.39922);
   houtFV_stack_4->SetBinContent(4,27.73403);
   houtFV_stack_4->SetBinContent(5,20.83576);
   houtFV_stack_4->SetBinContent(6,14.22186);
   houtFV_stack_4->SetBinContent(7,17.77278);
   houtFV_stack_4->SetBinContent(8,10.7514);
   houtFV_stack_4->SetBinContent(9,7.963778);
   houtFV_stack_4->SetBinContent(10,5.600523);
   houtFV_stack_4->SetBinContent(11,5.101969);
   houtFV_stack_4->SetBinContent(12,4.085174);
   houtFV_stack_4->SetBinContent(13,1.451428);
   houtFV_stack_4->SetBinContent(14,4.44404);
   houtFV_stack_4->SetBinContent(15,2.138124);
   houtFV_stack_4->SetBinContent(16,3.158038);
   houtFV_stack_4->SetBinContent(17,1.855576);
   houtFV_stack_4->SetBinContent(18,2.512782);
   houtFV_stack_4->SetBinContent(19,1.552358);
   houtFV_stack_4->SetBinContent(20,2.339462);
   houtFV_stack_4->SetBinContent(21,0.7834804);
   houtFV_stack_4->SetBinContent(22,0.5901461);
   houtFV_stack_4->SetBinContent(23,1.320373);
   houtFV_stack_4->SetBinContent(24,1.070405);
   houtFV_stack_4->SetBinContent(25,1.608988);
   houtFV_stack_4->SetBinContent(26,13.64633);
   houtFV_stack_4->SetBinError(1,1.424134);
   houtFV_stack_4->SetBinError(2,2.209247);
   houtFV_stack_4->SetBinError(3,2.348071);
   houtFV_stack_4->SetBinError(4,2.648371);
   houtFV_stack_4->SetBinError(5,2.194015);
   houtFV_stack_4->SetBinError(6,1.887081);
   houtFV_stack_4->SetBinError(7,2.133903);
   houtFV_stack_4->SetBinError(8,1.663238);
   houtFV_stack_4->SetBinError(9,1.518861);
   houtFV_stack_4->SetBinError(10,1.111571);
   houtFV_stack_4->SetBinError(11,1.133928);
   houtFV_stack_4->SetBinError(12,0.9406386);
   houtFV_stack_4->SetBinError(13,0.6674993);
   houtFV_stack_4->SetBinError(14,1.245351);
   houtFV_stack_4->SetBinError(15,0.7125291);
   houtFV_stack_4->SetBinError(16,1.109279);
   houtFV_stack_4->SetBinError(17,0.6794384);
   houtFV_stack_4->SetBinError(18,0.8474533);
   houtFV_stack_4->SetBinError(19,0.5363019);
   houtFV_stack_4->SetBinError(20,0.7646428);
   houtFV_stack_4->SetBinError(21,0.3917439);
   houtFV_stack_4->SetBinError(22,0.340721);
   houtFV_stack_4->SetBinError(23,0.5548703);
   houtFV_stack_4->SetBinError(24,0.5545368);
   houtFV_stack_4->SetBinError(25,0.6801404);
   houtFV_stack_4->SetBinError(26,1.855655);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1820604);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.242647);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.21118);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.88561);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4445688);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2989918);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.488173);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1190788);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2536395);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09948429);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03629303);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1064809);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1328842);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5503174);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08070252);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1447381);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3939792);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3652552);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2117464);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1259796);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2083184);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06888257);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1690729);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05174643);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02963552);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.0623148);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1015282);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1756469);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5883686);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.631081);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.252279);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.995604);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.47062);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.538728);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7714768);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2023852);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1647907);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.09549345);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1898371);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1521039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0508617);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08444149);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.3677517);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1692275);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3052202);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.412529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4075791);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3296087);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4405733);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.277348);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08036946);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08060466);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05017866);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0839554);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1295493);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05086169);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06827068);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1604167);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.7787);
   hNCpi0inFVres_stack_7->SetBinContent(2,93.353);
   hNCpi0inFVres_stack_7->SetBinContent(3,161.6385);
   hNCpi0inFVres_stack_7->SetBinContent(4,156.7387);
   hNCpi0inFVres_stack_7->SetBinContent(5,133.4368);
   hNCpi0inFVres_stack_7->SetBinContent(6,102.6248);
   hNCpi0inFVres_stack_7->SetBinContent(7,78.7515);
   hNCpi0inFVres_stack_7->SetBinContent(8,60.55984);
   hNCpi0inFVres_stack_7->SetBinContent(9,43.13356);
   hNCpi0inFVres_stack_7->SetBinContent(10,28.96976);
   hNCpi0inFVres_stack_7->SetBinContent(11,20.32151);
   hNCpi0inFVres_stack_7->SetBinContent(12,14.70095);
   hNCpi0inFVres_stack_7->SetBinContent(13,10.38687);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.323826);
   hNCpi0inFVres_stack_7->SetBinContent(15,9.023491);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.93489);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.659299);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.394305);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.913788);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.496254);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.258693);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.537018);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.97068);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.557632);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.933419);
   hNCpi0inFVres_stack_7->SetBinContent(26,41.27362);
   hNCpi0inFVres_stack_7->SetBinError(1,1.385802);
   hNCpi0inFVres_stack_7->SetBinError(2,2.818319);
   hNCpi0inFVres_stack_7->SetBinError(3,3.576822);
   hNCpi0inFVres_stack_7->SetBinError(4,3.55997);
   hNCpi0inFVres_stack_7->SetBinError(5,3.458263);
   hNCpi0inFVres_stack_7->SetBinError(6,2.979571);
   hNCpi0inFVres_stack_7->SetBinError(7,2.627129);
   hNCpi0inFVres_stack_7->SetBinError(8,2.439933);
   hNCpi0inFVres_stack_7->SetBinError(9,2.141601);
   hNCpi0inFVres_stack_7->SetBinError(10,1.768927);
   hNCpi0inFVres_stack_7->SetBinError(11,1.561404);
   hNCpi0inFVres_stack_7->SetBinError(12,1.412066);
   hNCpi0inFVres_stack_7->SetBinError(13,1.089194);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9491681);
   hNCpi0inFVres_stack_7->SetBinError(15,1.162668);
   hNCpi0inFVres_stack_7->SetBinError(16,1.110479);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6591805);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7876878);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7456904);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7839865);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6110211);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6745473);
   hNCpi0inFVres_stack_7->SetBinError(23,0.679372);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5285202);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4506175);
   hNCpi0inFVres_stack_7->SetBinError(26,2.190884);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.062786);
   hNCpi0inFVdis_stack_8->SetBinContent(2,23.84859);
   hNCpi0inFVdis_stack_8->SetBinContent(3,30.11906);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.8378);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.84727);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.06743);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.88825);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.17612);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.13922);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.726287);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.990693);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.124131);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.477973);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.447415);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.343008);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.588762);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.498625);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.676706);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.859643);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.878327);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.65507);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.460226);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.598075);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4111862);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5452622);
   hNCpi0inFVdis_stack_8->SetBinContent(26,15.23072);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.018011);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.570717);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.530452);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.650702);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.61575);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.40276);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.354219);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.501221);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.295375);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9676787);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9257555);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8915739);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.626491);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9166029);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5081633);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4072443);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4554389);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6032439);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7065958);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4869806);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9562771);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4880743);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.244031);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2083652);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2925109);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.496112);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.07051344);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2037179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4248489);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.09172834);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.0331231);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1322691);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1893327);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04102551);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04222718);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,14.35844);
   hCCpi0inFV_stack_10->SetBinContent(2,62.14402);
   hCCpi0inFV_stack_10->SetBinContent(3,89.90501);
   hCCpi0inFV_stack_10->SetBinContent(4,78.92311);
   hCCpi0inFV_stack_10->SetBinContent(5,56.59653);
   hCCpi0inFV_stack_10->SetBinContent(6,47.73277);
   hCCpi0inFV_stack_10->SetBinContent(7,36.47501);
   hCCpi0inFV_stack_10->SetBinContent(8,24.44709);
   hCCpi0inFV_stack_10->SetBinContent(9,19.37411);
   hCCpi0inFV_stack_10->SetBinContent(10,15.78852);
   hCCpi0inFV_stack_10->SetBinContent(11,8.540201);
   hCCpi0inFV_stack_10->SetBinContent(12,9.420259);
   hCCpi0inFV_stack_10->SetBinContent(13,5.529772);
   hCCpi0inFV_stack_10->SetBinContent(14,4.056401);
   hCCpi0inFV_stack_10->SetBinContent(15,3.225821);
   hCCpi0inFV_stack_10->SetBinContent(16,3.574452);
   hCCpi0inFV_stack_10->SetBinContent(17,2.294588);
   hCCpi0inFV_stack_10->SetBinContent(18,3.606336);
   hCCpi0inFV_stack_10->SetBinContent(19,1.710423);
   hCCpi0inFV_stack_10->SetBinContent(20,2.52906);
   hCCpi0inFV_stack_10->SetBinContent(21,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(22,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(23,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(26,20.42877);
   hCCpi0inFV_stack_10->SetBinError(1,1.833321);
   hCCpi0inFV_stack_10->SetBinError(2,3.926717);
   hCCpi0inFV_stack_10->SetBinError(3,4.767921);
   hCCpi0inFV_stack_10->SetBinError(4,4.505651);
   hCCpi0inFV_stack_10->SetBinError(5,3.766586);
   hCCpi0inFV_stack_10->SetBinError(6,3.514336);
   hCCpi0inFV_stack_10->SetBinError(7,3.04622);
   hCCpi0inFV_stack_10->SetBinError(8,2.402769);
   hCCpi0inFV_stack_10->SetBinError(9,2.183842);
   hCCpi0inFV_stack_10->SetBinError(10,1.99823);
   hCCpi0inFV_stack_10->SetBinError(11,1.530718);
   hCCpi0inFV_stack_10->SetBinError(12,1.607225);
   hCCpi0inFV_stack_10->SetBinError(13,1.109609);
   hCCpi0inFV_stack_10->SetBinError(14,1.020285);
   hCCpi0inFV_stack_10->SetBinError(15,0.854322);
   hCCpi0inFV_stack_10->SetBinError(16,0.9213567);
   hCCpi0inFV_stack_10->SetBinError(17,0.7474882);
   hCCpi0inFV_stack_10->SetBinError(18,1.000295);
   hCCpi0inFV_stack_10->SetBinError(19,0.6196373);
   hCCpi0inFV_stack_10->SetBinError(20,0.7432908);
   hCCpi0inFV_stack_10->SetBinError(21,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(22,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(23,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(25,0.438694);
   hCCpi0inFV_stack_10->SetBinError(26,2.357645);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,10.84031);
   hNCinFV_stack_11->SetBinContent(2,37.71841);
   hNCinFV_stack_11->SetBinContent(3,48.83296);
   hNCinFV_stack_11->SetBinContent(4,35.72487);
   hNCinFV_stack_11->SetBinContent(5,28.14608);
   hNCinFV_stack_11->SetBinContent(6,17.74455);
   hNCinFV_stack_11->SetBinContent(7,17.86038);
   hNCinFV_stack_11->SetBinContent(8,13.4177);
   hNCinFV_stack_11->SetBinContent(9,10.43174);
   hNCinFV_stack_11->SetBinContent(10,11.16114);
   hNCinFV_stack_11->SetBinContent(11,7.296204);
   hNCinFV_stack_11->SetBinContent(12,4.394786);
   hNCinFV_stack_11->SetBinContent(13,4.479246);
   hNCinFV_stack_11->SetBinContent(14,2.090515);
   hNCinFV_stack_11->SetBinContent(15,1.573078);
   hNCinFV_stack_11->SetBinContent(16,1.947832);
   hNCinFV_stack_11->SetBinContent(17,2.712736);
   hNCinFV_stack_11->SetBinContent(18,2.340378);
   hNCinFV_stack_11->SetBinContent(19,1.248781);
   hNCinFV_stack_11->SetBinContent(20,1.746104);
   hNCinFV_stack_11->SetBinContent(21,1.541286);
   hNCinFV_stack_11->SetBinContent(22,0.7642006);
   hNCinFV_stack_11->SetBinContent(23,0.9516163);
   hNCinFV_stack_11->SetBinContent(24,1.24234);
   hNCinFV_stack_11->SetBinContent(25,0.6793658);
   hNCinFV_stack_11->SetBinContent(26,16.52853);
   hNCinFV_stack_11->SetBinError(1,1.903176);
   hNCinFV_stack_11->SetBinError(2,3.218594);
   hNCinFV_stack_11->SetBinError(3,3.92358);
   hNCinFV_stack_11->SetBinError(4,3.264533);
   hNCinFV_stack_11->SetBinError(5,2.942284);
   hNCinFV_stack_11->SetBinError(6,2.093584);
   hNCinFV_stack_11->SetBinError(7,2.43039);
   hNCinFV_stack_11->SetBinError(8,2.013338);
   hNCinFV_stack_11->SetBinError(9,1.69332);
   hNCinFV_stack_11->SetBinError(10,2.085988);
   hNCinFV_stack_11->SetBinError(11,1.507372);
   hNCinFV_stack_11->SetBinError(12,1.069173);
   hNCinFV_stack_11->SetBinError(13,1.326641);
   hNCinFV_stack_11->SetBinError(14,0.7813026);
   hNCinFV_stack_11->SetBinError(15,0.7477681);
   hNCinFV_stack_11->SetBinError(16,0.8510057);
   hNCinFV_stack_11->SetBinError(17,0.9049849);
   hNCinFV_stack_11->SetBinError(18,0.7376965);
   hNCinFV_stack_11->SetBinError(19,0.907602);
   hNCinFV_stack_11->SetBinError(20,0.7474287);
   hNCinFV_stack_11->SetBinError(21,0.7009253);
   hNCinFV_stack_11->SetBinError(22,0.382426);
   hNCinFV_stack_11->SetBinError(23,0.9516163);
   hNCinFV_stack_11->SetBinError(24,0.8075103);
   hNCinFV_stack_11->SetBinError(25,0.4177781);
   hNCinFV_stack_11->SetBinError(26,2.087227);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,9.332169);
   hnumuCCinFV_stack_12->SetBinContent(2,36.64565);
   hnumuCCinFV_stack_12->SetBinContent(3,49.87125);
   hnumuCCinFV_stack_12->SetBinContent(4,52.59971);
   hnumuCCinFV_stack_12->SetBinContent(5,34.24883);
   hnumuCCinFV_stack_12->SetBinContent(6,29.98767);
   hnumuCCinFV_stack_12->SetBinContent(7,30.27359);
   hnumuCCinFV_stack_12->SetBinContent(8,22.04771);
   hnumuCCinFV_stack_12->SetBinContent(9,13.05908);
   hnumuCCinFV_stack_12->SetBinContent(10,13.50873);
   hnumuCCinFV_stack_12->SetBinContent(11,8.366319);
   hnumuCCinFV_stack_12->SetBinContent(12,8.345085);
   hnumuCCinFV_stack_12->SetBinContent(13,8.657721);
   hnumuCCinFV_stack_12->SetBinContent(14,5.306942);
   hnumuCCinFV_stack_12->SetBinContent(15,4.681008);
   hnumuCCinFV_stack_12->SetBinContent(16,3.088553);
   hnumuCCinFV_stack_12->SetBinContent(17,3.269598);
   hnumuCCinFV_stack_12->SetBinContent(18,3.213347);
   hnumuCCinFV_stack_12->SetBinContent(19,3.045915);
   hnumuCCinFV_stack_12->SetBinContent(20,2.252743);
   hnumuCCinFV_stack_12->SetBinContent(21,2.26557);
   hnumuCCinFV_stack_12->SetBinContent(22,2.245884);
   hnumuCCinFV_stack_12->SetBinContent(23,1.754437);
   hnumuCCinFV_stack_12->SetBinContent(24,0.4270507);
   hnumuCCinFV_stack_12->SetBinContent(25,1.548079);
   hnumuCCinFV_stack_12->SetBinContent(26,36.66265);
   hnumuCCinFV_stack_12->SetBinError(1,1.520059);
   hnumuCCinFV_stack_12->SetBinError(2,3.368762);
   hnumuCCinFV_stack_12->SetBinError(3,4.190789);
   hnumuCCinFV_stack_12->SetBinError(4,3.941279);
   hnumuCCinFV_stack_12->SetBinError(5,3.502032);
   hnumuCCinFV_stack_12->SetBinError(6,2.925285);
   hnumuCCinFV_stack_12->SetBinError(7,3.356993);
   hnumuCCinFV_stack_12->SetBinError(8,2.818125);
   hnumuCCinFV_stack_12->SetBinError(9,1.956745);
   hnumuCCinFV_stack_12->SetBinError(10,3.047645);
   hnumuCCinFV_stack_12->SetBinError(11,1.469576);
   hnumuCCinFV_stack_12->SetBinError(12,1.968444);
   hnumuCCinFV_stack_12->SetBinError(13,1.544874);
   hnumuCCinFV_stack_12->SetBinError(14,1.511464);
   hnumuCCinFV_stack_12->SetBinError(15,1.174613);
   hnumuCCinFV_stack_12->SetBinError(16,0.8901428);
   hnumuCCinFV_stack_12->SetBinError(17,0.8907209);
   hnumuCCinFV_stack_12->SetBinError(18,0.9675937);
   hnumuCCinFV_stack_12->SetBinError(19,1.003361);
   hnumuCCinFV_stack_12->SetBinError(20,0.8596936);
   hnumuCCinFV_stack_12->SetBinError(21,0.7769351);
   hnumuCCinFV_stack_12->SetBinError(22,0.8293737);
   hnumuCCinFV_stack_12->SetBinError(23,0.6886528);
   hnumuCCinFV_stack_12->SetBinError(24,0.3031018);
   hnumuCCinFV_stack_12->SetBinError(25,0.7148906);
   hnumuCCinFV_stack_12->SetBinError(26,3.786254);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.9342211);
   hnueCCinFV_stack_13->SetBinContent(3,1.073786);
   hnueCCinFV_stack_13->SetBinContent(4,1.242451);
   hnueCCinFV_stack_13->SetBinContent(5,1.613186);
   hnueCCinFV_stack_13->SetBinContent(6,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(7,2.640091);
   hnueCCinFV_stack_13->SetBinContent(8,0.5983049);
   hnueCCinFV_stack_13->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.7889074);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(22,1.157431);
   hnueCCinFV_stack_13->SetBinContent(23,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(26,5.90444);
   hnueCCinFV_stack_13->SetBinError(2,0.5439573);
   hnueCCinFV_stack_13->SetBinError(3,0.5557297);
   hnueCCinFV_stack_13->SetBinError(4,0.7040974);
   hnueCCinFV_stack_13->SetBinError(5,0.688151);
   hnueCCinFV_stack_13->SetBinError(6,0.4383608);
   hnueCCinFV_stack_13->SetBinError(7,1.66476);
   hnueCCinFV_stack_13->SetBinError(8,0.3520186);
   hnueCCinFV_stack_13->SetBinError(9,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.467035);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.2346262);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.4810838);
   hnueCCinFV_stack_13->SetBinError(22,1.157431);
   hnueCCinFV_stack_13->SetBinError(23,0.2107157);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.3654046);
   hnueCCinFV_stack_13->SetBinError(26,1.282218);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__14->SetBinContent(1,80.88764);
   hmcerror__14->SetBinContent(2,332.2201);
   hmcerror__14->SetBinContent(3,475.5039);
   hmcerror__14->SetBinContent(4,427.7119);
   hmcerror__14->SetBinContent(5,339.4413);
   hmcerror__14->SetBinContent(6,261.4296);
   hmcerror__14->SetBinContent(7,224.1827);
   hmcerror__14->SetBinContent(8,163.0542);
   hmcerror__14->SetBinContent(9,126.3521);
   hmcerror__14->SetBinContent(10,91.43833);
   hmcerror__14->SetBinContent(11,67.44707);
   hmcerror__14->SetBinContent(12,54.57859);
   hmcerror__14->SetBinContent(13,36.75654);
   hmcerror__14->SetBinContent(14,31.57673);
   hmcerror__14->SetBinContent(15,26.05181);
   hmcerror__14->SetBinContent(16,23.96129);
   hmcerror__14->SetBinContent(17,19.03996);
   hmcerror__14->SetBinContent(18,20.70598);
   hmcerror__14->SetBinContent(19,15.52163);
   hmcerror__14->SetBinContent(20,16.88812);
   hmcerror__14->SetBinContent(21,11.71864);
   hmcerror__14->SetBinContent(22,11.11478);
   hmcerror__14->SetBinContent(23,9.992686);
   hmcerror__14->SetBinContent(24,7.221843);
   hmcerror__14->SetBinContent(25,8.084678);
   hmcerror__14->SetBinContent(26,166.7624);
   hmcerror__14->SetBinError(1,28.3887);
   hmcerror__14->SetBinError(2,129.8599);
   hmcerror__14->SetBinError(3,195.5478);
   hmcerror__14->SetBinError(4,175.372);
   hmcerror__14->SetBinError(5,135.5071);
   hmcerror__14->SetBinError(6,99.65705);
   hmcerror__14->SetBinError(7,85.7985);
   hmcerror__14->SetBinError(8,57.74529);
   hmcerror__14->SetBinError(9,41.01991);
   hmcerror__14->SetBinError(10,30.48645);
   hmcerror__14->SetBinError(11,22.86896);
   hmcerror__14->SetBinError(12,21.21522);
   hmcerror__14->SetBinError(13,16.67921);
   hmcerror__14->SetBinError(14,14.9362);
   hmcerror__14->SetBinError(15,12.00139);
   hmcerror__14->SetBinError(16,12.37059);
   hmcerror__14->SetBinError(17,10.92518);
   hmcerror__14->SetBinError(18,12.41648);
   hmcerror__14->SetBinError(19,9.619874);
   hmcerror__14->SetBinError(20,13.40942);
   hmcerror__14->SetBinError(21,8.147413);
   hmcerror__14->SetBinError(22,8.985275);
   hmcerror__14->SetBinError(23,7.058232);
   hmcerror__14->SetBinError(24,5.210532);
   hmcerror__14->SetBinError(25,8.422918);
   hmcerror__14->SetBinError(26,56.37871);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3017[25] = {
   60,
   296,
   444,
   422,
   319,
   240,
   153,
   104,
   101,
   70,
   61,
   32,
   44,
   19,
   25,
   19,
   20,
   14,
   11,
   9,
   6,
   6,
   4,
   7,
   6};
   Double_t _felx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3017[25] = {
   7.8743,
   17.20465,
   21.07131,
   20.54264,
   17.86057,
   15.49193,
   12.36932,
   10.19804,
   10.04988,
   8.4925,
   7.9383,
   5.7977,
   6.7671,
   4.5151,
   5.1474,
   4.5151,
   4.6266,
   3.9102,
   3.4975,
   3.19354,
   2.67925,
   2.67925,
   2.29683,
   2.85954,
   2.67925};
   Double_t _fehx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3017[25] = {
   7.6713,
   17.20465,
   21.07131,
   20.54264,
   17.86057,
   15.49193,
   12.36932,
   10.19804,
   10.04988,
   8.2902,
   7.7354,
   5.5904,
   6.5623,
   4.3011,
   4.9374,
   4.3011,
   4.4133,
   3.6898,
   3.27,
   2.9582,
   2.41858,
   2.41858,
   1.98186,
   2.61053,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(1.532853);
   Graph_Graph3017->SetMaximum(511.4081);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2492.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 73.0","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 264.1","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.4","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 189.4","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.0","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.5","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  976.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  220.3","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 495.5","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 266.9","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 350.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.5","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3018[25] = {
   0.3509646,
   0.3908853,
   0.4112433,
   0.4100236,
   0.3992065,
   0.3812003,
   0.3827169,
   0.3541479,
   0.3246476,
   0.33341,
   0.3390653,
   0.3887096,
   0.4537752,
   0.473013,
   0.4606741,
   0.516274,
   0.5738025,
   0.5996568,
   0.6197722,
   0.7940149,
   0.6952523,
   0.8084076,
   0.7063398,
   0.7214961,
   1.041837};
   Double_t _fehx3018[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3018[25] = {
   0.3509646,
   0.3908853,
   0.4112433,
   0.4100236,
   0.3992065,
   0.3812003,
   0.3827169,
   0.3541479,
   0.3246476,
   0.33341,
   0.3390653,
   0.3887096,
   0.4537752,
   0.473013,
   0.4606741,
   0.516274,
   0.5738025,
   0.5996568,
   0.6197722,
   0.7940149,
   0.6952523,
   0.8084076,
   0.7063398,
   0.7214961,
   1.041837};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3019[25] = {
   0.2728344,
   0.3516066,
   0.4044161,
   0.3929146,
   0.3774035,
   0.3656445,
   0.3441066,
   0.3166733,
   0.2891017,
   0.2666542,
   0.2192,
   0.2161203,
   0.2189594,
   0.2421537,
   0.2563536,
   0.2618945,
   0.2333303,
   0.2217039,
   0.2425296,
   0.2506473,
   0.2615622,
   0.4316864,
   0.3181954,
   0.3135341,
   0.3161795};
   Double_t _fehx3019[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3019[25] = {
   0.2728344,
   0.3516066,
   0.4044161,
   0.3929146,
   0.3774035,
   0.3656445,
   0.3441066,
   0.3166733,
   0.2891017,
   0.2666542,
   0.2192,
   0.2161203,
   0.2189594,
   0.2421537,
   0.2563536,
   0.2618945,
   0.2333303,
   0.2217039,
   0.2425296,
   0.2506473,
   0.2615622,
   0.4316864,
   0.3181954,
   0.3135341,
   0.3161795};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3020[25] = {
   0.7417697,
   0.8909755,
   0.9337463,
   0.9866453,
   0.9397797,
   0.9180292,
   0.6824792,
   0.6378248,
   0.7993535,
   0.7655433,
   0.9044129,
   0.5863105,
   1.197066,
   0.601709,
   0.9596262,
   0.7929457,
   1.050423,
   0.6761331,
   0.7086884,
   0.5329191,
   0.5120047,
   0.5398216,
   0.4002928,
   0.9692817,
   0.7421446};
   Double_t _felx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3020[25] = {
   0.09734862,
   0.0517869,
   0.04431364,
   0.04802914,
   0.05261756,
   0.05925853,
   0.05517517,
   0.06254387,
   0.07953864,
   0.0928768,
   0.1176967,
   0.1062266,
   0.184106,
   0.1429882,
   0.1975832,
   0.1884331,
   0.2429942,
   0.188844,
   0.2253307,
   0.1890998,
   0.2286314,
   0.2410529,
   0.2298511,
   0.3959571,
   0.3313985};
   Double_t _fehx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3020[25] = {
   0.09483896,
   0.0517869,
   0.04431364,
   0.04802914,
   0.05261756,
   0.05925853,
   0.05517517,
   0.06254387,
   0.07953864,
   0.09066438,
   0.1146885,
   0.1024284,
   0.1785342,
   0.1362111,
   0.1895223,
   0.179502,
   0.2317915,
   0.1781997,
   0.2106737,
   0.1751646,
   0.2063874,
   0.2176003,
   0.1983311,
   0.361477,
   0.299156};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0.04992582);
   Graph_Graph3020->SetMaximum(1.496116);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

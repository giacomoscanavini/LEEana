#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 08:57:31 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-230.7692,-11.41828,1692.308,962.1403);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__4->SetBinContent(0,61.33416);
   hmc__4->SetBinContent(1,85.591);
   hmc__4->SetBinContent(2,381.3062);
   hmc__4->SetBinContent(3,570.914);
   hmc__4->SetBinContent(4,509.4273);
   hmc__4->SetBinContent(5,398.6547);
   hmc__4->SetBinContent(6,309.3901);
   hmc__4->SetBinContent(7,254.9613);
   hmc__4->SetBinContent(8,180.8606);
   hmc__4->SetBinContent(9,135.6814);
   hmc__4->SetBinContent(10,93.43732);
   hmc__4->SetBinContent(11,66.86092);
   hmc__4->SetBinContent(12,53.40596);
   hmc__4->SetBinContent(13,34.98512);
   hmc__4->SetBinContent(14,28.92878);
   hmc__4->SetBinContent(15,24.58938);
   hmc__4->SetBinContent(16,22.46643);
   hmc__4->SetBinContent(17,19.01987);
   hmc__4->SetBinContent(18,20.01368);
   hmc__4->SetBinContent(19,14.89501);
   hmc__4->SetBinContent(20,16.36496);
   hmc__4->SetBinContent(21,10.30864);
   hmc__4->SetBinContent(22,10.81606);
   hmc__4->SetBinContent(23,9.223417);
   hmc__4->SetBinContent(24,6.766801);
   hmc__4->SetBinContent(25,8.523598);
   hmc__4->SetBinContent(26,176.2048);
   hmc__4->SetBinError(0,3.489769);
   hmc__4->SetBinError(1,18.23773);
   hmc__4->SetBinError(2,78.91353);
   hmc__4->SetBinError(3,127.9364);
   hmc__4->SetBinError(4,129.1385);
   hmc__4->SetBinError(5,104.9338);
   hmc__4->SetBinError(6,78.78269);
   hmc__4->SetBinError(7,67.39646);
   hmc__4->SetBinError(8,45.8587);
   hmc__4->SetBinError(9,32.09662);
   hmc__4->SetBinError(10,24.87502);
   hmc__4->SetBinError(11,15.97737);
   hmc__4->SetBinError(12,12.68157);
   hmc__4->SetBinError(13,9.539863);
   hmc__4->SetBinError(14,9.442042);
   hmc__4->SetBinError(15,7.331222);
   hmc__4->SetBinError(16,6.752458);
   hmc__4->SetBinError(17,7.641418);
   hmc__4->SetBinError(18,5.79443);
   hmc__4->SetBinError(19,6.46979);
   hmc__4->SetBinError(20,5.768891);
   hmc__4->SetBinError(21,4.614418);
   hmc__4->SetBinError(22,5.884439);
   hmc__4->SetBinError(23,3.686237);
   hmc__4->SetBinError(24,2.912164);
   hmc__4->SetBinError(25,3.98253);
   hmc__4->SetBinError(26,40.42143);
   hmc__4->SetMinimum(-11.41828);
   hmc__4->SetMaximum(913.4624);
   hmc__4->SetEntries(3457.329);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1500);
   hs2_stack_2->SetMinimum(-4.228303e-08);
   hs2_stack_2->SetMaximum(599.4597);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(0,0.3917402);
   hbadmatch_stack_1->SetBinContent(1,3.831569);
   hbadmatch_stack_1->SetBinContent(2,13.59791);
   hbadmatch_stack_1->SetBinContent(3,14.32929);
   hbadmatch_stack_1->SetBinContent(4,10.77696);
   hbadmatch_stack_1->SetBinContent(5,8.770578);
   hbadmatch_stack_1->SetBinContent(6,4.988885);
   hbadmatch_stack_1->SetBinContent(7,4.87965);
   hbadmatch_stack_1->SetBinContent(8,2.927671);
   hbadmatch_stack_1->SetBinContent(9,3.403967);
   hbadmatch_stack_1->SetBinContent(10,1.474419);
   hbadmatch_stack_1->SetBinContent(11,1.320066);
   hbadmatch_stack_1->SetBinContent(12,1.919319);
   hbadmatch_stack_1->SetBinContent(13,0.7633783);
   hbadmatch_stack_1->SetBinContent(14,0.9470699);
   hbadmatch_stack_1->SetBinContent(15,0.9480529);
   hbadmatch_stack_1->SetBinContent(16,0.5884556);
   hbadmatch_stack_1->SetBinContent(17,1.113335);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.0102018);
   hbadmatch_stack_1->SetBinContent(20,1.237531);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,2.874694);
   hbadmatch_stack_1->SetBinError(0,0.2770047);
   hbadmatch_stack_1->SetBinError(1,1.003881);
   hbadmatch_stack_1->SetBinError(2,1.976113);
   hbadmatch_stack_1->SetBinError(3,2.803866);
   hbadmatch_stack_1->SetBinError(4,1.718203);
   hbadmatch_stack_1->SetBinError(5,1.59654);
   hbadmatch_stack_1->SetBinError(6,1.156979);
   hbadmatch_stack_1->SetBinError(7,1.06515);
   hbadmatch_stack_1->SetBinError(8,0.877388);
   hbadmatch_stack_1->SetBinError(9,0.9783349);
   hbadmatch_stack_1->SetBinError(10,0.7114386);
   hbadmatch_stack_1->SetBinError(11,0.6079991);
   hbadmatch_stack_1->SetBinError(12,0.7418338);
   hbadmatch_stack_1->SetBinError(13,0.5429729);
   hbadmatch_stack_1->SetBinError(14,0.5680315);
   hbadmatch_stack_1->SetBinError(15,0.4891198);
   hbadmatch_stack_1->SetBinError(16,0.3397478);
   hbadmatch_stack_1->SetBinError(17,0.5818607);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.0102018);
   hbadmatch_stack_1->SetBinError(20,0.5864556);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.8665024);
   hbadmatch_stack_1->SetEntries(325);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(0,5.180405);
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
   hext_stack_2->SetBinError(0,1.49039);
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
   hext_stack_2->SetEntries(634);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(0,0.5164824);
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
   hdirt_stack_3->SetBinError(0,0.3040134);
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
   hdirt_stack_3->SetEntries(72);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(0,4.500094);
   houtFV_stack_4->SetBinContent(1,8.514871);
   houtFV_stack_4->SetBinContent(2,19.24134);
   houtFV_stack_4->SetBinContent(3,26.05108);
   houtFV_stack_4->SetBinContent(4,29.20292);
   houtFV_stack_4->SetBinContent(5,23.36114);
   houtFV_stack_4->SetBinContent(6,15.38723);
   houtFV_stack_4->SetBinContent(7,19.0023);
   houtFV_stack_4->SetBinContent(8,11.4688);
   houtFV_stack_4->SetBinContent(9,7.873121);
   houtFV_stack_4->SetBinContent(10,6.373245);
   houtFV_stack_4->SetBinContent(11,5.323521);
   houtFV_stack_4->SetBinContent(12,4.35286);
   houtFV_stack_4->SetBinContent(13,1.451428);
   houtFV_stack_4->SetBinContent(14,4.001457);
   houtFV_stack_4->SetBinContent(15,2.390778);
   houtFV_stack_4->SetBinContent(16,2.839153);
   houtFV_stack_4->SetBinContent(17,1.855576);
   houtFV_stack_4->SetBinContent(18,2.547082);
   houtFV_stack_4->SetBinContent(19,1.761986);
   houtFV_stack_4->SetBinContent(20,2.825778);
   houtFV_stack_4->SetBinContent(21,0.7834804);
   houtFV_stack_4->SetBinContent(22,0.5901461);
   houtFV_stack_4->SetBinContent(23,1.320373);
   houtFV_stack_4->SetBinContent(24,1.070405);
   houtFV_stack_4->SetBinContent(25,1.608988);
   houtFV_stack_4->SetBinContent(26,15.16882);
   houtFV_stack_4->SetBinError(0,1.067945);
   houtFV_stack_4->SetBinError(1,1.451168);
   houtFV_stack_4->SetBinError(2,2.195485);
   houtFV_stack_4->SetBinError(3,2.54582);
   houtFV_stack_4->SetBinError(4,2.749073);
   houtFV_stack_4->SetBinError(5,2.391433);
   houtFV_stack_4->SetBinError(6,1.911454);
   houtFV_stack_4->SetBinError(7,2.2474);
   houtFV_stack_4->SetBinError(8,1.706336);
   houtFV_stack_4->SetBinError(9,1.396219);
   houtFV_stack_4->SetBinError(10,1.227366);
   houtFV_stack_4->SetBinError(11,1.17779);
   houtFV_stack_4->SetBinError(12,1.000187);
   houtFV_stack_4->SetBinError(13,0.6674993);
   houtFV_stack_4->SetBinError(14,1.038578);
   houtFV_stack_4->SetBinError(15,0.7844693);
   houtFV_stack_4->SetBinError(16,0.8093956);
   houtFV_stack_4->SetBinError(17,0.6794384);
   houtFV_stack_4->SetBinError(18,0.8481162);
   houtFV_stack_4->SetBinError(19,0.587334);
   houtFV_stack_4->SetBinError(20,0.8501738);
   houtFV_stack_4->SetBinError(21,0.3917439);
   houtFV_stack_4->SetBinError(22,0.340721);
   houtFV_stack_4->SetBinError(23,0.5548703);
   houtFV_stack_4->SetBinError(24,0.5545368);
   houtFV_stack_4->SetBinError(25,0.6801404);
   houtFV_stack_4->SetBinError(26,2.012894);
   houtFV_stack_4->SetEntries(950);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.697836);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9467759);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.6833858);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.29151);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3157578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2420254);
   hNCpi0inFVcoh_stack_5->SetEntries(117);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,35.20032);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,36.81767);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,181.9888);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,306.6041);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,281.9876);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,227.8121);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,177.592);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,134.4754);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,100.5027);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,70.39349);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,44.67323);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,28.907);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,20.98903);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,14.79137);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,10.55371);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,10.68026);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,8.518997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,7.528216);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,5.78811);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,6.0256);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,4.990964);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,4.254106);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,3.875956);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,3.73812);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,3.415938);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,2.844816);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,66.73061);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.962593);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.949377);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.399534);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,5.736057);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.481394);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.997668);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.434776);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.753983);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.327926);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.78212);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.169816);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.718887);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.502496);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.214809);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.9839529);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.046879);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.9331995);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.9219404);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.7632727);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.8526334);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.7270588);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.7025105);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,0.6363764);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.6630349);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.6207937);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.5625206);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.701778);
   hNCpi0inFVnoncoh_stack_6->SetEntries(33079);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(0,4.102892);
   hCCpi0inFV_stack_7->SetBinContent(1,17.53946);
   hCCpi0inFV_stack_7->SetBinContent(2,69.57308);
   hCCpi0inFV_stack_7->SetBinContent(3,96.26367);
   hCCpi0inFV_stack_7->SetBinContent(4,85.37029);
   hCCpi0inFV_stack_7->SetBinContent(5,59.18233);
   hCCpi0inFV_stack_7->SetBinContent(6,53.73833);
   hCCpi0inFV_stack_7->SetBinContent(7,42.24522);
   hCCpi0inFV_stack_7->SetBinContent(8,26.6961);
   hCCpi0inFV_stack_7->SetBinContent(9,20.30106);
   hCCpi0inFV_stack_7->SetBinContent(10,17.1089);
   hCCpi0inFV_stack_7->SetBinContent(11,9.91721);
   hCCpi0inFV_stack_7->SetBinContent(12,10.15218);
   hCCpi0inFV_stack_7->SetBinContent(13,6.460095);
   hCCpi0inFV_stack_7->SetBinContent(14,4.251426);
   hCCpi0inFV_stack_7->SetBinContent(15,3.815968);
   hCCpi0inFV_stack_7->SetBinContent(16,3.574452);
   hCCpi0inFV_stack_7->SetBinContent(17,2.491303);
   hCCpi0inFV_stack_7->SetBinContent(18,4.141539);
   hCCpi0inFV_stack_7->SetBinContent(19,2.102163);
   hCCpi0inFV_stack_7->SetBinContent(20,2.725775);
   hCCpi0inFV_stack_7->SetBinContent(21,2.145881);
   hCCpi0inFV_stack_7->SetBinContent(22,1.715495);
   hCCpi0inFV_stack_7->SetBinContent(23,1.318683);
   hCCpi0inFV_stack_7->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_7->SetBinContent(25,0.7319179);
   hCCpi0inFV_stack_7->SetBinContent(26,23.02134);
   hCCpi0inFV_stack_7->SetBinError(0,1.000002);
   hCCpi0inFV_stack_7->SetBinError(1,2.032872);
   hCCpi0inFV_stack_7->SetBinError(2,4.155515);
   hCCpi0inFV_stack_7->SetBinError(3,4.926942);
   hCCpi0inFV_stack_7->SetBinError(4,4.685858);
   hCCpi0inFV_stack_7->SetBinError(5,3.85235);
   hCCpi0inFV_stack_7->SetBinError(6,3.737626);
   hCCpi0inFV_stack_7->SetBinError(7,3.271958);
   hCCpi0inFV_stack_7->SetBinError(8,2.512435);
   hCCpi0inFV_stack_7->SetBinError(9,2.235991);
   hCCpi0inFV_stack_7->SetBinError(10,2.073838);
   hCCpi0inFV_stack_7->SetBinError(11,1.61678);
   hCCpi0inFV_stack_7->SetBinError(12,1.66602);
   hCCpi0inFV_stack_7->SetBinError(13,1.209563);
   hCCpi0inFV_stack_7->SetBinError(14,1.038757);
   hCCpi0inFV_stack_7->SetBinError(15,0.9197592);
   hCCpi0inFV_stack_7->SetBinError(16,0.9213567);
   hCCpi0inFV_stack_7->SetBinError(17,0.7729396);
   hCCpi0inFV_stack_7->SetBinError(18,1.074404);
   hCCpi0inFV_stack_7->SetBinError(19,0.6787356);
   hCCpi0inFV_stack_7->SetBinError(20,0.7688811);
   hCCpi0inFV_stack_7->SetBinError(21,0.785499);
   hCCpi0inFV_stack_7->SetBinError(22,0.6212384);
   hCCpi0inFV_stack_7->SetBinError(23,0.5542732);
   hCCpi0inFV_stack_7->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_7->SetBinError(25,0.438694);
   hCCpi0inFV_stack_7->SetBinError(26,2.492903);
   hCCpi0inFV_stack_7->SetEntries(2444);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_8->SetBinContent(0,5.910286);
   hNCinFV_stack_8->SetBinContent(1,5.753908);
   hNCinFV_stack_8->SetBinContent(2,22.16327);
   hNCinFV_stack_8->SetBinContent(3,28.53766);
   hNCinFV_stack_8->SetBinContent(4,20.53742);
   hNCinFV_stack_8->SetBinContent(5,15.14952);
   hNCinFV_stack_8->SetBinContent(6,10.02163);
   hNCinFV_stack_8->SetBinContent(7,8.410952);
   hNCinFV_stack_8->SetBinContent(8,5.715261);
   hNCinFV_stack_8->SetBinContent(9,4.694729);
   hNCinFV_stack_8->SetBinContent(10,4.53835);
   hNCinFV_stack_8->SetBinContent(11,3.659589);
   hNCinFV_stack_8->SetBinContent(12,2.053982);
   hNCinFV_stack_8->SetBinContent(13,1.804013);
   hNCinFV_stack_8->SetBinContent(14,1.070405);
   hNCinFV_stack_8->SetBinContent(15,0.8770706);
   hNCinFV_stack_8->SetBinContent(16,1.17353);
   hNCinFV_stack_8->SetBinContent(17,1.268811);
   hNCinFV_stack_8->SetBinContent(18,1.853885);
   hNCinFV_stack_8->SetBinContent(19,0.1967154);
   hNCinFV_stack_8->SetBinContent(20,1.17184);
   hNCinFV_stack_8->SetBinContent(21,0.8753801);
   hNCinFV_stack_8->SetBinContent(22,0.5867651);
   hNCinFV_stack_8->SetBinContent(24,0.3401776);
   hNCinFV_stack_8->SetBinContent(25,0.7319179);
   hNCinFV_stack_8->SetBinContent(26,14.45686);
   hNCinFV_stack_8->SetBinError(0,1.225543);
   hNCinFV_stack_8->SetBinError(1,1.272109);
   hNCinFV_stack_8->SetBinError(2,2.263721);
   hNCinFV_stack_8->SetBinError(3,2.6768);
   hNCinFV_stack_8->SetBinError(4,2.354781);
   hNCinFV_stack_8->SetBinError(5,1.912014);
   hNCinFV_stack_8->SetBinError(6,1.582805);
   hNCinFV_stack_8->SetBinError(7,1.428992);
   hNCinFV_stack_8->SetBinError(8,1.209926);
   hNCinFV_stack_8->SetBinError(9,1.056768);
   hNCinFV_stack_8->SetBinError(10,1.110434);
   hNCinFV_stack_8->SetBinError(11,0.9809496);
   hNCinFV_stack_8->SetBinError(12,0.7078105);
   hNCinFV_stack_8->SetBinError(13,0.7075491);
   hNCinFV_stack_8->SetBinError(14,0.5545368);
   hNCinFV_stack_8->SetBinError(15,0.5197486);
   hNCinFV_stack_8->SetBinError(16,0.4790957);
   hNCinFV_stack_8->SetBinError(17,0.5889569);
   hNCinFV_stack_8->SetBinError(18,0.6789509);
   hNCinFV_stack_8->SetBinError(19,0.1967154);
   hNCinFV_stack_8->SetBinError(20,0.478404);
   hNCinFV_stack_8->SetBinError(21,0.5191111);
   hNCinFV_stack_8->SetBinError(22,0.3387718);
   hNCinFV_stack_8->SetBinError(24,0.3401776);
   hNCinFV_stack_8->SetBinError(25,0.438694);
   hNCinFV_stack_8->SetBinError(26,1.953538);
   hNCinFV_stack_8->SetEntries(696);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(0,2.987827);
   hnumuCCinFV_stack_9->SetBinContent(1,6.151147);
   hnumuCCinFV_stack_9->SetBinContent(2,29.21658);
   hnumuCCinFV_stack_9->SetBinContent(3,43.51259);
   hnumuCCinFV_stack_9->SetBinContent(4,46.15253);
   hnumuCCinFV_stack_9->SetBinContent(5,31.66303);
   hnumuCCinFV_stack_9->SetBinContent(6,23.98211);
   hnumuCCinFV_stack_9->SetBinContent(7,24.50339);
   hnumuCCinFV_stack_9->SetBinContent(8,19.7987);
   hnumuCCinFV_stack_9->SetBinContent(9,12.13214);
   hnumuCCinFV_stack_9->SetBinContent(10,12.18836);
   hnumuCCinFV_stack_9->SetBinContent(11,6.989311);
   hnumuCCinFV_stack_9->SetBinContent(12,7.613168);
   hnumuCCinFV_stack_9->SetBinContent(13,7.727397);
   hnumuCCinFV_stack_9->SetBinContent(14,5.111917);
   hnumuCCinFV_stack_9->SetBinContent(15,4.090862);
   hnumuCCinFV_stack_9->SetBinContent(16,3.088553);
   hnumuCCinFV_stack_9->SetBinContent(17,3.072883);
   hnumuCCinFV_stack_9->SetBinContent(18,2.678144);
   hnumuCCinFV_stack_9->SetBinContent(19,2.654174);
   hnumuCCinFV_stack_9->SetBinContent(20,2.056027);
   hnumuCCinFV_stack_9->SetBinContent(21,1.585214);
   hnumuCCinFV_stack_9->SetBinContent(22,2.049169);
   hnumuCCinFV_stack_9->SetBinContent(23,1.559412);
   hnumuCCinFV_stack_9->SetBinContent(24,0.4270507);
   hnumuCCinFV_stack_9->SetBinContent(25,1.548079);
   hnumuCCinFV_stack_9->SetBinContent(26,34.07008);
   hnumuCCinFV_stack_9->SetBinError(0,0.8824253);
   hnumuCCinFV_stack_9->SetBinError(1,1.240595);
   hnumuCCinFV_stack_9->SetBinError(2,3.082104);
   hnumuCCinFV_stack_9->SetBinError(3,4.002627);
   hnumuCCinFV_stack_9->SetBinError(4,3.725226);
   hnumuCCinFV_stack_9->SetBinError(5,3.407462);
   hnumuCCinFV_stack_9->SetBinError(6,2.634008);
   hnumuCCinFV_stack_9->SetBinError(7,3.137379);
   hnumuCCinFV_stack_9->SetBinError(8,2.720808);
   hnumuCCinFV_stack_9->SetBinError(9,1.896935);
   hnumuCCinFV_stack_9->SetBinError(10,2.996708);
   hnumuCCinFV_stack_9->SetBinError(11,1.374327);
   hnumuCCinFV_stack_9->SetBinError(12,1.918937);
   hnumuCCinFV_stack_9->SetBinError(13,1.467932);
   hnumuCCinFV_stack_9->SetBinError(14,1.49883);
   hnumuCCinFV_stack_9->SetBinError(15,1.12411);
   hnumuCCinFV_stack_9->SetBinError(16,0.8901428);
   hnumuCCinFV_stack_9->SetBinError(17,0.8687271);
   hnumuCCinFV_stack_9->SetBinError(18,0.8845802);
   hnumuCCinFV_stack_9->SetBinError(19,0.9643661);
   hnumuCCinFV_stack_9->SetBinError(20,0.8368848);
   hnumuCCinFV_stack_9->SetBinError(21,0.610071);
   hnumuCCinFV_stack_9->SetBinError(22,0.8057071);
   hnumuCCinFV_stack_9->SetBinError(23,0.6604605);
   hnumuCCinFV_stack_9->SetBinError(24,0.3031018);
   hnumuCCinFV_stack_9->SetBinError(25,0.7148906);
   hnumuCCinFV_stack_9->SetBinError(26,3.6986);
   hnumuCCinFV_stack_9->SetEntries(1303);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_10->SetBinContent(0,1.846285);
   hnueCCinFV_stack_10->SetBinContent(2,0.9342211);
   hnueCCinFV_stack_10->SetBinContent(3,1.073786);
   hnueCCinFV_stack_10->SetBinContent(4,1.242451);
   hnueCCinFV_stack_10->SetBinContent(5,1.613186);
   hnueCCinFV_stack_10->SetBinContent(6,0.9801958);
   hnueCCinFV_stack_10->SetBinContent(7,2.640091);
   hnueCCinFV_stack_10->SetBinContent(8,0.5983049);
   hnueCCinFV_stack_10->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(11,0.7889074);
   hnueCCinFV_stack_10->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(13,0.2346262);
   hnueCCinFV_stack_10->SetBinContent(14,0.536893);
   hnueCCinFV_stack_10->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_10->SetBinContent(20,0.6803553);
   hnueCCinFV_stack_10->SetBinContent(22,1.157431);
   hnueCCinFV_stack_10->SetBinContent(23,0.2107157);
   hnueCCinFV_stack_10->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(25,0.3654046);
   hnueCCinFV_stack_10->SetBinContent(26,5.90444);
   hnueCCinFV_stack_10->SetBinError(0,1.195901);
   hnueCCinFV_stack_10->SetBinError(2,0.5439573);
   hnueCCinFV_stack_10->SetBinError(3,0.5557297);
   hnueCCinFV_stack_10->SetBinError(4,0.7040974);
   hnueCCinFV_stack_10->SetBinError(5,0.688151);
   hnueCCinFV_stack_10->SetBinError(6,0.4383608);
   hnueCCinFV_stack_10->SetBinError(7,1.66476);
   hnueCCinFV_stack_10->SetBinError(8,0.3520186);
   hnueCCinFV_stack_10->SetBinError(9,0.2770047);
   hnueCCinFV_stack_10->SetBinError(10,0.2781975);
   hnueCCinFV_stack_10->SetBinError(11,0.467035);
   hnueCCinFV_stack_10->SetBinError(12,0.1967154);
   hnueCCinFV_stack_10->SetBinError(13,0.2346262);
   hnueCCinFV_stack_10->SetBinError(14,0.3929602);
   hnueCCinFV_stack_10->SetBinError(19,0.2476759);
   hnueCCinFV_stack_10->SetBinError(20,0.4810838);
   hnueCCinFV_stack_10->SetBinError(22,1.157431);
   hnueCCinFV_stack_10->SetBinError(23,0.2107157);
   hnueCCinFV_stack_10->SetBinError(24,0.1950249);
   hnueCCinFV_stack_10->SetBinError(25,0.3654046);
   hnueCCinFV_stack_10->SetBinError(26,1.282218);
   hnueCCinFV_stack_10->SetEntries(77);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__5->SetBinContent(0,61.33416);
   hmcerror__5->SetBinContent(1,85.591);
   hmcerror__5->SetBinContent(2,381.3062);
   hmcerror__5->SetBinContent(3,570.914);
   hmcerror__5->SetBinContent(4,509.4273);
   hmcerror__5->SetBinContent(5,398.6547);
   hmcerror__5->SetBinContent(6,309.3901);
   hmcerror__5->SetBinContent(7,254.9613);
   hmcerror__5->SetBinContent(8,180.8606);
   hmcerror__5->SetBinContent(9,135.6814);
   hmcerror__5->SetBinContent(10,93.43732);
   hmcerror__5->SetBinContent(11,66.86092);
   hmcerror__5->SetBinContent(12,53.40596);
   hmcerror__5->SetBinContent(13,34.98512);
   hmcerror__5->SetBinContent(14,28.92878);
   hmcerror__5->SetBinContent(15,24.58938);
   hmcerror__5->SetBinContent(16,22.46643);
   hmcerror__5->SetBinContent(17,19.01987);
   hmcerror__5->SetBinContent(18,20.01368);
   hmcerror__5->SetBinContent(19,14.89501);
   hmcerror__5->SetBinContent(20,16.36496);
   hmcerror__5->SetBinContent(21,10.30864);
   hmcerror__5->SetBinContent(22,10.81606);
   hmcerror__5->SetBinContent(23,9.223417);
   hmcerror__5->SetBinContent(24,6.766801);
   hmcerror__5->SetBinContent(25,8.523598);
   hmcerror__5->SetBinContent(26,176.2048);
   hmcerror__5->SetBinError(0,3.489769);
   hmcerror__5->SetBinError(1,18.23773);
   hmcerror__5->SetBinError(2,78.91353);
   hmcerror__5->SetBinError(3,127.9364);
   hmcerror__5->SetBinError(4,129.1385);
   hmcerror__5->SetBinError(5,104.9338);
   hmcerror__5->SetBinError(6,78.78269);
   hmcerror__5->SetBinError(7,67.39646);
   hmcerror__5->SetBinError(8,45.8587);
   hmcerror__5->SetBinError(9,32.09662);
   hmcerror__5->SetBinError(10,24.87502);
   hmcerror__5->SetBinError(11,15.97737);
   hmcerror__5->SetBinError(12,12.68157);
   hmcerror__5->SetBinError(13,9.539863);
   hmcerror__5->SetBinError(14,9.442042);
   hmcerror__5->SetBinError(15,7.331222);
   hmcerror__5->SetBinError(16,6.752458);
   hmcerror__5->SetBinError(17,7.641418);
   hmcerror__5->SetBinError(18,5.79443);
   hmcerror__5->SetBinError(19,6.46979);
   hmcerror__5->SetBinError(20,5.768891);
   hmcerror__5->SetBinError(21,4.614418);
   hmcerror__5->SetBinError(22,5.884439);
   hmcerror__5->SetBinError(23,3.686237);
   hmcerror__5->SetBinError(24,2.912164);
   hmcerror__5->SetBinError(25,3.98253);
   hmcerror__5->SetBinError(26,40.42143);
   hmcerror__5->SetEntries(3457.329);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
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
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
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
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(1.532853);
   Graph_Graph3005->SetMaximum(511.4081);
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
   
   TLegend *leg = new TLegend(0.3,0.6,0.9,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.1/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 78.7","F");

   ci = 1444;
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

   ci = 1445;
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

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 201.2","F");

   ci = 1447;
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

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1699.7","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 544.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 143.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 301.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 14.5","F");

   ci = 1453;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.21308,
   0.2069558,
   0.2240905,
   0.2534975,
   0.2632198,
   0.2546387,
   0.2643399,
   0.2535583,
   0.2365587,
   0.2662215,
   0.2389643,
   0.2374562,
   0.2726835,
   0.3263893,
   0.2981458,
   0.3005577,
   0.4017596,
   0.2895235,
   0.4343596,
   0.3525148,
   0.4476264,
   0.5440465,
   0.3996606,
   0.4303605,
   0.4672358};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.21308,
   0.2069558,
   0.2240905,
   0.2534975,
   0.2632198,
   0.2546387,
   0.2643399,
   0.2535583,
   0.2365587,
   0.2662215,
   0.2389643,
   0.2374562,
   0.2726835,
   0.3263893,
   0.2981458,
   0.3005577,
   0.4017596,
   0.2895235,
   0.4343596,
   0.3525148,
   0.4476264,
   0.5440465,
   0.3996606,
   0.4303605,
   0.4672358};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.1908187,
   0.1894618,
   0.2107589,
   0.2410848,
   0.2538343,
   0.243842,
   0.2395196,
   0.2348636,
   0.2257986,
   0.2300602,
   0.1966199,
   0.2046245,
   0.2091636,
   0.2257783,
   0.2375395,
   0.2176855,
   0.2205047,
   0.2076692,
   0.2180668,
   0.220839,
   0.2472975,
   0.4235102,
   0.2840081,
   0.2840225,
   0.308059};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.1908187,
   0.1894618,
   0.2107589,
   0.2410848,
   0.2538343,
   0.243842,
   0.2395196,
   0.2348636,
   0.2257986,
   0.2300602,
   0.1966199,
   0.2046245,
   0.2091636,
   0.2257783,
   0.2375395,
   0.2176855,
   0.2205047,
   0.2076692,
   0.2180668,
   0.220839,
   0.2472975,
   0.4235102,
   0.2840081,
   0.2840225,
   0.308059};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0.7010083,
   0.7762789,
   0.7777003,
   0.8283812,
   0.8001913,
   0.7757198,
   0.6000911,
   0.5750286,
   0.7443908,
   0.7491653,
   0.9123416,
   0.5991841,
   1.257678,
   0.6567854,
   1.016699,
   0.8457064,
   1.051532,
   0.6995217,
   0.7385025,
   0.5499554,
   0.5820362,
   0.5547307,
   0.4336787,
   1.034462,
   0.7039281};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.09199916,
   0.0451203,
   0.03690802,
   0.04032497,
   0.04480211,
   0.0500725,
   0.04851449,
   0.05638619,
   0.07406966,
   0.09088981,
   0.1187285,
   0.108559,
   0.193428,
   0.1560764,
   0.2093343,
   0.200971,
   0.2432508,
   0.1953764,
   0.2348102,
   0.195145,
   0.2599034,
   0.2477104,
   0.2490216,
   0.4225837,
   0.3143332};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.08962742,
   0.0451203,
   0.03690802,
   0.04032497,
   0.04480211,
   0.0500725,
   0.04851449,
   0.05638619,
   0.07406966,
   0.08872472,
   0.1156939,
   0.1046775,
   0.1875741,
   0.1486789,
   0.200794,
   0.1914457,
   0.2320362,
   0.1843639,
   0.2195366,
   0.1807642,
   0.2346168,
   0.2236101,
   0.2148726,
   0.385785,
   0.2837511};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.05859769);
   Graph_Graph3008->SetMaximum(1.571311);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

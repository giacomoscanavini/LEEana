#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Oct 23 14:05:11 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-61.53846,-14.46,451.2821,1598.972);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hmc__1->SetBinContent(1,169.4059);
   hmc__1->SetBinContent(2,224.4995);
   hmc__1->SetBinContent(3,252.1014);
   hmc__1->SetBinContent(4,260.6935);
   hmc__1->SetBinContent(5,277.5558);
   hmc__1->SetBinContent(6,330.7575);
   hmc__1->SetBinContent(7,358.9189);
   hmc__1->SetBinContent(8,351.6425);
   hmc__1->SetBinContent(9,427.8293);
   hmc__1->SetBinContent(10,554.311);
   hmc__1->SetBinContent(11,618.1688);
   hmc__1->SetBinContent(12,687.8038);
   hmc__1->SetBinContent(13,602.7115);
   hmc__1->SetBinContent(14,366.9875);
   hmc__1->SetBinContent(15,214.4121);
   hmc__1->SetBinContent(16,145.0662);
   hmc__1->SetBinContent(17,106.4135);
   hmc__1->SetBinContent(18,85.58823);
   hmc__1->SetBinContent(19,65.81446);
   hmc__1->SetBinContent(20,66.77947);
   hmc__1->SetBinContent(21,63.31008);
   hmc__1->SetBinContent(22,52.35896);
   hmc__1->SetBinContent(23,41.08078);
   hmc__1->SetBinContent(24,42.53824);
   hmc__1->SetBinContent(25,33.261);
   hmc__1->SetBinContent(26,31.52281);
   hmc__1->SetBinContent(27,35.57535);
   hmc__1->SetBinContent(28,23.55123);
   hmc__1->SetBinContent(29,27.24577);
   hmc__1->SetBinContent(30,26.12697);
   hmc__1->SetBinContent(31,21.85396);
   hmc__1->SetBinContent(32,19.30677);
   hmc__1->SetBinContent(33,16.45457);
   hmc__1->SetBinContent(34,14.41194);
   hmc__1->SetBinContent(35,163.0442);
   hmc__1->SetBinError(1,46.84704);
   hmc__1->SetBinError(2,52.83226);
   hmc__1->SetBinError(3,55.53629);
   hmc__1->SetBinError(4,58.2577);
   hmc__1->SetBinError(5,68.63545);
   hmc__1->SetBinError(6,72.34162);
   hmc__1->SetBinError(7,106.1454);
   hmc__1->SetBinError(8,100.12);
   hmc__1->SetBinError(9,121.5737);
   hmc__1->SetBinError(10,167.7939);
   hmc__1->SetBinError(11,191.9892);
   hmc__1->SetBinError(12,205.0925);
   hmc__1->SetBinError(13,184.0126);
   hmc__1->SetBinError(14,131.2629);
   hmc__1->SetBinError(15,74.40696);
   hmc__1->SetBinError(16,39.25838);
   hmc__1->SetBinError(17,34.55211);
   hmc__1->SetBinError(18,28.40215);
   hmc__1->SetBinError(19,29.3381);
   hmc__1->SetBinError(20,28.24205);
   hmc__1->SetBinError(21,25.75404);
   hmc__1->SetBinError(22,21.45472);
   hmc__1->SetBinError(23,19.51956);
   hmc__1->SetBinError(24,18.41876);
   hmc__1->SetBinError(25,18.79087);
   hmc__1->SetBinError(26,18.72983);
   hmc__1->SetBinError(27,17.60676);
   hmc__1->SetBinError(28,13.28987);
   hmc__1->SetBinError(29,17.13146);
   hmc__1->SetBinError(30,15.92917);
   hmc__1->SetBinError(31,12.51942);
   hmc__1->SetBinError(32,13.22112);
   hmc__1->SetBinError(33,10.43131);
   hmc__1->SetBinError(34,10.202);
   hmc__1->SetBinError(35,61.3304);
   hmc__1->SetMinimum(-14.46);
   hmc__1->SetMaximum(1518.3);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",34,0,400);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(722.194);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,6.796199);
   hbadmatch_stack_1->SetBinContent(2,10.05621);
   hbadmatch_stack_1->SetBinContent(3,9.963881);
   hbadmatch_stack_1->SetBinContent(4,6.1122);
   hbadmatch_stack_1->SetBinContent(5,7.855472);
   hbadmatch_stack_1->SetBinContent(6,12.43714);
   hbadmatch_stack_1->SetBinContent(7,14.77986);
   hbadmatch_stack_1->SetBinContent(8,9.041007);
   hbadmatch_stack_1->SetBinContent(9,10.28872);
   hbadmatch_stack_1->SetBinContent(10,12.51655);
   hbadmatch_stack_1->SetBinContent(11,11.72656);
   hbadmatch_stack_1->SetBinContent(12,14.65206);
   hbadmatch_stack_1->SetBinContent(13,8.58675);
   hbadmatch_stack_1->SetBinContent(14,9.30118);
   hbadmatch_stack_1->SetBinContent(15,6.961816);
   hbadmatch_stack_1->SetBinContent(16,4.239022);
   hbadmatch_stack_1->SetBinContent(17,1.640784);
   hbadmatch_stack_1->SetBinContent(18,1.665175);
   hbadmatch_stack_1->SetBinContent(19,1.047951);
   hbadmatch_stack_1->SetBinContent(20,1.51798);
   hbadmatch_stack_1->SetBinContent(21,1.826667);
   hbadmatch_stack_1->SetBinContent(22,0.7850344);
   hbadmatch_stack_1->SetBinContent(23,2.019978);
   hbadmatch_stack_1->SetBinContent(24,1.200847);
   hbadmatch_stack_1->SetBinContent(25,1.348539);
   hbadmatch_stack_1->SetBinContent(26,0.6772804);
   hbadmatch_stack_1->SetBinContent(27,0.5202642);
   hbadmatch_stack_1->SetBinContent(28,0.6571898);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.3807468);
   hbadmatch_stack_1->SetBinContent(34,0.6059504);
   hbadmatch_stack_1->SetBinContent(35,1.354911);
   hbadmatch_stack_1->SetBinError(1,1.474071);
   hbadmatch_stack_1->SetBinError(2,1.884341);
   hbadmatch_stack_1->SetBinError(3,1.637598);
   hbadmatch_stack_1->SetBinError(4,1.258123);
   hbadmatch_stack_1->SetBinError(5,1.51282);
   hbadmatch_stack_1->SetBinError(6,1.961289);
   hbadmatch_stack_1->SetBinError(7,2.010623);
   hbadmatch_stack_1->SetBinError(8,1.77874);
   hbadmatch_stack_1->SetBinError(9,1.674014);
   hbadmatch_stack_1->SetBinError(10,1.853729);
   hbadmatch_stack_1->SetBinError(11,1.758016);
   hbadmatch_stack_1->SetBinError(12,2.581203);
   hbadmatch_stack_1->SetBinError(13,1.887182);
   hbadmatch_stack_1->SetBinError(14,2.124724);
   hbadmatch_stack_1->SetBinError(15,2.256738);
   hbadmatch_stack_1->SetBinError(16,1.224637);
   hbadmatch_stack_1->SetBinError(17,0.6015633);
   hbadmatch_stack_1->SetBinError(18,0.6508634);
   hbadmatch_stack_1->SetBinError(19,0.4703416);
   hbadmatch_stack_1->SetBinError(20,0.659368);
   hbadmatch_stack_1->SetBinError(21,0.6329449);
   hbadmatch_stack_1->SetBinError(22,0.4803616);
   hbadmatch_stack_1->SetBinError(23,0.8783687);
   hbadmatch_stack_1->SetBinError(24,0.5698685);
   hbadmatch_stack_1->SetBinError(25,0.7275962);
   hbadmatch_stack_1->SetBinError(26,0.3978251);
   hbadmatch_stack_1->SetBinError(27,0.3053687);
   hbadmatch_stack_1->SetBinError(28,0.482642);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.269309);
   hbadmatch_stack_1->SetBinError(34,0.3681448);
   hbadmatch_stack_1->SetBinError(35,0.6933811);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,25.9511);
   hext_stack_2->SetBinContent(2,40.59855);
   hext_stack_2->SetBinContent(3,48.08173);
   hext_stack_2->SetBinContent(4,48.35701);
   hext_stack_2->SetBinContent(5,42.33146);
   hext_stack_2->SetBinContent(6,58.37345);
   hext_stack_2->SetBinContent(7,52.0826);
   hext_stack_2->SetBinContent(8,52.81517);
   hext_stack_2->SetBinContent(9,43.82098);
   hext_stack_2->SetBinContent(10,67.21879);
   hext_stack_2->SetBinContent(11,46.27494);
   hext_stack_2->SetBinContent(12,55.62502);
   hext_stack_2->SetBinContent(13,62.14093);
   hext_stack_2->SetBinContent(14,20.51256);
   hext_stack_2->SetBinContent(15,16.33287);
   hext_stack_2->SetBinContent(16,12.24099);
   hext_stack_2->SetBinContent(17,8.564468);
   hext_stack_2->SetBinContent(18,5.911401);
   hext_stack_2->SetBinContent(19,3.725593);
   hext_stack_2->SetBinContent(20,3.819384);
   hext_stack_2->SetBinContent(21,7.109657);
   hext_stack_2->SetBinContent(22,6.303639);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,3.864046);
   hext_stack_2->SetBinContent(25,2.110787);
   hext_stack_2->SetBinContent(26,2.185808);
   hext_stack_2->SetBinContent(27,2.345802);
   hext_stack_2->SetBinContent(28,0.7309963);
   hext_stack_2->SetBinContent(29,1.461993);
   hext_stack_2->SetBinContent(30,1.048213);
   hext_stack_2->SetBinContent(31,1.055394);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,1.137595);
   hext_stack_2->SetBinContent(35,7.930035);
   hext_stack_2->SetBinError(1,3.440362);
   hext_stack_2->SetBinError(2,4.310521);
   hext_stack_2->SetBinError(3,4.655811);
   hext_stack_2->SetBinError(4,4.73101);
   hext_stack_2->SetBinError(5,4.285096);
   hext_stack_2->SetBinError(6,5.396778);
   hext_stack_2->SetBinError(7,4.884813);
   hext_stack_2->SetBinError(8,5.092526);
   hext_stack_2->SetBinError(9,4.498503);
   hext_stack_2->SetBinError(10,5.671131);
   hext_stack_2->SetBinError(11,4.563559);
   hext_stack_2->SetBinError(12,5.04851);
   hext_stack_2->SetBinError(13,5.615615);
   hext_stack_2->SetBinError(14,2.858361);
   hext_stack_2->SetBinError(15,2.756454);
   hext_stack_2->SetBinError(16,2.254525);
   hext_stack_2->SetBinError(17,2.081756);
   hext_stack_2->SetBinError(18,1.57855);
   hext_stack_2->SetBinError(19,1.216121);
   hext_stack_2->SetBinError(20,1.213655);
   hext_stack_2->SetBinError(21,1.895097);
   hext_stack_2->SetBinError(22,1.749156);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,1.437918);
   hext_stack_2->SetBinError(25,0.8669371);
   hext_stack_2->SetBinError(26,1.006415);
   hext_stack_2->SetBinError(27,0.9989624);
   hext_stack_2->SetBinError(28,0.5201503);
   hext_stack_2->SetBinError(29,0.7356036);
   hext_stack_2->SetBinError(30,0.7595995);
   hext_stack_2->SetBinError(31,0.6130171);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.6602113);
   hext_stack_2->SetBinError(35,1.928947);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.267365);
   hdirt_stack_3->SetBinContent(2,3.798508);
   hdirt_stack_3->SetBinContent(3,4.336081);
   hdirt_stack_3->SetBinContent(4,4.302116);
   hdirt_stack_3->SetBinContent(5,5.22876);
   hdirt_stack_3->SetBinContent(6,5.686452);
   hdirt_stack_3->SetBinContent(7,6.002842);
   hdirt_stack_3->SetBinContent(8,5.225349);
   hdirt_stack_3->SetBinContent(9,3.460461);
   hdirt_stack_3->SetBinContent(10,6.929741);
   hdirt_stack_3->SetBinContent(11,5.579935);
   hdirt_stack_3->SetBinContent(12,4.595417);
   hdirt_stack_3->SetBinContent(13,5.30054);
   hdirt_stack_3->SetBinContent(14,1.728197);
   hdirt_stack_3->SetBinContent(15,2.467069);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.470507);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,1.256912);
   hdirt_stack_3->SetBinContent(21,0.7207426);
   hdirt_stack_3->SetBinContent(22,0.8575099);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(26,0.2761429);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.5570828);
   hdirt_stack_3->SetBinError(1,0.8104148);
   hdirt_stack_3->SetBinError(2,1.102208);
   hdirt_stack_3->SetBinError(3,1.091171);
   hdirt_stack_3->SetBinError(4,1.011775);
   hdirt_stack_3->SetBinError(5,1.189912);
   hdirt_stack_3->SetBinError(6,1.132186);
   hdirt_stack_3->SetBinError(7,1.339137);
   hdirt_stack_3->SetBinError(8,1.217384);
   hdirt_stack_3->SetBinError(9,0.8651323);
   hdirt_stack_3->SetBinError(10,1.853414);
   hdirt_stack_3->SetBinError(11,1.272281);
   hdirt_stack_3->SetBinError(12,1.154805);
   hdirt_stack_3->SetBinError(13,1.379656);
   hdirt_stack_3->SetBinError(14,0.6680267);
   hdirt_stack_3->SetBinError(15,0.8670347);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.333502);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.5768785);
   hdirt_stack_3->SetBinError(21,0.4348223);
   hdirt_stack_3->SetBinError(22,0.5106648);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(26,0.1952625);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(29,0.4028472);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,24.33977);
   houtFV_stack_4->SetBinContent(2,29.62);
   houtFV_stack_4->SetBinContent(3,37.48042);
   houtFV_stack_4->SetBinContent(4,35.70544);
   houtFV_stack_4->SetBinContent(5,31.43117);
   houtFV_stack_4->SetBinContent(6,39.53928);
   houtFV_stack_4->SetBinContent(7,46.49176);
   houtFV_stack_4->SetBinContent(8,36.04103);
   houtFV_stack_4->SetBinContent(9,46.21424);
   houtFV_stack_4->SetBinContent(10,51.13491);
   houtFV_stack_4->SetBinContent(11,46.31299);
   houtFV_stack_4->SetBinContent(12,55.95354);
   houtFV_stack_4->SetBinContent(13,52.4835);
   houtFV_stack_4->SetBinContent(14,35.19907);
   houtFV_stack_4->SetBinContent(15,18.30686);
   houtFV_stack_4->SetBinContent(16,11.42369);
   houtFV_stack_4->SetBinContent(17,10.5499);
   houtFV_stack_4->SetBinContent(18,8.869751);
   houtFV_stack_4->SetBinContent(19,7.508754);
   houtFV_stack_4->SetBinContent(20,6.881388);
   houtFV_stack_4->SetBinContent(21,4.558619);
   houtFV_stack_4->SetBinContent(22,6.285138);
   houtFV_stack_4->SetBinContent(23,3.997699);
   houtFV_stack_4->SetBinContent(24,3.321281);
   houtFV_stack_4->SetBinContent(25,2.880868);
   houtFV_stack_4->SetBinContent(26,2.722497);
   houtFV_stack_4->SetBinContent(27,3.714188);
   houtFV_stack_4->SetBinContent(28,2.526292);
   houtFV_stack_4->SetBinContent(29,2.288888);
   houtFV_stack_4->SetBinContent(30,1.602842);
   houtFV_stack_4->SetBinContent(31,1.469356);
   houtFV_stack_4->SetBinContent(32,0.7586675);
   houtFV_stack_4->SetBinContent(33,0.5867651);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,11.41472);
   houtFV_stack_4->SetBinError(1,2.52978);
   houtFV_stack_4->SetBinError(2,2.695972);
   houtFV_stack_4->SetBinError(3,3.152926);
   houtFV_stack_4->SetBinError(4,3.03296);
   houtFV_stack_4->SetBinError(5,2.905236);
   houtFV_stack_4->SetBinError(6,3.103639);
   houtFV_stack_4->SetBinError(7,3.49369);
   houtFV_stack_4->SetBinError(8,3.060438);
   houtFV_stack_4->SetBinError(9,3.388826);
   houtFV_stack_4->SetBinError(10,3.510203);
   houtFV_stack_4->SetBinError(11,3.367744);
   houtFV_stack_4->SetBinError(12,3.751632);
   houtFV_stack_4->SetBinError(13,3.848166);
   houtFV_stack_4->SetBinError(14,3.041824);
   houtFV_stack_4->SetBinError(15,2.081728);
   houtFV_stack_4->SetBinError(16,1.671332);
   houtFV_stack_4->SetBinError(17,1.626235);
   houtFV_stack_4->SetBinError(18,1.569992);
   houtFV_stack_4->SetBinError(19,1.288569);
   houtFV_stack_4->SetBinError(20,1.330554);
   houtFV_stack_4->SetBinError(21,1.035215);
   houtFV_stack_4->SetBinError(22,1.205979);
   houtFV_stack_4->SetBinError(23,1.009215);
   houtFV_stack_4->SetBinError(24,0.9144114);
   houtFV_stack_4->SetBinError(25,0.8205324);
   houtFV_stack_4->SetBinError(26,0.8056535);
   houtFV_stack_4->SetBinError(27,0.9931805);
   houtFV_stack_4->SetBinError(28,0.796629);
   houtFV_stack_4->SetBinError(29,0.7457727);
   houtFV_stack_4->SetBinError(30,0.5941836);
   houtFV_stack_4->SetBinError(31,0.5736323);
   houtFV_stack_4->SetBinError(32,0.3800009);
   houtFV_stack_4->SetBinError(33,0.3387718);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.758464);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.577634);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.290089);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.400647);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.972191);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.131624);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.350424);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.505172);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.550983);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.772193);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,10.32697);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,11.87743);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,12.5166);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,14.2282);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,9.025916);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.46377);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.73966);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.337192);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.951077);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.174882);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8103306);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.772949);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.9643785);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7907685);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2194621);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4671284);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4130363);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.7226299);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.521157);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.08628532);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.337646);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3089567);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.4127557);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.1426859);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5951371);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.853123);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4250359);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6994752);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5343839);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7100288);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.606006);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5986644);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6022073);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7573816);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9647735);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.123254);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.3125);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.359972);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.4193);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.087776);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9304332);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8254724);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3123463);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7764594);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4176951);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3778308);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6053965);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2637298);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2601552);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1161462);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1978592);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2722153);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3226765);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1963209);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.05306174);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2232269);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1610757);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.2853793);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.09180013);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3477713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.493247);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2348084);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5537993);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2898817);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4039111);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4990132);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9734883);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.110982);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5915287);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.331318);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.817937);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.082858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.491011);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.327293);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.63254);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5826535);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4559175);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1147719);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1827291);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.204266);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2490974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1620379);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.05330649);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1588909);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.09123123);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1813534);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1170764);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1680403);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1841247);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3792012);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2550565);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1658982);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2919199);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3807318);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3637603);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5050013);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.530161);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3962028);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1842767);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2034218);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05952234);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1243396);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1323506);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1332973);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.09051211);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.03080086);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1307963);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.02971407);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,36.39777);
   hNCpi0inFVres_stack_7->SetBinContent(2,50.58881);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.43402);
   hNCpi0inFVres_stack_7->SetBinContent(4,68.36536);
   hNCpi0inFVres_stack_7->SetBinContent(5,73.13622);
   hNCpi0inFVres_stack_7->SetBinContent(6,86.07469);
   hNCpi0inFVres_stack_7->SetBinContent(7,100.8671);
   hNCpi0inFVres_stack_7->SetBinContent(8,112.1219);
   hNCpi0inFVres_stack_7->SetBinContent(9,149.2563);
   hNCpi0inFVres_stack_7->SetBinContent(10,201.1282);
   hNCpi0inFVres_stack_7->SetBinContent(11,261.2836);
   hNCpi0inFVres_stack_7->SetBinContent(12,286.0491);
   hNCpi0inFVres_stack_7->SetBinContent(13,236.6236);
   hNCpi0inFVres_stack_7->SetBinContent(14,143.7224);
   hNCpi0inFVres_stack_7->SetBinContent(15,73.11538);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.81022);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.97857);
   hNCpi0inFVres_stack_7->SetBinContent(18,22.73645);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.36062);
   hNCpi0inFVres_stack_7->SetBinContent(20,15.12832);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.48548);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.25973);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.515387);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.879669);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.260212);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.310896);
   hNCpi0inFVres_stack_7->SetBinContent(27,6.467532);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.546177);
   hNCpi0inFVres_stack_7->SetBinContent(29,5.064855);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.15043);
   hNCpi0inFVres_stack_7->SetBinContent(31,4.106016);
   hNCpi0inFVres_stack_7->SetBinContent(32,2.487726);
   hNCpi0inFVres_stack_7->SetBinContent(33,4.543322);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.966943);
   hNCpi0inFVres_stack_7->SetBinContent(35,19.94187);
   hNCpi0inFVres_stack_7->SetBinError(1,1.956921);
   hNCpi0inFVres_stack_7->SetBinError(2,2.448685);
   hNCpi0inFVres_stack_7->SetBinError(3,2.406983);
   hNCpi0inFVres_stack_7->SetBinError(4,2.856693);
   hNCpi0inFVres_stack_7->SetBinError(5,2.808106);
   hNCpi0inFVres_stack_7->SetBinError(6,3.073331);
   hNCpi0inFVres_stack_7->SetBinError(7,3.39893);
   hNCpi0inFVres_stack_7->SetBinError(8,3.426924);
   hNCpi0inFVres_stack_7->SetBinError(9,3.905399);
   hNCpi0inFVres_stack_7->SetBinError(10,4.435914);
   hNCpi0inFVres_stack_7->SetBinError(11,5.111685);
   hNCpi0inFVres_stack_7->SetBinError(12,5.401831);
   hNCpi0inFVres_stack_7->SetBinError(13,4.950738);
   hNCpi0inFVres_stack_7->SetBinError(14,3.941508);
   hNCpi0inFVres_stack_7->SetBinError(15,2.920164);
   hNCpi0inFVres_stack_7->SetBinError(16,2.278551);
   hNCpi0inFVres_stack_7->SetBinError(17,1.879203);
   hNCpi0inFVres_stack_7->SetBinError(18,1.483701);
   hNCpi0inFVres_stack_7->SetBinError(19,1.42564);
   hNCpi0inFVres_stack_7->SetBinError(20,1.272342);
   hNCpi0inFVres_stack_7->SetBinError(21,1.228606);
   hNCpi0inFVres_stack_7->SetBinError(22,1.132693);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9526123);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8152411);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8254393);
   hNCpi0inFVres_stack_7->SetBinError(26,1.053513);
   hNCpi0inFVres_stack_7->SetBinError(27,0.8840171);
   hNCpi0inFVres_stack_7->SetBinError(28,0.773506);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7922119);
   hNCpi0inFVres_stack_7->SetBinError(30,0.756657);
   hNCpi0inFVres_stack_7->SetBinError(31,0.7605622);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5513979);
   hNCpi0inFVres_stack_7->SetBinError(33,0.9597724);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5818768);
   hNCpi0inFVres_stack_7->SetBinError(35,1.601716);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.176424);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.32077);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.83054);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.48147);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.66557);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.59406);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.13699);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.99792);
   hNCpi0inFVdis_stack_8->SetBinContent(9,28.9536);
   hNCpi0inFVdis_stack_8->SetBinContent(10,40.66922);
   hNCpi0inFVdis_stack_8->SetBinContent(11,52.96226);
   hNCpi0inFVdis_stack_8->SetBinContent(12,59.03772);
   hNCpi0inFVdis_stack_8->SetBinContent(13,48.05847);
   hNCpi0inFVdis_stack_8->SetBinContent(14,33.87107);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.18734);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.56007);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.545863);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.262534);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.819715);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.88043);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.831448);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.562531);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.898173);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.654517);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.091868);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.79215);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.591004);
   hNCpi0inFVdis_stack_8->SetBinContent(28,2.071709);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.472147);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.269773);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.574769);
   hNCpi0inFVdis_stack_8->SetBinContent(32,1.496507);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.9542524);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.325836);
   hNCpi0inFVdis_stack_8->SetBinContent(35,10.72958);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.059356);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.31134);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.142793);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.014724);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.431662);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.323204);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.736517);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.583527);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.900408);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.204563);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.448208);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.747366);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.210291);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.021667);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.329213);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.187714);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.027445);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8395802);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8793451);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8377848);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4995619);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4811926);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6286055);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5322289);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2516234);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3906055);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.6314182);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.587146);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.5941781);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6340807);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.4359889);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.492471);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.4176287);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3420044);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.41019);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05546193);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08620289);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3591912);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2195167);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06344445);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03202375);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03665104);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1861853);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1341477);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03235999);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,15.60869);
   hCCpi0inFV_stack_10->SetBinContent(2,22.854);
   hCCpi0inFV_stack_10->SetBinContent(3,27.74921);
   hCCpi0inFV_stack_10->SetBinContent(4,27.63639);
   hCCpi0inFV_stack_10->SetBinContent(5,33.65967);
   hCCpi0inFV_stack_10->SetBinContent(6,42.6824);
   hCCpi0inFV_stack_10->SetBinContent(7,48.4791);
   hCCpi0inFV_stack_10->SetBinContent(8,50.27882);
   hCCpi0inFV_stack_10->SetBinContent(9,71.41312);
   hCCpi0inFV_stack_10->SetBinContent(10,90.92175);
   hCCpi0inFV_stack_10->SetBinContent(11,103.6841);
   hCCpi0inFV_stack_10->SetBinContent(12,121.7461);
   hCCpi0inFV_stack_10->SetBinContent(13,106.3224);
   hCCpi0inFV_stack_10->SetBinContent(14,62.74997);
   hCCpi0inFV_stack_10->SetBinContent(15,39.12952);
   hCCpi0inFV_stack_10->SetBinContent(16,27.2354);
   hCCpi0inFV_stack_10->SetBinContent(17,22.54299);
   hCCpi0inFV_stack_10->SetBinContent(18,14.9965);
   hCCpi0inFV_stack_10->SetBinContent(19,12.3034);
   hCCpi0inFV_stack_10->SetBinContent(20,14.3177);
   hCCpi0inFV_stack_10->SetBinContent(21,11.79886);
   hCCpi0inFV_stack_10->SetBinContent(22,12.25265);
   hCCpi0inFV_stack_10->SetBinContent(23,8.536427);
   hCCpi0inFV_stack_10->SetBinContent(24,10.06471);
   hCCpi0inFV_stack_10->SetBinContent(25,7.666118);
   hCCpi0inFV_stack_10->SetBinContent(26,7.974725);
   hCCpi0inFV_stack_10->SetBinContent(27,8.326441);
   hCCpi0inFV_stack_10->SetBinContent(28,4.199474);
   hCCpi0inFV_stack_10->SetBinContent(29,7.047069);
   hCCpi0inFV_stack_10->SetBinContent(30,7.275866);
   hCCpi0inFV_stack_10->SetBinContent(31,4.666173);
   hCCpi0inFV_stack_10->SetBinContent(32,4.302989);
   hCCpi0inFV_stack_10->SetBinContent(33,3.367593);
   hCCpi0inFV_stack_10->SetBinContent(34,4.283262);
   hCCpi0inFV_stack_10->SetBinContent(35,36.94354);
   hCCpi0inFV_stack_10->SetBinError(1,2.02842);
   hCCpi0inFV_stack_10->SetBinError(2,2.423909);
   hCCpi0inFV_stack_10->SetBinError(3,2.700565);
   hCCpi0inFV_stack_10->SetBinError(4,2.62467);
   hCCpi0inFV_stack_10->SetBinError(5,2.859332);
   hCCpi0inFV_stack_10->SetBinError(6,3.246865);
   hCCpi0inFV_stack_10->SetBinError(7,3.499947);
   hCCpi0inFV_stack_10->SetBinError(8,3.615842);
   hCCpi0inFV_stack_10->SetBinError(9,4.215042);
   hCCpi0inFV_stack_10->SetBinError(10,4.785434);
   hCCpi0inFV_stack_10->SetBinError(11,5.129121);
   hCCpi0inFV_stack_10->SetBinError(12,5.547314);
   hCCpi0inFV_stack_10->SetBinError(13,5.122538);
   hCCpi0inFV_stack_10->SetBinError(14,3.970949);
   hCCpi0inFV_stack_10->SetBinError(15,3.147187);
   hCCpi0inFV_stack_10->SetBinError(16,2.609597);
   hCCpi0inFV_stack_10->SetBinError(17,2.368947);
   hCCpi0inFV_stack_10->SetBinError(18,1.929682);
   hCCpi0inFV_stack_10->SetBinError(19,1.823053);
   hCCpi0inFV_stack_10->SetBinError(20,1.845283);
   hCCpi0inFV_stack_10->SetBinError(21,1.648923);
   hCCpi0inFV_stack_10->SetBinError(22,1.798789);
   hCCpi0inFV_stack_10->SetBinError(23,1.519995);
   hCCpi0inFV_stack_10->SetBinError(24,1.607668);
   hCCpi0inFV_stack_10->SetBinError(25,1.429298);
   hCCpi0inFV_stack_10->SetBinError(26,1.438741);
   hCCpi0inFV_stack_10->SetBinError(27,1.487408);
   hCCpi0inFV_stack_10->SetBinError(28,0.9899749);
   hCCpi0inFV_stack_10->SetBinError(29,1.363725);
   hCCpi0inFV_stack_10->SetBinError(30,1.300669);
   hCCpi0inFV_stack_10->SetBinError(31,1.117838);
   hCCpi0inFV_stack_10->SetBinError(32,1.019817);
   hCCpi0inFV_stack_10->SetBinError(33,0.8979018);
   hCCpi0inFV_stack_10->SetBinError(34,1.045253);
   hCCpi0inFV_stack_10->SetBinError(35,3.034022);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,16.65864);
   hNCinFV_stack_11->SetBinContent(2,15.21628);
   hNCinFV_stack_11->SetBinContent(3,15.41561);
   hNCinFV_stack_11->SetBinContent(4,21.47281);
   hNCinFV_stack_11->SetBinContent(5,28.00512);
   hNCinFV_stack_11->SetBinContent(6,20.05014);
   hNCinFV_stack_11->SetBinContent(7,25.16265);
   hNCinFV_stack_11->SetBinContent(8,19.46032);
   hNCinFV_stack_11->SetBinContent(9,26.2989);
   hNCinFV_stack_11->SetBinContent(10,26.74748);
   hNCinFV_stack_11->SetBinContent(11,34.47173);
   hNCinFV_stack_11->SetBinContent(12,30.45029);
   hNCinFV_stack_11->SetBinContent(13,30.80516);
   hNCinFV_stack_11->SetBinContent(14,20.30131);
   hNCinFV_stack_11->SetBinContent(15,15.60783);
   hNCinFV_stack_11->SetBinContent(16,12.65385);
   hNCinFV_stack_11->SetBinContent(17,10.69997);
   hNCinFV_stack_11->SetBinContent(18,9.217845);
   hNCinFV_stack_11->SetBinContent(19,8.898399);
   hNCinFV_stack_11->SetBinContent(20,7.908808);
   hNCinFV_stack_11->SetBinContent(21,11.32478);
   hNCinFV_stack_11->SetBinContent(22,4.408495);
   hNCinFV_stack_11->SetBinContent(23,6.615994);
   hNCinFV_stack_11->SetBinContent(24,7.017964);
   hNCinFV_stack_11->SetBinContent(25,5.493538);
   hNCinFV_stack_11->SetBinContent(26,3.00651);
   hNCinFV_stack_11->SetBinContent(27,6.738238);
   hNCinFV_stack_11->SetBinContent(28,4.747782);
   hNCinFV_stack_11->SetBinContent(29,4.360561);
   hNCinFV_stack_11->SetBinContent(30,5.482104);
   hNCinFV_stack_11->SetBinContent(31,5.487054);
   hNCinFV_stack_11->SetBinContent(32,5.379642);
   hNCinFV_stack_11->SetBinContent(33,3.022843);
   hNCinFV_stack_11->SetBinContent(34,4.113116);
   hNCinFV_stack_11->SetBinContent(35,42.53916);
   hNCinFV_stack_11->SetBinError(1,2.102089);
   hNCinFV_stack_11->SetBinError(2,1.969156);
   hNCinFV_stack_11->SetBinError(3,1.952783);
   hNCinFV_stack_11->SetBinError(4,2.339326);
   hNCinFV_stack_11->SetBinError(5,2.763293);
   hNCinFV_stack_11->SetBinError(6,2.370779);
   hNCinFV_stack_11->SetBinError(7,2.665694);
   hNCinFV_stack_11->SetBinError(8,2.189903);
   hNCinFV_stack_11->SetBinError(9,2.550715);
   hNCinFV_stack_11->SetBinError(10,2.611902);
   hNCinFV_stack_11->SetBinError(11,3.215495);
   hNCinFV_stack_11->SetBinError(12,2.845876);
   hNCinFV_stack_11->SetBinError(13,3.072956);
   hNCinFV_stack_11->SetBinError(14,2.341591);
   hNCinFV_stack_11->SetBinError(15,2.045815);
   hNCinFV_stack_11->SetBinError(16,2.226732);
   hNCinFV_stack_11->SetBinError(17,1.786423);
   hNCinFV_stack_11->SetBinError(18,1.766513);
   hNCinFV_stack_11->SetBinError(19,1.782816);
   hNCinFV_stack_11->SetBinError(20,1.625132);
   hNCinFV_stack_11->SetBinError(21,2.06302);
   hNCinFV_stack_11->SetBinError(22,1.366945);
   hNCinFV_stack_11->SetBinError(23,1.352531);
   hNCinFV_stack_11->SetBinError(24,1.512973);
   hNCinFV_stack_11->SetBinError(25,1.415363);
   hNCinFV_stack_11->SetBinError(26,0.7564536);
   hNCinFV_stack_11->SetBinError(27,1.514989);
   hNCinFV_stack_11->SetBinError(28,1.370014);
   hNCinFV_stack_11->SetBinError(29,1.062314);
   hNCinFV_stack_11->SetBinError(30,1.382031);
   hNCinFV_stack_11->SetBinError(31,1.43483);
   hNCinFV_stack_11->SetBinError(32,1.58236);
   hNCinFV_stack_11->SetBinError(33,1.043624);
   hNCinFV_stack_11->SetBinError(34,1.468672);
   hNCinFV_stack_11->SetBinError(35,3.695473);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,28.60353);
   hnumuCCinFV_stack_12->SetBinContent(2,32.36045);
   hnumuCCinFV_stack_12->SetBinContent(3,37.55499);
   hnumuCCinFV_stack_12->SetBinContent(4,30.95097);
   hnumuCCinFV_stack_12->SetBinContent(5,34.25055);
   hnumuCCinFV_stack_12->SetBinContent(6,42.35792);
   hnumuCCinFV_stack_12->SetBinContent(7,37.52312);
   hnumuCCinFV_stack_12->SetBinContent(8,35.72292);
   hnumuCCinFV_stack_12->SetBinContent(9,36.0311);
   hnumuCCinFV_stack_12->SetBinContent(10,42.32865);
   hnumuCCinFV_stack_12->SetBinContent(11,38.70065);
   hnumuCCinFV_stack_12->SetBinContent(12,41.31019);
   hnumuCCinFV_stack_12->SetBinContent(13,34.21403);
   hnumuCCinFV_stack_12->SetBinContent(14,28.03065);
   hnumuCCinFV_stack_12->SetBinContent(15,19.75593);
   hnumuCCinFV_stack_12->SetBinContent(16,15.03969);
   hnumuCCinFV_stack_12->SetBinContent(17,11.00228);
   hnumuCCinFV_stack_12->SetBinContent(18,11.30766);
   hnumuCCinFV_stack_12->SetBinContent(19,7.237668);
   hnumuCCinFV_stack_12->SetBinContent(20,9.317583);
   hnumuCCinFV_stack_12->SetBinContent(21,6.972207);
   hnumuCCinFV_stack_12->SetBinContent(22,5.405402);
   hnumuCCinFV_stack_12->SetBinContent(23,4.434169);
   hnumuCCinFV_stack_12->SetBinContent(24,5.907725);
   hnumuCCinFV_stack_12->SetBinContent(25,5.603632);
   hnumuCCinFV_stack_12->SetBinContent(26,4.903468);
   hnumuCCinFV_stack_12->SetBinContent(27,3.707009);
   hnumuCCinFV_stack_12->SetBinContent(28,3.247018);
   hnumuCCinFV_stack_12->SetBinContent(29,3.181325);
   hnumuCCinFV_stack_12->SetBinContent(30,3.801206);
   hnumuCCinFV_stack_12->SetBinContent(31,2.78992);
   hnumuCCinFV_stack_12->SetBinContent(32,3.242934);
   hnumuCCinFV_stack_12->SetBinContent(33,2.03966);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,24.72837);
   hnumuCCinFV_stack_12->SetBinError(1,3.145846);
   hnumuCCinFV_stack_12->SetBinError(2,3.575708);
   hnumuCCinFV_stack_12->SetBinError(3,3.806045);
   hnumuCCinFV_stack_12->SetBinError(4,3.112843);
   hnumuCCinFV_stack_12->SetBinError(5,3.734429);
   hnumuCCinFV_stack_12->SetBinError(6,3.717096);
   hnumuCCinFV_stack_12->SetBinError(7,3.665068);
   hnumuCCinFV_stack_12->SetBinError(8,3.514982);
   hnumuCCinFV_stack_12->SetBinError(9,3.338625);
   hnumuCCinFV_stack_12->SetBinError(10,3.593539);
   hnumuCCinFV_stack_12->SetBinError(11,3.511957);
   hnumuCCinFV_stack_12->SetBinError(12,3.586573);
   hnumuCCinFV_stack_12->SetBinError(13,4.010224);
   hnumuCCinFV_stack_12->SetBinError(14,3.294305);
   hnumuCCinFV_stack_12->SetBinError(15,2.486112);
   hnumuCCinFV_stack_12->SetBinError(16,2.037423);
   hnumuCCinFV_stack_12->SetBinError(17,1.662972);
   hnumuCCinFV_stack_12->SetBinError(18,1.724196);
   hnumuCCinFV_stack_12->SetBinError(19,1.369403);
   hnumuCCinFV_stack_12->SetBinError(20,1.663991);
   hnumuCCinFV_stack_12->SetBinError(21,1.488018);
   hnumuCCinFV_stack_12->SetBinError(22,1.203355);
   hnumuCCinFV_stack_12->SetBinError(23,2.324301);
   hnumuCCinFV_stack_12->SetBinError(24,1.291307);
   hnumuCCinFV_stack_12->SetBinError(25,1.751263);
   hnumuCCinFV_stack_12->SetBinError(26,1.163885);
   hnumuCCinFV_stack_12->SetBinError(27,0.9912418);
   hnumuCCinFV_stack_12->SetBinError(28,0.8521373);
   hnumuCCinFV_stack_12->SetBinError(29,0.9218513);
   hnumuCCinFV_stack_12->SetBinError(30,0.9896486);
   hnumuCCinFV_stack_12->SetBinError(31,0.7875126);
   hnumuCCinFV_stack_12->SetBinError(32,0.8137486);
   hnumuCCinFV_stack_12->SetBinError(33,0.7457582);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,2.460173);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.794014);
   hnueCCinFV_stack_13->SetBinContent(2,3.199848);
   hnueCCinFV_stack_13->SetBinContent(3,4.545602);
   hnueCCinFV_stack_13->SetBinContent(4,1.89313);
   hnueCCinFV_stack_13->SetBinContent(5,2.232214);
   hnueCCinFV_stack_13->SetBinContent(6,2.61253);
   hnueCCinFV_stack_13->SetBinContent(7,1.742853);
   hnueCCinFV_stack_13->SetBinContent(8,2.76104);
   hnueCCinFV_stack_13->SetBinContent(9,2.932905);
   hnueCCinFV_stack_13->SetBinContent(10,2.484546);
   hnueCCinFV_stack_13->SetBinContent(11,2.852655);
   hnueCCinFV_stack_13->SetBinContent(12,3.157245);
   hnueCCinFV_stack_13->SetBinContent(13,1.557048);
   hnueCCinFV_stack_13->SetBinContent(14,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(15,1.485325);
   hnueCCinFV_stack_13->SetBinContent(16,1.529637);
   hnueCCinFV_stack_13->SetBinContent(17,1.387673);
   hnueCCinFV_stack_13->SetBinContent(18,2.016609);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.691541);
   hnueCCinFV_stack_13->SetBinContent(21,0.872205);
   hnueCCinFV_stack_13->SetBinContent(22,1.112413);
   hnueCCinFV_stack_13->SetBinContent(23,0.7104458);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934356);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.270652);
   hnueCCinFV_stack_13->SetBinContent(33,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(35,5.567414);
   hnueCCinFV_stack_13->SetBinError(1,0.9512095);
   hnueCCinFV_stack_13->SetBinError(2,1.650936);
   hnueCCinFV_stack_13->SetBinError(3,1.375107);
   hnueCCinFV_stack_13->SetBinError(4,0.932585);
   hnueCCinFV_stack_13->SetBinError(5,0.7191266);
   hnueCCinFV_stack_13->SetBinError(6,0.8685706);
   hnueCCinFV_stack_13->SetBinError(7,0.6766735);
   hnueCCinFV_stack_13->SetBinError(8,1.422375);
   hnueCCinFV_stack_13->SetBinError(9,1.37432);
   hnueCCinFV_stack_13->SetBinError(10,0.9190514);
   hnueCCinFV_stack_13->SetBinError(11,0.91177);
   hnueCCinFV_stack_13->SetBinError(12,1.04558);
   hnueCCinFV_stack_13->SetBinError(13,0.8477177);
   hnueCCinFV_stack_13->SetBinError(14,0.5197486);
   hnueCCinFV_stack_13->SetBinError(15,0.6411431);
   hnueCCinFV_stack_13->SetBinError(16,0.7496138);
   hnueCCinFV_stack_13->SetBinError(17,0.5817545);
   hnueCCinFV_stack_13->SetBinError(18,1.601629);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.4081814);
   hnueCCinFV_stack_13->SetBinError(21,0.5074865);
   hnueCCinFV_stack_13->SetBinError(22,0.6463727);
   hnueCCinFV_stack_13->SetBinError(23,0.5078539);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.270652);
   hnueCCinFV_stack_13->SetBinError(33,0.2463303);
   hnueCCinFV_stack_13->SetBinError(35,1.466769);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__2->SetBinContent(1,169.4059);
   hmcerror__2->SetBinContent(2,224.4995);
   hmcerror__2->SetBinContent(3,252.1014);
   hmcerror__2->SetBinContent(4,260.6935);
   hmcerror__2->SetBinContent(5,277.5558);
   hmcerror__2->SetBinContent(6,330.7575);
   hmcerror__2->SetBinContent(7,358.9189);
   hmcerror__2->SetBinContent(8,351.6425);
   hmcerror__2->SetBinContent(9,427.8293);
   hmcerror__2->SetBinContent(10,554.311);
   hmcerror__2->SetBinContent(11,618.1688);
   hmcerror__2->SetBinContent(12,687.8038);
   hmcerror__2->SetBinContent(13,602.7115);
   hmcerror__2->SetBinContent(14,366.9875);
   hmcerror__2->SetBinContent(15,214.4121);
   hmcerror__2->SetBinContent(16,145.0662);
   hmcerror__2->SetBinContent(17,106.4135);
   hmcerror__2->SetBinContent(18,85.58823);
   hmcerror__2->SetBinContent(19,65.81446);
   hmcerror__2->SetBinContent(20,66.77947);
   hmcerror__2->SetBinContent(21,63.31008);
   hmcerror__2->SetBinContent(22,52.35896);
   hmcerror__2->SetBinContent(23,41.08078);
   hmcerror__2->SetBinContent(24,42.53824);
   hmcerror__2->SetBinContent(25,33.261);
   hmcerror__2->SetBinContent(26,31.52281);
   hmcerror__2->SetBinContent(27,35.57535);
   hmcerror__2->SetBinContent(28,23.55123);
   hmcerror__2->SetBinContent(29,27.24577);
   hmcerror__2->SetBinContent(30,26.12697);
   hmcerror__2->SetBinContent(31,21.85396);
   hmcerror__2->SetBinContent(32,19.30677);
   hmcerror__2->SetBinContent(33,16.45457);
   hmcerror__2->SetBinContent(34,14.41194);
   hmcerror__2->SetBinContent(35,163.0442);
   hmcerror__2->SetBinError(1,46.84704);
   hmcerror__2->SetBinError(2,52.83226);
   hmcerror__2->SetBinError(3,55.53629);
   hmcerror__2->SetBinError(4,58.2577);
   hmcerror__2->SetBinError(5,68.63545);
   hmcerror__2->SetBinError(6,72.34162);
   hmcerror__2->SetBinError(7,106.1454);
   hmcerror__2->SetBinError(8,100.12);
   hmcerror__2->SetBinError(9,121.5737);
   hmcerror__2->SetBinError(10,167.7939);
   hmcerror__2->SetBinError(11,191.9892);
   hmcerror__2->SetBinError(12,205.0925);
   hmcerror__2->SetBinError(13,184.0126);
   hmcerror__2->SetBinError(14,131.2629);
   hmcerror__2->SetBinError(15,74.40696);
   hmcerror__2->SetBinError(16,39.25838);
   hmcerror__2->SetBinError(17,34.55211);
   hmcerror__2->SetBinError(18,28.40215);
   hmcerror__2->SetBinError(19,29.3381);
   hmcerror__2->SetBinError(20,28.24205);
   hmcerror__2->SetBinError(21,25.75404);
   hmcerror__2->SetBinError(22,21.45472);
   hmcerror__2->SetBinError(23,19.51956);
   hmcerror__2->SetBinError(24,18.41876);
   hmcerror__2->SetBinError(25,18.79087);
   hmcerror__2->SetBinError(26,18.72983);
   hmcerror__2->SetBinError(27,17.60676);
   hmcerror__2->SetBinError(28,13.28987);
   hmcerror__2->SetBinError(29,17.13146);
   hmcerror__2->SetBinError(30,15.92917);
   hmcerror__2->SetBinError(31,12.51942);
   hmcerror__2->SetBinError(32,13.22112);
   hmcerror__2->SetBinError(33,10.43131);
   hmcerror__2->SetBinError(34,10.202);
   hmcerror__2->SetBinError(35,61.3304);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3001[34] = {
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
   Double_t _fy3001[34] = {
   175,
   206,
   228,
   249,
   275,
   311,
   345,
   354,
   438,
   557,
   614,
   723,
   586,
   275,
   211,
   109,
   97,
   89,
   64,
   47,
   48,
   63,
   46,
   33,
   25,
   30,
   18,
   28,
   16,
   16,
   20,
   17,
   12,
   8};
   Double_t _felx3001[34] = {
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
   Double_t _fely3001[34] = {
   13.22876,
   14.3527,
   15.09967,
   15.77973,
   16.58312,
   17.63519,
   18.57418,
   18.81489,
   20.92845,
   23.60085,
   24.77902,
   26.88866,
   24.20744,
   16.58312,
   14.52584,
   10.44031,
   9.9704,
   9.5566,
   8.1273,
   6.9882,
   7.0604,
   8.0648,
   6.9153,
   5.8847,
   5.1474,
   5.6197,
   4.4008,
   5.4358,
   4.1628,
   4.1628,
   4.6266,
   4.2835,
   3.64022,
   3.0307};
   Double_t _fehx3001[34] = {
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
   Double_t _fehy3001[34] = {
   13.22876,
   14.3527,
   15.09967,
   15.77973,
   16.58312,
   17.63519,
   18.57418,
   18.81489,
   20.92845,
   23.60085,
   24.77902,
   26.88866,
   24.20744,
   16.58312,
   14.52584,
   10.44031,
   9.769,
   9.3552,
   7.9246,
   6.7839,
   6.8561,
   7.862,
   6.7108,
   5.6776,
   4.9374,
   5.4117,
   4.1858,
   5.2271,
   3.9454,
   3.9454,
   4.4133,
   4.0673,
   3.4155,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(4.47237);
   Graph_Graph3001->SetMaximum(824.3806);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.0/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6333.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 172.1","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 746.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 668.4","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  113.8","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.8","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2152.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  462.6","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1058.1","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 472.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 629.0","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 47.6","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[34] = {
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
   Double_t _fy3002[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[34] = {
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
   Double_t _fely3002[34] = {
   0.2765372,
   0.2353335,
   0.2202934,
   0.223472,
   0.2472852,
   0.218715,
   0.2957364,
   0.2847209,
   0.2841641,
   0.3027072,
   0.3105772,
   0.2981846,
   0.305308,
   0.3576767,
   0.3470279,
   0.2706238,
   0.3246967,
   0.3318464,
   0.4457698,
   0.4229151,
   0.4067921,
   0.4097622,
   0.4751507,
   0.4329931,
   0.5649519,
   0.5941674,
   0.4949147,
   0.5642961,
   0.6287748,
   0.6096831,
   0.5728673,
   0.684792,
   0.6339462,
   0.7078851};
   Double_t _fehx3002[34] = {
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
   Double_t _fehy3002[34] = {
   0.2765372,
   0.2353335,
   0.2202934,
   0.223472,
   0.2472852,
   0.218715,
   0.2957364,
   0.2847209,
   0.2841641,
   0.3027072,
   0.3105772,
   0.2981846,
   0.305308,
   0.3576767,
   0.3470279,
   0.2706238,
   0.3246967,
   0.3318464,
   0.4457698,
   0.4229151,
   0.4067921,
   0.4097622,
   0.4751507,
   0.4329931,
   0.5649519,
   0.5941674,
   0.4949147,
   0.5642961,
   0.6287748,
   0.6096831,
   0.5728673,
   0.684792,
   0.6339462,
   0.7078851};
   grae = new TGraphAsymmErrors(34,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[34] = {
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
   Double_t _fy3003[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[34] = {
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
   Double_t _fely3003[34] = {
   0.1992728,
   0.1838255,
   0.1792681,
   0.1952086,
   0.2082418,
   0.1988061,
   0.2171486,
   0.247202,
   0.2677984,
   0.2773916,
   0.3005133,
   0.2903391,
   0.2692948,
   0.2540859,
   0.2332786,
   0.2293217,
   0.247786,
   0.2484493,
   0.2365388,
   0.2295378,
   0.2114668,
   0.2192582,
   0.2755865,
   0.2364682,
   0.2377416,
   0.2430976,
   0.2256511,
   0.2447143,
   0.2581662,
   0.2442913,
   0.266996,
   0.2452613,
   0.2715938,
   0.2745336};
   Double_t _fehx3003[34] = {
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
   Double_t _fehy3003[34] = {
   0.1992728,
   0.1838255,
   0.1792681,
   0.1952086,
   0.2082418,
   0.1988061,
   0.2171486,
   0.247202,
   0.2677984,
   0.2773916,
   0.3005133,
   0.2903391,
   0.2692948,
   0.2540859,
   0.2332786,
   0.2293217,
   0.247786,
   0.2484493,
   0.2365388,
   0.2295378,
   0.2114668,
   0.2192582,
   0.2755865,
   0.2364682,
   0.2377416,
   0.2430976,
   0.2256511,
   0.2447143,
   0.2581662,
   0.2442913,
   0.266996,
   0.2452613,
   0.2715938,
   0.2745336};
   grae = new TGraphAsymmErrors(34,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
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
   
   Double_t _fx3004[34] = {
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
   Double_t _fy3004[34] = {
   1.033022,
   0.9175965,
   0.904398,
   0.9551447,
   0.9907916,
   0.940266,
   0.9612198,
   1.006704,
   1.023773,
   1.004851,
   0.9932562,
   1.051172,
   0.9722728,
   0.7493444,
   0.9840864,
   0.751381,
   0.9115386,
   1.039863,
   0.9724307,
   0.7038091,
   0.7581731,
   1.203233,
   1.119745,
   0.7757726,
   0.751631,
   0.9516917,
   0.5059683,
   1.188898,
   0.5872471,
   0.612394,
   0.9151659,
   0.88052,
   0.7292807,
   0.5550953};
   Double_t _felx3004[34] = {
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
   Double_t _fely3004[34] = {
   0.07808909,
   0.06393198,
   0.05989522,
   0.06052984,
   0.05974698,
   0.05331759,
   0.05175033,
   0.05350573,
   0.04891776,
   0.04257691,
   0.04008456,
   0.0390935,
   0.04016422,
   0.04518717,
   0.0677473,
   0.07196924,
   0.09369489,
   0.1116579,
   0.1234881,
   0.1046459,
   0.1115209,
   0.154029,
   0.1683342,
   0.1383391,
   0.1547578,
   0.1782741,
   0.1237036,
   0.2308075,
   0.152787,
   0.1593296,
   0.2117053,
   0.2218652,
   0.2212285,
   0.2102909};
   Double_t _fehx3004[34] = {
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
   Double_t _fehy3004[34] = {
   0.07808909,
   0.06393198,
   0.05989522,
   0.06052984,
   0.05974698,
   0.05331759,
   0.05175033,
   0.05350573,
   0.04891776,
   0.04257691,
   0.04008456,
   0.0390935,
   0.04016422,
   0.04518717,
   0.0677473,
   0.07196924,
   0.09180228,
   0.1093047,
   0.1204082,
   0.1015866,
   0.108294,
   0.1501558,
   0.1633562,
   0.1334705,
   0.1484441,
   0.1716757,
   0.1176601,
   0.221946,
   0.1448078,
   0.1510087,
   0.2019451,
   0.210667,
   0.2075715,
   0.1935617};
   grae = new TGraphAsymmErrors(34,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0.2382004);
   Graph_Graph3004->SetMaximum(1.517448);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_mass_all",34,0,400);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Oct 21 20:21:51 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-230.7692,-16.26,1692.308,1798.014);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__4->SetBinContent(1,220.6297);
   hmc__4->SetBinContent(2,575.6807);
   hmc__4->SetBinContent(3,769.1002);
   hmc__4->SetBinContent(4,720.0504);
   hmc__4->SetBinContent(5,580.2463);
   hmc__4->SetBinContent(6,446.9903);
   hmc__4->SetBinContent(7,369.5706);
   hmc__4->SetBinContent(8,262.2224);
   hmc__4->SetBinContent(9,205.315);
   hmc__4->SetBinContent(10,162.7062);
   hmc__4->SetBinContent(11,115.352);
   hmc__4->SetBinContent(12,88.90016);
   hmc__4->SetBinContent(13,62.95947);
   hmc__4->SetBinContent(14,61.29398);
   hmc__4->SetBinContent(15,48.83419);
   hmc__4->SetBinContent(16,35.1991);
   hmc__4->SetBinContent(17,32.30644);
   hmc__4->SetBinContent(18,27.67546);
   hmc__4->SetBinContent(19,28.27323);
   hmc__4->SetBinContent(20,26.32265);
   hmc__4->SetBinContent(21,18.07038);
   hmc__4->SetBinContent(22,20.65993);
   hmc__4->SetBinContent(23,17.90219);
   hmc__4->SetBinContent(24,11.9121);
   hmc__4->SetBinContent(25,14.23726);
   hmc__4->SetBinContent(26,262.5396);
   hmc__4->SetBinError(1,64.71577);
   hmc__4->SetBinError(2,157.9293);
   hmc__4->SetBinError(3,237.9482);
   hmc__4->SetBinError(4,214.0967);
   hmc__4->SetBinError(5,165.0392);
   hmc__4->SetBinError(6,134.0869);
   hmc__4->SetBinError(7,113.1315);
   hmc__4->SetBinError(8,82.70759);
   hmc__4->SetBinError(9,58.37807);
   hmc__4->SetBinError(10,45.22354);
   hmc__4->SetBinError(11,29.92389);
   hmc__4->SetBinError(12,36.01851);
   hmc__4->SetBinError(13,18.75408);
   hmc__4->SetBinError(14,20.56975);
   hmc__4->SetBinError(15,20.04825);
   hmc__4->SetBinError(16,14.43599);
   hmc__4->SetBinError(17,14.01079);
   hmc__4->SetBinError(18,16.43464);
   hmc__4->SetBinError(19,13.22143);
   hmc__4->SetBinError(20,13.36536);
   hmc__4->SetBinError(21,9.500719);
   hmc__4->SetBinError(22,10.1547);
   hmc__4->SetBinError(23,9.736614);
   hmc__4->SetBinError(24,5.944543);
   hmc__4->SetBinError(25,8.867194);
   hmc__4->SetBinError(26,71.63761);
   hmc__4->SetMinimum(-16.26);
   hmc__4->SetMaximum(1707.3);
   hmc__4->SetEntries(5727.925);
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
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(807.5553);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,8.413932);
   hbadmatch_stack_1->SetBinContent(2,14.74311);
   hbadmatch_stack_1->SetBinContent(3,23.40167);
   hbadmatch_stack_1->SetBinContent(4,13.14017);
   hbadmatch_stack_1->SetBinContent(5,11.31994);
   hbadmatch_stack_1->SetBinContent(6,9.420864);
   hbadmatch_stack_1->SetBinContent(7,8.096325);
   hbadmatch_stack_1->SetBinContent(8,4.388055);
   hbadmatch_stack_1->SetBinContent(9,4.229414);
   hbadmatch_stack_1->SetBinContent(10,1.946916);
   hbadmatch_stack_1->SetBinContent(11,2.180164);
   hbadmatch_stack_1->SetBinContent(12,1.424929);
   hbadmatch_stack_1->SetBinContent(13,1.300271);
   hbadmatch_stack_1->SetBinContent(14,0.9653313);
   hbadmatch_stack_1->SetBinContent(15,2.403087);
   hbadmatch_stack_1->SetBinContent(16,0.8105889);
   hbadmatch_stack_1->SetBinContent(17,1.251562);
   hbadmatch_stack_1->SetBinContent(18,0.9055792);
   hbadmatch_stack_1->SetBinContent(19,0.3121214);
   hbadmatch_stack_1->SetBinContent(20,1.833058);
   hbadmatch_stack_1->SetBinContent(21,0.8753801);
   hbadmatch_stack_1->SetBinContent(23,0.2248688);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,5.503403);
   hbadmatch_stack_1->SetBinError(1,1.66356);
   hbadmatch_stack_1->SetBinError(2,2.049128);
   hbadmatch_stack_1->SetBinError(3,3.607172);
   hbadmatch_stack_1->SetBinError(4,1.922226);
   hbadmatch_stack_1->SetBinError(5,1.80633);
   hbadmatch_stack_1->SetBinError(6,1.564182);
   hbadmatch_stack_1->SetBinError(7,2.085346);
   hbadmatch_stack_1->SetBinError(8,0.9673593);
   hbadmatch_stack_1->SetBinError(9,1.085105);
   hbadmatch_stack_1->SetBinError(10,0.7074709);
   hbadmatch_stack_1->SetBinError(11,0.825543);
   hbadmatch_stack_1->SetBinError(12,0.6467944);
   hbadmatch_stack_1->SetBinError(13,0.6702517);
   hbadmatch_stack_1->SetBinError(14,0.5249938);
   hbadmatch_stack_1->SetBinError(15,0.92249);
   hbadmatch_stack_1->SetBinError(16,0.5014128);
   hbadmatch_stack_1->SetBinError(17,0.6706341);
   hbadmatch_stack_1->SetBinError(18,0.5719382);
   hbadmatch_stack_1->SetBinError(19,0.221215);
   hbadmatch_stack_1->SetBinError(20,0.7364501);
   hbadmatch_stack_1->SetBinError(21,0.5191111);
   hbadmatch_stack_1->SetBinError(23,0.2248688);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,1.299101);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,20.07006);
   hext_stack_2->SetBinContent(2,68.67801);
   hext_stack_2->SetBinContent(3,79.06036);
   hext_stack_2->SetBinContent(4,54.87259);
   hext_stack_2->SetBinContent(5,43.75037);
   hext_stack_2->SetBinContent(6,28.77134);
   hext_stack_2->SetBinContent(7,27.14935);
   hext_stack_2->SetBinContent(8,17.4214);
   hext_stack_2->SetBinContent(9,21.86797);
   hext_stack_2->SetBinContent(10,14.88247);
   hext_stack_2->SetBinContent(11,14.14706);
   hext_stack_2->SetBinContent(12,7.060586);
   hext_stack_2->SetBinContent(13,4.442228);
   hext_stack_2->SetBinContent(14,7.911264);
   hext_stack_2->SetBinContent(15,6.620856);
   hext_stack_2->SetBinContent(16,2.517386);
   hext_stack_2->SetBinContent(17,1.704188);
   hext_stack_2->SetBinContent(18,3.725593);
   hext_stack_2->SetBinContent(19,4.912259);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,6.505524);
   hext_stack_2->SetBinContent(23,2.185808);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,24.75883);
   hext_stack_2->SetBinError(1,3.001818);
   hext_stack_2->SetBinError(2,5.74797);
   hext_stack_2->SetBinError(3,6.072733);
   hext_stack_2->SetBinError(4,4.81245);
   hext_stack_2->SetBinError(5,4.484458);
   hext_stack_2->SetBinError(6,3.669037);
   hext_stack_2->SetBinError(7,3.596618);
   hext_stack_2->SetBinError(8,2.702619);
   hext_stack_2->SetBinError(9,3.304783);
   hext_stack_2->SetBinError(10,2.644021);
   hext_stack_2->SetBinError(11,2.566159);
   hext_stack_2->SetBinError(12,1.691632);
   hext_stack_2->SetBinError(13,1.466939);
   hext_stack_2->SetBinError(14,1.997027);
   hext_stack_2->SetBinError(15,1.834661);
   hext_stack_2->SetBinError(16,0.9575503);
   hext_stack_2->SetBinError(17,0.7656743);
   hext_stack_2->SetBinError(18,1.216121);
   hext_stack_2->SetBinError(19,1.626223);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.993884);
   hext_stack_2->SetBinError(23,1.006415);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,3.559986);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,4.636265);
   hdirt_stack_3->SetBinContent(2,9.652693);
   hdirt_stack_3->SetBinContent(3,7.273787);
   hdirt_stack_3->SetBinContent(4,4.463538);
   hdirt_stack_3->SetBinContent(5,4.359327);
   hdirt_stack_3->SetBinContent(6,2.069945);
   hdirt_stack_3->SetBinContent(7,1.775779);
   hdirt_stack_3->SetBinContent(8,1.718995);
   hdirt_stack_3->SetBinContent(9,1.739388);
   hdirt_stack_3->SetBinContent(10,1.305588);
   hdirt_stack_3->SetBinContent(11,2.016829);
   hdirt_stack_3->SetBinContent(12,0.6951543);
   hdirt_stack_3->SetBinContent(13,1.486485);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.7819759);
   hdirt_stack_3->SetBinContent(16,0.6392631);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5906858);
   hdirt_stack_3->SetBinContent(20,0.5733541);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.3866654);
   hdirt_stack_3->SetBinContent(26,2.322966);
   hdirt_stack_3->SetBinError(1,1.144312);
   hdirt_stack_3->SetBinError(2,1.58775);
   hdirt_stack_3->SetBinError(3,1.614521);
   hdirt_stack_3->SetBinError(4,1.011242);
   hdirt_stack_3->SetBinError(5,1.068401);
   hdirt_stack_3->SetBinError(6,0.6935228);
   hdirt_stack_3->SetBinError(7,0.6630137);
   hdirt_stack_3->SetBinError(8,0.6284833);
   hdirt_stack_3->SetBinError(9,0.7478906);
   hdirt_stack_3->SetBinError(10,0.5890351);
   hdirt_stack_3->SetBinError(11,0.7441769);
   hdirt_stack_3->SetBinError(12,0.4258516);
   hdirt_stack_3->SetBinError(13,1.15304);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4844357);
   hdirt_stack_3->SetBinError(16,0.4709666);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(19,0.42205);
   hdirt_stack_3->SetBinError(20,0.4460622);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.3866654);
   hdirt_stack_3->SetBinError(26,0.8351473);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,30.41288);
   houtFV_stack_4->SetBinContent(2,54.17612);
   houtFV_stack_4->SetBinContent(3,48.35667);
   houtFV_stack_4->SetBinContent(4,43.96376);
   houtFV_stack_4->SetBinContent(5,34.78921);
   houtFV_stack_4->SetBinContent(6,27.35118);
   houtFV_stack_4->SetBinContent(7,24.98608);
   houtFV_stack_4->SetBinContent(8,15.12263);
   houtFV_stack_4->SetBinContent(9,10.29412);
   houtFV_stack_4->SetBinContent(10,9.283728);
   houtFV_stack_4->SetBinContent(11,8.675158);
   houtFV_stack_4->SetBinContent(12,6.391486);
   houtFV_stack_4->SetBinContent(13,2.637154);
   houtFV_stack_4->SetBinContent(14,5.825439);
   houtFV_stack_4->SetBinContent(15,2.676115);
   houtFV_stack_4->SetBinContent(16,2.866514);
   houtFV_stack_4->SetBinContent(17,2.96936);
   houtFV_stack_4->SetBinContent(18,2.282769);
   houtFV_stack_4->SetBinContent(19,4.006938);
   houtFV_stack_4->SetBinContent(20,3.961659);
   houtFV_stack_4->SetBinContent(21,1.176911);
   houtFV_stack_4->SetBinContent(22,0.7336084);
   houtFV_stack_4->SetBinContent(23,2.356248);
   houtFV_stack_4->SetBinContent(24,1.472697);
   houtFV_stack_4->SetBinContent(25,2.513873);
   houtFV_stack_4->SetBinContent(26,21.84226);
   houtFV_stack_4->SetBinError(1,2.788511);
   houtFV_stack_4->SetBinError(2,3.644363);
   houtFV_stack_4->SetBinError(3,3.489274);
   houtFV_stack_4->SetBinError(4,3.303542);
   houtFV_stack_4->SetBinError(5,2.841894);
   houtFV_stack_4->SetBinError(6,2.571942);
   houtFV_stack_4->SetBinError(7,2.506585);
   houtFV_stack_4->SetBinError(8,1.925018);
   houtFV_stack_4->SetBinError(9,1.60632);
   houtFV_stack_4->SetBinError(10,1.527129);
   houtFV_stack_4->SetBinError(11,1.440248);
   houtFV_stack_4->SetBinError(12,1.175954);
   houtFV_stack_4->SetBinError(13,0.7998507);
   houtFV_stack_4->SetBinError(14,1.251828);
   houtFV_stack_4->SetBinError(15,0.8667288);
   houtFV_stack_4->SetBinError(16,0.8254474);
   houtFV_stack_4->SetBinError(17,0.9092758);
   houtFV_stack_4->SetBinError(18,0.7883528);
   houtFV_stack_4->SetBinError(19,1.040879);
   houtFV_stack_4->SetBinError(20,1.048133);
   houtFV_stack_4->SetBinError(21,0.4804759);
   houtFV_stack_4->SetBinError(22,0.4394482);
   houtFV_stack_4->SetBinError(23,0.7415815);
   houtFV_stack_4->SetBinError(24,0.6253099);
   houtFV_stack_4->SetBinError(25,0.9197188);
   houtFV_stack_4->SetBinError(26,2.376236);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.214729);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.898554);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.631952);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.86666);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.73655);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,11.97731);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.8758);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.5401);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.947594);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.221959);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.886725);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.53665);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.506673);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.119875);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.081663);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.260233);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2532535);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3565207);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5518276);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5405685);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.8268912);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1397342);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2783695);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6661862);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2836161);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,6.612298);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7429675);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7425634);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.077021);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.32864);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.280133);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.310156);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.358664);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8201143);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4660062);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8354442);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5290672);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8494303);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5160436);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4607789);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3367864);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4754125);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1197377);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1570011);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1977835);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2350119);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4180861);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06589889);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.122033);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2763333);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2244855);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.8896495);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9370616);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.022127);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.989376);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.349691);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.852153);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.912296);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.232424);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3487452);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4579731);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2353239);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4328885);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2465401);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03507804);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1521039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0508617);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06562697);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.4804487);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2356912);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3413941);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4924885);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6037239);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3646253);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4684599);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3216999);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1138804);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1863914);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1385517);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2328369);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1024103);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02482773);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1295493);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05086169);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06562698);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1703244);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,63.78429);
   hNCpi0inFVres_stack_7->SetBinContent(2,183.5756);
   hNCpi0inFVres_stack_7->SetBinContent(3,293.6089);
   hNCpi0inFVres_stack_7->SetBinContent(4,304.869);
   hNCpi0inFVres_stack_7->SetBinContent(5,255.0742);
   hNCpi0inFVres_stack_7->SetBinContent(6,200.8905);
   hNCpi0inFVres_stack_7->SetBinContent(7,147.3377);
   hNCpi0inFVres_stack_7->SetBinContent(8,105.5816);
   hNCpi0inFVres_stack_7->SetBinContent(9,72.5235);
   hNCpi0inFVres_stack_7->SetBinContent(10,54.68531);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.62831);
   hNCpi0inFVres_stack_7->SetBinContent(12,29.78218);
   hNCpi0inFVres_stack_7->SetBinContent(13,20.81804);
   hNCpi0inFVres_stack_7->SetBinContent(14,18.25606);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.25673);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.94426);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.12071);
   hNCpi0inFVres_stack_7->SetBinContent(18,8.362576);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.224012);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.276733);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.242357);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.859262);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.877114);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.187416);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.547417);
   hNCpi0inFVres_stack_7->SetBinContent(26,75.6255);
   hNCpi0inFVres_stack_7->SetBinError(1,2.654165);
   hNCpi0inFVres_stack_7->SetBinError(2,4.333021);
   hNCpi0inFVres_stack_7->SetBinError(3,5.333571);
   hNCpi0inFVres_stack_7->SetBinError(4,5.637131);
   hNCpi0inFVres_stack_7->SetBinError(5,5.249876);
   hNCpi0inFVres_stack_7->SetBinError(6,4.553836);
   hNCpi0inFVres_stack_7->SetBinError(7,3.964403);
   hNCpi0inFVres_stack_7->SetBinError(8,3.255367);
   hNCpi0inFVres_stack_7->SetBinError(9,2.759967);
   hNCpi0inFVres_stack_7->SetBinError(10,2.419118);
   hNCpi0inFVres_stack_7->SetBinError(11,2.210697);
   hNCpi0inFVres_stack_7->SetBinError(12,2.064641);
   hNCpi0inFVres_stack_7->SetBinError(13,1.565931);
   hNCpi0inFVres_stack_7->SetBinError(14,1.528381);
   hNCpi0inFVres_stack_7->SetBinError(15,1.525057);
   hNCpi0inFVres_stack_7->SetBinError(16,1.322812);
   hNCpi0inFVres_stack_7->SetBinError(17,1.03543);
   hNCpi0inFVres_stack_7->SetBinError(18,1.027206);
   hNCpi0inFVres_stack_7->SetBinError(19,0.968151);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9686205);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7639141);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8075737);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8830172);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7186183);
   hNCpi0inFVres_stack_7->SetBinError(25,0.746731);
   hNCpi0inFVres_stack_7->SetBinError(26,3.124837);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,16.19116);
   hNCpi0inFVdis_stack_8->SetBinContent(2,44.13866);
   hNCpi0inFVdis_stack_8->SetBinContent(3,55.2526);
   hNCpi0inFVdis_stack_8->SetBinContent(4,52.0004);
   hNCpi0inFVdis_stack_8->SetBinContent(5,38.08797);
   hNCpi0inFVdis_stack_8->SetBinContent(6,34.37823);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.43927);
   hNCpi0inFVdis_stack_8->SetBinContent(8,24.20222);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.3832);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.1711);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.27836);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.242232);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.145002);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.004298);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.680879);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.74589);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.329748);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.931456);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.496194);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.772519);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.243163);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.708938);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.866813);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.7051253);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.270616);
   hNCpi0inFVdis_stack_8->SetBinContent(26,21.71364);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.36107);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.270639);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.279992);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.338365);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.01637);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.948958);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.657201);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.776499);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.5106);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.401691);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.263918);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.052201);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9033217);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.048601);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8381759);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5399843);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7334805);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.337965);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7599143);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6020838);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8471118);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3560549);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4931254);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2961321);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6338697);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.730345);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1270272);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2194073);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4248489);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.09172834);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1712709);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.07134375);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1331964);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1893327);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04102551);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1357771);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04049794);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,32.35009);
   hCCpi0inFV_stack_10->SetBinContent(2,89.41151);
   hCCpi0inFV_stack_10->SetBinContent(3,119.4805);
   hCCpi0inFV_stack_10->SetBinContent(4,114.2185);
   hCCpi0inFV_stack_10->SetBinContent(5,89.60864);
   hCCpi0inFV_stack_10->SetBinContent(6,69.48383);
   hCCpi0inFV_stack_10->SetBinContent(7,54.13424);
   hCCpi0inFV_stack_10->SetBinContent(8,35.88224);
   hCCpi0inFV_stack_10->SetBinContent(9,34.87829);
   hCCpi0inFV_stack_10->SetBinContent(10,27.24857);
   hCCpi0inFV_stack_10->SetBinContent(11,15.53273);
   hCCpi0inFV_stack_10->SetBinContent(12,14.75839);
   hCCpi0inFV_stack_10->SetBinContent(13,7.398676);
   hCCpi0inFV_stack_10->SetBinContent(14,7.819116);
   hCCpi0inFV_stack_10->SetBinContent(15,5.283185);
   hCCpi0inFV_stack_10->SetBinContent(16,4.499704);
   hCCpi0inFV_stack_10->SetBinContent(17,4.545285);
   hCCpi0inFV_stack_10->SetBinContent(18,3.999767);
   hCCpi0inFV_stack_10->SetBinContent(19,1.853885);
   hCCpi0inFV_stack_10->SetBinContent(20,3.851124);
   hCCpi0inFV_stack_10->SetBinContent(21,2.392469);
   hCCpi0inFV_stack_10->SetBinContent(22,1.91052);
   hCCpi0inFV_stack_10->SetBinContent(23,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(24,2.192373);
   hCCpi0inFV_stack_10->SetBinContent(25,1.364512);
   hCCpi0inFV_stack_10->SetBinContent(26,30.50444);
   hCCpi0inFV_stack_10->SetBinError(1,2.8059);
   hCCpi0inFV_stack_10->SetBinError(2,4.761501);
   hCCpi0inFV_stack_10->SetBinError(3,5.456404);
   hCCpi0inFV_stack_10->SetBinError(4,5.396274);
   hCCpi0inFV_stack_10->SetBinError(5,4.72275);
   hCCpi0inFV_stack_10->SetBinError(6,4.168145);
   hCCpi0inFV_stack_10->SetBinError(7,3.690153);
   hCCpi0inFV_stack_10->SetBinError(8,2.926775);
   hCCpi0inFV_stack_10->SetBinError(9,3.003482);
   hCCpi0inFV_stack_10->SetBinError(10,2.609683);
   hCCpi0inFV_stack_10->SetBinError(11,2.038921);
   hCCpi0inFV_stack_10->SetBinError(12,1.943629);
   hCCpi0inFV_stack_10->SetBinError(13,1.327089);
   hCCpi0inFV_stack_10->SetBinError(14,1.387539);
   hCCpi0inFV_stack_10->SetBinError(15,1.110039);
   hCCpi0inFV_stack_10->SetBinError(16,1.038616);
   hCCpi0inFV_stack_10->SetBinError(17,1.048061);
   hCCpi0inFV_stack_10->SetBinError(18,1.03826);
   hCCpi0inFV_stack_10->SetBinError(19,0.6789509);
   hCCpi0inFV_stack_10->SetBinError(20,0.927914);
   hCCpi0inFV_stack_10->SetBinError(21,0.7848912);
   hCCpi0inFV_stack_10->SetBinError(22,0.6511312);
   hCCpi0inFV_stack_10->SetBinError(23,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(24,0.7589683);
   hCCpi0inFV_stack_10->SetBinError(25,0.5720093);
   hCCpi0inFV_stack_10->SetBinError(26,2.808137);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,22.0788);
   hNCinFV_stack_11->SetBinContent(2,55.82449);
   hNCinFV_stack_11->SetBinContent(3,69.02084);
   hNCinFV_stack_11->SetBinContent(4,59.22926);
   hNCinFV_stack_11->SetBinContent(5,45.81774);
   hNCinFV_stack_11->SetBinContent(6,24.44678);
   hNCinFV_stack_11->SetBinContent(7,31.86795);
   hNCinFV_stack_11->SetBinContent(8,24.13457);
   hNCinFV_stack_11->SetBinContent(9,17.82394);
   hNCinFV_stack_11->SetBinContent(10,16.96745);
   hNCinFV_stack_11->SetBinContent(11,10.64501);
   hNCinFV_stack_11->SetBinContent(12,6.078005);
   hNCinFV_stack_11->SetBinContent(13,7.209678);
   hNCinFV_stack_11->SetBinContent(14,4.27995);
   hNCinFV_stack_11->SetBinContent(15,4.089742);
   hNCinFV_stack_11->SetBinContent(16,3.94856);
   hNCinFV_stack_11->SetBinContent(17,4.013388);
   hNCinFV_stack_11->SetBinContent(18,2.537093);
   hNCinFV_stack_11->SetBinContent(19,1.912735);
   hNCinFV_stack_11->SetBinContent(20,2.332869);
   hNCinFV_stack_11->SetBinContent(21,1.591158);
   hNCinFV_stack_11->SetBinContent(22,1.694524);
   hNCinFV_stack_11->SetBinContent(23,1.291794);
   hNCinFV_stack_11->SetBinContent(24,0.7319179);
   hNCinFV_stack_11->SetBinContent(25,0.8644297);
   hNCinFV_stack_11->SetBinContent(26,24.59663);
   hNCinFV_stack_11->SetBinError(1,2.610259);
   hNCinFV_stack_11->SetBinError(2,3.895389);
   hNCinFV_stack_11->SetBinError(3,4.47808);
   hNCinFV_stack_11->SetBinError(4,4.145132);
   hNCinFV_stack_11->SetBinError(5,3.724976);
   hNCinFV_stack_11->SetBinError(6,2.526851);
   hNCinFV_stack_11->SetBinError(7,3.23723);
   hNCinFV_stack_11->SetBinError(8,2.787452);
   hNCinFV_stack_11->SetBinError(9,2.33987);
   hNCinFV_stack_11->SetBinError(10,2.354545);
   hNCinFV_stack_11->SetBinError(11,1.778614);
   hNCinFV_stack_11->SetBinError(12,1.240867);
   hNCinFV_stack_11->SetBinError(13,1.54177);
   hNCinFV_stack_11->SetBinError(14,1.058);
   hNCinFV_stack_11->SetBinError(15,1.114619);
   hNCinFV_stack_11->SetBinError(16,1.12407);
   hNCinFV_stack_11->SetBinError(17,1.020533);
   hNCinFV_stack_11->SetBinError(18,0.7634743);
   hNCinFV_stack_11->SetBinError(19,0.9970325);
   hNCinFV_stack_11->SetBinError(20,0.8206192);
   hNCinFV_stack_11->SetBinError(21,0.6720452);
   hNCinFV_stack_11->SetBinError(22,0.6148669);
   hNCinFV_stack_11->SetBinError(23,1.010591);
   hNCinFV_stack_11->SetBinError(24,0.438694);
   hNCinFV_stack_11->SetBinError(25,0.5120021);
   hNCinFV_stack_11->SetBinError(26,2.577375);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,13.96252);
   hnumuCCinFV_stack_12->SetBinContent(2,45.37786);
   hnumuCCinFV_stack_12->SetBinContent(3,59.69914);
   hnumuCCinFV_stack_12->SetBinContent(4,53.41775);
   hnumuCCinFV_stack_12->SetBinContent(5,41.09972);
   hnumuCCinFV_stack_12->SetBinContent(6,34.62099);
   hnumuCCinFV_stack_12->SetBinContent(7,33.84191);
   hnumuCCinFV_stack_12->SetBinContent(8,24.82814);
   hnumuCCinFV_stack_12->SetBinContent(9,18.19359);
   hnumuCCinFV_stack_12->SetBinContent(10,16.16764);
   hnumuCCinFV_stack_12->SetBinContent(11,7.834071);
   hnumuCCinFV_stack_12->SetBinContent(12,9.480898);
   hnumuCCinFV_stack_12->SetBinContent(13,9.039082);
   hnumuCCinFV_stack_12->SetBinContent(14,7.513064);
   hnumuCCinFV_stack_12->SetBinContent(15,4.736304);
   hnumuCCinFV_stack_12->SetBinContent(16,3.16069);
   hnumuCCinFV_stack_12->SetBinContent(17,3.489728);
   hnumuCCinFV_stack_12->SetBinContent(18,2.805096);
   hnumuCCinFV_stack_12->SetBinContent(19,3.128538);
   hnumuCCinFV_stack_12->SetBinContent(20,2.116929);
   hnumuCCinFV_stack_12->SetBinContent(21,1.925392);
   hnumuCCinFV_stack_12->SetBinContent(22,2.769632);
   hnumuCCinFV_stack_12->SetBinContent(23,1.659982);
   hnumuCCinFV_stack_12->SetBinContent(24,0.6237661);
   hnumuCCinFV_stack_12->SetBinContent(25,2.126598);
   hnumuCCinFV_stack_12->SetBinContent(26,35.78477);
   hnumuCCinFV_stack_12->SetBinError(1,1.919561);
   hnumuCCinFV_stack_12->SetBinError(2,3.635988);
   hnumuCCinFV_stack_12->SetBinError(3,4.45939);
   hnumuCCinFV_stack_12->SetBinError(4,4.316781);
   hnumuCCinFV_stack_12->SetBinError(5,3.601497);
   hnumuCCinFV_stack_12->SetBinError(6,3.1544);
   hnumuCCinFV_stack_12->SetBinError(7,3.63955);
   hnumuCCinFV_stack_12->SetBinError(8,2.857506);
   hnumuCCinFV_stack_12->SetBinError(9,2.301138);
   hnumuCCinFV_stack_12->SetBinError(10,3.145849);
   hnumuCCinFV_stack_12->SetBinError(11,1.481661);
   hnumuCCinFV_stack_12->SetBinError(12,2.061337);
   hnumuCCinFV_stack_12->SetBinError(13,1.633776);
   hnumuCCinFV_stack_12->SetBinError(14,2.147576);
   hnumuCCinFV_stack_12->SetBinError(15,1.165173);
   hnumuCCinFV_stack_12->SetBinError(16,0.8644168);
   hnumuCCinFV_stack_12->SetBinError(17,0.920525);
   hnumuCCinFV_stack_12->SetBinError(18,0.874934);
   hnumuCCinFV_stack_12->SetBinError(19,0.9903156);
   hnumuCCinFV_stack_12->SetBinError(20,0.7757103);
   hnumuCCinFV_stack_12->SetBinError(21,0.6985037);
   hnumuCCinFV_stack_12->SetBinError(22,0.916657);
   hnumuCCinFV_stack_12->SetBinError(23,0.703219);
   hnumuCCinFV_stack_12->SetBinError(24,0.3613414);
   hnumuCCinFV_stack_12->SetBinError(25,0.8135575);
   hnumuCCinFV_stack_12->SetBinError(26,3.633029);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,3.450845);
   hnueCCinFV_stack_13->SetBinContent(2,2.962487);
   hnueCCinFV_stack_13->SetBinContent(3,2.899561);
   hnueCCinFV_stack_13->SetBinContent(4,3.56737);
   hnueCCinFV_stack_13->SetBinContent(5,1.75049);
   hnueCCinFV_stack_13->SetBinContent(6,1.667014);
   hnueCCinFV_stack_13->SetBinContent(7,1.800717);
   hnueCCinFV_stack_13->SetBinContent(8,2.016129);
   hnueCCinFV_stack_13->SetBinContent(9,0.9760599);
   hnueCCinFV_stack_13->SetBinContent(10,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(11,1.094717);
   hnueCCinFV_stack_13->SetBinContent(12,1.203124);
   hnueCCinFV_stack_13->SetBinContent(13,0.7698287);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(17,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(18,0.6859174);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinContent(23,0.4558426);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,12.79436);
   hnueCCinFV_stack_13->SetBinError(1,1.408308);
   hnueCCinFV_stack_13->SetBinError(2,0.9157623);
   hnueCCinFV_stack_13->SetBinError(3,0.9129809);
   hnueCCinFV_stack_13->SetBinError(4,1.120625);
   hnueCCinFV_stack_13->SetBinError(5,0.7542492);
   hnueCCinFV_stack_13->SetBinError(6,1.303614);
   hnueCCinFV_stack_13->SetBinError(7,0.7059703);
   hnueCCinFV_stack_13->SetBinError(8,0.7518146);
   hnueCCinFV_stack_13->SetBinError(9,0.5020512);
   hnueCCinFV_stack_13->SetBinError(10,0.340721);
   hnueCCinFV_stack_13->SetBinError(11,0.493735);
   hnueCCinFV_stack_13->SetBinError(12,0.5512898);
   hnueCCinFV_stack_13->SetBinError(13,0.4569518);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3816983);
   hnueCCinFV_stack_13->SetBinError(17,0.3582875);
   hnueCCinFV_stack_13->SetBinError(18,0.5162003);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.5191111);
   hnueCCinFV_stack_13->SetBinError(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinError(23,0.3232465);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,2.530945);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__5->SetBinContent(1,220.6297);
   hmcerror__5->SetBinContent(2,575.6807);
   hmcerror__5->SetBinContent(3,769.1002);
   hmcerror__5->SetBinContent(4,720.0504);
   hmcerror__5->SetBinContent(5,580.2463);
   hmcerror__5->SetBinContent(6,446.9903);
   hmcerror__5->SetBinContent(7,369.5706);
   hmcerror__5->SetBinContent(8,262.2224);
   hmcerror__5->SetBinContent(9,205.315);
   hmcerror__5->SetBinContent(10,162.7062);
   hmcerror__5->SetBinContent(11,115.352);
   hmcerror__5->SetBinContent(12,88.90016);
   hmcerror__5->SetBinContent(13,62.95947);
   hmcerror__5->SetBinContent(14,61.29398);
   hmcerror__5->SetBinContent(15,48.83419);
   hmcerror__5->SetBinContent(16,35.1991);
   hmcerror__5->SetBinContent(17,32.30644);
   hmcerror__5->SetBinContent(18,27.67546);
   hmcerror__5->SetBinContent(19,28.27323);
   hmcerror__5->SetBinContent(20,26.32265);
   hmcerror__5->SetBinContent(21,18.07038);
   hmcerror__5->SetBinContent(22,20.65993);
   hmcerror__5->SetBinContent(23,17.90219);
   hmcerror__5->SetBinContent(24,11.9121);
   hmcerror__5->SetBinContent(25,14.23726);
   hmcerror__5->SetBinContent(26,262.5396);
   hmcerror__5->SetBinError(1,64.71577);
   hmcerror__5->SetBinError(2,157.9293);
   hmcerror__5->SetBinError(3,237.9482);
   hmcerror__5->SetBinError(4,214.0967);
   hmcerror__5->SetBinError(5,165.0392);
   hmcerror__5->SetBinError(6,134.0869);
   hmcerror__5->SetBinError(7,113.1315);
   hmcerror__5->SetBinError(8,82.70759);
   hmcerror__5->SetBinError(9,58.37807);
   hmcerror__5->SetBinError(10,45.22354);
   hmcerror__5->SetBinError(11,29.92389);
   hmcerror__5->SetBinError(12,36.01851);
   hmcerror__5->SetBinError(13,18.75408);
   hmcerror__5->SetBinError(14,20.56975);
   hmcerror__5->SetBinError(15,20.04825);
   hmcerror__5->SetBinError(16,14.43599);
   hmcerror__5->SetBinError(17,14.01079);
   hmcerror__5->SetBinError(18,16.43464);
   hmcerror__5->SetBinError(19,13.22143);
   hmcerror__5->SetBinError(20,13.36536);
   hmcerror__5->SetBinError(21,9.500719);
   hmcerror__5->SetBinError(22,10.1547);
   hmcerror__5->SetBinError(23,9.736614);
   hmcerror__5->SetBinError(24,5.944543);
   hmcerror__5->SetBinError(25,8.867194);
   hmcerror__5->SetBinError(26,71.63761);
   hmcerror__5->SetEntries(5727.925);

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
   220,
   616,
   813,
   735,
   563,
   416,
   304,
   209,
   191,
   140,
   103,
   76,
   80,
   54,
   40,
   31,
   31,
   20,
   14,
   17,
   19,
   17,
   12,
   12,
   8};
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
   14.8324,
   24.81935,
   28.51315,
   27.11088,
   23.72762,
   20.39608,
   17.4356,
   14.45683,
   13.82027,
   11.83216,
   10.14889,
   8.8425,
   9.0683,
   7.4785,
   6.4604,
   5.7094,
   5.7094,
   4.6266,
   3.9102,
   4.2835,
   4.5151,
   4.2835,
   3.64022,
   3.64022,
   3.0307};
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
   14.8324,
   24.81935,
   28.51315,
   27.11088,
   23.72762,
   20.39608,
   17.4356,
   14.45683,
   13.82027,
   11.83216,
   10.14889,
   8.6406,
   8.8665,
   7.275,
   6.2549,
   5.5017,
   5.5017,
   4.4133,
   3.6898,
   4.0673,
   4.3011,
   4.0673,
   3.4155,
   3.4155,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(4.47237);
   Graph_Graph3005->SetMaximum(925.1675);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4741.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 113.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 442.0","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 46.9","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 349.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  93.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.5","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1876.3","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  384.7","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 745.4","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 420.4","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 403.6","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.0","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_momentum_all");
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
   0.2933231,
   0.2743348,
   0.3093852,
   0.2973357,
   0.2844296,
   0.2999771,
   0.3061161,
   0.31541,
   0.2843341,
   0.2779461,
   0.2594137,
   0.4051569,
   0.2978754,
   0.3355917,
   0.4105373,
   0.4101239,
   0.4336842,
   0.5938345,
   0.4676308,
   0.5077514,
   0.525762,
   0.4915169,
   0.5438784,
   0.499034,
   0.6228161};
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
   0.2933231,
   0.2743348,
   0.3093852,
   0.2973357,
   0.2844296,
   0.2999771,
   0.3061161,
   0.31541,
   0.2843341,
   0.2779461,
   0.2594137,
   0.4051569,
   0.2978754,
   0.3355917,
   0.4105373,
   0.4101239,
   0.4336842,
   0.5938345,
   0.4676308,
   0.5077514,
   0.525762,
   0.4915169,
   0.5438784,
   0.499034,
   0.6228161};
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
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   0.2220007,
   0.2645242,
   0.3043481,
   0.2876752,
   0.2779884,
   0.2891148,
   0.2868061,
   0.2939527,
   0.2620254,
   0.2379216,
   0.2057258,
   0.2124633,
   0.2103824,
   0.2033181,
   0.2194668,
   0.2376252,
   0.2342969,
   0.2247281,
   0.2081124,
   0.2304654,
   0.2353152,
   0.1955992,
   0.2381838,
   0.2536081,
   0.2701273};
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
   0.2220007,
   0.2645242,
   0.3043481,
   0.2876752,
   0.2779884,
   0.2891148,
   0.2868061,
   0.2939527,
   0.2620254,
   0.2379216,
   0.2057258,
   0.2124633,
   0.2103824,
   0.2033181,
   0.2194668,
   0.2376252,
   0.2342969,
   0.2247281,
   0.2081124,
   0.2304654,
   0.2353152,
   0.1955992,
   0.2381838,
   0.2536081,
   0.2701273};
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
   0.9971461,
   1.070038,
   1.057079,
   1.020762,
   0.9702777,
   0.9306689,
   0.8225764,
   0.7970332,
   0.9302776,
   0.8604467,
   0.8929189,
   0.8548916,
   1.270659,
   0.8810001,
   0.8190983,
   0.8807042,
   0.9595611,
   0.722662,
   0.4951681,
   0.6458316,
   1.051445,
   0.8228489,
   0.6703092,
   1.007379,
   0.5619059};
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
   0.06722758,
   0.04311305,
   0.03707339,
   0.03765137,
   0.04089233,
   0.0456298,
   0.04717799,
   0.05513194,
   0.06731253,
   0.07272102,
   0.08798191,
   0.09946551,
   0.1440339,
   0.1220104,
   0.1322926,
   0.162203,
   0.1767264,
   0.1671734,
   0.1383004,
   0.1627306,
   0.249862,
   0.2073337,
   0.2033394,
   0.3055901,
   0.212871};
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
   0.06722758,
   0.04311305,
   0.03707339,
   0.03765137,
   0.04089233,
   0.0456298,
   0.04717799,
   0.05513194,
   0.06731253,
   0.07272102,
   0.08798191,
   0.09719442,
   0.1408287,
   0.1186903,
   0.1280845,
   0.1563023,
   0.1702973,
   0.1594662,
   0.1305051,
   0.1545171,
   0.2380194,
   0.196869,
   0.1907867,
   0.2867252,
   0.1959366};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.2427896);
   Graph_Graph3008->SetMaximum(1.517733);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

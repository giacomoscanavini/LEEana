#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 13:37:50 2022) by ROOT version 6.26/00
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
   pad1->Range(-27.69231,-8.16,203.0769,859.3768);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hmc__1->SetBinContent(1,98.16328);
   hmc__1->SetBinContent(2,241.6638);
   hmc__1->SetBinContent(3,354.3635);
   hmc__1->SetBinContent(4,381.4676);
   hmc__1->SetBinContent(5,369.9182);
   hmc__1->SetBinContent(6,353.7917);
   hmc__1->SetBinContent(7,308.8833);
   hmc__1->SetBinContent(8,280.9813);
   hmc__1->SetBinContent(9,217.3797);
   hmc__1->SetBinContent(10,187.9672);
   hmc__1->SetBinContent(11,144.6972);
   hmc__1->SetBinContent(12,124.3157);
   hmc__1->SetBinContent(13,101.1391);
   hmc__1->SetBinContent(14,87.0134);
   hmc__1->SetBinContent(15,83.86884);
   hmc__1->SetBinContent(16,85.73074);
   hmc__1->SetBinContent(17,74.1346);
   hmc__1->SetBinContent(18,69.93121);
   hmc__1->SetBinContent(19,65.553);
   hmc__1->SetBinContent(20,57.79057);
   hmc__1->SetBinContent(21,48.23132);
   hmc__1->SetBinContent(22,45.94038);
   hmc__1->SetBinContent(23,27.30905);
   hmc__1->SetBinContent(24,10.76633);
   hmc__1->SetBinError(1,26.00553);
   hmc__1->SetBinError(2,53.19772);
   hmc__1->SetBinError(3,73.42045);
   hmc__1->SetBinError(4,77.91454);
   hmc__1->SetBinError(5,74.36213);
   hmc__1->SetBinError(6,74.55397);
   hmc__1->SetBinError(7,69.13451);
   hmc__1->SetBinError(8,63.16853);
   hmc__1->SetBinError(9,50.85725);
   hmc__1->SetBinError(10,40.11596);
   hmc__1->SetBinError(11,29.85237);
   hmc__1->SetBinError(12,29.02864);
   hmc__1->SetBinError(13,22.68985);
   hmc__1->SetBinError(14,17.72491);
   hmc__1->SetBinError(15,19.20437);
   hmc__1->SetBinError(16,17.1427);
   hmc__1->SetBinError(17,17.342);
   hmc__1->SetBinError(18,15.07137);
   hmc__1->SetBinError(19,14.84198);
   hmc__1->SetBinError(20,12.62501);
   hmc__1->SetBinError(21,12.34297);
   hmc__1->SetBinError(22,12.3911);
   hmc__1->SetBinError(23,8.109347);
   hmc__1->SetBinError(24,4.374455);
   hmc__1->SetBinError(25,0.4212968);
   hmc__1->SetMinimum(-8.16);
   hmc__1->SetMaximum(816);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,180);
   hs1_stack_1->SetMinimum(-8.530416e-09);
   hs1_stack_1->SetMaximum(400.541);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,3.044861);
   hbadmatch_stack_1->SetBinContent(2,6.401152);
   hbadmatch_stack_1->SetBinContent(3,6.168858);
   hbadmatch_stack_1->SetBinContent(4,7.804955);
   hbadmatch_stack_1->SetBinContent(5,7.46809);
   hbadmatch_stack_1->SetBinContent(6,6.809592);
   hbadmatch_stack_1->SetBinContent(7,6.55711);
   hbadmatch_stack_1->SetBinContent(8,7.822021);
   hbadmatch_stack_1->SetBinContent(9,6.350454);
   hbadmatch_stack_1->SetBinContent(10,4.363191);
   hbadmatch_stack_1->SetBinContent(11,5.860073);
   hbadmatch_stack_1->SetBinContent(12,2.247316);
   hbadmatch_stack_1->SetBinContent(13,4.369142);
   hbadmatch_stack_1->SetBinContent(14,3.40926);
   hbadmatch_stack_1->SetBinContent(15,3.562646);
   hbadmatch_stack_1->SetBinContent(16,3.527399);
   hbadmatch_stack_1->SetBinContent(17,2.278668);
   hbadmatch_stack_1->SetBinContent(18,1.511054);
   hbadmatch_stack_1->SetBinContent(19,1.807394);
   hbadmatch_stack_1->SetBinContent(20,0.5884556);
   hbadmatch_stack_1->SetBinContent(21,1.91221);
   hbadmatch_stack_1->SetBinContent(22,2.773998);
   hbadmatch_stack_1->SetBinContent(23,2.31546);
   hbadmatch_stack_1->SetBinError(1,1.136548);
   hbadmatch_stack_1->SetBinError(2,1.642648);
   hbadmatch_stack_1->SetBinError(3,1.321543);
   hbadmatch_stack_1->SetBinError(4,1.407402);
   hbadmatch_stack_1->SetBinError(5,1.4012);
   hbadmatch_stack_1->SetBinError(6,1.361537);
   hbadmatch_stack_1->SetBinError(7,1.405504);
   hbadmatch_stack_1->SetBinError(8,1.482272);
   hbadmatch_stack_1->SetBinError(9,1.294343);
   hbadmatch_stack_1->SetBinError(10,1.105371);
   hbadmatch_stack_1->SetBinError(11,1.395323);
   hbadmatch_stack_1->SetBinError(12,0.7337357);
   hbadmatch_stack_1->SetBinError(13,1.87944);
   hbadmatch_stack_1->SetBinError(14,0.9726081);
   hbadmatch_stack_1->SetBinError(15,1.004073);
   hbadmatch_stack_1->SetBinError(16,0.9747034);
   hbadmatch_stack_1->SetBinError(17,0.7938832);
   hbadmatch_stack_1->SetBinError(18,0.6367088);
   hbadmatch_stack_1->SetBinError(19,0.7084844);
   hbadmatch_stack_1->SetBinError(20,0.3397478);
   hbadmatch_stack_1->SetBinError(21,0.6516395);
   hbadmatch_stack_1->SetBinError(22,1.738387);
   hbadmatch_stack_1->SetBinError(23,0.8612722);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,3.793434);
   hext_stack_2->SetBinContent(2,11.11058);
   hext_stack_2->SetBinContent(3,29.30045);
   hext_stack_2->SetBinContent(4,25.56327);
   hext_stack_2->SetBinContent(5,31.96788);
   hext_stack_2->SetBinContent(6,45.23554);
   hext_stack_2->SetBinContent(7,37.29832);
   hext_stack_2->SetBinContent(8,37.80867);
   hext_stack_2->SetBinContent(9,35.98474);
   hext_stack_2->SetBinContent(10,43.341);
   hext_stack_2->SetBinContent(11,28.77852);
   hext_stack_2->SetBinContent(12,25.96987);
   hext_stack_2->SetBinContent(13,15.64937);
   hext_stack_2->SetBinContent(14,18.0227);
   hext_stack_2->SetBinContent(15,14.09081);
   hext_stack_2->SetBinContent(16,17.26134);
   hext_stack_2->SetBinContent(17,15.13903);
   hext_stack_2->SetBinContent(18,11.7869);
   hext_stack_2->SetBinContent(19,8.231254);
   hext_stack_2->SetBinContent(20,8.57165);
   hext_stack_2->SetBinContent(21,3.57278);
   hext_stack_2->SetBinContent(22,4.98728);
   hext_stack_2->SetBinContent(23,3.248382);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinError(1,1.393356);
   hext_stack_2->SetBinError(2,2.108507);
   hext_stack_2->SetBinError(3,3.579994);
   hext_stack_2->SetBinError(4,3.376905);
   hext_stack_2->SetBinError(5,3.775691);
   hext_stack_2->SetBinError(6,4.529826);
   hext_stack_2->SetBinError(7,4.123067);
   hext_stack_2->SetBinError(8,4.076946);
   hext_stack_2->SetBinError(9,4.063214);
   hext_stack_2->SetBinError(10,4.503484);
   hext_stack_2->SetBinError(11,3.641515);
   hext_stack_2->SetBinError(12,3.401295);
   hext_stack_2->SetBinError(13,2.501079);
   hext_stack_2->SetBinError(14,2.930307);
   hext_stack_2->SetBinError(15,2.461016);
   hext_stack_2->SetBinError(16,2.941004);
   hext_stack_2->SetBinError(17,2.575576);
   hext_stack_2->SetBinError(18,2.447376);
   hext_stack_2->SetBinError(19,1.989529);
   hext_stack_2->SetBinError(20,2.032856);
   hext_stack_2->SetBinError(21,1.136966);
   hext_stack_2->SetBinError(22,1.704667);
   hext_stack_2->SetBinError(23,1.089706);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.4532775);
   hdirt_stack_3->SetBinContent(2,1.850057);
   hdirt_stack_3->SetBinContent(3,3.612496);
   hdirt_stack_3->SetBinContent(4,5.613598);
   hdirt_stack_3->SetBinContent(5,3.502562);
   hdirt_stack_3->SetBinContent(6,5.112639);
   hdirt_stack_3->SetBinContent(7,6.473269);
   hdirt_stack_3->SetBinContent(8,3.385408);
   hdirt_stack_3->SetBinContent(9,4.678835);
   hdirt_stack_3->SetBinContent(10,2.675752);
   hdirt_stack_3->SetBinContent(11,1.641111);
   hdirt_stack_3->SetBinContent(12,1.547598);
   hdirt_stack_3->SetBinContent(13,1.179335);
   hdirt_stack_3->SetBinContent(14,2.166967);
   hdirt_stack_3->SetBinContent(15,1.849339);
   hdirt_stack_3->SetBinContent(16,1.573526);
   hdirt_stack_3->SetBinContent(17,1.809474);
   hdirt_stack_3->SetBinContent(18,2.516591);
   hdirt_stack_3->SetBinContent(19,1.660239);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.8947915);
   hdirt_stack_3->SetBinContent(22,0.9896342);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(1,0.3572343);
   hdirt_stack_3->SetBinError(2,0.6829576);
   hdirt_stack_3->SetBinError(3,1.004336);
   hdirt_stack_3->SetBinError(4,1.376244);
   hdirt_stack_3->SetBinError(5,0.8755631);
   hdirt_stack_3->SetBinError(6,1.192145);
   hdirt_stack_3->SetBinError(7,1.662943);
   hdirt_stack_3->SetBinError(8,0.8785616);
   hdirt_stack_3->SetBinError(9,1.116168);
   hdirt_stack_3->SetBinError(10,0.7982408);
   hdirt_stack_3->SetBinError(11,0.7191228);
   hdirt_stack_3->SetBinError(12,0.6091969);
   hdirt_stack_3->SetBinError(13,0.6106535);
   hdirt_stack_3->SetBinError(14,0.7990344);
   hdirt_stack_3->SetBinError(15,0.6725244);
   hdirt_stack_3->SetBinError(16,0.6633886);
   hdirt_stack_3->SetBinError(17,0.6896495);
   hdirt_stack_3->SetBinError(18,0.8505187);
   hdirt_stack_3->SetBinError(19,1.033983);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.4906336);
   hdirt_stack_3->SetBinError(22,0.4729469);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,7.915155);
   houtFV_stack_4->SetBinContent(2,21.98271);
   houtFV_stack_4->SetBinContent(3,37.75703);
   houtFV_stack_4->SetBinContent(4,43.77613);
   houtFV_stack_4->SetBinContent(5,43.10591);
   houtFV_stack_4->SetBinContent(6,50.56288);
   houtFV_stack_4->SetBinContent(7,41.94406);
   houtFV_stack_4->SetBinContent(8,41.5117);
   houtFV_stack_4->SetBinContent(9,28.38507);
   houtFV_stack_4->SetBinContent(10,24.6766);
   houtFV_stack_4->SetBinContent(11,21.61498);
   houtFV_stack_4->SetBinContent(12,18.61384);
   houtFV_stack_4->SetBinContent(13,13.85148);
   houtFV_stack_4->SetBinContent(14,12.25165);
   houtFV_stack_4->SetBinContent(15,12.8944);
   houtFV_stack_4->SetBinContent(16,15.38488);
   houtFV_stack_4->SetBinContent(17,13.84506);
   houtFV_stack_4->SetBinContent(18,11.18991);
   houtFV_stack_4->SetBinContent(19,10.86959);
   houtFV_stack_4->SetBinContent(20,11.88327);
   houtFV_stack_4->SetBinContent(21,10.17211);
   houtFV_stack_4->SetBinContent(22,6.66891);
   houtFV_stack_4->SetBinContent(23,3.199179);
   houtFV_stack_4->SetBinContent(24,1.807394);
   houtFV_stack_4->SetBinError(1,1.384647);
   houtFV_stack_4->SetBinError(2,2.397054);
   houtFV_stack_4->SetBinError(3,3.096854);
   houtFV_stack_4->SetBinError(4,3.339469);
   houtFV_stack_4->SetBinError(5,3.251999);
   houtFV_stack_4->SetBinError(6,3.631218);
   houtFV_stack_4->SetBinError(7,3.261294);
   houtFV_stack_4->SetBinError(8,3.372994);
   houtFV_stack_4->SetBinError(9,2.609488);
   houtFV_stack_4->SetBinError(10,2.509605);
   houtFV_stack_4->SetBinError(11,2.291538);
   houtFV_stack_4->SetBinError(12,2.179718);
   houtFV_stack_4->SetBinError(13,1.8874);
   houtFV_stack_4->SetBinError(14,1.702498);
   houtFV_stack_4->SetBinError(15,1.805331);
   houtFV_stack_4->SetBinError(16,2.265439);
   houtFV_stack_4->SetBinError(17,1.939495);
   houtFV_stack_4->SetBinError(18,1.630014);
   houtFV_stack_4->SetBinError(19,1.557696);
   houtFV_stack_4->SetBinError(20,1.64154);
   houtFV_stack_4->SetBinError(21,1.694501);
   houtFV_stack_4->SetBinError(22,1.305861);
   houtFV_stack_4->SetBinError(23,0.8826766);
   houtFV_stack_4->SetBinError(24,0.7084844);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.22962);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,18.96194);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.03163);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.35943);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.42982);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.621958);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.504879);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.854194);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.323926);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.408626);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9746759);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7662537);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.702245);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9714467);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.414109);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.582853);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.328904);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.037042);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8403333);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7612735);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4286872);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3690854);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4365597);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.316988);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2040719);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5074733);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,38.19044);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,98.78714);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,147.7223);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,165.6798);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,170.1673);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,155.0459);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,131.6053);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,118.5199);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,85.75829);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,70.45493);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,56.83249);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,48.55118);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,39.26355);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,32.23824);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,29.73935);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,28.39782);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,25.0884);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,24.64212);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,24.47422);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,19.78366);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,17.51579);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,16.01964);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,8.75948);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,3.488348);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.056544);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.219437);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.975589);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.181858);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.263104);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.065705);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.723673);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.58567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.979323);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.734449);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.35461);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.284103);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.065686);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.812621);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.711095);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.692761);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.610751);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.649776);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.66233);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.406197);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.365569);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.281033);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.013315);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.6368863);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hCCpi0inFV_stack_7->SetBinContent(1,21.09412);
   hCCpi0inFV_stack_7->SetBinContent(2,50.83368);
   hCCpi0inFV_stack_7->SetBinContent(3,71.74243);
   hCCpi0inFV_stack_7->SetBinContent(4,75.98116);
   hCCpi0inFV_stack_7->SetBinContent(5,64.80214);
   hCCpi0inFV_stack_7->SetBinContent(6,48.91323);
   hCCpi0inFV_stack_7->SetBinContent(7,52.70409);
   hCCpi0inFV_stack_7->SetBinContent(8,44.28455);
   hCCpi0inFV_stack_7->SetBinContent(9,31.30158);
   hCCpi0inFV_stack_7->SetBinContent(10,23.80901);
   hCCpi0inFV_stack_7->SetBinContent(11,16.91996);
   hCCpi0inFV_stack_7->SetBinContent(12,13.84942);
   hCCpi0inFV_stack_7->SetBinContent(13,11.6713);
   hCCpi0inFV_stack_7->SetBinContent(14,10.54801);
   hCCpi0inFV_stack_7->SetBinContent(15,14.29633);
   hCCpi0inFV_stack_7->SetBinContent(16,12.53711);
   hCCpi0inFV_stack_7->SetBinContent(17,8.697876);
   hCCpi0inFV_stack_7->SetBinContent(18,9.634354);
   hCCpi0inFV_stack_7->SetBinContent(19,10.90876);
   hCCpi0inFV_stack_7->SetBinContent(20,8.25672);
   hCCpi0inFV_stack_7->SetBinContent(21,6.503813);
   hCCpi0inFV_stack_7->SetBinContent(22,8.832768);
   hCCpi0inFV_stack_7->SetBinContent(23,6.0372);
   hCCpi0inFV_stack_7->SetBinContent(24,2.837462);
   hCCpi0inFV_stack_7->SetBinError(1,2.274204);
   hCCpi0inFV_stack_7->SetBinError(2,3.538596);
   hCCpi0inFV_stack_7->SetBinError(3,4.253061);
   hCCpi0inFV_stack_7->SetBinError(4,4.403688);
   hCCpi0inFV_stack_7->SetBinError(5,4.018346);
   hCCpi0inFV_stack_7->SetBinError(6,3.523125);
   hCCpi0inFV_stack_7->SetBinError(7,3.672937);
   hCCpi0inFV_stack_7->SetBinError(8,3.376351);
   hCCpi0inFV_stack_7->SetBinError(9,2.812492);
   hCCpi0inFV_stack_7->SetBinError(10,2.41411);
   hCCpi0inFV_stack_7->SetBinError(11,2.001017);
   hCCpi0inFV_stack_7->SetBinError(12,1.901718);
   hCCpi0inFV_stack_7->SetBinError(13,1.669444);
   hCCpi0inFV_stack_7->SetBinError(14,1.732087);
   hCCpi0inFV_stack_7->SetBinError(15,1.895937);
   hCCpi0inFV_stack_7->SetBinError(16,1.770481);
   hCCpi0inFV_stack_7->SetBinError(17,1.481913);
   hCCpi0inFV_stack_7->SetBinError(18,1.493954);
   hCCpi0inFV_stack_7->SetBinError(19,1.631344);
   hCCpi0inFV_stack_7->SetBinError(20,1.443336);
   hCCpi0inFV_stack_7->SetBinError(21,1.272545);
   hCCpi0inFV_stack_7->SetBinError(22,1.480946);
   hCCpi0inFV_stack_7->SetBinError(23,1.197456);
   hCCpi0inFV_stack_7->SetBinError(24,0.8089864);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCinFV_stack_8->SetBinContent(1,4.933472);
   hNCinFV_stack_8->SetBinContent(2,12.21062);
   hNCinFV_stack_8->SetBinContent(3,11.97695);
   hNCinFV_stack_8->SetBinContent(4,17.39406);
   hNCinFV_stack_8->SetBinContent(5,17.72084);
   hNCinFV_stack_8->SetBinContent(6,13.03613);
   hNCinFV_stack_8->SetBinContent(7,9.239841);
   hNCinFV_stack_8->SetBinContent(8,9.135025);
   hNCinFV_stack_8->SetBinContent(9,7.517584);
   hNCinFV_stack_8->SetBinContent(10,4.501394);
   hNCinFV_stack_8->SetBinContent(11,3.751489);
   hNCinFV_stack_8->SetBinContent(12,4.69811);
   hNCinFV_stack_8->SetBinContent(13,6.539079);
   hNCinFV_stack_8->SetBinContent(14,2.445722);
   hNCinFV_stack_8->SetBinContent(15,2.249007);
   hNCinFV_stack_8->SetBinContent(16,2.295498);
   hNCinFV_stack_8->SetBinContent(17,1.662242);
   hNCinFV_stack_8->SetBinContent(18,2.932743);
   hNCinFV_stack_8->SetBinContent(19,2.985996);
   hNCinFV_stack_8->SetBinContent(20,2.486059);
   hNCinFV_stack_8->SetBinContent(21,2.339216);
   hNCinFV_stack_8->SetBinContent(22,1.123658);
   hNCinFV_stack_8->SetBinContent(23,0.9835768);
   hNCinFV_stack_8->SetBinContent(24,0.9785053);
   hNCinFV_stack_8->SetBinError(1,1.145041);
   hNCinFV_stack_8->SetBinError(2,1.754987);
   hNCinFV_stack_8->SetBinError(3,1.699295);
   hNCinFV_stack_8->SetBinError(4,2.095583);
   hNCinFV_stack_8->SetBinError(5,2.089031);
   hNCinFV_stack_8->SetBinError(6,1.840953);
   hNCinFV_stack_8->SetBinError(7,1.533776);
   hNCinFV_stack_8->SetBinError(8,1.558777);
   hNCinFV_stack_8->SetBinError(9,1.401386);
   hNCinFV_stack_8->SetBinError(10,1.038935);
   hNCinFV_stack_8->SetBinError(11,1.0384);
   hNCinFV_stack_8->SetBinError(12,1.057394);
   hNCinFV_stack_8->SetBinError(13,1.33131);
   hNCinFV_stack_8->SetBinError(14,0.7600838);
   hNCinFV_stack_8->SetBinError(15,0.7341869);
   hNCinFV_stack_8->SetBinError(16,0.7057297);
   hNCinFV_stack_8->SetBinError(17,0.6513556);
   hNCinFV_stack_8->SetBinError(18,0.8785195);
   hNCinFV_stack_8->SetBinError(19,0.8564284);
   hNCinFV_stack_8->SetBinError(20,0.8559962);
   hNCinFV_stack_8->SetBinError(21,0.8089383);
   hNCinFV_stack_8->SetBinError(22,0.5188295);
   hNCinFV_stack_8->SetBinError(23,0.4398689);
   hNCinFV_stack_8->SetBinError(24,0.4376048);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hnumuCCinFV_stack_9->SetBinContent(1,6.279024);
   hnumuCCinFV_stack_9->SetBinContent(2,12.69834);
   hnumuCCinFV_stack_9->SetBinContent(3,19.81039);
   hnumuCCinFV_stack_9->SetBinContent(4,22.31327);
   hnumuCCinFV_stack_9->SetBinContent(5,18.66063);
   hnumuCCinFV_stack_9->SetBinContent(6,20.55313);
   hnumuCCinFV_stack_9->SetBinContent(7,16.8967);
   hnumuCCinFV_stack_9->SetBinContent(8,16.07309);
   hnumuCCinFV_stack_9->SetBinContent(9,13.70227);
   hnumuCCinFV_stack_9->SetBinContent(10,11.36151);
   hnumuCCinFV_stack_9->SetBinContent(11,8.852882);
   hnumuCCinFV_stack_9->SetBinContent(12,8.090286);
   hnumuCCinFV_stack_9->SetBinContent(13,8.204438);
   hnumuCCinFV_stack_9->SetBinContent(14,5.040719);
   hnumuCCinFV_stack_9->SetBinContent(15,4.293125);
   hnumuCCinFV_stack_9->SetBinContent(16,4.641569);
   hnumuCCinFV_stack_9->SetBinContent(17,4.906923);
   hnumuCCinFV_stack_9->SetBinContent(18,4.301792);
   hnumuCCinFV_stack_9->SetBinContent(19,2.758688);
   hnumuCCinFV_stack_9->SetBinContent(20,3.132482);
   hnumuCCinFV_stack_9->SetBinContent(21,3.603234);
   hnumuCCinFV_stack_9->SetBinContent(22,1.929753);
   hnumuCCinFV_stack_9->SetBinContent(23,0.8290688);
   hnumuCCinFV_stack_9->SetBinContent(24,0.2504685);
   hnumuCCinFV_stack_9->SetBinError(1,1.667676);
   hnumuCCinFV_stack_9->SetBinError(2,1.865314);
   hnumuCCinFV_stack_9->SetBinError(3,3.073411);
   hnumuCCinFV_stack_9->SetBinError(4,3.044693);
   hnumuCCinFV_stack_9->SetBinError(5,2.552389);
   hnumuCCinFV_stack_9->SetBinError(6,2.339874);
   hnumuCCinFV_stack_9->SetBinError(7,2.453723);
   hnumuCCinFV_stack_9->SetBinError(8,2.472505);
   hnumuCCinFV_stack_9->SetBinError(9,2.093999);
   hnumuCCinFV_stack_9->SetBinError(10,2.116911);
   hnumuCCinFV_stack_9->SetBinError(11,1.654326);
   hnumuCCinFV_stack_9->SetBinError(12,1.553546);
   hnumuCCinFV_stack_9->SetBinError(13,1.778225);
   hnumuCCinFV_stack_9->SetBinError(14,1.769027);
   hnumuCCinFV_stack_9->SetBinError(15,1.067816);
   hnumuCCinFV_stack_9->SetBinError(16,1.287085);
   hnumuCCinFV_stack_9->SetBinError(17,1.183401);
   hnumuCCinFV_stack_9->SetBinError(18,1.415114);
   hnumuCCinFV_stack_9->SetBinError(19,0.8132771);
   hnumuCCinFV_stack_9->SetBinError(20,0.9346176);
   hnumuCCinFV_stack_9->SetBinError(21,1.010143);
   hnumuCCinFV_stack_9->SetBinError(22,0.7757626);
   hnumuCCinFV_stack_9->SetBinError(23,0.4163211);
   hnumuCCinFV_stack_9->SetBinError(24,0.2027528);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hnueCCinFV_stack_10->SetBinContent(1,3.229876);
   hnueCCinFV_stack_10->SetBinContent(2,6.827628);
   hnueCCinFV_stack_10->SetBinContent(3,4.240975);
   hnueCCinFV_stack_10->SetBinContent(4,0.9818966);
   hnueCCinFV_stack_10->SetBinContent(5,2.093064);
   hnueCCinFV_stack_10->SetBinContent(6,1.900773);
   hnueCCinFV_stack_10->SetBinContent(7,1.659726);
   hnueCCinFV_stack_10->SetBinContent(8,0.5867978);
   hnueCCinFV_stack_10->SetBinContent(9,2.37692);
   hnueCCinFV_stack_10->SetBinContent(10,1.375251);
   hnueCCinFV_stack_10->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_10->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_10->SetBinContent(14,0.8343332);
   hnueCCinFV_stack_10->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_10->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_10->SetBinContent(18,0.536893);
   hnueCCinFV_stack_10->SetBinContent(19,1.075993);
   hnueCCinFV_stack_10->SetBinContent(20,1.418448);
   hnueCCinFV_stack_10->SetBinContent(21,0.9511135);
   hnueCCinFV_stack_10->SetBinContent(22,0.9124936);
   hnueCCinFV_stack_10->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_10->SetBinError(1,1.139023);
   hnueCCinFV_stack_10->SetBinError(2,2.10362);
   hnueCCinFV_stack_10->SetBinError(3,1.202594);
   hnueCCinFV_stack_10->SetBinError(4,0.4391155);
   hnueCCinFV_stack_10->SetBinError(5,0.7245944);
   hnueCCinFV_stack_10->SetBinError(6,0.8863533);
   hnueCCinFV_stack_10->SetBinError(7,0.7360034);
   hnueCCinFV_stack_10->SetBinError(8,0.3387718);
   hnueCCinFV_stack_10->SetBinError(9,1.367485);
   hnueCCinFV_stack_10->SetBinError(10,0.7117962);
   hnueCCinFV_stack_10->SetBinError(12,0.3142995);
   hnueCCinFV_stack_10->SetBinError(13,0.2998007);
   hnueCCinFV_stack_10->SetBinError(14,0.4958181);
   hnueCCinFV_stack_10->SetBinError(15,0.3387718);
   hnueCCinFV_stack_10->SetBinError(17,0.3025491);
   hnueCCinFV_stack_10->SetBinError(18,0.3929602);
   hnueCCinFV_stack_10->SetBinError(19,1.075993);
   hnueCCinFV_stack_10->SetBinError(20,0.6593494);
   hnueCCinFV_stack_10->SetBinError(21,0.4903296);
   hnueCCinFV_stack_10->SetBinError(22,0.5898438);
   hnueCCinFV_stack_10->SetBinError(23,0.1967154);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);
   hmcerror__2->SetBinContent(1,98.16328);
   hmcerror__2->SetBinContent(2,241.6638);
   hmcerror__2->SetBinContent(3,354.3635);
   hmcerror__2->SetBinContent(4,381.4676);
   hmcerror__2->SetBinContent(5,369.9182);
   hmcerror__2->SetBinContent(6,353.7917);
   hmcerror__2->SetBinContent(7,308.8833);
   hmcerror__2->SetBinContent(8,280.9813);
   hmcerror__2->SetBinContent(9,217.3797);
   hmcerror__2->SetBinContent(10,187.9672);
   hmcerror__2->SetBinContent(11,144.6972);
   hmcerror__2->SetBinContent(12,124.3157);
   hmcerror__2->SetBinContent(13,101.1391);
   hmcerror__2->SetBinContent(14,87.0134);
   hmcerror__2->SetBinContent(15,83.86884);
   hmcerror__2->SetBinContent(16,85.73074);
   hmcerror__2->SetBinContent(17,74.1346);
   hmcerror__2->SetBinContent(18,69.93121);
   hmcerror__2->SetBinContent(19,65.553);
   hmcerror__2->SetBinContent(20,57.79057);
   hmcerror__2->SetBinContent(21,48.23132);
   hmcerror__2->SetBinContent(22,45.94038);
   hmcerror__2->SetBinContent(23,27.30905);
   hmcerror__2->SetBinContent(24,10.76633);
   hmcerror__2->SetBinError(1,26.00553);
   hmcerror__2->SetBinError(2,53.19772);
   hmcerror__2->SetBinError(3,73.42045);
   hmcerror__2->SetBinError(4,77.91454);
   hmcerror__2->SetBinError(5,74.36213);
   hmcerror__2->SetBinError(6,74.55397);
   hmcerror__2->SetBinError(7,69.13451);
   hmcerror__2->SetBinError(8,63.16853);
   hmcerror__2->SetBinError(9,50.85725);
   hmcerror__2->SetBinError(10,40.11596);
   hmcerror__2->SetBinError(11,29.85237);
   hmcerror__2->SetBinError(12,29.02864);
   hmcerror__2->SetBinError(13,22.68985);
   hmcerror__2->SetBinError(14,17.72491);
   hmcerror__2->SetBinError(15,19.20437);
   hmcerror__2->SetBinError(16,17.1427);
   hmcerror__2->SetBinError(17,17.342);
   hmcerror__2->SetBinError(18,15.07137);
   hmcerror__2->SetBinError(19,14.84198);
   hmcerror__2->SetBinError(20,12.62501);
   hmcerror__2->SetBinError(21,12.34297);
   hmcerror__2->SetBinError(22,12.3911);
   hmcerror__2->SetBinError(23,8.109347);
   hmcerror__2->SetBinError(24,4.374455);
   hmcerror__2->SetBinError(25,0.4212968);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[24] = {
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
   Double_t _fy3001[24] = {
   92,
   224,
   385,
   396,
   408,
   351,
   291,
   262,
   206,
   169,
   140,
   104,
   118,
   78,
   95,
   94,
   62,
   77,
   69,
   66,
   61,
   37,
   30,
   8};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   9.7138,
   14.96663,
   19.62142,
   19.89975,
   20.19901,
   18.73499,
   17.05872,
   16.18641,
   14.3527,
   13,
   11.83216,
   10.19804,
   10.86278,
   8.9562,
   9.8686,
   9.8173,
   8.0018,
   8.8995,
   8.4327,
   8.2509,
   7.9383,
   6.2203,
   5.6197,
   3.0307};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   9.513,
   14.96663,
   19.62142,
   19.89975,
   20.19901,
   18.73499,
   17.05872,
   16.18641,
   14.3527,
   13,
   11.83216,
   10.19804,
   10.86278,
   8.7542,
   9.667,
   9.616,
   7.7989,
   8.6976,
   8.2304,
   8.0483,
   7.7354,
   6.0141,
   5.4117,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,198);
   Graph_Graph3001->SetMinimum(4.47237);
   Graph_Graph3001->SetMaximum(470.522);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.2649211,
   0.2201311,
   0.2071897,
   0.2042494,
   0.2010232,
   0.2107284,
   0.2238208,
   0.224814,
   0.2339559,
   0.21342,
   0.2063092,
   0.2335074,
   0.224343,
   0.2037032,
   0.228981,
   0.1999597,
   0.2339258,
   0.2155171,
   0.2264119,
   0.2184615,
   0.255912,
   0.2697213,
   0.2969473,
   0.4063089};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.2649211,
   0.2201311,
   0.2071897,
   0.2042494,
   0.2010232,
   0.2107284,
   0.2238208,
   0.224814,
   0.2339559,
   0.21342,
   0.2063092,
   0.2335074,
   0.224343,
   0.2037032,
   0.228981,
   0.1999597,
   0.2339258,
   0.2155171,
   0.2264119,
   0.2184615,
   0.255912,
   0.2697213,
   0.2969473,
   0.4063089};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,198);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [degree]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3003[24] = {
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
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
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
   Double_t _fely3003[24] = {
   0.2296067,
   0.2069259,
   0.194296,
   0.187223,
   0.1914456,
   0.1964403,
   0.207778,
   0.2108816,
   0.219903,
   0.1977556,
   0.1986085,
   0.1931927,
   0.1911662,
   0.1909075,
   0.2099509,
   0.1820907,
   0.1770767,
   0.1887842,
   0.19596,
   0.1883737,
   0.1990085,
   0.200403,
   0.1995404,
   0.2652701};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.2296067,
   0.2069259,
   0.194296,
   0.187223,
   0.1914456,
   0.1964403,
   0.207778,
   0.2108816,
   0.219903,
   0.1977556,
   0.1986085,
   0.1931927,
   0.1911662,
   0.1909075,
   0.2099509,
   0.1820907,
   0.1770767,
   0.1887842,
   0.19596,
   0.1883737,
   0.1990085,
   0.200403,
   0.1995404,
   0.2652701};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,198);
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
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.937214,
   0.9269074,
   1.086455,
   1.038096,
   1.102947,
   0.9921091,
   0.9421033,
   0.9324464,
   0.9476508,
   0.8990928,
   0.9675375,
   0.8365798,
   1.16671,
   0.8964136,
   1.132721,
   1.096456,
   0.8363167,
   1.101082,
   1.052583,
   1.142055,
   1.264738,
   0.8053917,
   1.098537,
   0.7430574};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.09895553,
   0.06193161,
   0.05537088,
   0.05216629,
   0.05460399,
   0.05295486,
   0.05522707,
   0.05760673,
   0.06602596,
   0.06916099,
   0.08177184,
   0.0820334,
   0.1074044,
   0.102929,
   0.1176671,
   0.1145132,
   0.1079361,
   0.1272608,
   0.1286394,
   0.1427724,
   0.1645881,
   0.1353994,
   0.2057816,
   0.281498};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.09690996,
   0.06193161,
   0.05537088,
   0.05216629,
   0.05460399,
   0.05295486,
   0.05522707,
   0.05760673,
   0.06602596,
   0.06916099,
   0.08177184,
   0.0820334,
   0.1074044,
   0.1006075,
   0.1152633,
   0.1121651,
   0.1051992,
   0.1243736,
   0.1255534,
   0.1392667,
   0.1603813,
   0.130911,
   0.1981651,
   0.2591041};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,198);
   Graph_Graph3004->SetMinimum(0.3652033);
   Graph_Graph3004->SetMaximum(1.521476);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 18:43:49 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-6.86,1.25641,758.5716);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__10->SetBinContent(1,324.8189);
   hmc__10->SetBinContent(2,140.9779);
   hmc__10->SetBinContent(3,103.1984);
   hmc__10->SetBinContent(4,82.62844);
   hmc__10->SetBinContent(5,79.7537);
   hmc__10->SetBinContent(6,85.11931);
   hmc__10->SetBinContent(7,87.93827);
   hmc__10->SetBinContent(8,83.03388);
   hmc__10->SetBinContent(9,77.63082);
   hmc__10->SetBinContent(10,86.58611);
   hmc__10->SetBinContent(11,96.8384);
   hmc__10->SetBinContent(12,101.188);
   hmc__10->SetBinContent(13,114.4007);
   hmc__10->SetBinContent(14,133.3003);
   hmc__10->SetBinContent(15,150.6562);
   hmc__10->SetBinContent(16,141.6543);
   hmc__10->SetBinContent(17,153.5531);
   hmc__10->SetBinContent(18,186.7913);
   hmc__10->SetBinContent(19,199.033);
   hmc__10->SetBinContent(20,234.8445);
   hmc__10->SetBinContent(21,284.3152);
   hmc__10->SetBinContent(22,321.5779);
   hmc__10->SetBinContent(23,341.8213);
   hmc__10->SetBinContent(24,298.3335);
   hmc__10->SetBinContent(25,0.1115999);
   hmc__10->SetBinError(1,73.74692);
   hmc__10->SetBinError(2,38.58752);
   hmc__10->SetBinError(3,30.95113);
   hmc__10->SetBinError(4,24.93618);
   hmc__10->SetBinError(5,28.91887);
   hmc__10->SetBinError(6,27.65551);
   hmc__10->SetBinError(7,29.92986);
   hmc__10->SetBinError(8,30.23609);
   hmc__10->SetBinError(9,24.35723);
   hmc__10->SetBinError(10,24.6948);
   hmc__10->SetBinError(11,25.08237);
   hmc__10->SetBinError(12,27.12975);
   hmc__10->SetBinError(13,33.67374);
   hmc__10->SetBinError(14,35.93181);
   hmc__10->SetBinError(15,44.55233);
   hmc__10->SetBinError(16,44.36549);
   hmc__10->SetBinError(17,46.66829);
   hmc__10->SetBinError(18,51.08388);
   hmc__10->SetBinError(19,51.7559);
   hmc__10->SetBinError(20,62.74373);
   hmc__10->SetBinError(21,75.73787);
   hmc__10->SetBinError(22,85.08664);
   hmc__10->SetBinError(23,78.93495);
   hmc__10->SetBinError(24,71.11292);
   hmc__10->SetBinError(25,0.4409865);
   hmc__10->SetMinimum(-6.86);
   hmc__10->SetMaximum(720.3);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-1,1);
   hs4_stack_4->SetMinimum(-2.766408e-08);
   hs4_stack_4->SetMaximum(358.9123);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,7.539346);
   hbadmatch_stack_1->SetBinContent(2,4.522579);
   hbadmatch_stack_1->SetBinContent(3,2.078755);
   hbadmatch_stack_1->SetBinContent(4,2.598956);
   hbadmatch_stack_1->SetBinContent(5,3.895976);
   hbadmatch_stack_1->SetBinContent(6,1.971425);
   hbadmatch_stack_1->SetBinContent(7,3.132169);
   hbadmatch_stack_1->SetBinContent(8,3.091884);
   hbadmatch_stack_1->SetBinContent(9,1.215558);
   hbadmatch_stack_1->SetBinContent(10,1.467217);
   hbadmatch_stack_1->SetBinContent(11,1.891251);
   hbadmatch_stack_1->SetBinContent(12,2.872728);
   hbadmatch_stack_1->SetBinContent(13,1.969307);
   hbadmatch_stack_1->SetBinContent(14,3.808123);
   hbadmatch_stack_1->SetBinContent(15,4.303059);
   hbadmatch_stack_1->SetBinContent(16,2.637764);
   hbadmatch_stack_1->SetBinContent(17,2.576765);
   hbadmatch_stack_1->SetBinContent(18,3.863132);
   hbadmatch_stack_1->SetBinContent(19,3.813335);
   hbadmatch_stack_1->SetBinContent(20,4.84673);
   hbadmatch_stack_1->SetBinContent(21,7.854723);
   hbadmatch_stack_1->SetBinContent(22,7.662426);
   hbadmatch_stack_1->SetBinContent(23,8.944838);
   hbadmatch_stack_1->SetBinContent(24,10.39532);
   hbadmatch_stack_1->SetBinError(1,1.614494);
   hbadmatch_stack_1->SetBinError(2,1.168338);
   hbadmatch_stack_1->SetBinError(3,0.7590182);
   hbadmatch_stack_1->SetBinError(4,0.8593828);
   hbadmatch_stack_1->SetBinError(5,1.771669);
   hbadmatch_stack_1->SetBinError(6,0.7761748);
   hbadmatch_stack_1->SetBinError(7,0.929758);
   hbadmatch_stack_1->SetBinError(8,0.9900997);
   hbadmatch_stack_1->SetBinError(9,0.6206425);
   hbadmatch_stack_1->SetBinError(10,0.6214735);
   hbadmatch_stack_1->SetBinError(11,0.6906121);
   hbadmatch_stack_1->SetBinError(12,0.8985958);
   hbadmatch_stack_1->SetBinError(13,0.7284442);
   hbadmatch_stack_1->SetBinError(14,1.020428);
   hbadmatch_stack_1->SetBinError(15,1.105693);
   hbadmatch_stack_1->SetBinError(16,0.8221319);
   hbadmatch_stack_1->SetBinError(17,0.7570938);
   hbadmatch_stack_1->SetBinError(18,1.03522);
   hbadmatch_stack_1->SetBinError(19,1.022086);
   hbadmatch_stack_1->SetBinError(20,1.132081);
   hbadmatch_stack_1->SetBinError(21,2.133417);
   hbadmatch_stack_1->SetBinError(22,1.389672);
   hbadmatch_stack_1->SetBinError(23,1.79967);
   hbadmatch_stack_1->SetBinError(24,1.810058);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,35.29563);
   hext_stack_2->SetBinContent(2,19.98067);
   hext_stack_2->SetBinContent(3,14.79145);
   hext_stack_2->SetBinContent(4,7.697792);
   hext_stack_2->SetBinContent(5,9.577972);
   hext_stack_2->SetBinContent(6,15.62783);
   hext_stack_2->SetBinContent(7,13.08008);
   hext_stack_2->SetBinContent(8,12.0291);
   hext_stack_2->SetBinContent(9,9.260756);
   hext_stack_2->SetBinContent(10,13.42048);
   hext_stack_2->SetBinContent(11,17.06387);
   hext_stack_2->SetBinContent(12,10.58146);
   hext_stack_2->SetBinContent(13,9.987343);
   hext_stack_2->SetBinContent(14,23.53468);
   hext_stack_2->SetBinContent(15,15.37404);
   hext_stack_2->SetBinContent(16,12.00598);
   hext_stack_2->SetBinContent(17,11.75219);
   hext_stack_2->SetBinContent(18,17.06664);
   hext_stack_2->SetBinContent(19,19.02902);
   hext_stack_2->SetBinContent(20,22.65528);
   hext_stack_2->SetBinContent(21,26.2799);
   hext_stack_2->SetBinContent(22,41.51272);
   hext_stack_2->SetBinContent(23,49.66618);
   hext_stack_2->SetBinContent(24,50.17369);
   hext_stack_2->SetBinError(1,4.143685);
   hext_stack_2->SetBinError(2,3.025231);
   hext_stack_2->SetBinError(3,2.580797);
   hext_stack_2->SetBinError(4,1.771487);
   hext_stack_2->SetBinError(5,1.943842);
   hext_stack_2->SetBinError(6,2.61897);
   hext_stack_2->SetBinError(7,2.505087);
   hext_stack_2->SetBinError(8,2.456581);
   hext_stack_2->SetBinError(9,1.863354);
   hext_stack_2->SetBinError(10,2.539633);
   hext_stack_2->SetBinError(11,2.805102);
   hext_stack_2->SetBinError(12,2.256386);
   hext_stack_2->SetBinError(13,1.899348);
   hext_stack_2->SetBinError(14,3.272919);
   hext_stack_2->SetBinError(15,2.622963);
   hext_stack_2->SetBinError(16,2.199213);
   hext_stack_2->SetBinError(17,2.203967);
   hext_stack_2->SetBinError(18,2.744499);
   hext_stack_2->SetBinError(19,2.869271);
   hext_stack_2->SetBinError(20,3.2234);
   hext_stack_2->SetBinError(21,3.475118);
   hext_stack_2->SetBinError(22,4.324818);
   hext_stack_2->SetBinError(23,4.768365);
   hext_stack_2->SetBinError(24,4.901617);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,8.219748);
   hdirt_stack_3->SetBinContent(2,1.345224);
   hdirt_stack_3->SetBinContent(3,2.241329);
   hdirt_stack_3->SetBinContent(4,2.748583);
   hdirt_stack_3->SetBinContent(5,2.584002);
   hdirt_stack_3->SetBinContent(6,1.190193);
   hdirt_stack_3->SetBinContent(7,1.056477);
   hdirt_stack_3->SetBinContent(8,1.885248);
   hdirt_stack_3->SetBinContent(9,1.597946);
   hdirt_stack_3->SetBinContent(10,0.6402747);
   hdirt_stack_3->SetBinContent(11,0.994874);
   hdirt_stack_3->SetBinContent(12,0.5522859);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,1.271017);
   hdirt_stack_3->SetBinContent(15,0.9265872);
   hdirt_stack_3->SetBinContent(16,1.421019);
   hdirt_stack_3->SetBinContent(17,2.392161);
   hdirt_stack_3->SetBinContent(18,0.6093819);
   hdirt_stack_3->SetBinContent(19,2.024176);
   hdirt_stack_3->SetBinContent(20,3.108966);
   hdirt_stack_3->SetBinContent(21,2.640047);
   hdirt_stack_3->SetBinContent(22,4.142894);
   hdirt_stack_3->SetBinContent(23,6.595825);
   hdirt_stack_3->SetBinContent(24,6.427017);
   hdirt_stack_3->SetBinError(1,1.480643);
   hdirt_stack_3->SetBinError(2,0.6435563);
   hdirt_stack_3->SetBinError(3,0.7780147);
   hdirt_stack_3->SetBinError(4,0.8426701);
   hdirt_stack_3->SetBinError(5,0.9294305);
   hdirt_stack_3->SetBinError(6,0.5170999);
   hdirt_stack_3->SetBinError(7,0.4671005);
   hdirt_stack_3->SetBinError(8,0.7048562);
   hdirt_stack_3->SetBinError(9,0.7020797);
   hdirt_stack_3->SetBinError(10,0.376391);
   hdirt_stack_3->SetBinError(11,0.5080516);
   hdirt_stack_3->SetBinError(12,0.2761429);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.5442829);
   hdirt_stack_3->SetBinError(15,0.4825805);
   hdirt_stack_3->SetBinError(16,0.5857487);
   hdirt_stack_3->SetBinError(17,1.126559);
   hdirt_stack_3->SetBinError(18,0.3615138);
   hdirt_stack_3->SetBinError(19,0.7078501);
   hdirt_stack_3->SetBinError(20,0.9248758);
   hdirt_stack_3->SetBinError(21,0.791419);
   hdirt_stack_3->SetBinError(22,1.067081);
   hdirt_stack_3->SetBinError(23,1.704348);
   hdirt_stack_3->SetBinError(24,1.412201);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,65.48595);
   houtFV_stack_4->SetBinContent(2,30.45666);
   houtFV_stack_4->SetBinContent(3,17.35542);
   houtFV_stack_4->SetBinContent(4,13.94104);
   houtFV_stack_4->SetBinContent(5,13.50505);
   houtFV_stack_4->SetBinContent(6,8.559542);
   houtFV_stack_4->SetBinContent(7,13.00594);
   houtFV_stack_4->SetBinContent(8,13.1931);
   houtFV_stack_4->SetBinContent(9,8.675546);
   houtFV_stack_4->SetBinContent(10,7.820806);
   houtFV_stack_4->SetBinContent(11,6.253845);
   houtFV_stack_4->SetBinContent(12,10.92718);
   houtFV_stack_4->SetBinContent(13,13.45927);
   houtFV_stack_4->SetBinContent(14,13.43053);
   houtFV_stack_4->SetBinContent(15,15.95379);
   houtFV_stack_4->SetBinContent(16,15.40243);
   houtFV_stack_4->SetBinContent(17,15.64541);
   houtFV_stack_4->SetBinContent(18,19.78662);
   houtFV_stack_4->SetBinContent(19,21.79175);
   houtFV_stack_4->SetBinContent(20,20.19776);
   houtFV_stack_4->SetBinContent(21,33.0051);
   houtFV_stack_4->SetBinContent(22,34.78487);
   houtFV_stack_4->SetBinContent(23,42.89685);
   houtFV_stack_4->SetBinContent(24,50.32943);
   houtFV_stack_4->SetBinError(1,4.04408);
   houtFV_stack_4->SetBinError(2,2.753122);
   houtFV_stack_4->SetBinError(3,2.058429);
   houtFV_stack_4->SetBinError(4,1.848731);
   houtFV_stack_4->SetBinError(5,1.914394);
   houtFV_stack_4->SetBinError(6,1.4365);
   houtFV_stack_4->SetBinError(7,1.799466);
   houtFV_stack_4->SetBinError(8,2.184254);
   houtFV_stack_4->SetBinError(9,1.45256);
   houtFV_stack_4->SetBinError(10,1.387778);
   houtFV_stack_4->SetBinError(11,1.272399);
   houtFV_stack_4->SetBinError(12,1.635057);
   houtFV_stack_4->SetBinError(13,1.881694);
   houtFV_stack_4->SetBinError(14,1.828006);
   houtFV_stack_4->SetBinError(15,1.956151);
   houtFV_stack_4->SetBinError(16,1.908777);
   houtFV_stack_4->SetBinError(17,1.891779);
   houtFV_stack_4->SetBinError(18,2.24124);
   houtFV_stack_4->SetBinError(19,2.412343);
   houtFV_stack_4->SetBinError(20,2.270266);
   houtFV_stack_4->SetBinError(21,3.032073);
   houtFV_stack_4->SetBinError(22,2.943569);
   houtFV_stack_4->SetBinError(23,3.319574);
   houtFV_stack_4->SetBinError(24,3.616497);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.32934);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.844984);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.812844);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.546462);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.032804);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.660726);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.338376);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.08694);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.898376);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.855362);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.350994);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.924444);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.482948);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.608662);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.76702);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.886166);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.944701);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.31065);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.241559);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.511518);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,10.76297);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,11.81072);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,12.64773);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,8.128893);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8314086);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5909216);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4567469);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3948975);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3564798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.499615);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4032689);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3001705);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5312666);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5182246);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3431272);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4601427);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5705929);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5381206);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7017255);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5399856);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5316311);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7246008);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6613195);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8020611);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.091235);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.139308);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.210745);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.9020598);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5161542);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3477539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.003408);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2943888);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1731161);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3471685);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.158647);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,94.63535);
   hNCpi0inFVres_stack_7->SetBinContent(2,44.17101);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.1738);
   hNCpi0inFVres_stack_7->SetBinContent(4,25.97549);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.92559);
   hNCpi0inFVres_stack_7->SetBinContent(6,24.53981);
   hNCpi0inFVres_stack_7->SetBinContent(7,24.80935);
   hNCpi0inFVres_stack_7->SetBinContent(8,26.49466);
   hNCpi0inFVres_stack_7->SetBinContent(9,26.24404);
   hNCpi0inFVres_stack_7->SetBinContent(10,29.26721);
   hNCpi0inFVres_stack_7->SetBinContent(11,32.73362);
   hNCpi0inFVres_stack_7->SetBinContent(12,37.98418);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.97626);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.07294);
   hNCpi0inFVres_stack_7->SetBinContent(15,54.47018);
   hNCpi0inFVres_stack_7->SetBinContent(16,54.40605);
   hNCpi0inFVres_stack_7->SetBinContent(17,61.65726);
   hNCpi0inFVres_stack_7->SetBinContent(18,72.53015);
   hNCpi0inFVres_stack_7->SetBinContent(19,75.50813);
   hNCpi0inFVres_stack_7->SetBinContent(20,92.04031);
   hNCpi0inFVres_stack_7->SetBinContent(21,97.72961);
   hNCpi0inFVres_stack_7->SetBinContent(22,101.0056);
   hNCpi0inFVres_stack_7->SetBinContent(23,99.47849);
   hNCpi0inFVres_stack_7->SetBinContent(24,71.83085);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,3.161696);
   hNCpi0inFVres_stack_7->SetBinError(2,2.13297);
   hNCpi0inFVres_stack_7->SetBinError(3,1.765283);
   hNCpi0inFVres_stack_7->SetBinError(4,1.619957);
   hNCpi0inFVres_stack_7->SetBinError(5,1.57181);
   hNCpi0inFVres_stack_7->SetBinError(6,1.611425);
   hNCpi0inFVres_stack_7->SetBinError(7,1.641241);
   hNCpi0inFVres_stack_7->SetBinError(8,1.735376);
   hNCpi0inFVres_stack_7->SetBinError(9,1.677421);
   hNCpi0inFVres_stack_7->SetBinError(10,1.746832);
   hNCpi0inFVres_stack_7->SetBinError(11,1.804785);
   hNCpi0inFVres_stack_7->SetBinError(12,2.040298);
   hNCpi0inFVres_stack_7->SetBinError(13,2.194961);
   hNCpi0inFVres_stack_7->SetBinError(14,2.198794);
   hNCpi0inFVres_stack_7->SetBinError(15,2.490205);
   hNCpi0inFVres_stack_7->SetBinError(16,2.421234);
   hNCpi0inFVres_stack_7->SetBinError(17,2.581489);
   hNCpi0inFVres_stack_7->SetBinError(18,2.770367);
   hNCpi0inFVres_stack_7->SetBinError(19,2.747843);
   hNCpi0inFVres_stack_7->SetBinError(20,3.162743);
   hNCpi0inFVres_stack_7->SetBinError(21,3.228894);
   hNCpi0inFVres_stack_7->SetBinError(22,3.240355);
   hNCpi0inFVres_stack_7->SetBinError(23,3.203348);
   hNCpi0inFVres_stack_7->SetBinError(24,2.793975);
   hNCpi0inFVres_stack_7->SetBinError(25,0.04832419);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,19.36915);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.383803);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.815346);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.504206);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.8787);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.464768);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.225038);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.951358);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.684728);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.563581);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.180294);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.075262);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.257608);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.620453);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.549057);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.911182);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.27804);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.97596);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.38982);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.86636);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.64102);
   hNCpi0inFVdis_stack_8->SetBinContent(22,23.08933);
   hNCpi0inFVdis_stack_8->SetBinContent(23,26.1361);
   hNCpi0inFVdis_stack_8->SetBinContent(24,16.84086);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.42453);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7584552);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7725648);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6697027);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7341618);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7668762);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6387164);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7971531);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7117298);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7767518);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8872689);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.974148);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9663254);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7455589);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9294732);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.037074);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.087186);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.144732);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.244301);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.263827);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.53297);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.52731);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.675913);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.290342);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,50.18612);
   hCCpi0inFV_stack_10->SetBinContent(2,14.1727);
   hCCpi0inFV_stack_10->SetBinContent(3,11.82317);
   hCCpi0inFV_stack_10->SetBinContent(4,9.858475);
   hCCpi0inFV_stack_10->SetBinContent(5,10.42707);
   hCCpi0inFV_stack_10->SetBinContent(6,13.84605);
   hCCpi0inFV_stack_10->SetBinContent(7,11.64872);
   hCCpi0inFV_stack_10->SetBinContent(8,8.455752);
   hCCpi0inFV_stack_10->SetBinContent(9,12.11349);
   hCCpi0inFV_stack_10->SetBinContent(10,12.21254);
   hCCpi0inFV_stack_10->SetBinContent(11,13.79447);
   hCCpi0inFV_stack_10->SetBinContent(12,12.85402);
   hCCpi0inFV_stack_10->SetBinContent(13,15.8324);
   hCCpi0inFV_stack_10->SetBinContent(14,18.57106);
   hCCpi0inFV_stack_10->SetBinContent(15,27.99401);
   hCCpi0inFV_stack_10->SetBinContent(16,25.27757);
   hCCpi0inFV_stack_10->SetBinContent(17,24.50667);
   hCCpi0inFV_stack_10->SetBinContent(18,31.67221);
   hCCpi0inFV_stack_10->SetBinContent(19,30.73622);
   hCCpi0inFV_stack_10->SetBinContent(20,38.81672);
   hCCpi0inFV_stack_10->SetBinContent(21,47.47534);
   hCCpi0inFV_stack_10->SetBinContent(22,50.78033);
   hCCpi0inFV_stack_10->SetBinContent(23,50.74089);
   hCCpi0inFV_stack_10->SetBinContent(24,35.32882);
   hCCpi0inFV_stack_10->SetBinError(1,3.5509);
   hCCpi0inFV_stack_10->SetBinError(2,1.861441);
   hCCpi0inFV_stack_10->SetBinError(3,1.69325);
   hCCpi0inFV_stack_10->SetBinError(4,1.551034);
   hCCpi0inFV_stack_10->SetBinError(5,1.647132);
   hCCpi0inFV_stack_10->SetBinError(6,1.891807);
   hCCpi0inFV_stack_10->SetBinError(7,1.742655);
   hCCpi0inFV_stack_10->SetBinError(8,1.414348);
   hCCpi0inFV_stack_10->SetBinError(9,1.680443);
   hCCpi0inFV_stack_10->SetBinError(10,1.77249);
   hCCpi0inFV_stack_10->SetBinError(11,1.863953);
   hCCpi0inFV_stack_10->SetBinError(12,1.777004);
   hCCpi0inFV_stack_10->SetBinError(13,2.002555);
   hCCpi0inFV_stack_10->SetBinError(14,2.197301);
   hCCpi0inFV_stack_10->SetBinError(15,2.647299);
   hCCpi0inFV_stack_10->SetBinError(16,2.584711);
   hCCpi0inFV_stack_10->SetBinError(17,2.495209);
   hCCpi0inFV_stack_10->SetBinError(18,2.846113);
   hCCpi0inFV_stack_10->SetBinError(19,2.773182);
   hCCpi0inFV_stack_10->SetBinError(20,3.132826);
   hCCpi0inFV_stack_10->SetBinError(21,3.473082);
   hCCpi0inFV_stack_10->SetBinError(22,3.524328);
   hCCpi0inFV_stack_10->SetBinError(23,3.558416);
   hCCpi0inFV_stack_10->SetBinError(24,2.96676);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,16.33657);
   hNCinFV_stack_11->SetBinContent(2,6.885411);
   hNCinFV_stack_11->SetBinContent(3,8.007986);
   hNCinFV_stack_11->SetBinContent(4,6.202282);
   hNCinFV_stack_11->SetBinContent(5,3.912939);
   hNCinFV_stack_11->SetBinContent(6,5.61829);
   hNCinFV_stack_11->SetBinContent(7,5.036597);
   hNCinFV_stack_11->SetBinContent(8,4.498013);
   hNCinFV_stack_11->SetBinContent(9,5.484972);
   hNCinFV_stack_11->SetBinContent(10,6.893863);
   hNCinFV_stack_11->SetBinContent(11,6.484136);
   hNCinFV_stack_11->SetBinContent(12,6.160255);
   hNCinFV_stack_11->SetBinContent(13,7.130916);
   hNCinFV_stack_11->SetBinContent(14,7.872368);
   hNCinFV_stack_11->SetBinContent(15,8.718659);
   hNCinFV_stack_11->SetBinContent(16,8.359389);
   hNCinFV_stack_11->SetBinContent(17,11.96573);
   hNCinFV_stack_11->SetBinContent(18,9.332823);
   hNCinFV_stack_11->SetBinContent(19,13.68122);
   hNCinFV_stack_11->SetBinContent(20,11.82226);
   hNCinFV_stack_11->SetBinContent(21,16.41218);
   hNCinFV_stack_11->SetBinContent(22,20.4181);
   hNCinFV_stack_11->SetBinContent(23,19.48162);
   hNCinFV_stack_11->SetBinContent(24,17.524);
   hNCinFV_stack_11->SetBinError(1,1.972467);
   hNCinFV_stack_11->SetBinError(2,1.300818);
   hNCinFV_stack_11->SetBinError(3,1.469448);
   hNCinFV_stack_11->SetBinError(4,1.287629);
   hNCinFV_stack_11->SetBinError(5,0.981813);
   hNCinFV_stack_11->SetBinError(6,1.160138);
   hNCinFV_stack_11->SetBinError(7,1.110469);
   hNCinFV_stack_11->SetBinError(8,1.038297);
   hNCinFV_stack_11->SetBinError(9,1.128215);
   hNCinFV_stack_11->SetBinError(10,1.30209);
   hNCinFV_stack_11->SetBinError(11,1.345381);
   hNCinFV_stack_11->SetBinError(12,1.225694);
   hNCinFV_stack_11->SetBinError(13,1.374459);
   hNCinFV_stack_11->SetBinError(14,1.373658);
   hNCinFV_stack_11->SetBinError(15,1.550454);
   hNCinFV_stack_11->SetBinError(16,1.442569);
   hNCinFV_stack_11->SetBinError(17,1.755447);
   hNCinFV_stack_11->SetBinError(18,1.506824);
   hNCinFV_stack_11->SetBinError(19,1.862131);
   hNCinFV_stack_11->SetBinError(20,1.73337);
   hNCinFV_stack_11->SetBinError(21,2.04906);
   hNCinFV_stack_11->SetBinError(22,2.25403);
   hNCinFV_stack_11->SetBinError(23,2.246067);
   hNCinFV_stack_11->SetBinError(24,2.112627);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,16.10396);
   hnumuCCinFV_stack_12->SetBinContent(2,8.207525);
   hnumuCCinFV_stack_12->SetBinContent(3,8.183611);
   hnumuCCinFV_stack_12->SetBinContent(4,6.682041);
   hnumuCCinFV_stack_12->SetBinContent(5,6.033099);
   hnumuCCinFV_stack_12->SetBinContent(6,5.776023);
   hnumuCCinFV_stack_12->SetBinContent(7,8.482217);
   hnumuCCinFV_stack_12->SetBinContent(8,5.663033);
   hnumuCCinFV_stack_12->SetBinContent(9,6.232205);
   hnumuCCinFV_stack_12->SetBinContent(10,6.923235);
   hnumuCCinFV_stack_12->SetBinContent(11,8.867846);
   hnumuCCinFV_stack_12->SetBinContent(12,8.219535);
   hnumuCCinFV_stack_12->SetBinContent(13,9.504022);
   hnumuCCinFV_stack_12->SetBinContent(14,9.28722);
   hnumuCCinFV_stack_12->SetBinContent(15,10.252);
   hnumuCCinFV_stack_12->SetBinContent(16,8.816727);
   hnumuCCinFV_stack_12->SetBinContent(17,8.307459);
   hnumuCCinFV_stack_12->SetBinContent(18,14.0854);
   hnumuCCinFV_stack_12->SetBinContent(19,11.97776);
   hnumuCCinFV_stack_12->SetBinContent(20,15.70835);
   hnumuCCinFV_stack_12->SetBinContent(21,17.97087);
   hnumuCCinFV_stack_12->SetBinContent(22,22.83504);
   hnumuCCinFV_stack_12->SetBinContent(23,20.99054);
   hnumuCCinFV_stack_12->SetBinContent(24,21.94627);
   hnumuCCinFV_stack_12->SetBinError(1,2.935466);
   hnumuCCinFV_stack_12->SetBinError(2,1.434094);
   hnumuCCinFV_stack_12->SetBinError(3,1.538378);
   hnumuCCinFV_stack_12->SetBinError(4,1.38347);
   hnumuCCinFV_stack_12->SetBinError(5,1.260174);
   hnumuCCinFV_stack_12->SetBinError(6,1.204206);
   hnumuCCinFV_stack_12->SetBinError(7,1.516317);
   hnumuCCinFV_stack_12->SetBinError(8,1.304001);
   hnumuCCinFV_stack_12->SetBinError(9,1.258716);
   hnumuCCinFV_stack_12->SetBinError(10,1.350308);
   hnumuCCinFV_stack_12->SetBinError(11,1.628888);
   hnumuCCinFV_stack_12->SetBinError(12,1.525324);
   hnumuCCinFV_stack_12->SetBinError(13,1.727943);
   hnumuCCinFV_stack_12->SetBinError(14,1.541708);
   hnumuCCinFV_stack_12->SetBinError(15,2.026923);
   hnumuCCinFV_stack_12->SetBinError(16,1.747168);
   hnumuCCinFV_stack_12->SetBinError(17,2.308274);
   hnumuCCinFV_stack_12->SetBinError(18,2.498951);
   hnumuCCinFV_stack_12->SetBinError(19,2.26381);
   hnumuCCinFV_stack_12->SetBinError(20,2.135111);
   hnumuCCinFV_stack_12->SetBinError(21,2.292252);
   hnumuCCinFV_stack_12->SetBinError(22,3.010443);
   hnumuCCinFV_stack_12->SetBinError(23,2.597619);
   hnumuCCinFV_stack_12->SetBinError(24,2.397578);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,4.718888);
   hnueCCinFV_stack_13->SetBinContent(2,1.812027);
   hnueCCinFV_stack_13->SetBinContent(3,0.691541);
   hnueCCinFV_stack_13->SetBinContent(4,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(5,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(6,0.5017868);
   hnueCCinFV_stack_13->SetBinContent(7,1.607156);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(12,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(15,1.034085e-05);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(19,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(20,2.489528);
   hnueCCinFV_stack_13->SetBinContent(21,2.292302);
   hnueCCinFV_stack_13->SetBinContent(22,2.308999);
   hnueCCinFV_stack_13->SetBinContent(23,3.683871);
   hnueCCinFV_stack_13->SetBinContent(24,8.962597);
   hnueCCinFV_stack_13->SetBinError(1,1.449712);
   hnueCCinFV_stack_13->SetBinError(2,0.8514542);
   hnueCCinFV_stack_13->SetBinError(3,0.4081814);
   hnueCCinFV_stack_13->SetBinError(4,0.4394482);
   hnueCCinFV_stack_13->SetBinError(5,0.4961329);
   hnueCCinFV_stack_13->SetBinError(6,0.5017869);
   hnueCCinFV_stack_13->SetBinError(7,0.6901967);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3963213);
   hnueCCinFV_stack_13->SetBinError(12,0.4156841);
   hnueCCinFV_stack_13->SetBinError(15,1.034085e-05);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.3152389);
   hnueCCinFV_stack_13->SetBinError(19,0.2781975);
   hnueCCinFV_stack_13->SetBinError(20,1.019401);
   hnueCCinFV_stack_13->SetBinError(21,1.383051);
   hnueCCinFV_stack_13->SetBinError(22,0.7511329);
   hnueCCinFV_stack_13->SetBinError(23,1.077506);
   hnueCCinFV_stack_13->SetBinError(24,2.301941);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__11->SetBinContent(1,324.8189);
   hmcerror__11->SetBinContent(2,140.9779);
   hmcerror__11->SetBinContent(3,103.1984);
   hmcerror__11->SetBinContent(4,82.62844);
   hmcerror__11->SetBinContent(5,79.7537);
   hmcerror__11->SetBinContent(6,85.11931);
   hmcerror__11->SetBinContent(7,87.93827);
   hmcerror__11->SetBinContent(8,83.03388);
   hmcerror__11->SetBinContent(9,77.63082);
   hmcerror__11->SetBinContent(10,86.58611);
   hmcerror__11->SetBinContent(11,96.8384);
   hmcerror__11->SetBinContent(12,101.188);
   hmcerror__11->SetBinContent(13,114.4007);
   hmcerror__11->SetBinContent(14,133.3003);
   hmcerror__11->SetBinContent(15,150.6562);
   hmcerror__11->SetBinContent(16,141.6543);
   hmcerror__11->SetBinContent(17,153.5531);
   hmcerror__11->SetBinContent(18,186.7913);
   hmcerror__11->SetBinContent(19,199.033);
   hmcerror__11->SetBinContent(20,234.8445);
   hmcerror__11->SetBinContent(21,284.3152);
   hmcerror__11->SetBinContent(22,321.5779);
   hmcerror__11->SetBinContent(23,341.8213);
   hmcerror__11->SetBinContent(24,298.3335);
   hmcerror__11->SetBinContent(25,0.1115999);
   hmcerror__11->SetBinError(1,73.74692);
   hmcerror__11->SetBinError(2,38.58752);
   hmcerror__11->SetBinError(3,30.95113);
   hmcerror__11->SetBinError(4,24.93618);
   hmcerror__11->SetBinError(5,28.91887);
   hmcerror__11->SetBinError(6,27.65551);
   hmcerror__11->SetBinError(7,29.92986);
   hmcerror__11->SetBinError(8,30.23609);
   hmcerror__11->SetBinError(9,24.35723);
   hmcerror__11->SetBinError(10,24.6948);
   hmcerror__11->SetBinError(11,25.08237);
   hmcerror__11->SetBinError(12,27.12975);
   hmcerror__11->SetBinError(13,33.67374);
   hmcerror__11->SetBinError(14,35.93181);
   hmcerror__11->SetBinError(15,44.55233);
   hmcerror__11->SetBinError(16,44.36549);
   hmcerror__11->SetBinError(17,46.66829);
   hmcerror__11->SetBinError(18,51.08388);
   hmcerror__11->SetBinError(19,51.7559);
   hmcerror__11->SetBinError(20,62.74373);
   hmcerror__11->SetBinError(21,75.73787);
   hmcerror__11->SetBinError(22,85.08664);
   hmcerror__11->SetBinError(23,78.93495);
   hmcerror__11->SetBinError(24,71.11292);
   hmcerror__11->SetBinError(25,0.4409865);
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
   
   Double_t _fx3013[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3013[24] = {
   343,
   159,
   108,
   94,
   80,
   87,
   89,
   76,
   89,
   94,
   105,
   101,
   122,
   117,
   150,
   139,
   153,
   200,
   186,
   206,
   245,
   284,
   291,
   305};
   Double_t _felx3013[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3013[24] = {
   18.52026,
   12.60952,
   10.3923,
   9.8173,
   9.0683,
   9.4503,
   9.5566,
   8.8425,
   9.5566,
   9.8173,
   10.24695,
   10.04988,
   11.04536,
   10.81665,
   12.24745,
   11.78983,
   12.36932,
   14.14214,
   13.63818,
   14.3527,
   15.65248,
   16.8523,
   17.05872,
   17.46425};
   Double_t _fehx3013[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3013[24] = {
   18.52026,
   12.60952,
   10.3923,
   9.616,
   8.8665,
   9.2488,
   9.3552,
   8.6406,
   9.3552,
   9.616,
   10.24695,
   10.04988,
   11.04536,
   10.81665,
   12.24745,
   11.78983,
   12.36932,
   14.14214,
   13.63818,
   14.3527,
   15.65248,
   16.8523,
   17.05872,
   17.46425};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(37.72122);
   Graph_Graph3013->SetMaximum(390.9565);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/24","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3014[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3014[24] = {
   0.2270401,
   0.2737132,
   0.2999186,
   0.3017869,
   0.3626022,
   0.3249029,
   0.3403508,
   0.3641415,
   0.3137572,
   0.2852051,
   0.2590126,
   0.2681123,
   0.294349,
   0.2695554,
   0.2957219,
   0.3131956,
   0.3039228,
   0.2734811,
   0.2600368,
   0.2671714,
   0.266387,
   0.2645911,
   0.2309246,
   0.2383672};
   Double_t _fehx3014[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3014[24] = {
   0.2270401,
   0.2737132,
   0.2999186,
   0.3017869,
   0.3626022,
   0.3249029,
   0.3403508,
   0.3641415,
   0.3137572,
   0.2852051,
   0.2590126,
   0.2681123,
   0.294349,
   0.2695554,
   0.2957219,
   0.3131956,
   0.3039228,
   0.2734811,
   0.2600368,
   0.2671714,
   0.266387,
   0.2645911,
   0.2309246,
   0.2383672};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3015[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3015[24] = {
   0.1864462,
   0.1936943,
   0.1870349,
   0.1967382,
   0.1940777,
   0.1762215,
   0.1846939,
   0.2037821,
   0.2059284,
   0.2053988,
   0.2013155,
   0.2008589,
   0.1999831,
   0.1927314,
   0.1994799,
   0.2181242,
   0.2176682,
   0.211733,
   0.2174472,
   0.2136868,
   0.2192072,
   0.2116351,
   0.1980303,
   0.1739607};
   Double_t _fehx3015[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3015[24] = {
   0.1864462,
   0.1936943,
   0.1870349,
   0.1967382,
   0.1940777,
   0.1762215,
   0.1846939,
   0.2037821,
   0.2059284,
   0.2053988,
   0.2013155,
   0.2008589,
   0.1999831,
   0.1927314,
   0.1994799,
   0.2181242,
   0.2176682,
   0.211733,
   0.2174472,
   0.2136868,
   0.2192072,
   0.2116351,
   0.1980303,
   0.1739607};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3016[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3016[24] = {
   1.055973,
   1.127836,
   1.046527,
   1.137623,
   1.003088,
   1.022095,
   1.012074,
   0.915289,
   1.146452,
   1.085625,
   1.084281,
   0.998142,
   1.066427,
   0.8777177,
   0.9956446,
   0.9812624,
   0.9963978,
   1.070714,
   0.9345185,
   0.8771762,
   0.8617198,
   0.8831454,
   0.8513221,
   1.022346};
   Double_t _felx3016[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3016[24] = {
   0.05701718,
   0.08944324,
   0.1007021,
   0.1188126,
   0.1137038,
   0.1110242,
   0.108674,
   0.1064927,
   0.1231032,
   0.1133819,
   0.105815,
   0.09931884,
   0.09654974,
   0.08114503,
   0.08129404,
   0.08322959,
   0.08055399,
   0.07571089,
   0.06852222,
   0.06111576,
   0.05505326,
   0.05240504,
   0.04990539,
   0.05853935};
   Double_t _fehx3016[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3016[24] = {
   0.05701718,
   0.08944324,
   0.1007021,
   0.1163764,
   0.1111735,
   0.1086569,
   0.1063837,
   0.1040611,
   0.1205088,
   0.1110571,
   0.105815,
   0.09931884,
   0.09654974,
   0.08114503,
   0.08129404,
   0.08322959,
   0.08055399,
   0.07571089,
   0.06852222,
   0.06111576,
   0.05505326,
   0.05240504,
   0.04990539,
   0.05853935};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.7495339);
   Graph_Graph3016->SetMaximum(1.314);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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

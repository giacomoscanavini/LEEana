void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar 31 00:48:08 2022) by ROOT version 6.14/06
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-27.69231,-0.3672471,203.0769,30.9454);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmc__7->SetBinContent(1,2.574757);
   hmc__7->SetBinContent(2,9.137841);
   hmc__7->SetBinContent(3,13.73147);
   hmc__7->SetBinContent(4,15.11501);
   hmc__7->SetBinContent(5,16.71659);
   hmc__7->SetBinContent(6,16.41648);
   hmc__7->SetBinContent(7,18.36235);
   hmc__7->SetBinContent(8,16.29856);
   hmc__7->SetBinContent(9,16.56366);
   hmc__7->SetBinContent(10,15.1755);
   hmc__7->SetBinContent(11,14.19972);
   hmc__7->SetBinContent(12,13.98137);
   hmc__7->SetBinContent(13,10.61252);
   hmc__7->SetBinContent(14,8.836765);
   hmc__7->SetBinContent(15,8.970328);
   hmc__7->SetBinContent(16,9.728687);
   hmc__7->SetBinContent(17,7.665534);
   hmc__7->SetBinContent(18,5.606534);
   hmc__7->SetBinContent(19,6.486218);
   hmc__7->SetBinContent(20,5.937451);
   hmc__7->SetBinContent(21,4.171509);
   hmc__7->SetBinContent(22,4.145265);
   hmc__7->SetBinContent(23,2.615923);
   hmc__7->SetBinContent(24,0.7630813);
   hmc__7->SetBinError(1,1.399778);
   hmc__7->SetBinError(2,3.146675);
   hmc__7->SetBinError(3,4.418608);
   hmc__7->SetBinError(4,5.494733);
   hmc__7->SetBinError(5,4.552438);
   hmc__7->SetBinError(6,5.535587);
   hmc__7->SetBinError(7,6.744316);
   hmc__7->SetBinError(8,5.895061);
   hmc__7->SetBinError(9,5.373339);
   hmc__7->SetBinError(10,4.810243);
   hmc__7->SetBinError(11,4.635461);
   hmc__7->SetBinError(12,4.363518);
   hmc__7->SetBinError(13,4.346158);
   hmc__7->SetBinError(14,3.48755);
   hmc__7->SetBinError(15,2.880095);
   hmc__7->SetBinError(16,3.137908);
   hmc__7->SetBinError(17,2.700251);
   hmc__7->SetBinError(18,2.25389);
   hmc__7->SetBinError(19,2.817611);
   hmc__7->SetBinError(20,2.635549);
   hmc__7->SetBinError(21,2.379674);
   hmc__7->SetBinError(22,3.065358);
   hmc__7->SetBinError(23,1.417705);
   hmc__7->SetBinError(24,0.9214471);
   hmc__7->SetBinError(25,0.125509);
   hmc__7->SetMinimum(-0.3672471);
   hmc__7->SetMaximum(29.37977);
   hmc__7->SetEntries(240.4242);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetLabelSize(0.035);
   hmc__7->GetXaxis()->SetTitleSize(0.035);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetLabelSize(0.035);
   hmc__7->GetZaxis()->SetTitleSize(0.035);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,180);
   hs3_stack_3->SetMinimum(-1.636286e-09);
   hs3_stack_3->SetMaximum(19.28047);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(2,0.07470649);
   hbadmatch_stack_1->SetBinContent(3,0.3712662);
   hbadmatch_stack_1->SetBinContent(4,0.1396788);
   hbadmatch_stack_1->SetBinContent(5,0.1700039);
   hbadmatch_stack_1->SetBinContent(6,0.1957279);
   hbadmatch_stack_1->SetBinContent(7,0.2204074);
   hbadmatch_stack_1->SetBinContent(8,0.1163419);
   hbadmatch_stack_1->SetBinContent(9,0.1025582);
   hbadmatch_stack_1->SetBinContent(10,0.2520894);
   hbadmatch_stack_1->SetBinContent(11,0.2690082);
   hbadmatch_stack_1->SetBinContent(12,0.8165612);
   hbadmatch_stack_1->SetBinContent(13,0.2273359);
   hbadmatch_stack_1->SetBinContent(14,0.1314116);
   hbadmatch_stack_1->SetBinContent(15,0.2368963);
   hbadmatch_stack_1->SetBinContent(16,0.1366628);
   hbadmatch_stack_1->SetBinContent(17,0.1162911);
   hbadmatch_stack_1->SetBinContent(18,0.07470649);
   hbadmatch_stack_1->SetBinContent(19,0.02550039);
   hbadmatch_stack_1->SetBinContent(20,0.1986191);
   hbadmatch_stack_1->SetBinContent(21,0.1410561);
   hbadmatch_stack_1->SetBinContent(22,0.03825059);
   hbadmatch_stack_1->SetBinContent(23,0.07470649);
   hbadmatch_stack_1->SetBinError(2,0.06325464);
   hbadmatch_stack_1->SetBinError(3,0.15046);
   hbadmatch_stack_1->SetBinError(4,0.08902661);
   hbadmatch_stack_1->SetBinError(5,0.0917948);
   hbadmatch_stack_1->SetBinError(6,0.09774614);
   hbadmatch_stack_1->SetBinError(7,0.0988188);
   hbadmatch_stack_1->SetBinError(8,0.06768377);
   hbadmatch_stack_1->SetBinError(9,0.06627044);
   hbadmatch_stack_1->SetBinError(10,0.1113448);
   hbadmatch_stack_1->SetBinError(11,0.1278797);
   hbadmatch_stack_1->SetBinError(12,0.3946489);
   hbadmatch_stack_1->SetBinError(13,0.1177835);
   hbadmatch_stack_1->SetBinError(14,0.06937622);
   hbadmatch_stack_1->SetBinError(15,0.1157397);
   hbadmatch_stack_1->SetBinError(16,0.08854226);
   hbadmatch_stack_1->SetBinError(17,0.07846718);
   hbadmatch_stack_1->SetBinError(18,0.06325464);
   hbadmatch_stack_1->SetBinError(19,0.0180315);
   hbadmatch_stack_1->SetBinError(20,0.1080662);
   hbadmatch_stack_1->SetBinError(21,0.08928081);
   hbadmatch_stack_1->SetBinError(22,0.02208399);
   hbadmatch_stack_1->SetBinError(23,0.06325464);
   hbadmatch_stack_1->SetEntries(113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1452;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleOffset(0);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.02453971);
   hext_stack_2->SetBinContent(2,0.211319);
   hext_stack_2->SetBinContent(3,0.2358586);
   hext_stack_2->SetBinContent(4,0.2849381);
   hext_stack_2->SetBinContent(5,1.528312);
   hext_stack_2->SetBinContent(6,0.6584966);
   hext_stack_2->SetBinContent(7,1.479233);
   hext_stack_2->SetBinContent(8,0.7689253);
   hext_stack_2->SetBinContent(9,0.707576);
   hext_stack_2->SetBinContent(10,0.8670841);
   hext_stack_2->SetBinContent(11,1.292454);
   hext_stack_2->SetBinContent(12,0.9434346);
   hext_stack_2->SetBinContent(13,0.6584966);
   hext_stack_2->SetBinContent(14,0.496257);
   hext_stack_2->SetBinContent(15,0.370827);
   hext_stack_2->SetBinContent(16,0.9188949);
   hext_stack_2->SetBinContent(17,0.6462268);
   hext_stack_2->SetBinContent(18,0.02453971);
   hext_stack_2->SetBinContent(19,0.06134926);
   hext_stack_2->SetBinContent(20,0.07361911);
   hext_stack_2->SetBinContent(21,0.02453971);
   hext_stack_2->SetBinContent(22,0.2235888);
   hext_stack_2->SetBinContent(23,0.02453971);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinError(1,0.01735219);
   hext_stack_2->SetBinError(2,0.1994269);
   hext_stack_2->SetBinError(3,0.2001804);
   hext_stack_2->SetBinError(4,0.2016789);
   hext_stack_2->SetBinError(5,0.5282044);
   hext_stack_2->SetBinError(6,0.3458531);
   hext_stack_2->SetBinError(7,0.527634);
   hext_stack_2->SetBinError(8,0.3478065);
   hext_stack_2->SetBinError(9,0.3467226);
   hext_stack_2->SetBinError(10,0.3495336);
   hext_stack_2->SetBinError(11,0.4888023);
   hext_stack_2->SetBinError(12,0.4003608);
   hext_stack_2->SetBinError(13,0.3458531);
   hext_stack_2->SetBinError(14,0.2836291);
   hext_stack_2->SetBinError(15,0.2042749);
   hext_stack_2->SetBinError(16,0.3999846);
   hext_stack_2->SetBinError(17,0.3456354);
   hext_stack_2->SetBinError(18,0.01735219);
   hext_stack_2->SetBinError(19,0.02743622);
   hext_stack_2->SetBinError(20,0.03005488);
   hext_stack_2->SetBinError(21,0.01735219);
   hext_stack_2->SetBinError(22,0.199804);
   hext_stack_2->SetBinError(23,0.01735219);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetEntries(215);

   ci = 1453;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetLabelSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetLabelSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleOffset(0);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetLabelSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.008219617);
   hdirt_stack_3->SetBinContent(3,0.09875319);
   hdirt_stack_3->SetBinContent(4,0.01643923);
   hdirt_stack_3->SetBinContent(5,0.07757075);
   hdirt_stack_3->SetBinContent(6,0.07865059);
   hdirt_stack_3->SetBinContent(7,1.334357e-09);
   hdirt_stack_3->SetBinContent(8,0.05613519);
   hdirt_stack_3->SetBinContent(9,0.05901156);
   hdirt_stack_3->SetBinContent(10,0.05288891);
   hdirt_stack_3->SetBinContent(11,0.01643923);
   hdirt_stack_3->SetBinContent(12,0.008219617);
   hdirt_stack_3->SetBinContent(13,0.008219617);
   hdirt_stack_3->SetBinContent(14,0.306095);
   hdirt_stack_3->SetBinContent(15,0.08841814);
   hdirt_stack_3->SetBinContent(16,0.08841814);
   hdirt_stack_3->SetBinContent(17,0.008219617);
   hdirt_stack_3->SetBinContent(18,0.008219617);
   hdirt_stack_3->SetBinContent(19,0.04420907);
   hdirt_stack_3->SetBinContent(20,0.008315569);
   hdirt_stack_3->SetBinContent(21,0.07058972);
   hdirt_stack_3->SetBinContent(23,0.08841814);
   hdirt_stack_3->SetBinError(1,0.008219618);
   hdirt_stack_3->SetBinError(3,0.06455977);
   hdirt_stack_3->SetBinError(4,0.01162429);
   hdirt_stack_3->SetBinError(5,0.05350525);
   hdirt_stack_3->SetBinError(6,0.04746397);
   hdirt_stack_3->SetBinError(7,1.334357e-09);
   hdirt_stack_3->SetBinError(8,0.05613519);
   hdirt_stack_3->SetBinError(9,0.05145273);
   hdirt_stack_3->SetBinError(10,0.05288891);
   hdirt_stack_3->SetBinError(11,0.01162429);
   hdirt_stack_3->SetBinError(12,0.008219618);
   hdirt_stack_3->SetBinError(13,0.008219618);
   hdirt_stack_3->SetBinError(14,0.2979887);
   hdirt_stack_3->SetBinError(15,0.06252107);
   hdirt_stack_3->SetBinError(16,0.06252107);
   hdirt_stack_3->SetBinError(17,0.008219618);
   hdirt_stack_3->SetBinError(18,0.008219618);
   hdirt_stack_3->SetBinError(19,0.04420907);
   hdirt_stack_3->SetBinError(20,0.008220178);
   hdirt_stack_3->SetBinError(21,0.05438351);
   hdirt_stack_3->SetBinError(23,0.06252107);
   hdirt_stack_3->SetEntries(40);

   ci = 1454;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleOffset(0);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(2,0.2113693);
   houtFV_stack_4->SetBinContent(3,0.1876636);
   houtFV_stack_4->SetBinContent(4,0.5721515);
   houtFV_stack_4->SetBinContent(5,0.625621);
   houtFV_stack_4->SetBinContent(6,0.6361105);
   houtFV_stack_4->SetBinContent(7,0.8913637);
   houtFV_stack_4->SetBinContent(8,0.5760241);
   houtFV_stack_4->SetBinContent(9,0.6455848);
   houtFV_stack_4->SetBinContent(10,0.5839213);
   houtFV_stack_4->SetBinContent(11,0.497445);
   houtFV_stack_4->SetBinContent(12,0.4719446);
   houtFV_stack_4->SetBinContent(13,0.3607822);
   houtFV_stack_4->SetBinContent(14,0.1892216);
   houtFV_stack_4->SetBinContent(15,0.5373855);
   houtFV_stack_4->SetBinContent(16,0.4003091);
   houtFV_stack_4->SetBinContent(17,0.2733256);
   houtFV_stack_4->SetBinContent(18,0.0382615);
   houtFV_stack_4->SetBinContent(19,0.3862826);
   houtFV_stack_4->SetBinContent(20,0.2113693);
   houtFV_stack_4->SetBinContent(21,0.2135903);
   houtFV_stack_4->SetBinContent(22,0.2004138);
   houtFV_stack_4->SetBinContent(23,0.1821635);
   houtFV_stack_4->SetBinError(2,0.1088158);
   houtFV_stack_4->SetBinError(3,0.0921412);
   houtFV_stack_4->SetBinError(4,0.1780002);
   houtFV_stack_4->SetBinError(5,0.1800094);
   houtFV_stack_4->SetBinError(6,0.1886206);
   houtFV_stack_4->SetBinError(7,0.2317912);
   houtFV_stack_4->SetBinError(8,0.1783194);
   houtFV_stack_4->SetBinError(9,0.2009205);
   houtFV_stack_4->SetBinError(10,0.1809043);
   houtFV_stack_4->SetBinError(11,0.1663818);
   houtFV_stack_4->SetBinError(12,0.1654019);
   houtFV_stack_4->SetBinError(13,0.1408658);
   houtFV_stack_4->SetBinError(14,0.09236969);
   houtFV_stack_4->SetBinError(15,0.1769106);
   houtFV_stack_4->SetBinError(16,0.1593888);
   houtFV_stack_4->SetBinError(17,0.1252177);
   houtFV_stack_4->SetBinError(18,0.02208399);
   houtFV_stack_4->SetBinError(19,0.1420152);
   houtFV_stack_4->SetBinError(20,0.1088158);
   houtFV_stack_4->SetBinError(21,0.1090984);
   houtFV_stack_4->SetBinError(22,0.09301919);
   houtFV_stack_4->SetBinError(23,0.1050865);
   houtFV_stack_4->SetEntries(218);

   ci = 1455;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleOffset(0);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,1.916868);
   hNCpi0inFV_stack_5->SetBinContent(2,6.020341);
   hNCpi0inFV_stack_5->SetBinContent(3,9.074146);
   hNCpi0inFV_stack_5->SetBinContent(4,9.751888);
   hNCpi0inFV_stack_5->SetBinContent(5,10.50632);
   hNCpi0inFV_stack_5->SetBinContent(6,10.6121);
   hNCpi0inFV_stack_5->SetBinContent(7,10.92906);
   hNCpi0inFV_stack_5->SetBinContent(8,10.81251);
   hNCpi0inFV_stack_5->SetBinContent(9,9.735777);
   hNCpi0inFV_stack_5->SetBinContent(10,8.797232);
   hNCpi0inFV_stack_5->SetBinContent(11,7.672717);
   hNCpi0inFV_stack_5->SetBinContent(12,7.434193);
   hNCpi0inFV_stack_5->SetBinContent(13,6.003814);
   hNCpi0inFV_stack_5->SetBinContent(14,5.398796);
   hNCpi0inFV_stack_5->SetBinContent(15,5.132837);
   hNCpi0inFV_stack_5->SetBinContent(16,4.793965);
   hNCpi0inFV_stack_5->SetBinContent(17,4.098055);
   hNCpi0inFV_stack_5->SetBinContent(18,3.886532);
   hNCpi0inFV_stack_5->SetBinContent(19,3.562206);
   hNCpi0inFV_stack_5->SetBinContent(20,3.458409);
   hNCpi0inFV_stack_5->SetBinContent(21,2.478064);
   hNCpi0inFV_stack_5->SetBinContent(22,2.126443);
   hNCpi0inFV_stack_5->SetBinContent(23,1.443129);
   hNCpi0inFV_stack_5->SetBinContent(24,0.3735324);
   hNCpi0inFV_stack_5->SetBinError(1,0.3220322);
   hNCpi0inFV_stack_5->SetBinError(2,0.5769274);
   hNCpi0inFV_stack_5->SetBinError(3,0.7004843);
   hNCpi0inFV_stack_5->SetBinError(4,0.7194521);
   hNCpi0inFV_stack_5->SetBinError(5,0.7529028);
   hNCpi0inFV_stack_5->SetBinError(6,0.7638419);
   hNCpi0inFV_stack_5->SetBinError(7,0.7684689);
   hNCpi0inFV_stack_5->SetBinError(8,0.769485);
   hNCpi0inFV_stack_5->SetBinError(9,0.7257967);
   hNCpi0inFV_stack_5->SetBinError(10,0.6935779);
   hNCpi0inFV_stack_5->SetBinError(11,0.641789);
   hNCpi0inFV_stack_5->SetBinError(12,0.6297631);
   hNCpi0inFV_stack_5->SetBinError(13,0.563375);
   hNCpi0inFV_stack_5->SetBinError(14,0.5254925);
   hNCpi0inFV_stack_5->SetBinError(15,0.5193291);
   hNCpi0inFV_stack_5->SetBinError(16,0.5061977);
   hNCpi0inFV_stack_5->SetBinError(17,0.4722667);
   hNCpi0inFV_stack_5->SetBinError(18,0.4528068);
   hNCpi0inFV_stack_5->SetBinError(19,0.4344011);
   hNCpi0inFV_stack_5->SetBinError(20,0.4363823);
   hNCpi0inFV_stack_5->SetBinError(21,0.3635939);
   hNCpi0inFV_stack_5->SetBinError(22,0.3443419);
   hNCpi0inFV_stack_5->SetBinError(23,0.2817316);
   hNCpi0inFV_stack_5->SetBinError(24,0.1414417);
   hNCpi0inFV_stack_5->SetEntries(3845);

   ci = 1456;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleOffset(0);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.3890224);
   hCCpi0inFV_stack_6->SetBinContent(2,1.34565);
   hCCpi0inFV_stack_6->SetBinContent(3,2.474189);
   hCCpi0inFV_stack_6->SetBinContent(4,2.346302);
   hCCpi0inFV_stack_6->SetBinContent(5,2.371588);
   hCCpi0inFV_stack_6->SetBinContent(6,2.890716);
   hCCpi0inFV_stack_6->SetBinContent(7,3.183289);
   hCCpi0inFV_stack_6->SetBinContent(8,1.846682);
   hCCpi0inFV_stack_6->SetBinContent(9,2.421029);
   hCCpi0inFV_stack_6->SetBinContent(10,2.054724);
   hCCpi0inFV_stack_6->SetBinContent(11,2.301356);
   hCCpi0inFV_stack_6->SetBinContent(12,1.992109);
   hCCpi0inFV_stack_6->SetBinContent(13,1.479585);
   hCCpi0inFV_stack_6->SetBinContent(14,1.118803);
   hCCpi0inFV_stack_6->SetBinContent(15,1.443219);
   hCCpi0inFV_stack_6->SetBinContent(16,1.876823);
   hCCpi0inFV_stack_6->SetBinContent(17,0.7835208);
   hCCpi0inFV_stack_6->SetBinContent(18,1.069597);
   hCCpi0inFV_stack_6->SetBinContent(19,1.235761);
   hCCpi0inFV_stack_6->SetBinContent(20,1.242715);
   hCCpi0inFV_stack_6->SetBinContent(21,0.5976519);
   hCCpi0inFV_stack_6->SetBinContent(22,0.7088143);
   hCCpi0inFV_stack_6->SetBinContent(23,0.3405376);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2277854);
   hCCpi0inFV_stack_6->SetBinError(1,0.1373484);
   hCCpi0inFV_stack_6->SetBinError(2,0.259151);
   hCCpi0inFV_stack_6->SetBinError(3,0.3612708);
   hCCpi0inFV_stack_6->SetBinError(4,0.3638185);
   hCCpi0inFV_stack_6->SetBinError(5,0.3720215);
   hCCpi0inFV_stack_6->SetBinError(6,0.3883017);
   hCCpi0inFV_stack_6->SetBinError(7,0.4216347);
   hCCpi0inFV_stack_6->SetBinError(8,0.3034434);
   hCCpi0inFV_stack_6->SetBinError(9,0.3584852);
   hCCpi0inFV_stack_6->SetBinError(10,0.3366067);
   hCCpi0inFV_stack_6->SetBinError(11,0.3562286);
   hCCpi0inFV_stack_6->SetBinError(12,0.332861);
   hCCpi0inFV_stack_6->SetBinError(13,0.2878996);
   hCCpi0inFV_stack_6->SetBinError(14,0.2510836);
   hCCpi0inFV_stack_6->SetBinError(15,0.2845453);
   hCCpi0inFV_stack_6->SetBinError(16,0.3259491);
   hCCpi0inFV_stack_6->SetBinError(17,0.2086263);
   hCCpi0inFV_stack_6->SetBinError(18,0.2436534);
   hCCpi0inFV_stack_6->SetBinError(19,0.2600959);
   hCCpi0inFV_stack_6->SetBinError(20,0.2659326);
   hCCpi0inFV_stack_6->SetBinError(21,0.1789111);
   hCCpi0inFV_stack_6->SetBinError(22,0.1988059);
   hCCpi0inFV_stack_6->SetBinError(23,0.128812);
   hCCpi0inFV_stack_6->SetBinError(24,0.1189308);
   hCCpi0inFV_stack_6->SetEntries(968);

   ci = 1457;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleOffset(0);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.06195629);
   hNCinFV_stack_7->SetBinContent(2,0.5976519);
   hNCinFV_stack_7->SetBinContent(3,0.8108159);
   hNCinFV_stack_7->SetBinContent(4,1.182554);
   hNCinFV_stack_7->SetBinContent(5,0.8582273);
   hNCinFV_stack_7->SetBinContent(6,0.8727722);
   hNCinFV_stack_7->SetBinContent(7,0.6341078);
   hNCinFV_stack_7->SetBinContent(8,0.9074333);
   hNCinFV_stack_7->SetBinContent(9,1.080552);
   hNCinFV_stack_7->SetBinContent(10,0.6213576);
   hNCinFV_stack_7->SetBinContent(11,0.2751203);
   hNCinFV_stack_7->SetBinContent(12,0.4737393);
   hNCinFV_stack_7->SetBinContent(13,0.4627838);
   hNCinFV_stack_7->SetBinContent(14,0.03825059);
   hNCinFV_stack_7->SetBinContent(15,0.4099883);
   hNCinFV_stack_7->SetBinContent(16,0.4482389);
   hNCinFV_stack_7->SetBinContent(17,0.5466511);
   hNCinFV_stack_7->SetBinContent(18,0.3990328);
   hNCinFV_stack_7->SetBinContent(19,0.497445);
   hNCinFV_stack_7->SetBinContent(20,0.2241195);
   hNCinFV_stack_7->SetBinContent(21,0.2988259);
   hNCinFV_stack_7->SetBinContent(22,0.4846948);
   hNCinFV_stack_7->SetBinContent(23,0.2860757);
   hNCinFV_stack_7->SetBinContent(24,0.05100079);
   hNCinFV_stack_7->SetBinError(1,0.06195629);
   hNCinFV_stack_7->SetBinError(2,0.1789111);
   hNCinFV_stack_7->SetBinError(3,0.2020503);
   hNCinFV_stack_7->SetBinError(4,0.2526971);
   hNCinFV_stack_7->SetBinError(5,0.2180048);
   hNCinFV_stack_7->SetBinError(6,0.211336);
   hNCinFV_stack_7->SetBinError(7,0.1884745);
   hNCinFV_stack_7->SetBinError(8,0.2262788);
   hNCinFV_stack_7->SetBinError(9,0.2501105);
   hNCinFV_stack_7->SetBinError(10,0.1880427);
   hNCinFV_stack_7->SetBinError(11,0.1124887);
   hNCinFV_stack_7->SetBinError(12,0.1559873);
   hNCinFV_stack_7->SetBinError(13,0.1454088);
   hNCinFV_stack_7->SetBinError(14,0.02208399);
   hNCinFV_stack_7->SetBinError(15,0.1533597);
   hNCinFV_stack_7->SetBinError(16,0.1549416);
   hNCinFV_stack_7->SetBinError(17,0.1770845);
   hNCinFV_stack_7->SetBinError(18,0.1425864);
   hNCinFV_stack_7->SetBinError(19,0.1663818);
   hNCinFV_stack_7->SetBinError(20,0.1095603);
   hNCinFV_stack_7->SetBinError(21,0.1265093);
   hNCinFV_stack_7->SetBinError(22,0.1658926);
   hNCinFV_stack_7->SetBinError(23,0.1258651);
   hNCinFV_stack_7->SetBinError(24,0.02550039);
   hNCinFV_stack_7->SetEntries(330);

   ci = 1458;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleOffset(0);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.1002069);
   hnumuCCinFV_stack_8->SetBinContent(2,0.4354887);
   hnumuCCinFV_stack_8->SetBinContent(3,0.3894767);
   hnumuCCinFV_stack_8->SetBinContent(4,0.8083051);
   hnumuCCinFV_stack_8->SetBinContent(5,0.455028);
   hnumuCCinFV_stack_8->SetBinContent(6,0.4719104);
   hnumuCCinFV_stack_8->SetBinContent(7,0.9374388);
   hnumuCCinFV_stack_8->SetBinContent(8,1.214512);
   hnumuCCinFV_stack_8->SetBinContent(9,1.811573);
   hnumuCCinFV_stack_8->SetBinContent(10,1.920704);
   hnumuCCinFV_stack_8->SetBinContent(11,1.81322);
   hnumuCCinFV_stack_8->SetBinContent(12,1.84117);
   hnumuCCinFV_stack_8->SetBinContent(13,1.336799);
   hnumuCCinFV_stack_8->SetBinContent(14,1.157931);
   hnumuCCinFV_stack_8->SetBinContent(15,0.7507564);
   hnumuCCinFV_stack_8->SetBinContent(16,1.052624);
   hnumuCCinFV_stack_8->SetBinContent(17,1.193244);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1056315);
   hnumuCCinFV_stack_8->SetBinContent(19,0.6734664);
   hnumuCCinFV_stack_8->SetBinContent(20,0.5202839);
   hnumuCCinFV_stack_8->SetBinContent(21,0.3471913);
   hnumuCCinFV_stack_8->SetBinContent(22,0.3630597);
   hnumuCCinFV_stack_8->SetBinContent(23,0.1763527);
   hnumuCCinFV_stack_8->SetBinContent(24,0.09849278);
   hnumuCCinFV_stack_8->SetBinError(1,0.0657745);
   hnumuCCinFV_stack_8->SetBinError(2,0.1544161);
   hnumuCCinFV_stack_8->SetBinError(3,0.1423375);
   hnumuCCinFV_stack_8->SetBinError(4,0.2179046);
   hnumuCCinFV_stack_8->SetBinError(5,0.1588881);
   hnumuCCinFV_stack_8->SetBinError(6,0.156228);
   hnumuCCinFV_stack_8->SetBinError(7,0.2996634);
   hnumuCCinFV_stack_8->SetBinError(8,0.2695267);
   hnumuCCinFV_stack_8->SetBinError(9,0.4216865);
   hnumuCCinFV_stack_8->SetBinError(10,0.359268);
   hnumuCCinFV_stack_8->SetBinError(11,0.4087059);
   hnumuCCinFV_stack_8->SetBinError(12,0.5080748);
   hnumuCCinFV_stack_8->SetBinError(13,0.3436157);
   hnumuCCinFV_stack_8->SetBinError(14,0.2685943);
   hnumuCCinFV_stack_8->SetBinError(15,0.2244138);
   hnumuCCinFV_stack_8->SetBinError(16,0.2819465);
   hnumuCCinFV_stack_8->SetBinError(17,0.4581588);
   hnumuCCinFV_stack_8->SetBinError(18,0.03750042);
   hnumuCCinFV_stack_8->SetBinError(19,0.211552);
   hnumuCCinFV_stack_8->SetBinError(20,0.1708724);
   hnumuCCinFV_stack_8->SetBinError(21,0.1429842);
   hnumuCCinFV_stack_8->SetBinError(22,0.1398479);
   hnumuCCinFV_stack_8->SetBinError(23,0.1006204);
   hnumuCCinFV_stack_8->SetBinError(24,0.07518659);
   hnumuCCinFV_stack_8->SetEntries(468);

   ci = 1459;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleOffset(0);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.07394372);
   hnueCCinFV_stack_9->SetBinContent(2,0.2413162);
   hnueCCinFV_stack_9->SetBinContent(3,0.08929926);
   hnueCCinFV_stack_9->SetBinContent(4,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(5,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(7,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(10,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(1,0.06310531);
   hnueCCinFV_stack_9->SetBinError(2,0.1108434);
   hnueCCinFV_stack_9->SetBinError(3,0.06491609);
   hnueCCinFV_stack_9->SetBinError(4,0.0127502);
   hnueCCinFV_stack_9->SetBinError(5,0.08761943);
   hnueCCinFV_stack_9->SetBinError(7,0.06452687);
   hnueCCinFV_stack_9->SetBinError(10,0.0180315);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,1.378697e-05);
   hnueCCinFV_stack_9->SetEntries(25);

   ci = 1460;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleOffset(0);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_9,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmcerror__8->SetBinContent(1,2.574757);
   hmcerror__8->SetBinContent(2,9.137841);
   hmcerror__8->SetBinContent(3,13.73147);
   hmcerror__8->SetBinContent(4,15.11501);
   hmcerror__8->SetBinContent(5,16.71659);
   hmcerror__8->SetBinContent(6,16.41648);
   hmcerror__8->SetBinContent(7,18.36235);
   hmcerror__8->SetBinContent(8,16.29856);
   hmcerror__8->SetBinContent(9,16.56366);
   hmcerror__8->SetBinContent(10,15.1755);
   hmcerror__8->SetBinContent(11,14.19972);
   hmcerror__8->SetBinContent(12,13.98137);
   hmcerror__8->SetBinContent(13,10.61252);
   hmcerror__8->SetBinContent(14,8.836765);
   hmcerror__8->SetBinContent(15,8.970328);
   hmcerror__8->SetBinContent(16,9.728687);
   hmcerror__8->SetBinContent(17,7.665534);
   hmcerror__8->SetBinContent(18,5.606534);
   hmcerror__8->SetBinContent(19,6.486218);
   hmcerror__8->SetBinContent(20,5.937451);
   hmcerror__8->SetBinContent(21,4.171509);
   hmcerror__8->SetBinContent(22,4.145265);
   hmcerror__8->SetBinContent(23,2.615923);
   hmcerror__8->SetBinContent(24,0.7630813);
   hmcerror__8->SetBinError(1,1.399778);
   hmcerror__8->SetBinError(2,3.146675);
   hmcerror__8->SetBinError(3,4.418608);
   hmcerror__8->SetBinError(4,5.494733);
   hmcerror__8->SetBinError(5,4.552438);
   hmcerror__8->SetBinError(6,5.535587);
   hmcerror__8->SetBinError(7,6.744316);
   hmcerror__8->SetBinError(8,5.895061);
   hmcerror__8->SetBinError(9,5.373339);
   hmcerror__8->SetBinError(10,4.810243);
   hmcerror__8->SetBinError(11,4.635461);
   hmcerror__8->SetBinError(12,4.363518);
   hmcerror__8->SetBinError(13,4.346158);
   hmcerror__8->SetBinError(14,3.48755);
   hmcerror__8->SetBinError(15,2.880095);
   hmcerror__8->SetBinError(16,3.137908);
   hmcerror__8->SetBinError(17,2.700251);
   hmcerror__8->SetBinError(18,2.25389);
   hmcerror__8->SetBinError(19,2.817611);
   hmcerror__8->SetBinError(20,2.635549);
   hmcerror__8->SetBinError(21,2.379674);
   hmcerror__8->SetBinError(22,3.065358);
   hmcerror__8->SetBinError(23,1.417705);
   hmcerror__8->SetBinError(24,0.9214471);
   hmcerror__8->SetBinError(25,0.125509);
   hmcerror__8->SetEntries(240.4242);

   ci = TColor::GetColor("#666666");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetLabelSize(0.035);
   hmcerror__8->GetXaxis()->SetTitleSize(0.035);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetLabelSize(0.035);
   hmcerror__8->GetYaxis()->SetTitleSize(0.035);
   hmcerror__8->GetYaxis()->SetTitleOffset(0);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetLabelSize(0.035);
   hmcerror__8->GetZaxis()->SetTitleSize(0.035);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
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
   Double_t _fy3009[24] = {
   5,
   6,
   5,
   11,
   7,
   7,
   11,
   11,
   6,
   8,
   15,
   14,
   13,
   5,
   5,
   6,
   3,
   4,
   4,
   2,
   2,
   4,
   1,
   1};
   Double_t _felx3009[24] = {
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
   Double_t _fely3009[24] = {
   2.48995,
   2.67925,
   2.48995,
   3.4975,
   2.85954,
   2.85954,
   3.4975,
   3.4975,
   2.67925,
   3.0307,
   4.0385,
   3.9102,
   3.77763,
   2.48995,
   2.48995,
   2.67925,
   2.143368,
   2.29683,
   2.29683,
   2,
   2,
   2.29683,
   1,
   1};
   Double_t _fehx3009[24] = {
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
   Double_t _fehy3009[24] = {
   2.21064,
   2.41858,
   2.21064,
   3.27,
   2.61053,
   2.61053,
   3.27,
   3.27,
   2.41858,
   2.7896,
   3.8197,
   3.6898,
   3.5552,
   2.21064,
   2.21064,
   2.41858,
   1.72422,
   1.98186,
   1.98186,
   1.51917,
   1.51917,
   1.98186,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,198);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(20.70167);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.64#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.53/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 156.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

   ci = 1452;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

   ci = 1453;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1454;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.9","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  146.0","F");

   ci = 1456;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 37.7","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.5","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 20.0","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

   ci = 1460;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
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
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
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
   Double_t _fely3010[24] = {
   0.5436547,
   0.3443565,
   0.321787,
   0.3635283,
   0.2723306,
   0.3371969,
   0.3672904,
   0.361692,
   0.3244053,
   0.3169742,
   0.3264474,
   0.3120951,
   0.4095311,
   0.3946636,
   0.3210691,
   0.3225418,
   0.3522588,
   0.4020112,
   0.4343997,
   0.4438856,
   0.5704587,
   0.7394842,
   0.5419522,
   1.207535};
   Double_t _fehx3010[24] = {
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
   Double_t _fehy3010[24] = {
   0.5436547,
   0.3443565,
   0.321787,
   0.3635283,
   0.2723306,
   0.3371969,
   0.3672904,
   0.361692,
   0.3244053,
   0.3169742,
   0.3264474,
   0.3120951,
   0.4095311,
   0.3946636,
   0.3210691,
   0.3225418,
   0.3522588,
   0.4020112,
   0.4343997,
   0.4438856,
   0.5704587,
   0.7394842,
   0.5419522,
   1.207535};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,198);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Reconstructed cos#theta");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
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
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
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
   Double_t _fely3011[24] = {
   0.3605867,
   0.2439349,
   0.2143249,
   0.2333656,
   0.2242624,
   0.2677905,
   0.2659512,
   0.2827431,
   0.259789,
   0.2369963,
   0.2155798,
   0.2410755,
   0.2258429,
   0.2650827,
   0.217575,
   0.2289229,
   0.2285907,
   0.2673756,
   0.2409304,
   0.2437098,
   0.2633641,
   0.2535055,
   0.296124,
   0.4240106};
   Double_t _fehx3011[24] = {
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
   Double_t _fehy3011[24] = {
   0.3605867,
   0.2439349,
   0.2143249,
   0.2333656,
   0.2242624,
   0.2677905,
   0.2659512,
   0.2827431,
   0.259789,
   0.2369963,
   0.2155798,
   0.2410755,
   0.2258429,
   0.2650827,
   0.217575,
   0.2289229,
   0.2285907,
   0.2673756,
   0.2409304,
   0.2437098,
   0.2633641,
   0.2535055,
   0.296124,
   0.4240106};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,198);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
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
   Double_t _fy3012[24] = {
   1.941931,
   0.6566102,
   0.3641271,
   0.7277536,
   0.4187458,
   0.4264007,
   0.5990517,
   0.674906,
   0.3622387,
   0.5271654,
   1.056359,
   1.001332,
   1.224968,
   0.5658179,
   0.5573932,
   0.6167327,
   0.3913622,
   0.7134533,
   0.6166921,
   0.3368449,
   0.4794428,
   0.9649564,
   0.3822743,
   1.310476};
   Double_t _felx3012[24] = {
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
   Double_t _fely3012[24] = {
   0.9670623,
   0.2932038,
   0.1813317,
   0.2313926,
   0.1710601,
   0.1741871,
   0.1904712,
   0.2145894,
   0.1617547,
   0.19971,
   0.2844071,
   0.2796721,
   0.3559596,
   0.2817717,
   0.2775762,
   0.2753969,
   0.2796111,
   0.4096702,
   0.3541093,
   0.3368449,
   0.4794428,
   0.5540852,
   0.3822743,
   1.310476};
   Double_t _fehx3012[24] = {
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
   Double_t _fehy3012[24] = {
   0.8585821,
   0.2646774,
   0.1609908,
   0.2163413,
   0.1561641,
   0.1590188,
   0.1780817,
   0.2006312,
   0.1460172,
   0.1838226,
   0.2689983,
   0.2639083,
   0.3350004,
   0.2501639,
   0.2464391,
   0.2486029,
   0.2249315,
   0.3534911,
   0.3055494,
   0.2558623,
   0.3641775,
   0.4781021,
   0.5197821,
   1.781868};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,198);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(3.401579);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT2_FC_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetLabelSize(0.035);
   hist__9->GetXaxis()->SetTitleSize(0.035);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetLabelSize(0.035);
   hist__9->GetYaxis()->SetTitleSize(0.035);
   hist__9->GetYaxis()->SetTitleOffset(0);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetLabelSize(0.035);
   hist__9->GetZaxis()->SetTitleSize(0.035);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

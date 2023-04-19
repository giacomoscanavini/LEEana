#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Mar 15 16:23:04 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-230.7692,-19.08,1692.308,2109.846);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__4->SetBinContent(1,0.02789998);
   hmc__4->SetBinContent(2,151.6276);
   hmc__4->SetBinContent(3,790.0201);
   hmc__4->SetBinContent(4,805.7863);
   hmc__4->SetBinContent(5,670.9209);
   hmc__4->SetBinContent(6,472.0079);
   hmc__4->SetBinContent(7,325.0803);
   hmc__4->SetBinContent(8,208.9234);
   hmc__4->SetBinContent(9,134.4281);
   hmc__4->SetBinContent(10,86.33437);
   hmc__4->SetBinContent(11,61.37439);
   hmc__4->SetBinContent(12,31.30741);
   hmc__4->SetBinContent(13,25.54926);
   hmc__4->SetBinContent(14,15.3363);
   hmc__4->SetBinContent(15,15.93419);
   hmc__4->SetBinContent(16,41.92618);
   hmc__4->SetBinError(1,0.2101219);
   hmc__4->SetBinError(2,45.06593);
   hmc__4->SetBinError(3,218.0072);
   hmc__4->SetBinError(4,187.6048);
   hmc__4->SetBinError(5,180.4246);
   hmc__4->SetBinError(6,145.025);
   hmc__4->SetBinError(7,100.9555);
   hmc__4->SetBinError(8,63.32571);
   hmc__4->SetBinError(9,41.02072);
   hmc__4->SetBinError(10,30.78866);
   hmc__4->SetBinError(11,24.67976);
   hmc__4->SetBinError(12,15.1785);
   hmc__4->SetBinError(13,13.79569);
   hmc__4->SetBinError(14,12.05835);
   hmc__4->SetBinError(15,11.72039);
   hmc__4->SetBinError(16,19.3775);
   hmc__4->SetMinimum(-19.08);
   hmc__4->SetMaximum(2003.4);
   hmc__4->SetEntries(3790.72);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",15,0,1500);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(846.0756);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,6.939945);
   hbadmatch_stack_1->SetBinContent(3,27.23913);
   hbadmatch_stack_1->SetBinContent(4,15.55318);
   hbadmatch_stack_1->SetBinContent(5,16.83648);
   hbadmatch_stack_1->SetBinContent(6,11.19181);
   hbadmatch_stack_1->SetBinContent(7,5.752218);
   hbadmatch_stack_1->SetBinContent(8,5.043291);
   hbadmatch_stack_1->SetBinContent(9,4.165883);
   hbadmatch_stack_1->SetBinContent(10,2.291352);
   hbadmatch_stack_1->SetBinContent(11,1.608988);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(16,1.545923);
   hbadmatch_stack_1->SetBinError(2,1.36166);
   hbadmatch_stack_1->SetBinError(3,3.391318);
   hbadmatch_stack_1->SetBinError(4,2.084259);
   hbadmatch_stack_1->SetBinError(5,2.144512);
   hbadmatch_stack_1->SetBinError(6,1.764791);
   hbadmatch_stack_1->SetBinError(7,1.271848);
   hbadmatch_stack_1->SetBinError(8,1.893218);
   hbadmatch_stack_1->SetBinError(9,1.104552);
   hbadmatch_stack_1->SetBinError(10,0.7466481);
   hbadmatch_stack_1->SetBinError(11,0.6801404);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(16,0.5988025);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,33.06081);
   hext_stack_2->SetBinContent(3,118.0482);
   hext_stack_2->SetBinContent(4,99.87539);
   hext_stack_2->SetBinContent(5,58.66716);
   hext_stack_2->SetBinContent(6,30.05903);
   hext_stack_2->SetBinContent(7,21.40078);
   hext_stack_2->SetBinContent(8,14.8334);
   hext_stack_2->SetBinContent(9,5.683567);
   hext_stack_2->SetBinContent(10,5.020411);
   hext_stack_2->SetBinContent(11,4.378797);
   hext_stack_2->SetBinContent(12,3.330584);
   hext_stack_2->SetBinContent(13,3.069618);
   hext_stack_2->SetBinContent(14,1.868591);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,3.57278);
   hext_stack_2->SetBinError(2,3.754606);
   hext_stack_2->SetBinError(3,7.042441);
   hext_stack_2->SetBinError(4,6.466615);
   hext_stack_2->SetBinError(5,4.928828);
   hext_stack_2->SetBinError(6,3.617994);
   hext_stack_2->SetBinError(7,2.960095);
   hext_stack_2->SetBinError(8,2.502214);
   hext_stack_2->SetBinError(9,1.429781);
   hext_stack_2->SetBinError(10,1.495396);
   hext_stack_2->SetBinError(11,1.350755);
   hext_stack_2->SetBinError(12,1.116937);
   hext_stack_2->SetBinError(13,1.212305);
   hext_stack_2->SetBinError(14,0.840497);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,1.136966);
   hext_stack_2->SetEntries(1022);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,6.626352);
   hdirt_stack_3->SetBinContent(3,21.42477);
   hdirt_stack_3->SetBinContent(4,11.17242);
   hdirt_stack_3->SetBinContent(5,6.918137);
   hdirt_stack_3->SetBinContent(6,4.518008);
   hdirt_stack_3->SetBinContent(7,2.381617);
   hdirt_stack_3->SetBinContent(8,2.665941);
   hdirt_stack_3->SetBinContent(9,0.5624726);
   hdirt_stack_3->SetBinContent(11,0.7833549);
   hdirt_stack_3->SetBinError(2,1.35709);
   hdirt_stack_3->SetBinError(3,2.386431);
   hdirt_stack_3->SetBinError(4,1.77183);
   hdirt_stack_3->SetBinError(5,1.364199);
   hdirt_stack_3->SetBinError(6,1.33627);
   hdirt_stack_3->SetBinError(7,0.8381607);
   hdirt_stack_3->SetBinError(8,1.309281);
   hdirt_stack_3->SetBinError(9,0.2813747);
   hdirt_stack_3->SetBinError(11,0.5539236);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,32.80658);
   houtFV_stack_4->SetBinContent(3,141.7432);
   houtFV_stack_4->SetBinContent(4,122.7901);
   houtFV_stack_4->SetBinContent(5,78.18517);
   houtFV_stack_4->SetBinContent(6,49.78488);
   houtFV_stack_4->SetBinContent(7,33.42831);
   houtFV_stack_4->SetBinContent(8,16.04307);
   houtFV_stack_4->SetBinContent(9,12.88322);
   houtFV_stack_4->SetBinContent(10,6.16878);
   houtFV_stack_4->SetBinContent(11,5.061986);
   houtFV_stack_4->SetBinContent(12,1.33438);
   houtFV_stack_4->SetBinContent(13,2.014274);
   houtFV_stack_4->SetBinContent(14,1.660551);
   houtFV_stack_4->SetBinContent(15,1.174253);
   houtFV_stack_4->SetBinContent(16,0.785171);
   houtFV_stack_4->SetBinError(2,2.781063);
   houtFV_stack_4->SetBinError(3,5.964925);
   houtFV_stack_4->SetBinError(4,5.742541);
   houtFV_stack_4->SetBinError(5,4.488643);
   houtFV_stack_4->SetBinError(6,3.51721);
   houtFV_stack_4->SetBinError(7,2.895911);
   houtFV_stack_4->SetBinError(8,1.999024);
   houtFV_stack_4->SetBinError(9,1.852093);
   houtFV_stack_4->SetBinError(10,1.305556);
   houtFV_stack_4->SetBinError(11,1.184033);
   houtFV_stack_4->SetBinError(12,0.5599469);
   houtFV_stack_4->SetBinError(13,0.7921859);
   houtFV_stack_4->SetBinError(14,0.650847);
   houtFV_stack_4->SetBinError(15,0.5398873);
   houtFV_stack_4->SetBinError(16,0.3925882);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.74193);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,15.70029);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,22.19469);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,22.03246);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,15.17102);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.74503);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.440692);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.724006);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.839744);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.463426);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.003904);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4406266);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.30772);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.495485);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.588927);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.309431);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.000202);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7862149);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6919041);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3967001);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3743209);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2725332);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.134858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.53758);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9336537);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.417172);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4796762);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4922896);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.215211);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1966255);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(179);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.68476);
   hNCpi0inFVres_stack_7->SetBinContent(3,301.4045);
   hNCpi0inFVres_stack_7->SetBinContent(4,338.1926);
   hNCpi0inFVres_stack_7->SetBinContent(5,251.6104);
   hNCpi0inFVres_stack_7->SetBinContent(6,157.3833);
   hNCpi0inFVres_stack_7->SetBinContent(7,92.23327);
   hNCpi0inFVres_stack_7->SetBinContent(8,47.48434);
   hNCpi0inFVres_stack_7->SetBinContent(9,28.68631);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.50688);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.456629);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.282006);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.662798);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.255172);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.9059218);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.994862);
   hNCpi0inFVres_stack_7->SetBinError(2,2.137224);
   hNCpi0inFVres_stack_7->SetBinError(3,5.630633);
   hNCpi0inFVres_stack_7->SetBinError(4,6.033395);
   hNCpi0inFVres_stack_7->SetBinError(5,5.157164);
   hNCpi0inFVres_stack_7->SetBinError(6,4.0751);
   hNCpi0inFVres_stack_7->SetBinError(7,3.090269);
   hNCpi0inFVres_stack_7->SetBinError(8,2.260752);
   hNCpi0inFVres_stack_7->SetBinError(9,1.815268);
   hNCpi0inFVres_stack_7->SetBinError(10,1.095417);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8393287);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7030643);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5025915);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3376966);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2798147);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5219663);
   hNCpi0inFVres_stack_7->SetEntries(24054);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.746269);
   hNCpi0inFVdis_stack_8->SetBinContent(3,42.52492);
   hNCpi0inFVdis_stack_8->SetBinContent(4,46.05594);
   hNCpi0inFVdis_stack_8->SetBinContent(5,45.45243);
   hNCpi0inFVdis_stack_8->SetBinContent(6,34.50678);
   hNCpi0inFVdis_stack_8->SetBinContent(7,27.37417);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.83656);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.03675);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.244224);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.043356);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.704148);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.49299);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.631994);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.198708);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.774893);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9920292);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.122177);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.203958);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.184119);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.878628);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.717641);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.39882);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.194808);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7265679);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6400354);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4772351);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4235881);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4791353);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3549294);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4576683);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3206861);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2201295);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06238626);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(3,33.76455);
   hCCpi0inFV_stack_10->SetBinContent(4,67.58334);
   hCCpi0inFV_stack_10->SetBinContent(5,106.8977);
   hCCpi0inFV_stack_10->SetBinContent(6,103.4944);
   hCCpi0inFV_stack_10->SetBinContent(7,80.03731);
   hCCpi0inFV_stack_10->SetBinContent(8,58.08759);
   hCCpi0inFV_stack_10->SetBinContent(9,39.86642);
   hCCpi0inFV_stack_10->SetBinContent(10,27.59442);
   hCCpi0inFV_stack_10->SetBinContent(11,18.2358);
   hCCpi0inFV_stack_10->SetBinContent(12,10.41335);
   hCCpi0inFV_stack_10->SetBinContent(13,8.409262);
   hCCpi0inFV_stack_10->SetBinContent(14,3.738708);
   hCCpi0inFV_stack_10->SetBinContent(15,5.141413);
   hCCpi0inFV_stack_10->SetBinContent(16,12.54127);
   hCCpi0inFV_stack_10->SetBinError(2,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(3,2.857568);
   hCCpi0inFV_stack_10->SetBinError(4,4.1124);
   hCCpi0inFV_stack_10->SetBinError(5,5.133506);
   hCCpi0inFV_stack_10->SetBinError(6,5.089269);
   hCCpi0inFV_stack_10->SetBinError(7,4.472288);
   hCCpi0inFV_stack_10->SetBinError(8,3.875495);
   hCCpi0inFV_stack_10->SetBinError(9,3.233484);
   hCCpi0inFV_stack_10->SetBinError(10,2.669603);
   hCCpi0inFV_stack_10->SetBinError(11,2.183855);
   hCCpi0inFV_stack_10->SetBinError(12,1.583448);
   hCCpi0inFV_stack_10->SetBinError(13,1.42876);
   hCCpi0inFV_stack_10->SetBinError(14,0.9668886);
   hCCpi0inFV_stack_10->SetBinError(15,1.075093);
   hCCpi0inFV_stack_10->SetBinError(16,1.841291);
   hCCpi0inFV_stack_10->SetEntries(2475);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,7.143832);
   hNCinFV_stack_11->SetBinContent(3,32.85516);
   hNCinFV_stack_11->SetBinContent(4,34.75056);
   hNCinFV_stack_11->SetBinContent(5,38.20559);
   hNCinFV_stack_11->SetBinContent(6,32.36488);
   hNCinFV_stack_11->SetBinContent(7,24.24252);
   hNCinFV_stack_11->SetBinContent(8,18.86973);
   hNCinFV_stack_11->SetBinContent(9,13.7742);
   hNCinFV_stack_11->SetBinContent(10,11.71238);
   hNCinFV_stack_11->SetBinContent(11,6.783976);
   hNCinFV_stack_11->SetBinContent(12,3.56938);
   hNCinFV_stack_11->SetBinContent(13,2.252388);
   hNCinFV_stack_11->SetBinContent(14,1.568651);
   hNCinFV_stack_11->SetBinContent(15,2.291034);
   hNCinFV_stack_11->SetBinContent(16,3.856305);
   hNCinFV_stack_11->SetBinError(2,1.302233);
   hNCinFV_stack_11->SetBinError(3,2.957524);
   hNCinFV_stack_11->SetBinError(4,2.903555);
   hNCinFV_stack_11->SetBinError(5,3.090229);
   hNCinFV_stack_11->SetBinError(6,2.90064);
   hNCinFV_stack_11->SetBinError(7,2.435142);
   hNCinFV_stack_11->SetBinError(8,2.186552);
   hNCinFV_stack_11->SetBinError(9,1.839995);
   hNCinFV_stack_11->SetBinError(10,1.754965);
   hNCinFV_stack_11->SetBinError(11,1.330702);
   hNCinFV_stack_11->SetBinError(12,0.9202779);
   hNCinFV_stack_11->SetBinError(13,0.7350883);
   hNCinFV_stack_11->SetBinError(14,0.5546069);
   hNCinFV_stack_11->SetBinError(15,0.8334836);
   hNCinFV_stack_11->SetBinError(16,1.000479);
   hNCinFV_stack_11->SetEntries(996);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,5.307168);
   hnumuCCinFV_stack_12->SetBinContent(3,49.19628);
   hnumuCCinFV_stack_12->SetBinContent(4,40.59097);
   hnumuCCinFV_stack_12->SetBinContent(5,42.91704);
   hnumuCCinFV_stack_12->SetBinContent(6,28.64474);
   hnumuCCinFV_stack_12->SetBinContent(7,26.31799);
   hnumuCCinFV_stack_12->SetBinContent(8,19.10857);
   hnumuCCinFV_stack_12->SetBinContent(9,12.36692);
   hnumuCCinFV_stack_12->SetBinContent(10,11.46183);
   hnumuCCinFV_stack_12->SetBinContent(11,9.364861);
   hnumuCCinFV_stack_12->SetBinContent(12,4.609522);
   hnumuCCinFV_stack_12->SetBinContent(13,4.531729);
   hnumuCCinFV_stack_12->SetBinContent(14,3.180793);
   hnumuCCinFV_stack_12->SetBinContent(15,1.855576);
   hnumuCCinFV_stack_12->SetBinContent(16,7.601993);
   hnumuCCinFV_stack_12->SetBinError(2,1.270645);
   hnumuCCinFV_stack_12->SetBinError(3,4.530886);
   hnumuCCinFV_stack_12->SetBinError(4,3.904909);
   hnumuCCinFV_stack_12->SetBinError(5,4.295292);
   hnumuCCinFV_stack_12->SetBinError(6,2.682468);
   hnumuCCinFV_stack_12->SetBinError(7,2.656198);
   hnumuCCinFV_stack_12->SetBinError(8,2.229192);
   hnumuCCinFV_stack_12->SetBinError(9,1.939753);
   hnumuCCinFV_stack_12->SetBinError(10,1.763175);
   hnumuCCinFV_stack_12->SetBinError(11,1.556524);
   hnumuCCinFV_stack_12->SetBinError(12,1.532187);
   hnumuCCinFV_stack_12->SetBinError(13,1.045054);
   hnumuCCinFV_stack_12->SetBinError(14,0.9131705);
   hnumuCCinFV_stack_12->SetBinError(15,0.6794384);
   hnumuCCinFV_stack_12->SetBinError(16,1.371766);
   hnumuCCinFV_stack_12->SetEntries(1051);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(3,3.928332);
   hnueCCinFV_stack_13->SetBinContent(4,4.168954);
   hnueCCinFV_stack_13->SetBinContent(5,2.125264);
   hnueCCinFV_stack_13->SetBinContent(6,3.885045);
   hnueCCinFV_stack_13->SetBinContent(7,2.497175);
   hnueCCinFV_stack_13->SetBinContent(8,2.175315);
   hnueCCinFV_stack_13->SetBinContent(9,0.4270637);
   hnueCCinFV_stack_13->SetBinContent(10,2.077182);
   hnueCCinFV_stack_13->SetBinContent(11,2.193225);
   hnueCCinFV_stack_13->SetBinContent(12,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,1.768002);
   hnueCCinFV_stack_13->SetBinContent(16,6.249086);
   hnueCCinFV_stack_13->SetBinError(2,0.545424);
   hnueCCinFV_stack_13->SetBinError(3,1.586111);
   hnueCCinFV_stack_13->SetBinError(4,1.169136);
   hnueCCinFV_stack_13->SetBinError(5,0.726621);
   hnueCCinFV_stack_13->SetBinError(6,1.043564);
   hnueCCinFV_stack_13->SetBinError(7,0.883211);
   hnueCCinFV_stack_13->SetBinError(8,1.266406);
   hnueCCinFV_stack_13->SetBinError(9,0.3029147);
   hnueCCinFV_stack_13->SetBinError(10,0.8360356);
   hnueCCinFV_stack_13->SetBinError(11,0.7631805);
   hnueCCinFV_stack_13->SetBinError(12,0.1967155);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.9112012);
   hnueCCinFV_stack_13->SetBinError(16,2.054513);
   hnueCCinFV_stack_13->SetEntries(115);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__5->SetBinContent(1,0.02789998);
   hmcerror__5->SetBinContent(2,151.6276);
   hmcerror__5->SetBinContent(3,790.0201);
   hmcerror__5->SetBinContent(4,805.7863);
   hmcerror__5->SetBinContent(5,670.9209);
   hmcerror__5->SetBinContent(6,472.0079);
   hmcerror__5->SetBinContent(7,325.0803);
   hmcerror__5->SetBinContent(8,208.9234);
   hmcerror__5->SetBinContent(9,134.4281);
   hmcerror__5->SetBinContent(10,86.33437);
   hmcerror__5->SetBinContent(11,61.37439);
   hmcerror__5->SetBinContent(12,31.30741);
   hmcerror__5->SetBinContent(13,25.54926);
   hmcerror__5->SetBinContent(14,15.3363);
   hmcerror__5->SetBinContent(15,15.93419);
   hmcerror__5->SetBinContent(16,41.92618);
   hmcerror__5->SetBinError(1,0.2101219);
   hmcerror__5->SetBinError(2,45.06593);
   hmcerror__5->SetBinError(3,218.0072);
   hmcerror__5->SetBinError(4,187.6048);
   hmcerror__5->SetBinError(5,180.4246);
   hmcerror__5->SetBinError(6,145.025);
   hmcerror__5->SetBinError(7,100.9555);
   hmcerror__5->SetBinError(8,63.32571);
   hmcerror__5->SetBinError(9,41.02072);
   hmcerror__5->SetBinError(10,30.78866);
   hmcerror__5->SetBinError(11,24.67976);
   hmcerror__5->SetBinError(12,15.1785);
   hmcerror__5->SetBinError(13,13.79569);
   hmcerror__5->SetBinError(14,12.05835);
   hmcerror__5->SetBinError(15,11.72039);
   hmcerror__5->SetBinError(16,19.3775);
   hmcerror__5->SetEntries(3790.72);

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
   
   Double_t _fx3005[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3005[15] = {
   0,
   197,
   954,
   880,
   596,
   388,
   304,
   173,
   112,
   63,
   38,
   36,
   25,
   17,
   12};
   Double_t _felx3005[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3005[15] = {
   0,
   14.03567,
   30.88689,
   29.66479,
   24.41311,
   19.69772,
   17.4356,
   13.15295,
   10.58301,
   8.0648,
   6.3013,
   6.1381,
   5.1474,
   4.2835,
   3.64022};
   Double_t _fehx3005[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3005[15] = {
   1.1478,
   14.03567,
   30.88689,
   29.66479,
   24.41311,
   19.69772,
   17.4356,
   13.15295,
   10.58301,
   7.862,
   6.0955,
   5.9318,
   4.9374,
   4.0673,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(1083.376);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3795.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 400.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1289.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  252.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 566.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 230.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 259.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 26.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_transferred_energy_all");
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
   
   Double_t _fx3006[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3006[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3006[15] = {
   7.531253,
   0.2972146,
   0.2759514,
   0.232822,
   0.2689209,
   0.3072512,
   0.3105557,
   0.3031049,
   0.3051499,
   0.3566211,
   0.4021181,
   0.4848214,
   0.5399643,
   0.7862621,
   0.7355497};
   Double_t _fehx3006[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3006[15] = {
   7.531253,
   0.2972146,
   0.2759514,
   0.232822,
   0.2689209,
   0.3072512,
   0.3105557,
   0.3031049,
   0.3051499,
   0.3566211,
   0.4021181,
   0.4848214,
   0.5399643,
   0.7862621,
   0.7355497};
   grae = new TGraphAsymmErrors(15,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3007[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3007[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3007[15] = {
   7.531253,
   0.2350058,
   0.2299823,
   0.2070917,
   0.2481513,
   0.2831901,
   0.265387,
   0.2474297,
   0.2466124,
   0.2242018,
   0.2128792,
   0.2109303,
   0.2244005,
   0.2436561,
   0.2788093};
   Double_t _fehx3007[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3007[15] = {
   7.531253,
   0.2350058,
   0.2299823,
   0.2070917,
   0.2481513,
   0.2831901,
   0.265387,
   0.2474297,
   0.2466124,
   0.2242018,
   0.2128792,
   0.2109303,
   0.2244005,
   0.2436561,
   0.2788093};
   grae = new TGraphAsymmErrors(15,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3008[15] = {
   0,
   1.299236,
   1.207564,
   1.092101,
   0.8883312,
   0.8220201,
   0.9351535,
   0.8280545,
   0.8331591,
   0.729721,
   0.6191507,
   1.149887,
   0.9785019,
   1.108481,
   0.7530978};
   Double_t _felx3008[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3008[15] = {
   0,
   0.09256672,
   0.03909634,
   0.03681472,
   0.03638747,
   0.04173175,
   0.05363473,
   0.06295582,
   0.07872614,
   0.09341355,
   0.1026699,
   0.196059,
   0.2014696,
   0.2793046,
   0.2284535};
   Double_t _fehx3008[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3008[15] = {
   41.13981,
   0.09256672,
   0.03909634,
   0.03681472,
   0.03638747,
   0.04173175,
   0.05363473,
   0.06295582,
   0.07872614,
   0.09106455,
   0.09931666,
   0.1894695,
   0.1932502,
   0.2652073,
   0.2143505};
   grae = new TGraphAsymmErrors(15,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(45.25379);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

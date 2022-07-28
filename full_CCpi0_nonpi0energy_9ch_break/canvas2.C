#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  8 17:52:17 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-342.3077,-5.280829,1260.256,583.9485);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__4->SetBinContent(0,443.6835);
   hmc__4->SetBinContent(1,2.286449);
   hmc__4->SetBinContent(2,9.282885);
   hmc__4->SetBinContent(3,18.13332);
   hmc__4->SetBinContent(4,225.8437);
   hmc__4->SetBinContent(5,207.1193);
   hmc__4->SetBinContent(6,220.7004);
   hmc__4->SetBinContent(7,264.0414);
   hmc__4->SetBinContent(8,257.6323);
   hmc__4->SetBinContent(9,228.7239);
   hmc__4->SetBinContent(10,207.477);
   hmc__4->SetBinContent(11,183.0032);
   hmc__4->SetBinContent(12,156.2776);
   hmc__4->SetBinContent(13,127.6657);
   hmc__4->SetBinContent(14,120.8427);
   hmc__4->SetBinContent(15,85.70811);
   hmc__4->SetBinContent(16,74.15353);
   hmc__4->SetBinContent(17,59.91013);
   hmc__4->SetBinContent(18,56.68412);
   hmc__4->SetBinContent(19,41.98411);
   hmc__4->SetBinContent(20,30.51354);
   hmc__4->SetBinContent(21,28.04935);
   hmc__4->SetBinContent(22,24.61558);
   hmc__4->SetBinContent(23,13.21869);
   hmc__4->SetBinContent(24,13.74195);
   hmc__4->SetBinContent(25,10.69802);
   hmc__4->SetBinContent(26,48.01229);
   hmc__4->SetBinError(0,10.75548);
   hmc__4->SetBinError(1,4.588588);
   hmc__4->SetBinError(2,17.79728);
   hmc__4->SetBinError(3,10.95456);
   hmc__4->SetBinError(4,66.80893);
   hmc__4->SetBinError(5,70.88856);
   hmc__4->SetBinError(6,63.16777);
   hmc__4->SetBinError(7,79.36621);
   hmc__4->SetBinError(8,80.24071);
   hmc__4->SetBinError(9,61.77362);
   hmc__4->SetBinError(10,62.47208);
   hmc__4->SetBinError(11,61.30492);
   hmc__4->SetBinError(12,43.38272);
   hmc__4->SetBinError(13,38.96416);
   hmc__4->SetBinError(14,36.6178);
   hmc__4->SetBinError(15,30.79611);
   hmc__4->SetBinError(16,26.6527);
   hmc__4->SetBinError(17,20.74034);
   hmc__4->SetBinError(18,21.26574);
   hmc__4->SetBinError(19,16.58942);
   hmc__4->SetBinError(20,13.12151);
   hmc__4->SetBinError(21,18.17769);
   hmc__4->SetBinError(22,14.69125);
   hmc__4->SetBinError(23,7.620702);
   hmc__4->SetBinError(24,8.446137);
   hmc__4->SetBinError(25,7.822421);
   hmc__4->SetBinError(26,20.41963);
   hmc__4->SetMinimum(-5.280829);
   hmc__4->SetMaximum(554.487);
   hmc__4->SetEntries(3142.018);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-150,1100);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(277.2435);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,7.474074);
   hbadmatch_stack_1->SetBinContent(4,1.8088);
   hbadmatch_stack_1->SetBinContent(5,0.5884556);
   hbadmatch_stack_1->SetBinContent(6,1.663932);
   hbadmatch_stack_1->SetBinContent(7,0.3401776);
   hbadmatch_stack_1->SetBinContent(8,1.858999);
   hbadmatch_stack_1->SetBinContent(9,1.416789);
   hbadmatch_stack_1->SetBinContent(10,0.3934599);
   hbadmatch_stack_1->SetBinContent(11,1.073786);
   hbadmatch_stack_1->SetBinContent(12,0.7817899);
   hbadmatch_stack_1->SetBinContent(13,0.8770706);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,1.073786);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.4303902);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.8753801);
   hbadmatch_stack_1->SetBinContent(22,0.536893);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(26,0.9738604);
   hbadmatch_stack_1->SetBinError(0,2.62751);
   hbadmatch_stack_1->SetBinError(4,0.7618742);
   hbadmatch_stack_1->SetBinError(5,0.3397478);
   hbadmatch_stack_1->SetBinError(6,0.6518637);
   hbadmatch_stack_1->SetBinError(7,0.3401776);
   hbadmatch_stack_1->SetBinError(8,0.724511);
   hbadmatch_stack_1->SetBinError(9,0.5364847);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.5557297);
   hbadmatch_stack_1->SetBinError(12,0.3908977);
   hbadmatch_stack_1->SetBinError(13,0.5197486);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.5557297);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3054519);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.5191111);
   hbadmatch_stack_1->SetBinError(22,0.3929602);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(26,0.5009877);
   hbadmatch_stack_1->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,10.60301);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,1.379791);
   hext_stack_2->SetBinContent(5,0.7309963);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,2.26801);
   hext_stack_2->SetBinContent(8,3.297453);
   hext_stack_2->SetBinContent(9,1.697008);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(12,1.37261);
   hext_stack_2->SetBinContent(13,1.868591);
   hext_stack_2->SetBinContent(14,3.215251);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,0.6416141);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.055394);
   hext_stack_2->SetBinError(0,2.118413);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.6935586);
   hext_stack_2->SetBinError(5,0.5201503);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,1.035838);
   hext_stack_2->SetBinError(8,1.384641);
   hext_stack_2->SetBinError(9,0.8873887);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(12,0.8259691);
   hext_stack_2->SetBinError(13,0.840497);
   hext_stack_2->SetBinError(14,1.36277);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.6416141);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.6130171);
   hext_stack_2->SetEntries(79);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,1.768272);
   hdirt_stack_3->SetBinContent(5,0.2544535);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.2574102);
   hdirt_stack_3->SetBinError(0,0.9792654);
   hdirt_stack_3->SetBinError(5,0.2544535);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.2574102);
   hdirt_stack_3->SetEntries(8);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,3.969471);
   houtFV_stack_4->SetBinContent(4,0.6854238);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.8360388);
   houtFV_stack_4->SetBinContent(7,1.072095);
   houtFV_stack_4->SetBinContent(8,1.370245);
   houtFV_stack_4->SetBinContent(9,0.7868615);
   houtFV_stack_4->SetBinContent(10,0.6803553);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(13,0.2499844);
   houtFV_stack_4->SetBinContent(15,0.3900497);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinContent(17,0.1950248);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinError(0,1.004884);
   houtFV_stack_4->SetBinError(4,0.3976372);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.4942246);
   houtFV_stack_4->SetBinError(7,0.5551335);
   houtFV_stack_4->SetBinError(8,0.5179089);
   houtFV_stack_4->SetBinError(9,0.3934307);
   houtFV_stack_4->SetBinError(10,0.4810838);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(13,0.2499845);
   houtFV_stack_4->SetBinError(15,0.2758068);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetBinError(17,0.1950249);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetEntries(50);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(14);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.682722);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.2684567);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(15);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,39.04388);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.261914);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.059718);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.838678);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.242064);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.690464);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.867242);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.238824);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.253274);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.428556);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.969866);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.568392);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.35673);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.04983);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9344858);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.087604);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.98979);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.3763178);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2231999);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2233681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.878854);
   hNCpi0inFVres_stack_7->SetBinError(0,2.023393);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8012926);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7421588);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7327026);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7318608);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8075425);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7239743);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6692183);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6886617);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5835197);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5421436);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6402383);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5131296);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5047172);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2560898);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2767844);
   hNCpi0inFVres_stack_7->SetBinError(19,0.336735);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1313578);
   hNCpi0inFVres_stack_7->SetBinError(21,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(23,0.07891307);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1974492);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(26,0.3111014);
   hNCpi0inFVres_stack_7->SetEntries(1863);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,17.92863);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.376332);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.704316);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.816579);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.432052);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.890406);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.319284);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.234584);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.020593);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.496894);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.829702);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.354234);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.867644);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.71619);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9904539);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5995177);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.034716);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5716177);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.682722);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3347998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.89588);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.332048);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7015863);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.510404);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5001331);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6710581);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6567927);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6020143);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5550324);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3693482);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5036877);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5509268);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4533248);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.39768);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4308761);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.316066);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1532389);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4917626);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1506776);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2684567);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.09664838);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4737569);
   hNCpi0inFVdis_stack_8->SetEntries(1211);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1457;
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
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,229.4038);
   hCCpi0inFV_stack_11->SetBinContent(1,0.9303237);
   hCCpi0inFV_stack_11->SetBinContent(2,3.57107);
   hCCpi0inFV_stack_11->SetBinContent(3,7.732287);
   hCCpi0inFV_stack_11->SetBinContent(4,170.8971);
   hCCpi0inFV_stack_11->SetBinContent(5,162.9675);
   hCCpi0inFV_stack_11->SetBinContent(6,183.62);
   hCCpi0inFV_stack_11->SetBinContent(7,215.007);
   hCCpi0inFV_stack_11->SetBinContent(8,208.7247);
   hCCpi0inFV_stack_11->SetBinContent(9,186.9207);
   hCCpi0inFV_stack_11->SetBinContent(10,173.5306);
   hCCpi0inFV_stack_11->SetBinContent(11,147.5064);
   hCCpi0inFV_stack_11->SetBinContent(12,122.9272);
   hCCpi0inFV_stack_11->SetBinContent(13,98.83601);
   hCCpi0inFV_stack_11->SetBinContent(14,91.92139);
   hCCpi0inFV_stack_11->SetBinContent(15,64.49265);
   hCCpi0inFV_stack_11->SetBinContent(16,59.00993);
   hCCpi0inFV_stack_11->SetBinContent(17,46.46904);
   hCCpi0inFV_stack_11->SetBinContent(18,44.62644);
   hCCpi0inFV_stack_11->SetBinContent(19,32.04195);
   hCCpi0inFV_stack_11->SetBinContent(20,22.85046);
   hCCpi0inFV_stack_11->SetBinContent(21,21.35687);
   hCCpi0inFV_stack_11->SetBinContent(22,17.3896);
   hCCpi0inFV_stack_11->SetBinContent(23,10.31978);
   hCCpi0inFV_stack_11->SetBinContent(24,10.66056);
   hCCpi0inFV_stack_11->SetBinContent(25,7.039016);
   hCCpi0inFV_stack_11->SetBinContent(26,33.90606);
   hCCpi0inFV_stack_11->SetBinError(0,7.534179);
   hCCpi0inFV_stack_11->SetBinError(1,0.4814682);
   hCCpi0inFV_stack_11->SetBinError(2,0.9206376);
   hCCpi0inFV_stack_11->SetBinError(3,1.345822);
   hCCpi0inFV_stack_11->SetBinError(4,6.613789);
   hCCpi0inFV_stack_11->SetBinError(5,6.418829);
   hCCpi0inFV_stack_11->SetBinError(6,6.815962);
   hCCpi0inFV_stack_11->SetBinError(7,7.363234);
   hCCpi0inFV_stack_11->SetBinError(8,7.19951);
   hCCpi0inFV_stack_11->SetBinError(9,6.844414);
   hCCpi0inFV_stack_11->SetBinError(10,6.646245);
   hCCpi0inFV_stack_11->SetBinError(11,6.07658);
   hCCpi0inFV_stack_11->SetBinError(12,5.589356);
   hCCpi0inFV_stack_11->SetBinError(13,4.970446);
   hCCpi0inFV_stack_11->SetBinError(14,4.851423);
   hCCpi0inFV_stack_11->SetBinError(15,4.012184);
   hCCpi0inFV_stack_11->SetBinError(16,3.893898);
   hCCpi0inFV_stack_11->SetBinError(17,3.390812);
   hCCpi0inFV_stack_11->SetBinError(18,3.402668);
   hCCpi0inFV_stack_11->SetBinError(19,2.836523);
   hCCpi0inFV_stack_11->SetBinError(20,2.444532);
   hCCpi0inFV_stack_11->SetBinError(21,2.305596);
   hCCpi0inFV_stack_11->SetBinError(22,2.141987);
   hCCpi0inFV_stack_11->SetBinError(23,1.570136);
   hCCpi0inFV_stack_11->SetBinError(24,1.667441);
   hCCpi0inFV_stack_11->SetBinError(25,1.331588);
   hCCpi0inFV_stack_11->SetBinError(26,2.939108);
   hCCpi0inFV_stack_11->SetEntries(10148);

   ci = 1458;
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
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,22.3628);
   hNCinFV_stack_12->SetBinContent(1,0.3401776);
   hNCinFV_stack_12->SetBinContent(2,0.3917402);
   hNCinFV_stack_12->SetBinContent(4,1.763676);
   hNCinFV_stack_12->SetBinContent(5,1.65886);
   hNCinFV_stack_12->SetBinContent(6,2.592565);
   hNCinFV_stack_12->SetBinContent(7,2.585803);
   hNCinFV_stack_12->SetBinContent(8,0.785171);
   hNCinFV_stack_12->SetBinContent(9,2.195754);
   hNCinFV_stack_12->SetBinContent(10,1.660551);
   hNCinFV_stack_12->SetBinContent(11,1.373626);
   hNCinFV_stack_12->SetBinContent(12,2.195754);
   hNCinFV_stack_12->SetBinContent(13,1.467217);
   hNCinFV_stack_12->SetBinContent(14,1.663932);
   hNCinFV_stack_12->SetBinContent(15,1.073786);
   hNCinFV_stack_12->SetBinContent(16,0.1967154);
   hNCinFV_stack_12->SetBinContent(17,1.270501);
   hNCinFV_stack_12->SetBinContent(18,0.9303237);
   hNCinFV_stack_12->SetBinContent(19,0.3917402);
   hNCinFV_stack_12->SetBinContent(20,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.8770706);
   hNCinFV_stack_12->SetBinContent(22,0.1967154);
   hNCinFV_stack_12->SetBinContent(23,0.3401776);
   hNCinFV_stack_12->SetBinContent(24,0.1950248);
   hNCinFV_stack_12->SetBinContent(26,1.607298);
   hNCinFV_stack_12->SetBinError(0,2.419835);
   hNCinFV_stack_12->SetBinError(1,0.3401776);
   hNCinFV_stack_12->SetBinError(2,0.2770047);
   hNCinFV_stack_12->SetBinError(4,0.5878975);
   hNCinFV_stack_12->SetBinError(5,0.650338);
   hNCinFV_stack_12->SetBinError(6,0.809985);
   hNCinFV_stack_12->SetBinError(7,0.8083481);
   hNCinFV_stack_12->SetBinError(8,0.3925882);
   hNCinFV_stack_12->SetBinError(9,0.7598403);
   hNCinFV_stack_12->SetBinError(10,0.650847);
   hNCinFV_stack_12->SetBinError(11,0.519186);
   hNCinFV_stack_12->SetBinError(12,0.7598403);
   hNCinFV_stack_12->SetBinError(13,0.6214735);
   hNCinFV_stack_12->SetBinError(14,0.6518637);
   hNCinFV_stack_12->SetBinError(15,0.5557297);
   hNCinFV_stack_12->SetBinError(16,0.1967154);
   hNCinFV_stack_12->SetBinError(17,0.5895188);
   hNCinFV_stack_12->SetBinError(18,0.4814682);
   hNCinFV_stack_12->SetBinError(19,0.2770047);
   hNCinFV_stack_12->SetBinError(20,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.5197486);
   hNCinFV_stack_12->SetBinError(22,0.1967154);
   hNCinFV_stack_12->SetBinError(23,0.3401776);
   hNCinFV_stack_12->SetBinError(24,0.1950249);
   hNCinFV_stack_12->SetBinError(26,0.6796534);
   hNCinFV_stack_12->SetEntries(212);

   ci = 1459;
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
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,108.3098);
   hnumuCCinFV_stack_13->SetBinContent(1,0.9880478);
   hnumuCCinFV_stack_13->SetBinContent(2,5.236373);
   hnumuCCinFV_stack_13->SetBinContent(3,9.992937);
   hnumuCCinFV_stack_13->SetBinContent(4,38.39201);
   hnumuCCinFV_stack_13->SetBinContent(5,32.08289);
   hnumuCCinFV_stack_13->SetBinContent(6,23.36121);
   hnumuCCinFV_stack_13->SetBinContent(7,33.75404);
   hnumuCCinFV_stack_13->SetBinContent(8,31.98697);
   hnumuCCinFV_stack_13->SetBinContent(9,26.78831);
   hnumuCCinFV_stack_13->SetBinContent(10,22.81162);
   hnumuCCinFV_stack_13->SetBinContent(11,24.47897);
   hnumuCCinFV_stack_13->SetBinContent(12,23.07478);
   hnumuCCinFV_stack_13->SetBinContent(13,18.3718);
   hnumuCCinFV_stack_13->SetBinContent(14,17.7277);
   hnumuCCinFV_stack_13->SetBinContent(15,15.33223);
   hnumuCCinFV_stack_13->SetBinContent(16,9.291924);
   hnumuCCinFV_stack_13->SetBinContent(17,9.332796);
   hnumuCCinFV_stack_13->SetBinContent(18,8.153946);
   hnumuCCinFV_stack_13->SetBinContent(19,6.185731);
   hnumuCCinFV_stack_13->SetBinContent(20,3.907867);
   hnumuCCinFV_stack_13->SetBinContent(21,3.765503);
   hnumuCCinFV_stack_13->SetBinContent(22,4.744601);
   hnumuCCinFV_stack_13->SetBinContent(23,1.607298);
   hnumuCCinFV_stack_13->SetBinContent(24,1.908829);
   hnumuCCinFV_stack_13->SetBinContent(25,2.194063);
   hnumuCCinFV_stack_13->SetBinContent(26,7.499921);
   hnumuCCinFV_stack_13->SetBinError(0,5.768776);
   hnumuCCinFV_stack_13->SetBinError(1,0.5235589);
   hnumuCCinFV_stack_13->SetBinError(2,1.573925);
   hnumuCCinFV_stack_13->SetBinError(3,2.741065);
   hnumuCCinFV_stack_13->SetBinError(4,3.547358);
   hnumuCCinFV_stack_13->SetBinError(5,2.884782);
   hnumuCCinFV_stack_13->SetBinError(6,2.471508);
   hnumuCCinFV_stack_13->SetBinError(7,3.868189);
   hnumuCCinFV_stack_13->SetBinError(8,2.911016);
   hnumuCCinFV_stack_13->SetBinError(9,2.668634);
   hnumuCCinFV_stack_13->SetBinError(10,2.581212);
   hnumuCCinFV_stack_13->SetBinError(11,2.51794);
   hnumuCCinFV_stack_13->SetBinError(12,2.575261);
   hnumuCCinFV_stack_13->SetBinError(13,2.225156);
   hnumuCCinFV_stack_13->SetBinError(14,2.123466);
   hnumuCCinFV_stack_13->SetBinError(15,1.966724);
   hnumuCCinFV_stack_13->SetBinError(16,1.516784);
   hnumuCCinFV_stack_13->SetBinError(17,1.546878);
   hnumuCCinFV_stack_13->SetBinError(18,1.470465);
   hnumuCCinFV_stack_13->SetBinError(19,1.325601);
   hnumuCCinFV_stack_13->SetBinError(20,0.9808007);
   hnumuCCinFV_stack_13->SetBinError(21,0.9711813);
   hnumuCCinFV_stack_13->SetBinError(22,1.037837);
   hnumuCCinFV_stack_13->SetBinError(23,0.6796534);
   hnumuCCinFV_stack_13->SetBinError(24,0.6506224);
   hnumuCCinFV_stack_13->SetBinError(25,0.7594044);
   hnumuCCinFV_stack_13->SetBinError(26,1.509914);
   hnumuCCinFV_stack_13->SetEntries(2051);

   ci = 1460;
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
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,1.885979);
   hnueCCinFV_stack_14->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(5,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(6,0.536893);
   hnueCCinFV_stack_14->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(9,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(10,0.9269427);
   hnueCCinFV_stack_14->SetBinContent(11,0.536893);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(22,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.6803553);
   hnueCCinFV_stack_14->SetBinContent(26,0.1950248);
   hnueCCinFV_stack_14->SetBinError(0,0.6887107);
   hnueCCinFV_stack_14->SetBinError(4,0.1950249);
   hnueCCinFV_stack_14->SetBinError(5,0.438694);
   hnueCCinFV_stack_14->SetBinError(6,0.3929602);
   hnueCCinFV_stack_14->SetBinError(7,0.3401776);
   hnueCCinFV_stack_14->SetBinError(9,0.438694);
   hnueCCinFV_stack_14->SetBinError(10,0.4800908);
   hnueCCinFV_stack_14->SetBinError(11,0.3929602);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.1950249);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(18,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.3401776);
   hnueCCinFV_stack_14->SetBinError(22,0.3921167);
   hnueCCinFV_stack_14->SetBinError(23,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.4810838);
   hnueCCinFV_stack_14->SetBinError(26,0.1950249);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1461;
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
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__5->SetBinContent(0,443.6835);
   hmcerror__5->SetBinContent(1,2.286449);
   hmcerror__5->SetBinContent(2,9.282885);
   hmcerror__5->SetBinContent(3,18.13332);
   hmcerror__5->SetBinContent(4,225.8437);
   hmcerror__5->SetBinContent(5,207.1193);
   hmcerror__5->SetBinContent(6,220.7004);
   hmcerror__5->SetBinContent(7,264.0414);
   hmcerror__5->SetBinContent(8,257.6323);
   hmcerror__5->SetBinContent(9,228.7239);
   hmcerror__5->SetBinContent(10,207.477);
   hmcerror__5->SetBinContent(11,183.0032);
   hmcerror__5->SetBinContent(12,156.2776);
   hmcerror__5->SetBinContent(13,127.6657);
   hmcerror__5->SetBinContent(14,120.8427);
   hmcerror__5->SetBinContent(15,85.70811);
   hmcerror__5->SetBinContent(16,74.15353);
   hmcerror__5->SetBinContent(17,59.91013);
   hmcerror__5->SetBinContent(18,56.68412);
   hmcerror__5->SetBinContent(19,41.98411);
   hmcerror__5->SetBinContent(20,30.51354);
   hmcerror__5->SetBinContent(21,28.04935);
   hmcerror__5->SetBinContent(22,24.61558);
   hmcerror__5->SetBinContent(23,13.21869);
   hmcerror__5->SetBinContent(24,13.74195);
   hmcerror__5->SetBinContent(25,10.69802);
   hmcerror__5->SetBinContent(26,48.01229);
   hmcerror__5->SetBinError(0,10.75548);
   hmcerror__5->SetBinError(1,4.588588);
   hmcerror__5->SetBinError(2,17.79728);
   hmcerror__5->SetBinError(3,10.95456);
   hmcerror__5->SetBinError(4,66.80893);
   hmcerror__5->SetBinError(5,70.88856);
   hmcerror__5->SetBinError(6,63.16777);
   hmcerror__5->SetBinError(7,79.36621);
   hmcerror__5->SetBinError(8,80.24071);
   hmcerror__5->SetBinError(9,61.77362);
   hmcerror__5->SetBinError(10,62.47208);
   hmcerror__5->SetBinError(11,61.30492);
   hmcerror__5->SetBinError(12,43.38272);
   hmcerror__5->SetBinError(13,38.96416);
   hmcerror__5->SetBinError(14,36.6178);
   hmcerror__5->SetBinError(15,30.79611);
   hmcerror__5->SetBinError(16,26.6527);
   hmcerror__5->SetBinError(17,20.74034);
   hmcerror__5->SetBinError(18,21.26574);
   hmcerror__5->SetBinError(19,16.58942);
   hmcerror__5->SetBinError(20,13.12151);
   hmcerror__5->SetBinError(21,18.17769);
   hmcerror__5->SetBinError(22,14.69125);
   hmcerror__5->SetBinError(23,7.620702);
   hmcerror__5->SetBinError(24,8.446137);
   hmcerror__5->SetBinError(25,7.822421);
   hmcerror__5->SetBinError(26,20.41963);
   hmcerror__5->SetEntries(3142.018);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3005[25] = {
   1,
   4,
   26,
   261,
   205,
   230,
   251,
   234,
   203,
   176,
   175,
   141,
   116,
   83,
   91,
   68,
   51,
   37,
   29,
   22,
   23,
   10,
   14,
   5,
   8};
   Double_t _felx3005[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3005[25] = {
   1,
   2.29683,
   5.2453,
   16.15549,
   14.31782,
   15.16575,
   15.84298,
   15.29706,
   14.24781,
   13.2665,
   13.22876,
   11.87434,
   10.77033,
   9.234,
   9.6617,
   8.3726,
   7.2725,
   6.2203,
   5.5285,
   4.8417,
   4.9457,
   3.34883,
   3.9102,
   2.48995,
   3.0307};
   Double_t _fehx3005[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3005[25] = {
   1.35971,
   1.98186,
   5.0358,
   16.15549,
   14.31782,
   15.16575,
   15.84298,
   15.29706,
   14.24781,
   13.2665,
   13.22876,
   11.87434,
   10.77033,
   9.0323,
   9.46,
   8.1701,
   7.0686,
   6.0141,
   5.3201,
   4.6299,
   4.7346,
   3.1179,
   3.6898,
   2.21064,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-275,1225);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(304.871);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.22","h");
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
   entry=leg->AddEntry("","BNB Data, 2464.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 20.9","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  59.6","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  42.9","F");

   ci = 1455;
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

   ci = 1456;
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

   ci = 1457;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 2111.3","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 26.7","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 375.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 6.7","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3006[25] = {
   2.006862,
   1.917214,
   0.6041123,
   0.2958193,
   0.3422596,
   0.286215,
   0.3005824,
   0.3114544,
   0.2700794,
   0.3011037,
   0.3349937,
   0.2776004,
   0.3052046,
   0.3030205,
   0.3593139,
   0.3594259,
   0.3461909,
   0.3751623,
   0.3951358,
   0.4300227,
   0.648061,
   0.5968271,
   0.5765097,
   0.6146245,
   0.7312028};
   Double_t _fehx3006[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3006[25] = {
   2.006862,
   1.917214,
   0.6041123,
   0.2958193,
   0.3422596,
   0.286215,
   0.3005824,
   0.3114544,
   0.2700794,
   0.3011037,
   0.3349937,
   0.2776004,
   0.3052046,
   0.3030205,
   0.3593139,
   0.3594259,
   0.3461909,
   0.3751623,
   0.3951358,
   0.4300227,
   0.648061,
   0.5968271,
   0.5765097,
   0.6146245,
   0.7312028};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-275,1225);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3007[25] = {
   0.4478789,
   0.3279,
   0.2849808,
   0.2233611,
   0.2380079,
   0.2503334,
   0.2315488,
   0.251592,
   0.2361401,
   0.2427425,
   0.2213663,
   0.2421839,
   0.2370499,
   0.238427,
   0.2602618,
   0.2463667,
   0.2411112,
   0.2445723,
   0.2642318,
   0.247329,
   0.2522581,
   0.2593752,
   0.3098238,
   0.2713384,
   0.3177714};
   Double_t _fehx3007[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3007[25] = {
   0.4478789,
   0.3279,
   0.2849808,
   0.2233611,
   0.2380079,
   0.2503334,
   0.2315488,
   0.251592,
   0.2361401,
   0.2427425,
   0.2213663,
   0.2421839,
   0.2370499,
   0.238427,
   0.2602618,
   0.2463667,
   0.2411112,
   0.2445723,
   0.2642318,
   0.247329,
   0.2522581,
   0.2593752,
   0.3098238,
   0.2713384,
   0.3177714};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-275,1225);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3008[25] = {
   0.4373594,
   0.4309005,
   1.433824,
   1.155666,
   0.9897678,
   1.042137,
   0.9506083,
   0.9082713,
   0.8875329,
   0.8482869,
   0.9562673,
   0.9022406,
   0.9086231,
   0.6868436,
   1.061743,
   0.9170164,
   0.8512751,
   0.6527401,
   0.6907376,
   0.7209914,
   0.8199835,
   0.4062468,
   1.059107,
   0.3638495,
   0.7478021};
   Double_t _felx3008[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3008[25] = {
   0.4373594,
   0.2474263,
   0.2892631,
   0.07153395,
   0.06912838,
   0.06871647,
   0.06000187,
   0.05937555,
   0.0622926,
   0.06394203,
   0.07228702,
   0.07598237,
   0.08436354,
   0.07641342,
   0.1127279,
   0.112909,
   0.1213902,
   0.1097362,
   0.1316808,
   0.1586738,
   0.1763214,
   0.1360451,
   0.2958085,
   0.1811934,
   0.2832955};
   Double_t _fehx3008[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3008[25] = {
   0.5946819,
   0.2134961,
   0.2777097,
   0.07153395,
   0.06912838,
   0.06871647,
   0.06000187,
   0.05937555,
   0.0622926,
   0.06394203,
   0.07228702,
   0.07598237,
   0.08436354,
   0.07474431,
   0.1103746,
   0.1101782,
   0.1179867,
   0.1060985,
   0.126717,
   0.1517326,
   0.1687954,
   0.1266637,
   0.2791351,
   0.160868,
   0.2607586};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-275,1225);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.882688);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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

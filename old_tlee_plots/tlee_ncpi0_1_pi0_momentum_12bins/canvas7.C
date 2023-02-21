#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Jan  9 23:11:10 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-11.90791,1353.846,1316.764);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,229.3065);
   hmc__19->SetBinContent(2,595.3954);
   hmc__19->SetBinContent(3,489.7144);
   hmc__19->SetBinContent(4,318.3924);
   hmc__19->SetBinContent(5,217.4415);
   hmc__19->SetBinContent(6,136.4204);
   hmc__19->SetBinContent(7,78.54291);
   hmc__19->SetBinContent(8,49.54894);
   hmc__19->SetBinContent(9,33.69032);
   hmc__19->SetBinContent(10,26.13915);
   hmc__19->SetBinContent(11,22.58505);
   hmc__19->SetBinContent(12,21.59742);
   hmc__19->SetBinContent(13,170.2805);
   hmc__19->SetBinError(1,80.93245);
   hmc__19->SetBinError(2,266.4385);
   hmc__19->SetBinError(3,205.0686);
   hmc__19->SetBinError(4,123.8098);
   hmc__19->SetBinError(5,80.54683);
   hmc__19->SetBinError(6,42.84397);
   hmc__19->SetBinError(7,24.06003);
   hmc__19->SetBinError(8,16.30154);
   hmc__19->SetBinError(9,12.95345);
   hmc__19->SetBinError(10,13.26064);
   hmc__19->SetBinError(11,12.6607);
   hmc__19->SetBinError(12,11.96236);
   hmc__19->SetBinError(13,48.92795);
   hmc__19->SetMinimum(-11.90791);
   hmc__19->SetMaximum(1250.33);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-2.228162e-09);
   hs7_stack_7->SetMaximum(625.1652);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,9.2862);
   hbadmatch_stack_1->SetBinContent(2,14.4579);
   hbadmatch_stack_1->SetBinContent(3,9.553005);
   hbadmatch_stack_1->SetBinContent(4,5.807938);
   hbadmatch_stack_1->SetBinContent(5,3.040002);
   hbadmatch_stack_1->SetBinContent(6,2.256762);
   hbadmatch_stack_1->SetBinContent(7,1.769143);
   hbadmatch_stack_1->SetBinContent(8,1.513729);
   hbadmatch_stack_1->SetBinContent(9,1.189895);
   hbadmatch_stack_1->SetBinContent(10,1.063723);
   hbadmatch_stack_1->SetBinContent(11,0.5052582);
   hbadmatch_stack_1->SetBinContent(12,1.247732);
   hbadmatch_stack_1->SetBinContent(13,3.138938);
   hbadmatch_stack_1->SetBinError(1,1.609421);
   hbadmatch_stack_1->SetBinError(2,2.882579);
   hbadmatch_stack_1->SetBinError(3,1.67419);
   hbadmatch_stack_1->SetBinError(4,1.183012);
   hbadmatch_stack_1->SetBinError(5,0.8402915);
   hbadmatch_stack_1->SetBinError(6,0.8227272);
   hbadmatch_stack_1->SetBinError(7,0.6942674);
   hbadmatch_stack_1->SetBinError(8,0.7607775);
   hbadmatch_stack_1->SetBinError(9,0.719939);
   hbadmatch_stack_1->SetBinError(10,0.5834951);
   hbadmatch_stack_1->SetBinError(11,0.4021099);
   hbadmatch_stack_1->SetBinError(12,0.5865443);
   hbadmatch_stack_1->SetBinError(13,0.9462749);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,26.48179);
   hext_stack_2->SetBinContent(2,45.58583);
   hext_stack_2->SetBinContent(3,35.26974);
   hext_stack_2->SetBinContent(4,22.77056);
   hext_stack_2->SetBinContent(5,13.07731);
   hext_stack_2->SetBinContent(6,14.83775);
   hext_stack_2->SetBinContent(7,7.187449);
   hext_stack_2->SetBinContent(8,3.558419);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,2.435184);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,13.24448);
   hext_stack_2->SetBinError(1,3.604508);
   hext_stack_2->SetBinError(2,4.635352);
   hext_stack_2->SetBinError(3,4.038341);
   hext_stack_2->SetBinError(4,3.333335);
   hext_stack_2->SetBinError(5,2.571339);
   hext_stack_2->SetBinError(6,2.779678);
   hext_stack_2->SetBinError(7,1.875196);
   hext_stack_2->SetBinError(8,1.301958);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,0.9256422);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,2.52896);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,2.040513);
   hdirt_stack_3->SetBinContent(2,4.314867);
   hdirt_stack_3->SetBinContent(3,2.866426);
   hdirt_stack_3->SetBinContent(4,0.3058066);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(7,0.4950385);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.5388689);
   hdirt_stack_3->SetBinError(1,0.7162001);
   hdirt_stack_3->SetBinError(2,1.32501);
   hdirt_stack_3->SetBinError(3,0.7894621);
   hdirt_stack_3->SetBinError(4,0.2153013);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(7,0.2933304);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(13,0.4239131);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,9.95464);
   houtFV_stack_4->SetBinContent(2,13.43335);
   houtFV_stack_4->SetBinContent(3,18.93947);
   houtFV_stack_4->SetBinContent(4,11.22734);
   houtFV_stack_4->SetBinContent(5,7.843289);
   houtFV_stack_4->SetBinContent(6,4.582919);
   houtFV_stack_4->SetBinContent(7,3.500604);
   houtFV_stack_4->SetBinContent(8,1.168293);
   houtFV_stack_4->SetBinContent(9,1.694004);
   houtFV_stack_4->SetBinContent(10,1.508214);
   houtFV_stack_4->SetBinContent(11,0.9286332);
   houtFV_stack_4->SetBinContent(12,1.90575);
   houtFV_stack_4->SetBinContent(13,10.13583);
   houtFV_stack_4->SetBinError(1,1.558149);
   houtFV_stack_4->SetBinError(2,1.823898);
   houtFV_stack_4->SetBinError(3,2.092463);
   houtFV_stack_4->SetBinError(4,1.683122);
   houtFV_stack_4->SetBinError(5,1.354897);
   houtFV_stack_4->SetBinError(6,1.038412);
   houtFV_stack_4->SetBinError(7,0.8442584);
   houtFV_stack_4->SetBinError(8,0.520746);
   houtFV_stack_4->SetBinError(9,0.6481805);
   houtFV_stack_4->SetBinError(10,0.5713886);
   houtFV_stack_4->SetBinError(11,0.48078);
   houtFV_stack_4->SetBinError(12,0.6897791);
   houtFV_stack_4->SetBinError(13,1.61494);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2247842);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6874395);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.315269);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6389689);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4850891);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2717257);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.06861491);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09597109);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1141471);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4404859);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.09063352);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2670108);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4244089);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2377494);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1896975);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1725862);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04153041);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06663134);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.0627846);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1393958);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.313164);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.648016);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.294589);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.117662);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4201569);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1910472);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1767506);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05573011);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2041393);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08721538);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4080019);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2601497);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.555065);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3925223);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5082387);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1430704);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1340302);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07000857);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0432678);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1396091);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06251801);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1722071);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,66.92091);
   hNCpi0inFVres_stack_7->SetBinContent(2,235.9873);
   hNCpi0inFVres_stack_7->SetBinContent(3,211.9842);
   hNCpi0inFVres_stack_7->SetBinContent(4,136.2328);
   hNCpi0inFVres_stack_7->SetBinContent(5,91.76895);
   hNCpi0inFVres_stack_7->SetBinContent(6,48.49461);
   hNCpi0inFVres_stack_7->SetBinContent(7,25.74392);
   hNCpi0inFVres_stack_7->SetBinContent(8,15.23399);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.57428);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.663369);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.410366);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.98913);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.13686);
   hNCpi0inFVres_stack_7->SetBinError(1,2.39418);
   hNCpi0inFVres_stack_7->SetBinError(2,4.349962);
   hNCpi0inFVres_stack_7->SetBinError(3,4.314104);
   hNCpi0inFVres_stack_7->SetBinError(4,3.437046);
   hNCpi0inFVres_stack_7->SetBinError(5,3.009664);
   hNCpi0inFVres_stack_7->SetBinError(6,2.352809);
   hNCpi0inFVres_stack_7->SetBinError(7,1.794427);
   hNCpi0inFVres_stack_7->SetBinError(8,1.319856);
   hNCpi0inFVres_stack_7->SetBinError(9,1.370499);
   hNCpi0inFVres_stack_7->SetBinError(10,1.169524);
   hNCpi0inFVres_stack_7->SetBinError(11,1.00671);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9067533);
   hNCpi0inFVres_stack_7->SetBinError(13,2.367818);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.52951);
   hNCpi0inFVdis_stack_8->SetBinContent(2,46.96078);
   hNCpi0inFVdis_stack_8->SetBinContent(3,35.41452);
   hNCpi0inFVdis_stack_8->SetBinContent(4,26.21647);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.8507);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.06613);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.163352);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.493821);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.798851);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.300052);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.437381);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.816745);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.56924);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.295896);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.037817);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.770248);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.670746);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.709899);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.282056);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.023694);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7704465);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8909981);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5285019);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.421932);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7643352);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.687553);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2357835);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4581807);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1343501);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1907973);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04222718);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,39.60807);
   hCCpi0inFV_stack_10->SetBinContent(2,110.1333);
   hCCpi0inFV_stack_10->SetBinContent(3,79.91934);
   hCCpi0inFV_stack_10->SetBinContent(4,52.28391);
   hCCpi0inFV_stack_10->SetBinContent(5,28.74748);
   hCCpi0inFV_stack_10->SetBinContent(6,22.53983);
   hCCpi0inFV_stack_10->SetBinContent(7,12.10005);
   hCCpi0inFV_stack_10->SetBinContent(8,5.873331);
   hCCpi0inFV_stack_10->SetBinContent(9,4.496323);
   hCCpi0inFV_stack_10->SetBinContent(10,3.324483);
   hCCpi0inFV_stack_10->SetBinContent(11,3.168278);
   hCCpi0inFV_stack_10->SetBinContent(12,3.062572);
   hCCpi0inFV_stack_10->SetBinContent(13,18.52749);
   hCCpi0inFV_stack_10->SetBinError(1,3.146966);
   hCCpi0inFV_stack_10->SetBinError(2,5.259969);
   hCCpi0inFV_stack_10->SetBinError(3,4.509041);
   hCCpi0inFV_stack_10->SetBinError(4,3.627308);
   hCCpi0inFV_stack_10->SetBinError(5,2.595502);
   hCCpi0inFV_stack_10->SetBinError(6,2.410204);
   hCCpi0inFV_stack_10->SetBinError(7,1.839745);
   hCCpi0inFV_stack_10->SetBinError(8,1.161153);
   hCCpi0inFV_stack_10->SetBinError(9,1.037978);
   hCCpi0inFV_stack_10->SetBinError(10,0.9211559);
   hCCpi0inFV_stack_10->SetBinError(11,0.9096992);
   hCCpi0inFV_stack_10->SetBinError(12,0.8399848);
   hCCpi0inFV_stack_10->SetBinError(13,2.235628);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,31.52385);
   hNCinFV_stack_11->SetBinContent(2,65.1311);
   hNCinFV_stack_11->SetBinContent(3,45.73399);
   hNCinFV_stack_11->SetBinContent(4,25.48263);
   hNCinFV_stack_11->SetBinContent(5,19.95198);
   hNCinFV_stack_11->SetBinContent(6,15.26789);
   hNCinFV_stack_11->SetBinContent(7,9.409421);
   hNCinFV_stack_11->SetBinContent(8,5.569907);
   hNCinFV_stack_11->SetBinContent(9,1.605361);
   hNCinFV_stack_11->SetBinContent(10,3.251019);
   hNCinFV_stack_11->SetBinContent(11,2.346761);
   hNCinFV_stack_11->SetBinContent(12,2.994885);
   hNCinFV_stack_11->SetBinContent(13,19.36369);
   hNCinFV_stack_11->SetBinError(1,3.027741);
   hNCinFV_stack_11->SetBinError(2,4.444343);
   hNCinFV_stack_11->SetBinError(3,3.720339);
   hNCinFV_stack_11->SetBinError(4,2.81703);
   hNCinFV_stack_11->SetBinError(5,2.447843);
   hNCinFV_stack_11->SetBinError(6,2.27844);
   hNCinFV_stack_11->SetBinError(7,1.72026);
   hNCinFV_stack_11->SetBinError(8,1.432142);
   hNCinFV_stack_11->SetBinError(9,0.7162083);
   hNCinFV_stack_11->SetBinError(10,1.041955);
   hNCinFV_stack_11->SetBinError(11,0.7013044);
   hNCinFV_stack_11->SetBinError(12,1.175751);
   hNCinFV_stack_11->SetBinError(13,2.403255);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,23.25305);
   hnumuCCinFV_stack_12->SetBinContent(2,53.32677);
   hnumuCCinFV_stack_12->SetBinContent(3,44.21409);
   hnumuCCinFV_stack_12->SetBinContent(4,34.38142);
   hnumuCCinFV_stack_12->SetBinContent(5,29.70541);
   hnumuCCinFV_stack_12->SetBinContent(6,14.5183);
   hnumuCCinFV_stack_12->SetBinContent(7,10.47983);
   hnumuCCinFV_stack_12->SetBinContent(8,10.51218);
   hnumuCCinFV_stack_12->SetBinContent(9,5.583011);
   hnumuCCinFV_stack_12->SetBinContent(10,3.517015);
   hnumuCCinFV_stack_12->SetBinContent(11,4.074613);
   hnumuCCinFV_stack_12->SetBinContent(12,3.130134);
   hnumuCCinFV_stack_12->SetBinContent(13,33.69078);
   hnumuCCinFV_stack_12->SetBinError(1,2.591033);
   hnumuCCinFV_stack_12->SetBinError(2,4.285512);
   hnumuCCinFV_stack_12->SetBinError(3,3.491379);
   hnumuCCinFV_stack_12->SetBinError(4,3.319502);
   hnumuCCinFV_stack_12->SetBinError(5,3.299885);
   hnumuCCinFV_stack_12->SetBinError(6,3.094055);
   hnumuCCinFV_stack_12->SetBinError(7,2.104496);
   hnumuCCinFV_stack_12->SetBinError(8,1.94056);
   hnumuCCinFV_stack_12->SetBinError(9,1.301723);
   hnumuCCinFV_stack_12->SetBinError(10,0.89164);
   hnumuCCinFV_stack_12->SetBinError(11,1.044824);
   hnumuCCinFV_stack_12->SetBinError(12,1.03235);
   hnumuCCinFV_stack_12->SetBinError(13,3.560278);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.9342211);
   hnueCCinFV_stack_13->SetBinContent(2,1.270501);
   hnueCCinFV_stack_13->SetBinContent(3,2.191614);
   hnueCCinFV_stack_13->SetBinContent(4,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(5,0.8371204);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.4487298);
   hnueCCinFV_stack_13->SetBinContent(8,0.4313416);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(13,5.085778);
   hnueCCinFV_stack_13->SetBinError(1,0.5439573);
   hnueCCinFV_stack_13->SetBinError(2,0.5895188);
   hnueCCinFV_stack_13->SetBinError(3,0.9060195);
   hnueCCinFV_stack_13->SetBinError(4,0.4800908);
   hnueCCinFV_stack_13->SetBinError(5,0.4210259);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.3200014);
   hnueCCinFV_stack_13->SetBinError(8,0.3061804);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.5410961);
   hnueCCinFV_stack_13->SetBinError(13,1.180165);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,229.3065);
   hmcerror__20->SetBinContent(2,595.3954);
   hmcerror__20->SetBinContent(3,489.7144);
   hmcerror__20->SetBinContent(4,318.3924);
   hmcerror__20->SetBinContent(5,217.4415);
   hmcerror__20->SetBinContent(6,136.4204);
   hmcerror__20->SetBinContent(7,78.54291);
   hmcerror__20->SetBinContent(8,49.54894);
   hmcerror__20->SetBinContent(9,33.69032);
   hmcerror__20->SetBinContent(10,26.13915);
   hmcerror__20->SetBinContent(11,22.58505);
   hmcerror__20->SetBinContent(12,21.59742);
   hmcerror__20->SetBinContent(13,170.2805);
   hmcerror__20->SetBinError(1,80.93245);
   hmcerror__20->SetBinError(2,266.4385);
   hmcerror__20->SetBinError(3,205.0686);
   hmcerror__20->SetBinError(4,123.8098);
   hmcerror__20->SetBinError(5,80.54683);
   hmcerror__20->SetBinError(6,42.84397);
   hmcerror__20->SetBinError(7,24.06003);
   hmcerror__20->SetBinError(8,16.30154);
   hmcerror__20->SetBinError(9,12.95345);
   hmcerror__20->SetBinError(10,13.26064);
   hmcerror__20->SetBinError(11,12.6607);
   hmcerror__20->SetBinError(12,11.96236);
   hmcerror__20->SetBinError(13,48.92795);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[12] = {
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
   1150};
   Double_t _fy3025[12] = {
   203,
   566,
   453,
   263,
   142,
   90,
   64,
   51,
   26,
   28,
   16,
   11};
   Double_t _felx3025[12] = {
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
   Double_t _fely3025[12] = {
   14.24781,
   23.79075,
   21.2838,
   16.21727,
   11.91638,
   9.6093,
   8.1273,
   7.2725,
   5.2453,
   5.4358,
   4.1628,
   3.4975};
   Double_t _fehx3025[12] = {
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
   Double_t _fehy3025[12] = {
   14.24781,
   23.79075,
   21.2838,
   16.21727,
   11.91638,
   9.4079,
   7.9246,
   7.0686,
   5.0358,
   5.2271,
   3.9454,
   3.27};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(6.75225);
   Graph_Graph3025->SetMaximum(648.0196);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.31","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.9/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1913.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 51.7","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 175.2","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 10.9","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 76.7","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.0","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.5","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  866.0","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  184.0","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 365.3","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 228.3","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 236.7","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.7","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3026[12] = {
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
   1150};
   Double_t _fy3026[12] = {
   1,
   1,
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
   Double_t _felx3026[12] = {
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
   Double_t _fely3026[12] = {
   0.3529445,
   0.4474985,
   0.4187513,
   0.3888591,
   0.3704298,
   0.3140584,
   0.3063298,
   0.3289987,
   0.3844858,
   0.5073094,
   0.560579,
   0.553879};
   Double_t _fehx3026[12] = {
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
   Double_t _fehy3026[12] = {
   0.3529445,
   0.4474985,
   0.4187513,
   0.3888591,
   0.3704298,
   0.3140584,
   0.3063298,
   0.3289987,
   0.3844858,
   0.5073094,
   0.560579,
   0.553879};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[12] = {
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
   1150};
   Double_t _fy3027[12] = {
   1,
   1,
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
   Double_t _felx3027[12] = {
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
   Double_t _fely3027[12] = {
   0.3385512,
   0.4365039,
   0.4023584,
   0.3748736,
   0.3383815,
   0.2749038,
   0.2244712,
   0.217263,
   0.2700534,
   0.2622496,
   0.2270277,
   0.2608879};
   Double_t _fehx3027[12] = {
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
   Double_t _fehy3027[12] = {
   0.3385512,
   0.4365039,
   0.4023584,
   0.3748736,
   0.3383815,
   0.2749038,
   0.2244712,
   0.217263,
   0.2700534,
   0.2622496,
   0.2270277,
   0.2608879};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[12] = {
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
   1150};
   Double_t _fy3028[12] = {
   0.8852781,
   0.9506288,
   0.9250289,
   0.8260248,
   0.6530491,
   0.6597253,
   0.8148412,
   1.029285,
   0.771735,
   1.07119,
   0.7084333,
   0.5093201};
   Double_t _felx3028[12] = {
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
   Double_t _fely3028[12] = {
   0.06213434,
   0.03995791,
   0.04346165,
   0.05093487,
   0.05480267,
   0.07043887,
   0.1034759,
   0.1467741,
   0.1556916,
   0.2079563,
   0.1843166,
   0.1619406};
   Double_t _fehx3028[12] = {
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
   Double_t _fehy3028[12] = {
   0.06213434,
   0.03995791,
   0.04346165,
   0.05093487,
   0.05480267,
   0.06896255,
   0.1008952,
   0.142659,
   0.1494732,
   0.1999721,
   0.1746908,
   0.151407};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0.2550011);
   Graph_Graph3028->SetMaximum(1.363541);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,1200,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

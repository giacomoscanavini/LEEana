#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Jun  8 12:45:28 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",164,172,1200,900);
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
   pad1->Range(-184.6154,-15.05875,1353.846,1665.181);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmc__13->SetBinContent(1,39.46785);
   hmc__13->SetBinContent(2,236.0708);
   hmc__13->SetBinContent(3,621.2218);
   hmc__13->SetBinContent(4,752.9376);
   hmc__13->SetBinContent(5,549.9978);
   hmc__13->SetBinContent(6,369.7159);
   hmc__13->SetBinContent(7,278.8892);
   hmc__13->SetBinContent(8,192.4622);
   hmc__13->SetBinContent(9,121.1391);
   hmc__13->SetBinContent(10,76.21581);
   hmc__13->SetBinContent(11,56.28863);
   hmc__13->SetBinContent(12,36.51588);
   hmc__13->SetBinContent(13,24.18504);
   hmc__13->SetBinContent(14,17.81179);
   hmc__13->SetBinContent(15,14.33695);
   hmc__13->SetBinContent(16,10.75031);
   hmc__13->SetBinContent(17,7.508343);
   hmc__13->SetBinContent(18,5.683492);
   hmc__13->SetBinContent(19,3.088496);
   hmc__13->SetBinContent(20,3.037643);
   hmc__13->SetBinContent(21,26.27254);
   hmc__13->SetBinError(1,9.039545);
   hmc__13->SetBinError(2,45.61282);
   hmc__13->SetBinError(3,122.4671);
   hmc__13->SetBinError(4,173.1327);
   hmc__13->SetBinError(5,140.5487);
   hmc__13->SetBinError(6,98.84757);
   hmc__13->SetBinError(7,74.97301);
   hmc__13->SetBinError(8,54.74092);
   hmc__13->SetBinError(9,35.82111);
   hmc__13->SetBinError(10,22.39316);
   hmc__13->SetBinError(11,19.04836);
   hmc__13->SetBinError(12,11.19253);
   hmc__13->SetBinError(13,9.457905);
   hmc__13->SetBinError(14,7.088591);
   hmc__13->SetBinError(15,5.975017);
   hmc__13->SetBinError(16,6.275569);
   hmc__13->SetBinError(17,5.744723);
   hmc__13->SetBinError(18,4.155182);
   hmc__13->SetBinError(19,2.068442);
   hmc__13->SetBinError(20,2.053326);
   hmc__13->SetBinError(21,11.55074);
   hmc__13->SetMinimum(-15.05875);
   hmc__13->SetMaximum(1581.169);
   hmc__13->SetEntries(3396.741);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1200);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(790.5846);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.75277);
   hbadmatch_stack_1->SetBinContent(2,8.345544);
   hbadmatch_stack_1->SetBinContent(3,18.88646);
   hbadmatch_stack_1->SetBinContent(4,17.02204);
   hbadmatch_stack_1->SetBinContent(5,13.81458);
   hbadmatch_stack_1->SetBinContent(6,6.957611);
   hbadmatch_stack_1->SetBinContent(7,4.974042);
   hbadmatch_stack_1->SetBinContent(8,2.185394);
   hbadmatch_stack_1->SetBinContent(9,1.804013);
   hbadmatch_stack_1->SetBinContent(10,1.908252);
   hbadmatch_stack_1->SetBinContent(11,1.217248);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.9077157);
   hbadmatch_stack_1->SetBinError(2,1.628283);
   hbadmatch_stack_1->SetBinError(3,2.18156);
   hbadmatch_stack_1->SetBinError(4,2.371772);
   hbadmatch_stack_1->SetBinError(5,2.603021);
   hbadmatch_stack_1->SetBinError(6,1.3585);
   hbadmatch_stack_1->SetBinError(7,1.236536);
   hbadmatch_stack_1->SetBinError(8,0.8459834);
   hbadmatch_stack_1->SetBinError(9,0.7075491);
   hbadmatch_stack_1->SetBinError(10,0.7620643);
   hbadmatch_stack_1->SetBinError(11,0.6211758);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,9.462639);
   hext_stack_2->SetBinContent(2,34.03394);
   hext_stack_2->SetBinContent(3,64.99267);
   hext_stack_2->SetBinContent(4,54.02338);
   hext_stack_2->SetBinContent(5,46.42215);
   hext_stack_2->SetBinContent(6,21.89115);
   hext_stack_2->SetBinContent(7,12.38662);
   hext_stack_2->SetBinContent(8,11.71188);
   hext_stack_2->SetBinContent(9,9.664523);
   hext_stack_2->SetBinContent(10,2.834603);
   hext_stack_2->SetBinContent(11,1.78639);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,6.139236);
   hext_stack_2->SetBinError(1,2.094783);
   hext_stack_2->SetBinError(2,3.967768);
   hext_stack_2->SetBinError(3,5.658599);
   hext_stack_2->SetBinError(4,5.147413);
   hext_stack_2->SetBinError(5,4.797435);
   hext_stack_2->SetBinError(6,3.284727);
   hext_stack_2->SetBinError(7,2.338876);
   hext_stack_2->SetBinError(8,2.393399);
   hext_stack_2->SetBinError(9,2.303073);
   hext_stack_2->SetBinError(10,1.106046);
   hext_stack_2->SetBinError(11,0.8039566);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,1.714458);
   hext_stack_2->SetEntries(621);

   ci = 1491;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.7827715);
   hdirt_stack_3->SetBinContent(2,2.56557);
   hdirt_stack_3->SetBinContent(3,3.336656);
   hdirt_stack_3->SetBinContent(4,4.820207);
   hdirt_stack_3->SetBinContent(5,2.569035);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.7707915);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4027019);
   hdirt_stack_3->SetBinError(2,0.8330952);
   hdirt_stack_3->SetBinError(3,0.916131);
   hdirt_stack_3->SetBinError(4,1.364963);
   hdirt_stack_3->SetBinError(5,0.8912461);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4206878);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetEntries(69);

   ci = 1492;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,3.429128);
   houtFV_stack_4->SetBinContent(2,21.65502);
   houtFV_stack_4->SetBinContent(3,38.68944);
   houtFV_stack_4->SetBinContent(4,47.90199);
   houtFV_stack_4->SetBinContent(5,32.95029);
   houtFV_stack_4->SetBinContent(6,20.59604);
   houtFV_stack_4->SetBinContent(7,20.02276);
   houtFV_stack_4->SetBinContent(8,9.334348);
   houtFV_stack_4->SetBinContent(9,7.718583);
   houtFV_stack_4->SetBinContent(10,4.106273);
   houtFV_stack_4->SetBinContent(11,3.657526);
   houtFV_stack_4->SetBinContent(12,1.949166);
   houtFV_stack_4->SetBinContent(13,1.231246);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.8770706);
   houtFV_stack_4->SetBinContent(16,0.7834804);
   houtFV_stack_4->SetBinContent(17,0.3934307);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinError(1,1.025732);
   houtFV_stack_4->SetBinError(2,2.320736);
   houtFV_stack_4->SetBinError(3,3.100443);
   houtFV_stack_4->SetBinError(4,3.580618);
   houtFV_stack_4->SetBinError(5,2.841232);
   houtFV_stack_4->SetBinError(6,2.167969);
   houtFV_stack_4->SetBinError(7,2.224416);
   houtFV_stack_4->SetBinError(8,1.52145);
   houtFV_stack_4->SetBinError(9,1.455772);
   houtFV_stack_4->SetBinError(10,1.000664);
   houtFV_stack_4->SetBinError(11,0.9567863);
   houtFV_stack_4->SetBinError(12,0.7604681);
   houtFV_stack_4->SetBinError(13,0.5051595);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.5197486);
   houtFV_stack_4->SetBinError(16,0.3917439);
   houtFV_stack_4->SetBinError(17,0.2781975);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetEntries(931);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6818899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.211494);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2297887);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3374081);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3022172);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1494;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.324422);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.993124);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.457783);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.304834);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.771326);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.299954);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7217307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5606141);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5796719);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4479997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1495;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.269459);
   hNCpi0inFVres_stack_7->SetBinContent(2,71.99425);
   hNCpi0inFVres_stack_7->SetBinContent(3,258.5989);
   hNCpi0inFVres_stack_7->SetBinContent(4,351.8517);
   hNCpi0inFVres_stack_7->SetBinContent(5,250.9366);
   hNCpi0inFVres_stack_7->SetBinContent(6,170.344);
   hNCpi0inFVres_stack_7->SetBinContent(7,128.8207);
   hNCpi0inFVres_stack_7->SetBinContent(8,86.23146);
   hNCpi0inFVres_stack_7->SetBinContent(9,52.95027);
   hNCpi0inFVres_stack_7->SetBinContent(10,29.0289);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.71617);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.86189);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.399254);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.382564);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.543732);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.023426);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.756212);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.562576);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6275859);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.6275859);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.203444);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6619077);
   hNCpi0inFVres_stack_7->SetBinError(2,2.783414);
   hNCpi0inFVres_stack_7->SetBinError(3,5.189602);
   hNCpi0inFVres_stack_7->SetBinError(4,6.186175);
   hNCpi0inFVres_stack_7->SetBinError(5,5.180476);
   hNCpi0inFVres_stack_7->SetBinError(6,4.32416);
   hNCpi0inFVres_stack_7->SetBinError(7,3.775986);
   hNCpi0inFVres_stack_7->SetBinError(8,3.063156);
   hNCpi0inFVres_stack_7->SetBinError(9,2.404971);
   hNCpi0inFVres_stack_7->SetBinError(10,1.741346);
   hNCpi0inFVres_stack_7->SetBinError(11,1.482737);
   hNCpi0inFVres_stack_7->SetBinError(12,1.292403);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8085055);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7691147);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7049069);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5096416);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4333528);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4699768);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2387875);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2387875);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4685247);
   hNCpi0inFVres_stack_7->SetEntries(26811);

   ci = 1496;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.770326);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.69031);
   hNCpi0inFVdis_stack_8->SetBinContent(3,49.7824);
   hNCpi0inFVdis_stack_8->SetBinContent(4,57.65192);
   hNCpi0inFVdis_stack_8->SetBinContent(5,38.25802);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.64453);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.8717);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.20334);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.84286);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.548899);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.276205);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.849383);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.496894);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.290888);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.13353);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.785112);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.14374);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.7242399);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8934723);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.584666);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3855887);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.13148);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.209703);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.48043);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.005553);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.76655);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.607415);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.489422);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.199413);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9877702);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8833125);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6141751);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5036877);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6386662);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5070253);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4905081);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.379057);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2828126);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3948984);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6025527);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1497;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.8096042);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2926179);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.3476357);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.122146);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1498;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1499;
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
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,1.51551);
   hCCpi0inFV_stack_11->SetBinContent(2,23.41641);
   hCCpi0inFV_stack_11->SetBinContent(3,79.337);
   hCCpi0inFV_stack_11->SetBinContent(4,111.003);
   hCCpi0inFV_stack_11->SetBinContent(5,89.65592);
   hCCpi0inFV_stack_11->SetBinContent(6,68.68193);
   hCCpi0inFV_stack_11->SetBinContent(7,54.16054);
   hCCpi0inFV_stack_11->SetBinContent(8,38.54049);
   hCCpi0inFV_stack_11->SetBinContent(9,25.91442);
   hCCpi0inFV_stack_11->SetBinContent(10,19.80994);
   hCCpi0inFV_stack_11->SetBinContent(11,14.1161);
   hCCpi0inFV_stack_11->SetBinContent(12,9.718615);
   hCCpi0inFV_stack_11->SetBinContent(13,8.215927);
   hCCpi0inFV_stack_11->SetBinContent(14,5.771895);
   hCCpi0inFV_stack_11->SetBinContent(15,3.17764);
   hCCpi0inFV_stack_11->SetBinContent(16,3.591375);
   hCCpi0inFV_stack_11->SetBinContent(17,1.463836);
   hCCpi0inFV_stack_11->SetBinContent(18,1.857266);
   hCCpi0inFV_stack_11->SetBinContent(19,0.8770706);
   hCCpi0inFV_stack_11->SetBinContent(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(21,5.954004);
   hCCpi0inFV_stack_11->SetBinError(1,0.638538);
   hCCpi0inFV_stack_11->SetBinError(2,2.421777);
   hCCpi0inFV_stack_11->SetBinError(3,4.462083);
   hCCpi0inFV_stack_11->SetBinError(4,5.287391);
   hCCpi0inFV_stack_11->SetBinError(5,4.739768);
   hCCpi0inFV_stack_11->SetBinError(6,4.163926);
   hCCpi0inFV_stack_11->SetBinError(7,3.73006);
   hCCpi0inFV_stack_11->SetBinError(8,3.067662);
   hCCpi0inFV_stack_11->SetBinError(9,2.573906);
   hCCpi0inFV_stack_11->SetBinError(10,2.259679);
   hCCpi0inFV_stack_11->SetBinError(11,1.887699);
   hCCpi0inFV_stack_11->SetBinError(12,1.571093);
   hCCpi0inFV_stack_11->SetBinError(13,1.415621);
   hCCpi0inFV_stack_11->SetBinError(14,1.194537);
   hCCpi0inFV_stack_11->SetBinError(15,0.8775989);
   hCCpi0inFV_stack_11->SetBinError(16,0.9698573);
   hCCpi0inFV_stack_11->SetBinError(17,0.620407);
   hCCpi0inFV_stack_11->SetBinError(18,0.6799255);
   hCCpi0inFV_stack_11->SetBinError(19,0.5197486);
   hCCpi0inFV_stack_11->SetBinError(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(21,1.287743);
   hCCpi0inFV_stack_11->SetEntries(2425);

   ci = 1500;
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
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,6.480754);
   hNCinFV_stack_12->SetBinContent(2,19.98156);
   hNCinFV_stack_12->SetBinContent(3,30.80234);
   hNCinFV_stack_12->SetBinContent(4,29.75599);
   hNCinFV_stack_12->SetBinContent(5,18.85452);
   hNCinFV_stack_12->SetBinContent(6,13.22947);
   hNCinFV_stack_12->SetBinContent(7,8.755592);
   hNCinFV_stack_12->SetBinContent(8,6.929129);
   hNCinFV_stack_12->SetBinContent(9,3.762714);
   hNCinFV_stack_12->SetBinContent(10,5.268578);
   hNCinFV_stack_12->SetBinContent(11,5.229931);
   hNCinFV_stack_12->SetBinContent(12,2.002419);
   hNCinFV_stack_12->SetBinContent(13,1.855576);
   hNCinFV_stack_12->SetBinContent(14,0.5352025);
   hNCinFV_stack_12->SetBinContent(15,1.857266);
   hNCinFV_stack_12->SetBinContent(16,1.270501);
   hNCinFV_stack_12->SetBinContent(17,0.5352025);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.1967154);
   hNCinFV_stack_12->SetBinError(1,1.344889);
   hNCinFV_stack_12->SetBinError(2,2.246232);
   hNCinFV_stack_12->SetBinError(3,2.784498);
   hNCinFV_stack_12->SetBinError(4,2.71167);
   hNCinFV_stack_12->SetBinError(5,2.185188);
   hNCinFV_stack_12->SetBinError(6,1.851075);
   hNCinFV_stack_12->SetBinError(7,1.400392);
   hNCinFV_stack_12->SetBinError(8,1.359579);
   hNCinFV_stack_12->SetBinError(9,0.9403637);
   hNCinFV_stack_12->SetBinError(10,1.193672);
   hNCinFV_stack_12->SetBinError(11,1.12717);
   hNCinFV_stack_12->SetBinError(12,0.7348366);
   hNCinFV_stack_12->SetBinError(13,0.6794384);
   hNCinFV_stack_12->SetBinError(14,0.3921167);
   hNCinFV_stack_12->SetBinError(15,0.6799255);
   hNCinFV_stack_12->SetBinError(16,0.5895188);
   hNCinFV_stack_12->SetBinError(17,0.3921167);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.1967154);
   hNCinFV_stack_12->SetEntries(671);

   ci = 1501;
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
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,7.781566);
   hnumuCCinFV_stack_13->SetBinContent(2,37.95012);
   hnumuCCinFV_stack_13->SetBinContent(3,69.5267);
   hnumuCCinFV_stack_13->SetBinContent(4,71.64743);
   hnumuCCinFV_stack_13->SetBinContent(5,50.64099);
   hnumuCCinFV_stack_13->SetBinContent(6,34.06268);
   hnumuCCinFV_stack_13->SetBinContent(7,22.94983);
   hnumuCCinFV_stack_13->SetBinContent(8,14.71661);
   hnumuCCinFV_stack_13->SetBinContent(9,5.485883);
   hnumuCCinFV_stack_13->SetBinContent(10,4.375852);
   hnumuCCinFV_stack_13->SetBinContent(11,4.902771);
   hnumuCCinFV_stack_13->SetBinContent(12,2.375453);
   hnumuCCinFV_stack_13->SetBinContent(13,2.81804);
   hnumuCCinFV_stack_13->SetBinContent(14,2.210648);
   hnumuCCinFV_stack_13->SetBinContent(15,0.9602511);
   hnumuCCinFV_stack_13->SetBinContent(16,0.8767787);
   hnumuCCinFV_stack_13->SetBinContent(17,0.5884556);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinContent(21,1.499105);
   hnumuCCinFV_stack_13->SetBinError(1,1.614162);
   hnumuCCinFV_stack_13->SetBinError(2,3.950618);
   hnumuCCinFV_stack_13->SetBinError(3,5.051947);
   hnumuCCinFV_stack_13->SetBinError(4,5.008092);
   hnumuCCinFV_stack_13->SetBinError(5,4.023345);
   hnumuCCinFV_stack_13->SetBinError(6,3.109801);
   hnumuCCinFV_stack_13->SetBinError(7,2.77117);
   hnumuCCinFV_stack_13->SetBinError(8,2.352238);
   hnumuCCinFV_stack_13->SetBinError(9,1.258285);
   hnumuCCinFV_stack_13->SetBinError(10,1.038567);
   hnumuCCinFV_stack_13->SetBinError(11,2.572144);
   hnumuCCinFV_stack_13->SetBinError(12,0.8275369);
   hnumuCCinFV_stack_13->SetBinError(13,0.8406064);
   hnumuCCinFV_stack_13->SetBinError(14,0.8165127);
   hnumuCCinFV_stack_13->SetBinError(15,0.4944508);
   hnumuCCinFV_stack_13->SetBinError(16,0.4361593);
   hnumuCCinFV_stack_13->SetBinError(17,0.3397478);
   hnumuCCinFV_stack_13->SetBinError(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinError(21,0.6399531);
   hnumuCCinFV_stack_13->SetEntries(1290);

   ci = 1502;
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
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(2,0.69586);
   hnueCCinFV_stack_14->SetBinContent(3,0.784569);
   hnueCCinFV_stack_14->SetBinContent(4,3.063879);
   hnueCCinFV_stack_14->SetBinContent(5,1.323559);
   hnueCCinFV_stack_14->SetBinContent(6,1.177387);
   hnueCCinFV_stack_14->SetBinContent(7,0.6420956);
   hnueCCinFV_stack_14->SetBinContent(8,1.088506);
   hnueCCinFV_stack_14->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(12,1.766401);
   hnueCCinFV_stack_14->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(15,0.7595603);
   hnueCCinFV_stack_14->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,1.571666);
   hnueCCinFV_stack_14->SetBinContent(18,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(21,5.476608);
   hnueCCinFV_stack_14->SetBinError(1,0.1950249);
   hnueCCinFV_stack_14->SetBinError(2,0.4043603);
   hnueCCinFV_stack_14->SetBinError(3,0.4645009);
   hnueCCinFV_stack_14->SetBinError(4,1.045174);
   hnueCCinFV_stack_14->SetBinError(5,0.6689346);
   hnueCCinFV_stack_14->SetBinError(6,0.5414884);
   hnueCCinFV_stack_14->SetBinError(7,0.3731328);
   hnueCCinFV_stack_14->SetBinError(8,0.4903612);
   hnueCCinFV_stack_14->SetBinError(9,0.3401776);
   hnueCCinFV_stack_14->SetBinError(10,0.1950249);
   hnueCCinFV_stack_14->SetBinError(12,1.581964);
   hnueCCinFV_stack_14->SetBinError(13,0.3401776);
   hnueCCinFV_stack_14->SetBinError(15,0.4595652);
   hnueCCinFV_stack_14->SetBinError(16,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,1.194041);
   hnueCCinFV_stack_14->SetBinError(18,0.2331833);
   hnueCCinFV_stack_14->SetBinError(19,0.3921167);
   hnueCCinFV_stack_14->SetBinError(21,1.220045);
   hnueCCinFV_stack_14->SetEntries(72);

   ci = 1503;
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
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__14->SetBinContent(1,39.46785);
   hmcerror__14->SetBinContent(2,236.0708);
   hmcerror__14->SetBinContent(3,621.2218);
   hmcerror__14->SetBinContent(4,752.9376);
   hmcerror__14->SetBinContent(5,549.9978);
   hmcerror__14->SetBinContent(6,369.7159);
   hmcerror__14->SetBinContent(7,278.8892);
   hmcerror__14->SetBinContent(8,192.4622);
   hmcerror__14->SetBinContent(9,121.1391);
   hmcerror__14->SetBinContent(10,76.21581);
   hmcerror__14->SetBinContent(11,56.28863);
   hmcerror__14->SetBinContent(12,36.51588);
   hmcerror__14->SetBinContent(13,24.18504);
   hmcerror__14->SetBinContent(14,17.81179);
   hmcerror__14->SetBinContent(15,14.33695);
   hmcerror__14->SetBinContent(16,10.75031);
   hmcerror__14->SetBinContent(17,7.508343);
   hmcerror__14->SetBinContent(18,5.683492);
   hmcerror__14->SetBinContent(19,3.088496);
   hmcerror__14->SetBinContent(20,3.037643);
   hmcerror__14->SetBinContent(21,26.27254);
   hmcerror__14->SetBinError(1,9.039545);
   hmcerror__14->SetBinError(2,45.61282);
   hmcerror__14->SetBinError(3,122.4671);
   hmcerror__14->SetBinError(4,173.1327);
   hmcerror__14->SetBinError(5,140.5487);
   hmcerror__14->SetBinError(6,98.84757);
   hmcerror__14->SetBinError(7,74.97301);
   hmcerror__14->SetBinError(8,54.74092);
   hmcerror__14->SetBinError(9,35.82111);
   hmcerror__14->SetBinError(10,22.39316);
   hmcerror__14->SetBinError(11,19.04836);
   hmcerror__14->SetBinError(12,11.19253);
   hmcerror__14->SetBinError(13,9.457905);
   hmcerror__14->SetBinError(14,7.088591);
   hmcerror__14->SetBinError(15,5.975017);
   hmcerror__14->SetBinError(16,6.275569);
   hmcerror__14->SetBinError(17,5.744723);
   hmcerror__14->SetBinError(18,4.155182);
   hmcerror__14->SetBinError(19,2.068442);
   hmcerror__14->SetBinError(20,2.053326);
   hmcerror__14->SetBinError(21,11.55074);
   hmcerror__14->SetEntries(3396.741);

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
   
   Double_t _fx3017[20] = {
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
   1170};
   Double_t _fy3017[20] = {
   38,
   201,
   524,
   593,
   431,
   255,
   175,
   124,
   90,
   55,
   34,
   20,
   16,
   17,
   3,
   5,
   10,
   5,
   5,
   2};
   Double_t _felx3017[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3017[20] = {
   6.3013,
   14.17745,
   22.89105,
   24.35159,
   20.76054,
   15.96872,
   13.22876,
   11.13553,
   9.6093,
   7.546,
   5.9703,
   4.6266,
   4.1628,
   4.2835,
   2.143368,
   2.48995,
   3.34883,
   2.48995,
   2.48995,
   2};
   Double_t _fehx3017[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3017[20] = {
   6.0955,
   14.17745,
   22.89105,
   24.35159,
   20.76054,
   15.96872,
   13.22876,
   11.13553,
   9.4079,
   7.3425,
   5.7635,
   4.4133,
   3.9454,
   4.0673,
   1.72422,
   2.21064,
   3.1179,
   2.21064,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(679.0868);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2603.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 270.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.0","F");

   ci = 1493;
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

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1461.5","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  280.2","F");

   ci = 1497;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1498;
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

   ci = 1499;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 561.0","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 157.4","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 334.1","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 14.9","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
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
   1170};
   Double_t _fy3018[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3018[20] = {
   0.2290357,
   0.1932167,
   0.197139,
   0.2299429,
   0.2555442,
   0.2673609,
   0.2688273,
   0.2844243,
   0.2957023,
   0.2938125,
   0.3384051,
   0.3065113,
   0.3910643,
   0.3979718,
   0.4167565,
   0.5837567,
   0.765112,
   0.7310966,
   0.6697247,
   0.6759602};
   Double_t _fehx3018[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3018[20] = {
   0.2290357,
   0.1932167,
   0.197139,
   0.2299429,
   0.2555442,
   0.2673609,
   0.2688273,
   0.2844243,
   0.2957023,
   0.2938125,
   0.3384051,
   0.3065113,
   0.3910643,
   0.3979718,
   0.4167565,
   0.5837567,
   0.765112,
   0.7310966,
   0.6697247,
   0.6759602};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1320);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3019[20] = {
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
   1170};
   Double_t _fy3019[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3019[20] = {
   0.1665565,
   0.1792663,
   0.1949933,
   0.2185132,
   0.2416356,
   0.2513397,
   0.2494576,
   0.2379666,
   0.2331354,
   0.2369141,
   0.2318664,
   0.2544779,
   0.2485415,
   0.240068,
   0.3100842,
   0.2745536,
   0.5492466,
   0.3255669,
   0.3752768,
   0.3882166};
   Double_t _fehx3019[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3019[20] = {
   0.1665565,
   0.1792663,
   0.1949933,
   0.2185132,
   0.2416356,
   0.2513397,
   0.2494576,
   0.2379666,
   0.2331354,
   0.2369141,
   0.2318664,
   0.2544779,
   0.2485415,
   0.240068,
   0.3100842,
   0.2745536,
   0.5492466,
   0.3255669,
   0.3752768,
   0.3882166};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1320);
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
   
   Double_t _fx3020[20] = {
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
   1170};
   Double_t _fy3020[20] = {
   0.9628091,
   0.8514394,
   0.8434991,
   0.7875818,
   0.7836395,
   0.6897188,
   0.6274894,
   0.6442823,
   0.7429475,
   0.721635,
   0.6040296,
   0.5477069,
   0.661566,
   0.954424,
   0.2092495,
   0.4651027,
   1.331852,
   0.8797408,
   1.618911,
   0.6584051};
   Double_t _felx3020[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3020[20] = {
   0.1596565,
   0.0600559,
   0.03684843,
   0.03234211,
   0.03774659,
   0.04319187,
   0.04743374,
   0.05785826,
   0.0793245,
   0.09900833,
   0.1060658,
   0.126701,
   0.1721229,
   0.2404868,
   0.1494996,
   0.2316165,
   0.4460145,
   0.4381021,
   0.8062014,
   0.6584051};
   Double_t _fehx3020[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3020[20] = {
   0.1544422,
   0.0600559,
   0.03684843,
   0.03234211,
   0.03774659,
   0.04319187,
   0.04743374,
   0.05785826,
   0.07766195,
   0.09633828,
   0.1023919,
   0.1208597,
   0.1631339,
   0.2283487,
   0.1202641,
   0.2056349,
   0.4152581,
   0.388958,
   0.7157658,
   0.5001147};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(2.568144);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

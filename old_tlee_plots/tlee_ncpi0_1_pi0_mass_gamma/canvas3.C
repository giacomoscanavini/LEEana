#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Oct 23 18:43:59 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-61.53846,-2.76,451.2821,305.1979);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__7->SetBinContent(1,46.83074);
   hmc__7->SetBinContent(2,51.94205);
   hmc__7->SetBinContent(3,64.44077);
   hmc__7->SetBinContent(4,65.4071);
   hmc__7->SetBinContent(5,68.22523);
   hmc__7->SetBinContent(6,98.66176);
   hmc__7->SetBinContent(7,110.0496);
   hmc__7->SetBinContent(8,101.4162);
   hmc__7->SetBinContent(9,112.2115);
   hmc__7->SetBinContent(10,132.4072);
   hmc__7->SetBinContent(11,127.1374);
   hmc__7->SetBinContent(12,123.3941);
   hmc__7->SetBinContent(13,115.7073);
   hmc__7->SetBinContent(14,70.14303);
   hmc__7->SetBinContent(15,45.33025);
   hmc__7->SetBinContent(16,35.66928);
   hmc__7->SetBinContent(17,22.84272);
   hmc__7->SetBinContent(18,21.63381);
   hmc__7->SetBinContent(19,14.70988);
   hmc__7->SetBinContent(20,18.84982);
   hmc__7->SetBinContent(21,12.45805);
   hmc__7->SetBinContent(22,11.68064);
   hmc__7->SetBinContent(23,13.46183);
   hmc__7->SetBinContent(24,9.094239);
   hmc__7->SetBinContent(25,8.096395);
   hmc__7->SetBinContent(26,8.743185);
   hmc__7->SetBinContent(27,6.543203);
   hmc__7->SetBinContent(28,6.223008);
   hmc__7->SetBinContent(29,5.690356);
   hmc__7->SetBinContent(30,8.436567);
   hmc__7->SetBinContent(31,4.80835);
   hmc__7->SetBinContent(32,5.272378);
   hmc__7->SetBinContent(33,2.460306);
   hmc__7->SetBinContent(34,4.260188);
   hmc__7->SetBinContent(35,39.91503);
   hmc__7->SetBinError(1,23.00314);
   hmc__7->SetBinError(2,26.14555);
   hmc__7->SetBinError(3,21.75108);
   hmc__7->SetBinError(4,21.49489);
   hmc__7->SetBinError(5,22.62866);
   hmc__7->SetBinError(6,28.75189);
   hmc__7->SetBinError(7,34.25773);
   hmc__7->SetBinError(8,33.89654);
   hmc__7->SetBinError(9,30.17352);
   hmc__7->SetBinError(10,39.6771);
   hmc__7->SetBinError(11,40.58587);
   hmc__7->SetBinError(12,36.84563);
   hmc__7->SetBinError(13,33.28121);
   hmc__7->SetBinError(14,25.35913);
   hmc__7->SetBinError(15,17.82546);
   hmc__7->SetBinError(16,16.5853);
   hmc__7->SetBinError(17,10.12239);
   hmc__7->SetBinError(18,13.29954);
   hmc__7->SetBinError(19,11.12567);
   hmc__7->SetBinError(20,14.14376);
   hmc__7->SetBinError(21,11.48293);
   hmc__7->SetBinError(22,11.31598);
   hmc__7->SetBinError(23,14.18326);
   hmc__7->SetBinError(24,13.12055);
   hmc__7->SetBinError(25,8.504015);
   hmc__7->SetBinError(26,11.31458);
   hmc__7->SetBinError(27,6.2785);
   hmc__7->SetBinError(28,11.27558);
   hmc__7->SetBinError(29,6.462819);
   hmc__7->SetBinError(30,8.755749);
   hmc__7->SetBinError(31,5.391188);
   hmc__7->SetBinError(32,5.834446);
   hmc__7->SetBinError(33,3.088294);
   hmc__7->SetBinError(34,7.640958);
   hmc__7->SetBinError(35,29.74549);
   hmc__7->SetMinimum(-2.76);
   hmc__7->SetMaximum(289.8);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",34,0,400);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(139.0276);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.516553);
   hbadmatch_stack_1->SetBinContent(2,2.734724);
   hbadmatch_stack_1->SetBinContent(3,3.213258);
   hbadmatch_stack_1->SetBinContent(4,1.266602);
   hbadmatch_stack_1->SetBinContent(5,1.971642);
   hbadmatch_stack_1->SetBinContent(6,4.410809);
   hbadmatch_stack_1->SetBinContent(7,4.912832);
   hbadmatch_stack_1->SetBinContent(8,4.115607);
   hbadmatch_stack_1->SetBinContent(9,3.260006);
   hbadmatch_stack_1->SetBinContent(10,4.306345);
   hbadmatch_stack_1->SetBinContent(11,3.502248);
   hbadmatch_stack_1->SetBinContent(12,3.116572);
   hbadmatch_stack_1->SetBinContent(13,3.618995);
   hbadmatch_stack_1->SetBinContent(14,1.553586);
   hbadmatch_stack_1->SetBinContent(15,1.680826);
   hbadmatch_stack_1->SetBinContent(16,1.307744);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.9551397);
   hbadmatch_stack_1->SetBinContent(20,0.7731665);
   hbadmatch_stack_1->SetBinContent(21,0.5625357);
   hbadmatch_stack_1->SetBinContent(22,0.5734949);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.6656441);
   hbadmatch_stack_1->SetBinContent(25,1.186969);
   hbadmatch_stack_1->SetBinContent(27,0.4140642);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(34,0.2855402);
   hbadmatch_stack_1->SetBinContent(35,0.5385932);
   hbadmatch_stack_1->SetBinError(1,0.6402337);
   hbadmatch_stack_1->SetBinError(2,1.22276);
   hbadmatch_stack_1->SetBinError(3,0.9436553);
   hbadmatch_stack_1->SetBinError(4,0.6079928);
   hbadmatch_stack_1->SetBinError(5,0.7260076);
   hbadmatch_stack_1->SetBinError(6,1.161051);
   hbadmatch_stack_1->SetBinError(7,1.207131);
   hbadmatch_stack_1->SetBinError(8,1.188719);
   hbadmatch_stack_1->SetBinError(9,0.9787981);
   hbadmatch_stack_1->SetBinError(10,1.1283);
   hbadmatch_stack_1->SetBinError(11,0.997721);
   hbadmatch_stack_1->SetBinError(12,0.9066807);
   hbadmatch_stack_1->SetBinError(13,1.073708);
   hbadmatch_stack_1->SetBinError(14,0.6127388);
   hbadmatch_stack_1->SetBinError(15,0.7026091);
   hbadmatch_stack_1->SetBinError(16,0.5828803);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.4922199);
   hbadmatch_stack_1->SetBinError(20,0.4586746);
   hbadmatch_stack_1->SetBinError(21,0.3355922);
   hbadmatch_stack_1->SetBinError(22,0.4317845);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.4135149);
   hbadmatch_stack_1->SetBinError(25,0.6891089);
   hbadmatch_stack_1->SetBinError(27,0.313132);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(34,0.2855402);
   hbadmatch_stack_1->SetBinError(35,0.3175361);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,10.54675);
   hext_stack_2->SetBinContent(2,11.19996);
   hext_stack_2->SetBinContent(3,18.35869);
   hext_stack_2->SetBinContent(4,17.71266);
   hext_stack_2->SetBinContent(5,15.7128);
   hext_stack_2->SetBinContent(6,25.513);
   hext_stack_2->SetBinContent(7,22.15489);
   hext_stack_2->SetBinContent(8,22.90183);
   hext_stack_2->SetBinContent(9,23.44971);
   hext_stack_2->SetBinContent(10,23.03152);
   hext_stack_2->SetBinContent(11,15.99689);
   hext_stack_2->SetBinContent(12,15.86561);
   hext_stack_2->SetBinContent(13,18.72056);
   hext_stack_2->SetBinContent(14,7.291193);
   hext_stack_2->SetBinContent(15,7.746861);
   hext_stack_2->SetBinContent(16,5.911401);
   hext_stack_2->SetBinContent(17,6.296459);
   hext_stack_2->SetBinContent(18,2.021405);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,1.868591);
   hext_stack_2->SetBinContent(22,0.973192);
   hext_stack_2->SetBinContent(23,2.566457);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,0.4065989);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(32,0.4065989);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,5.654845);
   hext_stack_2->SetBinError(1,1.989749);
   hext_stack_2->SetBinError(2,2.074775);
   hext_stack_2->SetBinError(3,2.936981);
   hext_stack_2->SetBinError(4,2.842369);
   hext_stack_2->SetBinError(5,2.56569);
   hext_stack_2->SetBinError(6,3.579371);
   hext_stack_2->SetBinError(7,3.198589);
   hext_stack_2->SetBinError(8,3.44978);
   hext_stack_2->SetBinError(9,3.31485);
   hext_stack_2->SetBinError(10,3.299847);
   hext_stack_2->SetBinError(11,2.749343);
   hext_stack_2->SetBinError(12,2.601735);
   hext_stack_2->SetBinError(13,3.086574);
   hext_stack_2->SetBinError(14,1.724194);
   hext_stack_2->SetBinError(15,1.966707);
   hext_stack_2->SetBinError(16,1.57855);
   hext_stack_2->SetBinError(17,1.805754);
   hext_stack_2->SetBinError(18,0.9448239);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,0.840497);
   hext_stack_2->SetBinError(22,0.5618727);
   hext_stack_2->SetBinError(23,1.283228);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,0.4065989);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(32,0.4065989);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,1.687921);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.082577);
   hdirt_stack_3->SetBinContent(2,1.313864);
   hdirt_stack_3->SetBinContent(3,1.252208);
   hdirt_stack_3->SetBinContent(4,0.7178631);
   hdirt_stack_3->SetBinContent(5,0.405009);
   hdirt_stack_3->SetBinContent(6,2.201247);
   hdirt_stack_3->SetBinContent(7,2.562096);
   hdirt_stack_3->SetBinContent(8,2.754634);
   hdirt_stack_3->SetBinContent(9,1.742458);
   hdirt_stack_3->SetBinContent(10,2.639593);
   hdirt_stack_3->SetBinContent(11,1.949589);
   hdirt_stack_3->SetBinContent(12,0.5523413);
   hdirt_stack_3->SetBinContent(13,1.663383);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5124346);
   hdirt_stack_3->SetBinError(2,0.6670182);
   hdirt_stack_3->SetBinError(3,0.4918308);
   hdirt_stack_3->SetBinError(4,0.3660238);
   hdirt_stack_3->SetBinError(5,0.2984544);
   hdirt_stack_3->SetBinError(6,0.7838009);
   hdirt_stack_3->SetBinError(7,0.9001475);
   hdirt_stack_3->SetBinError(8,0.9100252);
   hdirt_stack_3->SetBinError(9,0.6235122);
   hdirt_stack_3->SetBinError(10,0.9119285);
   hdirt_stack_3->SetBinError(11,0.7454519);
   hdirt_stack_3->SetBinError(12,0.4366729);
   hdirt_stack_3->SetBinError(13,1.035128);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,11.09293);
   houtFV_stack_4->SetBinContent(2,13.52941);
   houtFV_stack_4->SetBinContent(3,18.05459);
   houtFV_stack_4->SetBinContent(4,17.10956);
   houtFV_stack_4->SetBinContent(5,15.3198);
   houtFV_stack_4->SetBinContent(6,17.64387);
   houtFV_stack_4->SetBinContent(7,25.54955);
   houtFV_stack_4->SetBinContent(8,18.30783);
   houtFV_stack_4->SetBinContent(9,21.50311);
   houtFV_stack_4->SetBinContent(10,20.62786);
   houtFV_stack_4->SetBinContent(11,20.74332);
   houtFV_stack_4->SetBinContent(12,25.03572);
   houtFV_stack_4->SetBinContent(13,21.59508);
   houtFV_stack_4->SetBinContent(14,13.74771);
   houtFV_stack_4->SetBinContent(15,7.95934);
   houtFV_stack_4->SetBinContent(16,6.608218);
   houtFV_stack_4->SetBinContent(17,3.765209);
   houtFV_stack_4->SetBinContent(18,4.205866);
   houtFV_stack_4->SetBinContent(19,2.88328);
   houtFV_stack_4->SetBinContent(20,2.549049);
   houtFV_stack_4->SetBinContent(21,1.67086);
   houtFV_stack_4->SetBinContent(22,3.016267);
   houtFV_stack_4->SetBinContent(23,1.81374);
   houtFV_stack_4->SetBinContent(24,1.152725);
   houtFV_stack_4->SetBinContent(25,1.167064);
   houtFV_stack_4->SetBinContent(26,1.178602);
   houtFV_stack_4->SetBinContent(27,1.853532);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,1.125349);
   houtFV_stack_4->SetBinContent(30,1.125163);
   houtFV_stack_4->SetBinContent(31,0.2490775);
   houtFV_stack_4->SetBinContent(32,0.3934307);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,4.841498);
   houtFV_stack_4->SetBinError(1,1.611861);
   houtFV_stack_4->SetBinError(2,1.80822);
   houtFV_stack_4->SetBinError(3,2.15818);
   houtFV_stack_4->SetBinError(4,2.298001);
   houtFV_stack_4->SetBinError(5,1.957219);
   houtFV_stack_4->SetBinError(6,2.012898);
   houtFV_stack_4->SetBinError(7,2.667244);
   houtFV_stack_4->SetBinError(8,2.25748);
   houtFV_stack_4->SetBinError(9,2.234854);
   houtFV_stack_4->SetBinError(10,2.25743);
   houtFV_stack_4->SetBinError(11,2.302279);
   houtFV_stack_4->SetBinError(12,2.56638);
   houtFV_stack_4->SetBinError(13,2.656755);
   houtFV_stack_4->SetBinError(14,1.956132);
   houtFV_stack_4->SetBinError(15,1.402334);
   houtFV_stack_4->SetBinError(16,1.250738);
   houtFV_stack_4->SetBinError(17,0.9979402);
   houtFV_stack_4->SetBinError(18,1.074477);
   houtFV_stack_4->SetBinError(19,0.8643796);
   houtFV_stack_4->SetBinError(20,0.8371933);
   houtFV_stack_4->SetBinError(21,0.6693032);
   houtFV_stack_4->SetBinError(22,0.8466793);
   houtFV_stack_4->SetBinError(23,0.6988478);
   houtFV_stack_4->SetBinError(24,0.4709355);
   houtFV_stack_4->SetBinError(25,0.5366549);
   houtFV_stack_4->SetBinError(26,0.4811646);
   houtFV_stack_4->SetBinError(27,0.723024);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.5194673);
   houtFV_stack_4->SetBinError(30,0.5483809);
   houtFV_stack_4->SetBinError(31,0.2023768);
   houtFV_stack_4->SetBinError(32,0.2781975);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.090875);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1851234);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1689446);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.348765);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3197);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.011299);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.477171);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.326442);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.936922);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.08325);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.449855);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.357716);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.26975);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2896074);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7905077);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1048088);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3543688);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08272513);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3040882);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1840595);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05714516);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.1197911);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.4831713);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08456616);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.07346261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1757963);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1605006);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4615699);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4397309);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2925628);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4091144);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5736129);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2983848);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4960303);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3886032);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.319611);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1126368);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3578524);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05256881);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3276589);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05850828);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.284117);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1306191);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04478483);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.09412756);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.2310156);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.0437164);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1282842);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08623998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.112926);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5518036);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1274787);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.07957104);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1178119);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1893976);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01962509);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02686085);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05629279);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06278178);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05430538);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3008082);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07998322);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04008893);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04509511);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1333572);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.907063);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.929078);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.243266);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.817012);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.466076);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.62988);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.04548);
   hNCpi0inFVres_stack_7->SetBinContent(8,15.79867);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.25459);
   hNCpi0inFVres_stack_7->SetBinContent(10,22.56384);
   hNCpi0inFVres_stack_7->SetBinContent(11,28.25248);
   hNCpi0inFVres_stack_7->SetBinContent(12,23.32701);
   hNCpi0inFVres_stack_7->SetBinContent(13,19.99292);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.34894);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.505932);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.114085);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.390349);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.143486);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.998905);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.386787);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.487582);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.160679);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6347352);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.7884194);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.8044283);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.5828282);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.2511773);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.4533368);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.131752);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.294979);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.6163635);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.4445117);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.2840542);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.294872);
   hNCpi0inFVres_stack_7->SetBinContent(35,2.879773);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5561337);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5553786);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7618675);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8130769);
   hNCpi0inFVres_stack_7->SetBinError(5,0.868929);
   hNCpi0inFVres_stack_7->SetBinError(6,1.150479);
   hNCpi0inFVres_stack_7->SetBinError(7,1.278105);
   hNCpi0inFVres_stack_7->SetBinError(8,1.286173);
   hNCpi0inFVres_stack_7->SetBinError(9,1.392591);
   hNCpi0inFVres_stack_7->SetBinError(10,1.451296);
   hNCpi0inFVres_stack_7->SetBinError(11,1.65642);
   hNCpi0inFVres_stack_7->SetBinError(12,1.508791);
   hNCpi0inFVres_stack_7->SetBinError(13,1.500882);
   hNCpi0inFVres_stack_7->SetBinError(14,1.023562);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7171841);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5151351);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4457087);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4397451);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4659326);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3044111);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4491617);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3384766);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2332532);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2176354);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2272453);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1842441);
   hNCpi0inFVres_stack_7->SetBinError(27,0.07453831);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2350998);
   hNCpi0inFVres_stack_7->SetBinError(29,0.05665674);
   hNCpi0inFVres_stack_7->SetBinError(30,0.1506503);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4173093);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1662304);
   hNCpi0inFVres_stack_7->SetBinError(33,0.1129166);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1113376);
   hNCpi0inFVres_stack_7->SetBinError(35,0.5921732);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.333113);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.862569);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.347497);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.350965);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.226332);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.38785);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.23976);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.198759);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.972155);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.009686);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.514932);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.37208);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.488229);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.579399);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.419377);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.702712);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6785711);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3159333);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6278572);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2917695);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3678392);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5757906);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3164419);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4524524);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3553033);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1965559);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1201584);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.1586987);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2182846);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.517176);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.06916945);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4209015);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.01841896);
   hNCpi0inFVdis_stack_8->SetBinContent(35,2.241944);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6109899);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5847342);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3215217);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2841965);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4930384);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3999195);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7233591);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6977342);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8227343);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.950089);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.974369);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.41513);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8773801);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6447238);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4878835);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.462403);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2515205);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1338672);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2861989);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1712073);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.167715);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2893935);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1675083);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2420718);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.206949);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.09433692);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.06364768);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.07302009);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.08634201);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6515924);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.05405632);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2938911);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.01841896);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.7525423);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.04157296);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02549736);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,5.88973);
   hCCpi0inFV_stack_10->SetBinContent(2,6.980124);
   hCCpi0inFV_stack_10->SetBinContent(3,8.159293);
   hCCpi0inFV_stack_10->SetBinContent(4,8.855363);
   hCCpi0inFV_stack_10->SetBinContent(5,11.19178);
   hCCpi0inFV_stack_10->SetBinContent(6,16.24338);
   hCCpi0inFV_stack_10->SetBinContent(7,16.56719);
   hCCpi0inFV_stack_10->SetBinContent(8,15.83982);
   hCCpi0inFV_stack_10->SetBinContent(9,19.91635);
   hCCpi0inFV_stack_10->SetBinContent(10,28.84037);
   hCCpi0inFV_stack_10->SetBinContent(11,26.36132);
   hCCpi0inFV_stack_10->SetBinContent(12,27.87485);
   hCCpi0inFV_stack_10->SetBinContent(13,28.6233);
   hCCpi0inFV_stack_10->SetBinContent(14,16.32142);
   hCCpi0inFV_stack_10->SetBinContent(15,10.23153);
   hCCpi0inFV_stack_10->SetBinContent(16,8.647519);
   hCCpi0inFV_stack_10->SetBinContent(17,5.402639);
   hCCpi0inFV_stack_10->SetBinContent(18,6.392203);
   hCCpi0inFV_stack_10->SetBinContent(19,3.716223);
   hCCpi0inFV_stack_10->SetBinContent(20,4.93009);
   hCCpi0inFV_stack_10->SetBinContent(21,2.96994);
   hCCpi0inFV_stack_10->SetBinContent(22,2.78759);
   hCCpi0inFV_stack_10->SetBinContent(23,3.126077);
   hCCpi0inFV_stack_10->SetBinContent(24,3.945496);
   hCCpi0inFV_stack_10->SetBinContent(25,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(26,3.766757);
   hCCpi0inFV_stack_10->SetBinContent(27,1.180292);
   hCCpi0inFV_stack_10->SetBinContent(28,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(29,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(30,3.340728);
   hCCpi0inFV_stack_10->SetBinContent(31,1.198907);
   hCCpi0inFV_stack_10->SetBinContent(32,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(33,0.3900497);
   hCCpi0inFV_stack_10->SetBinContent(34,2.050601);
   hCCpi0inFV_stack_10->SetBinContent(35,10.20944);
   hCCpi0inFV_stack_10->SetBinError(1,1.246637);
   hCCpi0inFV_stack_10->SetBinError(2,1.346333);
   hCCpi0inFV_stack_10->SetBinError(3,1.428631);
   hCCpi0inFV_stack_10->SetBinError(4,1.529723);
   hCCpi0inFV_stack_10->SetBinError(5,1.653324);
   hCCpi0inFV_stack_10->SetBinError(6,2.042477);
   hCCpi0inFV_stack_10->SetBinError(7,2.115116);
   hCCpi0inFV_stack_10->SetBinError(8,2.007672);
   hCCpi0inFV_stack_10->SetBinError(9,2.268903);
   hCCpi0inFV_stack_10->SetBinError(10,2.75489);
   hCCpi0inFV_stack_10->SetBinError(11,2.56958);
   hCCpi0inFV_stack_10->SetBinError(12,2.663144);
   hCCpi0inFV_stack_10->SetBinError(13,2.689804);
   hCCpi0inFV_stack_10->SetBinError(14,2.007915);
   hCCpi0inFV_stack_10->SetBinError(15,1.615859);
   hCCpi0inFV_stack_10->SetBinError(16,1.448489);
   hCCpi0inFV_stack_10->SetBinError(17,1.166105);
   hCCpi0inFV_stack_10->SetBinError(18,1.241446);
   hCCpi0inFV_stack_10->SetBinError(19,0.9619042);
   hCCpi0inFV_stack_10->SetBinError(20,1.144463);
   hCCpi0inFV_stack_10->SetBinError(21,0.767392);
   hCCpi0inFV_stack_10->SetBinError(22,0.8331329);
   hCCpi0inFV_stack_10->SetBinError(23,0.8995382);
   hCCpi0inFV_stack_10->SetBinError(24,0.9888506);
   hCCpi0inFV_stack_10->SetBinError(25,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(26,1.004962);
   hCCpi0inFV_stack_10->SetBinError(27,0.4818523);
   hCCpi0inFV_stack_10->SetBinError(28,0.785313);
   hCCpi0inFV_stack_10->SetBinError(29,0.519186);
   hCCpi0inFV_stack_10->SetBinError(30,0.9693783);
   hCCpi0inFV_stack_10->SetBinError(31,0.5697095);
   hCCpi0inFV_stack_10->SetBinError(32,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(33,0.2758068);
   hCCpi0inFV_stack_10->SetBinError(34,0.7068742);
   hCCpi0inFV_stack_10->SetBinError(35,1.613185);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.615799);
   hNCinFV_stack_11->SetBinContent(2,1.28697);
   hNCinFV_stack_11->SetBinContent(3,1.479805);
   hNCinFV_stack_11->SetBinContent(4,1.505984);
   hNCinFV_stack_11->SetBinContent(5,3.520085);
   hNCinFV_stack_11->SetBinContent(6,3.932371);
   hNCinFV_stack_11->SetBinContent(7,4.605943);
   hNCinFV_stack_11->SetBinContent(8,2.820802);
   hNCinFV_stack_11->SetBinContent(9,2.890364);
   hNCinFV_stack_11->SetBinContent(10,5.212996);
   hNCinFV_stack_11->SetBinContent(11,4.896366);
   hNCinFV_stack_11->SetBinContent(12,3.839544);
   hNCinFV_stack_11->SetBinContent(13,4.286019);
   hNCinFV_stack_11->SetBinContent(14,2.332834);
   hNCinFV_stack_11->SetBinContent(15,1.224586);
   hNCinFV_stack_11->SetBinContent(16,1.656338);
   hNCinFV_stack_11->SetBinContent(17,0.7835824);
   hNCinFV_stack_11->SetBinContent(18,1.877718);
   hNCinFV_stack_11->SetBinContent(19,1.875112);
   hNCinFV_stack_11->SetBinContent(20,1.784778);
   hNCinFV_stack_11->SetBinContent(21,1.823972);
   hNCinFV_stack_11->SetBinContent(22,0.2391984);
   hNCinFV_stack_11->SetBinContent(23,1.445317);
   hNCinFV_stack_11->SetBinContent(24,0.3159804);
   hNCinFV_stack_11->SetBinContent(25,0.8251065);
   hNCinFV_stack_11->SetBinContent(26,1.11938);
   hNCinFV_stack_11->SetBinContent(27,1.080062);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(29,0.331149);
   hNCinFV_stack_11->SetBinContent(30,0.3917402);
   hNCinFV_stack_11->SetBinContent(31,1.321173);
   hNCinFV_stack_11->SetBinContent(32,0.4868337);
   hNCinFV_stack_11->SetBinContent(33,0.5681612);
   hNCinFV_stack_11->SetBinContent(34,1.424793);
   hNCinFV_stack_11->SetBinContent(35,6.214034);
   hNCinFV_stack_11->SetBinError(1,0.4637732);
   hNCinFV_stack_11->SetBinError(2,0.5763195);
   hNCinFV_stack_11->SetBinError(3,0.5061508);
   hNCinFV_stack_11->SetBinError(4,0.5730012);
   hNCinFV_stack_11->SetBinError(5,0.9783121);
   hNCinFV_stack_11->SetBinError(6,1.10149);
   hNCinFV_stack_11->SetBinError(7,1.086053);
   hNCinFV_stack_11->SetBinError(8,0.793388);
   hNCinFV_stack_11->SetBinError(9,0.7486072);
   hNCinFV_stack_11->SetBinError(10,1.283096);
   hNCinFV_stack_11->SetBinError(11,1.140532);
   hNCinFV_stack_11->SetBinError(12,0.9468217);
   hNCinFV_stack_11->SetBinError(13,1.090243);
   hNCinFV_stack_11->SetBinError(14,0.8120401);
   hNCinFV_stack_11->SetBinError(15,0.5131372);
   hNCinFV_stack_11->SetBinError(16,0.5762345);
   hNCinFV_stack_11->SetBinError(17,0.4154953);
   hNCinFV_stack_11->SetBinError(18,0.6690586);
   hNCinFV_stack_11->SetBinError(19,0.7463603);
   hNCinFV_stack_11->SetBinError(20,0.8770948);
   hNCinFV_stack_11->SetBinError(21,0.9920782);
   hNCinFV_stack_11->SetBinError(22,0.1691497);
   hNCinFV_stack_11->SetBinError(23,0.5748801);
   hNCinFV_stack_11->SetBinError(24,0.2294884);
   hNCinFV_stack_11->SetBinError(25,0.5072842);
   hNCinFV_stack_11->SetBinError(26,0.778583);
   hNCinFV_stack_11->SetBinError(27,0.5118442);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(29,0.2428976);
   hNCinFV_stack_11->SetBinError(30,0.2770047);
   hNCinFV_stack_11->SetBinError(31,0.5908719);
   hNCinFV_stack_11->SetBinError(32,0.366369);
   hNCinFV_stack_11->SetBinError(33,0.5681613);
   hNCinFV_stack_11->SetBinError(34,1.071442);
   hNCinFV_stack_11->SetBinError(35,1.396259);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,11.56871);
   hnumuCCinFV_stack_12->SetBinContent(2,8.033646);
   hnumuCCinFV_stack_12->SetBinContent(3,7.144409);
   hnumuCCinFV_stack_12->SetBinContent(4,9.459394);
   hnumuCCinFV_stack_12->SetBinContent(5,9.896992);
   hnumuCCinFV_stack_12->SetBinContent(6,14.01265);
   hnumuCCinFV_stack_12->SetBinContent(7,13.24432);
   hnumuCCinFV_stack_12->SetBinContent(8,13.05344);
   hnumuCCinFV_stack_12->SetBinContent(9,11.26753);
   hnumuCCinFV_stack_12->SetBinContent(10,16.47355);
   hnumuCCinFV_stack_12->SetBinContent(11,16.3005);
   hnumuCCinFV_stack_12->SetBinContent(12,12.88094);
   hnumuCCinFV_stack_12->SetBinContent(13,8.870713);
   hnumuCCinFV_stack_12->SetBinContent(14,13.03763);
   hnumuCCinFV_stack_12->SetBinContent(15,7.842736);
   hnumuCCinFV_stack_12->SetBinContent(16,5.626588);
   hnumuCCinFV_stack_12->SetBinContent(17,2.590882);
   hnumuCCinFV_stack_12->SetBinContent(18,3.276336);
   hnumuCCinFV_stack_12->SetBinContent(19,1.23719);
   hnumuCCinFV_stack_12->SetBinContent(20,3.936499);
   hnumuCCinFV_stack_12->SetBinContent(21,1.062466);
   hnumuCCinFV_stack_12->SetBinContent(22,2.170365);
   hnumuCCinFV_stack_12->SetBinContent(23,2.61645);
   hnumuCCinFV_stack_12->SetBinContent(24,1.408626);
   hnumuCCinFV_stack_12->SetBinContent(25,1.164958);
   hnumuCCinFV_stack_12->SetBinContent(26,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(27,0.7742663);
   hnumuCCinFV_stack_12->SetBinContent(28,1.256601);
   hnumuCCinFV_stack_12->SetBinContent(29,1.857266);
   hnumuCCinFV_stack_12->SetBinContent(30,1.353793);
   hnumuCCinFV_stack_12->SetBinContent(31,0.5850745);
   hnumuCCinFV_stack_12->SetBinContent(32,1.914313);
   hnumuCCinFV_stack_12->SetBinContent(33,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(35,6.437907);
   hnumuCCinFV_stack_12->SetBinError(1,2.228226);
   hnumuCCinFV_stack_12->SetBinError(2,1.581549);
   hnumuCCinFV_stack_12->SetBinError(3,1.430458);
   hnumuCCinFV_stack_12->SetBinError(4,1.639547);
   hnumuCCinFV_stack_12->SetBinError(5,2.061574);
   hnumuCCinFV_stack_12->SetBinError(6,2.330259);
   hnumuCCinFV_stack_12->SetBinError(7,2.122476);
   hnumuCCinFV_stack_12->SetBinError(8,1.898711);
   hnumuCCinFV_stack_12->SetBinError(9,1.834946);
   hnumuCCinFV_stack_12->SetBinError(10,2.232264);
   hnumuCCinFV_stack_12->SetBinError(11,2.345728);
   hnumuCCinFV_stack_12->SetBinError(12,2.024242);
   hnumuCCinFV_stack_12->SetBinError(13,1.551888);
   hnumuCCinFV_stack_12->SetBinError(14,2.620648);
   hnumuCCinFV_stack_12->SetBinError(15,1.41623);
   hnumuCCinFV_stack_12->SetBinError(16,1.21211);
   hnumuCCinFV_stack_12->SetBinError(17,0.7575449);
   hnumuCCinFV_stack_12->SetBinError(18,0.9013857);
   hnumuCCinFV_stack_12->SetBinError(19,0.5063662);
   hnumuCCinFV_stack_12->SetBinError(20,1.06566);
   hnumuCCinFV_stack_12->SetBinError(21,0.4773048);
   hnumuCCinFV_stack_12->SetBinError(22,0.8040302);
   hnumuCCinFV_stack_12->SetBinError(23,2.243419);
   hnumuCCinFV_stack_12->SetBinError(24,0.6010794);
   hnumuCCinFV_stack_12->SetBinError(25,0.590687);
   hnumuCCinFV_stack_12->SetBinError(26,0.620407);
   hnumuCCinFV_stack_12->SetBinError(27,0.4590902);
   hnumuCCinFV_stack_12->SetBinError(28,0.5154278);
   hnumuCCinFV_stack_12->SetBinError(29,0.6799255);
   hnumuCCinFV_stack_12->SetBinError(30,0.6332572);
   hnumuCCinFV_stack_12->SetBinError(31,0.337793);
   hnumuCCinFV_stack_12->SetBinError(32,0.6985678);
   hnumuCCinFV_stack_12->SetBinError(33,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(35,1.255613);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.8865891);
   hnueCCinFV_stack_13->SetBinContent(4,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.5463554);
   hnueCCinFV_stack_13->SetBinContent(7,0.56212);
   hnueCCinFV_stack_13->SetBinContent(8,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,1.497608);
   hnueCCinFV_stack_13->SetBinContent(10,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,1.372537);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.8163059);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,1.569686);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(35,0.4138155);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.5492154);
   hnueCCinFV_stack_13->SetBinError(4,0.2192101);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3174584);
   hnueCCinFV_stack_13->SetBinError(7,0.4149909);
   hnueCCinFV_stack_13->SetBinError(8,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,1.206386);
   hnueCCinFV_stack_13->SetBinError(10,0.1711909);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.875398);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.4089487);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,1.569686);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(35,0.2929666);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__8->SetBinContent(1,46.83074);
   hmcerror__8->SetBinContent(2,51.94205);
   hmcerror__8->SetBinContent(3,64.44077);
   hmcerror__8->SetBinContent(4,65.4071);
   hmcerror__8->SetBinContent(5,68.22523);
   hmcerror__8->SetBinContent(6,98.66176);
   hmcerror__8->SetBinContent(7,110.0496);
   hmcerror__8->SetBinContent(8,101.4162);
   hmcerror__8->SetBinContent(9,112.2115);
   hmcerror__8->SetBinContent(10,132.4072);
   hmcerror__8->SetBinContent(11,127.1374);
   hmcerror__8->SetBinContent(12,123.3941);
   hmcerror__8->SetBinContent(13,115.7073);
   hmcerror__8->SetBinContent(14,70.14303);
   hmcerror__8->SetBinContent(15,45.33025);
   hmcerror__8->SetBinContent(16,35.66928);
   hmcerror__8->SetBinContent(17,22.84272);
   hmcerror__8->SetBinContent(18,21.63381);
   hmcerror__8->SetBinContent(19,14.70988);
   hmcerror__8->SetBinContent(20,18.84982);
   hmcerror__8->SetBinContent(21,12.45805);
   hmcerror__8->SetBinContent(22,11.68064);
   hmcerror__8->SetBinContent(23,13.46183);
   hmcerror__8->SetBinContent(24,9.094239);
   hmcerror__8->SetBinContent(25,8.096395);
   hmcerror__8->SetBinContent(26,8.743185);
   hmcerror__8->SetBinContent(27,6.543203);
   hmcerror__8->SetBinContent(28,6.223008);
   hmcerror__8->SetBinContent(29,5.690356);
   hmcerror__8->SetBinContent(30,8.436567);
   hmcerror__8->SetBinContent(31,4.80835);
   hmcerror__8->SetBinContent(32,5.272378);
   hmcerror__8->SetBinContent(33,2.460306);
   hmcerror__8->SetBinContent(34,4.260188);
   hmcerror__8->SetBinContent(35,39.91503);
   hmcerror__8->SetBinError(1,23.00314);
   hmcerror__8->SetBinError(2,26.14555);
   hmcerror__8->SetBinError(3,21.75108);
   hmcerror__8->SetBinError(4,21.49489);
   hmcerror__8->SetBinError(5,22.62866);
   hmcerror__8->SetBinError(6,28.75189);
   hmcerror__8->SetBinError(7,34.25773);
   hmcerror__8->SetBinError(8,33.89654);
   hmcerror__8->SetBinError(9,30.17352);
   hmcerror__8->SetBinError(10,39.6771);
   hmcerror__8->SetBinError(11,40.58587);
   hmcerror__8->SetBinError(12,36.84563);
   hmcerror__8->SetBinError(13,33.28121);
   hmcerror__8->SetBinError(14,25.35913);
   hmcerror__8->SetBinError(15,17.82546);
   hmcerror__8->SetBinError(16,16.5853);
   hmcerror__8->SetBinError(17,10.12239);
   hmcerror__8->SetBinError(18,13.29954);
   hmcerror__8->SetBinError(19,11.12567);
   hmcerror__8->SetBinError(20,14.14376);
   hmcerror__8->SetBinError(21,11.48293);
   hmcerror__8->SetBinError(22,11.31598);
   hmcerror__8->SetBinError(23,14.18326);
   hmcerror__8->SetBinError(24,13.12055);
   hmcerror__8->SetBinError(25,8.504015);
   hmcerror__8->SetBinError(26,11.31458);
   hmcerror__8->SetBinError(27,6.2785);
   hmcerror__8->SetBinError(28,11.27558);
   hmcerror__8->SetBinError(29,6.462819);
   hmcerror__8->SetBinError(30,8.755749);
   hmcerror__8->SetBinError(31,5.391188);
   hmcerror__8->SetBinError(32,5.834446);
   hmcerror__8->SetBinError(33,3.088294);
   hmcerror__8->SetBinError(34,7.640958);
   hmcerror__8->SetBinError(35,29.74549);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[34] = {
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
   Double_t _fy3009[34] = {
   47,
   48,
   65,
   70,
   74,
   101,
   97,
   101,
   126,
   138,
   102,
   116,
   88,
   46,
   50,
   27,
   16,
   23,
   14,
   10,
   11,
   18,
   11,
   8,
   6,
   7,
   6,
   2,
   2,
   7,
   5,
   1,
   2,
   2};
   Double_t _felx3009[34] = {
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
   Double_t _fely3009[34] = {
   6.9882,
   7.0604,
   8.1893,
   8.4925,
   8.7275,
   10.04988,
   9.9704,
   10.04988,
   11.22497,
   11.74734,
   10.0995,
   10.77033,
   9.5036,
   6.9153,
   7.2025,
   5.3414,
   4.1628,
   4.9457,
   3.9102,
   3.34883,
   3.4975,
   4.4008,
   3.4975,
   3.0307,
   2.67925,
   2.85954,
   2.67925,
   2,
   2,
   2.85954,
   2.48995,
   1,
   2,
   2};
   Double_t _fehx3009[34] = {
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
   Double_t _fehy3009[34] = {
   6.7839,
   6.8561,
   7.9866,
   8.2902,
   8.5253,
   10.04988,
   9.769,
   10.04988,
   11.22497,
   11.74734,
   10.0995,
   10.77033,
   9.3021,
   6.7108,
   6.9985,
   5.1322,
   3.9454,
   4.7346,
   3.6898,
   3.1179,
   3.27,
   4.1858,
   3.27,
   2.7896,
   2.41858,
   2.61053,
   2.41858,
   1.51917,
   1.51917,
   2.61053,
   2.21064,
   1.35971,
   1.51917,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,440);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(164.7221);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1447.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 281.9","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 303.8","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.3","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  217.3","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  64.7","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 308.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 64.0","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 207.9","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.1","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[34] = {
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
   Double_t _fy3010[34] = {
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
   Double_t _felx3010[34] = {
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
   Double_t _fely3010[34] = {
   0.4911974,
   0.5033599,
   0.337536,
   0.3286324,
   0.3316758,
   0.2914187,
   0.3112934,
   0.3342322,
   0.2688987,
   0.2996596,
   0.3192283,
   0.2986012,
   0.2876329,
   0.3615346,
   0.3932354,
   0.4649743,
   0.4431342,
   0.6147572,
   0.7563404,
   0.7503394,
   0.9217274,
   0.9687808,
   1.053591,
   1.442732,
   1.050346,
   1.294103,
   0.9595453,
   1.811919,
   1.135749,
   1.037833,
   1.121214,
   1.106606,
   1.255248,
   1.793573};
   Double_t _fehx3010[34] = {
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
   Double_t _fehy3010[34] = {
   0.4911974,
   0.5033599,
   0.337536,
   0.3286324,
   0.3316758,
   0.2914187,
   0.3112934,
   0.3342322,
   0.2688987,
   0.2996596,
   0.3192283,
   0.2986012,
   0.2876329,
   0.3615346,
   0.3932354,
   0.4649743,
   0.4431342,
   0.6147572,
   0.7563404,
   0.7503394,
   0.9217274,
   0.9687808,
   1.053591,
   1.442732,
   1.050346,
   1.294103,
   0.9595453,
   1.811919,
   1.135749,
   1.037833,
   1.121214,
   1.106606,
   1.255248,
   1.793573};
   grae = new TGraphAsymmErrors(34,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,440);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[34] = {
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
   Double_t _fy3011[34] = {
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
   Double_t _felx3011[34] = {
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
   Double_t _fely3011[34] = {
   0.1758236,
   0.1779161,
   0.1634852,
   0.1787281,
   0.1930868,
   0.1814995,
   0.1830482,
   0.1935849,
   0.2187657,
   0.2269471,
   0.2365975,
   0.2184452,
   0.196969,
   0.2050038,
   0.190112,
   0.2280919,
   0.1940063,
   0.2301115,
   0.2546621,
   0.2342677,
   0.2488947,
   0.2577577,
   0.3543475,
   0.2788617,
   0.3146581,
   0.2947677,
   0.2990414,
   0.3212775,
   0.507594,
   0.2783745,
   0.4180666,
   0.3311278,
   0.5659357,
   0.4752365};
   Double_t _fehx3011[34] = {
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
   Double_t _fehy3011[34] = {
   0.1758236,
   0.1779161,
   0.1634852,
   0.1787281,
   0.1930868,
   0.1814995,
   0.1830482,
   0.1935849,
   0.2187657,
   0.2269471,
   0.2365975,
   0.2184452,
   0.196969,
   0.2050038,
   0.190112,
   0.2280919,
   0.1940063,
   0.2301115,
   0.2546621,
   0.2342677,
   0.2488947,
   0.2577577,
   0.3543475,
   0.2788617,
   0.3146581,
   0.2947677,
   0.2990414,
   0.3212775,
   0.507594,
   0.2783745,
   0.4180666,
   0.3311278,
   0.5659357,
   0.4752365};
   grae = new TGraphAsymmErrors(34,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,440);
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
   
   Double_t _fx3012[34] = {
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
   Double_t _fy3012[34] = {
   1.003614,
   0.9241067,
   1.008678,
   1.07022,
   1.084643,
   1.0237,
   0.8814204,
   0.9958966,
   1.12288,
   1.042239,
   0.8022815,
   0.9400774,
   0.76054,
   0.6558029,
   1.103016,
   0.7569539,
   0.700442,
   1.063151,
   0.9517416,
   0.530509,
   0.8829631,
   1.541012,
   0.8171254,
   0.8796778,
   0.7410705,
   0.8006236,
   0.916982,
   0.321388,
   0.3514718,
   0.8297213,
   1.039858,
   0.1896677,
   0.812907,
   0.4694629};
   Double_t _felx3012[34] = {
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
   Double_t _fely3012[34] = {
   0.1492225,
   0.1359284,
   0.1270826,
   0.1298406,
   0.1279219,
   0.1018619,
   0.09059912,
   0.09909541,
   0.1000341,
   0.08872128,
   0.07943771,
   0.087284,
   0.08213486,
   0.09858856,
   0.1588895,
   0.1497479,
   0.1822375,
   0.2286098,
   0.2658214,
   0.1776585,
   0.2807421,
   0.3767603,
   0.2598087,
   0.3332549,
   0.3309189,
   0.3270593,
   0.4094707,
   0.321388,
   0.3514718,
   0.3389459,
   0.5178388,
   0.1896677,
   0.812907,
   0.4694629};
   Double_t _fehx3012[34] = {
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
   Double_t _fehy3012[34] = {
   0.14486,
   0.1319952,
   0.1239371,
   0.1267477,
   0.1249582,
   0.1018619,
   0.08876903,
   0.09909541,
   0.1000341,
   0.08872128,
   0.07943771,
   0.087284,
   0.08039339,
   0.09567309,
   0.1543892,
   0.1438829,
   0.1727202,
   0.2188519,
   0.2508383,
   0.1654074,
   0.2624809,
   0.3583538,
   0.2429091,
   0.3067436,
   0.2987231,
   0.2985788,
   0.3696324,
   0.2441215,
   0.2669727,
   0.3094304,
   0.4597502,
   0.2578931,
   0.6174719,
   0.356597};
   grae = new TGraphAsymmErrors(34,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,440);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2.089302);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

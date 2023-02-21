#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Feb 17 18:13:01 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-2.849734,451.2821,315.1206);
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
   hmc__7->SetBinContent(1,48.38219);
   hmc__7->SetBinContent(2,53.50242);
   hmc__7->SetBinContent(3,67.75485);
   hmc__7->SetBinContent(4,68.66451);
   hmc__7->SetBinContent(5,72.27233);
   hmc__7->SetBinContent(6,104.4593);
   hmc__7->SetBinContent(7,114.2957);
   hmc__7->SetBinContent(8,109.2348);
   hmc__7->SetBinContent(9,122.1663);
   hmc__7->SetBinContent(10,142.4867);
   hmc__7->SetBinContent(11,139.5867);
   hmc__7->SetBinContent(12,131.6107);
   hmc__7->SetBinContent(13,122.2414);
   hmc__7->SetBinContent(14,73.9635);
   hmc__7->SetBinContent(15,48.16052);
   hmc__7->SetBinContent(16,37.96554);
   hmc__7->SetBinContent(17,23.18693);
   hmc__7->SetBinContent(18,22.6405);
   hmc__7->SetBinContent(19,15.37102);
   hmc__7->SetBinContent(20,19.30812);
   hmc__7->SetBinContent(21,12.11694);
   hmc__7->SetBinContent(22,12.20371);
   hmc__7->SetBinContent(23,14.12547);
   hmc__7->SetBinContent(24,9.466175);
   hmc__7->SetBinContent(25,8.377813);
   hmc__7->SetBinContent(26,8.550119);
   hmc__7->SetBinContent(27,6.88746);
   hmc__7->SetBinContent(28,6.45336);
   hmc__7->SetBinContent(29,5.976491);
   hmc__7->SetBinContent(30,8.062564);
   hmc__7->SetBinContent(31,5.027706);
   hmc__7->SetBinContent(32,5.321597);
   hmc__7->SetBinContent(33,2.300862);
   hmc__7->SetBinContent(34,3.472805);
   hmc__7->SetBinContent(35,39.45826);
   hmc__7->SetBinError(1,24.24299);
   hmc__7->SetBinError(2,29.18943);
   hmc__7->SetBinError(3,22.76186);
   hmc__7->SetBinError(4,23.00319);
   hmc__7->SetBinError(5,25.07805);
   hmc__7->SetBinError(6,30.51383);
   hmc__7->SetBinError(7,35.20302);
   hmc__7->SetBinError(8,36.98334);
   hmc__7->SetBinError(9,30.90553);
   hmc__7->SetBinError(10,38.5869);
   hmc__7->SetBinError(11,42.59653);
   hmc__7->SetBinError(12,37.65045);
   hmc__7->SetBinError(13,36.02656);
   hmc__7->SetBinError(14,26.49966);
   hmc__7->SetBinError(15,18.99545);
   hmc__7->SetBinError(16,17.35802);
   hmc__7->SetBinError(17,9.852612);
   hmc__7->SetBinError(18,14.26463);
   hmc__7->SetBinError(19,9.742858);
   hmc__7->SetBinError(20,13.76567);
   hmc__7->SetBinError(21,10.19229);
   hmc__7->SetBinError(22,11.2491);
   hmc__7->SetBinError(23,15.18688);
   hmc__7->SetBinError(24,14.02357);
   hmc__7->SetBinError(25,8.863485);
   hmc__7->SetBinError(26,11.18605);
   hmc__7->SetBinError(27,6.645056);
   hmc__7->SetBinError(28,9.061188);
   hmc__7->SetBinError(29,6.264863);
   hmc__7->SetBinError(30,8.699658);
   hmc__7->SetBinError(31,5.479542);
   hmc__7->SetBinError(32,5.784775);
   hmc__7->SetBinError(33,2.817861);
   hmc__7->SetBinError(34,5.907627);
   hmc__7->SetBinError(35,28.83643);
   hmc__7->SetMinimum(-2.849734);
   hmc__7->SetMaximum(299.2221);
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
   hs3_stack_3->SetMaximum(149.611);
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
   hbadmatch_stack_1->SetBinContent(1,1.507692);
   hbadmatch_stack_1->SetBinContent(2,2.727789);
   hbadmatch_stack_1->SetBinContent(3,3.277317);
   hbadmatch_stack_1->SetBinContent(4,1.225879);
   hbadmatch_stack_1->SetBinContent(5,2.342597);
   hbadmatch_stack_1->SetBinContent(6,4.402947);
   hbadmatch_stack_1->SetBinContent(7,4.836984);
   hbadmatch_stack_1->SetBinContent(8,4.07794);
   hbadmatch_stack_1->SetBinContent(9,3.816882);
   hbadmatch_stack_1->SetBinContent(10,4.453639);
   hbadmatch_stack_1->SetBinContent(11,3.653511);
   hbadmatch_stack_1->SetBinContent(12,3.534464);
   hbadmatch_stack_1->SetBinContent(13,3.841765);
   hbadmatch_stack_1->SetBinContent(14,1.52047);
   hbadmatch_stack_1->SetBinContent(15,1.680826);
   hbadmatch_stack_1->SetBinContent(16,1.518779);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,1.072095);
   hbadmatch_stack_1->SetBinContent(20,0.7731665);
   hbadmatch_stack_1->SetBinContent(21,0.6355563);
   hbadmatch_stack_1->SetBinContent(22,0.7317812);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.7319179);
   hbadmatch_stack_1->SetBinContent(25,1.186969);
   hbadmatch_stack_1->SetBinContent(27,0.3934307);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.7319179);
   hbadmatch_stack_1->SetBinError(1,0.635446);
   hbadmatch_stack_1->SetBinError(2,1.221633);
   hbadmatch_stack_1->SetBinError(3,0.9547694);
   hbadmatch_stack_1->SetBinError(4,0.5633798);
   hbadmatch_stack_1->SetBinError(5,0.8097566);
   hbadmatch_stack_1->SetBinError(6,1.159697);
   hbadmatch_stack_1->SetBinError(7,1.142823);
   hbadmatch_stack_1->SetBinError(8,1.118474);
   hbadmatch_stack_1->SetBinError(9,1.077925);
   hbadmatch_stack_1->SetBinError(10,1.099212);
   hbadmatch_stack_1->SetBinError(11,1.040837);
   hbadmatch_stack_1->SetBinError(12,0.9448752);
   hbadmatch_stack_1->SetBinError(13,1.052067);
   hbadmatch_stack_1->SetBinError(14,0.5898325);
   hbadmatch_stack_1->SetBinError(15,0.7026091);
   hbadmatch_stack_1->SetBinError(16,0.5892709);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.5551335);
   hbadmatch_stack_1->SetBinError(20,0.4586746);
   hbadmatch_stack_1->SetBinError(21,0.368807);
   hbadmatch_stack_1->SetBinError(22,0.5187237);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.438694);
   hbadmatch_stack_1->SetBinError(25,0.6891089);
   hbadmatch_stack_1->SetBinError(27,0.2781975);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.438694);
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
   houtFV_stack_4->SetBinContent(1,12.30546);
   houtFV_stack_4->SetBinContent(2,14.41028);
   houtFV_stack_4->SetBinContent(3,18.98146);
   houtFV_stack_4->SetBinContent(4,17.57668);
   houtFV_stack_4->SetBinContent(5,16.54822);
   houtFV_stack_4->SetBinContent(6,19.30677);
   houtFV_stack_4->SetBinContent(7,25.34769);
   houtFV_stack_4->SetBinContent(8,19.56674);
   houtFV_stack_4->SetBinContent(9,22.59663);
   houtFV_stack_4->SetBinContent(10,22.36975);
   houtFV_stack_4->SetBinContent(11,21.88941);
   houtFV_stack_4->SetBinContent(12,26.10324);
   houtFV_stack_4->SetBinContent(13,22.48103);
   houtFV_stack_4->SetBinContent(14,14.41936);
   houtFV_stack_4->SetBinContent(15,8.360315);
   houtFV_stack_4->SetBinContent(16,7.027144);
   houtFV_stack_4->SetBinContent(17,3.624324);
   houtFV_stack_4->SetBinContent(18,4.232533);
   houtFV_stack_4->SetBinContent(19,2.825247);
   houtFV_stack_4->SetBinContent(20,2.744162);
   houtFV_stack_4->SetBinContent(21,1.905739);
   houtFV_stack_4->SetBinContent(22,3.029106);
   houtFV_stack_4->SetBinContent(23,2.197979);
   houtFV_stack_4->SetBinContent(24,1.17184);
   houtFV_stack_4->SetBinContent(25,1.167064);
   houtFV_stack_4->SetBinContent(26,1.178602);
   houtFV_stack_4->SetBinContent(27,1.853532);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,1.125349);
   houtFV_stack_4->SetBinContent(30,1.26712);
   houtFV_stack_4->SetBinContent(31,0.3917402);
   houtFV_stack_4->SetBinContent(32,0.3934307);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,5.341617);
   houtFV_stack_4->SetBinError(1,1.761384);
   houtFV_stack_4->SetBinError(2,1.897945);
   houtFV_stack_4->SetBinError(3,2.223107);
   houtFV_stack_4->SetBinError(4,2.327531);
   houtFV_stack_4->SetBinError(5,2.048537);
   houtFV_stack_4->SetBinError(6,2.143474);
   houtFV_stack_4->SetBinError(7,2.525185);
   houtFV_stack_4->SetBinError(8,2.265149);
   houtFV_stack_4->SetBinError(9,2.327403);
   houtFV_stack_4->SetBinError(10,2.384062);
   houtFV_stack_4->SetBinError(11,2.355172);
   houtFV_stack_4->SetBinError(12,2.606448);
   houtFV_stack_4->SetBinError(13,2.68429);
   houtFV_stack_4->SetBinError(14,1.939824);
   houtFV_stack_4->SetBinError(15,1.466268);
   houtFV_stack_4->SetBinError(16,1.300796);
   houtFV_stack_4->SetBinError(17,0.8995814);
   houtFV_stack_4->SetBinError(18,1.064091);
   houtFV_stack_4->SetBinError(19,0.8492044);
   houtFV_stack_4->SetBinError(20,0.8702037);
   houtFV_stack_4->SetBinError(21,0.7616975);
   houtFV_stack_4->SetBinError(22,0.8313658);
   houtFV_stack_4->SetBinError(23,0.8001374);
   houtFV_stack_4->SetBinError(24,0.478404);
   houtFV_stack_4->SetBinError(25,0.5366549);
   houtFV_stack_4->SetBinError(26,0.4811646);
   houtFV_stack_4->SetBinError(27,0.723024);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.5194673);
   houtFV_stack_4->SetBinError(30,0.5883944);
   houtFV_stack_4->SetBinError(31,0.2770047);
   houtFV_stack_4->SetBinError(32,0.2781975);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.187716);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.711454);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.309644);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.156526);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.533012);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.241722);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.436526);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.059704);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.420412);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3035023);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3775993);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3627032);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4261073);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3737142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4374504);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2753746);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3555681);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.2304939);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,3.749242);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.962895);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.942148);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.979352);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.01032);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.80341);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.97955);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.72893);
   hNCpi0inFVres_stack_7->SetBinContent(9,27.27668);
   hNCpi0inFVres_stack_7->SetBinContent(10,30.80621);
   hNCpi0inFVres_stack_7->SetBinContent(11,37.6959);
   hNCpi0inFVres_stack_7->SetBinContent(12,30.258);
   hNCpi0inFVres_stack_7->SetBinContent(13,24.9178);
   hNCpi0inFVres_stack_7->SetBinContent(14,12.61815);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.373097);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.211092);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.731384);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.816748);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.327998);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.643612);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.36594);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.463426);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6825538);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9338218);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.143572);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.6682718);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3626998);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.6141361);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.390768);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.4457358);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(35,3.010552);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6236603);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7036172);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8949126);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9777368);
   hNCpi0inFVres_stack_7->SetBinError(5,1.005861);
   hNCpi0inFVres_stack_7->SetBinError(6,1.197356);
   hNCpi0inFVres_stack_7->SetBinError(7,1.438893);
   hNCpi0inFVres_stack_7->SetBinError(8,1.388089);
   hNCpi0inFVres_stack_7->SetBinError(9,1.705304);
   hNCpi0inFVres_stack_7->SetBinError(10,1.804462);
   hNCpi0inFVres_stack_7->SetBinError(11,2.10274);
   hNCpi0inFVres_stack_7->SetBinError(12,1.7528);
   hNCpi0inFVres_stack_7->SetBinError(13,1.672426);
   hNCpi0inFVres_stack_7->SetBinError(14,1.132282);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8572609);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6927002);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4919598);
   hNCpi0inFVres_stack_7->SetBinError(18,0.531876);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4932113);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3642196);
   hNCpi0inFVres_stack_7->SetBinError(21,0.312868);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3743209);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1982678);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2812022);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3330545);
   hNCpi0inFVres_stack_7->SetBinError(26,0.213699);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1005948);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2874767);
   hNCpi0inFVres_stack_7->SetBinError(29,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(31,0.2089417);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1610816);
   hNCpi0inFVres_stack_7->SetBinError(33,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(35,0.5315707);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.031972);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.380558);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.714526);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.189994);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.554774);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.58217);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.257346);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.801064);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.6952);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.25428);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.548403);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.855536);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.100156);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.505776);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.86798);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.446568);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5025361);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.501704);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.181018);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.8639081);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.743426);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3283469);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3962917);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3835646);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4951149);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6346413);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5525135);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7624226);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7766682);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8635193);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9255917);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.010911);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7948306);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.680608);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4090187);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4729347);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2126346);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2820092);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2454852);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.283386);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1086555);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3415171);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.4471301);
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
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
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
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(2,1.467217);
   hNCinFV_stack_11->SetBinContent(3,1.91052);
   hNCinFV_stack_11->SetBinContent(4,1.715495);
   hNCinFV_stack_11->SetBinContent(5,3.319412);
   hNCinFV_stack_11->SetBinContent(6,3.967882);
   hNCinFV_stack_11->SetBinContent(7,4.981653);
   hNCinFV_stack_11->SetBinContent(8,3.322793);
   hNCinFV_stack_11->SetBinContent(9,3.47748);
   hNCinFV_stack_11->SetBinContent(10,5.026914);
   hNCinFV_stack_11->SetBinContent(11,5.516855);
   hNCinFV_stack_11->SetBinContent(12,4.44476);
   hNCinFV_stack_11->SetBinContent(13,4.639785);
   hNCinFV_stack_11->SetBinContent(14,2.484368);
   hNCinFV_stack_11->SetBinContent(15,1.804013);
   hNCinFV_stack_11->SetBinContent(16,2.055672);
   hNCinFV_stack_11->SetBinContent(17,0.9286332);
   hNCinFV_stack_11->SetBinContent(18,2.197444);
   hNCinFV_stack_11->SetBinContent(19,2.236091);
   hNCinFV_stack_11->SetBinContent(20,1.607298);
   hNCinFV_stack_11->SetBinContent(21,1.215558);
   hNCinFV_stack_11->SetBinContent(22,0.3934307);
   hNCinFV_stack_11->SetBinContent(23,1.660551);
   hNCinFV_stack_11->SetBinContent(24,0.3917402);
   hNCinFV_stack_11->SetBinContent(25,0.7319179);
   hNCinFV_stack_11->SetBinContent(26,0.7319179);
   hNCinFV_stack_11->SetBinContent(27,1.268811);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(29,0.5352025);
   hNCinFV_stack_11->SetBinContent(30,0.3917402);
   hNCinFV_stack_11->SetBinContent(31,1.463836);
   hNCinFV_stack_11->SetBinContent(32,0.536893);
   hNCinFV_stack_11->SetBinContent(33,0.3401776);
   hNCinFV_stack_11->SetBinContent(34,0.6803553);
   hNCinFV_stack_11->SetBinContent(35,5.426647);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(2,0.6214735);
   hNCinFV_stack_11->SetBinError(3,0.6511312);
   hNCinFV_stack_11->SetBinError(4,0.6212384);
   hNCinFV_stack_11->SetBinError(5,0.9200768);
   hNCinFV_stack_11->SetBinError(6,0.9624406);
   hNCinFV_stack_11->SetBinError(7,1.1273);
   hNCinFV_stack_11->SetBinError(8,0.9207963);
   hNCinFV_stack_11->SetBinError(9,0.8549259);
   hNCinFV_stack_11->SetBinError(10,1.127984);
   hNCinFV_stack_11->SetBinError(11,1.19355);
   hNCinFV_stack_11->SetBinError(12,1.056592);
   hNCinFV_stack_11->SetBinError(13,1.074441);
   hNCinFV_stack_11->SetBinError(14,0.8556093);
   hNCinFV_stack_11->SetBinError(15,0.7075491);
   hNCinFV_stack_11->SetBinError(16,0.7082781);
   hNCinFV_stack_11->SetBinError(17,0.48078);
   hNCinFV_stack_11->SetBinError(18,0.760276);
   hNCinFV_stack_11->SetBinError(19,0.8557801);
   hNCinFV_stack_11->SetBinError(20,0.6796534);
   hNCinFV_stack_11->SetBinError(21,0.6206425);
   hNCinFV_stack_11->SetBinError(22,0.2781975);
   hNCinFV_stack_11->SetBinError(23,0.650847);
   hNCinFV_stack_11->SetBinError(24,0.2770047);
   hNCinFV_stack_11->SetBinError(25,0.438694);
   hNCinFV_stack_11->SetBinError(26,0.438694);
   hNCinFV_stack_11->SetBinError(27,0.5889569);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(29,0.3921167);
   hNCinFV_stack_11->SetBinError(30,0.2770047);
   hNCinFV_stack_11->SetBinError(31,0.620407);
   hNCinFV_stack_11->SetBinError(32,0.3929602);
   hNCinFV_stack_11->SetBinError(33,0.3401776);
   hNCinFV_stack_11->SetBinError(34,0.4810838);
   hNCinFV_stack_11->SetBinError(35,1.144207);
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
   hmcerror__8->SetBinContent(1,48.38219);
   hmcerror__8->SetBinContent(2,53.50242);
   hmcerror__8->SetBinContent(3,67.75485);
   hmcerror__8->SetBinContent(4,68.66451);
   hmcerror__8->SetBinContent(5,72.27233);
   hmcerror__8->SetBinContent(6,104.4593);
   hmcerror__8->SetBinContent(7,114.2957);
   hmcerror__8->SetBinContent(8,109.2348);
   hmcerror__8->SetBinContent(9,122.1663);
   hmcerror__8->SetBinContent(10,142.4867);
   hmcerror__8->SetBinContent(11,139.5867);
   hmcerror__8->SetBinContent(12,131.6107);
   hmcerror__8->SetBinContent(13,122.2414);
   hmcerror__8->SetBinContent(14,73.9635);
   hmcerror__8->SetBinContent(15,48.16052);
   hmcerror__8->SetBinContent(16,37.96554);
   hmcerror__8->SetBinContent(17,23.18693);
   hmcerror__8->SetBinContent(18,22.6405);
   hmcerror__8->SetBinContent(19,15.37102);
   hmcerror__8->SetBinContent(20,19.30812);
   hmcerror__8->SetBinContent(21,12.11694);
   hmcerror__8->SetBinContent(22,12.20371);
   hmcerror__8->SetBinContent(23,14.12547);
   hmcerror__8->SetBinContent(24,9.466175);
   hmcerror__8->SetBinContent(25,8.377813);
   hmcerror__8->SetBinContent(26,8.550119);
   hmcerror__8->SetBinContent(27,6.88746);
   hmcerror__8->SetBinContent(28,6.45336);
   hmcerror__8->SetBinContent(29,5.976491);
   hmcerror__8->SetBinContent(30,8.062564);
   hmcerror__8->SetBinContent(31,5.027706);
   hmcerror__8->SetBinContent(32,5.321597);
   hmcerror__8->SetBinContent(33,2.300862);
   hmcerror__8->SetBinContent(34,3.472805);
   hmcerror__8->SetBinContent(35,39.45826);
   hmcerror__8->SetBinError(1,24.24299);
   hmcerror__8->SetBinError(2,29.18943);
   hmcerror__8->SetBinError(3,22.76186);
   hmcerror__8->SetBinError(4,23.00319);
   hmcerror__8->SetBinError(5,25.07805);
   hmcerror__8->SetBinError(6,30.51383);
   hmcerror__8->SetBinError(7,35.20302);
   hmcerror__8->SetBinError(8,36.98334);
   hmcerror__8->SetBinError(9,30.90553);
   hmcerror__8->SetBinError(10,38.5869);
   hmcerror__8->SetBinError(11,42.59653);
   hmcerror__8->SetBinError(12,37.65045);
   hmcerror__8->SetBinError(13,36.02656);
   hmcerror__8->SetBinError(14,26.49966);
   hmcerror__8->SetBinError(15,18.99545);
   hmcerror__8->SetBinError(16,17.35802);
   hmcerror__8->SetBinError(17,9.852612);
   hmcerror__8->SetBinError(18,14.26463);
   hmcerror__8->SetBinError(19,9.742858);
   hmcerror__8->SetBinError(20,13.76567);
   hmcerror__8->SetBinError(21,10.19229);
   hmcerror__8->SetBinError(22,11.2491);
   hmcerror__8->SetBinError(23,15.18688);
   hmcerror__8->SetBinError(24,14.02357);
   hmcerror__8->SetBinError(25,8.863485);
   hmcerror__8->SetBinError(26,11.18605);
   hmcerror__8->SetBinError(27,6.645056);
   hmcerror__8->SetBinError(28,9.061188);
   hmcerror__8->SetBinError(29,6.264863);
   hmcerror__8->SetBinError(30,8.699658);
   hmcerror__8->SetBinError(31,5.479542);
   hmcerror__8->SetBinError(32,5.784775);
   hmcerror__8->SetBinError(33,2.817861);
   hmcerror__8->SetBinError(34,5.907627);
   hmcerror__8->SetBinError(35,28.83643);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.6/34","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 319.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  282.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  69.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 68.0","F");

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
   0.5010726,
   0.5455722,
   0.3359444,
   0.3350085,
   0.3469938,
   0.292112,
   0.3079994,
   0.3385674,
   0.2529791,
   0.2708105,
   0.3051619,
   0.2860743,
   0.2947165,
   0.3582802,
   0.3944196,
   0.4572045,
   0.424921,
   0.630049,
   0.6338459,
   0.7129475,
   0.8411602,
   0.9217765,
   1.075142,
   1.48144,
   1.057971,
   1.308291,
   0.9648051,
   1.404104,
   1.048251,
   1.079019,
   1.089869,
   1.087038,
   1.224698,
   1.701111};
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
   0.5010726,
   0.5455722,
   0.3359444,
   0.3350085,
   0.3469938,
   0.292112,
   0.3079994,
   0.3385674,
   0.2529791,
   0.2708105,
   0.3051619,
   0.2860743,
   0.2947165,
   0.3582802,
   0.3944196,
   0.4572045,
   0.424921,
   0.630049,
   0.6338459,
   0.7129475,
   0.8411602,
   0.9217765,
   1.075142,
   1.48144,
   1.057971,
   1.308291,
   0.9648051,
   1.404104,
   1.048251,
   1.079019,
   1.089869,
   1.087038,
   1.224698,
   1.701111};
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
   0.1735095,
   0.1733793,
   0.1585321,
   0.1700662,
   0.1812498,
   0.1731719,
   0.1674236,
   0.1776449,
   0.196633,
   0.2052788,
   0.2226459,
   0.2114716,
   0.1954051,
   0.197031,
   0.1877079,
   0.2210166,
   0.1956703,
   0.229373,
   0.2414073,
   0.2278326,
   0.2490535,
   0.2618488,
   0.3414283,
   0.2791368,
   0.3147809,
   0.2888925,
   0.2896685,
   0.299772,
   0.4776327,
   0.2816383,
   0.387331,
   0.3253922,
   0.564894,
   0.3813717};
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
   0.1735095,
   0.1733793,
   0.1585321,
   0.1700662,
   0.1812498,
   0.1731719,
   0.1674236,
   0.1776449,
   0.196633,
   0.2052788,
   0.2226459,
   0.2114716,
   0.1954051,
   0.197031,
   0.1877079,
   0.2210166,
   0.1956703,
   0.229373,
   0.2414073,
   0.2278326,
   0.2490535,
   0.2618488,
   0.3414283,
   0.2791368,
   0.3147809,
   0.2888925,
   0.2896685,
   0.299772,
   0.4776327,
   0.2816383,
   0.387331,
   0.3253922,
   0.564894,
   0.3813717};
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
   0.9714318,
   0.8971557,
   0.9593409,
   1.019449,
   1.023905,
   0.9668834,
   0.8486757,
   0.9246139,
   1.031381,
   0.9685115,
   0.7307288,
   0.8813871,
   0.719887,
   0.6219284,
   1.038195,
   0.7111712,
   0.690044,
   1.015879,
   0.9108049,
   0.5179168,
   0.90782,
   1.474961,
   0.7787353,
   0.8451143,
   0.7161773,
   0.818702,
   0.8711485,
   0.3099161,
   0.3346445,
   0.8682102,
   0.9944894,
   0.1879135,
   0.8692395,
   0.5759034};
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
   0.1444374,
   0.1319641,
   0.1208666,
   0.1236811,
   0.1207585,
   0.09620849,
   0.08723337,
   0.09200253,
   0.09188271,
   0.08244517,
   0.07235293,
   0.08183474,
   0.07774452,
   0.09349612,
   0.1495519,
   0.1406907,
   0.1795322,
   0.2184448,
   0.2543878,
   0.1734415,
   0.2886455,
   0.3606115,
   0.2476024,
   0.320161,
   0.319803,
   0.3344445,
   0.3890041,
   0.3099161,
   0.3346445,
   0.3546688,
   0.4952458,
   0.1879135,
   0.8692395,
   0.5759034};
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
   0.1402148,
   0.1281456,
   0.117875,
   0.1207349,
   0.1179608,
   0.09620849,
   0.08547127,
   0.09200253,
   0.09188271,
   0.08244517,
   0.07235293,
   0.08183474,
   0.07609614,
   0.09073124,
   0.1453161,
   0.1351805,
   0.1701562,
   0.2091208,
   0.2400491,
   0.1614813,
   0.2698701,
   0.342994,
   0.2314968,
   0.2946914,
   0.2886887,
   0.3053209,
   0.351157,
   0.2354076,
   0.254191,
   0.3237841,
   0.4396916,
   0.2555079,
   0.6602613,
   0.4374476};
   grae = new TGraphAsymmErrors(34,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,440);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.99975);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

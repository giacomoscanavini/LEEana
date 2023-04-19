#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 11:58:35 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-13.84615,-10.61072,101.5385,1173.322);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__7->SetBinContent(1,530.5358);
   hmc__7->SetBinContent(2,168.7086);
   hmc__7->SetBinContent(3,156.8915);
   hmc__7->SetBinContent(4,129.3622);
   hmc__7->SetBinContent(5,113.3854);
   hmc__7->SetBinContent(6,97.40961);
   hmc__7->SetBinContent(7,87.12698);
   hmc__7->SetBinContent(8,58.1179);
   hmc__7->SetBinContent(9,43.84898);
   hmc__7->SetBinContent(10,38.66891);
   hmc__7->SetBinContent(11,32.75529);
   hmc__7->SetBinContent(12,33.70269);
   hmc__7->SetBinContent(13,29.89141);
   hmc__7->SetBinContent(14,20.93032);
   hmc__7->SetBinContent(15,16.13827);
   hmc__7->SetBinContent(16,11.96345);
   hmc__7->SetBinContent(17,11.30404);
   hmc__7->SetBinContent(18,11.6095);
   hmc__7->SetBinContent(19,7.205667);
   hmc__7->SetBinContent(20,10.22211);
   hmc__7->SetBinContent(21,5.780425);
   hmc__7->SetBinContent(22,5.140665);
   hmc__7->SetBinContent(23,4.791634);
   hmc__7->SetBinContent(24,2.683098);
   hmc__7->SetBinContent(25,56.88093);
   hmc__7->SetBinError(1,106.7567);
   hmc__7->SetBinError(2,42.69809);
   hmc__7->SetBinError(3,42.17825);
   hmc__7->SetBinError(4,34.19696);
   hmc__7->SetBinError(5,28.57669);
   hmc__7->SetBinError(6,33.4793);
   hmc__7->SetBinError(7,27.61646);
   hmc__7->SetBinError(8,18.38338);
   hmc__7->SetBinError(9,17.42558);
   hmc__7->SetBinError(10,15.59457);
   hmc__7->SetBinError(11,13.67898);
   hmc__7->SetBinError(12,15.14315);
   hmc__7->SetBinError(13,14.17369);
   hmc__7->SetBinError(14,10.58424);
   hmc__7->SetBinError(15,10.34868);
   hmc__7->SetBinError(16,7.609665);
   hmc__7->SetBinError(17,9.510884);
   hmc__7->SetBinError(18,7.232311);
   hmc__7->SetBinError(19,5.496045);
   hmc__7->SetBinError(20,6.758888);
   hmc__7->SetBinError(21,5.801152);
   hmc__7->SetBinError(22,4.523592);
   hmc__7->SetBinError(23,6.252784);
   hmc__7->SetBinError(24,3.811301);
   hmc__7->SetBinError(25,22.43745);
   hmc__7->SetMinimum(-10.61072);
   hmc__7->SetMaximum(1114.125);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,90);
   hs3_stack_3->SetMinimum(-4.228303e-08);
   hs3_stack_3->SetMaximum(557.0626);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,12.71261);
   hbadmatch_stack_1->SetBinContent(2,4.979209);
   hbadmatch_stack_1->SetBinContent(3,4.204324);
   hbadmatch_stack_1->SetBinContent(4,4.197325);
   hbadmatch_stack_1->SetBinContent(5,2.421721);
   hbadmatch_stack_1->SetBinContent(6,3.223464);
   hbadmatch_stack_1->SetBinContent(7,2.789959);
   hbadmatch_stack_1->SetBinContent(8,0.44744);
   hbadmatch_stack_1->SetBinContent(9,1.319596);
   hbadmatch_stack_1->SetBinContent(10,2.694407);
   hbadmatch_stack_1->SetBinContent(11,2.012515);
   hbadmatch_stack_1->SetBinContent(12,2.533664);
   hbadmatch_stack_1->SetBinContent(13,1.349251);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(15,1.217248);
   hbadmatch_stack_1->SetBinContent(16,0.6128272);
   hbadmatch_stack_1->SetBinContent(17,1.076191);
   hbadmatch_stack_1->SetBinContent(18,0.6339369);
   hbadmatch_stack_1->SetBinContent(19,0.769953);
   hbadmatch_stack_1->SetBinContent(22,0.8495809);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(24,0.44);
   hbadmatch_stack_1->SetBinContent(25,4.757925);
   hbadmatch_stack_1->SetBinError(1,1.810427);
   hbadmatch_stack_1->SetBinError(2,1.188539);
   hbadmatch_stack_1->SetBinError(3,1.094645);
   hbadmatch_stack_1->SetBinError(4,1.398835);
   hbadmatch_stack_1->SetBinError(5,0.7008366);
   hbadmatch_stack_1->SetBinError(6,0.9455881);
   hbadmatch_stack_1->SetBinError(7,0.857683);
   hbadmatch_stack_1->SetBinError(8,0.3186844);
   hbadmatch_stack_1->SetBinError(9,0.6196785);
   hbadmatch_stack_1->SetBinError(10,0.9889387);
   hbadmatch_stack_1->SetBinError(11,0.7912837);
   hbadmatch_stack_1->SetBinError(12,0.9218722);
   hbadmatch_stack_1->SetBinError(13,0.5656666);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(15,0.6211758);
   hbadmatch_stack_1->SetBinError(16,0.3543003);
   hbadmatch_stack_1->SetBinError(17,0.5690425);
   hbadmatch_stack_1->SetBinError(18,0.3664746);
   hbadmatch_stack_1->SetBinError(19,0.4681484);
   hbadmatch_stack_1->SetBinError(22,0.6125459);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(24,0.3131254);
   hbadmatch_stack_1->SetBinError(25,1.152094);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,88.50864);
   hext_stack_2->SetBinContent(2,22.22991);
   hext_stack_2->SetBinContent(3,23.49714);
   hext_stack_2->SetBinContent(4,18.33551);
   hext_stack_2->SetBinContent(5,22.25586);
   hext_stack_2->SetBinContent(6,19.94036);
   hext_stack_2->SetBinContent(7,13.59483);
   hext_stack_2->SetBinContent(8,7.619999);
   hext_stack_2->SetBinContent(9,6.082985);
   hext_stack_2->SetBinContent(10,6.296459);
   hext_stack_2->SetBinContent(11,6.628036);
   hext_stack_2->SetBinContent(12,8.000648);
   hext_stack_2->SetBinContent(13,8.07844);
   hext_stack_2->SetBinContent(14,3.972198);
   hext_stack_2->SetBinContent(15,2.599588);
   hext_stack_2->SetBinContent(16,0.9660115);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,4.270645);
   hext_stack_2->SetBinContent(19,1.379791);
   hext_stack_2->SetBinContent(20,4.752265);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,13.63073);
   hext_stack_2->SetBinError(1,6.455123);
   hext_stack_2->SetBinError(2,3.239176);
   hext_stack_2->SetBinError(3,3.353589);
   hext_stack_2->SetBinError(4,2.959394);
   hext_stack_2->SetBinError(5,3.166036);
   hext_stack_2->SetBinError(6,3.165898);
   hext_stack_2->SetBinError(7,2.456092);
   hext_stack_2->SetBinError(8,1.79254);
   hext_stack_2->SetBinError(9,1.552674);
   hext_stack_2->SetBinError(10,1.805754);
   hext_stack_2->SetBinError(11,1.778983);
   hext_stack_2->SetBinError(12,1.961378);
   hext_stack_2->SetBinError(13,1.942156);
   hext_stack_2->SetBinError(14,1.288106);
   hext_stack_2->SetBinError(15,0.9884288);
   hext_stack_2->SetBinError(16,0.7189592);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,1.4943);
   hext_stack_2->SetBinError(19,0.6935586);
   hext_stack_2->SetBinError(20,1.630811);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,2.241959);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,7.341118);
   hdirt_stack_3->SetBinContent(2,1.701863);
   hdirt_stack_3->SetBinContent(3,1.877754);
   hdirt_stack_3->SetBinContent(4,1.573592);
   hdirt_stack_3->SetBinContent(5,2.24419);
   hdirt_stack_3->SetBinContent(6,1.833688);
   hdirt_stack_3->SetBinContent(7,1.365909);
   hdirt_stack_3->SetBinContent(8,0.7524016);
   hdirt_stack_3->SetBinContent(9,0.5758626);
   hdirt_stack_3->SetBinContent(10,0.9280769);
   hdirt_stack_3->SetBinContent(11,0.8755497);
   hdirt_stack_3->SetBinContent(12,0.3851607);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.7927252);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.4063629);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(25,0.3895662);
   hdirt_stack_3->SetBinError(1,1.394966);
   hdirt_stack_3->SetBinError(2,0.7065411);
   hdirt_stack_3->SetBinError(3,0.7462612);
   hdirt_stack_3->SetBinError(4,0.5706);
   hdirt_stack_3->SetBinError(5,0.8258343);
   hdirt_stack_3->SetBinError(6,0.7511704);
   hdirt_stack_3->SetBinError(7,0.9783825);
   hdirt_stack_3->SetBinError(8,0.4142002);
   hdirt_stack_3->SetBinError(9,0.3389606);
   hdirt_stack_3->SetBinError(10,0.5393725);
   hdirt_stack_3->SetBinError(11,0.5411725);
   hdirt_stack_3->SetBinError(12,0.2830491);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4917267);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(17,0.2991412);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(25,0.3895662);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,92.14902);
   houtFV_stack_4->SetBinContent(2,28.81699);
   houtFV_stack_4->SetBinContent(3,29.02385);
   houtFV_stack_4->SetBinContent(4,25.12086);
   houtFV_stack_4->SetBinContent(5,22.9319);
   houtFV_stack_4->SetBinContent(6,20.24062);
   houtFV_stack_4->SetBinContent(7,20.73354);
   houtFV_stack_4->SetBinContent(8,13.44952);
   houtFV_stack_4->SetBinContent(9,9.596119);
   houtFV_stack_4->SetBinContent(10,6.252154);
   houtFV_stack_4->SetBinContent(11,7.035635);
   houtFV_stack_4->SetBinContent(12,7.199634);
   houtFV_stack_4->SetBinContent(13,6.279924);
   houtFV_stack_4->SetBinContent(14,4.082051);
   houtFV_stack_4->SetBinContent(15,3.340002);
   houtFV_stack_4->SetBinContent(16,3.388362);
   houtFV_stack_4->SetBinContent(17,2.722738);
   houtFV_stack_4->SetBinContent(18,2.002419);
   houtFV_stack_4->SetBinContent(19,1.807394);
   houtFV_stack_4->SetBinContent(20,1.323754);
   houtFV_stack_4->SetBinContent(21,1.65548);
   houtFV_stack_4->SetBinContent(22,0.7636718);
   houtFV_stack_4->SetBinContent(23,0.9269427);
   houtFV_stack_4->SetBinContent(24,1.355647);
   houtFV_stack_4->SetBinContent(25,12.81016);
   houtFV_stack_4->SetBinError(1,4.825352);
   houtFV_stack_4->SetBinError(2,2.723434);
   houtFV_stack_4->SetBinError(3,2.710099);
   houtFV_stack_4->SetBinError(4,2.482407);
   houtFV_stack_4->SetBinError(5,2.431877);
   houtFV_stack_4->SetBinError(6,2.248401);
   houtFV_stack_4->SetBinError(7,2.680699);
   houtFV_stack_4->SetBinError(8,1.864156);
   houtFV_stack_4->SetBinError(9,1.555964);
   houtFV_stack_4->SetBinError(10,1.272139);
   houtFV_stack_4->SetBinError(11,1.33109);
   houtFV_stack_4->SetBinError(12,1.419837);
   houtFV_stack_4->SetBinError(13,1.282182);
   houtFV_stack_4->SetBinError(14,1.037795);
   houtFV_stack_4->SetBinError(15,0.9212866);
   houtFV_stack_4->SetBinError(16,0.9025166);
   houtFV_stack_4->SetBinError(17,0.8091614);
   houtFV_stack_4->SetBinError(18,0.7348366);
   houtFV_stack_4->SetBinError(19,0.7084844);
   houtFV_stack_4->SetBinError(20,0.5560625);
   houtFV_stack_4->SetBinError(21,0.6493189);
   houtFV_stack_4->SetBinError(22,0.4537029);
   houtFV_stack_4->SetBinError(23,0.4800908);
   houtFV_stack_4->SetBinError(24,0.6364067);
   houtFV_stack_4->SetBinError(25,1.850808);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.816426);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.074322);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.311308);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4882542);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8320713);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3674124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.336735);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4255744);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2930637);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1155977);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,87.40572);
   hNCpi0inFVres_stack_7->SetBinContent(2,35.83403);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.39683);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.86912);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.79406);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.12502);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.33676);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.68714);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.642887);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.189167);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.018527);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.365211);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.94571);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.026834);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.63249);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.218894);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.79773);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.17164);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.8220537);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.9339901);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5438859);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.753636);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.334968);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.904024);
   hNCpi0inFVres_stack_7->SetBinError(1,3.017744);
   hNCpi0inFVres_stack_7->SetBinError(2,1.934562);
   hNCpi0inFVres_stack_7->SetBinError(3,1.757752);
   hNCpi0inFVres_stack_7->SetBinError(4,1.52905);
   hNCpi0inFVres_stack_7->SetBinError(5,1.522355);
   hNCpi0inFVres_stack_7->SetBinError(6,1.34949);
   hNCpi0inFVres_stack_7->SetBinError(7,1.296436);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9515778);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9529407);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7458637);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6810838);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7368082);
   hNCpi0inFVres_stack_7->SetBinError(13,0.692232);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6166527);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4281576);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5458409);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4423897);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3800824);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2078513);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3344153);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2338466);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2941681);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2051824);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6622025);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,23.31586);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.812952);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.65917);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.330172);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.349255);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.140842);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.095252);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.42598);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.882926);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.61804);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.087108);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.212326);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5158178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.13029);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.600155);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.001661);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.00289);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8429155);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6051303);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6722165);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5804548);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.489117);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4514614);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3961278);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3505157);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.364843);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1454198);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.41147);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2608584);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,111.4581);
   hCCpi0inFV_stack_10->SetBinContent(2,28.789);
   hCCpi0inFV_stack_10->SetBinContent(3,27.137);
   hCCpi0inFV_stack_10->SetBinContent(4,22.78516);
   hCCpi0inFV_stack_10->SetBinContent(5,19.34233);
   hCCpi0inFV_stack_10->SetBinContent(6,18.05467);
   hCCpi0inFV_stack_10->SetBinContent(7,17.36321);
   hCCpi0inFV_stack_10->SetBinContent(8,15.25556);
   hCCpi0inFV_stack_10->SetBinContent(9,7.728906);
   hCCpi0inFV_stack_10->SetBinContent(10,7.269983);
   hCCpi0inFV_stack_10->SetBinContent(11,6.33628);
   hCCpi0inFV_stack_10->SetBinContent(12,5.912541);
   hCCpi0inFV_stack_10->SetBinContent(13,4.293453);
   hCCpi0inFV_stack_10->SetBinContent(14,4.786628);
   hCCpi0inFV_stack_10->SetBinContent(15,3.151622);
   hCCpi0inFV_stack_10->SetBinContent(16,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(17,1.74481);
   hCCpi0inFV_stack_10->SetBinContent(18,2.144191);
   hCCpi0inFV_stack_10->SetBinContent(19,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(20,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(21,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(22,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(25,8.253448);
   hCCpi0inFV_stack_10->SetBinError(1,5.301621);
   hCCpi0inFV_stack_10->SetBinError(2,2.728612);
   hCCpi0inFV_stack_10->SetBinError(3,2.599112);
   hCCpi0inFV_stack_10->SetBinError(4,2.394312);
   hCCpi0inFV_stack_10->SetBinError(5,2.249952);
   hCCpi0inFV_stack_10->SetBinError(6,2.145266);
   hCCpi0inFV_stack_10->SetBinError(7,2.120471);
   hCCpi0inFV_stack_10->SetBinError(8,2.014612);
   hCCpi0inFV_stack_10->SetBinError(9,1.34533);
   hCCpi0inFV_stack_10->SetBinError(10,1.351515);
   hCCpi0inFV_stack_10->SetBinError(11,1.261702);
   hCCpi0inFV_stack_10->SetBinError(12,1.194746);
   hCCpi0inFV_stack_10->SetBinError(13,1.111161);
   hCCpi0inFV_stack_10->SetBinError(14,1.110302);
   hCCpi0inFV_stack_10->SetBinError(15,0.9389541);
   hCCpi0inFV_stack_10->SetBinError(16,0.785313);
   hCCpi0inFV_stack_10->SetBinError(17,0.6312172);
   hCCpi0inFV_stack_10->SetBinError(18,0.7850774);
   hCCpi0inFV_stack_10->SetBinError(19,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(20,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(21,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(22,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(23,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(25,1.448933);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,24.48126);
   hNCinFV_stack_11->SetBinContent(2,6.890482);
   hNCinFV_stack_11->SetBinContent(3,6.693767);
   hNCinFV_stack_11->SetBinContent(4,5.911977);
   hNCinFV_stack_11->SetBinContent(5,5.168833);
   hNCinFV_stack_11->SetBinContent(6,3.620943);
   hNCinFV_stack_11->SetBinContent(7,5.41204);
   hNCinFV_stack_11->SetBinContent(8,3.216286);
   hNCinFV_stack_11->SetBinContent(9,2.050601);
   hNCinFV_stack_11->SetBinContent(10,2.289344);
   hNCinFV_stack_11->SetBinContent(11,1.176911);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(15,1.176911);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,0.2436663);
   hNCinFV_stack_11->SetBinContent(25,1.268811);
   hNCinFV_stack_11->SetBinError(1,2.474728);
   hNCinFV_stack_11->SetBinError(2,1.301582);
   hNCinFV_stack_11->SetBinError(3,1.286631);
   hNCinFV_stack_11->SetBinError(4,1.225813);
   hNCinFV_stack_11->SetBinError(5,1.22644);
   hNCinFV_stack_11->SetBinError(6,0.8988449);
   hNCinFV_stack_11->SetBinError(7,1.225511);
   hNCinFV_stack_11->SetBinError(8,0.9615195);
   hNCinFV_stack_11->SetBinError(9,0.7068742);
   hNCinFV_stack_11->SetBinError(10,0.8330862);
   hNCinFV_stack_11->SetBinError(11,0.4804759);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(15,0.4804759);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.2022408);
   hNCinFV_stack_11->SetBinError(25,0.5889569);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,66.59009);
   hnumuCCinFV_stack_12->SetBinContent(2,28.9668);
   hnumuCCinFV_stack_12->SetBinContent(3,24.10527);
   hnumuCCinFV_stack_12->SetBinContent(4,20.88587);
   hnumuCCinFV_stack_12->SetBinContent(5,12.77586);
   hnumuCCinFV_stack_12->SetBinContent(6,7.639524);
   hnumuCCinFV_stack_12->SetBinContent(7,6.602666);
   hnumuCCinFV_stack_12->SetBinContent(8,4.817839);
   hnumuCCinFV_stack_12->SetBinContent(9,5.8575);
   hnumuCCinFV_stack_12->SetBinContent(10,4.963879);
   hnumuCCinFV_stack_12->SetBinContent(11,2.040672);
   hnumuCCinFV_stack_12->SetBinContent(12,3.150978);
   hnumuCCinFV_stack_12->SetBinContent(13,2.651303);
   hnumuCCinFV_stack_12->SetBinContent(14,2.193548);
   hnumuCCinFV_stack_12->SetBinContent(15,2.347251);
   hnumuCCinFV_stack_12->SetBinContent(16,0.9127283);
   hnumuCCinFV_stack_12->SetBinContent(17,1.476087);
   hnumuCCinFV_stack_12->SetBinContent(18,1.247171);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5689341);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7896006);
   hnumuCCinFV_stack_12->SetBinContent(21,1.413129);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9168548);
   hnumuCCinFV_stack_12->SetBinContent(23,0.6196149);
   hnumuCCinFV_stack_12->SetBinContent(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinContent(25,10.59623);
   hnumuCCinFV_stack_12->SetBinError(1,4.917969);
   hnumuCCinFV_stack_12->SetBinError(2,3.122337);
   hnumuCCinFV_stack_12->SetBinError(3,3.003543);
   hnumuCCinFV_stack_12->SetBinError(4,3.073169);
   hnumuCCinFV_stack_12->SetBinError(5,1.937916);
   hnumuCCinFV_stack_12->SetBinError(6,1.409705);
   hnumuCCinFV_stack_12->SetBinError(7,1.307205);
   hnumuCCinFV_stack_12->SetBinError(8,1.158959);
   hnumuCCinFV_stack_12->SetBinError(9,1.375851);
   hnumuCCinFV_stack_12->SetBinError(10,1.186254);
   hnumuCCinFV_stack_12->SetBinError(11,0.7461729);
   hnumuCCinFV_stack_12->SetBinError(12,0.862336);
   hnumuCCinFV_stack_12->SetBinError(13,0.8981142);
   hnumuCCinFV_stack_12->SetBinError(14,0.7625117);
   hnumuCCinFV_stack_12->SetBinError(15,0.8227622);
   hnumuCCinFV_stack_12->SetBinError(16,0.5342648);
   hnumuCCinFV_stack_12->SetBinError(17,0.7150017);
   hnumuCCinFV_stack_12->SetBinError(18,0.570083);
   hnumuCCinFV_stack_12->SetBinError(19,0.4099394);
   hnumuCCinFV_stack_12->SetBinError(20,0.4655379);
   hnumuCCinFV_stack_12->SetBinError(21,0.5894052);
   hnumuCCinFV_stack_12->SetBinError(22,0.5435619);
   hnumuCCinFV_stack_12->SetBinError(23,0.3585431);
   hnumuCCinFV_stack_12->SetBinError(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinError(25,1.98853);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,9.171651);
   hnueCCinFV_stack_13->SetBinContent(2,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(13,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,2.214995);
   hnueCCinFV_stack_13->SetBinError(2,0.2502081);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(13,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__8->SetBinContent(1,530.5358);
   hmcerror__8->SetBinContent(2,168.7086);
   hmcerror__8->SetBinContent(3,156.8915);
   hmcerror__8->SetBinContent(4,129.3622);
   hmcerror__8->SetBinContent(5,113.3854);
   hmcerror__8->SetBinContent(6,97.40961);
   hmcerror__8->SetBinContent(7,87.12698);
   hmcerror__8->SetBinContent(8,58.1179);
   hmcerror__8->SetBinContent(9,43.84898);
   hmcerror__8->SetBinContent(10,38.66891);
   hmcerror__8->SetBinContent(11,32.75529);
   hmcerror__8->SetBinContent(12,33.70269);
   hmcerror__8->SetBinContent(13,29.89141);
   hmcerror__8->SetBinContent(14,20.93032);
   hmcerror__8->SetBinContent(15,16.13827);
   hmcerror__8->SetBinContent(16,11.96345);
   hmcerror__8->SetBinContent(17,11.30404);
   hmcerror__8->SetBinContent(18,11.6095);
   hmcerror__8->SetBinContent(19,7.205667);
   hmcerror__8->SetBinContent(20,10.22211);
   hmcerror__8->SetBinContent(21,5.780425);
   hmcerror__8->SetBinContent(22,5.140665);
   hmcerror__8->SetBinContent(23,4.791634);
   hmcerror__8->SetBinContent(24,2.683098);
   hmcerror__8->SetBinContent(25,56.88093);
   hmcerror__8->SetBinError(1,106.7567);
   hmcerror__8->SetBinError(2,42.69809);
   hmcerror__8->SetBinError(3,42.17825);
   hmcerror__8->SetBinError(4,34.19696);
   hmcerror__8->SetBinError(5,28.57669);
   hmcerror__8->SetBinError(6,33.4793);
   hmcerror__8->SetBinError(7,27.61646);
   hmcerror__8->SetBinError(8,18.38338);
   hmcerror__8->SetBinError(9,17.42558);
   hmcerror__8->SetBinError(10,15.59457);
   hmcerror__8->SetBinError(11,13.67898);
   hmcerror__8->SetBinError(12,15.14315);
   hmcerror__8->SetBinError(13,14.17369);
   hmcerror__8->SetBinError(14,10.58424);
   hmcerror__8->SetBinError(15,10.34868);
   hmcerror__8->SetBinError(16,7.609665);
   hmcerror__8->SetBinError(17,9.510884);
   hmcerror__8->SetBinError(18,7.232311);
   hmcerror__8->SetBinError(19,5.496045);
   hmcerror__8->SetBinError(20,6.758888);
   hmcerror__8->SetBinError(21,5.801152);
   hmcerror__8->SetBinError(22,4.523592);
   hmcerror__8->SetBinError(23,6.252784);
   hmcerror__8->SetBinError(24,3.811301);
   hmcerror__8->SetBinError(25,22.43745);
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
   
   Double_t _fx3009[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3009[24] = {
   492,
   153,
   135,
   89,
   80,
   92,
   76,
   52,
   38,
   39,
   28,
   17,
   26,
   18,
   7,
   11,
   11,
   9,
   8,
   8,
   5,
   5,
   8,
   6};
   Double_t _felx3009[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3009[24] = {
   22.18107,
   12.36932,
   11.61895,
   9.5566,
   9.0683,
   9.7138,
   8.8425,
   7.3419,
   6.3013,
   6.3813,
   5.4358,
   4.2835,
   5.2453,
   4.4008,
   2.85954,
   3.4975,
   3.4975,
   3.19354,
   3.0307,
   3.0307,
   2.48995,
   2.48995,
   3.0307,
   2.67925};
   Double_t _fehx3009[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3009[24] = {
   22.18107,
   12.36932,
   11.61895,
   9.3552,
   8.8665,
   9.513,
   8.6406,
   7.1381,
   6.0955,
   6.1757,
   5.2271,
   4.0673,
   5.0358,
   4.1858,
   2.61053,
   3.27,
   3.27,
   2.9582,
   2.7896,
   2.7896,
   2.21064,
   2.21064,
   2.7896,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,99);
   Graph_Graph3009->SetMinimum(2.259045);
   Graph_Graph3009->SetMaximum(565.3482);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1413.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 274.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 312.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  281.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  70.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 310.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 72.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 203.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
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
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3010[24] = {
   0.2012242,
   0.2530878,
   0.268837,
   0.2643504,
   0.2520314,
   0.343696,
   0.316968,
   0.3163119,
   0.3973998,
   0.4032845,
   0.4176115,
   0.4493158,
   0.4741726,
   0.5056894,
   0.6412511,
   0.6360761,
   0.8413704,
   0.6229647,
   0.7627391,
   0.6612027,
   1.003586,
   0.8799624,
   1.304938,
   1.420485};
   Double_t _fehx3010[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3010[24] = {
   0.2012242,
   0.2530878,
   0.268837,
   0.2643504,
   0.2520314,
   0.343696,
   0.316968,
   0.3163119,
   0.3973998,
   0.4032845,
   0.4176115,
   0.4493158,
   0.4741726,
   0.5056894,
   0.6412511,
   0.6360761,
   0.8413704,
   0.6229647,
   0.7627391,
   0.6612027,
   1.003586,
   0.8799624,
   1.304938,
   1.420485};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,99);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3011[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
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
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3011[24] = {
   0.1815719,
   0.214891,
   0.2043802,
   0.1990423,
   0.1855953,
   0.1981733,
   0.1935998,
   0.2175898,
   0.2052624,
   0.1947533,
   0.2136869,
   0.172722,
   0.2437914,
   0.2147496,
   0.2326221,
   0.2796005,
   0.2414691,
   0.2460412,
   0.2809661,
   0.3039951,
   0.3151104,
   0.2927998,
   0.3194805,
   0.4688789};
   Double_t _fehx3011[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3011[24] = {
   0.1815719,
   0.214891,
   0.2043802,
   0.1990423,
   0.1855953,
   0.1981733,
   0.1935998,
   0.2175898,
   0.2052624,
   0.1947533,
   0.2136869,
   0.172722,
   0.2437914,
   0.2147496,
   0.2326221,
   0.2796005,
   0.2414691,
   0.2460412,
   0.2809661,
   0.3039951,
   0.3151104,
   0.2927998,
   0.3194805,
   0.4688789};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,99);
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
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3012[24] = {
   0.9273643,
   0.9068889,
   0.8604672,
   0.6879906,
   0.7055582,
   0.9444654,
   0.87229,
   0.894733,
   0.8666108,
   1.008562,
   0.8548238,
   0.5044108,
   0.869815,
   0.8599964,
   0.4337517,
   0.9194672,
   0.9731034,
   0.7752269,
   1.110237,
   0.7826171,
   0.8649883,
   0.9726368,
   1.669577,
   2.236221};
   Double_t _felx3012[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3012[24] = {
   0.04180881,
   0.07331762,
   0.07405723,
   0.07387473,
   0.07997766,
   0.09972117,
   0.1014898,
   0.1263277,
   0.1437046,
   0.165024,
   0.1659518,
   0.1270967,
   0.1754785,
   0.2102596,
   0.17719,
   0.2923488,
   0.3094027,
   0.2750798,
   0.4205995,
   0.2964847,
   0.4307555,
   0.4843634,
   0.6324983,
   0.9985657};
   Double_t _fehx3012[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3012[24] = {
   0.04180881,
   0.07331762,
   0.07405723,
   0.07231786,
   0.07819789,
   0.09765977,
   0.09917249,
   0.122821,
   0.1390112,
   0.1597071,
   0.1595803,
   0.1206818,
   0.1684698,
   0.1999874,
   0.1617603,
   0.2733325,
   0.2892771,
   0.2548085,
   0.3871397,
   0.2728986,
   0.3824355,
   0.43003,
   0.5821814,
   0.9014131};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,99);
   Graph_Graph3012->SetMinimum(0.2309055);
   Graph_Graph3012->SetMaximum(3.425741);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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

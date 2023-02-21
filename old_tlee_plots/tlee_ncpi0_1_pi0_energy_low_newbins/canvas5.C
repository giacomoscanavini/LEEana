#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 19:43:28 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
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
   pad1->Range(-46.15385,-8.130474,338.4615,899.0593);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__13->SetBinContent(1,247.325);
   hmc__13->SetBinContent(2,364.2568);
   hmc__13->SetBinContent(3,406.5237);
   hmc__13->SetBinContent(4,389.9236);
   hmc__13->SetBinContent(5,337.4448);
   hmc__13->SetBinContent(6,286.3294);
   hmc__13->SetBinContent(7,219.2493);
   hmc__13->SetBinContent(8,180.4703);
   hmc__13->SetBinContent(9,126.4977);
   hmc__13->SetBinContent(10,104.3846);
   hmc__13->SetBinContent(11,82.78804);
   hmc__13->SetBinContent(12,62.67308);
   hmc__13->SetBinContent(13,58.51221);
   hmc__13->SetBinContent(14,35.73431);
   hmc__13->SetBinContent(15,33.66003);
   hmc__13->SetBinContent(16,24.72269);
   hmc__13->SetBinContent(17,17.68779);
   hmc__13->SetBinContent(18,16.38427);
   hmc__13->SetBinContent(19,14.34009);
   hmc__13->SetBinContent(20,9.135443);
   hmc__13->SetBinContent(21,31.60131);
   hmc__13->SetBinError(1,65.47207);
   hmc__13->SetBinError(2,113.218);
   hmc__13->SetBinError(3,146.3588);
   hmc__13->SetBinError(4,145.4824);
   hmc__13->SetBinError(5,130.3079);
   hmc__13->SetBinError(6,109.7666);
   hmc__13->SetBinError(7,94.18757);
   hmc__13->SetBinError(8,68.31329);
   hmc__13->SetBinError(9,47.61098);
   hmc__13->SetBinError(10,39.98035);
   hmc__13->SetBinError(11,33.72344);
   hmc__13->SetBinError(12,24.46954);
   hmc__13->SetBinError(13,24.22923);
   hmc__13->SetBinError(14,19.6614);
   hmc__13->SetBinError(15,19.85672);
   hmc__13->SetBinError(16,13.16953);
   hmc__13->SetBinError(17,19.34364);
   hmc__13->SetBinError(18,9.207123);
   hmc__13->SetBinError(19,15.95943);
   hmc__13->SetBinError(20,8.891537);
   hmc__13->SetBinError(21,20.53204);
   hmc__13->SetMinimum(-8.130474);
   hmc__13->SetMaximum(853.6998);
   hmc__13->SetEntries(3516.85);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,300);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(426.85);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,4.055562);
   hbadmatch_stack_1->SetBinContent(2,11.88455);
   hbadmatch_stack_1->SetBinContent(3,6.980662);
   hbadmatch_stack_1->SetBinContent(4,11.99939);
   hbadmatch_stack_1->SetBinContent(5,9.648619);
   hbadmatch_stack_1->SetBinContent(6,8.47131);
   hbadmatch_stack_1->SetBinContent(7,4.960046);
   hbadmatch_stack_1->SetBinContent(8,2.997126);
   hbadmatch_stack_1->SetBinContent(9,3.544581);
   hbadmatch_stack_1->SetBinContent(10,3.046816);
   hbadmatch_stack_1->SetBinContent(11,3.020648);
   hbadmatch_stack_1->SetBinContent(12,1.287406);
   hbadmatch_stack_1->SetBinContent(13,1.034961);
   hbadmatch_stack_1->SetBinContent(14,0.1019266);
   hbadmatch_stack_1->SetBinContent(15,0.7723586);
   hbadmatch_stack_1->SetBinContent(16,0.5540816);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.6803553);
   hbadmatch_stack_1->SetBinContent(19,0.3824374);
   hbadmatch_stack_1->SetBinContent(21,0.2552519);
   hbadmatch_stack_1->SetBinError(1,1.091332);
   hbadmatch_stack_1->SetBinError(2,1.717809);
   hbadmatch_stack_1->SetBinError(3,1.280165);
   hbadmatch_stack_1->SetBinError(4,2.651414);
   hbadmatch_stack_1->SetBinError(5,1.543497);
   hbadmatch_stack_1->SetBinError(6,1.881899);
   hbadmatch_stack_1->SetBinError(7,1.089468);
   hbadmatch_stack_1->SetBinError(8,0.8711193);
   hbadmatch_stack_1->SetBinError(9,1.098687);
   hbadmatch_stack_1->SetBinError(10,0.9210633);
   hbadmatch_stack_1->SetBinError(11,0.8981055);
   hbadmatch_stack_1->SetBinError(12,0.6665608);
   hbadmatch_stack_1->SetBinError(13,0.5506425);
   hbadmatch_stack_1->SetBinError(14,0.1019266);
   hbadmatch_stack_1->SetBinError(15,0.6569696);
   hbadmatch_stack_1->SetBinError(16,0.4018404);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.4810838);
   hbadmatch_stack_1->SetBinError(19,0.2705358);
   hbadmatch_stack_1->SetBinError(21,0.255252);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,30.17148);
   hext_stack_2->SetBinContent(2,47.35345);
   hext_stack_2->SetBinContent(3,42.15868);
   hext_stack_2->SetBinContent(4,47.05217);
   hext_stack_2->SetBinContent(5,29.03671);
   hext_stack_2->SetBinContent(6,23.63282);
   hext_stack_2->SetBinContent(7,15.53126);
   hext_stack_2->SetBinContent(8,13.8083);
   hext_stack_2->SetBinContent(9,7.26965);
   hext_stack_2->SetBinContent(10,4.468179);
   hext_stack_2->SetBinContent(11,1.868591);
   hext_stack_2->SetBinContent(12,4.919439);
   hext_stack_2->SetBinContent(13,2.103607);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,1.868591);
   hext_stack_2->SetBinError(1,3.934137);
   hext_stack_2->SetBinError(2,4.732875);
   hext_stack_2->SetBinError(3,4.536656);
   hext_stack_2->SetBinError(4,4.846971);
   hext_stack_2->SetBinError(5,3.65716);
   hext_stack_2->SetBinError(6,3.488774);
   hext_stack_2->SetBinError(7,2.683527);
   hext_stack_2->SetBinError(8,2.623421);
   hext_stack_2->SetBinError(9,1.89115);
   hext_stack_2->SetBinError(10,1.297469);
   hext_stack_2->SetBinError(11,0.840497);
   hext_stack_2->SetBinError(12,1.563138);
   hext_stack_2->SetBinError(13,0.9761052);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,1.283228);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.840497);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,1.291893);
   hdirt_stack_3->SetBinContent(2,4.478363);
   hdirt_stack_3->SetBinContent(3,3.551633);
   hdirt_stack_3->SetBinContent(4,1.954383);
   hdirt_stack_3->SetBinContent(5,1.943102);
   hdirt_stack_3->SetBinContent(6,0.8086942);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,0.5529928);
   hdirt_stack_3->SetBinContent(9,0.620937);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinError(1,0.6266022);
   hdirt_stack_3->SetBinError(2,1.076059);
   hdirt_stack_3->SetBinError(3,0.9621638);
   hdirt_stack_3->SetBinError(4,0.7128235);
   hdirt_stack_3->SetBinError(5,1.020451);
   hdirt_stack_3->SetBinError(6,0.4749675);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.437291);
   hdirt_stack_3->SetBinError(9,0.3928946);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,19.78953);
   houtFV_stack_4->SetBinContent(2,25.90184);
   houtFV_stack_4->SetBinContent(3,29.41941);
   houtFV_stack_4->SetBinContent(4,26.80554);
   houtFV_stack_4->SetBinContent(5,24.52125);
   houtFV_stack_4->SetBinContent(6,17.23273);
   houtFV_stack_4->SetBinContent(7,13.81344);
   houtFV_stack_4->SetBinContent(8,9.125855);
   houtFV_stack_4->SetBinContent(9,6.62111);
   houtFV_stack_4->SetBinContent(10,5.769717);
   houtFV_stack_4->SetBinContent(11,6.241883);
   houtFV_stack_4->SetBinContent(12,4.038942);
   houtFV_stack_4->SetBinContent(13,4.93289);
   houtFV_stack_4->SetBinContent(14,2.327627);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,1.563755);
   houtFV_stack_4->SetBinContent(17,1.718585);
   houtFV_stack_4->SetBinContent(18,0.9622007);
   houtFV_stack_4->SetBinContent(19,0.536893);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,1.209506);
   houtFV_stack_4->SetBinError(1,2.235516);
   houtFV_stack_4->SetBinError(2,2.5109);
   houtFV_stack_4->SetBinError(3,2.659038);
   houtFV_stack_4->SetBinError(4,2.508732);
   houtFV_stack_4->SetBinError(5,2.519015);
   houtFV_stack_4->SetBinError(6,2.140612);
   houtFV_stack_4->SetBinError(7,1.850399);
   houtFV_stack_4->SetBinError(8,1.458883);
   houtFV_stack_4->SetBinError(9,1.207574);
   houtFV_stack_4->SetBinError(10,1.24183);
   houtFV_stack_4->SetBinError(11,1.278117);
   houtFV_stack_4->SetBinError(12,1.234082);
   houtFV_stack_4->SetBinError(13,1.158969);
   houtFV_stack_4->SetBinError(14,0.7981776);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.6050844);
   houtFV_stack_4->SetBinError(17,0.6705264);
   houtFV_stack_4->SetBinError(18,0.6845393);
   houtFV_stack_4->SetBinError(19,0.3929602);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.7382896);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5413898);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.05019);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3315024);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3792812);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4725167);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4822739);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.295808);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3419155);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5226837);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5769333);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1108319);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1904395);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.115478);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2345077);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3650314);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1008456);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1695004);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2141253);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1600746);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1589871);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1911548);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2583811);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2823895);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.0610349);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1649167);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.07154223);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5603426);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.068833);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.131207);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.20835);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.715531);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.548428);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.07615);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3436564);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.454925);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.07013618);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08808299);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.190892);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2003125);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1870542);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2409243);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4086357);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4422151);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3674148);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3885095);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2564007);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1365931);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1870319);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03514905);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0402437);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1769124);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1406579);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01677029);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,56.50035);
   hNCpi0inFVres_stack_7->SetBinContent(2,105.6022);
   hNCpi0inFVres_stack_7->SetBinContent(3,143.9496);
   hNCpi0inFVres_stack_7->SetBinContent(4,146.575);
   hNCpi0inFVres_stack_7->SetBinContent(5,124.8746);
   hNCpi0inFVres_stack_7->SetBinContent(6,102.4021);
   hNCpi0inFVres_stack_7->SetBinContent(7,81.59056);
   hNCpi0inFVres_stack_7->SetBinContent(8,64.77878);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.61767);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.61248);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.10032);
   hNCpi0inFVres_stack_7->SetBinContent(12,19.46472);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.44998);
   hNCpi0inFVres_stack_7->SetBinContent(14,11.1265);
   hNCpi0inFVres_stack_7->SetBinContent(15,11.18486);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.922668);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.820312);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.862329);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.510993);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.343613);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.381865);
   hNCpi0inFVres_stack_7->SetBinError(1,2.470653);
   hNCpi0inFVres_stack_7->SetBinError(2,3.006102);
   hNCpi0inFVres_stack_7->SetBinError(3,3.752981);
   hNCpi0inFVres_stack_7->SetBinError(4,3.616654);
   hNCpi0inFVres_stack_7->SetBinError(5,3.177438);
   hNCpi0inFVres_stack_7->SetBinError(6,2.891729);
   hNCpi0inFVres_stack_7->SetBinError(7,2.768927);
   hNCpi0inFVres_stack_7->SetBinError(8,2.487762);
   hNCpi0inFVres_stack_7->SetBinError(9,1.918859);
   hNCpi0inFVres_stack_7->SetBinError(10,1.86097);
   hNCpi0inFVres_stack_7->SetBinError(11,1.654143);
   hNCpi0inFVres_stack_7->SetBinError(12,1.330727);
   hNCpi0inFVres_stack_7->SetBinError(13,1.360786);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9802913);
   hNCpi0inFVres_stack_7->SetBinError(15,1.276763);
   hNCpi0inFVres_stack_7->SetBinError(16,1.040435);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8177254);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6339999);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7394717);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6103094);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9236225);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.03708);
   hNCpi0inFVdis_stack_8->SetBinContent(2,23.93744);
   hNCpi0inFVdis_stack_8->SetBinContent(3,30.92104);
   hNCpi0inFVdis_stack_8->SetBinContent(4,27.47403);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.23532);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.39663);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.31045);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.94077);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.565559);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.999569);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.696975);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.46944);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.057418);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.60633);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.087669);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.966016);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9788272);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.244384);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.216879);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.614213);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.742601);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.28813);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.567729);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.809547);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.60169);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.749111);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.455554);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.221872);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.548874);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8397561);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9939124);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.789648);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.069391);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8462371);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8531019);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.028955);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8084911);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2735677);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3719475);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6178352);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7103156);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.141948);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08644525);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3103058);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2280734);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.147043);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03876996);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1535685);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1379209);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.113012);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,21.8635);
   hCCpi0inFV_stack_10->SetBinContent(2,44.34934);
   hCCpi0inFV_stack_10->SetBinContent(3,61.58939);
   hCCpi0inFV_stack_10->SetBinContent(4,63.29901);
   hCCpi0inFV_stack_10->SetBinContent(5,66.43837);
   hCCpi0inFV_stack_10->SetBinContent(6,58.54691);
   hCCpi0inFV_stack_10->SetBinContent(7,46.25446);
   hCCpi0inFV_stack_10->SetBinContent(8,36.02771);
   hCCpi0inFV_stack_10->SetBinContent(9,25.62844);
   hCCpi0inFV_stack_10->SetBinContent(10,22.20979);
   hCCpi0inFV_stack_10->SetBinContent(11,16.74897);
   hCCpi0inFV_stack_10->SetBinContent(12,12.55226);
   hCCpi0inFV_stack_10->SetBinContent(13,9.634333);
   hCCpi0inFV_stack_10->SetBinContent(14,6.353589);
   hCCpi0inFV_stack_10->SetBinContent(15,4.591603);
   hCCpi0inFV_stack_10->SetBinContent(16,4.26627);
   hCCpi0inFV_stack_10->SetBinContent(17,2.984305);
   hCCpi0inFV_stack_10->SetBinContent(18,2.889025);
   hCCpi0inFV_stack_10->SetBinContent(19,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(20,2.199135);
   hCCpi0inFV_stack_10->SetBinContent(21,5.750418);
   hCCpi0inFV_stack_10->SetBinError(1,2.375216);
   hCCpi0inFV_stack_10->SetBinError(2,3.349288);
   hCCpi0inFV_stack_10->SetBinError(3,3.982745);
   hCCpi0inFV_stack_10->SetBinError(4,3.957881);
   hCCpi0inFV_stack_10->SetBinError(5,4.106224);
   hCCpi0inFV_stack_10->SetBinError(6,3.873895);
   hCCpi0inFV_stack_10->SetBinError(7,3.426499);
   hCCpi0inFV_stack_10->SetBinError(8,2.966735);
   hCCpi0inFV_stack_10->SetBinError(9,2.463011);
   hCCpi0inFV_stack_10->SetBinError(10,2.385105);
   hCCpi0inFV_stack_10->SetBinError(11,2.076786);
   hCCpi0inFV_stack_10->SetBinError(12,1.827402);
   hCCpi0inFV_stack_10->SetBinError(13,1.578431);
   hCCpi0inFV_stack_10->SetBinError(14,1.240845);
   hCCpi0inFV_stack_10->SetBinError(15,1.09304);
   hCCpi0inFV_stack_10->SetBinError(16,1.02324);
   hCCpi0inFV_stack_10->SetBinError(17,0.8560416);
   hCCpi0inFV_stack_10->SetBinError(18,0.7845188);
   hCCpi0inFV_stack_10->SetBinError(19,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(20,0.7607114);
   hCCpi0inFV_stack_10->SetBinError(21,1.216136);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,29.28929);
   hNCinFV_stack_11->SetBinContent(2,25.40553);
   hNCinFV_stack_11->SetBinContent(3,25.28547);
   hNCinFV_stack_11->SetBinContent(4,21.81761);
   hNCinFV_stack_11->SetBinContent(5,21.64575);
   hNCinFV_stack_11->SetBinContent(6,20.08239);
   hNCinFV_stack_11->SetBinContent(7,17.44127);
   hNCinFV_stack_11->SetBinContent(8,16.97898);
   hNCinFV_stack_11->SetBinContent(9,16.32979);
   hNCinFV_stack_11->SetBinContent(10,14.83334);
   hNCinFV_stack_11->SetBinContent(11,14.47742);
   hNCinFV_stack_11->SetBinContent(12,6.232954);
   hNCinFV_stack_11->SetBinContent(13,10.92558);
   hNCinFV_stack_11->SetBinContent(14,7.264018);
   hNCinFV_stack_11->SetBinContent(15,7.716954);
   hNCinFV_stack_11->SetBinContent(16,3.965259);
   hNCinFV_stack_11->SetBinContent(17,5.767188);
   hNCinFV_stack_11->SetBinContent(18,5.03217);
   hNCinFV_stack_11->SetBinContent(19,5.107408);
   hNCinFV_stack_11->SetBinContent(20,1.138687);
   hNCinFV_stack_11->SetBinContent(21,6.678088);
   hNCinFV_stack_11->SetBinError(1,2.785239);
   hNCinFV_stack_11->SetBinError(2,2.533175);
   hNCinFV_stack_11->SetBinError(3,2.508035);
   hNCinFV_stack_11->SetBinError(4,2.558893);
   hNCinFV_stack_11->SetBinError(5,2.319743);
   hNCinFV_stack_11->SetBinError(6,2.376064);
   hNCinFV_stack_11->SetBinError(7,2.179326);
   hNCinFV_stack_11->SetBinError(8,1.998982);
   hNCinFV_stack_11->SetBinError(9,2.278937);
   hNCinFV_stack_11->SetBinError(10,2.320633);
   hNCinFV_stack_11->SetBinError(11,2.343048);
   hNCinFV_stack_11->SetBinError(12,1.238151);
   hNCinFV_stack_11->SetBinError(13,2.242679);
   hNCinFV_stack_11->SetBinError(14,1.648376);
   hNCinFV_stack_11->SetBinError(15,1.863437);
   hNCinFV_stack_11->SetBinError(16,1.364455);
   hNCinFV_stack_11->SetBinError(17,1.617135);
   hNCinFV_stack_11->SetBinError(18,1.341225);
   hNCinFV_stack_11->SetBinError(19,1.475032);
   hNCinFV_stack_11->SetBinError(20,0.5346854);
   hNCinFV_stack_11->SetBinError(21,1.565201);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,66.8737);
   hnumuCCinFV_stack_12->SetBinContent(2,67.3708);
   hnumuCCinFV_stack_12->SetBinContent(3,56.85298);
   hnumuCCinFV_stack_12->SetBinContent(4,38.14614);
   hnumuCCinFV_stack_12->SetBinContent(5,29.95136);
   hnumuCCinFV_stack_12->SetBinContent(6,32.12753);
   hnumuCCinFV_stack_12->SetBinContent(7,20.71174);
   hnumuCCinFV_stack_12->SetBinContent(8,16.25697);
   hnumuCCinFV_stack_12->SetBinContent(9,13.25198);
   hnumuCCinFV_stack_12->SetBinContent(10,7.260735);
   hnumuCCinFV_stack_12->SetBinContent(11,6.89941);
   hnumuCCinFV_stack_12->SetBinContent(12,6.109012);
   hnumuCCinFV_stack_12->SetBinContent(13,7.478621);
   hnumuCCinFV_stack_12->SetBinContent(14,3.885729);
   hnumuCCinFV_stack_12->SetBinContent(15,3.529763);
   hnumuCCinFV_stack_12->SetBinContent(16,1.91052);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(18,1.713804);
   hnumuCCinFV_stack_12->SetBinContent(19,1.304349);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9801958);
   hnumuCCinFV_stack_12->SetBinContent(21,3.358041);
   hnumuCCinFV_stack_12->SetBinError(1,4.984791);
   hnumuCCinFV_stack_12->SetBinError(2,4.989578);
   hnumuCCinFV_stack_12->SetBinError(3,5.079735);
   hnumuCCinFV_stack_12->SetBinError(4,3.394649);
   hnumuCCinFV_stack_12->SetBinError(5,3.018828);
   hnumuCCinFV_stack_12->SetBinError(6,3.244802);
   hnumuCCinFV_stack_12->SetBinError(7,2.460316);
   hnumuCCinFV_stack_12->SetBinError(8,2.260477);
   hnumuCCinFV_stack_12->SetBinError(9,1.832981);
   hnumuCCinFV_stack_12->SetBinError(10,1.376125);
   hnumuCCinFV_stack_12->SetBinError(11,1.435041);
   hnumuCCinFV_stack_12->SetBinError(12,1.2477);
   hnumuCCinFV_stack_12->SetBinError(13,1.417277);
   hnumuCCinFV_stack_12->SetBinError(14,0.9824164);
   hnumuCCinFV_stack_12->SetBinError(15,0.9079317);
   hnumuCCinFV_stack_12->SetBinError(16,0.6511312);
   hnumuCCinFV_stack_12->SetBinError(17,0.438694);
   hnumuCCinFV_stack_12->SetBinError(18,0.6207051);
   hnumuCCinFV_stack_12->SetBinError(19,0.6016599);
   hnumuCCinFV_stack_12->SetBinError(20,0.4383608);
   hnumuCCinFV_stack_12->SetBinError(21,0.9288399);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,2.34387);
   hnueCCinFV_stack_13->SetBinContent(2,5.835389);
   hnueCCinFV_stack_13->SetBinContent(3,3.265743);
   hnueCCinFV_stack_13->SetBinContent(4,1.902295);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.4505813);
   hnueCCinFV_stack_13->SetBinContent(7,0.7898474);
   hnueCCinFV_stack_13->SetBinContent(8,1.280777);
   hnueCCinFV_stack_13->SetBinContent(9,1.070405);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(13,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(14,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.7667879);
   hnueCCinFV_stack_13->SetBinError(2,1.965546);
   hnueCCinFV_stack_13->SetBinError(3,1.394478);
   hnueCCinFV_stack_13->SetBinError(4,0.7375446);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.3211617);
   hnueCCinFV_stack_13->SetBinError(7,0.3949794);
   hnueCCinFV_stack_13->SetBinError(8,0.6537789);
   hnueCCinFV_stack_13->SetBinError(9,0.5545368);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2758068);
   hnueCCinFV_stack_13->SetBinError(13,0.3397478);
   hnueCCinFV_stack_13->SetBinError(14,0.2486649);
   hnueCCinFV_stack_13->SetBinError(19,0.2171002);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__14->SetBinContent(1,247.325);
   hmcerror__14->SetBinContent(2,364.2568);
   hmcerror__14->SetBinContent(3,406.5237);
   hmcerror__14->SetBinContent(4,389.9236);
   hmcerror__14->SetBinContent(5,337.4448);
   hmcerror__14->SetBinContent(6,286.3294);
   hmcerror__14->SetBinContent(7,219.2493);
   hmcerror__14->SetBinContent(8,180.4703);
   hmcerror__14->SetBinContent(9,126.4977);
   hmcerror__14->SetBinContent(10,104.3846);
   hmcerror__14->SetBinContent(11,82.78804);
   hmcerror__14->SetBinContent(12,62.67308);
   hmcerror__14->SetBinContent(13,58.51221);
   hmcerror__14->SetBinContent(14,35.73431);
   hmcerror__14->SetBinContent(15,33.66003);
   hmcerror__14->SetBinContent(16,24.72269);
   hmcerror__14->SetBinContent(17,17.68779);
   hmcerror__14->SetBinContent(18,16.38427);
   hmcerror__14->SetBinContent(19,14.34009);
   hmcerror__14->SetBinContent(20,9.135443);
   hmcerror__14->SetBinContent(21,31.60131);
   hmcerror__14->SetBinError(1,65.47207);
   hmcerror__14->SetBinError(2,113.218);
   hmcerror__14->SetBinError(3,146.3588);
   hmcerror__14->SetBinError(4,145.4824);
   hmcerror__14->SetBinError(5,130.3079);
   hmcerror__14->SetBinError(6,109.7666);
   hmcerror__14->SetBinError(7,94.18757);
   hmcerror__14->SetBinError(8,68.31329);
   hmcerror__14->SetBinError(9,47.61098);
   hmcerror__14->SetBinError(10,39.98035);
   hmcerror__14->SetBinError(11,33.72344);
   hmcerror__14->SetBinError(12,24.46954);
   hmcerror__14->SetBinError(13,24.22923);
   hmcerror__14->SetBinError(14,19.6614);
   hmcerror__14->SetBinError(15,19.85672);
   hmcerror__14->SetBinError(16,13.16953);
   hmcerror__14->SetBinError(17,19.34364);
   hmcerror__14->SetBinError(18,9.207123);
   hmcerror__14->SetBinError(19,15.95943);
   hmcerror__14->SetBinError(20,8.891537);
   hmcerror__14->SetBinError(21,20.53204);
   hmcerror__14->SetEntries(3516.85);

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
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3017[20] = {
   222,
   303,
   401,
   332,
   327,
   261,
   185,
   156,
   118,
   80,
   63,
   45,
   25,
   23,
   17,
   12,
   12,
   8,
   5,
   6};
   Double_t _felx3017[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3017[20] = {
   14.89966,
   17.4069,
   20.02498,
   18.22087,
   18.08314,
   16.15549,
   13.60147,
   12.49,
   10.86278,
   9.0683,
   8.0648,
   6.8416,
   5.1474,
   4.9457,
   4.2835,
   3.64022,
   3.64022,
   3.0307,
   2.48995,
   2.67925};
   Double_t _fehx3017[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3017[20] = {
   14.89966,
   17.4069,
   20.02498,
   18.22087,
   18.08314,
   16.15549,
   13.60147,
   12.49,
   10.86278,
   8.8665,
   7.862,
   6.637,
   4.9374,
   4.7346,
   4.0673,
   3.4155,
   3.4155,
   2.7896,
   2.21064,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,330);
   Graph_Graph3017->SetMinimum(2.259045);
   Graph_Graph3017->SetMaximum(462.8765);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2601.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 275.0","F");

   ci = 1487;
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

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 201.9","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1011.3","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  229.8","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 510.1","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 276.7","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.3","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.0","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
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
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3018[20] = {
   0.2647207,
   0.3108192,
   0.3600253,
   0.373105,
   0.3861606,
   0.3833576,
   0.4295913,
   0.3785292,
   0.3763782,
   0.3830101,
   0.4073467,
   0.3904315,
   0.4140884,
   0.5502107,
   0.5899198,
   0.5326898,
   1.093616,
   0.561949,
   1.112924,
   0.9733012};
   Double_t _fehx3018[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3018[20] = {
   0.2647207,
   0.3108192,
   0.3600253,
   0.373105,
   0.3861606,
   0.3833576,
   0.4295913,
   0.3785292,
   0.3763782,
   0.3830101,
   0.4073467,
   0.3904315,
   0.4140884,
   0.5502107,
   0.5899198,
   0.5326898,
   1.093616,
   0.561949,
   1.112924,
   0.9733012};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,330);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
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
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
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
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3019[20] = {
   0.2195867,
   0.2945808,
   0.3489648,
   0.3635027,
   0.3703534,
   0.3687684,
   0.3816557,
   0.3398475,
   0.3453792,
   0.3184946,
   0.3090436,
   0.2860698,
   0.2833813,
   0.2992234,
   0.2929739,
   0.2651606,
   0.298046,
   0.2879419,
   0.3298588,
   0.3328033};
   Double_t _fehx3019[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3019[20] = {
   0.2195867,
   0.2945808,
   0.3489648,
   0.3635027,
   0.3703534,
   0.3687684,
   0.3816557,
   0.3398475,
   0.3453792,
   0.3184946,
   0.3090436,
   0.2860698,
   0.2833813,
   0.2992234,
   0.2929739,
   0.2651606,
   0.298046,
   0.2879419,
   0.3298588,
   0.3328033};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,330);
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
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3020[20] = {
   0.8976042,
   0.8318308,
   0.9864123,
   0.8514489,
   0.9690474,
   0.9115375,
   0.8437885,
   0.8644081,
   0.9328232,
   0.7663966,
   0.7609795,
   0.7180116,
   0.4272613,
   0.6436392,
   0.50505,
   0.4853841,
   0.678434,
   0.4882733,
   0.3486728,
   0.6567826};
   Double_t _felx3020[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3020[20] = {
   0.06024325,
   0.04778743,
   0.04925908,
   0.04672933,
   0.05358844,
   0.05642276,
   0.06203656,
   0.06920804,
   0.08587334,
   0.08687393,
   0.09741504,
   0.1091633,
   0.08797139,
   0.138402,
   0.1272578,
   0.1472421,
   0.2058041,
   0.1849762,
   0.1736356,
   0.2932808};
   Double_t _fehx3020[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3020[20] = {
   0.06024325,
   0.04778743,
   0.04925908,
   0.04672933,
   0.05358844,
   0.05642276,
   0.06203656,
   0.06920804,
   0.08587334,
   0.0849407,
   0.09496541,
   0.1058987,
   0.08438239,
   0.1324945,
   0.1208347,
   0.1381524,
   0.1930993,
   0.1702609,
   0.154158,
   0.2647469};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,330);
   Graph_Graph3020->SetMinimum(0.0889738);
   Graph_Graph3020->SetMaximum(1.121735);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 19:43:28 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
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
   pad1->Range(-46.15385,-11.48,338.4615,1269.446);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__10->SetBinContent(1,311.8759);
   hmc__10->SetBinContent(2,495.0599);
   hmc__10->SetBinContent(3,503.8326);
   hmc__10->SetBinContent(4,467.4095);
   hmc__10->SetBinContent(5,402.9458);
   hmc__10->SetBinContent(6,341.1164);
   hmc__10->SetBinContent(7,283.6121);
   hmc__10->SetBinContent(8,217.944);
   hmc__10->SetBinContent(9,165.1483);
   hmc__10->SetBinContent(10,139.4172);
   hmc__10->SetBinContent(11,93.32204);
   hmc__10->SetBinContent(12,74.0582);
   hmc__10->SetBinContent(13,56.92696);
   hmc__10->SetBinContent(14,42.42514);
   hmc__10->SetBinContent(15,27.69009);
   hmc__10->SetBinContent(16,23.84051);
   hmc__10->SetBinContent(17,15.70649);
   hmc__10->SetBinContent(18,10.49273);
   hmc__10->SetBinContent(19,14.98501);
   hmc__10->SetBinContent(20,9.368258);
   hmc__10->SetBinContent(21,32.2823);
   hmc__10->SetBinError(1,85.59564);
   hmc__10->SetBinError(2,103.6015);
   hmc__10->SetBinError(3,110.2588);
   hmc__10->SetBinError(4,102.0373);
   hmc__10->SetBinError(5,88.83025);
   hmc__10->SetBinError(6,89.44671);
   hmc__10->SetBinError(7,72.47585);
   hmc__10->SetBinError(8,56.19987);
   hmc__10->SetBinError(9,45.69552);
   hmc__10->SetBinError(10,38.2558);
   hmc__10->SetBinError(11,28.16523);
   hmc__10->SetBinError(12,25.06352);
   hmc__10->SetBinError(13,22.48873);
   hmc__10->SetBinError(14,19.0477);
   hmc__10->SetBinError(15,14.88415);
   hmc__10->SetBinError(16,13.51273);
   hmc__10->SetBinError(17,10.20129);
   hmc__10->SetBinError(18,6.001711);
   hmc__10->SetBinError(19,14.1304);
   hmc__10->SetBinError(20,7.995346);
   hmc__10->SetBinError(21,15.34981);
   hmc__10->SetMinimum(-11.48);
   hmc__10->SetMaximum(1205.4);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,300);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(529.0243);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,7.473525);
   hbadmatch_stack_1->SetBinContent(2,13.6033);
   hbadmatch_stack_1->SetBinContent(3,14.4203);
   hbadmatch_stack_1->SetBinContent(4,13.55966);
   hbadmatch_stack_1->SetBinContent(5,11.82389);
   hbadmatch_stack_1->SetBinContent(6,11.16828);
   hbadmatch_stack_1->SetBinContent(7,7.629203);
   hbadmatch_stack_1->SetBinContent(8,5.586545);
   hbadmatch_stack_1->SetBinContent(9,3.35758);
   hbadmatch_stack_1->SetBinContent(10,2.338886);
   hbadmatch_stack_1->SetBinContent(11,1.127039);
   hbadmatch_stack_1->SetBinContent(12,1.1849);
   hbadmatch_stack_1->SetBinContent(13,0.9711068);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.9112529);
   hbadmatch_stack_1->SetBinContent(16,0.5143721);
   hbadmatch_stack_1->SetBinContent(17,0.2245778);
   hbadmatch_stack_1->SetBinContent(18,0.592916);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.5610657);
   hbadmatch_stack_1->SetBinError(1,1.433104);
   hbadmatch_stack_1->SetBinError(2,2.12409);
   hbadmatch_stack_1->SetBinError(3,2.549805);
   hbadmatch_stack_1->SetBinError(4,2.058978);
   hbadmatch_stack_1->SetBinError(5,1.918642);
   hbadmatch_stack_1->SetBinError(6,1.824449);
   hbadmatch_stack_1->SetBinError(7,1.396983);
   hbadmatch_stack_1->SetBinError(8,1.228192);
   hbadmatch_stack_1->SetBinError(9,1.78612);
   hbadmatch_stack_1->SetBinError(10,0.9798617);
   hbadmatch_stack_1->SetBinError(11,0.5201044);
   hbadmatch_stack_1->SetBinError(12,0.5453883);
   hbadmatch_stack_1->SetBinError(13,0.4996637);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.5339353);
   hbadmatch_stack_1->SetBinError(16,0.302936);
   hbadmatch_stack_1->SetBinError(17,0.2245778);
   hbadmatch_stack_1->SetBinError(18,0.4423482);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.5610657);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,52.16757);
   hext_stack_2->SetBinContent(2,91.93856);
   hext_stack_2->SetBinContent(3,95.85173);
   hext_stack_2->SetBinContent(4,73.33214);
   hext_stack_2->SetBinContent(5,48.42049);
   hext_stack_2->SetBinContent(6,31.60159);
   hext_stack_2->SetBinContent(7,25.38891);
   hext_stack_2->SetBinContent(8,22.47211);
   hext_stack_2->SetBinContent(9,8.753185);
   hext_stack_2->SetBinContent(10,8.317863);
   hext_stack_2->SetBinContent(11,6.228619);
   hext_stack_2->SetBinContent(12,4.696014);
   hext_stack_2->SetBinContent(13,2.923985);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.8131978);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinError(1,4.856456);
   hext_stack_2->SetBinError(2,6.49904);
   hext_stack_2->SetBinError(3,6.610937);
   hext_stack_2->SetBinError(4,5.851424);
   hext_stack_2->SetBinError(5,4.623787);
   hext_stack_2->SetBinError(6,3.635881);
   hext_stack_2->SetBinError(7,3.438144);
   hext_stack_2->SetBinError(8,3.246137);
   hext_stack_2->SetBinError(9,1.874555);
   hext_stack_2->SetBinError(10,2.037999);
   hext_stack_2->SetBinError(11,1.672799);
   hext_stack_2->SetBinError(12,1.459786);
   hext_stack_2->SetBinError(13,1.040301);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.5750177);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,3.245786);
   hdirt_stack_3->SetBinContent(2,12.69511);
   hdirt_stack_3->SetBinContent(3,10.35669);
   hdirt_stack_3->SetBinContent(4,8.913465);
   hdirt_stack_3->SetBinContent(5,8.732219);
   hdirt_stack_3->SetBinContent(6,3.010749);
   hdirt_stack_3->SetBinContent(7,3.343437);
   hdirt_stack_3->SetBinContent(8,3.638562);
   hdirt_stack_3->SetBinContent(9,1.728089);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.8366207);
   hdirt_stack_3->SetBinContent(13,0.4142698);
   hdirt_stack_3->SetBinError(1,0.8937668);
   hdirt_stack_3->SetBinError(2,1.88461);
   hdirt_stack_3->SetBinError(3,1.607267);
   hdirt_stack_3->SetBinError(4,1.737419);
   hdirt_stack_3->SetBinError(5,1.576988);
   hdirt_stack_3->SetBinError(6,0.9382121);
   hdirt_stack_3->SetBinError(7,0.9899903);
   hdirt_stack_3->SetBinError(8,1.374381);
   hdirt_stack_3->SetBinError(9,0.7009196);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.5048718);
   hdirt_stack_3->SetBinError(13,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,39.8154);
   houtFV_stack_4->SetBinContent(2,76.90958);
   houtFV_stack_4->SetBinContent(3,81.99316);
   houtFV_stack_4->SetBinContent(4,66.91383);
   houtFV_stack_4->SetBinContent(5,57.3374);
   houtFV_stack_4->SetBinContent(6,51.89415);
   houtFV_stack_4->SetBinContent(7,26.97607);
   houtFV_stack_4->SetBinContent(8,19.48527);
   houtFV_stack_4->SetBinContent(9,12.90411);
   houtFV_stack_4->SetBinContent(10,12.02366);
   houtFV_stack_4->SetBinContent(11,8.540447);
   houtFV_stack_4->SetBinContent(12,6.233768);
   houtFV_stack_4->SetBinContent(13,4.962326);
   houtFV_stack_4->SetBinContent(14,3.142932);
   houtFV_stack_4->SetBinContent(15,1.409023);
   houtFV_stack_4->SetBinContent(16,2.169595);
   houtFV_stack_4->SetBinContent(17,1.285019);
   houtFV_stack_4->SetBinContent(18,0.7336084);
   houtFV_stack_4->SetBinContent(19,0.8753801);
   houtFV_stack_4->SetBinContent(21,1.137665);
   houtFV_stack_4->SetBinError(1,3.163628);
   houtFV_stack_4->SetBinError(2,4.397629);
   houtFV_stack_4->SetBinError(3,4.550062);
   houtFV_stack_4->SetBinError(4,4.336322);
   houtFV_stack_4->SetBinError(5,3.859154);
   houtFV_stack_4->SetBinError(6,3.584169);
   houtFV_stack_4->SetBinError(7,2.589485);
   houtFV_stack_4->SetBinError(8,2.186);
   houtFV_stack_4->SetBinError(9,1.801444);
   houtFV_stack_4->SetBinError(10,1.729438);
   houtFV_stack_4->SetBinError(11,1.45933);
   houtFV_stack_4->SetBinError(12,1.206503);
   houtFV_stack_4->SetBinError(13,1.136002);
   houtFV_stack_4->SetBinError(14,0.8601588);
   houtFV_stack_4->SetBinError(15,0.6218875);
   houtFV_stack_4->SetBinError(16,0.7257861);
   houtFV_stack_4->SetBinError(17,0.5945207);
   houtFV_stack_4->SetBinError(18,0.4394482);
   houtFV_stack_4->SetBinError(19,0.5191111);
   houtFV_stack_4->SetBinError(21,0.5242552);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.784397);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.85739);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,12.22745);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.75395);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.58617);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.647891);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.167396);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.921999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.035375);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.775593);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.082283);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.17153);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.003596);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.203218);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.203293);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3652861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.196978);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1820541);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7335298);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3706383);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.771819);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.273966);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.316543);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.201009);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.355347);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.111126);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9893005);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9289392);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9533032);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.16013);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8197914);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5552161);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.756948);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.596822);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5651484);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.721297);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1040827);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07551705);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.07148423);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3615077);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1928416);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7045037);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4812168);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7587383);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8158771);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7089019);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.359409);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8184074);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5297778);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.381762);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2167035);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.051659);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2718309);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.505721);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.06563845);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1825742);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2683851);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.238446);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2794069);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3884813);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2408421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2368196);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1533784);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1306001);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02990719);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1563995);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2975543);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03300438);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03728024);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,96.44164);
   hNCpi0inFVres_stack_7->SetBinContent(2,148.1429);
   hNCpi0inFVres_stack_7->SetBinContent(3,150.3649);
   hNCpi0inFVres_stack_7->SetBinContent(4,149.9936);
   hNCpi0inFVres_stack_7->SetBinContent(5,125.414);
   hNCpi0inFVres_stack_7->SetBinContent(6,111.2182);
   hNCpi0inFVres_stack_7->SetBinContent(7,94.09065);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.42451);
   hNCpi0inFVres_stack_7->SetBinContent(9,55.56657);
   hNCpi0inFVres_stack_7->SetBinContent(10,44.86979);
   hNCpi0inFVres_stack_7->SetBinContent(11,29.24054);
   hNCpi0inFVres_stack_7->SetBinContent(12,20.06927);
   hNCpi0inFVres_stack_7->SetBinContent(13,15.56806);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.52996);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.032816);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.259905);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.154693);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.418304);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.249326);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.796265);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.647817);
   hNCpi0inFVres_stack_7->SetBinError(1,3.481189);
   hNCpi0inFVres_stack_7->SetBinError(2,4.195193);
   hNCpi0inFVres_stack_7->SetBinError(3,4.131159);
   hNCpi0inFVres_stack_7->SetBinError(4,4.255264);
   hNCpi0inFVres_stack_7->SetBinError(5,3.863896);
   hNCpi0inFVres_stack_7->SetBinError(6,3.53574);
   hNCpi0inFVres_stack_7->SetBinError(7,3.444112);
   hNCpi0inFVres_stack_7->SetBinError(8,2.882121);
   hNCpi0inFVres_stack_7->SetBinError(9,2.516366);
   hNCpi0inFVres_stack_7->SetBinError(10,2.279194);
   hNCpi0inFVres_stack_7->SetBinError(11,1.787719);
   hNCpi0inFVres_stack_7->SetBinError(12,1.401407);
   hNCpi0inFVres_stack_7->SetBinError(13,1.312653);
   hNCpi0inFVres_stack_7->SetBinError(14,1.090935);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9803464);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7655357);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5042562);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7554706);
   hNCpi0inFVres_stack_7->SetBinError(19,0.70368);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5085717);
   hNCpi0inFVres_stack_7->SetBinError(21,1.17457);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.12098);
   hNCpi0inFVdis_stack_8->SetBinContent(2,25.33467);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.83635);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.68888);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.21598);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.5297);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.57748);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.35912);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.59063);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.993736);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.726663);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.440857);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.885547);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.870514);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.926336);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.703993);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.234455);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8286822);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.059435);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6787465);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.226997);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.558487);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.736451);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.815941);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.792077);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.843481);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.781772);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.578779);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.477365);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.143203);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9889387);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7717527);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9614733);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6333348);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6644492);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4012824);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6151872);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.253645);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2103875);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6697414);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2184608);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6680141);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.09232638);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1303248);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.05040204);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,40.08134);
   hCCpi0inFV_stack_10->SetBinContent(2,54.17589);
   hCCpi0inFV_stack_10->SetBinContent(3,61.05069);
   hCCpi0inFV_stack_10->SetBinContent(4,57.44417);
   hCCpi0inFV_stack_10->SetBinContent(5,60.02439);
   hCCpi0inFV_stack_10->SetBinContent(6,55.37532);
   hCCpi0inFV_stack_10->SetBinContent(7,51.36204);
   hCCpi0inFV_stack_10->SetBinContent(8,40.94701);
   hCCpi0inFV_stack_10->SetBinContent(9,35.27445);
   hCCpi0inFV_stack_10->SetBinContent(10,34.59033);
   hCCpi0inFV_stack_10->SetBinContent(11,19.51715);
   hCCpi0inFV_stack_10->SetBinContent(12,13.70252);
   hCCpi0inFV_stack_10->SetBinContent(13,12.95289);
   hCCpi0inFV_stack_10->SetBinContent(14,9.623129);
   hCCpi0inFV_stack_10->SetBinContent(15,7.375813);
   hCCpi0inFV_stack_10->SetBinContent(16,5.328333);
   hCCpi0inFV_stack_10->SetBinContent(17,5.820077);
   hCCpi0inFV_stack_10->SetBinContent(18,2.195754);
   hCCpi0inFV_stack_10->SetBinContent(19,3.43099);
   hCCpi0inFV_stack_10->SetBinContent(20,1.178602);
   hCCpi0inFV_stack_10->SetBinContent(21,7.673963);
   hCCpi0inFV_stack_10->SetBinError(1,3.184833);
   hCCpi0inFV_stack_10->SetBinError(2,3.715787);
   hCCpi0inFV_stack_10->SetBinError(3,3.897277);
   hCCpi0inFV_stack_10->SetBinError(4,3.762125);
   hCCpi0inFV_stack_10->SetBinError(5,3.888709);
   hCCpi0inFV_stack_10->SetBinError(6,3.743353);
   hCCpi0inFV_stack_10->SetBinError(7,3.653706);
   hCCpi0inFV_stack_10->SetBinError(8,3.173457);
   hCCpi0inFV_stack_10->SetBinError(9,2.95416);
   hCCpi0inFV_stack_10->SetBinError(10,3.000534);
   hCCpi0inFV_stack_10->SetBinError(11,2.17344);
   hCCpi0inFV_stack_10->SetBinError(12,1.82735);
   hCCpi0inFV_stack_10->SetBinError(13,1.886357);
   hCCpi0inFV_stack_10->SetBinError(14,1.557527);
   hCCpi0inFV_stack_10->SetBinError(15,1.373871);
   hCCpi0inFV_stack_10->SetBinError(16,1.118854);
   hCCpi0inFV_stack_10->SetBinError(17,1.177542);
   hCCpi0inFV_stack_10->SetBinError(18,0.7598403);
   hCCpi0inFV_stack_10->SetBinError(19,0.8785637);
   hCCpi0inFV_stack_10->SetBinError(20,0.4811646);
   hCCpi0inFV_stack_10->SetBinError(21,1.359257);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,19.35629);
   hNCinFV_stack_11->SetBinContent(2,22.96038);
   hNCinFV_stack_11->SetBinContent(3,18.34553);
   hNCinFV_stack_11->SetBinContent(4,23.05623);
   hNCinFV_stack_11->SetBinContent(5,21.39644);
   hNCinFV_stack_11->SetBinContent(6,17.42965);
   hNCinFV_stack_11->SetBinContent(7,18.63873);
   hNCinFV_stack_11->SetBinContent(8,17.59075);
   hNCinFV_stack_11->SetBinContent(9,13.55415);
   hNCinFV_stack_11->SetBinContent(10,10.03261);
   hNCinFV_stack_11->SetBinContent(11,9.270457);
   hNCinFV_stack_11->SetBinContent(12,7.599625);
   hNCinFV_stack_11->SetBinContent(13,8.209194);
   hNCinFV_stack_11->SetBinContent(14,5.009726);
   hNCinFV_stack_11->SetBinContent(15,2.08313);
   hNCinFV_stack_11->SetBinContent(16,2.970895);
   hNCinFV_stack_11->SetBinContent(17,1.67229);
   hNCinFV_stack_11->SetBinContent(18,0.7400098);
   hNCinFV_stack_11->SetBinContent(19,2.765499);
   hNCinFV_stack_11->SetBinContent(20,2.349173);
   hNCinFV_stack_11->SetBinContent(21,6.79503);
   hNCinFV_stack_11->SetBinError(1,2.231708);
   hNCinFV_stack_11->SetBinError(2,2.51331);
   hNCinFV_stack_11->SetBinError(3,2.12081);
   hNCinFV_stack_11->SetBinError(4,2.577739);
   hNCinFV_stack_11->SetBinError(5,2.272249);
   hNCinFV_stack_11->SetBinError(6,2.020695);
   hNCinFV_stack_11->SetBinError(7,2.268859);
   hNCinFV_stack_11->SetBinError(8,2.341389);
   hNCinFV_stack_11->SetBinError(9,2.07732);
   hNCinFV_stack_11->SetBinError(10,1.52687);
   hNCinFV_stack_11->SetBinError(11,1.471741);
   hNCinFV_stack_11->SetBinError(12,1.486557);
   hNCinFV_stack_11->SetBinError(13,1.758114);
   hNCinFV_stack_11->SetBinError(14,1.471172);
   hNCinFV_stack_11->SetBinError(15,0.792161);
   hNCinFV_stack_11->SetBinError(16,1.042805);
   hNCinFV_stack_11->SetBinError(17,0.7587567);
   hNCinFV_stack_11->SetBinError(18,0.3424559);
   hNCinFV_stack_11->SetBinError(19,1.000551);
   hNCinFV_stack_11->SetBinError(20,0.8615606);
   hNCinFV_stack_11->SetBinError(21,1.632209);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,20.60703);
   hnumuCCinFV_stack_12->SetBinContent(2,28.95403);
   hnumuCCinFV_stack_12->SetBinContent(3,28.63148);
   hnumuCCinFV_stack_12->SetBinContent(4,28.53655);
   hnumuCCinFV_stack_12->SetBinContent(5,30.13533);
   hnumuCCinFV_stack_12->SetBinContent(6,23.26542);
   hnumuCCinFV_stack_12->SetBinContent(7,24.94794);
   hnumuCCinFV_stack_12->SetBinContent(8,15.50791);
   hnumuCCinFV_stack_12->SetBinContent(9,14.12968);
   hnumuCCinFV_stack_12->SetBinContent(10,12.36133);
   hnumuCCinFV_stack_12->SetBinContent(11,8.891933);
   hnumuCCinFV_stack_12->SetBinContent(12,7.720399);
   hnumuCCinFV_stack_12->SetBinContent(13,4.970345);
   hnumuCCinFV_stack_12->SetBinContent(14,5.717566);
   hnumuCCinFV_stack_12->SetBinContent(15,3.162566);
   hnumuCCinFV_stack_12->SetBinContent(16,2.04722);
   hnumuCCinFV_stack_12->SetBinContent(17,1.370245);
   hnumuCCinFV_stack_12->SetBinContent(18,1.070405);
   hnumuCCinFV_stack_12->SetBinContent(19,1.009566);
   hnumuCCinFV_stack_12->SetBinContent(20,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(21,2.750242);
   hnumuCCinFV_stack_12->SetBinError(1,2.921062);
   hnumuCCinFV_stack_12->SetBinError(2,2.799697);
   hnumuCCinFV_stack_12->SetBinError(3,3.205545);
   hnumuCCinFV_stack_12->SetBinError(4,2.949243);
   hnumuCCinFV_stack_12->SetBinError(5,3.402034);
   hnumuCCinFV_stack_12->SetBinError(6,2.651775);
   hnumuCCinFV_stack_12->SetBinError(7,3.763217);
   hnumuCCinFV_stack_12->SetBinError(8,2.241334);
   hnumuCCinFV_stack_12->SetBinError(9,1.973011);
   hnumuCCinFV_stack_12->SetBinError(10,1.926369);
   hnumuCCinFV_stack_12->SetBinError(11,1.533172);
   hnumuCCinFV_stack_12->SetBinError(12,1.400146);
   hnumuCCinFV_stack_12->SetBinError(13,1.151949);
   hnumuCCinFV_stack_12->SetBinError(14,1.23515);
   hnumuCCinFV_stack_12->SetBinError(15,0.908287);
   hnumuCCinFV_stack_12->SetBinError(16,0.7059368);
   hnumuCCinFV_stack_12->SetBinError(17,0.5179089);
   hnumuCCinFV_stack_12->SetBinError(18,0.5545368);
   hnumuCCinFV_stack_12->SetBinError(19,0.4521929);
   hnumuCCinFV_stack_12->SetBinError(20,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(21,0.7871107);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,5.300754);
   hnueCCinFV_stack_13->SetBinContent(2,6.582036);
   hnueCCinFV_stack_13->SetBinContent(3,2.90551);
   hnueCCinFV_stack_13->SetBinContent(4,3.41583);
   hnueCCinFV_stack_13->SetBinContent(5,1.481266);
   hnueCCinFV_stack_13->SetBinContent(6,2.141411);
   hnueCCinFV_stack_13->SetBinContent(7,2.960433);
   hnueCCinFV_stack_13->SetBinContent(8,0.628405);
   hnueCCinFV_stack_13->SetBinContent(9,1.037776);
   hnueCCinFV_stack_13->SetBinContent(10,0.8601151);
   hnueCCinFV_stack_13->SetBinContent(11,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(12,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.075993);
   hnueCCinFV_stack_13->SetBinContent(15,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(16,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,1.084408);
   hnueCCinFV_stack_13->SetBinContent(21,0.949423);
   hnueCCinFV_stack_13->SetBinError(1,1.879046);
   hnueCCinFV_stack_13->SetBinError(2,1.765854);
   hnueCCinFV_stack_13->SetBinError(3,0.9248235);
   hnueCCinFV_stack_13->SetBinError(4,1.003721);
   hnueCCinFV_stack_13->SetBinError(5,0.7324977);
   hnueCCinFV_stack_13->SetBinError(6,0.683413);
   hnueCCinFV_stack_13->SetBinError(7,1.458896);
   hnueCCinFV_stack_13->SetBinError(8,0.4743974);
   hnueCCinFV_stack_13->SetBinError(9,0.5344459);
   hnueCCinFV_stack_13->SetBinError(10,0.4300663);
   hnueCCinFV_stack_13->SetBinError(11,0.3397478);
   hnueCCinFV_stack_13->SetBinError(12,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,1.075993);
   hnueCCinFV_stack_13->SetBinError(15,0.2441371);
   hnueCCinFV_stack_13->SetBinError(16,0.3743698);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.6604876);
   hnueCCinFV_stack_13->SetBinError(21,0.4896539);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__11->SetBinContent(1,311.8759);
   hmcerror__11->SetBinContent(2,495.0599);
   hmcerror__11->SetBinContent(3,503.8326);
   hmcerror__11->SetBinContent(4,467.4095);
   hmcerror__11->SetBinContent(5,402.9458);
   hmcerror__11->SetBinContent(6,341.1164);
   hmcerror__11->SetBinContent(7,283.6121);
   hmcerror__11->SetBinContent(8,217.944);
   hmcerror__11->SetBinContent(9,165.1483);
   hmcerror__11->SetBinContent(10,139.4172);
   hmcerror__11->SetBinContent(11,93.32204);
   hmcerror__11->SetBinContent(12,74.0582);
   hmcerror__11->SetBinContent(13,56.92696);
   hmcerror__11->SetBinContent(14,42.42514);
   hmcerror__11->SetBinContent(15,27.69009);
   hmcerror__11->SetBinContent(16,23.84051);
   hmcerror__11->SetBinContent(17,15.70649);
   hmcerror__11->SetBinContent(18,10.49273);
   hmcerror__11->SetBinContent(19,14.98501);
   hmcerror__11->SetBinContent(20,9.368258);
   hmcerror__11->SetBinContent(21,32.2823);
   hmcerror__11->SetBinError(1,85.59564);
   hmcerror__11->SetBinError(2,103.6015);
   hmcerror__11->SetBinError(3,110.2588);
   hmcerror__11->SetBinError(4,102.0373);
   hmcerror__11->SetBinError(5,88.83025);
   hmcerror__11->SetBinError(6,89.44671);
   hmcerror__11->SetBinError(7,72.47585);
   hmcerror__11->SetBinError(8,56.19987);
   hmcerror__11->SetBinError(9,45.69552);
   hmcerror__11->SetBinError(10,38.2558);
   hmcerror__11->SetBinError(11,28.16523);
   hmcerror__11->SetBinError(12,25.06352);
   hmcerror__11->SetBinError(13,22.48873);
   hmcerror__11->SetBinError(14,19.0477);
   hmcerror__11->SetBinError(15,14.88415);
   hmcerror__11->SetBinError(16,13.51273);
   hmcerror__11->SetBinError(17,10.20129);
   hmcerror__11->SetBinError(18,6.001711);
   hmcerror__11->SetBinError(19,14.1304);
   hmcerror__11->SetBinError(20,7.995346);
   hmcerror__11->SetBinError(21,15.34981);
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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   316,
   510,
   574,
   469,
   452,
   351,
   303,
   218,
   162,
   108,
   80,
   72,
   30,
   51,
   29,
   22,
   15,
   10,
   7,
   15};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   17.77639,
   22.58318,
   23.9583,
   21.65641,
   21.26029,
   18.73499,
   17.4069,
   14.76482,
   12.72792,
   10.3923,
   9.0683,
   8.6108,
   5.6197,
   7.2725,
   5.5285,
   4.8417,
   4.0385,
   3.34883,
   2.85954,
   4.0385};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   17.77639,
   22.58318,
   23.9583,
   21.65641,
   21.26029,
   18.73499,
   17.4069,
   14.76482,
   12.72792,
   10.3923,
   8.8665,
   8.4085,
   5.4117,
   7.0686,
   5.3201,
   4.6299,
   3.8197,
   3.1179,
   2.61053,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,330);
   Graph_Graph3013->SetMinimum(3.726414);
   Graph_Graph3013->SetMaximum(657.3401);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3794.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 476.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 475.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  108.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1147.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  234.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 571.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 225.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 264.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.2744541,
   0.2092707,
   0.2188402,
   0.2183038,
   0.2204521,
   0.2622176,
   0.2555457,
   0.2578638,
   0.2766938,
   0.2743979,
   0.3018069,
   0.33843,
   0.3950454,
   0.448972,
   0.5375262,
   0.5667968,
   0.6494955,
   0.5719875,
   0.942969,
   0.8534507};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.2744541,
   0.2092707,
   0.2188402,
   0.2183038,
   0.2204521,
   0.2622176,
   0.2555457,
   0.2578638,
   0.2766938,
   0.2743979,
   0.3018069,
   0.33843,
   0.3950454,
   0.448972,
   0.5375262,
   0.5667968,
   0.6494955,
   0.5719875,
   0.942969,
   0.8534507};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,330);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.1904974,
   0.1813815,
   0.1829135,
   0.1883027,
   0.196977,
   0.2112335,
   0.2098258,
   0.2153423,
   0.2297658,
   0.2265821,
   0.2395388,
   0.246245,
   0.2847391,
   0.2602798,
   0.3115832,
   0.2504686,
   0.2712198,
   0.2901347,
   0.2784927,
   0.3162043};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.1904974,
   0.1813815,
   0.1829135,
   0.1883027,
   0.196977,
   0.2112335,
   0.2098258,
   0.2153423,
   0.2297658,
   0.2265821,
   0.2395388,
   0.246245,
   0.2847391,
   0.2602798,
   0.3115832,
   0.2504686,
   0.2712198,
   0.2901347,
   0.2784927,
   0.3162043};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,330);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   1.013223,
   1.030178,
   1.139267,
   1.003403,
   1.121739,
   1.028974,
   1.068361,
   1.000257,
   0.9809364,
   0.7746532,
   0.8572466,
   0.9722083,
   0.5269911,
   1.202117,
   1.047306,
   0.9227989,
   0.9550194,
   0.9530408,
   0.4671334,
   1.601152};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.05699827,
   0.04561707,
   0.04755209,
   0.04633283,
   0.05276217,
   0.05492258,
   0.06137572,
   0.06774596,
   0.07706965,
   0.07454104,
   0.09717212,
   0.1162707,
   0.09871773,
   0.1714196,
   0.1996563,
   0.2030871,
   0.257123,
   0.3191572,
   0.1908266,
   0.4310834};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.05699827,
   0.04561707,
   0.04755209,
   0.04633283,
   0.05276217,
   0.05492258,
   0.06137572,
   0.06774596,
   0.07706965,
   0.07454104,
   0.09500971,
   0.1135391,
   0.09506393,
   0.1666135,
   0.1921301,
   0.194203,
   0.2431925,
   0.2971486,
   0.1742094,
   0.4077279};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,330);
   Graph_Graph3016->SetMinimum(0.1030494);
   Graph_Graph3016->SetMaximum(2.182137);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

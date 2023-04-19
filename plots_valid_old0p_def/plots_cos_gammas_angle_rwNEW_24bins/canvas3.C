#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 18:43:49 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-3.243225,1.25641,358.6324);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__7->SetBinContent(1,88.34391);
   hmc__7->SetBinContent(2,45.03667);
   hmc__7->SetBinContent(3,33.86048);
   hmc__7->SetBinContent(4,37.97649);
   hmc__7->SetBinContent(5,36.23175);
   hmc__7->SetBinContent(6,34.01802);
   hmc__7->SetBinContent(7,38.96066);
   hmc__7->SetBinContent(8,37.51113);
   hmc__7->SetBinContent(9,38.66384);
   hmc__7->SetBinContent(10,38.70012);
   hmc__7->SetBinContent(11,47.02547);
   hmc__7->SetBinContent(12,49.42957);
   hmc__7->SetBinContent(13,51.76692);
   hmc__7->SetBinContent(14,61.04206);
   hmc__7->SetBinContent(15,66.60308);
   hmc__7->SetBinContent(16,60.07517);
   hmc__7->SetBinContent(17,65.59541);
   hmc__7->SetBinContent(18,78.39642);
   hmc__7->SetBinContent(19,87.18454);
   hmc__7->SetBinContent(20,105.9498);
   hmc__7->SetBinContent(21,125.5382);
   hmc__7->SetBinContent(22,149.8533);
   hmc__7->SetBinContent(23,162.1613);
   hmc__7->SetBinContent(24,145.1312);
   hmc__7->SetBinError(1,28.90885);
   hmc__7->SetBinError(2,27.68325);
   hmc__7->SetBinError(3,15.64204);
   hmc__7->SetBinError(4,20.54244);
   hmc__7->SetBinError(5,16.62923);
   hmc__7->SetBinError(6,14.01061);
   hmc__7->SetBinError(7,19.0759);
   hmc__7->SetBinError(8,15.39356);
   hmc__7->SetBinError(9,14.77179);
   hmc__7->SetBinError(10,13.35045);
   hmc__7->SetBinError(11,14.47919);
   hmc__7->SetBinError(12,18.10503);
   hmc__7->SetBinError(13,21.05937);
   hmc__7->SetBinError(14,20.94428);
   hmc__7->SetBinError(15,22.36541);
   hmc__7->SetBinError(16,24.13606);
   hmc__7->SetBinError(17,21.37736);
   hmc__7->SetBinError(18,24.97775);
   hmc__7->SetBinError(19,33.78052);
   hmc__7->SetBinError(20,36.40326);
   hmc__7->SetBinError(21,36.99022);
   hmc__7->SetBinError(22,47.16739);
   hmc__7->SetBinError(23,42.57509);
   hmc__7->SetBinError(24,37.88873);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-3.243225);
   hmc__7->SetMaximum(340.5386);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,-1,1);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(170.2693);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.984169);
   hbadmatch_stack_1->SetBinContent(2,3.035775);
   hbadmatch_stack_1->SetBinContent(3,1.299425);
   hbadmatch_stack_1->SetBinContent(4,0.7868615);
   hbadmatch_stack_1->SetBinContent(5,1.340401);
   hbadmatch_stack_1->SetBinContent(6,1.171768);
   hbadmatch_stack_1->SetBinContent(7,2.11152);
   hbadmatch_stack_1->SetBinContent(8,1.551247);
   hbadmatch_stack_1->SetBinContent(9,1.360711);
   hbadmatch_stack_1->SetBinContent(10,0.5901461);
   hbadmatch_stack_1->SetBinContent(11,1.31175);
   hbadmatch_stack_1->SetBinContent(12,1.802323);
   hbadmatch_stack_1->SetBinContent(13,1.971986);
   hbadmatch_stack_1->SetBinContent(14,1.761409);
   hbadmatch_stack_1->SetBinContent(15,3.03224);
   hbadmatch_stack_1->SetBinContent(16,2.13794);
   hbadmatch_stack_1->SetBinContent(17,2.281874);
   hbadmatch_stack_1->SetBinContent(18,1.902145);
   hbadmatch_stack_1->SetBinContent(19,1.797539);
   hbadmatch_stack_1->SetBinContent(20,3.146275);
   hbadmatch_stack_1->SetBinContent(21,3.280395);
   hbadmatch_stack_1->SetBinContent(22,6.49359);
   hbadmatch_stack_1->SetBinContent(23,3.763927);
   hbadmatch_stack_1->SetBinContent(24,5.543285);
   hbadmatch_stack_1->SetBinError(1,0.8996828);
   hbadmatch_stack_1->SetBinError(2,0.9033727);
   hbadmatch_stack_1->SetBinError(3,0.6697177);
   hbadmatch_stack_1->SetBinError(4,0.3934307);
   hbadmatch_stack_1->SetBinError(5,0.5622224);
   hbadmatch_stack_1->SetBinError(6,0.5386156);
   hbadmatch_stack_1->SetBinError(7,0.7676249);
   hbadmatch_stack_1->SetBinError(8,0.660647);
   hbadmatch_stack_1->SetBinError(9,0.6803552);
   hbadmatch_stack_1->SetBinError(10,0.340721);
   hbadmatch_stack_1->SetBinError(11,0.6045349);
   hbadmatch_stack_1->SetBinError(12,0.7070809);
   hbadmatch_stack_1->SetBinError(13,0.7299302);
   hbadmatch_stack_1->SetBinError(14,0.7087973);
   hbadmatch_stack_1->SetBinError(15,1.0061);
   hbadmatch_stack_1->SetBinError(16,0.7858969);
   hbadmatch_stack_1->SetBinError(17,0.7438287);
   hbadmatch_stack_1->SetBinError(18,0.6944711);
   hbadmatch_stack_1->SetBinError(19,0.6495527);
   hbadmatch_stack_1->SetBinError(20,0.9042107);
   hbadmatch_stack_1->SetBinError(21,1.015361);
   hbadmatch_stack_1->SetBinError(22,1.398932);
   hbadmatch_stack_1->SetBinError(23,1.33652);
   hbadmatch_stack_1->SetBinError(24,1.257226);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,11.15524);
   hext_stack_2->SetBinContent(2,9.448278);
   hext_stack_2->SetBinContent(3,5.35476);
   hext_stack_2->SetBinContent(4,7.594048);
   hext_stack_2->SetBinContent(5,7.758451);
   hext_stack_2->SetBinContent(6,5.840789);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,6.049854);
   hext_stack_2->SetBinContent(9,8.165051);
   hext_stack_2->SetBinContent(10,8.242843);
   hext_stack_2->SetBinContent(11,11.31246);
   hext_stack_2->SetBinContent(12,10.23112);
   hext_stack_2->SetBinContent(13,8.08562);
   hext_stack_2->SetBinContent(14,15.90032);
   hext_stack_2->SetBinContent(15,12.02192);
   hext_stack_2->SetBinContent(16,6.806801);
   hext_stack_2->SetBinContent(17,6.470814);
   hext_stack_2->SetBinContent(18,12.52067);
   hext_stack_2->SetBinContent(19,15.17373);
   hext_stack_2->SetBinContent(20,16.81008);
   hext_stack_2->SetBinContent(21,19.13434);
   hext_stack_2->SetBinContent(22,24.53105);
   hext_stack_2->SetBinContent(23,28.98764);
   hext_stack_2->SetBinContent(24,25.12637);
   hext_stack_2->SetBinError(1,2.245095);
   hext_stack_2->SetBinError(2,2.188726);
   hext_stack_2->SetBinError(3,1.343099);
   hext_stack_2->SetBinError(4,1.918771);
   hext_stack_2->SetBinError(5,1.949836);
   hext_stack_2->SetBinError(6,1.538068);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,1.75513);
   hext_stack_2->SetBinError(9,1.991779);
   hext_stack_2->SetBinError(10,1.972853);
   hext_stack_2->SetBinError(11,2.315563);
   hext_stack_2->SetBinError(12,2.335492);
   hext_stack_2->SetBinError(13,1.889648);
   hext_stack_2->SetBinError(14,2.810907);
   hext_stack_2->SetBinError(15,2.497197);
   hext_stack_2->SetBinError(16,1.697809);
   hext_stack_2->SetBinError(17,1.686238);
   hext_stack_2->SetBinError(18,2.433902);
   hext_stack_2->SetBinError(19,2.786712);
   hext_stack_2->SetBinError(20,2.808831);
   hext_stack_2->SetBinError(21,3.080757);
   hext_stack_2->SetBinError(22,3.300839);
   hext_stack_2->SetBinError(23,3.555987);
   hext_stack_2->SetBinError(24,3.200174);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,2.445284);
   hdirt_stack_3->SetBinContent(2,0.8545573);
   hdirt_stack_3->SetBinContent(3,1.104249);
   hdirt_stack_3->SetBinContent(4,1.231002);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.2761429);
   hdirt_stack_3->SetBinContent(8,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.946649);
   hdirt_stack_3->SetBinContent(10,0.260563);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.4762587);
   hdirt_stack_3->SetBinContent(16,0.8416969);
   hdirt_stack_3->SetBinContent(17,1.616182);
   hdirt_stack_3->SetBinContent(18,0.5570828);
   hdirt_stack_3->SetBinContent(19,1.633308);
   hdirt_stack_3->SetBinContent(20,1.763839);
   hdirt_stack_3->SetBinContent(21,0.2762635);
   hdirt_stack_3->SetBinContent(22,1.439347);
   hdirt_stack_3->SetBinContent(23,2.386567);
   hdirt_stack_3->SetBinContent(24,2.758389);
   hdirt_stack_3->SetBinError(1,0.8273355);
   hdirt_stack_3->SetBinError(2,0.5258746);
   hdirt_stack_3->SetBinError(3,0.5698782);
   hdirt_stack_3->SetBinError(4,0.5979361);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.1952625);
   hdirt_stack_3->SetBinError(8,0.4258516);
   hdirt_stack_3->SetBinError(9,0.5603996);
   hdirt_stack_3->SetBinError(10,0.260563);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.3652866);
   hdirt_stack_3->SetBinError(16,0.3914337);
   hdirt_stack_3->SetBinError(17,1.029045);
   hdirt_stack_3->SetBinError(18,0.4028472);
   hdirt_stack_3->SetBinError(19,0.6728223);
   hdirt_stack_3->SetBinError(20,0.7509981);
   hdirt_stack_3->SetBinError(21,0.1952626);
   hdirt_stack_3->SetBinError(22,0.6214286);
   hdirt_stack_3->SetBinError(23,0.8512845);
   hdirt_stack_3->SetBinError(24,0.8705094);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,25.84303);
   houtFV_stack_4->SetBinContent(2,12.49194);
   houtFV_stack_4->SetBinContent(3,6.711467);
   houtFV_stack_4->SetBinContent(4,6.651018);
   houtFV_stack_4->SetBinContent(5,6.768653);
   houtFV_stack_4->SetBinContent(6,3.719974);
   houtFV_stack_4->SetBinContent(7,8.897973);
   houtFV_stack_4->SetBinContent(8,9.02672);
   houtFV_stack_4->SetBinContent(9,7.559238);
   houtFV_stack_4->SetBinContent(10,4.841572);
   houtFV_stack_4->SetBinContent(11,5.754874);
   houtFV_stack_4->SetBinContent(12,9.645449);
   houtFV_stack_4->SetBinContent(13,9.025739);
   houtFV_stack_4->SetBinContent(14,9.067797);
   houtFV_stack_4->SetBinContent(15,10.981);
   houtFV_stack_4->SetBinContent(16,8.745445);
   houtFV_stack_4->SetBinContent(17,12.44157);
   houtFV_stack_4->SetBinContent(18,14.30497);
   houtFV_stack_4->SetBinContent(19,14.15469);
   houtFV_stack_4->SetBinContent(20,16.68604);
   houtFV_stack_4->SetBinContent(21,24.47057);
   houtFV_stack_4->SetBinContent(22,26.54107);
   houtFV_stack_4->SetBinContent(23,34.33694);
   houtFV_stack_4->SetBinContent(24,36.34065);
   houtFV_stack_4->SetBinError(1,2.525104);
   houtFV_stack_4->SetBinError(2,1.776962);
   houtFV_stack_4->SetBinError(3,1.242284);
   houtFV_stack_4->SetBinError(4,1.341527);
   houtFV_stack_4->SetBinError(5,1.308995);
   houtFV_stack_4->SetBinError(6,1.003146);
   houtFV_stack_4->SetBinError(7,1.495355);
   houtFV_stack_4->SetBinError(8,1.914898);
   houtFV_stack_4->SetBinError(9,1.439926);
   houtFV_stack_4->SetBinError(10,1.093209);
   houtFV_stack_4->SetBinError(11,1.241585);
   houtFV_stack_4->SetBinError(12,1.58741);
   houtFV_stack_4->SetBinError(13,1.49345);
   houtFV_stack_4->SetBinError(14,1.454053);
   houtFV_stack_4->SetBinError(15,1.665379);
   houtFV_stack_4->SetBinError(16,1.441963);
   houtFV_stack_4->SetBinError(17,1.810161);
   houtFV_stack_4->SetBinError(18,1.924159);
   houtFV_stack_4->SetBinError(19,1.920364);
   houtFV_stack_4->SetBinError(20,2.055666);
   houtFV_stack_4->SetBinError(21,2.663545);
   houtFV_stack_4->SetBinError(22,2.548867);
   houtFV_stack_4->SetBinError(23,2.988033);
   houtFV_stack_4->SetBinError(24,3.050496);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.128626);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5988538);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.715694);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.13253);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.426148);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9065858);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3616285);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1922885);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.481566);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.452824);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5215308);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2545655);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1458657);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.04513);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.018527);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.474641);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.282254);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.23111);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.518656);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.465768);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.537178);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.339046);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.940643);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.195408);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.365879);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.713793);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.954355);
   hNCpi0inFVres_stack_7->SetBinContent(15,12.29864);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.58959);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.1936);
   hNCpi0inFVres_stack_7->SetBinContent(18,16.37023);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.11049);
   hNCpi0inFVres_stack_7->SetBinContent(20,23.38462);
   hNCpi0inFVres_stack_7->SetBinContent(21,25.51615);
   hNCpi0inFVres_stack_7->SetBinContent(22,26.63346);
   hNCpi0inFVres_stack_7->SetBinContent(23,28.8396);
   hNCpi0inFVres_stack_7->SetBinContent(24,15.13596);
   hNCpi0inFVres_stack_7->SetBinError(1,1.114847);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6810838);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6396803);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7553275);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7867923);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6891324);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8000776);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7799605);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6925122);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8065772);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8945139);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9272722);
   hNCpi0inFVres_stack_7->SetBinError(13,0.882062);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9886557);
   hNCpi0inFVres_stack_7->SetBinError(15,1.148212);
   hNCpi0inFVres_stack_7->SetBinError(16,1.137883);
   hNCpi0inFVres_stack_7->SetBinError(17,1.216597);
   hNCpi0inFVres_stack_7->SetBinError(18,1.339527);
   hNCpi0inFVres_stack_7->SetBinError(19,1.34366);
   hNCpi0inFVres_stack_7->SetBinError(20,1.607072);
   hNCpi0inFVres_stack_7->SetBinError(21,1.653997);
   hNCpi0inFVres_stack_7->SetBinError(22,1.611002);
   hNCpi0inFVres_stack_7->SetBinError(23,1.827289);
   hNCpi0inFVres_stack_7->SetBinError(24,1.208894);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.551366);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.18509);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.144404);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.743426);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.603094);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.855194);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.072658);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.702076);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.35249);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8644038);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.40829);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.059704);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.495734);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.02093);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.61804);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.13253);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.19257);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.997934);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.919138);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.257762);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.662644);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.131894);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.71829);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.675846);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.531266);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3447308);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3608206);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4471301);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4204368);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4855902);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3105792);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4740994);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3514395);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2652967);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3536475);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2753746);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5598622);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4493728);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3961278);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.452824);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5885564);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5722386);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6718789);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8308232);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8335513);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9847778);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9694752);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7700417);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,18.47938);
   hCCpi0inFV_stack_10->SetBinContent(2,5.918131);
   hCCpi0inFV_stack_10->SetBinContent(3,6.198116);
   hCCpi0inFV_stack_10->SetBinContent(4,5.961117);
   hCCpi0inFV_stack_10->SetBinContent(5,6.296599);
   hCCpi0inFV_stack_10->SetBinContent(6,7.243897);
   hCCpi0inFV_stack_10->SetBinContent(7,8.146451);
   hCCpi0inFV_stack_10->SetBinContent(8,3.507675);
   hCCpi0inFV_stack_10->SetBinContent(9,5.975304);
   hCCpi0inFV_stack_10->SetBinContent(10,5.703783);
   hCCpi0inFV_stack_10->SetBinContent(11,9.231388);
   hCCpi0inFV_stack_10->SetBinContent(12,9.517565);
   hCCpi0inFV_stack_10->SetBinContent(13,8.546906);
   hCCpi0inFV_stack_10->SetBinContent(14,12.6141);
   hCCpi0inFV_stack_10->SetBinContent(15,16.11089);
   hCCpi0inFV_stack_10->SetBinContent(16,16.00077);
   hCCpi0inFV_stack_10->SetBinContent(17,13.05759);
   hCCpi0inFV_stack_10->SetBinContent(18,15.99678);
   hCCpi0inFV_stack_10->SetBinContent(19,19.14316);
   hCCpi0inFV_stack_10->SetBinContent(20,19.54233);
   hCCpi0inFV_stack_10->SetBinContent(21,26.53991);
   hCCpi0inFV_stack_10->SetBinContent(22,32.12482);
   hCCpi0inFV_stack_10->SetBinContent(23,22.91239);
   hCCpi0inFV_stack_10->SetBinContent(24,24.32687);
   hCCpi0inFV_stack_10->SetBinError(1,2.143497);
   hCCpi0inFV_stack_10->SetBinError(2,1.143083);
   hCCpi0inFV_stack_10->SetBinError(3,1.232285);
   hCCpi0inFV_stack_10->SetBinError(4,1.203646);
   hCCpi0inFV_stack_10->SetBinError(5,1.253199);
   hCCpi0inFV_stack_10->SetBinError(6,1.319101);
   hCCpi0inFV_stack_10->SetBinError(7,1.447913);
   hCCpi0inFV_stack_10->SetBinError(8,0.9391097);
   hCCpi0inFV_stack_10->SetBinError(9,1.214672);
   hCCpi0inFV_stack_10->SetBinError(10,1.17581);
   hCCpi0inFV_stack_10->SetBinError(11,1.532696);
   hCCpi0inFV_stack_10->SetBinError(12,1.584314);
   hCCpi0inFV_stack_10->SetBinError(13,1.476407);
   hCCpi0inFV_stack_10->SetBinError(14,1.793191);
   hCCpi0inFV_stack_10->SetBinError(15,2.091378);
   hCCpi0inFV_stack_10->SetBinError(16,2.04318);
   hCCpi0inFV_stack_10->SetBinError(17,1.845429);
   hCCpi0inFV_stack_10->SetBinError(18,2.024006);
   hCCpi0inFV_stack_10->SetBinError(19,2.252772);
   hCCpi0inFV_stack_10->SetBinError(20,2.193947);
   hCCpi0inFV_stack_10->SetBinError(21,2.634055);
   hCCpi0inFV_stack_10->SetBinError(22,2.831954);
   hCCpi0inFV_stack_10->SetBinError(23,2.408836);
   hCCpi0inFV_stack_10->SetBinError(24,2.48658);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.861376);
   hNCinFV_stack_11->SetBinContent(2,2.050601);
   hNCinFV_stack_11->SetBinContent(3,2.627831);
   hNCinFV_stack_11->SetBinContent(4,2.000729);
   hNCinFV_stack_11->SetBinContent(5,1.127039);
   hNCinFV_stack_11->SetBinContent(6,2.298879);
   hNCinFV_stack_11->SetBinContent(7,1.900836);
   hNCinFV_stack_11->SetBinContent(8,2.291034);
   hNCinFV_stack_11->SetBinContent(9,1.857266);
   hNCinFV_stack_11->SetBinContent(10,3.466255);
   hNCinFV_stack_11->SetBinContent(11,2.587494);
   hNCinFV_stack_11->SetBinContent(12,2.677703);
   hNCinFV_stack_11->SetBinContent(13,2.344287);
   hNCinFV_stack_11->SetBinContent(14,1.710423);
   hNCinFV_stack_11->SetBinContent(15,1.754141);
   hNCinFV_stack_11->SetBinContent(16,1.804013);
   hNCinFV_stack_11->SetBinContent(17,1.752451);
   hNCinFV_stack_11->SetBinContent(18,1.908829);
   hNCinFV_stack_11->SetBinContent(19,3.714533);
   hNCinFV_stack_11->SetBinContent(20,5.66708);
   hNCinFV_stack_11->SetBinContent(21,5.281494);
   hNCinFV_stack_11->SetBinContent(22,5.673234);
   hNCinFV_stack_11->SetBinContent(23,8.069084);
   hNCinFV_stack_11->SetBinContent(24,5.034906);
   hNCinFV_stack_11->SetBinError(1,1.001472);
   hNCinFV_stack_11->SetBinError(2,0.7068742);
   hNCinFV_stack_11->SetBinError(3,0.899495);
   hNCinFV_stack_11->SetBinError(4,0.7343859);
   hNCinFV_stack_11->SetBinError(5,0.5201044);
   hNCinFV_stack_11->SetBinError(6,0.7066675);
   hNCinFV_stack_11->SetBinError(7,0.6805723);
   hNCinFV_stack_11->SetBinError(8,0.8334836);
   hNCinFV_stack_11->SetBinError(9,0.6799255);
   hNCinFV_stack_11->SetBinError(10,0.9617119);
   hNCinFV_stack_11->SetBinError(11,0.8087577);
   hNCinFV_stack_11->SetBinError(12,0.8771772);
   hNCinFV_stack_11->SetBinError(13,0.8101654);
   hNCinFV_stack_11->SetBinError(14,0.6196373);
   hNCinFV_stack_11->SetBinError(15,0.7350354);
   hNCinFV_stack_11->SetBinError(16,0.7075491);
   hNCinFV_stack_11->SetBinError(17,0.7345848);
   hNCinFV_stack_11->SetBinError(18,0.6506224);
   hNCinFV_stack_11->SetBinError(19,0.9615599);
   hNCinFV_stack_11->SetBinError(20,1.226472);
   hNCinFV_stack_11->SetBinError(21,1.109741);
   hNCinFV_stack_11->SetBinError(22,1.14379);
   hNCinFV_stack_11->SetBinError(23,1.387672);
   hNCinFV_stack_11->SetBinError(24,1.11017);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.070633);
   hnumuCCinFV_stack_12->SetBinContent(2,4.726867);
   hnumuCCinFV_stack_12->SetBinContent(3,4.52775);
   hnumuCCinFV_stack_12->SetBinContent(4,5.970978);
   hnumuCCinFV_stack_12->SetBinContent(5,4.151853);
   hnumuCCinFV_stack_12->SetBinContent(6,6.301698);
   hnumuCCinFV_stack_12->SetBinContent(7,5.263044);
   hnumuCCinFV_stack_12->SetBinContent(8,6.869778);
   hnumuCCinFV_stack_12->SetBinContent(9,5.773118);
   hnumuCCinFV_stack_12->SetBinContent(10,7.734113);
   hnumuCCinFV_stack_12->SetBinContent(11,7.618619);
   hnumuCCinFV_stack_12->SetBinContent(12,5.782841);
   hnumuCCinFV_stack_12->SetBinContent(13,9.317372);
   hnumuCCinFV_stack_12->SetBinContent(14,7.498172);
   hnumuCCinFV_stack_12->SetBinContent(15,7.556163);
   hnumuCCinFV_stack_12->SetBinContent(16,8.221421);
   hnumuCCinFV_stack_12->SetBinContent(17,10.49857);
   hnumuCCinFV_stack_12->SetBinContent(18,11.32179);
   hnumuCCinFV_stack_12->SetBinContent(19,8.534119);
   hnumuCCinFV_stack_12->SetBinContent(20,11.11087);
   hnumuCCinFV_stack_12->SetBinContent(21,11.26333);
   hnumuCCinFV_stack_12->SetBinContent(22,14.57328);
   hnumuCCinFV_stack_12->SetBinContent(23,19.16636);
   hnumuCCinFV_stack_12->SetBinContent(24,22.50474);
   hnumuCCinFV_stack_12->SetBinError(1,2.563326);
   hnumuCCinFV_stack_12->SetBinError(2,1.141639);
   hnumuCCinFV_stack_12->SetBinError(3,1.106882);
   hnumuCCinFV_stack_12->SetBinError(4,1.323215);
   hnumuCCinFV_stack_12->SetBinError(5,1.074731);
   hnumuCCinFV_stack_12->SetBinError(6,1.584679);
   hnumuCCinFV_stack_12->SetBinError(7,1.220673);
   hnumuCCinFV_stack_12->SetBinError(8,1.640634);
   hnumuCCinFV_stack_12->SetBinError(9,1.21131);
   hnumuCCinFV_stack_12->SetBinError(10,1.743676);
   hnumuCCinFV_stack_12->SetBinError(11,1.617913);
   hnumuCCinFV_stack_12->SetBinError(12,1.236991);
   hnumuCCinFV_stack_12->SetBinError(13,1.614219);
   hnumuCCinFV_stack_12->SetBinError(14,1.400176);
   hnumuCCinFV_stack_12->SetBinError(15,1.447908);
   hnumuCCinFV_stack_12->SetBinError(16,1.540619);
   hnumuCCinFV_stack_12->SetBinError(17,2.447555);
   hnumuCCinFV_stack_12->SetBinError(18,1.884199);
   hnumuCCinFV_stack_12->SetBinError(19,1.936709);
   hnumuCCinFV_stack_12->SetBinError(20,1.995612);
   hnumuCCinFV_stack_12->SetBinError(21,1.841756);
   hnumuCCinFV_stack_12->SetBinError(22,1.941487);
   hnumuCCinFV_stack_12->SetBinError(23,2.459605);
   hnumuCCinFV_stack_12->SetBinError(24,2.696421);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.6959798);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(7,0.4469234);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(17,0.4634305);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.9398632);
   hnueCCinFV_stack_13->SetBinContent(21,1.341621);
   hnueCCinFV_stack_13->SetBinContent(22,1.523243);
   hnueCCinFV_stack_13->SetBinContent(23,2.247246);
   hnueCCinFV_stack_13->SetBinContent(24,1.49923);
   hnueCCinFV_stack_13->SetBinError(1,0.4110107);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(7,0.3182782);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1529246);
   hnueCCinFV_stack_13->SetBinError(17,0.328346);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.7687429);
   hnueCCinFV_stack_13->SetBinError(21,0.5627537);
   hnueCCinFV_stack_13->SetBinError(22,0.6469036);
   hnueCCinFV_stack_13->SetBinError(23,1.334451);
   hnueCCinFV_stack_13->SetBinError(24,0.653517);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__8->SetBinContent(1,88.34391);
   hmcerror__8->SetBinContent(2,45.03667);
   hmcerror__8->SetBinContent(3,33.86048);
   hmcerror__8->SetBinContent(4,37.97649);
   hmcerror__8->SetBinContent(5,36.23175);
   hmcerror__8->SetBinContent(6,34.01802);
   hmcerror__8->SetBinContent(7,38.96066);
   hmcerror__8->SetBinContent(8,37.51113);
   hmcerror__8->SetBinContent(9,38.66384);
   hmcerror__8->SetBinContent(10,38.70012);
   hmcerror__8->SetBinContent(11,47.02547);
   hmcerror__8->SetBinContent(12,49.42957);
   hmcerror__8->SetBinContent(13,51.76692);
   hmcerror__8->SetBinContent(14,61.04206);
   hmcerror__8->SetBinContent(15,66.60308);
   hmcerror__8->SetBinContent(16,60.07517);
   hmcerror__8->SetBinContent(17,65.59541);
   hmcerror__8->SetBinContent(18,78.39642);
   hmcerror__8->SetBinContent(19,87.18454);
   hmcerror__8->SetBinContent(20,105.9498);
   hmcerror__8->SetBinContent(21,125.5382);
   hmcerror__8->SetBinContent(22,149.8533);
   hmcerror__8->SetBinContent(23,162.1613);
   hmcerror__8->SetBinContent(24,145.1312);
   hmcerror__8->SetBinError(1,28.90885);
   hmcerror__8->SetBinError(2,27.68325);
   hmcerror__8->SetBinError(3,15.64204);
   hmcerror__8->SetBinError(4,20.54244);
   hmcerror__8->SetBinError(5,16.62923);
   hmcerror__8->SetBinError(6,14.01061);
   hmcerror__8->SetBinError(7,19.0759);
   hmcerror__8->SetBinError(8,15.39356);
   hmcerror__8->SetBinError(9,14.77179);
   hmcerror__8->SetBinError(10,13.35045);
   hmcerror__8->SetBinError(11,14.47919);
   hmcerror__8->SetBinError(12,18.10503);
   hmcerror__8->SetBinError(13,21.05937);
   hmcerror__8->SetBinError(14,20.94428);
   hmcerror__8->SetBinError(15,22.36541);
   hmcerror__8->SetBinError(16,24.13606);
   hmcerror__8->SetBinError(17,21.37736);
   hmcerror__8->SetBinError(18,24.97775);
   hmcerror__8->SetBinError(19,33.78052);
   hmcerror__8->SetBinError(20,36.40326);
   hmcerror__8->SetBinError(21,36.99022);
   hmcerror__8->SetBinError(22,47.16739);
   hmcerror__8->SetBinError(23,42.57509);
   hmcerror__8->SetBinError(24,37.88873);
   hmcerror__8->SetBinError(25,0.3895343);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3009[24] = {
   81,
   47,
   34,
   32,
   24,
   27,
   34,
   28,
   33,
   53,
   34,
   39,
   44,
   46,
   60,
   50,
   68,
   65,
   82,
   98,
   90,
   130,
   128,
   143};
   Double_t _felx3009[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3009[24] = {
   9.1239,
   6.9882,
   5.9703,
   5.7977,
   5.0476,
   5.3414,
   5.9703,
   5.4358,
   5.8847,
   7.4105,
   5.9703,
   6.3813,
   6.7671,
   6.9153,
   7.8743,
   7.2025,
   8.3726,
   8.1893,
   9.1791,
   10.0209,
   9.6093,
   11.40175,
   11.31371,
   11.95826};
   Double_t _fehx3009[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3009[24] = {
   8.9221,
   6.7839,
   5.7635,
   5.5904,
   4.837,
   5.1322,
   5.7635,
   5.2271,
   5.6776,
   7.2068,
   5.7635,
   6.1757,
   6.5623,
   6.7108,
   7.6713,
   6.9985,
   8.1701,
   7.9866,
   8.9774,
   9.82,
   9.4079,
   11.40175,
   11.31371,
   11.95826};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(5.351814);
   Graph_Graph3009->SetMaximum(168.5588);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3010[24] = {
   0.3272309,
   0.6146823,
   0.4619558,
   0.5409253,
   0.4589683,
   0.4118584,
   0.4896194,
   0.4103732,
   0.3820571,
   0.3449717,
   0.307901,
   0.3662793,
   0.4068114,
   0.3431123,
   0.3358014,
   0.4017643,
   0.3258972,
   0.3186083,
   0.3874599,
   0.3435898,
   0.2946531,
   0.314757,
   0.2625479,
   0.2610654};
   Double_t _fehx3010[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3010[24] = {
   0.3272309,
   0.6146823,
   0.4619558,
   0.5409253,
   0.4589683,
   0.4118584,
   0.4896194,
   0.4103732,
   0.3820571,
   0.3449717,
   0.307901,
   0.3662793,
   0.4068114,
   0.3431123,
   0.3358014,
   0.4017643,
   0.3258972,
   0.3186083,
   0.3874599,
   0.3435898,
   0.2946531,
   0.314757,
   0.2625479,
   0.2610654};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3011[24] = {
   0.1754372,
   0.1749399,
   0.1870942,
   0.1883881,
   0.1950411,
   0.1834735,
   0.1965656,
   0.2056937,
   0.1938993,
   0.2050443,
   0.1932261,
   0.2040218,
   0.1938561,
   0.183188,
   0.1942644,
   0.21887,
   0.2168122,
   0.2077743,
   0.203595,
   0.2141704,
   0.2122029,
   0.2007796,
   0.1851386,
   0.1629417};
   Double_t _fehx3011[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3011[24] = {
   0.1754372,
   0.1749399,
   0.1870942,
   0.1883881,
   0.1950411,
   0.1834735,
   0.1965656,
   0.2056937,
   0.1938993,
   0.2050443,
   0.1932261,
   0.2040218,
   0.1938561,
   0.183188,
   0.1942644,
   0.21887,
   0.2168122,
   0.2077743,
   0.203595,
   0.2141704,
   0.2122029,
   0.2007796,
   0.1851386,
   0.1629417};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3012[24] = {
   0.9168713,
   1.043594,
   1.004121,
   0.8426267,
   0.6624024,
   0.793697,
   0.8726752,
   0.7464451,
   0.8535107,
   1.369505,
   0.7230124,
   0.7890015,
   0.8499636,
   0.7535788,
   0.9008592,
   0.8322906,
   1.036658,
   0.8291195,
   0.9405337,
   0.9249665,
   0.7169132,
   0.8675149,
   0.7893377,
   0.9853156};
   Double_t _felx3012[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3012[24] = {
   0.1032771,
   0.1551669,
   0.1763206,
   0.1526655,
   0.1393143,
   0.1570168,
   0.1532392,
   0.1449117,
   0.1522017,
   0.1914852,
   0.1269588,
   0.1290988,
   0.1307225,
   0.1132875,
   0.1182273,
   0.1198915,
   0.12764,
   0.1044601,
   0.1052836,
   0.0945816,
   0.07654482,
   0.07608609,
   0.06976826,
   0.08239623};
   Double_t _fehx3012[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3012[24] = {
   0.1009928,
   0.1506306,
   0.1702132,
   0.1472069,
   0.1335017,
   0.1508671,
   0.1479313,
   0.139348,
   0.1468452,
   0.1862216,
   0.1225612,
   0.1249394,
   0.1267663,
   0.1099373,
   0.1151794,
   0.1164957,
   0.1245529,
   0.1018746,
   0.1029701,
   0.09268542,
   0.07494053,
   0.07608609,
   0.06976826,
   0.08239623};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.4198244);
   Graph_Graph3012->SetMaximum(1.65899);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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

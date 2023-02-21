#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 22:48:01 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",164,172,1200,900);
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
   pad1->Range(-0.4846154,-2.9,3.553846,320.6789);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__7->SetBinContent(1,42.10472);
   hmc__7->SetBinContent(2,91.92041);
   hmc__7->SetBinContent(3,129.3737);
   hmc__7->SetBinContent(4,138.4887);
   hmc__7->SetBinContent(5,142.3413);
   hmc__7->SetBinContent(6,119.4691);
   hmc__7->SetBinContent(7,111.0328);
   hmc__7->SetBinContent(8,104.2595);
   hmc__7->SetBinContent(9,86.43457);
   hmc__7->SetBinContent(10,75.46825);
   hmc__7->SetBinContent(11,65.10506);
   hmc__7->SetBinContent(12,53.08718);
   hmc__7->SetBinContent(13,54.27817);
   hmc__7->SetBinContent(14,44.02825);
   hmc__7->SetBinContent(15,42.35527);
   hmc__7->SetBinContent(16,47.47332);
   hmc__7->SetBinContent(17,41.74756);
   hmc__7->SetBinContent(18,38.62017);
   hmc__7->SetBinContent(19,33.22054);
   hmc__7->SetBinContent(20,25.21532);
   hmc__7->SetBinContent(21,37.02817);
   hmc__7->SetBinContent(22,23.96841);
   hmc__7->SetBinContent(23,24.48864);
   hmc__7->SetBinContent(24,16.93793);
   hmc__7->SetBinContent(25,5.706434);
   hmc__7->SetBinError(1,19.01261);
   hmc__7->SetBinError(2,33.33151);
   hmc__7->SetBinError(3,34.27964);
   hmc__7->SetBinError(4,35.47227);
   hmc__7->SetBinError(5,38.61938);
   hmc__7->SetBinError(6,35.62501);
   hmc__7->SetBinError(7,31.47082);
   hmc__7->SetBinError(8,36.01677);
   hmc__7->SetBinError(9,24.86598);
   hmc__7->SetBinError(10,22.82752);
   hmc__7->SetBinError(11,22.8862);
   hmc__7->SetBinError(12,15.46502);
   hmc__7->SetBinError(13,18.79438);
   hmc__7->SetBinError(14,15.61933);
   hmc__7->SetBinError(15,14.76356);
   hmc__7->SetBinError(16,15.00577);
   hmc__7->SetBinError(17,25.92903);
   hmc__7->SetBinError(18,16.89479);
   hmc__7->SetBinError(19,15.11014);
   hmc__7->SetBinError(20,13.02476);
   hmc__7->SetBinError(21,19.94959);
   hmc__7->SetBinError(22,12.81681);
   hmc__7->SetBinError(23,13.51678);
   hmc__7->SetBinError(24,12.67229);
   hmc__7->SetBinError(25,5.243582);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-2.9);
   hmc__7->SetMaximum(304.5);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,3.15);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(149.4584);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.127039);
   hbadmatch_stack_1->SetBinContent(2,1.766846);
   hbadmatch_stack_1->SetBinContent(3,3.487595);
   hbadmatch_stack_1->SetBinContent(4,4.206717);
   hbadmatch_stack_1->SetBinContent(5,2.250321);
   hbadmatch_stack_1->SetBinContent(6,2.768225);
   hbadmatch_stack_1->SetBinContent(7,2.569758);
   hbadmatch_stack_1->SetBinContent(8,3.99153);
   hbadmatch_stack_1->SetBinContent(9,3.560309);
   hbadmatch_stack_1->SetBinContent(10,2.438307);
   hbadmatch_stack_1->SetBinContent(11,3.86669);
   hbadmatch_stack_1->SetBinContent(12,2.252037);
   hbadmatch_stack_1->SetBinContent(13,2.292383);
   hbadmatch_stack_1->SetBinContent(14,2.390484);
   hbadmatch_stack_1->SetBinContent(15,2.410235);
   hbadmatch_stack_1->SetBinContent(16,2.360972);
   hbadmatch_stack_1->SetBinContent(17,1.724211);
   hbadmatch_stack_1->SetBinContent(18,1.430251);
   hbadmatch_stack_1->SetBinContent(19,1.68595);
   hbadmatch_stack_1->SetBinContent(20,1.092753);
   hbadmatch_stack_1->SetBinContent(21,0.5909022);
   hbadmatch_stack_1->SetBinContent(22,1.479171);
   hbadmatch_stack_1->SetBinContent(23,0.8690801);
   hbadmatch_stack_1->SetBinContent(24,1.001286);
   hbadmatch_stack_1->SetBinContent(25,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.5201044);
   hbadmatch_stack_1->SetBinError(2,0.746182);
   hbadmatch_stack_1->SetBinError(3,1.346878);
   hbadmatch_stack_1->SetBinError(4,1.086349);
   hbadmatch_stack_1->SetBinError(5,0.6869654);
   hbadmatch_stack_1->SetBinError(6,0.7871438);
   hbadmatch_stack_1->SetBinError(7,0.8875225);
   hbadmatch_stack_1->SetBinError(8,1.043986);
   hbadmatch_stack_1->SetBinError(9,1.141203);
   hbadmatch_stack_1->SetBinError(10,0.8137992);
   hbadmatch_stack_1->SetBinError(11,1.128807);
   hbadmatch_stack_1->SetBinError(12,0.9053944);
   hbadmatch_stack_1->SetBinError(13,0.8200484);
   hbadmatch_stack_1->SetBinError(14,0.8823266);
   hbadmatch_stack_1->SetBinError(15,0.7170834);
   hbadmatch_stack_1->SetBinError(16,0.8749333);
   hbadmatch_stack_1->SetBinError(17,0.7363417);
   hbadmatch_stack_1->SetBinError(18,0.6606003);
   hbadmatch_stack_1->SetBinError(19,0.7197907);
   hbadmatch_stack_1->SetBinError(20,0.4607023);
   hbadmatch_stack_1->SetBinError(21,0.4225916);
   hbadmatch_stack_1->SetBinError(22,0.5814683);
   hbadmatch_stack_1->SetBinError(23,0.4365724);
   hbadmatch_stack_1->SetBinError(24,0.54016);
   hbadmatch_stack_1->SetBinError(25,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,2.916804);
   hext_stack_2->SetBinContent(2,7.544977);
   hext_stack_2->SetBinContent(3,15.34091);
   hext_stack_2->SetBinContent(4,17.2454);
   hext_stack_2->SetBinContent(5,23.1672);
   hext_stack_2->SetBinContent(6,19.33906);
   hext_stack_2->SetBinContent(7,19.07091);
   hext_stack_2->SetBinContent(8,13.84862);
   hext_stack_2->SetBinContent(9,17.15325);
   hext_stack_2->SetBinContent(10,17.82522);
   hext_stack_2->SetBinContent(11,14.32583);
   hext_stack_2->SetBinContent(12,14.37767);
   hext_stack_2->SetBinContent(13,11.83276);
   hext_stack_2->SetBinContent(14,14.60273);
   hext_stack_2->SetBinContent(15,10.38676);
   hext_stack_2->SetBinContent(16,16.86633);
   hext_stack_2->SetBinContent(17,12.39097);
   hext_stack_2->SetBinContent(18,11.36871);
   hext_stack_2->SetBinContent(19,7.26247);
   hext_stack_2->SetBinContent(20,3.490578);
   hext_stack_2->SetBinContent(21,9.194493);
   hext_stack_2->SetBinContent(22,2.110787);
   hext_stack_2->SetBinContent(23,2.185808);
   hext_stack_2->SetBinContent(24,2.517386);
   hext_stack_2->SetBinContent(25,1.219797);
   hext_stack_2->SetBinError(1,1.132884);
   hext_stack_2->SetBinError(2,1.718112);
   hext_stack_2->SetBinError(3,2.747657);
   hext_stack_2->SetBinError(4,2.692591);
   hext_stack_2->SetBinError(5,3.437146);
   hext_stack_2->SetBinError(6,2.956409);
   hext_stack_2->SetBinError(7,3.027159);
   hext_stack_2->SetBinError(8,2.451827);
   hext_stack_2->SetBinError(9,2.779835);
   hext_stack_2->SetBinError(10,2.793885);
   hext_stack_2->SetBinError(11,2.510567);
   hext_stack_2->SetBinError(12,2.587739);
   hext_stack_2->SetBinError(13,2.108581);
   hext_stack_2->SetBinError(14,2.735007);
   hext_stack_2->SetBinError(15,1.993501);
   hext_stack_2->SetBinError(16,2.901397);
   hext_stack_2->SetBinError(17,2.633605);
   hext_stack_2->SetBinError(18,2.427015);
   hext_stack_2->SetBinError(19,1.943618);
   hext_stack_2->SetBinError(20,1.110227);
   hext_stack_2->SetBinError(21,2.193503);
   hext_stack_2->SetBinError(22,0.8669371);
   hext_stack_2->SetBinError(23,1.006415);
   hext_stack_2->SetBinError(24,0.9575503);
   hext_stack_2->SetBinError(25,0.7042499);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.6097389);
   hdirt_stack_3->SetBinContent(2,0.6143302);
   hdirt_stack_3->SetBinContent(3,2.77038);
   hdirt_stack_3->SetBinContent(4,1.216818);
   hdirt_stack_3->SetBinContent(5,2.303059);
   hdirt_stack_3->SetBinContent(6,1.875252);
   hdirt_stack_3->SetBinContent(7,1.110076);
   hdirt_stack_3->SetBinContent(8,1.144712);
   hdirt_stack_3->SetBinContent(9,2.368311);
   hdirt_stack_3->SetBinContent(10,1.016988);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.195944);
   hdirt_stack_3->SetBinContent(15,0.4950385);
   hdirt_stack_3->SetBinContent(16,1.320992);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.4762587);
   hdirt_stack_3->SetBinContent(19,2.193663);
   hdirt_stack_3->SetBinContent(20,0.5570828);
   hdirt_stack_3->SetBinContent(21,0.5276377);
   hdirt_stack_3->SetBinContent(22,0.2228245);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.6951543);
   hdirt_stack_3->SetBinError(1,0.3899956);
   hdirt_stack_3->SetBinError(2,0.39051);
   hdirt_stack_3->SetBinError(3,0.9467857);
   hdirt_stack_3->SetBinError(4,0.5736278);
   hdirt_stack_3->SetBinError(5,0.7569174);
   hdirt_stack_3->SetBinError(6,0.7100193);
   hdirt_stack_3->SetBinError(7,0.5945665);
   hdirt_stack_3->SetBinError(8,0.570499);
   hdirt_stack_3->SetBinError(9,0.7950173);
   hdirt_stack_3->SetBinError(10,0.4914952);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.6109736);
   hdirt_stack_3->SetBinError(15,0.2933304);
   hdirt_stack_3->SetBinError(16,0.5974245);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.3652866);
   hdirt_stack_3->SetBinError(19,1.110895);
   hdirt_stack_3->SetBinError(20,0.4028472);
   hdirt_stack_3->SetBinError(21,0.4133105);
   hdirt_stack_3->SetBinError(22,0.2189309);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.4258516);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,6.969744);
   houtFV_stack_4->SetBinContent(2,14.57003);
   houtFV_stack_4->SetBinContent(3,25.65081);
   houtFV_stack_4->SetBinContent(4,24.12292);
   houtFV_stack_4->SetBinContent(5,25.90328);
   houtFV_stack_4->SetBinContent(6,23.76804);
   houtFV_stack_4->SetBinContent(7,20.26601);
   houtFV_stack_4->SetBinContent(8,22.13273);
   houtFV_stack_4->SetBinContent(9,11.27048);
   houtFV_stack_4->SetBinContent(10,12.05149);
   houtFV_stack_4->SetBinContent(11,9.806111);
   houtFV_stack_4->SetBinContent(12,7.271877);
   houtFV_stack_4->SetBinContent(13,11.59582);
   houtFV_stack_4->SetBinContent(14,8.208401);
   houtFV_stack_4->SetBinContent(15,7.429233);
   houtFV_stack_4->SetBinContent(16,9.206865);
   houtFV_stack_4->SetBinContent(17,9.751333);
   houtFV_stack_4->SetBinContent(18,8.83651);
   houtFV_stack_4->SetBinContent(19,9.175963);
   houtFV_stack_4->SetBinContent(20,6.98016);
   houtFV_stack_4->SetBinContent(21,10.23693);
   houtFV_stack_4->SetBinContent(22,7.335854);
   houtFV_stack_4->SetBinContent(23,9.68301);
   houtFV_stack_4->SetBinContent(24,4.424364);
   houtFV_stack_4->SetBinContent(25,2.039438);
   houtFV_stack_4->SetBinError(1,1.489188);
   houtFV_stack_4->SetBinError(2,1.909777);
   houtFV_stack_4->SetBinError(3,2.554603);
   houtFV_stack_4->SetBinError(4,2.635196);
   houtFV_stack_4->SetBinError(5,2.470925);
   houtFV_stack_4->SetBinError(6,2.46552);
   houtFV_stack_4->SetBinError(7,2.299218);
   houtFV_stack_4->SetBinError(8,2.559282);
   houtFV_stack_4->SetBinError(9,1.610205);
   houtFV_stack_4->SetBinError(10,1.772745);
   houtFV_stack_4->SetBinError(11,1.5555);
   houtFV_stack_4->SetBinError(12,1.324065);
   houtFV_stack_4->SetBinError(13,1.723234);
   houtFV_stack_4->SetBinError(14,1.420673);
   houtFV_stack_4->SetBinError(15,1.371838);
   houtFV_stack_4->SetBinError(16,1.91449);
   houtFV_stack_4->SetBinError(17,1.567018);
   houtFV_stack_4->SetBinError(18,1.484448);
   houtFV_stack_4->SetBinError(19,1.454008);
   houtFV_stack_4->SetBinError(20,1.217927);
   houtFV_stack_4->SetBinError(21,1.62984);
   houtFV_stack_4->SetBinError(22,1.498383);
   houtFV_stack_4->SetBinError(23,1.610624);
   houtFV_stack_4->SetBinError(24,1.020866);
   houtFV_stack_4->SetBinError(25,0.6636025);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.936262);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.641607);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.633024);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.571419);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.478615);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7325984);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6230889);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1994521);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1963282);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2203893);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1007786);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.0840595);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4506084);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7486452);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5823206);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5295983);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6022332);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3175293);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2739062);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1352015);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1963282);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1563048);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1007786);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05247946);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1430707);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08840275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1783154);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2491226);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4470094);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1229801);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1996508);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04724823);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.04671451);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.09342086);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0280365);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.0280365);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02588351);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05535072);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1127391);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05852792);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1322906);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1384923);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2943745);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06381504);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.08229516);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0279678);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03365108);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05078864);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02036872);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02036872);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02009868);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03195992);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.234097);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.17591);
   hNCpi0inFVres_stack_7->SetBinContent(3,17.73035);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.60288);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.31263);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.74189);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.99741);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.80415);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.02973);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.102822);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.357677);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.164598);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.175981);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.682926);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.004064);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.727609);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.491868);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.511596);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.277059);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.738035);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.323056);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.612716);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.172518);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.778731);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4750278);
   hNCpi0inFVres_stack_7->SetBinError(1,0.802537);
   hNCpi0inFVres_stack_7->SetBinError(2,1.203517);
   hNCpi0inFVres_stack_7->SetBinError(3,1.365199);
   hNCpi0inFVres_stack_7->SetBinError(4,1.492657);
   hNCpi0inFVres_stack_7->SetBinError(5,1.509542);
   hNCpi0inFVres_stack_7->SetBinError(6,1.44276);
   hNCpi0inFVres_stack_7->SetBinError(7,1.291639);
   hNCpi0inFVres_stack_7->SetBinError(8,1.354046);
   hNCpi0inFVres_stack_7->SetBinError(9,1.138412);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8031139);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9076602);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8848057);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8743817);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7415639);
   hNCpi0inFVres_stack_7->SetBinError(15,0.82561);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6686942);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7903393);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5207206);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4191253);
   hNCpi0inFVres_stack_7->SetBinError(20,0.423653);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4293579);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4923899);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4068498);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5231467);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2950082);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.687249);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.245137);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.89031);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.42038);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.399218);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.646034);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.808058);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.330669);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.115151);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.027528);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.105643);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.376274);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.44125);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.979063);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.11797);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.272626);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6252022);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7929351);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.158904);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2028129);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.089755);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7196398);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.4110503);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.048543);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.03728024);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8196087);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.130199);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9075048);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.441405);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.052936);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.481468);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9771887);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6592935);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5734278);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4670906);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4513321);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3020282);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4528702);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2500374);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3272007);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6074336);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2240218);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3652358);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3482393);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08757899);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3586311);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2363762);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1633977);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5747417);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03728024);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,11.45639);
   hCCpi0inFV_stack_10->SetBinContent(2,23.27334);
   hCCpi0inFV_stack_10->SetBinContent(3,29.28457);
   hCCpi0inFV_stack_10->SetBinContent(4,29.35838);
   hCCpi0inFV_stack_10->SetBinContent(5,28.72764);
   hCCpi0inFV_stack_10->SetBinContent(6,24.51327);
   hCCpi0inFV_stack_10->SetBinContent(7,23.83979);
   hCCpi0inFV_stack_10->SetBinContent(8,22.93003);
   hCCpi0inFV_stack_10->SetBinContent(9,19.6019);
   hCCpi0inFV_stack_10->SetBinContent(10,13.05933);
   hCCpi0inFV_stack_10->SetBinContent(11,11.82042);
   hCCpi0inFV_stack_10->SetBinContent(12,7.132347);
   hCCpi0inFV_stack_10->SetBinContent(13,8.463842);
   hCCpi0inFV_stack_10->SetBinContent(14,6.812021);
   hCCpi0inFV_stack_10->SetBinContent(15,7.186436);
   hCCpi0inFV_stack_10->SetBinContent(16,5.206714);
   hCCpi0inFV_stack_10->SetBinContent(17,6.458098);
   hCCpi0inFV_stack_10->SetBinContent(18,7.381421);
   hCCpi0inFV_stack_10->SetBinContent(19,4.69811);
   hCCpi0inFV_stack_10->SetBinContent(20,6.484297);
   hCCpi0inFV_stack_10->SetBinContent(21,6.615863);
   hCCpi0inFV_stack_10->SetBinContent(22,4.199863);
   hCCpi0inFV_stack_10->SetBinContent(23,5.9924);
   hCCpi0inFV_stack_10->SetBinContent(24,3.814277);
   hCCpi0inFV_stack_10->SetBinContent(25,0.785171);
   hCCpi0inFV_stack_10->SetBinError(1,1.714287);
   hCCpi0inFV_stack_10->SetBinError(2,2.426118);
   hCCpi0inFV_stack_10->SetBinError(3,2.78025);
   hCCpi0inFV_stack_10->SetBinError(4,2.746393);
   hCCpi0inFV_stack_10->SetBinError(5,2.684715);
   hCCpi0inFV_stack_10->SetBinError(6,2.517341);
   hCCpi0inFV_stack_10->SetBinError(7,2.517916);
   hCCpi0inFV_stack_10->SetBinError(8,2.445899);
   hCCpi0inFV_stack_10->SetBinError(9,2.225243);
   hCCpi0inFV_stack_10->SetBinError(10,1.808232);
   hCCpi0inFV_stack_10->SetBinError(11,1.647688);
   hCCpi0inFV_stack_10->SetBinError(12,1.323805);
   hCCpi0inFV_stack_10->SetBinError(13,1.458083);
   hCCpi0inFV_stack_10->SetBinError(14,1.305746);
   hCCpi0inFV_stack_10->SetBinError(15,1.363673);
   hCCpi0inFV_stack_10->SetBinError(16,1.149687);
   hCCpi0inFV_stack_10->SetBinError(17,1.266071);
   hCCpi0inFV_stack_10->SetBinError(18,1.323959);
   hCCpi0inFV_stack_10->SetBinError(19,1.057394);
   hCCpi0inFV_stack_10->SetBinError(20,1.323698);
   hCCpi0inFV_stack_10->SetBinError(21,1.291617);
   hCCpi0inFV_stack_10->SetBinError(22,1.057357);
   hCCpi0inFV_stack_10->SetBinError(23,1.214718);
   hCCpi0inFV_stack_10->SetBinError(24,0.9193991);
   hCCpi0inFV_stack_10->SetBinError(25,0.3925882);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.047403);
   hNCinFV_stack_11->SetBinContent(2,8.454613);
   hNCinFV_stack_11->SetBinContent(3,7.024047);
   hNCinFV_stack_11->SetBinContent(4,8.563929);
   hNCinFV_stack_11->SetBinContent(5,9.661544);
   hNCinFV_stack_11->SetBinContent(6,6.928313);
   hNCinFV_stack_11->SetBinContent(7,3.629174);
   hNCinFV_stack_11->SetBinContent(8,3.805738);
   hNCinFV_stack_11->SetBinContent(9,2.973545);
   hNCinFV_stack_11->SetBinContent(10,2.307709);
   hNCinFV_stack_11->SetBinContent(11,2.766236);
   hNCinFV_stack_11->SetBinContent(12,0.6295798);
   hNCinFV_stack_11->SetBinContent(13,0.8332279);
   hNCinFV_stack_11->SetBinContent(14,0.8753801);
   hNCinFV_stack_11->SetBinContent(15,1.117689);
   hNCinFV_stack_11->SetBinContent(16,1.176913);
   hNCinFV_stack_11->SetBinContent(17,0.5138904);
   hNCinFV_stack_11->SetBinContent(18,1.025734);
   hNCinFV_stack_11->SetBinContent(19,0.6573527);
   hNCinFV_stack_11->SetBinContent(20,0.9295557);
   hNCinFV_stack_11->SetBinContent(21,1.670208);
   hNCinFV_stack_11->SetBinContent(22,1.709275);
   hNCinFV_stack_11->SetBinContent(23,0.3204102);
   hNCinFV_stack_11->SetBinContent(24,0.3934307);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.6305865);
   hNCinFV_stack_11->SetBinError(2,1.782596);
   hNCinFV_stack_11->SetBinError(3,1.426532);
   hNCinFV_stack_11->SetBinError(4,1.528339);
   hNCinFV_stack_11->SetBinError(5,1.855101);
   hNCinFV_stack_11->SetBinError(6,1.388852);
   hNCinFV_stack_11->SetBinError(7,0.8213013);
   hNCinFV_stack_11->SetBinError(8,1.035931);
   hNCinFV_stack_11->SetBinError(9,0.9405526);
   hNCinFV_stack_11->SetBinError(10,0.7411722);
   hNCinFV_stack_11->SetBinError(11,0.9902934);
   hNCinFV_stack_11->SetBinError(12,0.3248154);
   hNCinFV_stack_11->SetBinError(13,0.3877785);
   hNCinFV_stack_11->SetBinError(14,0.5191111);
   hNCinFV_stack_11->SetBinError(15,0.493954);
   hNCinFV_stack_11->SetBinError(16,0.5399022);
   hNCinFV_stack_11->SetBinError(17,0.3027413);
   hNCinFV_stack_11->SetBinError(18,0.4091098);
   hNCinFV_stack_11->SetBinError(19,0.4107021);
   hNCinFV_stack_11->SetBinError(20,0.4206107);
   hNCinFV_stack_11->SetBinError(21,0.6602156);
   hNCinFV_stack_11->SetBinError(22,0.8686709);
   hNCinFV_stack_11->SetBinError(23,0.2323733);
   hNCinFV_stack_11->SetBinError(24,0.2781975);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.41751);
   hnumuCCinFV_stack_12->SetBinContent(2,8.637235);
   hnumuCCinFV_stack_12->SetBinContent(3,17.434);
   hnumuCCinFV_stack_12->SetBinContent(4,19.07094);
   hnumuCCinFV_stack_12->SetBinContent(5,17.4941);
   hnumuCCinFV_stack_12->SetBinContent(6,15.49825);
   hnumuCCinFV_stack_12->SetBinContent(7,16.91883);
   hnumuCCinFV_stack_12->SetBinContent(8,13.61296);
   hnumuCCinFV_stack_12->SetBinContent(9,14.28715);
   hnumuCCinFV_stack_12->SetBinContent(10,15.28959);
   hnumuCCinFV_stack_12->SetBinContent(11,10.74594);
   hnumuCCinFV_stack_12->SetBinContent(12,10.49776);
   hnumuCCinFV_stack_12->SetBinContent(13,10.38951);
   hnumuCCinFV_stack_12->SetBinContent(14,3.253262);
   hnumuCCinFV_stack_12->SetBinContent(15,6.181961);
   hnumuCCinFV_stack_12->SetBinContent(16,5.334293);
   hnumuCCinFV_stack_12->SetBinContent(17,4.635683);
   hnumuCCinFV_stack_12->SetBinContent(18,3.463338);
   hnumuCCinFV_stack_12->SetBinContent(19,3.590342);
   hnumuCCinFV_stack_12->SetBinContent(20,2.714159);
   hnumuCCinFV_stack_12->SetBinContent(21,4.205427);
   hnumuCCinFV_stack_12->SetBinContent(22,3.161173);
   hnumuCCinFV_stack_12->SetBinContent(23,1.80647);
   hnumuCCinFV_stack_12->SetBinContent(24,1.180705);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinError(1,1.519704);
   hnumuCCinFV_stack_12->SetBinError(2,1.605992);
   hnumuCCinFV_stack_12->SetBinError(3,3.015888);
   hnumuCCinFV_stack_12->SetBinError(4,3.241329);
   hnumuCCinFV_stack_12->SetBinError(5,2.509654);
   hnumuCCinFV_stack_12->SetBinError(6,2.079809);
   hnumuCCinFV_stack_12->SetBinError(7,2.229403);
   hnumuCCinFV_stack_12->SetBinError(8,1.978442);
   hnumuCCinFV_stack_12->SetBinError(9,1.975012);
   hnumuCCinFV_stack_12->SetBinError(10,2.149364);
   hnumuCCinFV_stack_12->SetBinError(11,1.85872);
   hnumuCCinFV_stack_12->SetBinError(12,1.76647);
   hnumuCCinFV_stack_12->SetBinError(13,1.731023);
   hnumuCCinFV_stack_12->SetBinError(14,0.9654971);
   hnumuCCinFV_stack_12->SetBinError(15,1.627537);
   hnumuCCinFV_stack_12->SetBinError(16,1.242222);
   hnumuCCinFV_stack_12->SetBinError(17,1.147174);
   hnumuCCinFV_stack_12->SetBinError(18,0.9857584);
   hnumuCCinFV_stack_12->SetBinError(19,1.036736);
   hnumuCCinFV_stack_12->SetBinError(20,0.8528964);
   hnumuCCinFV_stack_12->SetBinError(21,1.073895);
   hnumuCCinFV_stack_12->SetBinError(22,0.8572944);
   hnumuCCinFV_stack_12->SetBinError(23,0.7090367);
   hnumuCCinFV_stack_12->SetBinError(24,0.5430306);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.559415);
   hnueCCinFV_stack_13->SetBinContent(2,4.90797);
   hnueCCinFV_stack_13->SetBinContent(3,0.9320427);
   hnueCCinFV_stack_13->SetBinContent(4,0.8441336);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(18,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.5901461);
   hnueCCinFV_stack_13->SetBinError(1,0.6739983);
   hnueCCinFV_stack_13->SetBinError(2,2.194873);
   hnueCCinFV_stack_13->SetBinError(3,0.5818021);
   hnueCCinFV_stack_13->SetBinError(4,0.4232719);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.1529246);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(18,0.3025491);
   hnueCCinFV_stack_13->SetBinError(19,0.2502081);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.340721);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__8->SetBinContent(1,42.10472);
   hmcerror__8->SetBinContent(2,91.92041);
   hmcerror__8->SetBinContent(3,129.3737);
   hmcerror__8->SetBinContent(4,138.4887);
   hmcerror__8->SetBinContent(5,142.3413);
   hmcerror__8->SetBinContent(6,119.4691);
   hmcerror__8->SetBinContent(7,111.0328);
   hmcerror__8->SetBinContent(8,104.2595);
   hmcerror__8->SetBinContent(9,86.43457);
   hmcerror__8->SetBinContent(10,75.46825);
   hmcerror__8->SetBinContent(11,65.10506);
   hmcerror__8->SetBinContent(12,53.08718);
   hmcerror__8->SetBinContent(13,54.27817);
   hmcerror__8->SetBinContent(14,44.02825);
   hmcerror__8->SetBinContent(15,42.35527);
   hmcerror__8->SetBinContent(16,47.47332);
   hmcerror__8->SetBinContent(17,41.74756);
   hmcerror__8->SetBinContent(18,38.62017);
   hmcerror__8->SetBinContent(19,33.22054);
   hmcerror__8->SetBinContent(20,25.21532);
   hmcerror__8->SetBinContent(21,37.02817);
   hmcerror__8->SetBinContent(22,23.96841);
   hmcerror__8->SetBinContent(23,24.48864);
   hmcerror__8->SetBinContent(24,16.93793);
   hmcerror__8->SetBinContent(25,5.706434);
   hmcerror__8->SetBinError(1,19.01261);
   hmcerror__8->SetBinError(2,33.33151);
   hmcerror__8->SetBinError(3,34.27964);
   hmcerror__8->SetBinError(4,35.47227);
   hmcerror__8->SetBinError(5,38.61938);
   hmcerror__8->SetBinError(6,35.62501);
   hmcerror__8->SetBinError(7,31.47082);
   hmcerror__8->SetBinError(8,36.01677);
   hmcerror__8->SetBinError(9,24.86598);
   hmcerror__8->SetBinError(10,22.82752);
   hmcerror__8->SetBinError(11,22.8862);
   hmcerror__8->SetBinError(12,15.46502);
   hmcerror__8->SetBinError(13,18.79438);
   hmcerror__8->SetBinError(14,15.61933);
   hmcerror__8->SetBinError(15,14.76356);
   hmcerror__8->SetBinError(16,15.00577);
   hmcerror__8->SetBinError(17,25.92903);
   hmcerror__8->SetBinError(18,16.89479);
   hmcerror__8->SetBinError(19,15.11014);
   hmcerror__8->SetBinError(20,13.02476);
   hmcerror__8->SetBinError(21,19.94959);
   hmcerror__8->SetBinError(22,12.81681);
   hmcerror__8->SetBinError(23,13.51678);
   hmcerror__8->SetBinError(24,12.67229);
   hmcerror__8->SetBinError(25,5.243582);
   hmcerror__8->SetBinError(26,0.3895343);
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
   
   Double_t _fx3009[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3009[25] = {
   35,
   82,
   120,
   132,
   145,
   127,
   95,
   89,
   75,
   61,
   56,
   50,
   54,
   42,
   36,
   43,
   25,
   23,
   36,
   34,
   38,
   26,
   26,
   16,
   4};
   Double_t _felx3009[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3009[25] = {
   6.0548,
   9.1791,
   10.95445,
   11.48913,
   12.04159,
   11.26943,
   9.8686,
   9.5566,
   8.7852,
   7.9383,
   7.6127,
   7.2025,
   7.4785,
   6.6155,
   6.1381,
   6.6917,
   5.1474,
   4.9457,
   6.1381,
   5.9703,
   6.3013,
   5.2453,
   5.2453,
   4.1628,
   2.29683};
   Double_t _fehx3009[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3009[25] = {
   5.8483,
   8.9774,
   10.95445,
   11.48913,
   12.04159,
   11.26943,
   9.667,
   9.3552,
   8.5831,
   7.7354,
   7.4094,
   6.9985,
   7.275,
   6.4104,
   5.9318,
   6.4868,
   4.9374,
   4.7346,
   5.9318,
   5.7635,
   6.0955,
   5.0358,
   5.0358,
   3.9454,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,3.465);
   Graph_Graph3009->SetMinimum(1.532853);
   Graph_Graph3009->SetMaximum(172.5754);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.6/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3010[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3010[25] = {
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
   Double_t _felx3010[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3010[25] = {
   0.4515553,
   0.3626127,
   0.2649661,
   0.2561383,
   0.2713153,
   0.2981944,
   0.2834372,
   0.3454531,
   0.2876856,
   0.3024785,
   0.3515272,
   0.2913136,
   0.3462603,
   0.354757,
   0.3485648,
   0.3160885,
   0.621091,
   0.4374603,
   0.4548434,
   0.5165417,
   0.5387679,
   0.5347375,
   0.5519611,
   0.7481605,
   0.9188894};
   Double_t _fehx3010[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3010[25] = {
   0.4515553,
   0.3626127,
   0.2649661,
   0.2561383,
   0.2713153,
   0.2981944,
   0.2834372,
   0.3454531,
   0.2876856,
   0.3024785,
   0.3515272,
   0.2913136,
   0.3462603,
   0.354757,
   0.3485648,
   0.3160885,
   0.621091,
   0.4374603,
   0.4548434,
   0.5165417,
   0.5387679,
   0.5347375,
   0.5519611,
   0.7481605,
   0.9188894};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,3.465);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3011[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3011[25] = {
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
   Double_t _felx3011[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3011[25] = {
   0.2031827,
   0.189956,
   0.1955617,
   0.1851138,
   0.1951768,
   0.2106588,
   0.2165325,
   0.2273179,
   0.2142327,
   0.2227743,
   0.2261291,
   0.2159382,
   0.2327833,
   0.2162046,
   0.2146165,
   0.1856986,
   0.2060085,
   0.2161325,
   0.2203808,
   0.2298178,
   0.1906772,
   0.2467039,
   0.2162203,
   0.2459467,
   0.335152};
   Double_t _fehx3011[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3011[25] = {
   0.2031827,
   0.189956,
   0.1955617,
   0.1851138,
   0.1951768,
   0.2106588,
   0.2165325,
   0.2273179,
   0.2142327,
   0.2227743,
   0.2261291,
   0.2159382,
   0.2327833,
   0.2162046,
   0.2146165,
   0.1856986,
   0.2060085,
   0.2161325,
   0.2203808,
   0.2298178,
   0.1906772,
   0.2467039,
   0.2162203,
   0.2459467,
   0.335152};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,3.465);
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
   
   Double_t _fx3012[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3012[25] = {
   0.8312607,
   0.8920761,
   0.9275457,
   0.9531462,
   1.018678,
   1.063036,
   0.8556033,
   0.8536392,
   0.8677084,
   0.808287,
   0.8601482,
   0.941847,
   0.9948751,
   0.953933,
   0.8499533,
   0.9057719,
   0.5988374,
   0.5955437,
   1.083667,
   1.348387,
   1.026246,
   1.084761,
   1.061717,
   0.9446252,
   0.7009631};
   Double_t _felx3012[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3012[25] = {
   0.1438034,
   0.09985921,
   0.08467296,
   0.08296073,
   0.08459662,
   0.09432922,
   0.08888007,
   0.09166167,
   0.1016399,
   0.1051873,
   0.1169295,
   0.1356731,
   0.137781,
   0.1502558,
   0.1449194,
   0.1409571,
   0.1232982,
   0.12806,
   0.1847682,
   0.2367727,
   0.1701759,
   0.2188422,
   0.2141932,
   0.2457679,
   0.4024983};
   Double_t _fehx3012[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3012[25] = {
   0.1388989,
   0.09766493,
   0.08467296,
   0.08296073,
   0.08459662,
   0.09432922,
   0.08706439,
   0.08972995,
   0.0993017,
   0.1024987,
   0.1138068,
   0.1318303,
   0.1340318,
   0.1455974,
   0.1400487,
   0.136641,
   0.118268,
   0.122594,
   0.1785582,
   0.2285714,
   0.1646179,
   0.2101016,
   0.2056382,
   0.2329328,
   0.3473027};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,3.465);
   Graph_Graph3012->SetMinimum(0.1706155);
   Graph_Graph3012->SetMaximum(1.704807);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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

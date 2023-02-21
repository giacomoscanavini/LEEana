#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Oct 23 14:05:12 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-61.53846,-2.704916,451.2821,299.1068);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hmc__7->SetBinContent(1,45.32647);
   hmc__7->SetBinContent(2,51.4698);
   hmc__7->SetBinContent(3,62.49194);
   hmc__7->SetBinContent(4,61.98632);
   hmc__7->SetBinContent(5,69.30919);
   hmc__7->SetBinContent(6,95.00789);
   hmc__7->SetBinContent(7,120.7916);
   hmc__7->SetBinContent(8,103.8635);
   hmc__7->SetBinContent(9,105.4043);
   hmc__7->SetBinContent(10,135.2458);
   hmc__7->SetBinContent(11,129.9327);
   hmc__7->SetBinContent(12,130.7199);
   hmc__7->SetBinContent(13,113.8101);
   hmc__7->SetBinContent(14,66.11546);
   hmc__7->SetBinContent(15,48.11322);
   hmc__7->SetBinContent(16,32.22952);
   hmc__7->SetBinContent(17,23.47326);
   hmc__7->SetBinContent(18,22.31687);
   hmc__7->SetBinContent(19,14.10321);
   hmc__7->SetBinContent(20,13.97406);
   hmc__7->SetBinContent(21,12.11897);
   hmc__7->SetBinContent(22,15.04832);
   hmc__7->SetBinContent(23,10.36641);
   hmc__7->SetBinContent(24,10.23941);
   hmc__7->SetBinContent(25,8.507432);
   hmc__7->SetBinContent(26,7.535089);
   hmc__7->SetBinContent(27,8.333444);
   hmc__7->SetBinContent(28,4.959433);
   hmc__7->SetBinContent(29,5.485862);
   hmc__7->SetBinContent(30,8.078311);
   hmc__7->SetBinContent(31,4.260084);
   hmc__7->SetBinContent(32,4.790474);
   hmc__7->SetBinContent(33,4.257854);
   hmc__7->SetBinContent(34,4.328738);
   hmc__7->SetBinContent(35,40.1585);
   hmc__7->SetBinError(1,22.79358);
   hmc__7->SetBinError(2,27.27125);
   hmc__7->SetBinError(3,20.20711);
   hmc__7->SetBinError(4,22.25);
   hmc__7->SetBinError(5,22.59653);
   hmc__7->SetBinError(6,29.76443);
   hmc__7->SetBinError(7,34.94608);
   hmc__7->SetBinError(8,33.03009);
   hmc__7->SetBinError(9,30.21851);
   hmc__7->SetBinError(10,44.38266);
   hmc__7->SetBinError(11,38.36099);
   hmc__7->SetBinError(12,35.48548);
   hmc__7->SetBinError(13,33.76387);
   hmc__7->SetBinError(14,27.62439);
   hmc__7->SetBinError(15,18.26257);
   hmc__7->SetBinError(16,16.80479);
   hmc__7->SetBinError(17,12.73474);
   hmc__7->SetBinError(18,13.60005);
   hmc__7->SetBinError(19,12.91176);
   hmc__7->SetBinError(20,8.782835);
   hmc__7->SetBinError(21,10.53481);
   hmc__7->SetBinError(22,10.52739);
   hmc__7->SetBinError(23,12.23467);
   hmc__7->SetBinError(24,10.10432);
   hmc__7->SetBinError(25,8.399258);
   hmc__7->SetBinError(26,9.792016);
   hmc__7->SetBinError(27,7.91107);
   hmc__7->SetBinError(28,6.772386);
   hmc__7->SetBinError(29,5.615475);
   hmc__7->SetBinError(30,10.73293);
   hmc__7->SetBinError(31,4.916021);
   hmc__7->SetBinError(32,6.415482);
   hmc__7->SetBinError(33,8.310869);
   hmc__7->SetBinError(34,7.099274);
   hmc__7->SetBinError(35,32.75972);
   hmc__7->SetMinimum(-2.704916);
   hmc__7->SetMaximum(284.0162);
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
   hs3_stack_3->SetMinimum(-1.429819e-08);
   hs3_stack_3->SetMaximum(142.0081);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.516553);
   hbadmatch_stack_1->SetBinContent(2,2.734724);
   hbadmatch_stack_1->SetBinContent(3,3.018233);
   hbadmatch_stack_1->SetBinContent(4,1.266602);
   hbadmatch_stack_1->SetBinContent(5,2.506845);
   hbadmatch_stack_1->SetBinContent(6,3.899934);
   hbadmatch_stack_1->SetBinContent(7,5.763884);
   hbadmatch_stack_1->SetBinContent(8,3.643914);
   hbadmatch_stack_1->SetBinContent(9,2.948653);
   hbadmatch_stack_1->SetBinContent(10,4.344977);
   hbadmatch_stack_1->SetBinContent(11,3.842426);
   hbadmatch_stack_1->SetBinContent(12,3.971615);
   hbadmatch_stack_1->SetBinContent(13,3.311651);
   hbadmatch_stack_1->SetBinContent(14,1.350519);
   hbadmatch_stack_1->SetBinContent(15,2.236936);
   hbadmatch_stack_1->SetBinContent(16,0.6677769);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.8529261);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.5625357);
   hbadmatch_stack_1->SetBinContent(22,0.3916036);
   hbadmatch_stack_1->SetBinContent(23,0.1818913);
   hbadmatch_stack_1->SetBinContent(24,1.005822);
   hbadmatch_stack_1->SetBinContent(25,0.8467914);
   hbadmatch_stack_1->SetBinContent(26,0.2855402);
   hbadmatch_stack_1->SetBinContent(27,0.3235489);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(34,0.2855402);
   hbadmatch_stack_1->SetBinContent(35,0.5385932);
   hbadmatch_stack_1->SetBinError(1,0.6402337);
   hbadmatch_stack_1->SetBinError(2,1.22276);
   hbadmatch_stack_1->SetBinError(3,0.9232826);
   hbadmatch_stack_1->SetBinError(4,0.6079928);
   hbadmatch_stack_1->SetBinError(5,0.8251318);
   hbadmatch_stack_1->SetBinError(6,1.075081);
   hbadmatch_stack_1->SetBinError(7,1.328581);
   hbadmatch_stack_1->SetBinError(8,1.131387);
   hbadmatch_stack_1->SetBinError(9,0.9216774);
   hbadmatch_stack_1->SetBinError(10,1.12343);
   hbadmatch_stack_1->SetBinError(11,1.05412);
   hbadmatch_stack_1->SetBinError(12,1.096758);
   hbadmatch_stack_1->SetBinError(13,0.9929178);
   hbadmatch_stack_1->SetBinError(14,0.5209817);
   hbadmatch_stack_1->SetBinError(15,0.8238977);
   hbadmatch_stack_1->SetBinError(16,0.3233893);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.428003);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.3355922);
   hbadmatch_stack_1->SetBinError(22,0.3916037);
   hbadmatch_stack_1->SetBinError(23,0.1818913);
   hbadmatch_stack_1->SetBinError(24,0.5354581);
   hbadmatch_stack_1->SetBinError(25,0.5992914);
   hbadmatch_stack_1->SetBinError(26,0.2855402);
   hbadmatch_stack_1->SetBinError(27,0.2335661);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,9.733557);
   hext_stack_2->SetBinContent(2,12.66195);
   hext_stack_2->SetBinContent(3,16.4901);
   hext_stack_2->SetBinContent(4,14.25522);
   hext_stack_2->SetBinContent(5,16.58225);
   hext_stack_2->SetBinContent(6,24.78919);
   hext_stack_2->SetBinContent(7,31.87567);
   hext_stack_2->SetBinContent(8,23.66595);
   hext_stack_2->SetBinContent(9,17.3695);
   hext_stack_2->SetBinContent(10,26.35493);
   hext_stack_2->SetBinContent(11,18.35428);
   hext_stack_2->SetBinContent(12,16.10063);
   hext_stack_2->SetBinContent(13,16.16129);
   hext_stack_2->SetBinContent(14,7.61559);
   hext_stack_2->SetBinContent(15,6.303639);
   hext_stack_2->SetBinContent(16,5.344809);
   hext_stack_2->SetBinContent(17,4.021268);
   hext_stack_2->SetBinContent(18,2.428004);
   hext_stack_2->SetBinContent(19,1.379791);
   hext_stack_2->SetBinContent(20,1.461993);
   hext_stack_2->SetBinContent(21,1.219797);
   hext_stack_2->SetBinContent(22,3.539649);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.6487947);
   hext_stack_2->SetBinContent(26,0.7309963);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.3243973);
   hext_stack_2->SetBinContent(32,0.4065989);
   hext_stack_2->SetBinContent(33,0.7309963);
   hext_stack_2->SetBinContent(35,5.654845);
   hext_stack_2->SetBinError(1,1.90485);
   hext_stack_2->SetBinError(2,2.201318);
   hext_stack_2->SetBinError(3,2.814146);
   hext_stack_2->SetBinError(4,2.485312);
   hext_stack_2->SetBinError(5,2.728);
   hext_stack_2->SetBinError(6,3.512853);
   hext_stack_2->SetBinError(7,4.007953);
   hext_stack_2->SetBinError(8,3.391439);
   hext_stack_2->SetBinError(9,2.870733);
   hext_stack_2->SetBinError(10,3.512511);
   hext_stack_2->SetBinError(11,2.913886);
   hext_stack_2->SetBinError(12,2.648654);
   hext_stack_2->SetBinError(13,2.771112);
   hext_stack_2->SetBinError(14,1.754445);
   hext_stack_2->SetBinError(15,1.749156);
   hext_stack_2->SetBinError(16,1.530177);
   hext_stack_2->SetBinError(17,1.545635);
   hext_stack_2->SetBinError(18,1.028599);
   hext_stack_2->SetBinError(19,0.6935586);
   hext_stack_2->SetBinError(20,0.7356036);
   hext_stack_2->SetBinError(21,0.7042499);
   hext_stack_2->SetBinError(22,1.400848);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.4587671);
   hext_stack_2->SetBinError(26,0.5201503);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.3243973);
   hext_stack_2->SetBinError(32,0.4065989);
   hext_stack_2->SetBinError(33,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.6951543);
   hdirt_stack_3->SetBinContent(2,1.163924);
   hdirt_stack_3->SetBinContent(3,1.651499);
   hdirt_stack_3->SetBinContent(4,0.7596245);
   hdirt_stack_3->SetBinContent(5,0.6951543);
   hdirt_stack_3->SetBinContent(6,2.003363);
   hdirt_stack_3->SetBinContent(7,2.700289);
   hdirt_stack_3->SetBinContent(8,2.839387);
   hdirt_stack_3->SetBinContent(9,1.742458);
   hdirt_stack_3->SetBinContent(10,2.58547);
   hdirt_stack_3->SetBinContent(11,1.784817);
   hdirt_stack_3->SetBinContent(12,0.8284842);
   hdirt_stack_3->SetBinContent(13,1.663383);
   hdirt_stack_3->SetBinContent(14,0.3569671);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,0.3861994);
   hdirt_stack_3->SetBinContent(29,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4258516);
   hdirt_stack_3->SetBinError(2,0.5896235);
   hdirt_stack_3->SetBinError(3,0.6335068);
   hdirt_stack_3->SetBinError(4,0.3950298);
   hdirt_stack_3->SetBinError(5,0.4258516);
   hdirt_stack_3->SetBinError(6,0.7204461);
   hdirt_stack_3->SetBinError(7,0.9106752);
   hdirt_stack_3->SetBinError(8,0.9257498);
   hdirt_stack_3->SetBinError(9,0.6235122);
   hdirt_stack_3->SetBinError(10,0.889987);
   hdirt_stack_3->SetBinError(11,0.7398108);
   hdirt_stack_3->SetBinError(12,0.4783416);
   hdirt_stack_3->SetBinError(13,1.035128);
   hdirt_stack_3->SetBinError(14,0.258803);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.3861995);
   hdirt_stack_3->SetBinError(29,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,11.38025);
   houtFV_stack_4->SetBinContent(2,12.61301);
   houtFV_stack_4->SetBinContent(3,16.80982);
   houtFV_stack_4->SetBinContent(4,16.59148);
   houtFV_stack_4->SetBinContent(5,16.01776);
   houtFV_stack_4->SetBinContent(6,17.62436);
   houtFV_stack_4->SetBinContent(7,26.36531);
   houtFV_stack_4->SetBinContent(8,18.52164);
   houtFV_stack_4->SetBinContent(9,21.96704);
   houtFV_stack_4->SetBinContent(10,20.83687);
   houtFV_stack_4->SetBinContent(11,19.57721);
   houtFV_stack_4->SetBinContent(12,25.20654);
   houtFV_stack_4->SetBinContent(13,20.84122);
   houtFV_stack_4->SetBinContent(14,14.08856);
   houtFV_stack_4->SetBinContent(15,8.563668);
   houtFV_stack_4->SetBinContent(16,5.813921);
   houtFV_stack_4->SetBinContent(17,4.993266);
   houtFV_stack_4->SetBinContent(18,4.245214);
   houtFV_stack_4->SetBinContent(19,2.161887);
   houtFV_stack_4->SetBinContent(20,2.55074);
   houtFV_stack_4->SetBinContent(21,1.63565);
   houtFV_stack_4->SetBinContent(22,3.145211);
   houtFV_stack_4->SetBinContent(23,1.878156);
   houtFV_stack_4->SetBinContent(24,1.732333);
   houtFV_stack_4->SetBinContent(25,1.167064);
   houtFV_stack_4->SetBinContent(26,1.176911);
   houtFV_stack_4->SetBinContent(27,1.996994);
   houtFV_stack_4->SetBinContent(28,1.323754);
   houtFV_stack_4->SetBinContent(29,0.9286332);
   houtFV_stack_4->SetBinContent(30,0.7849858);
   houtFV_stack_4->SetBinContent(31,0.3778286);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.3900497);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,4.986651);
   houtFV_stack_4->SetBinError(1,1.662566);
   houtFV_stack_4->SetBinError(2,1.733752);
   houtFV_stack_4->SetBinError(3,2.101198);
   houtFV_stack_4->SetBinError(4,2.080464);
   houtFV_stack_4->SetBinError(5,2.168339);
   houtFV_stack_4->SetBinError(6,2.042775);
   houtFV_stack_4->SetBinError(7,2.709902);
   houtFV_stack_4->SetBinError(8,2.24002);
   houtFV_stack_4->SetBinError(9,2.286875);
   houtFV_stack_4->SetBinError(10,2.243025);
   houtFV_stack_4->SetBinError(11,2.216799);
   houtFV_stack_4->SetBinError(12,2.559402);
   houtFV_stack_4->SetBinError(13,2.631758);
   houtFV_stack_4->SetBinError(14,1.964629);
   houtFV_stack_4->SetBinError(15,1.462832);
   houtFV_stack_4->SetBinError(16,1.220867);
   houtFV_stack_4->SetBinError(17,1.147319);
   houtFV_stack_4->SetBinError(18,1.087291);
   houtFV_stack_4->SetBinError(19,0.6981032);
   houtFV_stack_4->SetBinError(20,0.8375887);
   houtFV_stack_4->SetBinError(21,0.6641357);
   houtFV_stack_4->SetBinError(22,0.8876752);
   houtFV_stack_4->SetBinError(23,0.7136976);
   houtFV_stack_4->SetBinError(24,0.6276255);
   houtFV_stack_4->SetBinError(25,0.5366549);
   houtFV_stack_4->SetBinError(26,0.4804759);
   houtFV_stack_4->SetBinError(27,0.7744595);
   houtFV_stack_4->SetBinError(28,0.5560625);
   houtFV_stack_4->SetBinError(29,0.48078);
   houtFV_stack_4->SetBinError(30,0.4301173);
   houtFV_stack_4->SetBinError(31,0.2398609);
   houtFV_stack_4->SetBinError(32,0.1967154);
   houtFV_stack_4->SetBinError(33,0.2758068);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.125919);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1385251);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1560568);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5524219);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5280485);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4580597);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.071569);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.089541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.574764);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.902214);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.338195);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.521368);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.387873);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.218767);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5522112);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3953067);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3669668);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1117191);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3386491);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1840595);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1091862);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.4523019);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.07056938);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06434524);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2234851);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.317876);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2208057);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3786489);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4206399);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4326134);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5721147);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4104224);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4824607);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3841391);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3284451);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2277917);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1881555);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3289711);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.07016174);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2871355);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1306191);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.05802482);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.2289439);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.0437164);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1687821);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08623998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.112926);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1257636);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1753131);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4577766);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1178119);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1614976);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06518023);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06852069);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01962509);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02686085);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06934668);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06278178);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05430538);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06420444);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08486002);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2952399);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04509511);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1304061);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04656421);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04924792);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.938921);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.070056);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.036188);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.926004);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.580141);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.61128);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.04705);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.10707);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.21655);
   hNCpi0inFVres_stack_7->SetBinContent(10,22.57817);
   hNCpi0inFVres_stack_7->SetBinContent(11,27.92454);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.39385);
   hNCpi0inFVres_stack_7->SetBinContent(13,20.22972);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.88762);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.949605);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.849245);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.328122);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.059214);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.349631);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.473456);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.491854);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.18374);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.8077174);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.7787065);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4633012);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.3797177);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.510339);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.4717708);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.141387);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.1666807);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.5421237);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.5012635);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.2342726);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.276453);
   hNCpi0inFVres_stack_7->SetBinContent(35,2.719587);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5619266);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4589301);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7435954);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9866409);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7177217);
   hNCpi0inFVres_stack_7->SetBinError(6,1.153986);
   hNCpi0inFVres_stack_7->SetBinError(7,1.306294);
   hNCpi0inFVres_stack_7->SetBinError(8,1.343732);
   hNCpi0inFVres_stack_7->SetBinError(9,1.286987);
   hNCpi0inFVres_stack_7->SetBinError(10,1.435413);
   hNCpi0inFVres_stack_7->SetBinError(11,1.704914);
   hNCpi0inFVres_stack_7->SetBinError(12,1.527477);
   hNCpi0inFVres_stack_7->SetBinError(13,1.516927);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9446121);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7409627);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4836821);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4613269);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4437047);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4854374);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3262632);
   hNCpi0inFVres_stack_7->SetBinError(21,0.448462);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3647615);
   hNCpi0inFVres_stack_7->SetBinError(23,0.24921);
   hNCpi0inFVres_stack_7->SetBinError(24,0.220016);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1611533);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1285077);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1537806);
   hNCpi0inFVres_stack_7->SetBinError(28,0.235813);
   hNCpi0inFVres_stack_7->SetBinError(29,0.05517562);
   hNCpi0inFVres_stack_7->SetBinError(30,0.07925042);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4149424);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1704125);
   hNCpi0inFVres_stack_7->SetBinError(33,0.1061126);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1098034);
   hNCpi0inFVres_stack_7->SetBinError(35,0.5870283);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.407246);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.632958);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.427069);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.319092);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.948564);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.408471);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.988527);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.326018);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.538348);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.267378);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.460134);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.805717);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.43851);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.035023);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.645043);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.382541);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7089599);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7413256);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3011259);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1669308);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5483904);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3488129);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3666871);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4342239);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2433914);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.4315876);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1201177);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.1213177);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.6070752);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.069616);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.2059228);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.3058567);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.04427161);
   hNCpi0inFVdis_stack_8->SetBinContent(35,2.124528);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6168071);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.559447);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3266455);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3002331);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4341159);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4310489);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6986169);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7019943);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8995331);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.005407);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9323612);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.410745);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9184093);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.530577);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4983305);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4173544);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2688031);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2777905);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1261087);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1304103);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2966817);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2001567);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1742128);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2413845);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1234946);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2226156);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.06233207);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.06414338);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3551545);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5515085);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1388064);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2632072);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.04427161);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.7453489);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,5.547862);
   hCCpi0inFV_stack_10->SetBinContent(2,7.321993);
   hCCpi0inFV_stack_10->SetBinContent(3,7.870678);
   hCCpi0inFV_stack_10->SetBinContent(4,9.729052);
   hCCpi0inFV_stack_10->SetBinContent(5,10.21158);
   hCCpi0inFV_stack_10->SetBinContent(6,16.14439);
   hCCpi0inFV_stack_10->SetBinContent(7,16.09064);
   hCCpi0inFV_stack_10->SetBinContent(8,15.19565);
   hCCpi0inFV_stack_10->SetBinContent(9,20.40922);
   hCCpi0inFV_stack_10->SetBinContent(10,27.27618);
   hCCpi0inFV_stack_10->SetBinContent(11,29.39923);
   hCCpi0inFV_stack_10->SetBinContent(12,29.23123);
   hCCpi0inFV_stack_10->SetBinContent(13,27.32261);
   hCCpi0inFV_stack_10->SetBinContent(14,15.48861);
   hCCpi0inFV_stack_10->SetBinContent(15,12.09734);
   hCCpi0inFV_stack_10->SetBinContent(16,8.954737);
   hCCpi0inFV_stack_10->SetBinContent(17,6.980691);
   hCCpi0inFV_stack_10->SetBinContent(18,4.944697);
   hCCpi0inFV_stack_10->SetBinContent(19,3.451616);
   hCCpi0inFV_stack_10->SetBinContent(20,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(21,3.35999);
   hCCpi0inFV_stack_10->SetBinContent(22,2.982615);
   hCCpi0inFV_stack_10->SetBinContent(23,2.876109);
   hCCpi0inFV_stack_10->SetBinContent(24,3.35704);
   hCCpi0inFV_stack_10->SetBinContent(25,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(26,2.792975);
   hCCpi0inFV_stack_10->SetBinContent(27,2.12923);
   hCCpi0inFV_stack_10->SetBinContent(28,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(29,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(30,3.421195);
   hCCpi0inFV_stack_10->SetBinContent(31,1.536715);
   hCCpi0inFV_stack_10->SetBinContent(32,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(33,1.121968);
   hCCpi0inFV_stack_10->SetBinContent(34,1.999038);
   hCCpi0inFV_stack_10->SetBinContent(35,10.35505);
   hCCpi0inFV_stack_10->SetBinError(1,1.19905);
   hCCpi0inFV_stack_10->SetBinError(2,1.388883);
   hCCpi0inFV_stack_10->SetBinError(3,1.373417);
   hCCpi0inFV_stack_10->SetBinError(4,1.615199);
   hCCpi0inFV_stack_10->SetBinError(5,1.594151);
   hCCpi0inFV_stack_10->SetBinError(6,2.02834);
   hCCpi0inFV_stack_10->SetBinError(7,2.054874);
   hCCpi0inFV_stack_10->SetBinError(8,1.968154);
   hCCpi0inFV_stack_10->SetBinError(9,2.328805);
   hCCpi0inFV_stack_10->SetBinError(10,2.661802);
   hCCpi0inFV_stack_10->SetBinError(11,2.712776);
   hCCpi0inFV_stack_10->SetBinError(12,2.751438);
   hCCpi0inFV_stack_10->SetBinError(13,2.602706);
   hCCpi0inFV_stack_10->SetBinError(14,1.943598);
   hCCpi0inFV_stack_10->SetBinError(15,1.755189);
   hCCpi0inFV_stack_10->SetBinError(16,1.5307);
   hCCpi0inFV_stack_10->SetBinError(17,1.345164);
   hCCpi0inFV_stack_10->SetBinError(18,1.056943);
   hCCpi0inFV_stack_10->SetBinError(19,0.9821954);
   hCCpi0inFV_stack_10->SetBinError(20,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(21,0.8154507);
   hCCpi0inFV_stack_10->SetBinError(22,0.8556548);
   hCCpi0inFV_stack_10->SetBinError(23,0.8993325);
   hCCpi0inFV_stack_10->SetBinError(24,0.9286533);
   hCCpi0inFV_stack_10->SetBinError(25,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(26,0.8712921);
   hCCpi0inFV_stack_10->SetBinError(27,0.7459092);
   hCCpi0inFV_stack_10->SetBinError(28,0.588146);
   hCCpi0inFV_stack_10->SetBinError(29,0.519186);
   hCCpi0inFV_stack_10->SetBinError(30,0.9105974);
   hCCpi0inFV_stack_10->SetBinError(31,0.6626225);
   hCCpi0inFV_stack_10->SetBinError(32,0.519186);
   hCCpi0inFV_stack_10->SetBinError(33,0.5181909);
   hCCpi0inFV_stack_10->SetBinError(34,0.7339349);
   hCCpi0inFV_stack_10->SetBinError(35,1.618129);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.615799);
   hNCinFV_stack_11->SetBinContent(2,1.28697);
   hNCinFV_stack_11->SetBinContent(3,1.653893);
   hNCinFV_stack_11->SetBinContent(4,1.455122);
   hNCinFV_stack_11->SetBinContent(5,3.429337);
   hNCinFV_stack_11->SetBinContent(6,3.082134);
   hNCinFV_stack_11->SetBinContent(7,5.171304);
   hNCinFV_stack_11->SetBinContent(8,3.804923);
   hNCinFV_stack_11->SetBinContent(9,2.60593);
   hNCinFV_stack_11->SetBinContent(10,5.465105);
   hNCinFV_stack_11->SetBinContent(11,4.615528);
   hNCinFV_stack_11->SetBinContent(12,3.594514);
   hNCinFV_stack_11->SetBinContent(13,5.005378);
   hNCinFV_stack_11->SetBinContent(14,2.255834);
   hNCinFV_stack_11->SetBinContent(15,1.569608);
   hNCinFV_stack_11->SetBinContent(16,1.320019);
   hNCinFV_stack_11->SetBinContent(17,0.8891181);
   hNCinFV_stack_11->SetBinContent(18,1.730993);
   hNCinFV_stack_11->SetBinContent(19,1.13198);
   hNCinFV_stack_11->SetBinContent(20,1.295408);
   hNCinFV_stack_11->SetBinContent(21,1.473933);
   hNCinFV_stack_11->SetBinContent(22,0.4359138);
   hNCinFV_stack_11->SetBinContent(23,1.227665);
   hNCinFV_stack_11->SetBinContent(24,0.7653404);
   hNCinFV_stack_11->SetBinContent(25,1.239474);
   hNCinFV_stack_11->SetBinContent(26,0.3900497);
   hNCinFV_stack_11->SetBinContent(27,1.610987);
   hNCinFV_stack_11->SetBinContent(28,0.351468);
   hNCinFV_stack_11->SetBinContent(29,0.1199161);
   hNCinFV_stack_11->SetBinContent(30,0.6029732);
   hNCinFV_stack_11->SetBinContent(31,1.070405);
   hNCinFV_stack_11->SetBinContent(32,0.5408863);
   hNCinFV_stack_11->SetBinContent(33,0.5681612);
   hNCinFV_stack_11->SetBinContent(34,1.52672);
   hNCinFV_stack_11->SetBinContent(35,6.308823);
   hNCinFV_stack_11->SetBinError(1,0.4637732);
   hNCinFV_stack_11->SetBinError(2,0.5763195);
   hNCinFV_stack_11->SetBinError(3,0.5343669);
   hNCinFV_stack_11->SetBinError(4,0.5577444);
   hNCinFV_stack_11->SetBinError(5,0.9639373);
   hNCinFV_stack_11->SetBinError(6,0.7931339);
   hNCinFV_stack_11->SetBinError(7,1.313327);
   hNCinFV_stack_11->SetBinError(8,0.9364772);
   hNCinFV_stack_11->SetBinError(9,0.6695341);
   hNCinFV_stack_11->SetBinError(10,1.316346);
   hNCinFV_stack_11->SetBinError(11,1.12996);
   hNCinFV_stack_11->SetBinError(12,0.918376);
   hNCinFV_stack_11->SetBinError(13,1.182185);
   hNCinFV_stack_11->SetBinError(14,0.7433676);
   hNCinFV_stack_11->SetBinError(15,0.5798465);
   hNCinFV_stack_11->SetBinError(16,0.5187636);
   hNCinFV_stack_11->SetBinError(17,0.4501808);
   hNCinFV_stack_11->SetBinError(18,0.6908177);
   hNCinFV_stack_11->SetBinError(19,0.5562197);
   hNCinFV_stack_11->SetBinError(20,0.8028831);
   hNCinFV_stack_11->SetBinError(21,0.8097077);
   hNCinFV_stack_11->SetBinError(22,0.2594389);
   hNCinFV_stack_11->SetBinError(23,0.5320853);
   hNCinFV_stack_11->SetBinError(24,0.6556387);
   hNCinFV_stack_11->SetBinError(25,0.5860089);
   hNCinFV_stack_11->SetBinError(26,0.2758068);
   hNCinFV_stack_11->SetBinError(27,0.8676101);
   hNCinFV_stack_11->SetBinError(28,0.2502904);
   hNCinFV_stack_11->SetBinError(29,0.1199161);
   hNCinFV_stack_11->SetBinError(30,0.3483547);
   hNCinFV_stack_11->SetBinError(31,0.5545368);
   hNCinFV_stack_11->SetBinError(32,0.3703349);
   hNCinFV_stack_11->SetBinError(33,0.5681613);
   hNCinFV_stack_11->SetBinError(34,1.07628);
   hNCinFV_stack_11->SetBinError(35,1.406359);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,11.22853);
   hnumuCCinFV_stack_12->SetBinContent(2,8.388988);
   hnumuCCinFV_stack_12->SetBinContent(3,8.140384);
   hnumuCCinFV_stack_12->SetBinContent(4,8.087983);
   hnumuCCinFV_stack_12->SetBinContent(5,10.37961);
   hnumuCCinFV_stack_12->SetBinContent(6,13.11629);
   hnumuCCinFV_stack_12->SetBinContent(7,13.35185);
   hnumuCCinFV_stack_12->SetBinContent(8,13.00226);
   hnumuCCinFV_stack_12->SetBinContent(9,10.4031);
   hnumuCCinFV_stack_12->SetBinContent(10,16.78147);
   hnumuCCinFV_stack_12->SetBinContent(11,15.02251);
   hnumuCCinFV_stack_12->SetBinContent(12,15.0329);
   hnumuCCinFV_stack_12->SetBinContent(13,11.58749);
   hnumuCCinFV_stack_12->SetBinContent(14,10.65648);
   hnumuCCinFV_stack_12->SetBinContent(15,8.379595);
   hnumuCCinFV_stack_12->SetBinContent(16,5.137809);
   hnumuCCinFV_stack_12->SetBinContent(17,2.269295);
   hnumuCCinFV_stack_12->SetBinContent(18,3.224773);
   hnumuCCinFV_stack_12->SetBinContent(19,2.362538);
   hnumuCCinFV_stack_12->SetBinContent(20,3.479724);
   hnumuCCinFV_stack_12->SetBinContent(21,0.9290939);
   hnumuCCinFV_stack_12->SetBinContent(22,2.450511);
   hnumuCCinFV_stack_12->SetBinContent(23,2.61645);
   hnumuCCinFV_stack_12->SetBinContent(24,1.604331);
   hnumuCCinFV_stack_12->SetBinContent(25,1.307741);
   hnumuCCinFV_stack_12->SetBinContent(26,1.318683);
   hnumuCCinFV_stack_12->SetBinContent(27,0.9692912);
   hnumuCCinFV_stack_12->SetBinContent(28,0.832591);
   hnumuCCinFV_stack_12->SetBinContent(29,1.65886);
   hnumuCCinFV_stack_12->SetBinContent(30,1.943939);
   hnumuCCinFV_stack_12->SetBinContent(31,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(32,1.233958);
   hnumuCCinFV_stack_12->SetBinContent(33,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(35,6.386344);
   hnumuCCinFV_stack_12->SetBinError(1,2.202106);
   hnumuCCinFV_stack_12->SetBinError(2,1.580897);
   hnumuCCinFV_stack_12->SetBinError(3,1.560513);
   hnumuCCinFV_stack_12->SetBinError(4,1.488974);
   hnumuCCinFV_stack_12->SetBinError(5,2.087396);
   hnumuCCinFV_stack_12->SetBinError(6,2.286203);
   hnumuCCinFV_stack_12->SetBinError(7,2.136372);
   hnumuCCinFV_stack_12->SetBinError(8,2.005392);
   hnumuCCinFV_stack_12->SetBinError(9,1.638812);
   hnumuCCinFV_stack_12->SetBinError(10,2.254669);
   hnumuCCinFV_stack_12->SetBinError(11,2.265589);
   hnumuCCinFV_stack_12->SetBinError(12,2.211065);
   hnumuCCinFV_stack_12->SetBinError(13,1.748806);
   hnumuCCinFV_stack_12->SetBinError(14,2.436146);
   hnumuCCinFV_stack_12->SetBinError(15,1.518626);
   hnumuCCinFV_stack_12->SetBinError(16,1.155799);
   hnumuCCinFV_stack_12->SetBinError(17,0.744559);
   hnumuCCinFV_stack_12->SetBinError(18,0.9227596);
   hnumuCCinFV_stack_12->SetBinError(19,0.725433);
   hnumuCCinFV_stack_12->SetBinError(20,1.014546);
   hnumuCCinFV_stack_12->SetBinError(21,0.4669654);
   hnumuCCinFV_stack_12->SetBinError(22,0.8122349);
   hnumuCCinFV_stack_12->SetBinError(23,2.243419);
   hnumuCCinFV_stack_12->SetBinError(24,0.6792839);
   hnumuCCinFV_stack_12->SetBinError(25,0.6031911);
   hnumuCCinFV_stack_12->SetBinError(26,0.5542732);
   hnumuCCinFV_stack_12->SetBinError(27,0.4987971);
   hnumuCCinFV_stack_12->SetBinError(28,0.4185651);
   hnumuCCinFV_stack_12->SetBinError(29,0.650338);
   hnumuCCinFV_stack_12->SetBinError(30,0.7191005);
   hnumuCCinFV_stack_12->SetBinError(31,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(32,0.5065129);
   hnumuCCinFV_stack_12->SetBinError(33,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(35,1.271044);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(3,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(5,0.4298986);
   hnueCCinFV_stack_13->SetBinContent(6,0.7413802);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.56212);
   hnueCCinFV_stack_13->SetBinContent(9,1.497608);
   hnueCCinFV_stack_13->SetBinContent(10,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(11,0.4211845);
   hnueCCinFV_stack_13->SetBinContent(12,0.575294);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,1.819894);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(33,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(35,0.6317781);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4566905);
   hnueCCinFV_stack_13->SetBinError(3,0.2192101);
   hnueCCinFV_stack_13->SetBinError(5,0.305076);
   hnueCCinFV_stack_13->SetBinError(6,0.3725782);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.4149909);
   hnueCCinFV_stack_13->SetBinError(9,1.206386);
   hnueCCinFV_stack_13->SetBinError(10,0.5270816);
   hnueCCinFV_stack_13->SetBinError(11,0.2986351);
   hnueCCinFV_stack_13->SetBinError(12,0.4388686);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,1.589502);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(33,0.2463303);
   hnueCCinFV_stack_13->SetBinError(35,0.3651536);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__8->SetBinContent(1,45.32647);
   hmcerror__8->SetBinContent(2,51.4698);
   hmcerror__8->SetBinContent(3,62.49194);
   hmcerror__8->SetBinContent(4,61.98632);
   hmcerror__8->SetBinContent(5,69.30919);
   hmcerror__8->SetBinContent(6,95.00789);
   hmcerror__8->SetBinContent(7,120.7916);
   hmcerror__8->SetBinContent(8,103.8635);
   hmcerror__8->SetBinContent(9,105.4043);
   hmcerror__8->SetBinContent(10,135.2458);
   hmcerror__8->SetBinContent(11,129.9327);
   hmcerror__8->SetBinContent(12,130.7199);
   hmcerror__8->SetBinContent(13,113.8101);
   hmcerror__8->SetBinContent(14,66.11546);
   hmcerror__8->SetBinContent(15,48.11322);
   hmcerror__8->SetBinContent(16,32.22952);
   hmcerror__8->SetBinContent(17,23.47326);
   hmcerror__8->SetBinContent(18,22.31687);
   hmcerror__8->SetBinContent(19,14.10321);
   hmcerror__8->SetBinContent(20,13.97406);
   hmcerror__8->SetBinContent(21,12.11897);
   hmcerror__8->SetBinContent(22,15.04832);
   hmcerror__8->SetBinContent(23,10.36641);
   hmcerror__8->SetBinContent(24,10.23941);
   hmcerror__8->SetBinContent(25,8.507432);
   hmcerror__8->SetBinContent(26,7.535089);
   hmcerror__8->SetBinContent(27,8.333444);
   hmcerror__8->SetBinContent(28,4.959433);
   hmcerror__8->SetBinContent(29,5.485862);
   hmcerror__8->SetBinContent(30,8.078311);
   hmcerror__8->SetBinContent(31,4.260084);
   hmcerror__8->SetBinContent(32,4.790474);
   hmcerror__8->SetBinContent(33,4.257854);
   hmcerror__8->SetBinContent(34,4.328738);
   hmcerror__8->SetBinContent(35,40.1585);
   hmcerror__8->SetBinError(1,22.79358);
   hmcerror__8->SetBinError(2,27.27125);
   hmcerror__8->SetBinError(3,20.20711);
   hmcerror__8->SetBinError(4,22.25);
   hmcerror__8->SetBinError(5,22.59653);
   hmcerror__8->SetBinError(6,29.76443);
   hmcerror__8->SetBinError(7,34.94608);
   hmcerror__8->SetBinError(8,33.03009);
   hmcerror__8->SetBinError(9,30.21851);
   hmcerror__8->SetBinError(10,44.38266);
   hmcerror__8->SetBinError(11,38.36099);
   hmcerror__8->SetBinError(12,35.48548);
   hmcerror__8->SetBinError(13,33.76387);
   hmcerror__8->SetBinError(14,27.62439);
   hmcerror__8->SetBinError(15,18.26257);
   hmcerror__8->SetBinError(16,16.80479);
   hmcerror__8->SetBinError(17,12.73474);
   hmcerror__8->SetBinError(18,13.60005);
   hmcerror__8->SetBinError(19,12.91176);
   hmcerror__8->SetBinError(20,8.782835);
   hmcerror__8->SetBinError(21,10.53481);
   hmcerror__8->SetBinError(22,10.52739);
   hmcerror__8->SetBinError(23,12.23467);
   hmcerror__8->SetBinError(24,10.10432);
   hmcerror__8->SetBinError(25,8.399258);
   hmcerror__8->SetBinError(26,9.792016);
   hmcerror__8->SetBinError(27,7.91107);
   hmcerror__8->SetBinError(28,6.772386);
   hmcerror__8->SetBinError(29,5.615475);
   hmcerror__8->SetBinError(30,10.73293);
   hmcerror__8->SetBinError(31,4.916021);
   hmcerror__8->SetBinError(32,6.415482);
   hmcerror__8->SetBinError(33,8.310869);
   hmcerror__8->SetBinError(34,7.099274);
   hmcerror__8->SetBinError(35,32.75972);
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
   45,
   45,
   64,
   70,
   71,
   101,
   92,
   101,
   119,
   135,
   118,
   114,
   92,
   47,
   50,
   24,
   20,
   23,
   10,
   12,
   11,
   19,
   17,
   9,
   4,
   9,
   5,
   3,
   0,
   8,
   5,
   2,
   0,
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
   6.8416,
   6.8416,
   8.1273,
   8.4925,
   8.5518,
   10.04988,
   9.7138,
   10.04988,
   10.90871,
   11.61895,
   10.86278,
   10.67708,
   9.7138,
   6.9882,
   7.2025,
   5.0476,
   4.6266,
   4.9457,
   3.34883,
   3.64022,
   3.4975,
   4.5151,
   4.2835,
   3.19354,
   2.29683,
   3.19354,
   2.48995,
   2.143368,
   0,
   3.0307,
   2.48995,
   2,
   0,
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
   6.637,
   6.637,
   7.9246,
   8.2902,
   8.3496,
   10.04988,
   9.513,
   10.04988,
   10.90871,
   11.61895,
   10.86278,
   10.67708,
   9.513,
   6.7839,
   6.9985,
   4.837,
   4.4133,
   4.7346,
   3.1179,
   3.4155,
   3.27,
   4.3011,
   4.0673,
   2.9582,
   1.98186,
   2.9582,
   2.21064,
   1.72422,
   1.1478,
   2.7896,
   2.21064,
   1.51917,
   1.1478,
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
   Graph_Graph3009->SetMaximum(161.2808);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/34","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 303.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  217.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  64.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 308.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 63.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_mass_all");
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
   0.5028757,
   0.5298495,
   0.3233554,
   0.3589502,
   0.3260251,
   0.3132838,
   0.2893089,
   0.3180143,
   0.2866914,
   0.3281629,
   0.2952374,
   0.2714619,
   0.2966685,
   0.4178205,
   0.379575,
   0.52141,
   0.542521,
   0.6094068,
   0.915519,
   0.6285099,
   0.8692829,
   0.6995728,
   1.180223,
   0.9868071,
   0.9872847,
   1.299522,
   0.9493159,
   1.365556,
   1.023627,
   1.32861,
   1.153973,
   1.339217,
   1.951892,
   1.640033};
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
   0.5028757,
   0.5298495,
   0.3233554,
   0.3589502,
   0.3260251,
   0.3132838,
   0.2893089,
   0.3180143,
   0.2866914,
   0.3281629,
   0.2952374,
   0.2714619,
   0.2966685,
   0.4178205,
   0.379575,
   0.52141,
   0.542521,
   0.6094068,
   0.915519,
   0.6285099,
   0.8692829,
   0.6995728,
   1.180223,
   0.9868071,
   0.9872847,
   1.299522,
   0.9493159,
   1.365556,
   1.023627,
   1.32861,
   1.153973,
   1.339217,
   1.951892,
   1.640033};
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
   0.1790761,
   0.1759608,
   0.1634127,
   0.1894734,
   0.187488,
   0.185332,
   0.1649121,
   0.1980118,
   0.2308968,
   0.2288579,
   0.2288642,
   0.2137251,
   0.1969273,
   0.2143121,
   0.1916606,
   0.2174811,
   0.2205871,
   0.2327692,
   0.2640896,
   0.2460567,
   0.2320139,
   0.2260056,
   0.4477506,
   0.2848356,
   0.3081647,
   0.3225353,
   0.2750679,
   0.3647954,
   0.3933922,
   0.3608745,
   0.475512,
   0.3616938,
   0.3928219,
   0.4584688};
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
   0.1790761,
   0.1759608,
   0.1634127,
   0.1894734,
   0.187488,
   0.185332,
   0.1649121,
   0.1980118,
   0.2308968,
   0.2288579,
   0.2288642,
   0.2137251,
   0.1969273,
   0.2143121,
   0.1916606,
   0.2174811,
   0.2205871,
   0.2327692,
   0.2640896,
   0.2460567,
   0.2320139,
   0.2260056,
   0.4477506,
   0.2848356,
   0.3081647,
   0.3225353,
   0.2750679,
   0.3647954,
   0.3933922,
   0.3608745,
   0.475512,
   0.3616938,
   0.3928219,
   0.4584688};
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
   0.9927974,
   0.8742992,
   1.024132,
   1.129281,
   1.024395,
   1.06307,
   0.7616424,
   0.9724299,
   1.128986,
   0.9981825,
   0.9081625,
   0.8720936,
   0.8083641,
   0.7108776,
   1.039215,
   0.7446589,
   0.8520334,
   1.03061,
   0.7090582,
   0.8587339,
   0.9076682,
   1.2626,
   1.639912,
   0.8789572,
   0.4701771,
   1.194412,
   0.5999921,
   0.6049078,
   0,
   0.990306,
   1.173686,
   0.4174952,
   0,
   0.4620284};
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
   0.1509405,
   0.1329246,
   0.1300536,
   0.137006,
   0.1233862,
   0.1057794,
   0.08041785,
   0.09676039,
   0.103494,
   0.08590987,
   0.08360313,
   0.08167905,
   0.08535095,
   0.1056969,
   0.149699,
   0.1566142,
   0.1971009,
   0.2216126,
   0.2374515,
   0.2604984,
   0.2885972,
   0.3000402,
   0.4132096,
   0.3118872,
   0.2699792,
   0.4238225,
   0.29879,
   0.43218,
   0,
   0.3751651,
   0.5844838,
   0.4174952,
   0,
   0.4620284};
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
   0.1464266,
   0.1289494,
   0.12681,
   0.1337424,
   0.1204689,
   0.1057794,
   0.07875548,
   0.09676039,
   0.103494,
   0.08590987,
   0.08360313,
   0.08167905,
   0.08358661,
   0.1026069,
   0.145459,
   0.1500798,
   0.1880139,
   0.2121534,
   0.2210773,
   0.2444171,
   0.269825,
   0.2858194,
   0.3923538,
   0.2889035,
   0.2329563,
   0.3925899,
   0.2652733,
   0.3476647,
   0.2092287,
   0.3453197,
   0.5189194,
   0.3171231,
   0.2695724,
   0.3509498};
   grae = new TGraphAsymmErrors(34,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,440);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2.235492);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_mass_all",34,0,400);

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

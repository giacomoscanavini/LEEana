#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 11:38:29 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-7.7,676.9231,851.4579);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__16->SetBinContent(1,5.196669);
   hmc__16->SetBinContent(2,27.11267);
   hmc__16->SetBinContent(3,70.90015);
   hmc__16->SetBinContent(4,184.4102);
   hmc__16->SetBinContent(5,311.1926);
   hmc__16->SetBinContent(6,328.0888);
   hmc__16->SetBinContent(7,333.19);
   hmc__16->SetBinContent(8,290.241);
   hmc__16->SetBinContent(9,235.8765);
   hmc__16->SetBinContent(10,204.5539);
   hmc__16->SetBinContent(11,164.9609);
   hmc__16->SetBinContent(12,141.1351);
   hmc__16->SetBinContent(13,114.2347);
   hmc__16->SetBinContent(14,93.72153);
   hmc__16->SetBinContent(15,71.30481);
   hmc__16->SetBinContent(16,61.14336);
   hmc__16->SetBinContent(17,51.74072);
   hmc__16->SetBinContent(18,44.54478);
   hmc__16->SetBinContent(19,37.79353);
   hmc__16->SetBinContent(20,27.54504);
   hmc__16->SetBinContent(21,20.01029);
   hmc__16->SetBinContent(22,16.42846);
   hmc__16->SetBinContent(23,15.78953);
   hmc__16->SetBinContent(24,12.54513);
   hmc__16->SetBinContent(25,82.44665);
   hmc__16->SetBinError(1,6.441175);
   hmc__16->SetBinError(2,16.07873);
   hmc__16->SetBinError(3,23.93479);
   hmc__16->SetBinError(4,72.74411);
   hmc__16->SetBinError(5,76.35035);
   hmc__16->SetBinError(6,82.57958);
   hmc__16->SetBinError(7,83.01095);
   hmc__16->SetBinError(8,77.09825);
   hmc__16->SetBinError(9,63.34209);
   hmc__16->SetBinError(10,60.01478);
   hmc__16->SetBinError(11,49.52612);
   hmc__16->SetBinError(12,42.6036);
   hmc__16->SetBinError(13,39.23614);
   hmc__16->SetBinError(14,34.6299);
   hmc__16->SetBinError(15,27.81938);
   hmc__16->SetBinError(16,26.35489);
   hmc__16->SetBinError(17,21.35771);
   hmc__16->SetBinError(18,18.89413);
   hmc__16->SetBinError(19,17.95477);
   hmc__16->SetBinError(20,14.19744);
   hmc__16->SetBinError(21,14.60724);
   hmc__16->SetBinError(22,9.296285);
   hmc__16->SetBinError(23,9.498163);
   hmc__16->SetBinError(24,10.24494);
   hmc__16->SetBinError(25,26.8999);
   hmc__16->SetMinimum(-7.7);
   hmc__16->SetMaximum(808.5);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,600);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(349.8495);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,2.536048);
   hbadmatch_stack_1->SetBinContent(3,5.326528);
   hbadmatch_stack_1->SetBinContent(4,8.173512);
   hbadmatch_stack_1->SetBinContent(5,8.38275);
   hbadmatch_stack_1->SetBinContent(6,10.81156);
   hbadmatch_stack_1->SetBinContent(7,8.678391);
   hbadmatch_stack_1->SetBinContent(8,8.042259);
   hbadmatch_stack_1->SetBinContent(9,3.522602);
   hbadmatch_stack_1->SetBinContent(10,2.102561);
   hbadmatch_stack_1->SetBinContent(11,0.9819531);
   hbadmatch_stack_1->SetBinContent(12,3.407664);
   hbadmatch_stack_1->SetBinContent(13,0.9303237);
   hbadmatch_stack_1->SetBinContent(14,0.3934307);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.4241887);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.7881102);
   hbadmatch_stack_1->SetBinError(3,1.368693);
   hbadmatch_stack_1->SetBinError(4,1.506415);
   hbadmatch_stack_1->SetBinError(5,1.441265);
   hbadmatch_stack_1->SetBinError(6,1.644894);
   hbadmatch_stack_1->SetBinError(7,1.660381);
   hbadmatch_stack_1->SetBinError(8,2.198435);
   hbadmatch_stack_1->SetBinError(9,0.9739855);
   hbadmatch_stack_1->SetBinError(10,0.7225962);
   hbadmatch_stack_1->SetBinError(11,0.4383643);
   hbadmatch_stack_1->SetBinError(12,1.829179);
   hbadmatch_stack_1->SetBinError(13,0.4814682);
   hbadmatch_stack_1->SetBinError(14,0.2781975);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.3007342);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,2.566457);
   hext_stack_2->SetBinContent(2,8.433196);
   hext_stack_2->SetBinContent(3,14.06927);
   hext_stack_2->SetBinContent(4,25.29795);
   hext_stack_2->SetBinContent(5,48.29357);
   hext_stack_2->SetBinContent(6,46.11929);
   hext_stack_2->SetBinContent(7,37.754);
   hext_stack_2->SetBinContent(8,32.00259);
   hext_stack_2->SetBinContent(9,13.29198);
   hext_stack_2->SetBinContent(10,10.53957);
   hext_stack_2->SetBinContent(11,12.3116);
   hext_stack_2->SetBinContent(12,10.98088);
   hext_stack_2->SetBinContent(13,3.490578);
   hext_stack_2->SetBinContent(14,3.800614);
   hext_stack_2->SetBinContent(15,1.37261);
   hext_stack_2->SetBinContent(16,1.868591);
   hext_stack_2->SetBinContent(18,4.345666);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(1,1.283228);
   hext_stack_2->SetBinError(2,1.88251);
   hext_stack_2->SetBinError(3,2.580737);
   hext_stack_2->SetBinError(4,3.187489);
   hext_stack_2->SetBinError(5,4.696284);
   hext_stack_2->SetBinError(6,4.722981);
   hext_stack_2->SetBinError(7,4.230222);
   hext_stack_2->SetBinError(8,3.922756);
   hext_stack_2->SetBinError(9,2.307282);
   hext_stack_2->SetBinError(10,2.039682);
   hext_stack_2->SetBinError(11,2.282335);
   hext_stack_2->SetBinError(12,2.336194);
   hext_stack_2->SetBinError(13,1.110227);
   hext_stack_2->SetBinError(14,1.319182);
   hext_stack_2->SetBinError(15,0.8259691);
   hext_stack_2->SetBinError(16,0.840497);
   hext_stack_2->SetBinError(18,1.579311);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,1.974458);
   hdirt_stack_3->SetBinContent(3,2.102485);
   hdirt_stack_3->SetBinContent(4,6.045364);
   hdirt_stack_3->SetBinContent(5,3.96611);
   hdirt_stack_3->SetBinContent(6,6.858565);
   hdirt_stack_3->SetBinContent(7,4.220939);
   hdirt_stack_3->SetBinContent(8,2.903001);
   hdirt_stack_3->SetBinContent(9,2.65869);
   hdirt_stack_3->SetBinContent(10,0.6161375);
   hdirt_stack_3->SetBinContent(11,1.438964);
   hdirt_stack_3->SetBinContent(12,1.688972);
   hdirt_stack_3->SetBinContent(13,0.2261411);
   hdirt_stack_3->SetBinContent(14,0.7005532);
   hdirt_stack_3->SetBinContent(15,0.5105644);
   hdirt_stack_3->SetBinContent(16,0.1580268);
   hdirt_stack_3->SetBinContent(18,1.330832);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinError(2,0.7375802);
   hdirt_stack_3->SetBinError(3,0.6902699);
   hdirt_stack_3->SetBinError(4,1.296204);
   hdirt_stack_3->SetBinError(5,1.044464);
   hdirt_stack_3->SetBinError(6,1.37286);
   hdirt_stack_3->SetBinError(7,1.140941);
   hdirt_stack_3->SetBinError(8,0.8815774);
   hdirt_stack_3->SetBinError(9,0.8573921);
   hdirt_stack_3->SetBinError(10,0.3662627);
   hdirt_stack_3->SetBinError(11,0.6349959);
   hdirt_stack_3->SetBinError(12,0.6800567);
   hdirt_stack_3->SetBinError(13,0.2261411);
   hdirt_stack_3->SetBinError(14,0.4531529);
   hdirt_stack_3->SetBinError(15,0.3646725);
   hdirt_stack_3->SetBinError(16,0.1580268);
   hdirt_stack_3->SetBinError(18,1.107563);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.9269427);
   houtFV_stack_4->SetBinContent(2,2.085408);
   houtFV_stack_4->SetBinContent(3,12.84152);
   houtFV_stack_4->SetBinContent(4,27.14865);
   houtFV_stack_4->SetBinContent(5,44.83208);
   houtFV_stack_4->SetBinContent(6,39.29926);
   houtFV_stack_4->SetBinContent(7,37.53641);
   houtFV_stack_4->SetBinContent(8,31.91961);
   houtFV_stack_4->SetBinContent(9,22.65601);
   houtFV_stack_4->SetBinContent(10,18.77626);
   houtFV_stack_4->SetBinContent(11,13.96744);
   houtFV_stack_4->SetBinContent(12,12.4141);
   houtFV_stack_4->SetBinContent(13,8.692805);
   houtFV_stack_4->SetBinContent(14,5.31015);
   houtFV_stack_4->SetBinContent(15,3.826184);
   houtFV_stack_4->SetBinContent(16,2.889025);
   houtFV_stack_4->SetBinContent(17,3.655331);
   houtFV_stack_4->SetBinContent(18,2.199135);
   houtFV_stack_4->SetBinContent(19,3.909558);
   houtFV_stack_4->SetBinContent(20,1.121968);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinContent(22,0.1950248);
   houtFV_stack_4->SetBinContent(23,2.629521);
   houtFV_stack_4->SetBinContent(24,0.5850745);
   houtFV_stack_4->SetBinContent(25,2.539312);
   houtFV_stack_4->SetBinError(1,0.4800908);
   houtFV_stack_4->SetBinError(2,0.7173404);
   houtFV_stack_4->SetBinError(3,1.76093);
   houtFV_stack_4->SetBinError(4,2.58362);
   houtFV_stack_4->SetBinError(5,3.379087);
   houtFV_stack_4->SetBinError(6,3.130432);
   houtFV_stack_4->SetBinError(7,3.073816);
   houtFV_stack_4->SetBinError(8,2.811025);
   houtFV_stack_4->SetBinError(9,2.371858);
   houtFV_stack_4->SetBinError(10,2.142101);
   houtFV_stack_4->SetBinError(11,1.869881);
   houtFV_stack_4->SetBinError(12,1.766727);
   houtFV_stack_4->SetBinError(13,1.481242);
   houtFV_stack_4->SetBinError(14,1.201109);
   houtFV_stack_4->SetBinError(15,1.024095);
   houtFV_stack_4->SetBinError(16,0.7845188);
   houtFV_stack_4->SetBinError(17,0.9553933);
   houtFV_stack_4->SetBinError(18,0.7607114);
   houtFV_stack_4->SetBinError(19,0.9811382);
   houtFV_stack_4->SetBinError(20,0.5181909);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetBinError(22,0.1950249);
   houtFV_stack_4->SetBinError(23,0.899863);
   houtFV_stack_4->SetBinError(24,0.337793);
   houtFV_stack_4->SetBinError(25,0.8333082);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.214734);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.778806);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.353168);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.177718);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.940395);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.070022);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.175054);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.66206);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.249801);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.684728);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.9624);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.21342);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.699514);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.997934);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.925276);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.46717);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.743426);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.575194);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.8373359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.530268);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.809436);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.580935);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4490115);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6544181);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7648434);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8282428);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7578566);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8701419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7716403);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7436866);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8861355);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7117298);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7357505);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7105444);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7736142);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5722386);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.480622);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5711041);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4471301);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.41951);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2981109);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2180566);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2968025);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8074617);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.436358);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.710622);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.398251);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2699026);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2013529);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8373359);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.025432);
   hNCpi0inFVres_stack_7->SetBinContent(3,19.59302);
   hNCpi0inFVres_stack_7->SetBinContent(4,62.14965);
   hNCpi0inFVres_stack_7->SetBinContent(5,120.7569);
   hNCpi0inFVres_stack_7->SetBinContent(6,131.7196);
   hNCpi0inFVres_stack_7->SetBinContent(7,133.4379);
   hNCpi0inFVres_stack_7->SetBinContent(8,118.7953);
   hNCpi0inFVres_stack_7->SetBinContent(9,106.7969);
   hNCpi0inFVres_stack_7->SetBinContent(10,91.66698);
   hNCpi0inFVres_stack_7->SetBinContent(11,68.58327);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.61289);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.53519);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.84437);
   hNCpi0inFVres_stack_7->SetBinContent(15,26.99933);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.84192);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.3386);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.90572);
   hNCpi0inFVres_stack_7->SetBinContent(19,13.61094);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.75251);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.246968);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.231021);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.706387);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.258514);
   hNCpi0inFVres_stack_7->SetBinContent(25,18.65437);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2981109);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8332015);
   hNCpi0inFVres_stack_7->SetBinError(3,1.421978);
   hNCpi0inFVres_stack_7->SetBinError(4,2.532335);
   hNCpi0inFVres_stack_7->SetBinError(5,3.655346);
   hNCpi0inFVres_stack_7->SetBinError(6,3.736229);
   hNCpi0inFVres_stack_7->SetBinError(7,3.768858);
   hNCpi0inFVres_stack_7->SetBinError(8,3.468768);
   hNCpi0inFVres_stack_7->SetBinError(9,3.391257);
   hNCpi0inFVres_stack_7->SetBinError(10,3.138902);
   hNCpi0inFVres_stack_7->SetBinError(11,2.639401);
   hNCpi0inFVres_stack_7->SetBinError(12,2.461278);
   hNCpi0inFVres_stack_7->SetBinError(13,2.287395);
   hNCpi0inFVres_stack_7->SetBinError(14,2.170922);
   hNCpi0inFVres_stack_7->SetBinError(15,1.67161);
   hNCpi0inFVres_stack_7->SetBinError(16,1.699723);
   hNCpi0inFVres_stack_7->SetBinError(17,1.443079);
   hNCpi0inFVres_stack_7->SetBinError(18,1.248491);
   hNCpi0inFVres_stack_7->SetBinError(19,1.245604);
   hNCpi0inFVres_stack_7->SetBinError(20,1.108135);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8135845);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7935644);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5133179);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8161324);
   hNCpi0inFVres_stack_7->SetBinError(25,1.363858);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.9625539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.128056);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.47816);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.02292);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.20307);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.79065);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.24924);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.55208);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.96583);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.28876);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.80315);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.730492);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.34222);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.19624);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.299528);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.299776);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.721838);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.057142);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.693274);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.998766);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.240722);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.092676);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.17588);
   hNCpi0inFVdis_stack_8->SetBinContent(25,11.68466);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3148322);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6811796);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.150836);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.620058);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.432408);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.432658);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.333922);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.351075);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.126309);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.223642);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.039791);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9923233);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9994236);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9052189);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7587552);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8074215);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5847411);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6704773);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5955136);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5888321);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2960358);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4854565);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5331556);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.060178);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(2,1.999038);
   hCCpi0inFV_stack_10->SetBinContent(3,4.841572);
   hCCpi0inFV_stack_10->SetBinContent(4,17.73361);
   hCCpi0inFV_stack_10->SetBinContent(5,26.58004);
   hCCpi0inFV_stack_10->SetBinContent(6,29.06989);
   hCCpi0inFV_stack_10->SetBinContent(7,43.16298);
   hCCpi0inFV_stack_10->SetBinContent(8,35.18957);
   hCCpi0inFV_stack_10->SetBinContent(9,30.64319);
   hCCpi0inFV_stack_10->SetBinContent(10,32.88235);
   hCCpi0inFV_stack_10->SetBinContent(11,29.60616);
   hCCpi0inFV_stack_10->SetBinContent(12,20.39805);
   hCCpi0inFV_stack_10->SetBinContent(13,21.3989);
   hCCpi0inFV_stack_10->SetBinContent(14,14.89171);
   hCCpi0inFV_stack_10->SetBinContent(15,16.5624);
   hCCpi0inFV_stack_10->SetBinContent(16,11.70841);
   hCCpi0inFV_stack_10->SetBinContent(17,7.975494);
   hCCpi0inFV_stack_10->SetBinContent(18,7.967649);
   hCCpi0inFV_stack_10->SetBinContent(19,5.034906);
   hCCpi0inFV_stack_10->SetBinContent(20,5.089655);
   hCCpi0inFV_stack_10->SetBinContent(21,5.174987);
   hCCpi0inFV_stack_10->SetBinContent(22,4.345016);
   hCCpi0inFV_stack_10->SetBinContent(23,2.352132);
   hCCpi0inFV_stack_10->SetBinContent(24,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(25,16.01198);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(2,0.7339349);
   hCCpi0inFV_stack_10->SetBinError(3,1.093209);
   hCCpi0inFV_stack_10->SetBinError(4,2.057306);
   hCCpi0inFV_stack_10->SetBinError(5,2.56586);
   hCCpi0inFV_stack_10->SetBinError(6,2.676839);
   hCCpi0inFV_stack_10->SetBinError(7,3.321298);
   hCCpi0inFV_stack_10->SetBinError(8,2.920204);
   hCCpi0inFV_stack_10->SetBinError(9,2.726636);
   hCCpi0inFV_stack_10->SetBinError(10,2.916707);
   hCCpi0inFV_stack_10->SetBinError(11,2.734484);
   hCCpi0inFV_stack_10->SetBinError(12,2.22117);
   hCCpi0inFV_stack_10->SetBinError(13,2.33911);
   hCCpi0inFV_stack_10->SetBinError(14,1.962331);
   hCCpi0inFV_stack_10->SetBinError(15,2.06841);
   hCCpi0inFV_stack_10->SetBinError(16,1.714695);
   hCCpi0inFV_stack_10->SetBinError(17,1.344975);
   hCCpi0inFV_stack_10->SetBinError(18,1.415724);
   hCCpi0inFV_stack_10->SetBinError(19,1.11017);
   hCCpi0inFV_stack_10->SetBinError(20,1.121523);
   hCCpi0inFV_stack_10->SetBinError(21,1.143756);
   hCCpi0inFV_stack_10->SetBinError(22,1.093476);
   hCCpi0inFV_stack_10->SetBinError(23,0.6790081);
   hCCpi0inFV_stack_10->SetBinError(24,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(25,2.029434);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.9269427);
   hNCinFV_stack_11->SetBinContent(3,2.587494);
   hNCinFV_stack_11->SetBinContent(4,11.67711);
   hNCinFV_stack_11->SetBinContent(5,16.32535);
   hNCinFV_stack_11->SetBinContent(6,16.61505);
   hNCinFV_stack_11->SetBinContent(7,21.72894);
   hNCinFV_stack_11->SetBinContent(8,20.16825);
   hNCinFV_stack_11->SetBinContent(9,15.15351);
   hNCinFV_stack_11->SetBinContent(10,16.32028);
   hNCinFV_stack_11->SetBinContent(11,10.45202);
   hNCinFV_stack_11->SetBinContent(12,8.265799);
   hNCinFV_stack_11->SetBinContent(13,8.252883);
   hNCinFV_stack_11->SetBinContent(14,5.031525);
   hNCinFV_stack_11->SetBinContent(15,6.160255);
   hNCinFV_stack_11->SetBinContent(16,5.231622);
   hNCinFV_stack_11->SetBinContent(17,6.143958);
   hNCinFV_stack_11->SetBinContent(18,4.876838);
   hNCinFV_stack_11->SetBinContent(19,4.449832);
   hNCinFV_stack_11->SetBinContent(20,1.663932);
   hNCinFV_stack_11->SetBinContent(21,1.908829);
   hNCinFV_stack_11->SetBinContent(22,2.250697);
   hNCinFV_stack_11->SetBinContent(23,1.662242);
   hNCinFV_stack_11->SetBinContent(24,0.7336084);
   hNCinFV_stack_11->SetBinContent(25,9.174754);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.4800908);
   hNCinFV_stack_11->SetBinError(3,0.8087577);
   hNCinFV_stack_11->SetBinError(4,1.710814);
   hNCinFV_stack_11->SetBinError(5,2.021044);
   hNCinFV_stack_11->SetBinError(6,2.010315);
   hNCinFV_stack_11->SetBinError(7,2.362876);
   hNCinFV_stack_11->SetBinError(8,2.22316);
   hNCinFV_stack_11->SetBinError(9,1.963606);
   hNCinFV_stack_11->SetBinError(10,2.020553);
   hNCinFV_stack_11->SetBinError(11,1.654189);
   hNCinFV_stack_11->SetBinError(12,1.401546);
   hNCinFV_stack_11->SetBinError(13,1.468898);
   hNCinFV_stack_11->SetBinError(14,1.109574);
   hNCinFV_stack_11->SetBinError(15,1.225694);
   hNCinFV_stack_11->SetBinError(16,1.127464);
   hNCinFV_stack_11->SetBinError(17,1.301664);
   hNCinFV_stack_11->SetBinError(18,1.161086);
   hNCinFV_stack_11->SetBinError(19,1.057532);
   hNCinFV_stack_11->SetBinError(20,0.6518637);
   hNCinFV_stack_11->SetBinError(21,0.6506224);
   hNCinFV_stack_11->SetBinError(22,0.7346377);
   hNCinFV_stack_11->SetBinError(23,0.6513556);
   hNCinFV_stack_11->SetBinError(24,0.4394482);
   hNCinFV_stack_11->SetBinError(25,1.54472);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(2,1.80717);
   hnumuCCinFV_stack_12->SetBinContent(3,4.363955);
   hnumuCCinFV_stack_12->SetBinContent(4,8.869516);
   hnumuCCinFV_stack_12->SetBinContent(5,13.84257);
   hnumuCCinFV_stack_12->SetBinContent(6,18.49313);
   hnumuCCinFV_stack_12->SetBinContent(7,17.07032);
   hnumuCCinFV_stack_12->SetBinContent(8,14.80885);
   hnumuCCinFV_stack_12->SetBinContent(9,15.1698);
   hnumuCCinFV_stack_12->SetBinContent(10,11.92445);
   hnumuCCinFV_stack_12->SetBinContent(11,7.886908);
   hnumuCCinFV_stack_12->SetBinContent(12,7.316691);
   hnumuCCinFV_stack_12->SetBinContent(13,7.49138);
   hnumuCCinFV_stack_12->SetBinContent(14,7.109596);
   hnumuCCinFV_stack_12->SetBinContent(15,4.099681);
   hnumuCCinFV_stack_12->SetBinContent(16,3.99475);
   hnumuCCinFV_stack_12->SetBinContent(17,4.48608);
   hnumuCCinFV_stack_12->SetBinContent(18,3.75487);
   hnumuCCinFV_stack_12->SetBinContent(19,1.940668);
   hnumuCCinFV_stack_12->SetBinContent(20,1.907138);
   hnumuCCinFV_stack_12->SetBinContent(21,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(22,1.127039);
   hnumuCCinFV_stack_12->SetBinContent(23,2.000729);
   hnumuCCinFV_stack_12->SetBinContent(24,1.320373);
   hnumuCCinFV_stack_12->SetBinContent(25,6.909462);
   hnumuCCinFV_stack_12->SetBinError(2,0.7018924);
   hnumuCCinFV_stack_12->SetBinError(3,1.577281);
   hnumuCCinFV_stack_12->SetBinError(4,1.711378);
   hnumuCCinFV_stack_12->SetBinError(5,2.57602);
   hnumuCCinFV_stack_12->SetBinError(6,3.085283);
   hnumuCCinFV_stack_12->SetBinError(7,2.267212);
   hnumuCCinFV_stack_12->SetBinError(8,1.968911);
   hnumuCCinFV_stack_12->SetBinError(9,1.990998);
   hnumuCCinFV_stack_12->SetBinError(10,1.848311);
   hnumuCCinFV_stack_12->SetBinError(11,1.426072);
   hnumuCCinFV_stack_12->SetBinError(12,1.562024);
   hnumuCCinFV_stack_12->SetBinError(13,1.39975);
   hnumuCCinFV_stack_12->SetBinError(14,1.493731);
   hnumuCCinFV_stack_12->SetBinError(15,1.010607);
   hnumuCCinFV_stack_12->SetBinError(16,0.9685682);
   hnumuCCinFV_stack_12->SetBinError(17,1.064931);
   hnumuCCinFV_stack_12->SetBinError(18,1.039038);
   hnumuCCinFV_stack_12->SetBinError(19,0.6608645);
   hnumuCCinFV_stack_12->SetBinError(20,0.6501133);
   hnumuCCinFV_stack_12->SetBinError(21,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(22,0.5201044);
   hnumuCCinFV_stack_12->SetBinError(23,0.7343859);
   hnumuCCinFV_stack_12->SetBinError(24,0.5548703);
   hnumuCCinFV_stack_12->SetBinError(25,1.392265);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.4753021);
   hnueCCinFV_stack_13->SetBinContent(4,2.203398);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,1.905048);
   hnueCCinFV_stack_13->SetBinContent(7,2.014387);
   hnueCCinFV_stack_13->SetBinContent(8,2.650149);
   hnueCCinFV_stack_13->SetBinContent(9,1.147898);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,0.4748818);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.003996095);
   hnueCCinFV_stack_13->SetBinContent(17,0.5369257);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,10.09089);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.3414528);
   hnueCCinFV_stack_13->SetBinError(4,1.435455);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.8945168);
   hnueCCinFV_stack_13->SetBinError(7,0.7502192);
   hnueCCinFV_stack_13->SetBinError(8,0.9034206);
   hnueCCinFV_stack_13->SetBinError(9,0.6270275);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.3406916);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.4937343);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.003996095);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,2.300702);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__17->SetBinContent(1,5.196669);
   hmcerror__17->SetBinContent(2,27.11267);
   hmcerror__17->SetBinContent(3,70.90015);
   hmcerror__17->SetBinContent(4,184.4102);
   hmcerror__17->SetBinContent(5,311.1926);
   hmcerror__17->SetBinContent(6,328.0888);
   hmcerror__17->SetBinContent(7,333.19);
   hmcerror__17->SetBinContent(8,290.241);
   hmcerror__17->SetBinContent(9,235.8765);
   hmcerror__17->SetBinContent(10,204.5539);
   hmcerror__17->SetBinContent(11,164.9609);
   hmcerror__17->SetBinContent(12,141.1351);
   hmcerror__17->SetBinContent(13,114.2347);
   hmcerror__17->SetBinContent(14,93.72153);
   hmcerror__17->SetBinContent(15,71.30481);
   hmcerror__17->SetBinContent(16,61.14336);
   hmcerror__17->SetBinContent(17,51.74072);
   hmcerror__17->SetBinContent(18,44.54478);
   hmcerror__17->SetBinContent(19,37.79353);
   hmcerror__17->SetBinContent(20,27.54504);
   hmcerror__17->SetBinContent(21,20.01029);
   hmcerror__17->SetBinContent(22,16.42846);
   hmcerror__17->SetBinContent(23,15.78953);
   hmcerror__17->SetBinContent(24,12.54513);
   hmcerror__17->SetBinContent(25,82.44665);
   hmcerror__17->SetBinError(1,6.441175);
   hmcerror__17->SetBinError(2,16.07873);
   hmcerror__17->SetBinError(3,23.93479);
   hmcerror__17->SetBinError(4,72.74411);
   hmcerror__17->SetBinError(5,76.35035);
   hmcerror__17->SetBinError(6,82.57958);
   hmcerror__17->SetBinError(7,83.01095);
   hmcerror__17->SetBinError(8,77.09825);
   hmcerror__17->SetBinError(9,63.34209);
   hmcerror__17->SetBinError(10,60.01478);
   hmcerror__17->SetBinError(11,49.52612);
   hmcerror__17->SetBinError(12,42.6036);
   hmcerror__17->SetBinError(13,39.23614);
   hmcerror__17->SetBinError(14,34.6299);
   hmcerror__17->SetBinError(15,27.81938);
   hmcerror__17->SetBinError(16,26.35489);
   hmcerror__17->SetBinError(17,21.35771);
   hmcerror__17->SetBinError(18,18.89413);
   hmcerror__17->SetBinError(19,17.95477);
   hmcerror__17->SetBinError(20,14.19744);
   hmcerror__17->SetBinError(21,14.60724);
   hmcerror__17->SetBinError(22,9.296285);
   hmcerror__17->SetBinError(23,9.498163);
   hmcerror__17->SetBinError(24,10.24494);
   hmcerror__17->SetBinError(25,26.8999);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3021[24] = {
   1,
   22,
   78,
   229,
   330,
   385,
   317,
   319,
   253,
   185,
   155,
   144,
   90,
   58,
   62,
   49,
   46,
   43,
   31,
   19,
   19,
   8,
   11,
   15};
   Double_t _felx3021[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3021[24] = {
   1,
   4.8417,
   8.9562,
   15.13275,
   18.1659,
   19.62142,
   17.80449,
   17.86057,
   15.90597,
   13.60147,
   12.4499,
   12,
   9.6093,
   7.7446,
   8.0018,
   7.1318,
   6.9153,
   6.6917,
   5.7094,
   4.5151,
   4.5151,
   3.0307,
   3.4975,
   4.0385};
   Double_t _fehx3021[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3021[24] = {
   1.35971,
   4.6299,
   8.7542,
   15.13275,
   18.1659,
   19.62142,
   17.80449,
   17.86057,
   15.90597,
   13.60147,
   12.4499,
   12,
   9.4079,
   7.5415,
   7.7989,
   6.9277,
   6.7108,
   6.4868,
   5.5017,
   4.3011,
   4.3011,
   2.7896,
   3.27,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,660);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(445.0836);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2869.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.0","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 299.6","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  80.7","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.4","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1139.2","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  209.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 376.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 188.8","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 162.1","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 17.9","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3022[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3022[24] = {
   1.239482,
   0.5930337,
   0.3375846,
   0.3944691,
   0.2453475,
   0.2516989,
   0.24914,
   0.2656353,
   0.2685392,
   0.2933935,
   0.3002294,
   0.301864,
   0.3434694,
   0.3694978,
   0.3901473,
   0.4310344,
   0.4127834,
   0.4241602,
   0.4750752,
   0.5154262,
   0.7299864,
   0.5658647,
   0.6015483,
   0.8166472};
   Double_t _fehx3022[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3022[24] = {
   1.239482,
   0.5930337,
   0.3375846,
   0.3944691,
   0.2453475,
   0.2516989,
   0.24914,
   0.2656353,
   0.2685392,
   0.2933935,
   0.3002294,
   0.301864,
   0.3434694,
   0.3694978,
   0.3901473,
   0.4310344,
   0.4127834,
   0.4241602,
   0.4750752,
   0.5154262,
   0.7299864,
   0.5658647,
   0.6015483,
   0.8166472};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,660);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3023[24] = {
   0.3236886,
   0.1882142,
   0.1930899,
   0.2047076,
   0.2091924,
   0.2102436,
   0.2152137,
   0.218771,
   0.2260357,
   0.2407442,
   0.2453283,
   0.2539543,
   0.291515,
   0.3095442,
   0.3204224,
   0.3571713,
   0.344678,
   0.3103647,
   0.3248532,
   0.3483068,
   0.3340105,
   0.3511946,
   0.2943816,
   0.3489483};
   Double_t _fehx3023[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3023[24] = {
   0.3236886,
   0.1882142,
   0.1930899,
   0.2047076,
   0.2091924,
   0.2102436,
   0.2152137,
   0.218771,
   0.2260357,
   0.2407442,
   0.2453283,
   0.2539543,
   0.291515,
   0.3095442,
   0.3204224,
   0.3571713,
   0.344678,
   0.3103647,
   0.3248532,
   0.3483068,
   0.3340105,
   0.3511946,
   0.2943816,
   0.3489483};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,660);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3024[24] = {
   0.192431,
   0.8114287,
   1.100139,
   1.241797,
   1.060436,
   1.173463,
   0.9514091,
   1.099087,
   1.072595,
   0.9044072,
   0.9396166,
   1.020299,
   0.7878513,
   0.6188546,
   0.8695066,
   0.8013952,
   0.8890483,
   0.9653206,
   0.8202461,
   0.6897794,
   0.9495116,
   0.4869598,
   0.6966643,
   1.195683};
   Double_t _felx3024[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3024[24] = {
   0.192431,
   0.178577,
   0.1263213,
   0.08206026,
   0.0583751,
   0.0598052,
   0.05343646,
   0.06153704,
   0.06743347,
   0.06649334,
   0.07547182,
   0.08502492,
   0.08411889,
   0.08263416,
   0.1122196,
   0.1166406,
   0.1336529,
   0.1502241,
   0.1510682,
   0.163917,
   0.2256389,
   0.1844787,
   0.2215076,
   0.3219178};
   Double_t _fehx3024[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3024[24] = {
   0.2616503,
   0.1707652,
   0.1234722,
   0.08206026,
   0.0583751,
   0.0598052,
   0.05343646,
   0.06153704,
   0.06743347,
   0.06649334,
   0.07547182,
   0.08502492,
   0.08235585,
   0.0804671,
   0.1093741,
   0.1133026,
   0.1297005,
   0.1456242,
   0.1455725,
   0.1561479,
   0.2149444,
   0.1698029,
   0.2070993,
   0.3044767};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,660);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.650176);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

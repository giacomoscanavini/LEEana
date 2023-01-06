#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Oct 21 19:09:16 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-276.9231,-6.820941,2030.769,754.2524);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__13->SetBinContent(3,12.65214);
   hmc__13->SetBinContent(4,104.7056);
   hmc__13->SetBinContent(5,214.1876);
   hmc__13->SetBinContent(6,298.8665);
   hmc__13->SetBinContent(7,341.047);
   hmc__13->SetBinContent(8,313.7373);
   hmc__13->SetBinContent(9,310.0535);
   hmc__13->SetBinContent(10,271.3788);
   hmc__13->SetBinContent(11,216.1321);
   hmc__13->SetBinContent(12,188.5813);
   hmc__13->SetBinContent(13,144.4273);
   hmc__13->SetBinContent(14,123.6658);
   hmc__13->SetBinContent(15,98.93159);
   hmc__13->SetBinContent(16,78.82184);
   hmc__13->SetBinContent(17,66.27795);
   hmc__13->SetBinContent(18,53.2863);
   hmc__13->SetBinContent(19,50.52558);
   hmc__13->SetBinContent(20,31.73627);
   hmc__13->SetBinContent(21,28.11716);
   hmc__13->SetBinContent(22,20.42984);
   hmc__13->SetBinContent(23,15.16918);
   hmc__13->SetBinContent(24,11.22368);
   hmc__13->SetBinContent(25,8.130272);
   hmc__13->SetBinContent(26,47.55925);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.3895343);
   hmc__13->SetBinError(3,6.760014);
   hmc__13->SetBinError(4,54.03697);
   hmc__13->SetBinError(5,110.9643);
   hmc__13->SetBinError(6,143.7762);
   hmc__13->SetBinError(7,157.4258);
   hmc__13->SetBinError(8,141.3482);
   hmc__13->SetBinError(9,132.1452);
   hmc__13->SetBinError(10,102.1806);
   hmc__13->SetBinError(11,77.19122);
   hmc__13->SetBinError(12,74.59798);
   hmc__13->SetBinError(13,47.77289);
   hmc__13->SetBinError(14,39.04949);
   hmc__13->SetBinError(15,36.87188);
   hmc__13->SetBinError(16,33.84383);
   hmc__13->SetBinError(17,28.81015);
   hmc__13->SetBinError(18,28.93164);
   hmc__13->SetBinError(19,29.3082);
   hmc__13->SetBinError(20,17.29962);
   hmc__13->SetBinError(21,23.17356);
   hmc__13->SetBinError(22,12.7691);
   hmc__13->SetBinError(23,11.70683);
   hmc__13->SetBinError(24,8.97876);
   hmc__13->SetBinError(25,5.934741);
   hmc__13->SetBinError(26,24.4183);
   hmc__13->SetMinimum(-6.820941);
   hmc__13->SetMaximum(716.1988);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,1800);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(358.0994);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(3,0.4666188);
   hbadmatch_stack_1->SetBinContent(4,3.089467);
   hbadmatch_stack_1->SetBinContent(5,6.036259);
   hbadmatch_stack_1->SetBinContent(6,6.088483);
   hbadmatch_stack_1->SetBinContent(7,11.98507);
   hbadmatch_stack_1->SetBinContent(8,6.609822);
   hbadmatch_stack_1->SetBinContent(9,8.151244);
   hbadmatch_stack_1->SetBinContent(10,6.692815);
   hbadmatch_stack_1->SetBinContent(11,5.577119);
   hbadmatch_stack_1->SetBinContent(12,3.627319);
   hbadmatch_stack_1->SetBinContent(13,4.091192);
   hbadmatch_stack_1->SetBinContent(14,2.230441);
   hbadmatch_stack_1->SetBinContent(15,3.133948);
   hbadmatch_stack_1->SetBinContent(16,1.226468);
   hbadmatch_stack_1->SetBinContent(17,1.297513);
   hbadmatch_stack_1->SetBinContent(18,0.7732754);
   hbadmatch_stack_1->SetBinContent(19,1.64515);
   hbadmatch_stack_1->SetBinContent(20,0.8571335);
   hbadmatch_stack_1->SetBinContent(21,0.6475976);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,1.112665);
   hbadmatch_stack_1->SetBinError(3,0.2869468);
   hbadmatch_stack_1->SetBinError(4,1.032883);
   hbadmatch_stack_1->SetBinError(5,1.372516);
   hbadmatch_stack_1->SetBinError(6,1.305432);
   hbadmatch_stack_1->SetBinError(7,2.721285);
   hbadmatch_stack_1->SetBinError(8,1.242775);
   hbadmatch_stack_1->SetBinError(9,1.546747);
   hbadmatch_stack_1->SetBinError(10,1.423895);
   hbadmatch_stack_1->SetBinError(11,1.162142);
   hbadmatch_stack_1->SetBinError(12,0.9734529);
   hbadmatch_stack_1->SetBinError(13,1.038504);
   hbadmatch_stack_1->SetBinError(14,0.7171737);
   hbadmatch_stack_1->SetBinError(15,1.002177);
   hbadmatch_stack_1->SetBinError(16,0.5289178);
   hbadmatch_stack_1->SetBinError(17,0.6317592);
   hbadmatch_stack_1->SetBinError(18,0.396989);
   hbadmatch_stack_1->SetBinError(19,0.8370608);
   hbadmatch_stack_1->SetBinError(20,0.4491931);
   hbadmatch_stack_1->SetBinError(21,0.3768218);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.5147619);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(3,1.055394);
   hext_stack_2->SetBinContent(4,19.18341);
   hext_stack_2->SetBinContent(5,32.54323);
   hext_stack_2->SetBinContent(6,23.44089);
   hext_stack_2->SetBinContent(7,32.69604);
   hext_stack_2->SetBinContent(8,23.83036);
   hext_stack_2->SetBinContent(9,24.0163);
   hext_stack_2->SetBinContent(10,22.74901);
   hext_stack_2->SetBinContent(11,20.80981);
   hext_stack_2->SetBinContent(12,15.60188);
   hext_stack_2->SetBinContent(13,14.95308);
   hext_stack_2->SetBinContent(14,7.7022);
   hext_stack_2->SetBinContent(15,3.57278);
   hext_stack_2->SetBinContent(16,6.456453);
   hext_stack_2->SetBinContent(17,2.841783);
   hext_stack_2->SetBinContent(18,2.841783);
   hext_stack_2->SetBinContent(19,2.841783);
   hext_stack_2->SetBinContent(20,2.345802);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,3.62185);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,2.566457);
   hext_stack_2->SetBinContent(26,9.761086);
   hext_stack_2->SetBinError(3,0.6130171);
   hext_stack_2->SetBinError(4,3.197004);
   hext_stack_2->SetBinError(5,4.000859);
   hext_stack_2->SetBinError(6,3.273834);
   hext_stack_2->SetBinError(7,4.024069);
   hext_stack_2->SetBinError(8,3.409111);
   hext_stack_2->SetBinError(9,3.337455);
   hext_stack_2->SetBinError(10,3.422678);
   hext_stack_2->SetBinError(11,3.298806);
   hext_stack_2->SetBinError(12,2.706933);
   hext_stack_2->SetBinError(13,2.667774);
   hext_stack_2->SetBinError(14,1.809223);
   hext_stack_2->SetBinError(15,1.136966);
   hext_stack_2->SetBinError(16,1.801611);
   hext_stack_2->SetBinError(17,1.011007);
   hext_stack_2->SetBinError(18,1.011007);
   hext_stack_2->SetBinError(19,1.011007);
   hext_stack_2->SetBinError(20,0.9989624);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,1.422134);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,1.283228);
   hext_stack_2->SetBinError(26,2.227517);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(3,0.4247338);
   hdirt_stack_3->SetBinContent(4,1.184374);
   hdirt_stack_3->SetBinContent(5,2.63664);
   hdirt_stack_3->SetBinContent(6,3.054211);
   hdirt_stack_3->SetBinContent(7,3.196711);
   hdirt_stack_3->SetBinContent(8,1.93823);
   hdirt_stack_3->SetBinContent(9,1.252818);
   hdirt_stack_3->SetBinContent(10,0.8811711);
   hdirt_stack_3->SetBinContent(11,0.6566868);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.4762587);
   hdirt_stack_3->SetBinError(3,0.4247338);
   hdirt_stack_3->SetBinError(4,0.4939299);
   hdirt_stack_3->SetBinError(5,0.8488087);
   hdirt_stack_3->SetBinError(6,0.9121639);
   hdirt_stack_3->SetBinError(7,1.179002);
   hdirt_stack_3->SetBinError(8,0.6868584);
   hdirt_stack_3->SetBinError(9,0.5964192);
   hdirt_stack_3->SetBinError(10,0.5453333);
   hdirt_stack_3->SetBinError(11,0.3791383);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(19,0.3652866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(3,1.592237);
   houtFV_stack_4->SetBinContent(4,13.46166);
   houtFV_stack_4->SetBinContent(5,19.84076);
   houtFV_stack_4->SetBinContent(6,23.8299);
   houtFV_stack_4->SetBinContent(7,24.37186);
   houtFV_stack_4->SetBinContent(8,23.05278);
   houtFV_stack_4->SetBinContent(9,22.43834);
   houtFV_stack_4->SetBinContent(10,17.53273);
   houtFV_stack_4->SetBinContent(11,9.947241);
   houtFV_stack_4->SetBinContent(12,8.662739);
   houtFV_stack_4->SetBinContent(13,7.470691);
   houtFV_stack_4->SetBinContent(14,8.460446);
   houtFV_stack_4->SetBinContent(15,5.506044);
   houtFV_stack_4->SetBinContent(16,4.968966);
   houtFV_stack_4->SetBinContent(17,2.357415);
   houtFV_stack_4->SetBinContent(18,1.515398);
   houtFV_stack_4->SetBinContent(19,2.291034);
   houtFV_stack_4->SetBinContent(20,0.5352025);
   houtFV_stack_4->SetBinContent(21,1.53066);
   houtFV_stack_4->SetBinContent(22,1.31271);
   houtFV_stack_4->SetBinContent(23,0.7336084);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(25,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.9269427);
   houtFV_stack_4->SetBinError(3,0.6552693);
   houtFV_stack_4->SetBinError(4,1.846635);
   houtFV_stack_4->SetBinError(5,2.289441);
   houtFV_stack_4->SetBinError(6,2.32014);
   houtFV_stack_4->SetBinError(7,2.333061);
   houtFV_stack_4->SetBinError(8,2.318803);
   houtFV_stack_4->SetBinError(9,2.285512);
   houtFV_stack_4->SetBinError(10,2.164898);
   houtFV_stack_4->SetBinError(11,1.470428);
   houtFV_stack_4->SetBinError(12,1.449123);
   houtFV_stack_4->SetBinError(13,1.397894);
   houtFV_stack_4->SetBinError(14,1.76973);
   houtFV_stack_4->SetBinError(15,1.280717);
   houtFV_stack_4->SetBinError(16,1.307516);
   houtFV_stack_4->SetBinError(17,0.7251452);
   houtFV_stack_4->SetBinError(18,0.588146);
   houtFV_stack_4->SetBinError(19,0.8334836);
   houtFV_stack_4->SetBinError(20,0.3921167);
   houtFV_stack_4->SetBinError(21,0.8148776);
   houtFV_stack_4->SetBinError(22,0.7278541);
   houtFV_stack_4->SetBinError(23,0.4394482);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(25,0.3401776);
   houtFV_stack_4->SetBinError(26,0.4800908);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3376789);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4584224);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7577543);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6130161);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.655843);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6114526);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4655878);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.112558);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2448018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1914946);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.122759);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1857822);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2356026);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3160089);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2468333);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2724254);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1851506);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1654722);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05961464);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1739595);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1254523);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05604072);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2792353);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1086555);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3235307);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.662812);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.877008);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.503733);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.575024);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.129871);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9252117);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4749759);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6562108);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2403618);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4463967);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3263664);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08168284);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2185845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1255315);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1438788);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4012229);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4145889);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3029245);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3258678);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2645904);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.211523);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1698157);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.227783);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1285097);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2203866);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1763406);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04195796);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2025098);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1083628);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.59327);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.85752);
   hNCpi0inFVres_stack_7->SetBinContent(5,91.47897);
   hNCpi0inFVres_stack_7->SetBinContent(6,136.4673);
   hNCpi0inFVres_stack_7->SetBinContent(7,146.7959);
   hNCpi0inFVres_stack_7->SetBinContent(8,130.8988);
   hNCpi0inFVres_stack_7->SetBinContent(9,106.4633);
   hNCpi0inFVres_stack_7->SetBinContent(10,85.16725);
   hNCpi0inFVres_stack_7->SetBinContent(11,64.79072);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.84052);
   hNCpi0inFVres_stack_7->SetBinContent(13,31.90906);
   hNCpi0inFVres_stack_7->SetBinContent(14,27.95029);
   hNCpi0inFVres_stack_7->SetBinContent(15,25.97149);
   hNCpi0inFVres_stack_7->SetBinContent(16,19.58138);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.15248);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.52997);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.296524);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.454893);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.577622);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.255548);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.777085);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.727364);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4575718);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.676209);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7612152);
   hNCpi0inFVres_stack_7->SetBinError(4,1.903862);
   hNCpi0inFVres_stack_7->SetBinError(5,2.849279);
   hNCpi0inFVres_stack_7->SetBinError(6,3.249556);
   hNCpi0inFVres_stack_7->SetBinError(7,3.282489);
   hNCpi0inFVres_stack_7->SetBinError(8,3.176156);
   hNCpi0inFVres_stack_7->SetBinError(9,2.788003);
   hNCpi0inFVres_stack_7->SetBinError(10,2.728502);
   hNCpi0inFVres_stack_7->SetBinError(11,2.512711);
   hNCpi0inFVres_stack_7->SetBinError(12,2.243615);
   hNCpi0inFVres_stack_7->SetBinError(13,1.63445);
   hNCpi0inFVres_stack_7->SetBinError(14,1.805685);
   hNCpi0inFVres_stack_7->SetBinError(15,2.019476);
   hNCpi0inFVres_stack_7->SetBinError(16,1.939527);
   hNCpi0inFVres_stack_7->SetBinError(17,1.359795);
   hNCpi0inFVres_stack_7->SetBinError(18,1.683561);
   hNCpi0inFVres_stack_7->SetBinError(19,1.295689);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9426683);
   hNCpi0inFVres_stack_7->SetBinError(21,1.040399);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8318713);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8717429);
   hNCpi0inFVres_stack_7->SetBinError(24,0.548424);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1788072);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6637438);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.280491);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.429163);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.8159);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.27339);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.68871);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.28516);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.94774);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.53325);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.58489);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.44276);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.37602);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.30147);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.26842);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.6089);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.386069);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.486106);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.743828);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.79257);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.900419);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.497957);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.171694);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.037007);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.031148);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.615604);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3635786);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8265);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8926286);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.197102);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.200858);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.353438);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.276604);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.197311);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.538206);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.273235);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.18608);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.366675);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.245209);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.20617);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.167312);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9532934);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.423979);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.157483);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8559484);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4346075);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8011663);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7522707);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2788684);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.7426547);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1840742);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1654532);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1996509);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1483624);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1177733);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1348803);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.113567);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1361326);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05245982);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.07223304);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(4,3.411311);
   hCCpi0inFV_stack_10->SetBinContent(5,8.652468);
   hCCpi0inFV_stack_10->SetBinContent(6,23.76236);
   hCCpi0inFV_stack_10->SetBinContent(7,38.67685);
   hCCpi0inFV_stack_10->SetBinContent(8,48.89095);
   hCCpi0inFV_stack_10->SetBinContent(9,57.14175);
   hCCpi0inFV_stack_10->SetBinContent(10,60.15874);
   hCCpi0inFV_stack_10->SetBinContent(11,48.71433);
   hCCpi0inFV_stack_10->SetBinContent(12,44.17356);
   hCCpi0inFV_stack_10->SetBinContent(13,36.72754);
   hCCpi0inFV_stack_10->SetBinContent(14,32.58454);
   hCCpi0inFV_stack_10->SetBinContent(15,26.5754);
   hCCpi0inFV_stack_10->SetBinContent(16,16.41395);
   hCCpi0inFV_stack_10->SetBinContent(17,14.53625);
   hCCpi0inFV_stack_10->SetBinContent(18,13.67625);
   hCCpi0inFV_stack_10->SetBinContent(19,10.95001);
   hCCpi0inFV_stack_10->SetBinContent(20,5.619981);
   hCCpi0inFV_stack_10->SetBinContent(21,3.711152);
   hCCpi0inFV_stack_10->SetBinContent(22,3.82718);
   hCCpi0inFV_stack_10->SetBinContent(23,3.037559);
   hCCpi0inFV_stack_10->SetBinContent(24,2.486059);
   hCCpi0inFV_stack_10->SetBinContent(25,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(26,10.45033);
   hCCpi0inFV_stack_10->SetBinError(3,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(4,0.9810986);
   hCCpi0inFV_stack_10->SetBinError(5,1.427962);
   hCCpi0inFV_stack_10->SetBinError(6,2.505857);
   hCCpi0inFV_stack_10->SetBinError(7,3.085946);
   hCCpi0inFV_stack_10->SetBinError(8,3.482308);
   hCCpi0inFV_stack_10->SetBinError(9,3.789373);
   hCCpi0inFV_stack_10->SetBinError(10,3.923126);
   hCCpi0inFV_stack_10->SetBinError(11,3.463263);
   hCCpi0inFV_stack_10->SetBinError(12,3.338732);
   hCCpi0inFV_stack_10->SetBinError(13,3.038244);
   hCCpi0inFV_stack_10->SetBinError(14,2.910804);
   hCCpi0inFV_stack_10->SetBinError(15,2.634083);
   hCCpi0inFV_stack_10->SetBinError(16,2.015367);
   hCCpi0inFV_stack_10->SetBinError(17,1.858596);
   hCCpi0inFV_stack_10->SetBinError(18,1.944836);
   hCCpi0inFV_stack_10->SetBinError(19,1.612367);
   hCCpi0inFV_stack_10->SetBinError(20,1.160423);
   hCCpi0inFV_stack_10->SetBinError(21,0.960871);
   hCCpi0inFV_stack_10->SetBinError(22,1.043552);
   hCCpi0inFV_stack_10->SetBinError(23,0.8333549);
   hCCpi0inFV_stack_10->SetBinError(24,0.8559962);
   hCCpi0inFV_stack_10->SetBinError(25,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(26,1.653989);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.7336084);
   hNCinFV_stack_11->SetBinContent(4,4.810731);
   hNCinFV_stack_11->SetBinContent(5,12.16001);
   hNCinFV_stack_11->SetBinContent(6,16.66936);
   hNCinFV_stack_11->SetBinContent(7,25.2216);
   hNCinFV_stack_11->SetBinContent(8,18.73041);
   hNCinFV_stack_11->SetBinContent(9,26.34324);
   hNCinFV_stack_11->SetBinContent(10,24.21704);
   hNCinFV_stack_11->SetBinContent(11,17.90281);
   hNCinFV_stack_11->SetBinContent(12,21.99193);
   hNCinFV_stack_11->SetBinContent(13,15.5072);
   hNCinFV_stack_11->SetBinContent(14,15.22331);
   hNCinFV_stack_11->SetBinContent(15,10.83458);
   hNCinFV_stack_11->SetBinContent(16,13.5831);
   hNCinFV_stack_11->SetBinContent(17,15.82656);
   hNCinFV_stack_11->SetBinContent(18,6.802716);
   hNCinFV_stack_11->SetBinContent(19,8.470669);
   hNCinFV_stack_11->SetBinContent(20,7.689126);
   hNCinFV_stack_11->SetBinContent(21,8.281092);
   hNCinFV_stack_11->SetBinContent(22,3.654182);
   hNCinFV_stack_11->SetBinContent(23,2.859425);
   hNCinFV_stack_11->SetBinContent(24,1.663932);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,3.898332);
   hNCinFV_stack_11->SetBinError(3,0.4394482);
   hNCinFV_stack_11->SetBinError(4,1.151731);
   hNCinFV_stack_11->SetBinError(5,1.758373);
   hNCinFV_stack_11->SetBinError(6,1.976798);
   hNCinFV_stack_11->SetBinError(7,2.490181);
   hNCinFV_stack_11->SetBinError(8,1.999911);
   hNCinFV_stack_11->SetBinError(9,2.460826);
   hNCinFV_stack_11->SetBinError(10,2.52596);
   hNCinFV_stack_11->SetBinError(11,2.186937);
   hNCinFV_stack_11->SetBinError(12,2.569732);
   hNCinFV_stack_11->SetBinError(13,2.217994);
   hNCinFV_stack_11->SetBinError(14,2.073158);
   hNCinFV_stack_11->SetBinError(15,1.885163);
   hNCinFV_stack_11->SetBinError(16,2.312636);
   hNCinFV_stack_11->SetBinError(17,2.623586);
   hNCinFV_stack_11->SetBinError(18,1.6084);
   hNCinFV_stack_11->SetBinError(19,2.001851);
   hNCinFV_stack_11->SetBinError(20,1.906644);
   hNCinFV_stack_11->SetBinError(21,2.048756);
   hNCinFV_stack_11->SetBinError(22,1.190942);
   hNCinFV_stack_11->SetBinError(23,1.305926);
   hNCinFV_stack_11->SetBinError(24,0.6518637);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,1.075464);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(3,1.007544);
   hnumuCCinFV_stack_12->SetBinContent(4,12.82372);
   hnumuCCinFV_stack_12->SetBinContent(5,27.14265);
   hnumuCCinFV_stack_12->SetBinContent(6,44.99746);
   hnumuCCinFV_stack_12->SetBinContent(7,34.5744);
   hnumuCCinFV_stack_12->SetBinContent(8,34.70499);
   hnumuCCinFV_stack_12->SetBinContent(9,40.87578);
   hnumuCCinFV_stack_12->SetBinContent(10,32.4949);
   hnumuCCinFV_stack_12->SetBinContent(11,28.02543);
   hnumuCCinFV_stack_12->SetBinContent(12,28.12416);
   hnumuCCinFV_stack_12->SetBinContent(13,19.84455);
   hnumuCCinFV_stack_12->SetBinContent(14,15.90026);
   hnumuCCinFV_stack_12->SetBinContent(15,10.6439);
   hnumuCCinFV_stack_12->SetBinContent(16,7.611953);
   hnumuCCinFV_stack_12->SetBinContent(17,8.093199);
   hnumuCCinFV_stack_12->SetBinContent(18,8.146715);
   hnumuCCinFV_stack_12->SetBinContent(19,6.739919);
   hnumuCCinFV_stack_12->SetBinContent(20,4.360814);
   hnumuCCinFV_stack_12->SetBinContent(21,4.208091);
   hnumuCCinFV_stack_12->SetBinContent(22,2.840843);
   hnumuCCinFV_stack_12->SetBinContent(23,2.620113);
   hnumuCCinFV_stack_12->SetBinContent(24,1.375317);
   hnumuCCinFV_stack_12->SetBinContent(25,1.123658);
   hnumuCCinFV_stack_12->SetBinContent(26,8.424934);
   hnumuCCinFV_stack_12->SetBinError(3,0.5114831);
   hnumuCCinFV_stack_12->SetBinError(4,2.571298);
   hnumuCCinFV_stack_12->SetBinError(5,3.407354);
   hnumuCCinFV_stack_12->SetBinError(6,4.077494);
   hnumuCCinFV_stack_12->SetBinError(7,3.542362);
   hnumuCCinFV_stack_12->SetBinError(8,3.302305);
   hnumuCCinFV_stack_12->SetBinError(9,3.670506);
   hnumuCCinFV_stack_12->SetBinError(10,3.120264);
   hnumuCCinFV_stack_12->SetBinError(11,2.96529);
   hnumuCCinFV_stack_12->SetBinError(12,3.621111);
   hnumuCCinFV_stack_12->SetBinError(13,2.650081);
   hnumuCCinFV_stack_12->SetBinError(14,2.261231);
   hnumuCCinFV_stack_12->SetBinError(15,1.684917);
   hnumuCCinFV_stack_12->SetBinError(16,1.39986);
   hnumuCCinFV_stack_12->SetBinError(17,1.434785);
   hnumuCCinFV_stack_12->SetBinError(18,1.494997);
   hnumuCCinFV_stack_12->SetBinError(19,1.318085);
   hnumuCCinFV_stack_12->SetBinError(20,1.032436);
   hnumuCCinFV_stack_12->SetBinError(21,0.992289);
   hnumuCCinFV_stack_12->SetBinError(22,0.8098046);
   hnumuCCinFV_stack_12->SetBinError(23,0.8597582);
   hnumuCCinFV_stack_12->SetBinError(24,0.5198233);
   hnumuCCinFV_stack_12->SetBinError(25,0.5188295);
   hnumuCCinFV_stack_12->SetBinError(26,1.528198);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(5,0.5940435);
   hnueCCinFV_stack_13->SetBinContent(6,0.4487298);
   hnueCCinFV_stack_13->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(8,0.44716);
   hnueCCinFV_stack_13->SetBinContent(9,0.6445951);
   hnueCCinFV_stack_13->SetBinContent(10,2.561143);
   hnueCCinFV_stack_13->SetBinContent(11,0.5355703);
   hnueCCinFV_stack_13->SetBinContent(12,0.441907);
   hnueCCinFV_stack_13->SetBinContent(13,2.062788);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.8378454);
   hnueCCinFV_stack_13->SetBinContent(16,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(17,0.5604295);
   hnueCCinFV_stack_13->SetBinContent(18,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(19,1.070405);
   hnueCCinFV_stack_13->SetBinContent(21,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(25,0.9507085);
   hnueCCinFV_stack_13->SetBinContent(26,5.512139);
   hnueCCinFV_stack_13->SetBinError(4,0.4575996);
   hnueCCinFV_stack_13->SetBinError(5,0.4244628);
   hnueCCinFV_stack_13->SetBinError(6,0.3200014);
   hnueCCinFV_stack_13->SetBinError(7,0.4132436);
   hnueCCinFV_stack_13->SetBinError(8,0.3184642);
   hnueCCinFV_stack_13->SetBinError(9,0.3748032);
   hnueCCinFV_stack_13->SetBinError(10,0.9699403);
   hnueCCinFV_stack_13->SetBinError(11,0.3921169);
   hnueCCinFV_stack_13->SetBinError(12,0.3143499);
   hnueCCinFV_stack_13->SetBinError(13,1.613388);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.4213651);
   hnueCCinFV_stack_13->SetBinError(16,0.2331833);
   hnueCCinFV_stack_13->SetBinError(17,0.4141923);
   hnueCCinFV_stack_13->SetBinError(18,0.3326517);
   hnueCCinFV_stack_13->SetBinError(19,0.5545368);
   hnueCCinFV_stack_13->SetBinError(21,0.438694);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.1711909);
   hnueCCinFV_stack_13->SetBinError(25,0.4901501);
   hnueCCinFV_stack_13->SetBinError(26,1.599563);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__14->SetBinContent(3,12.65214);
   hmcerror__14->SetBinContent(4,104.7056);
   hmcerror__14->SetBinContent(5,214.1876);
   hmcerror__14->SetBinContent(6,298.8665);
   hmcerror__14->SetBinContent(7,341.047);
   hmcerror__14->SetBinContent(8,313.7373);
   hmcerror__14->SetBinContent(9,310.0535);
   hmcerror__14->SetBinContent(10,271.3788);
   hmcerror__14->SetBinContent(11,216.1321);
   hmcerror__14->SetBinContent(12,188.5813);
   hmcerror__14->SetBinContent(13,144.4273);
   hmcerror__14->SetBinContent(14,123.6658);
   hmcerror__14->SetBinContent(15,98.93159);
   hmcerror__14->SetBinContent(16,78.82184);
   hmcerror__14->SetBinContent(17,66.27795);
   hmcerror__14->SetBinContent(18,53.2863);
   hmcerror__14->SetBinContent(19,50.52558);
   hmcerror__14->SetBinContent(20,31.73627);
   hmcerror__14->SetBinContent(21,28.11716);
   hmcerror__14->SetBinContent(22,20.42984);
   hmcerror__14->SetBinContent(23,15.16918);
   hmcerror__14->SetBinContent(24,11.22368);
   hmcerror__14->SetBinContent(25,8.130272);
   hmcerror__14->SetBinContent(26,47.55925);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.3895343);
   hmcerror__14->SetBinError(3,6.760014);
   hmcerror__14->SetBinError(4,54.03697);
   hmcerror__14->SetBinError(5,110.9643);
   hmcerror__14->SetBinError(6,143.7762);
   hmcerror__14->SetBinError(7,157.4258);
   hmcerror__14->SetBinError(8,141.3482);
   hmcerror__14->SetBinError(9,132.1452);
   hmcerror__14->SetBinError(10,102.1806);
   hmcerror__14->SetBinError(11,77.19122);
   hmcerror__14->SetBinError(12,74.59798);
   hmcerror__14->SetBinError(13,47.77289);
   hmcerror__14->SetBinError(14,39.04949);
   hmcerror__14->SetBinError(15,36.87188);
   hmcerror__14->SetBinError(16,33.84383);
   hmcerror__14->SetBinError(17,28.81015);
   hmcerror__14->SetBinError(18,28.93164);
   hmcerror__14->SetBinError(19,29.3082);
   hmcerror__14->SetBinError(20,17.29962);
   hmcerror__14->SetBinError(21,23.17356);
   hmcerror__14->SetBinError(22,12.7691);
   hmcerror__14->SetBinError(23,11.70683);
   hmcerror__14->SetBinError(24,8.97876);
   hmcerror__14->SetBinError(25,5.934741);
   hmcerror__14->SetBinError(26,24.4183);
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
   
   Double_t _fx3017[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3017[25] = {
   0,
   0,
   13,
   116,
   230,
   330,
   338,
   310,
   290,
   212,
   159,
   140,
   113,
   74,
   63,
   47,
   43,
   32,
   25,
   10,
   15,
   9,
   10,
   5,
   5};
   Double_t _felx3017[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3017[25] = {
   0,
   0,
   3.77763,
   10.77033,
   15.16575,
   18.1659,
   18.38478,
   17.60682,
   17.02939,
   14.56022,
   12.60952,
   11.83216,
   10.63015,
   8.7275,
   8.0648,
   6.9882,
   6.6917,
   5.7977,
   5.1474,
   3.34883,
   4.0385,
   3.19354,
   3.34883,
   2.48995,
   2.48995};
   Double_t _fehx3017[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3017[25] = {
   1.1478,
   1.1478,
   3.5552,
   10.77033,
   15.16575,
   18.1659,
   18.38478,
   17.60682,
   17.02939,
   14.56022,
   12.60952,
   11.83216,
   10.63015,
   8.5253,
   7.862,
   6.7839,
   6.4868,
   5.5904,
   4.9374,
   3.1179,
   3.8197,
   2.9582,
   3.1179,
   2.21064,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1980);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(392.0233);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2589.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 74.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 267.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 202.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1015.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  230.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 505.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 279.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 378.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3018[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3018[25] = {
   0,
   0,
   0.5342979,
   0.5160847,
   0.5180707,
   0.4810716,
   0.4615957,
   0.4505304,
   0.4262013,
   0.3765237,
   0.3571482,
   0.3955747,
   0.3307747,
   0.3157662,
   0.3727008,
   0.4293712,
   0.4346868,
   0.5429471,
   0.5800666,
   0.5451056,
   0.8241786,
   0.6250219,
   0.7717508,
   0.7999838,
   0.729956};
   Double_t _fehx3018[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3018[25] = {
   0,
   0,
   0.5342979,
   0.5160847,
   0.5180707,
   0.4810716,
   0.4615957,
   0.4505304,
   0.4262013,
   0.3765237,
   0.3571482,
   0.3955747,
   0.3307747,
   0.3157662,
   0.3727008,
   0.4293712,
   0.4346868,
   0.5429471,
   0.5800666,
   0.5451056,
   0.8241786,
   0.6250219,
   0.7717508,
   0.7999838,
   0.729956};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1980);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3019[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3019[25] = {
   0,
   0,
   0.3482551,
   0.4966244,
   0.5091006,
   0.4629163,
   0.4322057,
   0.4369443,
   0.4048214,
   0.352033,
   0.3247419,
   0.3063046,
   0.2707755,
   0.2273228,
   0.254424,
   0.2884923,
   0.2997674,
   0.3315994,
   0.3392205,
   0.3813297,
   0.3796364,
   0.2782405,
   0.3861842,
   0.2911764,
   0.3022468};
   Double_t _fehx3019[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3019[25] = {
   0,
   0,
   0.3482551,
   0.4966244,
   0.5091006,
   0.4629163,
   0.4322057,
   0.4369443,
   0.4048214,
   0.352033,
   0.3247419,
   0.3063046,
   0.2707755,
   0.2273228,
   0.254424,
   0.2884923,
   0.2997674,
   0.3315994,
   0.3392205,
   0.3813297,
   0.3796364,
   0.2782405,
   0.3861842,
   0.2911764,
   0.3022468};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1980);
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
   
   Double_t _fx3020[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3020[25] = {
   10,
   10,
   1.027494,
   1.107868,
   1.073825,
   1.104172,
   0.9910657,
   0.9880877,
   0.9353226,
   0.7811957,
   0.7356611,
   0.7423854,
   0.7824006,
   0.5983868,
   0.6368036,
   0.5962814,
   0.6487829,
   0.6005295,
   0.4947989,
   0.3150969,
   0.533482,
   0.4405321,
   0.6592313,
   0.4454868,
   0.6149856};
   Double_t _felx3020[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3020[25] = {
   0,
   0,
   0.2985763,
   0.1028629,
   0.07080592,
   0.06078265,
   0.05390687,
   0.05611961,
   0.05492403,
   0.05365274,
   0.05834172,
   0.06274302,
   0.07360206,
   0.07057326,
   0.08151895,
   0.08865817,
   0.1009642,
   0.1088028,
   0.1018771,
   0.1055206,
   0.1436311,
   0.1563174,
   0.2207653,
   0.221848,
   0.3062567};
   Double_t _fehx3020[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3020[25] = {
   0,
   0,
   0.2809959,
   0.1028629,
   0.07080592,
   0.06078265,
   0.05390687,
   0.05611961,
   0.05492403,
   0.05365274,
   0.05834172,
   0.06274302,
   0.07360206,
   0.06893821,
   0.07946905,
   0.08606625,
   0.09787267,
   0.1049125,
   0.0977208,
   0.09824406,
   0.1358494,
   0.144798,
   0.2055417,
   0.1969622,
   0.2719023};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1980);
   Graph_Graph3020->SetMinimum(0.1886187);
   Graph_Graph3020->SetMaximum(10.97904);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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

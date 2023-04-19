#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 11:38:29 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-2.18,676.9231,241.0621);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__22->SetBinContent(1,2.955686);
   hmc__22->SetBinContent(2,12.79031);
   hmc__22->SetBinContent(3,40.20447);
   hmc__22->SetBinContent(4,71.39468);
   hmc__22->SetBinContent(5,89.61838);
   hmc__22->SetBinContent(6,107.535);
   hmc__22->SetBinContent(7,104.6104);
   hmc__22->SetBinContent(8,95.51704);
   hmc__22->SetBinContent(9,71.49326);
   hmc__22->SetBinContent(10,62.98321);
   hmc__22->SetBinContent(11,54.76198);
   hmc__22->SetBinContent(12,41.07697);
   hmc__22->SetBinContent(13,38.9612);
   hmc__22->SetBinContent(14,27.36628);
   hmc__22->SetBinContent(15,22.73569);
   hmc__22->SetBinContent(16,20.08462);
   hmc__22->SetBinContent(17,14.64492);
   hmc__22->SetBinContent(18,11.46472);
   hmc__22->SetBinContent(19,11.76149);
   hmc__22->SetBinContent(20,9.709655);
   hmc__22->SetBinContent(21,6.244549);
   hmc__22->SetBinContent(22,5.463738);
   hmc__22->SetBinContent(23,4.460368);
   hmc__22->SetBinContent(24,3.288095);
   hmc__22->SetBinContent(25,32.87112);
   hmc__22->SetBinError(1,27.82572);
   hmc__22->SetBinError(2,9.210578);
   hmc__22->SetBinError(3,23.72606);
   hmc__22->SetBinError(4,19.84028);
   hmc__22->SetBinError(5,30.2856);
   hmc__22->SetBinError(6,26.69464);
   hmc__22->SetBinError(7,36.03031);
   hmc__22->SetBinError(8,26.28658);
   hmc__22->SetBinError(9,23.27795);
   hmc__22->SetBinError(10,22.1892);
   hmc__22->SetBinError(11,16.75814);
   hmc__22->SetBinError(12,14.5881);
   hmc__22->SetBinError(13,14.62085);
   hmc__22->SetBinError(14,12.15551);
   hmc__22->SetBinError(15,11.86755);
   hmc__22->SetBinError(16,17.3898);
   hmc__22->SetBinError(17,8.341743);
   hmc__22->SetBinError(18,6.753202);
   hmc__22->SetBinError(19,8.354928);
   hmc__22->SetBinError(20,8.127925);
   hmc__22->SetBinError(21,10.06768);
   hmc__22->SetBinError(22,5.565871);
   hmc__22->SetBinError(23,4.699956);
   hmc__22->SetBinError(24,3.914993);
   hmc__22->SetBinError(25,17.00991);
   hmc__22->SetMinimum(-2.18);
   hmc__22->SetMaximum(228.9);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,600);
   hs8_stack_8->SetMinimum(-3.871883e-08);
   hs8_stack_8->SetMaximum(112.9117);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.071247);
   hbadmatch_stack_1->SetBinContent(2,1.231522);
   hbadmatch_stack_1->SetBinContent(3,2.756902);
   hbadmatch_stack_1->SetBinContent(4,2.958113);
   hbadmatch_stack_1->SetBinContent(5,2.546426);
   hbadmatch_stack_1->SetBinContent(6,3.753182);
   hbadmatch_stack_1->SetBinContent(7,4.890284);
   hbadmatch_stack_1->SetBinContent(8,2.637975);
   hbadmatch_stack_1->SetBinContent(9,4.520336);
   hbadmatch_stack_1->SetBinContent(10,1.072095);
   hbadmatch_stack_1->SetBinContent(11,1.326947);
   hbadmatch_stack_1->SetBinContent(12,1.073786);
   hbadmatch_stack_1->SetBinContent(13,0.588319);
   hbadmatch_stack_1->SetBinContent(14,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,0.3962007);
   hbadmatch_stack_1->SetBinContent(25,0.7868615);
   hbadmatch_stack_1->SetBinError(1,1.071247);
   hbadmatch_stack_1->SetBinError(2,0.6291061);
   hbadmatch_stack_1->SetBinError(3,0.8650006);
   hbadmatch_stack_1->SetBinError(4,0.8847108);
   hbadmatch_stack_1->SetBinError(5,0.7485457);
   hbadmatch_stack_1->SetBinError(6,1.038719);
   hbadmatch_stack_1->SetBinError(7,1.249098);
   hbadmatch_stack_1->SetBinError(8,0.8221943);
   hbadmatch_stack_1->SetBinError(9,1.252547);
   hbadmatch_stack_1->SetBinError(10,0.5551335);
   hbadmatch_stack_1->SetBinError(11,0.6095374);
   hbadmatch_stack_1->SetBinError(12,0.5557297);
   hbadmatch_stack_1->SetBinError(13,0.4382355);
   hbadmatch_stack_1->SetBinError(14,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.3962007);
   hbadmatch_stack_1->SetBinError(25,0.3934307);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.3243973);
   hext_stack_2->SetBinContent(2,5.109793);
   hext_stack_2->SetBinContent(3,14.57243);
   hext_stack_2->SetBinContent(4,25.56327);
   hext_stack_2->SetBinContent(5,17.82081);
   hext_stack_2->SetBinContent(6,25.97705);
   hext_stack_2->SetBinContent(7,21.36046);
   hext_stack_2->SetBinContent(8,20.57757);
   hext_stack_2->SetBinContent(9,12.18033);
   hext_stack_2->SetBinContent(10,11.54748);
   hext_stack_2->SetBinContent(11,12.67071);
   hext_stack_2->SetBinContent(12,7.2134);
   hext_stack_2->SetBinContent(13,6.209848);
   hext_stack_2->SetBinContent(14,4.378797);
   hext_stack_2->SetBinContent(15,1.297589);
   hext_stack_2->SetBinContent(16,2.014225);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,1.950793);
   hext_stack_2->SetBinContent(19,1.048213);
   hext_stack_2->SetBinContent(20,1.219797);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.9660115);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,2.27519);
   hext_stack_2->SetBinError(1,0.3243973);
   hext_stack_2->SetBinError(2,1.447444);
   hext_stack_2->SetBinError(3,2.546215);
   hext_stack_2->SetBinError(4,3.376905);
   hext_stack_2->SetBinError(5,2.769598);
   hext_stack_2->SetBinError(6,3.371588);
   hext_stack_2->SetBinError(7,3.103715);
   hext_stack_2->SetBinError(8,3.209276);
   hext_stack_2->SetBinError(9,2.102187);
   hext_stack_2->SetBinError(10,2.368159);
   hext_stack_2->SetBinError(11,2.538988);
   hext_stack_2->SetBinError(12,1.745817);
   hext_stack_2->SetBinError(13,1.750867);
   hext_stack_2->SetBinError(14,1.350755);
   hext_stack_2->SetBinError(15,0.6487947);
   hext_stack_2->SetBinError(16,1.045894);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,0.8755137);
   hext_stack_2->SetBinError(19,0.7595995);
   hext_stack_2->SetBinError(20,0.7042499);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7189592);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.9336798);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.2761429);
   hdirt_stack_3->SetBinContent(3,1.629463);
   hdirt_stack_3->SetBinContent(4,1.568491);
   hdirt_stack_3->SetBinContent(5,3.915828);
   hdirt_stack_3->SetBinContent(6,3.808434);
   hdirt_stack_3->SetBinContent(7,1.885121);
   hdirt_stack_3->SetBinContent(8,1.358039);
   hdirt_stack_3->SetBinContent(9,0.4379117);
   hdirt_stack_3->SetBinContent(10,0.8494049);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,0.9281173);
   hdirt_stack_3->SetBinContent(16,0.165479);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.399291);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.1952625);
   hdirt_stack_3->SetBinError(3,0.6454604);
   hdirt_stack_3->SetBinError(4,0.6407044);
   hdirt_stack_3->SetBinError(5,1.017452);
   hdirt_stack_3->SetBinError(6,1.007968);
   hdirt_stack_3->SetBinError(7,0.7236492);
   hdirt_stack_3->SetBinError(8,0.6345893);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.5084893);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.9281173);
   hdirt_stack_3->SetBinError(16,0.165479);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.399291);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.7336084);
   houtFV_stack_4->SetBinContent(2,4.135985);
   houtFV_stack_4->SetBinContent(3,11.27158);
   houtFV_stack_4->SetBinContent(4,16.08487);
   houtFV_stack_4->SetBinContent(5,25.37965);
   houtFV_stack_4->SetBinContent(6,26.17748);
   houtFV_stack_4->SetBinContent(7,25.66983);
   houtFV_stack_4->SetBinContent(8,19.92702);
   houtFV_stack_4->SetBinContent(9,15.17248);
   houtFV_stack_4->SetBinContent(10,12.12706);
   houtFV_stack_4->SetBinContent(11,7.264071);
   houtFV_stack_4->SetBinContent(12,6.22805);
   houtFV_stack_4->SetBinContent(13,7.944017);
   houtFV_stack_4->SetBinContent(14,4.106273);
   houtFV_stack_4->SetBinContent(15,4.321936);
   houtFV_stack_4->SetBinContent(16,4.007975);
   houtFV_stack_4->SetBinContent(17,1.543878);
   houtFV_stack_4->SetBinContent(18,1.517089);
   houtFV_stack_4->SetBinContent(19,2.127038);
   houtFV_stack_4->SetBinContent(20,1.463836);
   houtFV_stack_4->SetBinContent(21,0.9409493);
   houtFV_stack_4->SetBinContent(22,1.702266);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,2.936529);
   houtFV_stack_4->SetBinError(1,0.4394482);
   houtFV_stack_4->SetBinError(2,1.006786);
   houtFV_stack_4->SetBinError(3,1.699421);
   houtFV_stack_4->SetBinError(4,2.160737);
   houtFV_stack_4->SetBinError(5,2.554988);
   houtFV_stack_4->SetBinError(6,2.828075);
   houtFV_stack_4->SetBinError(7,2.535687);
   houtFV_stack_4->SetBinError(8,2.283084);
   houtFV_stack_4->SetBinError(9,2.003934);
   houtFV_stack_4->SetBinError(10,1.741427);
   houtFV_stack_4->SetBinError(11,1.350437);
   houtFV_stack_4->SetBinError(12,1.273258);
   houtFV_stack_4->SetBinError(13,1.40657);
   houtFV_stack_4->SetBinError(14,1.000664);
   houtFV_stack_4->SetBinError(15,1.096947);
   houtFV_stack_4->SetBinError(16,0.9716551);
   houtFV_stack_4->SetBinError(17,0.5981933);
   houtFV_stack_4->SetBinError(18,0.5887087);
   houtFV_stack_4->SetBinError(19,0.7451882);
   houtFV_stack_4->SetBinError(20,0.620407);
   houtFV_stack_4->SetBinError(21,0.4859492);
   houtFV_stack_4->SetBinError(22,0.6646458);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,0.8914245);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.426652);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9338218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3068998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7249039);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.017858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5153221);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.574025);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.608499);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.0882275);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2812022);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.09253378);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2578571);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3833116);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2792353);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2596123);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3020011);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.02725);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.501644);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.27398);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.77105);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.49875);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.01679);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.67338);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.090952);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.097665);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.507941);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.370522);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.402895);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.332734);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.44367);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.49523);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.645108);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.063448);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.6689357);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.395008);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.449312);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.7391858);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.4457358);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.666702);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6994566);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9067581);
   hNCpi0inFVres_stack_7->SetBinError(5,1.185487);
   hNCpi0inFVres_stack_7->SetBinError(6,1.355126);
   hNCpi0inFVres_stack_7->SetBinError(7,1.208653);
   hNCpi0inFVres_stack_7->SetBinError(8,1.021157);
   hNCpi0inFVres_stack_7->SetBinError(9,1.1342);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9793278);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8578279);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7000122);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7960129);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6127469);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5803429);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5944781);
   hNCpi0inFVres_stack_7->SetBinError(17,0.463863);
   hNCpi0inFVres_stack_7->SetBinError(18,0.372061);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5117373);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1793726);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4283093);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4233582);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2452205);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1610816);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5717278);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.003408);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.379558);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.606166);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.900616);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.230512);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.272694);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.194234);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.103798);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.21299);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.631826);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.868476);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.086772);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.183426);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.547294);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.13029);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9195399);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4746361);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.473804);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.999598);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3471685);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3240709);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4814304);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5639027);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4483611);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.442096);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6204281);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.430122);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3458579);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4436346);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4212073);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2394648);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2833847);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4185812);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.41147);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2922873);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2806257);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2438946);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6049706);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(3,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(4,10.56552);
   hCCpi0inFV_stack_10->SetBinContent(5,11.44801);
   hCCpi0inFV_stack_10->SetBinContent(6,16.22086);
   hCCpi0inFV_stack_10->SetBinContent(7,14.31366);
   hCCpi0inFV_stack_10->SetBinContent(8,20.12514);
   hCCpi0inFV_stack_10->SetBinContent(9,14.53582);
   hCCpi0inFV_stack_10->SetBinContent(10,14.93869);
   hCCpi0inFV_stack_10->SetBinContent(11,14.0825);
   hCCpi0inFV_stack_10->SetBinContent(12,12.18178);
   hCCpi0inFV_stack_10->SetBinContent(13,9.23432);
   hCCpi0inFV_stack_10->SetBinContent(14,8.292175);
   hCCpi0inFV_stack_10->SetBinContent(15,5.968611);
   hCCpi0inFV_stack_10->SetBinContent(16,4.76839);
   hCCpi0inFV_stack_10->SetBinContent(17,2.982615);
   hCCpi0inFV_stack_10->SetBinContent(18,2.826237);
   hCCpi0inFV_stack_10->SetBinContent(19,3.998076);
   hCCpi0inFV_stack_10->SetBinContent(20,3.205196);
   hCCpi0inFV_stack_10->SetBinContent(21,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(23,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(24,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(25,9.089617);
   hCCpi0inFV_stack_10->SetBinError(1,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(3,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(4,1.669626);
   hCCpi0inFV_stack_10->SetBinError(5,1.708648);
   hCCpi0inFV_stack_10->SetBinError(6,2.042429);
   hCCpi0inFV_stack_10->SetBinError(7,1.897907);
   hCCpi0inFV_stack_10->SetBinError(8,2.330045);
   hCCpi0inFV_stack_10->SetBinError(9,1.910812);
   hCCpi0inFV_stack_10->SetBinError(10,1.95949);
   hCCpi0inFV_stack_10->SetBinError(11,1.830194);
   hCCpi0inFV_stack_10->SetBinError(12,1.792157);
   hCCpi0inFV_stack_10->SetBinError(13,1.553124);
   hCCpi0inFV_stack_10->SetBinError(14,1.427299);
   hCCpi0inFV_stack_10->SetBinError(15,1.210626);
   hCCpi0inFV_stack_10->SetBinError(16,1.042608);
   hCCpi0inFV_stack_10->SetBinError(17,0.8556548);
   hCCpi0inFV_stack_10->SetBinError(18,0.9211137);
   hCCpi0inFV_stack_10->SetBinError(19,1.037941);
   hCCpi0inFV_stack_10->SetBinError(20,0.8841834);
   hCCpi0inFV_stack_10->SetBinError(21,0.588146);
   hCCpi0inFV_stack_10->SetBinError(22,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(23,0.620407);
   hCCpi0inFV_stack_10->SetBinError(24,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(25,1.50758);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,0.3917402);
   hNCinFV_stack_11->SetBinContent(4,1.712114);
   hNCinFV_stack_11->SetBinContent(5,2.340906);
   hNCinFV_stack_11->SetBinContent(6,2.050601);
   hNCinFV_stack_11->SetBinContent(7,3.322793);
   hNCinFV_stack_11->SetBinContent(8,3.659589);
   hNCinFV_stack_11->SetBinContent(9,3.376046);
   hNCinFV_stack_11->SetBinContent(10,2.732646);
   hNCinFV_stack_11->SetBinContent(11,4.045176);
   hNCinFV_stack_11->SetBinContent(12,1.125349);
   hNCinFV_stack_11->SetBinContent(13,1.804013);
   hNCinFV_stack_11->SetBinContent(14,1.465526);
   hNCinFV_stack_11->SetBinContent(15,0.3917402);
   hNCinFV_stack_11->SetBinContent(16,1.802323);
   hNCinFV_stack_11->SetBinContent(17,1.318683);
   hNCinFV_stack_11->SetBinContent(18,0.5884556);
   hNCinFV_stack_11->SetBinContent(19,0.3900497);
   hNCinFV_stack_11->SetBinContent(20,0.5884556);
   hNCinFV_stack_11->SetBinContent(21,0.7319179);
   hNCinFV_stack_11->SetBinContent(25,2.052291);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.2770047);
   hNCinFV_stack_11->SetBinError(4,0.6201715);
   hNCinFV_stack_11->SetBinError(5,0.8093475);
   hNCinFV_stack_11->SetBinError(6,0.7068742);
   hNCinFV_stack_11->SetBinError(7,0.9207963);
   hNCinFV_stack_11->SetBinError(8,0.9809496);
   hNCinFV_stack_11->SetBinError(9,0.8997438);
   hNCinFV_stack_11->SetBinError(10,0.8554385);
   hNCinFV_stack_11->SetBinError(11,1.111293);
   hNCinFV_stack_11->SetBinError(12,0.5194673);
   hNCinFV_stack_11->SetBinError(13,0.7075491);
   hNCinFV_stack_11->SetBinError(14,0.6209405);
   hNCinFV_stack_11->SetBinError(15,0.2770047);
   hNCinFV_stack_11->SetBinError(16,0.7070809);
   hNCinFV_stack_11->SetBinError(17,0.5542732);
   hNCinFV_stack_11->SetBinError(18,0.3397478);
   hNCinFV_stack_11->SetBinError(19,0.2758068);
   hNCinFV_stack_11->SetBinError(20,0.3397478);
   hNCinFV_stack_11->SetBinError(21,0.438694);
   hNCinFV_stack_11->SetBinError(25,0.7073425);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,2.909383);
   hnumuCCinFV_stack_12->SetBinContent(4,3.405887);
   hnumuCCinFV_stack_12->SetBinContent(5,9.364817);
   hnumuCCinFV_stack_12->SetBinContent(6,10.10844);
   hnumuCCinFV_stack_12->SetBinContent(7,13.654);
   hnumuCCinFV_stack_12->SetBinContent(8,12.63532);
   hnumuCCinFV_stack_12->SetBinContent(9,5.441002);
   hnumuCCinFV_stack_12->SetBinContent(10,7.475492);
   hnumuCCinFV_stack_12->SetBinContent(11,5.755026);
   hnumuCCinFV_stack_12->SetBinContent(12,5.051738);
   hnumuCCinFV_stack_12->SetBinContent(13,3.539132);
   hnumuCCinFV_stack_12->SetBinContent(14,2.188579);
   hnumuCCinFV_stack_12->SetBinContent(15,4.374225);
   hnumuCCinFV_stack_12->SetBinContent(16,1.984604);
   hnumuCCinFV_stack_12->SetBinContent(17,2.047318);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(19,0.7683926);
   hnumuCCinFV_stack_12->SetBinContent(20,1.136061);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,4.297671);
   hnumuCCinFV_stack_12->SetBinError(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,1.347102);
   hnumuCCinFV_stack_12->SetBinError(4,0.8992535);
   hnumuCCinFV_stack_12->SetBinError(5,1.649046);
   hnumuCCinFV_stack_12->SetBinError(6,1.640101);
   hnumuCCinFV_stack_12->SetBinError(7,2.836262);
   hnumuCCinFV_stack_12->SetBinError(8,2.585459);
   hnumuCCinFV_stack_12->SetBinError(9,1.458328);
   hnumuCCinFV_stack_12->SetBinError(10,1.411225);
   hnumuCCinFV_stack_12->SetBinError(11,1.284304);
   hnumuCCinFV_stack_12->SetBinError(12,1.174493);
   hnumuCCinFV_stack_12->SetBinError(13,0.9465906);
   hnumuCCinFV_stack_12->SetBinError(14,0.7059019);
   hnumuCCinFV_stack_12->SetBinError(15,1.034763);
   hnumuCCinFV_stack_12->SetBinError(16,0.694338);
   hnumuCCinFV_stack_12->SetBinError(17,0.6500189);
   hnumuCCinFV_stack_12->SetBinError(18,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(19,0.4560809);
   hnumuCCinFV_stack_12->SetBinError(20,0.5964762);
   hnumuCCinFV_stack_12->SetBinError(22,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.061298);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,2.998004);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.134652);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__23->SetBinContent(1,2.955686);
   hmcerror__23->SetBinContent(2,12.79031);
   hmcerror__23->SetBinContent(3,40.20447);
   hmcerror__23->SetBinContent(4,71.39468);
   hmcerror__23->SetBinContent(5,89.61838);
   hmcerror__23->SetBinContent(6,107.535);
   hmcerror__23->SetBinContent(7,104.6104);
   hmcerror__23->SetBinContent(8,95.51704);
   hmcerror__23->SetBinContent(9,71.49326);
   hmcerror__23->SetBinContent(10,62.98321);
   hmcerror__23->SetBinContent(11,54.76198);
   hmcerror__23->SetBinContent(12,41.07697);
   hmcerror__23->SetBinContent(13,38.9612);
   hmcerror__23->SetBinContent(14,27.36628);
   hmcerror__23->SetBinContent(15,22.73569);
   hmcerror__23->SetBinContent(16,20.08462);
   hmcerror__23->SetBinContent(17,14.64492);
   hmcerror__23->SetBinContent(18,11.46472);
   hmcerror__23->SetBinContent(19,11.76149);
   hmcerror__23->SetBinContent(20,9.709655);
   hmcerror__23->SetBinContent(21,6.244549);
   hmcerror__23->SetBinContent(22,5.463738);
   hmcerror__23->SetBinContent(23,4.460368);
   hmcerror__23->SetBinContent(24,3.288095);
   hmcerror__23->SetBinContent(25,32.87112);
   hmcerror__23->SetBinError(1,27.82572);
   hmcerror__23->SetBinError(2,9.210578);
   hmcerror__23->SetBinError(3,23.72606);
   hmcerror__23->SetBinError(4,19.84028);
   hmcerror__23->SetBinError(5,30.2856);
   hmcerror__23->SetBinError(6,26.69464);
   hmcerror__23->SetBinError(7,36.03031);
   hmcerror__23->SetBinError(8,26.28658);
   hmcerror__23->SetBinError(9,23.27795);
   hmcerror__23->SetBinError(10,22.1892);
   hmcerror__23->SetBinError(11,16.75814);
   hmcerror__23->SetBinError(12,14.5881);
   hmcerror__23->SetBinError(13,14.62085);
   hmcerror__23->SetBinError(14,12.15551);
   hmcerror__23->SetBinError(15,11.86755);
   hmcerror__23->SetBinError(16,17.3898);
   hmcerror__23->SetBinError(17,8.341743);
   hmcerror__23->SetBinError(18,6.753202);
   hmcerror__23->SetBinError(19,8.354928);
   hmcerror__23->SetBinError(20,8.127925);
   hmcerror__23->SetBinError(21,10.06768);
   hmcerror__23->SetBinError(22,5.565871);
   hmcerror__23->SetBinError(23,4.699956);
   hmcerror__23->SetBinError(24,3.914993);
   hmcerror__23->SetBinError(25,17.00991);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
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
   Double_t _fy3029[24] = {
   1,
   12,
   36,
   97,
   88,
   109,
   89,
   74,
   76,
   52,
   43,
   40,
   29,
   23,
   13,
   21,
   14,
   13,
   8,
   4,
   5,
   4,
   2,
   5};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   1,
   3.64022,
   6.1381,
   9.9704,
   9.5036,
   10.44031,
   9.5566,
   8.7275,
   8.8425,
   7.3419,
   6.6917,
   6.4604,
   5.5285,
   4.9457,
   3.77763,
   4.7354,
   3.9102,
   3.77763,
   3.0307,
   2.29683,
   2.48995,
   2.29683,
   2,
   2.48995};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   1.35971,
   3.4155,
   5.9318,
   9.769,
   9.3021,
   10.44031,
   9.3552,
   8.5253,
   8.6406,
   7.1381,
   6.4868,
   6.2549,
   5.3201,
   4.7346,
   3.5552,
   4.5229,
   3.6898,
   3.5552,
   2.7896,
   1.98186,
   2.21064,
   1.98186,
   1.51917,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,660);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(131.3843);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 858.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 196.8","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.8","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.0","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  130.2","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  31.4","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 177.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.2","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 93.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
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
   Double_t _fely3030[24] = {
   9.414302,
   0.7201214,
   0.5901348,
   0.2778958,
   0.3379397,
   0.2482415,
   0.3444237,
   0.275203,
   0.3255964,
   0.3523034,
   0.3060177,
   0.3551407,
   0.3752668,
   0.4441783,
   0.521979,
   0.8658266,
   0.5695997,
   0.5890422,
   0.7103628,
   0.8370972,
   1.612235,
   1.018693,
   1.053715,
   1.190657};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   9.414302,
   0.7201214,
   0.5901348,
   0.2778958,
   0.3379397,
   0.2482415,
   0.3444237,
   0.275203,
   0.3255964,
   0.3523034,
   0.3060177,
   0.3551407,
   0.3752668,
   0.4441783,
   0.521979,
   0.8658266,
   0.5695997,
   0.5890422,
   0.7103628,
   0.8370972,
   1.612235,
   1.018693,
   1.053715,
   1.190657};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,660);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
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
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
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
   Double_t _fely3031[24] = {
   0.8265,
   0.2120921,
   0.163141,
   0.1549811,
   0.1721468,
   0.1625212,
   0.165154,
   0.1765014,
   0.1951005,
   0.184476,
   0.1809105,
   0.1832713,
   0.2133138,
   0.216199,
   0.253176,
   0.2596762,
   0.2466727,
   0.2812244,
   0.2687229,
   0.2723743,
   0.3719731,
   0.3523465,
   0.3546221,
   0.398073};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.8265,
   0.2120921,
   0.163141,
   0.1549811,
   0.1721468,
   0.1625212,
   0.165154,
   0.1765014,
   0.1951005,
   0.184476,
   0.1809105,
   0.1832713,
   0.2133138,
   0.216199,
   0.253176,
   0.2596762,
   0.2466727,
   0.2812244,
   0.2687229,
   0.2723743,
   0.3719731,
   0.3523465,
   0.3546221,
   0.398073};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,660);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
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
   Double_t _fy3032[24] = {
   0.3383309,
   0.9382101,
   0.8954228,
   1.358645,
   0.9819415,
   1.013624,
   0.8507757,
   0.7747309,
   1.063037,
   0.8256169,
   0.7852163,
   0.9737818,
   0.7443302,
   0.8404503,
   0.5717881,
   1.045576,
   0.9559627,
   1.133914,
   0.6801857,
   0.4119611,
   0.8006984,
   0.7320995,
   0.4483935,
   1.520637};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.3383309,
   0.2846076,
   0.1526721,
   0.1396519,
   0.1060452,
   0.09708756,
   0.09135419,
   0.09137113,
   0.123683,
   0.1165692,
   0.1221961,
   0.1572755,
   0.1418976,
   0.1807224,
   0.1661541,
   0.2357724,
   0.2670004,
   0.3295005,
   0.2576799,
   0.2365511,
   0.3987398,
   0.420377,
   0.4483935,
   0.7572622};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.4600319,
   0.267038,
   0.1475408,
   0.1368309,
   0.1037968,
   0.09708756,
   0.08942896,
   0.08925423,
   0.1208589,
   0.1133334,
   0.1184544,
   0.1522727,
   0.1365487,
   0.1730085,
   0.1563709,
   0.2251922,
   0.2519508,
   0.3100992,
   0.2371808,
   0.2041123,
   0.3540112,
   0.3627297,
   0.340593,
   0.6723163};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,660);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.412249);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

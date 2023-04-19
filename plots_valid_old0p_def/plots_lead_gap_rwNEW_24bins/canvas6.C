#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 11:58:36 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-13.84615,-26.82,101.5385,2965.727);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__16->SetBinContent(1,1333.354);
   hmc__16->SetBinContent(2,197.3442);
   hmc__16->SetBinContent(3,182.0952);
   hmc__16->SetBinContent(4,165.9718);
   hmc__16->SetBinContent(5,148.7759);
   hmc__16->SetBinContent(6,131.58);
   hmc__16->SetBinContent(7,118.9551);
   hmc__16->SetBinContent(8,96.82387);
   hmc__16->SetBinContent(9,83.2419);
   hmc__16->SetBinContent(10,59.05686);
   hmc__16->SetBinContent(11,61.33738);
   hmc__16->SetBinContent(12,51.00659);
   hmc__16->SetBinContent(13,43.93177);
   hmc__16->SetBinContent(14,35.83232);
   hmc__16->SetBinContent(15,31.5315);
   hmc__16->SetBinContent(16,22.21245);
   hmc__16->SetBinContent(17,19.56445);
   hmc__16->SetBinContent(18,18.55102);
   hmc__16->SetBinContent(19,16.99225);
   hmc__16->SetBinContent(20,12.63303);
   hmc__16->SetBinContent(21,11.17586);
   hmc__16->SetBinContent(22,8.649158);
   hmc__16->SetBinContent(23,8.370946);
   hmc__16->SetBinContent(24,4.105537);
   hmc__16->SetBinContent(25,83.01433);
   hmc__16->SetBinError(1,303.513);
   hmc__16->SetBinError(2,58.28972);
   hmc__16->SetBinError(3,51.37711);
   hmc__16->SetBinError(4,43.95306);
   hmc__16->SetBinError(5,41.5463);
   hmc__16->SetBinError(6,41.27457);
   hmc__16->SetBinError(7,30.92279);
   hmc__16->SetBinError(8,26.64469);
   hmc__16->SetBinError(9,23.88867);
   hmc__16->SetBinError(10,21.7751);
   hmc__16->SetBinError(11,22.21837);
   hmc__16->SetBinError(12,17.37235);
   hmc__16->SetBinError(13,15.03959);
   hmc__16->SetBinError(14,13.85419);
   hmc__16->SetBinError(15,17.77243);
   hmc__16->SetBinError(16,11.27611);
   hmc__16->SetBinError(17,11.31667);
   hmc__16->SetBinError(18,9.641289);
   hmc__16->SetBinError(19,7.973301);
   hmc__16->SetBinError(20,6.956545);
   hmc__16->SetBinError(21,8.278665);
   hmc__16->SetBinError(22,6.733775);
   hmc__16->SetBinError(23,7.314952);
   hmc__16->SetBinError(24,3.458451);
   hmc__16->SetBinError(25,29.14361);
   hmc__16->SetMinimum(-26.82);
   hmc__16->SetMaximum(2816.1);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,90);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(1400.021);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,27.8834);
   hbadmatch_stack_1->SetBinContent(2,2.350724);
   hbadmatch_stack_1->SetBinContent(3,3.098677);
   hbadmatch_stack_1->SetBinContent(4,2.667211);
   hbadmatch_stack_1->SetBinContent(5,1.756117);
   hbadmatch_stack_1->SetBinContent(6,2.839583);
   hbadmatch_stack_1->SetBinContent(7,1.417464);
   hbadmatch_stack_1->SetBinContent(8,1.760832);
   hbadmatch_stack_1->SetBinContent(9,2.289344);
   hbadmatch_stack_1->SetBinContent(10,1.072095);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,1.913843);
   hbadmatch_stack_1->SetBinContent(13,1.320042);
   hbadmatch_stack_1->SetBinContent(14,1.345836);
   hbadmatch_stack_1->SetBinContent(15,1.178602);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,1.710423);
   hbadmatch_stack_1->SetBinContent(19,0.5981015);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.9625913);
   hbadmatch_stack_1->SetBinContent(22,1.127893);
   hbadmatch_stack_1->SetBinContent(23,0.4294702);
   hbadmatch_stack_1->SetBinContent(25,7.458733);
   hbadmatch_stack_1->SetBinError(1,2.88364);
   hbadmatch_stack_1->SetBinError(2,0.7224649);
   hbadmatch_stack_1->SetBinError(3,1.769357);
   hbadmatch_stack_1->SetBinError(4,0.8315872);
   hbadmatch_stack_1->SetBinError(5,0.6355007);
   hbadmatch_stack_1->SetBinError(6,0.8469175);
   hbadmatch_stack_1->SetBinError(7,0.5373294);
   hbadmatch_stack_1->SetBinError(8,0.6968474);
   hbadmatch_stack_1->SetBinError(9,0.8330862);
   hbadmatch_stack_1->SetBinError(10,0.5551335);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.7458596);
   hbadmatch_stack_1->SetBinError(13,0.607989);
   hbadmatch_stack_1->SetBinError(14,0.5609857);
   hbadmatch_stack_1->SetBinError(15,0.4811646);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.6196373);
   hbadmatch_stack_1->SetBinError(19,0.4477779);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.4956437);
   hbadmatch_stack_1->SetBinError(22,0.5915475);
   hbadmatch_stack_1->SetBinError(23,0.3047487);
   hbadmatch_stack_1->SetBinError(25,2.151534);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,137.5823);
   hext_stack_2->SetBinContent(2,16.50446);
   hext_stack_2->SetBinContent(3,12.4716);
   hext_stack_2->SetBinContent(4,14.16142);
   hext_stack_2->SetBinContent(5,10.29738);
   hext_stack_2->SetBinContent(6,7.067767);
   hext_stack_2->SetBinContent(7,10.74587);
   hext_stack_2->SetBinContent(8,10.43583);
   hext_stack_2->SetBinContent(9,10.4849);
   hext_stack_2->SetBinContent(10,1.379791);
   hext_stack_2->SetBinContent(11,5.109793);
   hext_stack_2->SetBinContent(12,8.691332);
   hext_stack_2->SetBinContent(13,4.698785);
   hext_stack_2->SetBinContent(14,4.435048);
   hext_stack_2->SetBinContent(15,2.599588);
   hext_stack_2->SetBinContent(16,1.37261);
   hext_stack_2->SetBinContent(17,1.697008);
   hext_stack_2->SetBinContent(18,1.689827);
   hext_stack_2->SetBinContent(19,3.297453);
   hext_stack_2->SetBinContent(20,1.219797);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,11.00242);
   hext_stack_2->SetBinError(1,7.96201);
   hext_stack_2->SetBinError(2,2.741718);
   hext_stack_2->SetBinError(3,2.279058);
   hext_stack_2->SetBinError(4,2.486517);
   hext_stack_2->SetBinError(5,2.028585);
   hext_stack_2->SetBinError(6,1.631079);
   hext_stack_2->SetBinError(7,2.282861);
   hext_stack_2->SetBinError(8,2.168829);
   hext_stack_2->SetBinError(9,2.331006);
   hext_stack_2->SetBinError(10,0.6935586);
   hext_stack_2->SetBinError(11,1.447444);
   hext_stack_2->SetBinError(12,2.233483);
   hext_stack_2->SetBinError(13,1.339646);
   hext_stack_2->SetBinError(14,1.533985);
   hext_stack_2->SetBinError(15,0.9884288);
   hext_stack_2->SetBinError(16,0.8259691);
   hext_stack_2->SetBinError(17,0.8873887);
   hext_stack_2->SetBinError(18,0.9943139);
   hext_stack_2->SetBinError(19,1.384641);
   hext_stack_2->SetBinError(20,0.7042499);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.203224);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,18.68896);
   hdirt_stack_3->SetBinContent(2,2.002779);
   hdirt_stack_3->SetBinContent(3,1.278713);
   hdirt_stack_3->SetBinContent(4,2.020588);
   hdirt_stack_3->SetBinContent(5,2.382953);
   hdirt_stack_3->SetBinContent(6,0.949185);
   hdirt_stack_3->SetBinContent(7,1.433192);
   hdirt_stack_3->SetBinContent(8,1.5438);
   hdirt_stack_3->SetBinContent(9,0.5562857);
   hdirt_stack_3->SetBinContent(10,0.9193219);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.9157718);
   hdirt_stack_3->SetBinContent(13,0.2524148);
   hdirt_stack_3->SetBinContent(14,0.7436324);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(25,2.160157);
   hdirt_stack_3->SetBinError(1,2.457197);
   hdirt_stack_3->SetBinError(2,0.6354953);
   hdirt_stack_3->SetBinError(3,0.4985429);
   hdirt_stack_3->SetBinError(4,0.7960005);
   hdirt_stack_3->SetBinError(5,0.7578499);
   hdirt_stack_3->SetBinError(6,0.4452871);
   hdirt_stack_3->SetBinError(7,0.6613178);
   hdirt_stack_3->SetBinError(8,0.6528017);
   hdirt_stack_3->SetBinError(9,0.4404167);
   hdirt_stack_3->SetBinError(10,0.5381144);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.4989164);
   hdirt_stack_3->SetBinError(13,0.2524148);
   hdirt_stack_3->SetBinError(14,0.4652839);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(25,0.8501454);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,131.5857);
   houtFV_stack_4->SetBinContent(2,11.6253);
   houtFV_stack_4->SetBinContent(3,13.53945);
   houtFV_stack_4->SetBinContent(4,11.11796);
   houtFV_stack_4->SetBinContent(5,13.04289);
   houtFV_stack_4->SetBinContent(6,15.29127);
   houtFV_stack_4->SetBinContent(7,14.76343);
   houtFV_stack_4->SetBinContent(8,11.71361);
   houtFV_stack_4->SetBinContent(9,8.712483);
   houtFV_stack_4->SetBinContent(10,7.715992);
   houtFV_stack_4->SetBinContent(11,9.137798);
   houtFV_stack_4->SetBinContent(12,5.178369);
   houtFV_stack_4->SetBinContent(13,5.38337);
   houtFV_stack_4->SetBinContent(14,4.869508);
   houtFV_stack_4->SetBinContent(15,5.422857);
   houtFV_stack_4->SetBinContent(16,3.257387);
   houtFV_stack_4->SetBinContent(17,2.782519);
   houtFV_stack_4->SetBinContent(18,3.370073);
   houtFV_stack_4->SetBinContent(19,2.108925);
   houtFV_stack_4->SetBinContent(20,2.650057);
   houtFV_stack_4->SetBinContent(21,2.585803);
   houtFV_stack_4->SetBinContent(22,1.73881);
   houtFV_stack_4->SetBinContent(23,0.7336084);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,13.09265);
   houtFV_stack_4->SetBinError(1,5.727247);
   houtFV_stack_4->SetBinError(2,1.681701);
   houtFV_stack_4->SetBinError(3,1.841513);
   houtFV_stack_4->SetBinError(4,1.577372);
   houtFV_stack_4->SetBinError(5,1.841672);
   houtFV_stack_4->SetBinError(6,1.963597);
   houtFV_stack_4->SetBinError(7,1.90012);
   houtFV_stack_4->SetBinError(8,1.715358);
   houtFV_stack_4->SetBinError(9,1.415415);
   houtFV_stack_4->SetBinError(10,1.41536);
   houtFV_stack_4->SetBinError(11,1.49415);
   houtFV_stack_4->SetBinError(12,1.144335);
   houtFV_stack_4->SetBinError(13,1.162625);
   houtFV_stack_4->SetBinError(14,1.098625);
   houtFV_stack_4->SetBinError(15,1.196124);
   houtFV_stack_4->SetBinError(16,0.9705563);
   houtFV_stack_4->SetBinError(17,0.8319397);
   houtFV_stack_4->SetBinError(18,0.9318738);
   houtFV_stack_4->SetBinError(19,0.6806842);
   houtFV_stack_4->SetBinError(20,0.8248959);
   houtFV_stack_4->SetBinError(21,0.8083481);
   houtFV_stack_4->SetBinError(22,0.6949607);
   houtFV_stack_4->SetBinError(23,0.4394482);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,1.9036);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,42.85259);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.634496);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.120829);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.809946);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.140842);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.542652);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.555438);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.561576);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.859266);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.297186);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.464258);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6418679);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.352658);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.897544);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.184431);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7860084);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8019393);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7188939);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6722165);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6335672);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6239205);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4109174);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5855178);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2751387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3992271);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2250829);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3953083);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5128138);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.696266);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8502901);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6051309);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3309054);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04832419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,524.2146);
   hNCpi0inFVres_stack_7->SetBinContent(2,86.84808);
   hNCpi0inFVres_stack_7->SetBinContent(3,81.20396);
   hNCpi0inFVres_stack_7->SetBinContent(4,70.58552);
   hNCpi0inFVres_stack_7->SetBinContent(5,63.76571);
   hNCpi0inFVres_stack_7->SetBinContent(6,51.71767);
   hNCpi0inFVres_stack_7->SetBinContent(7,45.11049);
   hNCpi0inFVres_stack_7->SetBinContent(8,38.16187);
   hNCpi0inFVres_stack_7->SetBinContent(9,31.64619);
   hNCpi0inFVres_stack_7->SetBinContent(10,23.88032);
   hNCpi0inFVres_stack_7->SetBinContent(11,24.40114);
   hNCpi0inFVres_stack_7->SetBinContent(12,17.06806);
   hNCpi0inFVres_stack_7->SetBinContent(13,15.64548);
   hNCpi0inFVres_stack_7->SetBinContent(14,11.93793);
   hNCpi0inFVres_stack_7->SetBinContent(15,11.85008);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.325034);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.332005);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.863002);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.391605);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.770092);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.191738);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.95492);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.84648);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9336537);
   hNCpi0inFVres_stack_7->SetBinContent(25,22.25549);
   hNCpi0inFVres_stack_7->SetBinError(1,7.455859);
   hNCpi0inFVres_stack_7->SetBinError(2,3.062489);
   hNCpi0inFVres_stack_7->SetBinError(3,2.969422);
   hNCpi0inFVres_stack_7->SetBinError(4,2.749844);
   hNCpi0inFVres_stack_7->SetBinError(5,2.626627);
   hNCpi0inFVres_stack_7->SetBinError(6,2.34297);
   hNCpi0inFVres_stack_7->SetBinError(7,2.175027);
   hNCpi0inFVres_stack_7->SetBinError(8,1.988223);
   hNCpi0inFVres_stack_7->SetBinError(9,1.832464);
   hNCpi0inFVres_stack_7->SetBinError(10,1.526694);
   hNCpi0inFVres_stack_7->SetBinError(11,1.616189);
   hNCpi0inFVres_stack_7->SetBinError(12,1.370879);
   hNCpi0inFVres_stack_7->SetBinError(13,1.271248);
   hNCpi0inFVres_stack_7->SetBinError(14,1.125963);
   hNCpi0inFVres_stack_7->SetBinError(15,1.146148);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9914411);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8841933);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6199569);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6271865);
   hNCpi0inFVres_stack_7->SetBinError(20,0.739883);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5719549);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5601514);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5957867);
   hNCpi0inFVres_stack_7->SetBinError(24,0.215211);
   hNCpi0inFVres_stack_7->SetBinError(25,1.534154);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,99.61682);
   hNCpi0inFVdis_stack_8->SetBinContent(2,16.99316);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.47237);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.64391);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.26466);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.952195);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.638334);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.360727);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.301024);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.426579);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.987388);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.414105);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.719598);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.495566);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.686626);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.32559);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8923038);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.966962);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7529721);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.626352);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.20117);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.342115);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.373551);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.251734);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.051917);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9925519);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.059996);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8107491);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7625502);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8107095);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6126415);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5604404);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5533355);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5297988);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3825485);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4180388);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2667597);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5212201);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3162714);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6354075);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,162.3761);
   hCCpi0inFV_stack_10->SetBinContent(2,26.95878);
   hCCpi0inFV_stack_10->SetBinContent(3,23.22706);
   hCCpi0inFV_stack_10->SetBinContent(4,23.5414);
   hCCpi0inFV_stack_10->SetBinContent(5,23.50702);
   hCCpi0inFV_stack_10->SetBinContent(6,22.38694);
   hCCpi0inFV_stack_10->SetBinContent(7,16.18651);
   hCCpi0inFV_stack_10->SetBinContent(8,16.29584);
   hCCpi0inFV_stack_10->SetBinContent(9,11.93337);
   hCCpi0inFV_stack_10->SetBinContent(10,10.25044);
   hCCpi0inFV_stack_10->SetBinContent(11,8.356009);
   hCCpi0inFV_stack_10->SetBinContent(12,5.281494);
   hCCpi0inFV_stack_10->SetBinContent(13,7.521432);
   hCCpi0inFV_stack_10->SetBinContent(14,5.215324);
   hCCpi0inFV_stack_10->SetBinContent(15,3.814277);
   hCCpi0inFV_stack_10->SetBinContent(16,3.725759);
   hCCpi0inFV_stack_10->SetBinContent(17,3.269539);
   hCCpi0inFV_stack_10->SetBinContent(18,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(19,2.012547);
   hCCpi0inFV_stack_10->SetBinContent(20,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(21,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(22,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(23,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9385811);
   hCCpi0inFV_stack_10->SetBinContent(25,9.216782);
   hCCpi0inFV_stack_10->SetBinError(1,6.375698);
   hCCpi0inFV_stack_10->SetBinError(2,2.629517);
   hCCpi0inFV_stack_10->SetBinError(3,2.363206);
   hCCpi0inFV_stack_10->SetBinError(4,2.467209);
   hCCpi0inFV_stack_10->SetBinError(5,2.407643);
   hCCpi0inFV_stack_10->SetBinError(6,2.338436);
   hCCpi0inFV_stack_10->SetBinError(7,2.038566);
   hCCpi0inFV_stack_10->SetBinError(8,1.95421);
   hCCpi0inFV_stack_10->SetBinError(9,1.67094);
   hCCpi0inFV_stack_10->SetBinError(10,1.599162);
   hCCpi0inFV_stack_10->SetBinError(11,1.44211);
   hCCpi0inFV_stack_10->SetBinError(12,1.109741);
   hCCpi0inFV_stack_10->SetBinError(13,1.423737);
   hCCpi0inFV_stack_10->SetBinError(14,1.20962);
   hCCpi0inFV_stack_10->SetBinError(15,0.9193991);
   hCCpi0inFV_stack_10->SetBinError(16,0.854755);
   hCCpi0inFV_stack_10->SetBinError(17,0.9413781);
   hCCpi0inFV_stack_10->SetBinError(18,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(19,0.7904119);
   hCCpi0inFV_stack_10->SetBinError(20,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(21,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(22,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(23,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(24,0.5460057);
   hCCpi0inFV_stack_10->SetBinError(25,1.59431);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,96.85814);
   hNCinFV_stack_11->SetBinContent(2,12.87468);
   hNCinFV_stack_11->SetBinContent(3,10.50973);
   hNCinFV_stack_11->SetBinContent(4,10.49513);
   hNCinFV_stack_11->SetBinContent(5,9.032983);
   hNCinFV_stack_11->SetBinContent(6,7.282222);
   hNCinFV_stack_11->SetBinContent(7,7.574219);
   hNCinFV_stack_11->SetBinContent(8,4.301298);
   hNCinFV_stack_11->SetBinContent(9,4.735065);
   hNCinFV_stack_11->SetBinContent(10,3.127768);
   hNCinFV_stack_11->SetBinContent(11,5.913668);
   hNCinFV_stack_11->SetBinContent(12,4.678432);
   hNCinFV_stack_11->SetBinContent(13,3.021261);
   hNCinFV_stack_11->SetBinContent(14,1.712114);
   hNCinFV_stack_11->SetBinContent(15,1.322064);
   hNCinFV_stack_11->SetBinContent(16,1.805704);
   hNCinFV_stack_11->SetBinContent(17,1.322064);
   hNCinFV_stack_11->SetBinContent(18,1.322064);
   hNCinFV_stack_11->SetBinContent(19,1.465526);
   hNCinFV_stack_11->SetBinContent(20,0.5901461);
   hNCinFV_stack_11->SetBinContent(21,0.5867651);
   hNCinFV_stack_11->SetBinContent(22,0.3934307);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,0.5352025);
   hNCinFV_stack_11->SetBinContent(25,5.763443);
   hNCinFV_stack_11->SetBinError(1,4.904395);
   hNCinFV_stack_11->SetBinError(2,1.871744);
   hNCinFV_stack_11->SetBinError(3,1.581574);
   hNCinFV_stack_11->SetBinError(4,1.641354);
   hNCinFV_stack_11->SetBinError(5,1.519802);
   hNCinFV_stack_11->SetBinError(6,1.330732);
   hNCinFV_stack_11->SetBinError(7,1.388121);
   hNCinFV_stack_11->SetBinError(8,1.019492);
   hNCinFV_stack_11->SetBinError(9,1.127723);
   hNCinFV_stack_11->SetBinError(10,0.8999062);
   hNCinFV_stack_11->SetBinError(11,1.226083);
   hNCinFV_stack_11->SetBinError(12,1.144012);
   hNCinFV_stack_11->SetBinError(13,0.9415334);
   hNCinFV_stack_11->SetBinError(14,0.6201715);
   hNCinFV_stack_11->SetBinError(15,0.5554667);
   hNCinFV_stack_11->SetBinError(16,0.7080169);
   hNCinFV_stack_11->SetBinError(17,0.5554667);
   hNCinFV_stack_11->SetBinError(18,0.5554667);
   hNCinFV_stack_11->SetBinError(19,0.6209405);
   hNCinFV_stack_11->SetBinError(20,0.340721);
   hNCinFV_stack_11->SetBinError(21,0.3387718);
   hNCinFV_stack_11->SetBinError(22,0.2781975);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.3921167);
   hNCinFV_stack_11->SetBinError(25,1.19315);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,70.08018);
   hnumuCCinFV_stack_12->SetBinContent(2,14.33989);
   hnumuCCinFV_stack_12->SetBinContent(3,12.007);
   hnumuCCinFV_stack_12->SetBinContent(4,9.964285);
   hnumuCCinFV_stack_12->SetBinContent(5,7.957173);
   hnumuCCinFV_stack_12->SetBinContent(6,7.903804);
   hnumuCCinFV_stack_12->SetBinContent(7,7.596898);
   hnumuCCinFV_stack_12->SetBinContent(8,4.256641);
   hnumuCCinFV_stack_12->SetBinContent(9,4.194143);
   hnumuCCinFV_stack_12->SetBinContent(10,2.559148);
   hnumuCCinFV_stack_12->SetBinContent(11,2.055947);
   hnumuCCinFV_stack_12->SetBinContent(12,2.775772);
   hnumuCCinFV_stack_12->SetBinContent(13,1.988822);
   hnumuCCinFV_stack_12->SetBinContent(14,1.927777);
   hnumuCCinFV_stack_12->SetBinContent(15,2.681898);
   hnumuCCinFV_stack_12->SetBinContent(16,1.155735);
   hnumuCCinFV_stack_12->SetBinContent(17,2.932797);
   hnumuCCinFV_stack_12->SetBinContent(18,2.511497);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(20,1.308391e-06);
   hnumuCCinFV_stack_12->SetBinContent(21,1.557852);
   hnumuCCinFV_stack_12->SetBinContent(22,0.5832103);
   hnumuCCinFV_stack_12->SetBinContent(23,1.568307);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,5.63326);
   hnumuCCinFV_stack_12->SetBinError(1,4.700227);
   hnumuCCinFV_stack_12->SetBinError(2,2.395214);
   hnumuCCinFV_stack_12->SetBinError(3,1.787665);
   hnumuCCinFV_stack_12->SetBinError(4,2.173584);
   hnumuCCinFV_stack_12->SetBinError(5,1.516237);
   hnumuCCinFV_stack_12->SetBinError(6,1.553193);
   hnumuCCinFV_stack_12->SetBinError(7,1.448659);
   hnumuCCinFV_stack_12->SetBinError(8,1.031034);
   hnumuCCinFV_stack_12->SetBinError(9,1.049684);
   hnumuCCinFV_stack_12->SetBinError(10,0.8707993);
   hnumuCCinFV_stack_12->SetBinError(11,0.6531977);
   hnumuCCinFV_stack_12->SetBinError(12,0.782736);
   hnumuCCinFV_stack_12->SetBinError(13,0.7211452);
   hnumuCCinFV_stack_12->SetBinError(14,0.6537074);
   hnumuCCinFV_stack_12->SetBinError(15,1.59093);
   hnumuCCinFV_stack_12->SetBinError(16,0.521619);
   hnumuCCinFV_stack_12->SetBinError(17,1.011967);
   hnumuCCinFV_stack_12->SetBinError(18,1.062695);
   hnumuCCinFV_stack_12->SetBinError(19,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(20,1.308391e-06);
   hnumuCCinFV_stack_12->SetBinError(21,0.6528198);
   hnumuCCinFV_stack_12->SetBinError(22,0.4180738);
   hnumuCCinFV_stack_12->SetBinError(23,0.9442732);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.204188);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,17.55579);
   hnueCCinFV_stack_13->SetBinContent(2,0.654338);
   hnueCCinFV_stack_13->SetBinContent(3,0.6777201);
   hnueCCinFV_stack_13->SetBinContent(4,1.517861);
   hnueCCinFV_stack_13->SetBinContent(5,1.238217);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.4182166);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(25,0.8237921);
   hnueCCinFV_stack_13->SetBinError(1,2.994591);
   hnueCCinFV_stack_13->SetBinError(2,0.3788402);
   hnueCCinFV_stack_13->SetBinError(3,0.4972163);
   hnueCCinFV_stack_13->SetBinError(4,0.7137061);
   hnueCCinFV_stack_13->SetBinError(5,0.6329025);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.3812133);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.293294);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(25,0.5035461);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__17->SetBinContent(1,1333.354);
   hmcerror__17->SetBinContent(2,197.3442);
   hmcerror__17->SetBinContent(3,182.0952);
   hmcerror__17->SetBinContent(4,165.9718);
   hmcerror__17->SetBinContent(5,148.7759);
   hmcerror__17->SetBinContent(6,131.58);
   hmcerror__17->SetBinContent(7,118.9551);
   hmcerror__17->SetBinContent(8,96.82387);
   hmcerror__17->SetBinContent(9,83.2419);
   hmcerror__17->SetBinContent(10,59.05686);
   hmcerror__17->SetBinContent(11,61.33738);
   hmcerror__17->SetBinContent(12,51.00659);
   hmcerror__17->SetBinContent(13,43.93177);
   hmcerror__17->SetBinContent(14,35.83232);
   hmcerror__17->SetBinContent(15,31.5315);
   hmcerror__17->SetBinContent(16,22.21245);
   hmcerror__17->SetBinContent(17,19.56445);
   hmcerror__17->SetBinContent(18,18.55102);
   hmcerror__17->SetBinContent(19,16.99225);
   hmcerror__17->SetBinContent(20,12.63303);
   hmcerror__17->SetBinContent(21,11.17586);
   hmcerror__17->SetBinContent(22,8.649158);
   hmcerror__17->SetBinContent(23,8.370946);
   hmcerror__17->SetBinContent(24,4.105537);
   hmcerror__17->SetBinContent(25,83.01433);
   hmcerror__17->SetBinError(1,303.513);
   hmcerror__17->SetBinError(2,58.28972);
   hmcerror__17->SetBinError(3,51.37711);
   hmcerror__17->SetBinError(4,43.95306);
   hmcerror__17->SetBinError(5,41.5463);
   hmcerror__17->SetBinError(6,41.27457);
   hmcerror__17->SetBinError(7,30.92279);
   hmcerror__17->SetBinError(8,26.64469);
   hmcerror__17->SetBinError(9,23.88867);
   hmcerror__17->SetBinError(10,21.7751);
   hmcerror__17->SetBinError(11,22.21837);
   hmcerror__17->SetBinError(12,17.37235);
   hmcerror__17->SetBinError(13,15.03959);
   hmcerror__17->SetBinError(14,13.85419);
   hmcerror__17->SetBinError(15,17.77243);
   hmcerror__17->SetBinError(16,11.27611);
   hmcerror__17->SetBinError(17,11.31667);
   hmcerror__17->SetBinError(18,9.641289);
   hmcerror__17->SetBinError(19,7.973301);
   hmcerror__17->SetBinError(20,6.956545);
   hmcerror__17->SetBinError(21,8.278665);
   hmcerror__17->SetBinError(22,6.733775);
   hmcerror__17->SetBinError(23,7.314952);
   hmcerror__17->SetBinError(24,3.458451);
   hmcerror__17->SetBinError(25,29.14361);
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
   Double_t _fy3021[24] = {
   1341,
   178,
   178,
   188,
   126,
   165,
   109,
   89,
   83,
   72,
   59,
   41,
   31,
   36,
   26,
   33,
   14,
   24,
   15,
   18,
   13,
   8,
   2,
   6};
   Double_t _felx3021[24] = {
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
   Double_t _fely3021[24] = {
   36.61967,
   13.34166,
   13.34166,
   13.71131,
   11.22497,
   12.84523,
   10.44031,
   9.5566,
   9.234,
   8.6108,
   7.8097,
   6.5384,
   5.7094,
   6.1381,
   5.2453,
   5.8847,
   3.9102,
   5.0476,
   4.0385,
   4.4008,
   3.77763,
   3.0307,
   2,
   2.67925};
   Double_t _fehx3021[24] = {
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
   Double_t _fehy3021[24] = {
   36.61967,
   13.34166,
   13.34166,
   13.71131,
   11.22497,
   12.84523,
   10.44031,
   9.3552,
   9.0323,
   8.4085,
   7.6066,
   6.3331,
   5.5017,
   5.9318,
   5.0358,
   5.6776,
   3.6898,
   4.837,
   3.8197,
   4.1858,
   3.5552,
   2.7896,
   1.51917,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,99);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(1515.382);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2855.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 267.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 35.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 289.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  85.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1135.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  217.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 382.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 192.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 163.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 27.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
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
   Double_t _fely3022[24] = {
   0.2276313,
   0.2953708,
   0.2821442,
   0.2648224,
   0.2792543,
   0.3136842,
   0.2599535,
   0.2751873,
   0.2869789,
   0.3687142,
   0.3622321,
   0.3405903,
   0.3423398,
   0.3866394,
   0.5636406,
   0.5076481,
   0.5784302,
   0.5197175,
   0.4692316,
   0.5506632,
   0.7407629,
   0.7785469,
   0.8738501,
   0.8423869};
   Double_t _fehx3022[24] = {
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
   Double_t _fehy3022[24] = {
   0.2276313,
   0.2953708,
   0.2821442,
   0.2648224,
   0.2792543,
   0.3136842,
   0.2599535,
   0.2751873,
   0.2869789,
   0.3687142,
   0.3622321,
   0.3405903,
   0.3423398,
   0.3866394,
   0.5636406,
   0.5076481,
   0.5784302,
   0.5197175,
   0.4692316,
   0.5506632,
   0.7407629,
   0.7785469,
   0.8738501,
   0.8423869};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,99);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   Double_t _fely3023[24] = {
   0.2102935,
   0.2188208,
   0.2197671,
   0.2166929,
   0.2180577,
   0.2138275,
   0.2004852,
   0.2151578,
   0.2088402,
   0.2244591,
   0.2210536,
   0.1944986,
   0.2174793,
   0.206375,
   0.2403472,
   0.259603,
   0.2439381,
   0.2413126,
   0.2188431,
   0.2564038,
   0.2973791,
   0.2779911,
   0.2953661,
   0.375607};
   Double_t _fehx3023[24] = {
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
   Double_t _fehy3023[24] = {
   0.2102935,
   0.2188208,
   0.2197671,
   0.2166929,
   0.2180577,
   0.2138275,
   0.2004852,
   0.2151578,
   0.2088402,
   0.2244591,
   0.2210536,
   0.1944986,
   0.2174793,
   0.206375,
   0.2403472,
   0.259603,
   0.2439381,
   0.2413126,
   0.2188431,
   0.2564038,
   0.2973791,
   0.2779911,
   0.2953661,
   0.375607};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,99);
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
   Double_t _fy3024[24] = {
   1.005735,
   0.9019774,
   0.9775107,
   1.132723,
   0.8469114,
   1.25399,
   0.9163123,
   0.9191948,
   0.997094,
   1.219164,
   0.961893,
   0.8038177,
   0.7056397,
   1.004679,
   0.8245724,
   1.485653,
   0.7155836,
   1.29373,
   0.8827554,
   1.424836,
   1.163221,
   0.9249455,
   0.2389216,
   1.461441};
   Double_t _felx3024[24] = {
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
   Double_t _fely3024[24] = {
   0.02746433,
   0.06760606,
   0.07326753,
   0.08261228,
   0.07544886,
   0.097623,
   0.0877668,
   0.09870087,
   0.1109297,
   0.1458052,
   0.1273237,
   0.1281874,
   0.1299606,
   0.1713006,
   0.1663511,
   0.264928,
   0.1998625,
   0.2720929,
   0.2376672,
   0.3483566,
   0.3380168,
   0.350404,
   0.2389216,
   0.6525942};
   Double_t _fehx3024[24] = {
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
   Double_t _fehy3024[24] = {
   0.02746433,
   0.06760606,
   0.07326753,
   0.08261228,
   0.07544886,
   0.097623,
   0.0877668,
   0.0966208,
   0.1085067,
   0.1423797,
   0.1240125,
   0.1241624,
   0.1252328,
   0.1655433,
   0.159707,
   0.2556044,
   0.1885972,
   0.2607404,
   0.2247907,
   0.3313377,
   0.3181141,
   0.3225285,
   0.1814813,
   0.5891019};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,99);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.255597);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

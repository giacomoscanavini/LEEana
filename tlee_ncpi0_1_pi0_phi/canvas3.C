#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 17:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
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
   pad1->Range(-4.119231,-1.56,3.957692,172.5032);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__7->SetBinContent(1,74.37473);
   hmc__7->SetBinContent(2,64.92229);
   hmc__7->SetBinContent(3,66.61679);
   hmc__7->SetBinContent(4,59.98111);
   hmc__7->SetBinContent(5,57.01736);
   hmc__7->SetBinContent(6,61.91793);
   hmc__7->SetBinContent(7,66.97446);
   hmc__7->SetBinContent(8,57.92992);
   hmc__7->SetBinContent(9,53.12168);
   hmc__7->SetBinContent(10,60.93108);
   hmc__7->SetBinContent(11,54.01506);
   hmc__7->SetBinContent(12,66.19003);
   hmc__7->SetBinContent(13,60.63073);
   hmc__7->SetBinContent(14,68.8851);
   hmc__7->SetBinContent(15,74.57167);
   hmc__7->SetBinContent(16,62.94243);
   hmc__7->SetBinContent(17,64.51749);
   hmc__7->SetBinContent(18,63.82905);
   hmc__7->SetBinContent(19,72.85687);
   hmc__7->SetBinContent(20,55.36491);
   hmc__7->SetBinContent(21,64.15736);
   hmc__7->SetBinContent(22,63.2109);
   hmc__7->SetBinContent(23,67.55946);
   hmc__7->SetBinContent(24,67.17763);
   hmc__7->SetBinContent(25,64.45738);
   hmc__7->SetBinError(1,22.32306);
   hmc__7->SetBinError(2,30.42);
   hmc__7->SetBinError(3,24.47675);
   hmc__7->SetBinError(4,27.0709);
   hmc__7->SetBinError(5,20.08993);
   hmc__7->SetBinError(6,19.79172);
   hmc__7->SetBinError(7,20.76167);
   hmc__7->SetBinError(8,18.57356);
   hmc__7->SetBinError(9,25.32029);
   hmc__7->SetBinError(10,22.79206);
   hmc__7->SetBinError(11,23.77131);
   hmc__7->SetBinError(12,22.22411);
   hmc__7->SetBinError(13,21.72952);
   hmc__7->SetBinError(14,21.26604);
   hmc__7->SetBinError(15,30.38511);
   hmc__7->SetBinError(16,27.39434);
   hmc__7->SetBinError(17,20.02577);
   hmc__7->SetBinError(18,20.45545);
   hmc__7->SetBinError(19,20.4003);
   hmc__7->SetBinError(20,17.39403);
   hmc__7->SetBinError(21,20.05128);
   hmc__7->SetBinError(22,19.70988);
   hmc__7->SetBinError(23,22.29942);
   hmc__7->SetBinError(24,24.65936);
   hmc__7->SetBinError(25,27.56525);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-1.56);
   hmc__7->SetMaximum(163.8);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-3.15,3.15);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(78.30025);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.985442);
   hbadmatch_stack_1->SetBinContent(2,1.967156);
   hbadmatch_stack_1->SetBinContent(3,2.089417);
   hbadmatch_stack_1->SetBinContent(4,2.356272);
   hbadmatch_stack_1->SetBinContent(5,1.998562);
   hbadmatch_stack_1->SetBinContent(6,3.493308);
   hbadmatch_stack_1->SetBinContent(7,2.223277);
   hbadmatch_stack_1->SetBinContent(8,1.290983);
   hbadmatch_stack_1->SetBinContent(9,2.097565);
   hbadmatch_stack_1->SetBinContent(10,1.769554);
   hbadmatch_stack_1->SetBinContent(11,1.71546);
   hbadmatch_stack_1->SetBinContent(12,2.379073);
   hbadmatch_stack_1->SetBinContent(13,1.494013);
   hbadmatch_stack_1->SetBinContent(14,1.706985);
   hbadmatch_stack_1->SetBinContent(15,2.919409);
   hbadmatch_stack_1->SetBinContent(16,2.162107);
   hbadmatch_stack_1->SetBinContent(17,2.034307);
   hbadmatch_stack_1->SetBinContent(18,3.931542);
   hbadmatch_stack_1->SetBinContent(19,1.284487);
   hbadmatch_stack_1->SetBinContent(20,0.5200936);
   hbadmatch_stack_1->SetBinContent(21,3.67792);
   hbadmatch_stack_1->SetBinContent(22,2.410206);
   hbadmatch_stack_1->SetBinContent(23,3.177056);
   hbadmatch_stack_1->SetBinContent(24,0.7484832);
   hbadmatch_stack_1->SetBinContent(25,2.596485);
   hbadmatch_stack_1->SetBinError(1,0.6141829);
   hbadmatch_stack_1->SetBinError(2,0.7066743);
   hbadmatch_stack_1->SetBinError(3,0.8116531);
   hbadmatch_stack_1->SetBinError(4,0.8259148);
   hbadmatch_stack_1->SetBinError(5,0.6786452);
   hbadmatch_stack_1->SetBinError(6,1.018952);
   hbadmatch_stack_1->SetBinError(7,0.7351266);
   hbadmatch_stack_1->SetBinError(8,0.7462251);
   hbadmatch_stack_1->SetBinError(9,0.6557064);
   hbadmatch_stack_1->SetBinError(10,0.6970251);
   hbadmatch_stack_1->SetBinError(11,0.6273841);
   hbadmatch_stack_1->SetBinError(12,1.246633);
   hbadmatch_stack_1->SetBinError(13,0.6305443);
   hbadmatch_stack_1->SetBinError(14,0.8068079);
   hbadmatch_stack_1->SetBinError(15,0.8413035);
   hbadmatch_stack_1->SetBinError(16,0.7441891);
   hbadmatch_stack_1->SetBinError(17,0.7499145);
   hbadmatch_stack_1->SetBinError(18,1.044664);
   hbadmatch_stack_1->SetBinError(19,0.5963911);
   hbadmatch_stack_1->SetBinError(20,0.369523);
   hbadmatch_stack_1->SetBinError(21,1.085442);
   hbadmatch_stack_1->SetBinError(22,0.9277623);
   hbadmatch_stack_1->SetBinError(23,1.068351);
   hbadmatch_stack_1->SetBinError(24,0.3576305);
   hbadmatch_stack_1->SetBinError(25,0.9661075);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,13.1551);
   hext_stack_2->SetBinContent(2,7.836244);
   hext_stack_2->SetBinContent(3,7.063358);
   hext_stack_2->SetBinContent(4,9.298237);
   hext_stack_2->SetBinContent(5,12.05505);
   hext_stack_2->SetBinContent(6,17.59733);
   hext_stack_2->SetBinContent(7,17.62769);
   hext_stack_2->SetBinContent(8,12.60728);
   hext_stack_2->SetBinContent(9,6.661168);
   hext_stack_2->SetBinContent(10,8.973839);
   hext_stack_2->SetBinContent(11,5.109793);
   hext_stack_2->SetBinContent(12,9.133833);
   hext_stack_2->SetBinContent(13,7.105247);
   hext_stack_2->SetBinContent(14,6.642398);
   hext_stack_2->SetBinContent(15,11.15247);
   hext_stack_2->SetBinContent(16,12.93168);
   hext_stack_2->SetBinContent(17,15.03087);
   hext_stack_2->SetBinContent(18,11.90941);
   hext_stack_2->SetBinContent(19,24.28162);
   hext_stack_2->SetBinContent(20,15.69844);
   hext_stack_2->SetBinContent(21,13.30357);
   hext_stack_2->SetBinContent(22,12.68507);
   hext_stack_2->SetBinContent(23,14.36331);
   hext_stack_2->SetBinContent(24,8.663803);
   hext_stack_2->SetBinContent(25,6.698648);
   hext_stack_2->SetBinError(1,2.556707);
   hext_stack_2->SetBinError(2,1.930499);
   hext_stack_2->SetBinError(3,1.589118);
   hext_stack_2->SetBinError(4,2.065899);
   hext_stack_2->SetBinError(5,2.359303);
   hext_stack_2->SetBinError(6,2.947653);
   hext_stack_2->SetBinError(7,2.890553);
   hext_stack_2->SetBinError(8,2.47368);
   hext_stack_2->SetBinError(9,1.579587);
   hext_stack_2->SetBinError(10,2.040271);
   hext_stack_2->SetBinError(11,1.447444);
   hext_stack_2->SetBinError(12,2.036605);
   hext_stack_2->SetBinError(13,1.859105);
   hext_stack_2->SetBinError(14,1.66204);
   hext_stack_2->SetBinError(15,2.318788);
   hext_stack_2->SetBinError(16,2.49486);
   hext_stack_2->SetBinError(17,2.653674);
   hext_stack_2->SetBinError(18,2.275709);
   hext_stack_2->SetBinError(19,3.518808);
   hext_stack_2->SetBinError(20,2.642947);
   hext_stack_2->SetBinError(21,2.292918);
   hext_stack_2->SetBinError(22,2.458466);
   hext_stack_2->SetBinError(23,2.664357);
   hext_stack_2->SetBinError(24,1.911823);
   hext_stack_2->SetBinError(25,1.814097);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.5232321);
   hdirt_stack_3->SetBinContent(2,1.834949);
   hdirt_stack_3->SetBinContent(3,0.9561222);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(5,1.290705);
   hdirt_stack_3->SetBinContent(6,1.45079);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.6773466);
   hdirt_stack_3->SetBinContent(10,0.6763744);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.7712369);
   hdirt_stack_3->SetBinContent(13,0.8706918);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,1.073543);
   hdirt_stack_3->SetBinContent(18,1.828041);
   hdirt_stack_3->SetBinContent(19,1.387762);
   hdirt_stack_3->SetBinContent(20,2.245326);
   hdirt_stack_3->SetBinContent(21,0.5570828);
   hdirt_stack_3->SetBinContent(22,1.298424);
   hdirt_stack_3->SetBinContent(23,1.67845);
   hdirt_stack_3->SetBinContent(24,1.743472);
   hdirt_stack_3->SetBinContent(25,1.136778);
   hdirt_stack_3->SetBinError(1,0.3149294);
   hdirt_stack_3->SetBinError(2,0.7374651);
   hdirt_stack_3->SetBinError(3,0.5623509);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(5,0.6174457);
   hdirt_stack_3->SetBinError(6,0.6124765);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.3439585);
   hdirt_stack_3->SetBinError(10,0.4782689);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4884655);
   hdirt_stack_3->SetBinError(13,0.4088785);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.5941443);
   hdirt_stack_3->SetBinError(18,0.8186564);
   hdirt_stack_3->SetBinError(19,0.5849029);
   hdirt_stack_3->SetBinError(20,1.077875);
   hdirt_stack_3->SetBinError(21,0.4028472);
   hdirt_stack_3->SetBinError(22,0.5518727);
   hdirt_stack_3->SetBinError(23,0.7080081);
   hdirt_stack_3->SetBinError(24,0.7613817);
   hdirt_stack_3->SetBinError(25,0.477989);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,15.3288);
   houtFV_stack_4->SetBinContent(2,12.47618);
   houtFV_stack_4->SetBinContent(3,12.24086);
   houtFV_stack_4->SetBinContent(4,14.20863);
   houtFV_stack_4->SetBinContent(5,12.96559);
   houtFV_stack_4->SetBinContent(6,9.412445);
   houtFV_stack_4->SetBinContent(7,14.94108);
   houtFV_stack_4->SetBinContent(8,11.05493);
   houtFV_stack_4->SetBinContent(9,11.44848);
   houtFV_stack_4->SetBinContent(10,10.24179);
   houtFV_stack_4->SetBinContent(11,9.214107);
   houtFV_stack_4->SetBinContent(12,14.96383);
   houtFV_stack_4->SetBinContent(13,12.09718);
   houtFV_stack_4->SetBinContent(14,14.0129);
   houtFV_stack_4->SetBinContent(15,13.86839);
   houtFV_stack_4->SetBinContent(16,13.90713);
   houtFV_stack_4->SetBinContent(17,10.53332);
   houtFV_stack_4->SetBinContent(18,12.20389);
   houtFV_stack_4->SetBinContent(19,8.554119);
   houtFV_stack_4->SetBinContent(20,10.78662);
   houtFV_stack_4->SetBinContent(21,12.83474);
   houtFV_stack_4->SetBinContent(22,13.12484);
   houtFV_stack_4->SetBinContent(23,12.94275);
   houtFV_stack_4->SetBinContent(24,12.58883);
   houtFV_stack_4->SetBinContent(25,12.73597);
   houtFV_stack_4->SetBinError(1,2.109555);
   houtFV_stack_4->SetBinError(2,1.656926);
   houtFV_stack_4->SetBinError(3,1.739141);
   houtFV_stack_4->SetBinError(4,1.900142);
   houtFV_stack_4->SetBinError(5,1.806298);
   houtFV_stack_4->SetBinError(6,1.468063);
   houtFV_stack_4->SetBinError(7,1.957486);
   houtFV_stack_4->SetBinError(8,1.659316);
   houtFV_stack_4->SetBinError(9,1.885394);
   houtFV_stack_4->SetBinError(10,1.568118);
   houtFV_stack_4->SetBinError(11,1.562501);
   houtFV_stack_4->SetBinError(12,1.995057);
   houtFV_stack_4->SetBinError(13,1.805647);
   houtFV_stack_4->SetBinError(14,1.927072);
   houtFV_stack_4->SetBinError(15,1.886565);
   houtFV_stack_4->SetBinError(16,1.873731);
   houtFV_stack_4->SetBinError(17,1.585162);
   houtFV_stack_4->SetBinError(18,1.920981);
   houtFV_stack_4->SetBinError(19,1.457877);
   houtFV_stack_4->SetBinError(20,2.026288);
   houtFV_stack_4->SetBinError(21,1.785544);
   houtFV_stack_4->SetBinError(22,1.862545);
   houtFV_stack_4->SetBinError(23,1.831621);
   houtFV_stack_4->SetBinError(24,1.737859);
   houtFV_stack_4->SetBinError(25,1.803952);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4687397);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.033545);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1984397);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.7435086);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5186585);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.859127);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9202378);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7216551);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7189275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7746956);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.5889072);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7027175);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9553087);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5690392);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3305548);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2982574);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.405907);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2442361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8933173);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6956994);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.551317);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6262472);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.686977);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5557635);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7370041);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2195771);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3131581);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.08474279);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2964774);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2976089);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4182769);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3634618);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3120023);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2820354);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3872315);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2585269);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3586192);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3682988);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2504324);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.158324);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2032719);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1699318);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1206262);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3778274);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2408944);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2055014);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3219338);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2524452);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2937089);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3282023);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05831136);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04462993);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1305107);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4465379);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.034868);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1914993);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03555292);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1536413);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1194986);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08156968);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.04799227);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1478918);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.030472);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02632837);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08159561);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2947565);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02465589);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.115797);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02514784);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1297573);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06285696);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0451274);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03878871);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06503283);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.580656);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.872845);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.91371);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.86289);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.276258);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.469622);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.036055);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.67376);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.611916);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.603641);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.2078);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.416498);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.699697);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.140624);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.353754);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.05381);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.581502);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.130052);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.454948);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.840866);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.73893);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.730062);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.013024);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.813271);
   hNCpi0inFVres_stack_7->SetBinContent(25,10.14913);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8097483);
   hNCpi0inFVres_stack_7->SetBinError(2,1.09014);
   hNCpi0inFVres_stack_7->SetBinError(3,1.177084);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9349732);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7422859);
   hNCpi0inFVres_stack_7->SetBinError(6,1.019089);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9082202);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8623444);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7720733);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8304886);
   hNCpi0inFVres_stack_7->SetBinError(11,1.07149);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9302345);
   hNCpi0inFVres_stack_7->SetBinError(13,0.907922);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9675322);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8940042);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9264654);
   hNCpi0inFVres_stack_7->SetBinError(17,1.05038);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7912718);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9151737);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8777455);
   hNCpi0inFVres_stack_7->SetBinError(21,1.139493);
   hNCpi0inFVres_stack_7->SetBinError(22,0.905478);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7560601);
   hNCpi0inFVres_stack_7->SetBinError(24,1.083165);
   hNCpi0inFVres_stack_7->SetBinError(25,1.030332);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.282389);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.195467);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.096327);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.287933);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.605985);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.538273);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.799578);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.247296);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.193573);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.714096);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.672183);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.259124);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.949087);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.858564);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.220969);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.261788);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.018108);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.677976);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.958619);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.795223);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.013316);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.29703);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.698729);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.857839);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.449206);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6239993);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8542548);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6607152);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8645194);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.587551);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6135187);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3417177);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4860198);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5622271);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4395888);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6722232);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.660834);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4719119);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7361699);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4073349);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4288331);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8472465);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3294695);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4988145);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7406793);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7953761);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7563854);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.678277);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5259179);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7524026);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,17.17906);
   hCCpi0inFV_stack_10->SetBinContent(2,11.98368);
   hCCpi0inFV_stack_10->SetBinContent(3,16.39768);
   hCCpi0inFV_stack_10->SetBinContent(4,12.87042);
   hCCpi0inFV_stack_10->SetBinContent(5,8.763082);
   hCCpi0inFV_stack_10->SetBinContent(6,10.09412);
   hCCpi0inFV_stack_10->SetBinContent(7,10.82383);
   hCCpi0inFV_stack_10->SetBinContent(8,11.72265);
   hCCpi0inFV_stack_10->SetBinContent(9,12.77705);
   hCCpi0inFV_stack_10->SetBinContent(10,11.99667);
   hCCpi0inFV_stack_10->SetBinContent(11,12.25231);
   hCCpi0inFV_stack_10->SetBinContent(12,12.80543);
   hCCpi0inFV_stack_10->SetBinContent(13,13.95151);
   hCCpi0inFV_stack_10->SetBinContent(14,17.31471);
   hCCpi0inFV_stack_10->SetBinContent(15,12.92366);
   hCCpi0inFV_stack_10->SetBinContent(16,10.44364);
   hCCpi0inFV_stack_10->SetBinContent(17,12.17428);
   hCCpi0inFV_stack_10->SetBinContent(18,14.03048);
   hCCpi0inFV_stack_10->SetBinContent(19,14.34661);
   hCCpi0inFV_stack_10->SetBinContent(20,7.393629);
   hCCpi0inFV_stack_10->SetBinContent(21,11.43645);
   hCCpi0inFV_stack_10->SetBinContent(22,12.934);
   hCCpi0inFV_stack_10->SetBinContent(23,12.2856);
   hCCpi0inFV_stack_10->SetBinContent(24,14.67048);
   hCCpi0inFV_stack_10->SetBinContent(25,15.52489);
   hCCpi0inFV_stack_10->SetBinError(1,2.160379);
   hCCpi0inFV_stack_10->SetBinError(2,1.65451);
   hCCpi0inFV_stack_10->SetBinError(3,2.064365);
   hCCpi0inFV_stack_10->SetBinError(4,1.834004);
   hCCpi0inFV_stack_10->SetBinError(5,1.491349);
   hCCpi0inFV_stack_10->SetBinError(6,1.524369);
   hCCpi0inFV_stack_10->SetBinError(7,1.632995);
   hCCpi0inFV_stack_10->SetBinError(8,1.740548);
   hCCpi0inFV_stack_10->SetBinError(9,1.818878);
   hCCpi0inFV_stack_10->SetBinError(10,1.680059);
   hCCpi0inFV_stack_10->SetBinError(11,1.686613);
   hCCpi0inFV_stack_10->SetBinError(12,1.78919);
   hCCpi0inFV_stack_10->SetBinError(13,1.865418);
   hCCpi0inFV_stack_10->SetBinError(14,2.104876);
   hCCpi0inFV_stack_10->SetBinError(15,1.80784);
   hCCpi0inFV_stack_10->SetBinError(16,1.610953);
   hCCpi0inFV_stack_10->SetBinError(17,1.791048);
   hCCpi0inFV_stack_10->SetBinError(18,1.967306);
   hCCpi0inFV_stack_10->SetBinError(19,1.937328);
   hCCpi0inFV_stack_10->SetBinError(20,1.374629);
   hCCpi0inFV_stack_10->SetBinError(21,1.717748);
   hCCpi0inFV_stack_10->SetBinError(22,1.793823);
   hCCpi0inFV_stack_10->SetBinError(23,1.764062);
   hCCpi0inFV_stack_10->SetBinError(24,1.946314);
   hCCpi0inFV_stack_10->SetBinError(25,2.034424);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.226593);
   hNCinFV_stack_11->SetBinContent(2,3.279118);
   hNCinFV_stack_11->SetBinContent(3,3.585126);
   hNCinFV_stack_11->SetBinContent(4,2.542374);
   hNCinFV_stack_11->SetBinContent(5,3.509008);
   hNCinFV_stack_11->SetBinContent(6,2.296014);
   hNCinFV_stack_11->SetBinContent(7,3.32072);
   hNCinFV_stack_11->SetBinContent(8,1.915908);
   hNCinFV_stack_11->SetBinContent(9,1.761441);
   hNCinFV_stack_11->SetBinContent(10,3.125642);
   hNCinFV_stack_11->SetBinContent(11,2.698161);
   hNCinFV_stack_11->SetBinContent(12,1.589655);
   hNCinFV_stack_11->SetBinContent(13,2.725309);
   hNCinFV_stack_11->SetBinContent(14,2.620603);
   hNCinFV_stack_11->SetBinContent(15,3.876133);
   hNCinFV_stack_11->SetBinContent(16,2.117779);
   hNCinFV_stack_11->SetBinContent(17,2.844199);
   hNCinFV_stack_11->SetBinContent(18,2.520339);
   hNCinFV_stack_11->SetBinContent(19,3.130776);
   hNCinFV_stack_11->SetBinContent(20,3.305762);
   hNCinFV_stack_11->SetBinContent(21,2.669363);
   hNCinFV_stack_11->SetBinContent(22,2.14461);
   hNCinFV_stack_11->SetBinContent(23,3.198537);
   hNCinFV_stack_11->SetBinContent(24,4.832586);
   hNCinFV_stack_11->SetBinContent(25,2.375855);
   hNCinFV_stack_11->SetBinError(1,0.6481679);
   hNCinFV_stack_11->SetBinError(2,0.8829965);
   hNCinFV_stack_11->SetBinError(3,0.9632679);
   hNCinFV_stack_11->SetBinError(4,0.7705853);
   hNCinFV_stack_11->SetBinError(5,1.072705);
   hNCinFV_stack_11->SetBinError(6,0.8260817);
   hNCinFV_stack_11->SetBinError(7,1.061289);
   hNCinFV_stack_11->SetBinError(8,0.675634);
   hNCinFV_stack_11->SetBinError(9,0.6391717);
   hNCinFV_stack_11->SetBinError(10,1.068383);
   hNCinFV_stack_11->SetBinError(11,0.750854);
   hNCinFV_stack_11->SetBinError(12,0.6266553);
   hNCinFV_stack_11->SetBinError(13,1.021223);
   hNCinFV_stack_11->SetBinError(14,0.820888);
   hNCinFV_stack_11->SetBinError(15,1.105454);
   hNCinFV_stack_11->SetBinError(16,0.7345198);
   hNCinFV_stack_11->SetBinError(17,0.9744626);
   hNCinFV_stack_11->SetBinError(18,0.7058944);
   hNCinFV_stack_11->SetBinError(19,0.9973968);
   hNCinFV_stack_11->SetBinError(20,1.247451);
   hNCinFV_stack_11->SetBinError(21,0.8941923);
   hNCinFV_stack_11->SetBinError(22,0.6837309);
   hNCinFV_stack_11->SetBinError(23,1.004391);
   hNCinFV_stack_11->SetBinError(24,1.255365);
   hNCinFV_stack_11->SetBinError(25,0.7293713);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,10.5676);
   hnumuCCinFV_stack_12->SetBinContent(2,10.83099);
   hnumuCCinFV_stack_12->SetBinContent(3,9.259529);
   hnumuCCinFV_stack_12->SetBinContent(4,5.439009);
   hnumuCCinFV_stack_12->SetBinContent(5,4.01825);
   hnumuCCinFV_stack_12->SetBinContent(6,5.283749);
   hnumuCCinFV_stack_12->SetBinContent(7,7.281994);
   hnumuCCinFV_stack_12->SetBinContent(8,8.294899);
   hnumuCCinFV_stack_12->SetBinContent(9,6.445825);
   hnumuCCinFV_stack_12->SetBinContent(10,12.0233);
   hnumuCCinFV_stack_12->SetBinContent(11,9.045725);
   hnumuCCinFV_stack_12->SetBinContent(12,10.94388);
   hnumuCCinFV_stack_12->SetBinContent(13,10.05283);
   hnumuCCinFV_stack_12->SetBinContent(14,12.4797);
   hnumuCCinFV_stack_12->SetBinContent(15,18.05403);
   hnumuCCinFV_stack_12->SetBinContent(16,8.270659);
   hnumuCCinFV_stack_12->SetBinContent(17,7.677026);
   hnumuCCinFV_stack_12->SetBinContent(18,8.293247);
   hnumuCCinFV_stack_12->SetBinContent(19,8.08276);
   hnumuCCinFV_stack_12->SetBinContent(20,5.001682);
   hnumuCCinFV_stack_12->SetBinContent(21,5.92171);
   hnumuCCinFV_stack_12->SetBinContent(22,5.7157);
   hnumuCCinFV_stack_12->SetBinContent(23,5.918678);
   hnumuCCinFV_stack_12->SetBinContent(24,10.3585);
   hnumuCCinFV_stack_12->SetBinContent(25,9.096223);
   hnumuCCinFV_stack_12->SetBinError(1,1.696515);
   hnumuCCinFV_stack_12->SetBinError(2,1.787924);
   hnumuCCinFV_stack_12->SetBinError(3,1.533639);
   hnumuCCinFV_stack_12->SetBinError(4,1.28467);
   hnumuCCinFV_stack_12->SetBinError(5,1.041834);
   hnumuCCinFV_stack_12->SetBinError(6,1.175503);
   hnumuCCinFV_stack_12->SetBinError(7,1.91802);
   hnumuCCinFV_stack_12->SetBinError(8,2.330469);
   hnumuCCinFV_stack_12->SetBinError(9,1.619776);
   hnumuCCinFV_stack_12->SetBinError(10,2.202842);
   hnumuCCinFV_stack_12->SetBinError(11,1.575588);
   hnumuCCinFV_stack_12->SetBinError(12,1.81811);
   hnumuCCinFV_stack_12->SetBinError(13,1.662003);
   hnumuCCinFV_stack_12->SetBinError(14,1.863418);
   hnumuCCinFV_stack_12->SetBinError(15,3.198932);
   hnumuCCinFV_stack_12->SetBinError(16,1.38953);
   hnumuCCinFV_stack_12->SetBinError(17,1.920259);
   hnumuCCinFV_stack_12->SetBinError(18,1.729951);
   hnumuCCinFV_stack_12->SetBinError(19,1.646211);
   hnumuCCinFV_stack_12->SetBinError(20,1.091097);
   hnumuCCinFV_stack_12->SetBinError(21,1.388299);
   hnumuCCinFV_stack_12->SetBinError(22,1.166229);
   hnumuCCinFV_stack_12->SetBinError(23,1.264127);
   hnumuCCinFV_stack_12->SetBinError(24,1.66923);
   hnumuCCinFV_stack_12->SetBinError(25,1.604967);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.5604295);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.958894);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(14,0.8260078);
   hnueCCinFV_stack_13->SetBinContent(15,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(16,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(17,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(19,0.4413551);
   hnueCCinFV_stack_13->SetBinContent(21,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.585639);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.9398632);
   hnueCCinFV_stack_13->SetBinError(2,0.4141923);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(6,0.2764757);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.4938303);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.4494399);
   hnueCCinFV_stack_13->SetBinError(14,0.419327);
   hnueCCinFV_stack_13->SetBinError(15,0.4972556);
   hnueCCinFV_stack_13->SetBinError(16,0.3025491);
   hnueCCinFV_stack_13->SetBinError(17,0.2179626);
   hnueCCinFV_stack_13->SetBinError(19,0.3141867);
   hnueCCinFV_stack_13->SetBinError(21,0.2945335);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,1.196685);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.7687429);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__8->SetBinContent(1,74.37473);
   hmcerror__8->SetBinContent(2,64.92229);
   hmcerror__8->SetBinContent(3,66.61679);
   hmcerror__8->SetBinContent(4,59.98111);
   hmcerror__8->SetBinContent(5,57.01736);
   hmcerror__8->SetBinContent(6,61.91793);
   hmcerror__8->SetBinContent(7,66.97446);
   hmcerror__8->SetBinContent(8,57.92992);
   hmcerror__8->SetBinContent(9,53.12168);
   hmcerror__8->SetBinContent(10,60.93108);
   hmcerror__8->SetBinContent(11,54.01506);
   hmcerror__8->SetBinContent(12,66.19003);
   hmcerror__8->SetBinContent(13,60.63073);
   hmcerror__8->SetBinContent(14,68.8851);
   hmcerror__8->SetBinContent(15,74.57167);
   hmcerror__8->SetBinContent(16,62.94243);
   hmcerror__8->SetBinContent(17,64.51749);
   hmcerror__8->SetBinContent(18,63.82905);
   hmcerror__8->SetBinContent(19,72.85687);
   hmcerror__8->SetBinContent(20,55.36491);
   hmcerror__8->SetBinContent(21,64.15736);
   hmcerror__8->SetBinContent(22,63.2109);
   hmcerror__8->SetBinContent(23,67.55946);
   hmcerror__8->SetBinContent(24,67.17763);
   hmcerror__8->SetBinContent(25,64.45738);
   hmcerror__8->SetBinError(1,22.32306);
   hmcerror__8->SetBinError(2,30.42);
   hmcerror__8->SetBinError(3,24.47675);
   hmcerror__8->SetBinError(4,27.0709);
   hmcerror__8->SetBinError(5,20.08993);
   hmcerror__8->SetBinError(6,19.79172);
   hmcerror__8->SetBinError(7,20.76167);
   hmcerror__8->SetBinError(8,18.57356);
   hmcerror__8->SetBinError(9,25.32029);
   hmcerror__8->SetBinError(10,22.79206);
   hmcerror__8->SetBinError(11,23.77131);
   hmcerror__8->SetBinError(12,22.22411);
   hmcerror__8->SetBinError(13,21.72952);
   hmcerror__8->SetBinError(14,21.26604);
   hmcerror__8->SetBinError(15,30.38511);
   hmcerror__8->SetBinError(16,27.39434);
   hmcerror__8->SetBinError(17,20.02577);
   hmcerror__8->SetBinError(18,20.45545);
   hmcerror__8->SetBinError(19,20.4003);
   hmcerror__8->SetBinError(20,17.39403);
   hmcerror__8->SetBinError(21,20.05128);
   hmcerror__8->SetBinError(22,19.70988);
   hmcerror__8->SetBinError(23,22.29942);
   hmcerror__8->SetBinError(24,24.65936);
   hmcerror__8->SetBinError(25,27.56525);
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3009[25] = {
   78,
   61,
   36,
   62,
   71,
   58,
   55,
   45,
   53,
   54,
   67,
   57,
   66,
   69,
   66,
   72,
   53,
   62,
   59,
   49,
   58,
   57,
   52,
   56,
   54};
   Double_t _felx3009[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3009[25] = {
   8.9562,
   7.9383,
   6.1381,
   8.0018,
   8.5518,
   7.7446,
   7.546,
   6.8416,
   7.4105,
   7.4785,
   8.3119,
   7.679,
   8.2509,
   8.4327,
   8.2509,
   8.6108,
   7.4105,
   8.0018,
   7.8097,
   7.1318,
   7.7446,
   7.679,
   7.3419,
   7.6127,
   7.4785};
   Double_t _fehx3009[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3009[25] = {
   8.7542,
   7.7354,
   5.9318,
   7.7989,
   8.3496,
   7.5415,
   7.3425,
   6.637,
   7.2068,
   7.275,
   8.1094,
   7.4757,
   8.0483,
   8.2304,
   8.0483,
   8.4085,
   7.2068,
   7.7989,
   7.6066,
   6.9277,
   7.5415,
   7.4757,
   7.1381,
   7.4094,
   7.275};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(24.17267);
   Graph_Graph3009->SetMaximum(92.44343);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.6/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3010[25] = {
   0.300143,
   0.4685601,
   0.3674261,
   0.4513237,
   0.3523477,
   0.3196443,
   0.3099938,
   0.3206211,
   0.476647,
   0.374063,
   0.4400867,
   0.3357622,
   0.3583912,
   0.3087176,
   0.4074619,
   0.4352285,
   0.3103929,
   0.3204724,
   0.2800052,
   0.3141706,
   0.3125329,
   0.3118114,
   0.330071,
   0.367077,
   0.4276507};
   Double_t _fehx3010[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3010[25] = {
   0.300143,
   0.4685601,
   0.3674261,
   0.4513237,
   0.3523477,
   0.3196443,
   0.3099938,
   0.3206211,
   0.476647,
   0.374063,
   0.4400867,
   0.3357622,
   0.3583912,
   0.3087176,
   0.4074619,
   0.4352285,
   0.3103929,
   0.3204724,
   0.2800052,
   0.3141706,
   0.3125329,
   0.3118114,
   0.330071,
   0.367077,
   0.4276507};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-3.78,3.78);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3011[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3011[25] = {
   0.195585,
   0.2076123,
   0.2158214,
   0.2296801,
   0.2052853,
   0.1674089,
   0.1767926,
   0.2076825,
   0.2315795,
   0.2066538,
   0.2370917,
   0.2105181,
   0.2000737,
   0.1915104,
   0.2071513,
   0.21661,
   0.1926558,
   0.1977951,
   0.1770979,
   0.1905285,
   0.1833568,
   0.1957405,
   0.203264,
   0.2049401,
   0.2088745};
   Double_t _fehx3011[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3011[25] = {
   0.195585,
   0.2076123,
   0.2158214,
   0.2296801,
   0.2052853,
   0.1674089,
   0.1767926,
   0.2076825,
   0.2315795,
   0.2066538,
   0.2370917,
   0.2105181,
   0.2000737,
   0.1915104,
   0.2071513,
   0.21661,
   0.1926558,
   0.1977951,
   0.1770979,
   0.1905285,
   0.1833568,
   0.1957405,
   0.203264,
   0.2049401,
   0.2088745};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-3.78,3.78);
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
   
   Double_t _fx3012[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3012[25] = {
   1.048743,
   0.9395848,
   0.5404043,
   1.033659,
   1.245235,
   0.9367238,
   0.8212085,
   0.7768007,
   0.9977094,
   0.8862473,
   1.240395,
   0.8611569,
   1.088557,
   1.001668,
   0.8850546,
   1.143902,
   0.8214827,
   0.9713446,
   0.8098069,
   0.8850371,
   0.9040273,
   0.9017432,
   0.7696923,
   0.8336109,
   0.8377628};
   Double_t _felx3012[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3012[25] = {
   0.1204199,
   0.1222739,
   0.09214043,
   0.1334053,
   0.1499859,
   0.1250785,
   0.1126698,
   0.1181013,
   0.1395005,
   0.122737,
   0.1538811,
   0.1160145,
   0.1360844,
   0.1224169,
   0.1106439,
   0.1368044,
   0.1148603,
   0.125363,
   0.1071924,
   0.1288144,
   0.1207126,
   0.1214822,
   0.1086732,
   0.113322,
   0.1160224};
   Double_t _fehx3012[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3012[25] = {
   0.117704,
   0.1191486,
   0.08904362,
   0.1300226,
   0.1464396,
   0.1217983,
   0.1096313,
   0.1145695,
   0.1356659,
   0.1193972,
   0.1501322,
   0.112943,
   0.1327429,
   0.1194801,
   0.107927,
   0.1335903,
   0.111703,
   0.1221842,
   0.1044047,
   0.125128,
   0.1175469,
   0.118266,
   0.1056566,
   0.1102956,
   0.1128653};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.3539228);
   Graph_Graph3012->SetMaximum(1.486015);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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

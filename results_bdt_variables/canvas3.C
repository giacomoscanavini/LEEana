void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Jan  2 12:47:03 2022) by ROOT version 6.24/02
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,211,1200,900);
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
   pad1->Range(-61.53846,-1.154902,451.2821,6.858555);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetLogy();
   pad1->SetLeftMargin(0.12);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hmc__7->SetBinContent(1,13575.02);
   hmc__7->SetBinContent(2,643.1637);
   hmc__7->SetBinContent(3,505.9523);
   hmc__7->SetBinContent(4,394.5724);
   hmc__7->SetBinContent(5,339.2757);
   hmc__7->SetBinContent(6,288.2625);
   hmc__7->SetBinContent(7,260.5447);
   hmc__7->SetBinContent(8,215.552);
   hmc__7->SetBinContent(9,188.165);
   hmc__7->SetBinContent(10,161.1365);
   hmc__7->SetBinContent(11,143.6915);
   hmc__7->SetBinContent(12,128.7487);
   hmc__7->SetBinContent(13,110.5638);
   hmc__7->SetBinContent(14,100.6493);
   hmc__7->SetBinContent(15,87.25952);
   hmc__7->SetBinContent(16,82.73582);
   hmc__7->SetBinContent(17,70.41875);
   hmc__7->SetBinContent(18,65.7761);
   hmc__7->SetBinContent(19,57.06198);
   hmc__7->SetBinContent(20,55.58892);
   hmc__7->SetBinContent(21,828.2329);
   hmc__7->SetBinError(1,1848.859);
   hmc__7->SetBinError(2,97.11209);
   hmc__7->SetBinError(3,74.46084);
   hmc__7->SetBinError(4,60.46334);
   hmc__7->SetBinError(5,56.34594);
   hmc__7->SetBinError(6,52.27179);
   hmc__7->SetBinError(7,45.81132);
   hmc__7->SetBinError(8,39.84225);
   hmc__7->SetBinError(9,35.30055);
   hmc__7->SetBinError(10,33.48039);
   hmc__7->SetBinError(11,27.22811);
   hmc__7->SetBinError(12,24.12267);
   hmc__7->SetBinError(13,25.21668);
   hmc__7->SetBinError(14,19.25908);
   hmc__7->SetBinError(15,17.82213);
   hmc__7->SetBinError(16,16.48752);
   hmc__7->SetBinError(17,14.92135);
   hmc__7->SetBinError(18,13.3069);
   hmc__7->SetBinError(19,12.2597);
   hmc__7->SetBinError(20,14.76807);
   hmc__7->SetBinError(21,140.2935);
   hmc__7->SetMinimum(0.07);
   hmc__7->SetMaximum(2870000);
   hmc__7->SetEntries(16299.7);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,400);
   hs3_stack_3->SetMinimum(0.0624297);
   hs3_stack_3->SetMaximum(26622.03);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hbadmatch_stack_1->SetBinContent(1,390.4837);
   hbadmatch_stack_1->SetBinContent(2,18.98695);
   hbadmatch_stack_1->SetBinContent(3,13.04424);
   hbadmatch_stack_1->SetBinContent(4,11.83006);
   hbadmatch_stack_1->SetBinContent(5,9.629171);
   hbadmatch_stack_1->SetBinContent(6,6.644403);
   hbadmatch_stack_1->SetBinContent(7,6.990873);
   hbadmatch_stack_1->SetBinContent(8,4.384997);
   hbadmatch_stack_1->SetBinContent(9,4.610148);
   hbadmatch_stack_1->SetBinContent(10,3.045912);
   hbadmatch_stack_1->SetBinContent(11,3.083941);
   hbadmatch_stack_1->SetBinContent(12,2.341654);
   hbadmatch_stack_1->SetBinContent(13,1.874023);
   hbadmatch_stack_1->SetBinContent(14,1.592182);
   hbadmatch_stack_1->SetBinContent(15,1.624387);
   hbadmatch_stack_1->SetBinContent(16,1.472742);
   hbadmatch_stack_1->SetBinContent(17,1.088353);
   hbadmatch_stack_1->SetBinContent(18,0.7702882);
   hbadmatch_stack_1->SetBinContent(19,0.7794838);
   hbadmatch_stack_1->SetBinContent(20,1.432208);
   hbadmatch_stack_1->SetBinContent(21,8.785491);
   hbadmatch_stack_1->SetBinError(1,5.619105);
   hbadmatch_stack_1->SetBinError(2,1.273888);
   hbadmatch_stack_1->SetBinError(3,0.9046077);
   hbadmatch_stack_1->SetBinError(4,1.054079);
   hbadmatch_stack_1->SetBinError(5,1.031038);
   hbadmatch_stack_1->SetBinError(6,0.6132635);
   hbadmatch_stack_1->SetBinError(7,1.312484);
   hbadmatch_stack_1->SetBinError(8,0.4927276);
   hbadmatch_stack_1->SetBinError(9,0.5825411);
   hbadmatch_stack_1->SetBinError(10,0.4267586);
   hbadmatch_stack_1->SetBinError(11,0.3993329);
   hbadmatch_stack_1->SetBinError(12,0.3977198);
   hbadmatch_stack_1->SetBinError(13,0.5167498);
   hbadmatch_stack_1->SetBinError(14,0.2992543);
   hbadmatch_stack_1->SetBinError(15,0.3752018);
   hbadmatch_stack_1->SetBinError(16,0.3941036);
   hbadmatch_stack_1->SetBinError(17,0.2444525);
   hbadmatch_stack_1->SetBinError(18,0.2040717);
   hbadmatch_stack_1->SetBinError(19,0.2118152);
   hbadmatch_stack_1->SetBinError(20,0.6251428);
   hbadmatch_stack_1->SetBinError(21,0.6838793);
   hbadmatch_stack_1->SetEntries(12603);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1452;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hext_stack_2->SetBinContent(1,1527.333);
   hext_stack_2->SetBinContent(2,104.0511);
   hext_stack_2->SetBinContent(3,80.66654);
   hext_stack_2->SetBinContent(4,61.00674);
   hext_stack_2->SetBinContent(5,43.38668);
   hext_stack_2->SetBinContent(6,30.07561);
   hext_stack_2->SetBinContent(7,27.59107);
   hext_stack_2->SetBinContent(8,21.13513);
   hext_stack_2->SetBinContent(9,19.02165);
   hext_stack_2->SetBinContent(10,17.52056);
   hext_stack_2->SetBinContent(11,15.31143);
   hext_stack_2->SetBinContent(12,12.64921);
   hext_stack_2->SetBinContent(13,11.15346);
   hext_stack_2->SetBinContent(14,10.44689);
   hext_stack_2->SetBinContent(15,8.824393);
   hext_stack_2->SetBinContent(16,9.326038);
   hext_stack_2->SetBinContent(17,4.909251);
   hext_stack_2->SetBinContent(18,7.359732);
   hext_stack_2->SetBinContent(19,5.410896);
   hext_stack_2->SetBinContent(20,6.311726);
   hext_stack_2->SetBinContent(21,135.4335);
   hext_stack_2->SetBinError(1,15.9909);
   hext_stack_2->SetBinError(2,4.187871);
   hext_stack_2->SetBinError(3,3.686164);
   hext_stack_2->SetBinError(4,3.229681);
   hext_stack_2->SetBinError(5,2.7016);
   hext_stack_2->SetBinError(6,2.211834);
   hext_stack_2->SetBinError(7,2.1535);
   hext_stack_2->SetBinError(8,1.863916);
   hext_stack_2->SetBinError(9,1.785113);
   hext_stack_2->SetBinError(10,1.715786);
   hext_stack_2->SetBinError(11,1.606355);
   hext_stack_2->SetBinError(12,1.448823);
   hext_stack_2->SetBinError(13,1.376176);
   hext_stack_2->SetBinError(14,1.303155);
   hext_stack_2->SetBinError(15,1.205832);
   hext_stack_2->SetBinError(16,1.253939);
   hext_stack_2->SetBinError(17,0.877761);
   hext_stack_2->SetBinError(18,1.100803);
   hext_stack_2->SetBinError(19,0.9427598);
   hext_stack_2->SetBinError(20,1.042498);
   hext_stack_2->SetBinError(21,4.761388);
   hext_stack_2->SetEntries(39405);

   ci = 1453;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hdirt_stack_3->SetBinContent(1,515.7665);
   hdirt_stack_3->SetBinContent(2,20.22279);
   hdirt_stack_3->SetBinContent(3,14.13472);
   hdirt_stack_3->SetBinContent(4,10.98428);
   hdirt_stack_3->SetBinContent(5,6.682651);
   hdirt_stack_3->SetBinContent(6,6.080766);
   hdirt_stack_3->SetBinContent(7,4.616341);
   hdirt_stack_3->SetBinContent(8,3.412039);
   hdirt_stack_3->SetBinContent(9,2.91175);
   hdirt_stack_3->SetBinContent(10,2.016034);
   hdirt_stack_3->SetBinContent(11,2.047832);
   hdirt_stack_3->SetBinContent(12,1.890433);
   hdirt_stack_3->SetBinContent(13,1.28819);
   hdirt_stack_3->SetBinContent(14,1.015911);
   hdirt_stack_3->SetBinContent(15,0.9982409);
   hdirt_stack_3->SetBinContent(16,0.5711116);
   hdirt_stack_3->SetBinContent(17,0.6524332);
   hdirt_stack_3->SetBinContent(18,0.3707906);
   hdirt_stack_3->SetBinContent(19,0.3706648);
   hdirt_stack_3->SetBinContent(20,0.7418841);
   hdirt_stack_3->SetBinContent(21,7.730781);
   hdirt_stack_3->SetBinError(1,5.794581);
   hdirt_stack_3->SetBinError(2,1.136997);
   hdirt_stack_3->SetBinError(3,1.206772);
   hdirt_stack_3->SetBinError(4,0.9898528);
   hdirt_stack_3->SetBinError(5,0.6995148);
   hdirt_stack_3->SetBinError(6,0.6317369);
   hdirt_stack_3->SetBinError(7,0.5335561);
   hdirt_stack_3->SetBinError(8,0.5334459);
   hdirt_stack_3->SetBinError(9,0.3867642);
   hdirt_stack_3->SetBinError(10,0.2747039);
   hdirt_stack_3->SetBinError(11,0.3774191);
   hdirt_stack_3->SetBinError(12,0.3383831);
   hdirt_stack_3->SetBinError(13,0.236824);
   hdirt_stack_3->SetBinError(14,0.205129);
   hdirt_stack_3->SetBinError(15,0.1988446);
   hdirt_stack_3->SetBinError(16,0.1523555);
   hdirt_stack_3->SetBinError(17,0.1762211);
   hdirt_stack_3->SetBinError(18,0.1147772);
   hdirt_stack_3->SetBinError(19,0.1120949);
   hdirt_stack_3->SetBinError(20,0.2782943);
   hdirt_stack_3->SetBinError(21,0.6446581);
   hdirt_stack_3->SetEntries(20777);

   ci = 1454;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   houtFV_stack_4->SetBinContent(1,684.3409);
   houtFV_stack_4->SetBinContent(2,45.11974);
   houtFV_stack_4->SetBinContent(3,32.72435);
   houtFV_stack_4->SetBinContent(4,29.66152);
   houtFV_stack_4->SetBinContent(5,28.24174);
   houtFV_stack_4->SetBinContent(6,25.15283);
   houtFV_stack_4->SetBinContent(7,20.64155);
   houtFV_stack_4->SetBinContent(8,18.69168);
   houtFV_stack_4->SetBinContent(9,18.0673);
   houtFV_stack_4->SetBinContent(10,13.83509);
   houtFV_stack_4->SetBinContent(11,10.26762);
   houtFV_stack_4->SetBinContent(12,9.670553);
   houtFV_stack_4->SetBinContent(13,9.224608);
   houtFV_stack_4->SetBinContent(14,8.268188);
   houtFV_stack_4->SetBinContent(15,6.996323);
   houtFV_stack_4->SetBinContent(16,6.911819);
   houtFV_stack_4->SetBinContent(17,5.362058);
   houtFV_stack_4->SetBinContent(18,4.990651);
   houtFV_stack_4->SetBinContent(19,4.177193);
   houtFV_stack_4->SetBinContent(20,4.69777);
   houtFV_stack_4->SetBinContent(21,49.3679);
   houtFV_stack_4->SetBinError(1,7.631443);
   houtFV_stack_4->SetBinError(2,1.749998);
   houtFV_stack_4->SetBinError(3,1.361078);
   houtFV_stack_4->SetBinError(4,1.360498);
   houtFV_stack_4->SetBinError(5,1.434606);
   houtFV_stack_4->SetBinError(6,1.191733);
   houtFV_stack_4->SetBinError(7,1.062586);
   houtFV_stack_4->SetBinError(8,1.012624);
   houtFV_stack_4->SetBinError(9,1.0718);
   houtFV_stack_4->SetBinError(10,0.8641158);
   houtFV_stack_4->SetBinError(11,0.7368857);
   houtFV_stack_4->SetBinError(12,0.723692);
   houtFV_stack_4->SetBinError(13,0.699645);
   houtFV_stack_4->SetBinError(14,0.6885374);
   houtFV_stack_4->SetBinError(15,0.7021709);
   houtFV_stack_4->SetBinError(16,0.8799318);
   houtFV_stack_4->SetBinError(17,0.5247839);
   houtFV_stack_4->SetBinError(18,0.5220361);
   houtFV_stack_4->SetBinError(19,0.4662383);
   houtFV_stack_4->SetBinError(20,0.5026291);
   houtFV_stack_4->SetBinError(21,1.892185);
   houtFV_stack_4->SetEntries(25890);

   ci = 1455;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,131.051);
   hNCpi0inFV_stack_5->SetBinContent(2,34.09383);
   hNCpi0inFV_stack_5->SetBinContent(3,38.32714);
   hNCpi0inFV_stack_5->SetBinContent(4,40.67322);
   hNCpi0inFV_stack_5->SetBinContent(5,43.71383);
   hNCpi0inFV_stack_5->SetBinContent(6,39.18289);
   hNCpi0inFV_stack_5->SetBinContent(7,39.93633);
   hNCpi0inFV_stack_5->SetBinContent(8,32.93965);
   hNCpi0inFV_stack_5->SetBinContent(9,29.63653);
   hNCpi0inFV_stack_5->SetBinContent(10,26.85981);
   hNCpi0inFV_stack_5->SetBinContent(11,22.16542);
   hNCpi0inFV_stack_5->SetBinContent(12,19.62228);
   hNCpi0inFV_stack_5->SetBinContent(13,15.44582);
   hNCpi0inFV_stack_5->SetBinContent(14,15.97559);
   hNCpi0inFV_stack_5->SetBinContent(15,12.95589);
   hNCpi0inFV_stack_5->SetBinContent(16,11.68819);
   hNCpi0inFV_stack_5->SetBinContent(17,10.98909);
   hNCpi0inFV_stack_5->SetBinContent(18,9.25771);
   hNCpi0inFV_stack_5->SetBinContent(19,8.37886);
   hNCpi0inFV_stack_5->SetBinContent(20,7.373348);
   hNCpi0inFV_stack_5->SetBinContent(21,72.30361);
   hNCpi0inFV_stack_5->SetBinError(1,2.642512);
   hNCpi0inFV_stack_5->SetBinError(2,1.339945);
   hNCpi0inFV_stack_5->SetBinError(3,1.431007);
   hNCpi0inFV_stack_5->SetBinError(4,1.476789);
   hNCpi0inFV_stack_5->SetBinError(5,1.519798);
   hNCpi0inFV_stack_5->SetBinError(6,1.446826);
   hNCpi0inFV_stack_5->SetBinError(7,1.45512);
   hNCpi0inFV_stack_5->SetBinError(8,1.316674);
   hNCpi0inFV_stack_5->SetBinError(9,1.248951);
   hNCpi0inFV_stack_5->SetBinError(10,1.189345);
   hNCpi0inFV_stack_5->SetBinError(11,1.090752);
   hNCpi0inFV_stack_5->SetBinError(12,1.021027);
   hNCpi0inFV_stack_5->SetBinError(13,0.9029796);
   hNCpi0inFV_stack_5->SetBinError(14,0.9244383);
   hNCpi0inFV_stack_5->SetBinError(15,0.8303265);
   hNCpi0inFV_stack_5->SetBinError(16,0.7913207);
   hNCpi0inFV_stack_5->SetBinError(17,0.7647507);
   hNCpi0inFV_stack_5->SetBinError(18,0.7035616);
   hNCpi0inFV_stack_5->SetBinError(19,0.6676061);
   hNCpi0inFV_stack_5->SetBinError(20,0.6280322);
   hNCpi0inFV_stack_5->SetBinError(21,1.947697);
   hNCpi0inFV_stack_5->SetEntries(17646);

   ci = 1456;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,223.9193);
   hCCpi0inFV_stack_6->SetBinContent(2,65.58836);
   hCCpi0inFV_stack_6->SetBinContent(3,80.59494);
   hCCpi0inFV_stack_6->SetBinContent(4,81.9043);
   hCCpi0inFV_stack_6->SetBinContent(5,78.88383);
   hCCpi0inFV_stack_6->SetBinContent(6,77.47968);
   hCCpi0inFV_stack_6->SetBinContent(7,71.2632);
   hCCpi0inFV_stack_6->SetBinContent(8,64.49199);
   hCCpi0inFV_stack_6->SetBinContent(9,54.68423);
   hCCpi0inFV_stack_6->SetBinContent(10,47.68607);
   hCCpi0inFV_stack_6->SetBinContent(11,42.41753);
   hCCpi0inFV_stack_6->SetBinContent(12,41.64676);
   hCCpi0inFV_stack_6->SetBinContent(13,35.14131);
   hCCpi0inFV_stack_6->SetBinContent(14,29.69986);
   hCCpi0inFV_stack_6->SetBinContent(15,25.28454);
   hCCpi0inFV_stack_6->SetBinContent(16,25.47934);
   hCCpi0inFV_stack_6->SetBinContent(17,24.09999);
   hCCpi0inFV_stack_6->SetBinContent(18,20.46802);
   hCCpi0inFV_stack_6->SetBinContent(19,18.05068);
   hCCpi0inFV_stack_6->SetBinContent(20,16.21983);
   hCCpi0inFV_stack_6->SetBinContent(21,243.651);
   hCCpi0inFV_stack_6->SetBinError(1,3.464775);
   hCCpi0inFV_stack_6->SetBinError(2,1.866305);
   hCCpi0inFV_stack_6->SetBinError(3,2.082071);
   hCCpi0inFV_stack_6->SetBinError(4,2.084316);
   hCCpi0inFV_stack_6->SetBinError(5,2.046436);
   hCCpi0inFV_stack_6->SetBinError(6,2.028673);
   hCCpi0inFV_stack_6->SetBinError(7,1.94636);
   hCCpi0inFV_stack_6->SetBinError(8,1.855591);
   hCCpi0inFV_stack_6->SetBinError(9,1.695499);
   hCCpi0inFV_stack_6->SetBinError(10,1.586471);
   hCCpi0inFV_stack_6->SetBinError(11,1.505815);
   hCCpi0inFV_stack_6->SetBinError(12,1.489919);
   hCCpi0inFV_stack_6->SetBinError(13,1.374648);
   hCCpi0inFV_stack_6->SetBinError(14,1.253355);
   hCCpi0inFV_stack_6->SetBinError(15,1.16086);
   hCCpi0inFV_stack_6->SetBinError(16,1.164199);
   hCCpi0inFV_stack_6->SetBinError(17,1.140992);
   hCCpi0inFV_stack_6->SetBinError(18,1.042674);
   hCCpi0inFV_stack_6->SetBinError(19,0.9848919);
   hCCpi0inFV_stack_6->SetBinError(20,0.933706);
   hCCpi0inFV_stack_6->SetBinError(21,3.589992);
   hCCpi0inFV_stack_6->SetEntries(36558);

   ci = 1457;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hNCinFV_stack_7->SetBinContent(1,948.5853);
   hNCinFV_stack_7->SetBinContent(2,27.41145);
   hNCinFV_stack_7->SetBinContent(3,19.28625);
   hNCinFV_stack_7->SetBinContent(4,13.8502);
   hNCinFV_stack_7->SetBinContent(5,12.92061);
   hNCinFV_stack_7->SetBinContent(6,12.00519);
   hNCinFV_stack_7->SetBinContent(7,11.54589);
   hNCinFV_stack_7->SetBinContent(8,10.36902);
   hNCinFV_stack_7->SetBinContent(9,9.099614);
   hNCinFV_stack_7->SetBinContent(10,6.320448);
   hNCinFV_stack_7->SetBinContent(11,5.842238);
   hNCinFV_stack_7->SetBinContent(12,4.452991);
   hNCinFV_stack_7->SetBinContent(13,3.8272);
   hNCinFV_stack_7->SetBinContent(14,3.863353);
   hNCinFV_stack_7->SetBinContent(15,3.734915);
   hNCinFV_stack_7->SetBinContent(16,2.906246);
   hNCinFV_stack_7->SetBinContent(17,2.320117);
   hNCinFV_stack_7->SetBinContent(18,1.629114);
   hNCinFV_stack_7->SetBinContent(19,1.931333);
   hNCinFV_stack_7->SetBinContent(20,1.902923);
   hNCinFV_stack_7->SetBinContent(21,19.39417);
   hNCinFV_stack_7->SetBinError(1,7.078538);
   hNCinFV_stack_7->SetBinError(2,1.211534);
   hNCinFV_stack_7->SetBinError(3,1.01311);
   hNCinFV_stack_7->SetBinError(4,0.8614264);
   hNCinFV_stack_7->SetBinError(5,0.8222169);
   hNCinFV_stack_7->SetBinError(6,0.7938526);
   hNCinFV_stack_7->SetBinError(7,0.7826808);
   hNCinFV_stack_7->SetBinError(8,0.7379326);
   hNCinFV_stack_7->SetBinError(9,0.6948977);
   hNCinFV_stack_7->SetBinError(10,0.5778224);
   hNCinFV_stack_7->SetBinError(11,0.5542252);
   hNCinFV_stack_7->SetBinError(12,0.4832109);
   hNCinFV_stack_7->SetBinError(13,0.4461025);
   hNCinFV_stack_7->SetBinError(14,0.4480404);
   hNCinFV_stack_7->SetBinError(15,0.4480758);
   hNCinFV_stack_7->SetBinError(16,0.3859762);
   hNCinFV_stack_7->SetBinError(17,0.3560515);
   hNCinFV_stack_7->SetBinError(18,0.2822774);
   hNCinFV_stack_7->SetBinError(19,0.3181226);
   hNCinFV_stack_7->SetBinError(20,0.3221528);
   hNCinFV_stack_7->SetBinError(21,1.010882);
   hNCinFV_stack_7->SetEntries(30215);

   ci = 1458;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,9126.754);
   hnumuCCinFV_stack_8->SetBinContent(2,326.4552);
   hnumuCCinFV_stack_8->SetBinContent(3,226.2964);
   hnumuCCinFV_stack_8->SetBinContent(4,143.9548);
   hnumuCCinFV_stack_8->SetBinContent(5,115.3013);
   hnumuCCinFV_stack_8->SetBinContent(6,90.94981);
   hnumuCCinFV_stack_8->SetBinContent(7,77.32739);
   hnumuCCinFV_stack_8->SetBinContent(8,59.28495);
   hnumuCCinFV_stack_8->SetBinContent(9,49.7258);
   hnumuCCinFV_stack_8->SetBinContent(10,42.47455);
   hnumuCCinFV_stack_8->SetBinContent(11,41.71715);
   hnumuCCinFV_stack_8->SetBinContent(12,36.05714);
   hnumuCCinFV_stack_8->SetBinContent(13,31.92572);
   hnumuCCinFV_stack_8->SetBinContent(14,28.67138);
   hnumuCCinFV_stack_8->SetBinContent(15,26.46463);
   hnumuCCinFV_stack_8->SetBinContent(16,23.88728);
   hnumuCCinFV_stack_8->SetBinContent(17,20.22764);
   hnumuCCinFV_stack_8->SetBinContent(18,20.27651);
   hnumuCCinFV_stack_8->SetBinContent(19,17.17459);
   hnumuCCinFV_stack_8->SetBinContent(20,16.04603);
   hnumuCCinFV_stack_8->SetBinContent(21,250.5386);
   hnumuCCinFV_stack_8->SetBinError(1,31.41667);
   hnumuCCinFV_stack_8->SetBinError(2,5.594767);
   hnumuCCinFV_stack_8->SetBinError(3,4.594776);
   hnumuCCinFV_stack_8->SetBinError(4,3.618918);
   hnumuCCinFV_stack_8->SetBinError(5,3.164545);
   hnumuCCinFV_stack_8->SetBinError(6,2.581351);
   hnumuCCinFV_stack_8->SetBinError(7,2.469817);
   hnumuCCinFV_stack_8->SetBinError(8,2.137385);
   hnumuCCinFV_stack_8->SetBinError(9,1.869601);
   hnumuCCinFV_stack_8->SetBinError(10,1.716244);
   hnumuCCinFV_stack_8->SetBinError(11,2.006814);
   hnumuCCinFV_stack_8->SetBinError(12,1.653502);
   hnumuCCinFV_stack_8->SetBinError(13,1.600782);
   hnumuCCinFV_stack_8->SetBinError(14,1.417393);
   hnumuCCinFV_stack_8->SetBinError(15,1.386718);
   hnumuCCinFV_stack_8->SetBinError(16,1.338011);
   hnumuCCinFV_stack_8->SetBinError(17,1.27081);
   hnumuCCinFV_stack_8->SetBinError(18,1.106577);
   hnumuCCinFV_stack_8->SetBinError(19,1.134453);
   hnumuCCinFV_stack_8->SetBinError(20,1.099553);
   hnumuCCinFV_stack_8->SetBinError(21,4.729647);
   hnumuCCinFV_stack_8->SetEntries(241430);

   ci = 1459;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,26.79132);
   hnueCCinFV_stack_9->SetBinContent(2,1.234279);
   hnueCCinFV_stack_9->SetBinContent(3,0.8776875);
   hnueCCinFV_stack_9->SetBinContent(4,0.7073026);
   hnueCCinFV_stack_9->SetBinContent(5,0.5159277);
   hnueCCinFV_stack_9->SetBinContent(6,0.6913578);
   hnueCCinFV_stack_9->SetBinContent(7,0.6320795);
   hnueCCinFV_stack_9->SetBinContent(8,0.8425642);
   hnueCCinFV_stack_9->SetBinContent(9,0.4079864);
   hnueCCinFV_stack_9->SetBinContent(10,1.37801);
   hnueCCinFV_stack_9->SetBinContent(11,0.8383743);
   hnueCCinFV_stack_9->SetBinContent(12,0.417689);
   hnueCCinFV_stack_9->SetBinContent(13,0.6834666);
   hnueCCinFV_stack_9->SetBinContent(14,1.115899);
   hnueCCinFV_stack_9->SetBinContent(15,0.3762076);
   hnueCCinFV_stack_9->SetBinContent(16,0.4930502);
   hnueCCinFV_stack_9->SetBinContent(17,0.769808);
   hnueCCinFV_stack_9->SetBinContent(18,0.653289);
   hnueCCinFV_stack_9->SetBinContent(19,0.7882792);
   hnueCCinFV_stack_9->SetBinContent(20,0.8631946);
   hnueCCinFV_stack_9->SetBinContent(21,41.02775);
   hnueCCinFV_stack_9->SetBinError(1,1.674133);
   hnueCCinFV_stack_9->SetBinError(2,0.2687455);
   hnueCCinFV_stack_9->SetBinError(3,0.2182261);
   hnueCCinFV_stack_9->SetBinError(4,0.2149128);
   hnueCCinFV_stack_9->SetBinError(5,0.1814853);
   hnueCCinFV_stack_9->SetBinError(6,0.2075241);
   hnueCCinFV_stack_9->SetBinError(7,0.1868117);
   hnueCCinFV_stack_9->SetBinError(8,0.2305588);
   hnueCCinFV_stack_9->SetBinError(9,0.1254256);
   hnueCCinFV_stack_9->SetBinError(10,0.3128458);
   hnueCCinFV_stack_9->SetBinError(11,0.2055013);
   hnueCCinFV_stack_9->SetBinError(12,0.1478012);
   hnueCCinFV_stack_9->SetBinError(13,0.2299265);
   hnueCCinFV_stack_9->SetBinError(14,0.2717447);
   hnueCCinFV_stack_9->SetBinError(15,0.1401707);
   hnueCCinFV_stack_9->SetBinError(16,0.1461877);
   hnueCCinFV_stack_9->SetBinError(17,0.2428355);
   hnueCCinFV_stack_9->SetBinError(18,0.1984946);
   hnueCCinFV_stack_9->SetBinError(19,0.2151819);
   hnueCCinFV_stack_9->SetBinError(20,0.2237232);
   hnueCCinFV_stack_9->SetBinError(21,1.909048);
   hnueCCinFV_stack_9->SetEntries(1998);

   ci = 1460;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_9,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);
   hmcerror__8->SetBinContent(1,13575.02);
   hmcerror__8->SetBinContent(2,643.1637);
   hmcerror__8->SetBinContent(3,505.9523);
   hmcerror__8->SetBinContent(4,394.5724);
   hmcerror__8->SetBinContent(5,339.2757);
   hmcerror__8->SetBinContent(6,288.2625);
   hmcerror__8->SetBinContent(7,260.5447);
   hmcerror__8->SetBinContent(8,215.552);
   hmcerror__8->SetBinContent(9,188.165);
   hmcerror__8->SetBinContent(10,161.1365);
   hmcerror__8->SetBinContent(11,143.6915);
   hmcerror__8->SetBinContent(12,128.7487);
   hmcerror__8->SetBinContent(13,110.5638);
   hmcerror__8->SetBinContent(14,100.6493);
   hmcerror__8->SetBinContent(15,87.25952);
   hmcerror__8->SetBinContent(16,82.73582);
   hmcerror__8->SetBinContent(17,70.41875);
   hmcerror__8->SetBinContent(18,65.7761);
   hmcerror__8->SetBinContent(19,57.06198);
   hmcerror__8->SetBinContent(20,55.58892);
   hmcerror__8->SetBinContent(21,828.2329);
   hmcerror__8->SetBinError(1,1848.859);
   hmcerror__8->SetBinError(2,97.11209);
   hmcerror__8->SetBinError(3,74.46084);
   hmcerror__8->SetBinError(4,60.46334);
   hmcerror__8->SetBinError(5,56.34594);
   hmcerror__8->SetBinError(6,52.27179);
   hmcerror__8->SetBinError(7,45.81132);
   hmcerror__8->SetBinError(8,39.84225);
   hmcerror__8->SetBinError(9,35.30055);
   hmcerror__8->SetBinError(10,33.48039);
   hmcerror__8->SetBinError(11,27.22811);
   hmcerror__8->SetBinError(12,24.12267);
   hmcerror__8->SetBinError(13,25.21668);
   hmcerror__8->SetBinError(14,19.25908);
   hmcerror__8->SetBinError(15,17.82213);
   hmcerror__8->SetBinError(16,16.48752);
   hmcerror__8->SetBinError(17,14.92135);
   hmcerror__8->SetBinError(18,13.3069);
   hmcerror__8->SetBinError(19,12.2597);
   hmcerror__8->SetBinError(20,14.76807);
   hmcerror__8->SetBinError(21,140.2935);
   hmcerror__8->SetEntries(16299.7);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3009[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3009[20] = {
   14350,
   708,
   539,
   381,
   323,
   282,
   255,
   203,
   151,
   175,
   133,
   126,
   99,
   78,
   82,
   67,
   60,
   49,
   67,
   56};
   Double_t _felx3009[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3009[20] = {
   119.7915,
   26.60827,
   23.21637,
   19.51922,
   17.9722,
   16.79286,
   15.96872,
   14.24781,
   12.28821,
   13.22876,
   11.53256,
   11.22497,
   10.0712,
   8.9562,
   9.1791,
   8.3119,
   7.8743,
   7.1318,
   8.3119,
   7.6127};
   Double_t _fehx3009[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3009[20] = {
   119.7915,
   26.60827,
   23.21637,
   19.51922,
   17.9722,
   16.79286,
   15.96872,
   14.24781,
   12.28821,
   13.22876,
   11.53256,
   11.22497,
   9.87,
   8.7542,
   8.9774,
   8.1094,
   7.6713,
   6.9277,
   8.1094,
   7.4094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,440);
   Graph_Graph3009->SetMinimum(37.68138);
   Graph_Graph3009->SetMaximum(15912.58);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.04#pm0.01(data err)#pm0.14(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.11/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18184.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 485.7","F");

   ci = 1452;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 2023.5","F");

   ci = 1453;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 596.8","F");

   ci = 1454;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 987.0","F");

   ci = 1455;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  590.3","F");

   ci = 1456;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1125.0","F");

   ci = 1457;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1103.8","F");

   ci = 1458;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10521.0","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 41.1","F");

   ci = 1460;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("generic2_bnb_14_kine_pio_energy_1_all");
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
   
   Double_t _fx3010[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3010[20] = {
   0.1361956,
   0.1509912,
   0.1471697,
   0.1532376,
   0.1660772,
   0.181334,
   0.175829,
   0.1848382,
   0.1876042,
   0.2077766,
   0.18949,
   0.1873624,
   0.2280735,
   0.1913484,
   0.2042428,
   0.1992791,
   0.2118946,
   0.202306,
   0.2148489,
   0.2656657};
   Double_t _fehx3010[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3010[20] = {
   0.1361956,
   0.1509912,
   0.1471697,
   0.1532376,
   0.1660772,
   0.181334,
   0.175829,
   0.1848382,
   0.1876042,
   0.2077766,
   0.18949,
   0.1873624,
   0.2280735,
   0.1913484,
   0.2042428,
   0.1992791,
   0.2118946,
   0.202306,
   0.2148489,
   0.2656657};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   Graph_Graph3010->GetXaxis()->SetTitle("Reco neutrino energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3011[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3011[20] = {
   0.1344044,
   0.1336745,
   0.1369555,
   0.1440512,
   0.1540555,
   0.1602777,
   0.166844,
   0.1720218,
   0.1717842,
   0.1734765,
   0.1698732,
   0.1689282,
   0.170312,
   0.1715339,
   0.1713137,
   0.1676976,
   0.1719941,
   0.1702003,
   0.1688379,
   0.1665725};
   Double_t _fehx3011[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3011[20] = {
   0.1344044,
   0.1336745,
   0.1369555,
   0.1440512,
   0.1540555,
   0.1602777,
   0.166844,
   0.1720218,
   0.1717842,
   0.1734765,
   0.1698732,
   0.1689282,
   0.170312,
   0.1715339,
   0.1713137,
   0.1676976,
   0.1719941,
   0.1702003,
   0.1688379,
   0.1665725};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3012[20] = {
   1.057088,
   1.100808,
   1.065318,
   0.9656021,
   0.9520281,
   0.9782749,
   0.9787187,
   0.9417681,
   0.8024872,
   1.086036,
   0.9255938,
   0.9786506,
   0.8954106,
   0.7749685,
   0.9397255,
   0.8098064,
   0.8520458,
   0.7449514,
   1.174162,
   1.007395};
   Double_t _felx3012[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3012[20] = {
   0.008824403,
   0.04137091,
   0.04588649,
   0.0494693,
   0.05297226,
   0.05825542,
   0.06128974,
   0.06609916,
   0.06530548,
   0.08209659,
   0.08025916,
   0.08718513,
   0.09108949,
   0.08898427,
   0.1051931,
   0.1004631,
   0.1118211,
   0.1084254,
   0.1456644,
   0.1369464};
   Double_t _fehx3012[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3012[20] = {
   0.008824403,
   0.04137091,
   0.04588649,
   0.0494693,
   0.05297226,
   0.05825542,
   0.06128974,
   0.06609916,
   0.06530548,
   0.08209659,
   0.08025916,
   0.08718513,
   0.08926973,
   0.0869773,
   0.1028816,
   0.09801558,
   0.1089383,
   0.1053224,
   0.1421156,
   0.1332892};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,440);
   Graph_Graph3012->SetMinimum(0.5685509);
   Graph_Graph3012->SetMaximum(1.384253);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic2_bnb_14_kine_pio_energy_1_all",20,0,400);

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
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

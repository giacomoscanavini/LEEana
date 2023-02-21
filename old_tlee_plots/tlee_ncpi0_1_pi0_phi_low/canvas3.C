#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 23:52:13 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
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
   pad1->Range(-4.119231,-1.6,3.957692,176.9263);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__7->SetBinContent(1,68.12611);
   hmc__7->SetBinContent(2,59.43349);
   hmc__7->SetBinContent(3,67.13453);
   hmc__7->SetBinContent(4,63.6899);
   hmc__7->SetBinContent(5,60.41949);
   hmc__7->SetBinContent(6,62.78009);
   hmc__7->SetBinContent(7,71.47233);
   hmc__7->SetBinContent(8,54.87116);
   hmc__7->SetBinContent(9,56.08661);
   hmc__7->SetBinContent(10,59.21044);
   hmc__7->SetBinContent(11,65.87334);
   hmc__7->SetBinContent(12,62.50368);
   hmc__7->SetBinContent(13,67.33337);
   hmc__7->SetBinContent(14,61.13194);
   hmc__7->SetBinContent(15,59.97468);
   hmc__7->SetBinContent(16,61.63852);
   hmc__7->SetBinContent(17,62.51752);
   hmc__7->SetBinContent(18,64.71152);
   hmc__7->SetBinContent(19,64.60975);
   hmc__7->SetBinContent(20,70.47973);
   hmc__7->SetBinContent(21,61.88318);
   hmc__7->SetBinContent(22,62.47666);
   hmc__7->SetBinContent(23,60.00977);
   hmc__7->SetBinContent(24,74.91299);
   hmc__7->SetBinContent(25,70.87262);
   hmc__7->SetBinError(1,24.57488);
   hmc__7->SetBinError(2,20.51272);
   hmc__7->SetBinError(3,20.11604);
   hmc__7->SetBinError(4,18.25111);
   hmc__7->SetBinError(5,17.78171);
   hmc__7->SetBinError(6,19.23158);
   hmc__7->SetBinError(7,28.28682);
   hmc__7->SetBinError(8,19.93046);
   hmc__7->SetBinError(9,20.72733);
   hmc__7->SetBinError(10,21.3381);
   hmc__7->SetBinError(11,22.28185);
   hmc__7->SetBinError(12,20.22041);
   hmc__7->SetBinError(13,22.68305);
   hmc__7->SetBinError(14,21.89403);
   hmc__7->SetBinError(15,18.44529);
   hmc__7->SetBinError(16,18.20171);
   hmc__7->SetBinError(17,20.3325);
   hmc__7->SetBinError(18,22.04348);
   hmc__7->SetBinError(19,21.46591);
   hmc__7->SetBinError(20,20.41848);
   hmc__7->SetBinError(21,19.76397);
   hmc__7->SetBinError(22,25.76376);
   hmc__7->SetBinError(23,24.43842);
   hmc__7->SetBinError(24,25.37665);
   hmc__7->SetBinError(25,22.34904);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-1.6);
   hmc__7->SetMaximum(168);
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
   hs3_stack_3->SetMinimum(-1.337066e-08);
   hs3_stack_3->SetMaximum(78.65864);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.891898);
   hbadmatch_stack_1->SetBinContent(2,3.409295);
   hbadmatch_stack_1->SetBinContent(3,3.061834);
   hbadmatch_stack_1->SetBinContent(4,2.473929);
   hbadmatch_stack_1->SetBinContent(5,2.116395);
   hbadmatch_stack_1->SetBinContent(6,3.572384);
   hbadmatch_stack_1->SetBinContent(7,2.130717);
   hbadmatch_stack_1->SetBinContent(8,1.574398);
   hbadmatch_stack_1->SetBinContent(9,2.690115);
   hbadmatch_stack_1->SetBinContent(10,1.158948);
   hbadmatch_stack_1->SetBinContent(11,2.867147);
   hbadmatch_stack_1->SetBinContent(12,0.961838);
   hbadmatch_stack_1->SetBinContent(13,1.080289);
   hbadmatch_stack_1->SetBinContent(14,3.069073);
   hbadmatch_stack_1->SetBinContent(15,2.200526);
   hbadmatch_stack_1->SetBinContent(16,2.161055);
   hbadmatch_stack_1->SetBinContent(17,0.9845097);
   hbadmatch_stack_1->SetBinContent(18,2.697038);
   hbadmatch_stack_1->SetBinContent(19,2.22888);
   hbadmatch_stack_1->SetBinContent(20,3.4175);
   hbadmatch_stack_1->SetBinContent(21,1.75272);
   hbadmatch_stack_1->SetBinContent(22,1.683501);
   hbadmatch_stack_1->SetBinContent(23,0.9269427);
   hbadmatch_stack_1->SetBinContent(24,1.535674);
   hbadmatch_stack_1->SetBinContent(25,2.382557);
   hbadmatch_stack_1->SetBinError(1,0.6696925);
   hbadmatch_stack_1->SetBinError(2,1.044136);
   hbadmatch_stack_1->SetBinError(3,0.9222113);
   hbadmatch_stack_1->SetBinError(4,0.8295528);
   hbadmatch_stack_1->SetBinError(5,0.7109806);
   hbadmatch_stack_1->SetBinError(6,1.050075);
   hbadmatch_stack_1->SetBinError(7,0.7360293);
   hbadmatch_stack_1->SetBinError(8,0.6343767);
   hbadmatch_stack_1->SetBinError(9,0.9607309);
   hbadmatch_stack_1->SetBinError(10,0.5256898);
   hbadmatch_stack_1->SetBinError(11,1.265753);
   hbadmatch_stack_1->SetBinError(12,0.4404228);
   hbadmatch_stack_1->SetBinError(13,0.4442752);
   hbadmatch_stack_1->SetBinError(14,0.9231991);
   hbadmatch_stack_1->SetBinError(15,0.8543079);
   hbadmatch_stack_1->SetBinError(16,0.7974967);
   hbadmatch_stack_1->SetBinError(17,0.4739327);
   hbadmatch_stack_1->SetBinError(18,0.9025325);
   hbadmatch_stack_1->SetBinError(19,0.8707791);
   hbadmatch_stack_1->SetBinError(20,1.090771);
   hbadmatch_stack_1->SetBinError(21,0.6983397);
   hbadmatch_stack_1->SetBinError(22,0.6960937);
   hbadmatch_stack_1->SetBinError(23,0.4800908);
   hbadmatch_stack_1->SetBinError(24,0.5763747);
   hbadmatch_stack_1->SetBinError(25,0.901087);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.407382);
   hext_stack_2->SetBinContent(2,11.38307);
   hext_stack_2->SetBinContent(3,9.697655);
   hext_stack_2->SetBinContent(4,12.1472);
   hext_stack_2->SetBinContent(5,17.83953);
   hext_stack_2->SetBinContent(6,14.44834);
   hext_stack_2->SetBinContent(7,23.13249);
   hext_stack_2->SetBinContent(8,12.73256);
   hext_stack_2->SetBinContent(9,9.963029);
   hext_stack_2->SetBinContent(10,10.84961);
   hext_stack_2->SetBinContent(11,11.53312);
   hext_stack_2->SetBinContent(12,8.477858);
   hext_stack_2->SetBinContent(13,6.400202);
   hext_stack_2->SetBinContent(14,8.477858);
   hext_stack_2->SetBinContent(15,7.511847);
   hext_stack_2->SetBinContent(16,15.30778);
   hext_stack_2->SetBinContent(17,7.829063);
   hext_stack_2->SetBinContent(18,13.18823);
   hext_stack_2->SetBinContent(19,16.22472);
   hext_stack_2->SetBinContent(20,19.4372);
   hext_stack_2->SetBinContent(21,10.82807);
   hext_stack_2->SetBinContent(22,5.765768);
   hext_stack_2->SetBinContent(23,5.579823);
   hext_stack_2->SetBinContent(24,11.79685);
   hext_stack_2->SetBinContent(25,10.62618);
   hext_stack_2->SetBinError(1,1.5862);
   hext_stack_2->SetBinError(2,2.342648);
   hext_stack_2->SetBinError(3,2.15278);
   hext_stack_2->SetBinError(4,2.255853);
   hext_stack_2->SetBinError(5,2.955301);
   hext_stack_2->SetBinError(6,2.343534);
   hext_stack_2->SetBinError(7,3.268302);
   hext_stack_2->SetBinError(8,2.229792);
   hext_stack_2->SetBinError(9,2.132475);
   hext_stack_2->SetBinError(10,2.160541);
   hext_stack_2->SetBinError(11,2.451649);
   hext_stack_2->SetBinError(12,2.034329);
   hext_stack_2->SetBinError(13,1.648403);
   hext_stack_2->SetBinError(14,2.034329);
   hext_stack_2->SetBinError(15,1.903048);
   hext_stack_2->SetBinError(16,2.866933);
   hext_stack_2->SetBinError(17,1.981925);
   hext_stack_2->SetBinError(18,2.422203);
   hext_stack_2->SetBinError(19,2.829564);
   hext_stack_2->SetBinError(20,3.193728);
   hext_stack_2->SetBinError(21,2.295984);
   hext_stack_2->SetBinError(22,1.450642);
   hext_stack_2->SetBinError(23,1.60866);
   hext_stack_2->SetBinError(24,2.334978);
   hext_stack_2->SetBinError(25,2.086987);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6669159);
   hdirt_stack_3->SetBinContent(2,0.4950385);
   hdirt_stack_3->SetBinContent(3,0.9485314);
   hdirt_stack_3->SetBinContent(4,2.280919);
   hdirt_stack_3->SetBinContent(5,0.6005306);
   hdirt_stack_3->SetBinContent(6,0.7368217);
   hdirt_stack_3->SetBinContent(7,0.7380326);
   hdirt_stack_3->SetBinContent(8,1.438321);
   hdirt_stack_3->SetBinContent(9,0.9713526);
   hdirt_stack_3->SetBinContent(10,0.2548162);
   hdirt_stack_3->SetBinContent(11,0.7947583);
   hdirt_stack_3->SetBinContent(12,1.191672);
   hdirt_stack_3->SetBinContent(13,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.6990832);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.140423);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,1.153764);
   hdirt_stack_3->SetBinContent(19,2.208384);
   hdirt_stack_3->SetBinContent(20,1.440353);
   hdirt_stack_3->SetBinContent(21,1.657968);
   hdirt_stack_3->SetBinContent(22,1.482424);
   hdirt_stack_3->SetBinContent(23,1.209536);
   hdirt_stack_3->SetBinContent(24,0.6684532);
   hdirt_stack_3->SetBinContent(25,1.035767);
   hdirt_stack_3->SetBinError(1,0.4822861);
   hdirt_stack_3->SetBinError(2,0.2933304);
   hdirt_stack_3->SetBinError(3,0.4941443);
   hdirt_stack_3->SetBinError(4,0.8609675);
   hdirt_stack_3->SetBinError(5,0.4280125);
   hdirt_stack_3->SetBinError(6,0.4486952);
   hdirt_stack_3->SetBinError(7,0.3757051);
   hdirt_stack_3->SetBinError(8,0.6304591);
   hdirt_stack_3->SetBinError(9,0.5778454);
   hdirt_stack_3->SetBinError(10,0.2548162);
   hdirt_stack_3->SetBinError(11,0.4034967);
   hdirt_stack_3->SetBinError(12,0.566382);
   hdirt_stack_3->SetBinError(13,0.3652866);
   hdirt_stack_3->SetBinError(14,0.4258697);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.1380915);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.5997767);
   hdirt_stack_3->SetBinError(19,0.7501772);
   hdirt_stack_3->SetBinError(20,0.6389579);
   hdirt_stack_3->SetBinError(21,1.062625);
   hdirt_stack_3->SetBinError(22,0.6140286);
   hdirt_stack_3->SetBinError(23,0.5950031);
   hdirt_stack_3->SetBinError(24,0.4382177);
   hdirt_stack_3->SetBinError(25,0.440654);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,14.65693);
   houtFV_stack_4->SetBinContent(2,10.82029);
   houtFV_stack_4->SetBinContent(3,16.17659);
   houtFV_stack_4->SetBinContent(4,10.5486);
   houtFV_stack_4->SetBinContent(5,9.868654);
   houtFV_stack_4->SetBinContent(6,12.17999);
   houtFV_stack_4->SetBinContent(7,12.2205);
   houtFV_stack_4->SetBinContent(8,10.3127);
   houtFV_stack_4->SetBinContent(9,11.52197);
   houtFV_stack_4->SetBinContent(10,8.893803);
   houtFV_stack_4->SetBinContent(11,13.23641);
   houtFV_stack_4->SetBinContent(12,13.80647);
   houtFV_stack_4->SetBinContent(13,13.90011);
   houtFV_stack_4->SetBinContent(14,8.136467);
   houtFV_stack_4->SetBinContent(15,10.82463);
   houtFV_stack_4->SetBinContent(16,12.39725);
   houtFV_stack_4->SetBinContent(17,13.67801);
   houtFV_stack_4->SetBinContent(18,14.66425);
   houtFV_stack_4->SetBinContent(19,12.02571);
   houtFV_stack_4->SetBinContent(20,9.661192);
   houtFV_stack_4->SetBinContent(21,12.53537);
   houtFV_stack_4->SetBinContent(22,11.76309);
   houtFV_stack_4->SetBinContent(23,13.00552);
   houtFV_stack_4->SetBinContent(24,13.32521);
   houtFV_stack_4->SetBinContent(25,18.5277);
   houtFV_stack_4->SetBinError(1,1.933914);
   houtFV_stack_4->SetBinError(2,1.558845);
   houtFV_stack_4->SetBinError(3,2.202868);
   houtFV_stack_4->SetBinError(4,1.623431);
   houtFV_stack_4->SetBinError(5,1.557282);
   houtFV_stack_4->SetBinError(6,1.76648);
   houtFV_stack_4->SetBinError(7,1.790891);
   houtFV_stack_4->SetBinError(8,1.587669);
   houtFV_stack_4->SetBinError(9,1.596315);
   houtFV_stack_4->SetBinError(10,1.442719);
   houtFV_stack_4->SetBinError(11,1.938083);
   houtFV_stack_4->SetBinError(12,2.088187);
   houtFV_stack_4->SetBinError(13,1.914902);
   houtFV_stack_4->SetBinError(14,1.344616);
   houtFV_stack_4->SetBinError(15,1.664941);
   houtFV_stack_4->SetBinError(16,1.737999);
   houtFV_stack_4->SetBinError(17,1.888131);
   houtFV_stack_4->SetBinError(18,2.036887);
   houtFV_stack_4->SetBinError(19,1.751967);
   houtFV_stack_4->SetBinError(20,1.412527);
   houtFV_stack_4->SetBinError(21,1.841455);
   houtFV_stack_4->SetBinError(22,1.810314);
   houtFV_stack_4->SetBinError(23,1.767394);
   houtFV_stack_4->SetBinError(24,1.842852);
   houtFV_stack_4->SetBinError(25,2.474183);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7017707);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4726148);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.931522);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6691307);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5464904);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5424238);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7979012);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3624597);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6006339);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.06873766);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.626774);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3040101);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6053439);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8610816);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6575447);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6804957);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7250574);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4442319);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.084561);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8800028);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5021417);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4845476);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7110504);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8329939);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7052659);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2596232);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1960569);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3956949);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2192034);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2942504);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3300282);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3721577);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1541444);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2492889);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04161298);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2186183);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2036243);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2357949);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3802602);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3522762);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2460863);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3497589);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1936944);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3721191);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3613583);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2538827);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1971071);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3664372);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2836307);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.344478);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02439346);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1121119);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4605523);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.0551682);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05468537);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1644973);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1212553);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.09457768);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1742597);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1470791);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1353738);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0965652);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05931247);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01871117);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04737059);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.0151491);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2955117);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.0409338);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03157261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1106424);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04976057);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0511401);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1317846);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1296372);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0724014);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06523096);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04465501);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.315908);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.53601);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.724359);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.187298);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.204007);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.899255);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.994327);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.955075);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.991499);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.073885);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.381738);
   hNCpi0inFVres_stack_7->SetBinContent(12,10.07768);
   hNCpi0inFVres_stack_7->SetBinContent(13,10.25321);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.85526);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.694182);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.851758);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.529868);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.083807);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.617728);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.245705);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.196761);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.715258);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.57671);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.47882);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.785207);
   hNCpi0inFVres_stack_7->SetBinError(1,1.023006);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9116901);
   hNCpi0inFVres_stack_7->SetBinError(3,1.013487);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9069994);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7195869);
   hNCpi0inFVres_stack_7->SetBinError(6,1.046904);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8962647);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7881127);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8861767);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9617989);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7289417);
   hNCpi0inFVres_stack_7->SetBinError(12,1.042295);
   hNCpi0inFVres_stack_7->SetBinError(13,1.027744);
   hNCpi0inFVres_stack_7->SetBinError(14,1.096338);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7947272);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9636794);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8978081);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7350853);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9461939);
   hNCpi0inFVres_stack_7->SetBinError(20,1.120173);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9647135);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8928708);
   hNCpi0inFVres_stack_7->SetBinError(23,1.035787);
   hNCpi0inFVres_stack_7->SetBinError(24,1.096358);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9108849);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.120525);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.53819);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.514762);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.795807);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.840132);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.053205);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.054338);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.538239);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.925764);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.960421);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.753134);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.643681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.342025);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.983112);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.957521);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.07511);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.472945);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.245556);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.492897);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.450001);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.928663);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.244311);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.014197);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.776055);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.228086);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6274861);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8917105);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8798953);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.698195);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5501222);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5882009);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7579307);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6392095);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.715804);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6693326);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.405965);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.490287);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5119598);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6224392);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4965652);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3533972);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.877841);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5242557);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3596019);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7410342);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.379251);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8948012);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4330828);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4754369);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6859702);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.66126);
   hCCpi0inFV_stack_10->SetBinContent(2,11.24299);
   hCCpi0inFV_stack_10->SetBinContent(3,14.19075);
   hCCpi0inFV_stack_10->SetBinContent(4,11.68771);
   hCCpi0inFV_stack_10->SetBinContent(5,9.474595);
   hCCpi0inFV_stack_10->SetBinContent(6,11.0884);
   hCCpi0inFV_stack_10->SetBinContent(7,10.25361);
   hCCpi0inFV_stack_10->SetBinContent(8,9.575237);
   hCCpi0inFV_stack_10->SetBinContent(9,8.949535);
   hCCpi0inFV_stack_10->SetBinContent(10,13.46517);
   hCCpi0inFV_stack_10->SetBinContent(11,16.09042);
   hCCpi0inFV_stack_10->SetBinContent(12,14.22765);
   hCCpi0inFV_stack_10->SetBinContent(13,18.48762);
   hCCpi0inFV_stack_10->SetBinContent(14,13.93168);
   hCCpi0inFV_stack_10->SetBinContent(15,12.11595);
   hCCpi0inFV_stack_10->SetBinContent(16,11.92575);
   hCCpi0inFV_stack_10->SetBinContent(17,13.53481);
   hCCpi0inFV_stack_10->SetBinContent(18,12.24651);
   hCCpi0inFV_stack_10->SetBinContent(19,10.55852);
   hCCpi0inFV_stack_10->SetBinContent(20,10.03936);
   hCCpi0inFV_stack_10->SetBinContent(21,11.66372);
   hCCpi0inFV_stack_10->SetBinContent(22,14.4091);
   hCCpi0inFV_stack_10->SetBinContent(23,14.81224);
   hCCpi0inFV_stack_10->SetBinContent(24,14.96852);
   hCCpi0inFV_stack_10->SetBinContent(25,13.49479);
   hCCpi0inFV_stack_10->SetBinError(1,2.072083);
   hCCpi0inFV_stack_10->SetBinError(2,1.618143);
   hCCpi0inFV_stack_10->SetBinError(3,1.883848);
   hCCpi0inFV_stack_10->SetBinError(4,1.729848);
   hCCpi0inFV_stack_10->SetBinError(5,1.531953);
   hCCpi0inFV_stack_10->SetBinError(6,1.635273);
   hCCpi0inFV_stack_10->SetBinError(7,1.642249);
   hCCpi0inFV_stack_10->SetBinError(8,1.569998);
   hCCpi0inFV_stack_10->SetBinError(9,1.482261);
   hCCpi0inFV_stack_10->SetBinError(10,1.86834);
   hCCpi0inFV_stack_10->SetBinError(11,2.003913);
   hCCpi0inFV_stack_10->SetBinError(12,1.880017);
   hCCpi0inFV_stack_10->SetBinError(13,2.185974);
   hCCpi0inFV_stack_10->SetBinError(14,1.956842);
   hCCpi0inFV_stack_10->SetBinError(15,1.777996);
   hCCpi0inFV_stack_10->SetBinError(16,1.775027);
   hCCpi0inFV_stack_10->SetBinError(17,1.849734);
   hCCpi0inFV_stack_10->SetBinError(18,1.77677);
   hCCpi0inFV_stack_10->SetBinError(19,1.630855);
   hCCpi0inFV_stack_10->SetBinError(20,1.568062);
   hCCpi0inFV_stack_10->SetBinError(21,1.686515);
   hCCpi0inFV_stack_10->SetBinError(22,1.965999);
   hCCpi0inFV_stack_10->SetBinError(23,1.981226);
   hCCpi0inFV_stack_10->SetBinError(24,1.91951);
   hCCpi0inFV_stack_10->SetBinError(25,1.828351);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.59341);
   hNCinFV_stack_11->SetBinContent(2,1.857848);
   hNCinFV_stack_11->SetBinContent(3,3.123275);
   hNCinFV_stack_11->SetBinContent(4,2.644986);
   hNCinFV_stack_11->SetBinContent(5,3.292374);
   hNCinFV_stack_11->SetBinContent(6,2.425996);
   hNCinFV_stack_11->SetBinContent(7,2.318471);
   hNCinFV_stack_11->SetBinContent(8,3.041127);
   hNCinFV_stack_11->SetBinContent(9,1.599518);
   hNCinFV_stack_11->SetBinContent(10,3.938874);
   hNCinFV_stack_11->SetBinContent(11,2.320581);
   hNCinFV_stack_11->SetBinContent(12,1.887932);
   hNCinFV_stack_11->SetBinContent(13,1.989671);
   hNCinFV_stack_11->SetBinContent(14,2.660514);
   hNCinFV_stack_11->SetBinContent(15,3.792136);
   hNCinFV_stack_11->SetBinContent(16,2.464967);
   hNCinFV_stack_11->SetBinContent(17,4.060785);
   hNCinFV_stack_11->SetBinContent(18,2.160439);
   hNCinFV_stack_11->SetBinContent(19,3.587724);
   hNCinFV_stack_11->SetBinContent(20,2.705679);
   hNCinFV_stack_11->SetBinContent(21,1.846788);
   hNCinFV_stack_11->SetBinContent(22,4.005761);
   hNCinFV_stack_11->SetBinContent(23,3.369855);
   hNCinFV_stack_11->SetBinContent(24,3.39633);
   hNCinFV_stack_11->SetBinContent(25,2.126571);
   hNCinFV_stack_11->SetBinError(1,0.9267084);
   hNCinFV_stack_11->SetBinError(2,0.6276943);
   hNCinFV_stack_11->SetBinError(3,1.026313);
   hNCinFV_stack_11->SetBinError(4,0.7362165);
   hNCinFV_stack_11->SetBinError(5,0.9072237);
   hNCinFV_stack_11->SetBinError(6,0.8261109);
   hNCinFV_stack_11->SetBinError(7,0.7697625);
   hNCinFV_stack_11->SetBinError(8,0.9286772);
   hNCinFV_stack_11->SetBinError(9,0.571774);
   hNCinFV_stack_11->SetBinError(10,1.340807);
   hNCinFV_stack_11->SetBinError(11,0.8094335);
   hNCinFV_stack_11->SetBinError(12,0.6462957);
   hNCinFV_stack_11->SetBinError(13,0.752663);
   hNCinFV_stack_11->SetBinError(14,0.7605765);
   hNCinFV_stack_11->SetBinError(15,1.156262);
   hNCinFV_stack_11->SetBinError(16,0.7473844);
   hNCinFV_stack_11->SetBinError(17,1.110856);
   hNCinFV_stack_11->SetBinError(18,0.6470492);
   hNCinFV_stack_11->SetBinError(19,0.9405268);
   hNCinFV_stack_11->SetBinError(20,1.174715);
   hNCinFV_stack_11->SetBinError(21,0.6569013);
   hNCinFV_stack_11->SetBinError(22,1.021824);
   hNCinFV_stack_11->SetBinError(23,1.008085);
   hNCinFV_stack_11->SetBinError(24,1.14671);
   hNCinFV_stack_11->SetBinError(25,0.8567615);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,10.28818);
   hnumuCCinFV_stack_12->SetBinContent(2,7.26348);
   hnumuCCinFV_stack_12->SetBinContent(3,6.258287);
   hnumuCCinFV_stack_12->SetBinContent(4,8.793777);
   hnumuCCinFV_stack_12->SetBinContent(5,7.600653);
   hnumuCCinFV_stack_12->SetBinContent(6,6.393895);
   hnumuCCinFV_stack_12->SetBinContent(7,7.277323);
   hnumuCCinFV_stack_12->SetBinContent(8,6.089638);
   hnumuCCinFV_stack_12->SetBinContent(9,7.708698);
   hnumuCCinFV_stack_12->SetBinContent(10,9.2282);
   hnumuCCinFV_stack_12->SetBinContent(11,8.977966);
   hnumuCCinFV_stack_12->SetBinContent(12,8.271479);
   hnumuCCinFV_stack_12->SetBinContent(13,10.88124);
   hnumuCCinFV_stack_12->SetBinContent(14,9.457819);
   hnumuCCinFV_stack_12->SetBinContent(15,12.88216);
   hnumuCCinFV_stack_12->SetBinContent(16,6.093419);
   hnumuCCinFV_stack_12->SetBinContent(17,9.34938);
   hnumuCCinFV_stack_12->SetBinContent(18,8.495601);
   hnumuCCinFV_stack_12->SetBinContent(19,7.149214);
   hnumuCCinFV_stack_12->SetBinContent(20,8.240526);
   hnumuCCinFV_stack_12->SetBinContent(21,7.817664);
   hnumuCCinFV_stack_12->SetBinContent(22,10.58272);
   hnumuCCinFV_stack_12->SetBinContent(23,7.559994);
   hnumuCCinFV_stack_12->SetBinContent(24,13.30636);
   hnumuCCinFV_stack_12->SetBinContent(25,8.389813);
   hnumuCCinFV_stack_12->SetBinError(1,1.767663);
   hnumuCCinFV_stack_12->SetBinError(2,1.685404);
   hnumuCCinFV_stack_12->SetBinError(3,1.2648);
   hnumuCCinFV_stack_12->SetBinError(4,1.720013);
   hnumuCCinFV_stack_12->SetBinError(5,1.746766);
   hnumuCCinFV_stack_12->SetBinError(6,1.688043);
   hnumuCCinFV_stack_12->SetBinError(7,1.435586);
   hnumuCCinFV_stack_12->SetBinError(8,1.255834);
   hnumuCCinFV_stack_12->SetBinError(9,1.49726);
   hnumuCCinFV_stack_12->SetBinError(10,1.660298);
   hnumuCCinFV_stack_12->SetBinError(11,1.766209);
   hnumuCCinFV_stack_12->SetBinError(12,1.605654);
   hnumuCCinFV_stack_12->SetBinError(13,1.722087);
   hnumuCCinFV_stack_12->SetBinError(14,1.569686);
   hnumuCCinFV_stack_12->SetBinError(15,1.834549);
   hnumuCCinFV_stack_12->SetBinError(16,1.348389);
   hnumuCCinFV_stack_12->SetBinError(17,1.661208);
   hnumuCCinFV_stack_12->SetBinError(18,1.648008);
   hnumuCCinFV_stack_12->SetBinError(19,2.259219);
   hnumuCCinFV_stack_12->SetBinError(20,1.503395);
   hnumuCCinFV_stack_12->SetBinError(21,1.464116);
   hnumuCCinFV_stack_12->SetBinError(22,2.784498);
   hnumuCCinFV_stack_12->SetBinError(23,1.476422);
   hnumuCCinFV_stack_12->SetBinError(24,2.272797);
   hnumuCCinFV_stack_12->SetBinError(25,1.640687);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7975339);
   hnueCCinFV_stack_13->SetBinContent(2,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(7,0.47249);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.4129875);
   hnueCCinFV_stack_13->SetBinContent(20,1.865638);
   hnueCCinFV_stack_13->SetBinContent(21,2.116041);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(24,0.8120507);
   hnueCCinFV_stack_13->SetBinContent(25,0.5113685);
   hnueCCinFV_stack_13->SetBinError(1,0.4906049);
   hnueCCinFV_stack_13->SetBinError(2,0.3025491);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3654046);
   hnueCCinFV_stack_13->SetBinError(7,0.3344052);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4972556);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.2924763);
   hnueCCinFV_stack_13->SetBinError(20,1.275467);
   hnueCCinFV_stack_13->SetBinError(21,1.601466);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.2331833);
   hnueCCinFV_stack_13->SetBinError(24,0.4068414);
   hnueCCinFV_stack_13->SetBinError(25,0.3808243);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__8->SetBinContent(1,68.12611);
   hmcerror__8->SetBinContent(2,59.43349);
   hmcerror__8->SetBinContent(3,67.13453);
   hmcerror__8->SetBinContent(4,63.6899);
   hmcerror__8->SetBinContent(5,60.41949);
   hmcerror__8->SetBinContent(6,62.78009);
   hmcerror__8->SetBinContent(7,71.47233);
   hmcerror__8->SetBinContent(8,54.87116);
   hmcerror__8->SetBinContent(9,56.08661);
   hmcerror__8->SetBinContent(10,59.21044);
   hmcerror__8->SetBinContent(11,65.87334);
   hmcerror__8->SetBinContent(12,62.50368);
   hmcerror__8->SetBinContent(13,67.33337);
   hmcerror__8->SetBinContent(14,61.13194);
   hmcerror__8->SetBinContent(15,59.97468);
   hmcerror__8->SetBinContent(16,61.63852);
   hmcerror__8->SetBinContent(17,62.51752);
   hmcerror__8->SetBinContent(18,64.71152);
   hmcerror__8->SetBinContent(19,64.60975);
   hmcerror__8->SetBinContent(20,70.47973);
   hmcerror__8->SetBinContent(21,61.88318);
   hmcerror__8->SetBinContent(22,62.47666);
   hmcerror__8->SetBinContent(23,60.00977);
   hmcerror__8->SetBinContent(24,74.91299);
   hmcerror__8->SetBinContent(25,70.87262);
   hmcerror__8->SetBinError(1,24.57488);
   hmcerror__8->SetBinError(2,20.51272);
   hmcerror__8->SetBinError(3,20.11604);
   hmcerror__8->SetBinError(4,18.25111);
   hmcerror__8->SetBinError(5,17.78171);
   hmcerror__8->SetBinError(6,19.23158);
   hmcerror__8->SetBinError(7,28.28682);
   hmcerror__8->SetBinError(8,19.93046);
   hmcerror__8->SetBinError(9,20.72733);
   hmcerror__8->SetBinError(10,21.3381);
   hmcerror__8->SetBinError(11,22.28185);
   hmcerror__8->SetBinError(12,20.22041);
   hmcerror__8->SetBinError(13,22.68305);
   hmcerror__8->SetBinError(14,21.89403);
   hmcerror__8->SetBinError(15,18.44529);
   hmcerror__8->SetBinError(16,18.20171);
   hmcerror__8->SetBinError(17,20.3325);
   hmcerror__8->SetBinError(18,22.04348);
   hmcerror__8->SetBinError(19,21.46591);
   hmcerror__8->SetBinError(20,20.41848);
   hmcerror__8->SetBinError(21,19.76397);
   hmcerror__8->SetBinError(22,25.76376);
   hmcerror__8->SetBinError(23,24.43842);
   hmcerror__8->SetBinError(24,25.37665);
   hmcerror__8->SetBinError(25,22.34904);
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
   77,
   58,
   53,
   43,
   52,
   58,
   68,
   58,
   58,
   54,
   61,
   57,
   79,
   80,
   40,
   53,
   59,
   63,
   51,
   57,
   54,
   59,
   54,
   59,
   65};
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
   8.8995,
   7.7446,
   7.4105,
   6.6917,
   7.3419,
   7.7446,
   8.3726,
   7.7446,
   7.7446,
   7.4785,
   7.9383,
   7.679,
   9.0124,
   9.0683,
   6.4604,
   7.4105,
   7.8097,
   8.0648,
   7.2725,
   7.679,
   7.4785,
   7.8097,
   7.4785,
   7.8097,
   8.1893};
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
   8.6976,
   7.5415,
   7.2068,
   6.4868,
   7.1381,
   7.5415,
   8.1701,
   7.5415,
   7.5415,
   7.275,
   7.7354,
   7.4757,
   8.8105,
   8.8665,
   6.2549,
   7.2068,
   7.6066,
   7.862,
   7.0686,
   7.4757,
   7.275,
   7.6066,
   7.275,
   7.6066,
   7.9866};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(28.00691);
   Graph_Graph3009->SetMaximum(94.39919);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.3/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all");
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
   0.3607263,
   0.3451373,
   0.2996378,
   0.2865621,
   0.2943041,
   0.3063325,
   0.395773,
   0.3632228,
   0.3695593,
   0.3603773,
   0.3382529,
   0.3235075,
   0.3368768,
   0.3581439,
   0.3075513,
   0.2952977,
   0.3252288,
   0.3406423,
   0.3322395,
   0.2897072,
   0.3193754,
   0.4123742,
   0.4072406,
   0.3387483,
   0.3153409};
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
   0.3607263,
   0.3451373,
   0.2996378,
   0.2865621,
   0.2943041,
   0.3063325,
   0.395773,
   0.3632228,
   0.3695593,
   0.3603773,
   0.3382529,
   0.3235075,
   0.3368768,
   0.3581439,
   0.3075513,
   0.2952977,
   0.3252288,
   0.3406423,
   0.3322395,
   0.2897072,
   0.3193754,
   0.4123742,
   0.4072406,
   0.3387483,
   0.3153409};
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
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.2210511,
   0.2128536,
   0.2098654,
   0.1956741,
   0.1799115,
   0.1969168,
   0.1772705,
   0.20552,
   0.2241136,
   0.1966067,
   0.2012834,
   0.2060414,
   0.2268535,
   0.1991727,
   0.2056107,
   0.2032339,
   0.2116853,
   0.1928263,
   0.1717619,
   0.178902,
   0.2006452,
   0.2027651,
   0.2307698,
   0.2075296,
   0.1940123};
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
   0.2210511,
   0.2128536,
   0.2098654,
   0.1956741,
   0.1799115,
   0.1969168,
   0.1772705,
   0.20552,
   0.2241136,
   0.1966067,
   0.2012834,
   0.2060414,
   0.2268535,
   0.1991727,
   0.2056107,
   0.2032339,
   0.2116853,
   0.1928263,
   0.1717619,
   0.178902,
   0.2006452,
   0.2027651,
   0.2307698,
   0.2075296,
   0.1940123};
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
   1.130257,
   0.9758807,
   0.7894596,
   0.6751463,
   0.8606494,
   0.9238597,
   0.9514172,
   1.057022,
   1.034115,
   0.9120014,
   0.9260196,
   0.9119463,
   1.173267,
   1.308645,
   0.6669481,
   0.8598519,
   0.9437354,
   0.9735516,
   0.7893546,
   0.8087432,
   0.8726119,
   0.9443526,
   0.8998535,
   0.7875803,
   0.9171384};
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
   0.1306327,
   0.130307,
   0.1103828,
   0.1050669,
   0.1215154,
   0.1233608,
   0.1171446,
   0.1411415,
   0.1380829,
   0.1263037,
   0.1205085,
   0.1228568,
   0.1338475,
   0.1483398,
   0.1077188,
   0.1202251,
   0.1249202,
   0.124627,
   0.1125604,
   0.1089533,
   0.1208487,
   0.1250019,
   0.1246214,
   0.1042503,
   0.1155496};
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
   0.1276691,
   0.1268897,
   0.1073486,
   0.1018497,
   0.1181423,
   0.1201257,
   0.1143114,
   0.1374401,
   0.1344617,
   0.1228669,
   0.1174284,
   0.1196042,
   0.1308489,
   0.1450387,
   0.1042923,
   0.1169204,
   0.1216715,
   0.1214931,
   0.1094045,
   0.1060688,
   0.1175602,
   0.1217511,
   0.1212303,
   0.1015391,
   0.1126895};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.4697839);
   Graph_Graph3012->SetMaximum(1.543129);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 17:14:59 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-2.504279,3.553846,276.9205);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__7->SetBinContent(1,19.62881);
   hmc__7->SetBinContent(2,61.83618);
   hmc__7->SetBinContent(3,93.8419);
   hmc__7->SetBinContent(4,122.9823);
   hmc__7->SetBinContent(5,125.2139);
   hmc__7->SetBinContent(6,120.0488);
   hmc__7->SetBinContent(7,119.2902);
   hmc__7->SetBinContent(8,110.3134);
   hmc__7->SetBinContent(9,99.21898);
   hmc__7->SetBinContent(10,94.71347);
   hmc__7->SetBinContent(11,87.30489);
   hmc__7->SetBinContent(12,76.8396);
   hmc__7->SetBinContent(13,59.09314);
   hmc__7->SetBinContent(14,52.43113);
   hmc__7->SetBinContent(15,58.62866);
   hmc__7->SetBinContent(16,54.14635);
   hmc__7->SetBinContent(17,49.0639);
   hmc__7->SetBinContent(18,38.83873);
   hmc__7->SetBinContent(19,41.3403);
   hmc__7->SetBinContent(20,43.03949);
   hmc__7->SetBinContent(21,40.97674);
   hmc__7->SetBinContent(22,35.24545);
   hmc__7->SetBinContent(23,21.75769);
   hmc__7->SetBinContent(24,8.999228);
   hmc__7->SetBinError(1,9.937304);
   hmc__7->SetBinError(2,20.10684);
   hmc__7->SetBinError(3,25.41409);
   hmc__7->SetBinError(4,32.75882);
   hmc__7->SetBinError(5,33.15152);
   hmc__7->SetBinError(6,35.56009);
   hmc__7->SetBinError(7,32.04143);
   hmc__7->SetBinError(8,30.28124);
   hmc__7->SetBinError(9,31.15088);
   hmc__7->SetBinError(10,27.73175);
   hmc__7->SetBinError(11,26.15997);
   hmc__7->SetBinError(12,25.83302);
   hmc__7->SetBinError(13,19.89027);
   hmc__7->SetBinError(14,17.28879);
   hmc__7->SetBinError(15,19.75631);
   hmc__7->SetBinError(16,27.38465);
   hmc__7->SetBinError(17,17.93489);
   hmc__7->SetBinError(18,17.59478);
   hmc__7->SetBinError(19,16.01617);
   hmc__7->SetBinError(20,17.68857);
   hmc__7->SetBinError(21,20.76632);
   hmc__7->SetBinError(22,20.75918);
   hmc__7->SetBinError(23,15.31381);
   hmc__7->SetBinError(24,12.79572);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-2.504279);
   hmc__7->SetMaximum(262.9492);
   hmc__7->SetEntries(1602.903);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,3.15);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(131.4746);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,1.855576);
   hbadmatch_stack_1->SetBinContent(3,4.311197);
   hbadmatch_stack_1->SetBinContent(4,3.160404);
   hbadmatch_stack_1->SetBinContent(5,5.792766);
   hbadmatch_stack_1->SetBinContent(6,2.534241);
   hbadmatch_stack_1->SetBinContent(7,3.368203);
   hbadmatch_stack_1->SetBinContent(8,4.186758);
   hbadmatch_stack_1->SetBinContent(9,2.875097);
   hbadmatch_stack_1->SetBinContent(10,2.907052);
   hbadmatch_stack_1->SetBinContent(11,2.954107);
   hbadmatch_stack_1->SetBinContent(12,2.080326);
   hbadmatch_stack_1->SetBinContent(13,2.672947);
   hbadmatch_stack_1->SetBinContent(14,1.413964);
   hbadmatch_stack_1->SetBinContent(15,3.344616);
   hbadmatch_stack_1->SetBinContent(16,1.608988);
   hbadmatch_stack_1->SetBinContent(17,1.652014);
   hbadmatch_stack_1->SetBinContent(18,2.58905);
   hbadmatch_stack_1->SetBinContent(19,2.315019);
   hbadmatch_stack_1->SetBinContent(20,1.610679);
   hbadmatch_stack_1->SetBinContent(21,1.592338);
   hbadmatch_stack_1->SetBinContent(23,1.436645);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.6794384);
   hbadmatch_stack_1->SetBinError(3,1.117124);
   hbadmatch_stack_1->SetBinError(4,0.9076631);
   hbadmatch_stack_1->SetBinError(5,1.508373);
   hbadmatch_stack_1->SetBinError(6,0.8321153);
   hbadmatch_stack_1->SetBinError(7,0.9315545);
   hbadmatch_stack_1->SetBinError(8,1.105492);
   hbadmatch_stack_1->SetBinError(9,0.9214034);
   hbadmatch_stack_1->SetBinError(10,0.8276178);
   hbadmatch_stack_1->SetBinError(11,0.950422);
   hbadmatch_stack_1->SetBinError(12,0.715646);
   hbadmatch_stack_1->SetBinError(13,0.7969862);
   hbadmatch_stack_1->SetBinError(14,0.6515799);
   hbadmatch_stack_1->SetBinError(15,1.108764);
   hbadmatch_stack_1->SetBinError(16,0.6801404);
   hbadmatch_stack_1->SetBinError(17,0.696238);
   hbadmatch_stack_1->SetBinError(18,0.8552035);
   hbadmatch_stack_1->SetBinError(19,0.8394681);
   hbadmatch_stack_1->SetBinError(20,0.6806271);
   hbadmatch_stack_1->SetBinError(21,0.6718116);
   hbadmatch_stack_1->SetBinError(23,0.6587824);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.592407);
   hext_stack_2->SetBinContent(2,8.992609);
   hext_stack_2->SetBinContent(3,13.207);
   hext_stack_2->SetBinContent(4,16.4482);
   hext_stack_2->SetBinContent(5,18.22741);
   hext_stack_2->SetBinContent(6,15.57435);
   hext_stack_2->SetBinContent(7,18.54463);
   hext_stack_2->SetBinContent(8,13.12039);
   hext_stack_2->SetBinContent(9,13.78078);
   hext_stack_2->SetBinContent(10,16.02006);
   hext_stack_2->SetBinContent(11,9.636995);
   hext_stack_2->SetBinContent(12,11.9828);
   hext_stack_2->SetBinContent(13,9.961391);
   hext_stack_2->SetBinContent(14,10.76741);
   hext_stack_2->SetBinContent(15,9.629814);
   hext_stack_2->SetBinContent(16,11.8228);
   hext_stack_2->SetBinContent(17,6.172367);
   hext_stack_2->SetBinContent(18,4.136601);
   hext_stack_2->SetBinContent(19,6.966795);
   hext_stack_2->SetBinContent(20,3.972198);
   hext_stack_2->SetBinContent(21,8.724463);
   hext_stack_2->SetBinContent(22,2.841783);
   hext_stack_2->SetBinContent(23,2.980236);
   hext_stack_2->SetBinContent(24,1.219797);
   hext_stack_2->SetBinError(1,1.085446);
   hext_stack_2->SetBinError(2,1.973683);
   hext_stack_2->SetBinError(3,2.366387);
   hext_stack_2->SetBinError(4,2.643567);
   hext_stack_2->SetBinError(5,2.799284);
   hext_stack_2->SetBinError(6,2.448287);
   hext_stack_2->SetBinError(7,2.853494);
   hext_stack_2->SetBinError(8,2.324774);
   hext_stack_2->SetBinError(9,2.355624);
   hext_stack_2->SetBinError(10,2.725202);
   hext_stack_2->SetBinError(11,1.992679);
   hext_stack_2->SetBinError(12,2.229057);
   hext_stack_2->SetBinError(13,2.018911);
   hext_stack_2->SetBinError(14,2.14659);
   hext_stack_2->SetBinError(15,2.04254);
   hext_stack_2->SetBinError(16,2.232407);
   hext_stack_2->SetBinError(17,1.506547);
   hext_stack_2->SetBinError(18,1.33394);
   hext_stack_2->SetBinError(19,1.693402);
   hext_stack_2->SetBinError(20,1.288106);
   hext_stack_2->SetBinError(21,2.078163);
   hext_stack_2->SetBinError(22,1.011007);
   hext_stack_2->SetBinError(23,1.269171);
   hext_stack_2->SetBinError(24,0.7042499);
   hext_stack_2->SetEntries(595);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,1.802574);
   hdirt_stack_3->SetBinContent(5,0.8292562);
   hdirt_stack_3->SetBinContent(6,2.15951);
   hdirt_stack_3->SetBinContent(7,3.23219);
   hdirt_stack_3->SetBinContent(8,2.166393);
   hdirt_stack_3->SetBinContent(9,1.394989);
   hdirt_stack_3->SetBinContent(10,2.227328);
   hdirt_stack_3->SetBinContent(11,1.647248);
   hdirt_stack_3->SetBinContent(12,0.6773466);
   hdirt_stack_3->SetBinContent(13,0.8361835);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinContent(15,0.9068468);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.4950385);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.7430074);
   hdirt_stack_3->SetBinContent(21,0.8010461);
   hdirt_stack_3->SetBinContent(22,0.4289006);
   hdirt_stack_3->SetBinContent(23,0.4762587);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.7460335);
   hdirt_stack_3->SetBinError(5,0.4789059);
   hdirt_stack_3->SetBinError(6,0.8095689);
   hdirt_stack_3->SetBinError(7,0.9716119);
   hdirt_stack_3->SetBinError(8,0.7812793);
   hdirt_stack_3->SetBinError(9,0.5796892);
   hdirt_stack_3->SetBinError(10,1.082027);
   hdirt_stack_3->SetBinError(11,0.6676606);
   hdirt_stack_3->SetBinError(12,0.3439585);
   hdirt_stack_3->SetBinError(13,0.4992755);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetBinError(15,0.5334985);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2933304);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4500267);
   hdirt_stack_3->SetBinError(21,0.4056913);
   hdirt_stack_3->SetBinError(22,0.4289006);
   hdirt_stack_3->SetBinError(23,0.3652866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,4.003148);
   houtFV_stack_4->SetBinContent(2,12.19188);
   houtFV_stack_4->SetBinContent(3,20.11986);
   houtFV_stack_4->SetBinContent(4,24.11259);
   houtFV_stack_4->SetBinContent(5,25.49042);
   houtFV_stack_4->SetBinContent(6,22.33404);
   houtFV_stack_4->SetBinContent(7,19.71057);
   houtFV_stack_4->SetBinContent(8,23.08203);
   houtFV_stack_4->SetBinContent(9,19.41269);
   houtFV_stack_4->SetBinContent(10,15.55435);
   houtFV_stack_4->SetBinContent(11,15.06796);
   houtFV_stack_4->SetBinContent(12,13.97035);
   houtFV_stack_4->SetBinContent(13,10.03847);
   houtFV_stack_4->SetBinContent(14,10.84001);
   houtFV_stack_4->SetBinContent(15,11.71707);
   houtFV_stack_4->SetBinContent(16,10.13672);
   houtFV_stack_4->SetBinContent(17,10.44232);
   houtFV_stack_4->SetBinContent(18,9.675239);
   houtFV_stack_4->SetBinContent(19,8.833832);
   houtFV_stack_4->SetBinContent(20,15.33686);
   houtFV_stack_4->SetBinContent(21,7.196037);
   houtFV_stack_4->SetBinContent(22,7.179331);
   houtFV_stack_4->SetBinContent(23,6.365143);
   houtFV_stack_4->SetBinContent(24,2.197444);
   houtFV_stack_4->SetBinError(1,1.038897);
   houtFV_stack_4->SetBinError(2,1.770016);
   houtFV_stack_4->SetBinError(3,2.279928);
   houtFV_stack_4->SetBinError(4,2.632914);
   houtFV_stack_4->SetBinError(5,2.534743);
   houtFV_stack_4->SetBinError(6,2.368272);
   houtFV_stack_4->SetBinError(7,2.230324);
   houtFV_stack_4->SetBinError(8,2.397017);
   houtFV_stack_4->SetBinError(9,2.219058);
   houtFV_stack_4->SetBinError(10,2.027012);
   houtFV_stack_4->SetBinError(11,2.031578);
   houtFV_stack_4->SetBinError(12,2.201156);
   houtFV_stack_4->SetBinError(13,1.544964);
   houtFV_stack_4->SetBinError(14,1.665274);
   houtFV_stack_4->SetBinError(15,1.742334);
   houtFV_stack_4->SetBinError(16,1.579216);
   houtFV_stack_4->SetBinError(17,1.55817);
   houtFV_stack_4->SetBinError(18,1.564493);
   houtFV_stack_4->SetBinError(19,1.46029);
   houtFV_stack_4->SetBinError(20,2.022532);
   houtFV_stack_4->SetBinError(21,1.310949);
   houtFV_stack_4->SetBinError(22,1.332579);
   houtFV_stack_4->SetBinError(23,1.334943);
   houtFV_stack_4->SetBinError(24,0.760276);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.93823);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.520058);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.741762);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.728976);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.004904);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9329897);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5016232);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4011722);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4017374);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4165616);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3553864);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2445578);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1994106);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.263484);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.829473);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.56636);
   hNCpi0inFVres_stack_7->SetBinContent(4,21.64516);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.33886);
   hNCpi0inFVres_stack_7->SetBinContent(6,24.50941);
   hNCpi0inFVres_stack_7->SetBinContent(7,22.19919);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.35653);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.94575);
   hNCpi0inFVres_stack_7->SetBinContent(10,17.88895);
   hNCpi0inFVres_stack_7->SetBinContent(11,15.50748);
   hNCpi0inFVres_stack_7->SetBinContent(12,14.53993);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.98219);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.230452);
   hNCpi0inFVres_stack_7->SetBinContent(15,9.064875);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.29771);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.817585);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.735054);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.775908);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.758545);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.643874);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.091779);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.050326);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.11584);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6007199);
   hNCpi0inFVres_stack_7->SetBinError(2,1.016223);
   hNCpi0inFVres_stack_7->SetBinError(3,1.348721);
   hNCpi0inFVres_stack_7->SetBinError(4,1.49138);
   hNCpi0inFVres_stack_7->SetBinError(5,1.560441);
   hNCpi0inFVres_stack_7->SetBinError(6,1.593146);
   hNCpi0inFVres_stack_7->SetBinError(7,1.548652);
   hNCpi0inFVres_stack_7->SetBinError(8,1.4402);
   hNCpi0inFVres_stack_7->SetBinError(9,1.375249);
   hNCpi0inFVres_stack_7->SetBinError(10,1.355628);
   hNCpi0inFVres_stack_7->SetBinError(11,1.271988);
   hNCpi0inFVres_stack_7->SetBinError(12,1.184583);
   hNCpi0inFVres_stack_7->SetBinError(13,1.187319);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9813129);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9407802);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9896396);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7953605);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8456046);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8581689);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7370715);
   hNCpi0inFVres_stack_7->SetBinError(21,0.696529);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8049279);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4566047);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3780289);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.311804);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.333566);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.03481);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.53909);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.644538);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.922041);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.300608);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.495996);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.168742);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.443838);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.42001);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.248202);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.552198);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.900288);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.37018);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.812844);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.11484);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.757876);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.12829);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.631826);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.686794);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.198708);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3672356);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5967111);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7493785);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8503476);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.686775);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6882372);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8192654);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8160529);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6727953);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6214203);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7017251);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5614236);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.549099);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6300768);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4875229);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4567469);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3014643);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4757384);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2554552);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4436346);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4232048);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3549294);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06238626);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,5.131894);
   hCCpi0inFV_stack_10->SetBinContent(2,11.11176);
   hCCpi0inFV_stack_10->SetBinContent(3,17.07382);
   hCCpi0inFV_stack_10->SetBinContent(4,22.85889);
   hCCpi0inFV_stack_10->SetBinContent(5,23.24349);
   hCCpi0inFV_stack_10->SetBinContent(6,24.50294);
   hCCpi0inFV_stack_10->SetBinContent(7,23.43704);
   hCCpi0inFV_stack_10->SetBinContent(8,23.8376);
   hCCpi0inFV_stack_10->SetBinContent(9,18.46743);
   hCCpi0inFV_stack_10->SetBinContent(10,20.69737);
   hCCpi0inFV_stack_10->SetBinContent(11,19.25524);
   hCCpi0inFV_stack_10->SetBinContent(12,14.037);
   hCCpi0inFV_stack_10->SetBinContent(13,11.26777);
   hCCpi0inFV_stack_10->SetBinContent(14,8.586372);
   hCCpi0inFV_stack_10->SetBinContent(15,10.84458);
   hCCpi0inFV_stack_10->SetBinContent(16,10.34904);
   hCCpi0inFV_stack_10->SetBinContent(17,11.05006);
   hCCpi0inFV_stack_10->SetBinContent(18,7.744203);
   hCCpi0inFV_stack_10->SetBinContent(19,7.358424);
   hCCpi0inFV_stack_10->SetBinContent(20,6.116537);
   hCCpi0inFV_stack_10->SetBinContent(21,8.161114);
   hCCpi0inFV_stack_10->SetBinContent(22,7.826863);
   hCCpi0inFV_stack_10->SetBinContent(23,3.992273);
   hCCpi0inFV_stack_10->SetBinContent(24,2.144191);
   hCCpi0inFV_stack_10->SetBinError(1,1.101122);
   hCCpi0inFV_stack_10->SetBinError(2,1.663473);
   hCCpi0inFV_stack_10->SetBinError(3,2.060127);
   hCCpi0inFV_stack_10->SetBinError(4,2.458858);
   hCCpi0inFV_stack_10->SetBinError(5,2.449151);
   hCCpi0inFV_stack_10->SetBinError(6,2.510501);
   hCCpi0inFV_stack_10->SetBinError(7,2.524245);
   hCCpi0inFV_stack_10->SetBinError(8,2.456756);
   hCCpi0inFV_stack_10->SetBinError(9,2.150191);
   hCCpi0inFV_stack_10->SetBinError(10,2.333709);
   hCCpi0inFV_stack_10->SetBinError(11,2.244708);
   hCCpi0inFV_stack_10->SetBinError(12,1.874288);
   hCCpi0inFV_stack_10->SetBinError(13,1.704013);
   hCCpi0inFV_stack_10->SetBinError(14,1.460435);
   hCCpi0inFV_stack_10->SetBinError(15,1.593297);
   hCCpi0inFV_stack_10->SetBinError(16,1.574433);
   hCCpi0inFV_stack_10->SetBinError(17,1.714752);
   hCCpi0inFV_stack_10->SetBinError(18,1.392631);
   hCCpi0inFV_stack_10->SetBinError(19,1.266423);
   hCCpi0inFV_stack_10->SetBinError(20,1.160172);
   hCCpi0inFV_stack_10->SetBinError(21,1.379786);
   hCCpi0inFV_stack_10->SetBinError(22,1.487506);
   hCCpi0inFV_stack_10->SetBinError(23,0.9679778);
   hCCpi0inFV_stack_10->SetBinError(24,0.7850774);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(2,2.585803);
   hNCinFV_stack_11->SetBinContent(3,4.681813);
   hNCinFV_stack_11->SetBinContent(4,5.766824);
   hNCinFV_stack_11->SetBinContent(5,3.377736);
   hNCinFV_stack_11->SetBinContent(6,4.733375);
   hNCinFV_stack_11->SetBinContent(7,5.870409);
   hNCinFV_stack_11->SetBinContent(8,4.058092);
   hNCinFV_stack_11->SetBinContent(9,5.370012);
   hNCinFV_stack_11->SetBinContent(10,4.141539);
   hNCinFV_stack_11->SetBinContent(11,4.541731);
   hNCinFV_stack_11->SetBinContent(12,2.78759);
   hNCinFV_stack_11->SetBinContent(13,1.855576);
   hNCinFV_stack_11->SetBinContent(14,1.660551);
   hNCinFV_stack_11->SetBinContent(15,2.192373);
   hNCinFV_stack_11->SetBinContent(16,2.977543);
   hNCinFV_stack_11->SetBinContent(17,3.326174);
   hNCinFV_stack_11->SetBinContent(18,2.394159);
   hNCinFV_stack_11->SetBinContent(19,1.463836);
   hNCinFV_stack_11->SetBinContent(20,2.639056);
   hNCinFV_stack_11->SetBinContent(21,2.732646);
   hNCinFV_stack_11->SetBinContent(22,2.445722);
   hNCinFV_stack_11->SetBinContent(23,1.073786);
   hNCinFV_stack_11->SetBinContent(24,0.3934307);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(2,0.8083481);
   hNCinFV_stack_11->SetBinError(3,1.14459);
   hNCinFV_stack_11->SetBinError(4,1.193705);
   hNCinFV_stack_11->SetBinError(5,0.9001118);
   hNCinFV_stack_11->SetBinError(6,1.12743);
   hNCinFV_stack_11->SetBinError(7,1.179039);
   hNCinFV_stack_11->SetBinError(8,1.020609);
   hNCinFV_stack_11->SetBinError(9,1.160264);
   hNCinFV_stack_11->SetBinError(10,1.074404);
   hNCinFV_stack_11->SetBinError(11,1.11103);
   hNCinFV_stack_11->SetBinError(12,0.8331329);
   hNCinFV_stack_11->SetBinError(13,0.6794384);
   hNCinFV_stack_11->SetBinError(14,0.650847);
   hNCinFV_stack_11->SetBinError(15,0.7589683);
   hNCinFV_stack_11->SetBinError(16,0.854493);
   hNCinFV_stack_11->SetBinError(17,0.9215152);
   hNCinFV_stack_11->SetBinError(18,0.785313);
   hNCinFV_stack_11->SetBinError(19,0.620407);
   hNCinFV_stack_11->SetBinError(20,0.784283);
   hNCinFV_stack_11->SetBinError(21,0.8554385);
   hNCinFV_stack_11->SetBinError(22,0.7600838);
   hNCinFV_stack_11->SetBinError(23,0.5557297);
   hNCinFV_stack_11->SetBinError(24,0.2781975);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.761669);
   hnumuCCinFV_stack_12->SetBinContent(2,8.318778);
   hnumuCCinFV_stack_12->SetBinContent(3,9.680828);
   hnumuCCinFV_stack_12->SetBinContent(4,17.81775);
   hnumuCCinFV_stack_12->SetBinContent(5,17.42419);
   hnumuCCinFV_stack_12->SetBinContent(6,16.22326);
   hnumuCCinFV_stack_12->SetBinContent(7,14.52961);
   hnumuCCinFV_stack_12->SetBinContent(8,13.68902);
   hnumuCCinFV_stack_12->SetBinContent(9,14.89615);
   hnumuCCinFV_stack_12->SetBinContent(10,11.09362);
   hnumuCCinFV_stack_12->SetBinContent(11,13.77159);
   hnumuCCinFV_stack_12->SetBinContent(12,12.76308);
   hnumuCCinFV_stack_12->SetBinContent(13,6.648069);
   hnumuCCinFV_stack_12->SetBinContent(14,5.51157);
   hnumuCCinFV_stack_12->SetBinContent(15,8.293585);
   hnumuCCinFV_stack_12->SetBinContent(16,5.531035);
   hnumuCCinFV_stack_12->SetBinContent(17,5.977254);
   hnumuCCinFV_stack_12->SetBinContent(18,3.350832);
   hnumuCCinFV_stack_12->SetBinContent(19,5.322507);
   hnumuCCinFV_stack_12->SetBinContent(20,4.726988);
   hnumuCCinFV_stack_12->SetBinContent(21,5.285311);
   hnumuCCinFV_stack_12->SetBinContent(22,7.826728);
   hnumuCCinFV_stack_12->SetBinContent(23,2.600901);
   hnumuCCinFV_stack_12->SetBinContent(24,1.313142);
   hnumuCCinFV_stack_12->SetBinError(1,0.7078888);
   hnumuCCinFV_stack_12->SetBinError(2,1.613435);
   hnumuCCinFV_stack_12->SetBinError(3,1.600038);
   hnumuCCinFV_stack_12->SetBinError(4,2.260919);
   hnumuCCinFV_stack_12->SetBinError(5,2.789805);
   hnumuCCinFV_stack_12->SetBinError(6,3.056238);
   hnumuCCinFV_stack_12->SetBinError(7,2.014514);
   hnumuCCinFV_stack_12->SetBinError(8,1.891382);
   hnumuCCinFV_stack_12->SetBinError(9,2.166914);
   hnumuCCinFV_stack_12->SetBinError(10,1.703593);
   hnumuCCinFV_stack_12->SetBinError(11,2.055418);
   hnumuCCinFV_stack_12->SetBinError(12,2.151917);
   hnumuCCinFV_stack_12->SetBinError(13,1.351474);
   hnumuCCinFV_stack_12->SetBinError(14,1.291083);
   hnumuCCinFV_stack_12->SetBinError(15,1.719007);
   hnumuCCinFV_stack_12->SetBinError(16,1.226317);
   hnumuCCinFV_stack_12->SetBinError(17,1.224918);
   hnumuCCinFV_stack_12->SetBinError(18,0.9234644);
   hnumuCCinFV_stack_12->SetBinError(19,1.192082);
   hnumuCCinFV_stack_12->SetBinError(20,1.120842);
   hnumuCCinFV_stack_12->SetBinError(21,1.166004);
   hnumuCCinFV_stack_12->SetBinError(22,2.515499);
   hnumuCCinFV_stack_12->SetBinError(23,1.046262);
   hnumuCCinFV_stack_12->SetBinError(24,0.6262211);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7539932);
   hnueCCinFV_stack_13->SetBinContent(2,1.046837);
   hnueCCinFV_stack_13->SetBinContent(3,0.838637);
   hnueCCinFV_stack_13->SetBinContent(4,0.977464);
   hnueCCinFV_stack_13->SetBinContent(5,1.976782);
   hnueCCinFV_stack_13->SetBinContent(6,1.522787);
   hnueCCinFV_stack_13->SetBinContent(7,0.8577237);
   hnueCCinFV_stack_13->SetBinContent(8,0.4975739);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4489435);
   hnueCCinFV_stack_13->SetBinError(2,0.5697868);
   hnueCCinFV_stack_13->SetBinError(3,0.5488178);
   hnueCCinFV_stack_13->SetBinError(4,0.5774033);
   hnueCCinFV_stack_13->SetBinError(5,1.228638);
   hnueCCinFV_stack_13->SetBinError(6,0.8785653);
   hnueCCinFV_stack_13->SetBinError(7,0.4307902);
   hnueCCinFV_stack_13->SetBinError(8,0.3599592);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.3172361);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__8->SetBinContent(1,19.62881);
   hmcerror__8->SetBinContent(2,61.83618);
   hmcerror__8->SetBinContent(3,93.8419);
   hmcerror__8->SetBinContent(4,122.9823);
   hmcerror__8->SetBinContent(5,125.2139);
   hmcerror__8->SetBinContent(6,120.0488);
   hmcerror__8->SetBinContent(7,119.2902);
   hmcerror__8->SetBinContent(8,110.3134);
   hmcerror__8->SetBinContent(9,99.21898);
   hmcerror__8->SetBinContent(10,94.71347);
   hmcerror__8->SetBinContent(11,87.30489);
   hmcerror__8->SetBinContent(12,76.8396);
   hmcerror__8->SetBinContent(13,59.09314);
   hmcerror__8->SetBinContent(14,52.43113);
   hmcerror__8->SetBinContent(15,58.62866);
   hmcerror__8->SetBinContent(16,54.14635);
   hmcerror__8->SetBinContent(17,49.0639);
   hmcerror__8->SetBinContent(18,38.83873);
   hmcerror__8->SetBinContent(19,41.3403);
   hmcerror__8->SetBinContent(20,43.03949);
   hmcerror__8->SetBinContent(21,40.97674);
   hmcerror__8->SetBinContent(22,35.24545);
   hmcerror__8->SetBinContent(23,21.75769);
   hmcerror__8->SetBinContent(24,8.999228);
   hmcerror__8->SetBinError(1,9.937304);
   hmcerror__8->SetBinError(2,20.10684);
   hmcerror__8->SetBinError(3,25.41409);
   hmcerror__8->SetBinError(4,32.75882);
   hmcerror__8->SetBinError(5,33.15152);
   hmcerror__8->SetBinError(6,35.56009);
   hmcerror__8->SetBinError(7,32.04143);
   hmcerror__8->SetBinError(8,30.28124);
   hmcerror__8->SetBinError(9,31.15088);
   hmcerror__8->SetBinError(10,27.73175);
   hmcerror__8->SetBinError(11,26.15997);
   hmcerror__8->SetBinError(12,25.83302);
   hmcerror__8->SetBinError(13,19.89027);
   hmcerror__8->SetBinError(14,17.28879);
   hmcerror__8->SetBinError(15,19.75631);
   hmcerror__8->SetBinError(16,27.38465);
   hmcerror__8->SetBinError(17,17.93489);
   hmcerror__8->SetBinError(18,17.59478);
   hmcerror__8->SetBinError(19,16.01617);
   hmcerror__8->SetBinError(20,17.68857);
   hmcerror__8->SetBinError(21,20.76632);
   hmcerror__8->SetBinError(22,20.75918);
   hmcerror__8->SetBinError(23,15.31381);
   hmcerror__8->SetBinError(24,12.79572);
   hmcerror__8->SetBinError(25,0.3895343);
   hmcerror__8->SetEntries(1602.903);

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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3009[24] = {
   22,
   76,
   93,
   113,
   108,
   103,
   91,
   115,
   85,
   85,
   59,
   57,
   62,
   53,
   51,
   49,
   34,
   39,
   40,
   43,
   31,
   31,
   24,
   6};
   Double_t _felx3009[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3009[24] = {
   4.8417,
   8.8425,
   9.7658,
   10.63015,
   10.3923,
   10.14889,
   9.6617,
   10.72381,
   9.3428,
   9.3428,
   7.8097,
   7.679,
   8.0018,
   7.4105,
   7.2725,
   7.1318,
   5.9703,
   6.3813,
   6.4604,
   6.6917,
   5.7094,
   5.7094,
   5.0476,
   2.67925};
   Double_t _fehx3009[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3009[24] = {
   4.6299,
   8.6406,
   9.564,
   10.63015,
   10.3923,
   10.14889,
   9.46,
   10.72381,
   9.1411,
   9.1411,
   7.6066,
   7.4757,
   7.7989,
   7.2068,
   7.0686,
   6.9277,
   5.7635,
   6.1757,
   6.2549,
   6.4868,
   5.5017,
   5.5017,
   4.837,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,3.465);
   Graph_Graph3009->SetMinimum(2.988675);
   Graph_Graph3009->SetMaximum(137.9641);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/24","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 237.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all");
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
   
   Double_t _fx3010[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3010[24] = {
   0.5062612,
   0.3251631,
   0.2708181,
   0.2663702,
   0.2647591,
   0.2962138,
   0.2686006,
   0.2745018,
   0.3139609,
   0.2927963,
   0.2996392,
   0.3361941,
   0.3365919,
   0.3297428,
   0.3369737,
   0.5057524,
   0.3655414,
   0.4530216,
   0.3874226,
   0.4109847,
   0.5067832,
   0.5889889,
   0.7038344,
   1.421868};
   Double_t _fehx3010[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3010[24] = {
   0.5062612,
   0.3251631,
   0.2708181,
   0.2663702,
   0.2647591,
   0.2962138,
   0.2686006,
   0.2745018,
   0.3139609,
   0.2927963,
   0.2996392,
   0.3361941,
   0.3365919,
   0.3297428,
   0.3369737,
   0.5057524,
   0.3655414,
   0.4530216,
   0.3874226,
   0.4109847,
   0.5067832,
   0.5889889,
   0.7038344,
   1.421868};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3011[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3011[24] = {
   0.2102877,
   0.1887968,
   0.1903826,
   0.1841172,
   0.1920051,
   0.1967859,
   0.1954432,
   0.2005229,
   0.2070899,
   0.1968418,
   0.2004395,
   0.2021646,
   0.2229865,
   0.2007445,
   0.1914137,
   0.1962663,
   0.2108356,
   0.2281205,
   0.1830177,
   0.2212342,
   0.1786532,
   0.243534,
   0.2147547,
   0.2846164};
   Double_t _fehx3011[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3011[24] = {
   0.2102877,
   0.1887968,
   0.1903826,
   0.1841172,
   0.1920051,
   0.1967859,
   0.1954432,
   0.2005229,
   0.2070899,
   0.1968418,
   0.2004395,
   0.2021646,
   0.2229865,
   0.2007445,
   0.1914137,
   0.1962663,
   0.2108356,
   0.2281205,
   0.1830177,
   0.2212342,
   0.1786532,
   0.243534,
   0.2147547,
   0.2846164};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3012[24] = {
   1.120802,
   1.229054,
   0.9910285,
   0.9188314,
   0.8625239,
   0.8579848,
   0.7628453,
   1.042484,
   0.8566909,
   0.8974436,
   0.6757926,
   0.741805,
   1.049191,
   1.01085,
   0.8698818,
   0.9049549,
   0.6929738,
   1.004152,
   0.9675789,
   0.9990825,
   0.7565267,
   0.8795462,
   1.103058,
   0.6667239};
   Double_t _felx3012[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3012[24] = {
   0.246663,
   0.1429988,
   0.1040665,
   0.08643639,
   0.0829964,
   0.08453975,
   0.08099322,
   0.09721213,
   0.09416344,
   0.09864278,
   0.08945318,
   0.09993545,
   0.13541,
   0.1413378,
   0.1240434,
   0.1317134,
   0.1216842,
   0.1643025,
   0.1562737,
   0.1554781,
   0.1393327,
   0.1619897,
   0.2319916,
   0.29772};
   Double_t _fehx3012[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3012[24] = {
   0.2358727,
   0.1397337,
   0.1019161,
   0.08643639,
   0.0829964,
   0.08453975,
   0.07930238,
   0.09721213,
   0.09213056,
   0.0965132,
   0.08712685,
   0.09728968,
   0.1319764,
   0.1374527,
   0.1205656,
   0.127944,
   0.1174693,
   0.1590088,
   0.1513027,
   0.1507174,
   0.134264,
   0.1560967,
   0.2223122,
   0.2687542};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,3.465);
   Graph_Graph3012->SetMinimum(0.2690255);
   Graph_Graph3012->SetMaximum(1.468766);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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

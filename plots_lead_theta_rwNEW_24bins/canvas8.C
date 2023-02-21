#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 12:48:28 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
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
   pad1->Range(-0.4846154,-1.9795,3.553846,218.8911);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__22->SetBinContent(1,27.02133);
   hmc__22->SetBinContent(2,66.60597);
   hmc__22->SetBinContent(3,98.97501);
   hmc__22->SetBinContent(4,94.47473);
   hmc__22->SetBinContent(5,93.09419);
   hmc__22->SetBinContent(6,81.98833);
   hmc__22->SetBinContent(7,67.22224);
   hmc__22->SetBinContent(8,61.70584);
   hmc__22->SetBinContent(9,47.31055);
   hmc__22->SetBinContent(10,39.38103);
   hmc__22->SetBinContent(11,39.26647);
   hmc__22->SetBinContent(12,32.87444);
   hmc__22->SetBinContent(13,22.0321);
   hmc__22->SetBinContent(14,24.8204);
   hmc__22->SetBinContent(15,22.60096);
   hmc__22->SetBinContent(16,31.96487);
   hmc__22->SetBinContent(17,22.0226);
   hmc__22->SetBinContent(18,19.16742);
   hmc__22->SetBinContent(19,12.84191);
   hmc__22->SetBinContent(20,17.51142);
   hmc__22->SetBinContent(21,14.85424);
   hmc__22->SetBinContent(22,14.4232);
   hmc__22->SetBinContent(23,9.069649);
   hmc__22->SetBinContent(24,2.768896);
   hmc__22->SetBinError(1,14.0472);
   hmc__22->SetBinError(2,25.68015);
   hmc__22->SetBinError(3,26.32591);
   hmc__22->SetBinError(4,30.12393);
   hmc__22->SetBinError(5,26.77563);
   hmc__22->SetBinError(6,23.35501);
   hmc__22->SetBinError(7,20.7074);
   hmc__22->SetBinError(8,19.62588);
   hmc__22->SetBinError(9,17.13961);
   hmc__22->SetBinError(10,12.32019);
   hmc__22->SetBinError(11,15.73661);
   hmc__22->SetBinError(12,15.10143);
   hmc__22->SetBinError(13,11.10661);
   hmc__22->SetBinError(14,11.73697);
   hmc__22->SetBinError(15,9.990445);
   hmc__22->SetBinError(16,17.94232);
   hmc__22->SetBinError(17,15.00643);
   hmc__22->SetBinError(18,11.06191);
   hmc__22->SetBinError(19,10.45795);
   hmc__22->SetBinError(20,18.70472);
   hmc__22->SetBinError(21,10.74569);
   hmc__22->SetBinError(22,11.20852);
   hmc__22->SetBinError(23,8.559783);
   hmc__22->SetBinError(24,5.254788);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.9795);
   hmc__22->SetMaximum(207.8475);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(103.9238);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9303237);
   hbadmatch_stack_1->SetBinContent(2,2.545382);
   hbadmatch_stack_1->SetBinContent(3,2.072716);
   hbadmatch_stack_1->SetBinContent(4,3.174259);
   hbadmatch_stack_1->SetBinContent(5,1.858957);
   hbadmatch_stack_1->SetBinContent(6,1.320373);
   hbadmatch_stack_1->SetBinContent(7,1.681116);
   hbadmatch_stack_1->SetBinContent(8,2.484368);
   hbadmatch_stack_1->SetBinContent(9,2.592429);
   hbadmatch_stack_1->SetBinContent(10,1.209779);
   hbadmatch_stack_1->SetBinContent(11,2.125754);
   hbadmatch_stack_1->SetBinContent(12,0.5352025);
   hbadmatch_stack_1->SetBinContent(13,1.572954);
   hbadmatch_stack_1->SetBinContent(14,1.418437);
   hbadmatch_stack_1->SetBinContent(15,1.261647);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,1.294487);
   hbadmatch_stack_1->SetBinContent(18,1.073786);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.5884556);
   hbadmatch_stack_1->SetBinContent(22,0.9024922);
   hbadmatch_stack_1->SetBinContent(23,1.073786);
   hbadmatch_stack_1->SetBinError(1,0.4814682);
   hbadmatch_stack_1->SetBinError(2,1.271762);
   hbadmatch_stack_1->SetBinError(3,0.7688655);
   hbadmatch_stack_1->SetBinError(4,0.8768439);
   hbadmatch_stack_1->SetBinError(5,0.6804124);
   hbadmatch_stack_1->SetBinError(6,0.5548703);
   hbadmatch_stack_1->SetBinError(7,0.7028308);
   hbadmatch_stack_1->SetBinError(8,0.8556093);
   hbadmatch_stack_1->SetBinError(9,0.8559775);
   hbadmatch_stack_1->SetBinError(10,0.4950837);
   hbadmatch_stack_1->SetBinError(11,0.9340234);
   hbadmatch_stack_1->SetBinError(12,0.3921167);
   hbadmatch_stack_1->SetBinError(13,0.7957285);
   hbadmatch_stack_1->SetBinError(14,0.5913299);
   hbadmatch_stack_1->SetBinError(15,0.6678117);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.59795);
   hbadmatch_stack_1->SetBinError(18,0.5557297);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3397478);
   hbadmatch_stack_1->SetBinError(22,0.4526115);
   hbadmatch_stack_1->SetBinError(23,0.5557297);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,1.697008);
   hext_stack_2->SetBinContent(2,6.724599);
   hext_stack_2->SetBinContent(3,17.86548);
   hext_stack_2->SetBinContent(4,9.084763);
   hext_stack_2->SetBinContent(5,15.77787);
   hext_stack_2->SetBinContent(6,18.69026);
   hext_stack_2->SetBinContent(7,12.62164);
   hext_stack_2->SetBinContent(8,11.40184);
   hext_stack_2->SetBinContent(9,10.30179);
   hext_stack_2->SetBinContent(10,14.04615);
   hext_stack_2->SetBinContent(11,12.34908);
   hext_stack_2->SetBinContent(12,9.230396);
   hext_stack_2->SetBinContent(13,6.802392);
   hext_stack_2->SetBinContent(14,10.02205);
   hext_stack_2->SetBinContent(15,6.496764);
   hext_stack_2->SetBinContent(16,14.71524);
   hext_stack_2->SetBinContent(17,5.429782);
   hext_stack_2->SetBinContent(18,5.40106);
   hext_stack_2->SetBinContent(19,2.428004);
   hext_stack_2->SetBinContent(20,2.681789);
   hext_stack_2->SetBinContent(21,1.78639);
   hext_stack_2->SetBinContent(22,1.37261);
   hext_stack_2->SetBinContent(23,1.78639);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinError(1,0.8873887);
   hext_stack_2->SetBinError(2,1.680019);
   hext_stack_2->SetBinError(3,2.874947);
   hext_stack_2->SetBinError(4,1.84878);
   hext_stack_2->SetBinError(5,2.716907);
   hext_stack_2->SetBinError(6,2.920597);
   hext_stack_2->SetBinError(7,2.39096);
   hext_stack_2->SetBinError(8,2.284889);
   hext_stack_2->SetBinError(9,2.061621);
   hext_stack_2->SetBinError(10,2.337081);
   hext_stack_2->SetBinError(11,2.45049);
   hext_stack_2->SetBinError(12,1.950755);
   hext_stack_2->SetBinError(13,1.657538);
   hext_stack_2->SetBinError(14,2.177084);
   hext_stack_2->SetBinError(15,1.541077);
   hext_stack_2->SetBinError(16,2.921884);
   hext_stack_2->SetBinError(17,1.437083);
   hext_stack_2->SetBinError(18,1.694111);
   hext_stack_2->SetBinError(19,1.028599);
   hext_stack_2->SetBinError(20,1.018372);
   hext_stack_2->SetBinError(21,0.8039566);
   hext_stack_2->SetBinError(22,0.8259691);
   hext_stack_2->SetBinError(23,0.8039566);
   hext_stack_2->SetBinError(24,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4532775);
   hdirt_stack_3->SetBinContent(2,0.4762587);
   hdirt_stack_3->SetBinContent(3,1.865221);
   hdirt_stack_3->SetBinContent(4,2.123665);
   hdirt_stack_3->SetBinContent(5,1.672476);
   hdirt_stack_3->SetBinContent(6,1.117273);
   hdirt_stack_3->SetBinContent(7,1.087465);
   hdirt_stack_3->SetBinContent(8,1.491792);
   hdirt_stack_3->SetBinContent(9,1.42627);
   hdirt_stack_3->SetBinContent(10,0.4142144);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,1.195944);
   hdirt_stack_3->SetBinContent(15,0.811899);
   hdirt_stack_3->SetBinContent(16,0.2470892);
   hdirt_stack_3->SetBinContent(17,0.2761429);
   hdirt_stack_3->SetBinContent(18,0.8606333);
   hdirt_stack_3->SetBinContent(19,1.147013);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(21,0.6123907);
   hdirt_stack_3->SetBinContent(22,0.3569671);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinError(1,0.3572343);
   hdirt_stack_3->SetBinError(2,0.3652866);
   hdirt_stack_3->SetBinError(3,0.7609291);
   hdirt_stack_3->SetBinError(4,0.7833706);
   hdirt_stack_3->SetBinError(5,0.5713412);
   hdirt_stack_3->SetBinError(6,0.590771);
   hdirt_stack_3->SetBinError(7,0.5790138);
   hdirt_stack_3->SetBinError(8,0.6050722);
   hdirt_stack_3->SetBinError(9,0.6670199);
   hdirt_stack_3->SetBinError(10,0.2391468);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.6109736);
   hdirt_stack_3->SetBinError(15,0.476673);
   hdirt_stack_3->SetBinError(16,0.2470892);
   hdirt_stack_3->SetBinError(17,0.1952625);
   hdirt_stack_3->SetBinError(18,0.456873);
   hdirt_stack_3->SetBinError(19,0.9535811);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(21,0.4468697);
   hdirt_stack_3->SetBinError(22,0.258803);
   hdirt_stack_3->SetBinError(23,0.4258516);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.808882);
   houtFV_stack_4->SetBinContent(2,11.7922);
   houtFV_stack_4->SetBinContent(3,18.03174);
   houtFV_stack_4->SetBinContent(4,16.91287);
   houtFV_stack_4->SetBinContent(5,19.07728);
   houtFV_stack_4->SetBinContent(6,17.23189);
   houtFV_stack_4->SetBinContent(7,14.12235);
   houtFV_stack_4->SetBinContent(8,14.11321);
   houtFV_stack_4->SetBinContent(9,8.905824);
   houtFV_stack_4->SetBinContent(10,6.768532);
   houtFV_stack_4->SetBinContent(11,7.750495);
   houtFV_stack_4->SetBinContent(12,7.516547);
   houtFV_stack_4->SetBinContent(13,3.946209);
   houtFV_stack_4->SetBinContent(14,5.229931);
   houtFV_stack_4->SetBinContent(15,5.8261);
   houtFV_stack_4->SetBinContent(16,7.607004);
   houtFV_stack_4->SetBinContent(17,6.193544);
   houtFV_stack_4->SetBinContent(18,5.861928);
   houtFV_stack_4->SetBinContent(19,4.012683);
   houtFV_stack_4->SetBinContent(20,6.553477);
   houtFV_stack_4->SetBinContent(21,5.310605);
   houtFV_stack_4->SetBinContent(22,4.546258);
   houtFV_stack_4->SetBinContent(23,1.662242);
   houtFV_stack_4->SetBinContent(24,0.9303237);
   houtFV_stack_4->SetBinError(1,0.9570368);
   houtFV_stack_4->SetBinError(2,1.772507);
   houtFV_stack_4->SetBinError(3,2.130915);
   houtFV_stack_4->SetBinError(4,2.085815);
   houtFV_stack_4->SetBinError(5,2.130829);
   houtFV_stack_4->SetBinError(6,2.166682);
   houtFV_stack_4->SetBinError(7,1.89587);
   houtFV_stack_4->SetBinError(8,2.121837);
   houtFV_stack_4->SetBinError(9,1.428555);
   houtFV_stack_4->SetBinError(10,1.383666);
   houtFV_stack_4->SetBinError(11,1.420525);
   houtFV_stack_4->SetBinError(12,1.351205);
   houtFV_stack_4->SetBinError(13,0.9606844);
   houtFV_stack_4->SetBinError(14,1.12717);
   houtFV_stack_4->SetBinError(15,1.293286);
   houtFV_stack_4->SetBinError(16,1.816897);
   houtFV_stack_4->SetBinError(17,1.235347);
   houtFV_stack_4->SetBinError(18,1.210949);
   houtFV_stack_4->SetBinError(19,0.9405604);
   houtFV_stack_4->SetBinError(20,1.200881);
   houtFV_stack_4->SetBinError(21,1.257186);
   houtFV_stack_4->SetBinError(22,1.04779);
   houtFV_stack_4->SetBinError(23,0.6513556);
   houtFV_stack_4->SetBinError(24,0.4814682);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.728144);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.593548);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.71943);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.536252);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.827294);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3927561);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5259893);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.522897);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5189745);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4847881);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.778638);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.088783);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.93426);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.76746);
   hNCpi0inFVres_stack_7->SetBinContent(5,16.68658);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.95087);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.12459);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.8);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.688295);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.909672);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.177718);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.976682);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.120487);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.445671);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.18933);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.467666);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.17488);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.74193);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.199204);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8929677);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.064944);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.309308);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.241058);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6288912);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9067931);
   hNCpi0inFVres_stack_7->SetBinError(3,1.060759);
   hNCpi0inFVres_stack_7->SetBinError(4,1.240385);
   hNCpi0inFVres_stack_7->SetBinError(5,1.309083);
   hNCpi0inFVres_stack_7->SetBinError(6,1.069529);
   hNCpi0inFVres_stack_7->SetBinError(7,1.051393);
   hNCpi0inFVres_stack_7->SetBinError(8,1.086917);
   hNCpi0inFVres_stack_7->SetBinError(9,0.717855);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7712199);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8282428);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7314176);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4971405);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6763538);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5085583);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5290636);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4819022);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4406266);
   hNCpi0inFVres_stack_7->SetBinError(19,0.282353);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2401416);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5173475);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2776029);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3913503);
   hNCpi0inFVres_stack_7->SetBinError(24,0.05579997);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.966626);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.69153);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.964728);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.784622);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.972274);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.039948);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.094588);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.379726);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.96189);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9491041);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.585404);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5151539);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4540403);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5221521);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7525746);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.785678);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6020138);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5376982);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5919633);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3711885);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3355772);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3531893);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2501964);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1861173);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1994106);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.166316);
   hCCpi0inFV_stack_10->SetBinContent(2,18.45689);
   hCCpi0inFV_stack_10->SetBinContent(3,22.15854);
   hCCpi0inFV_stack_10->SetBinContent(4,22.12098);
   hCCpi0inFV_stack_10->SetBinContent(5,19.12672);
   hCCpi0inFV_stack_10->SetBinContent(6,14.84352);
   hCCpi0inFV_stack_10->SetBinContent(7,15.07835);
   hCCpi0inFV_stack_10->SetBinContent(8,12.24998);
   hCCpi0inFV_stack_10->SetBinContent(9,9.941324);
   hCCpi0inFV_stack_10->SetBinContent(10,5.285002);
   hCCpi0inFV_stack_10->SetBinContent(11,4.647978);
   hCCpi0inFV_stack_10->SetBinContent(12,5.211212);
   hCCpi0inFV_stack_10->SetBinContent(13,2.145139);
   hCCpi0inFV_stack_10->SetBinContent(14,2.289344);
   hCCpi0inFV_stack_10->SetBinContent(15,3.406081);
   hCCpi0inFV_stack_10->SetBinContent(16,4.05302);
   hCCpi0inFV_stack_10->SetBinContent(17,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(18,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(19,2.311231);
   hCCpi0inFV_stack_10->SetBinContent(20,3.020026);
   hCCpi0inFV_stack_10->SetBinContent(21,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(22,3.938418);
   hCCpi0inFV_stack_10->SetBinContent(23,1.91052);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,1.305919);
   hCCpi0inFV_stack_10->SetBinError(2,2.181068);
   hCCpi0inFV_stack_10->SetBinError(3,2.459072);
   hCCpi0inFV_stack_10->SetBinError(4,2.36298);
   hCCpi0inFV_stack_10->SetBinError(5,2.174949);
   hCCpi0inFV_stack_10->SetBinError(6,1.972576);
   hCCpi0inFV_stack_10->SetBinError(7,1.977565);
   hCCpi0inFV_stack_10->SetBinError(8,1.75976);
   hCCpi0inFV_stack_10->SetBinError(9,1.610284);
   hCCpi0inFV_stack_10->SetBinError(10,1.141267);
   hCCpi0inFV_stack_10->SetBinError(11,1.010145);
   hCCpi0inFV_stack_10->SetBinError(12,1.150436);
   hCCpi0inFV_stack_10->SetBinError(13,0.692208);
   hCCpi0inFV_stack_10->SetBinError(14,0.8330862);
   hCCpi0inFV_stack_10->SetBinError(15,0.9069059);
   hCCpi0inFV_stack_10->SetBinError(16,1.019635);
   hCCpi0inFV_stack_10->SetBinError(17,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(18,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(19,0.764553);
   hCCpi0inFV_stack_10->SetBinError(20,0.9000317);
   hCCpi0inFV_stack_10->SetBinError(21,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(22,0.9871901);
   hCCpi0inFV_stack_10->SetBinError(23,0.6511312);
   hCCpi0inFV_stack_10->SetBinError(24,0.4383608);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.91052);
   hNCinFV_stack_11->SetBinContent(2,4.628559);
   hNCinFV_stack_11->SetBinContent(3,4.601139);
   hNCinFV_stack_11->SetBinContent(4,4.985034);
   hNCinFV_stack_11->SetBinContent(5,4.481716);
   hNCinFV_stack_11->SetBinContent(6,3.512746);
   hNCinFV_stack_11->SetBinContent(7,1.950857);
   hNCinFV_stack_11->SetBinContent(8,1.413964);
   hNCinFV_stack_11->SetBinContent(9,1.463836);
   hNCinFV_stack_11->SetBinContent(10,0.9818863);
   hNCinFV_stack_11->SetBinContent(11,1.268811);
   hNCinFV_stack_11->SetBinContent(12,0.7868615);
   hNCinFV_stack_11->SetBinContent(13,0.3401776);
   hNCinFV_stack_11->SetBinContent(14,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.3900497);
   hNCinFV_stack_11->SetBinContent(18,0.3917402);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,1.465526);
   hNCinFV_stack_11->SetBinContent(21,0.7302274);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.6511312);
   hNCinFV_stack_11->SetBinError(2,1.161212);
   hNCinFV_stack_11->SetBinError(3,1.000041);
   hNCinFV_stack_11->SetBinError(4,1.127887);
   hNCinFV_stack_11->SetBinError(5,1.126972);
   hNCinFV_stack_11->SetBinError(6,0.9401669);
   hNCinFV_stack_11->SetBinError(7,0.7609034);
   hNCinFV_stack_11->SetBinError(8,0.6515799);
   hNCinFV_stack_11->SetBinError(9,0.620407);
   hNCinFV_stack_11->SetBinError(10,0.4391155);
   hNCinFV_stack_11->SetBinError(11,0.5889569);
   hNCinFV_stack_11->SetBinError(12,0.3934307);
   hNCinFV_stack_11->SetBinError(13,0.3401776);
   hNCinFV_stack_11->SetBinError(14,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.2758068);
   hNCinFV_stack_11->SetBinError(18,0.2770047);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.6209405);
   hNCinFV_stack_11->SetBinError(21,0.4379386);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.962879);
   hnumuCCinFV_stack_12->SetBinContent(2,5.964266);
   hnumuCCinFV_stack_12->SetBinContent(3,11.97064);
   hnumuCCinFV_stack_12->SetBinContent(4,12.31392);
   hnumuCCinFV_stack_12->SetBinContent(5,8.193769);
   hnumuCCinFV_stack_12->SetBinContent(6,9.263748);
   hnumuCCinFV_stack_12->SetBinContent(7,6.678342);
   hnumuCCinFV_stack_12->SetBinContent(8,6.021115);
   hnumuCCinFV_stack_12->SetBinContent(9,5.456282);
   hnumuCCinFV_stack_12->SetBinContent(10,3.803911);
   hnumuCCinFV_stack_12->SetBinContent(11,4.458714);
   hnumuCCinFV_stack_12->SetBinContent(12,4.157518);
   hnumuCCinFV_stack_12->SetBinContent(13,2.71785);
   hnumuCCinFV_stack_12->SetBinContent(14,0.6197851);
   hnumuCCinFV_stack_12->SetBinContent(15,2.023731);
   hnumuCCinFV_stack_12->SetBinContent(16,1.536349);
   hnumuCCinFV_stack_12->SetBinContent(17,2.625729);
   hnumuCCinFV_stack_12->SetBinContent(18,1.169061);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9879233);
   hnumuCCinFV_stack_12->SetBinContent(20,1.612188);
   hnumuCCinFV_stack_12->SetBinContent(21,1.49788);
   hnumuCCinFV_stack_12->SetBinContent(22,1.466293);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(1,1.38533);
   hnumuCCinFV_stack_12->SetBinError(2,1.270401);
   hnumuCCinFV_stack_12->SetBinError(3,2.681851);
   hnumuCCinFV_stack_12->SetBinError(4,2.551918);
   hnumuCCinFV_stack_12->SetBinError(5,1.55615);
   hnumuCCinFV_stack_12->SetBinError(6,1.56999);
   hnumuCCinFV_stack_12->SetBinError(7,1.38767);
   hnumuCCinFV_stack_12->SetBinError(8,1.218618);
   hnumuCCinFV_stack_12->SetBinError(9,1.314853);
   hnumuCCinFV_stack_12->SetBinError(10,0.9807142);
   hnumuCCinFV_stack_12->SetBinError(11,1.166235);
   hnumuCCinFV_stack_12->SetBinError(12,1.07132);
   hnumuCCinFV_stack_12->SetBinError(13,0.9510833);
   hnumuCCinFV_stack_12->SetBinError(14,0.3587981);
   hnumuCCinFV_stack_12->SetBinError(15,0.7313883);
   hnumuCCinFV_stack_12->SetBinError(16,0.6466895);
   hnumuCCinFV_stack_12->SetBinError(17,0.88255);
   hnumuCCinFV_stack_12->SetBinError(18,0.605126);
   hnumuCCinFV_stack_12->SetBinError(19,0.5061972);
   hnumuCCinFV_stack_12->SetBinError(20,0.6233161);
   hnumuCCinFV_stack_12->SetBinError(21,0.631849);
   hnumuCCinFV_stack_12->SetBinError(22,0.6221031);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(24,0.3401776);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.6187164);
   hnueCCinFV_stack_13->SetBinContent(2,1.643961);
   hnueCCinFV_stack_13->SetBinContent(3,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.357977);
   hnueCCinFV_stack_13->SetBinError(2,0.9270873);
   hnueCCinFV_stack_13->SetBinError(3,0.5475369);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.3025491);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__23->SetBinContent(1,27.02133);
   hmcerror__23->SetBinContent(2,66.60597);
   hmcerror__23->SetBinContent(3,98.97501);
   hmcerror__23->SetBinContent(4,94.47473);
   hmcerror__23->SetBinContent(5,93.09419);
   hmcerror__23->SetBinContent(6,81.98833);
   hmcerror__23->SetBinContent(7,67.22224);
   hmcerror__23->SetBinContent(8,61.70584);
   hmcerror__23->SetBinContent(9,47.31055);
   hmcerror__23->SetBinContent(10,39.38103);
   hmcerror__23->SetBinContent(11,39.26647);
   hmcerror__23->SetBinContent(12,32.87444);
   hmcerror__23->SetBinContent(13,22.0321);
   hmcerror__23->SetBinContent(14,24.8204);
   hmcerror__23->SetBinContent(15,22.60096);
   hmcerror__23->SetBinContent(16,31.96487);
   hmcerror__23->SetBinContent(17,22.0226);
   hmcerror__23->SetBinContent(18,19.16742);
   hmcerror__23->SetBinContent(19,12.84191);
   hmcerror__23->SetBinContent(20,17.51142);
   hmcerror__23->SetBinContent(21,14.85424);
   hmcerror__23->SetBinContent(22,14.4232);
   hmcerror__23->SetBinContent(23,9.069649);
   hmcerror__23->SetBinContent(24,2.768896);
   hmcerror__23->SetBinError(1,14.0472);
   hmcerror__23->SetBinError(2,25.68015);
   hmcerror__23->SetBinError(3,26.32591);
   hmcerror__23->SetBinError(4,30.12393);
   hmcerror__23->SetBinError(5,26.77563);
   hmcerror__23->SetBinError(6,23.35501);
   hmcerror__23->SetBinError(7,20.7074);
   hmcerror__23->SetBinError(8,19.62588);
   hmcerror__23->SetBinError(9,17.13961);
   hmcerror__23->SetBinError(10,12.32019);
   hmcerror__23->SetBinError(11,15.73661);
   hmcerror__23->SetBinError(12,15.10143);
   hmcerror__23->SetBinError(13,11.10661);
   hmcerror__23->SetBinError(14,11.73697);
   hmcerror__23->SetBinError(15,9.990445);
   hmcerror__23->SetBinError(16,17.94232);
   hmcerror__23->SetBinError(17,15.00643);
   hmcerror__23->SetBinError(18,11.06191);
   hmcerror__23->SetBinError(19,10.45795);
   hmcerror__23->SetBinError(20,18.70472);
   hmcerror__23->SetBinError(21,10.74569);
   hmcerror__23->SetBinError(22,11.20852);
   hmcerror__23->SetBinError(23,8.559783);
   hmcerror__23->SetBinError(24,5.254788);
   hmcerror__23->SetBinError(25,0.3895343);
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
   Double_t _fy3029[24] = {
   29,
   58,
   87,
   87,
   95,
   93,
   57,
   55,
   39,
   40,
   25,
   24,
   28,
   14,
   26,
   15,
   16,
   18,
   17,
   20,
   19,
   12,
   8,
   3};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   5.5285,
   7.7446,
   9.4503,
   9.4503,
   9.8686,
   9.7658,
   7.679,
   7.546,
   6.3813,
   6.4604,
   5.1474,
   5.0476,
   5.4358,
   3.9102,
   5.2453,
   4.0385,
   4.1628,
   4.4008,
   4.2835,
   4.6266,
   4.5151,
   3.64022,
   3.0307,
   2.143368};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   5.3201,
   7.5415,
   9.2488,
   9.2488,
   9.667,
   9.564,
   7.4757,
   7.3425,
   6.1757,
   6.2549,
   4.9374,
   4.837,
   5.2271,
   3.6898,
   5.0358,
   3.8197,
   3.9454,
   4.1858,
   4.0673,
   4.4133,
   4.3011,
   3.4155,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(115.048);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.519856,
   0.3855533,
   0.2659854,
   0.318857,
   0.2876187,
   0.2848578,
   0.3080438,
   0.3180554,
   0.3622787,
   0.3128458,
   0.4007646,
   0.4593669,
   0.5041101,
   0.4728757,
   0.4420364,
   0.5613137,
   0.6814104,
   0.5771202,
   0.814361,
   1.068144,
   0.7234092,
   0.7771174,
   0.9437833,
   1.897792};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.519856,
   0.3855533,
   0.2659854,
   0.318857,
   0.2876187,
   0.2848578,
   0.3080438,
   0.3180554,
   0.3622787,
   0.3128458,
   0.4007646,
   0.4593669,
   0.5041101,
   0.4728757,
   0.4420364,
   0.5613137,
   0.6814104,
   0.5771202,
   0.814361,
   1.068144,
   0.7234092,
   0.7771174,
   0.9437833,
   1.897792};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   Double_t _fely3031[24] = {
   0.2288391,
   0.1889103,
   0.1700778,
   0.1895508,
   0.178426,
   0.1815811,
   0.1914538,
   0.1918529,
   0.2031239,
   0.1769807,
   0.1646144,
   0.1936461,
   0.2068462,
   0.1805301,
   0.1936309,
   0.1722131,
   0.1853592,
   0.2127797,
   0.2629041,
   0.2157016,
   0.2384789,
   0.2292754,
   0.2540747,
   0.494419};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.2288391,
   0.1889103,
   0.1700778,
   0.1895508,
   0.178426,
   0.1815811,
   0.1914538,
   0.1918529,
   0.2031239,
   0.1769807,
   0.1646144,
   0.1936461,
   0.2068462,
   0.1805301,
   0.1936309,
   0.1722131,
   0.1853592,
   0.2127797,
   0.2629041,
   0.2157016,
   0.2384789,
   0.2292754,
   0.2540747,
   0.494419};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
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
   Double_t _fy3032[24] = {
   1.073226,
   0.8707928,
   0.8790097,
   0.9208812,
   1.020472,
   1.134308,
   0.8479336,
   0.8913257,
   0.8243404,
   1.015717,
   0.6366755,
   0.7300506,
   1.270873,
   0.5640521,
   1.150394,
   0.4692652,
   0.7265263,
   0.9390934,
   1.32379,
   1.142112,
   1.279096,
   0.831993,
   0.8820628,
   1.083464};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.2045976,
   0.1162749,
   0.09548167,
   0.1000299,
   0.1060066,
   0.1191121,
   0.114233,
   0.1222899,
   0.1348811,
   0.1640485,
   0.1310889,
   0.1535418,
   0.2467218,
   0.1575397,
   0.2320831,
   0.1263418,
   0.189024,
   0.2295979,
   0.3335562,
   0.2642047,
   0.3039604,
   0.2523865,
   0.3341585,
   0.7740875};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.1968852,
   0.1132256,
   0.09344581,
   0.09789708,
   0.1038411,
   0.1166508,
   0.1112087,
   0.118992,
   0.1305354,
   0.1588303,
   0.1257409,
   0.1471356,
   0.2372492,
   0.1486599,
   0.2228136,
   0.1194968,
   0.1791523,
   0.2183809,
   0.3167207,
   0.2520241,
   0.2895538,
   0.236806,
   0.3075753,
   0.6227103};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.1696969);
   Graph_Graph3032->SetMaximum(1.845854);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

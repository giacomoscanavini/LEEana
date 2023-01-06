#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 23:52:14 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-2.14285,3.957692,236.9541);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__19->SetBinContent(1,107.1425);
   hmc__19->SetBinContent(2,102.4413);
   hmc__19->SetBinContent(3,96.99442);
   hmc__19->SetBinContent(4,94.20914);
   hmc__19->SetBinContent(5,89.56918);
   hmc__19->SetBinContent(6,86.66859);
   hmc__19->SetBinContent(7,94.99304);
   hmc__19->SetBinContent(8,88.75925);
   hmc__19->SetBinContent(9,94.1489);
   hmc__19->SetBinContent(10,94.62648);
   hmc__19->SetBinContent(11,86.22429);
   hmc__19->SetBinContent(12,97.25673);
   hmc__19->SetBinContent(13,103.5795);
   hmc__19->SetBinContent(14,105.7248);
   hmc__19->SetBinContent(15,89.51939);
   hmc__19->SetBinContent(16,104.8924);
   hmc__19->SetBinContent(17,91.77953);
   hmc__19->SetBinContent(18,100.6181);
   hmc__19->SetBinContent(19,92.35845);
   hmc__19->SetBinContent(20,96.09741);
   hmc__19->SetBinContent(21,89.26156);
   hmc__19->SetBinContent(22,91.79414);
   hmc__19->SetBinContent(23,88.5146);
   hmc__19->SetBinContent(24,95.11473);
   hmc__19->SetBinContent(25,106.7687);
   hmc__19->SetBinError(1,38.93493);
   hmc__19->SetBinError(2,41.9309);
   hmc__19->SetBinError(3,38.3032);
   hmc__19->SetBinError(4,35.38141);
   hmc__19->SetBinError(5,33.65823);
   hmc__19->SetBinError(6,35.71022);
   hmc__19->SetBinError(7,35.65883);
   hmc__19->SetBinError(8,32.87939);
   hmc__19->SetBinError(9,35.20226);
   hmc__19->SetBinError(10,34.69569);
   hmc__19->SetBinError(11,34.75477);
   hmc__19->SetBinError(12,40.45198);
   hmc__19->SetBinError(13,42.99062);
   hmc__19->SetBinError(14,41.35808);
   hmc__19->SetBinError(15,34.56283);
   hmc__19->SetBinError(16,39.00899);
   hmc__19->SetBinError(17,36.97404);
   hmc__19->SetBinError(18,37.7496);
   hmc__19->SetBinError(19,37.92625);
   hmc__19->SetBinError(20,40.67982);
   hmc__19->SetBinError(21,34.51416);
   hmc__19->SetBinError(22,37.8909);
   hmc__19->SetBinError(23,33.40063);
   hmc__19->SetBinError(24,35.73801);
   hmc__19->SetBinError(25,48.2695);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-2.14285);
   hmc__19->SetMaximum(224.9993);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-3.15,3.15);
   hs7_stack_7->SetMinimum(-7.439428e-09);
   hs7_stack_7->SetMaximum(112.4996);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.86373);
   hbadmatch_stack_1->SetBinContent(2,1.857817);
   hbadmatch_stack_1->SetBinContent(3,1.806671);
   hbadmatch_stack_1->SetBinContent(4,3.373307);
   hbadmatch_stack_1->SetBinContent(5,0.8879811);
   hbadmatch_stack_1->SetBinContent(6,2.082263);
   hbadmatch_stack_1->SetBinContent(7,1.644374);
   hbadmatch_stack_1->SetBinContent(8,3.555545);
   hbadmatch_stack_1->SetBinContent(9,3.887072);
   hbadmatch_stack_1->SetBinContent(10,1.31199);
   hbadmatch_stack_1->SetBinContent(11,1.402335);
   hbadmatch_stack_1->SetBinContent(12,2.538957);
   hbadmatch_stack_1->SetBinContent(13,1.750255);
   hbadmatch_stack_1->SetBinContent(14,3.86975);
   hbadmatch_stack_1->SetBinContent(15,1.90775);
   hbadmatch_stack_1->SetBinContent(16,3.074842);
   hbadmatch_stack_1->SetBinContent(17,2.51401);
   hbadmatch_stack_1->SetBinContent(18,1.621075);
   hbadmatch_stack_1->SetBinContent(19,0.7042027);
   hbadmatch_stack_1->SetBinContent(20,2.540337);
   hbadmatch_stack_1->SetBinContent(21,2.241151);
   hbadmatch_stack_1->SetBinContent(22,1.413964);
   hbadmatch_stack_1->SetBinContent(23,1.40445);
   hbadmatch_stack_1->SetBinContent(24,1.255918);
   hbadmatch_stack_1->SetBinContent(25,4.320478);
   hbadmatch_stack_1->SetBinError(1,0.7119846);
   hbadmatch_stack_1->SetBinError(2,0.6984098);
   hbadmatch_stack_1->SetBinError(3,0.6447286);
   hbadmatch_stack_1->SetBinError(4,1.049555);
   hbadmatch_stack_1->SetBinError(5,0.4058268);
   hbadmatch_stack_1->SetBinError(6,0.7337629);
   hbadmatch_stack_1->SetBinError(7,0.5806958);
   hbadmatch_stack_1->SetBinError(8,1.009548);
   hbadmatch_stack_1->SetBinError(9,2.150756);
   hbadmatch_stack_1->SetBinError(10,0.6009605);
   hbadmatch_stack_1->SetBinError(11,0.5143655);
   hbadmatch_stack_1->SetBinError(12,0.8402864);
   hbadmatch_stack_1->SetBinError(13,0.6416876);
   hbadmatch_stack_1->SetBinError(14,1.403555);
   hbadmatch_stack_1->SetBinError(15,0.7464101);
   hbadmatch_stack_1->SetBinError(16,0.8840374);
   hbadmatch_stack_1->SetBinError(17,0.9192291);
   hbadmatch_stack_1->SetBinError(18,0.6673325);
   hbadmatch_stack_1->SetBinError(19,0.3677742);
   hbadmatch_stack_1->SetBinError(20,0.9999816);
   hbadmatch_stack_1->SetBinError(21,0.7871751);
   hbadmatch_stack_1->SetBinError(22,0.6515799);
   hbadmatch_stack_1->SetBinError(23,0.5592071);
   hbadmatch_stack_1->SetBinError(24,0.5326155);
   hbadmatch_stack_1->SetBinError(25,1.220708);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.325045);
   hext_stack_2->SetBinContent(2,7.918446);
   hext_stack_2->SetBinContent(3,7.586867);
   hext_stack_2->SetBinContent(4,6.489584);
   hext_stack_2->SetBinContent(5,11.93971);
   hext_stack_2->SetBinContent(6,8.656622);
   hext_stack_2->SetBinContent(7,13.45355);
   hext_stack_2->SetBinContent(8,9.392028);
   hext_stack_2->SetBinContent(9,13.80113);
   hext_stack_2->SetBinContent(10,14.96902);
   hext_stack_2->SetBinContent(11,3.718413);
   hext_stack_2->SetBinContent(12,2.994597);
   hext_stack_2->SetBinContent(13,8.451908);
   hext_stack_2->SetBinContent(14,4.53161);
   hext_stack_2->SetBinContent(15,3.159);
   hext_stack_2->SetBinContent(16,10.52244);
   hext_stack_2->SetBinContent(17,3.069618);
   hext_stack_2->SetBinContent(18,12.08535);
   hext_stack_2->SetBinContent(19,7.519027);
   hext_stack_2->SetBinContent(20,2.681789);
   hext_stack_2->SetBinContent(21,4.06158);
   hext_stack_2->SetBinContent(22,6.078576);
   hext_stack_2->SetBinContent(23,4.221574);
   hext_stack_2->SetBinContent(24,5.587004);
   hext_stack_2->SetBinContent(25,7.2134);
   hext_stack_2->SetBinError(1,1.988024);
   hext_stack_2->SetBinError(2,1.946);
   hext_stack_2->SetBinError(3,1.970503);
   hext_stack_2->SetBinError(4,1.605029);
   hext_stack_2->SetBinError(5,2.485137);
   hext_stack_2->SetBinError(6,1.963739);
   hext_stack_2->SetBinError(7,2.666545);
   hext_stack_2->SetBinError(8,2.064449);
   hext_stack_2->SetBinError(9,2.661492);
   hext_stack_2->SetBinError(10,2.9183);
   hext_stack_2->SetBinError(11,1.296206);
   hext_stack_2->SetBinError(12,1.099269);
   hext_stack_2->SetBinError(13,2.146387);
   hext_stack_2->SetBinError(14,1.418025);
   hext_stack_2->SetBinError(15,1.152637);
   hext_stack_2->SetBinError(16,2.213375);
   hext_stack_2->SetBinError(17,1.212305);
   hext_stack_2->SetBinError(18,2.561906);
   hext_stack_2->SetBinError(19,1.84943);
   hext_stack_2->SetBinError(20,1.018372);
   hext_stack_2->SetBinError(21,1.232114);
   hext_stack_2->SetBinError(22,1.508534);
   hext_stack_2->SetBinError(23,1.226034);
   hext_stack_2->SetBinError(24,1.544858);
   hext_stack_2->SetBinError(25,1.745817);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4819721);
   hdirt_stack_3->SetBinContent(2,0.722366);
   hdirt_stack_3->SetBinContent(3,0.9619534);
   hdirt_stack_3->SetBinContent(4,0.1601926);
   hdirt_stack_3->SetBinContent(5,0.4142144);
   hdirt_stack_3->SetBinContent(7,1.09526);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.8086942);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,1.149204);
   hdirt_stack_3->SetBinContent(16,0.3942141);
   hdirt_stack_3->SetBinContent(18,0.7410426);
   hdirt_stack_3->SetBinContent(19,0.5570828);
   hdirt_stack_3->SetBinContent(20,0.8022601);
   hdirt_stack_3->SetBinContent(23,0.8836629);
   hdirt_stack_3->SetBinContent(24,0.8332258);
   hdirt_stack_3->SetBinContent(25,0.4377912);
   hdirt_stack_3->SetBinError(1,0.3402839);
   hdirt_stack_3->SetBinError(2,0.4354359);
   hdirt_stack_3->SetBinError(3,0.4947604);
   hdirt_stack_3->SetBinError(4,0.1601926);
   hdirt_stack_3->SetBinError(5,0.2391468);
   hdirt_stack_3->SetBinError(7,0.5187246);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.4749675);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.9557142);
   hdirt_stack_3->SetBinError(16,0.2804494);
   hdirt_stack_3->SetBinError(18,0.3770659);
   hdirt_stack_3->SetBinError(19,0.4028472);
   hdirt_stack_3->SetBinError(20,0.5034657);
   hdirt_stack_3->SetBinError(23,0.5440046);
   hdirt_stack_3->SetBinError(24,0.4476755);
   hdirt_stack_3->SetBinError(25,0.3095651);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,3.51171);
   houtFV_stack_4->SetBinContent(2,2.88648);
   houtFV_stack_4->SetBinContent(3,3.73285);
   houtFV_stack_4->SetBinContent(4,3.952478);
   houtFV_stack_4->SetBinContent(5,2.050601);
   houtFV_stack_4->SetBinContent(6,4.18144);
   houtFV_stack_4->SetBinContent(7,5.485765);
   houtFV_stack_4->SetBinContent(8,4.233004);
   houtFV_stack_4->SetBinContent(9,2.970763);
   houtFV_stack_4->SetBinContent(10,3.574128);
   houtFV_stack_4->SetBinContent(11,2.4367);
   houtFV_stack_4->SetBinContent(12,2.583457);
   houtFV_stack_4->SetBinContent(13,2.792184);
   houtFV_stack_4->SetBinContent(14,3.399235);
   houtFV_stack_4->SetBinContent(15,1.85037);
   houtFV_stack_4->SetBinContent(16,3.276644);
   houtFV_stack_4->SetBinContent(17,4.406847);
   houtFV_stack_4->SetBinContent(18,3.897412);
   houtFV_stack_4->SetBinContent(19,3.576209);
   houtFV_stack_4->SetBinContent(20,5.201871);
   houtFV_stack_4->SetBinContent(21,4.709544);
   houtFV_stack_4->SetBinContent(22,2.477695);
   houtFV_stack_4->SetBinContent(23,2.56749);
   houtFV_stack_4->SetBinContent(24,4.366488);
   houtFV_stack_4->SetBinContent(25,2.700974);
   houtFV_stack_4->SetBinError(1,0.8403798);
   houtFV_stack_4->SetBinError(2,0.8081285);
   houtFV_stack_4->SetBinError(3,0.9532497);
   houtFV_stack_4->SetBinError(4,0.9732239);
   houtFV_stack_4->SetBinError(5,0.7068742);
   houtFV_stack_4->SetBinError(6,1.037457);
   houtFV_stack_4->SetBinError(7,1.166266);
   houtFV_stack_4->SetBinError(8,1.033302);
   houtFV_stack_4->SetBinError(9,0.8201857);
   houtFV_stack_4->SetBinError(10,0.9332135);
   houtFV_stack_4->SetBinError(11,0.8007473);
   houtFV_stack_4->SetBinError(12,0.6760822);
   houtFV_stack_4->SetBinError(13,0.7812797);
   houtFV_stack_4->SetBinError(14,0.851793);
   houtFV_stack_4->SetBinError(15,0.6839485);
   houtFV_stack_4->SetBinError(16,0.9062889);
   houtFV_stack_4->SetBinError(17,1.038752);
   houtFV_stack_4->SetBinError(18,0.9222085);
   houtFV_stack_4->SetBinError(19,0.9692319);
   houtFV_stack_4->SetBinError(20,1.194599);
   houtFV_stack_4->SetBinError(21,1.111268);
   houtFV_stack_4->SetBinError(22,0.7923433);
   houtFV_stack_4->SetBinError(23,0.7733896);
   houtFV_stack_4->SetBinError(24,1.051405);
   houtFV_stack_4->SetBinError(25,0.7596448);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2214168);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2402984);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1172889);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1088959);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5427876);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03750221);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1716469);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2223511);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.355507);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.04059216);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.08233672);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3346857);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1167316);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05604549);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2987622);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3015125);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2993441);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2958379);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.09300321);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1770272);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1660683);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1445019);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0644859);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06370695);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2552559);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02244691);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1064439);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1501141);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2605053);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03065127);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06086255);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2031684);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05574504);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03963015);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1548126);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1627915);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.182423);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1842344);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05409581);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.08513212);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1682672);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6151851);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.698209);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7477767);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4452211);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.447809);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3044955);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5231917);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1447223);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3525867);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2690889);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6484957);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5705552);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5673209);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2712974);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.809989);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4129436);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.550605);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2569438);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2541903);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2411869);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3729947);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4119911);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.36949);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.490542);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06786534);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2543297);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3248711);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2445788);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1587429);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1596535);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1361954);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1587759);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05761406);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1576971);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1488378);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.281612);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1936013);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2166019);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1189326);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2779445);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1808947);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2440903);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1414624);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.09481641);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.08541659);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1409556);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1847114);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1884043);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1860476);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.80132);
   hNCpi0inFVres_stack_7->SetBinContent(2,42.99275);
   hNCpi0inFVres_stack_7->SetBinContent(3,37.16035);
   hNCpi0inFVres_stack_7->SetBinContent(4,35.2223);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.09066);
   hNCpi0inFVres_stack_7->SetBinContent(6,35.44146);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.6688);
   hNCpi0inFVres_stack_7->SetBinContent(8,31.43128);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.75652);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.78997);
   hNCpi0inFVres_stack_7->SetBinContent(11,33.17413);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.10868);
   hNCpi0inFVres_stack_7->SetBinContent(13,40.16522);
   hNCpi0inFVres_stack_7->SetBinContent(14,38.75444);
   hNCpi0inFVres_stack_7->SetBinContent(15,36.34835);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.79444);
   hNCpi0inFVres_stack_7->SetBinContent(17,35.36028);
   hNCpi0inFVres_stack_7->SetBinContent(18,34.76976);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.79258);
   hNCpi0inFVres_stack_7->SetBinContent(20,28.8031);
   hNCpi0inFVres_stack_7->SetBinContent(21,36.40831);
   hNCpi0inFVres_stack_7->SetBinContent(22,37.01055);
   hNCpi0inFVres_stack_7->SetBinContent(23,37.77388);
   hNCpi0inFVres_stack_7->SetBinContent(24,37.92374);
   hNCpi0inFVres_stack_7->SetBinContent(25,41.60013);
   hNCpi0inFVres_stack_7->SetBinError(1,1.985503);
   hNCpi0inFVres_stack_7->SetBinError(2,2.101313);
   hNCpi0inFVres_stack_7->SetBinError(3,1.90858);
   hNCpi0inFVres_stack_7->SetBinError(4,1.821889);
   hNCpi0inFVres_stack_7->SetBinError(5,1.750339);
   hNCpi0inFVres_stack_7->SetBinError(6,1.843393);
   hNCpi0inFVres_stack_7->SetBinError(7,1.80665);
   hNCpi0inFVres_stack_7->SetBinError(8,1.603006);
   hNCpi0inFVres_stack_7->SetBinError(9,1.745105);
   hNCpi0inFVres_stack_7->SetBinError(10,1.879115);
   hNCpi0inFVres_stack_7->SetBinError(11,1.634831);
   hNCpi0inFVres_stack_7->SetBinError(12,1.845071);
   hNCpi0inFVres_stack_7->SetBinError(13,2.032145);
   hNCpi0inFVres_stack_7->SetBinError(14,1.94105);
   hNCpi0inFVres_stack_7->SetBinError(15,1.831197);
   hNCpi0inFVres_stack_7->SetBinError(16,1.87179);
   hNCpi0inFVres_stack_7->SetBinError(17,1.819299);
   hNCpi0inFVres_stack_7->SetBinError(18,1.842933);
   hNCpi0inFVres_stack_7->SetBinError(19,2.018242);
   hNCpi0inFVres_stack_7->SetBinError(20,1.412428);
   hNCpi0inFVres_stack_7->SetBinError(21,1.859305);
   hNCpi0inFVres_stack_7->SetBinError(22,1.720313);
   hNCpi0inFVres_stack_7->SetBinError(23,1.905114);
   hNCpi0inFVres_stack_7->SetBinError(24,1.833913);
   hNCpi0inFVres_stack_7->SetBinError(25,2.028967);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.683522);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.666171);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.839262);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.042274);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.474799);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.338489);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.68884);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.672073);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.464509);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.385093);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.922706);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.460372);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.512644);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.459227);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.314814);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.776466);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.966424);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.551237);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.589812);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.570945);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.06544);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.363957);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.268657);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.265685);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.274137);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8880637);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7803184);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.012571);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8791034);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8015135);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9231652);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9777138);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8602059);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8724377);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.100092);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9341091);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.046559);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.227184);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.095622);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.008549);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9331619);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.019967);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6834231);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8233399);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8833023);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.758134);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.171118);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8208655);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.153476);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9019863);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1384211);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06363495);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1281576);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03246768);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,20.51032);
   hCCpi0inFV_stack_10->SetBinContent(2,16.72542);
   hCCpi0inFV_stack_10->SetBinContent(3,14.79399);
   hCCpi0inFV_stack_10->SetBinContent(4,15.91964);
   hCCpi0inFV_stack_10->SetBinContent(5,13.49235);
   hCCpi0inFV_stack_10->SetBinContent(6,11.43782);
   hCCpi0inFV_stack_10->SetBinContent(7,11.28875);
   hCCpi0inFV_stack_10->SetBinContent(8,13.45262);
   hCCpi0inFV_stack_10->SetBinContent(9,13.29996);
   hCCpi0inFV_stack_10->SetBinContent(10,15.09469);
   hCCpi0inFV_stack_10->SetBinContent(11,18.67266);
   hCCpi0inFV_stack_10->SetBinContent(12,18.26099);
   hCCpi0inFV_stack_10->SetBinContent(13,18.26229);
   hCCpi0inFV_stack_10->SetBinContent(14,17.43793);
   hCCpi0inFV_stack_10->SetBinContent(15,13.02794);
   hCCpi0inFV_stack_10->SetBinContent(16,15.47832);
   hCCpi0inFV_stack_10->SetBinContent(17,13.89583);
   hCCpi0inFV_stack_10->SetBinContent(18,16.0249);
   hCCpi0inFV_stack_10->SetBinContent(19,13.62504);
   hCCpi0inFV_stack_10->SetBinContent(20,18.07966);
   hCCpi0inFV_stack_10->SetBinContent(21,12.74752);
   hCCpi0inFV_stack_10->SetBinContent(22,15.19089);
   hCCpi0inFV_stack_10->SetBinContent(23,13.02249);
   hCCpi0inFV_stack_10->SetBinContent(24,17.32633);
   hCCpi0inFV_stack_10->SetBinContent(25,16.71612);
   hCCpi0inFV_stack_10->SetBinError(1,2.248985);
   hCCpi0inFV_stack_10->SetBinError(2,2.055912);
   hCCpi0inFV_stack_10->SetBinError(3,1.971865);
   hCCpi0inFV_stack_10->SetBinError(4,2.015888);
   hCCpi0inFV_stack_10->SetBinError(5,1.798199);
   hCCpi0inFV_stack_10->SetBinError(6,1.800275);
   hCCpi0inFV_stack_10->SetBinError(7,1.688632);
   hCCpi0inFV_stack_10->SetBinError(8,1.810289);
   hCCpi0inFV_stack_10->SetBinError(9,1.790315);
   hCCpi0inFV_stack_10->SetBinError(10,1.937854);
   hCCpi0inFV_stack_10->SetBinError(11,2.248112);
   hCCpi0inFV_stack_10->SetBinError(12,2.158155);
   hCCpi0inFV_stack_10->SetBinError(13,2.126239);
   hCCpi0inFV_stack_10->SetBinError(14,2.135005);
   hCCpi0inFV_stack_10->SetBinError(15,1.769402);
   hCCpi0inFV_stack_10->SetBinError(16,1.937069);
   hCCpi0inFV_stack_10->SetBinError(17,1.897429);
   hCCpi0inFV_stack_10->SetBinError(18,1.98123);
   hCCpi0inFV_stack_10->SetBinError(19,1.834898);
   hCCpi0inFV_stack_10->SetBinError(20,2.118399);
   hCCpi0inFV_stack_10->SetBinError(21,1.798443);
   hCCpi0inFV_stack_10->SetBinError(22,2.022516);
   hCCpi0inFV_stack_10->SetBinError(23,1.801533);
   hCCpi0inFV_stack_10->SetBinError(24,2.036788);
   hCCpi0inFV_stack_10->SetBinError(25,2.054762);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.19983);
   hNCinFV_stack_11->SetBinContent(2,9.272058);
   hNCinFV_stack_11->SetBinContent(3,12.44554);
   hNCinFV_stack_11->SetBinContent(4,8.773355);
   hNCinFV_stack_11->SetBinContent(5,8.101261);
   hNCinFV_stack_11->SetBinContent(6,7.719966);
   hNCinFV_stack_11->SetBinContent(7,9.369658);
   hNCinFV_stack_11->SetBinContent(8,8.957785);
   hNCinFV_stack_11->SetBinContent(9,7.941398);
   hNCinFV_stack_11->SetBinContent(10,7.762033);
   hNCinFV_stack_11->SetBinContent(11,10.49694);
   hNCinFV_stack_11->SetBinContent(12,10.88268);
   hNCinFV_stack_11->SetBinContent(13,8.454844);
   hNCinFV_stack_11->SetBinContent(14,13.26401);
   hNCinFV_stack_11->SetBinContent(15,11.76188);
   hNCinFV_stack_11->SetBinContent(16,10.62988);
   hNCinFV_stack_11->SetBinContent(17,11.0346);
   hNCinFV_stack_11->SetBinContent(18,11.39712);
   hNCinFV_stack_11->SetBinContent(19,8.787651);
   hNCinFV_stack_11->SetBinContent(20,10.59756);
   hNCinFV_stack_11->SetBinContent(21,8.742807);
   hNCinFV_stack_11->SetBinContent(22,10.44473);
   hNCinFV_stack_11->SetBinContent(23,10.76531);
   hNCinFV_stack_11->SetBinContent(24,9.822071);
   hNCinFV_stack_11->SetBinContent(25,9.007513);
   hNCinFV_stack_11->SetBinError(1,1.890092);
   hNCinFV_stack_11->SetBinError(2,1.541);
   hNCinFV_stack_11->SetBinError(3,2.009594);
   hNCinFV_stack_11->SetBinError(4,1.447132);
   hNCinFV_stack_11->SetBinError(5,1.605673);
   hNCinFV_stack_11->SetBinError(6,1.416376);
   hNCinFV_stack_11->SetBinError(7,1.539606);
   hNCinFV_stack_11->SetBinError(8,1.553897);
   hNCinFV_stack_11->SetBinError(9,1.439923);
   hNCinFV_stack_11->SetBinError(10,1.445445);
   hNCinFV_stack_11->SetBinError(11,1.778569);
   hNCinFV_stack_11->SetBinError(12,1.918719);
   hNCinFV_stack_11->SetBinError(13,1.514511);
   hNCinFV_stack_11->SetBinError(14,2.362205);
   hNCinFV_stack_11->SetBinError(15,1.872532);
   hNCinFV_stack_11->SetBinError(16,1.929415);
   hNCinFV_stack_11->SetBinError(17,1.802602);
   hNCinFV_stack_11->SetBinError(18,1.910748);
   hNCinFV_stack_11->SetBinError(19,1.547124);
   hNCinFV_stack_11->SetBinError(20,1.814302);
   hNCinFV_stack_11->SetBinError(21,1.537679);
   hNCinFV_stack_11->SetBinError(22,2.113342);
   hNCinFV_stack_11->SetBinError(23,1.909875);
   hNCinFV_stack_11->SetBinError(24,1.656711);
   hNCinFV_stack_11->SetBinError(25,1.664352);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,12.76688);
   hnumuCCinFV_stack_12->SetBinContent(2,11.83827);
   hnumuCCinFV_stack_12->SetBinContent(3,7.102128);
   hnumuCCinFV_stack_12->SetBinContent(4,11.93336);
   hnumuCCinFV_stack_12->SetBinContent(5,9.034001);
   hnumuCCinFV_stack_12->SetBinContent(6,8.357972);
   hnumuCCinFV_stack_12->SetBinContent(7,9.373938);
   hnumuCCinFV_stack_12->SetBinContent(8,8.366497);
   hnumuCCinFV_stack_12->SetBinContent(9,9.01954);
   hnumuCCinFV_stack_12->SetBinContent(10,6.824444);
   hnumuCCinFV_stack_12->SetBinContent(11,6.625138);
   hnumuCCinFV_stack_12->SetBinContent(12,10.83777);
   hnumuCCinFV_stack_12->SetBinContent(13,12.57533);
   hnumuCCinFV_stack_12->SetBinContent(14,13.3777);
   hnumuCCinFV_stack_12->SetBinContent(15,11.62821);
   hnumuCCinFV_stack_12->SetBinContent(16,11.35001);
   hnumuCCinFV_stack_12->SetBinContent(17,11.59227);
   hnumuCCinFV_stack_12->SetBinContent(18,12.5625);
   hnumuCCinFV_stack_12->SetBinContent(19,12.89385);
   hnumuCCinFV_stack_12->SetBinContent(20,18.71601);
   hnumuCCinFV_stack_12->SetBinContent(21,12.19316);
   hnumuCCinFV_stack_12->SetBinContent(22,8.862452);
   hnumuCCinFV_stack_12->SetBinContent(23,9.122694);
   hnumuCCinFV_stack_12->SetBinContent(24,7.188998);
   hnumuCCinFV_stack_12->SetBinContent(25,16.24348);
   hnumuCCinFV_stack_12->SetBinError(1,1.925594);
   hnumuCCinFV_stack_12->SetBinError(2,1.900778);
   hnumuCCinFV_stack_12->SetBinError(3,1.271156);
   hnumuCCinFV_stack_12->SetBinError(4,2.069839);
   hnumuCCinFV_stack_12->SetBinError(5,1.874165);
   hnumuCCinFV_stack_12->SetBinError(6,1.484809);
   hnumuCCinFV_stack_12->SetBinError(7,1.664737);
   hnumuCCinFV_stack_12->SetBinError(8,1.483923);
   hnumuCCinFV_stack_12->SetBinError(9,1.606704);
   hnumuCCinFV_stack_12->SetBinError(10,1.765117);
   hnumuCCinFV_stack_12->SetBinError(11,1.319011);
   hnumuCCinFV_stack_12->SetBinError(12,1.870916);
   hnumuCCinFV_stack_12->SetBinError(13,2.234109);
   hnumuCCinFV_stack_12->SetBinError(14,2.004458);
   hnumuCCinFV_stack_12->SetBinError(15,1.987731);
   hnumuCCinFV_stack_12->SetBinError(16,1.783303);
   hnumuCCinFV_stack_12->SetBinError(17,1.819249);
   hnumuCCinFV_stack_12->SetBinError(18,2.05408);
   hnumuCCinFV_stack_12->SetBinError(19,2.250669);
   hnumuCCinFV_stack_12->SetBinError(20,3.119211);
   hnumuCCinFV_stack_12->SetBinError(21,2.970722);
   hnumuCCinFV_stack_12->SetBinError(22,1.503244);
   hnumuCCinFV_stack_12->SetBinError(23,1.522034);
   hnumuCCinFV_stack_12->SetBinError(24,1.319317);
   hnumuCCinFV_stack_12->SetBinError(25,2.410889);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.524454);
   hnueCCinFV_stack_13->SetBinContent(2,0.6989822);
   hnueCCinFV_stack_13->SetBinContent(3,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(4,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(5,1.511251);
   hnueCCinFV_stack_13->SetBinContent(6,0.443741);
   hnueCCinFV_stack_13->SetBinContent(7,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(8,1.00044);
   hnueCCinFV_stack_13->SetBinContent(9,0.5817212);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.44716);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.5432599);
   hnueCCinFV_stack_13->SetBinContent(16,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.5509281);
   hnueCCinFV_stack_13->SetBinContent(21,0.5148518);
   hnueCCinFV_stack_13->SetBinContent(22,0.2367726);
   hnueCCinFV_stack_13->SetBinContent(23,0.7129139);
   hnueCCinFV_stack_13->SetBinContent(24,1.063963);
   hnueCCinFV_stack_13->SetBinContent(25,0.5871329);
   hnueCCinFV_stack_13->SetBinError(1,0.6420466);
   hnueCCinFV_stack_13->SetBinError(2,0.4059236);
   hnueCCinFV_stack_13->SetBinError(3,0.4394482);
   hnueCCinFV_stack_13->SetBinError(4,0.3921167);
   hnueCCinFV_stack_13->SetBinError(5,0.637166);
   hnueCCinFV_stack_13->SetBinError(6,0.3157825);
   hnueCCinFV_stack_13->SetBinError(7,0.4172458);
   hnueCCinFV_stack_13->SetBinError(8,0.6603813);
   hnueCCinFV_stack_13->SetBinError(9,0.4330921);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.3184642);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.3961859);
   hnueCCinFV_stack_13->SetBinError(16,0.4139598);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.4001707);
   hnueCCinFV_stack_13->SetBinError(21,0.3745984);
   hnueCCinFV_stack_13->SetBinError(22,0.2367725);
   hnueCCinFV_stack_13->SetBinError(23,0.4131976);
   hnueCCinFV_stack_13->SetBinError(24,0.6153021);
   hnueCCinFV_stack_13->SetBinError(25,0.338772);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__20->SetBinContent(1,107.1425);
   hmcerror__20->SetBinContent(2,102.4413);
   hmcerror__20->SetBinContent(3,96.99442);
   hmcerror__20->SetBinContent(4,94.20914);
   hmcerror__20->SetBinContent(5,89.56918);
   hmcerror__20->SetBinContent(6,86.66859);
   hmcerror__20->SetBinContent(7,94.99304);
   hmcerror__20->SetBinContent(8,88.75925);
   hmcerror__20->SetBinContent(9,94.1489);
   hmcerror__20->SetBinContent(10,94.62648);
   hmcerror__20->SetBinContent(11,86.22429);
   hmcerror__20->SetBinContent(12,97.25673);
   hmcerror__20->SetBinContent(13,103.5795);
   hmcerror__20->SetBinContent(14,105.7248);
   hmcerror__20->SetBinContent(15,89.51939);
   hmcerror__20->SetBinContent(16,104.8924);
   hmcerror__20->SetBinContent(17,91.77953);
   hmcerror__20->SetBinContent(18,100.6181);
   hmcerror__20->SetBinContent(19,92.35845);
   hmcerror__20->SetBinContent(20,96.09741);
   hmcerror__20->SetBinContent(21,89.26156);
   hmcerror__20->SetBinContent(22,91.79414);
   hmcerror__20->SetBinContent(23,88.5146);
   hmcerror__20->SetBinContent(24,95.11473);
   hmcerror__20->SetBinContent(25,106.7687);
   hmcerror__20->SetBinError(1,38.93493);
   hmcerror__20->SetBinError(2,41.9309);
   hmcerror__20->SetBinError(3,38.3032);
   hmcerror__20->SetBinError(4,35.38141);
   hmcerror__20->SetBinError(5,33.65823);
   hmcerror__20->SetBinError(6,35.71022);
   hmcerror__20->SetBinError(7,35.65883);
   hmcerror__20->SetBinError(8,32.87939);
   hmcerror__20->SetBinError(9,35.20226);
   hmcerror__20->SetBinError(10,34.69569);
   hmcerror__20->SetBinError(11,34.75477);
   hmcerror__20->SetBinError(12,40.45198);
   hmcerror__20->SetBinError(13,42.99062);
   hmcerror__20->SetBinError(14,41.35808);
   hmcerror__20->SetBinError(15,34.56283);
   hmcerror__20->SetBinError(16,39.00899);
   hmcerror__20->SetBinError(17,36.97404);
   hmcerror__20->SetBinError(18,37.7496);
   hmcerror__20->SetBinError(19,37.92625);
   hmcerror__20->SetBinError(20,40.67982);
   hmcerror__20->SetBinError(21,34.51416);
   hmcerror__20->SetBinError(22,37.8909);
   hmcerror__20->SetBinError(23,33.40063);
   hmcerror__20->SetBinError(24,35.73801);
   hmcerror__20->SetBinError(25,48.2695);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
   91,
   92,
   89,
   79,
   75,
   82,
   84,
   69,
   71,
   73,
   94,
   93,
   102,
   73,
   89,
   86,
   66,
   68,
   86,
   71,
   71,
   78,
   94,
   84,
   76};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   9.6617,
   9.7138,
   9.5566,
   9.0124,
   8.7852,
   9.1791,
   9.2886,
   8.4327,
   8.5518,
   8.6693,
   9.8173,
   9.7658,
   10.0995,
   8.6693,
   9.5566,
   9.3967,
   8.2509,
   8.3726,
   9.3967,
   8.5518,
   8.5518,
   8.9562,
   9.8173,
   9.2886,
   8.8425};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   9.46,
   9.513,
   9.3552,
   8.8105,
   8.5831,
   8.9774,
   9.0869,
   8.2304,
   8.3496,
   8.4672,
   9.616,
   9.564,
   10.0995,
   8.4672,
   9.3552,
   9.1951,
   8.0483,
   8.1701,
   9.1951,
   8.3496,
   8.3496,
   8.7542,
   9.616,
   9.0869,
   8.6406};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(52.31406);
   Graph_Graph3025->SetMaximum(117.5345);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  914.1","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.6","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
   0.3633939,
   0.4093163,
   0.3949011,
   0.3755623,
   0.3757792,
   0.4120318,
   0.3753836,
   0.3704334,
   0.3738999,
   0.3666595,
   0.403074,
   0.4159299,
   0.4150494,
   0.3911863,
   0.3860933,
   0.3718952,
   0.4028572,
   0.3751771,
   0.4106418,
   0.4233186,
   0.3866632,
   0.4127813,
   0.377346,
   0.3757358,
   0.452094};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0.3633939,
   0.4093163,
   0.3949011,
   0.3755623,
   0.3757792,
   0.4120318,
   0.3753836,
   0.3704334,
   0.3738999,
   0.3666595,
   0.403074,
   0.4159299,
   0.4150494,
   0.3911863,
   0.3860933,
   0.3718952,
   0.4028572,
   0.3751771,
   0.4106418,
   0.4233186,
   0.3866632,
   0.4127813,
   0.377346,
   0.3757358,
   0.452094};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-3.78,3.78);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
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
   Double_t _fy3027[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[25] = {
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
   Double_t _fely3027[25] = {
   0.3291122,
   0.3650977,
   0.3451704,
   0.3336184,
   0.3303579,
   0.3487505,
   0.3370505,
   0.3345388,
   0.3303558,
   0.3249035,
   0.3773486,
   0.3853889,
   0.3309313,
   0.3233408,
   0.3464644,
   0.3348804,
   0.360165,
   0.3113951,
   0.3446375,
   0.3674707,
   0.3453656,
   0.3565276,
   0.3479269,
   0.3539367,
   0.3496119};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0.3291122,
   0.3650977,
   0.3451704,
   0.3336184,
   0.3303579,
   0.3487505,
   0.3370505,
   0.3345388,
   0.3303558,
   0.3249035,
   0.3773486,
   0.3853889,
   0.3309313,
   0.3233408,
   0.3464644,
   0.3348804,
   0.360165,
   0.3113951,
   0.3446375,
   0.3674707,
   0.3453656,
   0.3565276,
   0.3479269,
   0.3539367,
   0.3496119};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-3.78,3.78);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
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
   Double_t _fy3028[25] = {
   0.8493361,
   0.8980752,
   0.9175786,
   0.8385598,
   0.8373416,
   0.9461328,
   0.8842753,
   0.7773838,
   0.7541246,
   0.7714542,
   1.09018,
   0.956232,
   0.9847505,
   0.6904721,
   0.9941981,
   0.8198875,
   0.7191146,
   0.6758228,
   0.9311546,
   0.7388336,
   0.7954152,
   0.8497274,
   1.061972,
   0.883144,
   0.7118188};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0.09017616,
   0.09482307,
   0.09852732,
   0.09566375,
   0.09808285,
   0.1059103,
   0.0977819,
   0.09500644,
   0.09083272,
   0.091616,
   0.1138577,
   0.1004126,
   0.09750483,
   0.08199876,
   0.1067545,
   0.08958416,
   0.08989914,
   0.08321168,
   0.1017416,
   0.08899095,
   0.09580608,
   0.09756832,
   0.1109116,
   0.0976568,
   0.08281919};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0.08829362,
   0.09286292,
   0.09645091,
   0.09352065,
   0.09582649,
   0.1035831,
   0.09565859,
   0.09272724,
   0.08868506,
   0.08948024,
   0.1115231,
   0.09833767,
   0.09750483,
   0.08008719,
   0.1045047,
   0.08766219,
   0.08769167,
   0.08119912,
   0.09955884,
   0.08688684,
   0.09354083,
   0.09536774,
   0.1086374,
   0.0955362,
   0.08092818};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.5317019);
   Graph_Graph3028->SetMaximum(1.262612);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  1 17:00:39 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-151.7219,163.3333,15978.71);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__4->SetBinContent(0,18.31144);
   hmc__4->SetBinContent(1,7.15613);
   hmc__4->SetBinContent(2,2790.828);
   hmc__4->SetBinContent(3,5790.976);
   hmc__4->SetBinContent(4,6483.112);
   hmc__4->SetBinContent(5,6209.285);
   hmc__4->SetBinContent(6,5905.231);
   hmc__4->SetBinContent(7,5755.312);
   hmc__4->SetBinContent(8,5655.484);
   hmc__4->SetBinContent(9,5502.294);
   hmc__4->SetBinContent(10,5489.305);
   hmc__4->SetBinContent(11,5406.074);
   hmc__4->SetBinContent(12,5367.643);
   hmc__4->SetBinContent(13,5690.262);
   hmc__4->SetBinContent(14,5314.019);
   hmc__4->SetBinContent(15,5417.776);
   hmc__4->SetBinContent(16,5644.75);
   hmc__4->SetBinContent(17,5689.769);
   hmc__4->SetBinContent(18,5770.834);
   hmc__4->SetBinContent(19,5977.196);
   hmc__4->SetBinContent(20,6187.867);
   hmc__4->SetBinContent(21,6490.566);
   hmc__4->SetBinContent(22,7058.909);
   hmc__4->SetBinContent(23,7549.487);
   hmc__4->SetBinContent(24,7586.095);
   hmc__4->SetBinContent(25,6268.849);
   hmc__4->SetBinContent(26,15.19744);
   hmc__4->SetBinContent(27,22.97096);
   hmc__4->SetBinError(0,2.331846);
   hmc__4->SetBinError(1,8.278583);
   hmc__4->SetBinError(2,381.5878);
   hmc__4->SetBinError(3,819.9182);
   hmc__4->SetBinError(4,928.233);
   hmc__4->SetBinError(5,857.4772);
   hmc__4->SetBinError(6,857.9135);
   hmc__4->SetBinError(7,786.0784);
   hmc__4->SetBinError(8,810.1959);
   hmc__4->SetBinError(9,747.9551);
   hmc__4->SetBinError(10,776.143);
   hmc__4->SetBinError(11,766.0662);
   hmc__4->SetBinError(12,742.312);
   hmc__4->SetBinError(13,749.0004);
   hmc__4->SetBinError(14,749.3794);
   hmc__4->SetBinError(15,735.7163);
   hmc__4->SetBinError(16,780.8357);
   hmc__4->SetBinError(17,754.8661);
   hmc__4->SetBinError(18,750.3905);
   hmc__4->SetBinError(19,785.7422);
   hmc__4->SetBinError(20,794.3416);
   hmc__4->SetBinError(21,807.9019);
   hmc__4->SetBinError(22,904.11);
   hmc__4->SetBinError(23,925.6778);
   hmc__4->SetBinError(24,803.7698);
   hmc__4->SetBinError(25,599.4612);
   hmc__4->SetBinError(26,9.045168);
   hmc__4->SetBinError(27,11.44717);
   hmc__4->SetMinimum(-151.7219);
   hmc__4->SetMaximum(15172.19);
   hmc__4->SetEntries(125394.8);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,-130,130);
   hs2_stack_2->SetMinimum(-2.228162e-09);
   hs2_stack_2->SetMaximum(7965.4);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(0,1.12259);
   hbadmatch_stack_1->SetBinContent(2,219.9761);
   hbadmatch_stack_1->SetBinContent(3,183.9531);
   hbadmatch_stack_1->SetBinContent(4,134.5264);
   hbadmatch_stack_1->SetBinContent(5,121.2946);
   hbadmatch_stack_1->SetBinContent(6,113.4394);
   hbadmatch_stack_1->SetBinContent(7,118.6664);
   hbadmatch_stack_1->SetBinContent(8,99.76111);
   hbadmatch_stack_1->SetBinContent(9,98.65762);
   hbadmatch_stack_1->SetBinContent(10,106.7149);
   hbadmatch_stack_1->SetBinContent(11,87.67563);
   hbadmatch_stack_1->SetBinContent(12,96.82682);
   hbadmatch_stack_1->SetBinContent(13,138.8495);
   hbadmatch_stack_1->SetBinContent(14,91.86093);
   hbadmatch_stack_1->SetBinContent(15,107.5518);
   hbadmatch_stack_1->SetBinContent(16,107.3638);
   hbadmatch_stack_1->SetBinContent(17,117.49);
   hbadmatch_stack_1->SetBinContent(18,133.2481);
   hbadmatch_stack_1->SetBinContent(19,144.3386);
   hbadmatch_stack_1->SetBinContent(20,162.1176);
   hbadmatch_stack_1->SetBinContent(21,178.8763);
   hbadmatch_stack_1->SetBinContent(22,194.782);
   hbadmatch_stack_1->SetBinContent(23,190.9532);
   hbadmatch_stack_1->SetBinContent(24,236.7536);
   hbadmatch_stack_1->SetBinContent(25,313.1633);
   hbadmatch_stack_1->SetBinContent(26,1.98373);
   hbadmatch_stack_1->SetBinContent(27,1.462074);
   hbadmatch_stack_1->SetBinError(0,0.5748203);
   hbadmatch_stack_1->SetBinError(2,8.399658);
   hbadmatch_stack_1->SetBinError(3,8.297208);
   hbadmatch_stack_1->SetBinError(4,7.40953);
   hbadmatch_stack_1->SetBinError(5,7.640925);
   hbadmatch_stack_1->SetBinError(6,7.004373);
   hbadmatch_stack_1->SetBinError(7,6.357531);
   hbadmatch_stack_1->SetBinError(8,6.165932);
   hbadmatch_stack_1->SetBinError(9,6.300515);
   hbadmatch_stack_1->SetBinError(10,7.068208);
   hbadmatch_stack_1->SetBinError(11,6.119709);
   hbadmatch_stack_1->SetBinError(12,6.198888);
   hbadmatch_stack_1->SetBinError(13,7.189188);
   hbadmatch_stack_1->SetBinError(14,8.033867);
   hbadmatch_stack_1->SetBinError(15,7.190745);
   hbadmatch_stack_1->SetBinError(16,5.814454);
   hbadmatch_stack_1->SetBinError(17,7.310399);
   hbadmatch_stack_1->SetBinError(18,8.177792);
   hbadmatch_stack_1->SetBinError(19,7.026746);
   hbadmatch_stack_1->SetBinError(20,7.917592);
   hbadmatch_stack_1->SetBinError(21,7.474303);
   hbadmatch_stack_1->SetBinError(22,7.951938);
   hbadmatch_stack_1->SetBinError(23,8.884419);
   hbadmatch_stack_1->SetBinError(24,9.388825);
   hbadmatch_stack_1->SetBinError(25,11.00281);
   hbadmatch_stack_1->SetBinError(26,1.615909);
   hbadmatch_stack_1->SetBinError(27,0.6210092);
   hbadmatch_stack_1->SetEntries(13347);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,6.653987);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,571.6042);
   hext_stack_2->SetBinContent(3,884.12);
   hext_stack_2->SetBinContent(4,664.8768);
   hext_stack_2->SetBinContent(5,545.4136);
   hext_stack_2->SetBinContent(6,496.4078);
   hext_stack_2->SetBinContent(7,500.8556);
   hext_stack_2->SetBinContent(8,541.4109);
   hext_stack_2->SetBinContent(9,580.4223);
   hext_stack_2->SetBinContent(10,585.7871);
   hext_stack_2->SetBinContent(11,591.955);
   hext_stack_2->SetBinContent(12,607.5801);
   hext_stack_2->SetBinContent(13,777.6281);
   hext_stack_2->SetBinContent(14,640.6664);
   hext_stack_2->SetBinContent(15,710.7039);
   hext_stack_2->SetBinContent(16,807.345);
   hext_stack_2->SetBinContent(17,863.7993);
   hext_stack_2->SetBinContent(18,899.5265);
   hext_stack_2->SetBinContent(19,1006.68);
   hext_stack_2->SetBinContent(20,1082.446);
   hext_stack_2->SetBinContent(21,1206.214);
   hext_stack_2->SetBinContent(22,1333.729);
   hext_stack_2->SetBinContent(23,1656.34);
   hext_stack_2->SetBinContent(24,2376.223);
   hext_stack_2->SetBinContent(25,2885.155);
   hext_stack_2->SetBinContent(26,4.773807);
   hext_stack_2->SetBinContent(27,8.365356);
   hext_stack_2->SetBinError(0,1.642041);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,16.67688);
   hext_stack_2->SetBinError(3,20.30343);
   hext_stack_2->SetBinError(4,17.84346);
   hext_stack_2->SetBinError(5,15.93669);
   hext_stack_2->SetBinError(6,15.25502);
   hext_stack_2->SetBinError(7,15.2599);
   hext_stack_2->SetBinError(8,15.97852);
   hext_stack_2->SetBinError(9,16.52783);
   hext_stack_2->SetBinError(10,16.5259);
   hext_stack_2->SetBinError(11,16.6304);
   hext_stack_2->SetBinError(12,16.76618);
   hext_stack_2->SetBinError(13,18.84617);
   hext_stack_2->SetBinError(14,17.1305);
   hext_stack_2->SetBinError(15,18.03995);
   hext_stack_2->SetBinError(16,19.62007);
   hext_stack_2->SetBinError(17,20.2362);
   hext_stack_2->SetBinError(18,20.53915);
   hext_stack_2->SetBinError(19,21.7155);
   hext_stack_2->SetBinError(20,22.5554);
   hext_stack_2->SetBinError(21,23.92868);
   hext_stack_2->SetBinError(22,25.14006);
   hext_stack_2->SetBinError(23,28.17684);
   hext_stack_2->SetBinError(24,33.55819);
   hext_stack_2->SetBinError(25,36.85548);
   hext_stack_2->SetBinError(26,1.433855);
   hext_stack_2->SetBinError(27,1.755378);
   hext_stack_2->SetEntries(52689);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,1.463425);
   hdirt_stack_3->SetBinContent(2,374.8717);
   hdirt_stack_3->SetBinContent(3,322.3519);
   hdirt_stack_3->SetBinContent(4,200.8849);
   hdirt_stack_3->SetBinContent(5,190.2113);
   hdirt_stack_3->SetBinContent(6,178.3693);
   hdirt_stack_3->SetBinContent(7,179.1899);
   hdirt_stack_3->SetBinContent(8,166.2521);
   hdirt_stack_3->SetBinContent(9,159.8121);
   hdirt_stack_3->SetBinContent(10,147.1498);
   hdirt_stack_3->SetBinContent(11,153.0075);
   hdirt_stack_3->SetBinContent(12,149.3687);
   hdirt_stack_3->SetBinContent(13,149.6319);
   hdirt_stack_3->SetBinContent(14,138.6835);
   hdirt_stack_3->SetBinContent(15,147.5185);
   hdirt_stack_3->SetBinContent(16,144.5804);
   hdirt_stack_3->SetBinContent(17,149.8386);
   hdirt_stack_3->SetBinContent(18,150.653);
   hdirt_stack_3->SetBinContent(19,171.8939);
   hdirt_stack_3->SetBinContent(20,176.012);
   hdirt_stack_3->SetBinContent(21,190.7559);
   hdirt_stack_3->SetBinContent(22,210.6951);
   hdirt_stack_3->SetBinContent(23,236.0775);
   hdirt_stack_3->SetBinContent(24,269.9626);
   hdirt_stack_3->SetBinContent(25,638.1456);
   hdirt_stack_3->SetBinContent(26,1.060077);
   hdirt_stack_3->SetBinContent(27,1.689755);
   hdirt_stack_3->SetBinError(0,0.6185864);
   hdirt_stack_3->SetBinError(2,11.97412);
   hdirt_stack_3->SetBinError(3,11.47838);
   hdirt_stack_3->SetBinError(4,8.338243);
   hdirt_stack_3->SetBinError(5,8.630837);
   hdirt_stack_3->SetBinError(6,8.306951);
   hdirt_stack_3->SetBinError(7,9.313548);
   hdirt_stack_3->SetBinError(8,8.88088);
   hdirt_stack_3->SetBinError(9,8.564282);
   hdirt_stack_3->SetBinError(10,7.417517);
   hdirt_stack_3->SetBinError(11,8.97216);
   hdirt_stack_3->SetBinError(12,7.808947);
   hdirt_stack_3->SetBinError(13,7.206563);
   hdirt_stack_3->SetBinError(14,7.287706);
   hdirt_stack_3->SetBinError(15,7.489479);
   hdirt_stack_3->SetBinError(16,7.397015);
   hdirt_stack_3->SetBinError(17,7.842895);
   hdirt_stack_3->SetBinError(18,8.061693);
   hdirt_stack_3->SetBinError(19,9.283848);
   hdirt_stack_3->SetBinError(20,8.163726);
   hdirt_stack_3->SetBinError(21,8.89262);
   hdirt_stack_3->SetBinError(22,8.854906);
   hdirt_stack_3->SetBinError(23,9.448666);
   hdirt_stack_3->SetBinError(24,10.41908);
   hdirt_stack_3->SetBinError(25,16.14223);
   hdirt_stack_3->SetBinError(26,0.5635077);
   hdirt_stack_3->SetBinError(27,0.735174);
   hdirt_stack_3->SetEntries(20115);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,4.989498);
   houtFV_stack_4->SetBinContent(1,4.249735);
   houtFV_stack_4->SetBinContent(2,926.8456);
   houtFV_stack_4->SetBinContent(3,816.756);
   houtFV_stack_4->SetBinContent(4,333.05);
   houtFV_stack_4->SetBinContent(5,300.6);
   houtFV_stack_4->SetBinContent(6,272.288);
   houtFV_stack_4->SetBinContent(7,267.8613);
   houtFV_stack_4->SetBinContent(8,272.9053);
   houtFV_stack_4->SetBinContent(9,277.834);
   houtFV_stack_4->SetBinContent(10,270.1412);
   houtFV_stack_4->SetBinContent(11,280.7949);
   houtFV_stack_4->SetBinContent(12,270.8247);
   houtFV_stack_4->SetBinContent(13,290.8723);
   houtFV_stack_4->SetBinContent(14,289.2858);
   houtFV_stack_4->SetBinContent(15,269.0989);
   houtFV_stack_4->SetBinContent(16,287.0099);
   houtFV_stack_4->SetBinContent(17,267.6555);
   houtFV_stack_4->SetBinContent(18,268.9649);
   houtFV_stack_4->SetBinContent(19,259.6559);
   houtFV_stack_4->SetBinContent(20,275.0161);
   houtFV_stack_4->SetBinContent(21,275.0078);
   houtFV_stack_4->SetBinContent(22,287.6818);
   houtFV_stack_4->SetBinContent(23,336.985);
   houtFV_stack_4->SetBinContent(24,595.8431);
   houtFV_stack_4->SetBinContent(25,1456.294);
   houtFV_stack_4->SetBinContent(26,6.020174);
   houtFV_stack_4->SetBinContent(27,4.928789);
   houtFV_stack_4->SetBinError(0,1.037058);
   houtFV_stack_4->SetBinError(1,1.038438);
   houtFV_stack_4->SetBinError(2,18.26495);
   houtFV_stack_4->SetBinError(3,17.14994);
   houtFV_stack_4->SetBinError(4,11.00565);
   houtFV_stack_4->SetBinError(5,10.75334);
   houtFV_stack_4->SetBinError(6,9.318314);
   houtFV_stack_4->SetBinError(7,9.477577);
   houtFV_stack_4->SetBinError(8,9.449002);
   houtFV_stack_4->SetBinError(9,9.677434);
   houtFV_stack_4->SetBinError(10,9.665282);
   houtFV_stack_4->SetBinError(11,11.11959);
   houtFV_stack_4->SetBinError(12,10.05134);
   houtFV_stack_4->SetBinError(13,10.09539);
   houtFV_stack_4->SetBinError(14,10.97723);
   houtFV_stack_4->SetBinError(15,9.42161);
   houtFV_stack_4->SetBinError(16,10.73984);
   houtFV_stack_4->SetBinError(17,9.598313);
   houtFV_stack_4->SetBinError(18,10.44144);
   houtFV_stack_4->SetBinError(19,9.972315);
   houtFV_stack_4->SetBinError(20,10.90964);
   houtFV_stack_4->SetBinError(21,9.489455);
   houtFV_stack_4->SetBinError(22,9.900572);
   houtFV_stack_4->SetBinError(23,10.55622);
   houtFV_stack_4->SetBinError(24,15.04299);
   houtFV_stack_4->SetBinError(25,24.00461);
   houtFV_stack_4->SetBinError(26,1.194414);
   houtFV_stack_4->SetBinError(27,1.08514);
   houtFV_stack_4->SetEntries(37487);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.747498);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.748241);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.701076);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.645276);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.170808);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.115008);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.795154);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.10139);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.046422);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.21689);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.030476);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8501219);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9065858);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.477876);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.036212);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.693274);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.365211);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7655898);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5540384);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5804542);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4156262);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4137491);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3538311);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3516243);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3073253);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3413269);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3663515);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.405216);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3194342);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2770189);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2545655);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.408066);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4975981);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5955136);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7368082);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2348149);
   hNCpi0inFVcoh_stack_5->SetEntries(638);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.2512681);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,15.96799);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,83.80273);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,109.7286);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,79.93668);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,57.94702);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,47.43333);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,46.76541);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,40.57623);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,37.01863);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,38.67918);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,37.7505);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,40.19374);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,31.16422);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,34.5807);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,37.91744);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,40.34006);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,41.67396);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,44.02639);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,51.32424);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,60.36607);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,79.05762);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,113.4778);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,103.7532);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,27.45662);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.1994106);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.261464);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.041608);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.413811);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.974323);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.43643);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.229388);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.265954);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.105637);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.976771);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.030881);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.992899);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.98167);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.764975);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.923482);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.095044);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.127085);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.099436);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.182649);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.314151);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.599232);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.889708);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.569815);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.345626);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.690851);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetEntries(23937);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,1.660551);
   hCCpi0inFV_stack_7->SetBinContent(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinContent(2,69.64985);
   hCCpi0inFV_stack_7->SetBinContent(3,366.0415);
   hCCpi0inFV_stack_7->SetBinContent(4,530.8934);
   hCCpi0inFV_stack_7->SetBinContent(5,499.9138);
   hCCpi0inFV_stack_7->SetBinContent(6,469.7827);
   hCCpi0inFV_stack_7->SetBinContent(7,453.8918);
   hCCpi0inFV_stack_7->SetBinContent(8,436.7937);
   hCCpi0inFV_stack_7->SetBinContent(9,406.614);
   hCCpi0inFV_stack_7->SetBinContent(10,416.8456);
   hCCpi0inFV_stack_7->SetBinContent(11,408.246);
   hCCpi0inFV_stack_7->SetBinContent(12,398.3431);
   hCCpi0inFV_stack_7->SetBinContent(13,410.0626);
   hCCpi0inFV_stack_7->SetBinContent(14,384.5131);
   hCCpi0inFV_stack_7->SetBinContent(15,386.3528);
   hCCpi0inFV_stack_7->SetBinContent(16,411.7194);
   hCCpi0inFV_stack_7->SetBinContent(17,390.5877);
   hCCpi0inFV_stack_7->SetBinContent(18,417.6138);
   hCCpi0inFV_stack_7->SetBinContent(19,442.9991);
   hCCpi0inFV_stack_7->SetBinContent(20,456.933);
   hCCpi0inFV_stack_7->SetBinContent(21,464.9845);
   hCCpi0inFV_stack_7->SetBinContent(22,519.3005);
   hCCpi0inFV_stack_7->SetBinContent(23,515.3175);
   hCCpi0inFV_stack_7->SetBinContent(24,412.6542);
   hCCpi0inFV_stack_7->SetBinContent(25,89.25003);
   hCCpi0inFV_stack_7->SetBinContent(26,0.5884556);
   hCCpi0inFV_stack_7->SetBinContent(27,0.785171);
   hCCpi0inFV_stack_7->SetBinError(0,0.650847);
   hCCpi0inFV_stack_7->SetBinError(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinError(2,4.17661);
   hCCpi0inFV_stack_7->SetBinError(3,9.655346);
   hCCpi0inFV_stack_7->SetBinError(4,11.52629);
   hCCpi0inFV_stack_7->SetBinError(5,11.22122);
   hCCpi0inFV_stack_7->SetBinError(6,10.88093);
   hCCpi0inFV_stack_7->SetBinError(7,10.68638);
   hCCpi0inFV_stack_7->SetBinError(8,10.52523);
   hCCpi0inFV_stack_7->SetBinError(9,10.1114);
   hCCpi0inFV_stack_7->SetBinError(10,10.24857);
   hCCpi0inFV_stack_7->SetBinError(11,10.11001);
   hCCpi0inFV_stack_7->SetBinError(12,10.07379);
   hCCpi0inFV_stack_7->SetBinError(13,10.3371);
   hCCpi0inFV_stack_7->SetBinError(14,9.934243);
   hCCpi0inFV_stack_7->SetBinError(15,9.818721);
   hCCpi0inFV_stack_7->SetBinError(16,10.17472);
   hCCpi0inFV_stack_7->SetBinError(17,9.961339);
   hCCpi0inFV_stack_7->SetBinError(18,10.23427);
   hCCpi0inFV_stack_7->SetBinError(19,10.62601);
   hCCpi0inFV_stack_7->SetBinError(20,10.71074);
   hCCpi0inFV_stack_7->SetBinError(21,10.81876);
   hCCpi0inFV_stack_7->SetBinError(22,11.46347);
   hCCpi0inFV_stack_7->SetBinError(23,11.34308);
   hCCpi0inFV_stack_7->SetBinError(24,10.20867);
   hCCpi0inFV_stack_7->SetBinError(25,4.727365);
   hCCpi0inFV_stack_7->SetBinError(26,0.3397478);
   hCCpi0inFV_stack_7->SetBinError(27,0.3925882);
   hCCpi0inFV_stack_7->SetEntries(41686);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(0,0.3401776);
   hNCinFV_stack_8->SetBinContent(2,41.08313);
   hNCinFV_stack_8->SetBinContent(3,191.9337);
   hNCinFV_stack_8->SetBinContent(4,236.3429);
   hNCinFV_stack_8->SetBinContent(5,163.7806);
   hNCinFV_stack_8->SetBinContent(6,115.8767);
   hNCinFV_stack_8->SetBinContent(7,92.25291);
   hNCinFV_stack_8->SetBinContent(8,87.83852);
   hNCinFV_stack_8->SetBinContent(9,85.73278);
   hNCinFV_stack_8->SetBinContent(10,82.52264);
   hNCinFV_stack_8->SetBinContent(11,75.99432);
   hNCinFV_stack_8->SetBinContent(12,81.1726);
   hNCinFV_stack_8->SetBinContent(13,81.83485);
   hNCinFV_stack_8->SetBinContent(14,80.78116);
   hNCinFV_stack_8->SetBinContent(15,79.1377);
   hNCinFV_stack_8->SetBinContent(16,67.08798);
   hNCinFV_stack_8->SetBinContent(17,78.63235);
   hNCinFV_stack_8->SetBinContent(18,87.81996);
   hNCinFV_stack_8->SetBinContent(19,90.75716);
   hNCinFV_stack_8->SetBinContent(20,100.6691);
   hNCinFV_stack_8->SetBinContent(21,128.2027);
   hNCinFV_stack_8->SetBinContent(22,154.6212);
   hNCinFV_stack_8->SetBinContent(23,219.2104);
   hNCinFV_stack_8->SetBinContent(24,220.8165);
   hNCinFV_stack_8->SetBinContent(25,58.07156);
   hNCinFV_stack_8->SetBinError(0,0.3401776);
   hNCinFV_stack_8->SetBinError(2,3.197042);
   hNCinFV_stack_8->SetBinError(3,6.930293);
   hNCinFV_stack_8->SetBinError(4,7.657822);
   hNCinFV_stack_8->SetBinError(5,6.324937);
   hNCinFV_stack_8->SetBinError(6,5.377355);
   hNCinFV_stack_8->SetBinError(7,4.794883);
   hNCinFV_stack_8->SetBinError(8,4.642191);
   hNCinFV_stack_8->SetBinError(9,4.643655);
   hNCinFV_stack_8->SetBinError(10,4.542955);
   hNCinFV_stack_8->SetBinError(11,4.344336);
   hNCinFV_stack_8->SetBinError(12,4.560011);
   hNCinFV_stack_8->SetBinError(13,4.612537);
   hNCinFV_stack_8->SetBinError(14,4.528667);
   hNCinFV_stack_8->SetBinError(15,4.526181);
   hNCinFV_stack_8->SetBinError(16,4.111794);
   hNCinFV_stack_8->SetBinError(17,4.432036);
   hNCinFV_stack_8->SetBinError(18,4.677515);
   hNCinFV_stack_8->SetBinError(19,4.738597);
   hNCinFV_stack_8->SetBinError(20,5.06568);
   hNCinFV_stack_8->SetBinError(21,5.773065);
   hNCinFV_stack_8->SetBinError(22,6.198393);
   hNCinFV_stack_8->SetBinError(23,7.347014);
   hNCinFV_stack_8->SetBinError(24,7.397157);
   hNCinFV_stack_8->SetBinError(25,3.86129);
   hNCinFV_stack_8->SetEntries(11587);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,1.82994);
   hnumuCCinFV_stack_9->SetBinContent(1,2.103818);
   hnumuCCinFV_stack_9->SetBinContent(2,565.8533);
   hnumuCCinFV_stack_9->SetBinContent(3,2911.001);
   hnumuCCinFV_stack_9->SetBinContent(4,4225.453);
   hnumuCCinFV_stack_9->SetBinContent(5,4275.262);
   hnumuCCinFV_stack_9->SetBinContent(6,4177.731);
   hnumuCCinFV_stack_9->SetBinContent(7,4079.469);
   hnumuCCinFV_stack_9->SetBinContent(8,3989.635);
   hnumuCCinFV_stack_9->SetBinContent(9,3836.777);
   hnumuCCinFV_stack_9->SetBinContent(10,3823.255);
   hnumuCCinFV_stack_9->SetBinContent(11,3756.481);
   hnumuCCinFV_stack_9->SetBinContent(12,3714.91);
   hnumuCCinFV_stack_9->SetBinContent(13,3790.298);
   hnumuCCinFV_stack_9->SetBinContent(14,3646.044);
   hnumuCCinFV_stack_9->SetBinContent(15,3671.322);
   hnumuCCinFV_stack_9->SetBinContent(16,3766.251);
   hnumuCCinFV_stack_9->SetBinContent(17,3765.444);
   hnumuCCinFV_stack_9->SetBinContent(18,3754.302);
   hnumuCCinFV_stack_9->SetBinContent(19,3800.836);
   hnumuCCinFV_stack_9->SetBinContent(20,3862.059);
   hnumuCCinFV_stack_9->SetBinContent(21,3961.303);
   hnumuCCinFV_stack_9->SetBinContent(22,4248.588);
   hnumuCCinFV_stack_9->SetBinContent(23,4248.756);
   hnumuCCinFV_stack_9->SetBinContent(24,3341.717);
   hnumuCCinFV_stack_9->SetBinContent(25,791.441);
   hnumuCCinFV_stack_9->SetBinContent(26,0.7154031);
   hnumuCCinFV_stack_9->SetBinContent(27,5.684015);
   hnumuCCinFV_stack_9->SetBinError(0,0.6111997);
   hnumuCCinFV_stack_9->SetBinError(1,1.380055);
   hnumuCCinFV_stack_9->SetBinError(2,16.7784);
   hnumuCCinFV_stack_9->SetBinError(3,38.01204);
   hnumuCCinFV_stack_9->SetBinError(4,45.8042);
   hnumuCCinFV_stack_9->SetBinError(5,45.47524);
   hnumuCCinFV_stack_9->SetBinError(6,45.9889);
   hnumuCCinFV_stack_9->SetBinError(7,45.22857);
   hnumuCCinFV_stack_9->SetBinError(8,45.56364);
   hnumuCCinFV_stack_9->SetBinError(9,43.3551);
   hnumuCCinFV_stack_9->SetBinError(10,43.92125);
   hnumuCCinFV_stack_9->SetBinError(11,43.37132);
   hnumuCCinFV_stack_9->SetBinError(12,41.64022);
   hnumuCCinFV_stack_9->SetBinError(13,42.42478);
   hnumuCCinFV_stack_9->SetBinError(14,42.81854);
   hnumuCCinFV_stack_9->SetBinError(15,43.66129);
   hnumuCCinFV_stack_9->SetBinError(16,44.26555);
   hnumuCCinFV_stack_9->SetBinError(17,44.92011);
   hnumuCCinFV_stack_9->SetBinError(18,42.623);
   hnumuCCinFV_stack_9->SetBinError(19,43.25033);
   hnumuCCinFV_stack_9->SetBinError(20,43.78072);
   hnumuCCinFV_stack_9->SetBinError(21,44.10567);
   hnumuCCinFV_stack_9->SetBinError(22,46.29286);
   hnumuCCinFV_stack_9->SetBinError(23,45.62589);
   hnumuCCinFV_stack_9->SetBinError(24,41.27907);
   hnumuCCinFV_stack_9->SetBinError(25,19.73745);
   hnumuCCinFV_stack_9->SetBinError(26,0.4181674);
   hnumuCCinFV_stack_9->SetBinError(27,1.754956);
   hnumuCCinFV_stack_9->SetEntries(308279);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(2,4.501578);
   hnueCCinFV_stack_10->SetBinContent(3,28.26794);
   hnueCCinFV_stack_10->SetBinContent(4,43.6077);
   hnueCCinFV_stack_10->SetBinContent(5,31.17085);
   hnueCCinFV_stack_10->SetBinContent(6,21.74316);
   hnueCCinFV_stack_10->SetBinContent(7,14.52018);
   hnueCCinFV_stack_10->SetBinContent(8,13.60706);
   hnueCCinFV_stack_10->SetBinContent(9,15.49155);
   hnueCCinFV_stack_10->SetBinContent(10,18.75548);
   hnueCCinFV_stack_10->SetBinContent(11,12.44571);
   hnueCCinFV_stack_10->SetBinContent(12,9.918855);
   hnueCCinFV_stack_10->SetBinContent(13,9.79007);
   hnueCCinFV_stack_10->SetBinContent(14,9.9737);
   hnueCCinFV_stack_10->SetBinContent(15,10.99309);
   hnueCCinFV_stack_10->SetBinContent(16,14.25813);
   hnueCCinFV_stack_10->SetBinContent(17,14.65605);
   hnueCCinFV_stack_10->SetBinContent(18,16.00126);
   hnueCCinFV_stack_10->SetBinContent(19,15.15885);
   hnueCCinFV_stack_10->SetBinContent(20,20.38321);
   hnueCCinFV_stack_10->SetBinContent(21,23.37728);
   hnueCCinFV_stack_10->SetBinContent(22,28.41721);
   hnueCCinFV_stack_10->SetBinContent(23,28.67667);
   hnueCCinFV_stack_10->SetBinContent(24,24.00713);
   hnueCCinFV_stack_10->SetBinContent(25,9.106998);
   hnueCCinFV_stack_10->SetBinError(2,1.109794);
   hnueCCinFV_stack_10->SetBinError(3,4.368948);
   hnueCCinFV_stack_10->SetBinError(4,5.399232);
   hnueCCinFV_stack_10->SetBinError(5,4.289683);
   hnueCCinFV_stack_10->SetBinError(6,2.515883);
   hnueCCinFV_stack_10->SetBinError(7,2.063139);
   hnueCCinFV_stack_10->SetBinError(8,2.190614);
   hnueCCinFV_stack_10->SetBinError(9,3.545362);
   hnueCCinFV_stack_10->SetBinError(10,3.425869);
   hnueCCinFV_stack_10->SetBinError(11,1.907115);
   hnueCCinFV_stack_10->SetBinError(12,1.800492);
   hnueCCinFV_stack_10->SetBinError(13,1.671422);
   hnueCCinFV_stack_10->SetBinError(14,1.635458);
   hnueCCinFV_stack_10->SetBinError(15,1.957098);
   hnueCCinFV_stack_10->SetBinError(16,2.751435);
   hnueCCinFV_stack_10->SetBinError(17,2.146033);
   hnueCCinFV_stack_10->SetBinError(18,2.140345);
   hnueCCinFV_stack_10->SetBinError(19,4.493857);
   hnueCCinFV_stack_10->SetBinError(20,2.365654);
   hnueCCinFV_stack_10->SetBinError(21,2.999202);
   hnueCCinFV_stack_10->SetBinError(22,3.529268);
   hnueCCinFV_stack_10->SetBinError(23,3.853333);
   hnueCCinFV_stack_10->SetBinError(24,2.699805);
   hnueCCinFV_stack_10->SetBinError(25,2.70946);
   hnueCCinFV_stack_10->SetEntries(1603);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__5->SetBinContent(0,18.31144);
   hmcerror__5->SetBinContent(1,7.15613);
   hmcerror__5->SetBinContent(2,2790.828);
   hmcerror__5->SetBinContent(3,5790.976);
   hmcerror__5->SetBinContent(4,6483.112);
   hmcerror__5->SetBinContent(5,6209.285);
   hmcerror__5->SetBinContent(6,5905.231);
   hmcerror__5->SetBinContent(7,5755.312);
   hmcerror__5->SetBinContent(8,5655.484);
   hmcerror__5->SetBinContent(9,5502.294);
   hmcerror__5->SetBinContent(10,5489.305);
   hmcerror__5->SetBinContent(11,5406.074);
   hmcerror__5->SetBinContent(12,5367.643);
   hmcerror__5->SetBinContent(13,5690.262);
   hmcerror__5->SetBinContent(14,5314.019);
   hmcerror__5->SetBinContent(15,5417.776);
   hmcerror__5->SetBinContent(16,5644.75);
   hmcerror__5->SetBinContent(17,5689.769);
   hmcerror__5->SetBinContent(18,5770.834);
   hmcerror__5->SetBinContent(19,5977.196);
   hmcerror__5->SetBinContent(20,6187.867);
   hmcerror__5->SetBinContent(21,6490.566);
   hmcerror__5->SetBinContent(22,7058.909);
   hmcerror__5->SetBinContent(23,7549.487);
   hmcerror__5->SetBinContent(24,7586.095);
   hmcerror__5->SetBinContent(25,6268.849);
   hmcerror__5->SetBinContent(26,15.19744);
   hmcerror__5->SetBinContent(27,22.97096);
   hmcerror__5->SetBinError(0,2.331846);
   hmcerror__5->SetBinError(1,8.278583);
   hmcerror__5->SetBinError(2,381.5878);
   hmcerror__5->SetBinError(3,819.9182);
   hmcerror__5->SetBinError(4,928.233);
   hmcerror__5->SetBinError(5,857.4772);
   hmcerror__5->SetBinError(6,857.9135);
   hmcerror__5->SetBinError(7,786.0784);
   hmcerror__5->SetBinError(8,810.1959);
   hmcerror__5->SetBinError(9,747.9551);
   hmcerror__5->SetBinError(10,776.143);
   hmcerror__5->SetBinError(11,766.0662);
   hmcerror__5->SetBinError(12,742.312);
   hmcerror__5->SetBinError(13,749.0004);
   hmcerror__5->SetBinError(14,749.3794);
   hmcerror__5->SetBinError(15,735.7163);
   hmcerror__5->SetBinError(16,780.8357);
   hmcerror__5->SetBinError(17,754.8661);
   hmcerror__5->SetBinError(18,750.3905);
   hmcerror__5->SetBinError(19,785.7422);
   hmcerror__5->SetBinError(20,794.3416);
   hmcerror__5->SetBinError(21,807.9019);
   hmcerror__5->SetBinError(22,904.11);
   hmcerror__5->SetBinError(23,925.6778);
   hmcerror__5->SetBinError(24,803.7698);
   hmcerror__5->SetBinError(25,599.4612);
   hmcerror__5->SetBinError(26,9.045168);
   hmcerror__5->SetBinError(27,11.44717);
   hmcerror__5->SetEntries(125394.8);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3005[26] = {
   5,
   2141,
   5522,
   6463,
   6362,
   6100,
   5850,
   5708,
   5612,
   5619,
   5517,
   5623,
   5940,
   5467,
   5533,
   5547,
   5718,
   5849,
   5945,
   6106,
   6357,
   6781,
   7375,
   7118,
   5032,
   18};
   Double_t _felx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3005[26] = {
   2.48995,
   46.27094,
   74.31016,
   80.39279,
   79.76215,
   78.1025,
   76.48529,
   75.55131,
   74.91328,
   74.95999,
   74.27651,
   74.98667,
   77.0714,
   73.93916,
   74.38414,
   74.47818,
   75.61746,
   76.47876,
   77.10383,
   78.1409,
   79.7308,
   82.34683,
   85.87782,
   84.36824,
   70.93659,
   4.4008};
   Double_t _fehx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3005[26] = {
   2.21064,
   46.27094,
   74.31016,
   80.39279,
   79.76215,
   78.1025,
   76.48529,
   75.55131,
   74.91328,
   74.95999,
   74.27651,
   74.98667,
   77.0714,
   73.93916,
   74.38414,
   74.47818,
   75.61746,
   76.47876,
   77.10383,
   78.1409,
   79.7308,
   82.34683,
   85.87782,
   84.36824,
   70.93659,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(2.259045);
   Graph_Graph3005->SetMaximum(8206.715);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.99#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=47.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 139308.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3500.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22822.1","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4997.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9459.5","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1301.1","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9760.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 2702.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 86007.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 438.8","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3006[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3006[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3006[26] = {
   1.156852,
   0.1367292,
   0.1415855,
   0.1431771,
   0.138096,
   0.1452803,
   0.1365831,
   0.1432585,
   0.1359351,
   0.1413918,
   0.1417047,
   0.1382938,
   0.1316284,
   0.1410193,
   0.1357967,
   0.1383296,
   0.1326708,
   0.1300315,
   0.1314567,
   0.1283708,
   0.1244733,
   0.1280807,
   0.1226147,
   0.105953,
   0.0956254,
   0.5951769};
   Double_t _fehx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3006[26] = {
   1.156852,
   0.1367292,
   0.1415855,
   0.1431771,
   0.138096,
   0.1452803,
   0.1365831,
   0.1432585,
   0.1359351,
   0.1413918,
   0.1417047,
   0.1382938,
   0.1316284,
   0.1410193,
   0.1357967,
   0.1383296,
   0.1326708,
   0.1300315,
   0.1314567,
   0.1283708,
   0.1244733,
   0.1280807,
   0.1226147,
   0.105953,
   0.0956254,
   0.5951769};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-156,156);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3007[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3007[26] = {
   0.3802725,
   0.1276904,
   0.1291177,
   0.136213,
   0.1342876,
   0.1406137,
   0.1344498,
   0.1397927,
   0.1334702,
   0.13752,
   0.1395513,
   0.1348939,
   0.1288205,
   0.1382807,
   0.1339618,
   0.1355788,
   0.1303648,
   0.1277194,
   0.1278117,
   0.1252122,
   0.1220822,
   0.1252533,
   0.1201135,
   0.1042752,
   0.08488729,
   0.3094844};
   Double_t _fehx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3007[26] = {
   0.3802725,
   0.1276904,
   0.1291177,
   0.136213,
   0.1342876,
   0.1406137,
   0.1344498,
   0.1397927,
   0.1334702,
   0.13752,
   0.1395513,
   0.1348939,
   0.1288205,
   0.1382807,
   0.1339618,
   0.1355788,
   0.1303648,
   0.1277194,
   0.1278117,
   0.1252122,
   0.1220822,
   0.1252533,
   0.1201135,
   0.1042752,
   0.08488729,
   0.3094844};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-156,156);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3008[26] = {
   0.6987017,
   0.7671558,
   0.9535526,
   0.9968978,
   1.024595,
   1.032982,
   1.016452,
   1.009286,
   1.019938,
   1.023627,
   1.020519,
   1.047573,
   1.043889,
   1.028788,
   1.021268,
   0.982683,
   1.004962,
   1.013545,
   0.9946136,
   0.9867698,
   0.9794215,
   0.96063,
   0.9768875,
   0.9382956,
   0.8026992,
   1.18441};
   Double_t _felx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3008[26] = {
   0.3479465,
   0.01657965,
   0.01283206,
   0.01240034,
   0.01284563,
   0.01322599,
   0.01328951,
   0.01335895,
   0.01361492,
   0.01365564,
   0.01373945,
   0.01397013,
   0.01354444,
   0.01391398,
   0.01372964,
   0.01319424,
   0.01329008,
   0.01325263,
   0.01289967,
   0.01262808,
   0.0122841,
   0.01166566,
   0.01137532,
   0.01112143,
   0.01131573,
   0.289575};
   Double_t _fehx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3008[26] = {
   0.3089156,
   0.01657965,
   0.01283206,
   0.01240034,
   0.01284563,
   0.01322599,
   0.01328951,
   0.01335895,
   0.01361492,
   0.01365564,
   0.01373945,
   0.01397013,
   0.01354444,
   0.01391398,
   0.01372964,
   0.01319424,
   0.01329008,
   0.01325263,
   0.01289967,
   0.01262808,
   0.0122841,
   0.01166566,
   0.01137532,
   0.01112143,
   0.01131573,
   0.2754279};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0.239847);
   Graph_Graph3008->SetMaximum(1.570746);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(-130,1,130,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

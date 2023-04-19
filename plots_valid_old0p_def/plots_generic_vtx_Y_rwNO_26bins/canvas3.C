#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Feb 20 23:25:58 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
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
   pad1->Range(-170,-151.9337,163.3333,16800.67);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__7->SetBinContent(0,18.31144);
   hmc__7->SetBinContent(1,7.352845);
   hmc__7->SetBinContent(2,2792.238);
   hmc__7->SetBinContent(3,5800.547);
   hmc__7->SetBinContent(4,6497.529);
   hmc__7->SetBinContent(5,6223.017);
   hmc__7->SetBinContent(6,5914.516);
   hmc__7->SetBinContent(7,5763.672);
   hmc__7->SetBinContent(8,5659.972);
   hmc__7->SetBinContent(9,5509.722);
   hmc__7->SetBinContent(10,5494.193);
   hmc__7->SetBinContent(11,5412.226);
   hmc__7->SetBinContent(12,5372.521);
   hmc__7->SetBinContent(13,5694.032);
   hmc__7->SetBinContent(14,5318.998);
   hmc__7->SetBinContent(15,5424.13);
   hmc__7->SetBinContent(16,5648.944);
   hmc__7->SetBinContent(17,5694.559);
   hmc__7->SetBinContent(18,5776.399);
   hmc__7->SetBinContent(19,5982.871);
   hmc__7->SetBinContent(20,6192.988);
   hmc__7->SetBinContent(21,6499.019);
   hmc__7->SetBinContent(22,7069.212);
   hmc__7->SetBinContent(23,7561.899);
   hmc__7->SetBinContent(24,7596.687);
   hmc__7->SetBinContent(25,6272.812);
   hmc__7->SetBinContent(26,15.19745);
   hmc__7->SetBinContent(27,22.97096);
   hmc__7->SetBinError(0,2.331846);
   hmc__7->SetBinError(1,9.260106);
   hmc__7->SetBinError(2,373.5075);
   hmc__7->SetBinError(3,794.4613);
   hmc__7->SetBinError(4,928.711);
   hmc__7->SetBinError(5,856.4641);
   hmc__7->SetBinError(6,854.3869);
   hmc__7->SetBinError(7,785.2999);
   hmc__7->SetBinError(8,814.578);
   hmc__7->SetBinError(9,749.4687);
   hmc__7->SetBinError(10,773.2453);
   hmc__7->SetBinError(11,767.3603);
   hmc__7->SetBinError(12,740.6204);
   hmc__7->SetBinError(13,749.0063);
   hmc__7->SetBinError(14,745.8995);
   hmc__7->SetBinError(15,737.4786);
   hmc__7->SetBinError(16,776.7199);
   hmc__7->SetBinError(17,753.8521);
   hmc__7->SetBinError(18,749.5498);
   hmc__7->SetBinError(19,786.8985);
   hmc__7->SetBinError(20,789.9575);
   hmc__7->SetBinError(21,804.8368);
   hmc__7->SetBinError(22,916.4737);
   hmc__7->SetBinError(23,923.3675);
   hmc__7->SetBinError(24,807.4844);
   hmc__7->SetBinError(25,583.555);
   hmc__7->SetBinError(26,11.51275);
   hmc__7->SetBinError(27,16.51973);
   hmc__7->SetMinimum(-151.9337);
   hmc__7->SetMaximum(15953.04);
   hmc__7->SetEntries(125565.7);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,-130,130);
   hs3_stack_3->SetMinimum(-3.571482e-09);
   hs3_stack_3->SetMaximum(7976.521);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6955079);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7521399);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2448232);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2841855);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3610006);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04832419);
   hNCpi0inFVqe_stack_6->SetEntries(161);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.7472);
   hNCpi0inFVres_stack_7->SetBinContent(3,59.86974);
   hNCpi0inFVres_stack_7->SetBinContent(4,75.98427);
   hNCpi0inFVres_stack_7->SetBinContent(5,54.28931);
   hNCpi0inFVres_stack_7->SetBinContent(6,40.04096);
   hNCpi0inFVres_stack_7->SetBinContent(7,31.99644);
   hNCpi0inFVres_stack_7->SetBinContent(8,31.70731);
   hNCpi0inFVres_stack_7->SetBinContent(9,28.87795);
   hNCpi0inFVres_stack_7->SetBinContent(10,25.65315);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.36726);
   hNCpi0inFVres_stack_7->SetBinContent(12,23.79712);
   hNCpi0inFVres_stack_7->SetBinContent(13,26.50043);
   hNCpi0inFVres_stack_7->SetBinContent(14,19.08712);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.45827);
   hNCpi0inFVres_stack_7->SetBinContent(16,26.19025);
   hNCpi0inFVres_stack_7->SetBinContent(17,27.5268);
   hNCpi0inFVres_stack_7->SetBinContent(18,29.33231);
   hNCpi0inFVres_stack_7->SetBinContent(19,29.48079);
   hNCpi0inFVres_stack_7->SetBinContent(20,36.33923);
   hNCpi0inFVres_stack_7->SetBinContent(21,40.7448);
   hNCpi0inFVres_stack_7->SetBinContent(22,56.68056);
   hNCpi0inFVres_stack_7->SetBinContent(23,80.73566);
   hNCpi0inFVres_stack_7->SetBinContent(24,75.5854);
   hNCpi0inFVres_stack_7->SetBinContent(25,19.77147);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(1,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(2,1.150272);
   hNCpi0inFVres_stack_7->SetBinError(3,2.568402);
   hNCpi0inFVres_stack_7->SetBinError(4,2.801185);
   hNCpi0inFVres_stack_7->SetBinError(5,2.435779);
   hNCpi0inFVres_stack_7->SetBinError(6,1.995371);
   hNCpi0inFVres_stack_7->SetBinError(7,1.816911);
   hNCpi0inFVres_stack_7->SetBinError(8,1.842842);
   hNCpi0inFVres_stack_7->SetBinError(9,1.777095);
   hNCpi0inFVres_stack_7->SetBinError(10,1.63762);
   hNCpi0inFVres_stack_7->SetBinError(11,1.649225);
   hNCpi0inFVres_stack_7->SetBinError(12,1.557798);
   hNCpi0inFVres_stack_7->SetBinError(13,1.578193);
   hNCpi0inFVres_stack_7->SetBinError(14,1.328323);
   hNCpi0inFVres_stack_7->SetBinError(15,1.608303);
   hNCpi0inFVres_stack_7->SetBinError(16,1.749504);
   hNCpi0inFVres_stack_7->SetBinError(17,1.775415);
   hNCpi0inFVres_stack_7->SetBinError(18,1.753725);
   hNCpi0inFVres_stack_7->SetBinError(19,1.764677);
   hNCpi0inFVres_stack_7->SetBinError(20,1.978034);
   hNCpi0inFVres_stack_7->SetBinError(21,2.126773);
   hNCpi0inFVres_stack_7->SetBinError(22,2.446341);
   hNCpi0inFVres_stack_7->SetBinError(23,3.019335);
   hNCpi0inFVres_stack_7->SetBinError(24,2.855565);
   hNCpi0inFVres_stack_7->SetBinError(25,1.402556);
   hNCpi0inFVres_stack_7->SetBinError(26,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(16798);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.192897);
   hNCpi0inFVdis_stack_8->SetBinContent(3,23.31902);
   hNCpi0inFVdis_stack_8->SetBinContent(4,32.99073);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.39626);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.29276);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.71349);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.80683);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.39122);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.51602);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.25613);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.64631);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.63751);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.77003);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.06663);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.61559);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.63225);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.69945);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.21063);
   hNCpi0inFVdis_stack_8->SetBinContent(20,14.60852);
   hNCpi0inFVdis_stack_8->SetBinContent(21,19.13318);
   hNCpi0inFVdis_stack_8->SetBinContent(22,21.93131);
   hNCpi0inFVdis_stack_8->SetBinContent(23,31.7794);
   hNCpi0inFVdis_stack_8->SetBinContent(24,27.41419);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.601459);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5170958);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.61394);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.928972);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.704867);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.375249);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.268183);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.303348);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.111);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.065641);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.184474);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.22621);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.197817);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.144279);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.054319);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.151231);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.166441);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.102678);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.267979);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.180112);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.476387);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.529666);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.869577);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.718264);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9431223);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(6964);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(1,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,61.88229);
   hCCpi0inFV_stack_10->SetBinContent(3,326.1754);
   hCCpi0inFV_stack_10->SetBinContent(4,471.531);
   hCCpi0inFV_stack_10->SetBinContent(5,451.5577);
   hCCpi0inFV_stack_10->SetBinContent(6,424.1592);
   hCCpi0inFV_stack_10->SetBinContent(7,410.0584);
   hCCpi0inFV_stack_10->SetBinContent(8,393.6103);
   hCCpi0inFV_stack_10->SetBinContent(9,358.478);
   hCCpi0inFV_stack_10->SetBinContent(10,369.8303);
   hCCpi0inFV_stack_10->SetBinContent(11,371.4528);
   hCCpi0inFV_stack_10->SetBinContent(12,360.1802);
   hCCpi0inFV_stack_10->SetBinContent(13,366.8035);
   hCCpi0inFV_stack_10->SetBinContent(14,346.8012);
   hCCpi0inFV_stack_10->SetBinContent(15,342.4303);
   hCCpi0inFV_stack_10->SetBinContent(16,368.7753);
   hCCpi0inFV_stack_10->SetBinContent(17,352.8942);
   hCCpi0inFV_stack_10->SetBinContent(18,376.2816);
   hCCpi0inFV_stack_10->SetBinContent(19,397.5172);
   hCCpi0inFV_stack_10->SetBinContent(20,409.3105);
   hCCpi0inFV_stack_10->SetBinContent(21,423.8187);
   hCCpi0inFV_stack_10->SetBinContent(22,467.5963);
   hCCpi0inFV_stack_10->SetBinContent(23,462.0801);
   hCCpi0inFV_stack_10->SetBinContent(24,369.4585);
   hCCpi0inFV_stack_10->SetBinContent(25,77.90634);
   hCCpi0inFV_stack_10->SetBinContent(26,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(27,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(0,0.650847);
   hCCpi0inFV_stack_10->SetBinError(1,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,3.93444);
   hCCpi0inFV_stack_10->SetBinError(3,9.124285);
   hCCpi0inFV_stack_10->SetBinError(4,10.86416);
   hCCpi0inFV_stack_10->SetBinError(5,10.65792);
   hCCpi0inFV_stack_10->SetBinError(6,10.33451);
   hCCpi0inFV_stack_10->SetBinError(7,10.17339);
   hCCpi0inFV_stack_10->SetBinError(8,9.97822);
   hCCpi0inFV_stack_10->SetBinError(9,9.492257);
   hCCpi0inFV_stack_10->SetBinError(10,9.648415);
   hCCpi0inFV_stack_10->SetBinError(11,9.648142);
   hCCpi0inFV_stack_10->SetBinError(12,9.60656);
   hCCpi0inFV_stack_10->SetBinError(13,9.777895);
   hCCpi0inFV_stack_10->SetBinError(14,9.451793);
   hCCpi0inFV_stack_10->SetBinError(15,9.240843);
   hCCpi0inFV_stack_10->SetBinError(16,9.628206);
   hCCpi0inFV_stack_10->SetBinError(17,9.487986);
   hCCpi0inFV_stack_10->SetBinError(18,9.704789);
   hCCpi0inFV_stack_10->SetBinError(19,10.05658);
   hCCpi0inFV_stack_10->SetBinError(20,10.12861);
   hCCpi0inFV_stack_10->SetBinError(21,10.34941);
   hCCpi0inFV_stack_10->SetBinError(22,10.87331);
   hCCpi0inFV_stack_10->SetBinError(23,10.76679);
   hCCpi0inFV_stack_10->SetBinError(24,9.664018);
   hCCpi0inFV_stack_10->SetBinError(25,4.419747);
   hCCpi0inFV_stack_10->SetBinError(26,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(27,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(37413);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(0,0.3401776);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,42.49371);
   hNCinFV_stack_11->SetBinContent(3,201.5053);
   hNCinFV_stack_11->SetBinContent(4,250.7605);
   hNCinFV_stack_11->SetBinContent(5,177.5117);
   hNCinFV_stack_11->SetBinContent(6,125.1613);
   hNCinFV_stack_11->SetBinContent(7,100.6123);
   hNCinFV_stack_11->SetBinContent(8,92.32531);
   hNCinFV_stack_11->SetBinContent(9,93.16016);
   hNCinFV_stack_11->SetBinContent(10,87.50768);
   hNCinFV_stack_11->SetBinContent(11,82.14503);
   hNCinFV_stack_11->SetBinContent(12,86.05113);
   hNCinFV_stack_11->SetBinContent(13,85.60432);
   hNCinFV_stack_11->SetBinContent(14,85.75944);
   hNCinFV_stack_11->SetBinContent(15,85.49129);
   hNCinFV_stack_11->SetBinContent(16,71.28278);
   hNCinFV_stack_11->SetBinContent(17,83.42237);
   hNCinFV_stack_11->SetBinContent(18,93.58002);
   hNCinFV_stack_11->SetBinContent(19,96.4321);
   hNCinFV_stack_11->SetBinContent(20,105.7909);
   hNCinFV_stack_11->SetBinContent(21,136.6557);
   hNCinFV_stack_11->SetBinContent(22,164.9247);
   hNCinFV_stack_11->SetBinContent(23,231.6212);
   hNCinFV_stack_11->SetBinContent(24,231.6037);
   hNCinFV_stack_11->SetBinContent(25,62.03438);
   hNCinFV_stack_11->SetBinError(0,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,3.262562);
   hNCinFV_stack_11->SetBinError(3,7.105902);
   hNCinFV_stack_11->SetBinError(4,7.88071);
   hNCinFV_stack_11->SetBinError(5,6.59035);
   hNCinFV_stack_11->SetBinError(6,5.588092);
   hNCinFV_stack_11->SetBinError(7,5.007185);
   hNCinFV_stack_11->SetBinError(8,4.777237);
   hNCinFV_stack_11->SetBinError(9,4.838602);
   hNCinFV_stack_11->SetBinError(10,4.680872);
   hNCinFV_stack_11->SetBinError(11,4.535442);
   hNCinFV_stack_11->SetBinError(12,4.705581);
   hNCinFV_stack_11->SetBinError(13,4.707699);
   hNCinFV_stack_11->SetBinError(14,4.666723);
   hNCinFV_stack_11->SetBinError(15,4.693188);
   hNCinFV_stack_11->SetBinError(16,4.245334);
   hNCinFV_stack_11->SetBinError(17,4.569139);
   hNCinFV_stack_11->SetBinError(18,4.827155);
   hNCinFV_stack_11->SetBinError(19,4.874754);
   hNCinFV_stack_11->SetBinError(20,5.196885);
   hNCinFV_stack_11->SetBinError(21,5.960366);
   hNCinFV_stack_11->SetBinError(22,6.409166);
   hNCinFV_stack_11->SetBinError(23,7.556363);
   hNCinFV_stack_11->SetBinError(24,7.587358);
   hNCinFV_stack_11->SetBinError(25,3.979179);
   hNCinFV_stack_11->SetEntries(12313);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,1.82994);
   hnumuCCinFV_stack_12->SetBinContent(1,2.103818);
   hnumuCCinFV_stack_12->SetBinContent(2,573.6208);
   hnumuCCinFV_stack_12->SetBinContent(3,2950.868);
   hnumuCCinFV_stack_12->SetBinContent(4,4284.815);
   hnumuCCinFV_stack_12->SetBinContent(5,4323.619);
   hnumuCCinFV_stack_12->SetBinContent(6,4223.355);
   hnumuCCinFV_stack_12->SetBinContent(7,4123.304);
   hnumuCCinFV_stack_12->SetBinContent(8,4032.819);
   hnumuCCinFV_stack_12->SetBinContent(9,3884.913);
   hnumuCCinFV_stack_12->SetBinContent(10,3870.27);
   hnumuCCinFV_stack_12->SetBinContent(11,3793.274);
   hnumuCCinFV_stack_12->SetBinContent(12,3753.072);
   hnumuCCinFV_stack_12->SetBinContent(13,3833.557);
   hnumuCCinFV_stack_12->SetBinContent(14,3683.756);
   hnumuCCinFV_stack_12->SetBinContent(15,3715.245);
   hnumuCCinFV_stack_12->SetBinContent(16,3809.195);
   hnumuCCinFV_stack_12->SetBinContent(17,3803.138);
   hnumuCCinFV_stack_12->SetBinContent(18,3795.635);
   hnumuCCinFV_stack_12->SetBinContent(19,3846.318);
   hnumuCCinFV_stack_12->SetBinContent(20,3909.681);
   hnumuCCinFV_stack_12->SetBinContent(21,4002.469);
   hnumuCCinFV_stack_12->SetBinContent(22,4300.292);
   hnumuCCinFV_stack_12->SetBinContent(23,4301.994);
   hnumuCCinFV_stack_12->SetBinContent(24,3384.912);
   hnumuCCinFV_stack_12->SetBinContent(25,802.7847);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7154031);
   hnumuCCinFV_stack_12->SetBinContent(27,5.88073);
   hnumuCCinFV_stack_12->SetBinError(0,0.6111997);
   hnumuCCinFV_stack_12->SetBinError(1,1.380055);
   hnumuCCinFV_stack_12->SetBinError(2,16.83683);
   hnumuCCinFV_stack_12->SetBinError(3,38.143);
   hnumuCCinFV_stack_12->SetBinError(4,45.96575);
   hnumuCCinFV_stack_12->SetBinError(5,45.61055);
   hnumuCCinFV_stack_12->SetBinError(6,46.11477);
   hnumuCCinFV_stack_12->SetBinError(7,45.34672);
   hnumuCCinFV_stack_12->SetBinError(8,45.68655);
   hnumuCCinFV_stack_12->SetBinError(9,43.49485);
   hnumuCCinFV_stack_12->SetBinError(10,44.05698);
   hnumuCCinFV_stack_12->SetBinError(11,43.4764);
   hnumuCCinFV_stack_12->SetBinError(12,41.75049);
   hnumuCCinFV_stack_12->SetBinError(13,42.55715);
   hnumuCCinFV_stack_12->SetBinError(14,42.92762);
   hnumuCCinFV_stack_12->SetBinError(15,43.78724);
   hnumuCCinFV_stack_12->SetBinError(16,44.38763);
   hnumuCCinFV_stack_12->SetBinError(17,45.02247);
   hnumuCCinFV_stack_12->SetBinError(18,42.74667);
   hnumuCCinFV_stack_12->SetBinError(19,43.38627);
   hnumuCCinFV_stack_12->SetBinError(20,43.91905);
   hnumuCCinFV_stack_12->SetBinError(21,44.21816);
   hnumuCCinFV_stack_12->SetBinError(22,46.43502);
   hnumuCCinFV_stack_12->SetBinError(23,45.7653);
   hnumuCCinFV_stack_12->SetBinError(24,41.40997);
   hnumuCCinFV_stack_12->SetBinError(25,19.8086);
   hnumuCCinFV_stack_12->SetBinError(26,0.4181674);
   hnumuCCinFV_stack_12->SetBinError(27,1.765947);
   hnumuCCinFV_stack_12->SetEntries(312552);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(2,4.501578);
   hnueCCinFV_stack_13->SetBinContent(3,28.26794);
   hnueCCinFV_stack_13->SetBinContent(4,43.6077);
   hnueCCinFV_stack_13->SetBinContent(5,31.17085);
   hnueCCinFV_stack_13->SetBinContent(6,21.74316);
   hnueCCinFV_stack_13->SetBinContent(7,14.52018);
   hnueCCinFV_stack_13->SetBinContent(8,13.60706);
   hnueCCinFV_stack_13->SetBinContent(9,15.49155);
   hnueCCinFV_stack_13->SetBinContent(10,18.75548);
   hnueCCinFV_stack_13->SetBinContent(11,12.44571);
   hnueCCinFV_stack_13->SetBinContent(12,9.918855);
   hnueCCinFV_stack_13->SetBinContent(13,9.79007);
   hnueCCinFV_stack_13->SetBinContent(14,9.9737);
   hnueCCinFV_stack_13->SetBinContent(15,10.99309);
   hnueCCinFV_stack_13->SetBinContent(16,14.25813);
   hnueCCinFV_stack_13->SetBinContent(17,14.65605);
   hnueCCinFV_stack_13->SetBinContent(18,16.00126);
   hnueCCinFV_stack_13->SetBinContent(19,15.15885);
   hnueCCinFV_stack_13->SetBinContent(20,20.38321);
   hnueCCinFV_stack_13->SetBinContent(21,23.37728);
   hnueCCinFV_stack_13->SetBinContent(22,28.41721);
   hnueCCinFV_stack_13->SetBinContent(23,28.67667);
   hnueCCinFV_stack_13->SetBinContent(24,24.00713);
   hnueCCinFV_stack_13->SetBinContent(25,9.106998);
   hnueCCinFV_stack_13->SetBinError(2,1.109794);
   hnueCCinFV_stack_13->SetBinError(3,4.368948);
   hnueCCinFV_stack_13->SetBinError(4,5.399232);
   hnueCCinFV_stack_13->SetBinError(5,4.289683);
   hnueCCinFV_stack_13->SetBinError(6,2.515883);
   hnueCCinFV_stack_13->SetBinError(7,2.063139);
   hnueCCinFV_stack_13->SetBinError(8,2.190614);
   hnueCCinFV_stack_13->SetBinError(9,3.545362);
   hnueCCinFV_stack_13->SetBinError(10,3.425869);
   hnueCCinFV_stack_13->SetBinError(11,1.907115);
   hnueCCinFV_stack_13->SetBinError(12,1.800492);
   hnueCCinFV_stack_13->SetBinError(13,1.671422);
   hnueCCinFV_stack_13->SetBinError(14,1.635458);
   hnueCCinFV_stack_13->SetBinError(15,1.957098);
   hnueCCinFV_stack_13->SetBinError(16,2.751435);
   hnueCCinFV_stack_13->SetBinError(17,2.146033);
   hnueCCinFV_stack_13->SetBinError(18,2.140345);
   hnueCCinFV_stack_13->SetBinError(19,4.493857);
   hnueCCinFV_stack_13->SetBinError(20,2.365654);
   hnueCCinFV_stack_13->SetBinError(21,2.999202);
   hnueCCinFV_stack_13->SetBinError(22,3.529268);
   hnueCCinFV_stack_13->SetBinError(23,3.853333);
   hnueCCinFV_stack_13->SetBinError(24,2.699805);
   hnueCCinFV_stack_13->SetBinError(25,2.70946);
   hnueCCinFV_stack_13->SetEntries(1603);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__8->SetBinContent(0,18.31144);
   hmcerror__8->SetBinContent(1,7.352845);
   hmcerror__8->SetBinContent(2,2792.238);
   hmcerror__8->SetBinContent(3,5800.547);
   hmcerror__8->SetBinContent(4,6497.529);
   hmcerror__8->SetBinContent(5,6223.017);
   hmcerror__8->SetBinContent(6,5914.516);
   hmcerror__8->SetBinContent(7,5763.672);
   hmcerror__8->SetBinContent(8,5659.972);
   hmcerror__8->SetBinContent(9,5509.722);
   hmcerror__8->SetBinContent(10,5494.193);
   hmcerror__8->SetBinContent(11,5412.226);
   hmcerror__8->SetBinContent(12,5372.521);
   hmcerror__8->SetBinContent(13,5694.032);
   hmcerror__8->SetBinContent(14,5318.998);
   hmcerror__8->SetBinContent(15,5424.13);
   hmcerror__8->SetBinContent(16,5648.944);
   hmcerror__8->SetBinContent(17,5694.559);
   hmcerror__8->SetBinContent(18,5776.399);
   hmcerror__8->SetBinContent(19,5982.871);
   hmcerror__8->SetBinContent(20,6192.988);
   hmcerror__8->SetBinContent(21,6499.019);
   hmcerror__8->SetBinContent(22,7069.212);
   hmcerror__8->SetBinContent(23,7561.899);
   hmcerror__8->SetBinContent(24,7596.687);
   hmcerror__8->SetBinContent(25,6272.812);
   hmcerror__8->SetBinContent(26,15.19745);
   hmcerror__8->SetBinContent(27,22.97096);
   hmcerror__8->SetBinError(0,2.331846);
   hmcerror__8->SetBinError(1,9.260106);
   hmcerror__8->SetBinError(2,373.5075);
   hmcerror__8->SetBinError(3,794.4613);
   hmcerror__8->SetBinError(4,928.711);
   hmcerror__8->SetBinError(5,856.4641);
   hmcerror__8->SetBinError(6,854.3869);
   hmcerror__8->SetBinError(7,785.2999);
   hmcerror__8->SetBinError(8,814.578);
   hmcerror__8->SetBinError(9,749.4687);
   hmcerror__8->SetBinError(10,773.2453);
   hmcerror__8->SetBinError(11,767.3603);
   hmcerror__8->SetBinError(12,740.6204);
   hmcerror__8->SetBinError(13,749.0063);
   hmcerror__8->SetBinError(14,745.8995);
   hmcerror__8->SetBinError(15,737.4786);
   hmcerror__8->SetBinError(16,776.7199);
   hmcerror__8->SetBinError(17,753.8521);
   hmcerror__8->SetBinError(18,749.5498);
   hmcerror__8->SetBinError(19,786.8985);
   hmcerror__8->SetBinError(20,789.9575);
   hmcerror__8->SetBinError(21,804.8368);
   hmcerror__8->SetBinError(22,916.4737);
   hmcerror__8->SetBinError(23,923.3675);
   hmcerror__8->SetBinError(24,807.4844);
   hmcerror__8->SetBinError(25,583.555);
   hmcerror__8->SetBinError(26,11.51275);
   hmcerror__8->SetBinError(27,16.51973);
   hmcerror__8->SetEntries(125565.7);

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
   
   Double_t _fx3009[26] = {
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
   Double_t _fy3009[26] = {
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
   Double_t _felx3009[26] = {
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
   Double_t _fely3009[26] = {
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
   Double_t _fehx3009[26] = {
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
   Double_t _fehy3009[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-156,156);
   Graph_Graph3009->SetMinimum(2.259045);
   Graph_Graph3009->SetMaximum(8206.715);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=63.6/26","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22822.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4997.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9459.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  903.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  387.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 8761.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 2873.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 87005.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 438.8","F");

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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[26] = {
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
   Double_t _fy3010[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[26] = {
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
   Double_t _fely3010[26] = {
   1.259391,
   0.1337663,
   0.1369632,
   0.142933,
   0.1376284,
   0.1444559,
   0.1362499,
   0.1439191,
   0.1360266,
   0.1407387,
   0.1417828,
   0.1378534,
   0.1315424,
   0.1402331,
   0.1359626,
   0.1374982,
   0.1323811,
   0.1297607,
   0.1315252,
   0.1275568,
   0.1238397,
   0.129643,
   0.1221079,
   0.1062943,
   0.09302925,
   0.7575449};
   Double_t _fehx3010[26] = {
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
   Double_t _fehy3010[26] = {
   1.259391,
   0.1337663,
   0.1369632,
   0.142933,
   0.1376284,
   0.1444559,
   0.1362499,
   0.1439191,
   0.1360266,
   0.1407387,
   0.1417828,
   0.1378534,
   0.1315424,
   0.1402331,
   0.1359626,
   0.1374982,
   0.1323811,
   0.1297607,
   0.1315252,
   0.1275568,
   0.1238397,
   0.129643,
   0.1221079,
   0.1062943,
   0.09302925,
   0.7575449};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-156,156);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
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
   
   Double_t _fx3011[26] = {
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
   Double_t _fy3011[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[26] = {
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
   Double_t _fely3011[26] = {
   0.3760602,
   0.1215051,
   0.1281098,
   0.1359508,
   0.1340153,
   0.140349,
   0.1341463,
   0.1395304,
   0.1332114,
   0.1373014,
   0.139324,
   0.1346565,
   0.1285898,
   0.1380859,
   0.133748,
   0.1353824,
   0.1301488,
   0.1275039,
   0.1275552,
   0.1249561,
   0.1217972,
   0.1249791,
   0.1198173,
   0.1038181,
   0.07948272,
   0.3081743};
   Double_t _fehx3011[26] = {
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
   Double_t _fehy3011[26] = {
   0.3760602,
   0.1215051,
   0.1281098,
   0.1359508,
   0.1340153,
   0.140349,
   0.1341463,
   0.1395304,
   0.1332114,
   0.1373014,
   0.139324,
   0.1346565,
   0.1285898,
   0.1380859,
   0.133748,
   0.1353824,
   0.1301488,
   0.1275039,
   0.1275552,
   0.1249561,
   0.1217972,
   0.1249791,
   0.1198173,
   0.1038181,
   0.07948272,
   0.3081743};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-156,156);
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
   
   Double_t _fx3012[26] = {
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
   Double_t _fy3012[26] = {
   0.6800089,
   0.7667684,
   0.9519791,
   0.9946859,
   1.022334,
   1.031361,
   1.014978,
   1.008486,
   1.018563,
   1.022716,
   1.019359,
   1.046622,
   1.043198,
   1.027825,
   1.020071,
   0.9819534,
   1.004116,
   1.012569,
   0.9936702,
   0.9859537,
   0.9781477,
   0.95923,
   0.9752841,
   0.9369874,
   0.8021921,
   1.184409};
   Double_t _felx3012[26] = {
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
   Double_t _fely3012[26] = {
   0.3386376,
   0.01657127,
   0.01281089,
   0.01237282,
   0.01281728,
   0.01320522,
   0.01327024,
   0.01334835,
   0.01359656,
   0.01364349,
   0.01372384,
   0.01395744,
   0.01353547,
   0.01390096,
   0.01371356,
   0.01318444,
   0.0132789,
   0.01323987,
   0.01288743,
   0.01261764,
   0.01226813,
   0.01164866,
   0.01135665,
   0.01110593,
   0.01130858,
   0.289575};
   Double_t _fehx3012[26] = {
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
   Double_t _fehy3012[26] = {
   0.300651,
   0.01657127,
   0.01281089,
   0.01237282,
   0.01281728,
   0.01320522,
   0.01327024,
   0.01334835,
   0.01359656,
   0.01364349,
   0.01372384,
   0.01395744,
   0.01353547,
   0.01390096,
   0.01371356,
   0.01318444,
   0.0132789,
   0.01323987,
   0.01288743,
   0.01261764,
   0.01226813,
   0.01164866,
   0.01135665,
   0.01110593,
   0.01130858,
   0.2754278};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-156,156);
   Graph_Graph3012->SetMinimum(0.2295247);
   Graph_Graph3012->SetMaximum(1.571684);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_PC_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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

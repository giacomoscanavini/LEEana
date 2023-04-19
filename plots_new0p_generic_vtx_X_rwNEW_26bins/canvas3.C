#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Mar 13 23:40:11 2023) by ROOT version 6.26/00
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
   pad1->Range(-40,-120.6204,293.3333,13338.07);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__7->SetBinContent(0,446.4203);
   hmc__7->SetBinContent(1,6031.018);
   hmc__7->SetBinContent(2,5907.954);
   hmc__7->SetBinContent(3,5595.327);
   hmc__7->SetBinContent(4,5445.509);
   hmc__7->SetBinContent(5,5281.772);
   hmc__7->SetBinContent(6,5260.002);
   hmc__7->SetBinContent(7,5168.039);
   hmc__7->SetBinContent(8,5104.083);
   hmc__7->SetBinContent(9,5053.819);
   hmc__7->SetBinContent(10,5023.728);
   hmc__7->SetBinContent(11,4961.092);
   hmc__7->SetBinContent(12,5089.432);
   hmc__7->SetBinContent(13,4956.221);
   hmc__7->SetBinContent(14,5013.764);
   hmc__7->SetBinContent(15,5065.277);
   hmc__7->SetBinContent(16,5126.674);
   hmc__7->SetBinContent(17,5124.171);
   hmc__7->SetBinContent(18,5199.577);
   hmc__7->SetBinContent(19,5215.556);
   hmc__7->SetBinContent(20,5276.358);
   hmc__7->SetBinContent(21,5337.416);
   hmc__7->SetBinContent(22,5458.239);
   hmc__7->SetBinContent(23,5682.646);
   hmc__7->SetBinContent(24,5640.165);
   hmc__7->SetBinContent(25,5743.453);
   hmc__7->SetBinContent(26,3609.114);
   hmc__7->SetBinContent(27,79.9729);
   hmc__7->SetBinError(0,13.02515);
   hmc__7->SetBinError(1,795.666);
   hmc__7->SetBinError(2,814.4065);
   hmc__7->SetBinError(3,760.1194);
   hmc__7->SetBinError(4,757.5654);
   hmc__7->SetBinError(5,721.4429);
   hmc__7->SetBinError(6,712.9031);
   hmc__7->SetBinError(7,714.1038);
   hmc__7->SetBinError(8,705.6601);
   hmc__7->SetBinError(9,688.2727);
   hmc__7->SetBinError(10,680.5221);
   hmc__7->SetBinError(11,670.2361);
   hmc__7->SetBinError(12,667.4741);
   hmc__7->SetBinError(13,632.8961);
   hmc__7->SetBinError(14,679.8384);
   hmc__7->SetBinError(15,691.0043);
   hmc__7->SetBinError(16,665.4342);
   hmc__7->SetBinError(17,665.9382);
   hmc__7->SetBinError(18,699.3711);
   hmc__7->SetBinError(19,690.6261);
   hmc__7->SetBinError(20,668.77);
   hmc__7->SetBinError(21,744.8937);
   hmc__7->SetBinError(22,742.8451);
   hmc__7->SetBinError(23,792.7826);
   hmc__7->SetBinError(24,821.974);
   hmc__7->SetBinError(25,937.5166);
   hmc__7->SetBinError(26,669.029);
   hmc__7->SetBinError(27,25.63809);
   hmc__7->SetMinimum(-120.6204);
   hmc__7->SetMaximum(12665.14);
   hmc__7->SetEntries(121226);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,0,260);
   hs3_stack_3->SetMinimum(-3.571482e-09);
   hs3_stack_3->SetMaximum(6332.569);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,51.89687);
   hbadmatch_stack_1->SetBinContent(1,88.96706);
   hbadmatch_stack_1->SetBinContent(2,63.02648);
   hbadmatch_stack_1->SetBinContent(3,74.08065);
   hbadmatch_stack_1->SetBinContent(4,71.94508);
   hbadmatch_stack_1->SetBinContent(5,70.50111);
   hbadmatch_stack_1->SetBinContent(6,87.37476);
   hbadmatch_stack_1->SetBinContent(7,98.51868);
   hbadmatch_stack_1->SetBinContent(8,95.85283);
   hbadmatch_stack_1->SetBinContent(9,105.062);
   hbadmatch_stack_1->SetBinContent(10,109.8359);
   hbadmatch_stack_1->SetBinContent(11,111.7828);
   hbadmatch_stack_1->SetBinContent(12,134.6095);
   hbadmatch_stack_1->SetBinContent(13,136.5383);
   hbadmatch_stack_1->SetBinContent(14,145.4522);
   hbadmatch_stack_1->SetBinContent(15,144.159);
   hbadmatch_stack_1->SetBinContent(16,172.3845);
   hbadmatch_stack_1->SetBinContent(17,172.1324);
   hbadmatch_stack_1->SetBinContent(18,183.5701);
   hbadmatch_stack_1->SetBinContent(19,191.2294);
   hbadmatch_stack_1->SetBinContent(20,201.3246);
   hbadmatch_stack_1->SetBinContent(21,185.7525);
   hbadmatch_stack_1->SetBinContent(22,181.9543);
   hbadmatch_stack_1->SetBinContent(23,176.029);
   hbadmatch_stack_1->SetBinContent(24,170.1181);
   hbadmatch_stack_1->SetBinContent(25,150.9494);
   hbadmatch_stack_1->SetBinContent(26,122.0682);
   hbadmatch_stack_1->SetBinContent(27,6.293631);
   hbadmatch_stack_1->SetBinError(0,4.297848);
   hbadmatch_stack_1->SetBinError(1,4.97552);
   hbadmatch_stack_1->SetBinError(2,4.949046);
   hbadmatch_stack_1->SetBinError(3,5.073076);
   hbadmatch_stack_1->SetBinError(4,5.08597);
   hbadmatch_stack_1->SetBinError(5,5.239697);
   hbadmatch_stack_1->SetBinError(6,5.270307);
   hbadmatch_stack_1->SetBinError(7,6.293199);
   hbadmatch_stack_1->SetBinError(8,5.988602);
   hbadmatch_stack_1->SetBinError(9,6.148664);
   hbadmatch_stack_1->SetBinError(10,6.242976);
   hbadmatch_stack_1->SetBinError(11,6.194089);
   hbadmatch_stack_1->SetBinError(12,7.752557);
   hbadmatch_stack_1->SetBinError(13,7.035797);
   hbadmatch_stack_1->SetBinError(14,7.500836);
   hbadmatch_stack_1->SetBinError(15,7.208509);
   hbadmatch_stack_1->SetBinError(16,8.593979);
   hbadmatch_stack_1->SetBinError(17,7.663273);
   hbadmatch_stack_1->SetBinError(18,8.267159);
   hbadmatch_stack_1->SetBinError(19,8.508438);
   hbadmatch_stack_1->SetBinError(20,9.676506);
   hbadmatch_stack_1->SetBinError(21,8.597122);
   hbadmatch_stack_1->SetBinError(22,8.448106);
   hbadmatch_stack_1->SetBinError(23,9.336609);
   hbadmatch_stack_1->SetBinError(24,8.886601);
   hbadmatch_stack_1->SetBinError(25,8.061225);
   hbadmatch_stack_1->SetBinError(26,7.891818);
   hbadmatch_stack_1->SetBinError(27,1.328024);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,195.8588);
   hext_stack_2->SetBinContent(1,955.8046);
   hext_stack_2->SetBinContent(2,671.9284);
   hext_stack_2->SetBinContent(3,652.4457);
   hext_stack_2->SetBinContent(4,626.903);
   hext_stack_2->SetBinContent(5,625.0079);
   hext_stack_2->SetBinContent(6,649.3431);
   hext_stack_2->SetBinContent(7,632.8291);
   hext_stack_2->SetBinContent(8,637.8033);
   hext_stack_2->SetBinContent(9,619.0843);
   hext_stack_2->SetBinContent(10,643.7151);
   hext_stack_2->SetBinContent(11,652.879);
   hext_stack_2->SetBinContent(12,696.2189);
   hext_stack_2->SetBinContent(13,688.5216);
   hext_stack_2->SetBinContent(14,686.4634);
   hext_stack_2->SetBinContent(15,707.649);
   hext_stack_2->SetBinContent(16,738.0336);
   hext_stack_2->SetBinContent(17,746.8461);
   hext_stack_2->SetBinContent(18,744.147);
   hext_stack_2->SetBinContent(19,733.4501);
   hext_stack_2->SetBinContent(20,778.4643);
   hext_stack_2->SetBinContent(21,745.5546);
   hext_stack_2->SetBinContent(22,730.6127);
   hext_stack_2->SetBinContent(23,770.8425);
   hext_stack_2->SetBinContent(24,747.5787);
   hext_stack_2->SetBinContent(25,717.9871);
   hext_stack_2->SetBinContent(26,665.9447);
   hext_stack_2->SetBinContent(27,35.45127);
   hext_stack_2->SetBinError(0,8.694125);
   hext_stack_2->SetBinError(1,20.34398);
   hext_stack_2->SetBinError(2,16.98525);
   hext_stack_2->SetBinError(3,16.80631);
   hext_stack_2->SetBinError(4,16.40783);
   hext_stack_2->SetBinError(5,16.42363);
   hext_stack_2->SetBinError(6,16.6819);
   hext_stack_2->SetBinError(7,16.59055);
   hext_stack_2->SetBinError(8,16.54556);
   hext_stack_2->SetBinError(9,16.35118);
   hext_stack_2->SetBinError(10,16.7388);
   hext_stack_2->SetBinError(11,16.69525);
   hext_stack_2->SetBinError(12,17.27687);
   hext_stack_2->SetBinError(13,17.2025);
   hext_stack_2->SetBinError(14,17.07411);
   hext_stack_2->SetBinError(15,17.36741);
   hext_stack_2->SetBinError(16,17.72045);
   hext_stack_2->SetBinError(17,18.00892);
   hext_stack_2->SetBinError(18,17.74151);
   hext_stack_2->SetBinError(19,17.65248);
   hext_stack_2->SetBinError(20,18.30022);
   hext_stack_2->SetBinError(21,17.94007);
   hext_stack_2->SetBinError(22,17.66503);
   hext_stack_2->SetBinError(23,18.27222);
   hext_stack_2->SetBinError(24,17.95557);
   hext_stack_2->SetBinError(25,17.57302);
   hext_stack_2->SetBinError(26,16.93339);
   hext_stack_2->SetBinError(27,3.961016);
   hext_stack_2->SetEntries(45995);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,24.1676);
   hdirt_stack_3->SetBinContent(1,471.6193);
   hdirt_stack_3->SetBinContent(2,155.5922);
   hdirt_stack_3->SetBinContent(3,146.5967);
   hdirt_stack_3->SetBinContent(4,140.9315);
   hdirt_stack_3->SetBinContent(5,134.921);
   hdirt_stack_3->SetBinContent(6,134.9537);
   hdirt_stack_3->SetBinContent(7,144.2385);
   hdirt_stack_3->SetBinContent(8,163.0546);
   hdirt_stack_3->SetBinContent(9,153.4367);
   hdirt_stack_3->SetBinContent(10,160.0442);
   hdirt_stack_3->SetBinContent(11,165.2501);
   hdirt_stack_3->SetBinContent(12,171.9827);
   hdirt_stack_3->SetBinContent(13,171.6019);
   hdirt_stack_3->SetBinContent(14,178.7632);
   hdirt_stack_3->SetBinContent(15,185.9036);
   hdirt_stack_3->SetBinContent(16,183.2373);
   hdirt_stack_3->SetBinContent(17,188.449);
   hdirt_stack_3->SetBinContent(18,194.2067);
   hdirt_stack_3->SetBinContent(19,184.1463);
   hdirt_stack_3->SetBinContent(20,201.7918);
   hdirt_stack_3->SetBinContent(21,208.1852);
   hdirt_stack_3->SetBinContent(22,188.7676);
   hdirt_stack_3->SetBinContent(23,200.3361);
   hdirt_stack_3->SetBinContent(24,176.94);
   hdirt_stack_3->SetBinContent(25,187.6792);
   hdirt_stack_3->SetBinContent(26,374.5475);
   hdirt_stack_3->SetBinContent(27,8.786924);
   hdirt_stack_3->SetBinError(0,3.186583);
   hdirt_stack_3->SetBinError(1,13.64393);
   hdirt_stack_3->SetBinError(2,8.169511);
   hdirt_stack_3->SetBinError(3,8.033123);
   hdirt_stack_3->SetBinError(4,7.472585);
   hdirt_stack_3->SetBinError(5,6.858938);
   hdirt_stack_3->SetBinError(6,6.699734);
   hdirt_stack_3->SetBinError(7,7.07481);
   hdirt_stack_3->SetBinError(8,7.920851);
   hdirt_stack_3->SetBinError(9,7.518274);
   hdirt_stack_3->SetBinError(10,8.179664);
   hdirt_stack_3->SetBinError(11,8.710811);
   hdirt_stack_3->SetBinError(12,8.485906);
   hdirt_stack_3->SetBinError(13,8.231692);
   hdirt_stack_3->SetBinError(14,8.652511);
   hdirt_stack_3->SetBinError(15,9.349417);
   hdirt_stack_3->SetBinError(16,8.887415);
   hdirt_stack_3->SetBinError(17,7.95009);
   hdirt_stack_3->SetBinError(18,8.45291);
   hdirt_stack_3->SetBinError(19,8.904989);
   hdirt_stack_3->SetBinError(20,9.185716);
   hdirt_stack_3->SetBinError(21,8.894674);
   hdirt_stack_3->SetBinError(22,8.460276);
   hdirt_stack_3->SetBinError(23,8.398782);
   hdirt_stack_3->SetBinError(24,8.128798);
   hdirt_stack_3->SetBinError(25,9.110692);
   hdirt_stack_3->SetBinError(26,13.96284);
   hdirt_stack_3->SetBinError(27,1.960303);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,44.78671);
   houtFV_stack_4->SetBinContent(1,1739.324);
   houtFV_stack_4->SetBinContent(2,334.4599);
   houtFV_stack_4->SetBinContent(3,307.7733);
   houtFV_stack_4->SetBinContent(4,265.2658);
   houtFV_stack_4->SetBinContent(5,295.9733);
   houtFV_stack_4->SetBinContent(6,304.7744);
   houtFV_stack_4->SetBinContent(7,300.2229);
   houtFV_stack_4->SetBinContent(8,280.3035);
   houtFV_stack_4->SetBinContent(9,284.9768);
   houtFV_stack_4->SetBinContent(10,278.292);
   houtFV_stack_4->SetBinContent(11,287.4058);
   houtFV_stack_4->SetBinContent(12,273.4086);
   houtFV_stack_4->SetBinContent(13,281.5957);
   houtFV_stack_4->SetBinContent(14,284.8929);
   houtFV_stack_4->SetBinContent(15,270.4527);
   houtFV_stack_4->SetBinContent(16,280.4228);
   houtFV_stack_4->SetBinContent(17,272.8039);
   houtFV_stack_4->SetBinContent(18,284.7927);
   houtFV_stack_4->SetBinContent(19,260.7943);
   houtFV_stack_4->SetBinContent(20,263.6503);
   houtFV_stack_4->SetBinContent(21,246.1599);
   houtFV_stack_4->SetBinContent(22,256.8693);
   houtFV_stack_4->SetBinContent(23,254.5973);
   houtFV_stack_4->SetBinContent(24,266.2498);
   houtFV_stack_4->SetBinContent(25,319.7511);
   houtFV_stack_4->SetBinContent(26,911.0042);
   houtFV_stack_4->SetBinContent(27,18.45689);
   houtFV_stack_4->SetBinError(0,3.414084);
   houtFV_stack_4->SetBinError(1,26.34329);
   houtFV_stack_4->SetBinError(2,10.91013);
   houtFV_stack_4->SetBinError(3,10.46671);
   houtFV_stack_4->SetBinError(4,8.859726);
   houtFV_stack_4->SetBinError(5,10.25917);
   houtFV_stack_4->SetBinError(6,10.33699);
   houtFV_stack_4->SetBinError(7,11.14212);
   houtFV_stack_4->SetBinError(8,9.744151);
   houtFV_stack_4->SetBinError(9,10.04874);
   houtFV_stack_4->SetBinError(10,10.10044);
   houtFV_stack_4->SetBinError(11,9.471086);
   houtFV_stack_4->SetBinError(12,9.64142);
   houtFV_stack_4->SetBinError(13,10.63198);
   houtFV_stack_4->SetBinError(14,9.815091);
   houtFV_stack_4->SetBinError(15,10.15389);
   houtFV_stack_4->SetBinError(16,10.84017);
   houtFV_stack_4->SetBinError(17,10.34614);
   houtFV_stack_4->SetBinError(18,11.33923);
   houtFV_stack_4->SetBinError(19,9.656846);
   houtFV_stack_4->SetBinError(20,9.921154);
   houtFV_stack_4->SetBinError(21,9.231733);
   houtFV_stack_4->SetBinError(22,9.777288);
   houtFV_stack_4->SetBinError(23,9.107463);
   houtFV_stack_4->SetBinError(24,8.996685);
   houtFV_stack_4->SetBinError(25,10.56039);
   houtFV_stack_4->SetBinError(26,18.6348);
   houtFV_stack_4->SetBinError(27,2.182427);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.35673);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.594548);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.27303);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.030308);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.449976);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7240718);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.087772);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7949858);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.94113);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5996859);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6420361);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6833858);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.8365039);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.659726);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.213822);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.867148);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7528039);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.240058);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.63033);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.39484);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.341616);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.773238);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5131296);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5733148);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.510849);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2632096);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4071111);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.217311);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3307091);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2483746);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4941488);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.237152);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2888274);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2420254);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2638255);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4445111);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3726713);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4521073);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2593621);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3180093);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4370792);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.388188);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5003928);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5616549);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8213898);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.06004);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2381069);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3759641);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2013529);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,3.110685);
   hNCpi0inFVres_stack_7->SetBinContent(1,43.26725);
   hNCpi0inFVres_stack_7->SetBinContent(2,58.19513);
   hNCpi0inFVres_stack_7->SetBinContent(3,48.05885);
   hNCpi0inFVres_stack_7->SetBinContent(4,36.44366);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.76835);
   hNCpi0inFVres_stack_7->SetBinContent(6,27.7993);
   hNCpi0inFVres_stack_7->SetBinContent(7,25.4371);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.40018);
   hNCpi0inFVres_stack_7->SetBinContent(9,23.6505);
   hNCpi0inFVres_stack_7->SetBinContent(10,23.35697);
   hNCpi0inFVres_stack_7->SetBinContent(11,24.49762);
   hNCpi0inFVres_stack_7->SetBinContent(12,27.78569);
   hNCpi0inFVres_stack_7->SetBinContent(13,24.49379);
   hNCpi0inFVres_stack_7->SetBinContent(14,27.21756);
   hNCpi0inFVres_stack_7->SetBinContent(15,28.13976);
   hNCpi0inFVres_stack_7->SetBinContent(16,25.19313);
   hNCpi0inFVres_stack_7->SetBinContent(17,28.19623);
   hNCpi0inFVres_stack_7->SetBinContent(18,28.26098);
   hNCpi0inFVres_stack_7->SetBinContent(19,26.86696);
   hNCpi0inFVres_stack_7->SetBinContent(20,32.18213);
   hNCpi0inFVres_stack_7->SetBinContent(21,33.01231);
   hNCpi0inFVres_stack_7->SetBinContent(22,40.00179);
   hNCpi0inFVres_stack_7->SetBinContent(23,46.64634);
   hNCpi0inFVres_stack_7->SetBinContent(24,55.47969);
   hNCpi0inFVres_stack_7->SetBinContent(25,69.93465);
   hNCpi0inFVres_stack_7->SetBinContent(26,33.2277);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.4744679);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3553842);
   hNCpi0inFVres_stack_7->SetBinError(1,2.112711);
   hNCpi0inFVres_stack_7->SetBinError(2,2.435498);
   hNCpi0inFVres_stack_7->SetBinError(3,2.216816);
   hNCpi0inFVres_stack_7->SetBinError(4,1.875846);
   hNCpi0inFVres_stack_7->SetBinError(5,1.856048);
   hNCpi0inFVres_stack_7->SetBinError(6,1.701171);
   hNCpi0inFVres_stack_7->SetBinError(7,1.624476);
   hNCpi0inFVres_stack_7->SetBinError(8,1.858982);
   hNCpi0inFVres_stack_7->SetBinError(9,1.592821);
   hNCpi0inFVres_stack_7->SetBinError(10,1.741762);
   hNCpi0inFVres_stack_7->SetBinError(11,1.613155);
   hNCpi0inFVres_stack_7->SetBinError(12,1.741085);
   hNCpi0inFVres_stack_7->SetBinError(13,1.55786);
   hNCpi0inFVres_stack_7->SetBinError(14,1.72452);
   hNCpi0inFVres_stack_7->SetBinError(15,1.774812);
   hNCpi0inFVres_stack_7->SetBinError(16,1.631628);
   hNCpi0inFVres_stack_7->SetBinError(17,1.771446);
   hNCpi0inFVres_stack_7->SetBinError(18,1.71817);
   hNCpi0inFVres_stack_7->SetBinError(19,1.635896);
   hNCpi0inFVres_stack_7->SetBinError(20,1.911049);
   hNCpi0inFVres_stack_7->SetBinError(21,1.888427);
   hNCpi0inFVres_stack_7->SetBinError(22,2.105283);
   hNCpi0inFVres_stack_7->SetBinError(23,2.24402);
   hNCpi0inFVres_stack_7->SetBinError(24,2.392029);
   hNCpi0inFVres_stack_7->SetBinError(25,2.793812);
   hNCpi0inFVres_stack_7->SetBinError(26,1.864939);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2144572);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,1.129786);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.80734);
   hNCpi0inFVdis_stack_8->SetBinContent(2,24.76816);
   hNCpi0inFVdis_stack_8->SetBinContent(3,21.19213);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.93431);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.86404);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.03608);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.14965);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.67943);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.83745);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.55041);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.59393);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.78756);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.1116);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.30619);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.03325);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.06953);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.94781);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.53337);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.69697);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.06415);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.51354);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.07736);
   hNCpi0inFVdis_stack_8->SetBinContent(23,20.12098);
   hNCpi0inFVdis_stack_8->SetBinContent(24,21.66792);
   hNCpi0inFVdis_stack_8->SetBinContent(25,27.95724);
   hNCpi0inFVdis_stack_8->SetBinContent(26,13.27531);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2665161);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.458572);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.614542);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.509882);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.471568);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.310248);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.138653);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9914076);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.037636);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.101824);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.206827);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.252356);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.239077);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.028546);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.122039);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.147929);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.064819);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.110591);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.088229);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.256545);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.153285);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.246098);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.305064);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.527608);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.516163);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.72854);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.234067);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,12.38009);
   hCCpi0inFV_stack_10->SetBinContent(1,237.0794);
   hCCpi0inFV_stack_10->SetBinContent(2,405.2675);
   hCCpi0inFV_stack_10->SetBinContent(3,395.9911);
   hCCpi0inFV_stack_10->SetBinContent(4,388.3929);
   hCCpi0inFV_stack_10->SetBinContent(5,345.3681);
   hCCpi0inFV_stack_10->SetBinContent(6,347.5221);
   hCCpi0inFV_stack_10->SetBinContent(7,329.652);
   hCCpi0inFV_stack_10->SetBinContent(8,335.5388);
   hCCpi0inFV_stack_10->SetBinContent(9,315.7701);
   hCCpi0inFV_stack_10->SetBinContent(10,334.9648);
   hCCpi0inFV_stack_10->SetBinContent(11,311.7786);
   hCCpi0inFV_stack_10->SetBinContent(12,323.2862);
   hCCpi0inFV_stack_10->SetBinContent(13,321.1726);
   hCCpi0inFV_stack_10->SetBinContent(14,325.2678);
   hCCpi0inFV_stack_10->SetBinContent(15,329.754);
   hCCpi0inFV_stack_10->SetBinContent(16,327.2962);
   hCCpi0inFV_stack_10->SetBinContent(17,318.1941);
   hCCpi0inFV_stack_10->SetBinContent(18,342.8842);
   hCCpi0inFV_stack_10->SetBinContent(19,313.2473);
   hCCpi0inFV_stack_10->SetBinContent(20,333.809);
   hCCpi0inFV_stack_10->SetBinContent(21,347.8792);
   hCCpi0inFV_stack_10->SetBinContent(22,373.5453);
   hCCpi0inFV_stack_10->SetBinContent(23,381.9773);
   hCCpi0inFV_stack_10->SetBinContent(24,402.4747);
   hCCpi0inFV_stack_10->SetBinContent(25,403.4052);
   hCCpi0inFV_stack_10->SetBinContent(26,158.7411);
   hCCpi0inFV_stack_10->SetBinContent(27,1.127039);
   hCCpi0inFV_stack_10->SetBinError(0,1.836455);
   hCCpi0inFV_stack_10->SetBinError(1,7.686545);
   hCCpi0inFV_stack_10->SetBinError(2,10.08119);
   hCCpi0inFV_stack_10->SetBinError(3,10.00975);
   hCCpi0inFV_stack_10->SetBinError(4,9.885125);
   hCCpi0inFV_stack_10->SetBinError(5,9.292847);
   hCCpi0inFV_stack_10->SetBinError(6,9.310239);
   hCCpi0inFV_stack_10->SetBinError(7,9.10959);
   hCCpi0inFV_stack_10->SetBinError(8,9.167225);
   hCCpi0inFV_stack_10->SetBinError(9,8.889479);
   hCCpi0inFV_stack_10->SetBinError(10,9.217715);
   hCCpi0inFV_stack_10->SetBinError(11,8.888537);
   hCCpi0inFV_stack_10->SetBinError(12,9.038103);
   hCCpi0inFV_stack_10->SetBinError(13,9.059541);
   hCCpi0inFV_stack_10->SetBinError(14,9.173711);
   hCCpi0inFV_stack_10->SetBinError(15,9.192924);
   hCCpi0inFV_stack_10->SetBinError(16,9.087471);
   hCCpi0inFV_stack_10->SetBinError(17,8.998919);
   hCCpi0inFV_stack_10->SetBinError(18,9.375898);
   hCCpi0inFV_stack_10->SetBinError(19,8.814799);
   hCCpi0inFV_stack_10->SetBinError(20,9.154273);
   hCCpi0inFV_stack_10->SetBinError(21,9.358481);
   hCCpi0inFV_stack_10->SetBinError(22,9.828045);
   hCCpi0inFV_stack_10->SetBinError(23,9.808022);
   hCCpi0inFV_stack_10->SetBinError(24,10.07804);
   hCCpi0inFV_stack_10->SetBinError(25,10.10389);
   hCCpi0inFV_stack_10->SetBinError(26,6.32185);
   hCCpi0inFV_stack_10->SetBinError(27,0.5201044);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,7.866109);
   hNCinFV_stack_11->SetBinContent(1,152.4914);
   hNCinFV_stack_11->SetBinContent(2,227.1348);
   hNCinFV_stack_11->SetBinContent(3,152.1968);
   hNCinFV_stack_11->SetBinContent(4,130.2618);
   hNCinFV_stack_11->SetBinContent(5,103.6619);
   hNCinFV_stack_11->SetBinContent(6,100.304);
   hNCinFV_stack_11->SetBinContent(7,93.2907);
   hNCinFV_stack_11->SetBinContent(8,78.24063);
   hNCinFV_stack_11->SetBinContent(9,85.91224);
   hNCinFV_stack_11->SetBinContent(10,74.11932);
   hNCinFV_stack_11->SetBinContent(11,80.28024);
   hNCinFV_stack_11->SetBinContent(12,92.54745);
   hNCinFV_stack_11->SetBinContent(13,82.06981);
   hNCinFV_stack_11->SetBinContent(14,83.10851);
   hNCinFV_stack_11->SetBinContent(15,87.41084);
   hNCinFV_stack_11->SetBinContent(16,81.76212);
   hNCinFV_stack_11->SetBinContent(17,93.4752);
   hNCinFV_stack_11->SetBinContent(18,81.22133);
   hNCinFV_stack_11->SetBinContent(19,90.62939);
   hNCinFV_stack_11->SetBinContent(20,89.95509);
   hNCinFV_stack_11->SetBinContent(21,98.67603);
   hNCinFV_stack_11->SetBinContent(22,109.7125);
   hNCinFV_stack_11->SetBinContent(23,134.9164);
   hNCinFV_stack_11->SetBinContent(24,167.2701);
   hNCinFV_stack_11->SetBinContent(25,199.3578);
   hNCinFV_stack_11->SetBinContent(26,95.17451);
   hNCinFV_stack_11->SetBinContent(27,0.9269427);
   hNCinFV_stack_11->SetBinError(0,1.420756);
   hNCinFV_stack_11->SetBinError(1,6.188831);
   hNCinFV_stack_11->SetBinError(2,7.626747);
   hNCinFV_stack_11->SetBinError(3,6.126339);
   hNCinFV_stack_11->SetBinError(4,5.701028);
   hNCinFV_stack_11->SetBinError(5,5.116036);
   hNCinFV_stack_11->SetBinError(6,5.010776);
   hNCinFV_stack_11->SetBinError(7,4.886494);
   hNCinFV_stack_11->SetBinError(8,4.474366);
   hNCinFV_stack_11->SetBinError(9,4.559071);
   hNCinFV_stack_11->SetBinError(10,4.32708);
   hNCinFV_stack_11->SetBinError(11,4.514821);
   hNCinFV_stack_11->SetBinError(12,4.88696);
   hNCinFV_stack_11->SetBinError(13,4.538717);
   hNCinFV_stack_11->SetBinError(14,4.602293);
   hNCinFV_stack_11->SetBinError(15,4.71088);
   hNCinFV_stack_11->SetBinError(16,4.564487);
   hNCinFV_stack_11->SetBinError(17,4.835157);
   hNCinFV_stack_11->SetBinError(18,4.492841);
   hNCinFV_stack_11->SetBinError(19,4.688992);
   hNCinFV_stack_11->SetBinError(20,4.721605);
   hNCinFV_stack_11->SetBinError(21,4.92953);
   hNCinFV_stack_11->SetBinError(22,5.216452);
   hNCinFV_stack_11->SetBinError(23,5.760968);
   hNCinFV_stack_11->SetBinError(24,6.470881);
   hNCinFV_stack_11->SetBinError(25,7.062306);
   hNCinFV_stack_11->SetBinError(26,4.818958);
   hNCinFV_stack_11->SetBinError(27,0.4800908);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(0,104.7961);
   hnumuCCinFV_stack_12->SetBinContent(1,2299.429);
   hnumuCCinFV_stack_12->SetBinContent(2,3937.376);
   hnumuCCinFV_stack_12->SetBinContent(3,3770.628);
   hnumuCCinFV_stack_12->SetBinContent(4,3744.227);
   hnumuCCinFV_stack_12->SetBinContent(5,3639.017);
   hnumuCCinFV_stack_12->SetBinContent(6,3579.548);
   hnumuCCinFV_stack_12->SetBinContent(7,3517.103);
   hnumuCCinFV_stack_12->SetBinContent(8,3457.98);
   hnumuCCinFV_stack_12->SetBinContent(9,3441.59);
   hnumuCCinFV_stack_12->SetBinContent(10,3371.875);
   hnumuCCinFV_stack_12->SetBinContent(11,3299.982);
   hnumuCCinFV_stack_12->SetBinContent(12,3344.784);
   hnumuCCinFV_stack_12->SetBinContent(13,3226.78);
   hnumuCCinFV_stack_12->SetBinContent(14,3259.875);
   hnumuCCinFV_stack_12->SetBinContent(15,3283.732);
   hnumuCCinFV_stack_12->SetBinContent(16,3290.253);
   hnumuCCinFV_stack_12->SetBinContent(17,3276.717);
   hnumuCCinFV_stack_12->SetBinContent(18,3315.158);
   hnumuCCinFV_stack_12->SetBinContent(19,3382.439);
   hnumuCCinFV_stack_12->SetBinContent(20,3350.032);
   hnumuCCinFV_stack_12->SetBinContent(21,3440.991);
   hnumuCCinFV_stack_12->SetBinContent(22,3540.744);
   hnumuCCinFV_stack_12->SetBinContent(23,3671.982);
   hnumuCCinFV_stack_12->SetBinContent(24,3609.39);
   hnumuCCinFV_stack_12->SetBinContent(25,3629.245);
   hnumuCCinFV_stack_12->SetBinContent(26,1219.32);
   hnumuCCinFV_stack_12->SetBinContent(27,8.427824);
   hnumuCCinFV_stack_12->SetBinError(0,6.933854);
   hnumuCCinFV_stack_12->SetBinError(1,34.10906);
   hnumuCCinFV_stack_12->SetBinError(2,43.72625);
   hnumuCCinFV_stack_12->SetBinError(3,43.2027);
   hnumuCCinFV_stack_12->SetBinError(4,43.90374);
   hnumuCCinFV_stack_12->SetBinError(5,42.51992);
   hnumuCCinFV_stack_12->SetBinError(6,42.69091);
   hnumuCCinFV_stack_12->SetBinError(7,41.70917);
   hnumuCCinFV_stack_12->SetBinError(8,41.93513);
   hnumuCCinFV_stack_12->SetBinError(9,41.45736);
   hnumuCCinFV_stack_12->SetBinError(10,41.11579);
   hnumuCCinFV_stack_12->SetBinError(11,39.96247);
   hnumuCCinFV_stack_12->SetBinError(12,40.71159);
   hnumuCCinFV_stack_12->SetBinError(13,38.82723);
   hnumuCCinFV_stack_12->SetBinError(14,40.63697);
   hnumuCCinFV_stack_12->SetBinError(15,40.64606);
   hnumuCCinFV_stack_12->SetBinError(16,39.47923);
   hnumuCCinFV_stack_12->SetBinError(17,39.50063);
   hnumuCCinFV_stack_12->SetBinError(18,41.76075);
   hnumuCCinFV_stack_12->SetBinError(19,40.38191);
   hnumuCCinFV_stack_12->SetBinError(20,39.77126);
   hnumuCCinFV_stack_12->SetBinError(21,41.67682);
   hnumuCCinFV_stack_12->SetBinError(22,41.88087);
   hnumuCCinFV_stack_12->SetBinError(23,42.55528);
   hnumuCCinFV_stack_12->SetBinError(24,42.66638);
   hnumuCCinFV_stack_12->SetBinError(25,42.87928);
   hnumuCCinFV_stack_12->SetBinError(26,25.1791);
   hnumuCCinFV_stack_12->SetBinError(27,1.542559);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(0,0.3438529);
   hnueCCinFV_stack_13->SetBinContent(1,21.48077);
   hnueCCinFV_stack_13->SetBinContent(2,26.76088);
   hnueCCinFV_stack_13->SetBinContent(3,23.86662);
   hnueCCinFV_stack_13->SetBinContent(4,22.03402);
   hnueCCinFV_stack_13->SetBinContent(5,16.65491);
   hnueCCinFV_stack_13->SetBinContent(6,15.09223);
   hnueCCinFV_stack_13->SetBinContent(7,15.16155);
   hnueCCinFV_stack_13->SetBinContent(8,13.40664);
   hnueCCinFV_stack_13->SetBinContent(9,11.59324);
   hnueCCinFV_stack_13->SetBinContent(10,13.87299);
   hnueCCinFV_stack_13->SetBinContent(11,12.59011);
   hnueCCinFV_stack_13->SetBinContent(12,11.28195);
   hnueCCinFV_stack_13->SetBinContent(13,12.58189);
   hnueCCinFV_stack_13->SetBinContent(14,10.00897);
   hnueCCinFV_stack_13->SetBinContent(15,15.23352);
   hnueCCinFV_stack_13->SetBinContent(16,15.96222);
   hnueCCinFV_stack_13->SetBinContent(17,14.55462);
   hnueCCinFV_stack_13->SetBinContent(18,12.01686);
   hnueCCinFV_stack_13->SetBinContent(19,17.16073);
   hnueCCinFV_stack_13->SetBinContent(20,12.12288);
   hnueCCinFV_stack_13->SetBinContent(21,15.14376);
   hnueCCinFV_stack_13->SetBinContent(22,18.68225);
   hnueCCinFV_stack_13->SetBinContent(23,23.57953);
   hnueCCinFV_stack_13->SetBinContent(24,19.97124);
   hnueCCinFV_stack_13->SetBinContent(25,33.32543);
   hnueCCinFV_stack_13->SetBinContent(26,14.34604);
   hnueCCinFV_stack_13->SetBinError(0,0.3401975);
   hnueCCinFV_stack_13->SetBinError(1,3.801074);
   hnueCCinFV_stack_13->SetBinError(2,4.101426);
   hnueCCinFV_stack_13->SetBinError(3,3.180396);
   hnueCCinFV_stack_13->SetBinError(4,2.890039);
   hnueCCinFV_stack_13->SetBinError(5,2.320686);
   hnueCCinFV_stack_13->SetBinError(6,2.102223);
   hnueCCinFV_stack_13->SetBinError(7,2.834816);
   hnueCCinFV_stack_13->SetBinError(8,1.943668);
   hnueCCinFV_stack_13->SetBinError(9,1.743431);
   hnueCCinFV_stack_13->SetBinError(10,2.984058);
   hnueCCinFV_stack_13->SetBinError(11,2.166551);
   hnueCCinFV_stack_13->SetBinError(12,2.082256);
   hnueCCinFV_stack_13->SetBinError(13,2.209313);
   hnueCCinFV_stack_13->SetBinError(14,1.691755);
   hnueCCinFV_stack_13->SetBinError(15,3.052402);
   hnueCCinFV_stack_13->SetBinError(16,2.515881);
   hnueCCinFV_stack_13->SetBinError(17,4.357634);
   hnueCCinFV_stack_13->SetBinError(18,1.853669);
   hnueCCinFV_stack_13->SetBinError(19,2.308983);
   hnueCCinFV_stack_13->SetBinError(20,1.822588);
   hnueCCinFV_stack_13->SetBinError(21,2.048921);
   hnueCCinFV_stack_13->SetBinError(22,4.307909);
   hnueCCinFV_stack_13->SetBinError(23,4.010446);
   hnueCCinFV_stack_13->SetBinError(24,2.631647);
   hnueCCinFV_stack_13->SetBinError(25,3.876159);
   hnueCCinFV_stack_13->SetBinError(26,3.084544);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__8->SetBinContent(0,446.4203);
   hmcerror__8->SetBinContent(1,6031.018);
   hmcerror__8->SetBinContent(2,5907.954);
   hmcerror__8->SetBinContent(3,5595.327);
   hmcerror__8->SetBinContent(4,5445.509);
   hmcerror__8->SetBinContent(5,5281.772);
   hmcerror__8->SetBinContent(6,5260.002);
   hmcerror__8->SetBinContent(7,5168.039);
   hmcerror__8->SetBinContent(8,5104.083);
   hmcerror__8->SetBinContent(9,5053.819);
   hmcerror__8->SetBinContent(10,5023.728);
   hmcerror__8->SetBinContent(11,4961.092);
   hmcerror__8->SetBinContent(12,5089.432);
   hmcerror__8->SetBinContent(13,4956.221);
   hmcerror__8->SetBinContent(14,5013.764);
   hmcerror__8->SetBinContent(15,5065.277);
   hmcerror__8->SetBinContent(16,5126.674);
   hmcerror__8->SetBinContent(17,5124.171);
   hmcerror__8->SetBinContent(18,5199.577);
   hmcerror__8->SetBinContent(19,5215.556);
   hmcerror__8->SetBinContent(20,5276.358);
   hmcerror__8->SetBinContent(21,5337.416);
   hmcerror__8->SetBinContent(22,5458.239);
   hmcerror__8->SetBinContent(23,5682.646);
   hmcerror__8->SetBinContent(24,5640.165);
   hmcerror__8->SetBinContent(25,5743.453);
   hmcerror__8->SetBinContent(26,3609.114);
   hmcerror__8->SetBinContent(27,79.9729);
   hmcerror__8->SetBinError(0,13.02515);
   hmcerror__8->SetBinError(1,795.666);
   hmcerror__8->SetBinError(2,814.4065);
   hmcerror__8->SetBinError(3,760.1194);
   hmcerror__8->SetBinError(4,757.5654);
   hmcerror__8->SetBinError(5,721.4429);
   hmcerror__8->SetBinError(6,712.9031);
   hmcerror__8->SetBinError(7,714.1038);
   hmcerror__8->SetBinError(8,705.6601);
   hmcerror__8->SetBinError(9,688.2727);
   hmcerror__8->SetBinError(10,680.5221);
   hmcerror__8->SetBinError(11,670.2361);
   hmcerror__8->SetBinError(12,667.4741);
   hmcerror__8->SetBinError(13,632.8961);
   hmcerror__8->SetBinError(14,679.8384);
   hmcerror__8->SetBinError(15,691.0043);
   hmcerror__8->SetBinError(16,665.4342);
   hmcerror__8->SetBinError(17,665.9382);
   hmcerror__8->SetBinError(18,699.3711);
   hmcerror__8->SetBinError(19,690.6261);
   hmcerror__8->SetBinError(20,668.77);
   hmcerror__8->SetBinError(21,744.8937);
   hmcerror__8->SetBinError(22,742.8451);
   hmcerror__8->SetBinError(23,792.7826);
   hmcerror__8->SetBinError(24,821.974);
   hmcerror__8->SetBinError(25,937.5166);
   hmcerror__8->SetBinError(26,669.029);
   hmcerror__8->SetBinError(27,25.63809);
   hmcerror__8->SetEntries(121226);

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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3009[26] = {
   5974,
   5948,
   5689,
   5562,
   5411,
   5352,
   5198,
   5327,
   5336,
   5104,
   5326,
   5105,
   5152,
   5262,
   5236,
   5377,
   5335,
   5341,
   5316,
   5440,
   5376,
   5573,
   5545,
   5542,
   5449,
   3345};
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
   77.29166,
   77.12328,
   75.42546,
   74.57882,
   73.5595,
   73.15736,
   72.09716,
   72.9863,
   73.04793,
   71.44228,
   72.97945,
   71.44928,
   71.77743,
   72.53964,
   72.36021,
   73.32803,
   73.04108,
   73.08215,
   72.9109,
   73.75636,
   73.32121,
   74.65253,
   74.46476,
   74.44461,
   73.81734,
   57.83597};
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
   77.29166,
   77.12328,
   75.42546,
   74.57882,
   73.5595,
   73.15736,
   72.09716,
   72.9863,
   73.04793,
   71.44228,
   72.97945,
   71.44928,
   71.77743,
   72.53964,
   72.36021,
   73.32803,
   73.04108,
   73.08215,
   72.9109,
   73.75636,
   73.32121,
   74.65253,
   74.46476,
   74.44461,
   73.81734,
   57.83597};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,286);
   Graph_Graph3009->SetMinimum(3010.751);
   Graph_Graph3009->SetMaximum(6327.704);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.5/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 138621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3445.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 18266.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4967.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9406.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  900.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  386.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 8750.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 2865.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86900.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 438.5","F");

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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.131929,
   0.1378492,
   0.135849,
   0.1391175,
   0.1365911,
   0.1355329,
   0.1381769,
   0.138254,
   0.1361886,
   0.1354616,
   0.1350985,
   0.131149,
   0.1276973,
   0.1355944,
   0.1364198,
   0.1297984,
   0.1299602,
   0.1345054,
   0.1324166,
   0.1267484,
   0.1395607,
   0.1360961,
   0.1395094,
   0.1457358,
   0.1632322,
   0.1853721};
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
   0.131929,
   0.1378492,
   0.135849,
   0.1391175,
   0.1365911,
   0.1355329,
   0.1381769,
   0.138254,
   0.1361886,
   0.1354616,
   0.1350985,
   0.131149,
   0.1276973,
   0.1355944,
   0.1364198,
   0.1297984,
   0.1299602,
   0.1345054,
   0.1324166,
   0.1267484,
   0.1395607,
   0.1360961,
   0.1395094,
   0.1457358,
   0.1632322,
   0.1853721};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,286);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3011[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.127603,
   0.1349594,
   0.1337418,
   0.1353577,
   0.1342115,
   0.1332854,
   0.1367103,
   0.1368032,
   0.1348349,
   0.133841,
   0.1296364,
   0.1295205,
   0.126207,
   0.1322211,
   0.1339666,
   0.1277902,
   0.127018,
   0.1314927,
   0.1293474,
   0.1239825,
   0.1330986,
   0.1312166,
   0.1316236,
   0.132242,
   0.1341785,
   0.1289516};
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
   0.127603,
   0.1349594,
   0.1337418,
   0.1353577,
   0.1342115,
   0.1332854,
   0.1367103,
   0.1368032,
   0.1348349,
   0.133841,
   0.1296364,
   0.1295205,
   0.126207,
   0.1322211,
   0.1339666,
   0.1277902,
   0.127018,
   0.1314927,
   0.1293474,
   0.1239825,
   0.1330986,
   0.1312166,
   0.1316236,
   0.132242,
   0.1341785,
   0.1289516};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,286);
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
   
   Double_t _fx3012[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3012[26] = {
   0.9905459,
   1.006778,
   1.016741,
   1.021392,
   1.024467,
   1.01749,
   1.005797,
   1.043674,
   1.055835,
   1.015979,
   1.073554,
   1.003059,
   1.039502,
   1.049511,
   1.033705,
   1.048828,
   1.041144,
   1.027199,
   1.019259,
   1.031014,
   1.007229,
   1.021025,
   0.9757778,
   0.9825954,
   0.9487324,
   0.9268203};
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
   0.01281569,
   0.01305414,
   0.01348008,
   0.01369547,
   0.01392705,
   0.01390824,
   0.01395058,
   0.01429959,
   0.014454,
   0.01422097,
   0.01471036,
   0.01403875,
   0.01448229,
   0.0144681,
   0.01428554,
   0.01430324,
   0.01425422,
   0.0140554,
   0.01397951,
   0.01397865,
   0.01373721,
   0.01367704,
   0.01310389,
   0.01319901,
   0.01285243,
   0.01602498};
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
   0.01281569,
   0.01305414,
   0.01348008,
   0.01369547,
   0.01392705,
   0.01390824,
   0.01395058,
   0.01429959,
   0.014454,
   0.01422097,
   0.01471036,
   0.01403875,
   0.01448229,
   0.0144681,
   0.01428554,
   0.01430324,
   0.01425422,
   0.0140554,
   0.01397951,
   0.01397865,
   0.01373721,
   0.01367704,
   0.01310389,
   0.01319901,
   0.01285243,
   0.01602498};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,286);
   Graph_Graph3012->SetMinimum(0.8930484);
   Graph_Graph3012->SetMaximum(1.106011);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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

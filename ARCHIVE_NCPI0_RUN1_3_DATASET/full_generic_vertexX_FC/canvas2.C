#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  1 16:02:13 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-40,-124.6101,293.3333,13123.41);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,468.993);
   hmc__4->SetBinContent(1,6230.503);
   hmc__4->SetBinContent(2,6043.784);
   hmc__4->SetBinContent(3,5739.442);
   hmc__4->SetBinContent(4,5596.128);
   hmc__4->SetBinContent(5,5420.439);
   hmc__4->SetBinContent(6,5406.756);
   hmc__4->SetBinContent(7,5309.455);
   hmc__4->SetBinContent(8,5249.287);
   hmc__4->SetBinContent(9,5203.041);
   hmc__4->SetBinContent(10,5191.266);
   hmc__4->SetBinContent(11,5087.796);
   hmc__4->SetBinContent(12,5230.496);
   hmc__4->SetBinContent(13,5119.123);
   hmc__4->SetBinContent(14,5157.851);
   hmc__4->SetBinContent(15,5241.641);
   hmc__4->SetBinContent(16,5286.171);
   hmc__4->SetBinContent(17,5305.993);
   hmc__4->SetBinContent(18,5335.165);
   hmc__4->SetBinContent(19,5369.06);
   hmc__4->SetBinContent(20,5459.528);
   hmc__4->SetBinContent(21,5550.042);
   hmc__4->SetBinContent(22,5616.7);
   hmc__4->SetBinContent(23,5875.307);
   hmc__4->SetBinContent(24,5804.693);
   hmc__4->SetBinContent(25,5897.933);
   hmc__4->SetBinContent(26,3778.122);
   hmc__4->SetBinContent(27,90.83813);
   hmc__4->SetBinError(0,13.57186);
   hmc__4->SetBinError(1,801.7346);
   hmc__4->SetBinError(2,807.8371);
   hmc__4->SetBinError(3,756.7406);
   hmc__4->SetBinError(4,753.2756);
   hmc__4->SetBinError(5,719.544);
   hmc__4->SetBinError(6,711.822);
   hmc__4->SetBinError(7,714.2664);
   hmc__4->SetBinError(8,706.3789);
   hmc__4->SetBinError(9,689.7295);
   hmc__4->SetBinError(10,679.9223);
   hmc__4->SetBinError(11,668.1508);
   hmc__4->SetBinError(12,666.3112);
   hmc__4->SetBinError(13,635.2521);
   hmc__4->SetBinError(14,681.7307);
   hmc__4->SetBinError(15,695.6166);
   hmc__4->SetBinError(16,670.4832);
   hmc__4->SetBinError(17,670.8219);
   hmc__4->SetBinError(18,700.6825);
   hmc__4->SetBinError(19,691.9098);
   hmc__4->SetBinError(20,680.1443);
   hmc__4->SetBinError(21,746.4592);
   hmc__4->SetBinError(22,746.9505);
   hmc__4->SetBinError(23,803.3368);
   hmc__4->SetBinError(24,836.6269);
   hmc__4->SetBinError(25,938.4497);
   hmc__4->SetBinError(26,670.7109);
   hmc__4->SetBinError(27,22.94188);
   hmc__4->SetMinimum(-124.6101);
   hmc__4->SetMaximum(12461.01);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,0,260);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(6542.029);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,218.6281);
   hext_stack_2->SetBinContent(1,1164.224);
   hext_stack_2->SetBinContent(2,820.8534);
   hext_stack_2->SetBinContent(3,804.6638);
   hext_stack_2->SetBinContent(4,786.4961);
   hext_stack_2->SetBinContent(5,769.4532);
   hext_stack_2->SetBinContent(6,800.2968);
   hext_stack_2->SetBinContent(7,779.463);
   hext_stack_2->SetBinContent(8,788.7758);
   hext_stack_2->SetBinContent(9,773.4435);
   hext_stack_2->SetBinContent(10,814.8242);
   hext_stack_2->SetBinContent(11,785.5849);
   hext_stack_2->SetBinContent(12,842.4462);
   hext_stack_2->SetBinContent(13,855.7131);
   hext_stack_2->SetBinContent(14,834.9962);
   hext_stack_2->SetBinContent(15,889.3884);
   hext_stack_2->SetBinContent(16,902.957);
   hext_stack_2->SetBinContent(17,933.9016);
   hext_stack_2->SetBinContent(18,886.0357);
   hext_stack_2->SetBinContent(19,891.0621);
   hext_stack_2->SetBinContent(20,966.4672);
   hext_stack_2->SetBinContent(21,964.926);
   hext_stack_2->SetBinContent(22,897.6816);
   hext_stack_2->SetBinContent(23,969.6072);
   hext_stack_2->SetBinContent(24,923.3838);
   hext_stack_2->SetBinContent(25,883.4484);
   hext_stack_2->SetBinContent(26,841.8578);
   hext_stack_2->SetBinContent(27,46.51153);
   hext_stack_2->SetBinError(0,9.495659);
   hext_stack_2->SetBinError(1,23.4323);
   hext_stack_2->SetBinError(2,19.6332);
   hext_stack_2->SetBinError(3,19.52429);
   hext_stack_2->SetBinError(4,19.30797);
   hext_stack_2->SetBinError(5,19.07227);
   hext_stack_2->SetBinError(6,19.3892);
   hext_stack_2->SetBinError(7,19.2338);
   hext_stack_2->SetBinError(8,19.26509);
   hext_stack_2->SetBinError(9,19.14484);
   hext_stack_2->SetBinError(10,19.76151);
   hext_stack_2->SetBinError(11,19.12291);
   hext_stack_2->SetBinError(12,19.82467);
   hext_stack_2->SetBinError(13,20.08291);
   hext_stack_2->SetBinError(14,19.69572);
   hext_stack_2->SetBinError(15,20.47213);
   hext_stack_2->SetBinError(16,20.50216);
   hext_stack_2->SetBinError(17,21.09381);
   hext_stack_2->SetBinError(18,20.19711);
   hext_stack_2->SetBinError(19,20.33291);
   hext_stack_2->SetBinError(20,21.36141);
   hext_stack_2->SetBinError(21,21.52449);
   hext_stack_2->SetBinError(22,20.50028);
   hext_stack_2->SetBinError(23,21.49179);
   hext_stack_2->SetBinError(24,20.88525);
   hext_stack_2->SetBinError(25,20.39831);
   hext_stack_2->SetBinError(26,20.00307);
   hext_stack_2->SetBinError(27,4.782705);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,4.26837);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,62.46536);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,84.00805);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,69.47418);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,54.51748);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,49.21779);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,40.36581);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,35.93534);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,41.10751);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,35.86443);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,36.07478);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,37.20315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,40.71275);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,34.717);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,38.98394);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,40.39555);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,36.48603);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,39.33951);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,40.36614);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,40.59184);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,44.45519);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,47.83292);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,55.72036);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,66.99051);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,77.83116);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,99.17529);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,46.78218);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.4744679);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.4450923);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.575779);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.93838);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.683327);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.384995);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.285664);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.066597);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,1.915997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.12915);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.949643);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.120103);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.042983);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.137892);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.867605);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.070094);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.118353);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.958324);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.099915);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.047391);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.062968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.234896);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.271616);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.489892);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.715776);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.848138);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.312638);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.24532);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.2144572);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,13.97629);
   hCCpi0inFV_stack_7->SetBinContent(1,269.0715);
   hCCpi0inFV_stack_7->SetBinContent(2,454.2454);
   hCCpi0inFV_stack_7->SetBinContent(3,443.4915);
   hCCpi0inFV_stack_7->SetBinContent(4,440.6898);
   hCCpi0inFV_stack_7->SetBinContent(5,387.0899);
   hCCpi0inFV_stack_7->SetBinContent(6,388.1236);
   hCCpi0inFV_stack_7->SetBinContent(7,372.9192);
   hCCpi0inFV_stack_7->SetBinContent(8,374.4993);
   hCCpi0inFV_stack_7->SetBinContent(9,354.2403);
   hCCpi0inFV_stack_7->SetBinContent(10,373.269);
   hCCpi0inFV_stack_7->SetBinContent(11,347.224);
   hCCpi0inFV_stack_7->SetBinContent(12,357.4887);
   hCCpi0inFV_stack_7->SetBinContent(13,359.3619);
   hCCpi0inFV_stack_7->SetBinContent(14,355.7109);
   hCCpi0inFV_stack_7->SetBinContent(15,365.6495);
   hCCpi0inFV_stack_7->SetBinContent(16,365.3303);
   hCCpi0inFV_stack_7->SetBinContent(17,351.7729);
   hCCpi0inFV_stack_7->SetBinContent(18,378.6559);
   hCCpi0inFV_stack_7->SetBinContent(19,348.0596);
   hCCpi0inFV_stack_7->SetBinContent(20,372.7685);
   hCCpi0inFV_stack_7->SetBinContent(21,385.7683);
   hCCpi0inFV_stack_7->SetBinContent(22,413.3128);
   hCCpi0inFV_stack_7->SetBinContent(23,421.3587);
   hCCpi0inFV_stack_7->SetBinContent(24,447.4632);
   hCCpi0inFV_stack_7->SetBinContent(25,442.6948);
   hCCpi0inFV_stack_7->SetBinContent(26,176.9753);
   hCCpi0inFV_stack_7->SetBinContent(27,1.467217);
   hCCpi0inFV_stack_7->SetBinError(0,1.937368);
   hCCpi0inFV_stack_7->SetBinError(1,8.195638);
   hCCpi0inFV_stack_7->SetBinError(2,10.68101);
   hCCpi0inFV_stack_7->SetBinError(3,10.58581);
   hCCpi0inFV_stack_7->SetBinError(4,10.53356);
   hCCpi0inFV_stack_7->SetBinError(5,9.83828);
   hCCpi0inFV_stack_7->SetBinError(6,9.84111);
   hCCpi0inFV_stack_7->SetBinError(7,9.687082);
   hCCpi0inFV_stack_7->SetBinError(8,9.712104);
   hCCpi0inFV_stack_7->SetBinError(9,9.401066);
   hCCpi0inFV_stack_7->SetBinError(10,9.728023);
   hCCpi0inFV_stack_7->SetBinError(11,9.392008);
   hCCpi0inFV_stack_7->SetBinError(12,9.495131);
   hCCpi0inFV_stack_7->SetBinError(13,9.582108);
   hCCpi0inFV_stack_7->SetBinError(14,9.578321);
   hCCpi0inFV_stack_7->SetBinError(15,9.682664);
   hCCpi0inFV_stack_7->SetBinError(16,9.607972);
   hCCpi0inFV_stack_7->SetBinError(17,9.443639);
   hCCpi0inFV_stack_7->SetBinError(18,9.842962);
   hCCpi0inFV_stack_7->SetBinError(19,9.278809);
   hCCpi0inFV_stack_7->SetBinError(20,9.672191);
   hCCpi0inFV_stack_7->SetBinError(21,9.850088);
   hCCpi0inFV_stack_7->SetBinError(22,10.31721);
   hCCpi0inFV_stack_7->SetBinError(23,10.30416);
   hCCpi0inFV_stack_7->SetBinError(24,10.63415);
   hCCpi0inFV_stack_7->SetBinError(25,10.54593);
   hCCpi0inFV_stack_7->SetBinError(26,6.668862);
   hCCpi0inFV_stack_7->SetBinError(27,0.6214735);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(0,7.669394);
   hNCinFV_stack_8->SetBinContent(1,143.5565);
   hNCinFV_stack_8->SetBinContent(2,213.8442);
   hNCinFV_stack_8->SetBinContent(3,144.0941);
   hNCinFV_stack_8->SetBinContent(4,121.2882);
   hNCinFV_stack_8->SetBinContent(5,97.88383);
   hNCinFV_stack_8->SetBinContent(6,96.10413);
   hNCinFV_stack_8->SetBinContent(7,88.07199);
   hNCinFV_stack_8->SetBinContent(8,72.47212);
   hNCinFV_stack_8->SetBinContent(9,80.7742);
   hNCinFV_stack_8->SetBinContent(10,70.54825);
   hNCinFV_stack_8->SetBinContent(11,74.27805);
   hNCinFV_stack_8->SetBinContent(12,87.38368);
   hNCinFV_stack_8->SetBinContent(13,77.77974);
   hNCinFV_stack_8->SetBinContent(14,78.66206);
   hNCinFV_stack_8->SetBinContent(15,81.93878);
   hNCinFV_stack_8->SetBinContent(16,76.33548);
   hNCinFV_stack_8->SetBinContent(17,88.2419);
   hNCinFV_stack_8->SetBinContent(18,74.92099);
   hNCinFV_stack_8->SetBinContent(19,86.52143);
   hNCinFV_stack_8->SetBinContent(20,85.12198);
   hNCinFV_stack_8->SetBinContent(21,91.93069);
   hNCinFV_stack_8->SetBinContent(22,101.1048);
   hNCinFV_stack_8->SetBinContent(23,128.8128);
   hNCinFV_stack_8->SetBinContent(24,155.9925);
   hNCinFV_stack_8->SetBinContent(25,188.1806);
   hNCinFV_stack_8->SetBinContent(26,88.26942);
   hNCinFV_stack_8->SetBinContent(27,0.7319179);
   hNCinFV_stack_8->SetBinError(0,1.407072);
   hNCinFV_stack_8->SetBinError(1,5.992651);
   hNCinFV_stack_8->SetBinError(2,7.414474);
   hNCinFV_stack_8->SetBinError(3,5.95433);
   hNCinFV_stack_8->SetBinError(4,5.473355);
   hNCinFV_stack_8->SetBinError(5,4.994285);
   hNCinFV_stack_8->SetBinError(6,4.897946);
   hNCinFV_stack_8->SetBinError(7,4.73427);
   hNCinFV_stack_8->SetBinError(8,4.312117);
   hNCinFV_stack_8->SetBinError(9,4.430647);
   hNCinFV_stack_8->SetBinError(10,4.228008);
   hNCinFV_stack_8->SetBinError(11,4.331933);
   hNCinFV_stack_8->SetBinError(12,4.730773);
   hNCinFV_stack_8->SetBinError(13,4.400749);
   hNCinFV_stack_8->SetBinError(14,4.479291);
   hNCinFV_stack_8->SetBinError(15,4.552602);
   hNCinFV_stack_8->SetBinError(16,4.418748);
   hNCinFV_stack_8->SetBinError(17,4.701798);
   hNCinFV_stack_8->SetBinError(18,4.313652);
   hNCinFV_stack_8->SetBinError(19,4.580901);
   hNCinFV_stack_8->SetBinError(20,4.593665);
   hNCinFV_stack_8->SetBinError(21,4.762755);
   hNCinFV_stack_8->SetBinError(22,5.013049);
   hNCinFV_stack_8->SetBinError(23,5.625782);
   hNCinFV_stack_8->SetBinError(24,6.231117);
   hNCinFV_stack_8->SetBinError(25,6.852009);
   hNCinFV_stack_8->SetBinError(26,4.66057);
   hNCinFV_stack_8->SetBinError(27,0.438694);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(0,103.1999);
   hnumuCCinFV_stack_9->SetBinContent(1,2267.438);
   hnumuCCinFV_stack_9->SetBinContent(2,3888.399);
   hnumuCCinFV_stack_9->SetBinContent(3,3723.128);
   hnumuCCinFV_stack_9->SetBinContent(4,3691.93);
   hnumuCCinFV_stack_9->SetBinContent(5,3597.295);
   hnumuCCinFV_stack_9->SetBinContent(6,3538.946);
   hnumuCCinFV_stack_9->SetBinContent(7,3473.836);
   hnumuCCinFV_stack_9->SetBinContent(8,3419.02);
   hnumuCCinFV_stack_9->SetBinContent(9,3403.12);
   hnumuCCinFV_stack_9->SetBinContent(10,3333.571);
   hnumuCCinFV_stack_9->SetBinContent(11,3264.536);
   hnumuCCinFV_stack_9->SetBinContent(12,3310.582);
   hnumuCCinFV_stack_9->SetBinContent(13,3188.591);
   hnumuCCinFV_stack_9->SetBinContent(14,3229.432);
   hnumuCCinFV_stack_9->SetBinContent(15,3247.837);
   hnumuCCinFV_stack_9->SetBinContent(16,3252.219);
   hnumuCCinFV_stack_9->SetBinContent(17,3243.138);
   hnumuCCinFV_stack_9->SetBinContent(18,3279.386);
   hnumuCCinFV_stack_9->SetBinContent(19,3347.627);
   hnumuCCinFV_stack_9->SetBinContent(20,3311.073);
   hnumuCCinFV_stack_9->SetBinContent(21,3403.102);
   hnumuCCinFV_stack_9->SetBinContent(22,3500.977);
   hnumuCCinFV_stack_9->SetBinContent(23,3632.601);
   hnumuCCinFV_stack_9->SetBinContent(24,3564.402);
   hnumuCCinFV_stack_9->SetBinContent(25,3589.955);
   hnumuCCinFV_stack_9->SetBinContent(26,1201.086);
   hnumuCCinFV_stack_9->SetBinContent(27,8.087646);
   hnumuCCinFV_stack_9->SetBinError(0,6.906338);
   hnumuCCinFV_stack_9->SetBinError(1,33.99033);
   hnumuCCinFV_stack_9->SetBinError(2,43.58361);
   hnumuCCinFV_stack_9->SetBinError(3,43.06518);
   hnumuCCinFV_stack_9->SetBinError(4,43.75269);
   hnumuCCinFV_stack_9->SetBinError(5,42.39704);
   hnumuCCinFV_stack_9->SetBinError(6,42.57167);
   hnumuCCinFV_stack_9->SetBinError(7,41.57884);
   hnumuCCinFV_stack_9->SetBinError(8,41.81229);
   hnumuCCinFV_stack_9->SetBinError(9,41.34435);
   hnumuCCinFV_stack_9->SetBinError(10,40.99805);
   hnumuCCinFV_stack_9->SetBinError(11,39.84715);
   hnumuCCinFV_stack_9->SetBinError(12,40.60743);
   hnumuCCinFV_stack_9->SetBinError(13,38.70158);
   hnumuCCinFV_stack_9->SetBinError(14,40.54351);
   hnumuCCinFV_stack_9->SetBinError(15,40.53218);
   hnumuCCinFV_stack_9->SetBinError(16,39.35579);
   hnumuCCinFV_stack_9->SetBinError(17,39.39668);
   hnumuCCinFV_stack_9->SetBinError(18,41.65314);
   hnumuCCinFV_stack_9->SetBinError(19,40.27782);
   hnumuCCinFV_stack_9->SetBinError(20,39.64849);
   hnumuCCinFV_stack_9->SetBinError(21,41.56338);
   hnumuCCinFV_stack_9->SetBinError(22,41.76305);
   hnumuCCinFV_stack_9->SetBinError(23,42.43788);
   hnumuCCinFV_stack_9->SetBinError(24,42.53118);
   hnumuCCinFV_stack_9->SetBinError(25,42.77271);
   hnumuCCinFV_stack_9->SetBinError(26,25.08942);
   hnumuCCinFV_stack_9->SetBinError(27,1.504582);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(0,0.3438529);
   hnueCCinFV_stack_10->SetBinContent(1,21.48077);
   hnueCCinFV_stack_10->SetBinContent(2,26.76088);
   hnueCCinFV_stack_10->SetBinContent(3,23.86662);
   hnueCCinFV_stack_10->SetBinContent(4,22.03402);
   hnueCCinFV_stack_10->SetBinContent(5,16.65491);
   hnueCCinFV_stack_10->SetBinContent(6,15.09223);
   hnueCCinFV_stack_10->SetBinContent(7,15.16155);
   hnueCCinFV_stack_10->SetBinContent(8,13.40664);
   hnueCCinFV_stack_10->SetBinContent(9,11.59324);
   hnueCCinFV_stack_10->SetBinContent(10,13.87299);
   hnueCCinFV_stack_10->SetBinContent(11,12.59011);
   hnueCCinFV_stack_10->SetBinContent(12,11.28195);
   hnueCCinFV_stack_10->SetBinContent(13,12.58189);
   hnueCCinFV_stack_10->SetBinContent(14,10.00897);
   hnueCCinFV_stack_10->SetBinContent(15,15.23352);
   hnueCCinFV_stack_10->SetBinContent(16,15.96222);
   hnueCCinFV_stack_10->SetBinContent(17,14.55462);
   hnueCCinFV_stack_10->SetBinContent(18,12.01686);
   hnueCCinFV_stack_10->SetBinContent(19,17.16073);
   hnueCCinFV_stack_10->SetBinContent(20,12.12288);
   hnueCCinFV_stack_10->SetBinContent(21,15.14376);
   hnueCCinFV_stack_10->SetBinContent(22,18.68225);
   hnueCCinFV_stack_10->SetBinContent(23,23.57953);
   hnueCCinFV_stack_10->SetBinContent(24,19.97124);
   hnueCCinFV_stack_10->SetBinContent(25,33.32543);
   hnueCCinFV_stack_10->SetBinContent(26,14.34604);
   hnueCCinFV_stack_10->SetBinError(0,0.3401975);
   hnueCCinFV_stack_10->SetBinError(1,3.801074);
   hnueCCinFV_stack_10->SetBinError(2,4.101426);
   hnueCCinFV_stack_10->SetBinError(3,3.180396);
   hnueCCinFV_stack_10->SetBinError(4,2.890039);
   hnueCCinFV_stack_10->SetBinError(5,2.320686);
   hnueCCinFV_stack_10->SetBinError(6,2.102223);
   hnueCCinFV_stack_10->SetBinError(7,2.834816);
   hnueCCinFV_stack_10->SetBinError(8,1.943668);
   hnueCCinFV_stack_10->SetBinError(9,1.743431);
   hnueCCinFV_stack_10->SetBinError(10,2.984058);
   hnueCCinFV_stack_10->SetBinError(11,2.166551);
   hnueCCinFV_stack_10->SetBinError(12,2.082256);
   hnueCCinFV_stack_10->SetBinError(13,2.209313);
   hnueCCinFV_stack_10->SetBinError(14,1.691755);
   hnueCCinFV_stack_10->SetBinError(15,3.052402);
   hnueCCinFV_stack_10->SetBinError(16,2.515881);
   hnueCCinFV_stack_10->SetBinError(17,4.357634);
   hnueCCinFV_stack_10->SetBinError(18,1.853669);
   hnueCCinFV_stack_10->SetBinError(19,2.308983);
   hnueCCinFV_stack_10->SetBinError(20,1.822588);
   hnueCCinFV_stack_10->SetBinError(21,2.048921);
   hnueCCinFV_stack_10->SetBinError(22,4.307909);
   hnueCCinFV_stack_10->SetBinError(23,4.010446);
   hnueCCinFV_stack_10->SetBinError(24,2.631647);
   hnueCCinFV_stack_10->SetBinError(25,3.876159);
   hnueCCinFV_stack_10->SetBinError(26,3.084544);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,468.993);
   hmcerror__5->SetBinContent(1,6230.503);
   hmcerror__5->SetBinContent(2,6043.784);
   hmcerror__5->SetBinContent(3,5739.442);
   hmcerror__5->SetBinContent(4,5596.128);
   hmcerror__5->SetBinContent(5,5420.439);
   hmcerror__5->SetBinContent(6,5406.756);
   hmcerror__5->SetBinContent(7,5309.455);
   hmcerror__5->SetBinContent(8,5249.287);
   hmcerror__5->SetBinContent(9,5203.041);
   hmcerror__5->SetBinContent(10,5191.266);
   hmcerror__5->SetBinContent(11,5087.796);
   hmcerror__5->SetBinContent(12,5230.496);
   hmcerror__5->SetBinContent(13,5119.123);
   hmcerror__5->SetBinContent(14,5157.851);
   hmcerror__5->SetBinContent(15,5241.641);
   hmcerror__5->SetBinContent(16,5286.171);
   hmcerror__5->SetBinContent(17,5305.993);
   hmcerror__5->SetBinContent(18,5335.165);
   hmcerror__5->SetBinContent(19,5369.06);
   hmcerror__5->SetBinContent(20,5459.528);
   hmcerror__5->SetBinContent(21,5550.042);
   hmcerror__5->SetBinContent(22,5616.7);
   hmcerror__5->SetBinContent(23,5875.307);
   hmcerror__5->SetBinContent(24,5804.693);
   hmcerror__5->SetBinContent(25,5897.933);
   hmcerror__5->SetBinContent(26,3778.122);
   hmcerror__5->SetBinContent(27,90.83813);
   hmcerror__5->SetBinError(0,13.57186);
   hmcerror__5->SetBinError(1,801.7346);
   hmcerror__5->SetBinError(2,807.8371);
   hmcerror__5->SetBinError(3,756.7406);
   hmcerror__5->SetBinError(4,753.2756);
   hmcerror__5->SetBinError(5,719.544);
   hmcerror__5->SetBinError(6,711.822);
   hmcerror__5->SetBinError(7,714.2664);
   hmcerror__5->SetBinError(8,706.3789);
   hmcerror__5->SetBinError(9,689.7295);
   hmcerror__5->SetBinError(10,679.9223);
   hmcerror__5->SetBinError(11,668.1508);
   hmcerror__5->SetBinError(12,666.3112);
   hmcerror__5->SetBinError(13,635.2521);
   hmcerror__5->SetBinError(14,681.7307);
   hmcerror__5->SetBinError(15,695.6166);
   hmcerror__5->SetBinError(16,670.4832);
   hmcerror__5->SetBinError(17,670.8219);
   hmcerror__5->SetBinError(18,700.6825);
   hmcerror__5->SetBinError(19,691.9098);
   hmcerror__5->SetBinError(20,680.1443);
   hmcerror__5->SetBinError(21,746.4592);
   hmcerror__5->SetBinError(22,746.9505);
   hmcerror__5->SetBinError(23,803.3368);
   hmcerror__5->SetBinError(24,836.6269);
   hmcerror__5->SetBinError(25,938.4497);
   hmcerror__5->SetBinError(26,670.7109);
   hmcerror__5->SetBinError(27,22.94188);
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
   Double_t _fy3005[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(3010.751);
   Graph_Graph3005->SetMaximum(6327.704);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.0/26","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22572.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4967.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9406.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1296.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9747.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 2694.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 85903.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 438.5","F");

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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[26] = {
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
   0.128679,
   0.1336641,
   0.1318492,
   0.1346066,
   0.1327464,
   0.1316542,
   0.1345272,
   0.1345666,
   0.1325628,
   0.1309743,
   0.1313242,
   0.1273897,
   0.1240939,
   0.1321734,
   0.1327097,
   0.1268372,
   0.1264272,
   0.1313329,
   0.1288698,
   0.1245793,
   0.1344961,
   0.1329874,
   0.136731,
   0.1441294,
   0.159115,
   0.1775249};
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
   0.128679,
   0.1336641,
   0.1318492,
   0.1346066,
   0.1327464,
   0.1316542,
   0.1345272,
   0.1345666,
   0.1325628,
   0.1309743,
   0.1313242,
   0.1273897,
   0.1240939,
   0.1321734,
   0.1327097,
   0.1268372,
   0.1264272,
   0.1313329,
   0.1288698,
   0.1245793,
   0.1344961,
   0.1329874,
   0.136731,
   0.1441294,
   0.159115,
   0.1775249};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   0.1252639,
   0.1317621,
   0.1303607,
   0.1316617,
   0.1308091,
   0.1297475,
   0.1331438,
   0.1331491,
   0.1311037,
   0.1297272,
   0.1265971,
   0.1262489,
   0.1224577,
   0.128794,
   0.1297107,
   0.1241987,
   0.1229524,
   0.1284161,
   0.1259392,
   0.1201899,
   0.1282743,
   0.1276376,
   0.1275157,
   0.1284612,
   0.1306476,
   0.1262756};
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
   0.1252639,
   0.1317621,
   0.1303607,
   0.1316617,
   0.1308091,
   0.1297475,
   0.1331438,
   0.1331491,
   0.1311037,
   0.1297272,
   0.1265971,
   0.1262489,
   0.1224577,
   0.128794,
   0.1297107,
   0.1241987,
   0.1229524,
   0.1284161,
   0.1259392,
   0.1201899,
   0.1282743,
   0.1276376,
   0.1275157,
   0.1284612,
   0.1306476,
   0.1262756};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3008[26] = {
   0.9588311,
   0.9841516,
   0.9912113,
   0.9939015,
   0.9982585,
   0.9898727,
   0.9790082,
   1.014804,
   1.025554,
   0.9831898,
   1.046819,
   0.9760069,
   1.006422,
   1.020192,
   0.9989238,
   1.017182,
   1.005467,
   1.001094,
   0.9901174,
   0.9964232,
   0.9686414,
   0.9922196,
   0.9437804,
   0.9547447,
   0.9238831,
   0.8853604};
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
   0.01240536,
   0.01276076,
   0.0131416,
   0.01332686,
   0.01357076,
   0.01353073,
   0.01357901,
   0.01390404,
   0.01403947,
   0.01376202,
   0.01434402,
   0.01366014,
   0.01402143,
   0.01406393,
   0.01380488,
   0.01387167,
   0.01376577,
   0.0136982,
   0.01357983,
   0.01350966,
   0.01321093,
   0.01329117,
   0.01267419,
   0.0128249,
   0.0125158,
   0.01530813};
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
   0.01240536,
   0.01276076,
   0.0131416,
   0.01332686,
   0.01357076,
   0.01353073,
   0.01357901,
   0.01390404,
   0.01403947,
   0.01376202,
   0.01434402,
   0.01366014,
   0.01402143,
   0.01406393,
   0.01380488,
   0.01387167,
   0.01376577,
   0.0136982,
   0.01357983,
   0.01350966,
   0.01321093,
   0.01329117,
   0.01267419,
   0.0128249,
   0.0125158,
   0.01530813};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.8509413);
   Graph_Graph3008->SetMaximum(1.080274);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_PC_bnb_12_reco_nuvtxX_all",26,0,260);

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

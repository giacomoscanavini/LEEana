#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 23:52:12 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-6.06,3.957692,670.1084);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__1->SetBinContent(1,282.0742);
   hmc__1->SetBinContent(2,275.7161);
   hmc__1->SetBinContent(3,273.9279);
   hmc__1->SetBinContent(4,268.8361);
   hmc__1->SetBinContent(5,246.4413);
   hmc__1->SetBinContent(6,252.1682);
   hmc__1->SetBinContent(7,287.9814);
   hmc__1->SetBinContent(8,251.558);
   hmc__1->SetBinContent(9,255.5113);
   hmc__1->SetBinContent(10,264.602);
   hmc__1->SetBinContent(11,260.754);
   hmc__1->SetBinContent(12,279.2627);
   hmc__1->SetBinContent(13,283.1998);
   hmc__1->SetBinContent(14,277.5525);
   hmc__1->SetBinContent(15,267.0281);
   hmc__1->SetBinContent(16,284.5285);
   hmc__1->SetBinContent(17,265.2144);
   hmc__1->SetBinContent(18,286.934);
   hmc__1->SetBinContent(19,267.2111);
   hmc__1->SetBinContent(20,269.9647);
   hmc__1->SetBinContent(21,259.4648);
   hmc__1->SetBinContent(22,266.0173);
   hmc__1->SetBinContent(23,266.162);
   hmc__1->SetBinContent(24,289.5836);
   hmc__1->SetBinContent(25,297.4106);
   hmc__1->SetBinError(1,73.6146);
   hmc__1->SetBinError(2,73.22872);
   hmc__1->SetBinError(3,72.42762);
   hmc__1->SetBinError(4,71.29969);
   hmc__1->SetBinError(5,61.238);
   hmc__1->SetBinError(6,65.69182);
   hmc__1->SetBinError(7,74.13424);
   hmc__1->SetBinError(8,70.59179);
   hmc__1->SetBinError(9,69.98881);
   hmc__1->SetBinError(10,70.23654);
   hmc__1->SetBinError(11,69.68698);
   hmc__1->SetBinError(12,77.48157);
   hmc__1->SetBinError(13,77.54114);
   hmc__1->SetBinError(14,76.19945);
   hmc__1->SetBinError(15,74.25236);
   hmc__1->SetBinError(16,75.4202);
   hmc__1->SetBinError(17,70.34882);
   hmc__1->SetBinError(18,69.5615);
   hmc__1->SetBinError(19,73.56404);
   hmc__1->SetBinError(20,75.86753);
   hmc__1->SetBinError(21,67.60646);
   hmc__1->SetBinError(22,69.56468);
   hmc__1->SetBinError(23,72.22232);
   hmc__1->SetBinError(24,78.68996);
   hmc__1->SetBinError(25,75.47697);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-6.06);
   hmc__1->SetMaximum(636.3);
   hmc__1->SetEntries(7381.09);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-3.15,3.15);
   hs1_stack_1->SetMinimum(-2.129585e-09);
   hs1_stack_1->SetMaximum(312.2811);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,6.366952);
   hbadmatch_stack_1->SetBinContent(2,8.569253);
   hbadmatch_stack_1->SetBinContent(3,7.322372);
   hbadmatch_stack_1->SetBinContent(4,9.425915);
   hbadmatch_stack_1->SetBinContent(5,4.789378);
   hbadmatch_stack_1->SetBinContent(6,8.003979);
   hbadmatch_stack_1->SetBinContent(7,7.403275);
   hbadmatch_stack_1->SetBinContent(8,8.778136);
   hbadmatch_stack_1->SetBinContent(9,8.885208);
   hbadmatch_stack_1->SetBinContent(10,3.79287);
   hbadmatch_stack_1->SetBinContent(11,5.915001);
   hbadmatch_stack_1->SetBinContent(12,5.132253);
   hbadmatch_stack_1->SetBinContent(13,3.632093);
   hbadmatch_stack_1->SetBinContent(14,9.036313);
   hbadmatch_stack_1->SetBinContent(15,7.679316);
   hbadmatch_stack_1->SetBinContent(16,9.267314);
   hbadmatch_stack_1->SetBinContent(17,5.765117);
   hbadmatch_stack_1->SetBinContent(18,6.014177);
   hbadmatch_stack_1->SetBinContent(19,4.491732);
   hbadmatch_stack_1->SetBinContent(20,9.420439);
   hbadmatch_stack_1->SetBinContent(21,7.472438);
   hbadmatch_stack_1->SetBinContent(22,6.047354);
   hbadmatch_stack_1->SetBinContent(23,5.340062);
   hbadmatch_stack_1->SetBinContent(24,5.709123);
   hbadmatch_stack_1->SetBinContent(25,9.20002);
   hbadmatch_stack_1->SetBinError(1,1.32406);
   hbadmatch_stack_1->SetBinError(2,1.579651);
   hbadmatch_stack_1->SetBinError(3,1.353205);
   hbadmatch_stack_1->SetBinError(4,1.683612);
   hbadmatch_stack_1->SetBinError(5,1.051101);
   hbadmatch_stack_1->SetBinError(6,1.490376);
   hbadmatch_stack_1->SetBinError(7,1.385873);
   hbadmatch_stack_1->SetBinError(8,1.573847);
   hbadmatch_stack_1->SetBinError(9,2.493925);
   hbadmatch_stack_1->SetBinError(10,0.9682751);
   hbadmatch_stack_1->SetBinError(11,1.550411);
   hbadmatch_stack_1->SetBinError(12,1.194698);
   hbadmatch_stack_1->SetBinError(13,0.8842251);
   hbadmatch_stack_1->SetBinError(14,1.852348);
   hbadmatch_stack_1->SetBinError(15,2.143428);
   hbadmatch_stack_1->SetBinError(16,1.649921);
   hbadmatch_stack_1->SetBinError(17,1.286373);
   hbadmatch_stack_1->SetBinError(18,1.29309);
   hbadmatch_stack_1->SetBinError(19,1.160785);
   hbadmatch_stack_1->SetBinError(20,1.764041);
   hbadmatch_stack_1->SetBinError(21,1.611479);
   hbadmatch_stack_1->SetBinError(22,1.330923);
   hbadmatch_stack_1->SetBinError(23,1.189951);
   hbadmatch_stack_1->SetBinError(24,1.890038);
   hbadmatch_stack_1->SetBinError(25,1.685268);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,23.255);
   hext_stack_2->SetBinContent(2,25.9511);
   hext_stack_2->SetBinContent(3,26.3737);
   hext_stack_2->SetBinContent(4,28.61695);
   hext_stack_2->SetBinContent(5,40.94607);
   hext_stack_2->SetBinContent(6,37.81585);
   hext_stack_2->SetBinContent(7,59.3307);
   hext_stack_2->SetBinContent(8,35.87942);
   hext_stack_2->SetBinContent(9,34.93098);
   hext_stack_2->SetBinContent(10,36.18385);
   hext_stack_2->SetBinContent(11,26.10114);
   hext_stack_2->SetBinContent(12,27.11622);
   hext_stack_2->SetBinContent(13,24.83385);
   hext_stack_2->SetBinContent(14,16.25067);
   hext_stack_2->SetBinContent(15,18.60365);
   hext_stack_2->SetBinContent(16,31.66383);
   hext_stack_2->SetBinContent(17,24.55694);
   hext_stack_2->SetBinContent(18,43.06403);
   hext_stack_2->SetBinContent(19,34.50838);
   hext_stack_2->SetBinContent(20,35.69946);
   hext_stack_2->SetBinContent(21,27.81415);
   hext_stack_2->SetBinContent(22,20.72162);
   hext_stack_2->SetBinContent(23,22.63928);
   hext_stack_2->SetBinContent(24,26.36488);
   hext_stack_2->SetBinContent(25,25.11642);
   hext_stack_2->SetBinError(1,3.141815);
   hext_stack_2->SetBinError(2,3.440362);
   hext_stack_2->SetBinError(3,3.474256);
   hext_stack_2->SetBinError(4,3.387287);
   hext_stack_2->SetBinError(5,4.459157);
   hext_stack_2->SetBinError(6,4.052196);
   hext_stack_2->SetBinError(7,5.295418);
   hext_stack_2->SetBinError(8,3.905299);
   hext_stack_2->SetBinError(9,4.074968);
   hext_stack_2->SetBinError(10,4.214506);
   hext_stack_2->SetBinError(11,3.51549);
   hext_stack_2->SetBinError(12,3.688542);
   hext_stack_2->SetBinError(13,3.596497);
   hext_stack_2->SetBinError(14,2.745533);
   hext_stack_2->SetBinError(15,2.886984);
   hext_stack_2->SetBinError(16,3.960453);
   hext_stack_2->SetBinError(17,3.428917);
   hext_stack_2->SetBinError(18,4.520449);
   hext_stack_2->SetBinError(19,4.046109);
   hext_stack_2->SetBinError(20,4.203781);
   hext_stack_2->SetBinError(21,3.635268);
   hext_stack_2->SetBinError(22,2.980781);
   hext_stack_2->SetBinError(23,3.212672);
   hext_stack_2->SetBinError(24,3.435144);
   hext_stack_2->SetBinError(25,3.283083);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.425031);
   hdirt_stack_3->SetBinContent(2,2.612472);
   hdirt_stack_3->SetBinContent(3,3.143942);
   hdirt_stack_3->SetBinContent(4,4.293818);
   hdirt_stack_3->SetBinContent(5,2.23576);
   hdirt_stack_3->SetBinContent(6,2.707886);
   hdirt_stack_3->SetBinContent(7,3.429492);
   hdirt_stack_3->SetBinContent(8,2.908027);
   hdirt_stack_3->SetBinContent(9,2.359858);
   hdirt_stack_3->SetBinContent(10,3.004481);
   hdirt_stack_3->SetBinContent(11,3.117895);
   hdirt_stack_3->SetBinContent(12,1.8682);
   hdirt_stack_3->SetBinContent(13,3.084611);
   hdirt_stack_3->SetBinContent(14,2.602643);
   hdirt_stack_3->SetBinContent(15,2.611297);
   hdirt_stack_3->SetBinContent(16,2.733891);
   hdirt_stack_3->SetBinContent(17,1.995244);
   hdirt_stack_3->SetBinContent(18,3.065529);
   hdirt_stack_3->SetBinContent(19,4.332039);
   hdirt_stack_3->SetBinContent(20,3.445644);
   hdirt_stack_3->SetBinContent(21,3.929459);
   hdirt_stack_3->SetBinContent(22,3.477737);
   hdirt_stack_3->SetBinContent(23,3.043959);
   hdirt_stack_3->SetBinContent(24,2.738261);
   hdirt_stack_3->SetBinContent(25,2.863867);
   hdirt_stack_3->SetBinError(1,0.6217077);
   hdirt_stack_3->SetBinError(2,0.8371754);
   hdirt_stack_3->SetBinError(3,0.9380797);
   hdirt_stack_3->SetBinError(4,1.168825);
   hdirt_stack_3->SetBinError(5,0.7413785);
   hdirt_stack_3->SetBinError(6,0.8874296);
   hdirt_stack_3->SetBinError(7,0.9012309);
   hdirt_stack_3->SetBinError(8,0.8484033);
   hdirt_stack_3->SetBinError(9,0.8300963);
   hdirt_stack_3->SetBinError(10,1.309493);
   hdirt_stack_3->SetBinError(11,0.8577704);
   hdirt_stack_3->SetBinError(12,0.7205726);
   hdirt_stack_3->SetBinError(13,0.8701468);
   hdirt_stack_3->SetBinError(14,0.936867);
   hdirt_stack_3->SetBinError(15,1.14445);
   hdirt_stack_3->SetBinError(16,0.7825512);
   hdirt_stack_3->SetBinError(17,0.7221976);
   hdirt_stack_3->SetBinError(18,0.9089125);
   hdirt_stack_3->SetBinError(19,1.090992);
   hdirt_stack_3->SetBinError(20,0.9841238);
   hdirt_stack_3->SetBinError(21,1.352307);
   hdirt_stack_3->SetBinError(22,0.9348604);
   hdirt_stack_3->SetBinError(23,0.946918);
   hdirt_stack_3->SetBinError(24,0.8692284);
   hdirt_stack_3->SetBinError(25,0.8079021);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,31.09857);
   houtFV_stack_4->SetBinContent(2,25.53223);
   houtFV_stack_4->SetBinContent(3,31.56756);
   houtFV_stack_4->SetBinContent(4,24.92383);
   houtFV_stack_4->SetBinContent(5,22.50823);
   houtFV_stack_4->SetBinContent(6,24.99781);
   houtFV_stack_4->SetBinContent(7,26.92704);
   houtFV_stack_4->SetBinContent(8,23.05866);
   houtFV_stack_4->SetBinContent(9,25.81427);
   houtFV_stack_4->SetBinContent(10,23.69917);
   houtFV_stack_4->SetBinContent(11,26.91488);
   houtFV_stack_4->SetBinContent(12,29.73567);
   houtFV_stack_4->SetBinContent(13,27.31864);
   houtFV_stack_4->SetBinContent(14,23.14816);
   houtFV_stack_4->SetBinContent(15,24.08851);
   houtFV_stack_4->SetBinContent(16,30.3333);
   houtFV_stack_4->SetBinContent(17,30.79332);
   houtFV_stack_4->SetBinContent(18,29.3032);
   houtFV_stack_4->SetBinContent(19,28.96377);
   houtFV_stack_4->SetBinContent(20,22.29334);
   houtFV_stack_4->SetBinContent(21,27.02394);
   houtFV_stack_4->SetBinContent(22,28.37804);
   houtFV_stack_4->SetBinContent(23,28.00994);
   houtFV_stack_4->SetBinContent(24,29.16549);
   houtFV_stack_4->SetBinContent(25,34.2144);
   houtFV_stack_4->SetBinError(1,2.854438);
   houtFV_stack_4->SetBinError(2,2.44028);
   houtFV_stack_4->SetBinError(3,2.935968);
   houtFV_stack_4->SetBinError(4,2.511231);
   houtFV_stack_4->SetBinError(5,2.363843);
   houtFV_stack_4->SetBinError(6,2.509978);
   houtFV_stack_4->SetBinError(7,2.676373);
   houtFV_stack_4->SetBinError(8,2.356347);
   houtFV_stack_4->SetBinError(9,2.455857);
   houtFV_stack_4->SetBinError(10,2.422995);
   houtFV_stack_4->SetBinError(11,2.675904);
   houtFV_stack_4->SetBinError(12,2.812209);
   houtFV_stack_4->SetBinError(13,2.638763);
   houtFV_stack_4->SetBinError(14,2.313141);
   houtFV_stack_4->SetBinError(15,2.456406);
   houtFV_stack_4->SetBinError(16,2.74836);
   houtFV_stack_4->SetBinError(17,2.802573);
   houtFV_stack_4->SetBinError(18,2.773763);
   houtFV_stack_4->SetBinError(19,2.748655);
   houtFV_stack_4->SetBinError(20,2.292563);
   houtFV_stack_4->SetBinError(21,2.64465);
   houtFV_stack_4->SetBinError(22,2.722094);
   houtFV_stack_4->SetBinError(23,2.588977);
   houtFV_stack_4->SetBinError(24,2.718156);
   houtFV_stack_4->SetBinError(25,3.161848);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.79779);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.733246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.327098);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.088184);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.663259);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.369091);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.909906);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.732444);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.645278);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.880195);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.970979);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.348621);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.629915);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.201042);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.142595);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.981551);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.517092);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.630141);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.818994);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.103412);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.53713);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.373927);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.912207);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.815162);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.481831);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8901381);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5735167);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7855022);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7017052);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7999637);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8709919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7561451);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8086975);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7213379);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.002015);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.041859);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5286286);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8693566);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8112308);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7250872);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6852952);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7765559);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7055084);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8410824);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7900155);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7236718);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6948985);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.970738);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8962991);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7851047);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4913382);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.745716);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.070566);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.356448);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7962618);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5029771);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6713873);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.40088);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4538239);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6908202);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6899096);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.744164);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8238517);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.85873);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4808437);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.236123);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6474804);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8735811);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.483143);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3578245);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6872022);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4574043);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.991428);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5513452);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.8185962);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1384241);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2593585);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3667695);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3882198);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2426239);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1648176);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2137433);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3824248);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1388209);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1859746);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.257942);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2843865);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.237387);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2498087);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.189708);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3357128);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2269334);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2686296);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1935291);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1153048);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1933563);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1478798);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3861512);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2040207);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2292891);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,88.93412);
   hNCpi0inFVres_stack_7->SetBinContent(2,97.36401);
   hNCpi0inFVres_stack_7->SetBinContent(3,87.55853);
   hNCpi0inFVres_stack_7->SetBinContent(4,85.42619);
   hNCpi0inFVres_stack_7->SetBinContent(5,76.55817);
   hNCpi0inFVres_stack_7->SetBinContent(6,82.76865);
   hNCpi0inFVres_stack_7->SetBinContent(7,85.47805);
   hNCpi0inFVres_stack_7->SetBinContent(8,78.20749);
   hNCpi0inFVres_stack_7->SetBinContent(9,85.20628);
   hNCpi0inFVres_stack_7->SetBinContent(10,81.31659);
   hNCpi0inFVres_stack_7->SetBinContent(11,77.98705);
   hNCpi0inFVres_stack_7->SetBinContent(12,94.13708);
   hNCpi0inFVres_stack_7->SetBinContent(13,92.75174);
   hNCpi0inFVres_stack_7->SetBinContent(14,92.57721);
   hNCpi0inFVres_stack_7->SetBinContent(15,89.78095);
   hNCpi0inFVres_stack_7->SetBinContent(16,88.52805);
   hNCpi0inFVres_stack_7->SetBinContent(17,83.80112);
   hNCpi0inFVres_stack_7->SetBinContent(18,84.96733);
   hNCpi0inFVres_stack_7->SetBinContent(19,85.44781);
   hNCpi0inFVres_stack_7->SetBinContent(20,81.7108);
   hNCpi0inFVres_stack_7->SetBinContent(21,84.53994);
   hNCpi0inFVres_stack_7->SetBinContent(22,83.98472);
   hNCpi0inFVres_stack_7->SetBinContent(23,91.73028);
   hNCpi0inFVres_stack_7->SetBinContent(24,96.80411);
   hNCpi0inFVres_stack_7->SetBinContent(25,94.59937);
   hNCpi0inFVres_stack_7->SetBinError(1,3.048186);
   hNCpi0inFVres_stack_7->SetBinError(2,3.312651);
   hNCpi0inFVres_stack_7->SetBinError(3,3.084412);
   hNCpi0inFVres_stack_7->SetBinError(4,3.038166);
   hNCpi0inFVres_stack_7->SetBinError(5,2.775961);
   hNCpi0inFVres_stack_7->SetBinError(6,2.95163);
   hNCpi0inFVres_stack_7->SetBinError(7,3.049614);
   hNCpi0inFVres_stack_7->SetBinError(8,2.876964);
   hNCpi0inFVres_stack_7->SetBinError(9,3.074959);
   hNCpi0inFVres_stack_7->SetBinError(10,2.932282);
   hNCpi0inFVres_stack_7->SetBinError(11,2.714637);
   hNCpi0inFVres_stack_7->SetBinError(12,3.196335);
   hNCpi0inFVres_stack_7->SetBinError(13,3.147202);
   hNCpi0inFVres_stack_7->SetBinError(14,3.124648);
   hNCpi0inFVres_stack_7->SetBinError(15,3.127173);
   hNCpi0inFVres_stack_7->SetBinError(16,3.06583);
   hNCpi0inFVres_stack_7->SetBinError(17,2.993525);
   hNCpi0inFVres_stack_7->SetBinError(18,3.034698);
   hNCpi0inFVres_stack_7->SetBinError(19,3.207526);
   hNCpi0inFVres_stack_7->SetBinError(20,2.881302);
   hNCpi0inFVres_stack_7->SetBinError(21,2.943024);
   hNCpi0inFVres_stack_7->SetBinError(22,2.80212);
   hNCpi0inFVres_stack_7->SetBinError(23,3.12939);
   hNCpi0inFVres_stack_7->SetBinError(24,3.247149);
   hNCpi0inFVres_stack_7->SetBinError(25,3.183734);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.38461);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.45489);
   hNCpi0inFVdis_stack_8->SetBinContent(3,21.84716);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.46045);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.21851);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.85321);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.28204);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.73102);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.39987);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.23823);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.24276);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.19686);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.3962);
   hNCpi0inFVdis_stack_8->SetBinContent(14,22.21255);
   hNCpi0inFVdis_stack_8->SetBinContent(15,20.50727);
   hNCpi0inFVdis_stack_8->SetBinContent(16,20.10914);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.1986);
   hNCpi0inFVdis_stack_8->SetBinContent(18,17.4513);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.42996);
   hNCpi0inFVdis_stack_8->SetBinContent(20,18.55243);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.50458);
   hNCpi0inFVdis_stack_8->SetBinContent(22,23.98812);
   hNCpi0inFVdis_stack_8->SetBinContent(23,18.9614);
   hNCpi0inFVdis_stack_8->SetBinContent(24,20.89449);
   hNCpi0inFVdis_stack_8->SetBinContent(25,17.81277);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.468947);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.599618);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.715286);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.536581);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.343738);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.361187);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.570394);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.362336);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.443319);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.606367);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.465221);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.403834);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.575128);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.667762);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.627567);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.371337);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.754698);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.363941);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.342343);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.451263);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.176298);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.944259);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.435003);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.702391);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.394461);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1028605);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08634114);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05436744);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1384211);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05535072);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1817762);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06363495);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.0707117);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06587026);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03140701);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1281576);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03195992);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1326073);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03246768);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02449786);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,52.38939);
   hCCpi0inFV_stack_10->SetBinContent(2,41.10458);
   hCCpi0inFV_stack_10->SetBinContent(3,44.96653);
   hCCpi0inFV_stack_10->SetBinContent(4,41.64166);
   hCCpi0inFV_stack_10->SetBinContent(5,33.77838);
   hCCpi0inFV_stack_10->SetBinContent(6,34.44963);
   hCCpi0inFV_stack_10->SetBinContent(7,36.97543);
   hCCpi0inFV_stack_10->SetBinContent(8,38.26569);
   hCCpi0inFV_stack_10->SetBinContent(9,34.12164);
   hCCpi0inFV_stack_10->SetBinContent(10,46.4939);
   hCCpi0inFV_stack_10->SetBinContent(11,51.51881);
   hCCpi0inFV_stack_10->SetBinContent(12,52.69563);
   hCCpi0inFV_stack_10->SetBinContent(13,56.67652);
   hCCpi0inFV_stack_10->SetBinContent(14,47.19995);
   hCCpi0inFV_stack_10->SetBinContent(15,41.12568);
   hCCpi0inFV_stack_10->SetBinContent(16,49.01218);
   hCCpi0inFV_stack_10->SetBinContent(17,40.25447);
   hCCpi0inFV_stack_10->SetBinContent(18,44.07278);
   hCCpi0inFV_stack_10->SetBinContent(19,41.51146);
   hCCpi0inFV_stack_10->SetBinContent(20,37.79389);
   hCCpi0inFV_stack_10->SetBinContent(21,37.89236);
   hCCpi0inFV_stack_10->SetBinContent(22,46.88189);
   hCCpi0inFV_stack_10->SetBinContent(23,43.91519);
   hCCpi0inFV_stack_10->SetBinContent(24,51.77969);
   hCCpi0inFV_stack_10->SetBinContent(25,48.49984);
   hCCpi0inFV_stack_10->SetBinError(1,3.652327);
   hCCpi0inFV_stack_10->SetBinError(2,3.174634);
   hCCpi0inFV_stack_10->SetBinError(3,3.377086);
   hCCpi0inFV_stack_10->SetBinError(4,3.232043);
   hCCpi0inFV_stack_10->SetBinError(5,2.811665);
   hCCpi0inFV_stack_10->SetBinError(6,2.950152);
   hCCpi0inFV_stack_10->SetBinError(7,3.058918);
   hCCpi0inFV_stack_10->SetBinError(8,3.104076);
   hCCpi0inFV_stack_10->SetBinError(9,2.892619);
   hCCpi0inFV_stack_10->SetBinError(10,3.466821);
   hCCpi0inFV_stack_10->SetBinError(11,3.658602);
   hCCpi0inFV_stack_10->SetBinError(12,3.645322);
   hCCpi0inFV_stack_10->SetBinError(13,3.792439);
   hCCpi0inFV_stack_10->SetBinError(14,3.51234);
   hCCpi0inFV_stack_10->SetBinError(15,3.203065);
   hCCpi0inFV_stack_10->SetBinError(16,3.487423);
   hCCpi0inFV_stack_10->SetBinError(17,3.166775);
   hCCpi0inFV_stack_10->SetBinError(18,3.289234);
   hCCpi0inFV_stack_10->SetBinError(19,3.263382);
   hCCpi0inFV_stack_10->SetBinError(20,3.065101);
   hCCpi0inFV_stack_10->SetBinError(21,3.083219);
   hCCpi0inFV_stack_10->SetBinError(22,3.504777);
   hCCpi0inFV_stack_10->SetBinError(23,3.355148);
   hCCpi0inFV_stack_10->SetBinError(24,3.569536);
   hCCpi0inFV_stack_10->SetBinError(25,3.478243);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,20.08101);
   hNCinFV_stack_11->SetBinContent(2,20.18114);
   hNCinFV_stack_11->SetBinContent(3,24.67952);
   hNCinFV_stack_11->SetBinContent(4,21.71958);
   hNCinFV_stack_11->SetBinContent(5,16.35152);
   hNCinFV_stack_11->SetBinContent(6,18.45569);
   hNCinFV_stack_11->SetBinContent(7,20.61315);
   hNCinFV_stack_11->SetBinContent(8,19.50916);
   hNCinFV_stack_11->SetBinContent(9,17.53794);
   hNCinFV_stack_11->SetBinContent(10,18.7369);
   hNCinFV_stack_11->SetBinContent(11,20.71346);
   hNCinFV_stack_11->SetBinContent(12,20.83833);
   hNCinFV_stack_11->SetBinContent(13,16.27829);
   hNCinFV_stack_11->SetBinContent(14,24.31168);
   hNCinFV_stack_11->SetBinContent(15,24.67287);
   hNCinFV_stack_11->SetBinContent(16,21.94559);
   hNCinFV_stack_11->SetBinContent(17,21.62962);
   hNCinFV_stack_11->SetBinContent(18,24.5074);
   hNCinFV_stack_11->SetBinContent(19,18.81149);
   hNCinFV_stack_11->SetBinContent(20,20.5174);
   hNCinFV_stack_11->SetBinContent(21,18.74926);
   hNCinFV_stack_11->SetBinContent(22,21.00982);
   hNCinFV_stack_11->SetBinContent(23,20.34872);
   hNCinFV_stack_11->SetBinContent(24,19.35518);
   hNCinFV_stack_11->SetBinContent(25,23.68618);
   hNCinFV_stack_11->SetBinError(1,2.524775);
   hNCinFV_stack_11->SetBinError(2,2.416336);
   hNCinFV_stack_11->SetBinError(3,2.728421);
   hNCinFV_stack_11->SetBinError(4,2.391988);
   hNCinFV_stack_11->SetBinError(5,2.219565);
   hNCinFV_stack_11->SetBinError(6,2.270194);
   hNCinFV_stack_11->SetBinError(7,2.268595);
   hNCinFV_stack_11->SetBinError(8,2.287419);
   hNCinFV_stack_11->SetBinError(9,2.227546);
   hNCinFV_stack_11->SetBinError(10,2.407445);
   hNCinFV_stack_11->SetBinError(11,2.467845);
   hNCinFV_stack_11->SetBinError(12,2.495446);
   hNCinFV_stack_11->SetBinError(13,2.092763);
   hNCinFV_stack_11->SetBinError(14,2.865741);
   hNCinFV_stack_11->SetBinError(15,2.676145);
   hNCinFV_stack_11->SetBinError(16,2.556456);
   hNCinFV_stack_11->SetBinError(17,2.475726);
   hNCinFV_stack_11->SetBinError(18,2.770538);
   hNCinFV_stack_11->SetBinError(19,2.217858);
   hNCinFV_stack_11->SetBinError(20,2.57198);
   hNCinFV_stack_11->SetBinError(21,2.256754);
   hNCinFV_stack_11->SetBinError(22,2.676324);
   hNCinFV_stack_11->SetBinError(23,2.452352);
   hNCinFV_stack_11->SetBinError(24,2.338306);
   hNCinFV_stack_11->SetBinError(25,2.814811);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,30.11354);
   hnumuCCinFV_stack_12->SetBinContent(2,28.56511);
   hnumuCCinFV_stack_12->SetBinContent(3,19.618);
   hnumuCCinFV_stack_12->SetBinContent(4,27.07115);
   hnumuCCinFV_stack_12->SetBinContent(5,22.59538);
   hnumuCCinFV_stack_12->SetBinContent(6,19.45288);
   hnumuCCinFV_stack_12->SetBinContent(7,21.07073);
   hnumuCCinFV_stack_12->SetBinContent(8,21.7515);
   hnumuCCinFV_stack_12->SetBinContent(9,21.37368);
   hnumuCCinFV_stack_12->SetBinContent(10,23.99126);
   hnumuCCinFV_stack_12->SetBinContent(11,22.3194);
   hnumuCCinFV_stack_12->SetBinContent(12,26.45596);
   hnumuCCinFV_stack_12->SetBinContent(13,33.01076);
   hnumuCCinFV_stack_12->SetBinContent(14,32.12485);
   hnumuCCinFV_stack_12->SetBinContent(15,33.31686);
   hnumuCCinFV_stack_12->SetBinContent(16,23.54338);
   hnumuCCinFV_stack_12->SetBinContent(17,26.65035);
   hnumuCCinFV_stack_12->SetBinContent(18,25.95413);
   hnumuCCinFV_stack_12->SetBinContent(19,26.184);
   hnumuCCinFV_stack_12->SetBinContent(20,31.22593);
   hnumuCCinFV_stack_12->SetBinContent(21,26.12995);
   hnumuCCinFV_stack_12->SetBinContent(22,25.88077);
   hnumuCCinFV_stack_12->SetBinContent(23,23.70091);
   hnumuCCinFV_stack_12->SetBinContent(24,27.37509);
   hnumuCCinFV_stack_12->SetBinContent(25,34.28571);
   hnumuCCinFV_stack_12->SetBinError(1,3.073621);
   hnumuCCinFV_stack_12->SetBinError(2,3.009042);
   hnumuCCinFV_stack_12->SetBinError(3,2.243104);
   hnumuCCinFV_stack_12->SetBinError(4,3.052226);
   hnumuCCinFV_stack_12->SetBinError(5,2.835833);
   hnumuCCinFV_stack_12->SetBinError(6,2.481808);
   hnumuCCinFV_stack_12->SetBinError(7,2.433708);
   hnumuCCinFV_stack_12->SetBinError(8,2.496699);
   hnumuCCinFV_stack_12->SetBinError(9,2.429768);
   hnumuCCinFV_stack_12->SetBinError(10,2.980602);
   hnumuCCinFV_stack_12->SetBinError(11,2.562704);
   hnumuCCinFV_stack_12->SetBinError(12,2.842995);
   hnumuCCinFV_stack_12->SetBinError(13,3.527525);
   hnumuCCinFV_stack_12->SetBinError(14,3.04285);
   hnumuCCinFV_stack_12->SetBinError(15,3.162283);
   hnumuCCinFV_stack_12->SetBinError(16,2.901635);
   hnumuCCinFV_stack_12->SetBinError(17,2.757621);
   hnumuCCinFV_stack_12->SetBinError(18,2.878239);
   hnumuCCinFV_stack_12->SetBinError(19,3.547323);
   hnumuCCinFV_stack_12->SetBinError(20,3.628444);
   hnumuCCinFV_stack_12->SetBinError(21,3.746738);
   hnumuCCinFV_stack_12->SetBinError(22,3.419924);
   hnumuCCinFV_stack_12->SetBinError(23,2.622843);
   hnumuCCinFV_stack_12->SetBinError(24,2.966994);
   hnumuCCinFV_stack_12->SetBinError(25,3.480642);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,4.634026);
   hnueCCinFV_stack_13->SetBinContent(2,1.816012);
   hnueCCinFV_stack_13->SetBinContent(3,1.418942);
   hnueCCinFV_stack_13->SetBinContent(4,1.811907);
   hnueCCinFV_stack_13->SetBinContent(5,2.945977);
   hnueCCinFV_stack_13->SetBinContent(6,1.737779);
   hnueCCinFV_stack_13->SetBinContent(7,2.86496);
   hnueCCinFV_stack_13->SetBinContent(8,1.197156);
   hnueCCinFV_stack_13->SetBinContent(9,2.672557);
   hnueCCinFV_stack_13->SetBinContent(10,1.573683);
   hnueCCinFV_stack_13->SetBinContent(11,1.204882);
   hnueCCinFV_stack_13->SetBinContent(12,1.993738);
   hnueCCinFV_stack_13->SetBinContent(13,1.763293);
   hnueCCinFV_stack_13->SetBinContent(14,2.010489);
   hnueCCinFV_stack_13->SetBinContent(16,2.118819);
   hnueCCinFV_stack_13->SetBinContent(17,2.386762);
   hnueCCinFV_stack_13->SetBinContent(18,2.898589);
   hnueCCinFV_stack_13->SetBinContent(19,1.212624);
   hnueCCinFV_stack_13->SetBinContent(20,3.844117);
   hnueCCinFV_stack_13->SetBinContent(21,4.002655);
   hnueCCinFV_stack_13->SetBinContent(22,0.7736655);
   hnueCCinFV_stack_13->SetBinContent(23,1.505034);
   hnueCCinFV_stack_13->SetBinContent(24,2.99621);
   hnueCCinFV_stack_13->SetBinContent(25,1.831574);
   hnueCCinFV_stack_13->SetBinError(1,1.736163);
   hnueCCinFV_stack_13->SetBinError(2,0.7159056);
   hnueCCinFV_stack_13->SetBinError(3,0.5919308);
   hnueCCinFV_stack_13->SetBinError(4,1.161994);
   hnueCCinFV_stack_13->SetBinError(5,0.9655673);
   hnueCCinFV_stack_13->SetBinError(6,0.6814606);
   hnueCCinFV_stack_13->SetBinError(7,0.9533387);
   hnueCCinFV_stack_13->SetBinError(8,0.6890576);
   hnueCCinFV_stack_13->SetBinError(9,0.9022151);
   hnueCCinFV_stack_13->SetBinError(10,0.9478362);
   hnueCCinFV_stack_13->SetBinError(11,0.7916969);
   hnueCCinFV_stack_13->SetBinError(12,0.8025836);
   hnueCCinFV_stack_13->SetBinError(13,0.92415);
   hnueCCinFV_stack_13->SetBinError(14,0.732511);
   hnueCCinFV_stack_13->SetBinError(16,0.7924371);
   hnueCCinFV_stack_13->SetBinError(17,0.7746713);
   hnueCCinFV_stack_13->SetBinError(18,1.457459);
   hnueCCinFV_stack_13->SetBinError(19,0.5732833);
   hnueCCinFV_stack_13->SetBinError(20,1.549703);
   hnueCCinFV_stack_13->SetBinError(21,1.743702);
   hnueCCinFV_stack_13->SetBinError(22,0.4587799);
   hnueCCinFV_stack_13->SetBinError(23,0.6161597);
   hnueCCinFV_stack_13->SetBinError(24,0.9782481);
   hnueCCinFV_stack_13->SetBinError(25,0.6654522);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__2->SetBinContent(1,282.0742);
   hmcerror__2->SetBinContent(2,275.7161);
   hmcerror__2->SetBinContent(3,273.9279);
   hmcerror__2->SetBinContent(4,268.8361);
   hmcerror__2->SetBinContent(5,246.4413);
   hmcerror__2->SetBinContent(6,252.1682);
   hmcerror__2->SetBinContent(7,287.9814);
   hmcerror__2->SetBinContent(8,251.558);
   hmcerror__2->SetBinContent(9,255.5113);
   hmcerror__2->SetBinContent(10,264.602);
   hmcerror__2->SetBinContent(11,260.754);
   hmcerror__2->SetBinContent(12,279.2627);
   hmcerror__2->SetBinContent(13,283.1998);
   hmcerror__2->SetBinContent(14,277.5525);
   hmcerror__2->SetBinContent(15,267.0281);
   hmcerror__2->SetBinContent(16,284.5285);
   hmcerror__2->SetBinContent(17,265.2144);
   hmcerror__2->SetBinContent(18,286.934);
   hmcerror__2->SetBinContent(19,267.2111);
   hmcerror__2->SetBinContent(20,269.9647);
   hmcerror__2->SetBinContent(21,259.4648);
   hmcerror__2->SetBinContent(22,266.0173);
   hmcerror__2->SetBinContent(23,266.162);
   hmcerror__2->SetBinContent(24,289.5836);
   hmcerror__2->SetBinContent(25,297.4106);
   hmcerror__2->SetBinError(1,73.6146);
   hmcerror__2->SetBinError(2,73.22872);
   hmcerror__2->SetBinError(3,72.42762);
   hmcerror__2->SetBinError(4,71.29969);
   hmcerror__2->SetBinError(5,61.238);
   hmcerror__2->SetBinError(6,65.69182);
   hmcerror__2->SetBinError(7,74.13424);
   hmcerror__2->SetBinError(8,70.59179);
   hmcerror__2->SetBinError(9,69.98881);
   hmcerror__2->SetBinError(10,70.23654);
   hmcerror__2->SetBinError(11,69.68698);
   hmcerror__2->SetBinError(12,77.48157);
   hmcerror__2->SetBinError(13,77.54114);
   hmcerror__2->SetBinError(14,76.19945);
   hmcerror__2->SetBinError(15,74.25236);
   hmcerror__2->SetBinError(16,75.4202);
   hmcerror__2->SetBinError(17,70.34882);
   hmcerror__2->SetBinError(18,69.5615);
   hmcerror__2->SetBinError(19,73.56404);
   hmcerror__2->SetBinError(20,75.86753);
   hmcerror__2->SetBinError(21,67.60646);
   hmcerror__2->SetBinError(22,69.56468);
   hmcerror__2->SetBinError(23,72.22232);
   hmcerror__2->SetBinError(24,78.68996);
   hmcerror__2->SetBinError(25,75.47697);
   hmcerror__2->SetBinError(26,0.3895343);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
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
   Double_t _fy3001[25] = {
   297,
   251,
   261,
   242,
   239,
   237,
   255,
   265,
   231,
   252,
   269,
   262,
   293,
   303,
   236,
   255,
   255,
   250,
   242,
   248,
   234,
   258,
   303,
   254,
   252};
   Double_t _felx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fely3001[25] = {
   17.23369,
   15.84298,
   16.15549,
   15.55635,
   15.45962,
   15.3948,
   15.96872,
   16.27882,
   15.19868,
   15.87451,
   16.40122,
   16.18641,
   17.11724,
   17.4069,
   15.36229,
   15.96872,
   15.96872,
   15.81139,
   15.55635,
   15.74802,
   15.29706,
   16.06238,
   17.4069,
   15.93738,
   15.87451};
   Double_t _fehx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fehy3001[25] = {
   17.23369,
   15.84298,
   16.15549,
   15.55635,
   15.45962,
   15.3948,
   15.96872,
   16.27882,
   15.19868,
   15.87451,
   16.40122,
   16.18641,
   17.11724,
   17.4069,
   15.36229,
   15.96872,
   15.96872,
   15.81139,
   15.55635,
   15.74802,
   15.29706,
   16.06238,
   17.4069,
   15.93738,
   15.87451};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(205.3408);
   Graph_Graph3001->SetMaximum(330.8675);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2172.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  473.3","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 515.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
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
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fely3002[25] = {
   0.260976,
   0.2655947,
   0.264404,
   0.2652163,
   0.2484892,
   0.260508,
   0.2574271,
   0.2806183,
   0.2739167,
   0.2654422,
   0.2672519,
   0.2774504,
   0.2738037,
   0.2745407,
   0.2780695,
   0.2650708,
   0.2652527,
   0.2424303,
   0.2753031,
   0.2810276,
   0.2605611,
   0.2615043,
   0.2713472,
   0.2717349,
   0.2537804};
   Double_t _fehx3002[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fehy3002[25] = {
   0.260976,
   0.2655947,
   0.264404,
   0.2652163,
   0.2484892,
   0.260508,
   0.2574271,
   0.2806183,
   0.2739167,
   0.2654422,
   0.2672519,
   0.2774504,
   0.2738037,
   0.2745407,
   0.2780695,
   0.2650708,
   0.2652527,
   0.2424303,
   0.2753031,
   0.2810276,
   0.2605611,
   0.2615043,
   0.2713472,
   0.2717349,
   0.2537804};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
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
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fely3003[25] = {
   0.2436228,
   0.251966,
   0.243469,
   0.2380131,
   0.2334306,
   0.2406382,
   0.2296183,
   0.2327402,
   0.2430948,
   0.2284806,
   0.2459253,
   0.251319,
   0.250299,
   0.2448556,
   0.2507609,
   0.2484247,
   0.2477598,
   0.2257413,
   0.2393828,
   0.2422746,
   0.2395369,
   0.2433438,
   0.2480134,
   0.2476933,
   0.2334474};
   Double_t _fehx3003[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fehy3003[25] = {
   0.2436228,
   0.251966,
   0.243469,
   0.2380131,
   0.2334306,
   0.2406382,
   0.2296183,
   0.2327402,
   0.2430948,
   0.2284806,
   0.2459253,
   0.251319,
   0.250299,
   0.2448556,
   0.2507609,
   0.2484247,
   0.2477598,
   0.2257413,
   0.2393828,
   0.2422746,
   0.2395369,
   0.2433438,
   0.2480134,
   0.2476933,
   0.2334474};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
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
   Double_t _fy3004[25] = {
   1.052914,
   0.9103567,
   0.9528056,
   0.9001769,
   0.969805,
   0.9398491,
   0.8854737,
   1.053435,
   0.9040696,
   0.9523738,
   1.031624,
   0.9381846,
   1.034605,
   1.091685,
   0.8838022,
   0.8962195,
   0.9614864,
   0.8712805,
   0.905651,
   0.9186387,
   0.9018563,
   0.9698617,
   1.138404,
   0.8771216,
   0.8473136};
   Double_t _felx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fely3004[25] = {
   0.06109628,
   0.05746121,
   0.05897719,
   0.05786556,
   0.06273147,
   0.06104976,
   0.05545051,
   0.06471199,
   0.05948341,
   0.05999391,
   0.06289921,
   0.05796124,
   0.06044229,
   0.06271569,
   0.05753062,
   0.05612344,
   0.06021061,
   0.05510462,
   0.05821745,
   0.05833361,
   0.05895619,
   0.06038095,
   0.06539961,
   0.05503551,
   0.05337574};
   Double_t _fehx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
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
   Double_t _fehy3004[25] = {
   0.06109628,
   0.05746121,
   0.05897719,
   0.05786556,
   0.06273147,
   0.06104976,
   0.05545051,
   0.06471199,
   0.05948341,
   0.05999391,
   0.06289921,
   0.05796124,
   0.06044229,
   0.06271569,
   0.05753062,
   0.05612344,
   0.06021061,
   0.05510462,
   0.05821745,
   0.05833361,
   0.05895619,
   0.06038095,
   0.06539961,
   0.05503551,
   0.05337574};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.7529512);
   Graph_Graph3004->SetMaximum(1.24479);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

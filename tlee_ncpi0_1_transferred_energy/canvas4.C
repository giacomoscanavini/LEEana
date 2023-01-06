#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Oct 21 19:09:15 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-276.9231,-14.22,2030.769,1572.433);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__10->SetBinContent(2,10.99095);
   hmc__10->SetBinContent(3,260.5892);
   hmc__10->SetBinContent(4,600.8923);
   hmc__10->SetBinContent(5,609.4227);
   hmc__10->SetBinContent(6,507.2844);
   hmc__10->SetBinContent(7,411.9036);
   hmc__10->SetBinContent(8,287.9851);
   hmc__10->SetBinContent(9,248.813);
   hmc__10->SetBinContent(10,184.5163);
   hmc__10->SetBinContent(11,148.5922);
   hmc__10->SetBinContent(12,112.3943);
   hmc__10->SetBinContent(13,82.68406);
   hmc__10->SetBinContent(14,62.5422);
   hmc__10->SetBinContent(15,47.89839);
   hmc__10->SetBinContent(16,31.96848);
   hmc__10->SetBinContent(17,23.0498);
   hmc__10->SetBinContent(18,19.60752);
   hmc__10->SetBinContent(19,13.79864);
   hmc__10->SetBinContent(20,12.42719);
   hmc__10->SetBinContent(21,8.960176);
   hmc__10->SetBinContent(22,5.779814);
   hmc__10->SetBinContent(23,4.923977);
   hmc__10->SetBinContent(24,5.634151);
   hmc__10->SetBinContent(25,4.108377);
   hmc__10->SetBinContent(26,22.6931);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,9.578953);
   hmc__10->SetBinError(3,53.57585);
   hmc__10->SetBinError(4,160.2122);
   hmc__10->SetBinError(5,146.2414);
   hmc__10->SetBinError(6,120.6979);
   hmc__10->SetBinError(7,130.1979);
   hmc__10->SetBinError(8,106.3002);
   hmc__10->SetBinError(9,83.31198);
   hmc__10->SetBinError(10,49.58265);
   hmc__10->SetBinError(11,37.34441);
   hmc__10->SetBinError(12,37.06445);
   hmc__10->SetBinError(13,27.16962);
   hmc__10->SetBinError(14,28.51565);
   hmc__10->SetBinError(15,27.6552);
   hmc__10->SetBinError(16,21.86619);
   hmc__10->SetBinError(17,12.29079);
   hmc__10->SetBinError(18,11.6224);
   hmc__10->SetBinError(19,11.83706);
   hmc__10->SetBinError(20,11.03314);
   hmc__10->SetBinError(21,12.56789);
   hmc__10->SetBinError(22,7.100657);
   hmc__10->SetBinError(23,6.829092);
   hmc__10->SetBinError(24,14.70358);
   hmc__10->SetBinError(25,8.816704);
   hmc__10->SetBinError(26,14.26846);
   hmc__10->SetMinimum(-14.22);
   hmc__10->SetMaximum(1493.1);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,1800);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(639.8937);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,8.390909);
   hbadmatch_stack_1->SetBinContent(4,21.72604);
   hbadmatch_stack_1->SetBinContent(5,14.5363);
   hbadmatch_stack_1->SetBinContent(6,8.762507);
   hbadmatch_stack_1->SetBinContent(7,12.32495);
   hbadmatch_stack_1->SetBinContent(8,6.489534);
   hbadmatch_stack_1->SetBinContent(9,5.702536);
   hbadmatch_stack_1->SetBinContent(10,4.347558);
   hbadmatch_stack_1->SetBinContent(11,3.719731);
   hbadmatch_stack_1->SetBinContent(12,2.557034);
   hbadmatch_stack_1->SetBinContent(13,2.130872);
   hbadmatch_stack_1->SetBinContent(14,2.033534);
   hbadmatch_stack_1->SetBinContent(15,0.7698339);
   hbadmatch_stack_1->SetBinContent(16,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.5160626);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.5610657);
   hbadmatch_stack_1->SetBinContent(24,0.6155995);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.468201);
   hbadmatch_stack_1->SetBinError(4,3.167493);
   hbadmatch_stack_1->SetBinError(5,2.101829);
   hbadmatch_stack_1->SetBinError(6,1.47132);
   hbadmatch_stack_1->SetBinError(7,1.905649);
   hbadmatch_stack_1->SetBinError(8,1.354101);
   hbadmatch_stack_1->SetBinError(9,1.292584);
   hbadmatch_stack_1->SetBinError(10,1.164297);
   hbadmatch_stack_1->SetBinError(11,1.779462);
   hbadmatch_stack_1->SetBinError(12,0.8833776);
   hbadmatch_stack_1->SetBinError(13,0.7598061);
   hbadmatch_stack_1->SetBinError(14,0.7509963);
   hbadmatch_stack_1->SetBinError(15,0.5020301);
   hbadmatch_stack_1->SetBinError(16,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.304027);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.5610657);
   hbadmatch_stack_1->SetBinError(24,0.3560237);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.1967154);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.779209);
   hext_stack_2->SetBinContent(3,73.81974);
   hext_stack_2->SetBinContent(4,102.5157);
   hext_stack_2->SetBinContent(5,86.28648);
   hext_stack_2->SetBinContent(6,65.55056);
   hext_stack_2->SetBinContent(7,44.11067);
   hext_stack_2->SetBinContent(8,27.26909);
   hext_stack_2->SetBinContent(9,18.36587);
   hext_stack_2->SetBinContent(10,14.28117);
   hext_stack_2->SetBinContent(11,11.63686);
   hext_stack_2->SetBinContent(12,3.979379);
   hext_stack_2->SetBinContent(13,4.94539);
   hext_stack_2->SetBinContent(14,5.330447);
   hext_stack_2->SetBinContent(15,2.021405);
   hext_stack_2->SetBinContent(16,2.599588);
   hext_stack_2->SetBinContent(17,2.834603);
   hext_stack_2->SetBinContent(18,3.62185);
   hext_stack_2->SetBinContent(19,1.868591);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,2.841783);
   hext_stack_2->SetBinError(2,0.9206235);
   hext_stack_2->SetBinError(3,6.050021);
   hext_stack_2->SetBinError(4,6.772242);
   hext_stack_2->SetBinError(5,6.249169);
   hext_stack_2->SetBinError(6,5.407315);
   hext_stack_2->SetBinError(7,4.382875);
   hext_stack_2->SetBinError(8,3.530041);
   hext_stack_2->SetBinError(9,2.902525);
   hext_stack_2->SetBinError(10,2.389204);
   hext_stack_2->SetBinError(11,2.338176);
   hext_stack_2->SetBinError(12,1.207483);
   hext_stack_2->SetBinError(13,1.405318);
   hext_stack_2->SetBinError(14,1.656455);
   hext_stack_2->SetBinError(15,0.9448239);
   hext_stack_2->SetBinError(16,0.9884288);
   hext_stack_2->SetBinError(17,1.106046);
   hext_stack_2->SetBinError(18,1.422134);
   hext_stack_2->SetBinError(19,0.840497);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.011007);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,8.77114);
   hdirt_stack_3->SetBinContent(4,16.82763);
   hdirt_stack_3->SetBinContent(5,9.990822);
   hdirt_stack_3->SetBinContent(6,5.823256);
   hdirt_stack_3->SetBinContent(7,4.823112);
   hdirt_stack_3->SetBinContent(8,3.154782);
   hdirt_stack_3->SetBinContent(9,2.223534);
   hdirt_stack_3->SetBinContent(10,1.605638);
   hdirt_stack_3->SetBinContent(11,2.327754);
   hdirt_stack_3->SetBinContent(12,0.4244012);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.7833549);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.551836);
   hdirt_stack_3->SetBinError(4,2.136957);
   hdirt_stack_3->SetBinError(5,1.641067);
   hdirt_stack_3->SetBinError(6,1.255425);
   hdirt_stack_3->SetBinError(7,1.154199);
   hdirt_stack_3->SetBinError(8,1.217634);
   hdirt_stack_3->SetBinError(9,0.7504082);
   hdirt_stack_3->SetBinError(10,0.7016496);
   hdirt_stack_3->SetBinError(11,1.26485);
   hdirt_stack_3->SetBinError(12,0.2451693);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(15,0.5539236);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,4.334809);
   houtFV_stack_4->SetBinContent(3,46.18813);
   houtFV_stack_4->SetBinContent(4,99.35614);
   houtFV_stack_4->SetBinContent(5,92.91248);
   houtFV_stack_4->SetBinContent(6,65.95256);
   houtFV_stack_4->SetBinContent(7,50.05909);
   houtFV_stack_4->SetBinContent(8,28.69693);
   houtFV_stack_4->SetBinContent(9,29.29947);
   houtFV_stack_4->SetBinContent(10,15.85668);
   houtFV_stack_4->SetBinContent(11,12.50919);
   houtFV_stack_4->SetBinContent(12,9.901986);
   houtFV_stack_4->SetBinContent(13,6.160914);
   houtFV_stack_4->SetBinContent(14,4.044064);
   houtFV_stack_4->SetBinContent(15,4.135043);
   houtFV_stack_4->SetBinContent(16,1.385943);
   houtFV_stack_4->SetBinContent(17,1.478353);
   houtFV_stack_4->SetBinContent(18,0.9421788);
   houtFV_stack_4->SetBinContent(19,1.228841);
   houtFV_stack_4->SetBinContent(20,1.317715);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.1950248);
   houtFV_stack_4->SetBinError(2,1.006466);
   houtFV_stack_4->SetBinError(3,3.357034);
   houtFV_stack_4->SetBinError(4,5.063101);
   houtFV_stack_4->SetBinError(5,5.008686);
   houtFV_stack_4->SetBinError(6,4.168401);
   houtFV_stack_4->SetBinError(7,3.542389);
   houtFV_stack_4->SetBinError(8,2.5869);
   houtFV_stack_4->SetBinError(9,2.641419);
   houtFV_stack_4->SetBinError(10,1.914751);
   houtFV_stack_4->SetBinError(11,1.827073);
   houtFV_stack_4->SetBinError(12,1.584306);
   houtFV_stack_4->SetBinError(13,1.280992);
   houtFV_stack_4->SetBinError(14,1.087655);
   houtFV_stack_4->SetBinError(15,1.082334);
   houtFV_stack_4->SetBinError(16,0.5239764);
   houtFV_stack_4->SetBinError(17,0.6251618);
   houtFV_stack_4->SetBinError(18,0.5651418);
   houtFV_stack_4->SetBinError(19,0.5293841);
   houtFV_stack_4->SetBinError(20,0.6070438);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(25,0.1967154);
   houtFV_stack_4->SetBinError(26,0.1950249);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.979277);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.79575);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,20.1585);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,21.71529);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.19341);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.678967);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.544399);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.351821);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.664366);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.249843);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.760454);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.850231);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.017411);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.142415);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4453762);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.611226);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1960267);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5965472);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.384417);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.687813);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.75376);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.418102);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8083731);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6831713);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5429297);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8905623);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8972206);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.845443);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8496898);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3804357);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6002379);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1463822);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2560015);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.07409418);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1252919);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3649989);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.478885);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.305857);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.298905);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2967698);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4936556);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2663195);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3109047);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2890263);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02981365);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7790967);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1081027);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4033331);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.363157);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.283093);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.08189397);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1909518);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.144791);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.146854);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2193124);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02108645);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3657815);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08308727);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.711536);
   hNCpi0inFVres_stack_7->SetBinContent(3,73.54176);
   hNCpi0inFVres_stack_7->SetBinContent(4,226.1617);
   hNCpi0inFVres_stack_7->SetBinContent(5,251.6122);
   hNCpi0inFVres_stack_7->SetBinContent(6,191.7457);
   hNCpi0inFVres_stack_7->SetBinContent(7,122.9641);
   hNCpi0inFVres_stack_7->SetBinContent(8,80.7699);
   hNCpi0inFVres_stack_7->SetBinContent(9,59.23016);
   hNCpi0inFVres_stack_7->SetBinContent(10,45.11118);
   hNCpi0inFVres_stack_7->SetBinContent(11,29.61476);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.81078);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.35122);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.852142);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.777105);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.858214);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.847126);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.910598);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.070749);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.123701);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.6474002);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4729943);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5591209);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.5506092);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.087621);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4493793);
   hNCpi0inFVres_stack_7->SetBinError(3,2.92373);
   hNCpi0inFVres_stack_7->SetBinError(4,5.288754);
   hNCpi0inFVres_stack_7->SetBinError(5,5.729926);
   hNCpi0inFVres_stack_7->SetBinError(6,4.651958);
   hNCpi0inFVres_stack_7->SetBinError(7,3.38272);
   hNCpi0inFVres_stack_7->SetBinError(8,2.747819);
   hNCpi0inFVres_stack_7->SetBinError(9,2.381867);
   hNCpi0inFVres_stack_7->SetBinError(10,2.134546);
   hNCpi0inFVres_stack_7->SetBinError(11,1.970637);
   hNCpi0inFVres_stack_7->SetBinError(12,2.138829);
   hNCpi0inFVres_stack_7->SetBinError(13,1.73369);
   hNCpi0inFVres_stack_7->SetBinError(14,1.045835);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8236447);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9836854);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6498821);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5210017);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3578038);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5900247);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2618349);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2758358);
   hNCpi0inFVres_stack_7->SetBinError(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2903617);
   hNCpi0inFVres_stack_7->SetBinError(25,0.38435);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6536814);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7157054);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.40446);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.98519);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.25938);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.67815);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.6412);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.50057);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.18928);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.90157);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.38908);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.23927);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.833524);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.129571);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.047869);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.729284);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.613801);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.403419);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.690148);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.019931);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3636719);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.4840697);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3756539);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.143378);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.575624);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2704367);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.36986);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.810367);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.035522);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.935269);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.420263);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.144614);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.309305);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.435905);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.389755);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.578322);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.164535);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9364724);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8564614);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.489591);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4137143);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4336309);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.571694);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7267484);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1413093);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2307378);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.17535);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.07678997);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4624534);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1660867);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1197701);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05033838);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1316759);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.07700002);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02909352);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(3,6.63316);
   hCCpi0inFV_stack_10->SetBinContent(4,25.36433);
   hCCpi0inFV_stack_10->SetBinContent(5,42.3065);
   hCCpi0inFV_stack_10->SetBinContent(6,58.37217);
   hCCpi0inFV_stack_10->SetBinContent(7,82.16956);
   hCCpi0inFV_stack_10->SetBinContent(8,74.61081);
   hCCpi0inFV_stack_10->SetBinContent(9,69.66238);
   hCCpi0inFV_stack_10->SetBinContent(10,49.04626);
   hCCpi0inFV_stack_10->SetBinContent(11,41.44626);
   hCCpi0inFV_stack_10->SetBinContent(12,31.50398);
   hCCpi0inFV_stack_10->SetBinContent(13,24.38795);
   hCCpi0inFV_stack_10->SetBinContent(14,15.53341);
   hCCpi0inFV_stack_10->SetBinContent(15,14.33283);
   hCCpi0inFV_stack_10->SetBinContent(16,8.097929);
   hCCpi0inFV_stack_10->SetBinContent(17,8.71736);
   hCCpi0inFV_stack_10->SetBinContent(18,4.641476);
   hCCpi0inFV_stack_10->SetBinContent(19,3.49212);
   hCCpi0inFV_stack_10->SetBinContent(20,3.572761);
   hCCpi0inFV_stack_10->SetBinContent(21,2.743872);
   hCCpi0inFV_stack_10->SetBinContent(22,2.486059);
   hCCpi0inFV_stack_10->SetBinContent(23,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(24,1.754141);
   hCCpi0inFV_stack_10->SetBinContent(25,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(26,5.318449);
   hCCpi0inFV_stack_10->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(3,1.301601);
   hCCpi0inFV_stack_10->SetBinError(4,2.47479);
   hCCpi0inFV_stack_10->SetBinError(5,3.228963);
   hCCpi0inFV_stack_10->SetBinError(6,3.789117);
   hCCpi0inFV_stack_10->SetBinError(7,4.512959);
   hCCpi0inFV_stack_10->SetBinError(8,4.330582);
   hCCpi0inFV_stack_10->SetBinError(9,4.16502);
   hCCpi0inFV_stack_10->SetBinError(10,3.520992);
   hCCpi0inFV_stack_10->SetBinError(11,3.298837);
   hCCpi0inFV_stack_10->SetBinError(12,2.844189);
   hCCpi0inFV_stack_10->SetBinError(13,2.54753);
   hCCpi0inFV_stack_10->SetBinError(14,1.981879);
   hCCpi0inFV_stack_10->SetBinError(15,1.935905);
   hCCpi0inFV_stack_10->SetBinError(16,1.41415);
   hCCpi0inFV_stack_10->SetBinError(17,1.438188);
   hCCpi0inFV_stack_10->SetBinError(18,1.074749);
   hCCpi0inFV_stack_10->SetBinError(19,0.9673821);
   hCCpi0inFV_stack_10->SetBinError(20,0.9209972);
   hCCpi0inFV_stack_10->SetBinError(21,0.7333373);
   hCCpi0inFV_stack_10->SetBinError(22,0.8559962);
   hCCpi0inFV_stack_10->SetBinError(23,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(24,0.7350354);
   hCCpi0inFV_stack_10->SetBinError(25,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(26,1.176946);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,10.07405);
   hNCinFV_stack_11->SetBinContent(4,24.12835);
   hNCinFV_stack_11->SetBinContent(5,24.26477);
   hNCinFV_stack_11->SetBinContent(6,23.07429);
   hNCinFV_stack_11->SetBinContent(7,26.63897);
   hNCinFV_stack_11->SetBinContent(8,18.96703);
   hNCinFV_stack_11->SetBinContent(9,19.42694);
   hNCinFV_stack_11->SetBinContent(10,16.87616);
   hNCinFV_stack_11->SetBinContent(11,12.65533);
   hNCinFV_stack_11->SetBinContent(12,12.14709);
   hNCinFV_stack_11->SetBinContent(13,9.70601);
   hNCinFV_stack_11->SetBinContent(14,8.812351);
   hNCinFV_stack_11->SetBinContent(15,6.245584);
   hNCinFV_stack_11->SetBinContent(16,4.188618);
   hNCinFV_stack_11->SetBinContent(17,2.152819);
   hNCinFV_stack_11->SetBinContent(18,3.267104);
   hNCinFV_stack_11->SetBinContent(19,1.11259);
   hNCinFV_stack_11->SetBinContent(20,1.904875);
   hNCinFV_stack_11->SetBinContent(21,1.574769);
   hNCinFV_stack_11->SetBinContent(22,0.5758606);
   hNCinFV_stack_11->SetBinContent(23,0.3900497);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,2.711846);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,1.570547);
   hNCinFV_stack_11->SetBinError(4,2.543002);
   hNCinFV_stack_11->SetBinError(5,2.469801);
   hNCinFV_stack_11->SetBinError(6,2.306308);
   hNCinFV_stack_11->SetBinError(7,2.524151);
   hNCinFV_stack_11->SetBinError(8,2.16073);
   hNCinFV_stack_11->SetBinError(9,2.308261);
   hNCinFV_stack_11->SetBinError(10,2.230467);
   hNCinFV_stack_11->SetBinError(11,1.934397);
   hNCinFV_stack_11->SetBinError(12,2.125241);
   hNCinFV_stack_11->SetBinError(13,1.656508);
   hNCinFV_stack_11->SetBinError(14,1.841533);
   hNCinFV_stack_11->SetBinError(15,1.574996);
   hNCinFV_stack_11->SetBinError(16,1.292619);
   hNCinFV_stack_11->SetBinError(17,0.8974641);
   hNCinFV_stack_11->SetBinError(18,1.249007);
   hNCinFV_stack_11->SetBinError(19,0.5107708);
   hNCinFV_stack_11->SetBinError(20,0.7412219);
   hNCinFV_stack_11->SetBinError(21,0.7482108);
   hNCinFV_stack_11->SetBinError(22,0.5758606);
   hNCinFV_stack_11->SetBinError(23,0.2758068);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.890637);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_12->SetBinContent(3,11.02518);
   hnumuCCinFV_stack_12->SetBinContent(4,37.74466);
   hnumuCCinFV_stack_12->SetBinContent(5,30.6786);
   hnumuCCinFV_stack_12->SetBinContent(6,30.90235);
   hnumuCCinFV_stack_12->SetBinContent(7,29.06398);
   hnumuCCinFV_stack_12->SetBinContent(8,21.05726);
   hnumuCCinFV_stack_12->SetBinContent(9,20.18267);
   hnumuCCinFV_stack_12->SetBinContent(10,16.46116);
   hnumuCCinFV_stack_12->SetBinContent(11,13.65602);
   hnumuCCinFV_stack_12->SetBinContent(12,9.63219);
   hnumuCCinFV_stack_12->SetBinContent(13,8.272318);
   hnumuCCinFV_stack_12->SetBinContent(14,7.864586);
   hnumuCCinFV_stack_12->SetBinContent(15,6.968158);
   hnumuCCinFV_stack_12->SetBinContent(16,5.149796);
   hnumuCCinFV_stack_12->SetBinContent(17,2.444031);
   hnumuCCinFV_stack_12->SetBinContent(18,2.817925);
   hnumuCCinFV_stack_12->SetBinContent(19,3.182484);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7817899);
   hnumuCCinFV_stack_12->SetBinContent(21,1.465526);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(23,1.57545);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(25,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(26,3.964501);
   hnumuCCinFV_stack_12->SetBinError(2,0.300021);
   hnumuCCinFV_stack_12->SetBinError(3,2.317745);
   hnumuCCinFV_stack_12->SetBinError(4,3.892023);
   hnumuCCinFV_stack_12->SetBinError(5,3.495332);
   hnumuCCinFV_stack_12->SetBinError(6,3.146285);
   hnumuCCinFV_stack_12->SetBinError(7,3.690428);
   hnumuCCinFV_stack_12->SetBinError(8,2.241233);
   hnumuCCinFV_stack_12->SetBinError(9,2.366596);
   hnumuCCinFV_stack_12->SetBinError(10,2.073663);
   hnumuCCinFV_stack_12->SetBinError(11,1.893932);
   hnumuCCinFV_stack_12->SetBinError(12,1.740755);
   hnumuCCinFV_stack_12->SetBinError(13,1.453107);
   hnumuCCinFV_stack_12->SetBinError(14,1.498019);
   hnumuCCinFV_stack_12->SetBinError(15,1.314277);
   hnumuCCinFV_stack_12->SetBinError(16,1.582195);
   hnumuCCinFV_stack_12->SetBinError(17,0.759648);
   hnumuCCinFV_stack_12->SetBinError(18,0.8407513);
   hnumuCCinFV_stack_12->SetBinError(19,0.913533);
   hnumuCCinFV_stack_12->SetBinError(20,0.3908977);
   hnumuCCinFV_stack_12->SetBinError(21,0.6209405);
   hnumuCCinFV_stack_12->SetBinError(22,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(23,0.6110294);
   hnumuCCinFV_stack_12->SetBinError(24,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(25,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(26,0.9617523);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,2.36194);
   hnueCCinFV_stack_13->SetBinContent(4,1.807917);
   hnueCCinFV_stack_13->SetBinContent(5,2.944628);
   hnueCCinFV_stack_13->SetBinContent(6,2.288841);
   hnueCCinFV_stack_13->SetBinContent(7,1.567402);
   hnueCCinFV_stack_13->SetBinContent(8,3.296589);
   hnueCCinFV_stack_13->SetBinContent(9,1.719491);
   hnueCCinFV_stack_13->SetBinContent(10,1.36614);
   hnueCCinFV_stack_13->SetBinContent(11,1.683804);
   hnueCCinFV_stack_13->SetBinContent(12,0.9185758);
   hnueCCinFV_stack_13->SetBinContent(13,0.2182412);
   hnueCCinFV_stack_13->SetBinContent(14,2.055656);
   hnueCCinFV_stack_13->SetBinContent(15,1.799794);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.0002655144);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.8615913);
   hnueCCinFV_stack_13->SetBinContent(21,1.101435);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,1.11635);
   hnueCCinFV_stack_13->SetBinContent(25,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(26,4.481021);
   hnueCCinFV_stack_13->SetBinError(3,1.426612);
   hnueCCinFV_stack_13->SetBinError(4,0.802031);
   hnueCCinFV_stack_13->SetBinError(5,0.9817506);
   hnueCCinFV_stack_13->SetBinError(6,0.8407892);
   hnueCCinFV_stack_13->SetBinError(7,0.5990443);
   hnueCCinFV_stack_13->SetBinError(8,0.9867104);
   hnueCCinFV_stack_13->SetBinError(9,0.6212512);
   hnueCCinFV_stack_13->SetBinError(10,0.7138187);
   hnueCCinFV_stack_13->SetBinError(11,1.167133);
   hnueCCinFV_stack_13->SetBinError(12,0.5773573);
   hnueCCinFV_stack_13->SetBinError(13,0.2182412);
   hnueCCinFV_stack_13->SetBinError(14,0.8306764);
   hnueCCinFV_stack_13->SetBinError(15,0.7106691);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.0002655145);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.4332246);
   hnueCCinFV_stack_13->SetBinError(21,0.8250083);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.8660013);
   hnueCCinFV_stack_13->SetBinError(25,0.4566905);
   hnueCCinFV_stack_13->SetBinError(26,1.79568);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__11->SetBinContent(2,10.99095);
   hmcerror__11->SetBinContent(3,260.5892);
   hmcerror__11->SetBinContent(4,600.8923);
   hmcerror__11->SetBinContent(5,609.4227);
   hmcerror__11->SetBinContent(6,507.2844);
   hmcerror__11->SetBinContent(7,411.9036);
   hmcerror__11->SetBinContent(8,287.9851);
   hmcerror__11->SetBinContent(9,248.813);
   hmcerror__11->SetBinContent(10,184.5163);
   hmcerror__11->SetBinContent(11,148.5922);
   hmcerror__11->SetBinContent(12,112.3943);
   hmcerror__11->SetBinContent(13,82.68406);
   hmcerror__11->SetBinContent(14,62.5422);
   hmcerror__11->SetBinContent(15,47.89839);
   hmcerror__11->SetBinContent(16,31.96848);
   hmcerror__11->SetBinContent(17,23.0498);
   hmcerror__11->SetBinContent(18,19.60752);
   hmcerror__11->SetBinContent(19,13.79864);
   hmcerror__11->SetBinContent(20,12.42719);
   hmcerror__11->SetBinContent(21,8.960176);
   hmcerror__11->SetBinContent(22,5.779814);
   hmcerror__11->SetBinContent(23,4.923977);
   hmcerror__11->SetBinContent(24,5.634151);
   hmcerror__11->SetBinContent(25,4.108377);
   hmcerror__11->SetBinContent(26,22.6931);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,9.578953);
   hmcerror__11->SetBinError(3,53.57585);
   hmcerror__11->SetBinError(4,160.2122);
   hmcerror__11->SetBinError(5,146.2414);
   hmcerror__11->SetBinError(6,120.6979);
   hmcerror__11->SetBinError(7,130.1979);
   hmcerror__11->SetBinError(8,106.3002);
   hmcerror__11->SetBinError(9,83.31198);
   hmcerror__11->SetBinError(10,49.58265);
   hmcerror__11->SetBinError(11,37.34441);
   hmcerror__11->SetBinError(12,37.06445);
   hmcerror__11->SetBinError(13,27.16962);
   hmcerror__11->SetBinError(14,28.51565);
   hmcerror__11->SetBinError(15,27.6552);
   hmcerror__11->SetBinError(16,21.86619);
   hmcerror__11->SetBinError(17,12.29079);
   hmcerror__11->SetBinError(18,11.6224);
   hmcerror__11->SetBinError(19,11.83706);
   hmcerror__11->SetBinError(20,11.03314);
   hmcerror__11->SetBinError(21,12.56789);
   hmcerror__11->SetBinError(22,7.100657);
   hmcerror__11->SetBinError(23,6.829092);
   hmcerror__11->SetBinError(24,14.70358);
   hmcerror__11->SetBinError(25,8.816704);
   hmcerror__11->SetBinError(26,14.26846);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3013[25] = {
   0,
   8,
   304,
   711,
   693,
   539,
   401,
   269,
   271,
   164,
   122,
   92,
   60,
   38,
   25,
   27,
   22,
   20,
   14,
   8,
   9,
   0,
   7,
   1,
   0};
   Double_t _felx3013[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3013[25] = {
   0,
   3.0307,
   17.4356,
   26.66458,
   26.32489,
   23.21637,
   20.02498,
   16.40122,
   16.46208,
   12.80625,
   11.04536,
   9.7138,
   7.8743,
   6.3013,
   5.1474,
   5.3414,
   4.8417,
   4.6266,
   3.9102,
   3.0307,
   3.19354,
   0,
   2.85954,
   1,
   0};
   Double_t _fehx3013[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3013[25] = {
   1.1478,
   2.7896,
   17.4356,
   26.66458,
   26.32489,
   23.21637,
   20.02498,
   16.40122,
   16.46208,
   12.80625,
   11.04536,
   9.513,
   7.6713,
   6.0955,
   4.9374,
   5.1322,
   4.6299,
   4.4133,
   3.6898,
   2.7896,
   2.9582,
   1.1478,
   2.61053,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1980);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(811.431);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3805.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.4","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.6","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.5","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  109.7","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1153.4","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  236.3","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 573.8","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 229.1","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 263.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.3","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3014[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3014[25] = {
   0,
   0.8715312,
   0.205595,
   0.2666238,
   0.2399671,
   0.2379295,
   0.3160882,
   0.3691169,
   0.3348377,
   0.268717,
   0.2513215,
   0.3297714,
   0.3285956,
   0.4559425,
   0.5773723,
   0.6839922,
   0.5332276,
   0.5927525,
   0.8578422,
   0.8878227,
   1.402639,
   1.228527,
   1.386906,
   2.609725,
   2.146031};
   Double_t _fehx3014[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3014[25] = {
   0,
   0.8715312,
   0.205595,
   0.2666238,
   0.2399671,
   0.2379295,
   0.3160882,
   0.3691169,
   0.3348377,
   0.268717,
   0.2513215,
   0.3297714,
   0.3285956,
   0.4559425,
   0.5773723,
   0.6839922,
   0.5332276,
   0.5927525,
   0.8578422,
   0.8878227,
   1.402639,
   1.228527,
   1.386906,
   2.609725,
   2.146031};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1980);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3015[25] = {
   0,
   0.2478397,
   0.1519893,
   0.1984856,
   0.2140447,
   0.2168467,
   0.2899928,
   0.3406452,
   0.2871924,
   0.2236143,
   0.2034755,
   0.233929,
   0.2318353,
   0.2286459,
   0.2571696,
   0.2689346,
   0.2406889,
   0.2765568,
   0.2554375,
   0.2834255,
   0.3833685,
   0.3902463,
   0.3744135,
   0.3677579,
   0.395116};
   Double_t _fehx3015[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3015[25] = {
   0,
   0.2478397,
   0.1519893,
   0.1984856,
   0.2140447,
   0.2168467,
   0.2899928,
   0.3406452,
   0.2871924,
   0.2236143,
   0.2034755,
   0.233929,
   0.2318353,
   0.2286459,
   0.2571696,
   0.2689346,
   0.2406889,
   0.2765568,
   0.2554375,
   0.2834255,
   0.3833685,
   0.3902463,
   0.3744135,
   0.3677579,
   0.395116};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1980);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3016[25] = {
   10,
   0.7278717,
   1.166587,
   1.18324,
   1.137142,
   1.06252,
   0.9735288,
   0.9340761,
   1.089171,
   0.8888106,
   0.8210392,
   0.8185465,
   0.7256538,
   0.6075897,
   0.5219382,
   0.8445819,
   0.9544553,
   1.020017,
   1.014593,
   0.6437499,
   1.004445,
   0,
   1.421615,
   0.177489,
   0};
   Double_t _felx3016[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3016[25] = {
   0,
   0.2757451,
   0.06690835,
   0.04437498,
   0.04319645,
   0.04576599,
   0.04861571,
   0.05695162,
   0.06616244,
   0.06940445,
   0.07433339,
   0.08642605,
   0.09523359,
   0.1007528,
   0.107465,
   0.1670833,
   0.2100539,
   0.2359605,
   0.2833757,
   0.2438766,
   0.3564149,
   0,
   0.5807379,
   0.177489,
   0};
   Double_t _fehx3016[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3016[25] = {
   0,
   0.2538089,
   0.06690835,
   0.04437498,
   0.04319645,
   0.04576599,
   0.04861571,
   0.05695162,
   0.06616244,
   0.06940445,
   0.07433339,
   0.08463949,
   0.09277846,
   0.09746219,
   0.1030807,
   0.1605394,
   0.2008651,
   0.225082,
   0.2674031,
   0.2244756,
   0.3301498,
   0.1985877,
   0.530167,
   0.2413336,
   0.2793804};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1980);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",25,0,1800);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(0,1,1800,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 23:09:34 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-0.4846154,-9.24,3.553846,1021.749);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__1->SetBinContent(1,73.07938);
   hmc__1->SetBinContent(2,229.3809);
   hmc__1->SetBinContent(3,335.5045);
   hmc__1->SetBinContent(4,415.4266);
   hmc__1->SetBinContent(5,450.4031);
   hmc__1->SetBinContent(6,460.5522);
   hmc__1->SetBinContent(7,442.408);
   hmc__1->SetBinContent(8,438.6471);
   hmc__1->SetBinContent(9,414.066);
   hmc__1->SetBinContent(10,380.4692);
   hmc__1->SetBinContent(11,350.2933);
   hmc__1->SetBinContent(12,324.5255);
   hmc__1->SetBinContent(13,329.7125);
   hmc__1->SetBinContent(14,265.2822);
   hmc__1->SetBinContent(15,265.1142);
   hmc__1->SetBinContent(16,252.5356);
   hmc__1->SetBinContent(17,227.4322);
   hmc__1->SetBinContent(18,190.7132);
   hmc__1->SetBinContent(19,201.9193);
   hmc__1->SetBinContent(20,184.1035);
   hmc__1->SetBinContent(21,179.8558);
   hmc__1->SetBinContent(22,151.9212);
   hmc__1->SetBinContent(23,116.4689);
   hmc__1->SetBinContent(24,75.68867);
   hmc__1->SetBinContent(25,23.6007);
   hmc__1->SetBinError(1,21.57261);
   hmc__1->SetBinError(2,53.03428);
   hmc__1->SetBinError(3,95.41228);
   hmc__1->SetBinError(4,102.0887);
   hmc__1->SetBinError(5,110.6772);
   hmc__1->SetBinError(6,122.4584);
   hmc__1->SetBinError(7,113.2684);
   hmc__1->SetBinError(8,113.0536);
   hmc__1->SetBinError(9,110.4178);
   hmc__1->SetBinError(10,103.2434);
   hmc__1->SetBinError(11,98.52315);
   hmc__1->SetBinError(12,92.4825);
   hmc__1->SetBinError(13,94.37804);
   hmc__1->SetBinError(14,71.88349);
   hmc__1->SetBinError(15,71.62641);
   hmc__1->SetBinError(16,70.40057);
   hmc__1->SetBinError(17,69.32289);
   hmc__1->SetBinError(18,55.15215);
   hmc__1->SetBinError(19,56.56315);
   hmc__1->SetBinError(20,54.21924);
   hmc__1->SetBinError(21,55.42218);
   hmc__1->SetBinError(22,45.77156);
   hmc__1->SetBinError(23,36.13694);
   hmc__1->SetBinError(24,22.57776);
   hmc__1->SetBinError(25,13.25979);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-9.24);
   hmc__1->SetMaximum(970.2);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,3.15);
   hs1_stack_1->SetMinimum(-1.479728e-08);
   hs1_stack_1->SetMaximum(483.5798);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.8480954);
   hbadmatch_stack_1->SetBinContent(2,3.037887);
   hbadmatch_stack_1->SetBinContent(3,8.496729);
   hbadmatch_stack_1->SetBinContent(4,9.08132);
   hbadmatch_stack_1->SetBinContent(5,10.33558);
   hbadmatch_stack_1->SetBinContent(6,10.36132);
   hbadmatch_stack_1->SetBinContent(7,8.02964);
   hbadmatch_stack_1->SetBinContent(8,13.0515);
   hbadmatch_stack_1->SetBinContent(9,12.68586);
   hbadmatch_stack_1->SetBinContent(10,12.13217);
   hbadmatch_stack_1->SetBinContent(11,11.02989);
   hbadmatch_stack_1->SetBinContent(12,8.246063);
   hbadmatch_stack_1->SetBinContent(13,9.035769);
   hbadmatch_stack_1->SetBinContent(14,4.04794);
   hbadmatch_stack_1->SetBinContent(15,6.883184);
   hbadmatch_stack_1->SetBinContent(16,10.04698);
   hbadmatch_stack_1->SetBinContent(17,6.855886);
   hbadmatch_stack_1->SetBinContent(18,4.450421);
   hbadmatch_stack_1->SetBinContent(19,4.792504);
   hbadmatch_stack_1->SetBinContent(20,5.799108);
   hbadmatch_stack_1->SetBinContent(21,4.96215);
   hbadmatch_stack_1->SetBinContent(22,3.941504);
   hbadmatch_stack_1->SetBinContent(23,1.797119);
   hbadmatch_stack_1->SetBinContent(24,3.314759);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6758179);
   hbadmatch_stack_1->SetBinError(2,0.8293232);
   hbadmatch_stack_1->SetBinError(3,1.67973);
   hbadmatch_stack_1->SetBinError(4,1.55179);
   hbadmatch_stack_1->SetBinError(5,1.83052);
   hbadmatch_stack_1->SetBinError(6,1.746514);
   hbadmatch_stack_1->SetBinError(7,1.391406);
   hbadmatch_stack_1->SetBinError(8,2.005392);
   hbadmatch_stack_1->SetBinError(9,2.358154);
   hbadmatch_stack_1->SetBinError(10,2.140479);
   hbadmatch_stack_1->SetBinError(11,1.823633);
   hbadmatch_stack_1->SetBinError(12,1.435645);
   hbadmatch_stack_1->SetBinError(13,1.546849);
   hbadmatch_stack_1->SetBinError(14,1.068192);
   hbadmatch_stack_1->SetBinError(15,1.450455);
   hbadmatch_stack_1->SetBinError(16,2.544386);
   hbadmatch_stack_1->SetBinError(17,2.048036);
   hbadmatch_stack_1->SetBinError(18,1.075643);
   hbadmatch_stack_1->SetBinError(19,1.200538);
   hbadmatch_stack_1->SetBinError(20,1.246562);
   hbadmatch_stack_1->SetBinError(21,1.099624);
   hbadmatch_stack_1->SetBinError(22,1.102083);
   hbadmatch_stack_1->SetBinError(23,0.7230999);
   hbadmatch_stack_1->SetBinError(24,1.19701);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,8.082849);
   hext_stack_2->SetBinContent(2,25.19138);
   hext_stack_2->SetBinContent(3,30.19585);
   hext_stack_2->SetBinContent(4,37.33581);
   hext_stack_2->SetBinContent(5,41.47083);
   hext_stack_2->SetBinContent(6,42.22772);
   hext_stack_2->SetBinContent(7,42.34305);
   hext_stack_2->SetBinContent(8,42.51898);
   hext_stack_2->SetBinContent(9,51.16565);
   hext_stack_2->SetBinContent(10,37.29115);
   hext_stack_2->SetBinContent(11,34.12616);
   hext_stack_2->SetBinContent(12,35.9991);
   hext_stack_2->SetBinContent(13,57.45487);
   hext_stack_2->SetBinContent(14,38.82369);
   hext_stack_2->SetBinContent(15,41.31513);
   hext_stack_2->SetBinContent(16,31.47631);
   hext_stack_2->SetBinContent(17,31.97506);
   hext_stack_2->SetBinContent(18,15.50373);
   hext_stack_2->SetBinContent(19,22.87594);
   hext_stack_2->SetBinContent(20,21.12986);
   hext_stack_2->SetBinContent(21,17.35954);
   hext_stack_2->SetBinContent(22,21.94741);
   hext_stack_2->SetBinContent(23,13.07731);
   hext_stack_2->SetBinContent(24,10.12737);
   hext_stack_2->SetBinContent(25,3.323403);
   hext_stack_2->SetBinError(1,1.976637);
   hext_stack_2->SetBinError(2,3.517149);
   hext_stack_2->SetBinError(3,3.634156);
   hext_stack_2->SetBinError(4,4.218476);
   hext_stack_2->SetBinError(5,4.215812);
   hext_stack_2->SetBinError(6,4.348052);
   hext_stack_2->SetBinError(7,4.277378);
   hext_stack_2->SetBinError(8,4.436268);
   hext_stack_2->SetBinError(9,4.906554);
   hext_stack_2->SetBinError(10,4.147395);
   hext_stack_2->SetBinError(11,3.733006);
   hext_stack_2->SetBinError(12,4.013391);
   hext_stack_2->SetBinError(13,5.372768);
   hext_stack_2->SetBinError(14,4.381618);
   hext_stack_2->SetBinError(15,4.536955);
   hext_stack_2->SetBinError(16,3.79035);
   hext_stack_2->SetBinError(17,3.748952);
   hext_stack_2->SetBinError(18,2.422383);
   hext_stack_2->SetBinError(19,3.322507);
   hext_stack_2->SetBinError(20,3.085745);
   hext_stack_2->SetBinError(21,2.962876);
   hext_stack_2->SetBinError(22,3.364224);
   hext_stack_2->SetBinError(23,2.571339);
   hext_stack_2->SetBinError(24,2.44909);
   hext_stack_2->SetBinError(25,1.20364);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.148777);
   hdirt_stack_3->SetBinContent(3,1.946594);
   hdirt_stack_3->SetBinContent(4,4.482754);
   hdirt_stack_3->SetBinContent(5,3.138892);
   hdirt_stack_3->SetBinContent(6,3.996392);
   hdirt_stack_3->SetBinContent(7,6.478747);
   hdirt_stack_3->SetBinContent(8,5.095844);
   hdirt_stack_3->SetBinContent(9,4.067333);
   hdirt_stack_3->SetBinContent(10,4.601989);
   hdirt_stack_3->SetBinContent(11,5.185753);
   hdirt_stack_3->SetBinContent(12,3.614266);
   hdirt_stack_3->SetBinContent(13,2.841028);
   hdirt_stack_3->SetBinContent(14,1.954039);
   hdirt_stack_3->SetBinContent(15,2.301589);
   hdirt_stack_3->SetBinContent(16,2.982083);
   hdirt_stack_3->SetBinContent(17,2.347146);
   hdirt_stack_3->SetBinContent(18,3.041704);
   hdirt_stack_3->SetBinContent(19,1.754696);
   hdirt_stack_3->SetBinContent(20,4.666041);
   hdirt_stack_3->SetBinContent(21,1.456941);
   hdirt_stack_3->SetBinContent(22,1.540569);
   hdirt_stack_3->SetBinContent(23,1.600314);
   hdirt_stack_3->SetBinContent(24,1.390309);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.7544765);
   hdirt_stack_3->SetBinError(3,0.7461006);
   hdirt_stack_3->SetBinError(4,1.165831);
   hdirt_stack_3->SetBinError(5,0.859738);
   hdirt_stack_3->SetBinError(6,1.039541);
   hdirt_stack_3->SetBinError(7,1.336705);
   hdirt_stack_3->SetBinError(8,1.469668);
   hdirt_stack_3->SetBinError(9,0.9916598);
   hdirt_stack_3->SetBinError(10,1.077192);
   hdirt_stack_3->SetBinError(11,1.704907);
   hdirt_stack_3->SetBinError(12,0.9534401);
   hdirt_stack_3->SetBinError(13,0.8610248);
   hdirt_stack_3->SetBinError(14,0.7456888);
   hdirt_stack_3->SetBinError(15,0.7715469);
   hdirt_stack_3->SetBinError(16,0.8775037);
   hdirt_stack_3->SetBinError(17,0.8275196);
   hdirt_stack_3->SetBinError(18,0.8736673);
   hdirt_stack_3->SetBinError(19,0.5940569);
   hdirt_stack_3->SetBinError(20,1.291303);
   hdirt_stack_3->SetBinError(21,0.5800707);
   hdirt_stack_3->SetBinError(22,0.5534115);
   hdirt_stack_3->SetBinError(23,0.706215);
   hdirt_stack_3->SetBinError(24,0.6022451);
   hdirt_stack_3->SetBinError(25,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,7.119573);
   houtFV_stack_4->SetBinContent(2,18.70701);
   houtFV_stack_4->SetBinContent(3,33.14173);
   houtFV_stack_4->SetBinContent(4,39.81356);
   houtFV_stack_4->SetBinContent(5,47.68721);
   houtFV_stack_4->SetBinContent(6,44.21532);
   houtFV_stack_4->SetBinContent(7,42.40398);
   houtFV_stack_4->SetBinContent(8,43.94969);
   houtFV_stack_4->SetBinContent(9,36.82146);
   houtFV_stack_4->SetBinContent(10,33.64444);
   houtFV_stack_4->SetBinContent(11,30.80353);
   houtFV_stack_4->SetBinContent(12,28.87869);
   houtFV_stack_4->SetBinContent(13,26.95201);
   houtFV_stack_4->SetBinContent(14,24.74274);
   houtFV_stack_4->SetBinContent(15,25.27701);
   houtFV_stack_4->SetBinContent(16,22.71951);
   houtFV_stack_4->SetBinContent(17,25.56308);
   houtFV_stack_4->SetBinContent(18,23.49852);
   houtFV_stack_4->SetBinContent(19,25.32026);
   houtFV_stack_4->SetBinContent(20,25.76336);
   houtFV_stack_4->SetBinContent(21,28.24818);
   houtFV_stack_4->SetBinContent(22,16.05526);
   houtFV_stack_4->SetBinContent(23,13.48886);
   houtFV_stack_4->SetBinContent(24,11.81089);
   houtFV_stack_4->SetBinContent(25,3.186088);
   houtFV_stack_4->SetBinError(1,1.355992);
   houtFV_stack_4->SetBinError(2,2.207942);
   houtFV_stack_4->SetBinError(3,2.946782);
   houtFV_stack_4->SetBinError(4,3.227051);
   houtFV_stack_4->SetBinError(5,3.559504);
   houtFV_stack_4->SetBinError(6,3.311017);
   houtFV_stack_4->SetBinError(7,3.265914);
   houtFV_stack_4->SetBinError(8,3.32542);
   houtFV_stack_4->SetBinError(9,3.058752);
   houtFV_stack_4->SetBinError(10,2.926095);
   houtFV_stack_4->SetBinError(11,2.936367);
   houtFV_stack_4->SetBinError(12,2.670041);
   houtFV_stack_4->SetBinError(13,2.839154);
   houtFV_stack_4->SetBinError(14,2.46196);
   houtFV_stack_4->SetBinError(15,2.494625);
   houtFV_stack_4->SetBinError(16,2.306455);
   houtFV_stack_4->SetBinError(17,2.521205);
   houtFV_stack_4->SetBinError(18,2.372902);
   houtFV_stack_4->SetBinError(19,2.50186);
   houtFV_stack_4->SetBinError(20,2.462926);
   houtFV_stack_4->SetBinError(21,2.723575);
   houtFV_stack_4->SetBinError(22,1.970382);
   houtFV_stack_4->SetBinError(23,1.797482);
   houtFV_stack_4->SetBinError(24,1.789916);
   houtFV_stack_4->SetBinError(25,0.8974694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.026099);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,8.715149);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.753399);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.80384);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.01928);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.687688);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.665822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.611242);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.363706);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.982253);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.082088);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.220633);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.07944);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.575455);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.914528);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.552107);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.175791);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.999523);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.563654);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.46049);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.245671);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.969653);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.035759);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.498292);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6095284);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6368542);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.261999);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.089506);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.249682);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.267319);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.167806);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.01099);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.885176);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.016669);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7644826);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9458205);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6374142);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6448317);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5634027);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5429131);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5933727);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5086866);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6243723);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4672303);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4724165);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4117928);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5494288);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5009696);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4721422);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3124638);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.07974695);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.323362);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.218295);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.41042);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8748461);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.431607);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.423069);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.33693);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.685564);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.176728);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.115307);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.176977);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6674927);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.143529);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3630362);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9845167);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.419666);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5143466);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5956273);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5311694);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5782042);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5617435);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1020084);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1214816);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.04617032);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04850399);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1030819);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3964734);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3139152);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2469149);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3456664);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.423194);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4046757);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2049112);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2979235);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2939144);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2747887);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2115847);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3671047);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1023113);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3162361);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1298662);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1844731);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2112097);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1860111);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2180711);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1909382);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0418589);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06045541);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03357482);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.35306);
   hNCpi0inFVres_stack_7->SetBinContent(2,64.6336);
   hNCpi0inFVres_stack_7->SetBinContent(3,104.7855);
   hNCpi0inFVres_stack_7->SetBinContent(4,134.3003);
   hNCpi0inFVres_stack_7->SetBinContent(5,146.1143);
   hNCpi0inFVres_stack_7->SetBinContent(6,149.6548);
   hNCpi0inFVres_stack_7->SetBinContent(7,150.0693);
   hNCpi0inFVres_stack_7->SetBinContent(8,147.5544);
   hNCpi0inFVres_stack_7->SetBinContent(9,133.9702);
   hNCpi0inFVres_stack_7->SetBinContent(10,130.4457);
   hNCpi0inFVres_stack_7->SetBinContent(11,116.4879);
   hNCpi0inFVres_stack_7->SetBinContent(12,110.2131);
   hNCpi0inFVres_stack_7->SetBinContent(13,102.7833);
   hNCpi0inFVres_stack_7->SetBinContent(14,92.81772);
   hNCpi0inFVres_stack_7->SetBinContent(15,83.96126);
   hNCpi0inFVres_stack_7->SetBinContent(16,77.56742);
   hNCpi0inFVres_stack_7->SetBinContent(17,67.67237);
   hNCpi0inFVres_stack_7->SetBinContent(18,68.55);
   hNCpi0inFVres_stack_7->SetBinContent(19,62.39936);
   hNCpi0inFVres_stack_7->SetBinContent(20,56.44677);
   hNCpi0inFVres_stack_7->SetBinContent(21,54.41684);
   hNCpi0inFVres_stack_7->SetBinContent(22,43.70708);
   hNCpi0inFVres_stack_7->SetBinContent(23,28.98242);
   hNCpi0inFVres_stack_7->SetBinContent(24,17.39704);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.881334);
   hNCpi0inFVres_stack_7->SetBinError(1,1.474958);
   hNCpi0inFVres_stack_7->SetBinError(2,2.659699);
   hNCpi0inFVres_stack_7->SetBinError(3,3.514771);
   hNCpi0inFVres_stack_7->SetBinError(4,4.050401);
   hNCpi0inFVres_stack_7->SetBinError(5,3.969885);
   hNCpi0inFVres_stack_7->SetBinError(6,4.022079);
   hNCpi0inFVres_stack_7->SetBinError(7,4.006994);
   hNCpi0inFVres_stack_7->SetBinError(8,4.012955);
   hNCpi0inFVres_stack_7->SetBinError(9,3.701748);
   hNCpi0inFVres_stack_7->SetBinError(10,3.640197);
   hNCpi0inFVres_stack_7->SetBinError(11,3.376449);
   hNCpi0inFVres_stack_7->SetBinError(12,3.320288);
   hNCpi0inFVres_stack_7->SetBinError(13,3.207651);
   hNCpi0inFVres_stack_7->SetBinError(14,3.131736);
   hNCpi0inFVres_stack_7->SetBinError(15,3.103907);
   hNCpi0inFVres_stack_7->SetBinError(16,2.823478);
   hNCpi0inFVres_stack_7->SetBinError(17,2.517059);
   hNCpi0inFVres_stack_7->SetBinError(18,2.716988);
   hNCpi0inFVres_stack_7->SetBinError(19,2.56836);
   hNCpi0inFVres_stack_7->SetBinError(20,2.327979);
   hNCpi0inFVres_stack_7->SetBinError(21,2.396767);
   hNCpi0inFVres_stack_7->SetBinError(22,2.211939);
   hNCpi0inFVres_stack_7->SetBinError(23,1.773406);
   hNCpi0inFVres_stack_7->SetBinError(24,1.284524);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9404901);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.252965);
   hNCpi0inFVdis_stack_8->SetBinContent(2,21.12853);
   hNCpi0inFVdis_stack_8->SetBinContent(3,29.95799);
   hNCpi0inFVdis_stack_8->SetBinContent(4,32.3215);
   hNCpi0inFVdis_stack_8->SetBinContent(5,34.18535);
   hNCpi0inFVdis_stack_8->SetBinContent(6,38.12139);
   hNCpi0inFVdis_stack_8->SetBinContent(7,35.70058);
   hNCpi0inFVdis_stack_8->SetBinContent(8,30.96309);
   hNCpi0inFVdis_stack_8->SetBinContent(9,30.25895);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.10796);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.79576);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.36592);
   hNCpi0inFVdis_stack_8->SetBinContent(13,19.87429);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.73878);
   hNCpi0inFVdis_stack_8->SetBinContent(15,17.03077);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.3852);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.30547);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.32925);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.56241);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.14011);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.99571);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.29078);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.877147);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.372088);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.266449);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.064967);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.759756);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.133598);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.041066);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.133827);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.346885);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.104369);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.920565);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.918695);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.619206);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.493043);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.468385);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.616625);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.425697);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.343735);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.154704);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.979508);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.04632);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.183155);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9795338);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9935862);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.275176);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7026841);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5523946);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2454025);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.0587264);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.07778011);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1006257);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1660867);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05416238);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1579766);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1026699);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02952655);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1839615);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04441126);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04914823);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.0687679);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1316759);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03128343);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1129643);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.07066231);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02165026);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1352255);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,12.64655);
   hCCpi0inFV_stack_10->SetBinContent(2,38.36976);
   hCCpi0inFV_stack_10->SetBinContent(3,51.76092);
   hCCpi0inFV_stack_10->SetBinContent(4,65.41911);
   hCCpi0inFV_stack_10->SetBinContent(5,77.64447);
   hCCpi0inFV_stack_10->SetBinContent(6,75.97932);
   hCCpi0inFV_stack_10->SetBinContent(7,70.26731);
   hCCpi0inFV_stack_10->SetBinContent(8,75.9553);
   hCCpi0inFV_stack_10->SetBinContent(9,69.19328);
   hCCpi0inFV_stack_10->SetBinContent(10,64.71848);
   hCCpi0inFV_stack_10->SetBinContent(11,56.96239);
   hCCpi0inFV_stack_10->SetBinContent(12,51.91518);
   hCCpi0inFV_stack_10->SetBinContent(13,43.67961);
   hCCpi0inFV_stack_10->SetBinContent(14,39.34286);
   hCCpi0inFV_stack_10->SetBinContent(15,42.15199);
   hCCpi0inFV_stack_10->SetBinContent(16,37.17944);
   hCCpi0inFV_stack_10->SetBinContent(17,39.48443);
   hCCpi0inFV_stack_10->SetBinContent(18,29.16646);
   hCCpi0inFV_stack_10->SetBinContent(19,38.09638);
   hCCpi0inFV_stack_10->SetBinContent(20,26.87505);
   hCCpi0inFV_stack_10->SetBinContent(21,26.77251);
   hCCpi0inFV_stack_10->SetBinContent(22,24.85176);
   hCCpi0inFV_stack_10->SetBinContent(23,21.27103);
   hCCpi0inFV_stack_10->SetBinContent(24,11.45384);
   hCCpi0inFV_stack_10->SetBinContent(25,3.859685);
   hCCpi0inFV_stack_10->SetBinError(1,1.742798);
   hCCpi0inFV_stack_10->SetBinError(2,3.150244);
   hCCpi0inFV_stack_10->SetBinError(3,3.556412);
   hCCpi0inFV_stack_10->SetBinError(4,4.072935);
   hCCpi0inFV_stack_10->SetBinError(5,4.454948);
   hCCpi0inFV_stack_10->SetBinError(6,4.348702);
   hCCpi0inFV_stack_10->SetBinError(7,4.192648);
   hCCpi0inFV_stack_10->SetBinError(8,4.397993);
   hCCpi0inFV_stack_10->SetBinError(9,4.199445);
   hCCpi0inFV_stack_10->SetBinError(10,4.093216);
   hCCpi0inFV_stack_10->SetBinError(11,3.758258);
   hCCpi0inFV_stack_10->SetBinError(12,3.626383);
   hCCpi0inFV_stack_10->SetBinError(13,3.299697);
   hCCpi0inFV_stack_10->SetBinError(14,3.165939);
   hCCpi0inFV_stack_10->SetBinError(15,3.26846);
   hCCpi0inFV_stack_10->SetBinError(16,3.047835);
   hCCpi0inFV_stack_10->SetBinError(17,3.11415);
   hCCpi0inFV_stack_10->SetBinError(18,2.728413);
   hCCpi0inFV_stack_10->SetBinError(19,3.135535);
   hCCpi0inFV_stack_10->SetBinError(20,2.542748);
   hCCpi0inFV_stack_10->SetBinError(21,2.507602);
   hCCpi0inFV_stack_10->SetBinError(22,2.500639);
   hCCpi0inFV_stack_10->SetBinError(23,2.342329);
   hCCpi0inFV_stack_10->SetBinError(24,1.71893);
   hCCpi0inFV_stack_10->SetBinError(25,1.001141);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,6.143381);
   hNCinFV_stack_11->SetBinContent(2,19.87122);
   hNCinFV_stack_11->SetBinContent(3,29.45425);
   hNCinFV_stack_11->SetBinContent(4,35.34786);
   hNCinFV_stack_11->SetBinContent(5,31.94789);
   hNCinFV_stack_11->SetBinContent(6,34.10799);
   hNCinFV_stack_11->SetBinContent(7,35.25299);
   hNCinFV_stack_11->SetBinContent(8,27.24419);
   hNCinFV_stack_11->SetBinContent(9,26.90615);
   hNCinFV_stack_11->SetBinContent(10,29.60448);
   hNCinFV_stack_11->SetBinContent(11,26.64494);
   hNCinFV_stack_11->SetBinContent(12,22.59824);
   hNCinFV_stack_11->SetBinContent(13,24.46164);
   hNCinFV_stack_11->SetBinContent(14,17.11052);
   hNCinFV_stack_11->SetBinContent(15,22.39297);
   hNCinFV_stack_11->SetBinContent(16,19.61768);
   hNCinFV_stack_11->SetBinContent(17,17.71536);
   hNCinFV_stack_11->SetBinContent(18,16.11025);
   hNCinFV_stack_11->SetBinContent(19,15.37514);
   hNCinFV_stack_11->SetBinContent(20,13.67953);
   hNCinFV_stack_11->SetBinContent(21,13.54913);
   hNCinFV_stack_11->SetBinContent(22,12.23303);
   hNCinFV_stack_11->SetBinContent(23,8.790522);
   hNCinFV_stack_11->SetBinContent(24,7.334316);
   hNCinFV_stack_11->SetBinContent(25,1.747242);
   hNCinFV_stack_11->SetBinError(1,1.508142);
   hNCinFV_stack_11->SetBinError(2,2.777961);
   hNCinFV_stack_11->SetBinError(3,3.023941);
   hNCinFV_stack_11->SetBinError(4,3.196886);
   hNCinFV_stack_11->SetBinError(5,3.02814);
   hNCinFV_stack_11->SetBinError(6,3.239081);
   hNCinFV_stack_11->SetBinError(7,3.331024);
   hNCinFV_stack_11->SetBinError(8,2.73066);
   hNCinFV_stack_11->SetBinError(9,2.734961);
   hNCinFV_stack_11->SetBinError(10,3.009936);
   hNCinFV_stack_11->SetBinError(11,2.714765);
   hNCinFV_stack_11->SetBinError(12,2.562017);
   hNCinFV_stack_11->SetBinError(13,2.495515);
   hNCinFV_stack_11->SetBinError(14,2.04691);
   hNCinFV_stack_11->SetBinError(15,2.623763);
   hNCinFV_stack_11->SetBinError(16,2.381881);
   hNCinFV_stack_11->SetBinError(17,2.198411);
   hNCinFV_stack_11->SetBinError(18,2.243964);
   hNCinFV_stack_11->SetBinError(19,2.334295);
   hNCinFV_stack_11->SetBinError(20,1.998239);
   hNCinFV_stack_11->SetBinError(21,1.970031);
   hNCinFV_stack_11->SetBinError(22,1.794991);
   hNCinFV_stack_11->SetBinError(23,1.517357);
   hNCinFV_stack_11->SetBinError(24,1.466851);
   hNCinFV_stack_11->SetBinError(25,0.5631252);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.973549);
   hnumuCCinFV_stack_12->SetBinContent(2,22.29679);
   hnumuCCinFV_stack_12->SetBinContent(3,29.95272);
   hnumuCCinFV_stack_12->SetBinContent(4,39.08357);
   hnumuCCinFV_stack_12->SetBinContent(5,40.89031);
   hnumuCCinFV_stack_12->SetBinContent(6,46.27742);
   hnumuCCinFV_stack_12->SetBinContent(7,38.29502);
   hnumuCCinFV_stack_12->SetBinContent(8,41.0684);
   hnumuCCinFV_stack_12->SetBinContent(9,39.79239);
   hnumuCCinFV_stack_12->SetBinContent(10,33.7243);
   hnumuCCinFV_stack_12->SetBinContent(11,39.63797);
   hnumuCCinFV_stack_12->SetBinContent(12,36.4381);
   hnumuCCinFV_stack_12->SetBinContent(13,38.01126);
   hnumuCCinFV_stack_12->SetBinContent(14,24.03796);
   hnumuCCinFV_stack_12->SetBinContent(15,20.06978);
   hnumuCCinFV_stack_12->SetBinContent(16,30.44065);
   hnumuCCinFV_stack_12->SetBinContent(17,21.1058);
   hnumuCCinFV_stack_12->SetBinContent(18,15.74192);
   hnumuCCinFV_stack_12->SetBinContent(19,15.10049);
   hnumuCCinFV_stack_12->SetBinContent(20,15.98379);
   hnumuCCinFV_stack_12->SetBinContent(21,18.84313);
   hnumuCCinFV_stack_12->SetBinContent(22,14.61004);
   hnumuCCinFV_stack_12->SetBinContent(23,17.8357);
   hnumuCCinFV_stack_12->SetBinContent(24,7.204201);
   hnumuCCinFV_stack_12->SetBinContent(25,2.346005);
   hnumuCCinFV_stack_12->SetBinError(1,1.15942);
   hnumuCCinFV_stack_12->SetBinError(2,2.467709);
   hnumuCCinFV_stack_12->SetBinError(3,3.016871);
   hnumuCCinFV_stack_12->SetBinError(4,3.502178);
   hnumuCCinFV_stack_12->SetBinError(5,3.848873);
   hnumuCCinFV_stack_12->SetBinError(6,4.79334);
   hnumuCCinFV_stack_12->SetBinError(7,3.699993);
   hnumuCCinFV_stack_12->SetBinError(8,3.392962);
   hnumuCCinFV_stack_12->SetBinError(9,3.552946);
   hnumuCCinFV_stack_12->SetBinError(10,3.457714);
   hnumuCCinFV_stack_12->SetBinError(11,3.686261);
   hnumuCCinFV_stack_12->SetBinError(12,3.384608);
   hnumuCCinFV_stack_12->SetBinError(13,3.623903);
   hnumuCCinFV_stack_12->SetBinError(14,2.867872);
   hnumuCCinFV_stack_12->SetBinError(15,2.358609);
   hnumuCCinFV_stack_12->SetBinError(16,3.363427);
   hnumuCCinFV_stack_12->SetBinError(17,2.430185);
   hnumuCCinFV_stack_12->SetBinError(18,2.631406);
   hnumuCCinFV_stack_12->SetBinError(19,2.139147);
   hnumuCCinFV_stack_12->SetBinError(20,2.085739);
   hnumuCCinFV_stack_12->SetBinError(21,2.406721);
   hnumuCCinFV_stack_12->SetBinError(22,1.980558);
   hnumuCCinFV_stack_12->SetBinError(23,3.161558);
   hnumuCCinFV_stack_12->SetBinError(24,1.487347);
   hnumuCCinFV_stack_12->SetBinError(25,0.7795063);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.294345);
   hnueCCinFV_stack_13->SetBinContent(2,4.957469);
   hnueCCinFV_stack_13->SetBinContent(3,4.781721);
   hnueCCinFV_stack_13->SetBinContent(4,3.948783);
   hnueCCinFV_stack_13->SetBinContent(5,3.993495);
   hnueCCinFV_stack_13->SetBinContent(6,4.46222);
   hnueCCinFV_stack_13->SetBinContent(7,3.312353);
   hnueCCinFV_stack_13->SetBinContent(8,3.243412);
   hnueCCinFV_stack_13->SetBinContent(9,0.9975166);
   hnueCCinFV_stack_13->SetBinContent(10,4.020818);
   hnueCCinFV_stack_13->SetBinContent(11,1.318913);
   hnueCCinFV_stack_13->SetBinContent(12,0.8592273);
   hnueCCinFV_stack_13->SetBinContent(13,0.8423215);
   hnueCCinFV_stack_13->SetBinContent(14,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(15,1.43729);
   hnueCCinFV_stack_13->SetBinContent(16,1.399707);
   hnueCCinFV_stack_13->SetBinContent(17,2.774538);
   hnueCCinFV_stack_13->SetBinContent(18,0.791415);
   hnueCCinFV_stack_13->SetBinContent(19,1.467138);
   hnueCCinFV_stack_13->SetBinContent(20,1.61252);
   hnueCCinFV_stack_13->SetBinContent(21,1.300116);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.6107);
   hnueCCinFV_stack_13->SetBinContent(24,0.6640827);
   hnueCCinFV_stack_13->SetBinError(1,0.8659304);
   hnueCCinFV_stack_13->SetBinError(2,1.457215);
   hnueCCinFV_stack_13->SetBinError(3,1.783091);
   hnueCCinFV_stack_13->SetBinError(4,1.144301);
   hnueCCinFV_stack_13->SetBinError(5,1.406886);
   hnueCCinFV_stack_13->SetBinError(6,1.568006);
   hnueCCinFV_stack_13->SetBinError(7,0.9309055);
   hnueCCinFV_stack_13->SetBinError(8,1.020493);
   hnueCCinFV_stack_13->SetBinError(9,0.5317513);
   hnueCCinFV_stack_13->SetBinError(10,1.511796);
   hnueCCinFV_stack_13->SetBinError(11,0.6073901);
   hnueCCinFV_stack_13->SetBinError(12,0.5193443);
   hnueCCinFV_stack_13->SetBinError(13,0.4241184);
   hnueCCinFV_stack_13->SetBinError(14,0.48078);
   hnueCCinFV_stack_13->SetBinError(15,0.6876278);
   hnueCCinFV_stack_13->SetBinError(16,0.6455304);
   hnueCCinFV_stack_13->SetBinError(17,1.683125);
   hnueCCinFV_stack_13->SetBinError(18,0.6263902);
   hnueCCinFV_stack_13->SetBinError(19,0.7675731);
   hnueCCinFV_stack_13->SetBinError(20,0.6916619);
   hnueCCinFV_stack_13->SetBinError(21,0.5336351);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.715584);
   hnueCCinFV_stack_13->SetBinError(24,0.3881319);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__2->SetBinContent(1,73.07938);
   hmcerror__2->SetBinContent(2,229.3809);
   hmcerror__2->SetBinContent(3,335.5045);
   hmcerror__2->SetBinContent(4,415.4266);
   hmcerror__2->SetBinContent(5,450.4031);
   hmcerror__2->SetBinContent(6,460.5522);
   hmcerror__2->SetBinContent(7,442.408);
   hmcerror__2->SetBinContent(8,438.6471);
   hmcerror__2->SetBinContent(9,414.066);
   hmcerror__2->SetBinContent(10,380.4692);
   hmcerror__2->SetBinContent(11,350.2933);
   hmcerror__2->SetBinContent(12,324.5255);
   hmcerror__2->SetBinContent(13,329.7125);
   hmcerror__2->SetBinContent(14,265.2822);
   hmcerror__2->SetBinContent(15,265.1142);
   hmcerror__2->SetBinContent(16,252.5356);
   hmcerror__2->SetBinContent(17,227.4322);
   hmcerror__2->SetBinContent(18,190.7132);
   hmcerror__2->SetBinContent(19,201.9193);
   hmcerror__2->SetBinContent(20,184.1035);
   hmcerror__2->SetBinContent(21,179.8558);
   hmcerror__2->SetBinContent(22,151.9212);
   hmcerror__2->SetBinContent(23,116.4689);
   hmcerror__2->SetBinContent(24,75.68867);
   hmcerror__2->SetBinContent(25,23.6007);
   hmcerror__2->SetBinError(1,21.57261);
   hmcerror__2->SetBinError(2,53.03428);
   hmcerror__2->SetBinError(3,95.41228);
   hmcerror__2->SetBinError(4,102.0887);
   hmcerror__2->SetBinError(5,110.6772);
   hmcerror__2->SetBinError(6,122.4584);
   hmcerror__2->SetBinError(7,113.2684);
   hmcerror__2->SetBinError(8,113.0536);
   hmcerror__2->SetBinError(9,110.4178);
   hmcerror__2->SetBinError(10,103.2434);
   hmcerror__2->SetBinError(11,98.52315);
   hmcerror__2->SetBinError(12,92.4825);
   hmcerror__2->SetBinError(13,94.37804);
   hmcerror__2->SetBinError(14,71.88349);
   hmcerror__2->SetBinError(15,71.62641);
   hmcerror__2->SetBinError(16,70.40057);
   hmcerror__2->SetBinError(17,69.32289);
   hmcerror__2->SetBinError(18,55.15215);
   hmcerror__2->SetBinError(19,56.56315);
   hmcerror__2->SetBinError(20,54.21924);
   hmcerror__2->SetBinError(21,55.42218);
   hmcerror__2->SetBinError(22,45.77156);
   hmcerror__2->SetBinError(23,36.13694);
   hmcerror__2->SetBinError(24,22.57776);
   hmcerror__2->SetBinError(25,13.25979);
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
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3001[25] = {
   76,
   227,
   342,
   417,
   462,
   392,
   419,
   394,
   370,
   340,
   329,
   287,
   300,
   266,
   254,
   234,
   224,
   185,
   187,
   182,
   185,
   153,
   115,
   75,
   29};
   Double_t _felx3001[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3001[25] = {
   8.8425,
   15.06652,
   18.49324,
   20.42058,
   21.49419,
   19.79899,
   20.46949,
   19.84943,
   19.23538,
   18.43909,
   18.13836,
   16.94107,
   17.32051,
   16.30951,
   15.93738,
   15.29706,
   14.96663,
   13.60147,
   13.67479,
   13.49074,
   13.60147,
   12.36932,
   10.72381,
   8.7852,
   5.5285};
   Double_t _fehx3001[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3001[25] = {
   8.6406,
   15.06652,
   18.49324,
   20.42058,
   21.49419,
   19.79899,
   20.46949,
   19.84943,
   19.23538,
   18.43909,
   18.13836,
   16.94107,
   17.32051,
   16.30951,
   15.93738,
   15.29706,
   14.96663,
   13.60147,
   13.67479,
   13.49074,
   13.60147,
   12.36932,
   10.72381,
   8.5831,
   5.3201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,3.465);
   Graph_Graph3001->SetMinimum(21.12435);
   Graph_Graph3001->SetMaximum(529.4965);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.2/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
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
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3002[25] = {
   0.2951942,
   0.2312061,
   0.2843845,
   0.2457442,
   0.2457293,
   0.2658948,
   0.2560271,
   0.2577325,
   0.2666671,
   0.271358,
   0.281259,
   0.2849776,
   0.2862434,
   0.2709699,
   0.2701719,
   0.2787749,
   0.3048068,
   0.2891889,
   0.2801275,
   0.2945042,
   0.3081478,
   0.3012848,
   0.3102712,
   0.2982978,
   0.5618388};
   Double_t _fehx3002[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3002[25] = {
   0.2951942,
   0.2312061,
   0.2843845,
   0.2457442,
   0.2457293,
   0.2658948,
   0.2560271,
   0.2577325,
   0.2666671,
   0.271358,
   0.281259,
   0.2849776,
   0.2862434,
   0.2709699,
   0.2701719,
   0.2787749,
   0.3048068,
   0.2891889,
   0.2801275,
   0.2945042,
   0.3081478,
   0.3012848,
   0.3102712,
   0.2982978,
   0.5618388};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,3.465);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
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
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3003[25] = {
   0.2137597,
   0.1997606,
   0.2241091,
   0.2213246,
   0.2267168,
   0.2396978,
   0.2424212,
   0.2464981,
   0.2506872,
   0.2587885,
   0.2680952,
   0.2608337,
   0.2613125,
   0.2556305,
   0.2532165,
   0.2586176,
   0.2564712,
   0.267526,
   0.2561291,
   0.2612553,
   0.2501357,
   0.2275512,
   0.2387814,
   0.2199871,
   0.2913931};
   Double_t _fehx3003[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3003[25] = {
   0.2137597,
   0.1997606,
   0.2241091,
   0.2213246,
   0.2267168,
   0.2396978,
   0.2424212,
   0.2464981,
   0.2506872,
   0.2587885,
   0.2680952,
   0.2608337,
   0.2613125,
   0.2556305,
   0.2532165,
   0.2586176,
   0.2564712,
   0.267526,
   0.2561291,
   0.2612553,
   0.2501357,
   0.2275512,
   0.2387814,
   0.2199871,
   0.2913931};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,3.465);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3004[25] = {
   1.039965,
   0.9896202,
   1.019361,
   1.003787,
   1.025748,
   0.8511522,
   0.9470897,
   0.8982164,
   0.8935774,
   0.8936334,
   0.939213,
   0.8843681,
   0.9098835,
   1.002706,
   0.9580776,
   0.9266022,
   0.9849088,
   0.9700428,
   0.9261126,
   0.9885744,
   1.028602,
   1.007101,
   0.9873882,
   0.9909013,
   1.228777};
   Double_t _felx3004[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3004[25] = {
   0.1209986,
   0.0656834,
   0.0551207,
   0.04915568,
   0.04772211,
   0.04298968,
   0.04626836,
   0.04525149,
   0.04645488,
   0.04846407,
   0.05178049,
   0.0522026,
   0.05253215,
   0.06147985,
   0.06011513,
   0.06057388,
   0.06580698,
   0.07131896,
   0.06772406,
   0.07327801,
   0.07562429,
   0.08141927,
   0.09207442,
   0.1160702,
   0.2342516};
   Double_t _fehx3004[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3004[25] = {
   0.1182358,
   0.0656834,
   0.0551207,
   0.04915568,
   0.04772211,
   0.04298968,
   0.04626836,
   0.04525149,
   0.04645488,
   0.04846407,
   0.05178049,
   0.0522026,
   0.05253215,
   0.06147985,
   0.06011513,
   0.06057388,
   0.06580698,
   0.07131896,
   0.06772406,
   0.07327801,
   0.07562429,
   0.08141927,
   0.09207442,
   0.1134001,
   0.2254213};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,3.465);
   Graph_Graph3004->SetMinimum(0.7435589);
   Graph_Graph3004->SetMaximum(1.518802);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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

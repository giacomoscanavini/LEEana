#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  8 11:41:03 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-342.3077,-24.68,1260.256,2729.088);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__1->SetBinContent(0,1.494871);
   hmc__1->SetBinContent(1,3.528121);
   hmc__1->SetBinContent(2,14.44802);
   hmc__1->SetBinContent(3,57.77934);
   hmc__1->SetBinContent(4,1136.611);
   hmc__1->SetBinContent(5,870.653);
   hmc__1->SetBinContent(6,793.1744);
   hmc__1->SetBinContent(7,696.1198);
   hmc__1->SetBinContent(8,638.6807);
   hmc__1->SetBinContent(9,575.0088);
   hmc__1->SetBinContent(10,462.1401);
   hmc__1->SetBinContent(11,399.2633);
   hmc__1->SetBinContent(12,340.591);
   hmc__1->SetBinContent(13,266.8001);
   hmc__1->SetBinContent(14,195.2766);
   hmc__1->SetBinContent(15,165.3188);
   hmc__1->SetBinContent(16,127.4569);
   hmc__1->SetBinContent(17,107.6628);
   hmc__1->SetBinContent(18,81.39761);
   hmc__1->SetBinContent(19,61.82584);
   hmc__1->SetBinContent(20,44.40823);
   hmc__1->SetBinContent(21,35.92899);
   hmc__1->SetBinContent(22,34.01287);
   hmc__1->SetBinContent(23,26.66793);
   hmc__1->SetBinContent(24,18.51818);
   hmc__1->SetBinContent(25,19.84783);
   hmc__1->SetBinContent(26,89.98384);
   hmc__1->SetBinError(0,0.5185266);
   hmc__1->SetBinError(1,2.503494);
   hmc__1->SetBinError(2,3.660281);
   hmc__1->SetBinError(3,11.4243);
   hmc__1->SetBinError(4,238.1975);
   hmc__1->SetBinError(5,180.6692);
   hmc__1->SetBinError(6,160.9864);
   hmc__1->SetBinError(7,144.7054);
   hmc__1->SetBinError(8,136.36);
   hmc__1->SetBinError(9,121.8045);
   hmc__1->SetBinError(10,105.6315);
   hmc__1->SetBinError(11,82.40156);
   hmc__1->SetBinError(12,76.64034);
   hmc__1->SetBinError(13,60.64436);
   hmc__1->SetBinError(14,48.16655);
   hmc__1->SetBinError(15,38.87082);
   hmc__1->SetBinError(16,32.18919);
   hmc__1->SetBinError(17,31.18795);
   hmc__1->SetBinError(18,22.70695);
   hmc__1->SetBinError(19,16.47975);
   hmc__1->SetBinError(20,15.95047);
   hmc__1->SetBinError(21,15.37432);
   hmc__1->SetBinError(22,15.62019);
   hmc__1->SetBinError(23,10.39818);
   hmc__1->SetBinError(24,9.047076);
   hmc__1->SetBinError(25,11.27428);
   hmc__1->SetBinError(26,31.7584);
   hmc__1->SetMinimum(-24.68);
   hmc__1->SetMaximum(2591.4);
   hmc__1->SetEntries(7171.878);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-150,1100);
   hs1_stack_1->SetMinimum(-1.244044e-08);
   hs1_stack_1->SetMaximum(1193.441);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,2.365465);
   hbadmatch_stack_1->SetBinContent(4,21.6501);
   hbadmatch_stack_1->SetBinContent(5,15.5023);
   hbadmatch_stack_1->SetBinContent(6,15.77524);
   hbadmatch_stack_1->SetBinContent(7,12.79613);
   hbadmatch_stack_1->SetBinContent(8,19.18658);
   hbadmatch_stack_1->SetBinContent(9,14.816);
   hbadmatch_stack_1->SetBinContent(10,14.72077);
   hbadmatch_stack_1->SetBinContent(11,13.45771);
   hbadmatch_stack_1->SetBinContent(12,10.36777);
   hbadmatch_stack_1->SetBinContent(13,7.860141);
   hbadmatch_stack_1->SetBinContent(14,6.240686);
   hbadmatch_stack_1->SetBinContent(15,2.903475);
   hbadmatch_stack_1->SetBinContent(16,4.304164);
   hbadmatch_stack_1->SetBinContent(17,3.487537);
   hbadmatch_stack_1->SetBinContent(18,3.860291);
   hbadmatch_stack_1->SetBinContent(19,2.628727);
   hbadmatch_stack_1->SetBinContent(20,1.707518);
   hbadmatch_stack_1->SetBinContent(21,0.6308007);
   hbadmatch_stack_1->SetBinContent(22,0.785171);
   hbadmatch_stack_1->SetBinContent(23,0.7607957);
   hbadmatch_stack_1->SetBinContent(24,1.268811);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,3.262235);
   hbadmatch_stack_1->SetBinError(3,0.8845709);
   hbadmatch_stack_1->SetBinError(4,2.908485);
   hbadmatch_stack_1->SetBinError(5,2.061598);
   hbadmatch_stack_1->SetBinError(6,2.332579);
   hbadmatch_stack_1->SetBinError(7,1.897682);
   hbadmatch_stack_1->SetBinError(8,3.174573);
   hbadmatch_stack_1->SetBinError(9,2.048613);
   hbadmatch_stack_1->SetBinError(10,2.470653);
   hbadmatch_stack_1->SetBinError(11,1.844714);
   hbadmatch_stack_1->SetBinError(12,1.685334);
   hbadmatch_stack_1->SetBinError(13,1.528364);
   hbadmatch_stack_1->SetBinError(14,1.264624);
   hbadmatch_stack_1->SetBinError(15,0.9056132);
   hbadmatch_stack_1->SetBinError(16,1.012576);
   hbadmatch_stack_1->SetBinError(17,1.021139);
   hbadmatch_stack_1->SetBinError(18,1.039954);
   hbadmatch_stack_1->SetBinError(19,0.8689146);
   hbadmatch_stack_1->SetBinError(20,0.6663138);
   hbadmatch_stack_1->SetBinError(21,0.3658983);
   hbadmatch_stack_1->SetBinError(22,0.3925882);
   hbadmatch_stack_1->SetBinError(23,0.4522722);
   hbadmatch_stack_1->SetBinError(24,0.5889569);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.8985588);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,5.86391);
   hext_stack_2->SetBinContent(3,14.71366);
   hext_stack_2->SetBinContent(4,128.7298);
   hext_stack_2->SetBinContent(5,101.2224);
   hext_stack_2->SetBinContent(6,85.74024);
   hext_stack_2->SetBinContent(7,68.15015);
   hext_stack_2->SetBinContent(8,50.99526);
   hext_stack_2->SetBinContent(9,49.48742);
   hext_stack_2->SetBinContent(10,32.06444);
   hext_stack_2->SetBinContent(11,43.34818);
   hext_stack_2->SetBinContent(12,31.35657);
   hext_stack_2->SetBinContent(13,28.01162);
   hext_stack_2->SetBinContent(14,14.6215);
   hext_stack_2->SetBinContent(15,18.04147);
   hext_stack_2->SetBinContent(16,14.77432);
   hext_stack_2->SetBinContent(17,9.876419);
   hext_stack_2->SetBinContent(18,7.787173);
   hext_stack_2->SetBinContent(19,10.00769);
   hext_stack_2->SetBinContent(20,2.67738);
   hext_stack_2->SetBinContent(21,3.311814);
   hext_stack_2->SetBinContent(22,2.192989);
   hext_stack_2->SetBinContent(23,4.703194);
   hext_stack_2->SetBinContent(24,2.352983);
   hext_stack_2->SetBinContent(25,4.110651);
   hext_stack_2->SetBinContent(26,19.79032);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.887831);
   hext_stack_2->SetBinError(3,2.595293);
   hext_stack_2->SetBinError(4,7.866937);
   hext_stack_2->SetBinError(5,6.848931);
   hext_stack_2->SetBinError(6,6.358955);
   hext_stack_2->SetBinError(7,5.496912);
   hext_stack_2->SetBinError(8,4.69224);
   hext_stack_2->SetBinError(9,4.797867);
   hext_stack_2->SetBinError(10,3.730084);
   hext_stack_2->SetBinError(11,4.48109);
   hext_stack_2->SetBinError(12,3.852431);
   hext_stack_2->SetBinError(13,3.741134);
   hext_stack_2->SetBinError(14,2.6857);
   hext_stack_2->SetBinError(15,2.88434);
   hext_stack_2->SetBinError(16,2.720155);
   hext_stack_2->SetBinError(17,2.086202);
   hext_stack_2->SetBinError(18,1.7312);
   hext_stack_2->SetBinError(19,2.26762);
   hext_stack_2->SetBinError(20,0.9497147);
   hext_stack_2->SetBinError(21,1.230784);
   hext_stack_2->SetBinError(22,0.9009267);
   hext_stack_2->SetBinError(23,1.389163);
   hext_stack_2->SetBinError(24,0.8925942);
   hext_stack_2->SetBinError(25,1.499292);
   hext_stack_2->SetBinError(26,3.08226);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(3,0.5758626);
   hdirt_stack_3->SetBinContent(4,18.63013);
   hdirt_stack_3->SetBinContent(5,11.36528);
   hdirt_stack_3->SetBinContent(6,11.59198);
   hdirt_stack_3->SetBinContent(7,7.462968);
   hdirt_stack_3->SetBinContent(8,5.709232);
   hdirt_stack_3->SetBinContent(9,4.028941);
   hdirt_stack_3->SetBinContent(10,3.140362);
   hdirt_stack_3->SetBinContent(11,2.980099);
   hdirt_stack_3->SetBinContent(12,2.63351);
   hdirt_stack_3->SetBinContent(13,1.276596);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(15,0.7241209);
   hdirt_stack_3->SetBinContent(16,1.27496);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.3895662);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinError(3,0.3389606);
   hdirt_stack_3->SetBinError(4,2.326664);
   hdirt_stack_3->SetBinError(5,1.7062);
   hdirt_stack_3->SetBinError(6,1.988102);
   hdirt_stack_3->SetBinError(7,1.676636);
   hdirt_stack_3->SetBinError(8,1.430598);
   hdirt_stack_3->SetBinError(9,1.065004);
   hdirt_stack_3->SetBinError(10,0.8291526);
   hdirt_stack_3->SetBinError(11,0.8679171);
   hdirt_stack_3->SetBinError(12,0.8351667);
   hdirt_stack_3->SetBinError(13,0.641696);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(15,0.3699659);
   hdirt_stack_3->SetBinError(16,0.6726499);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3895662);
   hdirt_stack_3->SetBinError(25,0.3652866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,0.8770706);
   houtFV_stack_4->SetBinContent(3,5.696971);
   houtFV_stack_4->SetBinContent(4,143.9505);
   houtFV_stack_4->SetBinContent(5,121.0234);
   houtFV_stack_4->SetBinContent(6,92.41255);
   houtFV_stack_4->SetBinContent(7,70.40196);
   houtFV_stack_4->SetBinContent(8,60.16084);
   houtFV_stack_4->SetBinContent(9,49.93121);
   houtFV_stack_4->SetBinContent(10,36.36348);
   houtFV_stack_4->SetBinContent(11,32.34805);
   houtFV_stack_4->SetBinContent(12,24.09677);
   houtFV_stack_4->SetBinContent(13,21.83747);
   houtFV_stack_4->SetBinContent(14,13.84109);
   houtFV_stack_4->SetBinContent(15,10.61176);
   houtFV_stack_4->SetBinContent(16,7.965826);
   houtFV_stack_4->SetBinContent(17,6.643895);
   houtFV_stack_4->SetBinContent(18,6.537388);
   houtFV_stack_4->SetBinContent(19,3.645082);
   houtFV_stack_4->SetBinContent(20,1.858957);
   houtFV_stack_4->SetBinContent(21,2.260862);
   houtFV_stack_4->SetBinContent(22,2.342597);
   houtFV_stack_4->SetBinContent(23,1.517089);
   houtFV_stack_4->SetBinContent(24,1.072095);
   houtFV_stack_4->SetBinContent(25,0.785171);
   houtFV_stack_4->SetBinContent(26,3.709461);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,0.5197486);
   houtFV_stack_4->SetBinError(3,1.148013);
   houtFV_stack_4->SetBinError(4,5.992379);
   houtFV_stack_4->SetBinError(5,5.506357);
   houtFV_stack_4->SetBinError(6,4.936809);
   houtFV_stack_4->SetBinError(7,4.251739);
   houtFV_stack_4->SetBinError(8,3.860078);
   houtFV_stack_4->SetBinError(9,3.646671);
   houtFV_stack_4->SetBinError(10,3.013182);
   houtFV_stack_4->SetBinError(11,2.838136);
   houtFV_stack_4->SetBinError(12,2.513398);
   houtFV_stack_4->SetBinError(13,2.429379);
   houtFV_stack_4->SetBinError(14,1.864153);
   houtFV_stack_4->SetBinError(15,1.657083);
   houtFV_stack_4->SetBinError(16,1.436719);
   houtFV_stack_4->SetBinError(17,1.301948);
   houtFV_stack_4->SetBinError(18,1.331061);
   houtFV_stack_4->SetBinError(19,0.9813338);
   houtFV_stack_4->SetBinError(20,0.6804124);
   houtFV_stack_4->SetBinError(21,0.7915833);
   houtFV_stack_4->SetBinError(22,0.8097566);
   houtFV_stack_4->SetBinError(23,0.5887087);
   houtFV_stack_4->SetBinError(24,0.5551335);
   houtFV_stack_4->SetBinError(25,0.3925882);
   houtFV_stack_4->SetBinError(26,0.9605263);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,58.11694);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,16.46488);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.39902);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.301104);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.992628);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.928516);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.106126);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.215566);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.072658);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.087772);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(4,2.536188);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.30891);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.02588);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7905341);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7530916);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5645924);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4583063);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4699761);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3105792);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3307091);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.682816);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.188161);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.055398);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.801634);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.510512);
   hNCpi0inFVqe_stack_6->SetBinContent(9,3.249034);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.157686);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.59014);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.25434);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.43719);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.12929);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6259447);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4169502);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.6062559);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5195989);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5107219);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5783275);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2679725);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.395144);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3078519);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4217465);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3424653);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.6267538);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.402657);
   hNCpi0inFVres_stack_7->SetBinContent(3,13.24691);
   hNCpi0inFVres_stack_7->SetBinContent(4,498.1503);
   hNCpi0inFVres_stack_7->SetBinContent(5,391.5466);
   hNCpi0inFVres_stack_7->SetBinContent(6,359.8821);
   hNCpi0inFVres_stack_7->SetBinContent(7,311.2333);
   hNCpi0inFVres_stack_7->SetBinContent(8,264.89);
   hNCpi0inFVres_stack_7->SetBinContent(9,222.1206);
   hNCpi0inFVres_stack_7->SetBinContent(10,170.7176);
   hNCpi0inFVres_stack_7->SetBinContent(11,132.7547);
   hNCpi0inFVres_stack_7->SetBinContent(12,102.6344);
   hNCpi0inFVres_stack_7->SetBinContent(13,72.83126);
   hNCpi0inFVres_stack_7->SetBinContent(14,53.7386);
   hNCpi0inFVres_stack_7->SetBinContent(15,43.66501);
   hNCpi0inFVres_stack_7->SetBinContent(16,29.10115);
   hNCpi0inFVres_stack_7->SetBinContent(17,24.15786);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.30579);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.40309);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.093121);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.024095);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.28167);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.585002);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.288976);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.743426);
   hNCpi0inFVres_stack_7->SetBinContent(26,8.854171);
   hNCpi0inFVres_stack_7->SetBinError(0,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1943021);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6661584);
   hNCpi0inFVres_stack_7->SetBinError(3,1.193259);
   hNCpi0inFVres_stack_7->SetBinError(4,7.274937);
   hNCpi0inFVres_stack_7->SetBinError(5,6.396411);
   hNCpi0inFVres_stack_7->SetBinError(6,6.223522);
   hNCpi0inFVres_stack_7->SetBinError(7,5.826773);
   hNCpi0inFVres_stack_7->SetBinError(8,5.316126);
   hNCpi0inFVres_stack_7->SetBinError(9,4.842274);
   hNCpi0inFVres_stack_7->SetBinError(10,4.2668);
   hNCpi0inFVres_stack_7->SetBinError(11,3.765431);
   hNCpi0inFVres_stack_7->SetBinError(12,3.334119);
   hNCpi0inFVres_stack_7->SetBinError(13,2.81341);
   hNCpi0inFVres_stack_7->SetBinError(14,2.385675);
   hNCpi0inFVres_stack_7->SetBinError(15,2.174132);
   hNCpi0inFVres_stack_7->SetBinError(16,1.785774);
   hNCpi0inFVres_stack_7->SetBinError(17,1.686409);
   hNCpi0inFVres_stack_7->SetBinError(18,1.274739);
   hNCpi0inFVres_stack_7->SetBinError(19,1.076783);
   hNCpi0inFVres_stack_7->SetBinError(20,1.046849);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7593957);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6548142);
   hNCpi0inFVres_stack_7->SetBinError(23,0.654666);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5414259);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4471301);
   hNCpi0inFVres_stack_7->SetBinError(26,1.060246);
   hNCpi0inFVres_stack_7->SetEntries(50865);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4593539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.601262);
   hNCpi0inFVdis_stack_8->SetBinContent(4,84.90883);
   hNCpi0inFVdis_stack_8->SetBinContent(5,61.19923);
   hNCpi0inFVdis_stack_8->SetBinContent(6,56.83318);
   hNCpi0inFVdis_stack_8->SetBinContent(7,49.02964);
   hNCpi0inFVdis_stack_8->SetBinContent(8,50.05463);
   hNCpi0inFVdis_stack_8->SetBinContent(9,41.78789);
   hNCpi0inFVdis_stack_8->SetBinContent(10,36.93459);
   hNCpi0inFVdis_stack_8->SetBinContent(11,29.05564);
   hNCpi0inFVdis_stack_8->SetBinContent(12,27.06078);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.23605);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.79794);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.16304);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.62429);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.411142);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.862272);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.103892);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.112942);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.979739);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.635066);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.482285);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.574362);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.575858);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.726405);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1818869);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3247703);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.975412);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.569828);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.428443);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.307962);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.315034);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.10613);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.959533);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.758638);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.679392);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.468832);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.280856);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.178462);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.030359);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.026543);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9106846);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7104525);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6716373);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3391333);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5334592);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5822963);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3958819);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4031079);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6345895);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.390768);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2089417);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.3917402);
   hCCpi0inFV_stack_11->SetBinContent(1,0.5901461);
   hCCpi0inFV_stack_11->SetBinContent(2,1.515398);
   hCCpi0inFV_stack_11->SetBinContent(3,6.803654);
   hCCpi0inFV_stack_11->SetBinContent(4,66.02579);
   hCCpi0inFV_stack_11->SetBinContent(5,74.50163);
   hCCpi0inFV_stack_11->SetBinContent(6,78.26031);
   hCCpi0inFV_stack_11->SetBinContent(7,91.16278);
   hCCpi0inFV_stack_11->SetBinContent(8,103.2785);
   hCCpi0inFV_stack_11->SetBinContent(9,102.9581);
   hCCpi0inFV_stack_11->SetBinContent(10,97.8765);
   hCCpi0inFV_stack_11->SetBinContent(11,84.16162);
   hCCpi0inFV_stack_11->SetBinContent(12,81.73402);
   hCCpi0inFV_stack_11->SetBinContent(13,73.38188);
   hCCpi0inFV_stack_11->SetBinContent(14,56.42008);
   hCCpi0inFV_stack_11->SetBinContent(15,46.96834);
   hCCpi0inFV_stack_11->SetBinContent(16,37.85064);
   hCCpi0inFV_stack_11->SetBinContent(17,35.52515);
   hCCpi0inFV_stack_11->SetBinContent(18,30.44886);
   hCCpi0inFV_stack_11->SetBinContent(19,17.21942);
   hCCpi0inFV_stack_11->SetBinContent(20,18.44589);
   hCCpi0inFV_stack_11->SetBinContent(21,14.82364);
   hCCpi0inFV_stack_11->SetBinContent(22,15.66734);
   hCCpi0inFV_stack_11->SetBinContent(23,10.40309);
   hCCpi0inFV_stack_11->SetBinContent(24,6.743639);
   hCCpi0inFV_stack_11->SetBinContent(25,6.980691);
   hCCpi0inFV_stack_11->SetBinContent(26,33.83385);
   hCCpi0inFV_stack_11->SetBinError(0,0.2770047);
   hCCpi0inFV_stack_11->SetBinError(1,0.340721);
   hCCpi0inFV_stack_11->SetBinError(2,0.588146);
   hCCpi0inFV_stack_11->SetBinError(3,1.257016);
   hCCpi0inFV_stack_11->SetBinError(4,4.020649);
   hCCpi0inFV_stack_11->SetBinError(5,4.2909);
   hCCpi0inFV_stack_11->SetBinError(6,4.450451);
   hCCpi0inFV_stack_11->SetBinError(7,4.789485);
   hCCpi0inFV_stack_11->SetBinError(8,5.148887);
   hCCpi0inFV_stack_11->SetBinError(9,5.13683);
   hCCpi0inFV_stack_11->SetBinError(10,4.902305);
   hCCpi0inFV_stack_11->SetBinError(11,4.523217);
   hCCpi0inFV_stack_11->SetBinError(12,4.5127);
   hCCpi0inFV_stack_11->SetBinError(13,4.318347);
   hCCpi0inFV_stack_11->SetBinError(14,3.821481);
   hCCpi0inFV_stack_11->SetBinError(15,3.461373);
   hCCpi0inFV_stack_11->SetBinError(16,3.086212);
   hCCpi0inFV_stack_11->SetBinError(17,2.97777);
   hCCpi0inFV_stack_11->SetBinError(18,2.803708);
   hCCpi0inFV_stack_11->SetBinError(19,2.094057);
   hCCpi0inFV_stack_11->SetBinError(20,2.163584);
   hCCpi0inFV_stack_11->SetBinError(21,1.922072);
   hCCpi0inFV_stack_11->SetBinError(22,2.049274);
   hCCpi0inFV_stack_11->SetBinError(23,1.653541);
   hCCpi0inFV_stack_11->SetBinError(24,1.271128);
   hCCpi0inFV_stack_11->SetBinError(25,1.345164);
   hCCpi0inFV_stack_11->SetBinError(26,2.959239);
   hCCpi0inFV_stack_11->SetEntries(5105);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.5901461);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,4.05133);
   hNCinFV_stack_12->SetBinContent(4,45.63188);
   hNCinFV_stack_12->SetBinContent(5,28.91648);
   hNCinFV_stack_12->SetBinContent(6,26.02516);
   hNCinFV_stack_12->SetBinContent(7,24.1848);
   hNCinFV_stack_12->SetBinContent(8,23.60262);
   hNCinFV_stack_12->SetBinContent(9,27.22513);
   hNCinFV_stack_12->SetBinContent(10,21.2453);
   hNCinFV_stack_12->SetBinContent(11,17.58232);
   hNCinFV_stack_12->SetBinContent(12,17.39913);
   hNCinFV_stack_12->SetBinContent(13,12.02405);
   hNCinFV_stack_12->SetBinContent(14,11.76225);
   hNCinFV_stack_12->SetBinContent(15,9.618057);
   hNCinFV_stack_12->SetBinContent(16,5.766824);
   hNCinFV_stack_12->SetBinContent(17,5.466984);
   hNCinFV_stack_12->SetBinContent(18,2.895787);
   hNCinFV_stack_12->SetBinContent(19,2.782519);
   hNCinFV_stack_12->SetBinContent(20,1.902527);
   hNCinFV_stack_12->SetBinContent(21,2.145881);
   hNCinFV_stack_12->SetBinContent(22,3.896642);
   hNCinFV_stack_12->SetBinContent(23,1.518779);
   hNCinFV_stack_12->SetBinContent(24,0.6803553);
   hNCinFV_stack_12->SetBinContent(25,1.217248);
   hNCinFV_stack_12->SetBinContent(26,4.058092);
   hNCinFV_stack_12->SetBinError(1,0.340721);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,1.01931);
   hNCinFV_stack_12->SetBinError(4,3.405291);
   hNCinFV_stack_12->SetBinError(5,2.726779);
   hNCinFV_stack_12->SetBinError(6,2.573045);
   hNCinFV_stack_12->SetBinError(7,2.482919);
   hNCinFV_stack_12->SetBinError(8,2.39074);
   hNCinFV_stack_12->SetBinError(9,2.581097);
   hNCinFV_stack_12->SetBinError(10,2.321732);
   hNCinFV_stack_12->SetBinError(11,2.104009);
   hNCinFV_stack_12->SetBinError(12,2.096057);
   hNCinFV_stack_12->SetBinError(13,1.745066);
   hNCinFV_stack_12->SetBinError(14,1.743631);
   hNCinFV_stack_12->SetBinError(15,1.556889);
   hNCinFV_stack_12->SetBinError(16,1.193705);
   hNCinFV_stack_12->SetBinError(17,1.210046);
   hNCinFV_stack_12->SetBinError(18,0.7862053);
   hNCinFV_stack_12->SetBinError(19,0.8319397);
   hNCinFV_stack_12->SetBinError(20,0.6810587);
   hNCinFV_stack_12->SetBinError(21,0.785499);
   hNCinFV_stack_12->SetBinError(22,1.075156);
   hNCinFV_stack_12->SetBinError(23,0.5892709);
   hNCinFV_stack_12->SetBinError(24,0.4810838);
   hNCinFV_stack_12->SetBinError(25,0.6211758);
   hNCinFV_stack_12->SetBinError(26,1.020609);
   hNCinFV_stack_12->SetEntries(1286);

   ci = 1445;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,0.8520313);
   hnumuCCinFV_stack_13->SetBinContent(1,0.7932806);
   hnumuCCinFV_stack_13->SetBinContent(2,1.371405);
   hnumuCCinFV_stack_13->SetBinContent(3,8.473126);
   hnumuCCinFV_stack_13->SetBinContent(4,57.32354);
   hnumuCCinFV_stack_13->SetBinContent(5,39.22918);
   hnumuCCinFV_stack_13->SetBinContent(6,49.29922);
   hnumuCCinFV_stack_13->SetBinContent(7,48.5863);
   hnumuCCinFV_stack_13->SetBinContent(8,49.30701);
   hnumuCCinFV_stack_13->SetBinContent(9,51.07386);
   hnumuCCinFV_stack_13->SetBinContent(10,43.05886);
   hnumuCCinFV_stack_13->SetBinContent(11,38.51206);
   hnumuCCinFV_stack_13->SetBinContent(12,36.53088);
   hnumuCCinFV_stack_13->SetBinContent(13,26.05625);
   hnumuCCinFV_stack_13->SetBinContent(14,18.79371);
   hnumuCCinFV_stack_13->SetBinContent(15,17.63475);
   hnumuCCinFV_stack_13->SetBinContent(16,13.44569);
   hnumuCCinFV_stack_13->SetBinContent(17,12.19353);
   hnumuCCinFV_stack_13->SetBinContent(18,7.691811);
   hnumuCCinFV_stack_13->SetBinContent(19,9.366549);
   hnumuCCinFV_stack_13->SetBinContent(20,3.62933);
   hnumuCCinFV_stack_13->SetBinContent(21,3.942509);
   hnumuCCinFV_stack_13->SetBinContent(22,1.917361);
   hnumuCCinFV_stack_13->SetBinContent(23,1.669794);
   hnumuCCinFV_stack_13->SetBinContent(24,2.341937);
   hnumuCCinFV_stack_13->SetBinContent(25,2.227857);
   hnumuCCinFV_stack_13->SetBinContent(26,9.483912);
   hnumuCCinFV_stack_13->SetBinError(0,0.4302702);
   hnumuCCinFV_stack_13->SetBinError(1,0.4692039);
   hnumuCCinFV_stack_13->SetBinError(2,0.5747862);
   hnumuCCinFV_stack_13->SetBinError(3,1.843374);
   hnumuCCinFV_stack_13->SetBinError(4,4.798919);
   hnumuCCinFV_stack_13->SetBinError(5,3.465851);
   hnumuCCinFV_stack_13->SetBinError(6,4.345549);
   hnumuCCinFV_stack_13->SetBinError(7,5.221129);
   hnumuCCinFV_stack_13->SetBinError(8,3.985554);
   hnumuCCinFV_stack_13->SetBinError(9,4.349775);
   hnumuCCinFV_stack_13->SetBinError(10,3.769374);
   hnumuCCinFV_stack_13->SetBinError(11,3.400289);
   hnumuCCinFV_stack_13->SetBinError(12,3.442184);
   hnumuCCinFV_stack_13->SetBinError(13,2.955762);
   hnumuCCinFV_stack_13->SetBinError(14,2.561895);
   hnumuCCinFV_stack_13->SetBinError(15,2.368152);
   hnumuCCinFV_stack_13->SetBinError(16,1.982695);
   hnumuCCinFV_stack_13->SetBinError(17,1.879454);
   hnumuCCinFV_stack_13->SetBinError(18,1.464579);
   hnumuCCinFV_stack_13->SetBinError(19,1.80155);
   hnumuCCinFV_stack_13->SetBinError(20,0.966881);
   hnumuCCinFV_stack_13->SetBinError(21,0.9811207);
   hnumuCCinFV_stack_13->SetBinError(22,0.664198);
   hnumuCCinFV_stack_13->SetBinError(23,0.7000041);
   hnumuCCinFV_stack_13->SetBinError(24,0.7805765);
   hnumuCCinFV_stack_13->SetBinError(25,1.282352);
   hnumuCCinFV_stack_13->SetBinError(26,1.624234);
   hnumuCCinFV_stack_13->SetEntries(2136);

   ci = 1446;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(4,9.474968);
   hnueCCinFV_stack_14->SetBinContent(5,7.395979);
   hnueCCinFV_stack_14->SetBinContent(6,4.509237);
   hnueCCinFV_stack_14->SetBinContent(7,3.701893);
   hnueCCinFV_stack_14->SetBinContent(8,3.713821);
   hnueCCinFV_stack_14->SetBinContent(9,5.234748);
   hnueCCinFV_stack_14->SetBinContent(10,2.601231);
   hnueCCinFV_stack_14->SetBinContent(11,1.145576);
   hnueCCinFV_stack_14->SetBinContent(12,4.422265);
   hnueCCinFV_stack_14->SetBinContent(13,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(14,2.199637);
   hnueCCinFV_stack_14->SetBinContent(15,1.207268);
   hnueCCinFV_stack_14->SetBinContent(16,1.539397);
   hnueCCinFV_stack_14->SetBinContent(17,0.5948316);
   hnueCCinFV_stack_14->SetBinContent(18,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(20,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,2.084373);
   hnueCCinFV_stack_14->SetBinError(2,0.3401776);
   hnueCCinFV_stack_14->SetBinError(4,2.09004);
   hnueCCinFV_stack_14->SetBinError(5,1.592457);
   hnueCCinFV_stack_14->SetBinError(6,1.168073);
   hnueCCinFV_stack_14->SetBinError(7,0.9460014);
   hnueCCinFV_stack_14->SetBinError(8,1.711618);
   hnueCCinFV_stack_14->SetBinError(9,2.007068);
   hnueCCinFV_stack_14->SetBinError(10,0.8174453);
   hnueCCinFV_stack_14->SetBinError(11,0.5276055);
   hnueCCinFV_stack_14->SetBinError(12,1.304936);
   hnueCCinFV_stack_14->SetBinError(13,0.438694);
   hnueCCinFV_stack_14->SetBinError(14,1.045064);
   hnueCCinFV_stack_14->SetBinError(15,0.5531719);
   hnueCCinFV_stack_14->SetBinError(16,0.8198597);
   hnueCCinFV_stack_14->SetBinError(17,0.3495737);
   hnueCCinFV_stack_14->SetBinError(18,0.3921167);
   hnueCCinFV_stack_14->SetBinError(19,0.2502081);
   hnueCCinFV_stack_14->SetBinError(20,0.4531728);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(22,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,1.253049);
   hnueCCinFV_stack_14->SetEntries(187);

   ci = 1447;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__2->SetBinContent(0,1.494871);
   hmcerror__2->SetBinContent(1,3.528121);
   hmcerror__2->SetBinContent(2,14.44802);
   hmcerror__2->SetBinContent(3,57.77934);
   hmcerror__2->SetBinContent(4,1136.611);
   hmcerror__2->SetBinContent(5,870.653);
   hmcerror__2->SetBinContent(6,793.1744);
   hmcerror__2->SetBinContent(7,696.1198);
   hmcerror__2->SetBinContent(8,638.6807);
   hmcerror__2->SetBinContent(9,575.0088);
   hmcerror__2->SetBinContent(10,462.1401);
   hmcerror__2->SetBinContent(11,399.2633);
   hmcerror__2->SetBinContent(12,340.591);
   hmcerror__2->SetBinContent(13,266.8001);
   hmcerror__2->SetBinContent(14,195.2766);
   hmcerror__2->SetBinContent(15,165.3188);
   hmcerror__2->SetBinContent(16,127.4569);
   hmcerror__2->SetBinContent(17,107.6628);
   hmcerror__2->SetBinContent(18,81.39761);
   hmcerror__2->SetBinContent(19,61.82584);
   hmcerror__2->SetBinContent(20,44.40823);
   hmcerror__2->SetBinContent(21,35.92899);
   hmcerror__2->SetBinContent(22,34.01287);
   hmcerror__2->SetBinContent(23,26.66793);
   hmcerror__2->SetBinContent(24,18.51818);
   hmcerror__2->SetBinContent(25,19.84783);
   hmcerror__2->SetBinContent(26,89.98384);
   hmcerror__2->SetBinError(0,0.5185266);
   hmcerror__2->SetBinError(1,2.503494);
   hmcerror__2->SetBinError(2,3.660281);
   hmcerror__2->SetBinError(3,11.4243);
   hmcerror__2->SetBinError(4,238.1975);
   hmcerror__2->SetBinError(5,180.6692);
   hmcerror__2->SetBinError(6,160.9864);
   hmcerror__2->SetBinError(7,144.7054);
   hmcerror__2->SetBinError(8,136.36);
   hmcerror__2->SetBinError(9,121.8045);
   hmcerror__2->SetBinError(10,105.6315);
   hmcerror__2->SetBinError(11,82.40156);
   hmcerror__2->SetBinError(12,76.64034);
   hmcerror__2->SetBinError(13,60.64436);
   hmcerror__2->SetBinError(14,48.16655);
   hmcerror__2->SetBinError(15,38.87082);
   hmcerror__2->SetBinError(16,32.18919);
   hmcerror__2->SetBinError(17,31.18795);
   hmcerror__2->SetBinError(18,22.70695);
   hmcerror__2->SetBinError(19,16.47975);
   hmcerror__2->SetBinError(20,15.95047);
   hmcerror__2->SetBinError(21,15.37432);
   hmcerror__2->SetBinError(22,15.62019);
   hmcerror__2->SetBinError(23,10.39818);
   hmcerror__2->SetBinError(24,9.047076);
   hmcerror__2->SetBinError(25,11.27428);
   hmcerror__2->SetBinError(26,31.7584);
   hmcerror__2->SetEntries(7171.878);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3001[25] = {
   5,
   7,
   70,
   1234,
   811,
   705,
   606,
   570,
   473,
   392,
   323,
   273,
   202,
   157,
   131,
   92,
   72,
   64,
   47,
   32,
   33,
   21,
   23,
   20,
   11};
   Double_t _felx3001[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3001[25] = {
   2.48995,
   2.85954,
   8.4925,
   35.12834,
   28.47806,
   26.55184,
   24.61707,
   23.87467,
   21.74856,
   19.79899,
   17.9722,
   16.52271,
   14.21267,
   12.52996,
   11.44552,
   9.7138,
   8.6108,
   8.1273,
   6.9882,
   5.7977,
   5.8847,
   4.7354,
   4.9457,
   4.6266,
   3.4975};
   Double_t _fehx3001[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3001[25] = {
   2.21064,
   2.61053,
   8.2902,
   35.12834,
   28.47806,
   26.55184,
   24.61707,
   23.87467,
   21.74856,
   19.79899,
   17.9722,
   16.52271,
   14.21267,
   12.52996,
   11.44552,
   9.513,
   8.4085,
   7.9246,
   6.7839,
   5.5904,
   5.6776,
   4.5229,
   4.7346,
   4.4133,
   3.27};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-275,1225);
   Graph_Graph3001->SetMinimum(2.259045);
   Graph_Graph3001->SetMaximum(1395.79);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6374.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 177.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 734.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 718.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2746.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  534.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1159.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 298.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 544.5","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 51.1","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3002[25] = {
   0.7095828,
   0.2533414,
   0.197723,
   0.2095683,
   0.20751,
   0.2029647,
   0.2078743,
   0.2135027,
   0.2118307,
   0.2285704,
   0.206384,
   0.2250216,
   0.2273026,
   0.246658,
   0.2351264,
   0.2525497,
   0.2896817,
   0.2789633,
   0.2665512,
   0.3591783,
   0.4279084,
   0.4592434,
   0.3899133,
   0.4885509,
   0.568036};
   Double_t _fehx3002[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3002[25] = {
   0.7095828,
   0.2533414,
   0.197723,
   0.2095683,
   0.20751,
   0.2029647,
   0.2078743,
   0.2135027,
   0.2118307,
   0.2285704,
   0.206384,
   0.2250216,
   0.2273026,
   0.246658,
   0.2351264,
   0.2525497,
   0.2896817,
   0.2789633,
   0.2665512,
   0.3591783,
   0.4279084,
   0.4592434,
   0.3899133,
   0.4885509,
   0.568036};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-275,1225);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3003[25] = {
   0.3993618,
   0.2082899,
   0.1606205,
   0.1885206,
   0.2002534,
   0.1997297,
   0.2049665,
   0.2094079,
   0.2086363,
   0.217161,
   0.1998479,
   0.2040355,
   0.2053023,
   0.2170286,
   0.1985315,
   0.210178,
   0.2089245,
   0.2037124,
   0.199446,
   0.2231779,
   0.2165524,
   0.2484952,
   0.2248887,
   0.2063737,
   0.2161877};
   Double_t _fehx3003[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3003[25] = {
   0.3993618,
   0.2082899,
   0.1606205,
   0.1885206,
   0.2002534,
   0.1997297,
   0.2049665,
   0.2094079,
   0.2086363,
   0.217161,
   0.1998479,
   0.2040355,
   0.2053023,
   0.2170286,
   0.1985315,
   0.210178,
   0.2089245,
   0.2037124,
   0.199446,
   0.2231779,
   0.2165524,
   0.2484952,
   0.2248887,
   0.2063737,
   0.2161877};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-275,1225);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3004[25] = {
   1.417185,
   0.4844955,
   1.211506,
   1.085684,
   0.9314848,
   0.8888336,
   0.8705399,
   0.8924647,
   0.8225961,
   0.8482276,
   0.80899,
   0.8015479,
   0.7571211,
   0.8039876,
   0.7924083,
   0.7218129,
   0.6687544,
   0.7862638,
   0.7601999,
   0.7205871,
   0.9184784,
   0.6174133,
   0.8624592,
   1.080019,
   0.5542167};
   Double_t _felx3004[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3004[25] = {
   0.7057439,
   0.1979192,
   0.1469816,
   0.03090622,
   0.03270886,
   0.03347541,
   0.03536327,
   0.03738123,
   0.03782301,
   0.04284196,
   0.04501341,
   0.04851189,
   0.05327086,
   0.0641652,
   0.06923303,
   0.07621246,
   0.07997931,
   0.09984691,
   0.1130304,
   0.1305546,
   0.163787,
   0.1392238,
   0.185455,
   0.2498409,
   0.1762157};
   Double_t _fehx3004[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3004[25] = {
   0.6265772,
   0.1806843,
   0.1434804,
   0.03090622,
   0.03270886,
   0.03347541,
   0.03536327,
   0.03738123,
   0.03782301,
   0.04284196,
   0.04501341,
   0.04851189,
   0.05327086,
   0.0641652,
   0.06923303,
   0.07463702,
   0.0781003,
   0.09735666,
   0.109726,
   0.1258866,
   0.1580228,
   0.1329761,
   0.1775391,
   0.2383225,
   0.1647535};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-275,1225);
   Graph_Graph3004->SetMinimum(0.1108578);
   Graph_Graph3004->SetMaximum(2.219481);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 14:17:35 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-4.804273,3.553846,531.2515);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__13->SetBinContent(1,35.85715);
   hmc__13->SetBinContent(2,103.0787);
   hmc__13->SetBinContent(3,153.0424);
   hmc__13->SetBinContent(4,208.2266);
   hmc__13->SetBinContent(5,219.5329);
   hmc__13->SetBinContent(6,231.1916);
   hmc__13->SetBinContent(7,231.1272);
   hmc__13->SetBinContent(8,240.2137);
   hmc__13->SetBinContent(9,222.9964);
   hmc__13->SetBinContent(10,206.055);
   hmc__13->SetBinContent(11,217.7041);
   hmc__13->SetBinContent(12,199.958);
   hmc__13->SetBinContent(13,176.0799);
   hmc__13->SetBinContent(14,158.7364);
   hmc__13->SetBinContent(15,164.6738);
   hmc__13->SetBinContent(16,136.4186);
   hmc__13->SetBinContent(17,123.2959);
   hmc__13->SetBinContent(18,117.7668);
   hmc__13->SetBinContent(19,106.0902);
   hmc__13->SetBinContent(20,107.3197);
   hmc__13->SetBinContent(21,81.0325);
   hmc__13->SetBinContent(22,66.9822);
   hmc__13->SetBinContent(23,40.80548);
   hmc__13->SetBinContent(24,15.52082);
   hmc__13->SetBinError(1,14.25973);
   hmc__13->SetBinError(2,35.32201);
   hmc__13->SetBinError(3,53.73455);
   hmc__13->SetBinError(4,65.53503);
   hmc__13->SetBinError(5,74.76597);
   hmc__13->SetBinError(6,85.70666);
   hmc__13->SetBinError(7,83.34999);
   hmc__13->SetBinError(8,84.57216);
   hmc__13->SetBinError(9,80.52131);
   hmc__13->SetBinError(10,76.66521);
   hmc__13->SetBinError(11,76.21636);
   hmc__13->SetBinError(12,73.54046);
   hmc__13->SetBinError(13,66.02375);
   hmc__13->SetBinError(14,53.23457);
   hmc__13->SetBinError(15,56.73504);
   hmc__13->SetBinError(16,51.25989);
   hmc__13->SetBinError(17,44.41671);
   hmc__13->SetBinError(18,41.88604);
   hmc__13->SetBinError(19,35.93359);
   hmc__13->SetBinError(20,35.45217);
   hmc__13->SetBinError(21,29.66244);
   hmc__13->SetBinError(22,22.16275);
   hmc__13->SetBinError(23,21.08793);
   hmc__13->SetBinError(24,8.036249);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-4.804273);
   hmc__13->SetMaximum(504.4487);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,3.15);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(252.2243);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.3917402);
   hbadmatch_stack_1->SetBinContent(3,2.345055);
   hbadmatch_stack_1->SetBinContent(4,4.237571);
   hbadmatch_stack_1->SetBinContent(5,2.899947);
   hbadmatch_stack_1->SetBinContent(6,4.967899);
   hbadmatch_stack_1->SetBinContent(7,4.302619);
   hbadmatch_stack_1->SetBinContent(8,6.792273);
   hbadmatch_stack_1->SetBinContent(9,5.168305);
   hbadmatch_stack_1->SetBinContent(10,6.432764);
   hbadmatch_stack_1->SetBinContent(11,7.299431);
   hbadmatch_stack_1->SetBinContent(12,5.080866);
   hbadmatch_stack_1->SetBinContent(13,3.754836);
   hbadmatch_stack_1->SetBinContent(14,3.092617);
   hbadmatch_stack_1->SetBinContent(15,6.162577);
   hbadmatch_stack_1->SetBinContent(16,2.798535);
   hbadmatch_stack_1->SetBinContent(17,2.296112);
   hbadmatch_stack_1->SetBinContent(18,2.470768);
   hbadmatch_stack_1->SetBinContent(19,2.815245);
   hbadmatch_stack_1->SetBinContent(20,2.972749);
   hbadmatch_stack_1->SetBinContent(21,2.434641);
   hbadmatch_stack_1->SetBinContent(22,1.322064);
   hbadmatch_stack_1->SetBinContent(23,1.004567);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.2770047);
   hbadmatch_stack_1->SetBinError(3,0.9562939);
   hbadmatch_stack_1->SetBinError(4,1.0649);
   hbadmatch_stack_1->SetBinError(5,0.8251647);
   hbadmatch_stack_1->SetBinError(6,1.151343);
   hbadmatch_stack_1->SetBinError(7,1.049573);
   hbadmatch_stack_1->SetBinError(8,1.356589);
   hbadmatch_stack_1->SetBinError(9,1.202892);
   hbadmatch_stack_1->SetBinError(10,1.647017);
   hbadmatch_stack_1->SetBinError(11,1.421669);
   hbadmatch_stack_1->SetBinError(12,1.147482);
   hbadmatch_stack_1->SetBinError(13,1.010071);
   hbadmatch_stack_1->SetBinError(14,1.004486);
   hbadmatch_stack_1->SetBinError(15,2.255407);
   hbadmatch_stack_1->SetBinError(16,0.8837104);
   hbadmatch_stack_1->SetBinError(17,0.8089717);
   hbadmatch_stack_1->SetBinError(18,0.7668342);
   hbadmatch_stack_1->SetBinError(19,0.8402141);
   hbadmatch_stack_1->SetBinError(20,0.8883335);
   hbadmatch_stack_1->SetBinError(21,0.8405843);
   hbadmatch_stack_1->SetBinError(22,0.5554667);
   hbadmatch_stack_1->SetBinError(23,0.4497336);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,4.110651);
   hext_stack_2->SetBinContent(2,10.14173);
   hext_stack_2->SetBinContent(3,10.98806);
   hext_stack_2->SetBinContent(4,14.11393);
   hext_stack_2->SetBinContent(5,12.8826);
   hext_stack_2->SetBinContent(6,13.19982);
   hext_stack_2->SetBinContent(7,17.66517);
   hext_stack_2->SetBinContent(8,17.53831);
   hext_stack_2->SetBinContent(9,18.08613);
   hext_stack_2->SetBinContent(10,10.70398);
   hext_stack_2->SetBinContent(11,13.10603);
   hext_stack_2->SetBinContent(12,15.59747);
   hext_stack_2->SetBinContent(13,15.42588);
   hext_stack_2->SetBinContent(14,16.06032);
   hext_stack_2->SetBinContent(15,14.75996);
   hext_stack_2->SetBinContent(16,11.09899);
   hext_stack_2->SetBinContent(17,8.813845);
   hext_stack_2->SetBinContent(18,9.843287);
   hext_stack_2->SetBinContent(19,6.889002);
   hext_stack_2->SetBinContent(20,8.489448);
   hext_stack_2->SetBinContent(21,8.712873);
   hext_stack_2->SetBinContent(22,8.691332);
   hext_stack_2->SetBinContent(23,6.594905);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinError(1,1.499292);
   hext_stack_2->SetBinError(2,2.36551);
   hext_stack_2->SetBinError(3,2.292727);
   hext_stack_2->SetBinError(4,2.693483);
   hext_stack_2->SetBinError(5,2.344046);
   hext_stack_2->SetBinError(6,2.408524);
   hext_stack_2->SetBinError(7,3.025087);
   hext_stack_2->SetBinError(8,2.91486);
   hext_stack_2->SetBinError(9,2.985644);
   hext_stack_2->SetBinError(10,2.068932);
   hext_stack_2->SetBinError(11,2.409767);
   hext_stack_2->SetBinError(12,2.681858);
   hext_stack_2->SetBinError(13,2.696921);
   hext_stack_2->SetBinError(14,2.808248);
   hext_stack_2->SetBinError(15,2.793142);
   hext_stack_2->SetBinError(16,2.124119);
   hext_stack_2->SetBinError(17,2.04393);
   hext_stack_2->SetBinError(18,2.240964);
   hext_stack_2->SetBinError(19,1.715413);
   hext_stack_2->SetBinError(20,2.018023);
   hext_stack_2->SetBinError(21,2.094001);
   hext_stack_2->SetBinError(22,2.233483);
   hext_stack_2->SetBinError(23,1.958178);
   hext_stack_2->SetBinError(24,1.406172);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.3569671);
   hdirt_stack_3->SetBinContent(4,0.5134285);
   hdirt_stack_3->SetBinContent(5,0.9907839);
   hdirt_stack_3->SetBinContent(6,1.122146);
   hdirt_stack_3->SetBinContent(7,1.098198);
   hdirt_stack_3->SetBinContent(8,1.966002);
   hdirt_stack_3->SetBinContent(9,1.038022);
   hdirt_stack_3->SetBinContent(10,0.9140499);
   hdirt_stack_3->SetBinContent(11,1.038322);
   hdirt_stack_3->SetBinContent(12,0.3775263);
   hdirt_stack_3->SetBinContent(14,1.060553);
   hdirt_stack_3->SetBinContent(15,0.402661);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.437297);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.9411583);
   hdirt_stack_3->SetBinContent(20,1.044521);
   hdirt_stack_3->SetBinContent(22,0.7670878);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(2,0.258803);
   hdirt_stack_3->SetBinError(4,0.3024222);
   hdirt_stack_3->SetBinError(5,0.5357742);
   hdirt_stack_3->SetBinError(6,0.5200476);
   hdirt_stack_3->SetBinError(7,0.5036152);
   hdirt_stack_3->SetBinError(8,1.07759);
   hdirt_stack_3->SetBinError(9,0.5187105);
   hdirt_stack_3->SetBinError(10,0.4788161);
   hdirt_stack_3->SetBinError(11,0.5282284);
   hdirt_stack_3->SetBinError(12,0.2703313);
   hdirt_stack_3->SetBinError(14,0.5513393);
   hdirt_stack_3->SetBinError(15,0.2961962);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.6623527);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.4873249);
   hdirt_stack_3->SetBinError(20,0.5625407);
   hdirt_stack_3->SetBinError(22,0.5461925);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.250697);
   houtFV_stack_4->SetBinContent(2,5.908596);
   houtFV_stack_4->SetBinContent(3,8.397429);
   houtFV_stack_4->SetBinContent(4,14.94004);
   houtFV_stack_4->SetBinContent(5,17.58399);
   houtFV_stack_4->SetBinContent(6,14.89048);
   houtFV_stack_4->SetBinContent(7,11.39188);
   houtFV_stack_4->SetBinContent(8,14.48213);
   houtFV_stack_4->SetBinContent(9,11.40346);
   houtFV_stack_4->SetBinContent(10,10.88766);
   houtFV_stack_4->SetBinContent(11,12.2137);
   houtFV_stack_4->SetBinContent(12,8.346344);
   houtFV_stack_4->SetBinContent(13,10.85988);
   houtFV_stack_4->SetBinContent(14,5.953185);
   houtFV_stack_4->SetBinContent(15,9.284181);
   houtFV_stack_4->SetBinContent(16,8.190004);
   houtFV_stack_4->SetBinContent(17,6.921737);
   houtFV_stack_4->SetBinContent(18,8.768167);
   houtFV_stack_4->SetBinContent(19,7.087384);
   houtFV_stack_4->SetBinContent(20,10.04597);
   houtFV_stack_4->SetBinContent(21,4.374882);
   houtFV_stack_4->SetBinContent(22,4.644856);
   houtFV_stack_4->SetBinContent(23,5.503396);
   houtFV_stack_4->SetBinContent(24,2.037842);
   houtFV_stack_4->SetBinError(1,0.7346377);
   houtFV_stack_4->SetBinError(2,1.225272);
   houtFV_stack_4->SetBinError(3,1.427137);
   houtFV_stack_4->SetBinError(4,1.968898);
   houtFV_stack_4->SetBinError(5,2.126855);
   houtFV_stack_4->SetBinError(6,2.003906);
   houtFV_stack_4->SetBinError(7,1.665383);
   houtFV_stack_4->SetBinError(8,1.857166);
   houtFV_stack_4->SetBinError(9,1.685207);
   houtFV_stack_4->SetBinError(10,1.681924);
   houtFV_stack_4->SetBinError(11,1.784385);
   houtFV_stack_4->SetBinError(12,1.423242);
   houtFV_stack_4->SetBinError(13,1.664856);
   houtFV_stack_4->SetBinError(14,1.149401);
   houtFV_stack_4->SetBinError(15,1.530283);
   houtFV_stack_4->SetBinError(16,1.384421);
   houtFV_stack_4->SetBinError(17,1.345099);
   houtFV_stack_4->SetBinError(18,1.512804);
   houtFV_stack_4->SetBinError(19,1.294213);
   houtFV_stack_4->SetBinError(20,1.605277);
   houtFV_stack_4->SetBinError(21,1.00479);
   houtFV_stack_4->SetBinError(22,1.075365);
   houtFV_stack_4->SetBinError(23,1.252691);
   houtFV_stack_4->SetBinError(24,0.7450211);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6699361);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9323258);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2901718);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.270742);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.352826);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.04559);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9065858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6689357);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.256004);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.35349);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.296858);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.03214);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.434773);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3390387);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2545655);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1793726);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3651098);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4189688);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3933343);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2652967);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3749275);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,13.316);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.03819);
   hNCpi0inFVres_stack_7->SetBinContent(3,62.53611);
   hNCpi0inFVres_stack_7->SetBinContent(4,80.39849);
   hNCpi0inFVres_stack_7->SetBinContent(5,88.52472);
   hNCpi0inFVres_stack_7->SetBinContent(6,98.16473);
   hNCpi0inFVres_stack_7->SetBinContent(7,100.0614);
   hNCpi0inFVres_stack_7->SetBinContent(8,101.4887);
   hNCpi0inFVres_stack_7->SetBinContent(9,97.68379);
   hNCpi0inFVres_stack_7->SetBinContent(10,91.9498);
   hNCpi0inFVres_stack_7->SetBinContent(11,88.27045);
   hNCpi0inFVres_stack_7->SetBinContent(12,87.11363);
   hNCpi0inFVres_stack_7->SetBinContent(13,74.89104);
   hNCpi0inFVres_stack_7->SetBinContent(14,63.91299);
   hNCpi0inFVres_stack_7->SetBinContent(15,65.16638);
   hNCpi0inFVres_stack_7->SetBinContent(16,56.79648);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.20885);
   hNCpi0inFVres_stack_7->SetBinContent(18,48.46832);
   hNCpi0inFVres_stack_7->SetBinContent(19,45.80169);
   hNCpi0inFVres_stack_7->SetBinContent(20,39.76447);
   hNCpi0inFVres_stack_7->SetBinContent(21,31.51864);
   hNCpi0inFVres_stack_7->SetBinContent(22,20.71716);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.92007);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.921247);
   hNCpi0inFVres_stack_7->SetBinError(1,1.229459);
   hNCpi0inFVres_stack_7->SetBinError(2,2.158336);
   hNCpi0inFVres_stack_7->SetBinError(3,2.604912);
   hNCpi0inFVres_stack_7->SetBinError(4,2.927599);
   hNCpi0inFVres_stack_7->SetBinError(5,3.048604);
   hNCpi0inFVres_stack_7->SetBinError(6,3.277983);
   hNCpi0inFVres_stack_7->SetBinError(7,3.293076);
   hNCpi0inFVres_stack_7->SetBinError(8,3.34031);
   hNCpi0inFVres_stack_7->SetBinError(9,3.26426);
   hNCpi0inFVres_stack_7->SetBinError(10,3.121982);
   hNCpi0inFVres_stack_7->SetBinError(11,3.108401);
   hNCpi0inFVres_stack_7->SetBinError(12,3.091404);
   hNCpi0inFVres_stack_7->SetBinError(13,2.834531);
   hNCpi0inFVres_stack_7->SetBinError(14,2.546817);
   hNCpi0inFVres_stack_7->SetBinError(15,2.680434);
   hNCpi0inFVres_stack_7->SetBinError(16,2.41407);
   hNCpi0inFVres_stack_7->SetBinError(17,2.384955);
   hNCpi0inFVres_stack_7->SetBinError(18,2.319178);
   hNCpi0inFVres_stack_7->SetBinError(19,2.225005);
   hNCpi0inFVres_stack_7->SetBinError(20,2.043538);
   hNCpi0inFVres_stack_7->SetBinError(21,1.782725);
   hNCpi0inFVres_stack_7->SetBinError(22,1.461326);
   hNCpi0inFVres_stack_7->SetBinError(23,1.058709);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7954906);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.823484);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.746269);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.11339);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.86114);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.9034);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.70329);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.26928);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.58829);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.38558);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.6532);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.49312);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.72719);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.92473);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.71589);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.09013);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.978352);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.960493);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.900229);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.442268);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.495178);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.980586);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.196137);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.979244);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8084357);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6931687);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9920292);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.281312);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.351387);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.365331);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.432522);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.593126);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.439794);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.318686);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.202033);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.333995);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.287977);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.170315);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.183433);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.189447);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9507598);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8700669);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.076543);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8169263);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.059077);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7805421);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5959489);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4015757);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.189912);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.93224);
   hCCpi0inFV_stack_10->SetBinContent(2,13.5913);
   hCCpi0inFV_stack_10->SetBinContent(3,21.90518);
   hCCpi0inFV_stack_10->SetBinContent(4,29.65678);
   hCCpi0inFV_stack_10->SetBinContent(5,32.36665);
   hCCpi0inFV_stack_10->SetBinContent(6,38.55418);
   hCCpi0inFV_stack_10->SetBinContent(7,31.14961);
   hCCpi0inFV_stack_10->SetBinContent(8,36.62569);
   hCCpi0inFV_stack_10->SetBinContent(9,33.94971);
   hCCpi0inFV_stack_10->SetBinContent(10,31.44398);
   hCCpi0inFV_stack_10->SetBinContent(11,30.37466);
   hCCpi0inFV_stack_10->SetBinContent(12,22.61378);
   hCCpi0inFV_stack_10->SetBinContent(13,21.71214);
   hCCpi0inFV_stack_10->SetBinContent(14,25.27718);
   hCCpi0inFV_stack_10->SetBinContent(15,22.86528);
   hCCpi0inFV_stack_10->SetBinContent(16,19.48312);
   hCCpi0inFV_stack_10->SetBinContent(17,20.53895);
   hCCpi0inFV_stack_10->SetBinContent(18,19.09041);
   hCCpi0inFV_stack_10->SetBinContent(19,16.83905);
   hCCpi0inFV_stack_10->SetBinContent(20,14.08001);
   hCCpi0inFV_stack_10->SetBinContent(21,11.27874);
   hCCpi0inFV_stack_10->SetBinContent(22,10.25699);
   hCCpi0inFV_stack_10->SetBinContent(23,5.697717);
   hCCpi0inFV_stack_10->SetBinContent(24,1.608988);
   hCCpi0inFV_stack_10->SetBinError(1,1.082946);
   hCCpi0inFV_stack_10->SetBinError(2,1.830538);
   hCCpi0inFV_stack_10->SetBinError(3,2.318235);
   hCCpi0inFV_stack_10->SetBinError(4,2.745359);
   hCCpi0inFV_stack_10->SetBinError(5,2.911584);
   hCCpi0inFV_stack_10->SetBinError(6,3.080175);
   hCCpi0inFV_stack_10->SetBinError(7,2.83509);
   hCCpi0inFV_stack_10->SetBinError(8,3.042822);
   hCCpi0inFV_stack_10->SetBinError(9,2.944707);
   hCCpi0inFV_stack_10->SetBinError(10,2.88812);
   hCCpi0inFV_stack_10->SetBinError(11,2.782339);
   hCCpi0inFV_stack_10->SetBinError(12,2.35146);
   hCCpi0inFV_stack_10->SetBinError(13,2.302209);
   hCCpi0inFV_stack_10->SetBinError(14,2.535674);
   hCCpi0inFV_stack_10->SetBinError(15,2.375564);
   hCCpi0inFV_stack_10->SetBinError(16,2.191247);
   hCCpi0inFV_stack_10->SetBinError(17,2.270652);
   hCCpi0inFV_stack_10->SetBinError(18,2.211919);
   hCCpi0inFV_stack_10->SetBinError(19,2.076929);
   hCCpi0inFV_stack_10->SetBinError(20,1.808865);
   hCCpi0inFV_stack_10->SetBinError(21,1.646107);
   hCCpi0inFV_stack_10->SetBinError(22,1.642653);
   hCCpi0inFV_stack_10->SetBinError(23,1.269095);
   hCCpi0inFV_stack_10->SetBinError(24,0.6801404);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.053982);
   hNCinFV_stack_11->SetBinContent(2,8.309517);
   hNCinFV_stack_11->SetBinContent(3,14.85137);
   hNCinFV_stack_11->SetBinContent(4,18.07442);
   hNCinFV_stack_11->SetBinContent(5,15.67965);
   hNCinFV_stack_11->SetBinContent(6,16.50408);
   hNCinFV_stack_11->SetBinContent(7,17.99082);
   hNCinFV_stack_11->SetBinContent(8,16.67229);
   hNCinFV_stack_11->SetBinContent(9,13.52761);
   hNCinFV_stack_11->SetBinContent(10,16.32366);
   hNCinFV_stack_11->SetBinContent(11,18.26775);
   hNCinFV_stack_11->SetBinContent(12,14.66311);
   hNCinFV_stack_11->SetBinContent(13,13.3943);
   hNCinFV_stack_11->SetBinContent(14,13.38584);
   hNCinFV_stack_11->SetBinContent(15,12.55418);
   hNCinFV_stack_11->SetBinContent(16,13.12803);
   hNCinFV_stack_11->SetBinContent(17,10.63582);
   hNCinFV_stack_11->SetBinContent(18,10.49851);
   hNCinFV_stack_11->SetBinContent(19,7.868988);
   hNCinFV_stack_11->SetBinContent(20,7.774315);
   hNCinFV_stack_11->SetBinContent(21,6.601867);
   hNCinFV_stack_11->SetBinContent(22,5.376775);
   hNCinFV_stack_11->SetBinContent(23,2.729266);
   hNCinFV_stack_11->SetBinContent(24,0.9835768);
   hNCinFV_stack_11->SetBinError(1,0.7078105);
   hNCinFV_stack_11->SetBinError(2,1.456248);
   hNCinFV_stack_11->SetBinError(3,1.922431);
   hNCinFV_stack_11->SetBinError(4,2.150095);
   hNCinFV_stack_11->SetBinError(5,1.951299);
   hNCinFV_stack_11->SetBinError(6,2.077176);
   hNCinFV_stack_11->SetBinError(7,2.086806);
   hNCinFV_stack_11->SetBinError(8,2.050119);
   hNCinFV_stack_11->SetBinError(9,1.840254);
   hNCinFV_stack_11->SetBinError(10,2.02088);
   hNCinFV_stack_11->SetBinError(11,2.158769);
   hNCinFV_stack_11->SetBinError(12,1.913206);
   hNCinFV_stack_11->SetBinError(13,1.820298);
   hNCinFV_stack_11->SetBinError(14,1.819388);
   hNCinFV_stack_11->SetBinError(15,1.788022);
   hNCinFV_stack_11->SetBinError(16,1.872197);
   hNCinFV_stack_11->SetBinError(17,1.722895);
   hNCinFV_stack_11->SetBinError(18,1.641757);
   hNCinFV_stack_11->SetBinError(19,1.373176);
   hNCinFV_stack_11->SetBinError(20,1.402463);
   hNCinFV_stack_11->SetBinError(21,1.240728);
   hNCinFV_stack_11->SetBinError(22,1.161405);
   hNCinFV_stack_11->SetBinError(23,0.854664);
   hNCinFV_stack_11->SetBinError(24,0.4398689);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,3.08759);
   hnumuCCinFV_stack_12->SetBinContent(2,11.91174);
   hnumuCCinFV_stack_12->SetBinContent(3,14.21862);
   hnumuCCinFV_stack_12->SetBinContent(4,25.72834);
   hnumuCCinFV_stack_12->SetBinContent(5,26.21212);
   hnumuCCinFV_stack_12->SetBinContent(6,21.29205);
   hnumuCCinFV_stack_12->SetBinContent(7,22.65398);
   hnumuCCinFV_stack_12->SetBinContent(8,24.22661);
   hnumuCCinFV_stack_12->SetBinContent(9,22.86816);
   hnumuCCinFV_stack_12->SetBinContent(10,19.88476);
   hnumuCCinFV_stack_12->SetBinContent(11,29.06237);
   hnumuCCinFV_stack_12->SetBinContent(12,28.67767);
   hnumuCCinFV_stack_12->SetBinContent(13,21.37271);
   hnumuCCinFV_stack_12->SetBinContent(14,14.36113);
   hnumuCCinFV_stack_12->SetBinContent(15,18.85313);
   hnumuCCinFV_stack_12->SetBinContent(16,14.63193);
   hnumuCCinFV_stack_12->SetBinContent(17,10.80241);
   hnumuCCinFV_stack_12->SetBinContent(18,7.574955);
   hnumuCCinFV_stack_12->SetBinContent(19,10.35823);
   hnumuCCinFV_stack_12->SetBinContent(20,11.8745);
   hnumuCCinFV_stack_12->SetBinContent(21,9.22418);
   hnumuCCinFV_stack_12->SetBinContent(22,10.424);
   hnumuCCinFV_stack_12->SetBinContent(23,5.875554);
   hnumuCCinFV_stack_12->SetBinContent(24,1.528564);
   hnumuCCinFV_stack_12->SetBinError(1,0.8827346);
   hnumuCCinFV_stack_12->SetBinError(2,1.849819);
   hnumuCCinFV_stack_12->SetBinError(3,2.151433);
   hnumuCCinFV_stack_12->SetBinError(4,3.187268);
   hnumuCCinFV_stack_12->SetBinError(5,3.19854);
   hnumuCCinFV_stack_12->SetBinError(6,3.597339);
   hnumuCCinFV_stack_12->SetBinError(7,2.441345);
   hnumuCCinFV_stack_12->SetBinError(8,2.650013);
   hnumuCCinFV_stack_12->SetBinError(9,2.707007);
   hnumuCCinFV_stack_12->SetBinError(10,2.423488);
   hnumuCCinFV_stack_12->SetBinError(11,3.302598);
   hnumuCCinFV_stack_12->SetBinError(12,3.107488);
   hnumuCCinFV_stack_12->SetBinError(13,2.675035);
   hnumuCCinFV_stack_12->SetBinError(14,2.159592);
   hnumuCCinFV_stack_12->SetBinError(15,2.607552);
   hnumuCCinFV_stack_12->SetBinError(16,2.071511);
   hnumuCCinFV_stack_12->SetBinError(17,1.926166);
   hnumuCCinFV_stack_12->SetBinError(18,1.439935);
   hnumuCCinFV_stack_12->SetBinError(19,1.69875);
   hnumuCCinFV_stack_12->SetBinError(20,1.944279);
   hnumuCCinFV_stack_12->SetBinError(21,1.616938);
   hnumuCCinFV_stack_12->SetBinError(22,1.958827);
   hnumuCCinFV_stack_12->SetBinError(23,1.343282);
   hnumuCCinFV_stack_12->SetBinError(24,0.6631494);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.802833);
   hnueCCinFV_stack_13->SetBinContent(2,1.747976);
   hnueCCinFV_stack_13->SetBinContent(3,1.123984);
   hnueCCinFV_stack_13->SetBinContent(4,1.751811);
   hnueCCinFV_stack_13->SetBinContent(5,2.383188);
   hnueCCinFV_stack_13->SetBinContent(6,1.119817);
   hnueCCinFV_stack_13->SetBinContent(7,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(8,0.536893);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,1.913882);
   hnueCCinFV_stack_13->SetBinContent(11,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(12,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,1.27568);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,2.164385);
   hnueCCinFV_stack_13->SetBinContent(19,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(20,0.6905718);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.7129175);
   hnueCCinFV_stack_13->SetBinError(2,0.6853088);
   hnueCCinFV_stack_13->SetBinError(3,0.6021119);
   hnueCCinFV_stack_13->SetBinError(4,0.742778);
   hnueCCinFV_stack_13->SetBinError(5,1.262462);
   hnueCCinFV_stack_13->SetBinError(6,0.5790761);
   hnueCCinFV_stack_13->SetBinError(7,0.4800908);
   hnueCCinFV_stack_13->SetBinError(8,0.3929602);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.7414176);
   hnueCCinFV_stack_13->SetBinError(11,0.1967157);
   hnueCCinFV_stack_13->SetBinError(12,0.2538659);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.5803126);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,1.678565);
   hnueCCinFV_stack_13->SetBinError(19,0.42079);
   hnueCCinFV_stack_13->SetBinError(20,0.4008118);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__14->SetBinContent(1,35.85715);
   hmcerror__14->SetBinContent(2,103.0787);
   hmcerror__14->SetBinContent(3,153.0424);
   hmcerror__14->SetBinContent(4,208.2266);
   hmcerror__14->SetBinContent(5,219.5329);
   hmcerror__14->SetBinContent(6,231.1916);
   hmcerror__14->SetBinContent(7,231.1272);
   hmcerror__14->SetBinContent(8,240.2137);
   hmcerror__14->SetBinContent(9,222.9964);
   hmcerror__14->SetBinContent(10,206.055);
   hmcerror__14->SetBinContent(11,217.7041);
   hmcerror__14->SetBinContent(12,199.958);
   hmcerror__14->SetBinContent(13,176.0799);
   hmcerror__14->SetBinContent(14,158.7364);
   hmcerror__14->SetBinContent(15,164.6738);
   hmcerror__14->SetBinContent(16,136.4186);
   hmcerror__14->SetBinContent(17,123.2959);
   hmcerror__14->SetBinContent(18,117.7668);
   hmcerror__14->SetBinContent(19,106.0902);
   hmcerror__14->SetBinContent(20,107.3197);
   hmcerror__14->SetBinContent(21,81.0325);
   hmcerror__14->SetBinContent(22,66.9822);
   hmcerror__14->SetBinContent(23,40.80548);
   hmcerror__14->SetBinContent(24,15.52082);
   hmcerror__14->SetBinError(1,14.25973);
   hmcerror__14->SetBinError(2,35.32201);
   hmcerror__14->SetBinError(3,53.73455);
   hmcerror__14->SetBinError(4,65.53503);
   hmcerror__14->SetBinError(5,74.76597);
   hmcerror__14->SetBinError(6,85.70666);
   hmcerror__14->SetBinError(7,83.34999);
   hmcerror__14->SetBinError(8,84.57216);
   hmcerror__14->SetBinError(9,80.52131);
   hmcerror__14->SetBinError(10,76.66521);
   hmcerror__14->SetBinError(11,76.21636);
   hmcerror__14->SetBinError(12,73.54046);
   hmcerror__14->SetBinError(13,66.02375);
   hmcerror__14->SetBinError(14,53.23457);
   hmcerror__14->SetBinError(15,56.73504);
   hmcerror__14->SetBinError(16,51.25989);
   hmcerror__14->SetBinError(17,44.41671);
   hmcerror__14->SetBinError(18,41.88604);
   hmcerror__14->SetBinError(19,35.93359);
   hmcerror__14->SetBinError(20,35.45217);
   hmcerror__14->SetBinError(21,29.66244);
   hmcerror__14->SetBinError(22,22.16275);
   hmcerror__14->SetBinError(23,21.08793);
   hmcerror__14->SetBinError(24,8.036249);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
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
   Double_t _fy3017[24] = {
   33,
   94,
   134,
   149,
   163,
   164,
   175,
   155,
   137,
   145,
   131,
   154,
   131,
   123,
   121,
   99,
   81,
   96,
   89,
   87,
   64,
   55,
   33,
   8};
   Double_t _felx3017[24] = {
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
   Double_t _fely3017[24] = {
   5.8847,
   9.8173,
   11.57584,
   12.20656,
   12.76715,
   12.80625,
   13.22876,
   12.4499,
   11.7047,
   12.04159,
   11.44552,
   12.40967,
   11.44552,
   11.09054,
   11,
   10.0712,
   9.1239,
   9.9196,
   9.5566,
   9.4503,
   8.1273,
   7.546,
   5.8847,
   3.0307};
   Double_t _fehx3017[24] = {
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
   Double_t _fehy3017[24] = {
   5.6776,
   9.616,
   11.57584,
   12.20656,
   12.76715,
   12.80625,
   13.22876,
   12.4499,
   11.7047,
   12.04159,
   11.44552,
   12.40967,
   11.44552,
   11.09054,
   11,
   9.87,
   8.9221,
   9.718,
   9.3552,
   9.2488,
   7.9246,
   7.3425,
   5.6776,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(4.47237);
   Graph_Graph3017->SetMaximum(206.5547);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
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
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
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
   Double_t _fely3018[24] = {
   0.3976815,
   0.3426704,
   0.3511088,
   0.3147294,
   0.3405685,
   0.370717,
   0.360624,
   0.3520705,
   0.361088,
   0.3720619,
   0.3500915,
   0.3677794,
   0.3749646,
   0.3353646,
   0.3445298,
   0.3757544,
   0.3602449,
   0.3556695,
   0.3387078,
   0.3303418,
   0.3660561,
   0.3308752,
   0.5167917,
   0.5177721};
   Double_t _fehx3018[24] = {
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
   Double_t _fehy3018[24] = {
   0.3976815,
   0.3426704,
   0.3511088,
   0.3147294,
   0.3405685,
   0.370717,
   0.360624,
   0.3520705,
   0.361088,
   0.3720619,
   0.3500915,
   0.3677794,
   0.3749646,
   0.3353646,
   0.3445298,
   0.3757544,
   0.3602449,
   0.3556695,
   0.3387078,
   0.3303418,
   0.3660561,
   0.3308752,
   0.5167917,
   0.5177721};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
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
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
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
   Double_t _fely3019[24] = {
   0.2711672,
   0.2986208,
   0.3064119,
   0.2896537,
   0.3093824,
   0.3252495,
   0.334851,
   0.3227552,
   0.3254204,
   0.3432582,
   0.319962,
   0.3350511,
   0.3346078,
   0.3055556,
   0.3049696,
   0.320492,
   0.3093869,
   0.3023467,
   0.3004219,
   0.2796418,
   0.2828427,
   0.273857,
   0.2532413,
   0.2922387};
   Double_t _fehx3019[24] = {
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
   Double_t _fehy3019[24] = {
   0.2711672,
   0.2986208,
   0.3064119,
   0.2896537,
   0.3093824,
   0.3252495,
   0.334851,
   0.3227552,
   0.3254204,
   0.3432582,
   0.319962,
   0.3350511,
   0.3346078,
   0.3055556,
   0.3049696,
   0.320492,
   0.3093869,
   0.3023467,
   0.3004219,
   0.2796418,
   0.2828427,
   0.273857,
   0.2532413,
   0.2922387};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
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
   Double_t _fy3020[24] = {
   0.9203184,
   0.9119248,
   0.8755741,
   0.7155665,
   0.7424856,
   0.7093682,
   0.757159,
   0.6452589,
   0.6143598,
   0.7036956,
   0.6017342,
   0.7701616,
   0.7439803,
   0.7748694,
   0.734786,
   0.7257075,
   0.6569563,
   0.8151706,
   0.8389086,
   0.8106622,
   0.7898065,
   0.8211137,
   0.808715,
   0.5154365};
   Double_t _felx3020[24] = {
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
   Double_t _fely3020[24] = {
   0.1641151,
   0.09524084,
   0.07563808,
   0.05862149,
   0.05815596,
   0.05539235,
   0.05723584,
   0.05182844,
   0.0524883,
   0.05843874,
   0.05257376,
   0.06206139,
   0.06500186,
   0.06986762,
   0.06679873,
   0.07382571,
   0.07400004,
   0.0842309,
   0.09007993,
   0.08805748,
   0.1002968,
   0.1126568,
   0.1442135,
   0.1952667};
   Double_t _fehx3020[24] = {
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
   Double_t _fehy3020[24] = {
   0.1583394,
   0.09328797,
   0.07563808,
   0.05862149,
   0.05815596,
   0.05539235,
   0.05723584,
   0.05182844,
   0.0524883,
   0.05843874,
   0.05257376,
   0.06206139,
   0.06500186,
   0.06986762,
   0.06679873,
   0.07235084,
   0.07236333,
   0.08251904,
   0.08818155,
   0.08617991,
   0.09779533,
   0.1096187,
   0.1391382,
   0.1797327};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.2443211);
   Graph_Graph3020->SetMaximum(1.154507);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

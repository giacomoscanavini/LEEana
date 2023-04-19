#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 11:58:34 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-48.68,101.5385,5382.984);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__1->SetBinContent(1,2434);
   hmc__1->SetBinContent(2,678.9906);
   hmc__1->SetBinContent(3,620.8956);
   hmc__1->SetBinContent(4,538.9442);
   hmc__1->SetBinContent(5,475.6205);
   hmc__1->SetBinContent(6,416.2968);
   hmc__1->SetBinContent(7,358.6696);
   hmc__1->SetBinContent(8,281.326);
   hmc__1->SetBinContent(9,227.7696);
   hmc__1->SetBinContent(10,186.3502);
   hmc__1->SetBinContent(11,175.054);
   hmc__1->SetBinContent(12,161.7224);
   hmc__1->SetBinContent(13,129.1512);
   hmc__1->SetBinContent(14,103.0054);
   hmc__1->SetBinContent(15,87.191);
   hmc__1->SetBinContent(16,64.10026);
   hmc__1->SetBinContent(17,52.46506);
   hmc__1->SetBinContent(18,52.36731);
   hmc__1->SetBinContent(19,47.88783);
   hmc__1->SetBinContent(20,43.06554);
   hmc__1->SetBinContent(21,32.84369);
   hmc__1->SetBinContent(22,27.0692);
   hmc__1->SetBinContent(23,24.75385);
   hmc__1->SetBinContent(24,15.34209);
   hmc__1->SetBinContent(25,238.9288);
   hmc__1->SetBinError(1,554.1203);
   hmc__1->SetBinError(2,186.9547);
   hmc__1->SetBinError(3,168.4975);
   hmc__1->SetBinError(4,149.1733);
   hmc__1->SetBinError(5,128.0184);
   hmc__1->SetBinError(6,110.5013);
   hmc__1->SetBinError(7,91.80961);
   hmc__1->SetBinError(8,74.19544);
   hmc__1->SetBinError(9,63.32394);
   hmc__1->SetBinError(10,54.4876);
   hmc__1->SetBinError(11,50.12447);
   hmc__1->SetBinError(12,40.23696);
   hmc__1->SetBinError(13,36.41408);
   hmc__1->SetBinError(14,29.26836);
   hmc__1->SetBinError(15,27.01767);
   hmc__1->SetBinError(16,22.12394);
   hmc__1->SetBinError(17,18.35487);
   hmc__1->SetBinError(18,18.13519);
   hmc__1->SetBinError(19,16.27286);
   hmc__1->SetBinError(20,16.09788);
   hmc__1->SetBinError(21,15.99782);
   hmc__1->SetBinError(22,12.07745);
   hmc__1->SetBinError(23,13.18894);
   hmc__1->SetBinError(24,9.710545);
   hmc__1->SetBinError(25,66.08552);
   hmc__1->SetMinimum(-48.68);
   hmc__1->SetMaximum(5111.401);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,90);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(2555.7);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,47.25544);
   hbadmatch_stack_1->SetBinContent(2,10.57931);
   hbadmatch_stack_1->SetBinContent(3,11.02092);
   hbadmatch_stack_1->SetBinContent(4,11.52619);
   hbadmatch_stack_1->SetBinContent(5,7.52868);
   hbadmatch_stack_1->SetBinContent(6,8.351152);
   hbadmatch_stack_1->SetBinContent(7,7.390952);
   hbadmatch_stack_1->SetBinContent(8,4.132388);
   hbadmatch_stack_1->SetBinContent(9,6.071507);
   hbadmatch_stack_1->SetBinContent(10,6.51959);
   hbadmatch_stack_1->SetBinContent(11,4.978167);
   hbadmatch_stack_1->SetBinContent(12,8.357156);
   hbadmatch_stack_1->SetBinContent(13,2.669293);
   hbadmatch_stack_1->SetBinContent(14,3.312412);
   hbadmatch_stack_1->SetBinContent(15,4.162601);
   hbadmatch_stack_1->SetBinContent(16,2.179284);
   hbadmatch_stack_1->SetBinContent(17,1.863052);
   hbadmatch_stack_1->SetBinContent(18,3.56924);
   hbadmatch_stack_1->SetBinContent(19,1.947182);
   hbadmatch_stack_1->SetBinContent(20,1.839129);
   hbadmatch_stack_1->SetBinContent(21,1.946168);
   hbadmatch_stack_1->SetBinContent(22,2.906107);
   hbadmatch_stack_1->SetBinContent(23,1.161388);
   hbadmatch_stack_1->SetBinContent(24,0.6367154);
   hbadmatch_stack_1->SetBinContent(25,18.62942);
   hbadmatch_stack_1->SetBinError(1,3.663754);
   hbadmatch_stack_1->SetBinError(2,1.680613);
   hbadmatch_stack_1->SetBinError(3,2.292333);
   hbadmatch_stack_1->SetBinError(4,1.96744);
   hbadmatch_stack_1->SetBinError(5,1.326858);
   hbadmatch_stack_1->SetBinError(6,1.472188);
   hbadmatch_stack_1->SetBinError(7,1.363604);
   hbadmatch_stack_1->SetBinError(8,1.080703);
   hbadmatch_stack_1->SetBinError(9,1.645518);
   hbadmatch_stack_1->SetBinError(10,1.444858);
   hbadmatch_stack_1->SetBinError(11,1.320014);
   hbadmatch_stack_1->SetBinError(12,2.383154);
   hbadmatch_stack_1->SetBinError(13,0.8304392);
   hbadmatch_stack_1->SetBinError(14,0.991811);
   hbadmatch_stack_1->SetBinError(15,1.01297);
   hbadmatch_stack_1->SetBinError(16,0.7623383);
   hbadmatch_stack_1->SetBinError(17,0.6918071);
   hbadmatch_stack_1->SetBinError(18,0.9151544);
   hbadmatch_stack_1->SetBinError(19,0.7775628);
   hbadmatch_stack_1->SetBinError(20,0.7997811);
   hbadmatch_stack_1->SetBinError(21,0.6626819);
   hbadmatch_stack_1->SetBinError(22,0.977901);
   hbadmatch_stack_1->SetBinError(23,0.5341574);
   hbadmatch_stack_1->SetBinError(24,0.3697897);
   hbadmatch_stack_1->SetBinError(25,2.782245);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,282.1633);
   hext_stack_2->SetBinContent(2,47.8682);
   hext_stack_2->SetBinContent(3,49.25076);
   hext_stack_2->SetBinContent(4,40.35912);
   hext_stack_2->SetBinContent(5,40.00884);
   hext_stack_2->SetBinContent(6,38.03373);
   hext_stack_2->SetBinContent(7,35.58255);
   hext_stack_2->SetBinContent(8,25.14672);
   hext_stack_2->SetBinContent(9,23.6875);
   hext_stack_2->SetBinContent(10,12.1113);
   hext_stack_2->SetBinContent(11,17.78769);
   hext_stack_2->SetBinContent(12,28.28852);
   hext_stack_2->SetBinContent(13,21.31133);
   hext_stack_2->SetBinContent(14,11.97285);
   hext_stack_2->SetBinContent(15,6.985565);
   hext_stack_2->SetBinContent(16,2.663019);
   hext_stack_2->SetBinContent(17,3.889996);
   hext_stack_2->SetBinContent(18,6.284869);
   hext_stack_2->SetBinContent(19,6.463634);
   hext_stack_2->SetBinContent(20,7.434054);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,3.408376);
   hext_stack_2->SetBinContent(23,4.670063);
   hext_stack_2->SetBinContent(24,1.37261);
   hext_stack_2->SetBinContent(25,36.53816);
   hext_stack_2->SetBinError(1,11.56651);
   hext_stack_2->SetBinError(2,4.707127);
   hext_stack_2->SetBinError(3,4.722472);
   hext_stack_2->SetBinError(4,4.266043);
   hext_stack_2->SetBinError(5,4.15114);
   hext_stack_2->SetBinError(6,4.171974);
   hext_stack_2->SetBinError(7,4.059496);
   hext_stack_2->SetBinError(8,3.431572);
   hext_stack_2->SetBinError(9,3.30125);
   hext_stack_2->SetBinError(10,2.468781);
   hext_stack_2->SetBinError(11,2.887967);
   hext_stack_2->SetBinError(12,3.895305);
   hext_stack_2->SetBinError(13,3.199013);
   hext_stack_2->SetBinError(14,2.346534);
   hext_stack_2->SetBinError(15,1.612554);
   hext_stack_2->SetBinError(16,1.142086);
   hext_stack_2->SetBinError(17,1.264566);
   hext_stack_2->SetBinError(18,1.823959);
   hext_stack_2->SetBinError(19,1.744878);
   hext_stack_2->SetBinError(20,1.922661);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,1.082827);
   hext_stack_2->SetBinError(23,1.612283);
   hext_stack_2->SetBinError(24,0.8259691);
   hext_stack_2->SetBinError(25,3.863199);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,28.93406);
   hdirt_stack_3->SetBinContent(2,4.261725);
   hdirt_stack_3->SetBinContent(3,3.651505);
   hdirt_stack_3->SetBinContent(4,3.978255);
   hdirt_stack_3->SetBinContent(5,5.341975);
   hdirt_stack_3->SetBinContent(6,3.558852);
   hdirt_stack_3->SetBinContent(7,3.239447);
   hdirt_stack_3->SetBinContent(8,2.434273);
   hdirt_stack_3->SetBinContent(9,1.351044);
   hdirt_stack_3->SetBinContent(10,2.185586);
   hdirt_stack_3->SetBinContent(11,1.913562);
   hdirt_stack_3->SetBinContent(12,1.858015);
   hdirt_stack_3->SetBinContent(13,0.4713104);
   hdirt_stack_3->SetBinContent(14,1.930572);
   hdirt_stack_3->SetBinContent(15,0.6951543);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(17,0.4063629);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,4.813039);
   hdirt_stack_3->SetBinError(1,3.068792);
   hdirt_stack_3->SetBinError(2,1.032153);
   hdirt_stack_3->SetBinError(3,0.9441894);
   hdirt_stack_3->SetBinError(4,1.017055);
   hdirt_stack_3->SetBinError(5,1.177748);
   hdirt_stack_3->SetBinError(6,0.9862752);
   hdirt_stack_3->SetBinError(7,1.220824);
   hdirt_stack_3->SetBinError(8,0.7853506);
   hdirt_stack_3->SetBinError(9,0.5973077);
   hdirt_stack_3->SetBinError(10,0.8335828);
   hdirt_stack_3->SetBinError(11,0.7561288);
   hdirt_stack_3->SetBinError(12,0.7009424);
   hdirt_stack_3->SetBinError(13,0.3341085);
   hdirt_stack_3->SetBinError(14,0.7327593);
   hdirt_stack_3->SetBinError(15,0.4258516);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(17,0.2991412);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,1.208049);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,239.8552);
   houtFV_stack_4->SetBinContent(2,45.17535);
   houtFV_stack_4->SetBinContent(3,48.71699);
   houtFV_stack_4->SetBinContent(4,40.13341);
   houtFV_stack_4->SetBinContent(5,44.67127);
   houtFV_stack_4->SetBinContent(6,43.60472);
   houtFV_stack_4->SetBinContent(7,40.76846);
   houtFV_stack_4->SetBinContent(8,31.14098);
   houtFV_stack_4->SetBinContent(9,21.00091);
   houtFV_stack_4->SetBinContent(10,18.76055);
   houtFV_stack_4->SetBinContent(11,20.76166);
   houtFV_stack_4->SetBinContent(12,14.62701);
   houtFV_stack_4->SetBinContent(13,13.86243);
   houtFV_stack_4->SetBinContent(14,11.64101);
   houtFV_stack_4->SetBinContent(15,10.22669);
   houtFV_stack_4->SetBinContent(16,9.213085);
   houtFV_stack_4->SetBinContent(17,6.237174);
   houtFV_stack_4->SetBinContent(18,6.637922);
   houtFV_stack_4->SetBinContent(19,5.526379);
   houtFV_stack_4->SetBinContent(20,5.290804);
   houtFV_stack_4->SetBinContent(21,4.778176);
   houtFV_stack_4->SetBinContent(22,3.576268);
   houtFV_stack_4->SetBinContent(23,2.052291);
   houtFV_stack_4->SetBinContent(24,2.865808);
   houtFV_stack_4->SetBinContent(25,31.10718);
   houtFV_stack_4->SetBinError(1,7.742531);
   houtFV_stack_4->SetBinError(2,3.373314);
   houtFV_stack_4->SetBinError(3,3.520572);
   houtFV_stack_4->SetBinError(4,3.08714);
   houtFV_stack_4->SetBinError(5,3.391339);
   houtFV_stack_4->SetBinError(6,3.313241);
   houtFV_stack_4->SetBinError(7,3.478093);
   houtFV_stack_4->SetBinError(8,2.843815);
   houtFV_stack_4->SetBinError(9,2.236336);
   houtFV_stack_4->SetBinError(10,2.172397);
   houtFV_stack_4->SetBinError(11,2.279846);
   houtFV_stack_4->SetBinError(12,1.965825);
   houtFV_stack_4->SetBinError(13,1.890601);
   houtFV_stack_4->SetBinError(14,1.708997);
   houtFV_stack_4->SetBinError(15,1.632295);
   houtFV_stack_4->SetBinError(16,1.59446);
   houtFV_stack_4->SetBinError(17,1.240693);
   houtFV_stack_4->SetBinError(18,1.324356);
   houtFV_stack_4->SetBinError(19,1.176331);
   houtFV_stack_4->SetBinError(20,1.138515);
   houtFV_stack_4->SetBinError(21,1.10881);
   houtFV_stack_4->SetBinError(22,0.9988254);
   houtFV_stack_4->SetBinError(23,0.7073425);
   houtFV_stack_4->SetBinError(24,0.8902656);
   houtFV_stack_4->SetBinError(25,2.869412);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,51.56473);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.861936);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.249455);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.259089);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.3261);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.96556);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.959656);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.257748);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.040284);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.492485);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.008312);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9065858);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.300266);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7112858);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.162262);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.378186);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8739729);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8797055);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8144211);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7768354);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7652677);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6382085);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.464003);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5955142);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2848687);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4968153);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2545655);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5246312);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2436282);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5264212);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,6.525631);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.110534);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.86914);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.650012);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.923444);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.078562);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.52089);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.283072);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.380726);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.777294);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6185432);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4048739);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5145181);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3996326);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5241985);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.424506);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3388471);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4356673);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.09253378);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,859.1636);
   hNCpi0inFVres_stack_7->SetBinContent(2,284.2804);
   hNCpi0inFVres_stack_7->SetBinContent(3,252.187);
   hNCpi0inFVres_stack_7->SetBinContent(4,222.0099);
   hNCpi0inFVres_stack_7->SetBinContent(5,190.03);
   hNCpi0inFVres_stack_7->SetBinContent(6,155.1734);
   hNCpi0inFVres_stack_7->SetBinContent(7,136.6554);
   hNCpi0inFVres_stack_7->SetBinContent(8,105.19);
   hNCpi0inFVres_stack_7->SetBinContent(9,89.03456);
   hNCpi0inFVres_stack_7->SetBinContent(10,72.31241);
   hNCpi0inFVres_stack_7->SetBinContent(11,64.46603);
   hNCpi0inFVres_stack_7->SetBinContent(12,52.23584);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.43341);
   hNCpi0inFVres_stack_7->SetBinContent(14,34.62604);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.4431);
   hNCpi0inFVres_stack_7->SetBinContent(16,23.24777);
   hNCpi0inFVres_stack_7->SetBinContent(17,17.48807);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.59857);
   hNCpi0inFVres_stack_7->SetBinContent(19,15.26634);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.06739);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.525238);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.938002);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.500732);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.304666);
   hNCpi0inFVres_stack_7->SetBinContent(25,52.19913);
   hNCpi0inFVres_stack_7->SetBinError(1,9.572038);
   hNCpi0inFVres_stack_7->SetBinError(2,5.527917);
   hNCpi0inFVres_stack_7->SetBinError(3,5.184512);
   hNCpi0inFVres_stack_7->SetBinError(4,4.885484);
   hNCpi0inFVres_stack_7->SetBinError(5,4.54036);
   hNCpi0inFVres_stack_7->SetBinError(6,4.046418);
   hNCpi0inFVres_stack_7->SetBinError(7,3.817563);
   hNCpi0inFVres_stack_7->SetBinError(8,3.319113);
   hNCpi0inFVres_stack_7->SetBinError(9,3.0719);
   hNCpi0inFVres_stack_7->SetBinError(10,2.715034);
   hNCpi0inFVres_stack_7->SetBinError(11,2.626294);
   hNCpi0inFVres_stack_7->SetBinError(12,2.413452);
   hNCpi0inFVres_stack_7->SetBinError(13,2.117664);
   hNCpi0inFVres_stack_7->SetBinError(14,1.933523);
   hNCpi0inFVres_stack_7->SetBinError(15,1.86553);
   hNCpi0inFVres_stack_7->SetBinError(16,1.588968);
   hNCpi0inFVres_stack_7->SetBinError(17,1.428737);
   hNCpi0inFVres_stack_7->SetBinError(18,1.236168);
   hNCpi0inFVres_stack_7->SetBinError(19,1.272804);
   hNCpi0inFVres_stack_7->SetBinError(20,1.249945);
   hNCpi0inFVres_stack_7->SetBinError(21,1.055795);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9903606);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8714831);
   hNCpi0inFVres_stack_7->SetBinError(24,0.550691);
   hNCpi0inFVres_stack_7->SetBinError(25,2.398989);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,175.0331);
   hNCpi0inFVdis_stack_8->SetBinContent(2,51.71503);
   hNCpi0inFVdis_stack_8->SetBinContent(3,50.03388);
   hNCpi0inFVdis_stack_8->SetBinContent(4,46.09831);
   hNCpi0inFVdis_stack_8->SetBinContent(5,35.2742);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.33546);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.40463);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.50268);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.15135);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.90472);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.23568);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.08165);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.741037);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.566822);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.4367);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.455479);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.077226);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.941798);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.973442);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.771158);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.382302);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.518562);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.504944);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.7112858);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.539839);
   hNCpi0inFVdis_stack_8->SetBinError(1,4.250821);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.384955);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.338051);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.274569);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.911981);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.781578);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.605416);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.512072);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.331415);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.227479);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.005119);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.065458);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9679013);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8313305);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7446891);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8426467);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3965364);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5102767);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6687336);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4098107);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4889179);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3939107);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3847468);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2436282);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9406421);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4744679);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2144572);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,343.5129);
   hCCpi0inFV_stack_10->SetBinContent(2,95.656);
   hCCpi0inFV_stack_10->SetBinContent(3,90.92474);
   hCCpi0inFV_stack_10->SetBinContent(4,80.13882);
   hCCpi0inFV_stack_10->SetBinContent(5,70.85088);
   hCCpi0inFV_stack_10->SetBinContent(6,71.35983);
   hCCpi0inFV_stack_10->SetBinContent(7,56.30242);
   hCCpi0inFV_stack_10->SetBinContent(8,48.86378);
   hCCpi0inFV_stack_10->SetBinContent(9,33.05934);
   hCCpi0inFV_stack_10->SetBinContent(10,30.29213);
   hCCpi0inFV_stack_10->SetBinContent(11,26.1621);
   hCCpi0inFV_stack_10->SetBinContent(12,20.76222);
   hCCpi0inFV_stack_10->SetBinContent(13,18.38546);
   hCCpi0inFV_stack_10->SetBinContent(14,17.72301);
   hCCpi0inFV_stack_10->SetBinContent(15,12.48784);
   hCCpi0inFV_stack_10->SetBinContent(16,10.80212);
   hCCpi0inFV_stack_10->SetBinContent(17,8.10009);
   hCCpi0inFV_stack_10->SetBinContent(18,8.211093);
   hCCpi0inFV_stack_10->SetBinContent(19,5.333649);
   hCCpi0inFV_stack_10->SetBinContent(20,6.156867);
   hCCpi0inFV_stack_10->SetBinContent(21,4.100143);
   hCCpi0inFV_stack_10->SetBinContent(22,1.960392);
   hCCpi0inFV_stack_10->SetBinContent(23,2.249007);
   hCCpi0inFV_stack_10->SetBinContent(24,2.258955);
   hCCpi0inFV_stack_10->SetBinContent(25,29.36335);
   hCCpi0inFV_stack_10->SetBinError(1,9.302478);
   hCCpi0inFV_stack_10->SetBinError(2,4.931524);
   hCCpi0inFV_stack_10->SetBinError(3,4.811065);
   hCCpi0inFV_stack_10->SetBinError(4,4.487536);
   hCCpi0inFV_stack_10->SetBinError(5,4.194598);
   hCCpi0inFV_stack_10->SetBinError(6,4.241951);
   hCCpi0inFV_stack_10->SetBinError(7,3.774587);
   hCCpi0inFV_stack_10->SetBinError(8,3.495624);
   hCCpi0inFV_stack_10->SetBinError(9,2.778153);
   hCCpi0inFV_stack_10->SetBinError(10,2.751791);
   hCCpi0inFV_stack_10->SetBinError(11,2.572354);
   hCCpi0inFV_stack_10->SetBinError(12,2.263293);
   hCCpi0inFV_stack_10->SetBinError(13,2.19016);
   hCCpi0inFV_stack_10->SetBinError(14,2.168221);
   hCCpi0inFV_stack_10->SetBinError(15,1.775803);
   hCCpi0inFV_stack_10->SetBinError(16,1.587355);
   hCCpi0inFV_stack_10->SetBinError(17,1.392406);
   hCCpi0inFV_stack_10->SetBinError(18,1.470601);
   hCCpi0inFV_stack_10->SetBinError(19,1.213241);
   hCCpi0inFV_stack_10->SetBinError(20,1.287311);
   hCCpi0inFV_stack_10->SetBinError(21,0.9605825);
   hCCpi0inFV_stack_10->SetBinError(22,0.6199358);
   hCCpi0inFV_stack_10->SetBinError(23,0.7341869);
   hCCpi0inFV_stack_10->SetBinError(24,0.7784621);
   hCCpi0inFV_stack_10->SetBinError(25,2.787311);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,171.0322);
   hNCinFV_stack_11->SetBinContent(2,48.74443);
   hNCinFV_stack_11->SetBinContent(3,40.0259);
   hNCinFV_stack_11->SetBinContent(4,34.24447);
   hNCinFV_stack_11->SetBinContent(5,30.57704);
   hNCinFV_stack_11->SetBinContent(6,24.97782);
   hNCinFV_stack_11->SetBinContent(7,24.60843);
   hNCinFV_stack_11->SetBinContent(8,16.60551);
   hNCinFV_stack_11->SetBinContent(9,15.3367);
   hNCinFV_stack_11->SetBinContent(10,12.68811);
   hNCinFV_stack_11->SetBinContent(11,16.30398);
   hNCinFV_stack_11->SetBinContent(12,10.39707);
   hNCinFV_stack_11->SetBinContent(13,8.494399);
   hNCinFV_stack_11->SetBinContent(14,5.084778);
   hNCinFV_stack_11->SetBinContent(15,5.913668);
   hNCinFV_stack_11->SetBinContent(16,4.541731);
   hNCinFV_stack_11->SetBinContent(17,4.251426);
   hNCinFV_stack_11->SetBinContent(18,4.21447);
   hNCinFV_stack_11->SetBinContent(19,3.712842);
   hNCinFV_stack_11->SetBinContent(20,3.714533);
   hNCinFV_stack_11->SetBinContent(21,2.976313);
   hNCinFV_stack_11->SetBinContent(22,1.178602);
   hNCinFV_stack_11->SetBinContent(23,1.127039);
   hNCinFV_stack_11->SetBinContent(24,1.949166);
   hNCinFV_stack_11->SetBinContent(25,19.38972);
   hNCinFV_stack_11->SetBinError(1,6.528225);
   hNCinFV_stack_11->SetBinError(2,3.521347);
   hNCinFV_stack_11->SetBinError(3,3.139766);
   hNCinFV_stack_11->SetBinError(4,2.936983);
   hNCinFV_stack_11->SetBinError(5,2.803377);
   hNCinFV_stack_11->SetBinError(6,2.47461);
   hNCinFV_stack_11->SetBinError(7,2.528499);
   hNCinFV_stack_11->SetBinError(8,2.058159);
   hNCinFV_stack_11->SetBinError(9,1.972092);
   hNCinFV_stack_11->SetBinError(10,1.862445);
   hNCinFV_stack_11->SetBinError(11,2.06752);
   hNCinFV_stack_11->SetBinError(12,1.665535);
   hNCinFV_stack_11->SetBinError(13,1.467896);
   hNCinFV_stack_11->SetBinError(14,1.092166);
   hNCinFV_stack_11->SetBinError(15,1.226083);
   hNCinFV_stack_11->SetBinError(16,1.11103);
   hNCinFV_stack_11->SetBinError(17,1.038757);
   hNCinFV_stack_11->SetBinError(18,0.9619446);
   hNCinFV_stack_11->SetBinError(19,0.9612155);
   hNCinFV_stack_11->SetBinError(20,0.9615599);
   hNCinFV_stack_11->SetBinError(21,0.8790201);
   hNCinFV_stack_11->SetBinError(22,0.4811646);
   hNCinFV_stack_11->SetBinError(23,0.5201044);
   hNCinFV_stack_11->SetBinError(24,0.7604681);
   hNCinFV_stack_11->SetBinError(25,2.220091);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,194.2829);
   hnumuCCinFV_stack_12->SetBinContent(2,78.14891);
   hnumuCCinFV_stack_12->SetBinContent(3,62.48283);
   hnumuCCinFV_stack_12->SetBinContent(4,49.66071);
   hnumuCCinFV_stack_12->SetBinContent(5,42.29453);
   hnumuCCinFV_stack_12->SetBinContent(6,30.83781);
   hnumuCCinFV_stack_12->SetBinContent(7,23.09911);
   hnumuCCinFV_stack_12->SetBinContent(8,21.83784);
   hnumuCCinFV_stack_12->SetBinContent(9,17.6361);
   hnumuCCinFV_stack_12->SetBinContent(10,13.72023);
   hnumuCCinFV_stack_12->SetBinContent(11,9.028252);
   hnumuCCinFV_stack_12->SetBinContent(12,11.77612);
   hnumuCCinFV_stack_12->SetBinContent(13,8.766945);
   hnumuCCinFV_stack_12->SetBinContent(14,8.691277);
   hnumuCCinFV_stack_12->SetBinContent(15,8.334578);
   hnumuCCinFV_stack_12->SetBinContent(16,4.963852);
   hnumuCCinFV_stack_12->SetBinContent(17,7.509212);
   hnumuCCinFV_stack_12->SetBinContent(18,5.080791);
   hnumuCCinFV_stack_12->SetBinContent(19,4.698136);
   hnumuCCinFV_stack_12->SetBinContent(20,2.674422);
   hnumuCCinFV_stack_12->SetBinContent(21,5.076163);
   hnumuCCinFV_stack_12->SetBinContent(22,3.161009);
   hnumuCCinFV_stack_12->SetBinContent(23,4.53383);
   hnumuCCinFV_stack_12->SetBinContent(24,2.02399);
   hnumuCCinFV_stack_12->SetBinContent(25,33.44169);
   hnumuCCinFV_stack_12->SetBinError(1,8.162044);
   hnumuCCinFV_stack_12->SetBinError(2,5.365907);
   hnumuCCinFV_stack_12->SetBinError(3,5.078639);
   hnumuCCinFV_stack_12->SetBinError(4,4.363329);
   hnumuCCinFV_stack_12->SetBinError(5,3.83009);
   hnumuCCinFV_stack_12->SetBinError(6,3.261259);
   hnumuCCinFV_stack_12->SetBinError(7,2.477454);
   hnumuCCinFV_stack_12->SetBinError(8,2.606227);
   hnumuCCinFV_stack_12->SetBinError(9,2.232833);
   hnumuCCinFV_stack_12->SetBinError(10,1.947126);
   hnumuCCinFV_stack_12->SetBinError(11,1.463846);
   hnumuCCinFV_stack_12->SetBinError(12,1.731756);
   hnumuCCinFV_stack_12->SetBinError(13,1.528055);
   hnumuCCinFV_stack_12->SetBinError(14,1.493817);
   hnumuCCinFV_stack_12->SetBinError(15,2.02357);
   hnumuCCinFV_stack_12->SetBinError(16,1.14873);
   hnumuCCinFV_stack_12->SetBinError(17,1.549283);
   hnumuCCinFV_stack_12->SetBinError(18,1.350859);
   hnumuCCinFV_stack_12->SetBinError(19,1.166921);
   hnumuCCinFV_stack_12->SetBinError(20,0.8713284);
   hnumuCCinFV_stack_12->SetBinError(21,1.166582);
   hnumuCCinFV_stack_12->SetBinError(22,1.034249);
   hnumuCCinFV_stack_12->SetBinError(23,1.325555);
   hnumuCCinFV_stack_12->SetBinError(24,0.7701379);
   hnumuCCinFV_stack_12->SetBinError(25,3.229629);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,34.20264);
   hnueCCinFV_stack_13->SetBinContent(2,2.337544);
   hnueCCinFV_stack_13->SetBinContent(3,2.39889);
   hnueCCinFV_stack_13->SetBinContent(4,1.858039);
   hnueCCinFV_stack_13->SetBinContent(5,1.681907);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.9566132);
   hnueCCinFV_stack_13->SetBinContent(8,0.8057001);
   hnueCCinFV_stack_13->SetBinContent(9,0.7583942);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.9856228);
   hnueCCinFV_stack_13->SetBinContent(13,1.352455);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,1.410213);
   hnueCCinFV_stack_13->SetBinError(1,3.975561);
   hnueCCinFV_stack_13->SetBinError(2,0.8941915);
   hnueCCinFV_stack_13->SetBinError(3,0.8355506);
   hnueCCinFV_stack_13->SetBinError(4,0.7906309);
   hnueCCinFV_stack_13->SetBinError(5,0.7074139);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.4866822);
   hnueCCinFV_stack_13->SetBinError(8,0.4980907);
   hnueCCinFV_stack_13->SetBinError(9,0.4491572);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.5067728);
   hnueCCinFV_stack_13->SetBinError(13,1.173746);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.666213);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__2->SetBinContent(1,2434);
   hmcerror__2->SetBinContent(2,678.9906);
   hmcerror__2->SetBinContent(3,620.8956);
   hmcerror__2->SetBinContent(4,538.9442);
   hmcerror__2->SetBinContent(5,475.6205);
   hmcerror__2->SetBinContent(6,416.2968);
   hmcerror__2->SetBinContent(7,358.6696);
   hmcerror__2->SetBinContent(8,281.326);
   hmcerror__2->SetBinContent(9,227.7696);
   hmcerror__2->SetBinContent(10,186.3502);
   hmcerror__2->SetBinContent(11,175.054);
   hmcerror__2->SetBinContent(12,161.7224);
   hmcerror__2->SetBinContent(13,129.1512);
   hmcerror__2->SetBinContent(14,103.0054);
   hmcerror__2->SetBinContent(15,87.191);
   hmcerror__2->SetBinContent(16,64.10026);
   hmcerror__2->SetBinContent(17,52.46506);
   hmcerror__2->SetBinContent(18,52.36731);
   hmcerror__2->SetBinContent(19,47.88783);
   hmcerror__2->SetBinContent(20,43.06554);
   hmcerror__2->SetBinContent(21,32.84369);
   hmcerror__2->SetBinContent(22,27.0692);
   hmcerror__2->SetBinContent(23,24.75385);
   hmcerror__2->SetBinContent(24,15.34209);
   hmcerror__2->SetBinContent(25,238.9288);
   hmcerror__2->SetBinError(1,554.1203);
   hmcerror__2->SetBinError(2,186.9547);
   hmcerror__2->SetBinError(3,168.4975);
   hmcerror__2->SetBinError(4,149.1733);
   hmcerror__2->SetBinError(5,128.0184);
   hmcerror__2->SetBinError(6,110.5013);
   hmcerror__2->SetBinError(7,91.80961);
   hmcerror__2->SetBinError(8,74.19544);
   hmcerror__2->SetBinError(9,63.32394);
   hmcerror__2->SetBinError(10,54.4876);
   hmcerror__2->SetBinError(11,50.12447);
   hmcerror__2->SetBinError(12,40.23696);
   hmcerror__2->SetBinError(13,36.41408);
   hmcerror__2->SetBinError(14,29.26836);
   hmcerror__2->SetBinError(15,27.01767);
   hmcerror__2->SetBinError(16,22.12394);
   hmcerror__2->SetBinError(17,18.35487);
   hmcerror__2->SetBinError(18,18.13519);
   hmcerror__2->SetBinError(19,16.27286);
   hmcerror__2->SetBinError(20,16.09788);
   hmcerror__2->SetBinError(21,15.99782);
   hmcerror__2->SetBinError(22,12.07745);
   hmcerror__2->SetBinError(23,13.18894);
   hmcerror__2->SetBinError(24,9.710545);
   hmcerror__2->SetBinError(25,66.08552);
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
   
   Double_t _fx3001[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3001[24] = {
   2208,
   537,
   537,
   455,
   360,
   395,
   314,
   236,
   188,
   170,
   145,
   124,
   97,
   85,
   61,
   81,
   39,
   55,
   37,
   39,
   32,
   19,
   15,
   15};
   Double_t _felx3001[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3001[24] = {
   46.98936,
   23.17326,
   23.17326,
   21.33073,
   18.97367,
   19.87461,
   17.72005,
   15.36229,
   13.71131,
   13.0384,
   12.04159,
   11.13553,
   9.9704,
   9.3428,
   7.9383,
   9.1239,
   6.3813,
   7.546,
   6.2203,
   6.3813,
   5.7977,
   4.5151,
   4.0385,
   4.0385};
   Double_t _fehx3001[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3001[24] = {
   46.98936,
   23.17326,
   23.17326,
   21.33073,
   18.97367,
   19.87461,
   17.72005,
   15.36229,
   13.71131,
   13.0384,
   12.04159,
   11.13553,
   9.769,
   9.1411,
   7.7354,
   8.9221,
   6.1757,
   7.3425,
   6.0141,
   6.1757,
   5.5904,
   4.3011,
   3.8197,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(9.86535);
   Graph_Graph3001->SetMaximum(2479.392);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6244.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 161.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 717.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 68.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 691.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2703.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  529.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1065.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 492.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 620.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 51.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3002[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3002[24] = {
   0.2276583,
   0.2753421,
   0.2713781,
   0.276788,
   0.2691609,
   0.2654389,
   0.2559727,
   0.2637348,
   0.2780176,
   0.2923936,
   0.2863371,
   0.2488026,
   0.2819492,
   0.2841439,
   0.3098676,
   0.3451458,
   0.3498494,
   0.3463075,
   0.3398121,
   0.3737996,
   0.4870896,
   0.4461693,
   0.5328036,
   0.6329349};
   Double_t _fehx3002[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3002[24] = {
   0.2276583,
   0.2753421,
   0.2713781,
   0.276788,
   0.2691609,
   0.2654389,
   0.2559727,
   0.2637348,
   0.2780176,
   0.2923936,
   0.2863371,
   0.2488026,
   0.2819492,
   0.2841439,
   0.3098676,
   0.3451458,
   0.3498494,
   0.3463075,
   0.3398121,
   0.3737996,
   0.4870896,
   0.4461693,
   0.5328036,
   0.6329349};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3003[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3003[24] = {
   0.2218015,
   0.2688067,
   0.2603506,
   0.2671915,
   0.2586283,
   0.247026,
   0.2346638,
   0.247744,
   0.2438365,
   0.2488805,
   0.2458406,
   0.2116296,
   0.2232443,
   0.2214501,
   0.250806,
   0.2675436,
   0.2291933,
   0.2325928,
   0.2172364,
   0.2237559,
   0.263643,
   0.2249381,
   0.2225236,
   0.2720693};
   Double_t _fehx3003[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3003[24] = {
   0.2218015,
   0.2688067,
   0.2603506,
   0.2671915,
   0.2586283,
   0.247026,
   0.2346638,
   0.247744,
   0.2438365,
   0.2488805,
   0.2458406,
   0.2116296,
   0.2232443,
   0.2214501,
   0.250806,
   0.2675436,
   0.2291933,
   0.2325928,
   0.2172364,
   0.2237559,
   0.263643,
   0.2249381,
   0.2225236,
   0.2720693};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
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
   
   Double_t _fx3004[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3004[24] = {
   0.9071486,
   0.7908799,
   0.8648797,
   0.8442433,
   0.756906,
   0.9488424,
   0.8754575,
   0.8388846,
   0.8253956,
   0.9122611,
   0.8283156,
   0.766746,
   0.7510576,
   0.8251991,
   0.6996135,
   1.263645,
   0.7433518,
   1.050274,
   0.7726389,
   0.9055964,
   0.9743119,
   0.7019046,
   0.6059663,
   0.9777025};
   Double_t _felx3004[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3004[24] = {
   0.01930541,
   0.03412899,
   0.03732231,
   0.03957874,
   0.03989245,
   0.04774144,
   0.04940492,
   0.05460673,
   0.06019816,
   0.06996723,
   0.06878787,
   0.06885582,
   0.07719943,
   0.09070201,
   0.09104495,
   0.142338,
   0.1216295,
   0.1440975,
   0.1298931,
   0.1481765,
   0.176524,
   0.1667984,
   0.1631463,
   0.2632301};
   Double_t _fehx3004[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3004[24] = {
   0.01930541,
   0.03412899,
   0.03732231,
   0.03957874,
   0.03989245,
   0.04774144,
   0.04940492,
   0.05460673,
   0.06019816,
   0.06996723,
   0.06878787,
   0.06885582,
   0.07564002,
   0.08874386,
   0.08871787,
   0.1391898,
   0.1177107,
   0.1402115,
   0.1255872,
   0.1434023,
   0.1702123,
   0.1588927,
   0.1543073,
   0.2489687};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.3468184);
   Graph_Graph3004->SetMaximum(1.498837);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 10 16:13:01 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-230.7692,-11.4,1692.308,960.6);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(0,255.6803);
   hmc__1->SetBinContent(1,200.5674);
   hmc__1->SetBinContent(2,426.4429);
   hmc__1->SetBinContent(3,532.2026);
   hmc__1->SetBinContent(4,492.6338);
   hmc__1->SetBinContent(5,404.7424);
   hmc__1->SetBinContent(6,349.3365);
   hmc__1->SetBinContent(7,282.6906);
   hmc__1->SetBinContent(8,197.5755);
   hmc__1->SetBinContent(9,160.3094);
   hmc__1->SetBinContent(10,129.384);
   hmc__1->SetBinContent(11,87.05812);
   hmc__1->SetBinContent(12,67.03709);
   hmc__1->SetBinContent(13,48.14174);
   hmc__1->SetBinContent(14,46.96718);
   hmc__1->SetBinContent(15,37.13995);
   hmc__1->SetBinContent(16,24.46394);
   hmc__1->SetBinContent(17,27.50448);
   hmc__1->SetBinContent(18,19.43498);
   hmc__1->SetBinContent(19,20.55689);
   hmc__1->SetBinContent(20,18.01191);
   hmc__1->SetBinContent(21,15.84632);
   hmc__1->SetBinContent(22,19.48582);
   hmc__1->SetBinContent(23,14.73282);
   hmc__1->SetBinContent(24,8.496062);
   hmc__1->SetBinContent(25,9.993072);
   hmc__1->SetBinContent(26,180.7406);
   hmc__1->SetBinError(0,7.383763);
   hmc__1->SetBinError(1,39.28767);
   hmc__1->SetBinError(2,84.06828);
   hmc__1->SetBinError(3,101.5864);
   hmc__1->SetBinError(4,102.1508);
   hmc__1->SetBinError(5,84.7621);
   hmc__1->SetBinError(6,78.34088);
   hmc__1->SetBinError(7,61.10739);
   hmc__1->SetBinError(8,44.4736);
   hmc__1->SetBinError(9,34.45975);
   hmc__1->SetBinError(10,25.99743);
   hmc__1->SetBinError(11,16.56672);
   hmc__1->SetBinError(12,15.30738);
   hmc__1->SetBinError(13,10.57405);
   hmc__1->SetBinError(14,13.04237);
   hmc__1->SetBinError(15,8.535956);
   hmc__1->SetBinError(16,6.245234);
   hmc__1->SetBinError(17,7.258693);
   hmc__1->SetBinError(18,5.569915);
   hmc__1->SetBinError(19,5.377011);
   hmc__1->SetBinError(20,5.623668);
   hmc__1->SetBinError(21,5.477142);
   hmc__1->SetBinError(22,5.171325);
   hmc__1->SetBinError(23,4.848062);
   hmc__1->SetBinError(24,3.594022);
   hmc__1->SetBinError(25,4.172533);
   hmc__1->SetBinError(26,36.6558);
   hmc__1->SetMinimum(-11.4);
   hmc__1->SetMaximum(912);
   hmc__1->SetEntries(4030.668);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-1.293891e-08);
   hs1_stack_1->SetMaximum(558.8128);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(0,3.842136);
   hbadmatch_stack_1->SetBinContent(1,8.524403);
   hbadmatch_stack_1->SetBinContent(2,10.80918);
   hbadmatch_stack_1->SetBinContent(3,18.12017);
   hbadmatch_stack_1->SetBinContent(4,10.46403);
   hbadmatch_stack_1->SetBinContent(5,7.981322);
   hbadmatch_stack_1->SetBinContent(6,9.025226);
   hbadmatch_stack_1->SetBinContent(7,6.273977);
   hbadmatch_stack_1->SetBinContent(8,4.527905);
   hbadmatch_stack_1->SetBinContent(9,4.542934);
   hbadmatch_stack_1->SetBinContent(10,2.620007);
   hbadmatch_stack_1->SetBinContent(11,1.867178);
   hbadmatch_stack_1->SetBinContent(12,0.4591461);
   hbadmatch_stack_1->SetBinContent(13,1.569019);
   hbadmatch_stack_1->SetBinContent(14,0.4224982);
   hbadmatch_stack_1->SetBinContent(15,1.49281);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.4186046);
   hbadmatch_stack_1->SetBinContent(18,0.8770706);
   hbadmatch_stack_1->SetBinContent(19,1.114261);
   hbadmatch_stack_1->SetBinContent(20,0.5955275);
   hbadmatch_stack_1->SetBinContent(21,0.7319179);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.2248688);
   hbadmatch_stack_1->SetBinContent(26,5.754412);
   hbadmatch_stack_1->SetBinError(0,1.047336);
   hbadmatch_stack_1->SetBinError(1,1.684798);
   hbadmatch_stack_1->SetBinError(2,1.707611);
   hbadmatch_stack_1->SetBinError(3,2.737845);
   hbadmatch_stack_1->SetBinError(4,1.684525);
   hbadmatch_stack_1->SetBinError(5,1.442462);
   hbadmatch_stack_1->SetBinError(6,1.565247);
   hbadmatch_stack_1->SetBinError(7,2.024958);
   hbadmatch_stack_1->SetBinError(8,1.037601);
   hbadmatch_stack_1->SetBinError(9,1.455307);
   hbadmatch_stack_1->SetBinError(10,0.8172073);
   hbadmatch_stack_1->SetBinError(11,0.7900958);
   hbadmatch_stack_1->SetBinError(12,0.3246833);
   hbadmatch_stack_1->SetBinError(13,0.6078897);
   hbadmatch_stack_1->SetBinError(14,0.2996311);
   hbadmatch_stack_1->SetBinError(15,0.6301156);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.4186046);
   hbadmatch_stack_1->SetBinError(18,0.5197486);
   hbadmatch_stack_1->SetBinError(19,0.5713123);
   hbadmatch_stack_1->SetBinError(20,0.4454532);
   hbadmatch_stack_1->SetBinError(21,0.438694);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.2248688);
   hbadmatch_stack_1->SetBinError(26,1.353631);
   hbadmatch_stack_1->SetEntries(394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(0,34.69433);
   hext_stack_2->SetBinContent(1,17.80204);
   hext_stack_2->SetBinContent(2,61.84809);
   hext_stack_2->SetBinContent(3,76.01234);
   hext_stack_2->SetBinContent(4,50.84409);
   hext_stack_2->SetBinContent(5,47.49751);
   hext_stack_2->SetBinContent(6,33.6836);
   hext_stack_2->SetBinContent(7,33.75585);
   hext_stack_2->SetBinContent(8,19.44998);
   hext_stack_2->SetBinContent(9,20.0916);
   hext_stack_2->SetBinContent(10,18.03706);
   hext_stack_2->SetBinContent(11,13.6136);
   hext_stack_2->SetBinContent(12,7.142787);
   hext_stack_2->SetBinContent(13,5.986423);
   hext_stack_2->SetBinContent(14,7.187449);
   hext_stack_2->SetBinContent(15,7.840653);
   hext_stack_2->SetBinContent(16,2.592407);
   hext_stack_2->SetBinContent(17,2.912395);
   hext_stack_2->SetBinContent(18,4.049991);
   hext_stack_2->SetBinContent(19,4.181263);
   hext_stack_2->SetBinContent(20,1.868591);
   hext_stack_2->SetBinContent(21,2.674609);
   hext_stack_2->SetBinContent(22,7.643119);
   hext_stack_2->SetBinContent(23,2.517386);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,1.37261);
   hext_stack_2->SetBinContent(26,26.43272);
   hext_stack_2->SetBinError(0,3.985922);
   hext_stack_2->SetBinError(1,2.817437);
   hext_stack_2->SetBinError(2,5.381297);
   hext_stack_2->SetBinError(3,5.785705);
   hext_stack_2->SetBinError(4,4.722531);
   hext_stack_2->SetBinError(5,4.581016);
   hext_stack_2->SetBinError(6,4.013282);
   hext_stack_2->SetBinError(7,4.087058);
   hext_stack_2->SetBinError(8,2.827656);
   hext_stack_2->SetBinError(9,2.899536);
   hext_stack_2->SetBinError(10,2.860821);
   hext_stack_2->SetBinError(11,2.401064);
   hext_stack_2->SetBinError(12,1.709301);
   hext_stack_2->SetBinError(13,1.65925);
   hext_stack_2->SetBinError(14,1.875196);
   hext_stack_2->SetBinError(15,1.965184);
   hext_stack_2->SetBinError(16,1.085446);
   hext_stack_2->SetBinError(17,1.07159);
   hext_stack_2->SetBinError(18,1.258643);
   hext_stack_2->SetBinError(19,1.540793);
   hext_stack_2->SetBinError(20,0.840497);
   hext_stack_2->SetBinError(21,1.112781);
   hext_stack_2->SetBinError(22,2.100346);
   hext_stack_2->SetBinError(23,0.9575503);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.8259691);
   hext_stack_2->SetBinError(26,3.501814);
   hext_stack_2->SetEntries(1218);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(0,3.848742);
   hdirt_stack_3->SetBinContent(1,6.518134);
   hdirt_stack_3->SetBinContent(2,8.893213);
   hdirt_stack_3->SetBinContent(3,6.890802);
   hdirt_stack_3->SetBinContent(4,4.641604);
   hdirt_stack_3->SetBinContent(5,4.745103);
   hdirt_stack_3->SetBinContent(6,4.785714);
   hdirt_stack_3->SetBinContent(7,2.132746);
   hdirt_stack_3->SetBinContent(8,1.881044);
   hdirt_stack_3->SetBinContent(9,2.890796);
   hdirt_stack_3->SetBinContent(10,1.44366);
   hdirt_stack_3->SetBinContent(11,1.96351);
   hdirt_stack_3->SetBinContent(12,0.591349);
   hdirt_stack_3->SetBinContent(13,1.486485);
   hdirt_stack_3->SetBinContent(14,0.8175273);
   hdirt_stack_3->SetBinContent(15,1.000872);
   hdirt_stack_3->SetBinContent(16,0.8581587);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.5906858);
   hdirt_stack_3->SetBinContent(20,0.9115412);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.3866654);
   hdirt_stack_3->SetBinContent(26,3.147197);
   hdirt_stack_3->SetBinError(0,1.040478);
   hdirt_stack_3->SetBinError(1,1.38849);
   hdirt_stack_3->SetBinError(2,1.462583);
   hdirt_stack_3->SetBinError(3,1.413161);
   hdirt_stack_3->SetBinError(4,1.058378);
   hdirt_stack_3->SetBinError(5,1.113632);
   hdirt_stack_3->SetBinError(6,1.391825);
   hdirt_stack_3->SetBinError(7,0.7117346);
   hdirt_stack_3->SetBinError(8,0.6490387);
   hdirt_stack_3->SetBinError(9,1.002195);
   hdirt_stack_3->SetBinError(10,0.6050009);
   hdirt_stack_3->SetBinError(11,0.7507346);
   hdirt_stack_3->SetBinError(12,0.3829884);
   hdirt_stack_3->SetBinError(13,1.15304);
   hdirt_stack_3->SetBinError(14,0.411844);
   hdirt_stack_3->SetBinError(15,0.531595);
   hdirt_stack_3->SetBinError(16,0.5193504);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(19,0.42205);
   hdirt_stack_3->SetBinError(20,0.5597697);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.3866654);
   hdirt_stack_3->SetBinError(26,0.9641323);
   hdirt_stack_3->SetEntries(253);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(0,37.04512);
   houtFV_stack_4->SetBinContent(1,40.9025);
   houtFV_stack_4->SetBinContent(2,75.79136);
   houtFV_stack_4->SetBinContent(3,70.61395);
   houtFV_stack_4->SetBinContent(4,56.42416);
   houtFV_stack_4->SetBinContent(5,42.74625);
   houtFV_stack_4->SetBinContent(6,41.48085);
   houtFV_stack_4->SetBinContent(7,29.78129);
   houtFV_stack_4->SetBinContent(8,20.73091);
   houtFV_stack_4->SetBinContent(9,17.11901);
   houtFV_stack_4->SetBinContent(10,14.76181);
   houtFV_stack_4->SetBinContent(11,12.00283);
   houtFV_stack_4->SetBinContent(12,11.58422);
   houtFV_stack_4->SetBinContent(13,6.637539);
   houtFV_stack_4->SetBinContent(14,6.395953);
   houtFV_stack_4->SetBinContent(15,3.648072);
   houtFV_stack_4->SetBinContent(16,3.94789);
   houtFV_stack_4->SetBinContent(17,5.123425);
   houtFV_stack_4->SetBinContent(18,2.679393);
   houtFV_stack_4->SetBinContent(19,3.999153);
   houtFV_stack_4->SetBinContent(20,3.943946);
   houtFV_stack_4->SetBinContent(21,2.250697);
   houtFV_stack_4->SetBinContent(22,2.002419);
   houtFV_stack_4->SetBinContent(23,2.298879);
   houtFV_stack_4->SetBinContent(24,1.270501);
   houtFV_stack_4->SetBinContent(25,1.754141);
   houtFV_stack_4->SetBinContent(26,25.97276);
   houtFV_stack_4->SetBinError(0,3.063635);
   houtFV_stack_4->SetBinError(1,3.232436);
   houtFV_stack_4->SetBinError(2,4.489565);
   houtFV_stack_4->SetBinError(3,4.229757);
   houtFV_stack_4->SetBinError(4,3.724529);
   houtFV_stack_4->SetBinError(5,3.250438);
   houtFV_stack_4->SetBinError(6,3.240731);
   houtFV_stack_4->SetBinError(7,2.885748);
   houtFV_stack_4->SetBinError(8,2.252253);
   houtFV_stack_4->SetBinError(9,2.089294);
   houtFV_stack_4->SetBinError(10,1.959785);
   houtFV_stack_4->SetBinError(11,1.767737);
   houtFV_stack_4->SetBinError(12,1.635234);
   houtFV_stack_4->SetBinError(13,1.280014);
   houtFV_stack_4->SetBinError(14,1.272947);
   houtFV_stack_4->SetBinError(15,0.9525747);
   houtFV_stack_4->SetBinError(16,1.020191);
   houtFV_stack_4->SetBinError(17,1.160675);
   houtFV_stack_4->SetBinError(18,0.8775546);
   houtFV_stack_4->SetBinError(19,1.106228);
   houtFV_stack_4->SetBinError(20,1.033192);
   houtFV_stack_4->SetBinError(21,0.7346377);
   houtFV_stack_4->SetBinError(22,0.7348366);
   houtFV_stack_4->SetBinError(23,0.7066675);
   houtFV_stack_4->SetBinError(24,0.5895188);
   houtFV_stack_4->SetBinError(25,0.7350354);
   houtFV_stack_4->SetBinError(26,2.572278);
   houtFV_stack_4->SetEntries(2321);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(0,115.0117);
   hNCpi0inFV_stack_5->SetBinContent(1,73.53204);
   hNCpi0inFV_stack_5->SetBinContent(2,159.0631);
   hNCpi0inFV_stack_5->SetBinContent(3,219.042);
   hNCpi0inFV_stack_5->SetBinContent(4,234.9978);
   hNCpi0inFV_stack_5->SetBinContent(5,192.5415);
   hNCpi0inFV_stack_5->SetBinContent(6,173.5621);
   hNCpi0inFV_stack_5->SetBinContent(7,135.3225);
   hNCpi0inFV_stack_5->SetBinContent(8,98.1815);
   hNCpi0inFV_stack_5->SetBinContent(9,68.40191);
   hNCpi0inFV_stack_5->SetBinContent(10,57.21797);
   hNCpi0inFV_stack_5->SetBinContent(11,37.24836);
   hNCpi0inFV_stack_5->SetBinContent(12,28.18436);
   hNCpi0inFV_stack_5->SetBinContent(13,20.06597);
   hNCpi0inFV_stack_5->SetBinContent(14,18.74434);
   hNCpi0inFV_stack_5->SetBinContent(15,14.38368);
   hNCpi0inFV_stack_5->SetBinContent(16,9.177526);
   hNCpi0inFV_stack_5->SetBinContent(17,10.10283);
   hNCpi0inFV_stack_5->SetBinContent(18,6.886213);
   hNCpi0inFV_stack_5->SetBinContent(19,7.084941);
   hNCpi0inFV_stack_5->SetBinContent(20,6.43349);
   hNCpi0inFV_stack_5->SetBinContent(21,7.014802);
   hNCpi0inFV_stack_5->SetBinContent(22,4.815545);
   hNCpi0inFV_stack_5->SetBinContent(23,6.327252);
   hNCpi0inFV_stack_5->SetBinContent(24,3.894672);
   hNCpi0inFV_stack_5->SetBinContent(25,3.751646);
   hNCpi0inFV_stack_5->SetBinContent(26,62.05559);
   hNCpi0inFV_stack_5->SetBinError(0,3.438231);
   hNCpi0inFV_stack_5->SetBinError(1,2.764929);
   hNCpi0inFV_stack_5->SetBinError(2,4.126885);
   hNCpi0inFV_stack_5->SetBinError(3,4.771882);
   hNCpi0inFV_stack_5->SetBinError(4,4.998222);
   hNCpi0inFV_stack_5->SetBinError(5,4.465768);
   hNCpi0inFV_stack_5->SetBinError(6,4.294917);
   hNCpi0inFV_stack_5->SetBinError(7,3.834073);
   hNCpi0inFV_stack_5->SetBinError(8,3.200376);
   hNCpi0inFV_stack_5->SetBinError(9,2.598668);
   hNCpi0inFV_stack_5->SetBinError(10,2.534475);
   hNCpi0inFV_stack_5->SetBinError(11,1.966996);
   hNCpi0inFV_stack_5->SetBinError(12,1.749928);
   hNCpi0inFV_stack_5->SetBinError(13,1.47917);
   hNCpi0inFV_stack_5->SetBinError(14,1.460457);
   hNCpi0inFV_stack_5->SetBinError(15,1.211651);
   hNCpi0inFV_stack_5->SetBinError(16,0.9121154);
   hNCpi0inFV_stack_5->SetBinError(17,1.020296);
   hNCpi0inFV_stack_5->SetBinError(18,0.765001);
   hNCpi0inFV_stack_5->SetBinError(19,0.7859025);
   hNCpi0inFV_stack_5->SetBinError(20,0.8424943);
   hNCpi0inFV_stack_5->SetBinError(21,0.9004171);
   hNCpi0inFV_stack_5->SetBinError(22,0.6936898);
   hNCpi0inFV_stack_5->SetBinError(23,0.8971495);
   hNCpi0inFV_stack_5->SetBinError(24,0.6654849);
   hNCpi0inFV_stack_5->SetBinError(25,0.656784);
   hNCpi0inFV_stack_5->SetBinError(26,2.554303);
   hNCpi0inFV_stack_5->SetEntries(34003);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(0,33.70218);
   hCCpi0inFV_stack_6->SetBinContent(1,32.84725);
   hCCpi0inFV_stack_6->SetBinContent(2,64.63158);
   hCCpi0inFV_stack_6->SetBinContent(3,79.73283);
   hCCpi0inFV_stack_6->SetBinContent(4,85.20551);
   hCCpi0inFV_stack_6->SetBinContent(5,71.74724);
   hCCpi0inFV_stack_6->SetBinContent(6,61.09468);
   hCCpi0inFV_stack_6->SetBinContent(7,47.83102);
   hCCpi0inFV_stack_6->SetBinContent(8,34.22473);
   hCCpi0inFV_stack_6->SetBinContent(9,32.31765);
   hCCpi0inFV_stack_6->SetBinContent(10,22.80525);
   hCCpi0inFV_stack_6->SetBinContent(11,13.63135);
   hCCpi0inFV_stack_6->SetBinContent(12,11.10833);
   hCCpi0inFV_stack_6->SetBinContent(13,6.223456);
   hCCpi0inFV_stack_6->SetBinContent(14,7.175716);
   hCCpi0inFV_stack_6->SetBinContent(15,5.224725);
   hCCpi0inFV_stack_6->SetBinContent(16,3.519508);
   hCCpi0inFV_stack_6->SetBinContent(17,3.230893);
   hCCpi0inFV_stack_6->SetBinContent(18,2.734337);
   hCCpi0inFV_stack_6->SetBinContent(19,1.804013);
   hCCpi0inFV_stack_6->SetBinContent(20,2.305641);
   hCCpi0inFV_stack_6->SetBinContent(21,2.247316);
   hCCpi0inFV_stack_6->SetBinContent(22,1.712114);
   hCCpi0inFV_stack_6->SetBinContent(23,1.855576);
   hCCpi0inFV_stack_6->SetBinContent(24,2.14081);
   hCCpi0inFV_stack_6->SetBinContent(25,2.140229);
   hCCpi0inFV_stack_6->SetBinContent(26,27.50529);
   hCCpi0inFV_stack_6->SetBinError(0,2.827434);
   hCCpi0inFV_stack_6->SetBinError(1,2.840972);
   hCCpi0inFV_stack_6->SetBinError(2,4.030297);
   hCCpi0inFV_stack_6->SetBinError(3,4.462076);
   hCCpi0inFV_stack_6->SetBinError(4,4.662539);
   hCCpi0inFV_stack_6->SetBinError(5,4.220453);
   hCCpi0inFV_stack_6->SetBinError(6,3.937694);
   hCCpi0inFV_stack_6->SetBinError(7,3.489225);
   hCCpi0inFV_stack_6->SetBinError(8,2.902748);
   hCCpi0inFV_stack_6->SetBinError(9,2.897223);
   hCCpi0inFV_stack_6->SetBinError(10,2.399119);
   hCCpi0inFV_stack_6->SetBinError(11,1.872748);
   hCCpi0inFV_stack_6->SetBinError(12,1.618881);
   hCCpi0inFV_stack_6->SetBinError(13,1.237324);
   hCCpi0inFV_stack_6->SetBinError(14,1.359228);
   hCCpi0inFV_stack_6->SetBinError(15,1.152951);
   hCCpi0inFV_stack_6->SetBinError(16,0.9415746);
   hCCpi0inFV_stack_6->SetBinError(17,0.855484);
   hCCpi0inFV_stack_6->SetBinError(18,0.8558255);
   hCCpi0inFV_stack_6->SetBinError(19,0.7075491);
   hCCpi0inFV_stack_6->SetBinError(20,0.7085393);
   hCCpi0inFV_stack_6->SetBinError(21,0.7337357);
   hCCpi0inFV_stack_6->SetBinError(22,0.6201715);
   hCCpi0inFV_stack_6->SetBinError(23,0.6794384);
   hCCpi0inFV_stack_6->SetBinError(24,0.7842334);
   hCCpi0inFV_stack_6->SetBinError(25,0.7339273);
   hCCpi0inFV_stack_6->SetBinError(26,2.610261);
   hCCpi0inFV_stack_6->SetEntries(2832);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_7->SetBinContent(0,14.65804);
   hNCinFV_stack_7->SetBinContent(1,7.785541);
   hNCinFV_stack_7->SetBinContent(2,17.74885);
   hNCinFV_stack_7->SetBinContent(3,21.3407);
   hNCinFV_stack_7->SetBinContent(4,17.43102);
   hNCinFV_stack_7->SetBinContent(5,14.05666);
   hNCinFV_stack_7->SetBinContent(6,7.959197);
   hNCinFV_stack_7->SetBinContent(7,11.39526);
   hNCinFV_stack_7->SetBinContent(8,7.609484);
   hNCinFV_stack_7->SetBinContent(9,5.615518);
   hNCinFV_stack_7->SetBinContent(10,5.086469);
   hNCinFV_stack_7->SetBinContent(11,3.127768);
   hNCinFV_stack_7->SetBinContent(12,2.445722);
   hNCinFV_stack_7->SetBinContent(13,3.230893);
   hNCinFV_stack_7->SetBinContent(14,2.394159);
   hNCinFV_stack_7->SetBinContent(15,1.947476);
   hNCinFV_stack_7->SetBinContent(16,2.394159);
   hNCinFV_stack_7->SetBinContent(17,1.807394);
   hNCinFV_stack_7->SetBinContent(18,0.7336084);
   hNCinFV_stack_7->SetBinContent(19,0.5352025);
   hNCinFV_stack_7->SetBinContent(20,0.5867651);
   hNCinFV_stack_7->SetBinContent(21,0.3900497);
   hNCinFV_stack_7->SetBinContent(22,0.9303237);
   hNCinFV_stack_7->SetBinContent(23,0.3401776);
   hNCinFV_stack_7->SetBinContent(24,0.3900497);
   hNCinFV_stack_7->SetBinContent(26,7.854381);
   hNCinFV_stack_7->SetBinError(0,1.912686);
   hNCinFV_stack_7->SetBinError(1,1.331507);
   hNCinFV_stack_7->SetBinError(2,2.077143);
   hNCinFV_stack_7->SetBinError(3,2.317313);
   hNCinFV_stack_7->SetBinError(4,2.131935);
   hNCinFV_stack_7->SetBinError(5,1.932943);
   hNCinFV_stack_7->SetBinError(6,1.414554);
   hNCinFV_stack_7->SetBinError(7,1.665781);
   hNCinFV_stack_7->SetBinError(8,1.442185);
   hNCinFV_stack_7->SetBinError(9,1.242265);
   hNCinFV_stack_7->SetBinError(10,1.092469);
   hNCinFV_stack_7->SetBinError(11,0.8999062);
   hNCinFV_stack_7->SetBinError(12,0.7600838);
   hNCinFV_stack_7->SetBinError(13,0.855484);
   hNCinFV_stack_7->SetBinError(14,0.785313);
   hNCinFV_stack_7->SetBinError(15,0.7600326);
   hNCinFV_stack_7->SetBinError(16,0.785313);
   hNCinFV_stack_7->SetBinError(17,0.7084844);
   hNCinFV_stack_7->SetBinError(18,0.4394482);
   hNCinFV_stack_7->SetBinError(19,0.3921167);
   hNCinFV_stack_7->SetBinError(20,0.3387718);
   hNCinFV_stack_7->SetBinError(21,0.2758068);
   hNCinFV_stack_7->SetBinError(22,0.4814682);
   hNCinFV_stack_7->SetBinError(23,0.3401776);
   hNCinFV_stack_7->SetBinError(24,0.2758068);
   hNCinFV_stack_7->SetBinError(26,1.441624);
   hNCinFV_stack_7->SetEntries(678);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(0,11.41965);
   hnumuCCinFV_stack_8->SetBinContent(1,8.90206);
   hnumuCCinFV_stack_8->SetBinContent(2,25.43254);
   hnumuCCinFV_stack_8->SetBinContent(3,38.23069);
   hnumuCCinFV_stack_8->SetBinContent(4,30.30068);
   hnumuCCinFV_stack_8->SetBinContent(5,22.5759);
   hnumuCCinFV_stack_8->SetBinContent(6,16.0781);
   hnumuCCinFV_stack_8->SetBinContent(7,14.53907);
   hnumuCCinFV_stack_8->SetBinContent(8,9.399216);
   hnumuCCinFV_stack_8->SetBinContent(9,8.745604);
   hnumuCCinFV_stack_8->SetBinContent(10,7.018373);
   hnumuCCinFV_stack_8->SetBinContent(11,2.957531);
   hnumuCCinFV_stack_8->SetBinContent(12,4.514767);
   hnumuCCinFV_stack_8->SetBinContent(13,2.406759);
   hnumuCCinFV_stack_8->SetBinContent(14,3.829547);
   hnumuCCinFV_stack_8->SetBinContent(15,1.406646);
   hnumuCCinFV_stack_8->SetBinContent(16,1.123658);
   hnumuCCinFV_stack_8->SetBinContent(17,3.194617);
   hnumuCCinFV_stack_8->SetBinContent(18,0.788452);
   hnumuCCinFV_stack_8->SetBinContent(19,1.247375);
   hnumuCCinFV_stack_8->SetBinContent(20,1.171381);
   hnumuCCinFV_stack_8->SetBinContent(21,0.536893);
   hnumuCCinFV_stack_8->SetBinContent(22,0.9607925);
   hnumuCCinFV_stack_8->SetBinContent(23,0.5368931);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_8->SetBinContent(25,0.2904237);
   hnumuCCinFV_stack_8->SetBinContent(26,12.7991);
   hnumuCCinFV_stack_8->SetBinError(0,1.794202);
   hnumuCCinFV_stack_8->SetBinError(1,2.638838);
   hnumuCCinFV_stack_8->SetBinError(2,2.618637);
   hnumuCCinFV_stack_8->SetBinError(3,3.364563);
   hnumuCCinFV_stack_8->SetBinError(4,3.912516);
   hnumuCCinFV_stack_8->SetBinError(5,2.78968);
   hnumuCCinFV_stack_8->SetBinError(6,2.105953);
   hnumuCCinFV_stack_8->SetBinError(7,2.380972);
   hnumuCCinFV_stack_8->SetBinError(8,1.695669);
   hnumuCCinFV_stack_8->SetBinError(9,1.612574);
   hnumuCCinFV_stack_8->SetBinError(10,1.316718);
   hnumuCCinFV_stack_8->SetBinError(11,0.9056727);
   hnumuCCinFV_stack_8->SetBinError(12,1.141776);
   hnumuCCinFV_stack_8->SetBinError(13,0.869519);
   hnumuCCinFV_stack_8->SetBinError(14,1.672177);
   hnumuCCinFV_stack_8->SetBinError(15,0.5324695);
   hnumuCCinFV_stack_8->SetBinError(16,0.5188295);
   hnumuCCinFV_stack_8->SetBinError(17,1.402879);
   hnumuCCinFV_stack_8->SetBinError(18,0.3917754);
   hnumuCCinFV_stack_8->SetBinError(19,0.5109124);
   hnumuCCinFV_stack_8->SetBinError(20,0.6090381);
   hnumuCCinFV_stack_8->SetBinError(21,0.3929602);
   hnumuCCinFV_stack_8->SetBinError(22,0.5860093);
   hnumuCCinFV_stack_8->SetBinError(23,0.3929602);
   hnumuCCinFV_stack_8->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_8->SetBinError(25,0.2414325);
   hnumuCCinFV_stack_8->SetBinError(26,1.924432);
   hnumuCCinFV_stack_8->SetEntries(891);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_9->SetBinContent(0,1.45845);
   hnueCCinFV_stack_9->SetBinContent(1,3.753394);
   hnueCCinFV_stack_9->SetBinContent(2,2.224981);
   hnueCCinFV_stack_9->SetBinContent(3,2.219206);
   hnueCCinFV_stack_9->SetBinContent(4,2.324919);
   hnueCCinFV_stack_9->SetBinContent(5,0.8509424);
   hnueCCinFV_stack_9->SetBinContent(6,1.667014);
   hnueCCinFV_stack_9->SetBinContent(7,1.658945);
   hnueCCinFV_stack_9->SetBinContent(8,1.570749);
   hnueCCinFV_stack_9->SetBinContent(9,0.5843197);
   hnueCCinFV_stack_9->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_9->SetBinContent(11,0.6459876);
   hnueCCinFV_stack_9->SetBinContent(12,1.006409);
   hnueCCinFV_stack_9->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_9->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_9->SetBinContent(16,0.6539136);
   hnueCCinFV_stack_9->SetBinContent(17,0.5762501);
   hnueCCinFV_stack_9->SetBinContent(18,0.6859174);
   hnueCCinFV_stack_9->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_9->SetBinContent(21,3.274e-05);
   hnueCCinFV_stack_9->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_9->SetBinContent(23,0.2451269);
   hnueCCinFV_stack_9->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_9->SetBinContent(25,0.6840218);
   hnueCCinFV_stack_9->SetBinContent(26,9.219178);
   hnueCCinFV_stack_9->SetBinError(0,0.6112922);
   hnueCCinFV_stack_9->SetBinError(1,1.44044);
   hnueCCinFV_stack_9->SetBinError(2,0.7625143);
   hnueCCinFV_stack_9->SetBinError(3,0.7759462);
   hnueCCinFV_stack_9->SetBinError(4,0.8718064);
   hnueCCinFV_stack_9->SetBinError(5,0.5155145);
   hnueCCinFV_stack_9->SetBinError(6,1.303614);
   hnueCCinFV_stack_9->SetBinError(7,0.6496402);
   hnueCCinFV_stack_9->SetBinError(8,0.6816847);
   hnueCCinFV_stack_9->SetBinError(9,0.4187168);
   hnueCCinFV_stack_9->SetBinError(10,0.2781975);
   hnueCCinFV_stack_9->SetBinError(11,0.3759965);
   hnueCCinFV_stack_9->SetBinError(12,0.5149986);
   hnueCCinFV_stack_9->SetBinError(13,0.3921167);
   hnueCCinFV_stack_9->SetBinError(15,0.1950249);
   hnueCCinFV_stack_9->SetBinError(16,0.3816983);
   hnueCCinFV_stack_9->SetBinError(17,0.4193777);
   hnueCCinFV_stack_9->SetBinError(18,0.5162003);
   hnueCCinFV_stack_9->SetBinError(20,0.1950249);
   hnueCCinFV_stack_9->SetBinError(21,3.274e-05);
   hnueCCinFV_stack_9->SetBinError(22,0.7431478);
   hnueCCinFV_stack_9->SetBinError(23,0.2451269);
   hnueCCinFV_stack_9->SetBinError(24,0.1967154);
   hnueCCinFV_stack_9->SetBinError(25,0.526453);
   hnueCCinFV_stack_9->SetBinError(26,2.333344);
   hnueCCinFV_stack_9->SetEntries(122);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(0,255.6803);
   hmcerror__2->SetBinContent(1,200.5674);
   hmcerror__2->SetBinContent(2,426.4429);
   hmcerror__2->SetBinContent(3,532.2026);
   hmcerror__2->SetBinContent(4,492.6338);
   hmcerror__2->SetBinContent(5,404.7424);
   hmcerror__2->SetBinContent(6,349.3365);
   hmcerror__2->SetBinContent(7,282.6906);
   hmcerror__2->SetBinContent(8,197.5755);
   hmcerror__2->SetBinContent(9,160.3094);
   hmcerror__2->SetBinContent(10,129.384);
   hmcerror__2->SetBinContent(11,87.05812);
   hmcerror__2->SetBinContent(12,67.03709);
   hmcerror__2->SetBinContent(13,48.14174);
   hmcerror__2->SetBinContent(14,46.96718);
   hmcerror__2->SetBinContent(15,37.13995);
   hmcerror__2->SetBinContent(16,24.46394);
   hmcerror__2->SetBinContent(17,27.50448);
   hmcerror__2->SetBinContent(18,19.43498);
   hmcerror__2->SetBinContent(19,20.55689);
   hmcerror__2->SetBinContent(20,18.01191);
   hmcerror__2->SetBinContent(21,15.84632);
   hmcerror__2->SetBinContent(22,19.48582);
   hmcerror__2->SetBinContent(23,14.73282);
   hmcerror__2->SetBinContent(24,8.496062);
   hmcerror__2->SetBinContent(25,9.993072);
   hmcerror__2->SetBinContent(26,180.7406);
   hmcerror__2->SetBinError(0,7.383763);
   hmcerror__2->SetBinError(1,39.28767);
   hmcerror__2->SetBinError(2,84.06828);
   hmcerror__2->SetBinError(3,101.5864);
   hmcerror__2->SetBinError(4,102.1508);
   hmcerror__2->SetBinError(5,84.7621);
   hmcerror__2->SetBinError(6,78.34088);
   hmcerror__2->SetBinError(7,61.10739);
   hmcerror__2->SetBinError(8,44.4736);
   hmcerror__2->SetBinError(9,34.45975);
   hmcerror__2->SetBinError(10,25.99743);
   hmcerror__2->SetBinError(11,16.56672);
   hmcerror__2->SetBinError(12,15.30738);
   hmcerror__2->SetBinError(13,10.57405);
   hmcerror__2->SetBinError(14,13.04237);
   hmcerror__2->SetBinError(15,8.535956);
   hmcerror__2->SetBinError(16,6.245234);
   hmcerror__2->SetBinError(17,7.258693);
   hmcerror__2->SetBinError(18,5.569915);
   hmcerror__2->SetBinError(19,5.377011);
   hmcerror__2->SetBinError(20,5.623668);
   hmcerror__2->SetBinError(21,5.477142);
   hmcerror__2->SetBinError(22,5.171325);
   hmcerror__2->SetBinError(23,4.848062);
   hmcerror__2->SetBinError(24,3.594022);
   hmcerror__2->SetBinError(25,4.172533);
   hmcerror__2->SetBinError(26,36.6558);
   hmcerror__2->SetEntries(4030.668);

   ci = TColor::GetColor("#666666");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3001[25] = {
   230,
   464,
   570,
   503,
   426,
   294,
   253,
   187,
   143,
   125,
   73,
   70,
   61,
   46,
   32,
   30,
   15,
   16,
   14,
   17,
   17,
   18,
   13,
   9,
   7};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[25] = {
   15.16575,
   21.54066,
   23.87467,
   22.42766,
   20.63977,
   17.14643,
   15.90597,
   13.67479,
   11.95826,
   11.18034,
   8.6693,
   8.4925,
   7.9383,
   6.9153,
   5.7977,
   5.6197,
   4.0385,
   4.1628,
   3.9102,
   4.2835,
   4.2835,
   4.4008,
   3.77763,
   3.19354,
   2.85954};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[25] = {
   15.16575,
   21.54066,
   23.87467,
   22.42766,
   20.63977,
   17.14643,
   15.90597,
   13.67479,
   11.95826,
   11.18034,
   8.4672,
   8.2902,
   7.7354,
   6.7108,
   5.5904,
   5.4117,
   3.8197,
   3.9454,
   3.6898,
   4.0673,
   4.0673,
   4.1858,
   3.5552,
   2.9582,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(3.726414);
   Graph_Graph3001->SetMaximum(652.8481);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.00#pm0.02(data err)#pm0.19(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 6.369e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=21.11/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 3633.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 93.2","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 451.0","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 53.9","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 479.9","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  1596.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 599.5","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 137.3","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 206.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 23.6","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[25] = {
   0.1958827,
   0.1971384,
   0.1908792,
   0.2073565,
   0.2094223,
   0.2242562,
   0.2161635,
   0.2250967,
   0.2149578,
   0.2009323,
   0.190295,
   0.2283419,
   0.2196441,
   0.2776912,
   0.2298322,
   0.2552833,
   0.2639095,
   0.2865922,
   0.2615673,
   0.3122195,
   0.3456413,
   0.2653891,
   0.3290654,
   0.4230221,
   0.4175426};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[25] = {
   0.1958827,
   0.1971384,
   0.1908792,
   0.2073565,
   0.2094223,
   0.2242562,
   0.2161635,
   0.2250967,
   0.2149578,
   0.2009323,
   0.190295,
   0.2283419,
   0.2196441,
   0.2776912,
   0.2298322,
   0.2552833,
   0.2639095,
   0.2865922,
   0.2615673,
   0.3122195,
   0.3456413,
   0.2653891,
   0.3290654,
   0.4230221,
   0.4175426};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[25] = {
   0.1852353,
   0.1761724,
   0.1777781,
   0.1977273,
   0.1955105,
   0.2030047,
   0.1890595,
   0.1958801,
   0.1810937,
   0.1814823,
   0.1756548,
   0.1934346,
   0.1988743,
   0.1957497,
   0.1840532,
   0.2027546,
   0.2126115,
   0.2033774,
   0.1986486,
   0.2253141,
   0.2257294,
   0.1945934,
   0.2190428,
   0.2639762,
   0.2530134};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[25] = {
   0.1852353,
   0.1761724,
   0.1777781,
   0.1977273,
   0.1955105,
   0.2030047,
   0.1890595,
   0.1958801,
   0.1810937,
   0.1814823,
   0.1756548,
   0.1934346,
   0.1988743,
   0.1957497,
   0.1840532,
   0.2027546,
   0.2126115,
   0.2033774,
   0.1986486,
   0.2253141,
   0.2257294,
   0.1945934,
   0.2190428,
   0.2639762,
   0.2530134};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3004[25] = {
   1.146747,
   1.088071,
   1.071021,
   1.021042,
   1.052521,
   0.8415955,
   0.8949713,
   0.9464735,
   0.8920253,
   0.9661161,
   0.8385203,
   1.044198,
   1.267092,
   0.9794073,
   0.8616058,
   1.226295,
   0.5453657,
   0.8232578,
   0.6810367,
   0.9438201,
   1.072804,
   0.9237484,
   0.8823834,
   1.059314,
   0.7004853};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[25] = {
   0.07561425,
   0.05051241,
   0.04486012,
   0.04552603,
   0.05099482,
   0.04908284,
   0.05626636,
   0.069213,
   0.0745949,
   0.08641205,
   0.0995806,
   0.1266836,
   0.1648943,
   0.1472369,
   0.1561041,
   0.2297137,
   0.1468306,
   0.2141911,
   0.1902136,
   0.2378149,
   0.2703152,
   0.2258462,
   0.2564091,
   0.3758847,
   0.2861523};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[25] = {
   0.07561425,
   0.05051241,
   0.04486012,
   0.04552603,
   0.05099482,
   0.04908284,
   0.05626636,
   0.069213,
   0.0745949,
   0.08641205,
   0.09725916,
   0.1236659,
   0.1606797,
   0.1428827,
   0.1505225,
   0.2212113,
   0.1388756,
   0.2030051,
   0.1794921,
   0.2258117,
   0.2566716,
   0.2148126,
   0.2413115,
   0.3481848,
   0.261234};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.293638);
   Graph_Graph3004->SetMaximum(1.552403);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

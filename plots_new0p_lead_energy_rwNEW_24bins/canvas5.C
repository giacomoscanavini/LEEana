#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 15:06:04 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-92.30769,-6.199767,676.9231,685.5638);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__13->SetBinContent(1,9.360441);
   hmc__13->SetBinContent(2,50.36327);
   hmc__13->SetBinContent(3,122.3607);
   hmc__13->SetBinContent(4,227.6688);
   hmc__13->SetBinContent(5,309.9884);
   hmc__13->SetBinContent(6,306.8507);
   hmc__13->SetBinContent(7,282.5794);
   hmc__13->SetBinContent(8,217.4112);
   hmc__13->SetBinContent(9,176.7488);
   hmc__13->SetBinContent(10,146.5709);
   hmc__13->SetBinContent(11,114.6612);
   hmc__13->SetBinContent(12,100.5611);
   hmc__13->SetBinContent(13,79.70544);
   hmc__13->SetBinContent(14,66.89272);
   hmc__13->SetBinContent(15,45.13937);
   hmc__13->SetBinContent(16,41.04307);
   hmc__13->SetBinContent(17,30.96394);
   hmc__13->SetBinContent(18,25.1639);
   hmc__13->SetBinContent(19,19.91729);
   hmc__13->SetBinContent(20,14.63789);
   hmc__13->SetBinContent(21,8.00082);
   hmc__13->SetBinContent(22,10.41309);
   hmc__13->SetBinContent(23,8.898726);
   hmc__13->SetBinContent(24,9.669237);
   hmc__13->SetBinContent(25,71.47197);
   hmc__13->SetBinError(1,7.519847);
   hmc__13->SetBinError(2,16.28255);
   hmc__13->SetBinError(3,40.45097);
   hmc__13->SetBinError(4,74.09769);
   hmc__13->SetBinError(5,109.7091);
   hmc__13->SetBinError(6,110.7525);
   hmc__13->SetBinError(7,111.6599);
   hmc__13->SetBinError(8,88.36421);
   hmc__13->SetBinError(9,72.29759);
   hmc__13->SetBinError(10,61.94166);
   hmc__13->SetBinError(11,50.44042);
   hmc__13->SetBinError(12,52.80193);
   hmc__13->SetBinError(13,36.07083);
   hmc__13->SetBinError(14,30.69385);
   hmc__13->SetBinError(15,21.86044);
   hmc__13->SetBinError(16,19.39765);
   hmc__13->SetBinError(17,18.96656);
   hmc__13->SetBinError(18,14.29069);
   hmc__13->SetBinError(19,11.98419);
   hmc__13->SetBinError(20,8.295418);
   hmc__13->SetBinError(21,5.296723);
   hmc__13->SetBinError(22,6.563788);
   hmc__13->SetBinError(23,6.556244);
   hmc__13->SetBinError(24,6.959218);
   hmc__13->SetBinError(25,23.74728);
   hmc__13->SetMinimum(-6.199767);
   hmc__13->SetMaximum(650.9756);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,600);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(325.4878);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,2.828738);
   hbadmatch_stack_1->SetBinContent(3,5.03335);
   hbadmatch_stack_1->SetBinContent(4,8.23868);
   hbadmatch_stack_1->SetBinContent(5,6.08138);
   hbadmatch_stack_1->SetBinContent(6,6.731446);
   hbadmatch_stack_1->SetBinContent(7,6.779785);
   hbadmatch_stack_1->SetBinContent(8,6.233026);
   hbadmatch_stack_1->SetBinContent(9,4.065998);
   hbadmatch_stack_1->SetBinContent(10,3.34023);
   hbadmatch_stack_1->SetBinContent(11,0.8770706);
   hbadmatch_stack_1->SetBinContent(12,1.524734);
   hbadmatch_stack_1->SetBinContent(13,0.5595741);
   hbadmatch_stack_1->SetBinContent(14,1.046296);
   hbadmatch_stack_1->SetBinContent(15,1.152536);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.9762383);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.9269427);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9259);
   hbadmatch_stack_1->SetBinError(3,1.214235);
   hbadmatch_stack_1->SetBinError(4,1.391611);
   hbadmatch_stack_1->SetBinError(5,1.226493);
   hbadmatch_stack_1->SetBinError(6,1.716894);
   hbadmatch_stack_1->SetBinError(7,1.326643);
   hbadmatch_stack_1->SetBinError(8,1.297018);
   hbadmatch_stack_1->SetBinError(9,1.057064);
   hbadmatch_stack_1->SetBinError(10,0.9687818);
   hbadmatch_stack_1->SetBinError(11,0.5197486);
   hbadmatch_stack_1->SetBinError(12,0.69648);
   hbadmatch_stack_1->SetBinError(13,0.4047909);
   hbadmatch_stack_1->SetBinError(14,0.643358);
   hbadmatch_stack_1->SetBinError(15,0.5303601);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.5901424);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.4800908);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,2.185808);
   hext_stack_2->SetBinContent(2,9.719196);
   hext_stack_2->SetBinContent(3,11.8228);
   hext_stack_2->SetBinContent(4,13.207);
   hext_stack_2->SetBinContent(5,16.19442);
   hext_stack_2->SetBinContent(6,17.57421);
   hext_stack_2->SetBinContent(7,11.26339);
   hext_stack_2->SetBinContent(8,9.787037);
   hext_stack_2->SetBinContent(9,7.284012);
   hext_stack_2->SetBinContent(10,5.911401);
   hext_stack_2->SetBinContent(11,2.352983);
   hext_stack_2->SetBinContent(12,5.509212);
   hext_stack_2->SetBinContent(13,3.953428);
   hext_stack_2->SetBinContent(14,2.841783);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(16,2.999006);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinContent(25,2.752401);
   hext_stack_2->SetBinError(1,1.006415);
   hext_stack_2->SetBinError(2,2.0077);
   hext_stack_2->SetBinError(3,2.232407);
   hext_stack_2->SetBinError(4,2.366387);
   hext_stack_2->SetBinError(5,2.647523);
   hext_stack_2->SetBinError(6,2.73686);
   hext_stack_2->SetBinError(7,2.152222);
   hext_stack_2->SetBinError(8,2.119752);
   hext_stack_2->SetBinError(9,1.781585);
   hext_stack_2->SetBinError(10,1.57855);
   hext_stack_2->SetBinError(11,0.8925942);
   hext_stack_2->SetBinError(12,1.568955);
   hext_stack_2->SetBinError(13,1.387983);
   hext_stack_2->SetBinError(14,1.011007);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(16,1.159101);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetBinError(25,1.07854);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,1.058914);
   hdirt_stack_3->SetBinContent(3,1.025273);
   hdirt_stack_3->SetBinContent(4,0.937198);
   hdirt_stack_3->SetBinContent(5,2.35064);
   hdirt_stack_3->SetBinContent(6,0.7947583);
   hdirt_stack_3->SetBinContent(7,1.119034);
   hdirt_stack_3->SetBinContent(8,0.665001);
   hdirt_stack_3->SetBinContent(9,1.114166);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(2,0.4475448);
   hdirt_stack_3->SetBinError(3,0.549452);
   hdirt_stack_3->SetBinError(4,0.5115366);
   hdirt_stack_3->SetBinError(5,0.784944);
   hdirt_stack_3->SetBinError(6,0.4034967);
   hdirt_stack_3->SetBinError(7,0.59614);
   hdirt_stack_3->SetBinError(8,0.3973583);
   hdirt_stack_3->SetBinError(9,0.569712);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.7319179);
   houtFV_stack_4->SetBinContent(2,4.831971);
   houtFV_stack_4->SetBinContent(3,9.166403);
   houtFV_stack_4->SetBinContent(4,12.09947);
   houtFV_stack_4->SetBinContent(5,16.81161);
   houtFV_stack_4->SetBinContent(6,14.02532);
   houtFV_stack_4->SetBinContent(7,13.29369);
   houtFV_stack_4->SetBinContent(8,12.72182);
   houtFV_stack_4->SetBinContent(9,9.192742);
   houtFV_stack_4->SetBinContent(10,9.181704);
   houtFV_stack_4->SetBinContent(11,6.700191);
   houtFV_stack_4->SetBinContent(12,5.184523);
   houtFV_stack_4->SetBinContent(13,4.246354);
   houtFV_stack_4->SetBinContent(14,3.427608);
   houtFV_stack_4->SetBinContent(15,2.302829);
   houtFV_stack_4->SetBinContent(16,2.247316);
   houtFV_stack_4->SetBinContent(17,0.8770706);
   houtFV_stack_4->SetBinContent(18,1.599997);
   houtFV_stack_4->SetBinContent(19,1.164328);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.9286332);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,0.9785053);
   houtFV_stack_4->SetBinContent(25,2.1425);
   houtFV_stack_4->SetBinError(1,0.438694);
   houtFV_stack_4->SetBinError(2,1.155094);
   houtFV_stack_4->SetBinError(3,1.469694);
   houtFV_stack_4->SetBinError(4,1.736712);
   houtFV_stack_4->SetBinError(5,2.086735);
   houtFV_stack_4->SetBinError(6,1.873259);
   houtFV_stack_4->SetBinError(7,1.826089);
   houtFV_stack_4->SetBinError(8,1.830414);
   houtFV_stack_4->SetBinError(9,1.481492);
   houtFV_stack_4->SetBinError(10,1.48683);
   houtFV_stack_4->SetBinError(11,1.319901);
   houtFV_stack_4->SetBinError(12,1.055237);
   houtFV_stack_4->SetBinError(13,1.0378);
   houtFV_stack_4->SetBinError(14,0.8778096);
   houtFV_stack_4->SetBinError(15,0.8129116);
   houtFV_stack_4->SetBinError(16,0.7337357);
   houtFV_stack_4->SetBinError(17,0.5197486);
   houtFV_stack_4->SetBinError(18,0.6758331);
   houtFV_stack_4->SetBinError(19,0.6159796);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.48078);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.4376048);
   houtFV_stack_4->SetBinError(25,0.7846555);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7111177);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.147476);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.162758);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.588644);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.381558);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1630822);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4303483);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4804869);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3877697);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4572441);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.6968357);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.01307);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.43981);
   hNCpi0inFVres_stack_7->SetBinContent(4,92.91946);
   hNCpi0inFVres_stack_7->SetBinContent(5,144.1664);
   hNCpi0inFVres_stack_7->SetBinContent(6,146.1172);
   hNCpi0inFVres_stack_7->SetBinContent(7,134.5952);
   hNCpi0inFVres_stack_7->SetBinContent(8,98.15868);
   hNCpi0inFVres_stack_7->SetBinContent(9,81.91207);
   hNCpi0inFVres_stack_7->SetBinContent(10,63.10143);
   hNCpi0inFVres_stack_7->SetBinContent(11,51.55244);
   hNCpi0inFVres_stack_7->SetBinContent(12,38.94623);
   hNCpi0inFVres_stack_7->SetBinContent(13,33.70684);
   hNCpi0inFVres_stack_7->SetBinContent(14,27.64255);
   hNCpi0inFVres_stack_7->SetBinContent(15,19.45469);
   hNCpi0inFVres_stack_7->SetBinContent(16,14.80599);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.04296);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.5186);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.484618);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.0246);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.081297);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.738784);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.46733);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.00748);
   hNCpi0inFVres_stack_7->SetBinContent(25,14.82477);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1815295);
   hNCpi0inFVres_stack_7->SetBinError(2,1.070409);
   hNCpi0inFVres_stack_7->SetBinError(3,2.11774);
   hNCpi0inFVres_stack_7->SetBinError(4,3.049274);
   hNCpi0inFVres_stack_7->SetBinError(5,3.968796);
   hNCpi0inFVres_stack_7->SetBinError(6,3.926046);
   hNCpi0inFVres_stack_7->SetBinError(7,3.841345);
   hNCpi0inFVres_stack_7->SetBinError(8,3.215793);
   hNCpi0inFVres_stack_7->SetBinError(9,2.947539);
   hNCpi0inFVres_stack_7->SetBinError(10,2.630033);
   hNCpi0inFVres_stack_7->SetBinError(11,2.371001);
   hNCpi0inFVres_stack_7->SetBinError(12,2.040505);
   hNCpi0inFVres_stack_7->SetBinError(13,1.965483);
   hNCpi0inFVres_stack_7->SetBinError(14,1.762673);
   hNCpi0inFVres_stack_7->SetBinError(15,1.450142);
   hNCpi0inFVres_stack_7->SetBinError(16,1.238919);
   hNCpi0inFVres_stack_7->SetBinError(17,1.051701);
   hNCpi0inFVres_stack_7->SetBinError(18,1.175321);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8333959);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8215586);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5140763);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6527806);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4630232);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4770317);
   hNCpi0inFVres_stack_7->SetBinError(25,1.300159);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.979908);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.326937);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.27571);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.396);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.94651);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.79828);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.73625);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.8763);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.930288);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.00262);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.97628);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.614141);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.944205);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.015456);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.113942);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.523298);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.789848);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.952512);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.798562);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.29769);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.045758);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.795154);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.39678);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3844091);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9763091);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.293555);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.698386);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.547982);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.427078);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.391287);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.06366);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.073314);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.15216);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9491897);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6427152);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5734834);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.639427);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7093108);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4987045);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5780474);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4952461);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4636538);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4171068);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3843256);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3073253);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.008309);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6422043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2510999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3408521);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.08369995);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.4434146);
   hCCpi0inFV_stack_10->SetBinContent(2,3.322793);
   hCCpi0inFV_stack_10->SetBinContent(3,14.37467);
   hCCpi0inFV_stack_10->SetBinContent(4,31.79332);
   hCCpi0inFV_stack_10->SetBinContent(5,45.93248);
   hCCpi0inFV_stack_10->SetBinContent(6,44.85708);
   hCCpi0inFV_stack_10->SetBinContent(7,38.76457);
   hCCpi0inFV_stack_10->SetBinContent(8,31.92672);
   hCCpi0inFV_stack_10->SetBinContent(9,27.02914);
   hCCpi0inFV_stack_10->SetBinContent(10,20.7154);
   hCCpi0inFV_stack_10->SetBinContent(11,18.31391);
   hCCpi0inFV_stack_10->SetBinContent(12,16.58842);
   hCCpi0inFV_stack_10->SetBinContent(13,14.36721);
   hCCpi0inFV_stack_10->SetBinContent(14,11.23043);
   hCCpi0inFV_stack_10->SetBinContent(15,6.390779);
   hCCpi0inFV_stack_10->SetBinContent(16,6.713393);
   hCCpi0inFV_stack_10->SetBinContent(17,4.911607);
   hCCpi0inFV_stack_10->SetBinContent(18,2.979234);
   hCCpi0inFV_stack_10->SetBinContent(19,3.999767);
   hCCpi0inFV_stack_10->SetBinContent(20,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(21,0.7817899);
   hCCpi0inFV_stack_10->SetBinContent(22,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(23,2.431115);
   hCCpi0inFV_stack_10->SetBinContent(24,2.245626);
   hCCpi0inFV_stack_10->SetBinContent(25,12.68976);
   hCCpi0inFV_stack_10->SetBinError(1,0.3155273);
   hCCpi0inFV_stack_10->SetBinError(2,0.9207963);
   hCCpi0inFV_stack_10->SetBinError(3,1.888661);
   hCCpi0inFV_stack_10->SetBinError(4,2.824944);
   hCCpi0inFV_stack_10->SetBinError(5,3.389991);
   hCCpi0inFV_stack_10->SetBinError(6,3.324436);
   hCCpi0inFV_stack_10->SetBinError(7,3.128129);
   hCCpi0inFV_stack_10->SetBinError(8,2.84884);
   hCCpi0inFV_stack_10->SetBinError(9,2.654226);
   hCCpi0inFV_stack_10->SetBinError(10,2.323649);
   hCCpi0inFV_stack_10->SetBinError(11,2.213296);
   hCCpi0inFV_stack_10->SetBinError(12,2.085912);
   hCCpi0inFV_stack_10->SetBinError(13,1.887988);
   hCCpi0inFV_stack_10->SetBinError(14,1.699358);
   hCCpi0inFV_stack_10->SetBinError(15,1.164857);
   hCCpi0inFV_stack_10->SetBinError(16,1.322085);
   hCCpi0inFV_stack_10->SetBinError(17,1.107029);
   hCCpi0inFV_stack_10->SetBinError(18,0.8548804);
   hCCpi0inFV_stack_10->SetBinError(19,1.03826);
   hCCpi0inFV_stack_10->SetBinError(20,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(21,0.3908977);
   hCCpi0inFV_stack_10->SetBinError(22,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(23,0.8777211);
   hCCpi0inFV_stack_10->SetBinError(24,0.7332843);
   hCCpi0inFV_stack_10->SetBinError(25,1.811017);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.144191);
   hNCinFV_stack_11->SetBinContent(2,6.780595);
   hNCinFV_stack_11->SetBinContent(3,10.98553);
   hNCinFV_stack_11->SetBinContent(4,15.91731);
   hNCinFV_stack_11->SetBinContent(5,19.13431);
   hNCinFV_stack_11->SetBinContent(6,19.53487);
   hNCinFV_stack_11->SetBinContent(7,18.9946);
   hNCinFV_stack_11->SetBinContent(8,15.64161);
   hNCinFV_stack_11->SetBinContent(9,11.66588);
   hNCinFV_stack_11->SetBinContent(10,12.70948);
   hNCinFV_stack_11->SetBinContent(11,8.399118);
   hNCinFV_stack_11->SetBinContent(12,7.815735);
   hNCinFV_stack_11->SetBinContent(13,6.835539);
   hNCinFV_stack_11->SetBinContent(14,6.796892);
   hNCinFV_stack_11->SetBinContent(15,7.125844);
   hNCinFV_stack_11->SetBinContent(16,4.735065);
   hNCinFV_stack_11->SetBinContent(17,4.602829);
   hNCinFV_stack_11->SetBinContent(18,2.834081);
   hNCinFV_stack_11->SetBinContent(19,2.055672);
   hNCinFV_stack_11->SetBinContent(20,0.7817899);
   hNCinFV_stack_11->SetBinContent(21,1.123658);
   hNCinFV_stack_11->SetBinContent(22,1.125349);
   hNCinFV_stack_11->SetBinContent(23,0.7319179);
   hNCinFV_stack_11->SetBinContent(24,0.9269427);
   hNCinFV_stack_11->SetBinContent(25,9.958843);
   hNCinFV_stack_11->SetBinError(1,0.7850774);
   hNCinFV_stack_11->SetBinError(2,1.330205);
   hNCinFV_stack_11->SetBinError(3,1.699834);
   hNCinFV_stack_11->SetBinError(4,2.049364);
   hNCinFV_stack_11->SetBinError(5,2.142128);
   hNCinFV_stack_11->SetBinError(6,2.237519);
   hNCinFV_stack_11->SetBinError(7,2.202441);
   hNCinFV_stack_11->SetBinError(8,1.962614);
   hNCinFV_stack_11->SetBinError(9,1.7666);
   hNCinFV_stack_11->SetBinError(10,1.810714);
   hNCinFV_stack_11->SetBinError(11,1.427369);
   hNCinFV_stack_11->SetBinError(12,1.387062);
   hNCinFV_stack_11->SetBinError(13,1.315971);
   hNCinFV_stack_11->SetBinError(14,1.255962);
   hNCinFV_stack_11->SetBinError(15,1.373736);
   hNCinFV_stack_11->SetBinError(16,1.127723);
   hNCinFV_stack_11->SetBinError(17,1.000372);
   hNCinFV_stack_11->SetBinError(18,0.8081673);
   hNCinFV_stack_11->SetBinError(19,0.7082781);
   hNCinFV_stack_11->SetBinError(20,0.3908977);
   hNCinFV_stack_11->SetBinError(21,0.5188295);
   hNCinFV_stack_11->SetBinError(22,0.5194673);
   hNCinFV_stack_11->SetBinError(23,0.438694);
   hNCinFV_stack_11->SetBinError(24,0.4800908);
   hNCinFV_stack_11->SetBinError(25,1.654766);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,2.487922);
   hnumuCCinFV_stack_12->SetBinContent(2,8.660687);
   hnumuCCinFV_stack_12->SetBinContent(3,18.05177);
   hnumuCCinFV_stack_12->SetBinContent(4,31.21788);
   hnumuCCinFV_stack_12->SetBinContent(5,29.77369);
   hnumuCCinFV_stack_12->SetBinContent(6,31.91172);
   hnumuCCinFV_stack_12->SetBinContent(7,35.38284);
   hnumuCCinFV_stack_12->SetBinContent(8,21.62684);
   hnumuCCinFV_stack_12->SetBinContent(9,20.55199);
   hnumuCCinFV_stack_12->SetBinContent(10,19.93328);
   hnumuCCinFV_stack_12->SetBinContent(11,14.11205);
   hnumuCCinFV_stack_12->SetBinContent(12,16.49992);
   hnumuCCinFV_stack_12->SetBinContent(13,10.94731);
   hnumuCCinFV_stack_12->SetBinContent(14,9.726143);
   hnumuCCinFV_stack_12->SetBinContent(15,4.12287);
   hnumuCCinFV_stack_12->SetBinContent(16,4.417273);
   hnumuCCinFV_stack_12->SetBinContent(17,5.14123);
   hnumuCCinFV_stack_12->SetBinContent(18,2.265322);
   hnumuCCinFV_stack_12->SetBinContent(19,2.635355);
   hnumuCCinFV_stack_12->SetBinContent(20,1.816018);
   hnumuCCinFV_stack_12->SetBinContent(21,0.4633543);
   hnumuCCinFV_stack_12->SetBinContent(22,1.611304);
   hnumuCCinFV_stack_12->SetBinContent(23,1.138389);
   hnumuCCinFV_stack_12->SetBinContent(24,1.577935);
   hnumuCCinFV_stack_12->SetBinContent(25,11.93595);
   hnumuCCinFV_stack_12->SetBinError(1,0.9889857);
   hnumuCCinFV_stack_12->SetBinError(2,1.650872);
   hnumuCCinFV_stack_12->SetBinError(3,2.407004);
   hnumuCCinFV_stack_12->SetBinError(4,3.686532);
   hnumuCCinFV_stack_12->SetBinError(5,3.142909);
   hnumuCCinFV_stack_12->SetBinError(6,3.013918);
   hnumuCCinFV_stack_12->SetBinError(7,3.896229);
   hnumuCCinFV_stack_12->SetBinError(8,2.463844);
   hnumuCCinFV_stack_12->SetBinError(9,2.363362);
   hnumuCCinFV_stack_12->SetBinError(10,2.721239);
   hnumuCCinFV_stack_12->SetBinError(11,1.967985);
   hnumuCCinFV_stack_12->SetBinError(12,2.428017);
   hnumuCCinFV_stack_12->SetBinError(13,1.729151);
   hnumuCCinFV_stack_12->SetBinError(14,1.778696);
   hnumuCCinFV_stack_12->SetBinError(15,0.9771156);
   hnumuCCinFV_stack_12->SetBinError(16,1.048956);
   hnumuCCinFV_stack_12->SetBinError(17,1.228073);
   hnumuCCinFV_stack_12->SetBinError(18,0.7643885);
   hnumuCCinFV_stack_12->SetBinError(19,0.870233);
   hnumuCCinFV_stack_12->SetBinError(20,0.6736791);
   hnumuCCinFV_stack_12->SetBinError(21,0.3313506);
   hnumuCCinFV_stack_12->SetBinError(22,0.6813018);
   hnumuCCinFV_stack_12->SetBinError(23,0.5974629);
   hnumuCCinFV_stack_12->SetBinError(24,0.626397);
   hnumuCCinFV_stack_12->SetBinError(25,2.906831);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(7,1.069693);
   hnueCCinFV_stack_13->SetBinContent(8,0.7715192);
   hnueCCinFV_stack_13->SetBinContent(9,1.233414);
   hnueCCinFV_stack_13->SetBinContent(11,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.8415501);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,7.592756);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.2451916);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.42079);
   hnueCCinFV_stack_13->SetBinError(7,0.6188906);
   hnueCCinFV_stack_13->SetBinError(8,0.4576759);
   hnueCCinFV_stack_13->SetBinError(9,0.7011215);
   hnueCCinFV_stack_13->SetBinError(11,0.3174228);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4913333);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,2.025716);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__14->SetBinContent(1,9.360441);
   hmcerror__14->SetBinContent(2,50.36327);
   hmcerror__14->SetBinContent(3,122.3607);
   hmcerror__14->SetBinContent(4,227.6688);
   hmcerror__14->SetBinContent(5,309.9884);
   hmcerror__14->SetBinContent(6,306.8507);
   hmcerror__14->SetBinContent(7,282.5794);
   hmcerror__14->SetBinContent(8,217.4112);
   hmcerror__14->SetBinContent(9,176.7488);
   hmcerror__14->SetBinContent(10,146.5709);
   hmcerror__14->SetBinContent(11,114.6612);
   hmcerror__14->SetBinContent(12,100.5611);
   hmcerror__14->SetBinContent(13,79.70544);
   hmcerror__14->SetBinContent(14,66.89272);
   hmcerror__14->SetBinContent(15,45.13937);
   hmcerror__14->SetBinContent(16,41.04307);
   hmcerror__14->SetBinContent(17,30.96394);
   hmcerror__14->SetBinContent(18,25.1639);
   hmcerror__14->SetBinContent(19,19.91729);
   hmcerror__14->SetBinContent(20,14.63789);
   hmcerror__14->SetBinContent(21,8.00082);
   hmcerror__14->SetBinContent(22,10.41309);
   hmcerror__14->SetBinContent(23,8.898726);
   hmcerror__14->SetBinContent(24,9.669237);
   hmcerror__14->SetBinContent(25,71.47197);
   hmcerror__14->SetBinError(1,7.519847);
   hmcerror__14->SetBinError(2,16.28255);
   hmcerror__14->SetBinError(3,40.45097);
   hmcerror__14->SetBinError(4,74.09769);
   hmcerror__14->SetBinError(5,109.7091);
   hmcerror__14->SetBinError(6,110.7525);
   hmcerror__14->SetBinError(7,111.6599);
   hmcerror__14->SetBinError(8,88.36421);
   hmcerror__14->SetBinError(9,72.29759);
   hmcerror__14->SetBinError(10,61.94166);
   hmcerror__14->SetBinError(11,50.44042);
   hmcerror__14->SetBinError(12,52.80193);
   hmcerror__14->SetBinError(13,36.07083);
   hmcerror__14->SetBinError(14,30.69385);
   hmcerror__14->SetBinError(15,21.86044);
   hmcerror__14->SetBinError(16,19.39765);
   hmcerror__14->SetBinError(17,18.96656);
   hmcerror__14->SetBinError(18,14.29069);
   hmcerror__14->SetBinError(19,11.98419);
   hmcerror__14->SetBinError(20,8.295418);
   hmcerror__14->SetBinError(21,5.296723);
   hmcerror__14->SetBinError(22,6.563788);
   hmcerror__14->SetBinError(23,6.556244);
   hmcerror__14->SetBinError(24,6.959218);
   hmcerror__14->SetBinError(25,23.74728);
   hmcerror__14->SetEntries(2462.59);

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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3017[24] = {
   11,
   38,
   94,
   173,
   279,
   243,
   230,
   146,
   131,
   104,
   71,
   61,
   46,
   41,
   33,
   23,
   16,
   18,
   14,
   13,
   8,
   5,
   4,
   6};
   Double_t _felx3017[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3017[24] = {
   3.4975,
   6.3013,
   9.8173,
   13.15295,
   16.70329,
   15.58846,
   15.16575,
   12.08305,
   11.44552,
   10.19804,
   8.5518,
   7.9383,
   6.9153,
   6.5384,
   5.8847,
   4.9457,
   4.1628,
   4.4008,
   3.9102,
   3.77763,
   3.0307,
   2.48995,
   2.29683,
   2.67925};
   Double_t _fehx3017[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3017[24] = {
   3.27,
   6.0955,
   9.616,
   13.15295,
   16.70329,
   15.58846,
   15.16575,
   12.08305,
   11.44552,
   10.19804,
   8.3496,
   7.7354,
   6.7108,
   6.3331,
   5.6776,
   4.7346,
   3.9454,
   4.1858,
   3.6898,
   3.5552,
   2.7896,
   2.21064,
   1.98186,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,660);
   Graph_Graph3017->SetMinimum(1.532853);
   Graph_Graph3017->SetMaximum(325.1033);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.75#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1808.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 128.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 132.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1046.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  188.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 354.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 189.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 296.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3018[24] = {
   0.8033646,
   0.3233022,
   0.330588,
   0.3254626,
   0.3539135,
   0.3609329,
   0.3951452,
   0.4064381,
   0.4090416,
   0.4226056,
   0.4399085,
   0.5250733,
   0.4525516,
   0.458852,
   0.4842878,
   0.4726168,
   0.6125369,
   0.5679044,
   0.6016977,
   0.5667085,
   0.6620225,
   0.6303403,
   0.7367621,
   0.7197277};
   Double_t _fehx3018[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3018[24] = {
   0.8033646,
   0.3233022,
   0.330588,
   0.3254626,
   0.3539135,
   0.3609329,
   0.3951452,
   0.4064381,
   0.4090416,
   0.4226056,
   0.4399085,
   0.5250733,
   0.4525516,
   0.458852,
   0.4842878,
   0.4726168,
   0.6125369,
   0.5679044,
   0.6016977,
   0.5667085,
   0.6620225,
   0.6303403,
   0.7367621,
   0.7197277};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,660);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3019[24] = {
   0.2530547,
   0.1999488,
   0.2624295,
   0.3090738,
   0.3390854,
   0.3419217,
   0.3651403,
   0.3706813,
   0.383229,
   0.3814482,
   0.3966356,
   0.3456708,
   0.3723643,
   0.3490243,
   0.4056467,
   0.3124853,
   0.3420348,
   0.3571211,
   0.2993252,
   0.3742893,
   0.4046226,
   0.3059656,
   0.3349708,
   0.289774};
   Double_t _fehx3019[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3019[24] = {
   0.2530547,
   0.1999488,
   0.2624295,
   0.3090738,
   0.3390854,
   0.3419217,
   0.3651403,
   0.3706813,
   0.383229,
   0.3814482,
   0.3966356,
   0.3456708,
   0.3723643,
   0.3490243,
   0.4056467,
   0.3124853,
   0.3420348,
   0.3571211,
   0.2993252,
   0.3742893,
   0.4046226,
   0.3059656,
   0.3349708,
   0.289774};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,660);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3020[24] = {
   1.175158,
   0.7545182,
   0.7682205,
   0.7598757,
   0.9000338,
   0.7919161,
   0.8139304,
   0.6715384,
   0.741165,
   0.7095544,
   0.6192157,
   0.6065967,
   0.5771249,
   0.6129217,
   0.7310692,
   0.5603869,
   0.51673,
   0.7153104,
   0.702907,
   0.888106,
   0.9998975,
   0.4801651,
   0.4495026,
   0.6205247};
   Double_t _felx3020[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3020[24] = {
   0.3736469,
   0.125117,
   0.08023246,
   0.05777228,
   0.05388361,
   0.05080144,
   0.05366898,
   0.05557691,
   0.06475589,
   0.06957753,
   0.07458323,
   0.07894011,
   0.0867607,
   0.09774457,
   0.1303674,
   0.1205002,
   0.1344402,
   0.1748854,
   0.1963219,
   0.258072,
   0.3787987,
   0.2391174,
   0.2581077,
   0.2770901};
   Double_t _fehx3020[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3020[24] = {
   0.3493425,
   0.1210307,
   0.07858733,
   0.05777228,
   0.05388361,
   0.05080144,
   0.05366898,
   0.05557691,
   0.06475589,
   0.06957753,
   0.07281977,
   0.07692243,
   0.084195,
   0.09467548,
   0.1257793,
   0.1153569,
   0.1274192,
   0.1663415,
   0.1852562,
   0.2428765,
   0.3486643,
   0.2122944,
   0.2227128,
   0.2501314};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,660);
   Graph_Graph3020->SetMinimum(0.05808423);
   Graph_Graph3020->SetMaximum(1.657811);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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

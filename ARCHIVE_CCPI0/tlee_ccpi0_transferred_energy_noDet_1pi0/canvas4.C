#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Oct 21 13:43:27 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-276.9231,-7.12,2030.769,787.3221);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__10->SetBinContent(0,0.4107552);
   hmc__10->SetBinContent(1,5.807459);
   hmc__10->SetBinContent(2,40.75813);
   hmc__10->SetBinContent(3,131.7262);
   hmc__10->SetBinContent(4,227.8587);
   hmc__10->SetBinContent(5,284.9263);
   hmc__10->SetBinContent(6,309.8881);
   hmc__10->SetBinContent(7,286.0565);
   hmc__10->SetBinContent(8,255.6481);
   hmc__10->SetBinContent(9,217.0419);
   hmc__10->SetBinContent(10,183.869);
   hmc__10->SetBinContent(11,142.5889);
   hmc__10->SetBinContent(12,120.0453);
   hmc__10->SetBinContent(13,111.4318);
   hmc__10->SetBinContent(14,79.97644);
   hmc__10->SetBinContent(15,67.69102);
   hmc__10->SetBinContent(16,51.7205);
   hmc__10->SetBinContent(17,41.04705);
   hmc__10->SetBinContent(18,35.22393);
   hmc__10->SetBinContent(19,25.28878);
   hmc__10->SetBinContent(20,21.46017);
   hmc__10->SetBinContent(21,13.38965);
   hmc__10->SetBinContent(22,10.74018);
   hmc__10->SetBinContent(23,11.56546);
   hmc__10->SetBinContent(24,9.083383);
   hmc__10->SetBinContent(25,6.863434);
   hmc__10->SetBinContent(26,40.20713);
   hmc__10->SetBinError(0,0.2787364);
   hmc__10->SetBinError(1,3.109696);
   hmc__10->SetBinError(2,8.383688);
   hmc__10->SetBinError(3,26.53464);
   hmc__10->SetBinError(4,52.46833);
   hmc__10->SetBinError(5,66.19055);
   hmc__10->SetBinError(6,69.13099);
   hmc__10->SetBinError(7,64.60459);
   hmc__10->SetBinError(8,58.35169);
   hmc__10->SetBinError(9,45.63018);
   hmc__10->SetBinError(10,39.5031);
   hmc__10->SetBinError(11,34.33524);
   hmc__10->SetBinError(12,26.57888);
   hmc__10->SetBinError(13,25.45357);
   hmc__10->SetBinError(14,20.13573);
   hmc__10->SetBinError(15,16.27305);
   hmc__10->SetBinError(16,12.81488);
   hmc__10->SetBinError(17,10.59905);
   hmc__10->SetBinError(18,7.99968);
   hmc__10->SetBinError(19,6.977899);
   hmc__10->SetBinError(20,5.812503);
   hmc__10->SetBinError(21,3.761299);
   hmc__10->SetBinError(22,3.550747);
   hmc__10->SetBinError(23,3.315952);
   hmc__10->SetBinError(24,2.41909);
   hmc__10->SetBinError(25,2.280751);
   hmc__10->SetBinError(26,7.153138);
   hmc__10->SetMinimum(-7.12);
   hmc__10->SetMaximum(747.6);
   hmc__10->SetEntries(2702.664);
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
   hs4_stack_4->SetMinimum(-1.202048e-08);
   hs4_stack_4->SetMaximum(325.3825);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.165498);
   hbadmatch_stack_1->SetBinContent(4,0.5613344);
   hbadmatch_stack_1->SetBinContent(5,0.6724045);
   hbadmatch_stack_1->SetBinContent(6,0.7397965);
   hbadmatch_stack_1->SetBinContent(7,2.530622);
   hbadmatch_stack_1->SetBinContent(8,0.3401776);
   hbadmatch_stack_1->SetBinContent(9,1.536628);
   hbadmatch_stack_1->SetBinContent(10,0.9675667);
   hbadmatch_stack_1->SetBinContent(11,0.7319179);
   hbadmatch_stack_1->SetBinContent(12,0.7488209);
   hbadmatch_stack_1->SetBinContent(13,0.8034455);
   hbadmatch_stack_1->SetBinContent(14,0.7889131);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,1.459558);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.6578486);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6041204);
   hbadmatch_stack_1->SetBinError(4,0.4057476);
   hbadmatch_stack_1->SetBinError(5,0.4229926);
   hbadmatch_stack_1->SetBinError(6,0.4422529);
   hbadmatch_stack_1->SetBinError(7,0.7435407);
   hbadmatch_stack_1->SetBinError(8,0.3401776);
   hbadmatch_stack_1->SetBinError(9,0.5955226);
   hbadmatch_stack_1->SetBinError(10,0.4432337);
   hbadmatch_stack_1->SetBinError(11,0.438694);
   hbadmatch_stack_1->SetBinError(12,0.4465292);
   hbadmatch_stack_1->SetBinError(13,0.4954856);
   hbadmatch_stack_1->SetBinError(14,0.4835289);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.8496542);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.4111545);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetEntries(67);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,1.297589);
   hext_stack_2->SetBinContent(3,7.478716);
   hext_stack_2->SetBinContent(4,3.330584);
   hext_stack_2->SetBinContent(5,6.77367);
   hext_stack_2->SetBinContent(6,6.863051);
   hext_stack_2->SetBinContent(7,6.926483);
   hext_stack_2->SetBinContent(8,5.187586);
   hext_stack_2->SetBinContent(9,5.351989);
   hext_stack_2->SetBinContent(10,5.915811);
   hext_stack_2->SetBinContent(11,1.950793);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,0.973192);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,1.861411);
   hext_stack_2->SetBinContent(17,2.663019);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(24,0.6416141);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,3.539649);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,0.6487947);
   hext_stack_2->SetBinError(3,2.071539);
   hext_stack_2->SetBinError(4,1.116937);
   hext_stack_2->SetBinError(5,1.884738);
   hext_stack_2->SetBinError(6,1.846923);
   hext_stack_2->SetBinError(7,1.933519);
   hext_stack_2->SetBinError(8,1.421289);
   hext_stack_2->SetBinError(9,1.462956);
   hext_stack_2->SetBinError(10,1.620784);
   hext_stack_2->SetBinError(11,0.8755137);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,0.5618727);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,0.9526997);
   hext_stack_2->SetBinError(17,1.142086);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(24,0.6416141);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.400848);
   hext_stack_2->SetEntries(152);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(5,0.7551225);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.2664809);
   hdirt_stack_3->SetBinContent(10,0.2761429);
   hdirt_stack_3->SetBinContent(12,0.4307295);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.6394193);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(5,0.3834428);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(9,0.2664809);
   hdirt_stack_3->SetBinError(10,0.1952625);
   hdirt_stack_3->SetBinError(12,0.2490471);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(16,0.4606419);
   hdirt_stack_3->SetEntries(23);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.401308);
   houtFV_stack_4->SetBinContent(3,0.7336084);
   houtFV_stack_4->SetBinContent(4,3.306805);
   houtFV_stack_4->SetBinContent(5,4.901984);
   houtFV_stack_4->SetBinContent(6,3.445204);
   houtFV_stack_4->SetBinContent(7,2.19356);
   houtFV_stack_4->SetBinContent(8,3.952058);
   houtFV_stack_4->SetBinContent(9,3.589651);
   houtFV_stack_4->SetBinContent(10,2.542602);
   houtFV_stack_4->SetBinContent(11,1.813505);
   houtFV_stack_4->SetBinContent(12,0.9785053);
   houtFV_stack_4->SetBinContent(13,0.7868615);
   houtFV_stack_4->SetBinContent(14,0.5352025);
   houtFV_stack_4->SetBinContent(15,1.465526);
   houtFV_stack_4->SetBinContent(16,0.3900497);
   houtFV_stack_4->SetBinContent(18,0.3616262);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.1967154);
   houtFV_stack_4->SetBinError(2,0.6577657);
   houtFV_stack_4->SetBinError(3,0.4394482);
   houtFV_stack_4->SetBinError(4,0.9060356);
   houtFV_stack_4->SetBinError(5,1.926065);
   houtFV_stack_4->SetBinError(6,0.8771776);
   houtFV_stack_4->SetBinError(7,0.6621534);
   houtFV_stack_4->SetBinError(8,0.9300186);
   houtFV_stack_4->SetBinError(9,0.9292485);
   houtFV_stack_4->SetBinError(10,0.8799978);
   houtFV_stack_4->SetBinError(11,0.7425337);
   houtFV_stack_4->SetBinError(12,0.4376048);
   houtFV_stack_4->SetBinError(13,0.3934307);
   houtFV_stack_4->SetBinError(14,0.3921167);
   houtFV_stack_4->SetBinError(15,0.6209405);
   houtFV_stack_4->SetBinError(16,0.2758068);
   houtFV_stack_4->SetBinError(18,0.3616262);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(26,0.1967154);
   houtFV_stack_4->SetEntries(138);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1062763);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.07571573);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2742507);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.96926);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.52235);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.078249);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.237026);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.482662);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.089733);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.533004);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.229114);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.46219);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.830045);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.129275);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.283228);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.5336913);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4490348);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.7874207);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1967451);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1492851);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1733757);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.125218);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.09088882);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3218519);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5543051);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5088747);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6290867);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5584927);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8018258);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4765807);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6404826);
   hNCpi0inFVres_stack_7->SetBinError(11,0.551194);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8332713);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7112383);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4479666);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1702743);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1956344);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4567603);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1086639);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.08422404);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1347745);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1012383);
   hNCpi0inFVres_stack_7->SetEntries(874);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.07619371);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.002153);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.3289);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.839548);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.537167);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.412845);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.576685);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.502446);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.381817);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.032851);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.458447);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.572846);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.921612);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.222615);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.591877);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8719552);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.706752);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9288422);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6544001);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3106905);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8556276);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.05009538);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4195491);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8551014);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5497064);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6686944);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5876457);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4878063);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4985915);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5231895);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4697519);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3017797);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7446184);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4841619);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.542175);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.585674);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4992153);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7400974);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.400872);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3479895);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1851719);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6189939);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.0882275);
   hNCpi0inFVdis_stack_8->SetEntries(672);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(2,13.90316);
   hCCpi0inFV_stack_10->SetBinContent(3,76.58817);
   hCCpi0inFV_stack_10->SetBinContent(4,157.41);
   hCCpi0inFV_stack_10->SetBinContent(5,203.9944);
   hCCpi0inFV_stack_10->SetBinContent(6,222.5193);
   hCCpi0inFV_stack_10->SetBinContent(7,199.5008);
   hCCpi0inFV_stack_10->SetBinContent(8,172.4784);
   hCCpi0inFV_stack_10->SetBinContent(9,137.3326);
   hCCpi0inFV_stack_10->SetBinContent(10,117.7895);
   hCCpi0inFV_stack_10->SetBinContent(11,86.49994);
   hCCpi0inFV_stack_10->SetBinContent(12,74.52781);
   hCCpi0inFV_stack_10->SetBinContent(13,68.79405);
   hCCpi0inFV_stack_10->SetBinContent(14,48.35608);
   hCCpi0inFV_stack_10->SetBinContent(15,41.30731);
   hCCpi0inFV_stack_10->SetBinContent(16,29.32126);
   hCCpi0inFV_stack_10->SetBinContent(17,23.10317);
   hCCpi0inFV_stack_10->SetBinContent(18,18.361);
   hCCpi0inFV_stack_10->SetBinContent(19,12.92872);
   hCCpi0inFV_stack_10->SetBinContent(20,10.37303);
   hCCpi0inFV_stack_10->SetBinContent(21,6.010031);
   hCCpi0inFV_stack_10->SetBinContent(22,5.292323);
   hCCpi0inFV_stack_10->SetBinContent(23,5.674924);
   hCCpi0inFV_stack_10->SetBinContent(24,3.470718);
   hCCpi0inFV_stack_10->SetBinContent(25,4.589913);
   hCCpi0inFV_stack_10->SetBinContent(26,17.37225);
   hCCpi0inFV_stack_10->SetBinError(1,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(2,1.927632);
   hCCpi0inFV_stack_10->SetBinError(3,4.399378);
   hCCpi0inFV_stack_10->SetBinError(4,6.315059);
   hCCpi0inFV_stack_10->SetBinError(5,7.209348);
   hCCpi0inFV_stack_10->SetBinError(6,7.473376);
   hCCpi0inFV_stack_10->SetBinError(7,7.091405);
   hCCpi0inFV_stack_10->SetBinError(8,6.600075);
   hCCpi0inFV_stack_10->SetBinError(9,5.85327);
   hCCpi0inFV_stack_10->SetBinError(10,5.452692);
   hCCpi0inFV_stack_10->SetBinError(11,4.682254);
   hCCpi0inFV_stack_10->SetBinError(12,4.298108);
   hCCpi0inFV_stack_10->SetBinError(13,4.199758);
   hCCpi0inFV_stack_10->SetBinError(14,3.510623);
   hCCpi0inFV_stack_10->SetBinError(15,3.208412);
   hCCpi0inFV_stack_10->SetBinError(16,2.744745);
   hCCpi0inFV_stack_10->SetBinError(17,2.459953);
   hCCpi0inFV_stack_10->SetBinError(18,2.156278);
   hCCpi0inFV_stack_10->SetBinError(19,1.877883);
   hCCpi0inFV_stack_10->SetBinError(20,1.557883);
   hCCpi0inFV_stack_10->SetBinError(21,1.19275);
   hCCpi0inFV_stack_10->SetBinError(22,1.139534);
   hCCpi0inFV_stack_10->SetBinError(23,1.144079);
   hCCpi0inFV_stack_10->SetBinError(24,0.8533753);
   hCCpi0inFV_stack_10->SetBinError(25,1.092737);
   hCCpi0inFV_stack_10->SetBinError(26,2.090934);
   hCCpi0inFV_stack_10->SetEntries(7496);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.9303237);
   hNCinFV_stack_11->SetBinContent(4,1.835954);
   hNCinFV_stack_11->SetBinContent(5,2.565181);
   hNCinFV_stack_11->SetBinContent(6,2.746372);
   hNCinFV_stack_11->SetBinContent(7,2.593614);
   hNCinFV_stack_11->SetBinContent(8,2.153051);
   hNCinFV_stack_11->SetBinContent(9,1.726848);
   hNCinFV_stack_11->SetBinContent(10,3.412865);
   hNCinFV_stack_11->SetBinContent(11,3.309243);
   hNCinFV_stack_11->SetBinContent(12,1.83203);
   hNCinFV_stack_11->SetBinContent(13,1.571293);
   hNCinFV_stack_11->SetBinContent(14,0.8904264);
   hNCinFV_stack_11->SetBinContent(15,1.575626);
   hNCinFV_stack_11->SetBinContent(16,0.8857421);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinContent(18,1.033571);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.4079405);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.4814682);
   hNCinFV_stack_11->SetBinError(4,0.6326101);
   hNCinFV_stack_11->SetBinError(5,0.8448871);
   hNCinFV_stack_11->SetBinError(6,1.136684);
   hNCinFV_stack_11->SetBinError(7,0.8079912);
   hNCinFV_stack_11->SetBinError(8,0.7836942);
   hNCinFV_stack_11->SetBinError(9,0.6731805);
   hNCinFV_stack_11->SetBinError(10,1.082342);
   hNCinFV_stack_11->SetBinError(11,1.050428);
   hNCinFV_stack_11->SetBinError(12,0.6316585);
   hNCinFV_stack_11->SetBinError(13,0.841527);
   hNCinFV_stack_11->SetBinError(14,0.4656689);
   hNCinFV_stack_11->SetBinError(15,0.6107656);
   hNCinFV_stack_11->SetBinError(16,0.6429319);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
   hNCinFV_stack_11->SetBinError(18,0.6333296);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.4079405);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1950249);
   hNCinFV_stack_11->SetEntries(126);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,3.988934);
   hnumuCCinFV_stack_12->SetBinContent(2,23.24606);
   hnumuCCinFV_stack_12->SetBinContent(3,40.73031);
   hnumuCCinFV_stack_12->SetBinContent(4,54.08524);
   hnumuCCinFV_stack_12->SetBinContent(5,59.34576);
   hnumuCCinFV_stack_12->SetBinContent(6,64.42406);
   hnumuCCinFV_stack_12->SetBinContent(7,64.6803);
   hnumuCCinFV_stack_12->SetBinContent(8,63.26598);
   hnumuCCinFV_stack_12->SetBinContent(9,61.23191);
   hnumuCCinFV_stack_12->SetBinContent(10,45.75075);
   hnumuCCinFV_stack_12->SetBinContent(11,43.69111);
   hnumuCCinFV_stack_12->SetBinContent(12,34.2084);
   hnumuCCinFV_stack_12->SetBinContent(13,33.35442);
   hnumuCCinFV_stack_12->SetBinContent(14,24.61068);
   hnumuCCinFV_stack_12->SetBinContent(15,18.99124);
   hnumuCCinFV_stack_12->SetBinContent(16,16.78684);
   hnumuCCinFV_stack_12->SetBinContent(17,12.55108);
   hnumuCCinFV_stack_12->SetBinContent(18,11.97867);
   hnumuCCinFV_stack_12->SetBinContent(19,9.650871);
   hnumuCCinFV_stack_12->SetBinContent(20,8.961382);
   hnumuCCinFV_stack_12->SetBinContent(21,6.161945);
   hnumuCCinFV_stack_12->SetBinContent(22,4.056401);
   hnumuCCinFV_stack_12->SetBinContent(23,4.302989);
   hnumuCCinFV_stack_12->SetBinContent(24,4.52182);
   hnumuCCinFV_stack_12->SetBinContent(25,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(26,17.6222);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.938027);
   hnumuCCinFV_stack_12->SetBinError(2,2.633361);
   hnumuCCinFV_stack_12->SetBinError(3,3.466524);
   hnumuCCinFV_stack_12->SetBinError(4,4.254313);
   hnumuCCinFV_stack_12->SetBinError(5,4.573704);
   hnumuCCinFV_stack_12->SetBinError(6,4.740049);
   hnumuCCinFV_stack_12->SetBinError(7,4.03797);
   hnumuCCinFV_stack_12->SetBinError(8,4.556507);
   hnumuCCinFV_stack_12->SetBinError(9,3.985034);
   hnumuCCinFV_stack_12->SetBinError(10,3.586937);
   hnumuCCinFV_stack_12->SetBinError(11,3.296366);
   hnumuCCinFV_stack_12->SetBinError(12,2.921226);
   hnumuCCinFV_stack_12->SetBinError(13,3.204871);
   hnumuCCinFV_stack_12->SetBinError(14,2.490356);
   hnumuCCinFV_stack_12->SetBinError(15,2.184705);
   hnumuCCinFV_stack_12->SetBinError(16,2.07549);
   hnumuCCinFV_stack_12->SetBinError(17,1.748627);
   hnumuCCinFV_stack_12->SetBinError(18,1.740129);
   hnumuCCinFV_stack_12->SetBinError(19,1.581803);
   hnumuCCinFV_stack_12->SetBinError(20,1.504872);
   hnumuCCinFV_stack_12->SetBinError(21,1.225964);
   hnumuCCinFV_stack_12->SetBinError(22,1.020285);
   hnumuCCinFV_stack_12->SetBinError(23,1.019817);
   hnumuCCinFV_stack_12->SetBinError(24,1.043069);
   hnumuCCinFV_stack_12->SetBinError(25,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(26,2.176078);
   hnumuCCinFV_stack_12->SetEntries(3056);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.970368);
   hnueCCinFV_stack_13->SetBinContent(10,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(12,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.536893);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(26,1.072095);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.4993105);
   hnueCCinFV_stack_13->SetBinError(10,0.340721);
   hnueCCinFV_stack_13->SetBinError(12,0.4800908);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3929602);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
   hnueCCinFV_stack_13->SetBinError(26,0.5551335);
   hnueCCinFV_stack_13->SetEntries(35);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__11->SetBinContent(0,0.4107552);
   hmcerror__11->SetBinContent(1,5.807459);
   hmcerror__11->SetBinContent(2,40.75813);
   hmcerror__11->SetBinContent(3,131.7262);
   hmcerror__11->SetBinContent(4,227.8587);
   hmcerror__11->SetBinContent(5,284.9263);
   hmcerror__11->SetBinContent(6,309.8881);
   hmcerror__11->SetBinContent(7,286.0565);
   hmcerror__11->SetBinContent(8,255.6481);
   hmcerror__11->SetBinContent(9,217.0419);
   hmcerror__11->SetBinContent(10,183.869);
   hmcerror__11->SetBinContent(11,142.5889);
   hmcerror__11->SetBinContent(12,120.0453);
   hmcerror__11->SetBinContent(13,111.4318);
   hmcerror__11->SetBinContent(14,79.97644);
   hmcerror__11->SetBinContent(15,67.69102);
   hmcerror__11->SetBinContent(16,51.7205);
   hmcerror__11->SetBinContent(17,41.04705);
   hmcerror__11->SetBinContent(18,35.22393);
   hmcerror__11->SetBinContent(19,25.28878);
   hmcerror__11->SetBinContent(20,21.46017);
   hmcerror__11->SetBinContent(21,13.38965);
   hmcerror__11->SetBinContent(22,10.74018);
   hmcerror__11->SetBinContent(23,11.56546);
   hmcerror__11->SetBinContent(24,9.083383);
   hmcerror__11->SetBinContent(25,6.863434);
   hmcerror__11->SetBinContent(26,40.20713);
   hmcerror__11->SetBinError(0,0.2787364);
   hmcerror__11->SetBinError(1,3.109696);
   hmcerror__11->SetBinError(2,8.383688);
   hmcerror__11->SetBinError(3,26.53464);
   hmcerror__11->SetBinError(4,52.46833);
   hmcerror__11->SetBinError(5,66.19055);
   hmcerror__11->SetBinError(6,69.13099);
   hmcerror__11->SetBinError(7,64.60459);
   hmcerror__11->SetBinError(8,58.35169);
   hmcerror__11->SetBinError(9,45.63018);
   hmcerror__11->SetBinError(10,39.5031);
   hmcerror__11->SetBinError(11,34.33524);
   hmcerror__11->SetBinError(12,26.57888);
   hmcerror__11->SetBinError(13,25.45357);
   hmcerror__11->SetBinError(14,20.13573);
   hmcerror__11->SetBinError(15,16.27305);
   hmcerror__11->SetBinError(16,12.81488);
   hmcerror__11->SetBinError(17,10.59905);
   hmcerror__11->SetBinError(18,7.99968);
   hmcerror__11->SetBinError(19,6.977899);
   hmcerror__11->SetBinError(20,5.812503);
   hmcerror__11->SetBinError(21,3.761299);
   hmcerror__11->SetBinError(22,3.550747);
   hmcerror__11->SetBinError(23,3.315952);
   hmcerror__11->SetBinError(24,2.41909);
   hmcerror__11->SetBinError(25,2.280751);
   hmcerror__11->SetBinError(26,7.153138);
   hmcerror__11->SetEntries(2702.664);

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
   2,
   59,
   240,
   330,
   356,
   299,
   263,
   227,
   184,
   154,
   132,
   100,
   73,
   57,
   62,
   39,
   29,
   29,
   20,
   20,
   14,
   8,
   13,
   8,
   3};
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
   2,
   7.8097,
   15.49193,
   18.1659,
   18.86796,
   17.29162,
   16.21727,
   15.06652,
   13.56466,
   12.40967,
   11.48913,
   10.1212,
   8.6693,
   7.679,
   8.0018,
   6.3813,
   5.5285,
   5.5285,
   4.6266,
   4.6266,
   3.9102,
   3.0307,
   3.77763,
   3.0307,
   2.143368};
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
   1.51917,
   7.6066,
   15.49193,
   18.1659,
   18.86796,
   17.29162,
   16.21727,
   15.06652,
   13.56466,
   12.40967,
   11.48913,
   9.92,
   8.4672,
   7.4757,
   7.7989,
   6.1757,
   5.3201,
   5.3201,
   4.4133,
   4.4133,
   3.6898,
   2.7896,
   3.5552,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1980);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(412.3548);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=72.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2721.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 62.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1741.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 716.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_cc_transferred_energy_all");
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
   0.5354659,
   0.2056936,
   0.2014378,
   0.2302669,
   0.2323076,
   0.2230837,
   0.2258455,
   0.2282501,
   0.2102367,
   0.2148438,
   0.2407989,
   0.221407,
   0.2284228,
   0.2517708,
   0.2404019,
   0.2477717,
   0.258217,
   0.2271092,
   0.2759286,
   0.2708508,
   0.2809109,
   0.3306042,
   0.2867117,
   0.2663204,
   0.3323046};
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
   0.5354659,
   0.2056936,
   0.2014378,
   0.2302669,
   0.2323076,
   0.2230837,
   0.2258455,
   0.2282501,
   0.2102367,
   0.2148438,
   0.2407989,
   0.221407,
   0.2284228,
   0.2517708,
   0.2404019,
   0.2477717,
   0.258217,
   0.2271092,
   0.2759286,
   0.2708508,
   0.2809109,
   0.3306042,
   0.2867117,
   0.2663204,
   0.3323046};
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
   0.5354659,
   0.2056936,
   0.2014378,
   0.2302669,
   0.2323076,
   0.2230837,
   0.2258455,
   0.2282501,
   0.2102367,
   0.2148438,
   0.2407989,
   0.221407,
   0.2284228,
   0.2517708,
   0.2404019,
   0.2477717,
   0.258217,
   0.2271092,
   0.2759286,
   0.2708508,
   0.2809109,
   0.3306042,
   0.2867117,
   0.2663204,
   0.3323046};
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
   0.5354659,
   0.2056936,
   0.2014378,
   0.2302669,
   0.2323076,
   0.2230837,
   0.2258455,
   0.2282501,
   0.2102367,
   0.2148438,
   0.2407989,
   0.221407,
   0.2284228,
   0.2517708,
   0.2404019,
   0.2477717,
   0.258217,
   0.2271092,
   0.2759286,
   0.2708508,
   0.2809109,
   0.3306042,
   0.2867117,
   0.2663204,
   0.3323046};
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
   0.3443847,
   1.447564,
   1.821961,
   1.448266,
   1.249446,
   0.9648643,
   0.9193986,
   0.8879394,
   0.8477625,
   0.8375529,
   0.9257385,
   0.8330186,
   0.655109,
   0.7127099,
   0.9159264,
   0.754053,
   0.7065063,
   0.8233038,
   0.7908645,
   0.9319593,
   1.045584,
   0.7448668,
   1.124037,
   0.8807292,
   0.437099};
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
   0.3443847,
   0.1916108,
   0.1176071,
   0.07972442,
   0.06622049,
   0.05579955,
   0.05669255,
   0.05893461,
   0.06249788,
   0.06749194,
   0.08057519,
   0.08431148,
   0.07779913,
   0.09601578,
   0.1182106,
   0.1233805,
   0.1346869,
   0.1569529,
   0.1829507,
   0.2155901,
   0.2920315,
   0.2821835,
   0.3266304,
   0.3336532,
   0.312288};
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
   0.2615895,
   0.1866278,
   0.1176071,
   0.07972442,
   0.06622049,
   0.05579955,
   0.05669255,
   0.05893461,
   0.06249788,
   0.06749194,
   0.08057519,
   0.08263544,
   0.07598546,
   0.09347378,
   0.1152132,
   0.1194053,
   0.1296098,
   0.1510365,
   0.1745161,
   0.2056508,
   0.275571,
   0.2597351,
   0.3073981,
   0.3071103,
   0.2512183};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1980);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.133525);
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
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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

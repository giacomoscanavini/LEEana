#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Mar 13 17:56:40 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-0.7200125,293.3333,79.61823);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__25->SetBinContent(0,0.3243973);
   hmc__25->SetBinContent(1,24.41788);
   hmc__25->SetBinContent(2,20.84624);
   hmc__25->SetBinContent(3,18.26554);
   hmc__25->SetBinContent(4,14.89118);
   hmc__25->SetBinContent(5,13.17628);
   hmc__25->SetBinContent(6,12.10399);
   hmc__25->SetBinContent(7,11.59733);
   hmc__25->SetBinContent(8,13.58875);
   hmc__25->SetBinContent(9,10.91164);
   hmc__25->SetBinContent(10,14.97496);
   hmc__25->SetBinContent(11,13.19675);
   hmc__25->SetBinContent(12,15.72334);
   hmc__25->SetBinContent(13,15.72224);
   hmc__25->SetBinContent(14,14.43939);
   hmc__25->SetBinContent(15,14.57503);
   hmc__25->SetBinContent(16,15.46833);
   hmc__25->SetBinContent(17,17.33357);
   hmc__25->SetBinContent(18,17.49545);
   hmc__25->SetBinContent(19,19.55711);
   hmc__25->SetBinContent(20,17.91162);
   hmc__25->SetBinContent(21,21.47626);
   hmc__25->SetBinContent(22,25.06429);
   hmc__25->SetBinContent(23,36.00063);
   hmc__25->SetBinContent(24,29.23269);
   hmc__25->SetBinContent(25,26.89829);
   hmc__25->SetBinContent(26,24.60494);
   hmc__25->SetBinContent(27,0.7373402);
   hmc__25->SetBinError(0,0.3243973);
   hmc__25->SetBinError(1,12.66523);
   hmc__25->SetBinError(2,16.39431);
   hmc__25->SetBinError(3,8.961104);
   hmc__25->SetBinError(4,9.089478);
   hmc__25->SetBinError(5,7.898542);
   hmc__25->SetBinError(6,6.634737);
   hmc__25->SetBinError(7,7.993999);
   hmc__25->SetBinError(8,10.39039);
   hmc__25->SetBinError(9,6.278296);
   hmc__25->SetBinError(10,9.090529);
   hmc__25->SetBinError(11,10.57196);
   hmc__25->SetBinError(12,10.17765);
   hmc__25->SetBinError(13,9.600066);
   hmc__25->SetBinError(14,7.082112);
   hmc__25->SetBinError(15,9.38185);
   hmc__25->SetBinError(16,8.655191);
   hmc__25->SetBinError(17,16.14209);
   hmc__25->SetBinError(18,9.19259);
   hmc__25->SetBinError(19,9.847582);
   hmc__25->SetBinError(20,9.806293);
   hmc__25->SetBinError(21,15.44252);
   hmc__25->SetBinError(22,12.35019);
   hmc__25->SetBinError(23,18.75943);
   hmc__25->SetBinError(24,11.91659);
   hmc__25->SetBinError(25,15.475);
   hmc__25->SetBinError(26,12.01935);
   hmc__25->SetBinError(27,0.7072608);
   hmc__25->SetMinimum(-0.7200125);
   hmc__25->SetMaximum(75.60131);
   hmc__25->SetEntries(469.1651);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",26,0,260);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(37.80066);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,0.7336084);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.3900497);
   hbadmatch_stack_1->SetBinContent(4,0.439009);
   hbadmatch_stack_1->SetBinContent(6,0.4155681);
   hbadmatch_stack_1->SetBinContent(8,0.6803553);
   hbadmatch_stack_1->SetBinContent(9,0.1967154);
   hbadmatch_stack_1->SetBinContent(10,0.5884556);
   hbadmatch_stack_1->SetBinContent(11,1.239929);
   hbadmatch_stack_1->SetBinContent(12,0.9568433);
   hbadmatch_stack_1->SetBinContent(13,0.8753801);
   hbadmatch_stack_1->SetBinContent(14,0.7834804);
   hbadmatch_stack_1->SetBinContent(15,0.7319179);
   hbadmatch_stack_1->SetBinContent(16,0.800496);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinContent(18,0.8239519);
   hbadmatch_stack_1->SetBinContent(19,0.5884556);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.7616432);
   hbadmatch_stack_1->SetBinContent(22,1.049899);
   hbadmatch_stack_1->SetBinContent(23,2.363243);
   hbadmatch_stack_1->SetBinContent(24,0.4117681);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.9269427);
   hbadmatch_stack_1->SetBinError(1,0.4394482);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.2758068);
   hbadmatch_stack_1->SetBinError(4,0.3123507);
   hbadmatch_stack_1->SetBinError(6,0.2942677);
   hbadmatch_stack_1->SetBinError(8,0.4810838);
   hbadmatch_stack_1->SetBinError(9,0.1967154);
   hbadmatch_stack_1->SetBinError(10,0.3397478);
   hbadmatch_stack_1->SetBinError(11,0.6287267);
   hbadmatch_stack_1->SetBinError(12,0.6008756);
   hbadmatch_stack_1->SetBinError(13,0.5191111);
   hbadmatch_stack_1->SetBinError(14,0.3917439);
   hbadmatch_stack_1->SetBinError(15,0.438694);
   hbadmatch_stack_1->SetBinError(16,0.4708987);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetBinError(18,0.4975074);
   hbadmatch_stack_1->SetBinError(19,0.3397478);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.4526924);
   hbadmatch_stack_1->SetBinError(22,0.4709785);
   hbadmatch_stack_1->SetBinError(23,0.8792875);
   hbadmatch_stack_1->SetBinError(24,0.2914526);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.4800908);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(2,1.779209);
   hext_stack_2->SetBinContent(3,0.4065989);
   hext_stack_2->SetBinContent(4,1.461993);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.7309963);
   hext_stack_2->SetBinContent(7,0.6416141);
   hext_stack_2->SetBinContent(8,0.6487947);
   hext_stack_2->SetBinContent(9,1.37261);
   hext_stack_2->SetBinContent(10,1.454812);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(12,1.697008);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,1.689827);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,1.297589);
   hext_stack_2->SetBinContent(17,0.8131978);
   hext_stack_2->SetBinContent(18,2.428004);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,1.048213);
   hext_stack_2->SetBinContent(21,1.137595);
   hext_stack_2->SetBinContent(22,1.544194);
   hext_stack_2->SetBinContent(23,3.953428);
   hext_stack_2->SetBinContent(24,3.076798);
   hext_stack_2->SetBinContent(25,2.352983);
   hext_stack_2->SetBinContent(26,3.076798);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(2,0.9206235);
   hext_stack_2->SetBinError(3,0.4065989);
   hext_stack_2->SetBinError(4,0.7356036);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.5201503);
   hext_stack_2->SetBinError(7,0.6416141);
   hext_stack_2->SetBinError(8,0.4587671);
   hext_stack_2->SetBinError(9,0.8259691);
   hext_stack_2->SetBinError(10,0.8615765);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(12,0.8873887);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,0.9943139);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.6487947);
   hext_stack_2->SetBinError(17,0.5750177);
   hext_stack_2->SetBinError(18,1.028599);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,0.7595995);
   hext_stack_2->SetBinError(21,0.6602113);
   hext_stack_2->SetBinError(22,0.7753719);
   hext_stack_2->SetBinError(23,1.387983);
   hext_stack_2->SetBinError(24,1.126269);
   hext_stack_2->SetBinError(25,0.8925942);
   hext_stack_2->SetBinError(26,1.126269);
   hext_stack_2->SetEntries(92);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.1380715);
   hdirt_stack_3->SetBinContent(23,0.2623434);
   hdirt_stack_3->SetBinContent(24,0.4049124);
   hdirt_stack_3->SetBinContent(25,0.002351481);
   hdirt_stack_3->SetBinContent(26,0.2645861);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.1380715);
   hdirt_stack_3->SetBinError(23,0.2623434);
   hdirt_stack_3->SetBinError(24,0.4049124);
   hdirt_stack_3->SetBinError(25,0.002351481);
   hdirt_stack_3->SetBinError(26,0.2645861);
   hdirt_stack_3->SetEntries(11);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(1,14.68309);
   houtFV_stack_4->SetBinContent(2,1.660551);
   houtFV_stack_4->SetBinContent(3,3.182711);
   houtFV_stack_4->SetBinContent(4,2.250697);
   houtFV_stack_4->SetBinContent(5,2.7859);
   houtFV_stack_4->SetBinContent(6,2.927366);
   houtFV_stack_4->SetBinContent(7,2.244923);
   houtFV_stack_4->SetBinContent(8,2.442341);
   houtFV_stack_4->SetBinContent(9,0.8770706);
   houtFV_stack_4->SetBinContent(10,3.085931);
   houtFV_stack_4->SetBinContent(11,1.412273);
   houtFV_stack_4->SetBinContent(12,2.694);
   houtFV_stack_4->SetBinContent(13,2.786548);
   houtFV_stack_4->SetBinContent(14,1.152068);
   houtFV_stack_4->SetBinContent(15,2.050601);
   houtFV_stack_4->SetBinContent(16,1.893849);
   houtFV_stack_4->SetBinContent(17,3.449929);
   houtFV_stack_4->SetBinContent(18,1.660551);
   houtFV_stack_4->SetBinContent(19,2.054503);
   houtFV_stack_4->SetBinContent(20,1.950857);
   houtFV_stack_4->SetBinContent(21,2.180665);
   houtFV_stack_4->SetBinContent(22,1.94673);
   houtFV_stack_4->SetBinContent(23,2.247316);
   houtFV_stack_4->SetBinContent(24,2.197444);
   houtFV_stack_4->SetBinContent(25,2.190138);
   houtFV_stack_4->SetBinContent(26,10.48954);
   houtFV_stack_4->SetBinContent(27,0.4425796);
   houtFV_stack_4->SetBinError(1,1.895508);
   houtFV_stack_4->SetBinError(2,0.650847);
   houtFV_stack_4->SetBinError(3,0.87873);
   houtFV_stack_4->SetBinError(4,0.7346377);
   houtFV_stack_4->SetBinError(5,0.8327353);
   houtFV_stack_4->SetBinError(6,0.8350511);
   houtFV_stack_4->SetBinError(7,0.8051925);
   houtFV_stack_4->SetBinError(8,0.759212);
   houtFV_stack_4->SetBinError(9,0.5197486);
   houtFV_stack_4->SetBinError(10,0.893167);
   houtFV_stack_4->SetBinError(11,0.6510715);
   houtFV_stack_4->SetBinError(12,0.7598915);
   houtFV_stack_4->SetBinError(13,0.8692113);
   houtFV_stack_4->SetBinError(14,0.5301625);
   houtFV_stack_4->SetBinError(15,0.7068742);
   houtFV_stack_4->SetBinError(16,0.754862);
   houtFV_stack_4->SetBinError(17,0.9187303);
   houtFV_stack_4->SetBinError(18,0.650847);
   houtFV_stack_4->SetBinError(19,0.7078107);
   houtFV_stack_4->SetBinError(20,0.7609034);
   houtFV_stack_4->SetBinError(21,0.6835527);
   houtFV_stack_4->SetBinError(22,0.6630669);
   houtFV_stack_4->SetBinError(23,0.7337357);
   houtFV_stack_4->SetBinError(24,0.760276);
   houtFV_stack_4->SetBinError(25,0.7257522);
   houtFV_stack_4->SetBinError(26,1.60504);
   houtFV_stack_4->SetBinError(27,0.4425796);
   houtFV_stack_4->SetEntries(344);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.610406);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.287822);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.357072);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.723165);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.742024);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.56972);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.486852);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.97685);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.692194);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.259244);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.236584);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.638474);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.557102);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.648516);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.678744);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.857265);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.50047);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.263316);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.448742);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.738784);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.395518);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.968305);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.572726);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.944468);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.166508);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.761116);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6095633);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8266356);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8119482);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5611922);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7168609);
   hNCpi0inFVres_stack_7->SetBinError(6,0.618805);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6323374);
   hNCpi0inFVres_stack_7->SetBinError(8,0.753479);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5090679);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4701832);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6419588);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6364784);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6540713);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5088766);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5336417);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4886522);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6379547);
   hNCpi0inFVres_stack_7->SetBinError(18,0.572805);
   hNCpi0inFVres_stack_7->SetBinError(19,0.715865);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6527806);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7824101);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8483239);
   hNCpi0inFVres_stack_7->SetBinError(23,0.932435);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8254574);
   hNCpi0inFVres_stack_7->SetBinError(25,0.864495);
   hNCpi0inFVres_stack_7->SetBinError(26,0.560441);
   hNCpi0inFVres_stack_7->SetBinError(27,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.380221);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.408458);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.11584);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.184426);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6546538);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7529721);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8790222);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.697004);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5581679);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.366276);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.478708);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.882262);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.603926);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.28748);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.059208);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.302538);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3972726);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3780289);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3637747);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1962949);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3162714);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3599208);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2563433);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2198343);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4042329);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4310268);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4661653);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4427564);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5360676);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3494035);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,2.200825);
   hCCpi0inFV_stack_10->SetBinContent(2,5.62792);
   hCCpi0inFV_stack_10->SetBinContent(3,2.498975);
   hCCpi0inFV_stack_10->SetBinContent(4,2.106711);
   hCCpi0inFV_stack_10->SetBinContent(5,2.055672);
   hCCpi0inFV_stack_10->SetBinContent(6,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(7,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(8,1.561559);
   hCCpi0inFV_stack_10->SetBinContent(9,2.144158);
   hCCpi0inFV_stack_10->SetBinContent(10,4.299607);
   hCCpi0inFV_stack_10->SetBinContent(11,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(12,2.667838);
   hCCpi0inFV_stack_10->SetBinContent(13,1.323754);
   hCCpi0inFV_stack_10->SetBinContent(14,4.361604);
   hCCpi0inFV_stack_10->SetBinContent(15,2.945711);
   hCCpi0inFV_stack_10->SetBinContent(16,3.56938);
   hCCpi0inFV_stack_10->SetBinContent(17,2.874418);
   hCCpi0inFV_stack_10->SetBinContent(18,5.235686);
   hCCpi0inFV_stack_10->SetBinContent(19,4.263267);
   hCCpi0inFV_stack_10->SetBinContent(20,4.230169);
   hCCpi0inFV_stack_10->SetBinContent(21,4.138288);
   hCCpi0inFV_stack_10->SetBinContent(22,5.372637);
   hCCpi0inFV_stack_10->SetBinContent(23,6.895318);
   hCCpi0inFV_stack_10->SetBinContent(24,7.665342);
   hCCpi0inFV_stack_10->SetBinContent(25,6.304007);
   hCCpi0inFV_stack_10->SetBinContent(26,4.177616);
   hCCpi0inFV_stack_10->SetBinError(1,0.7611465);
   hCCpi0inFV_stack_10->SetBinError(2,1.195657);
   hCCpi0inFV_stack_10->SetBinError(3,0.7344388);
   hCCpi0inFV_stack_10->SetBinError(4,0.7239964);
   hCCpi0inFV_stack_10->SetBinError(5,0.7082781);
   hCCpi0inFV_stack_10->SetBinError(6,0.588146);
   hCCpi0inFV_stack_10->SetBinError(7,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(8,0.6050217);
   hCCpi0inFV_stack_10->SetBinError(9,0.6808065);
   hCCpi0inFV_stack_10->SetBinError(10,1.019167);
   hCCpi0inFV_stack_10->SetBinError(11,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(12,0.8893273);
   hCCpi0inFV_stack_10->SetBinError(13,0.5560625);
   hCCpi0inFV_stack_10->SetBinError(14,1.131297);
   hCCpi0inFV_stack_10->SetBinError(15,0.9282906);
   hCCpi0inFV_stack_10->SetBinError(16,0.9202779);
   hCCpi0inFV_stack_10->SetBinError(17,0.8989642);
   hCCpi0inFV_stack_10->SetBinError(18,1.181125);
   hCCpi0inFV_stack_10->SetBinError(19,1.080082);
   hCCpi0inFV_stack_10->SetBinError(20,1.038185);
   hCCpi0inFV_stack_10->SetBinError(21,1.007563);
   hCCpi0inFV_stack_10->SetBinError(22,1.126967);
   hCCpi0inFV_stack_10->SetBinError(23,1.349312);
   hCCpi0inFV_stack_10->SetBinError(24,1.352635);
   hCCpi0inFV_stack_10->SetBinError(25,1.2562);
   hCCpi0inFV_stack_10->SetBinError(26,1.08143);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,0.3401776);
   hNCinFV_stack_11->SetBinContent(2,1.127039);
   hNCinFV_stack_11->SetBinContent(3,2.340906);
   hNCinFV_stack_11->SetBinContent(4,0.9286332);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,0.785171);
   hNCinFV_stack_11->SetBinContent(7,0.536893);
   hNCinFV_stack_11->SetBinContent(8,0.3934307);
   hNCinFV_stack_11->SetBinContent(9,1.175221);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(12,0.7319179);
   hNCinFV_stack_11->SetBinContent(13,1.073786);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.9286332);
   hNCinFV_stack_11->SetBinContent(17,0.5867651);
   hNCinFV_stack_11->SetBinContent(18,1.26712);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,1.178602);
   hNCinFV_stack_11->SetBinContent(22,1.125349);
   hNCinFV_stack_11->SetBinContent(23,2.537621);
   hNCinFV_stack_11->SetBinContent(24,0.8770706);
   hNCinFV_stack_11->SetBinContent(25,1.800632);
   hNCinFV_stack_11->SetBinError(1,0.3401776);
   hNCinFV_stack_11->SetBinError(2,0.5201044);
   hNCinFV_stack_11->SetBinError(3,0.8093475);
   hNCinFV_stack_11->SetBinError(4,0.48078);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.3925882);
   hNCinFV_stack_11->SetBinError(7,0.3929602);
   hNCinFV_stack_11->SetBinError(8,0.2781975);
   hNCinFV_stack_11->SetBinError(9,0.4797863);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(12,0.438694);
   hNCinFV_stack_11->SetBinError(13,0.5557297);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.48078);
   hNCinFV_stack_11->SetBinError(17,0.3387718);
   hNCinFV_stack_11->SetBinError(18,0.5883944);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.4811646);
   hNCinFV_stack_11->SetBinError(22,0.5194673);
   hNCinFV_stack_11->SetBinError(23,0.8329108);
   hNCinFV_stack_11->SetBinError(24,0.5197486);
   hNCinFV_stack_11->SetBinError(25,0.7066125);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,2.110419);
   hnumuCCinFV_stack_12->SetBinContent(2,2.390778);
   hnumuCCinFV_stack_12->SetBinContent(3,1.315365);
   hnumuCCinFV_stack_12->SetBinContent(4,1.977077);
   hnumuCCinFV_stack_12->SetBinContent(5,1.439601);
   hnumuCCinFV_stack_12->SetBinContent(6,1.260115);
   hnumuCCinFV_stack_12->SetBinContent(7,3.177692);
   hnumuCCinFV_stack_12->SetBinContent(8,1.992952);
   hnumuCCinFV_stack_12->SetBinContent(9,1.811633);
   hnumuCCinFV_stack_12->SetBinContent(10,2.193759);
   hnumuCCinFV_stack_12->SetBinContent(11,3.199971);
   hnumuCCinFV_stack_12->SetBinContent(12,2.695225);
   hnumuCCinFV_stack_12->SetBinContent(13,3.557337);
   hnumuCCinFV_stack_12->SetBinContent(14,3.161443);
   hnumuCCinFV_stack_12->SetBinContent(15,4.119465);
   hnumuCCinFV_stack_12->SetBinContent(16,3.424109);
   hnumuCCinFV_stack_12->SetBinContent(17,4.670811);
   hnumuCCinFV_stack_12->SetBinContent(18,1.797222);
   hnumuCCinFV_stack_12->SetBinContent(19,5.629439);
   hnumuCCinFV_stack_12->SetBinContent(20,5.246023);
   hnumuCCinFV_stack_12->SetBinContent(21,4.756113);
   hnumuCCinFV_stack_12->SetBinContent(22,6.328792);
   hnumuCCinFV_stack_12->SetBinContent(23,6.324943);
   hnumuCCinFV_stack_12->SetBinContent(24,5.939354);
   hnumuCCinFV_stack_12->SetBinContent(25,4.010191);
   hnumuCCinFV_stack_12->SetBinContent(26,1.849135);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,0.7793212);
   hnumuCCinFV_stack_12->SetBinError(2,0.7844693);
   hnumuCCinFV_stack_12->SetBinError(3,0.6205553);
   hnumuCCinFV_stack_12->SetBinError(4,0.6892907);
   hnumuCCinFV_stack_12->SetBinError(5,0.5997782);
   hnumuCCinFV_stack_12->SetBinError(6,0.5738101);
   hnumuCCinFV_stack_12->SetBinError(7,1.261188);
   hnumuCCinFV_stack_12->SetBinError(8,0.7965841);
   hnumuCCinFV_stack_12->SetBinError(9,0.699075);
   hnumuCCinFV_stack_12->SetBinError(10,0.7988353);
   hnumuCCinFV_stack_12->SetBinError(11,1.119173);
   hnumuCCinFV_stack_12->SetBinError(12,1.09183);
   hnumuCCinFV_stack_12->SetBinError(13,1.006287);
   hnumuCCinFV_stack_12->SetBinError(14,0.9664011);
   hnumuCCinFV_stack_12->SetBinError(15,1.172626);
   hnumuCCinFV_stack_12->SetBinError(16,1.568196);
   hnumuCCinFV_stack_12->SetBinError(17,1.073986);
   hnumuCCinFV_stack_12->SetBinError(18,0.6996786);
   hnumuCCinFV_stack_12->SetBinError(19,1.224753);
   hnumuCCinFV_stack_12->SetBinError(20,1.191864);
   hnumuCCinFV_stack_12->SetBinError(21,1.265758);
   hnumuCCinFV_stack_12->SetBinError(22,1.550496);
   hnumuCCinFV_stack_12->SetBinError(23,1.370045);
   hnumuCCinFV_stack_12->SetBinError(24,1.569481);
   hnumuCCinFV_stack_12->SetBinError(25,1.081889);
   hnumuCCinFV_stack_12->SetBinError(26,0.7322336);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(6,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(11,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(23,1.961426);
   hnueCCinFV_stack_13->SetBinContent(25,0.5593877);
   hnueCCinFV_stack_13->SetBinError(3,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.3172361);
   hnueCCinFV_stack_13->SetBinError(6,0.2171002);
   hnueCCinFV_stack_13->SetBinError(11,0.2331833);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.4041031);
   hnueCCinFV_stack_13->SetBinError(23,1.59394);
   hnueCCinFV_stack_13->SetBinError(25,0.4046898);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__26->SetBinContent(0,0.3243973);
   hmcerror__26->SetBinContent(1,24.41788);
   hmcerror__26->SetBinContent(2,20.84624);
   hmcerror__26->SetBinContent(3,18.26554);
   hmcerror__26->SetBinContent(4,14.89118);
   hmcerror__26->SetBinContent(5,13.17628);
   hmcerror__26->SetBinContent(6,12.10399);
   hmcerror__26->SetBinContent(7,11.59733);
   hmcerror__26->SetBinContent(8,13.58875);
   hmcerror__26->SetBinContent(9,10.91164);
   hmcerror__26->SetBinContent(10,14.97496);
   hmcerror__26->SetBinContent(11,13.19675);
   hmcerror__26->SetBinContent(12,15.72334);
   hmcerror__26->SetBinContent(13,15.72224);
   hmcerror__26->SetBinContent(14,14.43939);
   hmcerror__26->SetBinContent(15,14.57503);
   hmcerror__26->SetBinContent(16,15.46833);
   hmcerror__26->SetBinContent(17,17.33357);
   hmcerror__26->SetBinContent(18,17.49545);
   hmcerror__26->SetBinContent(19,19.55711);
   hmcerror__26->SetBinContent(20,17.91162);
   hmcerror__26->SetBinContent(21,21.47626);
   hmcerror__26->SetBinContent(22,25.06429);
   hmcerror__26->SetBinContent(23,36.00063);
   hmcerror__26->SetBinContent(24,29.23269);
   hmcerror__26->SetBinContent(25,26.89829);
   hmcerror__26->SetBinContent(26,24.60494);
   hmcerror__26->SetBinContent(27,0.7373402);
   hmcerror__26->SetBinError(0,0.3243973);
   hmcerror__26->SetBinError(1,12.66523);
   hmcerror__26->SetBinError(2,16.39431);
   hmcerror__26->SetBinError(3,8.961104);
   hmcerror__26->SetBinError(4,9.089478);
   hmcerror__26->SetBinError(5,7.898542);
   hmcerror__26->SetBinError(6,6.634737);
   hmcerror__26->SetBinError(7,7.993999);
   hmcerror__26->SetBinError(8,10.39039);
   hmcerror__26->SetBinError(9,6.278296);
   hmcerror__26->SetBinError(10,9.090529);
   hmcerror__26->SetBinError(11,10.57196);
   hmcerror__26->SetBinError(12,10.17765);
   hmcerror__26->SetBinError(13,9.600066);
   hmcerror__26->SetBinError(14,7.082112);
   hmcerror__26->SetBinError(15,9.38185);
   hmcerror__26->SetBinError(16,8.655191);
   hmcerror__26->SetBinError(17,16.14209);
   hmcerror__26->SetBinError(18,9.19259);
   hmcerror__26->SetBinError(19,9.847582);
   hmcerror__26->SetBinError(20,9.806293);
   hmcerror__26->SetBinError(21,15.44252);
   hmcerror__26->SetBinError(22,12.35019);
   hmcerror__26->SetBinError(23,18.75943);
   hmcerror__26->SetBinError(24,11.91659);
   hmcerror__26->SetBinError(25,15.475);
   hmcerror__26->SetBinError(26,12.01935);
   hmcerror__26->SetBinError(27,0.7072608);
   hmcerror__26->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[26] = {
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
   Double_t _fy3033[26] = {
   24,
   10,
   20,
   13,
   8,
   11,
   12,
   10,
   14,
   8,
   12,
   10,
   16,
   7,
   14,
   12,
   16,
   16,
   13,
   17,
   22,
   21,
   19,
   20,
   30,
   20};
   Double_t _felx3033[26] = {
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
   Double_t _fely3033[26] = {
   5.0476,
   3.34883,
   4.6266,
   3.77763,
   3.0307,
   3.4975,
   3.64022,
   3.34883,
   3.9102,
   3.0307,
   3.64022,
   3.34883,
   4.1628,
   2.85954,
   3.9102,
   3.64022,
   4.1628,
   4.1628,
   3.77763,
   4.2835,
   4.8417,
   4.7354,
   4.5151,
   4.6266,
   5.6197,
   4.6266};
   Double_t _fehx3033[26] = {
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
   Double_t _fehy3033[26] = {
   4.837,
   3.1179,
   4.4133,
   3.5552,
   2.7896,
   3.27,
   3.4155,
   3.1179,
   3.6898,
   2.7896,
   3.4155,
   3.1179,
   3.9454,
   2.61053,
   3.6898,
   3.4155,
   3.9454,
   3.9454,
   3.5552,
   4.0673,
   4.6299,
   4.5229,
   4.3011,
   4.4133,
   5.4117,
   4.4133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,286);
   Graph_Graph3033->SetMinimum(1.013336);
   Graph_Graph3033->SetMaximum(38.53882);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.1/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 395.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.6","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.5","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.4","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[26] = {
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
   Double_t _fy3034[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[26] = {
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
   Double_t _fely3034[26] = {
   0.5186865,
   0.78644,
   0.4906017,
   0.6103934,
   0.5994518,
   0.5481447,
   0.6892965,
   0.7646316,
   0.5753761,
   0.6070487,
   0.8011036,
   0.6472959,
   0.6106041,
   0.4904717,
   0.6436932,
   0.5595428,
   0.9312615,
   0.5254274,
   0.5035296,
   0.5474821,
   0.7190506,
   0.4927405,
   0.5210861,
   0.407646,
   0.5753152,
   0.4884935};
   Double_t _fehx3034[26] = {
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
   Double_t _fehy3034[26] = {
   0.5186865,
   0.78644,
   0.4906017,
   0.6103934,
   0.5994518,
   0.5481447,
   0.6892965,
   0.7646316,
   0.5753761,
   0.6070487,
   0.8011036,
   0.6472959,
   0.6106041,
   0.4904717,
   0.6436932,
   0.5595428,
   0.9312615,
   0.5254274,
   0.5035296,
   0.5474821,
   0.7190506,
   0.4927405,
   0.5210861,
   0.407646,
   0.5753152,
   0.4884935};
   grae = new TGraphAsymmErrors(26,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,286);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[26] = {
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
   Double_t _fy3035[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[26] = {
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
   Double_t _fely3035[26] = {
   0.2268077,
   0.2427414,
   0.2828551,
   0.2371851,
   0.282486,
   0.264175,
   0.2977253,
   0.2477465,
   0.2380615,
   0.2536767,
   0.2493088,
   0.2408832,
   0.2306325,
   0.2546264,
   0.2485041,
   0.2484754,
   0.2332678,
   0.2287299,
   0.2367256,
   0.2323519,
   0.2495483,
   0.2116285,
   0.2106959,
   0.227864,
   0.213349,
   0.2396274};
   Double_t _fehx3035[26] = {
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
   Double_t _fehy3035[26] = {
   0.2268077,
   0.2427414,
   0.2828551,
   0.2371851,
   0.282486,
   0.264175,
   0.2977253,
   0.2477465,
   0.2380615,
   0.2536767,
   0.2493088,
   0.2408832,
   0.2306325,
   0.2546264,
   0.2485041,
   0.2484754,
   0.2332678,
   0.2287299,
   0.2367256,
   0.2323519,
   0.2495483,
   0.2116285,
   0.2106959,
   0.227864,
   0.213349,
   0.2396274};
   grae = new TGraphAsymmErrors(26,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,286);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[26] = {
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
   Double_t _fy3036[26] = {
   0.9828863,
   0.4797029,
   1.094958,
   0.873,
   0.6071519,
   0.9087913,
   1.034721,
   0.7359026,
   1.283034,
   0.5342252,
   0.909315,
   0.6359971,
   1.017666,
   0.4847851,
   0.9605468,
   0.7757788,
   0.9230642,
   0.9145233,
   0.66472,
   0.9491044,
   1.024387,
   0.8378456,
   0.5277686,
   0.6841657,
   1.115312,
   0.8128449};
   Double_t _felx3036[26] = {
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
   Double_t _fely3036[26] = {
   0.2067174,
   0.1606444,
   0.2532967,
   0.2536824,
   0.2300119,
   0.2889543,
   0.3138843,
   0.2464413,
   0.3583513,
   0.2023845,
   0.2758422,
   0.2129846,
   0.2647714,
   0.1980375,
   0.2682807,
   0.2353338,
   0.2401582,
   0.2379361,
   0.1931589,
   0.2391464,
   0.2254443,
   0.1889302,
   0.1254173,
   0.158268,
   0.208924,
   0.1880354};
   Double_t _fehx3036[26] = {
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
   Double_t _fehy3036[26] = {
   0.1980925,
   0.1495666,
   0.2416189,
   0.2387454,
   0.2117139,
   0.2701589,
   0.2945074,
   0.2294471,
   0.3381527,
   0.1862843,
   0.2588138,
   0.1982976,
   0.2509438,
   0.1807923,
   0.253159,
   0.220806,
   0.2276161,
   0.22551,
   0.1817856,
   0.227076,
   0.2155822,
   0.180452,
   0.1194729,
   0.1509714,
   0.2011912,
   0.1793664};
   grae = new TGraphAsymmErrors(26,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,286);
   Graph_Graph3036->SetMinimum(0.1533037);
   Graph_Graph3036->SetMaximum(1.75463);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

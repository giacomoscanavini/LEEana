#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 15:31:57 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-6.598401,101.5385,729.6442);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__13->SetBinContent(1,329.92);
   hmc__13->SetBinContent(2,328.6826);
   hmc__13->SetBinContent(3,292.4089);
   hmc__13->SetBinContent(4,243.0874);
   hmc__13->SetBinContent(5,203.7537);
   hmc__13->SetBinContent(6,180.2767);
   hmc__13->SetBinContent(7,144.4985);
   hmc__13->SetBinContent(8,115.8212);
   hmc__13->SetBinContent(9,93.26321);
   hmc__13->SetBinContent(10,78.86601);
   hmc__13->SetBinContent(11,65.11394);
   hmc__13->SetBinContent(12,65.38993);
   hmc__13->SetBinContent(13,47.30711);
   hmc__13->SetBinContent(14,42.1759);
   hmc__13->SetBinContent(15,33.6483);
   hmc__13->SetBinContent(16,27.63787);
   hmc__13->SetBinContent(17,21.67427);
   hmc__13->SetBinContent(18,20.15772);
   hmc__13->SetBinContent(19,21.34786);
   hmc__13->SetBinContent(20,16.6608);
   hmc__13->SetBinContent(21,11.60683);
   hmc__13->SetBinContent(22,11.75082);
   hmc__13->SetBinContent(23,9.242433);
   hmc__13->SetBinContent(24,8.596294);
   hmc__13->SetBinContent(25,84.15392);
   hmc__13->SetBinError(1,110.3082);
   hmc__13->SetBinError(2,125.2495);
   hmc__13->SetBinError(3,107.3898);
   hmc__13->SetBinError(4,96.89056);
   hmc__13->SetBinError(5,77.60277);
   hmc__13->SetBinError(6,66.83589);
   hmc__13->SetBinError(7,53.35544);
   hmc__13->SetBinError(8,44.16891);
   hmc__13->SetBinError(9,38.56269);
   hmc__13->SetBinError(10,33.95845);
   hmc__13->SetBinError(11,25.3864);
   hmc__13->SetBinError(12,24.28804);
   hmc__13->SetBinError(13,20.20195);
   hmc__13->SetBinError(14,18.7267);
   hmc__13->SetBinError(15,22.67761);
   hmc__13->SetBinError(16,12.99036);
   hmc__13->SetBinError(17,9.365346);
   hmc__13->SetBinError(18,9.82833);
   hmc__13->SetBinError(19,10.31831);
   hmc__13->SetBinError(20,14.43122);
   hmc__13->SetBinError(21,8.266022);
   hmc__13->SetBinError(22,7.565085);
   hmc__13->SetBinError(23,8.668447);
   hmc__13->SetBinError(24,9.108425);
   hmc__13->SetBinError(25,26.9476);
   hmc__13->SetMinimum(-6.598401);
   hmc__13->SetMaximum(692.8321);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,90);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(346.4161);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,4.434955);
   hbadmatch_stack_1->SetBinContent(2,4.321474);
   hbadmatch_stack_1->SetBinContent(3,4.935162);
   hbadmatch_stack_1->SetBinContent(4,4.825917);
   hbadmatch_stack_1->SetBinContent(5,4.158151);
   hbadmatch_stack_1->SetBinContent(6,2.902905);
   hbadmatch_stack_1->SetBinContent(7,2.701579);
   hbadmatch_stack_1->SetBinContent(8,2.17484);
   hbadmatch_stack_1->SetBinContent(9,2.809945);
   hbadmatch_stack_1->SetBinContent(10,1.974849);
   hbadmatch_stack_1->SetBinContent(11,2.924912);
   hbadmatch_stack_1->SetBinContent(12,2.758873);
   hbadmatch_stack_1->SetBinContent(13,0.6156429);
   hbadmatch_stack_1->SetBinContent(14,1.286221);
   hbadmatch_stack_1->SetBinContent(15,1.518472);
   hbadmatch_stack_1->SetBinContent(16,1.159922);
   hbadmatch_stack_1->SetBinContent(17,1.207525);
   hbadmatch_stack_1->SetBinContent(18,1.244907);
   hbadmatch_stack_1->SetBinContent(19,0.7758429);
   hbadmatch_stack_1->SetBinContent(20,0.988306);
   hbadmatch_stack_1->SetBinContent(21,0.7868615);
   hbadmatch_stack_1->SetBinContent(22,1.046296);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(25,5.969501);
   hbadmatch_stack_1->SetBinError(1,1.11341);
   hbadmatch_stack_1->SetBinError(2,1.094556);
   hbadmatch_stack_1->SetBinError(3,1.14533);
   hbadmatch_stack_1->SetBinError(4,1.116974);
   hbadmatch_stack_1->SetBinError(5,1.01432);
   hbadmatch_stack_1->SetBinError(6,0.8261433);
   hbadmatch_stack_1->SetBinError(7,0.8018668);
   hbadmatch_stack_1->SetBinError(8,0.8022626);
   hbadmatch_stack_1->SetBinError(9,1.327968);
   hbadmatch_stack_1->SetBinError(10,0.7163417);
   hbadmatch_stack_1->SetBinError(11,0.9107944);
   hbadmatch_stack_1->SetBinError(12,0.9224537);
   hbadmatch_stack_1->SetBinError(13,0.3561798);
   hbadmatch_stack_1->SetBinError(14,0.66147);
   hbadmatch_stack_1->SetBinError(15,0.6395483);
   hbadmatch_stack_1->SetBinError(16,0.529198);
   hbadmatch_stack_1->SetBinError(17,0.5766357);
   hbadmatch_stack_1->SetBinError(18,0.5722469);
   hbadmatch_stack_1->SetBinError(19,0.4728985);
   hbadmatch_stack_1->SetBinError(20,0.5941788);
   hbadmatch_stack_1->SetBinError(21,0.3934307);
   hbadmatch_stack_1->SetBinError(22,0.643358);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(25,1.292623);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,11.89342);
   hext_stack_2->SetBinContent(2,11.64404);
   hext_stack_2->SetBinContent(3,12.88979);
   hext_stack_2->SetBinContent(4,7.544977);
   hext_stack_2->SetBinContent(5,8.090029);
   hext_stack_2->SetBinContent(6,10.69403);
   hext_stack_2->SetBinContent(7,10.8612);
   hext_stack_2->SetBinContent(8,5.979242);
   hext_stack_2->SetBinContent(9,7.679021);
   hext_stack_2->SetBinContent(10,3.558419);
   hext_stack_2->SetBinContent(11,3.897177);
   hext_stack_2->SetBinContent(12,6.959614);
   hext_stack_2->SetBinContent(13,4.367208);
   hext_stack_2->SetBinContent(14,3.476217);
   hext_stack_2->SetBinContent(15,1.78639);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,2.192989);
   hext_stack_2->SetBinContent(20,1.868591);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(24,0.9660115);
   hext_stack_2->SetBinContent(25,9.491362);
   hext_stack_2->SetBinError(1,2.260488);
   hext_stack_2->SetBinError(2,2.294747);
   hext_stack_2->SetBinError(3,2.300728);
   hext_stack_2->SetBinError(4,1.718112);
   hext_stack_2->SetBinError(5,1.925069);
   hext_stack_2->SetBinError(6,2.194996);
   hext_stack_2->SetBinError(7,2.145195);
   hext_stack_2->SetBinError(8,1.718811);
   hext_stack_2->SetBinError(9,1.845385);
   hext_stack_2->SetBinError(10,1.301958);
   hext_stack_2->SetBinError(11,1.182339);
   hext_stack_2->SetBinError(12,1.751802);
   hext_stack_2->SetBinError(13,1.374998);
   hext_stack_2->SetBinError(14,1.278674);
   hext_stack_2->SetBinError(15,0.8039566);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.9009267);
   hext_stack_2->SetBinError(20,0.840497);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(24,0.7189592);
   hext_stack_2->SetBinError(25,1.892963);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,1.461208);
   hdirt_stack_3->SetBinContent(2,0.6951543);
   hdirt_stack_3->SetBinContent(3,0.2761429);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.5288571);
   hdirt_stack_3->SetBinContent(6,1.519078);
   hdirt_stack_3->SetBinContent(7,0.2214509);
   hdirt_stack_3->SetBinContent(8,0.2761429);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.002351481);
   hdirt_stack_3->SetBinContent(11,0.8378969);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.6565575);
   hdirt_stack_3->SetBinContent(15,4.167396e-09);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,1.906348);
   hdirt_stack_3->SetBinError(1,0.6996737);
   hdirt_stack_3->SetBinError(2,0.4258516);
   hdirt_stack_3->SetBinError(3,0.1952625);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.3101058);
   hdirt_stack_3->SetBinError(6,0.6989462);
   hdirt_stack_3->SetBinError(7,0.2189105);
   hdirt_stack_3->SetBinError(8,0.1952625);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.002351481);
   hdirt_stack_3->SetBinError(11,0.4284346);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(14,0.384026);
   hdirt_stack_3->SetBinError(15,4.167396e-09);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.719648);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,11.39552);
   houtFV_stack_4->SetBinContent(2,12.57209);
   houtFV_stack_4->SetBinContent(3,13.11944);
   houtFV_stack_4->SetBinContent(4,10.29776);
   houtFV_stack_4->SetBinContent(5,11.47717);
   houtFV_stack_4->SetBinContent(6,11.87627);
   houtFV_stack_4->SetBinContent(7,9.959467);
   houtFV_stack_4->SetBinContent(8,8.400248);
   houtFV_stack_4->SetBinContent(9,4.943576);
   houtFV_stack_4->SetBinContent(10,6.112073);
   houtFV_stack_4->SetBinContent(11,5.029835);
   houtFV_stack_4->SetBinContent(12,3.763682);
   houtFV_stack_4->SetBinContent(13,3.502233);
   houtFV_stack_4->SetBinContent(14,2.788157);
   houtFV_stack_4->SetBinContent(15,1.660551);
   houtFV_stack_4->SetBinContent(16,2.622281);
   houtFV_stack_4->SetBinContent(17,1.121968);
   houtFV_stack_4->SetBinContent(18,1.65886);
   houtFV_stack_4->SetBinContent(19,1.755211);
   houtFV_stack_4->SetBinContent(20,1.26712);
   houtFV_stack_4->SetBinContent(21,0.7319179);
   houtFV_stack_4->SetBinContent(22,0.7336084);
   houtFV_stack_4->SetBinContent(23,0.5867651);
   houtFV_stack_4->SetBinContent(24,1.458599);
   houtFV_stack_4->SetBinContent(25,6.145747);
   houtFV_stack_4->SetBinError(1,1.640285);
   houtFV_stack_4->SetBinError(2,1.756089);
   houtFV_stack_4->SetBinError(3,1.81984);
   houtFV_stack_4->SetBinError(4,1.571305);
   houtFV_stack_4->SetBinError(5,1.722386);
   houtFV_stack_4->SetBinError(6,1.740326);
   houtFV_stack_4->SetBinError(7,1.553908);
   houtFV_stack_4->SetBinError(8,1.490241);
   houtFV_stack_4->SetBinError(9,1.129862);
   houtFV_stack_4->SetBinError(10,1.24203);
   houtFV_stack_4->SetBinError(11,1.109275);
   houtFV_stack_4->SetBinError(12,1.021313);
   houtFV_stack_4->SetBinError(13,0.9695883);
   houtFV_stack_4->SetBinError(14,0.7866312);
   houtFV_stack_4->SetBinError(15,0.650847);
   houtFV_stack_4->SetBinError(16,0.8649397);
   houtFV_stack_4->SetBinError(17,0.5181909);
   houtFV_stack_4->SetBinError(18,0.650338);
   houtFV_stack_4->SetBinError(19,0.7043862);
   houtFV_stack_4->SetBinError(20,0.5883944);
   houtFV_stack_4->SetBinError(21,0.438694);
   houtFV_stack_4->SetBinError(22,0.4394482);
   houtFV_stack_4->SetBinError(23,0.3387718);
   houtFV_stack_4->SetBinError(24,0.6531069);
   houtFV_stack_4->SetBinError(25,1.226001);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.519226);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.078394);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9623858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.617208);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.032804);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3763946);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4919605);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2576051);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3710135);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3564798);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07381642);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,124.6564);
   hNCpi0inFVres_stack_7->SetBinContent(2,157.3957);
   hNCpi0inFVres_stack_7->SetBinContent(3,131.2571);
   hNCpi0inFVres_stack_7->SetBinContent(4,115.7961);
   hNCpi0inFVres_stack_7->SetBinContent(5,93.44315);
   hNCpi0inFVres_stack_7->SetBinContent(6,75.26305);
   hNCpi0inFVres_stack_7->SetBinContent(7,64.57947);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.57973);
   hNCpi0inFVres_stack_7->SetBinContent(9,41.85681);
   hNCpi0inFVres_stack_7->SetBinContent(10,35.60185);
   hNCpi0inFVres_stack_7->SetBinContent(11,27.6819);
   hNCpi0inFVres_stack_7->SetBinContent(12,25.37948);
   hNCpi0inFVres_stack_7->SetBinContent(13,19.29824);
   hNCpi0inFVres_stack_7->SetBinContent(14,17.17883);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.67836);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.917494);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.298462);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.318794);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.029921);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.676518);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.032402);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.961152);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.496894);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.43619);
   hNCpi0inFVres_stack_7->SetBinContent(25,18.6054);
   hNCpi0inFVres_stack_7->SetBinError(1,3.717894);
   hNCpi0inFVres_stack_7->SetBinError(2,4.100664);
   hNCpi0inFVres_stack_7->SetBinError(3,3.706412);
   hNCpi0inFVres_stack_7->SetBinError(4,3.536574);
   hNCpi0inFVres_stack_7->SetBinError(5,3.206365);
   hNCpi0inFVres_stack_7->SetBinError(6,2.828483);
   hNCpi0inFVres_stack_7->SetBinError(7,2.604531);
   hNCpi0inFVres_stack_7->SetBinError(8,2.249418);
   hNCpi0inFVres_stack_7->SetBinError(9,2.119134);
   hNCpi0inFVres_stack_7->SetBinError(10,1.886037);
   hNCpi0inFVres_stack_7->SetBinError(11,1.725723);
   hNCpi0inFVres_stack_7->SetBinError(12,1.689713);
   hNCpi0inFVres_stack_7->SetBinError(13,1.419444);
   hNCpi0inFVres_stack_7->SetBinError(14,1.364975);
   hNCpi0inFVres_stack_7->SetBinError(15,1.206719);
   hNCpi0inFVres_stack_7->SetBinError(16,1.009755);
   hNCpi0inFVres_stack_7->SetBinError(17,0.977339);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8597168);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9540635);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8508819);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7021875);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6427158);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5036877);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3547464);
   hNCpi0inFVres_stack_7->SetBinError(25,1.430188);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,26.31047);
   hNCpi0inFVdis_stack_8->SetBinContent(2,26.97112);
   hNCpi0inFVdis_stack_8->SetBinContent(3,23.03254);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.43827);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.00619);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.86154);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.412125);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.912342);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.959749);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.32726);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.850216);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.03589);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.198554);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.049325);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.37018);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.873548);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.129122);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.533676);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.212158);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7526357);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.197876);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7792078);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8358399);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.695761);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.67657);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.778081);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.556799);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.654233);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.290996);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.288002);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9037477);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.007858);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.852671);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7373798);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6296644);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.810589);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7537801);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3955537);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4875229);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5800638);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2907294);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4099691);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3167831);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.185768);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3266629);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2495468);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2882649);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.517597);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,52.05585);
   hCCpi0inFV_stack_10->SetBinContent(2,40.29139);
   hCCpi0inFV_stack_10->SetBinContent(3,43.95847);
   hCCpi0inFV_stack_10->SetBinContent(4,37.6146);
   hCCpi0inFV_stack_10->SetBinContent(5,28.80296);
   hCCpi0inFV_stack_10->SetBinContent(6,30.71315);
   hCCpi0inFV_stack_10->SetBinContent(7,23.02505);
   hCCpi0inFV_stack_10->SetBinContent(8,17.30688);
   hCCpi0inFV_stack_10->SetBinContent(9,12.66177);
   hCCpi0inFV_stack_10->SetBinContent(10,11.93722);
   hCCpi0inFV_stack_10->SetBinContent(11,9.260571);
   hCCpi0inFV_stack_10->SetBinContent(12,9.961069);
   hCCpi0inFV_stack_10->SetBinContent(13,5.829119);
   hCCpi0inFV_stack_10->SetBinContent(14,7.717681);
   hCCpi0inFV_stack_10->SetBinContent(15,5.180059);
   hCCpi0inFV_stack_10->SetBinContent(16,4.577391);
   hCCpi0inFV_stack_10->SetBinContent(17,3.063493);
   hCCpi0inFV_stack_10->SetBinContent(18,3.663207);
   hCCpi0inFV_stack_10->SetBinContent(19,2.732646);
   hCCpi0inFV_stack_10->SetBinContent(20,2.931183);
   hCCpi0inFV_stack_10->SetBinContent(21,1.994599);
   hCCpi0inFV_stack_10->SetBinContent(22,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(23,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(25,8.599752);
   hCCpi0inFV_stack_10->SetBinError(1,3.685794);
   hCCpi0inFV_stack_10->SetBinError(2,3.175087);
   hCCpi0inFV_stack_10->SetBinError(3,3.351263);
   hCCpi0inFV_stack_10->SetBinError(4,3.046597);
   hCCpi0inFV_stack_10->SetBinError(5,2.668152);
   hCCpi0inFV_stack_10->SetBinError(6,2.756146);
   hCCpi0inFV_stack_10->SetBinError(7,2.40839);
   hCCpi0inFV_stack_10->SetBinError(8,2.135115);
   hCCpi0inFV_stack_10->SetBinError(9,1.709504);
   hCCpi0inFV_stack_10->SetBinError(10,1.712083);
   hCCpi0inFV_stack_10->SetBinError(11,1.536352);
   hCCpi0inFV_stack_10->SetBinError(12,1.613156);
   hCCpi0inFV_stack_10->SetBinError(13,1.239877);
   hCCpi0inFV_stack_10->SetBinError(14,1.415594);
   hCCpi0inFV_stack_10->SetBinError(15,1.144624);
   hCCpi0inFV_stack_10->SetBinError(16,1.117895);
   hCCpi0inFV_stack_10->SetBinError(17,0.8400321);
   hCCpi0inFV_stack_10->SetBinError(18,1.06031);
   hCCpi0inFV_stack_10->SetBinError(19,0.8554385);
   hCCpi0inFV_stack_10->SetBinError(20,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(21,0.6787578);
   hCCpi0inFV_stack_10->SetBinError(22,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(23,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(24,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(25,1.520221);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,29.45);
   hNCinFV_stack_11->SetBinContent(2,24.8893);
   hNCinFV_stack_11->SetBinContent(3,21.89208);
   hNCinFV_stack_11->SetBinContent(4,16.3169);
   hNCinFV_stack_11->SetBinContent(5,16.95583);
   hNCinFV_stack_11->SetBinContent(6,13.38753);
   hNCinFV_stack_11->SetBinContent(7,12.01391);
   hNCinFV_stack_11->SetBinContent(8,8.892901);
   hNCinFV_stack_11->SetBinContent(9,6.44718);
   hNCinFV_stack_11->SetBinContent(10,7.022719);
   hNCinFV_stack_11->SetBinContent(11,7.607793);
   hNCinFV_stack_11->SetBinContent(12,3.322793);
   hNCinFV_stack_11->SetBinContent(13,3.815968);
   hNCinFV_stack_11->SetBinContent(14,2.000729);
   hNCinFV_stack_11->SetBinContent(15,3.072824);
   hNCinFV_stack_11->SetBinContent(16,2.199135);
   hNCinFV_stack_11->SetBinContent(17,2.195754);
   hNCinFV_stack_11->SetBinContent(18,1.908829);
   hNCinFV_stack_11->SetBinContent(19,1.318683);
   hNCinFV_stack_11->SetBinContent(20,1.660551);
   hNCinFV_stack_11->SetBinContent(21,1.268811);
   hNCinFV_stack_11->SetBinContent(22,0.785171);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,1.413964);
   hNCinFV_stack_11->SetBinContent(25,9.321598);
   hNCinFV_stack_11->SetBinError(1,2.754708);
   hNCinFV_stack_11->SetBinError(2,2.451328);
   hNCinFV_stack_11->SetBinError(3,2.338702);
   hNCinFV_stack_11->SetBinError(4,2.020225);
   hNCinFV_stack_11->SetBinError(5,2.087034);
   hNCinFV_stack_11->SetBinError(6,1.81957);
   hNCinFV_stack_11->SetBinError(7,1.743927);
   hNCinFV_stack_11->SetBinError(8,1.494691);
   hNCinFV_stack_11->SetBinError(9,1.287001);
   hNCinFV_stack_11->SetBinError(10,1.401831);
   hNCinFV_stack_11->SetBinError(11,1.441955);
   hNCinFV_stack_11->SetBinError(12,0.9207963);
   hNCinFV_stack_11->SetBinError(13,0.9197592);
   hNCinFV_stack_11->SetBinError(14,0.7343859);
   hNCinFV_stack_11->SetBinError(15,0.9205954);
   hNCinFV_stack_11->SetBinError(16,0.7607114);
   hNCinFV_stack_11->SetBinError(17,0.7598403);
   hNCinFV_stack_11->SetBinError(18,0.6506224);
   hNCinFV_stack_11->SetBinError(19,0.5542732);
   hNCinFV_stack_11->SetBinError(20,0.650847);
   hNCinFV_stack_11->SetBinError(21,0.5889569);
   hNCinFV_stack_11->SetBinError(22,0.3925882);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.6515799);
   hNCinFV_stack_11->SetBinError(25,1.569876);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,57.0426);
   hnumuCCinFV_stack_12->SetBinContent(2,45.88958);
   hnumuCCinFV_stack_12->SetBinContent(3,38.28299);
   hnumuCCinFV_stack_12->SetBinContent(4,25.07455);
   hnumuCCinFV_stack_12->SetBinContent(5,22.84373);
   hnumuCCinFV_stack_12->SetBinContent(6,16.83085);
   hnumuCCinFV_stack_12->SetBinContent(7,10.60855);
   hnumuCCinFV_stack_12->SetBinContent(8,13.2378);
   hnumuCCinFV_stack_12->SetBinContent(9,8.899521);
   hnumuCCinFV_stack_12->SetBinContent(10,6.68723);
   hnumuCCinFV_stack_12->SetBinContent(11,3.019404);
   hnumuCCinFV_stack_12->SetBinContent(12,6.171772);
   hnumuCCinFV_stack_12->SetBinContent(13,4.373527);
   hnumuCCinFV_stack_12->SetBinContent(14,4.994274);
   hnumuCCinFV_stack_12->SetBinContent(15,3.879759);
   hnumuCCinFV_stack_12->SetBinContent(16,3.611401);
   hnumuCCinFV_stack_12->SetBinContent(17,2.901921);
   hnumuCCinFV_stack_12->SetBinContent(18,1.577084);
   hnumuCCinFV_stack_12->SetBinContent(19,3.149392);
   hnumuCCinFV_stack_12->SetBinContent(20,1.460091);
   hnumuCCinFV_stack_12->SetBinContent(21,1.566459);
   hnumuCCinFV_stack_12->SetBinContent(22,2.15897);
   hnumuCCinFV_stack_12->SetBinContent(23,2.534412);
   hnumuCCinFV_stack_12->SetBinContent(24,1.435534);
   hnumuCCinFV_stack_12->SetBinContent(25,19.77765);
   hnumuCCinFV_stack_12->SetBinError(1,4.406928);
   hnumuCCinFV_stack_12->SetBinError(2,4.212036);
   hnumuCCinFV_stack_12->SetBinError(3,4.396719);
   hnumuCCinFV_stack_12->SetBinError(4,2.70489);
   hnumuCCinFV_stack_12->SetBinError(5,2.804479);
   hnumuCCinFV_stack_12->SetBinError(6,2.558875);
   hnumuCCinFV_stack_12->SetBinError(7,1.661456);
   hnumuCCinFV_stack_12->SetBinError(8,2.106673);
   hnumuCCinFV_stack_12->SetBinError(9,1.535874);
   hnumuCCinFV_stack_12->SetBinError(10,1.354393);
   hnumuCCinFV_stack_12->SetBinError(11,0.8199197);
   hnumuCCinFV_stack_12->SetBinError(12,1.286149);
   hnumuCCinFV_stack_12->SetBinError(13,1.061505);
   hnumuCCinFV_stack_12->SetBinError(14,1.148687);
   hnumuCCinFV_stack_12->SetBinError(15,1.073197);
   hnumuCCinFV_stack_12->SetBinError(16,1.004389);
   hnumuCCinFV_stack_12->SetBinError(17,0.9086325);
   hnumuCCinFV_stack_12->SetBinError(18,0.6599333);
   hnumuCCinFV_stack_12->SetBinError(19,0.9618045);
   hnumuCCinFV_stack_12->SetBinError(20,0.6017418);
   hnumuCCinFV_stack_12->SetBinError(21,0.6575946);
   hnumuCCinFV_stack_12->SetBinError(22,0.8482148);
   hnumuCCinFV_stack_12->SetBinError(23,0.8785256);
   hnumuCCinFV_stack_12->SetBinError(24,0.6911467);
   hnumuCCinFV_stack_12->SetBinError(25,2.418069);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,8.808774);
   hnueCCinFV_stack_13->SetBinContent(2,1.683206);
   hnueCCinFV_stack_13->SetBinContent(3,1.524454);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,0.3897057);
   hnueCCinFV_stack_13->SetBinError(1,2.100821);
   hnueCCinFV_stack_13->SetBinError(2,0.8099744);
   hnueCCinFV_stack_13->SetBinError(3,0.6420466);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.3160204);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.3893381);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__14->SetBinContent(1,329.92);
   hmcerror__14->SetBinContent(2,328.6826);
   hmcerror__14->SetBinContent(3,292.4089);
   hmcerror__14->SetBinContent(4,243.0874);
   hmcerror__14->SetBinContent(5,203.7537);
   hmcerror__14->SetBinContent(6,180.2767);
   hmcerror__14->SetBinContent(7,144.4985);
   hmcerror__14->SetBinContent(8,115.8212);
   hmcerror__14->SetBinContent(9,93.26321);
   hmcerror__14->SetBinContent(10,78.86601);
   hmcerror__14->SetBinContent(11,65.11394);
   hmcerror__14->SetBinContent(12,65.38993);
   hmcerror__14->SetBinContent(13,47.30711);
   hmcerror__14->SetBinContent(14,42.1759);
   hmcerror__14->SetBinContent(15,33.6483);
   hmcerror__14->SetBinContent(16,27.63787);
   hmcerror__14->SetBinContent(17,21.67427);
   hmcerror__14->SetBinContent(18,20.15772);
   hmcerror__14->SetBinContent(19,21.34786);
   hmcerror__14->SetBinContent(20,16.6608);
   hmcerror__14->SetBinContent(21,11.60683);
   hmcerror__14->SetBinContent(22,11.75082);
   hmcerror__14->SetBinContent(23,9.242433);
   hmcerror__14->SetBinContent(24,8.596294);
   hmcerror__14->SetBinContent(25,84.15392);
   hmcerror__14->SetBinError(1,110.3082);
   hmcerror__14->SetBinError(2,125.2495);
   hmcerror__14->SetBinError(3,107.3898);
   hmcerror__14->SetBinError(4,96.89056);
   hmcerror__14->SetBinError(5,77.60277);
   hmcerror__14->SetBinError(6,66.83589);
   hmcerror__14->SetBinError(7,53.35544);
   hmcerror__14->SetBinError(8,44.16891);
   hmcerror__14->SetBinError(9,38.56269);
   hmcerror__14->SetBinError(10,33.95845);
   hmcerror__14->SetBinError(11,25.3864);
   hmcerror__14->SetBinError(12,24.28804);
   hmcerror__14->SetBinError(13,20.20195);
   hmcerror__14->SetBinError(14,18.7267);
   hmcerror__14->SetBinError(15,22.67761);
   hmcerror__14->SetBinError(16,12.99036);
   hmcerror__14->SetBinError(17,9.365346);
   hmcerror__14->SetBinError(18,9.82833);
   hmcerror__14->SetBinError(19,10.31831);
   hmcerror__14->SetBinError(20,14.43122);
   hmcerror__14->SetBinError(21,8.266022);
   hmcerror__14->SetBinError(22,7.565085);
   hmcerror__14->SetBinError(23,8.668447);
   hmcerror__14->SetBinError(24,9.108425);
   hmcerror__14->SetBinError(25,26.9476);
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
   Double_t _fy3017[24] = {
   218,
   230,
   222,
   185,
   161,
   140,
   124,
   90,
   64,
   52,
   52,
   56,
   36,
   28,
   21,
   31,
   13,
   22,
   11,
   12,
   11,
   5,
   5,
   3};
   Double_t _felx3017[24] = {
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
   Double_t _fely3017[24] = {
   14.76482,
   15.16575,
   14.89966,
   13.60147,
   12.68858,
   11.83216,
   11.13553,
   9.6093,
   8.1273,
   7.3419,
   7.3419,
   7.6127,
   6.1381,
   5.4358,
   4.7354,
   5.7094,
   3.77763,
   4.8417,
   3.4975,
   3.64022,
   3.4975,
   2.48995,
   2.48995,
   2.143368};
   Double_t _fehx3017[24] = {
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
   Double_t _fehy3017[24] = {
   14.76482,
   15.16575,
   14.89966,
   13.60147,
   12.68858,
   11.83216,
   11.13553,
   9.4079,
   7.9246,
   7.1381,
   7.1381,
   7.4094,
   5.9318,
   5.2271,
   4.5229,
   5.5017,
   3.5552,
   4.6299,
   3.27,
   3.4155,
   3.27,
   2.21064,
   2.21064,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,99);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(269.5967);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1792.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 52.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 121.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 128.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1042.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  193.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 358.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 190.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 288.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
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
   Double_t _fely3018[24] = {
   0.3343483,
   0.3810653,
   0.3672589,
   0.3985833,
   0.3808657,
   0.3707407,
   0.3692457,
   0.3813542,
   0.4134823,
   0.4305841,
   0.3898766,
   0.3714339,
   0.4270384,
   0.4440142,
   0.6739602,
   0.4700204,
   0.4320951,
   0.4875716,
   0.4833416,
   0.8661781,
   0.712169,
   0.6437921,
   0.9378967,
   1.059576};
   Double_t _fehx3018[24] = {
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
   Double_t _fehy3018[24] = {
   0.3343483,
   0.3810653,
   0.3672589,
   0.3985833,
   0.3808657,
   0.3707407,
   0.3692457,
   0.3813542,
   0.4134823,
   0.4305841,
   0.3898766,
   0.3714339,
   0.4270384,
   0.4440142,
   0.6739602,
   0.4700204,
   0.4320951,
   0.4875716,
   0.4833416,
   0.8661781,
   0.712169,
   0.6437921,
   0.9378967,
   1.059576};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,99);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   Double_t _fely3019[24] = {
   0.3209112,
   0.3663697,
   0.3499781,
   0.3683994,
   0.3621094,
   0.3389496,
   0.3409829,
   0.3353566,
   0.3340781,
   0.3507654,
   0.3424484,
   0.3035621,
   0.3328599,
   0.2928807,
   0.3199707,
   0.3396654,
   0.2960032,
   0.3235161,
   0.2722218,
   0.2990782,
   0.3265339,
   0.2946311,
   0.3087504,
   0.3150961};
   Double_t _fehx3019[24] = {
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
   Double_t _fehy3019[24] = {
   0.3209112,
   0.3663697,
   0.3499781,
   0.3683994,
   0.3621094,
   0.3389496,
   0.3409829,
   0.3353566,
   0.3340781,
   0.3507654,
   0.3424484,
   0.3035621,
   0.3328599,
   0.2928807,
   0.3199707,
   0.3396654,
   0.2960032,
   0.3235161,
   0.2722218,
   0.2990782,
   0.3265339,
   0.2946311,
   0.3087504,
   0.3150961};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,99);
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
   Double_t _fy3020[24] = {
   0.6607662,
   0.6997631,
   0.7592109,
   0.7610432,
   0.7901698,
   0.7765842,
   0.8581405,
   0.7770595,
   0.6862298,
   0.6593461,
   0.7986001,
   0.856401,
   0.7609849,
   0.6638863,
   0.6241028,
   1.12165,
   0.5997895,
   1.091393,
   0.5152741,
   0.7202537,
   0.9477181,
   0.4255022,
   0.5409831,
   0.3489876};
   Double_t _felx3020[24] = {
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
   Double_t _fely3020[24] = {
   0.04475273,
   0.04614101,
   0.0509549,
   0.05595301,
   0.06227411,
   0.06563334,
   0.0770633,
   0.08296665,
   0.08714368,
   0.09309333,
   0.1127547,
   0.1164201,
   0.12975,
   0.128884,
   0.1407322,
   0.2065789,
   0.174291,
   0.2401909,
   0.1638337,
   0.2184901,
   0.3013313,
   0.2118958,
   0.2694042,
   0.2493363};
   Double_t _fehx3020[24] = {
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
   Double_t _fehy3020[24] = {
   0.04475273,
   0.04614101,
   0.0509549,
   0.05595301,
   0.06227411,
   0.06563334,
   0.0770633,
   0.08122776,
   0.08497026,
   0.0905092,
   0.1096248,
   0.113311,
   0.1253892,
   0.1239357,
   0.1344169,
   0.1990639,
   0.1640286,
   0.2296837,
   0.1531769,
   0.2050022,
   0.2817307,
   0.1881264,
   0.2391838,
   0.2005771};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,99);
   Graph_Graph3020->SetMinimum(0.08968618);
   Graph_Graph3020->SetMaximum(1.44322);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

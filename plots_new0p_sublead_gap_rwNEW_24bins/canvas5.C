#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 16:38:20 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-6.325214,101.5385,699.4355);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__13->SetBinContent(1,316.2607);
   hmc__13->SetBinContent(2,214.3385);
   hmc__13->SetBinContent(3,219.2449);
   hmc__13->SetBinContent(4,189.133);
   hmc__13->SetBinContent(5,181.5638);
   hmc__13->SetBinContent(6,155.9359);
   hmc__13->SetBinContent(7,141.047);
   hmc__13->SetBinContent(8,120.6621);
   hmc__13->SetBinContent(9,105.5664);
   hmc__13->SetBinContent(10,90.30242);
   hmc__13->SetBinContent(11,80.97134);
   hmc__13->SetBinContent(12,73.4597);
   hmc__13->SetBinContent(13,64.23666);
   hmc__13->SetBinContent(14,54.3273);
   hmc__13->SetBinContent(15,44.51796);
   hmc__13->SetBinContent(16,40.79145);
   hmc__13->SetBinContent(17,29.66983);
   hmc__13->SetBinContent(18,32.76278);
   hmc__13->SetBinContent(19,29.16638);
   hmc__13->SetBinContent(20,21.64803);
   hmc__13->SetBinContent(21,23.23815);
   hmc__13->SetBinContent(22,23.42029);
   hmc__13->SetBinContent(23,17.10776);
   hmc__13->SetBinContent(24,14.92051);
   hmc__13->SetBinContent(25,212.7493);
   hmc__13->SetBinError(1,108.2464);
   hmc__13->SetBinError(2,94.93519);
   hmc__13->SetBinError(3,82.65034);
   hmc__13->SetBinError(4,77.30804);
   hmc__13->SetBinError(5,72.52577);
   hmc__13->SetBinError(6,63.69548);
   hmc__13->SetBinError(7,53.05903);
   hmc__13->SetBinError(8,50.80327);
   hmc__13->SetBinError(9,40.4293);
   hmc__13->SetBinError(10,35.43878);
   hmc__13->SetBinError(11,31.0811);
   hmc__13->SetBinError(12,28.26649);
   hmc__13->SetBinError(13,25.91385);
   hmc__13->SetBinError(14,22.18853);
   hmc__13->SetBinError(15,22.05203);
   hmc__13->SetBinError(16,20.38196);
   hmc__13->SetBinError(17,12.57397);
   hmc__13->SetBinError(18,15.97652);
   hmc__13->SetBinError(19,15.21561);
   hmc__13->SetBinError(20,9.769228);
   hmc__13->SetBinError(21,11.6259);
   hmc__13->SetBinError(22,12.22386);
   hmc__13->SetBinError(23,9.999382);
   hmc__13->SetBinError(24,8.695096);
   hmc__13->SetBinError(25,69.90963);
   hmc__13->SetMinimum(-6.325214);
   hmc__13->SetMaximum(664.1475);
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
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(332.0737);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,6.304247);
   hbadmatch_stack_1->SetBinContent(2,3.225596);
   hbadmatch_stack_1->SetBinContent(3,4.728886);
   hbadmatch_stack_1->SetBinContent(4,4.497492);
   hbadmatch_stack_1->SetBinContent(5,2.961998);
   hbadmatch_stack_1->SetBinContent(6,1.920721);
   hbadmatch_stack_1->SetBinContent(7,2.945081);
   hbadmatch_stack_1->SetBinContent(8,2.239702);
   hbadmatch_stack_1->SetBinContent(9,2.421557);
   hbadmatch_stack_1->SetBinContent(10,1.456894);
   hbadmatch_stack_1->SetBinContent(11,2.953196);
   hbadmatch_stack_1->SetBinContent(12,1.858957);
   hbadmatch_stack_1->SetBinContent(13,1.446819);
   hbadmatch_stack_1->SetBinContent(14,2.062715);
   hbadmatch_stack_1->SetBinContent(15,1.178602);
   hbadmatch_stack_1->SetBinContent(16,1.003227);
   hbadmatch_stack_1->SetBinContent(17,1.963334);
   hbadmatch_stack_1->SetBinContent(18,1.373626);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.7311406);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,1.981);
   hbadmatch_stack_1->SetBinContent(23,0.536893);
   hbadmatch_stack_1->SetBinContent(24,1.050674);
   hbadmatch_stack_1->SetBinContent(25,6.87573);
   hbadmatch_stack_1->SetBinError(1,1.375572);
   hbadmatch_stack_1->SetBinError(2,0.8448058);
   hbadmatch_stack_1->SetBinError(3,1.128817);
   hbadmatch_stack_1->SetBinError(4,1.457183);
   hbadmatch_stack_1->SetBinError(5,0.8857162);
   hbadmatch_stack_1->SetBinError(6,0.6512111);
   hbadmatch_stack_1->SetBinError(7,0.9276217);
   hbadmatch_stack_1->SetBinError(8,0.7800883);
   hbadmatch_stack_1->SetBinError(9,0.700518);
   hbadmatch_stack_1->SetBinError(10,0.6749868);
   hbadmatch_stack_1->SetBinError(11,0.9320388);
   hbadmatch_stack_1->SetBinError(12,0.6804124);
   hbadmatch_stack_1->SetBinError(13,0.548467);
   hbadmatch_stack_1->SetBinError(14,0.7102871);
   hbadmatch_stack_1->SetBinError(15,0.4811646);
   hbadmatch_stack_1->SetBinError(16,0.512989);
   hbadmatch_stack_1->SetBinError(17,0.8522699);
   hbadmatch_stack_1->SetBinError(18,0.519186);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.5182401);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.7767946);
   hbadmatch_stack_1->SetBinError(23,0.3929602);
   hbadmatch_stack_1->SetBinError(24,0.5588289);
   hbadmatch_stack_1->SetBinError(25,1.458177);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,14.91119);
   hext_stack_2->SetBinContent(2,6.000783);
   hext_stack_2->SetBinContent(3,7.772812);
   hext_stack_2->SetBinContent(4,9.808578);
   hext_stack_2->SetBinContent(5,9.227624);
   hext_stack_2->SetBinContent(6,8.410017);
   hext_stack_2->SetBinContent(7,5.833609);
   hext_stack_2->SetBinContent(8,8.015008);
   hext_stack_2->SetBinContent(9,5.579823);
   hext_stack_2->SetBinContent(10,6.623628);
   hext_stack_2->SetBinContent(11,3.972198);
   hext_stack_2->SetBinContent(12,5.833609);
   hext_stack_2->SetBinContent(13,4.054399);
   hext_stack_2->SetBinContent(14,3.083979);
   hext_stack_2->SetBinContent(15,3.565599);
   hext_stack_2->SetBinContent(16,1.137595);
   hext_stack_2->SetBinContent(17,3.394015);
   hext_stack_2->SetBinContent(18,1.048213);
   hext_stack_2->SetBinContent(19,1.779209);
   hext_stack_2->SetBinContent(20,1.37261);
   hext_stack_2->SetBinContent(21,1.297589);
   hext_stack_2->SetBinContent(22,2.745221);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,14.82899);
   hext_stack_2->SetBinError(1,2.487176);
   hext_stack_2->SetBinError(2,1.533202);
   hext_stack_2->SetBinError(3,1.843762);
   hext_stack_2->SetBinError(4,1.972244);
   hext_stack_2->SetBinError(5,2.035134);
   hext_stack_2->SetBinError(6,1.91729);
   hext_stack_2->SetBinError(7,1.60214);
   hext_stack_2->SetBinError(8,1.855964);
   hext_stack_2->SetBinError(9,1.60866);
   hext_stack_2->SetBinError(10,1.740591);
   hext_stack_2->SetBinError(11,1.288106);
   hext_stack_2->SetBinError(12,1.60214);
   hext_stack_2->SetBinError(13,1.311223);
   hext_stack_2->SetBinError(14,1.033093);
   hext_stack_2->SetBinError(15,1.22225);
   hext_stack_2->SetBinError(16,0.6602113);
   hext_stack_2->SetBinError(17,1.254957);
   hext_stack_2->SetBinError(18,0.7595995);
   hext_stack_2->SetBinError(19,0.9206235);
   hext_stack_2->SetBinError(20,0.8259691);
   hext_stack_2->SetBinError(21,0.6487947);
   hext_stack_2->SetBinError(22,1.168097);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.475066);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,0.7840972);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.6338169);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,1.064451);
   hdirt_stack_3->SetBinContent(6,0.4377912);
   hdirt_stack_3->SetBinContent(7,0.31339);
   hdirt_stack_3->SetBinContent(8,0.6085784);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.00255526);
   hdirt_stack_3->SetBinContent(14,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.9067342);
   hdirt_stack_3->SetBinContent(19,0.5429839);
   hdirt_stack_3->SetBinContent(20,0.1651799);
   hdirt_stack_3->SetBinContent(21,0.2623434);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(25,1.434139);
   hdirt_stack_3->SetBinError(1,0.4033014);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.4691215);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.5360721);
   hdirt_stack_3->SetBinError(6,0.3095651);
   hdirt_stack_3->SetBinError(7,0.2231598);
   hdirt_stack_3->SetBinError(8,0.3609533);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.00255526);
   hdirt_stack_3->SetBinError(14,0.3389606);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(18,0.4601815);
   hdirt_stack_3->SetBinError(19,0.4278058);
   hdirt_stack_3->SetBinError(20,0.1651799);
   hdirt_stack_3->SetBinError(21,0.2623434);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(25,0.6755433);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,18.67678);
   houtFV_stack_4->SetBinContent(2,7.650278);
   houtFV_stack_4->SetBinContent(3,9.021626);
   houtFV_stack_4->SetBinContent(4,5.286565);
   houtFV_stack_4->SetBinContent(5,9.757966);
   houtFV_stack_4->SetBinContent(6,8.501161);
   houtFV_stack_4->SetBinContent(7,5.395872);
   houtFV_stack_4->SetBinContent(8,7.704439);
   houtFV_stack_4->SetBinContent(9,3.269429);
   houtFV_stack_4->SetBinContent(10,5.316127);
   houtFV_stack_4->SetBinContent(11,6.776908);
   houtFV_stack_4->SetBinContent(12,4.643166);
   houtFV_stack_4->SetBinContent(13,5.732366);
   houtFV_stack_4->SetBinContent(14,3.389082);
   houtFV_stack_4->SetBinContent(15,2.195754);
   houtFV_stack_4->SetBinContent(16,3.274066);
   houtFV_stack_4->SetBinContent(17,1.554378);
   houtFV_stack_4->SetBinContent(18,2.198093);
   houtFV_stack_4->SetBinContent(19,1.550819);
   houtFV_stack_4->SetBinContent(20,1.608988);
   houtFV_stack_4->SetBinContent(21,1.318683);
   houtFV_stack_4->SetBinContent(22,1.513708);
   houtFV_stack_4->SetBinContent(23,1.270501);
   houtFV_stack_4->SetBinContent(24,1.804013);
   houtFV_stack_4->SetBinContent(25,15.56939);
   houtFV_stack_4->SetBinError(1,2.169653);
   houtFV_stack_4->SetBinError(2,1.326792);
   houtFV_stack_4->SetBinError(3,1.525388);
   houtFV_stack_4->SetBinError(4,1.110635);
   houtFV_stack_4->SetBinError(5,1.536648);
   houtFV_stack_4->SetBinError(6,1.468798);
   houtFV_stack_4->SetBinError(7,1.132744);
   houtFV_stack_4->SetBinError(8,1.452065);
   houtFV_stack_4->SetBinError(9,0.8652371);
   houtFV_stack_4->SetBinError(10,1.166144);
   houtFV_stack_4->SetBinError(11,1.30216);
   houtFV_stack_4->SetBinError(12,1.075057);
   houtFV_stack_4->SetBinError(13,1.160656);
   houtFV_stack_4->SetBinError(14,0.9471663);
   houtFV_stack_4->SetBinError(15,0.7598403);
   houtFV_stack_4->SetBinError(16,0.9018656);
   houtFV_stack_4->SetBinError(17,0.6749076);
   houtFV_stack_4->SetBinError(18,0.8000623);
   houtFV_stack_4->SetBinError(19,0.6007263);
   houtFV_stack_4->SetBinError(20,0.6801404);
   houtFV_stack_4->SetBinError(21,0.5542732);
   houtFV_stack_4->SetBinError(22,0.5875827);
   houtFV_stack_4->SetBinError(23,0.5895188);
   houtFV_stack_4->SetBinError(24,0.7075491);
   houtFV_stack_4->SetBinError(25,2.005068);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.06834073);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.297354);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.17064);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7390177);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.688626);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5988538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7817042);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8232222);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.329333);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3040354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1654515);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5003934);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1922885);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3465144);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3577516);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3620771);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,103.5086);
   hNCpi0inFVres_stack_7->SetBinContent(2,113.8956);
   hNCpi0inFVres_stack_7->SetBinContent(3,104.8288);
   hNCpi0inFVres_stack_7->SetBinContent(4,97.01651);
   hNCpi0inFVres_stack_7->SetBinContent(5,83.61946);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.06575);
   hNCpi0inFVres_stack_7->SetBinContent(7,66.28252);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.30409);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.71268);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.22845);
   hNCpi0inFVres_stack_7->SetBinContent(11,32.02682);
   hNCpi0inFVres_stack_7->SetBinContent(12,30.86964);
   hNCpi0inFVres_stack_7->SetBinContent(13,27.5977);
   hNCpi0inFVres_stack_7->SetBinContent(14,24.45914);
   hNCpi0inFVres_stack_7->SetBinContent(15,18.93337);
   hNCpi0inFVres_stack_7->SetBinContent(16,17.12104);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.40816);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.68774);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.27066);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.576462);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.893908);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.145905);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.374682);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.03381);
   hNCpi0inFVres_stack_7->SetBinContent(25,57.55779);
   hNCpi0inFVres_stack_7->SetBinError(1,3.319416);
   hNCpi0inFVres_stack_7->SetBinError(2,3.521663);
   hNCpi0inFVres_stack_7->SetBinError(3,3.348064);
   hNCpi0inFVres_stack_7->SetBinError(4,3.243027);
   hNCpi0inFVres_stack_7->SetBinError(5,3.002714);
   hNCpi0inFVres_stack_7->SetBinError(6,2.811334);
   hNCpi0inFVres_stack_7->SetBinError(7,2.650756);
   hNCpi0inFVres_stack_7->SetBinError(8,2.465583);
   hNCpi0inFVres_stack_7->SetBinError(9,2.277718);
   hNCpi0inFVres_stack_7->SetBinError(10,1.959185);
   hNCpi0inFVres_stack_7->SetBinError(11,1.793101);
   hNCpi0inFVres_stack_7->SetBinError(12,1.800467);
   hNCpi0inFVres_stack_7->SetBinError(13,1.738401);
   hNCpi0inFVres_stack_7->SetBinError(14,1.668624);
   hNCpi0inFVres_stack_7->SetBinError(15,1.366708);
   hNCpi0inFVres_stack_7->SetBinError(16,1.379159);
   hNCpi0inFVres_stack_7->SetBinError(17,1.083509);
   hNCpi0inFVres_stack_7->SetBinError(18,1.150441);
   hNCpi0inFVres_stack_7->SetBinError(19,1.128783);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9544373);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9336168);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6829385);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8543813);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7138228);
   hNCpi0inFVres_stack_7->SetBinError(25,2.531695);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.26078);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.06998);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.43939);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.87459);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.71499);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.06489);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.18712);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.813775);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.50058);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.26657);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.580183);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.107468);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.116014);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.18452);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.809114);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.371012);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.194402);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.733048);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.712862);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.39484);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.840912);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.953344);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.157022);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8222219);
   hNCpi0inFVdis_stack_8->SetBinContent(25,12.92439);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.355604);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.412113);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.334529);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.341873);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.346386);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.166206);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.14218);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9370495);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.096217);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9438438);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8223074);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.811189);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7114104);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6723613);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7053668);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5068972);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6462893);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5296762);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3295291);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.388188);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4920925);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5143295);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.292065);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2756104);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.14198);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,54.46982);
   hCCpi0inFV_stack_10->SetBinContent(2,30.18811);
   hCCpi0inFV_stack_10->SetBinContent(3,37.30282);
   hCCpi0inFV_stack_10->SetBinContent(4,27.3964);
   hCCpi0inFV_stack_10->SetBinContent(5,27.34276);
   hCCpi0inFV_stack_10->SetBinContent(6,26.1442);
   hCCpi0inFV_stack_10->SetBinContent(7,22.64383);
   hCCpi0inFV_stack_10->SetBinContent(8,18.24973);
   hCCpi0inFV_stack_10->SetBinContent(9,16.39634);
   hCCpi0inFV_stack_10->SetBinContent(10,15.18958);
   hCCpi0inFV_stack_10->SetBinContent(11,11.2222);
   hCCpi0inFV_stack_10->SetBinContent(12,9.573256);
   hCCpi0inFV_stack_10->SetBinContent(13,10.33378);
   hCCpi0inFV_stack_10->SetBinContent(14,7.090579);
   hCCpi0inFV_stack_10->SetBinContent(15,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(16,6.006661);
   hCCpi0inFV_stack_10->SetBinContent(17,2.493903);
   hCCpi0inFV_stack_10->SetBinContent(18,5.123425);
   hCCpi0inFV_stack_10->SetBinContent(19,3.907867);
   hCCpi0inFV_stack_10->SetBinContent(20,2.639056);
   hCCpi0inFV_stack_10->SetBinContent(21,2.484368);
   hCCpi0inFV_stack_10->SetBinContent(22,4.580931);
   hCCpi0inFV_stack_10->SetBinContent(23,2.339736);
   hCCpi0inFV_stack_10->SetBinContent(24,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(25,20.02684);
   hCCpi0inFV_stack_10->SetBinError(1,3.717151);
   hCCpi0inFV_stack_10->SetBinError(2,2.800759);
   hCCpi0inFV_stack_10->SetBinError(3,3.022171);
   hCCpi0inFV_stack_10->SetBinError(4,2.659194);
   hCCpi0inFV_stack_10->SetBinError(5,2.669409);
   hCCpi0inFV_stack_10->SetBinError(6,2.556052);
   hCCpi0inFV_stack_10->SetBinError(7,2.38367);
   hCCpi0inFV_stack_10->SetBinError(8,2.167666);
   hCCpi0inFV_stack_10->SetBinError(9,2.062272);
   hCCpi0inFV_stack_10->SetBinError(10,1.932705);
   hCCpi0inFV_stack_10->SetBinError(11,1.739252);
   hCCpi0inFV_stack_10->SetBinError(12,1.570204);
   hCCpi0inFV_stack_10->SetBinError(13,1.610902);
   hCCpi0inFV_stack_10->SetBinError(14,1.316866);
   hCCpi0inFV_stack_10->SetBinError(15,0.809167);
   hCCpi0inFV_stack_10->SetBinError(16,1.250046);
   hCCpi0inFV_stack_10->SetBinError(17,0.733085);
   hCCpi0inFV_stack_10->SetBinError(18,1.160675);
   hCCpi0inFV_stack_10->SetBinError(19,0.9808007);
   hCCpi0inFV_stack_10->SetBinError(20,0.784283);
   hCCpi0inFV_stack_10->SetBinError(21,0.8556093);
   hCCpi0inFV_stack_10->SetBinError(22,1.129034);
   hCCpi0inFV_stack_10->SetBinError(23,0.7187522);
   hCCpi0inFV_stack_10->SetBinError(24,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(25,2.195711);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,21.31485);
   hNCinFV_stack_11->SetBinContent(2,17.20519);
   hNCinFV_stack_11->SetBinContent(3,17.72241);
   hNCinFV_stack_11->SetBinContent(4,13.7928);
   hNCinFV_stack_11->SetBinContent(5,16.4071);
   hNCinFV_stack_11->SetBinContent(6,11.23381);
   hNCinFV_stack_11->SetBinContent(7,12.39611);
   hNCinFV_stack_11->SetBinContent(8,8.841339);
   hNCinFV_stack_11->SetBinContent(9,8.841339);
   hNCinFV_stack_11->SetBinContent(10,4.896516);
   hNCinFV_stack_11->SetBinContent(11,7.377503);
   hNCinFV_stack_11->SetBinContent(12,5.308915);
   hNCinFV_stack_11->SetBinContent(13,3.464564);
   hNCinFV_stack_11->SetBinContent(14,3.872602);
   hNCinFV_stack_11->SetBinContent(15,4.784938);
   hNCinFV_stack_11->SetBinContent(16,3.851233);
   hNCinFV_stack_11->SetBinContent(17,1.518779);
   hNCinFV_stack_11->SetBinContent(18,3.464564);
   hNCinFV_stack_11->SetBinContent(19,1.858957);
   hNCinFV_stack_11->SetBinContent(20,1.65886);
   hNCinFV_stack_11->SetBinContent(21,2.929362);
   hNCinFV_stack_11->SetBinContent(22,2.876109);
   hNCinFV_stack_11->SetBinContent(23,2.000729);
   hNCinFV_stack_11->SetBinContent(24,1.807394);
   hNCinFV_stack_11->SetBinContent(25,19.93168);
   hNCinFV_stack_11->SetBinError(1,2.271587);
   hNCinFV_stack_11->SetBinError(2,2.038984);
   hNCinFV_stack_11->SetBinError(3,2.121922);
   hNCinFV_stack_11->SetBinError(4,1.841973);
   hNCinFV_stack_11->SetBinError(5,2.048575);
   hNCinFV_stack_11->SetBinError(6,1.699748);
   hNCinFV_stack_11->SetBinError(7,1.820073);
   hNCinFV_stack_11->SetBinError(8,1.507677);
   hNCinFV_stack_11->SetBinError(9,1.507677);
   hNCinFV_stack_11->SetBinError(10,1.075844);
   hNCinFV_stack_11->SetBinError(11,1.374112);
   hNCinFV_stack_11->SetBinError(12,1.256923);
   hNCinFV_stack_11->SetBinError(13,0.9613675);
   hNCinFV_stack_11->SetBinError(14,0.8994189);
   hNCinFV_stack_11->SetBinError(15,1.110004);
   hNCinFV_stack_11->SetBinError(16,0.9994861);
   hNCinFV_stack_11->SetBinError(17,0.5892709);
   hNCinFV_stack_11->SetBinError(18,0.9613675);
   hNCinFV_stack_11->SetBinError(19,0.6804124);
   hNCinFV_stack_11->SetBinError(20,0.650338);
   hNCinFV_stack_11->SetBinError(21,0.8777653);
   hNCinFV_stack_11->SetBinError(22,0.8993325);
   hNCinFV_stack_11->SetBinError(23,0.7343859);
   hNCinFV_stack_11->SetBinError(24,0.7084844);
   hNCinFV_stack_11->SetBinError(25,2.255041);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,74.67313);
   hnumuCCinFV_stack_12->SetBinContent(2,16.17848);
   hnumuCCinFV_stack_12->SetBinContent(3,18.83244);
   hnumuCCinFV_stack_12->SetBinContent(4,11.78559);
   hnumuCCinFV_stack_12->SetBinContent(5,13.01729);
   hnumuCCinFV_stack_12->SetBinContent(6,11.74228);
   hnumuCCinFV_stack_12->SetBinContent(7,12.33115);
   hnumuCCinFV_stack_12->SetBinContent(8,8.602665);
   hnumuCCinFV_stack_12->SetBinContent(9,9.014524);
   hnumuCCinFV_stack_12->SetBinContent(10,9.330984);
   hnumuCCinFV_stack_12->SetBinContent(11,8.28306);
   hnumuCCinFV_stack_12->SetBinContent(12,8.724512);
   hnumuCCinFV_stack_12->SetBinContent(13,6.309991);
   hnumuCCinFV_stack_12->SetBinContent(14,4.926161);
   hnumuCCinFV_stack_12->SetBinContent(15,5.306236);
   hnumuCCinFV_stack_12->SetBinContent(16,4.735356);
   hnumuCCinFV_stack_12->SetBinContent(17,3.989743);
   hnumuCCinFV_stack_12->SetBinContent(18,3.199434);
   hnumuCCinFV_stack_12->SetBinContent(19,5.950335);
   hnumuCCinFV_stack_12->SetBinContent(20,3.277528);
   hnumuCCinFV_stack_12->SetBinContent(21,4.958464);
   hnumuCCinFV_stack_12->SetBinContent(22,2.218439);
   hnumuCCinFV_stack_12->SetBinContent(23,2.351014);
   hnumuCCinFV_stack_12->SetBinContent(24,2.201674);
   hnumuCCinFV_stack_12->SetBinContent(25,56.06857);
   hnumuCCinFV_stack_12->SetBinError(1,5.225642);
   hnumuCCinFV_stack_12->SetBinError(2,2.222338);
   hnumuCCinFV_stack_12->SetBinError(3,2.674521);
   hnumuCCinFV_stack_12->SetBinError(4,1.993698);
   hnumuCCinFV_stack_12->SetBinError(5,1.964179);
   hnumuCCinFV_stack_12->SetBinError(6,1.813192);
   hnumuCCinFV_stack_12->SetBinError(7,2.251518);
   hnumuCCinFV_stack_12->SetBinError(8,1.454456);
   hnumuCCinFV_stack_12->SetBinError(9,1.572046);
   hnumuCCinFV_stack_12->SetBinError(10,1.677039);
   hnumuCCinFV_stack_12->SetBinError(11,1.871956);
   hnumuCCinFV_stack_12->SetBinError(12,1.626823);
   hnumuCCinFV_stack_12->SetBinError(13,1.282839);
   hnumuCCinFV_stack_12->SetBinError(14,1.137195);
   hnumuCCinFV_stack_12->SetBinError(15,1.216792);
   hnumuCCinFV_stack_12->SetBinError(16,1.246399);
   hnumuCCinFV_stack_12->SetBinError(17,1.015607);
   hnumuCCinFV_stack_12->SetBinError(18,0.9146861);
   hnumuCCinFV_stack_12->SetBinError(19,1.49908);
   hnumuCCinFV_stack_12->SetBinError(20,0.9796553);
   hnumuCCinFV_stack_12->SetBinError(21,2.575374);
   hnumuCCinFV_stack_12->SetBinError(22,0.7753857);
   hnumuCCinFV_stack_12->SetBinError(23,0.8630062);
   hnumuCCinFV_stack_12->SetBinError(24,0.7597785);
   hnumuCCinFV_stack_12->SetBinError(25,4.312967);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,1.725724);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.5372608);
   hnueCCinFV_stack_13->SetBinContent(7,1.035766);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.9926134);
   hnueCCinFV_stack_13->SetBinContent(12,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(14,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(15,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(16,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(24,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(25,6.401656);
   hnueCCinFV_stack_13->SetBinError(1,0.8297576);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3929604);
   hnueCCinFV_stack_13->SetBinError(7,0.5280682);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.5089633);
   hnueCCinFV_stack_13->SetBinError(12,0.2171002);
   hnueCCinFV_stack_13->SetBinError(14,0.2758068);
   hnueCCinFV_stack_13->SetBinError(15,0.2346262);
   hnueCCinFV_stack_13->SetBinError(16,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3866963);
   hnueCCinFV_stack_13->SetBinError(24,0.2770047);
   hnueCCinFV_stack_13->SetBinError(25,1.963458);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__14->SetBinContent(1,316.2607);
   hmcerror__14->SetBinContent(2,214.3385);
   hmcerror__14->SetBinContent(3,219.2449);
   hmcerror__14->SetBinContent(4,189.133);
   hmcerror__14->SetBinContent(5,181.5638);
   hmcerror__14->SetBinContent(6,155.9359);
   hmcerror__14->SetBinContent(7,141.047);
   hmcerror__14->SetBinContent(8,120.6621);
   hmcerror__14->SetBinContent(9,105.5664);
   hmcerror__14->SetBinContent(10,90.30242);
   hmcerror__14->SetBinContent(11,80.97134);
   hmcerror__14->SetBinContent(12,73.4597);
   hmcerror__14->SetBinContent(13,64.23666);
   hmcerror__14->SetBinContent(14,54.3273);
   hmcerror__14->SetBinContent(15,44.51796);
   hmcerror__14->SetBinContent(16,40.79145);
   hmcerror__14->SetBinContent(17,29.66983);
   hmcerror__14->SetBinContent(18,32.76278);
   hmcerror__14->SetBinContent(19,29.16638);
   hmcerror__14->SetBinContent(20,21.64803);
   hmcerror__14->SetBinContent(21,23.23815);
   hmcerror__14->SetBinContent(22,23.42029);
   hmcerror__14->SetBinContent(23,17.10776);
   hmcerror__14->SetBinContent(24,14.92051);
   hmcerror__14->SetBinContent(25,212.7493);
   hmcerror__14->SetBinError(1,108.2464);
   hmcerror__14->SetBinError(2,94.93519);
   hmcerror__14->SetBinError(3,82.65034);
   hmcerror__14->SetBinError(4,77.30804);
   hmcerror__14->SetBinError(5,72.52577);
   hmcerror__14->SetBinError(6,63.69548);
   hmcerror__14->SetBinError(7,53.05903);
   hmcerror__14->SetBinError(8,50.80327);
   hmcerror__14->SetBinError(9,40.4293);
   hmcerror__14->SetBinError(10,35.43878);
   hmcerror__14->SetBinError(11,31.0811);
   hmcerror__14->SetBinError(12,28.26649);
   hmcerror__14->SetBinError(13,25.91385);
   hmcerror__14->SetBinError(14,22.18853);
   hmcerror__14->SetBinError(15,22.05203);
   hmcerror__14->SetBinError(16,20.38196);
   hmcerror__14->SetBinError(17,12.57397);
   hmcerror__14->SetBinError(18,15.97652);
   hmcerror__14->SetBinError(19,15.21561);
   hmcerror__14->SetBinError(20,9.769228);
   hmcerror__14->SetBinError(21,11.6259);
   hmcerror__14->SetBinError(22,12.22386);
   hmcerror__14->SetBinError(23,9.999382);
   hmcerror__14->SetBinError(24,8.695096);
   hmcerror__14->SetBinError(25,69.90963);
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
   263,
   159,
   149,
   149,
   155,
   95,
   112,
   90,
   69,
   68,
   59,
   52,
   45,
   41,
   37,
   21,
   30,
   20,
   22,
   16,
   20,
   16,
   11,
   8};
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
   16.21727,
   12.60952,
   12.20656,
   12.20656,
   12.4499,
   9.8686,
   10.58301,
   9.6093,
   8.4327,
   8.3726,
   7.8097,
   7.3419,
   6.8416,
   6.5384,
   6.2203,
   4.7354,
   5.6197,
   4.6266,
   4.8417,
   4.1628,
   4.6266,
   4.1628,
   3.4975,
   3.0307};
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
   16.21727,
   12.60952,
   12.20656,
   12.20656,
   12.4499,
   9.667,
   10.58301,
   9.4079,
   8.2304,
   8.1701,
   7.6066,
   7.1381,
   6.637,
   6.3331,
   6.0141,
   4.5229,
   5.4117,
   4.4133,
   4.6299,
   3.9454,
   4.4133,
   3.9454,
   3.27,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,99);
   Graph_Graph3017->SetMinimum(4.47237);
   Graph_Graph3017->SetMaximum(306.6421);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1707.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 51.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 116.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 8.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 119.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1003.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  184.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 347.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 179.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 251.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all");
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
   0.3422696,
   0.4429219,
   0.3769772,
   0.4087496,
   0.3994505,
   0.4084722,
   0.3761798,
   0.4210375,
   0.3829751,
   0.3924455,
   0.3838531,
   0.3847891,
   0.4034123,
   0.4084233,
   0.4953512,
   0.4996625,
   0.4237964,
   0.4876426,
   0.5216833,
   0.4512755,
   0.5002936,
   0.5219346,
   0.584494,
   0.5827614};
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
   0.3422696,
   0.4429219,
   0.3769772,
   0.4087496,
   0.3994505,
   0.4084722,
   0.3761798,
   0.4210375,
   0.3829751,
   0.3924455,
   0.3838531,
   0.3847891,
   0.4034123,
   0.4084233,
   0.4953512,
   0.4996625,
   0.4237964,
   0.4876426,
   0.5216833,
   0.4512755,
   0.5002936,
   0.5219346,
   0.584494,
   0.5827614};
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
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   0.3129872,
   0.4006953,
   0.3621349,
   0.3857206,
   0.3696288,
   0.3569828,
   0.3497218,
   0.3567941,
   0.3483394,
   0.3340154,
   0.3292305,
   0.3230529,
   0.3558029,
   0.3294275,
   0.3331651,
   0.3274677,
   0.3069342,
   0.3021255,
   0.2949684,
   0.3041925,
   0.3276148,
   0.2786207,
   0.3375818,
   0.3016222};
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
   0.3129872,
   0.4006953,
   0.3621349,
   0.3857206,
   0.3696288,
   0.3569828,
   0.3497218,
   0.3567941,
   0.3483394,
   0.3340154,
   0.3292305,
   0.3230529,
   0.3558029,
   0.3294275,
   0.3331651,
   0.3274677,
   0.3069342,
   0.3021255,
   0.2949684,
   0.3041925,
   0.3276148,
   0.2786207,
   0.3375818,
   0.3016222};
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
   0.8315924,
   0.7418174,
   0.6796052,
   0.7878053,
   0.8536942,
   0.6092247,
   0.7940615,
   0.7458844,
   0.6536171,
   0.7530252,
   0.7286528,
   0.7078711,
   0.7005346,
   0.754685,
   0.8311252,
   0.5148137,
   1.011128,
   0.6104489,
   0.754293,
   0.7390972,
   0.8606539,
   0.6831683,
   0.6429831,
   0.5361748};
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
   0.05127818,
   0.05882995,
   0.05567542,
   0.06453952,
   0.06857037,
   0.06328626,
   0.07503176,
   0.07963808,
   0.07988053,
   0.09271734,
   0.09645017,
   0.09994459,
   0.1065062,
   0.120352,
   0.1397256,
   0.116088,
   0.1894079,
   0.1412151,
   0.1660028,
   0.1922946,
   0.1990951,
   0.1777433,
   0.2044394,
   0.2031231};
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
   0.05127818,
   0.05882995,
   0.05567542,
   0.06453952,
   0.06857037,
   0.06199342,
   0.07503176,
   0.07796896,
   0.0779642,
   0.09047487,
   0.09394188,
   0.09717028,
   0.1033211,
   0.1165731,
   0.1350938,
   0.1108786,
   0.1823974,
   0.1347047,
   0.158741,
   0.1822521,
   0.1899162,
   0.1684608,
   0.1911413,
   0.1869642};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,99);
   Graph_Graph3020->SetMinimum(0.2470043);
   Graph_Graph3020->SetMaximum(1.279573);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);

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

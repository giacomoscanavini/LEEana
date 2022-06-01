#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 19:45:10 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-9.141443,101.5385,962.7383);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hmc__4->SetBinContent(1,457.0722);
   hmc__4->SetBinContent(2,249.2365);
   hmc__4->SetBinContent(3,268.3062);
   hmc__4->SetBinContent(4,242.4516);
   hmc__4->SetBinContent(5,234.0416);
   hmc__4->SetBinContent(6,210.9556);
   hmc__4->SetBinContent(7,204.981);
   hmc__4->SetBinContent(8,162.6754);
   hmc__4->SetBinContent(9,141.248);
   hmc__4->SetBinContent(10,143.6393);
   hmc__4->SetBinContent(11,105.4353);
   hmc__4->SetBinContent(12,104.7051);
   hmc__4->SetBinContent(13,85.84682);
   hmc__4->SetBinContent(14,91.90025);
   hmc__4->SetBinContent(15,76.87174);
   hmc__4->SetBinContent(16,55.73512);
   hmc__4->SetBinContent(17,50.29834);
   hmc__4->SetBinContent(18,41.54895);
   hmc__4->SetBinContent(19,45.93811);
   hmc__4->SetBinContent(20,40.00603);
   hmc__4->SetBinContent(21,28.01501);
   hmc__4->SetBinContent(22,32.26101);
   hmc__4->SetBinContent(23,30.49203);
   hmc__4->SetBinContent(24,20.06568);
   hmc__4->SetBinContent(25,19.83324);
   hmc__4->SetBinContent(26,300.0371);
   hmc__4->SetBinError(1,97.53812);
   hmc__4->SetBinError(2,64.16106);
   hmc__4->SetBinError(3,63.87519);
   hmc__4->SetBinError(4,60.14992);
   hmc__4->SetBinError(5,56.18315);
   hmc__4->SetBinError(6,50.48893);
   hmc__4->SetBinError(7,48.94012);
   hmc__4->SetBinError(8,42.18081);
   hmc__4->SetBinError(9,34.21092);
   hmc__4->SetBinError(10,33.72007);
   hmc__4->SetBinError(11,27.84093);
   hmc__4->SetBinError(12,26.47824);
   hmc__4->SetBinError(13,21.19186);
   hmc__4->SetBinError(14,21.3492);
   hmc__4->SetBinError(15,18.41266);
   hmc__4->SetBinError(16,13.53865);
   hmc__4->SetBinError(17,13.00186);
   hmc__4->SetBinError(18,10.71757);
   hmc__4->SetBinError(19,12.05968);
   hmc__4->SetBinError(20,10.6943);
   hmc__4->SetBinError(21,7.205421);
   hmc__4->SetBinError(22,9.409102);
   hmc__4->SetBinError(23,7.088052);
   hmc__4->SetBinError(24,5.738216);
   hmc__4->SetBinError(25,7.067481);
   hmc__4->SetBinError(26,75.47643);
   hmc__4->SetMinimum(-9.141443);
   hmc__4->SetMaximum(914.1443);
   hmc__4->SetEntries(3396.741);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,90);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(479.9258);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hbadmatch_stack_1->SetBinContent(1,11.90465);
   hbadmatch_stack_1->SetBinContent(2,3.98328);
   hbadmatch_stack_1->SetBinContent(3,5.222838);
   hbadmatch_stack_1->SetBinContent(4,7.796866);
   hbadmatch_stack_1->SetBinContent(5,3.640663);
   hbadmatch_stack_1->SetBinContent(6,1.870849);
   hbadmatch_stack_1->SetBinContent(7,3.907867);
   hbadmatch_stack_1->SetBinContent(8,2.604904);
   hbadmatch_stack_1->SetBinContent(9,1.992478);
   hbadmatch_stack_1->SetBinContent(10,2.331985);
   hbadmatch_stack_1->SetBinContent(11,2.383837);
   hbadmatch_stack_1->SetBinContent(12,3.690185);
   hbadmatch_stack_1->SetBinContent(13,2.002848);
   hbadmatch_stack_1->SetBinContent(14,1.951679);
   hbadmatch_stack_1->SetBinContent(15,3.424305);
   hbadmatch_stack_1->SetBinContent(16,1.698601);
   hbadmatch_stack_1->SetBinContent(17,0.8651019);
   hbadmatch_stack_1->SetBinContent(18,2.746814);
   hbadmatch_stack_1->SetBinContent(19,0.9835768);
   hbadmatch_stack_1->SetBinContent(20,0.9303237);
   hbadmatch_stack_1->SetBinContent(21,1.17563);
   hbadmatch_stack_1->SetBinContent(22,1.334463);
   hbadmatch_stack_1->SetBinContent(23,1.640822);
   hbadmatch_stack_1->SetBinContent(24,0.536893);
   hbadmatch_stack_1->SetBinContent(25,1.332125);
   hbadmatch_stack_1->SetBinContent(26,9.626486);
   hbadmatch_stack_1->SetBinError(1,1.96254);
   hbadmatch_stack_1->SetBinError(2,0.9629523);
   hbadmatch_stack_1->SetBinError(3,1.155044);
   hbadmatch_stack_1->SetBinError(4,2.486786);
   hbadmatch_stack_1->SetBinError(5,1.007607);
   hbadmatch_stack_1->SetBinError(6,0.6809753);
   hbadmatch_stack_1->SetBinError(7,0.9808007);
   hbadmatch_stack_1->SetBinError(8,0.8629955);
   hbadmatch_stack_1->SetBinError(9,0.6867936);
   hbadmatch_stack_1->SetBinError(10,0.7163668);
   hbadmatch_stack_1->SetBinError(11,0.8283081);
   hbadmatch_stack_1->SetBinError(12,1.031085);
   hbadmatch_stack_1->SetBinError(13,0.6344646);
   hbadmatch_stack_1->SetBinError(14,0.6642162);
   hbadmatch_stack_1->SetBinError(15,0.9115124);
   hbadmatch_stack_1->SetBinError(16,0.6631499);
   hbadmatch_stack_1->SetBinError(17,0.4343182);
   hbadmatch_stack_1->SetBinError(18,0.9379911);
   hbadmatch_stack_1->SetBinError(19,0.4398689);
   hbadmatch_stack_1->SetBinError(20,0.4814682);
   hbadmatch_stack_1->SetBinError(21,0.6071753);
   hbadmatch_stack_1->SetBinError(22,0.6923481);
   hbadmatch_stack_1->SetBinError(23,0.6983473);
   hbadmatch_stack_1->SetBinError(24,0.3929602);
   hbadmatch_stack_1->SetBinError(25,0.6257032);
   hbadmatch_stack_1->SetBinError(26,1.694381);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hext_stack_2->SetBinContent(1,39.11937);
   hext_stack_2->SetBinContent(2,12.76727);
   hext_stack_2->SetBinContent(3,15.09153);
   hext_stack_2->SetBinContent(4,11.91219);
   hext_stack_2->SetBinContent(5,16.58666);
   hext_stack_2->SetBinContent(6,16.93695);
   hext_stack_2->SetBinContent(7,17.322);
   hext_stack_2->SetBinContent(8,10.84243);
   hext_stack_2->SetBinContent(9,10.01487);
   hext_stack_2->SetBinContent(10,18.84025);
   hext_stack_2->SetBinContent(11,5.683567);
   hext_stack_2->SetBinContent(12,11.32405);
   hext_stack_2->SetBinContent(13,5.191995);
   hext_stack_2->SetBinContent(14,11.2981);
   hext_stack_2->SetBinContent(15,8.649442);
   hext_stack_2->SetBinContent(16,4.703194);
   hext_stack_2->SetBinContent(17,5.483261);
   hext_stack_2->SetBinContent(18,3.814975);
   hext_stack_2->SetBinContent(19,3.15182);
   hext_stack_2->SetBinContent(20,5.076662);
   hext_stack_2->SetBinContent(21,2.592407);
   hext_stack_2->SetBinContent(22,2.759582);
   hext_stack_2->SetBinContent(23,6.620856);
   hext_stack_2->SetBinContent(24,0.6487947);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,29.73017);
   hext_stack_2->SetBinError(1,4.484263);
   hext_stack_2->SetBinError(2,2.470657);
   hext_stack_2->SetBinError(3,2.77591);
   hext_stack_2->SetBinError(4,2.200574);
   hext_stack_2->SetBinError(5,2.752654);
   hext_stack_2->SetBinError(6,2.923058);
   hext_stack_2->SetBinError(7,3.051753);
   hext_stack_2->SetBinError(8,2.206613);
   hext_stack_2->SetBinError(9,2.222813);
   hext_stack_2->SetBinError(10,3.222248);
   hext_stack_2->SetBinError(11,1.429781);
   hext_stack_2->SetBinError(12,2.30125);
   hext_stack_2->SetBinError(13,1.468055);
   hext_stack_2->SetBinError(14,2.400882);
   hext_stack_2->SetBinError(15,2.014317);
   hext_stack_2->SetBinError(16,1.389163);
   hext_stack_2->SetBinError(17,1.711754);
   hext_stack_2->SetBinError(18,1.156649);
   hext_stack_2->SetBinError(19,1.23684);
   hext_stack_2->SetBinError(20,1.662762);
   hext_stack_2->SetBinError(21,1.085446);
   hext_stack_2->SetBinError(22,0.98084);
   hext_stack_2->SetBinError(23,1.834661);
   hext_stack_2->SetBinError(24,0.4587671);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,3.765625);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hdirt_stack_3->SetBinContent(1,2.528237);
   hdirt_stack_3->SetBinContent(2,0.7759784);
   hdirt_stack_3->SetBinContent(3,1.062717);
   hdirt_stack_3->SetBinContent(4,1.305666);
   hdirt_stack_3->SetBinContent(5,0.9158598);
   hdirt_stack_3->SetBinContent(6,1.021156);
   hdirt_stack_3->SetBinContent(7,0.31339);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.5277543);
   hdirt_stack_3->SetBinContent(10,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.4788139);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.3569671);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.2620342);
   hdirt_stack_3->SetBinContent(19,1.120959);
   hdirt_stack_3->SetBinContent(20,0.5429839);
   hdirt_stack_3->SetBinContent(21,0.1651799);
   hdirt_stack_3->SetBinContent(22,0.2623434);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinContent(26,1.991222);
   hdirt_stack_3->SetBinError(1,0.794153);
   hdirt_stack_3->SetBinError(2,0.458477);
   hdirt_stack_3->SetBinError(3,0.6356341);
   hdirt_stack_3->SetBinError(4,0.9684368);
   hdirt_stack_3->SetBinError(5,0.3809226);
   hdirt_stack_3->SetBinError(6,0.5489928);
   hdirt_stack_3->SetBinError(7,0.2231598);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.3184898);
   hdirt_stack_3->SetBinError(10,0.458477);
   hdirt_stack_3->SetBinError(12,0.3652956);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.258803);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.2620342);
   hdirt_stack_3->SetBinError(19,0.5258702);
   hdirt_stack_3->SetBinError(20,0.4278058);
   hdirt_stack_3->SetBinError(21,0.1651799);
   hdirt_stack_3->SetBinError(22,0.2623434);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetBinError(26,0.7865397);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   houtFV_stack_4->SetBinContent(1,32.40693);
   houtFV_stack_4->SetBinContent(2,13.0117);
   houtFV_stack_4->SetBinContent(3,13.01711);
   houtFV_stack_4->SetBinContent(4,11.74177);
   houtFV_stack_4->SetBinContent(5,12.44074);
   houtFV_stack_4->SetBinContent(6,11.87552);
   houtFV_stack_4->SetBinContent(7,10.71757);
   houtFV_stack_4->SetBinContent(8,9.724142);
   houtFV_stack_4->SetBinContent(9,9.473863);
   houtFV_stack_4->SetBinContent(10,6.980691);
   houtFV_stack_4->SetBinContent(11,8.535795);
   houtFV_stack_4->SetBinContent(12,8.045719);
   houtFV_stack_4->SetBinContent(13,7.313108);
   houtFV_stack_4->SetBinContent(14,6.211423);
   houtFV_stack_4->SetBinContent(15,6.017084);
   houtFV_stack_4->SetBinContent(16,3.224131);
   houtFV_stack_4->SetBinContent(17,3.615934);
   houtFV_stack_4->SetBinContent(18,1.947808);
   houtFV_stack_4->SetBinContent(19,3.755267);
   houtFV_stack_4->SetBinContent(20,3.30327);
   houtFV_stack_4->SetBinContent(21,1.494509);
   houtFV_stack_4->SetBinContent(22,2.098782);
   houtFV_stack_4->SetBinContent(23,2.295498);
   houtFV_stack_4->SetBinContent(24,1.467217);
   houtFV_stack_4->SetBinContent(25,2.000729);
   houtFV_stack_4->SetBinContent(26,23.65158);
   houtFV_stack_4->SetBinError(1,2.851848);
   houtFV_stack_4->SetBinError(2,1.78605);
   houtFV_stack_4->SetBinError(3,1.807041);
   houtFV_stack_4->SetBinError(4,1.664963);
   houtFV_stack_4->SetBinError(5,1.769947);
   houtFV_stack_4->SetBinError(6,1.722279);
   houtFV_stack_4->SetBinError(7,1.639498);
   houtFV_stack_4->SetBinError(8,1.577931);
   houtFV_stack_4->SetBinError(9,1.556512);
   houtFV_stack_4->SetBinError(10,1.345164);
   houtFV_stack_4->SetBinError(11,1.511865);
   houtFV_stack_4->SetBinError(12,1.429157);
   houtFV_stack_4->SetBinError(13,1.33686);
   houtFV_stack_4->SetBinError(14,1.27893);
   houtFV_stack_4->SetBinError(15,1.19386);
   houtFV_stack_4->SetBinError(16,0.8539343);
   houtFV_stack_4->SetBinError(17,0.9642326);
   houtFV_stack_4->SetBinError(18,0.729996);
   houtFV_stack_4->SetBinError(19,1.002026);
   houtFV_stack_4->SetBinError(20,0.9489399);
   houtFV_stack_4->SetBinError(21,0.6970247);
   houtFV_stack_4->SetBinError(22,0.6777592);
   houtFV_stack_4->SetBinError(23,0.7057297);
   houtFV_stack_4->SetBinError(24,0.6214735);
   houtFV_stack_4->SetBinError(25,0.7343859);
   houtFV_stack_4->SetBinError(26,2.464688);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.697004);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2563433);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1749792);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,184.2528);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,154.7545);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,151.2737);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,143.0934);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,136.7943);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,119.8481);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,110.2679);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,90.27413);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,81.59506);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,73.96069);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,59.44);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,50.88063);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,49.01653);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,43.88241);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,36.38062);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,31.78553);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,23.95707);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,21.55716);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,21.47279);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,16.70852);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,14.71349);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,12.96808);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,10.5587);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,9.498161);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,8.61798);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,108.9277);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,4.420404);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.138926);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,4.022916);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.939851);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.853097);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.602474);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.467759);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.084965);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.998931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.774648);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.443582);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.22598);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.327624);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.210717);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.980314);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.824571);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.620077);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.52148);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.525143);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.330026);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.268183);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.203678);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.041038);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.9943154);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.9585742);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,3.466057);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hCCpi0inFV_stack_7->SetBinContent(1,74.47249);
   hCCpi0inFV_stack_7->SetBinContent(2,37.47371);
   hCCpi0inFV_stack_7->SetBinContent(3,51.15291);
   hCCpi0inFV_stack_7->SetBinContent(4,45.19671);
   hCCpi0inFV_stack_7->SetBinContent(5,41.34813);
   hCCpi0inFV_stack_7->SetBinContent(6,40.82457);
   hCCpi0inFV_stack_7->SetBinContent(7,37.68887);
   hCCpi0inFV_stack_7->SetBinContent(8,32.84768);
   hCCpi0inFV_stack_7->SetBinContent(9,21.80648);
   hCCpi0inFV_stack_7->SetBinContent(10,25.76588);
   hCCpi0inFV_stack_7->SetBinContent(11,18.35988);
   hCCpi0inFV_stack_7->SetBinContent(12,16.41179);
   hCCpi0inFV_stack_7->SetBinContent(13,11.43435);
   hCCpi0inFV_stack_7->SetBinContent(14,14.59748);
   hCCpi0inFV_stack_7->SetBinContent(15,10.38764);
   hCCpi0inFV_stack_7->SetBinContent(16,5.913668);
   hCCpi0inFV_stack_7->SetBinContent(17,7.755846);
   hCCpi0inFV_stack_7->SetBinContent(18,5.024763);
   hCCpi0inFV_stack_7->SetBinContent(19,7.625781);
   hCCpi0inFV_stack_7->SetBinContent(20,6.195532);
   hCCpi0inFV_stack_7->SetBinContent(21,2.982615);
   hCCpi0inFV_stack_7->SetBinContent(22,5.516855);
   hCCpi0inFV_stack_7->SetBinContent(23,5.027615);
   hCCpi0inFV_stack_7->SetBinContent(24,2.731477);
   hCCpi0inFV_stack_7->SetBinContent(25,2.052291);
   hCCpi0inFV_stack_7->SetBinContent(26,36.38061);
   hCCpi0inFV_stack_7->SetBinError(1,4.305352);
   hCCpi0inFV_stack_7->SetBinError(2,3.101035);
   hCCpi0inFV_stack_7->SetBinError(3,3.613853);
   hCCpi0inFV_stack_7->SetBinError(4,3.377557);
   hCCpi0inFV_stack_7->SetBinError(5,3.26282);
   hCCpi0inFV_stack_7->SetBinError(6,3.215832);
   hCCpi0inFV_stack_7->SetBinError(7,3.000575);
   hCCpi0inFV_stack_7->SetBinError(8,2.976862);
   hCCpi0inFV_stack_7->SetBinError(9,2.327478);
   hCCpi0inFV_stack_7->SetBinError(10,2.571146);
   hCCpi0inFV_stack_7->SetBinError(11,2.107199);
   hCCpi0inFV_stack_7->SetBinError(12,2.034824);
   hCCpi0inFV_stack_7->SetBinError(13,1.711288);
   hCCpi0inFV_stack_7->SetBinError(14,1.882197);
   hCCpi0inFV_stack_7->SetBinError(15,1.641308);
   hCCpi0inFV_stack_7->SetBinError(16,1.226083);
   hCCpi0inFV_stack_7->SetBinError(17,1.40105);
   hCCpi0inFV_stack_7->SetBinError(18,1.108379);
   hCCpi0inFV_stack_7->SetBinError(19,1.374006);
   hCCpi0inFV_stack_7->SetBinError(20,1.2866);
   hCCpi0inFV_stack_7->SetBinError(21,0.8556548);
   hCCpi0inFV_stack_7->SetBinError(22,1.19355);
   hCCpi0inFV_stack_7->SetBinError(23,1.146205);
   hCCpi0inFV_stack_7->SetBinError(24,0.7702833);
   hCCpi0inFV_stack_7->SetBinError(25,0.7073425);
   hCCpi0inFV_stack_7->SetBinError(26,2.989474);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCinFV_stack_8->SetBinContent(1,21.06811);
   hNCinFV_stack_8->SetBinContent(2,10.30964);
   hNCinFV_stack_8->SetBinContent(3,12.69764);
   hNCinFV_stack_8->SetBinContent(4,10.21835);
   hNCinFV_stack_8->SetBinContent(5,7.427375);
   hNCinFV_stack_8->SetBinContent(6,7.129225);
   hNCinFV_stack_8->SetBinContent(7,10.15833);
   hNCinFV_stack_8->SetBinContent(8,5.625052);
   hNCinFV_stack_8->SetBinContent(9,6.892172);
   hNCinFV_stack_8->SetBinContent(10,3.664661);
   hNCinFV_stack_8->SetBinContent(11,4.499704);
   hNCinFV_stack_8->SetBinContent(12,3.998076);
   hNCinFV_stack_8->SetBinContent(13,4.433535);
   hNCinFV_stack_8->SetBinContent(14,3.751489);
   hNCinFV_stack_8->SetBinContent(15,4.157836);
   hNCinFV_stack_8->SetBinContent(16,1.857266);
   hNCinFV_stack_8->SetBinContent(17,2.195754);
   hNCinFV_stack_8->SetBinContent(18,2.982615);
   hNCinFV_stack_8->SetBinContent(19,2.679393);
   hNCinFV_stack_8->SetBinContent(20,1.855576);
   hNCinFV_stack_8->SetBinContent(21,1.517089);
   hNCinFV_stack_8->SetBinContent(22,2.002419);
   hNCinFV_stack_8->SetBinContent(23,2.534241);
   hNCinFV_stack_8->SetBinContent(24,1.517089);
   hNCinFV_stack_8->SetBinContent(25,0.9303237);
   hNCinFV_stack_8->SetBinContent(26,21.54067);
   hNCinFV_stack_8->SetBinError(1,2.237324);
   hNCinFV_stack_8->SetBinError(2,1.56887);
   hNCinFV_stack_8->SetBinError(3,1.809433);
   hNCinFV_stack_8->SetBinError(4,1.594982);
   hNCinFV_stack_8->SetBinError(5,1.359608);
   hNCinFV_stack_8->SetBinError(6,1.374218);
   hNCinFV_stack_8->SetBinError(7,1.606128);
   hNCinFV_stack_8->SetBinError(8,1.161279);
   hNCinFV_stack_8->SetBinError(9,1.301836);
   hNCinFV_stack_8->SetBinError(10,0.9819618);
   hNCinFV_stack_8->SetBinError(11,1.038616);
   hNCinFV_stack_8->SetBinError(12,1.037941);
   hNCinFV_stack_8->SetBinError(13,1.144718);
   hNCinFV_stack_8->SetBinError(14,1.0384);
   hNCinFV_stack_8->SetBinError(15,0.9809893);
   hNCinFV_stack_8->SetBinError(16,0.6799255);
   hNCinFV_stack_8->SetBinError(17,0.7598403);
   hNCinFV_stack_8->SetBinError(18,0.8556548);
   hNCinFV_stack_8->SetBinError(19,0.8775546);
   hNCinFV_stack_8->SetBinError(20,0.6794384);
   hNCinFV_stack_8->SetBinError(21,0.5887087);
   hNCinFV_stack_8->SetBinError(22,0.7348366);
   hNCinFV_stack_8->SetBinError(23,0.8321153);
   hNCinFV_stack_8->SetBinError(24,0.5887087);
   hNCinFV_stack_8->SetBinError(25,0.4814682);
   hNCinFV_stack_8->SetBinError(26,2.355377);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hnumuCCinFV_stack_9->SetBinContent(1,87.9753);
   hnumuCCinFV_stack_9->SetBinContent(2,15.87998);
   hnumuCCinFV_stack_9->SetBinContent(3,18.14347);
   hnumuCCinFV_stack_9->SetBinContent(4,10.61595);
   hnumuCCinFV_stack_9->SetBinContent(5,13.6692);
   hnumuCCinFV_stack_9->SetBinContent(6,11.04536);
   hnumuCCinFV_stack_9->SetBinContent(7,12.72529);
   hnumuCCinFV_stack_9->SetBinContent(8,9.925135);
   hnumuCCinFV_stack_9->SetBinContent(9,7.630817);
   hnumuCCinFV_stack_9->SetBinContent(10,10.64703);
   hnumuCCinFV_stack_9->SetBinContent(11,6.44884);
   hnumuCCinFV_stack_9->SetBinContent(12,9.630876);
   hnumuCCinFV_stack_9->SetBinContent(13,5.622259);
   hnumuCCinFV_stack_9->SetBinContent(14,9.04097);
   hnumuCCinFV_stack_9->SetBinContent(15,7.025269);
   hnumuCCinFV_stack_9->SetBinContent(16,5.691357);
   hnumuCCinFV_stack_9->SetBinContent(17,5.130003);
   hnumuCCinFV_stack_9->SetBinContent(18,3.184886);
   hnumuCCinFV_stack_9->SetBinContent(19,5.148522);
   hnumuCCinFV_stack_9->SetBinContent(20,5.052996);
   hnumuCCinFV_stack_9->SetBinContent(21,3.374086);
   hnumuCCinFV_stack_9->SetBinContent(22,4.899237);
   hnumuCCinFV_stack_9->SetBinContent(23,1.591765);
   hnumuCCinFV_stack_9->SetBinContent(24,2.94116);
   hnumuCCinFV_stack_9->SetBinContent(25,2.591723);
   hnumuCCinFV_stack_9->SetBinContent(26,59.99055);
   hnumuCCinFV_stack_9->SetBinError(1,5.741789);
   hnumuCCinFV_stack_9->SetBinError(2,2.231062);
   hnumuCCinFV_stack_9->SetBinError(3,2.683746);
   hnumuCCinFV_stack_9->SetBinError(4,1.93639);
   hnumuCCinFV_stack_9->SetBinError(5,2.098513);
   hnumuCCinFV_stack_9->SetBinError(6,1.75954);
   hnumuCCinFV_stack_9->SetBinError(7,2.290823);
   hnumuCCinFV_stack_9->SetBinError(8,1.61084);
   hnumuCCinFV_stack_9->SetBinError(9,1.44145);
   hnumuCCinFV_stack_9->SetBinError(10,1.771715);
   hnumuCCinFV_stack_9->SetBinError(11,1.732922);
   hnumuCCinFV_stack_9->SetBinError(12,1.684374);
   hnumuCCinFV_stack_9->SetBinError(13,1.317373);
   hnumuCCinFV_stack_9->SetBinError(14,2.114188);
   hnumuCCinFV_stack_9->SetBinError(15,1.405317);
   hnumuCCinFV_stack_9->SetBinError(16,1.210922);
   hnumuCCinFV_stack_9->SetBinError(17,1.295995);
   hnumuCCinFV_stack_9->SetBinError(18,0.8982444);
   hnumuCCinFV_stack_9->SetBinError(19,1.203302);
   hnumuCCinFV_stack_9->SetBinError(20,1.396162);
   hnumuCCinFV_stack_9->SetBinError(21,1.00077);
   hnumuCCinFV_stack_9->SetBinError(22,2.570299);
   hnumuCCinFV_stack_9->SetBinError(23,0.6851472);
   hnumuCCinFV_stack_9->SetBinError(24,0.927831);
   hnumuCCinFV_stack_9->SetBinError(25,0.80829);
   hnumuCCinFV_stack_9->SetBinError(26,4.452782);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hnueCCinFV_stack_10->SetBinContent(1,2.647254);
   hnueCCinFV_stack_10->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(3,0.5884556);
   hnueCCinFV_stack_10->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_10->SetBinContent(6,0.0003678389);
   hnueCCinFV_stack_10->SetBinContent(7,1.572659);
   hnueCCinFV_stack_10->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(9,1.189329);
   hnueCCinFV_stack_10->SetBinContent(10,0.5884556);
   hnueCCinFV_stack_10->SetBinContent(12,0.2171002);
   hnueCCinFV_stack_10->SetBinContent(13,0.3636403);
   hnueCCinFV_stack_10->SetBinContent(14,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(15,0.4296511);
   hnueCCinFV_stack_10->SetBinContent(16,0.6803553);
   hnueCCinFV_stack_10->SetBinContent(17,0.536893);
   hnueCCinFV_stack_10->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(24,0.3866963);
   hnueCCinFV_stack_10->SetBinContent(25,1.549171);
   hnueCCinFV_stack_10->SetBinContent(26,7.584968);
   hnueCCinFV_stack_10->SetBinError(1,0.9943211);
   hnueCCinFV_stack_10->SetBinError(2,0.1967154);
   hnueCCinFV_stack_10->SetBinError(3,0.3397478);
   hnueCCinFV_stack_10->SetBinError(4,0.1950249);
   hnueCCinFV_stack_10->SetBinError(5,0.3921167);
   hnueCCinFV_stack_10->SetBinError(6,0.0003678389);
   hnueCCinFV_stack_10->SetBinError(7,0.6582354);
   hnueCCinFV_stack_10->SetBinError(8,0.1950249);
   hnueCCinFV_stack_10->SetBinError(9,0.5456561);
   hnueCCinFV_stack_10->SetBinError(10,0.3397478);
   hnueCCinFV_stack_10->SetBinError(12,0.2171002);
   hnueCCinFV_stack_10->SetBinError(13,0.2603594);
   hnueCCinFV_stack_10->SetBinError(14,0.2770047);
   hnueCCinFV_stack_10->SetBinError(15,0.305097);
   hnueCCinFV_stack_10->SetBinError(16,0.4810838);
   hnueCCinFV_stack_10->SetBinError(17,0.3929602);
   hnueCCinFV_stack_10->SetBinError(20,0.3401776);
   hnueCCinFV_stack_10->SetBinError(22,0.1967154);
   hnueCCinFV_stack_10->SetBinError(24,0.3866963);
   hnueCCinFV_stack_10->SetBinError(25,1.190117);
   hnueCCinFV_stack_10->SetBinError(26,2.040692);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);
   hmcerror__5->SetBinContent(1,457.0722);
   hmcerror__5->SetBinContent(2,249.2365);
   hmcerror__5->SetBinContent(3,268.3062);
   hmcerror__5->SetBinContent(4,242.4516);
   hmcerror__5->SetBinContent(5,234.0416);
   hmcerror__5->SetBinContent(6,210.9556);
   hmcerror__5->SetBinContent(7,204.981);
   hmcerror__5->SetBinContent(8,162.6754);
   hmcerror__5->SetBinContent(9,141.248);
   hmcerror__5->SetBinContent(10,143.6393);
   hmcerror__5->SetBinContent(11,105.4353);
   hmcerror__5->SetBinContent(12,104.7051);
   hmcerror__5->SetBinContent(13,85.84682);
   hmcerror__5->SetBinContent(14,91.90025);
   hmcerror__5->SetBinContent(15,76.87174);
   hmcerror__5->SetBinContent(16,55.73512);
   hmcerror__5->SetBinContent(17,50.29834);
   hmcerror__5->SetBinContent(18,41.54895);
   hmcerror__5->SetBinContent(19,45.93811);
   hmcerror__5->SetBinContent(20,40.00603);
   hmcerror__5->SetBinContent(21,28.01501);
   hmcerror__5->SetBinContent(22,32.26101);
   hmcerror__5->SetBinContent(23,30.49203);
   hmcerror__5->SetBinContent(24,20.06568);
   hmcerror__5->SetBinContent(25,19.83324);
   hmcerror__5->SetBinContent(26,300.0371);
   hmcerror__5->SetBinError(1,97.53812);
   hmcerror__5->SetBinError(2,64.16106);
   hmcerror__5->SetBinError(3,63.87519);
   hmcerror__5->SetBinError(4,60.14992);
   hmcerror__5->SetBinError(5,56.18315);
   hmcerror__5->SetBinError(6,50.48893);
   hmcerror__5->SetBinError(7,48.94012);
   hmcerror__5->SetBinError(8,42.18081);
   hmcerror__5->SetBinError(9,34.21092);
   hmcerror__5->SetBinError(10,33.72007);
   hmcerror__5->SetBinError(11,27.84093);
   hmcerror__5->SetBinError(12,26.47824);
   hmcerror__5->SetBinError(13,21.19186);
   hmcerror__5->SetBinError(14,21.3492);
   hmcerror__5->SetBinError(15,18.41266);
   hmcerror__5->SetBinError(16,13.53865);
   hmcerror__5->SetBinError(17,13.00186);
   hmcerror__5->SetBinError(18,10.71757);
   hmcerror__5->SetBinError(19,12.05968);
   hmcerror__5->SetBinError(20,10.6943);
   hmcerror__5->SetBinError(21,7.205421);
   hmcerror__5->SetBinError(22,9.409102);
   hmcerror__5->SetBinError(23,7.088052);
   hmcerror__5->SetBinError(24,5.738216);
   hmcerror__5->SetBinError(25,7.067481);
   hmcerror__5->SetBinError(26,75.47643);
   hmcerror__5->SetEntries(3396.741);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3005[25] = {
   363,
   187,
   201,
   195,
   210,
   147,
   144,
   121,
   102,
   104,
   86,
   81,
   72,
   70,
   51,
   41,
   38,
   38,
   33,
   32,
   21,
   27,
   21,
   20,
   13};
   Double_t _felx3005[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3005[25] = {
   19.05256,
   13.67479,
   14.17745,
   13.96424,
   14.49138,
   12.12436,
   12,
   11,
   10.0995,
   10.19804,
   9.3967,
   9.1239,
   8.6108,
   8.4925,
   7.2725,
   6.5384,
   6.3013,
   6.3013,
   5.8847,
   5.7977,
   4.7354,
   5.3414,
   4.7354,
   4.6266,
   3.77763};
   Double_t _fehx3005[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3005[25] = {
   19.05256,
   13.67479,
   14.17745,
   13.96424,
   14.49138,
   12.12436,
   12,
   11,
   10.0995,
   10.19804,
   9.1951,
   8.9221,
   8.4085,
   8.2902,
   7.0686,
   6.3331,
   6.0955,
   6.0955,
   5.6776,
   5.5904,
   4.5229,
   5.1322,
   4.5229,
   4.4133,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(8.300133);
   Graph_Graph3005->SetMaximum(419.3356);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.77#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2418.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 72.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 247.2","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 14.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.7","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.1","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1657.6","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 530.6","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 136.1","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 275.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 12.8","F");

   ci = 1453;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3006[25] = {
   0.2133976,
   0.2574305,
   0.2380683,
   0.2480905,
   0.2400562,
   0.2393344,
   0.2387545,
   0.2592943,
   0.2422045,
   0.2347551,
   0.2640569,
   0.2528838,
   0.2468566,
   0.2323084,
   0.2395245,
   0.2429106,
   0.2584948,
   0.2579504,
   0.2625202,
   0.2673171,
   0.2571986,
   0.2916555,
   0.2324559,
   0.2859717,
   0.3563453};
   Double_t _fehx3006[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3006[25] = {
   0.2133976,
   0.2574305,
   0.2380683,
   0.2480905,
   0.2400562,
   0.2393344,
   0.2387545,
   0.2592943,
   0.2422045,
   0.2347551,
   0.2640569,
   0.2528838,
   0.2468566,
   0.2323084,
   0.2395245,
   0.2429106,
   0.2584948,
   0.2579504,
   0.2625202,
   0.2673171,
   0.2571986,
   0.2916555,
   0.2324559,
   0.2859717,
   0.3563453};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,99);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3007[25] = {
   0.2001782,
   0.2440348,
   0.2283594,
   0.2287148,
   0.2231486,
   0.223792,
   0.2255488,
   0.2334457,
   0.2292268,
   0.2143916,
   0.2283354,
   0.2143564,
   0.2289939,
   0.2114164,
   0.2141079,
   0.2205214,
   0.2165315,
   0.2253861,
   0.224133,
   0.2077855,
   0.2239845,
   0.2379972,
   0.2034014,
   0.242576,
   0.2853948};
   Double_t _fehx3007[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3007[25] = {
   0.2001782,
   0.2440348,
   0.2283594,
   0.2287148,
   0.2231486,
   0.223792,
   0.2255488,
   0.2334457,
   0.2292268,
   0.2143916,
   0.2283354,
   0.2143564,
   0.2289939,
   0.2114164,
   0.2141079,
   0.2205214,
   0.2165315,
   0.2253861,
   0.224133,
   0.2077855,
   0.2239845,
   0.2379972,
   0.2034014,
   0.242576,
   0.2853948};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,99);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3008[25] = {
   0.7941853,
   0.7502915,
   0.7491442,
   0.8042843,
   0.8972764,
   0.696829,
   0.7025043,
   0.7438126,
   0.7221339,
   0.7240358,
   0.815666,
   0.773601,
   0.8387031,
   0.7616954,
   0.6634427,
   0.7356224,
   0.7554921,
   0.9145838,
   0.7183577,
   0.7998793,
   0.7495982,
   0.8369236,
   0.6887046,
   0.996727,
   0.6554654};
   Double_t _felx3008[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3008[25] = {
   0.04168392,
   0.05486675,
   0.05284056,
   0.057596,
   0.06191795,
   0.05747349,
   0.05854202,
   0.06761933,
   0.07150191,
   0.07099755,
   0.08912289,
   0.08713899,
   0.1003042,
   0.09240997,
   0.09460564,
   0.117312,
   0.1252785,
   0.1516597,
   0.1281006,
   0.1449206,
   0.1690308,
   0.1655683,
   0.1552996,
   0.2305728,
   0.1904697};
   Double_t _fehx3008[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3008[25] = {
   0.04168392,
   0.05486675,
   0.05284056,
   0.057596,
   0.06191795,
   0.05747349,
   0.05854202,
   0.06761933,
   0.07150191,
   0.07099755,
   0.08721081,
   0.08521167,
   0.09794771,
   0.09020867,
   0.09195317,
   0.1136285,
   0.1211869,
   0.1467065,
   0.1235924,
   0.1397389,
   0.1614456,
   0.1590837,
   0.1483306,
   0.2199428,
   0.1792547};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0.3898283);
   Graph_Graph3008->SetMaximum(1.291837);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",25,0,90);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

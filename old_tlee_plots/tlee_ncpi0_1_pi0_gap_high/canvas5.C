#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 21:27:22 2022) by ROOT version 6.26/00
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
   pad1->Range(-7.692308,-10.58241,56.41026,1170.192);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__13->SetBinContent(1,529.1204);
   hmc__13->SetBinContent(2,230.4146);
   hmc__13->SetBinContent(3,211.9335);
   hmc__13->SetBinContent(4,205.4557);
   hmc__13->SetBinContent(5,187.6486);
   hmc__13->SetBinContent(6,159.3008);
   hmc__13->SetBinContent(7,164.9252);
   hmc__13->SetBinContent(8,129.9616);
   hmc__13->SetBinContent(9,125.8041);
   hmc__13->SetBinContent(10,110.0068);
   hmc__13->SetBinContent(11,95.63986);
   hmc__13->SetBinContent(12,86.13917);
   hmc__13->SetBinContent(13,69.36199);
   hmc__13->SetBinContent(14,63.18275);
   hmc__13->SetBinContent(15,63.03278);
   hmc__13->SetBinContent(16,61.90554);
   hmc__13->SetBinContent(17,59.60621);
   hmc__13->SetBinContent(18,49.61964);
   hmc__13->SetBinContent(19,43.12251);
   hmc__13->SetBinContent(20,35.14776);
   hmc__13->SetBinContent(21,368.3157);
   hmc__13->SetBinError(1,138.928);
   hmc__13->SetBinError(2,89.12358);
   hmc__13->SetBinError(3,84.14108);
   hmc__13->SetBinError(4,76.24078);
   hmc__13->SetBinError(5,71.84509);
   hmc__13->SetBinError(6,65.72208);
   hmc__13->SetBinError(7,60.94578);
   hmc__13->SetBinError(8,48.89954);
   hmc__13->SetBinError(9,48.11148);
   hmc__13->SetBinError(10,42.41233);
   hmc__13->SetBinError(11,39.54766);
   hmc__13->SetBinError(12,32.23769);
   hmc__13->SetBinError(13,29.28948);
   hmc__13->SetBinError(14,25.93838);
   hmc__13->SetBinError(15,27.19167);
   hmc__13->SetBinError(16,21.63494);
   hmc__13->SetBinError(17,23.01986);
   hmc__13->SetBinError(18,18.74096);
   hmc__13->SetBinError(19,17.01801);
   hmc__13->SetBinError(20,18.52687);
   hmc__13->SetBinError(21,111.1105);
   hmc__13->SetMinimum(-10.58241);
   hmc__13->SetMaximum(1111.153);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,50);
   hs5_stack_5->SetMinimum(-4.228303e-08);
   hs5_stack_5->SetMaximum(555.5765);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,9.088981);
   hbadmatch_stack_1->SetBinContent(2,1.869958);
   hbadmatch_stack_1->SetBinContent(3,3.35641);
   hbadmatch_stack_1->SetBinContent(4,2.918589);
   hbadmatch_stack_1->SetBinContent(5,4.598388);
   hbadmatch_stack_1->SetBinContent(6,2.62202);
   hbadmatch_stack_1->SetBinContent(7,3.845647);
   hbadmatch_stack_1->SetBinContent(8,2.205869);
   hbadmatch_stack_1->SetBinContent(9,1.881764);
   hbadmatch_stack_1->SetBinContent(10,1.996705);
   hbadmatch_stack_1->SetBinContent(11,3.140065);
   hbadmatch_stack_1->SetBinContent(12,0.714597);
   hbadmatch_stack_1->SetBinContent(13,2.654494);
   hbadmatch_stack_1->SetBinContent(14,1.819583);
   hbadmatch_stack_1->SetBinContent(15,2.075935);
   hbadmatch_stack_1->SetBinContent(16,1.493888);
   hbadmatch_stack_1->SetBinContent(17,4.213627);
   hbadmatch_stack_1->SetBinContent(18,3.42473);
   hbadmatch_stack_1->SetBinContent(19,0.5884556);
   hbadmatch_stack_1->SetBinContent(20,1.138344);
   hbadmatch_stack_1->SetBinContent(21,20.22676);
   hbadmatch_stack_1->SetBinError(1,1.579304);
   hbadmatch_stack_1->SetBinError(2,0.6668533);
   hbadmatch_stack_1->SetBinError(3,0.9532925);
   hbadmatch_stack_1->SetBinError(4,0.8383993);
   hbadmatch_stack_1->SetBinError(5,1.01813);
   hbadmatch_stack_1->SetBinError(6,0.8883091);
   hbadmatch_stack_1->SetBinError(7,0.9546745);
   hbadmatch_stack_1->SetBinError(8,0.960979);
   hbadmatch_stack_1->SetBinError(9,0.6050389);
   hbadmatch_stack_1->SetBinError(10,0.7182261);
   hbadmatch_stack_1->SetBinError(11,0.9073915);
   hbadmatch_stack_1->SetBinError(12,0.4403227);
   hbadmatch_stack_1->SetBinError(13,1.290829);
   hbadmatch_stack_1->SetBinError(14,0.7124373);
   hbadmatch_stack_1->SetBinError(15,0.8500008);
   hbadmatch_stack_1->SetBinError(16,0.623815);
   hbadmatch_stack_1->SetBinError(17,1.254955);
   hbadmatch_stack_1->SetBinError(18,2.053703);
   hbadmatch_stack_1->SetBinError(19,0.3397478);
   hbadmatch_stack_1->SetBinError(20,0.7040117);
   hbadmatch_stack_1->SetBinError(21,2.345743);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,68.90025);
   hext_stack_2->SetBinContent(2,9.368849);
   hext_stack_2->SetBinContent(3,11.63686);
   hext_stack_2->SetBinContent(4,16.48569);
   hext_stack_2->SetBinContent(5,10.25707);
   hext_stack_2->SetBinContent(6,6.978384);
   hext_stack_2->SetBinContent(7,12.50631);
   hext_stack_2->SetBinContent(8,9.089171);
   hext_stack_2->SetBinContent(9,9.392028);
   hext_stack_2->SetBinContent(10,13.02106);
   hext_stack_2->SetBinContent(11,5.986423);
   hext_stack_2->SetBinContent(12,6.124875);
   hext_stack_2->SetBinContent(13,5.486032);
   hext_stack_2->SetBinContent(14,6.710238);
   hext_stack_2->SetBinContent(15,4.841647);
   hext_stack_2->SetBinContent(16,9.105111);
   hext_stack_2->SetBinContent(17,10.45177);
   hext_stack_2->SetBinContent(18,6.463634);
   hext_stack_2->SetBinContent(19,11.83156);
   hext_stack_2->SetBinContent(20,4.214394);
   hext_stack_2->SetBinContent(21,38.04205);
   hext_stack_2->SetBinError(1,5.957329);
   hext_stack_2->SetBinError(2,2.096212);
   hext_stack_2->SetBinError(3,2.338176);
   hext_stack_2->SetBinError(4,2.790035);
   hext_stack_2->SetBinError(5,2.232945);
   hext_stack_2->SetBinError(6,1.673777);
   hext_stack_2->SetBinError(7,2.51521);
   hext_stack_2->SetBinError(8,1.88497);
   hext_stack_2->SetBinError(9,2.064449);
   hext_stack_2->SetBinError(10,2.466417);
   hext_stack_2->SetBinError(11,1.65925);
   hext_stack_2->SetBinError(12,1.828051);
   hext_stack_2->SetBinError(13,1.610521);
   hext_stack_2->SetBinError(14,1.795792);
   hext_stack_2->SetBinError(15,1.586957);
   hext_stack_2->SetBinError(16,2.225436);
   hext_stack_2->SetBinError(17,2.47048);
   hext_stack_2->SetBinError(18,1.744878);
   hext_stack_2->SetBinError(19,2.565988);
   hext_stack_2->SetBinError(20,1.305512);
   hext_stack_2->SetBinError(21,4.049246);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,3.947212);
   hdirt_stack_3->SetBinContent(2,1.718305);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.6514999);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.1651799);
   hdirt_stack_3->SetBinContent(7,0.5288571);
   hdirt_stack_3->SetBinContent(8,0.185975);
   hdirt_stack_3->SetBinContent(9,1.519078);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.3595223);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.3405387);
   hdirt_stack_3->SetBinContent(16,0.6002214);
   hdirt_stack_3->SetBinContent(17,0.5758626);
   hdirt_stack_3->SetBinContent(18,0.5570828);
   hdirt_stack_3->SetBinContent(21,3.757739);
   hdirt_stack_3->SetBinError(1,1.330485);
   hdirt_stack_3->SetBinError(2,0.7221086);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(4,0.3324499);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.1651799);
   hdirt_stack_3->SetBinError(7,0.3101058);
   hdirt_stack_3->SetBinError(8,0.185975);
   hdirt_stack_3->SetBinError(9,0.6989462);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2588156);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3381954);
   hdirt_stack_3->SetBinError(16,0.427823);
   hdirt_stack_3->SetBinError(17,0.3389606);
   hdirt_stack_3->SetBinError(18,0.4028472);
   hdirt_stack_3->SetBinError(21,0.9570205);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,30.88084);
   houtFV_stack_4->SetBinContent(2,10.72298);
   houtFV_stack_4->SetBinContent(3,10.6464);
   houtFV_stack_4->SetBinContent(4,9.826526);
   houtFV_stack_4->SetBinContent(5,11.49887);
   houtFV_stack_4->SetBinContent(6,7.095335);
   houtFV_stack_4->SetBinContent(7,12.07507);
   houtFV_stack_4->SetBinContent(8,11.97516);
   houtFV_stack_4->SetBinContent(9,8.294237);
   houtFV_stack_4->SetBinContent(10,7.865055);
   houtFV_stack_4->SetBinContent(11,8.398272);
   houtFV_stack_4->SetBinContent(12,8.011633);
   houtFV_stack_4->SetBinContent(13,4.29937);
   houtFV_stack_4->SetBinContent(14,4.017533);
   houtFV_stack_4->SetBinContent(15,5.877049);
   houtFV_stack_4->SetBinContent(16,4.954385);
   houtFV_stack_4->SetBinContent(17,5.438909);
   houtFV_stack_4->SetBinContent(18,3.849038);
   houtFV_stack_4->SetBinContent(19,3.960719);
   houtFV_stack_4->SetBinContent(20,1.941956);
   houtFV_stack_4->SetBinContent(21,31.44027);
   houtFV_stack_4->SetBinError(1,2.7617);
   houtFV_stack_4->SetBinError(2,1.59555);
   houtFV_stack_4->SetBinError(3,1.54604);
   houtFV_stack_4->SetBinError(4,1.497154);
   houtFV_stack_4->SetBinError(5,1.688115);
   houtFV_stack_4->SetBinError(6,1.281286);
   houtFV_stack_4->SetBinError(7,1.693175);
   houtFV_stack_4->SetBinError(8,1.782325);
   houtFV_stack_4->SetBinError(9,1.36152);
   houtFV_stack_4->SetBinError(10,1.521516);
   houtFV_stack_4->SetBinError(11,1.508947);
   houtFV_stack_4->SetBinError(12,1.486442);
   houtFV_stack_4->SetBinError(13,1.206612);
   houtFV_stack_4->SetBinError(14,0.9904424);
   houtFV_stack_4->SetBinError(15,1.179612);
   houtFV_stack_4->SetBinError(16,1.07844);
   houtFV_stack_4->SetBinError(17,1.182988);
   houtFV_stack_4->SetBinError(18,1.197387);
   houtFV_stack_4->SetBinError(19,1.009397);
   houtFV_stack_4->SetBinError(20,0.6691315);
   houtFV_stack_4->SetBinError(21,2.852363);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.90316);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08354614);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1035923);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4976704);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5974716);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2618702);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.06437642);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1640856);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.263487);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2153073);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1256462);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1408695);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2978544);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1263783);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.528081);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4281896);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05257109);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06063609);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2504226);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2480972);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2031099);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04590059);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1321719);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1430668);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1667974);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.10165);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1106578);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2000671);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06402);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2379008);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.149861);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9045935);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.08435);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8614851);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5996998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8559276);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5642503);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.591817);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5017644);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4441414);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6800731);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3586363);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1757777);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2455393);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3869528);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5561318);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2688565);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.06534888);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3350514);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.1725);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2618178);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2382047);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3096774);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2645508);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2294317);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2228887);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2061375);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1926481);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2259642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1814541);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2333086);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1308605);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07453909);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1365432);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1930092);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2673835);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1137952);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03933638);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2852789);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2722405);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,161.7849);
   hNCpi0inFVres_stack_7->SetBinContent(2,81.02891);
   hNCpi0inFVres_stack_7->SetBinContent(3,80.97499);
   hNCpi0inFVres_stack_7->SetBinContent(4,72.71107);
   hNCpi0inFVres_stack_7->SetBinContent(5,68.38955);
   hNCpi0inFVres_stack_7->SetBinContent(6,63.32996);
   hNCpi0inFVres_stack_7->SetBinContent(7,57.31503);
   hNCpi0inFVres_stack_7->SetBinContent(8,46.55501);
   hNCpi0inFVres_stack_7->SetBinContent(9,43.2914);
   hNCpi0inFVres_stack_7->SetBinContent(10,39.79155);
   hNCpi0inFVres_stack_7->SetBinContent(11,32.86252);
   hNCpi0inFVres_stack_7->SetBinContent(12,28.98543);
   hNCpi0inFVres_stack_7->SetBinContent(13,25.8417);
   hNCpi0inFVres_stack_7->SetBinContent(14,23.68087);
   hNCpi0inFVres_stack_7->SetBinContent(15,21.54843);
   hNCpi0inFVres_stack_7->SetBinContent(16,19.66876);
   hNCpi0inFVres_stack_7->SetBinContent(17,14.93655);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.06324);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.34718);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.78556);
   hNCpi0inFVres_stack_7->SetBinContent(21,97.77972);
   hNCpi0inFVres_stack_7->SetBinError(1,4.100907);
   hNCpi0inFVres_stack_7->SetBinError(2,2.622878);
   hNCpi0inFVres_stack_7->SetBinError(3,2.62446);
   hNCpi0inFVres_stack_7->SetBinError(4,2.447107);
   hNCpi0inFVres_stack_7->SetBinError(5,2.426464);
   hNCpi0inFVres_stack_7->SetBinError(6,2.506376);
   hNCpi0inFVres_stack_7->SetBinError(7,2.289752);
   hNCpi0inFVres_stack_7->SetBinError(8,2.015793);
   hNCpi0inFVres_stack_7->SetBinError(9,1.878936);
   hNCpi0inFVres_stack_7->SetBinError(10,1.958124);
   hNCpi0inFVres_stack_7->SetBinError(11,1.645721);
   hNCpi0inFVres_stack_7->SetBinError(12,1.710291);
   hNCpi0inFVres_stack_7->SetBinError(13,1.481733);
   hNCpi0inFVres_stack_7->SetBinError(14,1.637466);
   hNCpi0inFVres_stack_7->SetBinError(15,1.423312);
   hNCpi0inFVres_stack_7->SetBinError(16,1.391511);
   hNCpi0inFVres_stack_7->SetBinError(17,1.090967);
   hNCpi0inFVres_stack_7->SetBinError(18,1.261334);
   hNCpi0inFVres_stack_7->SetBinError(19,0.966373);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9545431);
   hNCpi0inFVres_stack_7->SetBinError(21,3.18248);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,44.94146);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.95509);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.22118);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.83231);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.01266);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.78816);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.85327);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.6014);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.29875);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.497209);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.853848);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.879555);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.038309);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.314964);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.467317);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.318728);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.278768);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.759566);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.28323);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.288401);
   hNCpi0inFVdis_stack_8->SetBinContent(21,22.01446);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.447337);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.516081);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.317787);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.540178);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.385818);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.198329);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.174505);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.16021);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9787565);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8240495);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8256687);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.117595);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9816079);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6409343);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.679504);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6325938);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7747435);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4033464);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6445391);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3798349);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.562556);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.164166);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05293922);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1177733);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.150234);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1302849);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.0435647);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07223304);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1330957);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02577893);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,77.76773);
   hCCpi0inFV_stack_10->SetBinContent(2,42.72577);
   hCCpi0inFV_stack_10->SetBinContent(3,32.21884);
   hCCpi0inFV_stack_10->SetBinContent(4,39.09946);
   hCCpi0inFV_stack_10->SetBinContent(5,33.44214);
   hCCpi0inFV_stack_10->SetBinContent(6,29.55125);
   hCCpi0inFV_stack_10->SetBinContent(7,27.79758);
   hCCpi0inFV_stack_10->SetBinContent(8,22.30776);
   hCCpi0inFV_stack_10->SetBinContent(9,27.31218);
   hCCpi0inFV_stack_10->SetBinContent(10,20.86709);
   hCCpi0inFV_stack_10->SetBinContent(11,20.79572);
   hCCpi0inFV_stack_10->SetBinContent(12,14.67332);
   hCCpi0inFV_stack_10->SetBinContent(13,11.0965);
   hCCpi0inFV_stack_10->SetBinContent(14,9.711538);
   hCCpi0inFV_stack_10->SetBinContent(15,11.41178);
   hCCpi0inFV_stack_10->SetBinContent(16,10.00458);
   hCCpi0inFV_stack_10->SetBinContent(17,9.405433);
   hCCpi0inFV_stack_10->SetBinContent(18,6.789612);
   hCCpi0inFV_stack_10->SetBinContent(19,5.056864);
   hCCpi0inFV_stack_10->SetBinContent(20,6.594023);
   hCCpi0inFV_stack_10->SetBinContent(21,57.26315);
   hCCpi0inFV_stack_10->SetBinError(1,4.457107);
   hCCpi0inFV_stack_10->SetBinError(2,3.314558);
   hCCpi0inFV_stack_10->SetBinError(3,2.806035);
   hCCpi0inFV_stack_10->SetBinError(4,3.185548);
   hCCpi0inFV_stack_10->SetBinError(5,2.909712);
   hCCpi0inFV_stack_10->SetBinError(6,2.712641);
   hCCpi0inFV_stack_10->SetBinError(7,2.625564);
   hCCpi0inFV_stack_10->SetBinError(8,2.345801);
   hCCpi0inFV_stack_10->SetBinError(9,2.642951);
   hCCpi0inFV_stack_10->SetBinError(10,2.262112);
   hCCpi0inFV_stack_10->SetBinError(11,2.314177);
   hCCpi0inFV_stack_10->SetBinError(12,1.930463);
   hCCpi0inFV_stack_10->SetBinError(13,1.617449);
   hCCpi0inFV_stack_10->SetBinError(14,1.550042);
   hCCpi0inFV_stack_10->SetBinError(15,1.651038);
   hCCpi0inFV_stack_10->SetBinError(16,1.599547);
   hCCpi0inFV_stack_10->SetBinError(17,1.561849);
   hCCpi0inFV_stack_10->SetBinError(18,1.302903);
   hCCpi0inFV_stack_10->SetBinError(19,1.090798);
   hCCpi0inFV_stack_10->SetBinError(20,1.317088);
   hCCpi0inFV_stack_10->SetBinError(21,3.82431);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,53.31068);
   hNCinFV_stack_11->SetBinContent(2,21.12668);
   hNCinFV_stack_11->SetBinContent(3,21.37705);
   hNCinFV_stack_11->SetBinContent(4,14.86916);
   hNCinFV_stack_11->SetBinContent(5,19.57204);
   hNCinFV_stack_11->SetBinContent(6,12.01961);
   hNCinFV_stack_11->SetBinContent(7,15.35597);
   hNCinFV_stack_11->SetBinContent(8,11.78918);
   hNCinFV_stack_11->SetBinContent(9,8.836155);
   hNCinFV_stack_11->SetBinContent(10,9.347402);
   hNCinFV_stack_11->SetBinContent(11,8.92526);
   hNCinFV_stack_11->SetBinContent(12,7.436018);
   hNCinFV_stack_11->SetBinContent(13,6.447488);
   hNCinFV_stack_11->SetBinContent(14,5.040843);
   hNCinFV_stack_11->SetBinContent(15,6.344852);
   hNCinFV_stack_11->SetBinContent(16,7.661939);
   hNCinFV_stack_11->SetBinContent(17,6.113129);
   hNCinFV_stack_11->SetBinContent(18,4.203561);
   hNCinFV_stack_11->SetBinContent(19,2.515355);
   hNCinFV_stack_11->SetBinContent(20,2.938775);
   hNCinFV_stack_11->SetBinContent(21,38.184);
   hNCinFV_stack_11->SetBinError(1,3.925528);
   hNCinFV_stack_11->SetBinError(2,2.65289);
   hNCinFV_stack_11->SetBinError(3,2.771438);
   hNCinFV_stack_11->SetBinError(4,2.18474);
   hNCinFV_stack_11->SetBinError(5,2.5024);
   hNCinFV_stack_11->SetBinError(6,1.797506);
   hNCinFV_stack_11->SetBinError(7,2.189411);
   hNCinFV_stack_11->SetBinError(8,1.761143);
   hNCinFV_stack_11->SetBinError(9,1.475168);
   hNCinFV_stack_11->SetBinError(10,1.581791);
   hNCinFV_stack_11->SetBinError(11,1.507645);
   hNCinFV_stack_11->SetBinError(12,1.666731);
   hNCinFV_stack_11->SetBinError(13,1.422076);
   hNCinFV_stack_11->SetBinError(14,1.078639);
   hNCinFV_stack_11->SetBinError(15,1.483462);
   hNCinFV_stack_11->SetBinError(16,1.937179);
   hNCinFV_stack_11->SetBinError(17,1.285236);
   hNCinFV_stack_11->SetBinError(18,1.113203);
   hNCinFV_stack_11->SetBinError(19,0.8227068);
   hNCinFV_stack_11->SetBinError(20,0.7653003);
   hNCinFV_stack_11->SetBinError(21,3.388444);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,63.48532);
   hnumuCCinFV_stack_12->SetBinContent(2,41.1473);
   hnumuCCinFV_stack_12->SetBinContent(3,33.72472);
   hnumuCCinFV_stack_12->SetBinContent(4,29.79966);
   hnumuCCinFV_stack_12->SetBinContent(5,21.68094);
   hnumuCCinFV_stack_12->SetBinContent(6,21.29043);
   hnumuCCinFV_stack_12->SetBinContent(7,22.32491);
   hnumuCCinFV_stack_12->SetBinContent(8,13.54294);
   hnumuCCinFV_stack_12->SetBinContent(9,14.3442);
   hnumuCCinFV_stack_12->SetBinContent(10,8.675819);
   hnumuCCinFV_stack_12->SetBinContent(11,6.941895);
   hnumuCCinFV_stack_12->SetBinContent(12,11.405);
   hnumuCCinFV_stack_12->SetBinContent(13,6.744826);
   hnumuCCinFV_stack_12->SetBinContent(14,7.025221);
   hnumuCCinFV_stack_12->SetBinContent(15,6.038321);
   hnumuCCinFV_stack_12->SetBinContent(16,4.455182);
   hnumuCCinFV_stack_12->SetBinContent(17,3.169744);
   hnumuCCinFV_stack_12->SetBinContent(18,6.408739);
   hnumuCCinFV_stack_12->SetBinContent(19,3.711208);
   hnumuCCinFV_stack_12->SetBinContent(20,3.944954);
   hnumuCCinFV_stack_12->SetBinContent(21,56.84394);
   hnumuCCinFV_stack_12->SetBinError(1,4.64524);
   hnumuCCinFV_stack_12->SetBinError(2,3.898814);
   hnumuCCinFV_stack_12->SetBinError(3,3.560745);
   hnumuCCinFV_stack_12->SetBinError(4,4.042173);
   hnumuCCinFV_stack_12->SetBinError(5,2.531598);
   hnumuCCinFV_stack_12->SetBinError(6,2.509785);
   hnumuCCinFV_stack_12->SetBinError(7,2.989299);
   hnumuCCinFV_stack_12->SetBinError(8,2.009438);
   hnumuCCinFV_stack_12->SetBinError(9,2.401483);
   hnumuCCinFV_stack_12->SetBinError(10,1.455742);
   hnumuCCinFV_stack_12->SetBinError(11,1.442773);
   hnumuCCinFV_stack_12->SetBinError(12,1.95697);
   hnumuCCinFV_stack_12->SetBinError(13,1.290539);
   hnumuCCinFV_stack_12->SetBinError(14,1.526353);
   hnumuCCinFV_stack_12->SetBinError(15,1.261682);
   hnumuCCinFV_stack_12->SetBinError(16,1.052498);
   hnumuCCinFV_stack_12->SetBinError(17,0.8755129);
   hnumuCCinFV_stack_12->SetBinError(18,1.338661);
   hnumuCCinFV_stack_12->SetBinError(19,0.9535323);
   hnumuCCinFV_stack_12->SetBinError(20,1.055867);
   hnumuCCinFV_stack_12->SetBinError(21,4.05078);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,11.92558);
   hnueCCinFV_stack_13->SetBinContent(2,0.5983942);
   hnueCCinFV_stack_13->SetBinContent(3,1.432761);
   hnueCCinFV_stack_13->SetBinContent(4,1.32943);
   hnueCCinFV_stack_13->SetBinContent(5,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(7,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(11,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,1.157431);
   hnueCCinFV_stack_13->SetBinContent(21,1.026638);
   hnueCCinFV_stack_13->SetBinError(1,2.284391);
   hnueCCinFV_stack_13->SetBinError(2,0.3523395);
   hnueCCinFV_stack_13->SetBinError(3,0.770283);
   hnueCCinFV_stack_13->SetBinError(4,0.61171);
   hnueCCinFV_stack_13->SetBinError(5,0.438694);
   hnueCCinFV_stack_13->SetBinError(7,0.3160204);
   hnueCCinFV_stack_13->SetBinError(11,0.4139598);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.4243666);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.157431);
   hnueCCinFV_stack_13->SetBinError(21,0.5370611);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__14->SetBinContent(1,529.1204);
   hmcerror__14->SetBinContent(2,230.4146);
   hmcerror__14->SetBinContent(3,211.9335);
   hmcerror__14->SetBinContent(4,205.4557);
   hmcerror__14->SetBinContent(5,187.6486);
   hmcerror__14->SetBinContent(6,159.3008);
   hmcerror__14->SetBinContent(7,164.9252);
   hmcerror__14->SetBinContent(8,129.9616);
   hmcerror__14->SetBinContent(9,125.8041);
   hmcerror__14->SetBinContent(10,110.0068);
   hmcerror__14->SetBinContent(11,95.63986);
   hmcerror__14->SetBinContent(12,86.13917);
   hmcerror__14->SetBinContent(13,69.36199);
   hmcerror__14->SetBinContent(14,63.18275);
   hmcerror__14->SetBinContent(15,63.03278);
   hmcerror__14->SetBinContent(16,61.90554);
   hmcerror__14->SetBinContent(17,59.60621);
   hmcerror__14->SetBinContent(18,49.61964);
   hmcerror__14->SetBinContent(19,43.12251);
   hmcerror__14->SetBinContent(20,35.14776);
   hmcerror__14->SetBinContent(21,368.3157);
   hmcerror__14->SetBinError(1,138.928);
   hmcerror__14->SetBinError(2,89.12358);
   hmcerror__14->SetBinError(3,84.14108);
   hmcerror__14->SetBinError(4,76.24078);
   hmcerror__14->SetBinError(5,71.84509);
   hmcerror__14->SetBinError(6,65.72208);
   hmcerror__14->SetBinError(7,60.94578);
   hmcerror__14->SetBinError(8,48.89954);
   hmcerror__14->SetBinError(9,48.11148);
   hmcerror__14->SetBinError(10,42.41233);
   hmcerror__14->SetBinError(11,39.54766);
   hmcerror__14->SetBinError(12,32.23769);
   hmcerror__14->SetBinError(13,29.28948);
   hmcerror__14->SetBinError(14,25.93838);
   hmcerror__14->SetBinError(15,27.19167);
   hmcerror__14->SetBinError(16,21.63494);
   hmcerror__14->SetBinError(17,23.01986);
   hmcerror__14->SetBinError(18,18.74096);
   hmcerror__14->SetBinError(19,17.01801);
   hmcerror__14->SetBinError(20,18.52687);
   hmcerror__14->SetBinError(21,111.1105);
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
   
   Double_t _fx3017[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3017[20] = {
   406,
   193,
   180,
   183,
   163,
   166,
   135,
   129,
   124,
   108,
   93,
   78,
   54,
   64,
   47,
   42,
   48,
   49,
   36,
   31};
   Double_t _felx3017[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3017[20] = {
   20.14944,
   13.89244,
   13.41641,
   13.52775,
   12.76715,
   12.8841,
   11.61895,
   11.35782,
   11.13553,
   10.3923,
   9.7658,
   8.9562,
   7.4785,
   8.1273,
   6.9882,
   6.6155,
   7.0604,
   7.1318,
   6.1381,
   5.7094};
   Double_t _fehx3017[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3017[20] = {
   20.14944,
   13.89244,
   13.41641,
   13.52775,
   12.76715,
   12.8841,
   11.61895,
   11.35782,
   11.13553,
   10.3923,
   9.564,
   8.7542,
   7.275,
   7.9246,
   6.7839,
   6.4104,
   6.8561,
   6.9277,
   5.9318,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,55);
   Graph_Graph3017->SetMinimum(22.76154);
   Graph_Graph3017->SetMaximum(466.2353);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2329.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 238.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 12.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 171.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  919.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  213.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 458.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 245.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 329.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.4","F");

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
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3018[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3018[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3018[20] = {
   0.2625641,
   0.3867967,
   0.3970164,
   0.3710813,
   0.3828704,
   0.4125659,
   0.3695359,
   0.3762614,
   0.3824318,
   0.3855429,
   0.4135061,
   0.3742513,
   0.4222699,
   0.4105294,
   0.4313893,
   0.3494831,
   0.386199,
   0.3776924,
   0.3946432,
   0.527114};
   Double_t _fehx3018[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3018[20] = {
   0.2625641,
   0.3867967,
   0.3970164,
   0.3710813,
   0.3828704,
   0.4125659,
   0.3695359,
   0.3762614,
   0.3824318,
   0.3855429,
   0.4135061,
   0.3742513,
   0.4222699,
   0.4105294,
   0.4313893,
   0.3494831,
   0.386199,
   0.3776924,
   0.3946432,
   0.527114};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,55);
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
   
   Double_t _fx3019[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3019[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3019[20] = {
   0.2390819,
   0.3713288,
   0.3644942,
   0.3543908,
   0.3559965,
   0.3782119,
   0.3422822,
   0.342097,
   0.3555577,
   0.3447137,
   0.3239289,
   0.3419985,
   0.344781,
   0.3378409,
   0.3411866,
   0.2950575,
   0.2914981,
   0.3109448,
   0.2918816,
   0.3358568};
   Double_t _fehx3019[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3019[20] = {
   0.2390819,
   0.3713288,
   0.3644942,
   0.3543908,
   0.3559965,
   0.3782119,
   0.3422822,
   0.342097,
   0.3555577,
   0.3447137,
   0.3239289,
   0.3419985,
   0.344781,
   0.3378409,
   0.3411866,
   0.2950575,
   0.2914981,
   0.3109448,
   0.2918816,
   0.3358568};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,55);
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
   
   Double_t _fx3020[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3020[20] = {
   0.7673112,
   0.8376207,
   0.8493229,
   0.8907028,
   0.8686448,
   1.042054,
   0.8185529,
   0.9926008,
   0.9856597,
   0.9817576,
   0.9723979,
   0.9055114,
   0.7785244,
   1.012935,
   0.7456437,
   0.678453,
   0.8052852,
   0.9875121,
   0.8348308,
   0.8819908};
   Double_t _felx3020[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3020[20] = {
   0.03808101,
   0.06029326,
   0.06330479,
   0.06584265,
   0.06803751,
   0.08087905,
   0.07044982,
   0.08739363,
   0.08851486,
   0.09446967,
   0.1021101,
   0.1039736,
   0.1078184,
   0.1286316,
   0.1108661,
   0.1068644,
   0.1184507,
   0.1437294,
   0.142341,
   0.1624399};
   Double_t _fehx3020[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3020[20] = {
   0.03808101,
   0.06029326,
   0.06330479,
   0.06584265,
   0.06803751,
   0.08087905,
   0.07044982,
   0.08739363,
   0.08851486,
   0.09446967,
   0.1000001,
   0.1016286,
   0.1048845,
   0.1254235,
   0.1076249,
   0.1035513,
   0.1150233,
   0.1396161,
   0.1375569,
   0.1565306};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,55);
   Graph_Graph3020->SetMinimum(0.5149116);
   Graph_Graph3020->SetMaximum(1.195035);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

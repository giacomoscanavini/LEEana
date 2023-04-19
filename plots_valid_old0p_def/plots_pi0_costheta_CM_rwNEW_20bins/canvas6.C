#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Feb 17 23:12:06 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1538462,-8,1.128205,884.6316);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__16->SetBinContent(1,121.0427);
   hmc__16->SetBinContent(2,107.0541);
   hmc__16->SetBinContent(3,104.3786);
   hmc__16->SetBinContent(4,116.1968);
   hmc__16->SetBinContent(5,114.6762);
   hmc__16->SetBinContent(6,109.4185);
   hmc__16->SetBinContent(7,104.7939);
   hmc__16->SetBinContent(8,118.1447);
   hmc__16->SetBinContent(9,126.9256);
   hmc__16->SetBinContent(10,122.7864);
   hmc__16->SetBinContent(11,130.1854);
   hmc__16->SetBinContent(12,134.9877);
   hmc__16->SetBinContent(13,140.0039);
   hmc__16->SetBinContent(14,132.5859);
   hmc__16->SetBinContent(15,144.1633);
   hmc__16->SetBinContent(16,152.2992);
   hmc__16->SetBinContent(17,170.2727);
   hmc__16->SetBinContent(18,188.3714);
   hmc__16->SetBinContent(19,222.955);
   hmc__16->SetBinContent(20,384.7535);
   hmc__16->SetBinContent(21,0.1115999);
   hmc__16->SetBinError(1,39.44499);
   hmc__16->SetBinError(2,35.91992);
   hmc__16->SetBinError(3,31.85367);
   hmc__16->SetBinError(4,34.14639);
   hmc__16->SetBinError(5,31.53341);
   hmc__16->SetBinError(6,31.53166);
   hmc__16->SetBinError(7,34.80794);
   hmc__16->SetBinError(8,30.07759);
   hmc__16->SetBinError(9,36.10409);
   hmc__16->SetBinError(10,32.65824);
   hmc__16->SetBinError(11,35.22021);
   hmc__16->SetBinError(12,33.86525);
   hmc__16->SetBinError(13,39.63064);
   hmc__16->SetBinError(14,45.15067);
   hmc__16->SetBinError(15,39.61436);
   hmc__16->SetBinError(16,36.28093);
   hmc__16->SetBinError(17,46.13532);
   hmc__16->SetBinError(18,47.91287);
   hmc__16->SetBinError(19,58.75015);
   hmc__16->SetBinError(20,89.86898);
   hmc__16->SetBinError(21,0.4781761);
   hmc__16->SetMinimum(-8);
   hmc__16->SetMaximum(840);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,1);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(403.9912);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,2.898993);
   hbadmatch_stack_1->SetBinContent(2,5.138104);
   hbadmatch_stack_1->SetBinContent(3,2.666037);
   hbadmatch_stack_1->SetBinContent(4,3.551444);
   hbadmatch_stack_1->SetBinContent(5,3.508472);
   hbadmatch_stack_1->SetBinContent(6,1.82112);
   hbadmatch_stack_1->SetBinContent(7,3.17933);
   hbadmatch_stack_1->SetBinContent(8,3.414087);
   hbadmatch_stack_1->SetBinContent(9,2.592498);
   hbadmatch_stack_1->SetBinContent(10,3.217977);
   hbadmatch_stack_1->SetBinContent(11,3.296869);
   hbadmatch_stack_1->SetBinContent(12,2.404742);
   hbadmatch_stack_1->SetBinContent(13,2.61686);
   hbadmatch_stack_1->SetBinContent(14,2.300569);
   hbadmatch_stack_1->SetBinContent(15,4.097465);
   hbadmatch_stack_1->SetBinContent(16,2.909173);
   hbadmatch_stack_1->SetBinContent(17,3.221154);
   hbadmatch_stack_1->SetBinContent(18,3.397748);
   hbadmatch_stack_1->SetBinContent(19,3.609818);
   hbadmatch_stack_1->SetBinContent(20,6.32041);
   hbadmatch_stack_1->SetBinError(1,0.8627062);
   hbadmatch_stack_1->SetBinError(2,1.164765);
   hbadmatch_stack_1->SetBinError(3,0.8010227);
   hbadmatch_stack_1->SetBinError(4,0.9809095);
   hbadmatch_stack_1->SetBinError(5,0.9790912);
   hbadmatch_stack_1->SetBinError(6,0.7272163);
   hbadmatch_stack_1->SetBinError(7,0.8779761);
   hbadmatch_stack_1->SetBinError(8,0.9453253);
   hbadmatch_stack_1->SetBinError(9,1.733367);
   hbadmatch_stack_1->SetBinError(10,0.9618638);
   hbadmatch_stack_1->SetBinError(11,0.9981633);
   hbadmatch_stack_1->SetBinError(12,0.8377641);
   hbadmatch_stack_1->SetBinError(13,0.8671649);
   hbadmatch_stack_1->SetBinError(14,0.7071359);
   hbadmatch_stack_1->SetBinError(15,1.086239);
   hbadmatch_stack_1->SetBinError(16,0.8745903);
   hbadmatch_stack_1->SetBinError(17,0.9222923);
   hbadmatch_stack_1->SetBinError(18,1.732293);
   hbadmatch_stack_1->SetBinError(19,1.048057);
   hbadmatch_stack_1->SetBinError(20,1.578869);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,10.61182);
   hext_stack_2->SetBinContent(2,10.99524);
   hext_stack_2->SetBinContent(3,5.116974);
   hext_stack_2->SetBinContent(4,7.794353);
   hext_stack_2->SetBinContent(5,7.690611);
   hext_stack_2->SetBinContent(6,7.556567);
   hext_stack_2->SetBinContent(7,5.8292);
   hext_stack_2->SetBinContent(8,18.63118);
   hext_stack_2->SetBinContent(9,13.84862);
   hext_stack_2->SetBinContent(10,9.227624);
   hext_stack_2->SetBinContent(11,7.22058);
   hext_stack_2->SetBinContent(12,18.61682);
   hext_stack_2->SetBinContent(13,17.30329);
   hext_stack_2->SetBinContent(14,9.954212);
   hext_stack_2->SetBinContent(15,9.376029);
   hext_stack_2->SetBinContent(16,17.77609);
   hext_stack_2->SetBinContent(17,19.1184);
   hext_stack_2->SetBinContent(18,22.78655);
   hext_stack_2->SetBinContent(19,20.71167);
   hext_stack_2->SetBinContent(20,38.15896);
   hext_stack_2->SetBinError(1,2.181265);
   hext_stack_2->SetBinError(2,2.248421);
   hext_stack_2->SetBinError(3,1.376188);
   hext_stack_2->SetBinError(4,1.67208);
   hext_stack_2->SetBinError(5,1.827394);
   hext_stack_2->SetBinError(6,1.698773);
   hext_stack_2->SetBinError(7,1.559401);
   hext_stack_2->SetBinError(8,3.109349);
   hext_stack_2->SetBinError(9,2.451827);
   hext_stack_2->SetBinError(10,2.035134);
   hext_stack_2->SetBinError(11,1.687209);
   hext_stack_2->SetBinError(12,3.173398);
   hext_stack_2->SetBinError(13,2.872293);
   hext_stack_2->SetBinError(14,2.06814);
   hext_stack_2->SetBinError(15,2.047658);
   hext_stack_2->SetBinError(16,2.899385);
   hext_stack_2->SetBinError(17,2.844575);
   hext_stack_2->SetBinError(18,3.343676);
   hext_stack_2->SetBinError(19,3.069622);
   hext_stack_2->SetBinError(20,4.193883);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,0.7713597);
   hdirt_stack_3->SetBinContent(2,1.178659);
   hdirt_stack_3->SetBinContent(3,1.517323);
   hdirt_stack_3->SetBinContent(4,0.9957241);
   hdirt_stack_3->SetBinContent(5,1.728496);
   hdirt_stack_3->SetBinContent(6,1.987548);
   hdirt_stack_3->SetBinContent(7,1.546995);
   hdirt_stack_3->SetBinContent(8,0.9695399);
   hdirt_stack_3->SetBinContent(9,1.674545);
   hdirt_stack_3->SetBinContent(10,1.5096);
   hdirt_stack_3->SetBinContent(11,1.14619);
   hdirt_stack_3->SetBinContent(12,1.174132);
   hdirt_stack_3->SetBinContent(13,2.908251);
   hdirt_stack_3->SetBinContent(14,1.489913);
   hdirt_stack_3->SetBinContent(15,1.423821);
   hdirt_stack_3->SetBinContent(16,1.761608);
   hdirt_stack_3->SetBinContent(17,1.941366);
   hdirt_stack_3->SetBinContent(18,3.939352);
   hdirt_stack_3->SetBinContent(19,2.798549);
   hdirt_stack_3->SetBinContent(20,5.344899);
   hdirt_stack_3->SetBinError(1,0.352378);
   hdirt_stack_3->SetBinError(2,0.5492875);
   hdirt_stack_3->SetBinError(3,0.7206518);
   hdirt_stack_3->SetBinError(4,0.4548573);
   hdirt_stack_3->SetBinError(5,0.6907024);
   hdirt_stack_3->SetBinError(6,0.8023851);
   hdirt_stack_3->SetBinError(7,0.7377565);
   hdirt_stack_3->SetBinError(8,0.4464217);
   hdirt_stack_3->SetBinError(9,0.6713382);
   hdirt_stack_3->SetBinError(10,0.6550989);
   hdirt_stack_3->SetBinError(11,0.5715167);
   hdirt_stack_3->SetBinError(12,0.6071032);
   hdirt_stack_3->SetBinError(13,1.294633);
   hdirt_stack_3->SetBinError(14,0.5866508);
   hdirt_stack_3->SetBinError(15,0.6425013);
   hdirt_stack_3->SetBinError(16,0.6852116);
   hdirt_stack_3->SetBinError(17,0.7771628);
   hdirt_stack_3->SetBinError(18,0.9489832);
   hdirt_stack_3->SetBinError(19,0.9605871);
   hdirt_stack_3->SetBinError(20,1.173184);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,8.395153);
   houtFV_stack_4->SetBinContent(2,7.403993);
   houtFV_stack_4->SetBinContent(3,7.717093);
   houtFV_stack_4->SetBinContent(4,11.91078);
   houtFV_stack_4->SetBinContent(5,9.379881);
   houtFV_stack_4->SetBinContent(6,10.65211);
   houtFV_stack_4->SetBinContent(7,11.6914);
   houtFV_stack_4->SetBinContent(8,9.483141);
   houtFV_stack_4->SetBinContent(9,11.93354);
   houtFV_stack_4->SetBinContent(10,12.60712);
   houtFV_stack_4->SetBinContent(11,12.21602);
   houtFV_stack_4->SetBinContent(12,11.54979);
   houtFV_stack_4->SetBinContent(13,12.86021);
   houtFV_stack_4->SetBinContent(14,13.3309);
   houtFV_stack_4->SetBinContent(15,16.7919);
   houtFV_stack_4->SetBinContent(16,17.45484);
   houtFV_stack_4->SetBinContent(17,15.77047);
   houtFV_stack_4->SetBinContent(18,21.44164);
   houtFV_stack_4->SetBinContent(19,27.6936);
   houtFV_stack_4->SetBinContent(20,51.86821);
   houtFV_stack_4->SetBinError(1,1.399621);
   houtFV_stack_4->SetBinError(2,1.359537);
   houtFV_stack_4->SetBinError(3,1.366221);
   houtFV_stack_4->SetBinError(4,1.766143);
   houtFV_stack_4->SetBinError(5,1.533899);
   houtFV_stack_4->SetBinError(6,1.666242);
   houtFV_stack_4->SetBinError(7,1.672232);
   houtFV_stack_4->SetBinError(8,1.553117);
   houtFV_stack_4->SetBinError(9,1.74779);
   houtFV_stack_4->SetBinError(10,1.819196);
   houtFV_stack_4->SetBinError(11,1.738545);
   houtFV_stack_4->SetBinError(12,1.708242);
   houtFV_stack_4->SetBinError(13,1.795212);
   houtFV_stack_4->SetBinError(14,1.82971);
   houtFV_stack_4->SetBinError(15,2.096032);
   houtFV_stack_4->SetBinError(16,2.053837);
   houtFV_stack_4->SetBinError(17,2.030159);
   houtFV_stack_4->SetBinError(18,2.270326);
   houtFV_stack_4->SetBinError(19,2.620533);
   houtFV_stack_4->SetBinError(20,3.588598);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.485524);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.355898);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.345688);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.538244);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.594212);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.45388);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.115607);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.413026);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.86317);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.76286);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.731552);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.071424);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.908096);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.558509);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.229614);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.211251);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.225949);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.067446);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,7.128822);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,12.15898);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6533269);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4939998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5978513);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4783893);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.513003);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4899121);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7359716);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4675544);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6458371);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.629355);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5241978);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6657197);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7386105);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6665471);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7831147);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6066829);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6860656);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8098686);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9564408);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.194265);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8502901);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.297026);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3309054);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4329789);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1506776);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,47.00372);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.97994);
   hNCpi0inFVres_stack_7->SetBinContent(3,42.3849);
   hNCpi0inFVres_stack_7->SetBinContent(4,44.14861);
   hNCpi0inFVres_stack_7->SetBinContent(5,46.32746);
   hNCpi0inFVres_stack_7->SetBinContent(6,44.50632);
   hNCpi0inFVres_stack_7->SetBinContent(7,43.94385);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.2163);
   hNCpi0inFVres_stack_7->SetBinContent(9,49.32343);
   hNCpi0inFVres_stack_7->SetBinContent(10,53.54365);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.63655);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.79358);
   hNCpi0inFVres_stack_7->SetBinContent(13,53.42158);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.03791);
   hNCpi0inFVres_stack_7->SetBinContent(15,57.90268);
   hNCpi0inFVres_stack_7->SetBinContent(16,61.70526);
   hNCpi0inFVres_stack_7->SetBinContent(17,65.10474);
   hNCpi0inFVres_stack_7->SetBinContent(18,72.07951);
   hNCpi0inFVres_stack_7->SetBinContent(19,85.78005);
   hNCpi0inFVres_stack_7->SetBinContent(20,145.9774);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,2.270173);
   hNCpi0inFVres_stack_7->SetBinError(2,2.051569);
   hNCpi0inFVres_stack_7->SetBinError(3,2.063235);
   hNCpi0inFVres_stack_7->SetBinError(4,2.148983);
   hNCpi0inFVres_stack_7->SetBinError(5,2.199169);
   hNCpi0inFVres_stack_7->SetBinError(6,2.15805);
   hNCpi0inFVres_stack_7->SetBinError(7,2.168381);
   hNCpi0inFVres_stack_7->SetBinError(8,2.119195);
   hNCpi0inFVres_stack_7->SetBinError(9,2.329462);
   hNCpi0inFVres_stack_7->SetBinError(10,2.428177);
   hNCpi0inFVres_stack_7->SetBinError(11,2.363987);
   hNCpi0inFVres_stack_7->SetBinError(12,2.370564);
   hNCpi0inFVres_stack_7->SetBinError(13,2.405321);
   hNCpi0inFVres_stack_7->SetBinError(14,2.427227);
   hNCpi0inFVres_stack_7->SetBinError(15,2.439158);
   hNCpi0inFVres_stack_7->SetBinError(16,2.578535);
   hNCpi0inFVres_stack_7->SetBinError(17,2.627504);
   hNCpi0inFVres_stack_7->SetBinError(18,2.791612);
   hNCpi0inFVres_stack_7->SetBinError(19,3.018335);
   hNCpi0inFVres_stack_7->SetBinError(20,3.967889);
   hNCpi0inFVres_stack_7->SetBinError(21,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.216834);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.69147);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.12923);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.603867);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.807871);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.004844);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.51235);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.833779);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.05591);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.769761);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.37552);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.28362);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.901388);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.01299);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.26441);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.79934);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.08938);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.98701);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.55688);
   hNCpi0inFVdis_stack_8->SetBinContent(20,27.33248);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9776704);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.017148);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9376725);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9787648);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8365029);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9424684);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8139829);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8608099);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.061463);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9013041);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.039073);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.199711);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.048427);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.049911);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.108603);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.151794);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.113682);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.300483);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.219606);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.70576);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,18.35874);
   hCCpi0inFV_stack_10->SetBinContent(2,13.76805);
   hCCpi0inFV_stack_10->SetBinContent(3,17.07194);
   hCCpi0inFV_stack_10->SetBinContent(4,18.33284);
   hCCpi0inFV_stack_10->SetBinContent(5,18.8404);
   hCCpi0inFV_stack_10->SetBinContent(6,15.14614);
   hCCpi0inFV_stack_10->SetBinContent(7,16.43185);
   hCCpi0inFV_stack_10->SetBinContent(8,15.26279);
   hCCpi0inFV_stack_10->SetBinContent(9,13.29117);
   hCCpi0inFV_stack_10->SetBinContent(10,16.31227);
   hCCpi0inFV_stack_10->SetBinContent(11,20.34986);
   hCCpi0inFV_stack_10->SetBinContent(12,18.40952);
   hCCpi0inFV_stack_10->SetBinContent(13,17.35963);
   hCCpi0inFV_stack_10->SetBinContent(14,16.70706);
   hCCpi0inFV_stack_10->SetBinContent(15,20.48372);
   hCCpi0inFV_stack_10->SetBinContent(16,17.50841);
   hCCpi0inFV_stack_10->SetBinContent(17,24.41171);
   hCCpi0inFV_stack_10->SetBinContent(18,23.41938);
   hCCpi0inFV_stack_10->SetBinContent(19,24.4696);
   hCCpi0inFV_stack_10->SetBinContent(20,46.20169);
   hCCpi0inFV_stack_10->SetBinError(1,2.19928);
   hCCpi0inFV_stack_10->SetBinError(2,1.892501);
   hCCpi0inFV_stack_10->SetBinError(3,2.056583);
   hCCpi0inFV_stack_10->SetBinError(4,2.150951);
   hCCpi0inFV_stack_10->SetBinError(5,2.119761);
   hCCpi0inFV_stack_10->SetBinError(6,1.911668);
   hCCpi0inFV_stack_10->SetBinError(7,2.00199);
   hCCpi0inFV_stack_10->SetBinError(8,1.892562);
   hCCpi0inFV_stack_10->SetBinError(9,1.841593);
   hCCpi0inFV_stack_10->SetBinError(10,2.03479);
   hCCpi0inFV_stack_10->SetBinError(11,2.230226);
   hCCpi0inFV_stack_10->SetBinError(12,2.176383);
   hCCpi0inFV_stack_10->SetBinError(13,2.094028);
   hCCpi0inFV_stack_10->SetBinError(14,2.073387);
   hCCpi0inFV_stack_10->SetBinError(15,2.273824);
   hCCpi0inFV_stack_10->SetBinError(16,2.029655);
   hCCpi0inFV_stack_10->SetBinError(17,2.520836);
   hCCpi0inFV_stack_10->SetBinError(18,2.442008);
   hCCpi0inFV_stack_10->SetBinError(19,2.445803);
   hCCpi0inFV_stack_10->SetBinError(20,3.372368);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,8.746058);
   hNCinFV_stack_11->SetBinContent(2,8.596441);
   hNCinFV_stack_11->SetBinContent(3,8.159293);
   hNCinFV_stack_11->SetBinContent(4,8.747748);
   hNCinFV_stack_11->SetBinContent(5,10.30856);
   hNCinFV_stack_11->SetBinContent(6,7.415666);
   hNCinFV_stack_11->SetBinContent(7,7.235731);
   hNCinFV_stack_11->SetBinContent(8,7.370741);
   hNCinFV_stack_11->SetBinContent(9,9.624819);
   hNCinFV_stack_11->SetBinContent(10,9.676382);
   hNCinFV_stack_11->SetBinContent(11,12.49417);
   hNCinFV_stack_11->SetBinContent(12,7.340547);
   hNCinFV_stack_11->SetBinContent(13,8.552724);
   hNCinFV_stack_11->SetBinContent(14,8.9848);
   hNCinFV_stack_11->SetBinContent(15,8.210855);
   hNCinFV_stack_11->SetBinContent(16,8.749439);
   hNCinFV_stack_11->SetBinContent(17,8.928167);
   hNCinFV_stack_11->SetBinContent(18,9.228007);
   hNCinFV_stack_11->SetBinContent(19,16.52544);
   hNCinFV_stack_11->SetBinContent(20,23.06114);
   hNCinFV_stack_11->SetBinError(1,1.468248);
   hNCinFV_stack_11->SetBinError(2,1.508213);
   hNCinFV_stack_11->SetBinError(3,1.428631);
   hNCinFV_stack_11->SetBinError(4,1.468473);
   hNCinFV_stack_11->SetBinError(5,1.630742);
   hNCinFV_stack_11->SetBinError(6,1.306161);
   hNCinFV_stack_11->SetBinError(7,1.34604);
   hNCinFV_stack_11->SetBinError(8,1.373148);
   hNCinFV_stack_11->SetBinError(9,1.557739);
   hNCinFV_stack_11->SetBinError(10,1.545174);
   hNCinFV_stack_11->SetBinError(11,1.797972);
   hNCinFV_stack_11->SetBinError(12,1.317007);
   hNCinFV_stack_11->SetBinError(13,1.455465);
   hNCinFV_stack_11->SetBinError(14,1.533008);
   hNCinFV_stack_11->SetBinError(15,1.414919);
   hNCinFV_stack_11->SetBinError(16,1.468699);
   hNCinFV_stack_11->SetBinError(17,1.545029);
   hNCinFV_stack_11->SetBinError(18,1.532264);
   hNCinFV_stack_11->SetBinError(19,2.030921);
   hNCinFV_stack_11->SetBinError(20,2.428107);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.985862);
   hnumuCCinFV_stack_12->SetBinContent(2,6.357576);
   hnumuCCinFV_stack_12->SetBinContent(3,7.719361);
   hnumuCCinFV_stack_12->SetBinContent(4,8.32364);
   hnumuCCinFV_stack_12->SetBinContent(5,5.985175);
   hnumuCCinFV_stack_12->SetBinContent(6,9.14885);
   hnumuCCinFV_stack_12->SetBinContent(7,3.805469);
   hnumuCCinFV_stack_12->SetBinContent(8,7.103072);
   hnumuCCinFV_stack_12->SetBinContent(9,9.263855);
   hnumuCCinFV_stack_12->SetBinContent(10,3.796282);
   hnumuCCinFV_stack_12->SetBinContent(11,7.60647);
   hnumuCCinFV_stack_12->SetBinContent(12,8.008562);
   hnumuCCinFV_stack_12->SetBinContent(13,8.878201);
   hnumuCCinFV_stack_12->SetBinContent(14,7.354284);
   hnumuCCinFV_stack_12->SetBinContent(15,7.527071);
   hnumuCCinFV_stack_12->SetBinContent(16,5.332592);
   hnumuCCinFV_stack_12->SetBinContent(17,10.3854);
   hnumuCCinFV_stack_12->SetBinContent(18,8.30407);
   hnumuCCinFV_stack_12->SetBinContent(19,16.26853);
   hnumuCCinFV_stack_12->SetBinContent(20,18.86288);
   hnumuCCinFV_stack_12->SetBinError(1,2.175926);
   hnumuCCinFV_stack_12->SetBinError(2,1.345308);
   hnumuCCinFV_stack_12->SetBinError(3,1.487194);
   hnumuCCinFV_stack_12->SetBinError(4,1.620625);
   hnumuCCinFV_stack_12->SetBinError(5,1.363231);
   hnumuCCinFV_stack_12->SetBinError(6,1.762108);
   hnumuCCinFV_stack_12->SetBinError(7,0.9061326);
   hnumuCCinFV_stack_12->SetBinError(8,1.4171);
   hnumuCCinFV_stack_12->SetBinError(9,2.093595);
   hnumuCCinFV_stack_12->SetBinError(10,1.03307);
   hnumuCCinFV_stack_12->SetBinError(11,1.782927);
   hnumuCCinFV_stack_12->SetBinError(12,1.679292);
   hnumuCCinFV_stack_12->SetBinError(13,1.576595);
   hnumuCCinFV_stack_12->SetBinError(14,1.564511);
   hnumuCCinFV_stack_12->SetBinError(15,1.462406);
   hnumuCCinFV_stack_12->SetBinError(16,1.166504);
   hnumuCCinFV_stack_12->SetBinError(17,1.685704);
   hnumuCCinFV_stack_12->SetBinError(18,1.993091);
   hnumuCCinFV_stack_12->SetBinError(19,2.184302);
   hnumuCCinFV_stack_12->SetBinError(20,2.20911);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,2.359682);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.439162);
   hnueCCinFV_stack_13->SetBinContent(4,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.251764);
   hnueCCinFV_stack_13->SetBinContent(9,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(10,3.274e-05);
   hnueCCinFV_stack_13->SetBinContent(12,4.908035e-06);
   hnueCCinFV_stack_13->SetBinContent(13,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(14,2.00449);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,1.714912);
   hnueCCinFV_stack_13->SetBinContent(17,3.350187);
   hnueCCinFV_stack_13->SetBinContent(18,2.511766);
   hnueCCinFV_stack_13->SetBinContent(19,2.11499);
   hnueCCinFV_stack_13->SetBinContent(20,8.839071);
   hnueCCinFV_stack_13->SetBinError(1,1.434894);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.3124702);
   hnueCCinFV_stack_13->SetBinError(4,0.4394482);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.5894075);
   hnueCCinFV_stack_13->SetBinError(9,0.2451269);
   hnueCCinFV_stack_13->SetBinError(10,3.274e-05);
   hnueCCinFV_stack_13->SetBinError(12,4.908035e-06);
   hnueCCinFV_stack_13->SetBinError(13,0.4810838);
   hnueCCinFV_stack_13->SetBinError(14,0.8085828);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.7469158);
   hnueCCinFV_stack_13->SetBinError(17,1.382003);
   hnueCCinFV_stack_13->SetBinError(18,0.9489461);
   hnueCCinFV_stack_13->SetBinError(19,0.7945736);
   hnueCCinFV_stack_13->SetBinError(20,2.237327);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__17->SetBinContent(1,121.0427);
   hmcerror__17->SetBinContent(2,107.0541);
   hmcerror__17->SetBinContent(3,104.3786);
   hmcerror__17->SetBinContent(4,116.1968);
   hmcerror__17->SetBinContent(5,114.6762);
   hmcerror__17->SetBinContent(6,109.4185);
   hmcerror__17->SetBinContent(7,104.7939);
   hmcerror__17->SetBinContent(8,118.1447);
   hmcerror__17->SetBinContent(9,126.9256);
   hmcerror__17->SetBinContent(10,122.7864);
   hmcerror__17->SetBinContent(11,130.1854);
   hmcerror__17->SetBinContent(12,134.9877);
   hmcerror__17->SetBinContent(13,140.0039);
   hmcerror__17->SetBinContent(14,132.5859);
   hmcerror__17->SetBinContent(15,144.1633);
   hmcerror__17->SetBinContent(16,152.2992);
   hmcerror__17->SetBinContent(17,170.2727);
   hmcerror__17->SetBinContent(18,188.3714);
   hmcerror__17->SetBinContent(19,222.955);
   hmcerror__17->SetBinContent(20,384.7535);
   hmcerror__17->SetBinContent(21,0.1115999);
   hmcerror__17->SetBinError(1,39.44499);
   hmcerror__17->SetBinError(2,35.91992);
   hmcerror__17->SetBinError(3,31.85367);
   hmcerror__17->SetBinError(4,34.14639);
   hmcerror__17->SetBinError(5,31.53341);
   hmcerror__17->SetBinError(6,31.53166);
   hmcerror__17->SetBinError(7,34.80794);
   hmcerror__17->SetBinError(8,30.07759);
   hmcerror__17->SetBinError(9,36.10409);
   hmcerror__17->SetBinError(10,32.65824);
   hmcerror__17->SetBinError(11,35.22021);
   hmcerror__17->SetBinError(12,33.86525);
   hmcerror__17->SetBinError(13,39.63064);
   hmcerror__17->SetBinError(14,45.15067);
   hmcerror__17->SetBinError(15,39.61436);
   hmcerror__17->SetBinError(16,36.28093);
   hmcerror__17->SetBinError(17,46.13532);
   hmcerror__17->SetBinError(18,47.91287);
   hmcerror__17->SetBinError(19,58.75015);
   hmcerror__17->SetBinError(20,89.86898);
   hmcerror__17->SetBinError(21,0.4781761);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3021[20] = {
   109,
   121,
   112,
   103,
   121,
   105,
   97,
   125,
   127,
   125,
   110,
   138,
   139,
   125,
   150,
   155,
   160,
   197,
   219,
   400};
   Double_t _felx3021[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3021[20] = {
   10.44031,
   11,
   10.58301,
   10.14889,
   11,
   10.24695,
   9.9704,
   11.18034,
   11.26943,
   11.18034,
   10.48809,
   11.74734,
   11.78983,
   11.18034,
   12.24745,
   12.4499,
   12.64911,
   14.03567,
   14.79865,
   20};
   Double_t _fehx3021[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3021[20] = {
   10.44031,
   11,
   10.58301,
   10.14889,
   11,
   10.24695,
   9.769,
   11.18034,
   11.26943,
   11.18034,
   10.48809,
   11.74734,
   11.78983,
   11.18034,
   12.24745,
   12.4499,
   12.64911,
   14.03567,
   14.79865,
   20};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1.1);
   Graph_Graph3021->SetMinimum(53.73256);
   Graph_Graph3021->SetMaximum(453.297);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   
   Double_t _fx3022[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3022[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3022[20] = {
   0.3258768,
   0.3355305,
   0.3051743,
   0.2938667,
   0.2749779,
   0.2881748,
   0.3321562,
   0.2545826,
   0.2844508,
   0.265976,
   0.2705389,
   0.2508765,
   0.2830682,
   0.3405389,
   0.2747882,
   0.2382213,
   0.2709497,
   0.2543533,
   0.2635068,
   0.2335755};
   Double_t _fehx3022[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3022[20] = {
   0.3258768,
   0.3355305,
   0.3051743,
   0.2938667,
   0.2749779,
   0.2881748,
   0.3321562,
   0.2545826,
   0.2844508,
   0.265976,
   0.2705389,
   0.2508765,
   0.2830682,
   0.3405389,
   0.2747882,
   0.2382213,
   0.2709497,
   0.2543533,
   0.2635068,
   0.2335755};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1.1);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3023[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3023[20] = {
   0.2115007,
   0.2203982,
   0.2250646,
   0.2217012,
   0.2222548,
   0.2122504,
   0.2220529,
   0.1965776,
   0.2081109,
   0.2148361,
   0.2092498,
   0.1985289,
   0.2050754,
   0.2248161,
   0.2121289,
   0.199938,
   0.2011517,
   0.199186,
   0.2017001,
   0.1950055};
   Double_t _fehx3023[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3023[20] = {
   0.2115007,
   0.2203982,
   0.2250646,
   0.2217012,
   0.2222548,
   0.2122504,
   0.2220529,
   0.1965776,
   0.2081109,
   0.2148361,
   0.2092498,
   0.1985289,
   0.2050754,
   0.2248161,
   0.2121289,
   0.199938,
   0.2011517,
   0.199186,
   0.2017001,
   0.1950055};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1.1);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3024[20] = {
   0.9005089,
   1.130269,
   1.073017,
   0.8864268,
   1.055145,
   0.9596183,
   0.9256267,
   1.058024,
   1.000586,
   1.018028,
   0.8449491,
   1.022315,
   0.9928295,
   0.9427848,
   1.040487,
   1.017733,
   0.9396694,
   1.045806,
   0.982261,
   1.039627};
   Double_t _felx3024[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3024[20] = {
   0.08625311,
   0.1027518,
   0.1013906,
   0.08734223,
   0.09592229,
   0.09364915,
   0.09514297,
   0.09463258,
   0.08878767,
   0.09105518,
   0.08056273,
   0.08702526,
   0.0842107,
   0.08432523,
   0.08495539,
   0.0817463,
   0.07428739,
   0.07451062,
   0.06637505,
   0.05198133};
   Double_t _fehx3024[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3024[20] = {
   0.08625311,
   0.1027518,
   0.1013906,
   0.08734223,
   0.09592229,
   0.09364915,
   0.0932211,
   0.09463258,
   0.08878767,
   0.09105518,
   0.08056273,
   0.08702526,
   0.0842107,
   0.08432523,
   0.08495539,
   0.0817463,
   0.07428739,
   0.07451062,
   0.06637505,
   0.05198133};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1.1);
   Graph_Graph3024->SetMinimum(0.7175228);
   Graph_Graph3024->SetMaximum(1.279885);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,1,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

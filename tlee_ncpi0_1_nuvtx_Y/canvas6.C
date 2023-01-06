#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 09:59:21 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",112,135,1200,900);
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
   pad1->Range(-170,-3.3,163.3333,364.9105);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__16->SetBinContent(0,3.298271);
   hmc__16->SetBinContent(1,1.112774);
   hmc__16->SetBinContent(2,17.48098);
   hmc__16->SetBinContent(3,45.70619);
   hmc__16->SetBinContent(4,84.03758);
   hmc__16->SetBinContent(5,119.1234);
   hmc__16->SetBinContent(6,120.8101);
   hmc__16->SetBinContent(7,140.198);
   hmc__16->SetBinContent(8,135.8056);
   hmc__16->SetBinContent(9,132.8952);
   hmc__16->SetBinContent(10,142.5652);
   hmc__16->SetBinContent(11,136.5669);
   hmc__16->SetBinContent(12,125.1867);
   hmc__16->SetBinContent(13,143.9309);
   hmc__16->SetBinContent(14,128.951);
   hmc__16->SetBinContent(15,127.0678);
   hmc__16->SetBinContent(16,145.9706);
   hmc__16->SetBinContent(17,137.4407);
   hmc__16->SetBinContent(18,134.1014);
   hmc__16->SetBinContent(19,140.449);
   hmc__16->SetBinContent(20,144.6823);
   hmc__16->SetBinContent(21,154.2552);
   hmc__16->SetBinContent(22,132.8144);
   hmc__16->SetBinContent(23,98.22047);
   hmc__16->SetBinContent(24,69.29956);
   hmc__16->SetBinContent(25,29.02711);
   hmc__16->SetBinContent(26,3.100791);
   hmc__16->SetBinContent(27,1.798279);
   hmc__16->SetBinError(0,0.9404873);
   hmc__16->SetBinError(1,8.137075);
   hmc__16->SetBinError(2,11.98194);
   hmc__16->SetBinError(3,15.74925);
   hmc__16->SetBinError(4,24.84467);
   hmc__16->SetBinError(5,36.8131);
   hmc__16->SetBinError(6,36.02426);
   hmc__16->SetBinError(7,40.74588);
   hmc__16->SetBinError(8,40.63185);
   hmc__16->SetBinError(9,37.19853);
   hmc__16->SetBinError(10,36.66771);
   hmc__16->SetBinError(11,39.31443);
   hmc__16->SetBinError(12,38.30503);
   hmc__16->SetBinError(13,36.67111);
   hmc__16->SetBinError(14,38.06653);
   hmc__16->SetBinError(15,32.02759);
   hmc__16->SetBinError(16,36.81259);
   hmc__16->SetBinError(17,35.13043);
   hmc__16->SetBinError(18,32.3761);
   hmc__16->SetBinError(19,34.35013);
   hmc__16->SetBinError(20,35.19421);
   hmc__16->SetBinError(21,36.43056);
   hmc__16->SetBinError(22,30.19436);
   hmc__16->SetBinError(23,27.35718);
   hmc__16->SetBinError(24,16.9139);
   hmc__16->SetBinError(25,12.03618);
   hmc__16->SetBinError(26,4.449504);
   hmc__16->SetBinError(27,3.702238);
   hmc__16->SetMinimum(-3.3);
   hmc__16->SetMaximum(346.5);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",26,-130,130);
   hs6_stack_6->SetMinimum(-7.708339e-09);
   hs6_stack_6->SetMaximum(161.968);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.30591);
   hbadmatch_stack_1->SetBinContent(3,1.404408);
   hbadmatch_stack_1->SetBinContent(4,2.143896);
   hbadmatch_stack_1->SetBinContent(5,4.185092);
   hbadmatch_stack_1->SetBinContent(6,1.851071);
   hbadmatch_stack_1->SetBinContent(7,2.346241);
   hbadmatch_stack_1->SetBinContent(8,2.133424);
   hbadmatch_stack_1->SetBinContent(9,2.471128);
   hbadmatch_stack_1->SetBinContent(10,3.757664);
   hbadmatch_stack_1->SetBinContent(11,2.767652);
   hbadmatch_stack_1->SetBinContent(12,3.193393);
   hbadmatch_stack_1->SetBinContent(13,5.027049);
   hbadmatch_stack_1->SetBinContent(14,0.5621095);
   hbadmatch_stack_1->SetBinContent(15,3.061569);
   hbadmatch_stack_1->SetBinContent(16,3.638734);
   hbadmatch_stack_1->SetBinContent(17,5.313655);
   hbadmatch_stack_1->SetBinContent(18,3.163275);
   hbadmatch_stack_1->SetBinContent(19,0.8689975);
   hbadmatch_stack_1->SetBinContent(20,2.585588);
   hbadmatch_stack_1->SetBinContent(21,4.252069);
   hbadmatch_stack_1->SetBinContent(22,1.058962);
   hbadmatch_stack_1->SetBinContent(23,2.28601);
   hbadmatch_stack_1->SetBinContent(24,3.946998);
   hbadmatch_stack_1->SetBinContent(25,1.275806);
   hbadmatch_stack_1->SetBinError(2,0.6128253);
   hbadmatch_stack_1->SetBinError(3,0.6062297);
   hbadmatch_stack_1->SetBinError(4,1.654351);
   hbadmatch_stack_1->SetBinError(5,1.882798);
   hbadmatch_stack_1->SetBinError(6,0.6906721);
   hbadmatch_stack_1->SetBinError(7,0.7466632);
   hbadmatch_stack_1->SetBinError(8,0.7471676);
   hbadmatch_stack_1->SetBinError(9,0.8024914);
   hbadmatch_stack_1->SetBinError(10,1.067577);
   hbadmatch_stack_1->SetBinError(11,0.9006055);
   hbadmatch_stack_1->SetBinError(12,0.9078773);
   hbadmatch_stack_1->SetBinError(13,1.246924);
   hbadmatch_stack_1->SetBinError(14,0.3062736);
   hbadmatch_stack_1->SetBinError(15,1.022922);
   hbadmatch_stack_1->SetBinError(16,1.051692);
   hbadmatch_stack_1->SetBinError(17,1.215892);
   hbadmatch_stack_1->SetBinError(18,0.9202561);
   hbadmatch_stack_1->SetBinError(19,0.4138309);
   hbadmatch_stack_1->SetBinError(20,0.8020198);
   hbadmatch_stack_1->SetBinError(21,1.288889);
   hbadmatch_stack_1->SetBinError(22,0.5506569);
   hbadmatch_stack_1->SetBinError(23,0.7613279);
   hbadmatch_stack_1->SetBinError(24,1.042463);
   hbadmatch_stack_1->SetBinError(25,0.5913301);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.517386);
   hext_stack_2->SetBinContent(5,4.595042);
   hext_stack_2->SetBinContent(6,6.538654);
   hext_stack_2->SetBinContent(7,2.517386);
   hext_stack_2->SetBinContent(8,3.897177);
   hext_stack_2->SetBinContent(9,8.000648);
   hext_stack_2->SetBinContent(10,6.158006);
   hext_stack_2->SetBinContent(11,5.020411);
   hext_stack_2->SetBinContent(12,5.758588);
   hext_stack_2->SetBinContent(13,16.69916);
   hext_stack_2->SetBinContent(14,6.571785);
   hext_stack_2->SetBinContent(15,9.895189);
   hext_stack_2->SetBinContent(16,11.90941);
   hext_stack_2->SetBinContent(17,14.37049);
   hext_stack_2->SetBinContent(18,19.21655);
   hext_stack_2->SetBinContent(19,25.06011);
   hext_stack_2->SetBinContent(20,26.20488);
   hext_stack_2->SetBinContent(21,33.66647);
   hext_stack_2->SetBinContent(22,28.74545);
   hext_stack_2->SetBinContent(23,17.57421);
   hext_stack_2->SetBinContent(24,17.80923);
   hext_stack_2->SetBinContent(25,4.054399);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.9575503);
   hext_stack_2->SetBinError(5,1.529106);
   hext_stack_2->SetBinError(6,1.818211);
   hext_stack_2->SetBinError(7,0.9575503);
   hext_stack_2->SetBinError(8,1.182339);
   hext_stack_2->SetBinError(9,1.961378);
   hext_stack_2->SetBinError(10,1.634652);
   hext_stack_2->SetBinError(11,1.495396);
   hext_stack_2->SetBinError(12,1.518408);
   hext_stack_2->SetBinError(13,2.938409);
   hext_stack_2->SetBinError(14,1.62364);
   hext_stack_2->SetBinError(15,2.021128);
   hext_stack_2->SetBinError(16,2.275709);
   hext_stack_2->SetBinError(17,2.626327);
   hext_stack_2->SetBinError(18,3.090494);
   hext_stack_2->SetBinError(19,3.40301);
   hext_stack_2->SetBinError(20,3.437318);
   hext_stack_2->SetBinError(21,4.104285);
   hext_stack_2->SetBinError(22,3.549634);
   hext_stack_2->SetBinError(23,2.73686);
   hext_stack_2->SetBinError(24,2.781501);
   hext_stack_2->SetBinError(25,1.311223);
   hext_stack_2->SetBinError(26,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,1.021941);
   hdirt_stack_3->SetBinContent(4,1.38303);
   hdirt_stack_3->SetBinContent(5,0.9712972);
   hdirt_stack_3->SetBinContent(6,2.581474);
   hdirt_stack_3->SetBinContent(7,2.093441);
   hdirt_stack_3->SetBinContent(8,2.009682);
   hdirt_stack_3->SetBinContent(9,1.830713);
   hdirt_stack_3->SetBinContent(10,2.190295);
   hdirt_stack_3->SetBinContent(11,0.5177832);
   hdirt_stack_3->SetBinContent(12,2.075862);
   hdirt_stack_3->SetBinContent(13,1.910232);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,1.512143);
   hdirt_stack_3->SetBinContent(16,2.079227);
   hdirt_stack_3->SetBinContent(17,0.652522);
   hdirt_stack_3->SetBinContent(18,1.270885);
   hdirt_stack_3->SetBinContent(19,1.153079);
   hdirt_stack_3->SetBinContent(20,3.232359);
   hdirt_stack_3->SetBinContent(21,2.692175);
   hdirt_stack_3->SetBinContent(22,2.923215);
   hdirt_stack_3->SetBinContent(23,2.134701);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.526456);
   hdirt_stack_3->SetBinError(4,0.6095247);
   hdirt_stack_3->SetBinError(5,0.4684838);
   hdirt_stack_3->SetBinError(6,0.731563);
   hdirt_stack_3->SetBinError(7,0.7518361);
   hdirt_stack_3->SetBinError(8,0.8734474);
   hdirt_stack_3->SetBinError(9,0.6763397);
   hdirt_stack_3->SetBinError(10,0.8444623);
   hdirt_stack_3->SetBinError(11,0.3046979);
   hdirt_stack_3->SetBinError(12,0.8195623);
   hdirt_stack_3->SetBinError(13,0.7492886);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.6657946);
   hdirt_stack_3->SetBinError(16,0.8170286);
   hdirt_stack_3->SetBinError(17,0.4857439);
   hdirt_stack_3->SetBinError(18,0.5908744);
   hdirt_stack_3->SetBinError(19,0.532061);
   hdirt_stack_3->SetBinError(20,0.9106743);
   hdirt_stack_3->SetBinError(21,0.910058);
   hdirt_stack_3->SetBinError(22,1.265752);
   hdirt_stack_3->SetBinError(23,0.6995661);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.453923);
   houtFV_stack_4->SetBinContent(1,0.9313869);
   houtFV_stack_4->SetBinContent(2,10.9777);
   houtFV_stack_4->SetBinContent(3,15.5434);
   houtFV_stack_4->SetBinContent(4,17.25221);
   houtFV_stack_4->SetBinContent(5,17.79288);
   houtFV_stack_4->SetBinContent(6,12.84016);
   houtFV_stack_4->SetBinContent(7,15.6383);
   houtFV_stack_4->SetBinContent(8,10.8565);
   houtFV_stack_4->SetBinContent(9,11.20875);
   houtFV_stack_4->SetBinContent(10,9.800468);
   houtFV_stack_4->SetBinContent(11,8.509102);
   houtFV_stack_4->SetBinContent(12,8.192769);
   houtFV_stack_4->SetBinContent(13,7.7445);
   houtFV_stack_4->SetBinContent(14,9.844623);
   houtFV_stack_4->SetBinContent(15,7.205166);
   houtFV_stack_4->SetBinContent(16,8.436648);
   houtFV_stack_4->SetBinContent(17,8.820827);
   houtFV_stack_4->SetBinContent(18,10.85451);
   houtFV_stack_4->SetBinContent(19,9.226178);
   houtFV_stack_4->SetBinContent(20,10.50088);
   houtFV_stack_4->SetBinContent(21,13.31172);
   houtFV_stack_4->SetBinContent(22,16.79105);
   houtFV_stack_4->SetBinContent(23,12.15534);
   houtFV_stack_4->SetBinContent(24,12.33103);
   houtFV_stack_4->SetBinContent(25,13.50567);
   houtFV_stack_4->SetBinContent(26,1.987204);
   houtFV_stack_4->SetBinContent(27,0.5893137);
   houtFV_stack_4->SetBinError(0,0.6668365);
   houtFV_stack_4->SetBinError(1,0.4872413);
   houtFV_stack_4->SetBinError(2,1.641109);
   houtFV_stack_4->SetBinError(3,1.970468);
   houtFV_stack_4->SetBinError(4,2.087901);
   houtFV_stack_4->SetBinError(5,2.105654);
   houtFV_stack_4->SetBinError(6,1.757895);
   houtFV_stack_4->SetBinError(7,1.963902);
   houtFV_stack_4->SetBinError(8,1.635956);
   houtFV_stack_4->SetBinError(9,1.713582);
   houtFV_stack_4->SetBinError(10,1.589376);
   houtFV_stack_4->SetBinError(11,1.307685);
   houtFV_stack_4->SetBinError(12,1.438242);
   houtFV_stack_4->SetBinError(13,1.365625);
   houtFV_stack_4->SetBinError(14,1.593765);
   houtFV_stack_4->SetBinError(15,1.367917);
   houtFV_stack_4->SetBinError(16,1.348106);
   houtFV_stack_4->SetBinError(17,1.464125);
   houtFV_stack_4->SetBinError(18,1.706988);
   houtFV_stack_4->SetBinError(19,1.542977);
   houtFV_stack_4->SetBinError(20,1.568438);
   houtFV_stack_4->SetBinError(21,1.84855);
   houtFV_stack_4->SetBinError(22,2.085299);
   houtFV_stack_4->SetBinError(23,1.823713);
   houtFV_stack_4->SetBinError(24,1.73614);
   houtFV_stack_4->SetBinError(25,1.934806);
   houtFV_stack_4->SetBinError(26,0.7240659);
   houtFV_stack_4->SetBinError(27,0.3402411);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.073512);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.988241);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.538197);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.936027);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.79712);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.513133);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.63867);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.305877);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.148398);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.123971);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.933167);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.209696);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.708736);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.43005);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.460156);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.236494);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.453343);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.651603);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.733124);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.444887);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.950663);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.852133);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.05664952);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3555984);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4644672);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7750752);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9142783);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7622127);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8505527);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7648002);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9264479);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.067884);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.690627);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.543208);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7233837);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.708715);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8457698);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9981721);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9052377);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8214037);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6192552);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9331541);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8154087);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.85959);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3438774);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.04005954);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1742078);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1618691);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4161285);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4388051);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6173112);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1770121);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3485703);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4473317);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.07206501);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4530803);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2106162);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7724758);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.460443);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05751261);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1902082);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3773678);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2269104);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1287843);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.04209092);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1451321);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1099002);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.09079862);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07470597);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1790051);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1421717);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3270837);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07120712);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1703901);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1903941);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03896558);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1626441);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08306637);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3552535);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1931908);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02934716);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08491543);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2287727);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1736576);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.05733777);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02463869);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06500954);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05630884);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2210871);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.05458213);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.95464);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.56933);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.37779);
   hNCpi0inFVres_stack_7->SetBinContent(5,46.22412);
   hNCpi0inFVres_stack_7->SetBinContent(6,50.30078);
   hNCpi0inFVres_stack_7->SetBinContent(7,60.76767);
   hNCpi0inFVres_stack_7->SetBinContent(8,59.43845);
   hNCpi0inFVres_stack_7->SetBinContent(9,56.06144);
   hNCpi0inFVres_stack_7->SetBinContent(10,58.77789);
   hNCpi0inFVres_stack_7->SetBinContent(11,59.12759);
   hNCpi0inFVres_stack_7->SetBinContent(12,50.94398);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.21325);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.65727);
   hNCpi0inFVres_stack_7->SetBinContent(15,54.03828);
   hNCpi0inFVres_stack_7->SetBinContent(16,54.72214);
   hNCpi0inFVres_stack_7->SetBinContent(17,53.58101);
   hNCpi0inFVres_stack_7->SetBinContent(18,46.13996);
   hNCpi0inFVres_stack_7->SetBinContent(19,48.33427);
   hNCpi0inFVres_stack_7->SetBinContent(20,47.94377);
   hNCpi0inFVres_stack_7->SetBinContent(21,48.92066);
   hNCpi0inFVres_stack_7->SetBinContent(22,42.54023);
   hNCpi0inFVres_stack_7->SetBinContent(23,29.5984);
   hNCpi0inFVres_stack_7->SetBinContent(24,16.38979);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.259552);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.08536567);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.5567043);
   hNCpi0inFVres_stack_7->SetBinError(0,0.0863692);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04066776);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6855595);
   hNCpi0inFVres_stack_7->SetBinError(3,1.211485);
   hNCpi0inFVres_stack_7->SetBinError(4,1.86648);
   hNCpi0inFVres_stack_7->SetBinError(5,2.357672);
   hNCpi0inFVres_stack_7->SetBinError(6,2.404154);
   hNCpi0inFVres_stack_7->SetBinError(7,2.777952);
   hNCpi0inFVres_stack_7->SetBinError(8,2.732463);
   hNCpi0inFVres_stack_7->SetBinError(9,2.55437);
   hNCpi0inFVres_stack_7->SetBinError(10,2.729986);
   hNCpi0inFVres_stack_7->SetBinError(11,2.676786);
   hNCpi0inFVres_stack_7->SetBinError(12,2.357344);
   hNCpi0inFVres_stack_7->SetBinError(13,2.553607);
   hNCpi0inFVres_stack_7->SetBinError(14,2.327899);
   hNCpi0inFVres_stack_7->SetBinError(15,2.611209);
   hNCpi0inFVres_stack_7->SetBinError(16,2.503939);
   hNCpi0inFVres_stack_7->SetBinError(17,2.534467);
   hNCpi0inFVres_stack_7->SetBinError(18,2.212969);
   hNCpi0inFVres_stack_7->SetBinError(19,2.316249);
   hNCpi0inFVres_stack_7->SetBinError(20,2.32679);
   hNCpi0inFVres_stack_7->SetBinError(21,2.476726);
   hNCpi0inFVres_stack_7->SetBinError(22,2.366765);
   hNCpi0inFVres_stack_7->SetBinError(23,1.873002);
   hNCpi0inFVres_stack_7->SetBinError(24,1.473526);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6638338);
   hNCpi0inFVres_stack_7->SetBinError(26,0.05645402);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1848109);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.249178);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1668069);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.491092);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.144474);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.955016);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.74314);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.77081);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.1246);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.00542);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.54261);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.14318);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.924777);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.78144);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.66811);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.711498);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.87318);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.23669);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.790871);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.22006);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.88532);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.836208);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.539288);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.862569);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.318349);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4450901);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3140733);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2027129);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.09615723);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5628177);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8540963);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9534234);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.264976);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.244037);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.256307);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.212123);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.185466);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.106275);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9379148);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.184357);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.159072);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.967737);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.175707);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.014209);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.063017);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.12404);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.156707);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.101042);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9160604);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8875581);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5732407);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1583116);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2964059);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1463682);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05618739);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1302015);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.04343089);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(2,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(3,6.21858);
   hCCpi0inFV_stack_10->SetBinContent(4,12.55756);
   hCCpi0inFV_stack_10->SetBinContent(5,15.97731);
   hCCpi0inFV_stack_10->SetBinContent(6,17.16316);
   hCCpi0inFV_stack_10->SetBinContent(7,16.18953);
   hCCpi0inFV_stack_10->SetBinContent(8,19.56916);
   hCCpi0inFV_stack_10->SetBinContent(9,17.48427);
   hCCpi0inFV_stack_10->SetBinContent(10,24.58154);
   hCCpi0inFV_stack_10->SetBinContent(11,23.29143);
   hCCpi0inFV_stack_10->SetBinContent(12,21.07819);
   hCCpi0inFV_stack_10->SetBinContent(13,19.59376);
   hCCpi0inFV_stack_10->SetBinContent(14,23.35699);
   hCCpi0inFV_stack_10->SetBinContent(15,18.31331);
   hCCpi0inFV_stack_10->SetBinContent(16,24.07469);
   hCCpi0inFV_stack_10->SetBinContent(17,18.23249);
   hCCpi0inFV_stack_10->SetBinContent(18,20.12164);
   hCCpi0inFV_stack_10->SetBinContent(19,20.56507);
   hCCpi0inFV_stack_10->SetBinContent(20,20.36883);
   hCCpi0inFV_stack_10->SetBinContent(21,17.69263);
   hCCpi0inFV_stack_10->SetBinContent(22,12.84726);
   hCCpi0inFV_stack_10->SetBinContent(23,11.5706);
   hCCpi0inFV_stack_10->SetBinContent(24,8.162674);
   hCCpi0inFV_stack_10->SetBinContent(25,1.465526);
   hCCpi0inFV_stack_10->SetBinError(0,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(2,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(3,1.210779);
   hCCpi0inFV_stack_10->SetBinError(4,1.788393);
   hCCpi0inFV_stack_10->SetBinError(5,2.060342);
   hCCpi0inFV_stack_10->SetBinError(6,2.000448);
   hCCpi0inFV_stack_10->SetBinError(7,1.967965);
   hCCpi0inFV_stack_10->SetBinError(8,2.183862);
   hCCpi0inFV_stack_10->SetBinError(9,2.122927);
   hCCpi0inFV_stack_10->SetBinError(10,2.543402);
   hCCpi0inFV_stack_10->SetBinError(11,2.467134);
   hCCpi0inFV_stack_10->SetBinError(12,2.273922);
   hCCpi0inFV_stack_10->SetBinError(13,2.166963);
   hCCpi0inFV_stack_10->SetBinError(14,2.378333);
   hCCpi0inFV_stack_10->SetBinError(15,2.145856);
   hCCpi0inFV_stack_10->SetBinError(16,2.401213);
   hCCpi0inFV_stack_10->SetBinError(17,2.123032);
   hCCpi0inFV_stack_10->SetBinError(18,2.263019);
   hCCpi0inFV_stack_10->SetBinError(19,2.28468);
   hCCpi0inFV_stack_10->SetBinError(20,2.30628);
   hCCpi0inFV_stack_10->SetBinError(21,2.052928);
   hCCpi0inFV_stack_10->SetBinError(22,1.776258);
   hCCpi0inFV_stack_10->SetBinError(23,1.733072);
   hCCpi0inFV_stack_10->SetBinError(24,1.429094);
   hCCpi0inFV_stack_10->SetBinError(25,0.6209405);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(2,0.5420174);
   hNCinFV_stack_11->SetBinContent(3,3.346071);
   hNCinFV_stack_11->SetBinContent(4,5.598948);
   hNCinFV_stack_11->SetBinContent(5,7.444323);
   hNCinFV_stack_11->SetBinContent(6,7.996234);
   hNCinFV_stack_11->SetBinContent(7,13.13654);
   hNCinFV_stack_11->SetBinContent(8,8.370884);
   hNCinFV_stack_11->SetBinContent(9,9.714836);
   hNCinFV_stack_11->SetBinContent(10,9.991374);
   hNCinFV_stack_11->SetBinContent(11,12.28141);
   hNCinFV_stack_11->SetBinContent(12,10.53871);
   hNCinFV_stack_11->SetBinContent(13,10.39319);
   hNCinFV_stack_11->SetBinContent(14,10.22719);
   hNCinFV_stack_11->SetBinContent(15,9.441485);
   hNCinFV_stack_11->SetBinContent(16,9.72005);
   hNCinFV_stack_11->SetBinContent(17,9.347696);
   hNCinFV_stack_11->SetBinContent(18,8.722847);
   hNCinFV_stack_11->SetBinContent(19,10.58454);
   hNCinFV_stack_11->SetBinContent(20,10.67665);
   hNCinFV_stack_11->SetBinContent(21,9.678364);
   hNCinFV_stack_11->SetBinContent(22,9.46609);
   hNCinFV_stack_11->SetBinContent(23,6.864194);
   hNCinFV_stack_11->SetBinContent(24,2.251915);
   hNCinFV_stack_11->SetBinContent(25,0.8645741);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3955504);
   hNCinFV_stack_11->SetBinError(3,0.9685895);
   hNCinFV_stack_11->SetBinError(4,1.190293);
   hNCinFV_stack_11->SetBinError(5,1.345134);
   hNCinFV_stack_11->SetBinError(6,1.36862);
   hNCinFV_stack_11->SetBinError(7,2.181566);
   hNCinFV_stack_11->SetBinError(8,1.405847);
   hNCinFV_stack_11->SetBinError(9,1.768421);
   hNCinFV_stack_11->SetBinError(10,1.701076);
   hNCinFV_stack_11->SetBinError(11,1.773574);
   hNCinFV_stack_11->SetBinError(12,1.649307);
   hNCinFV_stack_11->SetBinError(13,1.713867);
   hNCinFV_stack_11->SetBinError(14,1.658069);
   hNCinFV_stack_11->SetBinError(15,1.762242);
   hNCinFV_stack_11->SetBinError(16,1.523249);
   hNCinFV_stack_11->SetBinError(17,1.62218);
   hNCinFV_stack_11->SetBinError(18,1.489155);
   hNCinFV_stack_11->SetBinError(19,1.673092);
   hNCinFV_stack_11->SetBinError(20,1.840962);
   hNCinFV_stack_11->SetBinError(21,1.644718);
   hNCinFV_stack_11->SetBinError(22,1.648219);
   hNCinFV_stack_11->SetBinError(23,1.538499);
   hNCinFV_stack_11->SetBinError(24,0.7456735);
   hNCinFV_stack_11->SetBinError(25,0.4583122);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,1.083935);
   hnumuCCinFV_stack_12->SetBinContent(4,4.559657);
   hnumuCCinFV_stack_12->SetBinContent(5,7.053134);
   hnumuCCinFV_stack_12->SetBinContent(6,5.17452);
   hnumuCCinFV_stack_12->SetBinContent(7,8.481337);
   hnumuCCinFV_stack_12->SetBinContent(8,9.936824);
   hnumuCCinFV_stack_12->SetBinContent(9,7.962996);
   hnumuCCinFV_stack_12->SetBinContent(10,9.417939);
   hnumuCCinFV_stack_12->SetBinContent(11,6.304288);
   hnumuCCinFV_stack_12->SetBinContent(12,8.76093);
   hnumuCCinFV_stack_12->SetBinContent(13,10.85804);
   hnumuCCinFV_stack_12->SetBinContent(14,9.694168);
   hnumuCCinFV_stack_12->SetBinContent(15,7.685716);
   hnumuCCinFV_stack_12->SetBinContent(16,10.95175);
   hnumuCCinFV_stack_12->SetBinContent(17,9.806185);
   hnumuCCinFV_stack_12->SetBinContent(18,9.660568);
   hnumuCCinFV_stack_12->SetBinContent(19,8.929881);
   hnumuCCinFV_stack_12->SetBinContent(20,6.314517);
   hnumuCCinFV_stack_12->SetBinContent(21,7.899312);
   hnumuCCinFV_stack_12->SetBinContent(22,5.99247);
   hnumuCCinFV_stack_12->SetBinContent(23,4.455591);
   hnumuCCinFV_stack_12->SetBinContent(24,3.713619);
   hnumuCCinFV_stack_12->SetBinContent(25,3.66293);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.4883562);
   hnumuCCinFV_stack_12->SetBinError(4,1.135694);
   hnumuCCinFV_stack_12->SetBinError(5,1.721254);
   hnumuCCinFV_stack_12->SetBinError(6,1.134598);
   hnumuCCinFV_stack_12->SetBinError(7,1.598837);
   hnumuCCinFV_stack_12->SetBinError(8,1.92167);
   hnumuCCinFV_stack_12->SetBinError(9,1.465735);
   hnumuCCinFV_stack_12->SetBinError(10,1.662992);
   hnumuCCinFV_stack_12->SetBinError(11,1.253269);
   hnumuCCinFV_stack_12->SetBinError(12,1.697018);
   hnumuCCinFV_stack_12->SetBinError(13,1.692186);
   hnumuCCinFV_stack_12->SetBinError(14,1.939182);
   hnumuCCinFV_stack_12->SetBinError(15,1.444965);
   hnumuCCinFV_stack_12->SetBinError(16,1.958167);
   hnumuCCinFV_stack_12->SetBinError(17,2.517779);
   hnumuCCinFV_stack_12->SetBinError(18,1.600535);
   hnumuCCinFV_stack_12->SetBinError(19,1.529507);
   hnumuCCinFV_stack_12->SetBinError(20,1.282966);
   hnumuCCinFV_stack_12->SetBinError(21,1.61162);
   hnumuCCinFV_stack_12->SetBinError(22,1.272167);
   hnumuCCinFV_stack_12->SetBinError(23,1.248139);
   hnumuCCinFV_stack_12->SetBinError(24,1.071284);
   hnumuCCinFV_stack_12->SetBinError(25,1.249363);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,1.22512);
   hnueCCinFV_stack_13->SetBinContent(6,0.2687529);
   hnueCCinFV_stack_13->SetBinContent(7,0.8744354);
   hnueCCinFV_stack_13->SetBinContent(8,1.319626);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.677241);
   hnueCCinFV_stack_13->SetBinContent(11,0.9895205);
   hnueCCinFV_stack_13->SetBinContent(12,1.507813);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.608732);
   hnueCCinFV_stack_13->SetBinContent(15,0.7039669);
   hnueCCinFV_stack_13->SetBinContent(16,3.674321);
   hnueCCinFV_stack_13->SetBinContent(17,0.5614945);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336248);
   hnueCCinFV_stack_13->SetBinContent(19,0.6760854);
   hnueCCinFV_stack_13->SetBinContent(20,2.091004);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,1.623046);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.6593169);
   hnueCCinFV_stack_13->SetBinError(6,0.2639093);
   hnueCCinFV_stack_13->SetBinError(7,0.5347158);
   hnueCCinFV_stack_13->SetBinError(8,0.6924657);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.7084458);
   hnueCCinFV_stack_13->SetBinError(11,0.5080852);
   hnueCCinFV_stack_13->SetBinError(12,0.7982213);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.68216);
   hnueCCinFV_stack_13->SetBinError(15,0.7039669);
   hnueCCinFV_stack_13->SetBinError(16,1.375063);
   hnueCCinFV_stack_13->SetBinError(17,0.4058349);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.3925631);
   hnueCCinFV_stack_13->SetBinError(20,1.33786);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.7783247);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__17->SetBinContent(0,3.298271);
   hmcerror__17->SetBinContent(1,1.112774);
   hmcerror__17->SetBinContent(2,17.48098);
   hmcerror__17->SetBinContent(3,45.70619);
   hmcerror__17->SetBinContent(4,84.03758);
   hmcerror__17->SetBinContent(5,119.1234);
   hmcerror__17->SetBinContent(6,120.8101);
   hmcerror__17->SetBinContent(7,140.198);
   hmcerror__17->SetBinContent(8,135.8056);
   hmcerror__17->SetBinContent(9,132.8952);
   hmcerror__17->SetBinContent(10,142.5652);
   hmcerror__17->SetBinContent(11,136.5669);
   hmcerror__17->SetBinContent(12,125.1867);
   hmcerror__17->SetBinContent(13,143.9309);
   hmcerror__17->SetBinContent(14,128.951);
   hmcerror__17->SetBinContent(15,127.0678);
   hmcerror__17->SetBinContent(16,145.9706);
   hmcerror__17->SetBinContent(17,137.4407);
   hmcerror__17->SetBinContent(18,134.1014);
   hmcerror__17->SetBinContent(19,140.449);
   hmcerror__17->SetBinContent(20,144.6823);
   hmcerror__17->SetBinContent(21,154.2552);
   hmcerror__17->SetBinContent(22,132.8144);
   hmcerror__17->SetBinContent(23,98.22047);
   hmcerror__17->SetBinContent(24,69.29956);
   hmcerror__17->SetBinContent(25,29.02711);
   hmcerror__17->SetBinContent(26,3.100791);
   hmcerror__17->SetBinContent(27,1.798279);
   hmcerror__17->SetBinError(0,0.9404873);
   hmcerror__17->SetBinError(1,8.137075);
   hmcerror__17->SetBinError(2,11.98194);
   hmcerror__17->SetBinError(3,15.74925);
   hmcerror__17->SetBinError(4,24.84467);
   hmcerror__17->SetBinError(5,36.8131);
   hmcerror__17->SetBinError(6,36.02426);
   hmcerror__17->SetBinError(7,40.74588);
   hmcerror__17->SetBinError(8,40.63185);
   hmcerror__17->SetBinError(9,37.19853);
   hmcerror__17->SetBinError(10,36.66771);
   hmcerror__17->SetBinError(11,39.31443);
   hmcerror__17->SetBinError(12,38.30503);
   hmcerror__17->SetBinError(13,36.67111);
   hmcerror__17->SetBinError(14,38.06653);
   hmcerror__17->SetBinError(15,32.02759);
   hmcerror__17->SetBinError(16,36.81259);
   hmcerror__17->SetBinError(17,35.13043);
   hmcerror__17->SetBinError(18,32.3761);
   hmcerror__17->SetBinError(19,34.35013);
   hmcerror__17->SetBinError(20,35.19421);
   hmcerror__17->SetBinError(21,36.43056);
   hmcerror__17->SetBinError(22,30.19436);
   hmcerror__17->SetBinError(23,27.35718);
   hmcerror__17->SetBinError(24,16.9139);
   hmcerror__17->SetBinError(25,12.03618);
   hmcerror__17->SetBinError(26,4.449504);
   hmcerror__17->SetBinError(27,3.702238);
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
   
   Double_t _fx3021[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3021[26] = {
   3,
   11,
   42,
   107,
   117,
   130,
   159,
   146,
   149,
   139,
   146,
   150,
   144,
   134,
   146,
   165,
   135,
   139,
   137,
   145,
   137,
   154,
   106,
   68,
   22,
   1};
   Double_t _felx3021[26] = {
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
   Double_t _fely3021[26] = {
   2.143368,
   3.4975,
   6.6155,
   10.34408,
   10.81665,
   11.40175,
   12.60952,
   12.08305,
   12.20656,
   11.78983,
   12.08305,
   12.24745,
   12,
   11.57584,
   12.08305,
   12.84523,
   11.61895,
   11.78983,
   11.7047,
   12.04159,
   11.7047,
   12.40967,
   10.29563,
   8.3726,
   4.8417,
   1};
   Double_t _fehx3021[26] = {
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
   Double_t _fehy3021[26] = {
   1.72422,
   3.27,
   6.4104,
   10.34408,
   10.81665,
   11.40175,
   12.60952,
   12.08305,
   12.20656,
   11.78983,
   12.08305,
   12.24745,
   12,
   11.57584,
   12.08305,
   12.84523,
   11.61895,
   11.78983,
   11.7047,
   12.04159,
   11.7047,
   12.40967,
   10.29563,
   8.1701,
   4.6299,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-156,156);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(195.6298);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 282.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 391.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 168.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3022[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3022[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[26] = {
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
   Double_t _fely3022[26] = {
   7.312421,
   0.685427,
   0.3445759,
   0.2956376,
   0.3090333,
   0.2981891,
   0.290631,
   0.2991913,
   0.2799087,
   0.2571996,
   0.2878766,
   0.3059831,
   0.2547828,
   0.2952015,
   0.2520513,
   0.2521918,
   0.2556043,
   0.2414299,
   0.2445738,
   0.2432516,
   0.2361707,
   0.2273425,
   0.2785283,
   0.2440694,
   0.414653,
   1.434958};
   Double_t _fehx3022[26] = {
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
   Double_t _fehy3022[26] = {
   7.312421,
   0.685427,
   0.3445759,
   0.2956376,
   0.3090333,
   0.2981891,
   0.290631,
   0.2991913,
   0.2799087,
   0.2571996,
   0.2878766,
   0.3059831,
   0.2547828,
   0.2952015,
   0.2520513,
   0.2521918,
   0.2556043,
   0.2414299,
   0.2445738,
   0.2432516,
   0.2361707,
   0.2273425,
   0.2785283,
   0.2440694,
   0.414653,
   1.434958};
   grae = new TGraphAsymmErrors(26,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-156,156);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3023[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3023[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[26] = {
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
   Double_t _fely3023[26] = {
   0.6565965,
   0.2874956,
   0.2453149,
   0.2474496,
   0.2229313,
   0.2416099,
   0.23946,
   0.2363761,
   0.2227988,
   0.2226268,
   0.2392493,
   0.2286176,
   0.2011341,
   0.2325013,
   0.2082006,
   0.206106,
   0.2184464,
   0.204175,
   0.1948614,
   0.1975561,
   0.1811035,
   0.1932917,
   0.1952859,
   0.1829477,
   0.2523907,
   0.4314634};
   Double_t _fehx3023[26] = {
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
   Double_t _fehy3023[26] = {
   0.6565965,
   0.2874956,
   0.2453149,
   0.2474496,
   0.2229313,
   0.2416099,
   0.23946,
   0.2363761,
   0.2227988,
   0.2226268,
   0.2392493,
   0.2286176,
   0.2011341,
   0.2325013,
   0.2082006,
   0.206106,
   0.2184464,
   0.204175,
   0.1948614,
   0.1975561,
   0.1811035,
   0.1932917,
   0.1952859,
   0.1829477,
   0.2523907,
   0.4314634};
   grae = new TGraphAsymmErrors(26,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-156,156);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3024[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3024[26] = {
   2.695964,
   0.6292552,
   0.9189127,
   1.27324,
   0.9821748,
   1.076069,
   1.13411,
   1.075066,
   1.121184,
   0.9749926,
   1.069073,
   1.19821,
   1.00048,
   1.039154,
   1.148993,
   1.130364,
   0.9822417,
   1.036529,
   0.9754432,
   1.002196,
   0.8881384,
   1.159513,
   1.079205,
   0.9812472,
   0.757912,
   0.3224984};
   Double_t _felx3024[26] = {
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
   Double_t _fely3024[26] = {
   1.926148,
   0.2000746,
   0.1447397,
   0.1230887,
   0.09080209,
   0.09437748,
   0.08994081,
   0.08897312,
   0.09185098,
   0.08269779,
   0.0884771,
   0.09783344,
   0.08337335,
   0.08976924,
   0.09509136,
   0.08799875,
   0.0845379,
   0.08791723,
   0.08333774,
   0.08322782,
   0.07587879,
   0.09343623,
   0.1048216,
   0.1208175,
   0.1667992,
   0.3224984};
   Double_t _fehx3024[26] = {
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
   Double_t _fehy3024[26] = {
   1.549479,
   0.1870604,
   0.1402523,
   0.1230887,
   0.09080209,
   0.09437748,
   0.08994081,
   0.08897312,
   0.09185098,
   0.08269779,
   0.0884771,
   0.09783344,
   0.08337335,
   0.08976924,
   0.09509136,
   0.08799875,
   0.0845379,
   0.08791723,
   0.08333774,
   0.08322782,
   0.07587879,
   0.09343623,
   0.1048216,
   0.1178954,
   0.1595026,
   0.4385042};
   grae = new TGraphAsymmErrors(26,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-156,156);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(4.669987);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

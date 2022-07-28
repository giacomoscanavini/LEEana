#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Jun  2 20:27:10 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-184.6154,-13.7,1353.846,1514.932);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmc__1->SetBinContent(1,14.87746);
   hmc__1->SetBinContent(2,113.2157);
   hmc__1->SetBinContent(3,451.3723);
   hmc__1->SetBinContent(4,618.544);
   hmc__1->SetBinContent(5,508.5953);
   hmc__1->SetBinContent(6,362.4174);
   hmc__1->SetBinContent(7,265.6973);
   hmc__1->SetBinContent(8,176.1977);
   hmc__1->SetBinContent(9,113.9576);
   hmc__1->SetBinContent(10,84.18477);
   hmc__1->SetBinContent(11,53.37028);
   hmc__1->SetBinContent(12,33.14382);
   hmc__1->SetBinContent(13,23.25403);
   hmc__1->SetBinContent(14,14.09971);
   hmc__1->SetBinContent(15,10.13023);
   hmc__1->SetBinContent(16,7.209103);
   hmc__1->SetBinContent(17,2.357377);
   hmc__1->SetBinContent(18,5.107182);
   hmc__1->SetBinContent(19,2.898754);
   hmc__1->SetBinContent(20,1.612285);
   hmc__1->SetBinContent(21,16.13535);
   hmc__1->SetBinError(1,4.999325);
   hmc__1->SetBinError(2,26.68508);
   hmc__1->SetBinError(3,99.32536);
   hmc__1->SetBinError(4,134.741);
   hmc__1->SetBinError(5,109.789);
   hmc__1->SetBinError(6,82.13125);
   hmc__1->SetBinError(7,58.58744);
   hmc__1->SetBinError(8,38.68569);
   hmc__1->SetBinError(9,25.82833);
   hmc__1->SetBinError(10,20.18775);
   hmc__1->SetBinError(11,12.92089);
   hmc__1->SetBinError(12,9.195881);
   hmc__1->SetBinError(13,7.532072);
   hmc__1->SetBinError(14,4.198382);
   hmc__1->SetBinError(15,3.834773);
   hmc__1->SetBinError(16,4.809088);
   hmc__1->SetBinError(17,1.521744);
   hmc__1->SetBinError(18,2.5754);
   hmc__1->SetBinError(19,1.700456);
   hmc__1->SetBinError(20,1.521984);
   hmc__1->SetBinError(21,6.666875);
   hmc__1->SetMinimum(-13.7);
   hmc__1->SetMaximum(1438.5);
   hmc__1->SetEntries(2848.296);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1200);
   hs1_stack_1->SetMinimum(-1.415352e-08);
   hs1_stack_1->SetMaximum(649.4711);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.785171);
   hbadmatch_stack_1->SetBinContent(2,9.549249);
   hbadmatch_stack_1->SetBinContent(3,13.95461);
   hbadmatch_stack_1->SetBinContent(4,20.49525);
   hbadmatch_stack_1->SetBinContent(5,9.71532);
   hbadmatch_stack_1->SetBinContent(6,3.376072);
   hbadmatch_stack_1->SetBinContent(7,3.558334);
   hbadmatch_stack_1->SetBinContent(8,0.9801958);
   hbadmatch_stack_1->SetBinContent(9,1.123658);
   hbadmatch_stack_1->SetBinContent(10,2.428298);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.3925882);
   hbadmatch_stack_1->SetBinError(2,1.740293);
   hbadmatch_stack_1->SetBinError(3,1.934333);
   hbadmatch_stack_1->SetBinError(4,2.866444);
   hbadmatch_stack_1->SetBinError(5,1.616453);
   hbadmatch_stack_1->SetBinError(6,0.9750982);
   hbadmatch_stack_1->SetBinError(7,1.8134);
   hbadmatch_stack_1->SetBinError(8,0.4383608);
   hbadmatch_stack_1->SetBinError(9,0.5188295);
   hbadmatch_stack_1->SetBinError(10,0.7944106);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,0.3652534);
   hext_stack_2->SetBinContent(2,4.507356);
   hext_stack_2->SetBinContent(3,11.19574);
   hext_stack_2->SetBinContent(4,9.79432);
   hext_stack_2->SetBinContent(5,5.570317);
   hext_stack_2->SetBinContent(6,2.740378);
   hext_stack_2->SetBinContent(7,1.757534);
   hext_stack_2->SetBinContent(8,0.1380715);
   hext_stack_2->SetBinContent(9,0.4080678);
   hext_stack_2->SetBinContent(10,1.330832);
   hext_stack_2->SetBinError(1,0.3652534);
   hext_stack_2->SetBinError(2,1.087329);
   hext_stack_2->SetBinError(3,1.713561);
   hext_stack_2->SetBinError(4,1.689888);
   hext_stack_2->SetBinError(5,1.218624);
   hext_stack_2->SetBinError(6,0.8935508);
   hext_stack_2->SetBinError(7,0.7031199);
   hext_stack_2->SetBinError(8,0.1380715);
   hext_stack_2->SetBinError(9,0.4080678);
   hext_stack_2->SetBinError(10,1.107563);
   hext_stack_2->SetEntries(156);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,6.449273);
   hdirt_stack_3->SetBinContent(2,17.83958);
   hdirt_stack_3->SetBinContent(3,79.98172);
   hdirt_stack_3->SetBinContent(4,75.09258);
   hdirt_stack_3->SetBinContent(5,42.89251);
   hdirt_stack_3->SetBinContent(6,22.10582);
   hdirt_stack_3->SetBinContent(7,16.16847);
   hdirt_stack_3->SetBinContent(8,7.112428);
   hdirt_stack_3->SetBinContent(9,5.88986);
   hdirt_stack_3->SetBinContent(10,2.681789);
   hdirt_stack_3->SetBinContent(11,1.379791);
   hdirt_stack_3->SetBinContent(13,0.4065989);
   hdirt_stack_3->SetBinContent(21,0.3243973);
   hdirt_stack_3->SetBinError(1,1.856611);
   hdirt_stack_3->SetBinError(2,2.720917);
   hdirt_stack_3->SetBinError(3,6.066328);
   hdirt_stack_3->SetBinError(4,5.945922);
   hdirt_stack_3->SetBinError(5,4.380076);
   hdirt_stack_3->SetBinError(6,3.082402);
   hdirt_stack_3->SetBinError(7,2.734568);
   hdirt_stack_3->SetBinError(8,1.804181);
   hdirt_stack_3->SetBinError(9,1.759382);
   hdirt_stack_3->SetBinError(10,1.018372);
   hdirt_stack_3->SetBinError(11,0.6935586);
   hdirt_stack_3->SetBinError(13,0.4065989);
   hdirt_stack_3->SetBinError(21,0.3243973);
   hdirt_stack_3->SetEntries(657);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,2.085408);
   houtFV_stack_4->SetBinContent(2,17.39999);
   houtFV_stack_4->SetBinContent(3,69.91254);
   houtFV_stack_4->SetBinContent(4,79.79003);
   houtFV_stack_4->SetBinContent(5,53.57149);
   houtFV_stack_4->SetBinContent(6,31.19145);
   houtFV_stack_4->SetBinContent(7,16.68372);
   houtFV_stack_4->SetBinContent(8,13.22029);
   houtFV_stack_4->SetBinContent(9,7.309643);
   houtFV_stack_4->SetBinContent(10,2.88118);
   houtFV_stack_4->SetBinContent(11,2.977543);
   houtFV_stack_4->SetBinContent(12,2.340906);
   houtFV_stack_4->SetBinContent(13,1.072095);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.5884556);
   houtFV_stack_4->SetBinContent(16,0.3401776);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(1,0.7173404);
   houtFV_stack_4->SetBinError(2,2.049468);
   houtFV_stack_4->SetBinError(3,4.205795);
   houtFV_stack_4->SetBinError(4,4.457754);
   houtFV_stack_4->SetBinError(5,3.66719);
   houtFV_stack_4->SetBinError(6,2.720245);
   houtFV_stack_4->SetBinError(7,2.017633);
   houtFV_stack_4->SetBinError(8,1.853585);
   houtFV_stack_4->SetBinError(9,1.45574);
   houtFV_stack_4->SetBinError(10,0.9004364);
   houtFV_stack_4->SetBinError(11,0.854493);
   houtFV_stack_4->SetBinError(12,0.8093475);
   houtFV_stack_4->SetBinError(13,0.5551335);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.3397478);
   houtFV_stack_4->SetBinError(16,0.3401776);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(1301);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.9887897);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.585914);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.26176);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.67919);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,11.89508);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,11.8534);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.29116);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.029177);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.143745);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.194234);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.938726);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.395672);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.422076);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.8916399);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.26879);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2477203);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7009387);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.041287);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.214676);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.1344);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.11633);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.111467);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9382263);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6885668);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6204281);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4531823);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4122573);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.406154);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2909527);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3481013);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.952344);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.716358);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9753399);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4609878);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4673469);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2949384);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.566976);
   hNCpi0inFVres_stack_7->SetBinContent(2,35.44726);
   hNCpi0inFVres_stack_7->SetBinContent(3,164.7386);
   hNCpi0inFVres_stack_7->SetBinContent(4,258.179);
   hNCpi0inFVres_stack_7->SetBinContent(5,218.4973);
   hNCpi0inFVres_stack_7->SetBinContent(6,163.0192);
   hNCpi0inFVres_stack_7->SetBinContent(7,115.4729);
   hNCpi0inFVres_stack_7->SetBinContent(8,75.59828);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.7146);
   hNCpi0inFVres_stack_7->SetBinContent(10,30.50911);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.96975);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.663898);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.947548);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.061878);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.868476);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.477876);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9057537);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.072658);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9491041);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.9896218);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4988997);
   hNCpi0inFVres_stack_7->SetBinError(2,1.939703);
   hNCpi0inFVres_stack_7->SetBinError(3,4.234237);
   hNCpi0inFVres_stack_7->SetBinError(4,5.216724);
   hNCpi0inFVres_stack_7->SetBinError(5,4.780538);
   hNCpi0inFVres_stack_7->SetBinError(6,4.185293);
   hNCpi0inFVres_stack_7->SetBinError(7,3.525032);
   hNCpi0inFVres_stack_7->SetBinError(8,2.816566);
   hNCpi0inFVres_stack_7->SetBinError(9,2.259217);
   hNCpi0inFVres_stack_7->SetBinError(10,1.835312);
   hNCpi0inFVres_stack_7->SetBinError(11,1.348263);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9771393);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9385715);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7369399);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4212073);
   hNCpi0inFVres_stack_7->SetBinError(16,0.408066);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2133949);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3105792);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3531893);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2839569);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.8572);
   hNCpi0inFVdis_stack_8->SetBinContent(3,30.33788);
   hNCpi0inFVdis_stack_8->SetBinContent(4,39.49344);
   hNCpi0inFVdis_stack_8->SetBinContent(5,34.7486);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.86298);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.29036);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.90224);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.35427);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.119515);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.63624);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.160364);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.719262);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.50968);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.353322);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.323094);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3068998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.384294);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8187113);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.785597);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.037371);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.950059);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.599506);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.533604);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.387038);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.134543);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9728148);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8365422);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7983328);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4905735);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4914984);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.377857);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.341991);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.09253378);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4456036);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,0.7319179);
   hCCpi0inFV_stack_11->SetBinContent(2,9.336205);
   hCCpi0inFV_stack_11->SetBinContent(3,37.45946);
   hCCpi0inFV_stack_11->SetBinContent(4,58.69088);
   hCCpi0inFV_stack_11->SetBinContent(5,73.71576);
   hCCpi0inFV_stack_11->SetBinContent(6,70.7606);
   hCCpi0inFV_stack_11->SetBinContent(7,52.86236);
   hCCpi0inFV_stack_11->SetBinContent(8,32.11718);
   hCCpi0inFV_stack_11->SetBinContent(9,21.72816);
   hCCpi0inFV_stack_11->SetBinContent(10,22.36895);
   hCCpi0inFV_stack_11->SetBinContent(11,13.2105);
   hCCpi0inFV_stack_11->SetBinContent(12,8.642933);
   hCCpi0inFV_stack_11->SetBinContent(13,6.67747);
   hCCpi0inFV_stack_11->SetBinContent(14,2.982615);
   hCCpi0inFV_stack_11->SetBinContent(15,3.232584);
   hCCpi0inFV_stack_11->SetBinContent(16,2.697381);
   hCCpi0inFV_stack_11->SetBinContent(17,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(18,1.802323);
   hCCpi0inFV_stack_11->SetBinContent(19,0.3917402);
   hCCpi0inFV_stack_11->SetBinContent(20,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(21,3.319412);
   hCCpi0inFV_stack_11->SetBinError(1,0.438694);
   hCCpi0inFV_stack_11->SetBinError(2,1.507263);
   hCCpi0inFV_stack_11->SetBinError(3,3.055595);
   hCCpi0inFV_stack_11->SetBinError(4,3.761241);
   hCCpi0inFV_stack_11->SetBinError(5,4.278612);
   hCCpi0inFV_stack_11->SetBinError(6,4.26019);
   hCCpi0inFV_stack_11->SetBinError(7,3.653877);
   hCCpi0inFV_stack_11->SetBinError(8,2.83128);
   hCCpi0inFV_stack_11->SetBinError(9,2.346868);
   hCCpi0inFV_stack_11->SetBinError(10,2.378997);
   hCCpi0inFV_stack_11->SetBinError(11,1.755409);
   hCCpi0inFV_stack_11->SetBinError(12,1.494567);
   hCCpi0inFV_stack_11->SetBinError(13,1.359199);
   hCCpi0inFV_stack_11->SetBinError(14,0.8556548);
   hCCpi0inFV_stack_11->SetBinError(15,0.8558709);
   hCCpi0inFV_stack_11->SetBinError(16,0.7607625);
   hCCpi0inFV_stack_11->SetBinError(17,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(18,0.7070809);
   hCCpi0inFV_stack_11->SetBinError(19,0.2770047);
   hCCpi0inFV_stack_11->SetBinError(20,0.48078);
   hCCpi0inFV_stack_11->SetBinError(21,0.9200768);
   hCCpi0inFV_stack_11->SetEntries(1821);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,0.7302274);
   hNCinFV_stack_12->SetBinContent(2,4.297917);
   hNCinFV_stack_12->SetBinContent(3,17.25567);
   hNCinFV_stack_12->SetBinContent(4,31.272);
   hNCinFV_stack_12->SetBinContent(5,25.37114);
   hNCinFV_stack_12->SetBinContent(6,13.13938);
   hNCinFV_stack_12->SetBinContent(7,10.89363);
   hNCinFV_stack_12->SetBinContent(8,8.596441);
   hNCinFV_stack_12->SetBinContent(9,3.620943);
   hNCinFV_stack_12->SetBinContent(10,3.032487);
   hNCinFV_stack_12->SetBinContent(11,5.271958);
   hNCinFV_stack_12->SetBinContent(12,1.997348);
   hNCinFV_stack_12->SetBinContent(13,0.9835768);
   hNCinFV_stack_12->SetBinContent(14,0.7817899);
   hNCinFV_stack_12->SetBinContent(15,0.9286332);
   hNCinFV_stack_12->SetBinContent(16,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,0.3917402);
   hNCinFV_stack_12->SetBinContent(18,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.7319179);
   hNCinFV_stack_12->SetBinError(1,0.4379386);
   hNCinFV_stack_12->SetBinError(2,1.018842);
   hNCinFV_stack_12->SetBinError(3,2.077602);
   hNCinFV_stack_12->SetBinError(4,2.810284);
   hNCinFV_stack_12->SetBinError(5,2.633518);
   hNCinFV_stack_12->SetBinError(6,1.781373);
   hNCinFV_stack_12->SetBinError(7,1.66536);
   hNCinFV_stack_12->SetBinError(8,1.508213);
   hNCinFV_stack_12->SetBinError(9,0.8988449);
   hNCinFV_stack_12->SetBinError(10,0.832162);
   hNCinFV_stack_12->SetBinError(11,1.194227);
   hNCinFV_stack_12->SetBinError(12,0.7334836);
   hNCinFV_stack_12->SetBinError(13,0.4398689);
   hNCinFV_stack_12->SetBinError(14,0.3908977);
   hNCinFV_stack_12->SetBinError(15,0.48078);
   hNCinFV_stack_12->SetBinError(16,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.2770047);
   hNCinFV_stack_12->SetBinError(18,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.438694);
   hNCinFV_stack_12->SetEntries(550);

   ci = 1445;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(2,6.605799);
   hnumuCCinFV_stack_13->SetBinContent(3,19.45722);
   hnumuCCinFV_stack_13->SetBinContent(4,27.95016);
   hnumuCCinFV_stack_13->SetBinContent(5,26.41292);
   hnumuCCinFV_stack_13->SetBinContent(6,16.6847);
   hnumuCCinFV_stack_13->SetBinContent(7,13.23291);
   hnumuCCinFV_stack_13->SetBinContent(8,8.892011);
   hnumuCCinFV_stack_13->SetBinContent(9,5.515913);
   hnumuCCinFV_stack_13->SetBinContent(10,2.959714);
   hnumuCCinFV_stack_13->SetBinContent(11,2.825234);
   hnumuCCinFV_stack_13->SetBinContent(12,2.515963);
   hnumuCCinFV_stack_13->SetBinContent(13,1.113091);
   hnumuCCinFV_stack_13->SetBinContent(14,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(21,0.9903756);
   hnumuCCinFV_stack_13->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(2,1.772499);
   hnumuCCinFV_stack_13->SetBinError(3,3.030649);
   hnumuCCinFV_stack_13->SetBinError(4,3.262732);
   hnumuCCinFV_stack_13->SetBinError(5,2.954938);
   hnumuCCinFV_stack_13->SetBinError(6,2.257304);
   hnumuCCinFV_stack_13->SetBinError(7,1.931905);
   hnumuCCinFV_stack_13->SetBinError(8,1.558846);
   hnumuCCinFV_stack_13->SetBinError(9,1.127474);
   hnumuCCinFV_stack_13->SetBinError(10,0.8034165);
   hnumuCCinFV_stack_13->SetBinError(11,0.8967408);
   hnumuCCinFV_stack_13->SetBinError(12,0.7810626);
   hnumuCCinFV_stack_13->SetBinError(13,0.6470717);
   hnumuCCinFV_stack_13->SetBinError(14,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_13->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(21,0.5091688);
   hnumuCCinFV_stack_13->SetEntries(526);

   ci = 1446;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(2,1.19108);
   hnueCCinFV_stack_14->SetBinContent(3,1.433134);
   hnueCCinFV_stack_14->SetBinContent(4,5.46066);
   hnueCCinFV_stack_14->SetBinContent(5,2.676415);
   hnueCCinFV_stack_14->SetBinContent(6,1.373598);
   hnueCCinFV_stack_14->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(8,1.014577);
   hnueCCinFV_stack_14->SetBinContent(9,2.054354);
   hnueCCinFV_stack_14->SetBinContent(10,1.477872);
   hnueCCinFV_stack_14->SetBinContent(11,0.8492388);
   hnueCCinFV_stack_14->SetBinContent(12,0.4656768);
   hnueCCinFV_stack_14->SetBinContent(13,0.9387181);
   hnueCCinFV_stack_14->SetBinContent(14,0.6080654);
   hnueCCinFV_stack_14->SetBinContent(15,0.8753801);
   hnueCCinFV_stack_14->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,0.2175051);
   hnueCCinFV_stack_14->SetBinContent(18,0.8007563);
   hnueCCinFV_stack_14->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.0002655144);
   hnueCCinFV_stack_14->SetBinContent(21,5.73311);
   hnueCCinFV_stack_14->SetBinError(2,0.6525403);
   hnueCCinFV_stack_14->SetBinError(3,0.7447983);
   hnueCCinFV_stack_14->SetBinError(4,1.723729);
   hnueCCinFV_stack_14->SetBinError(5,0.9320736);
   hnueCCinFV_stack_14->SetBinError(6,0.6236594);
   hnueCCinFV_stack_14->SetBinError(7,0.2781975);
   hnueCCinFV_stack_14->SetBinError(8,0.5442723);
   hnueCCinFV_stack_14->SetBinError(9,1.187085);
   hnueCCinFV_stack_14->SetBinError(10,0.7166852);
   hnueCCinFV_stack_14->SetBinError(11,0.5074835);
   hnueCCinFV_stack_14->SetBinError(12,0.3335974);
   hnueCCinFV_stack_14->SetBinError(13,0.5844983);
   hnueCCinFV_stack_14->SetBinError(14,0.3515683);
   hnueCCinFV_stack_14->SetBinError(15,0.5191111);
   hnueCCinFV_stack_14->SetBinError(16,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,0.2175051);
   hnueCCinFV_stack_14->SetBinError(18,0.4932626);
   hnueCCinFV_stack_14->SetBinError(19,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.0002655145);
   hnueCCinFV_stack_14->SetBinError(21,2.013663);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1447;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__2->SetBinContent(1,14.87746);
   hmcerror__2->SetBinContent(2,113.2157);
   hmcerror__2->SetBinContent(3,451.3723);
   hmcerror__2->SetBinContent(4,618.544);
   hmcerror__2->SetBinContent(5,508.5953);
   hmcerror__2->SetBinContent(6,362.4174);
   hmcerror__2->SetBinContent(7,265.6973);
   hmcerror__2->SetBinContent(8,176.1977);
   hmcerror__2->SetBinContent(9,113.9576);
   hmcerror__2->SetBinContent(10,84.18477);
   hmcerror__2->SetBinContent(11,53.37028);
   hmcerror__2->SetBinContent(12,33.14382);
   hmcerror__2->SetBinContent(13,23.25403);
   hmcerror__2->SetBinContent(14,14.09971);
   hmcerror__2->SetBinContent(15,10.13023);
   hmcerror__2->SetBinContent(16,7.209103);
   hmcerror__2->SetBinContent(17,2.357377);
   hmcerror__2->SetBinContent(18,5.107182);
   hmcerror__2->SetBinContent(19,2.898754);
   hmcerror__2->SetBinContent(20,1.612285);
   hmcerror__2->SetBinContent(21,16.13535);
   hmcerror__2->SetBinError(1,4.999325);
   hmcerror__2->SetBinError(2,26.68508);
   hmcerror__2->SetBinError(3,99.32536);
   hmcerror__2->SetBinError(4,134.741);
   hmcerror__2->SetBinError(5,109.789);
   hmcerror__2->SetBinError(6,82.13125);
   hmcerror__2->SetBinError(7,58.58744);
   hmcerror__2->SetBinError(8,38.68569);
   hmcerror__2->SetBinError(9,25.82833);
   hmcerror__2->SetBinError(10,20.18775);
   hmcerror__2->SetBinError(11,12.92089);
   hmcerror__2->SetBinError(12,9.195881);
   hmcerror__2->SetBinError(13,7.532072);
   hmcerror__2->SetBinError(14,4.198382);
   hmcerror__2->SetBinError(15,3.834773);
   hmcerror__2->SetBinError(16,4.809088);
   hmcerror__2->SetBinError(17,1.521744);
   hmcerror__2->SetBinError(18,2.5754);
   hmcerror__2->SetBinError(19,1.700456);
   hmcerror__2->SetBinError(20,1.521984);
   hmcerror__2->SetBinError(21,6.666875);
   hmcerror__2->SetEntries(2848.296);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3001[20] = {
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
   1170};
   Double_t _fy3001[20] = {
   9,
   103,
   436,
   685,
   545,
   397,
   238,
   161,
   104,
   62,
   55,
   46,
   25,
   19,
   14,
   9,
   6,
   4,
   5,
   1};
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
   3.19354,
   10.14889,
   20.88061,
   26.1725,
   23.34524,
   19.92486,
   15.42725,
   12.68858,
   10.19804,
   8.0018,
   7.546,
   6.9153,
   5.1474,
   4.5151,
   3.9102,
   3.19354,
   2.67925,
   2.29683,
   2.48995,
   1};
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
   2.9582,
   10.14889,
   20.88061,
   26.1725,
   23.34524,
   19.92486,
   15.42725,
   12.68858,
   10.19804,
   7.7989,
   7.3425,
   6.7108,
   4.9374,
   4.3011,
   3.6898,
   2.9582,
   2.41858,
   1.98186,
   2.21064,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(782.2898);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2924.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 37.8","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 278.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.0","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  86.0","F");

   ci = 1438;
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

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1156.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  218.8","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 420.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 129.5","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 136.2","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 22.2","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3002[20] = {
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
   1170};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
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
   Double_t _fely3002[20] = {
   0.3360336,
   0.2357012,
   0.220052,
   0.2178358,
   0.2158672,
   0.2266206,
   0.2205044,
   0.2195585,
   0.2266487,
   0.2398029,
   0.242099,
   0.2774539,
   0.3239039,
   0.2977637,
   0.3785475,
   0.6670855,
   0.6455244,
   0.5042703,
   0.5866161,
   0.943992};
   Double_t _fehx3002[20] = {
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
   Double_t _fehy3002[20] = {
   0.3360336,
   0.2357012,
   0.220052,
   0.2178358,
   0.2158672,
   0.2266206,
   0.2205044,
   0.2195585,
   0.2266487,
   0.2398029,
   0.242099,
   0.2774539,
   0.3239039,
   0.2977637,
   0.3785475,
   0.6670855,
   0.6455244,
   0.5042703,
   0.5866161,
   0.943992};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3003[20] = {
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
   1170};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   0.2028745,
   0.1763413,
   0.1777296,
   0.1954379,
   0.2074719,
   0.2115838,
   0.2085734,
   0.2132199,
   0.2171492,
   0.2200567,
   0.2269879,
   0.249564,
   0.2493116,
   0.2565099,
   0.3005602,
   0.2980752,
   0.4223228,
   0.3608896,
   0.4267054,
   0.5440679};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   0.2028745,
   0.1763413,
   0.1777296,
   0.1954379,
   0.2074719,
   0.2115838,
   0.2085734,
   0.2132199,
   0.2171492,
   0.2200567,
   0.2269879,
   0.249564,
   0.2493116,
   0.2565099,
   0.3005602,
   0.2980752,
   0.4223228,
   0.3608896,
   0.4267054,
   0.5440679};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[20] = {
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
   1170};
   Double_t _fy3004[20] = {
   0.6049421,
   0.9097676,
   0.9659433,
   1.107439,
   1.071579,
   1.095422,
   0.8957561,
   0.9137464,
   0.9126205,
   0.7364753,
   1.030536,
   1.387891,
   1.075082,
   1.347545,
   1.382002,
   1.248422,
   2.545202,
   0.7832108,
   1.724879,
   0.6202379};
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
   0.2146563,
   0.08964206,
   0.04626029,
   0.04231308,
   0.0459014,
   0.05497766,
   0.05806324,
   0.07201331,
   0.0894898,
   0.09505045,
   0.1413895,
   0.2086452,
   0.2213552,
   0.3202264,
   0.3859932,
   0.4429871,
   1.136539,
   0.4497255,
   0.8589725,
   0.6202379};
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
   0.1988377,
   0.08964206,
   0.04626029,
   0.04231308,
   0.0459014,
   0.05497766,
   0.05806324,
   0.07201331,
   0.0894898,
   0.09264027,
   0.1375766,
   0.2024752,
   0.2123245,
   0.3050488,
   0.3642365,
   0.4103423,
   1.025963,
   0.3880536,
   0.7626173,
   0.8433437};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.928281);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_12_pi0_energy_all",20,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

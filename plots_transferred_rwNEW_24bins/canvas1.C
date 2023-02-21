#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 16:15:24 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-246.1538,-17.42584,1805.128,1926.932);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__1->SetBinContent(2,6.185596);
   hmc__1->SetBinContent(3,158.4282);
   hmc__1->SetBinContent(4,613.2325);
   hmc__1->SetBinContent(5,795.1882);
   hmc__1->SetBinContent(6,862.9556);
   hmc__1->SetBinContent(7,871.2922);
   hmc__1->SetBinContent(8,773.9086);
   hmc__1->SetBinContent(9,661.1877);
   hmc__1->SetBinContent(10,584.2072);
   hmc__1->SetBinContent(11,452.6259);
   hmc__1->SetBinContent(12,357.3933);
   hmc__1->SetBinContent(13,292.415);
   hmc__1->SetBinContent(14,219.0049);
   hmc__1->SetBinContent(15,170.0676);
   hmc__1->SetBinContent(16,138.241);
   hmc__1->SetBinContent(17,96.66814);
   hmc__1->SetBinContent(18,73.48349);
   hmc__1->SetBinContent(19,66.92934);
   hmc__1->SetBinContent(20,49.58694);
   hmc__1->SetBinContent(21,40.96579);
   hmc__1->SetBinContent(22,36.69331);
   hmc__1->SetBinContent(23,23.13391);
   hmc__1->SetBinContent(24,20.65702);
   hmc__1->SetBinContent(25,109.3596);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,6.383793);
   hmc__1->SetBinError(3,45.08012);
   hmc__1->SetBinError(4,160.1196);
   hmc__1->SetBinError(5,191.5847);
   hmc__1->SetBinError(6,211.8234);
   hmc__1->SetBinError(7,261.8788);
   hmc__1->SetBinError(8,255.7223);
   hmc__1->SetBinError(9,228.5587);
   hmc__1->SetBinError(10,191.1715);
   hmc__1->SetBinError(11,146.7139);
   hmc__1->SetBinError(12,116.1504);
   hmc__1->SetBinError(13,101.3123);
   hmc__1->SetBinError(14,70.64107);
   hmc__1->SetBinError(15,55.68564);
   hmc__1->SetBinError(16,60.07362);
   hmc__1->SetBinError(17,32.26988);
   hmc__1->SetBinError(18,26.05067);
   hmc__1->SetBinError(19,25.894);
   hmc__1->SetBinError(20,22.72451);
   hmc__1->SetBinError(21,21.63677);
   hmc__1->SetBinError(22,21.4121);
   hmc__1->SetBinError(23,14.88709);
   hmc__1->SetBinError(24,9.643176);
   hmc__1->SetBinError(25,32.46423);
   hmc__1->SetMinimum(-17.42584);
   hmc__1->SetMaximum(1829.714);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,1600);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(914.8568);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(2,0.7302274);
   hbadmatch_stack_1->SetBinContent(3,6.406433);
   hbadmatch_stack_1->SetBinContent(4,23.12359);
   hbadmatch_stack_1->SetBinContent(5,17.12038);
   hbadmatch_stack_1->SetBinContent(6,17.69557);
   hbadmatch_stack_1->SetBinContent(7,22.64818);
   hbadmatch_stack_1->SetBinContent(8,13.05392);
   hbadmatch_stack_1->SetBinContent(9,15.34177);
   hbadmatch_stack_1->SetBinContent(10,12.46452);
   hbadmatch_stack_1->SetBinContent(11,9.867329);
   hbadmatch_stack_1->SetBinContent(12,9.401293);
   hbadmatch_stack_1->SetBinContent(13,6.453421);
   hbadmatch_stack_1->SetBinContent(14,6.776635);
   hbadmatch_stack_1->SetBinContent(15,4.098746);
   hbadmatch_stack_1->SetBinContent(16,3.851709);
   hbadmatch_stack_1->SetBinContent(17,2.197444);
   hbadmatch_stack_1->SetBinContent(18,0.9835768);
   hbadmatch_stack_1->SetBinContent(19,1.221135);
   hbadmatch_stack_1->SetBinContent(20,1.608988);
   hbadmatch_stack_1->SetBinContent(21,1.073786);
   hbadmatch_stack_1->SetBinContent(22,0.6156429);
   hbadmatch_stack_1->SetBinContent(23,0.7910599);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,2.811353);
   hbadmatch_stack_1->SetBinError(2,0.4379386);
   hbadmatch_stack_1->SetBinError(3,1.304233);
   hbadmatch_stack_1->SetBinError(4,3.249547);
   hbadmatch_stack_1->SetBinError(5,2.225963);
   hbadmatch_stack_1->SetBinError(6,2.201871);
   hbadmatch_stack_1->SetBinError(7,3.211482);
   hbadmatch_stack_1->SetBinError(8,1.863649);
   hbadmatch_stack_1->SetBinError(9,2.035799);
   hbadmatch_stack_1->SetBinError(10,1.860025);
   hbadmatch_stack_1->SetBinError(11,1.67496);
   hbadmatch_stack_1->SetBinError(12,2.152498);
   hbadmatch_stack_1->SetBinError(13,1.357355);
   hbadmatch_stack_1->SetBinError(14,1.385375);
   hbadmatch_stack_1->SetBinError(15,1.029288);
   hbadmatch_stack_1->SetBinError(16,1.029719);
   hbadmatch_stack_1->SetBinError(17,0.760276);
   hbadmatch_stack_1->SetBinError(18,0.4398689);
   hbadmatch_stack_1->SetBinError(19,0.5887711);
   hbadmatch_stack_1->SetBinError(20,0.6801404);
   hbadmatch_stack_1->SetBinError(21,0.5557297);
   hbadmatch_stack_1->SetBinError(22,0.3561798);
   hbadmatch_stack_1->SetBinError(23,0.4679942);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.8391127);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,1.37261);
   hext_stack_2->SetBinContent(3,39.38757);
   hext_stack_2->SetBinContent(4,121.192);
   hext_stack_2->SetBinContent(5,110.049);
   hext_stack_2->SetBinContent(6,101.0868);
   hext_stack_2->SetBinContent(7,69.06703);
   hext_stack_2->SetBinContent(8,62.82846);
   hext_stack_2->SetBinContent(9,41.47682);
   hext_stack_2->SetBinContent(10,43.89323);
   hext_stack_2->SetBinContent(11,29.27891);
   hext_stack_2->SetBinContent(12,28.50042);
   hext_stack_2->SetBinContent(13,18.44366);
   hext_stack_2->SetBinContent(14,18.51868);
   hext_stack_2->SetBinContent(15,11.73065);
   hext_stack_2->SetBinContent(16,6.896183);
   hext_stack_2->SetBinContent(17,6.952434);
   hext_stack_2->SetBinContent(18,5.758588);
   hext_stack_2->SetBinContent(19,8.07844);
   hext_stack_2->SetBinContent(20,2.192989);
   hext_stack_2->SetBinContent(21,4.538791);
   hext_stack_2->SetBinContent(22,2.435184);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,3.62185);
   hext_stack_2->SetBinContent(25,16.71352);
   hext_stack_2->SetBinError(2,0.8259691);
   hext_stack_2->SetBinError(3,4.284258);
   hext_stack_2->SetBinError(4,7.663915);
   hext_stack_2->SetBinError(5,7.086018);
   hext_stack_2->SetBinError(6,6.781067);
   hext_stack_2->SetBinError(7,5.597641);
   hext_stack_2->SetBinError(8,5.391925);
   hext_stack_2->SetBinError(9,4.439601);
   hext_stack_2->SetBinError(10,4.564444);
   hext_stack_2->SetBinError(11,3.663327);
   hext_stack_2->SetBinError(12,3.771139);
   hext_stack_2->SetBinError(13,2.889571);
   hext_stack_2->SetBinError(14,2.934435);
   hext_stack_2->SetBinError(15,2.336895);
   hext_stack_2->SetBinError(16,1.65573);
   hext_stack_2->SetBinError(17,1.808318);
   hext_stack_2->SetBinError(18,1.518408);
   hext_stack_2->SetBinError(19,1.942156);
   hext_stack_2->SetBinError(20,0.9009267);
   hext_stack_2->SetBinError(21,1.345212);
   hext_stack_2->SetBinError(22,0.9256422);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,1.422134);
   hext_stack_2->SetBinError(25,2.869119);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,6.626352);
   hdirt_stack_3->SetBinContent(4,15.2553);
   hdirt_stack_3->SetBinContent(5,13.0485);
   hdirt_stack_3->SetBinContent(6,9.740909);
   hdirt_stack_3->SetBinContent(7,8.597481);
   hdirt_stack_3->SetBinContent(8,5.199712);
   hdirt_stack_3->SetBinContent(9,5.107248);
   hdirt_stack_3->SetBinContent(10,2.657291);
   hdirt_stack_3->SetBinContent(11,3.688675);
   hdirt_stack_3->SetBinContent(12,1.011338);
   hdirt_stack_3->SetBinContent(13,0.4244012);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,1.059498);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinError(3,1.35709);
   hdirt_stack_3->SetBinError(4,2.024389);
   hdirt_stack_3->SetBinError(5,1.905209);
   hdirt_stack_3->SetBinError(6,1.598967);
   hdirt_stack_3->SetBinError(7,1.689565);
   hdirt_stack_3->SetBinError(8,1.187723);
   hdirt_stack_3->SetBinError(9,1.373458);
   hdirt_stack_3->SetBinError(10,0.895717);
   hdirt_stack_3->SetBinError(11,1.415966);
   hdirt_stack_3->SetBinError(12,0.5382687);
   hdirt_stack_3->SetBinError(13,0.2451693);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.587332);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,2.392469);
   houtFV_stack_4->SetBinContent(3,30.60913);
   houtFV_stack_4->SetBinContent(4,103.5209);
   houtFV_stack_4->SetBinContent(5,114.3317);
   houtFV_stack_4->SetBinContent(6,96.80026);
   houtFV_stack_4->SetBinContent(7,83.35394);
   houtFV_stack_4->SetBinContent(8,64.18646);
   houtFV_stack_4->SetBinContent(9,55.99097);
   houtFV_stack_4->SetBinContent(10,44.00306);
   houtFV_stack_4->SetBinContent(11,30.5831);
   houtFV_stack_4->SetBinContent(12,20.40191);
   houtFV_stack_4->SetBinContent(13,19.35806);
   houtFV_stack_4->SetBinContent(14,12.87745);
   houtFV_stack_4->SetBinContent(15,9.971279);
   houtFV_stack_4->SetBinContent(16,10.28238);
   houtFV_stack_4->SetBinContent(17,5.909914);
   houtFV_stack_4->SetBinContent(18,2.89965);
   houtFV_stack_4->SetBinContent(19,3.136242);
   houtFV_stack_4->SetBinContent(20,3.076205);
   houtFV_stack_4->SetBinContent(21,1.804013);
   houtFV_stack_4->SetBinContent(22,1.906171);
   houtFV_stack_4->SetBinContent(23,1.073786);
   houtFV_stack_4->SetBinContent(24,0.7834804);
   houtFV_stack_4->SetBinContent(25,2.979234);
   houtFV_stack_4->SetBinError(2,0.7848912);
   houtFV_stack_4->SetBinError(3,2.675124);
   houtFV_stack_4->SetBinError(4,5.122145);
   houtFV_stack_4->SetBinError(5,5.390948);
   houtFV_stack_4->SetBinError(6,5.131927);
   houtFV_stack_4->SetBinError(7,4.588003);
   houtFV_stack_4->SetBinError(8,3.956917);
   houtFV_stack_4->SetBinError(9,3.755687);
   houtFV_stack_4->SetBinError(10,3.358347);
   houtFV_stack_4->SetBinError(11,2.767808);
   houtFV_stack_4->SetBinError(12,2.2189);
   houtFV_stack_4->SetBinError(13,2.262532);
   houtFV_stack_4->SetBinError(14,1.796759);
   houtFV_stack_4->SetBinError(15,1.682234);
   houtFV_stack_4->SetBinError(16,1.693252);
   houtFV_stack_4->SetBinError(17,1.206563);
   houtFV_stack_4->SetBinError(18,0.7872768);
   houtFV_stack_4->SetBinError(19,0.9466152);
   houtFV_stack_4->SetBinError(20,0.9213145);
   houtFV_stack_4->SetBinError(21,0.7075491);
   houtFV_stack_4->SetBinError(22,0.6956513);
   houtFV_stack_4->SetBinError(23,0.5557297);
   houtFV_stack_4->SetBinError(24,0.3917439);
   houtFV_stack_4->SetBinError(25,0.8548804);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.74193);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,9.96715);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.50805);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,16.40874);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.75793);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,14.27773);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.811615);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.93493);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.850048);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.94787);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.733384);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.673176);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.491326);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7247357);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.031308);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.32459);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4406266);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.053488);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.133456);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.283032);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.335283);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.317555);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9411594);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9621881);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6030906);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6866337);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5882811);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4146887);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3753592);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.183661);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3482878);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3503303);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.436854);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.998598);
   hNCpi0inFVqe_stack_6->SetBinContent(6,4.880364);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.745993);
   hNCpi0inFVqe_stack_6->SetBinContent(8,3.249698);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.147476);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.036876);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.869308);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.074322);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9205402);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3351899);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5603252);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.7599513);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3957989);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5665421);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4303483);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4838504);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4434882);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3674124);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3707519);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.046422);
   hNCpi0inFVres_stack_7->SetBinContent(3,45.85798);
   hNCpi0inFVres_stack_7->SetBinContent(4,221.6124);
   hNCpi0inFVres_stack_7->SetBinContent(5,350.7526);
   hNCpi0inFVres_stack_7->SetBinContent(6,399.297);
   hNCpi0inFVres_stack_7->SetBinContent(7,390.072);
   hNCpi0inFVres_stack_7->SetBinContent(8,333.8362);
   hNCpi0inFVres_stack_7->SetBinContent(9,268.3383);
   hNCpi0inFVres_stack_7->SetBinContent(10,208.6796);
   hNCpi0inFVres_stack_7->SetBinContent(11,153.692);
   hNCpi0inFVres_stack_7->SetBinContent(12,107.9098);
   hNCpi0inFVres_stack_7->SetBinContent(13,82.06903);
   hNCpi0inFVres_stack_7->SetBinContent(14,54.14515);
   hNCpi0inFVres_stack_7->SetBinContent(15,36.25137);
   hNCpi0inFVres_stack_7->SetBinContent(16,27.8757);
   hNCpi0inFVres_stack_7->SetBinContent(17,20.72149);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.17094);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.32138);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.016629);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.065207);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.765188);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.258084);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.215594);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.407159);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3663515);
   hNCpi0inFVres_stack_7->SetBinError(3,2.182068);
   hNCpi0inFVres_stack_7->SetBinError(4,4.808477);
   hNCpi0inFVres_stack_7->SetBinError(5,6.099071);
   hNCpi0inFVres_stack_7->SetBinError(6,6.539506);
   hNCpi0inFVres_stack_7->SetBinError(7,6.446502);
   hNCpi0inFVres_stack_7->SetBinError(8,5.974416);
   hNCpi0inFVres_stack_7->SetBinError(9,5.356681);
   hNCpi0inFVres_stack_7->SetBinError(10,4.74728);
   hNCpi0inFVres_stack_7->SetBinError(11,4.097199);
   hNCpi0inFVres_stack_7->SetBinError(12,3.402582);
   hNCpi0inFVres_stack_7->SetBinError(13,3.003146);
   hNCpi0inFVres_stack_7->SetBinError(14,2.394685);
   hNCpi0inFVres_stack_7->SetBinError(15,1.952934);
   hNCpi0inFVres_stack_7->SetBinError(16,1.725629);
   hNCpi0inFVres_stack_7->SetBinError(17,1.552125);
   hNCpi0inFVres_stack_7->SetBinError(18,1.292729);
   hNCpi0inFVres_stack_7->SetBinError(19,1.068337);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9077946);
   hNCpi0inFVres_stack_7->SetBinError(21,0.787493);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6489433);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5299213);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5047277);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9674998);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.3604);
   hNCpi0inFVdis_stack_8->SetBinContent(4,33.53957);
   hNCpi0inFVdis_stack_8->SetBinContent(5,44.44074);
   hNCpi0inFVdis_stack_8->SetBinContent(6,50.43326);
   hNCpi0inFVdis_stack_8->SetBinContent(7,60.60568);
   hNCpi0inFVdis_stack_8->SetBinContent(8,56.5188);
   hNCpi0inFVdis_stack_8->SetBinContent(9,49.95514);
   hNCpi0inFVdis_stack_8->SetBinContent(10,47.96677);
   hNCpi0inFVdis_stack_8->SetBinContent(11,36.32445);
   hNCpi0inFVdis_stack_8->SetBinContent(12,32.6129);
   hNCpi0inFVdis_stack_8->SetBinContent(13,26.92877);
   hNCpi0inFVdis_stack_8->SetBinContent(14,16.26145);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.22441);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.8985);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.922383);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.552372);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.532105);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.824396);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.141842);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.568392);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.385294);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.99403);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.246557);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.032843);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.83849);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.228981);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.26111);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.526166);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.390686);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.283222);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.281787);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.954661);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.846306);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.729122);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.330416);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.226025);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.24576);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9325387);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8152967);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6702836);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.737028);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7098592);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6402383);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5005873);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5031726);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9398833);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.8232222);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.3577516);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(4,20.29116);
   hCCpi0inFV_stack_10->SetBinContent(5,40.61705);
   hCCpi0inFV_stack_10->SetBinContent(6,61.3905);
   hCCpi0inFV_stack_10->SetBinContent(7,102.7392);
   hCCpi0inFV_stack_10->SetBinContent(8,111.9115);
   hCCpi0inFV_stack_10->SetBinContent(9,114.28);
   hCCpi0inFV_stack_10->SetBinContent(10,115.1004);
   hCCpi0inFV_stack_10->SetBinContent(11,96.01763);
   hCCpi0inFV_stack_10->SetBinContent(12,84.63703);
   hCCpi0inFV_stack_10->SetBinContent(13,67.50489);
   hCCpi0inFV_stack_10->SetBinContent(14,56.25027);
   hCCpi0inFV_stack_10->SetBinContent(15,46.94443);
   hCCpi0inFV_stack_10->SetBinContent(16,38.80333);
   hCCpi0inFV_stack_10->SetBinContent(17,25.77666);
   hCCpi0inFV_stack_10->SetBinContent(18,19.68762);
   hCCpi0inFV_stack_10->SetBinContent(19,18.53087);
   hCCpi0inFV_stack_10->SetBinContent(20,14.79157);
   hCCpi0inFV_stack_10->SetBinContent(21,10.67737);
   hCCpi0inFV_stack_10->SetBinContent(22,8.125718);
   hCCpi0inFV_stack_10->SetBinContent(23,5.958468);
   hCCpi0inFV_stack_10->SetBinContent(24,6.418056);
   hCCpi0inFV_stack_10->SetBinContent(25,25.24398);
   hCCpi0inFV_stack_10->SetBinError(3,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(4,2.283192);
   hCCpi0inFV_stack_10->SetBinError(5,3.128765);
   hCCpi0inFV_stack_10->SetBinError(6,3.905179);
   hCCpi0inFV_stack_10->SetBinError(7,5.078547);
   hCCpi0inFV_stack_10->SetBinError(8,5.225564);
   hCCpi0inFV_stack_10->SetBinError(9,5.377023);
   hCCpi0inFV_stack_10->SetBinError(10,5.385528);
   hCCpi0inFV_stack_10->SetBinError(11,4.930695);
   hCCpi0inFV_stack_10->SetBinError(12,4.616445);
   hCCpi0inFV_stack_10->SetBinError(13,4.169974);
   hCCpi0inFV_stack_10->SetBinError(14,3.783738);
   hCCpi0inFV_stack_10->SetBinError(15,3.488709);
   hCCpi0inFV_stack_10->SetBinError(16,3.187811);
   hCCpi0inFV_stack_10->SetBinError(17,2.543432);
   hCCpi0inFV_stack_10->SetBinError(18,2.162678);
   hCCpi0inFV_stack_10->SetBinError(19,2.151277);
   hCCpi0inFV_stack_10->SetBinError(20,1.987341);
   hCCpi0inFV_stack_10->SetBinError(21,1.608936);
   hCCpi0inFV_stack_10->SetBinError(22,1.374275);
   hCCpi0inFV_stack_10->SetBinError(23,1.208984);
   hCCpi0inFV_stack_10->SetBinError(24,1.320762);
   hCCpi0inFV_stack_10->SetBinError(25,2.581935);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,6.750401);
   hNCinFV_stack_11->SetBinContent(4,21.00716);
   hNCinFV_stack_11->SetBinContent(5,34.90237);
   hNCinFV_stack_11->SetBinContent(6,38.70891);
   hNCinFV_stack_11->SetBinContent(7,44.55519);
   hNCinFV_stack_11->SetBinContent(8,50.41513);
   hNCinFV_stack_11->SetBinContent(9,43.8263);
   hNCinFV_stack_11->SetBinContent(10,41.28626);
   hNCinFV_stack_11->SetBinContent(11,41.38722);
   hNCinFV_stack_11->SetBinContent(12,29.14241);
   hNCinFV_stack_11->SetBinContent(13,30.07311);
   hNCinFV_stack_11->SetBinContent(14,24.18649);
   hNCinFV_stack_11->SetBinContent(15,20.6102);
   hNCinFV_stack_11->SetBinContent(16,14.77844);
   hNCinFV_stack_11->SetBinContent(17,12.26726);
   hNCinFV_stack_11->SetBinContent(18,12.37883);
   hNCinFV_stack_11->SetBinContent(19,9.131644);
   hNCinFV_stack_11->SetBinContent(20,5.431718);
   hNCinFV_stack_11->SetBinContent(21,5.715261);
   hNCinFV_stack_11->SetBinContent(22,8.348164);
   hNCinFV_stack_11->SetBinContent(23,3.911248);
   hNCinFV_stack_11->SetBinContent(24,2.102163);
   hNCinFV_stack_11->SetBinContent(25,10.78097);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,1.27217);
   hNCinFV_stack_11->SetBinError(4,2.322651);
   hNCinFV_stack_11->SetBinError(5,3.040608);
   hNCinFV_stack_11->SetBinError(6,3.090563);
   hNCinFV_stack_11->SetBinError(7,3.299888);
   hNCinFV_stack_11->SetBinError(8,3.581544);
   hNCinFV_stack_11->SetBinError(9,3.310118);
   hNCinFV_stack_11->SetBinError(10,3.194009);
   hNCinFV_stack_11->SetBinError(11,3.2434);
   hNCinFV_stack_11->SetBinError(12,2.662458);
   hNCinFV_stack_11->SetBinError(13,2.767351);
   hNCinFV_stack_11->SetBinError(14,2.483052);
   hNCinFV_stack_11->SetBinError(15,2.271682);
   hNCinFV_stack_11->SetBinError(16,1.981098);
   hNCinFV_stack_11->SetBinError(17,1.744413);
   hNCinFV_stack_11->SetBinError(18,1.722878);
   hNCinFV_stack_11->SetBinError(19,1.558352);
   hNCinFV_stack_11->SetBinError(20,1.145075);
   hNCinFV_stack_11->SetBinError(21,1.209926);
   hNCinFV_stack_11->SetBinError(22,1.50831);
   hNCinFV_stack_11->SetBinError(23,0.9814756);
   hNCinFV_stack_11->SetBinError(24,0.6787356);
   hNCinFV_stack_11->SetBinError(25,1.745295);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,6.117997);
   hnumuCCinFV_stack_12->SetBinContent(4,38.76062);
   hnumuCCinFV_stack_12->SetBinContent(5,51.00599);
   hnumuCCinFV_stack_12->SetBinContent(6,62.65649);
   hnumuCCinFV_stack_12->SetBinContent(7,69.71792);
   hnumuCCinFV_stack_12->SetBinContent(8,55.63494);
   hnumuCCinFV_stack_12->SetBinContent(9,51.8372);
   hnumuCCinFV_stack_12->SetBinContent(10,55.50727);
   hnumuCCinFV_stack_12->SetBinContent(11,43.08133);
   hnumuCCinFV_stack_12->SetBinContent(12,36.94005);
   hnumuCCinFV_stack_12->SetBinContent(13,36.45506);
   hnumuCCinFV_stack_12->SetBinContent(14,25.14353);
   hnumuCCinFV_stack_12->SetBinContent(15,21.42886);
   hnumuCCinFV_stack_12->SetBinContent(16,17.95655);
   hnumuCCinFV_stack_12->SetBinContent(17,12.35802);
   hnumuCCinFV_stack_12->SetBinContent(18,9.559779);
   hnumuCCinFV_stack_12->SetBinContent(19,11.15968);
   hnumuCCinFV_stack_12->SetBinContent(20,8.219081);
   hnumuCCinFV_stack_12->SetBinContent(21,6.936634);
   hnumuCCinFV_stack_12->SetBinContent(22,6.173055);
   hnumuCCinFV_stack_12->SetBinContent(23,4.641476);
   hnumuCCinFV_stack_12->SetBinContent(24,2.500666);
   hnumuCCinFV_stack_12->SetBinContent(25,19.9691);
   hnumuCCinFV_stack_12->SetBinError(3,1.355528);
   hnumuCCinFV_stack_12->SetBinError(4,4.208286);
   hnumuCCinFV_stack_12->SetBinError(5,4.684074);
   hnumuCCinFV_stack_12->SetBinError(6,4.827996);
   hnumuCCinFV_stack_12->SetBinError(7,4.922207);
   hnumuCCinFV_stack_12->SetBinError(8,4.696774);
   hnumuCCinFV_stack_12->SetBinError(9,3.974853);
   hnumuCCinFV_stack_12->SetBinError(10,3.97461);
   hnumuCCinFV_stack_12->SetBinError(11,3.541999);
   hnumuCCinFV_stack_12->SetBinError(12,3.330643);
   hnumuCCinFV_stack_12->SetBinError(13,3.995549);
   hnumuCCinFV_stack_12->SetBinError(14,2.866961);
   hnumuCCinFV_stack_12->SetBinError(15,2.562228);
   hnumuCCinFV_stack_12->SetBinError(16,2.213398);
   hnumuCCinFV_stack_12->SetBinError(17,2.05589);
   hnumuCCinFV_stack_12->SetBinError(18,1.569106);
   hnumuCCinFV_stack_12->SetBinError(19,1.743815);
   hnumuCCinFV_stack_12->SetBinError(20,1.437944);
   hnumuCCinFV_stack_12->SetBinError(21,1.332683);
   hnumuCCinFV_stack_12->SetBinError(22,1.197156);
   hnumuCCinFV_stack_12->SetBinError(23,1.074749);
   hnumuCCinFV_stack_12->SetBinError(24,0.7348895);
   hnumuCCinFV_stack_12->SetBinError(25,2.294528);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(3,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(4,3.442208);
   hnueCCinFV_stack_13->SetBinContent(5,3.078222);
   hnueCCinFV_stack_13->SetBinContent(6,3.03359);
   hnueCCinFV_stack_13->SetBinContent(7,1.208545);
   hnueCCinFV_stack_13->SetBinContent(8,2.600732);
   hnueCCinFV_stack_13->SetBinContent(9,3.8659);
   hnueCCinFV_stack_13->SetBinContent(10,2.677023);
   hnueCCinFV_stack_13->SetBinContent(11,2.985907);
   hnueCCinFV_stack_13->SetBinContent(12,2.302989);
   hnueCCinFV_stack_13->SetBinContent(13,0.8689706);
   hnueCCinFV_stack_13->SetBinContent(14,2.281029);
   hnueCCinFV_stack_13->SetBinContent(15,2.395833);
   hnueCCinFV_stack_13->SetBinContent(16,2.63933);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.9905936);
   hnueCCinFV_stack_13->SetBinContent(19,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(20,0.9252522);
   hnueCCinFV_stack_13->SetBinContent(21,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(22,1.365032);
   hnueCCinFV_stack_13->SetBinContent(23,1.329913);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,12.88312);
   hnueCCinFV_stack_13->SetBinError(3,0.545424);
   hnueCCinFV_stack_13->SetBinError(4,1.5732);
   hnueCCinFV_stack_13->SetBinError(5,0.9868784);
   hnueCCinFV_stack_13->SetBinError(6,0.9421631);
   hnueCCinFV_stack_13->SetBinError(7,0.559574);
   hnueCCinFV_stack_13->SetBinError(8,0.8787707);
   hnueCCinFV_stack_13->SetBinError(9,0.9714154);
   hnueCCinFV_stack_13->SetBinError(10,0.9298879);
   hnueCCinFV_stack_13->SetBinError(11,1.030161);
   hnueCCinFV_stack_13->SetBinError(12,1.261412);
   hnueCCinFV_stack_13->SetBinError(13,0.4365468);
   hnueCCinFV_stack_13->SetBinError(14,1.628081);
   hnueCCinFV_stack_13->SetBinError(15,0.8976325);
   hnueCCinFV_stack_13->SetBinError(16,0.8265963);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.5144188);
   hnueCCinFV_stack_13->SetBinError(19,0.3326517);
   hnueCCinFV_stack_13->SetBinError(20,0.4794006);
   hnueCCinFV_stack_13->SetBinError(21,0.3921167);
   hnueCCinFV_stack_13->SetBinError(22,0.6274868);
   hnueCCinFV_stack_13->SetBinError(23,0.8167221);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,2.655029);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__2->SetBinContent(2,6.185596);
   hmcerror__2->SetBinContent(3,158.4282);
   hmcerror__2->SetBinContent(4,613.2325);
   hmcerror__2->SetBinContent(5,795.1882);
   hmcerror__2->SetBinContent(6,862.9556);
   hmcerror__2->SetBinContent(7,871.2922);
   hmcerror__2->SetBinContent(8,773.9086);
   hmcerror__2->SetBinContent(9,661.1877);
   hmcerror__2->SetBinContent(10,584.2072);
   hmcerror__2->SetBinContent(11,452.6259);
   hmcerror__2->SetBinContent(12,357.3933);
   hmcerror__2->SetBinContent(13,292.415);
   hmcerror__2->SetBinContent(14,219.0049);
   hmcerror__2->SetBinContent(15,170.0676);
   hmcerror__2->SetBinContent(16,138.241);
   hmcerror__2->SetBinContent(17,96.66814);
   hmcerror__2->SetBinContent(18,73.48349);
   hmcerror__2->SetBinContent(19,66.92934);
   hmcerror__2->SetBinContent(20,49.58694);
   hmcerror__2->SetBinContent(21,40.96579);
   hmcerror__2->SetBinContent(22,36.69331);
   hmcerror__2->SetBinContent(23,23.13391);
   hmcerror__2->SetBinContent(24,20.65702);
   hmcerror__2->SetBinContent(25,109.3596);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,6.383793);
   hmcerror__2->SetBinError(3,45.08012);
   hmcerror__2->SetBinError(4,160.1196);
   hmcerror__2->SetBinError(5,191.5847);
   hmcerror__2->SetBinError(6,211.8234);
   hmcerror__2->SetBinError(7,261.8788);
   hmcerror__2->SetBinError(8,255.7223);
   hmcerror__2->SetBinError(9,228.5587);
   hmcerror__2->SetBinError(10,191.1715);
   hmcerror__2->SetBinError(11,146.7139);
   hmcerror__2->SetBinError(12,116.1504);
   hmcerror__2->SetBinError(13,101.3123);
   hmcerror__2->SetBinError(14,70.64107);
   hmcerror__2->SetBinError(15,55.68564);
   hmcerror__2->SetBinError(16,60.07362);
   hmcerror__2->SetBinError(17,32.26988);
   hmcerror__2->SetBinError(18,26.05067);
   hmcerror__2->SetBinError(19,25.894);
   hmcerror__2->SetBinError(20,22.72451);
   hmcerror__2->SetBinError(21,21.63677);
   hmcerror__2->SetBinError(22,21.4121);
   hmcerror__2->SetBinError(23,14.88709);
   hmcerror__2->SetBinError(24,9.643176);
   hmcerror__2->SetBinError(25,32.46423);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3001[24] = {
   0,
   2,
   203,
   703,
   830,
   836,
   765,
   600,
   514,
   468,
   330,
   258,
   210,
   154,
   111,
   90,
   68,
   64,
   54,
   37,
   25,
   17,
   23,
   7};
   Double_t _felx3001[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3001[24] = {
   0,
   2,
   14.24781,
   26.51415,
   28.80972,
   28.91366,
   27.65863,
   24.4949,
   22.67157,
   21.63331,
   18.1659,
   16.06238,
   14.49138,
   12.40967,
   10.53565,
   9.6093,
   8.3726,
   8.1273,
   7.4785,
   6.2203,
   5.1474,
   4.2835,
   4.9457,
   2.85954};
   Double_t _fehx3001[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3001[24] = {
   1.1478,
   1.51917,
   14.24781,
   26.51415,
   28.80972,
   28.91366,
   27.65863,
   24.4949,
   22.67157,
   21.63331,
   18.1659,
   16.06238,
   14.49138,
   12.40967,
   10.53565,
   9.4079,
   8.1701,
   7.9246,
   7.275,
   6.0141,
   4.9374,
   4.0673,
   4.7346,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1760);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(951.405);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6369.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 177.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 737.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 719.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2748.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  530.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1069.8","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 501.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 633.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 40.3","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3002[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3002[24] = {
   0,
   1.032042,
   0.2845461,
   0.2611075,
   0.2409301,
   0.2454628,
   0.3005637,
   0.3304295,
   0.345679,
   0.3272324,
   0.3241394,
   0.3249932,
   0.3464676,
   0.3225547,
   0.3274323,
   0.4345572,
   0.3338213,
   0.3545105,
   0.3868856,
   0.4582762,
   0.5281668,
   0.5835422,
   0.643518,
   0.4668231};
   Double_t _fehx3002[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3002[24] = {
   0,
   1.032042,
   0.2845461,
   0.2611075,
   0.2409301,
   0.2454628,
   0.3005637,
   0.3304295,
   0.345679,
   0.3272324,
   0.3241394,
   0.3249932,
   0.3464676,
   0.3225547,
   0.3274323,
   0.4345572,
   0.3338213,
   0.3545105,
   0.3868856,
   0.4582762,
   0.5281668,
   0.5835422,
   0.643518,
   0.4668231};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1760);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3003[24] = {
   0,
   0.329849,
   0.2243257,
   0.2181175,
   0.208984,
   0.2339506,
   0.2905131,
   0.3250754,
   0.3354051,
   0.3188704,
   0.3110185,
   0.2979947,
   0.2914308,
   0.2753288,
   0.2468253,
   0.2410203,
   0.2389294,
   0.2191158,
   0.2173633,
   0.2339744,
   0.2075412,
   0.2394463,
   0.2542496,
   0.2160237};
   Double_t _fehx3003[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3003[24] = {
   0,
   0.329849,
   0.2243257,
   0.2181175,
   0.208984,
   0.2339506,
   0.2905131,
   0.3250754,
   0.3354051,
   0.3188704,
   0.3110185,
   0.2979947,
   0.2914308,
   0.2753288,
   0.2468253,
   0.2410203,
   0.2389294,
   0.2191158,
   0.2173633,
   0.2339744,
   0.2075412,
   0.2394463,
   0.2542496,
   0.2160237};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1760);
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
   
   Double_t _fx3004[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3004[24] = {
   10,
   0.3233318,
   1.281338,
   1.146384,
   1.043778,
   0.9687637,
   0.8780062,
   0.7752853,
   0.777389,
   0.8010856,
   0.7290789,
   0.7218938,
   0.7181574,
   0.7031806,
   0.6526815,
   0.651037,
   0.7034376,
   0.8709439,
   0.8068211,
   0.7461643,
   0.6102652,
   0.4632997,
   0.9942115,
   0.3388678};
   Double_t _felx3004[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3004[24] = {
   0,
   0.3233318,
   0.08993229,
   0.04323669,
   0.03623007,
   0.03350539,
   0.03174438,
   0.03165089,
   0.03428916,
   0.0370302,
   0.04013447,
   0.04494314,
   0.04955757,
   0.05666391,
   0.06194978,
   0.06951122,
   0.08661179,
   0.1106004,
   0.1117372,
   0.1254423,
   0.1256512,
   0.1167379,
   0.2137857,
   0.1384294};
   Double_t _fehx3004[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3004[24] = {
   0,
   0.245598,
   0.08993229,
   0.04323669,
   0.03623007,
   0.03350539,
   0.03174438,
   0.03165089,
   0.03428916,
   0.0370302,
   0.04013447,
   0.04494314,
   0.04955757,
   0.05666391,
   0.06194978,
   0.06805435,
   0.08451699,
   0.1078419,
   0.1086967,
   0.121284,
   0.1205249,
   0.1108458,
   0.2046606,
   0.1263749};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1760);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 23:12:05 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(-0.1538462,-9.96,1.128205,1101.366);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__10->SetBinContent(1,162.1513);
   hmc__10->SetBinContent(2,146.5213);
   hmc__10->SetBinContent(3,144.0773);
   hmc__10->SetBinContent(4,151.1806);
   hmc__10->SetBinContent(5,155.1432);
   hmc__10->SetBinContent(6,147.5686);
   hmc__10->SetBinContent(7,142.9099);
   hmc__10->SetBinContent(8,154.8714);
   hmc__10->SetBinContent(9,168.4596);
   hmc__10->SetBinContent(10,167.3157);
   hmc__10->SetBinContent(11,174.7433);
   hmc__10->SetBinContent(12,175.2698);
   hmc__10->SetBinContent(13,188.5907);
   hmc__10->SetBinContent(14,182.016);
   hmc__10->SetBinContent(15,191.8207);
   hmc__10->SetBinContent(16,201.2001);
   hmc__10->SetBinContent(17,223.1306);
   hmc__10->SetBinContent(18,246.7573);
   hmc__10->SetBinContent(19,293.9659);
   hmc__10->SetBinContent(20,492.2999);
   hmc__10->SetBinContent(21,0.1115999);
   hmc__10->SetBinError(1,49.53948);
   hmc__10->SetBinError(2,42.77408);
   hmc__10->SetBinError(3,37.84892);
   hmc__10->SetBinError(4,45.00045);
   hmc__10->SetBinError(5,39.84857);
   hmc__10->SetBinError(6,37.96879);
   hmc__10->SetBinError(7,45.49136);
   hmc__10->SetBinError(8,37.82431);
   hmc__10->SetBinError(9,44.39184);
   hmc__10->SetBinError(10,41.29874);
   hmc__10->SetBinError(11,44.7937);
   hmc__10->SetBinError(12,42.33933);
   hmc__10->SetBinError(13,50.4896);
   hmc__10->SetBinError(14,52.92707);
   hmc__10->SetBinError(15,51.29073);
   hmc__10->SetBinError(16,50.01254);
   hmc__10->SetBinError(17,53.80933);
   hmc__10->SetBinError(18,56.95765);
   hmc__10->SetBinError(19,80.00954);
   hmc__10->SetBinError(20,108.3627);
   hmc__10->SetBinError(21,0.4430126);
   hmc__10->SetMinimum(-9.96);
   hmc__10->SetMaximum(1045.8);
   hmc__10->SetEntries(3864.24);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(516.9149);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,6.176296);
   hbadmatch_stack_1->SetBinContent(2,6.21189);
   hbadmatch_stack_1->SetBinContent(3,5.829071);
   hbadmatch_stack_1->SetBinContent(4,3.943184);
   hbadmatch_stack_1->SetBinContent(5,4.869183);
   hbadmatch_stack_1->SetBinContent(6,3.220351);
   hbadmatch_stack_1->SetBinContent(7,4.35033);
   hbadmatch_stack_1->SetBinContent(8,5.851491);
   hbadmatch_stack_1->SetBinContent(9,4.641006);
   hbadmatch_stack_1->SetBinContent(10,4.291763);
   hbadmatch_stack_1->SetBinContent(11,4.908481);
   hbadmatch_stack_1->SetBinContent(12,3.874011);
   hbadmatch_stack_1->SetBinContent(13,3.547184);
   hbadmatch_stack_1->SetBinContent(14,4.634583);
   hbadmatch_stack_1->SetBinContent(15,5.860411);
   hbadmatch_stack_1->SetBinContent(16,3.105888);
   hbadmatch_stack_1->SetBinContent(17,4.755061);
   hbadmatch_stack_1->SetBinContent(18,4.861584);
   hbadmatch_stack_1->SetBinContent(19,4.827066);
   hbadmatch_stack_1->SetBinContent(20,9.194529);
   hbadmatch_stack_1->SetBinError(1,1.598153);
   hbadmatch_stack_1->SetBinError(2,1.290547);
   hbadmatch_stack_1->SetBinError(3,1.266682);
   hbadmatch_stack_1->SetBinError(4,1.019272);
   hbadmatch_stack_1->SetBinError(5,1.192268);
   hbadmatch_stack_1->SetBinError(6,0.9768273);
   hbadmatch_stack_1->SetBinError(7,1.029455);
   hbadmatch_stack_1->SetBinError(8,1.267872);
   hbadmatch_stack_1->SetBinError(9,1.898768);
   hbadmatch_stack_1->SetBinError(10,1.110863);
   hbadmatch_stack_1->SetBinError(11,1.29019);
   hbadmatch_stack_1->SetBinError(12,1.064055);
   hbadmatch_stack_1->SetBinError(13,0.9918602);
   hbadmatch_stack_1->SetBinError(14,1.037424);
   hbadmatch_stack_1->SetBinError(15,1.259671);
   hbadmatch_stack_1->SetBinError(16,0.8964403);
   hbadmatch_stack_1->SetBinError(17,1.124869);
   hbadmatch_stack_1->SetBinError(18,1.840039);
   hbadmatch_stack_1->SetBinError(19,1.218312);
   hbadmatch_stack_1->SetBinError(20,1.799859);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,20.05569);
   hext_stack_2->SetBinContent(2,19.40967);
   hext_stack_2->SetBinContent(3,10.96494);
   hext_stack_2->SetBinContent(4,14.91837);
   hext_stack_2->SetBinContent(5,17.76173);
   hext_stack_2->SetBinContent(6,14.70654);
   hext_stack_2->SetBinContent(7,10.69239);
   hext_stack_2->SetBinContent(8,22.84558);
   hext_stack_2->SetBinContent(9,21.24078);
   hext_stack_2->SetBinContent(10,20.29071);
   hext_stack_2->SetBinContent(11,16.65727);
   hext_stack_2->SetBinContent(12,27.03125);
   hext_stack_2->SetBinContent(13,26.86967);
   hext_stack_2->SetBinContent(14,21.03884);
   hext_stack_2->SetBinContent(15,17.05946);
   hext_stack_2->SetBinContent(16,30.73649);
   hext_stack_2->SetBinContent(17,33.25829);
   hext_stack_2->SetBinContent(18,39.06594);
   hext_stack_2->SetBinContent(19,35.2841);
   hext_stack_2->SetBinContent(20,57.55704);
   hext_stack_2->SetBinError(1,3.068112);
   hext_stack_2->SetBinError(2,2.977671);
   hext_stack_2->SetBinError(3,2.014533);
   hext_stack_2->SetBinError(4,2.446394);
   hext_stack_2->SetBinError(5,2.967968);
   hext_stack_2->SetBinError(6,2.367771);
   hext_stack_2->SetBinError(7,2.08484);
   hext_stack_2->SetBinError(8,3.372301);
   hext_stack_2->SetBinError(9,2.962618);
   hext_stack_2->SetBinError(10,3.107999);
   hext_stack_2->SetBinError(11,2.775477);
   hext_stack_2->SetBinError(12,3.725799);
   hext_stack_2->SetBinError(13,3.477739);
   hext_stack_2->SetBinError(14,3.031747);
   hext_stack_2->SetBinError(15,2.780912);
   hext_stack_2->SetBinError(16,3.718326);
   hext_stack_2->SetBinError(17,3.857198);
   hext_stack_2->SetBinError(18,4.232412);
   hext_stack_2->SetBinError(19,3.988207);
   hext_stack_2->SetBinError(20,5.149879);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,1.727272);
   hdirt_stack_3->SetBinContent(2,1.178659);
   hdirt_stack_3->SetBinContent(3,2.151912);
   hdirt_stack_3->SetBinContent(4,1.909774);
   hdirt_stack_3->SetBinContent(5,2.361606);
   hdirt_stack_3->SetBinContent(6,3.058505);
   hdirt_stack_3->SetBinContent(7,1.765891);
   hdirt_stack_3->SetBinContent(8,2.002882);
   hdirt_stack_3->SetBinContent(9,2.569815);
   hdirt_stack_3->SetBinContent(10,2.252767);
   hdirt_stack_3->SetBinContent(11,2.586024);
   hdirt_stack_3->SetBinContent(12,2.975931);
   hdirt_stack_3->SetBinContent(13,3.163067);
   hdirt_stack_3->SetBinContent(14,1.958232);
   hdirt_stack_3->SetBinContent(15,1.861612);
   hdirt_stack_3->SetBinContent(16,3.529913);
   hdirt_stack_3->SetBinContent(17,3.81823);
   hdirt_stack_3->SetBinContent(18,4.775778);
   hdirt_stack_3->SetBinContent(19,3.754923);
   hdirt_stack_3->SetBinContent(20,7.650273);
   hdirt_stack_3->SetBinError(1,0.6674737);
   hdirt_stack_3->SetBinError(2,0.5492875);
   hdirt_stack_3->SetBinError(3,0.8233114);
   hdirt_stack_3->SetBinError(4,0.6604242);
   hdirt_stack_3->SetBinError(5,0.7630048);
   hdirt_stack_3->SetBinError(6,0.979381);
   hdirt_stack_3->SetBinError(7,0.7695453);
   hdirt_stack_3->SetBinError(8,0.7035713);
   hdirt_stack_3->SetBinError(9,0.852849);
   hdirt_stack_3->SetBinError(10,0.8032954);
   hdirt_stack_3->SetBinError(11,0.8823826);
   hdirt_stack_3->SetBinError(12,0.8979678);
   hdirt_stack_3->SetBinError(13,1.319472);
   hdirt_stack_3->SetBinError(14,0.6453614);
   hdirt_stack_3->SetBinError(15,0.713189);
   hdirt_stack_3->SetBinError(16,0.9816508);
   hdirt_stack_3->SetBinError(17,1.334567);
   hdirt_stack_3->SetBinError(18,1.040844);
   hdirt_stack_3->SetBinError(19,1.115548);
   hdirt_stack_3->SetBinError(20,1.392649);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,15.46488);
   houtFV_stack_4->SetBinContent(2,14.95298);
   houtFV_stack_4->SetBinContent(3,14.55939);
   houtFV_stack_4->SetBinContent(4,19.32333);
   houtFV_stack_4->SetBinContent(5,16.52419);
   houtFV_stack_4->SetBinContent(6,18.2623);
   houtFV_stack_4->SetBinContent(7,21.08968);
   houtFV_stack_4->SetBinContent(8,16.10657);
   houtFV_stack_4->SetBinContent(9,18.91549);
   houtFV_stack_4->SetBinContent(10,21.35001);
   houtFV_stack_4->SetBinContent(11,22.41593);
   houtFV_stack_4->SetBinContent(12,20.47851);
   houtFV_stack_4->SetBinContent(13,25.37662);
   houtFV_stack_4->SetBinContent(14,23.50429);
   houtFV_stack_4->SetBinContent(15,30.90056);
   houtFV_stack_4->SetBinContent(16,25.06656);
   houtFV_stack_4->SetBinContent(17,27.49212);
   houtFV_stack_4->SetBinContent(18,33.20681);
   houtFV_stack_4->SetBinContent(19,45.09966);
   houtFV_stack_4->SetBinContent(20,75.774);
   houtFV_stack_4->SetBinError(1,1.95392);
   houtFV_stack_4->SetBinError(2,1.955805);
   houtFV_stack_4->SetBinError(3,1.897627);
   houtFV_stack_4->SetBinError(4,2.231532);
   houtFV_stack_4->SetBinError(5,2.02728);
   houtFV_stack_4->SetBinError(6,2.174769);
   houtFV_stack_4->SetBinError(7,2.439826);
   houtFV_stack_4->SetBinError(8,2.027659);
   houtFV_stack_4->SetBinError(9,2.190786);
   houtFV_stack_4->SetBinError(10,2.392759);
   houtFV_stack_4->SetBinError(11,2.347921);
   houtFV_stack_4->SetBinError(12,2.27178);
   houtFV_stack_4->SetBinError(13,2.812112);
   houtFV_stack_4->SetBinError(14,2.408234);
   houtFV_stack_4->SetBinError(15,2.845757);
   houtFV_stack_4->SetBinError(16,2.49958);
   houtFV_stack_4->SetBinError(17,2.655895);
   houtFV_stack_4->SetBinError(18,2.839813);
   houtFV_stack_4->SetBinError(19,3.338807);
   houtFV_stack_4->SetBinError(20,4.346701);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.81966);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.788184);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.652756);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.91473);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.761612);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.52837);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.994629);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.677743);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.434956);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.181528);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.13577);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.53161);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.716036);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.5493);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.64745);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.824555);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.005989);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.821082);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,8.368049);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,14.43117);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6705742);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5436969);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6314647);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5280816);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.517535);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6385645);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8192662);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.48244);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6874359);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6637189);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5411254);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7039401);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7923785);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7808332);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7990229);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6568415);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.743119);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8616391);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.99832);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.291499);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.073658);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.297026);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6274177);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.385337);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4329789);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.155758);
   hNCpi0inFVqe_stack_6->SetEntries(179);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,51.46558);
   hNCpi0inFVres_stack_7->SetBinContent(2,46.77851);
   hNCpi0inFVres_stack_7->SetBinContent(3,47.84933);
   hNCpi0inFVres_stack_7->SetBinContent(4,50.85493);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.5305);
   hNCpi0inFVres_stack_7->SetBinContent(6,50.40321);
   hNCpi0inFVres_stack_7->SetBinContent(7,51.3623);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.50993);
   hNCpi0inFVres_stack_7->SetBinContent(9,55.86152);
   hNCpi0inFVres_stack_7->SetBinContent(10,60.15199);
   hNCpi0inFVres_stack_7->SetBinContent(11,58.67244);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.49666);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.3604);
   hNCpi0inFVres_stack_7->SetBinContent(14,62.2177);
   hNCpi0inFVres_stack_7->SetBinContent(15,64.0784);
   hNCpi0inFVres_stack_7->SetBinContent(16,70.48965);
   hNCpi0inFVres_stack_7->SetBinContent(17,71.96484);
   hNCpi0inFVres_stack_7->SetBinContent(18,78.68717);
   hNCpi0inFVres_stack_7->SetBinContent(19,96.48605);
   hNCpi0inFVres_stack_7->SetBinContent(20,158.4389);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,2.361145);
   hNCpi0inFVres_stack_7->SetBinError(2,2.180447);
   hNCpi0inFVres_stack_7->SetBinError(3,2.186211);
   hNCpi0inFVres_stack_7->SetBinError(4,2.305023);
   hNCpi0inFVres_stack_7->SetBinError(5,2.328487);
   hNCpi0inFVres_stack_7->SetBinError(6,2.29436);
   hNCpi0inFVres_stack_7->SetBinError(7,2.37066);
   hNCpi0inFVres_stack_7->SetBinError(8,2.210966);
   hNCpi0inFVres_stack_7->SetBinError(9,2.469303);
   hNCpi0inFVres_stack_7->SetBinError(10,2.568086);
   hNCpi0inFVres_stack_7->SetBinError(11,2.499097);
   hNCpi0inFVres_stack_7->SetBinError(12,2.495357);
   hNCpi0inFVres_stack_7->SetBinError(13,2.512107);
   hNCpi0inFVres_stack_7->SetBinError(14,2.565229);
   hNCpi0inFVres_stack_7->SetBinError(15,2.555666);
   hNCpi0inFVres_stack_7->SetBinError(16,2.768552);
   hNCpi0inFVres_stack_7->SetBinError(17,2.756141);
   hNCpi0inFVres_stack_7->SetBinError(18,2.891554);
   hNCpi0inFVres_stack_7->SetBinError(19,3.19606);
   hNCpi0inFVres_stack_7->SetBinError(20,4.111612);
   hNCpi0inFVres_stack_7->SetBinError(21,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(24054);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.61167);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.79793);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.1216);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.398851);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.466764);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.274298);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.655753);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.921551);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.36705);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.09369);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.45159);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.49644);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.42569);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.79776);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.13223);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.49975);
   hNCpi0inFVdis_stack_8->SetBinContent(17,14.05451);
   hNCpi0inFVdis_stack_8->SetBinContent(18,16.66085);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.75966);
   hNCpi0inFVdis_stack_8->SetBinContent(20,30.66438);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.051917);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.144619);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.045887);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.009787);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9370491);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9979622);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8606594);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9221509);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.129185);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9739472);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.138709);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.235381);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.183187);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.130218);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.191599);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.229986);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.200278);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.360048);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.311658);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.796427);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,26.26301);
   hCCpi0inFV_stack_10->SetBinContent(2,21.67568);
   hCCpi0inFV_stack_10->SetBinContent(3,25.74952);
   hCCpi0inFV_stack_10->SetBinContent(4,24.84273);
   hCCpi0inFV_stack_10->SetBinContent(5,27.75369);
   hCCpi0inFV_stack_10->SetBinContent(6,23.32573);
   hCCpi0inFV_stack_10->SetBinContent(7,24.59284);
   hCCpi0inFV_stack_10->SetBinContent(8,23.35722);
   hCCpi0inFV_stack_10->SetBinContent(9,22.71685);
   hCCpi0inFV_stack_10->SetBinContent(10,24.26986);
   hCCpi0inFV_stack_10->SetBinContent(11,27.63209);
   hCCpi0inFV_stack_10->SetBinContent(12,25.83521);
   hCCpi0inFV_stack_10->SetBinContent(13,26.5565);
   hCCpi0inFV_stack_10->SetBinContent(14,25.92538);
   hCCpi0inFV_stack_10->SetBinContent(15,30.11203);
   hCCpi0inFV_stack_10->SetBinContent(16,26.05945);
   hCCpi0inFV_stack_10->SetBinContent(17,31.69224);
   hCCpi0inFV_stack_10->SetBinContent(18,33.54993);
   hCCpi0inFV_stack_10->SetBinContent(19,35.80113);
   hCCpi0inFV_stack_10->SetBinContent(20,71.41376);
   hCCpi0inFV_stack_10->SetBinError(1,2.595661);
   hCCpi0inFV_stack_10->SetBinError(2,2.370973);
   hCCpi0inFV_stack_10->SetBinError(3,2.545126);
   hCCpi0inFV_stack_10->SetBinError(4,2.529189);
   hCCpi0inFV_stack_10->SetBinError(5,2.607181);
   hCCpi0inFV_stack_10->SetBinError(6,2.401591);
   hCCpi0inFV_stack_10->SetBinError(7,2.459596);
   hCCpi0inFV_stack_10->SetBinError(8,2.39114);
   hCCpi0inFV_stack_10->SetBinError(9,2.374932);
   hCCpi0inFV_stack_10->SetBinError(10,2.483137);
   hCCpi0inFV_stack_10->SetBinError(11,2.597067);
   hCCpi0inFV_stack_10->SetBinError(12,2.566031);
   hCCpi0inFV_stack_10->SetBinError(13,2.550607);
   hCCpi0inFV_stack_10->SetBinError(14,2.589079);
   hCCpi0inFV_stack_10->SetBinError(15,2.807135);
   hCCpi0inFV_stack_10->SetBinError(16,2.497442);
   hCCpi0inFV_stack_10->SetBinError(17,2.850403);
   hCCpi0inFV_stack_10->SetBinError(18,2.931205);
   hCCpi0inFV_stack_10->SetBinError(19,2.976347);
   hCCpi0inFV_stack_10->SetBinError(20,4.239912);
   hCCpi0inFV_stack_10->SetEntries(2475);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,10.94181);
   hNCinFV_stack_11->SetBinContent(2,11.13237);
   hNCinFV_stack_11->SetBinContent(3,10.40661);
   hNCinFV_stack_11->SetBinContent(4,10.80004);
   hNCinFV_stack_11->SetBinContent(5,11.96911);
   hNCinFV_stack_11->SetBinContent(6,7.952559);
   hNCinFV_stack_11->SetBinContent(7,8.45298);
   hNCinFV_stack_11->SetBinContent(8,8.102659);
   hNCinFV_stack_11->SetBinContent(9,12.55249);
   hNCinFV_stack_11->SetBinContent(10,11.53365);
   hNCinFV_stack_11->SetBinContent(11,13.87117);
   hNCinFV_stack_11->SetBinContent(12,7.930693);
   hNCinFV_stack_11->SetBinContent(13,10.6084);
   hNCinFV_stack_11->SetBinContent(14,11.23043);
   hNCinFV_stack_11->SetBinContent(15,8.941083);
   hNCinFV_stack_11->SetBinContent(16,10.06643);
   hNCinFV_stack_11->SetBinContent(17,9.321598);
   hNCinFV_stack_11->SetBinContent(18,11.5706);
   hNCinFV_stack_11->SetBinContent(19,19.06138);
   hNCinFV_stack_11->SetBinContent(20,27.79452);
   hNCinFV_stack_11->SetBinError(1,1.653212);
   hNCinFV_stack_11->SetBinError(2,1.722726);
   hNCinFV_stack_11->SetBinError(3,1.606037);
   hNCinFV_stack_11->SetBinError(4,1.629953);
   hNCinFV_stack_11->SetBinError(5,1.755825);
   hNCinFV_stack_11->SetBinError(6,1.363992);
   hNCinFV_stack_11->SetBinError(7,1.482458);
   hNCinFV_stack_11->SetBinError(8,1.441523);
   hNCinFV_stack_11->SetBinError(9,1.787837);
   hNCinFV_stack_11->SetBinError(10,1.688153);
   hNCinFV_stack_11->SetBinError(11,1.871785);
   hNCinFV_stack_11->SetBinError(12,1.360367);
   hNCinFV_stack_11->SetBinError(13,1.618653);
   hNCinFV_stack_11->SetBinError(14,1.699358);
   hNCinFV_stack_11->SetBinError(15,1.481144);
   hNCinFV_stack_11->SetBinError(16,1.569596);
   hNCinFV_stack_11->SetBinError(17,1.569876);
   hNCinFV_stack_11->SetBinError(18,1.733072);
   hNCinFV_stack_11->SetBinError(19,2.19493);
   hNCinFV_stack_11->SetBinError(20,2.677088);
   hNCinFV_stack_11->SetEntries(996);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,12.80595);
   hnumuCCinFV_stack_12->SetBinContent(2,9.950874);
   hnumuCCinFV_stack_12->SetBinContent(3,12.21353);
   hnumuCCinFV_stack_12->SetBinContent(4,10.99717);
   hnumuCCinFV_stack_12->SetBinContent(5,9.444299);
   hnumuCCinFV_stack_12->SetBinContent(6,13.11129);
   hnumuCCinFV_stack_12->SetBinContent(7,7.423174);
   hnumuCCinFV_stack_12->SetBinContent(8,15.02079);
   hnumuCCinFV_stack_12->SetBinContent(9,12.67767);
   hnumuCCinFV_stack_12->SetBinContent(10,8.312193);
   hnumuCCinFV_stack_12->SetBinContent(11,12.07636);
   hnumuCCinFV_stack_12->SetBinContent(12,12.28457);
   hnumuCCinFV_stack_12->SetBinContent(13,14.19841);
   hnumuCCinFV_stack_12->SetBinContent(14,10.83502);
   hnumuCCinFV_stack_12->SetBinContent(15,12.34385);
   hnumuCCinFV_stack_12->SetBinContent(16,10.73023);
   hnumuCCinFV_stack_12->SetBinContent(17,16.46722);
   hnumuCCinFV_stack_12->SetBinContent(18,14.64012);
   hnumuCCinFV_stack_12->SetBinContent(19,24.01149);
   hnumuCCinFV_stack_12->SetBinContent(20,27.51178);
   hnumuCCinFV_stack_12->SetBinError(1,2.372594);
   hnumuCCinFV_stack_12->SetBinError(2,1.64363);
   hnumuCCinFV_stack_12->SetBinError(3,1.864436);
   hnumuCCinFV_stack_12->SetBinError(4,1.804516);
   hnumuCCinFV_stack_12->SetBinError(5,1.669489);
   hnumuCCinFV_stack_12->SetBinError(6,2.003927);
   hnumuCCinFV_stack_12->SetBinError(7,1.322913);
   hnumuCCinFV_stack_12->SetBinError(8,2.685893);
   hnumuCCinFV_stack_12->SetBinError(9,2.299566);
   hnumuCCinFV_stack_12->SetBinError(10,1.511974);
   hnumuCCinFV_stack_12->SetBinError(11,2.193498);
   hnumuCCinFV_stack_12->SetBinError(12,2.035843);
   hnumuCCinFV_stack_12->SetBinError(13,2.045667);
   hnumuCCinFV_stack_12->SetBinError(14,1.821884);
   hnumuCCinFV_stack_12->SetBinError(15,1.907703);
   hnumuCCinFV_stack_12->SetBinError(16,1.662723);
   hnumuCCinFV_stack_12->SetBinError(17,2.138299);
   hnumuCCinFV_stack_12->SetBinError(18,2.603367);
   hnumuCCinFV_stack_12->SetBinError(19,3.349265);
   hnumuCCinFV_stack_12->SetBinError(20,2.671534);
   hnumuCCinFV_stack_12->SetEntries(1051);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,2.554707);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.439162);
   hnueCCinFV_stack_13->SetBinContent(4,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.251764);
   hnueCCinFV_stack_13->SetBinContent(9,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967481);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,4.908035e-06);
   hnueCCinFV_stack_13->SetBinContent(13,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(14,2.250821);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,1.714912);
   hnueCCinFV_stack_13->SetBinContent(17,3.546903);
   hnueCCinFV_stack_13->SetBinContent(18,2.708481);
   hnueCCinFV_stack_13->SetBinContent(19,3.215381);
   hnueCCinFV_stack_13->SetBinContent(20,11.18634);
   hnueCCinFV_stack_13->SetBinError(1,1.448087);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.3124702);
   hnueCCinFV_stack_13->SetBinError(4,0.4394482);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.5894075);
   hnueCCinFV_stack_13->SetBinError(9,0.2451269);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,4.908035e-06);
   hnueCCinFV_stack_13->SetBinError(13,0.5197486);
   hnueCCinFV_stack_13->SetBinError(14,0.845272);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.7469158);
   hnueCCinFV_stack_13->SetBinError(17,1.395933);
   hnueCCinFV_stack_13->SetBinError(18,0.969121);
   hnueCCinFV_stack_13->SetBinError(19,0.9976808);
   hnueCCinFV_stack_13->SetBinError(20,2.457091);
   hnueCCinFV_stack_13->SetEntries(115);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__11->SetBinContent(1,162.1513);
   hmcerror__11->SetBinContent(2,146.5213);
   hmcerror__11->SetBinContent(3,144.0773);
   hmcerror__11->SetBinContent(4,151.1806);
   hmcerror__11->SetBinContent(5,155.1432);
   hmcerror__11->SetBinContent(6,147.5686);
   hmcerror__11->SetBinContent(7,142.9099);
   hmcerror__11->SetBinContent(8,154.8714);
   hmcerror__11->SetBinContent(9,168.4596);
   hmcerror__11->SetBinContent(10,167.3157);
   hmcerror__11->SetBinContent(11,174.7433);
   hmcerror__11->SetBinContent(12,175.2698);
   hmcerror__11->SetBinContent(13,188.5907);
   hmcerror__11->SetBinContent(14,182.016);
   hmcerror__11->SetBinContent(15,191.8207);
   hmcerror__11->SetBinContent(16,201.2001);
   hmcerror__11->SetBinContent(17,223.1306);
   hmcerror__11->SetBinContent(18,246.7573);
   hmcerror__11->SetBinContent(19,293.9659);
   hmcerror__11->SetBinContent(20,492.2999);
   hmcerror__11->SetBinContent(21,0.1115999);
   hmcerror__11->SetBinError(1,49.53948);
   hmcerror__11->SetBinError(2,42.77408);
   hmcerror__11->SetBinError(3,37.84892);
   hmcerror__11->SetBinError(4,45.00045);
   hmcerror__11->SetBinError(5,39.84857);
   hmcerror__11->SetBinError(6,37.96879);
   hmcerror__11->SetBinError(7,45.49136);
   hmcerror__11->SetBinError(8,37.82431);
   hmcerror__11->SetBinError(9,44.39184);
   hmcerror__11->SetBinError(10,41.29874);
   hmcerror__11->SetBinError(11,44.7937);
   hmcerror__11->SetBinError(12,42.33933);
   hmcerror__11->SetBinError(13,50.4896);
   hmcerror__11->SetBinError(14,52.92707);
   hmcerror__11->SetBinError(15,51.29073);
   hmcerror__11->SetBinError(16,50.01254);
   hmcerror__11->SetBinError(17,53.80933);
   hmcerror__11->SetBinError(18,56.95765);
   hmcerror__11->SetBinError(19,80.00954);
   hmcerror__11->SetBinError(20,108.3627);
   hmcerror__11->SetBinError(21,0.4430126);
   hmcerror__11->SetEntries(3864.24);

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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   152,
   163,
   147,
   138,
   158,
   137,
   153,
   159,
   170,
   153,
   150,
   169,
   178,
   158,
   191,
   202,
   216,
   241,
   290,
   498};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   12.32883,
   12.76715,
   12.12436,
   11.74734,
   12.56981,
   11.7047,
   12.36932,
   12.60952,
   13.0384,
   12.36932,
   12.24745,
   13,
   13.34166,
   12.56981,
   13.82027,
   14.21267,
   14.69694,
   15.52417,
   17.02939,
   22.31591};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   12.32883,
   12.76715,
   12.12436,
   11.74734,
   12.56981,
   11.7047,
   12.36932,
   12.60952,
   13.0384,
   12.36932,
   12.24745,
   13,
   13.34166,
   12.56981,
   13.82027,
   14.21267,
   14.69694,
   15.52417,
   17.02939,
   22.31591};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1.1);
   Graph_Graph3013->SetMinimum(85.79324);
   Graph_Graph3013->SetMaximum(559.818);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.305514,
   0.2919309,
   0.2626987,
   0.2976602,
   0.2568503,
   0.2572959,
   0.3183218,
   0.2442305,
   0.2635163,
   0.2468313,
   0.2563399,
   0.2415666,
   0.2677206,
   0.2907825,
   0.2673889,
   0.2485711,
   0.2411561,
   0.2308246,
   0.2721728,
   0.2201152};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.305514,
   0.2919309,
   0.2626987,
   0.2976602,
   0.2568503,
   0.2572959,
   0.3183218,
   0.2442305,
   0.2635163,
   0.2468313,
   0.2563399,
   0.2415666,
   0.2677206,
   0.2907825,
   0.2673889,
   0.2485711,
   0.2411561,
   0.2308246,
   0.2721728,
   0.2201152};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1.1);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.1942246,
   0.2062404,
   0.2084911,
   0.2096862,
   0.2050207,
   0.19907,
   0.2126553,
   0.1919503,
   0.1929591,
   0.1952801,
   0.1955033,
   0.1901291,
   0.1903239,
   0.2037939,
   0.1975821,
   0.1885061,
   0.1878887,
   0.1859838,
   0.1879489,
   0.1848561};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.1942246,
   0.2062404,
   0.2084911,
   0.2096862,
   0.2050207,
   0.19907,
   0.2126553,
   0.1919503,
   0.1929591,
   0.1952801,
   0.1955033,
   0.1901291,
   0.1903239,
   0.2037939,
   0.1975821,
   0.1885061,
   0.1878887,
   0.1859838,
   0.1879489,
   0.1848561};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1.1);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   0.9373964,
   1.112466,
   1.020286,
   0.9128155,
   1.018414,
   0.9283819,
   1.070604,
   1.026658,
   1.009144,
   0.9144392,
   0.8584018,
   0.9642275,
   0.943843,
   0.8680555,
   0.9957215,
   1.003975,
   0.9680427,
   0.9766682,
   0.9865089,
   1.011578};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.07603288,
   0.0871351,
   0.08415173,
   0.07770402,
   0.08102067,
   0.07931701,
   0.08655323,
   0.08141931,
   0.07739782,
   0.07392803,
   0.07008821,
   0.07417135,
   0.07074403,
   0.06905878,
   0.07204788,
   0.07063947,
   0.06586697,
   0.06291273,
   0.0579298,
   0.04532991};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.07603288,
   0.0871351,
   0.08415173,
   0.07770402,
   0.08102067,
   0.07931701,
   0.08655323,
   0.08141931,
   0.07739782,
   0.07392803,
   0.07008821,
   0.07417135,
   0.07074403,
   0.06905878,
   0.07204788,
   0.07063947,
   0.06586697,
   0.06291273,
   0.0579298,
   0.04532991};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1.1);
   Graph_Graph3016->SetMinimum(0.7471848);
   Graph_Graph3016->SetMaximum(1.24073);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

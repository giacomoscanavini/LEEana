#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 17:07:16 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-4.119231,-2.943041,3.957692,325.4384);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__13->SetBinContent(1,147.1521);
   hmc__13->SetBinContent(2,146.6058);
   hmc__13->SetBinContent(3,130.8695);
   hmc__13->SetBinContent(4,116.2108);
   hmc__13->SetBinContent(5,111.1471);
   hmc__13->SetBinContent(6,115.7564);
   hmc__13->SetBinContent(7,113.5506);
   hmc__13->SetBinContent(8,108.6557);
   hmc__13->SetBinContent(9,108.2645);
   hmc__13->SetBinContent(10,114.1158);
   hmc__13->SetBinContent(11,120.5094);
   hmc__13->SetBinContent(12,123.5485);
   hmc__13->SetBinContent(13,132.0351);
   hmc__13->SetBinContent(14,137.1683);
   hmc__13->SetBinContent(15,132.4648);
   hmc__13->SetBinContent(16,119.9264);
   hmc__13->SetBinContent(17,120.8782);
   hmc__13->SetBinContent(18,112.0473);
   hmc__13->SetBinContent(19,116.1317);
   hmc__13->SetBinContent(20,100.2932);
   hmc__13->SetBinContent(21,111.1588);
   hmc__13->SetBinContent(22,117.4114);
   hmc__13->SetBinContent(23,128.6565);
   hmc__13->SetBinContent(24,128.3718);
   hmc__13->SetBinContent(25,136.7166);
   hmc__13->SetBinError(1,51.22251);
   hmc__13->SetBinError(2,51.51636);
   hmc__13->SetBinError(3,53.93719);
   hmc__13->SetBinError(4,48.65913);
   hmc__13->SetBinError(5,38.09003);
   hmc__13->SetBinError(6,39.58125);
   hmc__13->SetBinError(7,47.12535);
   hmc__13->SetBinError(8,42.95047);
   hmc__13->SetBinError(9,41.52946);
   hmc__13->SetBinError(10,42.61488);
   hmc__13->SetBinError(11,44.32548);
   hmc__13->SetBinError(12,45.8556);
   hmc__13->SetBinError(13,45.12276);
   hmc__13->SetBinError(14,44.94421);
   hmc__13->SetBinError(15,48.61827);
   hmc__13->SetBinError(16,42.89191);
   hmc__13->SetBinError(17,48.52883);
   hmc__13->SetBinError(18,44.99061);
   hmc__13->SetBinError(19,47.96872);
   hmc__13->SetBinError(20,42.42846);
   hmc__13->SetBinError(21,41.48888);
   hmc__13->SetBinError(22,45.41485);
   hmc__13->SetBinError(23,45.76481);
   hmc__13->SetBinError(24,47.10063);
   hmc__13->SetBinError(25,48.96062);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-2.943041);
   hmc__13->SetMaximum(309.0193);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-3.15,3.15);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(154.5096);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.045883);
   hbadmatch_stack_1->SetBinContent(2,3.248256);
   hbadmatch_stack_1->SetBinContent(3,2.148912);
   hbadmatch_stack_1->SetBinContent(4,2.925165);
   hbadmatch_stack_1->SetBinContent(5,3.776594);
   hbadmatch_stack_1->SetBinContent(6,3.097796);
   hbadmatch_stack_1->SetBinContent(7,3.028431);
   hbadmatch_stack_1->SetBinContent(8,2.884972);
   hbadmatch_stack_1->SetBinContent(9,3.491369);
   hbadmatch_stack_1->SetBinContent(10,3.254263);
   hbadmatch_stack_1->SetBinContent(11,3.619466);
   hbadmatch_stack_1->SetBinContent(12,2.032637);
   hbadmatch_stack_1->SetBinContent(13,2.631112);
   hbadmatch_stack_1->SetBinContent(14,1.900369);
   hbadmatch_stack_1->SetBinContent(15,3.307962);
   hbadmatch_stack_1->SetBinContent(16,2.926365);
   hbadmatch_stack_1->SetBinContent(17,4.112422);
   hbadmatch_stack_1->SetBinContent(18,3.489683);
   hbadmatch_stack_1->SetBinContent(19,2.59309);
   hbadmatch_stack_1->SetBinContent(20,1.768177);
   hbadmatch_stack_1->SetBinContent(21,4.840511);
   hbadmatch_stack_1->SetBinContent(22,1.56874);
   hbadmatch_stack_1->SetBinContent(23,5.607171);
   hbadmatch_stack_1->SetBinContent(24,1.105345);
   hbadmatch_stack_1->SetBinContent(25,2.470116);
   hbadmatch_stack_1->SetBinError(1,1.079689);
   hbadmatch_stack_1->SetBinError(2,0.9125159);
   hbadmatch_stack_1->SetBinError(3,0.8045618);
   hbadmatch_stack_1->SetBinError(4,0.8753713);
   hbadmatch_stack_1->SetBinError(5,1.01546);
   hbadmatch_stack_1->SetBinError(6,0.8728083);
   hbadmatch_stack_1->SetBinError(7,0.9792475);
   hbadmatch_stack_1->SetBinError(8,0.8959151);
   hbadmatch_stack_1->SetBinError(9,0.9529516);
   hbadmatch_stack_1->SetBinError(10,1.330925);
   hbadmatch_stack_1->SetBinError(11,0.9984263);
   hbadmatch_stack_1->SetBinError(12,0.7032181);
   hbadmatch_stack_1->SetBinError(13,0.8148846);
   hbadmatch_stack_1->SetBinError(14,0.8031698);
   hbadmatch_stack_1->SetBinError(15,0.8657607);
   hbadmatch_stack_1->SetBinError(16,0.8936604);
   hbadmatch_stack_1->SetBinError(17,2.055688);
   hbadmatch_stack_1->SetBinError(18,0.9146871);
   hbadmatch_stack_1->SetBinError(19,0.9996396);
   hbadmatch_stack_1->SetBinError(20,0.7068721);
   hbadmatch_stack_1->SetBinError(21,1.29777);
   hbadmatch_stack_1->SetBinError(22,0.619718);
   hbadmatch_stack_1->SetBinError(23,1.34196);
   hbadmatch_stack_1->SetBinError(24,0.4434731);
   hbadmatch_stack_1->SetBinError(25,0.824631);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.93431);
   hext_stack_2->SetBinContent(2,12.3419);
   hext_stack_2->SetBinContent(3,12.35349);
   hext_stack_2->SetBinContent(4,6.724599);
   hext_stack_2->SetBinContent(5,11.40184);
   hext_stack_2->SetBinContent(6,22.33523);
   hext_stack_2->SetBinContent(7,15.26589);
   hext_stack_2->SetBinContent(8,15.39716);
   hext_stack_2->SetBinContent(9,8.57883);
   hext_stack_2->SetBinContent(10,10.64931);
   hext_stack_2->SetBinContent(11,6.889002);
   hext_stack_2->SetBinContent(12,5.758588);
   hext_stack_2->SetBinContent(13,7.746861);
   hext_stack_2->SetBinContent(14,6.564605);
   hext_stack_2->SetBinContent(15,4.132192);
   hext_stack_2->SetBinContent(16,10.83084);
   hext_stack_2->SetBinContent(17,8.973839);
   hext_stack_2->SetBinContent(18,10.3205);
   hext_stack_2->SetBinContent(19,20.45946);
   hext_stack_2->SetBinContent(20,12.05505);
   hext_stack_2->SetBinContent(21,14.90842);
   hext_stack_2->SetBinContent(22,12.96916);
   hext_stack_2->SetBinContent(23,9.622634);
   hext_stack_2->SetBinContent(24,6.24298);
   hext_stack_2->SetBinContent(25,9.436689);
   hext_stack_2->SetBinError(1,2.717406);
   hext_stack_2->SetBinError(2,2.491205);
   hext_stack_2->SetBinError(3,2.477907);
   hext_stack_2->SetBinError(4,1.680019);
   hext_stack_2->SetBinError(5,2.284889);
   hext_stack_2->SetBinError(6,3.427916);
   hext_stack_2->SetBinError(7,2.699691);
   hext_stack_2->SetBinError(8,2.842216);
   hext_stack_2->SetBinError(9,1.982751);
   hext_stack_2->SetBinError(10,2.356643);
   hext_stack_2->SetBinError(11,1.715413);
   hext_stack_2->SetBinError(12,1.518408);
   hext_stack_2->SetBinError(13,1.966707);
   hext_stack_2->SetBinError(14,1.684461);
   hext_stack_2->SetBinError(15,1.282292);
   hext_stack_2->SetBinError(16,2.221535);
   hext_stack_2->SetBinError(17,2.040271);
   hext_stack_2->SetBinError(18,2.305084);
   hext_stack_2->SetBinError(19,3.353412);
   hext_stack_2->SetBinError(20,2.359303);
   hext_stack_2->SetBinError(21,2.553892);
   hext_stack_2->SetBinError(22,2.649561);
   hext_stack_2->SetBinError(23,2.091213);
   hext_stack_2->SetBinError(24,1.547854);
   hext_stack_2->SetBinError(25,2.203769);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.6588001);
   hdirt_stack_3->SetBinContent(3,0.3381872);
   hdirt_stack_3->SetBinContent(4,1.033342);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,1.239097);
   hdirt_stack_3->SetBinContent(7,0.9571885);
   hdirt_stack_3->SetBinContent(8,0.9140499);
   hdirt_stack_3->SetBinContent(9,0.4048706);
   hdirt_stack_3->SetBinContent(10,0.5897986);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,1.149204);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(17,0.4950385);
   hdirt_stack_3->SetBinContent(18,1.034223);
   hdirt_stack_3->SetBinContent(19,0.6763744);
   hdirt_stack_3->SetBinContent(20,0.9301981);
   hdirt_stack_3->SetBinContent(21,1.209021);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(23,1.193245);
   hdirt_stack_3->SetBinContent(24,0.6415418);
   hdirt_stack_3->SetBinContent(25,0.400075);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.3855615);
   hdirt_stack_3->SetBinError(3,0.3381872);
   hdirt_stack_3->SetBinError(4,0.5438016);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.5213984);
   hdirt_stack_3->SetBinError(7,0.5000115);
   hdirt_stack_3->SetBinError(8,0.4788161);
   hdirt_stack_3->SetBinError(9,0.2872316);
   hdirt_stack_3->SetBinError(10,0.4215197);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.9557142);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(17,0.2933304);
   hdirt_stack_3->SetBinError(18,0.5541446);
   hdirt_stack_3->SetBinError(19,0.4782689);
   hdirt_stack_3->SetBinError(20,0.3855605);
   hdirt_stack_3->SetBinError(21,0.5854732);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(23,0.637085);
   hdirt_stack_3->SetBinError(24,0.40094);
   hdirt_stack_3->SetBinError(25,0.296158);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.04719);
   houtFV_stack_4->SetBinContent(2,8.226158);
   houtFV_stack_4->SetBinContent(3,8.43647);
   houtFV_stack_4->SetBinContent(4,9.033459);
   houtFV_stack_4->SetBinContent(5,7.935124);
   houtFV_stack_4->SetBinContent(6,8.143942);
   houtFV_stack_4->SetBinContent(7,8.44244);
   houtFV_stack_4->SetBinContent(8,8.388939);
   houtFV_stack_4->SetBinContent(9,6.677136);
   houtFV_stack_4->SetBinContent(10,7.956194);
   houtFV_stack_4->SetBinContent(11,7.615088);
   houtFV_stack_4->SetBinContent(12,6.167571);
   houtFV_stack_4->SetBinContent(13,7.888956);
   houtFV_stack_4->SetBinContent(14,7.774675);
   houtFV_stack_4->SetBinContent(15,9.519214);
   houtFV_stack_4->SetBinContent(16,10.38503);
   houtFV_stack_4->SetBinContent(17,7.364936);
   houtFV_stack_4->SetBinContent(18,9.417072);
   houtFV_stack_4->SetBinContent(19,5.741609);
   houtFV_stack_4->SetBinContent(20,7.779151);
   houtFV_stack_4->SetBinContent(21,8.581633);
   houtFV_stack_4->SetBinContent(22,9.18426);
   houtFV_stack_4->SetBinContent(23,7.63622);
   houtFV_stack_4->SetBinContent(24,8.430162);
   houtFV_stack_4->SetBinContent(25,6.29697);
   houtFV_stack_4->SetBinError(1,1.745753);
   houtFV_stack_4->SetBinError(2,1.426064);
   houtFV_stack_4->SetBinError(3,1.443232);
   houtFV_stack_4->SetBinError(4,1.447573);
   houtFV_stack_4->SetBinError(5,1.371474);
   houtFV_stack_4->SetBinError(6,1.394485);
   houtFV_stack_4->SetBinError(7,1.448833);
   houtFV_stack_4->SetBinError(8,1.363129);
   houtFV_stack_4->SetBinError(9,1.320612);
   houtFV_stack_4->SetBinError(10,1.342686);
   houtFV_stack_4->SetBinError(11,1.450588);
   houtFV_stack_4->SetBinError(12,1.317765);
   houtFV_stack_4->SetBinError(13,1.371574);
   houtFV_stack_4->SetBinError(14,1.371017);
   houtFV_stack_4->SetBinError(15,1.464886);
   houtFV_stack_4->SetBinError(16,1.61141);
   houtFV_stack_4->SetBinError(17,1.350405);
   houtFV_stack_4->SetBinError(18,1.723653);
   houtFV_stack_4->SetBinError(19,1.186545);
   houtFV_stack_4->SetBinError(20,1.404312);
   houtFV_stack_4->SetBinError(21,1.436041);
   houtFV_stack_4->SetBinError(22,1.6024);
   houtFV_stack_4->SetBinError(23,1.36956);
   houtFV_stack_4->SetBinError(24,1.484793);
   houtFV_stack_4->SetBinError(25,1.266338);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2340485);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4431924);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.07685162);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2602795);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2154106);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6144934);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.07171008);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09526134);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1047516);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2760955);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04131896);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3987492);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2402984);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4574248);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2524534);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1174438);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3346359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5622692);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3549316);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1869977);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.06358898);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1482155);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2100578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.05442126);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2006794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1137009);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2510422);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04284518);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05603945);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06115622);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1664818);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03131428);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2128085);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1445019);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2489741);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.09582777);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06245938);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2588612);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2629315);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1984717);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08157538);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.04027971);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5893981);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5571766);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3928851);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5856361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4553261);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5972469);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5928632);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2544584);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5404648);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5683194);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6158751);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3331628);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2534792);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3836788);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5853072);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3511795);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4355958);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3870673);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3448282);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3450447);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7956603);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4146227);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3975015);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6086844);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4348391);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1773178);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1779327);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1800975);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2020478);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2088103);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2505829);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2498046);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08852037);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2006522);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2504975);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2194575);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1495992);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1452794);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1571023);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2312782);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1329016);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1501756);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1673301);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1005497);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1091416);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2689336);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1787211);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1645331);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3103237);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1679235);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,45.41685);
   hNCpi0inFVres_stack_7->SetBinContent(2,45.2439);
   hNCpi0inFVres_stack_7->SetBinContent(3,44.4759);
   hNCpi0inFVres_stack_7->SetBinContent(4,43.35506);
   hNCpi0inFVres_stack_7->SetBinContent(5,37.37893);
   hNCpi0inFVres_stack_7->SetBinContent(6,36.13779);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.65167);
   hNCpi0inFVres_stack_7->SetBinContent(8,37.37493);
   hNCpi0inFVres_stack_7->SetBinContent(9,37.4204);
   hNCpi0inFVres_stack_7->SetBinContent(10,42.81686);
   hNCpi0inFVres_stack_7->SetBinContent(11,43.78391);
   hNCpi0inFVres_stack_7->SetBinContent(12,39.34065);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.58788);
   hNCpi0inFVres_stack_7->SetBinContent(14,42.23538);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.69598);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.12827);
   hNCpi0inFVres_stack_7->SetBinContent(17,41.17636);
   hNCpi0inFVres_stack_7->SetBinContent(18,38.03026);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.99764);
   hNCpi0inFVres_stack_7->SetBinContent(20,34.01045);
   hNCpi0inFVres_stack_7->SetBinContent(21,37.9589);
   hNCpi0inFVres_stack_7->SetBinContent(22,42.13156);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.11091);
   hNCpi0inFVres_stack_7->SetBinContent(24,44.04611);
   hNCpi0inFVres_stack_7->SetBinContent(25,43.16666);
   hNCpi0inFVres_stack_7->SetBinError(1,2.003773);
   hNCpi0inFVres_stack_7->SetBinError(2,2.200942);
   hNCpi0inFVres_stack_7->SetBinError(3,2.040404);
   hNCpi0inFVres_stack_7->SetBinError(4,2.096873);
   hNCpi0inFVres_stack_7->SetBinError(5,1.862908);
   hNCpi0inFVres_stack_7->SetBinError(6,1.820422);
   hNCpi0inFVres_stack_7->SetBinError(7,2.035958);
   hNCpi0inFVres_stack_7->SetBinError(8,1.825289);
   hNCpi0inFVres_stack_7->SetBinError(9,1.764264);
   hNCpi0inFVres_stack_7->SetBinError(10,2.008158);
   hNCpi0inFVres_stack_7->SetBinError(11,2.013115);
   hNCpi0inFVres_stack_7->SetBinError(12,1.90763);
   hNCpi0inFVres_stack_7->SetBinError(13,1.785976);
   hNCpi0inFVres_stack_7->SetBinError(14,1.922403);
   hNCpi0inFVres_stack_7->SetBinError(15,2.00779);
   hNCpi0inFVres_stack_7->SetBinError(16,1.970115);
   hNCpi0inFVres_stack_7->SetBinError(17,2.007264);
   hNCpi0inFVres_stack_7->SetBinError(18,1.796673);
   hNCpi0inFVres_stack_7->SetBinError(19,1.90878);
   hNCpi0inFVres_stack_7->SetBinError(20,1.718194);
   hNCpi0inFVres_stack_7->SetBinError(21,1.869874);
   hNCpi0inFVres_stack_7->SetBinError(22,1.939775);
   hNCpi0inFVres_stack_7->SetBinError(23,2.01056);
   hNCpi0inFVres_stack_7->SetBinError(24,2.112314);
   hNCpi0inFVres_stack_7->SetBinError(25,1.925858);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.17283);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.33347);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.90811);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.971966);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.037199);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.086224);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.9683);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.984724);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.576546);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.970675);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.32367);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.250635);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.868031);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.86801);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.691058);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.344473);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.93222);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.135005);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.933171);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.7034);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.594984);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.307222);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.598319);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.84448);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.093924);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.120248);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.22766);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.242872);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.169355);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9681524);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.096528);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.029897);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9221462);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.200772);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8466257);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.192829);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.981853);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9222233);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.26497);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.009837);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9254796);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.11032);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6753356);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.983624);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.126826);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.004747);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8900771);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.073533);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.046486);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.214099);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1281492);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1460168);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1532392);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06562697);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.07614509);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1114219);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1290147);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1326828);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06562698);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04859599);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,23.78146);
   hCCpi0inFV_stack_10->SetBinContent(2,22.35822);
   hCCpi0inFV_stack_10->SetBinContent(3,22.96226);
   hCCpi0inFV_stack_10->SetBinContent(4,23.56053);
   hCCpi0inFV_stack_10->SetBinContent(5,20.39429);
   hCCpi0inFV_stack_10->SetBinContent(6,16.05872);
   hCCpi0inFV_stack_10->SetBinContent(7,16.74052);
   hCCpi0inFV_stack_10->SetBinContent(8,17.33754);
   hCCpi0inFV_stack_10->SetBinContent(9,18.25289);
   hCCpi0inFV_stack_10->SetBinContent(10,18.46235);
   hCCpi0inFV_stack_10->SetBinContent(11,20.14121);
   hCCpi0inFV_stack_10->SetBinContent(12,21.7839);
   hCCpi0inFV_stack_10->SetBinContent(13,26.23242);
   hCCpi0inFV_stack_10->SetBinContent(14,24.54281);
   hCCpi0inFV_stack_10->SetBinContent(15,23.33363);
   hCCpi0inFV_stack_10->SetBinContent(16,17.74221);
   hCCpi0inFV_stack_10->SetBinContent(17,20.48826);
   hCCpi0inFV_stack_10->SetBinContent(18,18.59321);
   hCCpi0inFV_stack_10->SetBinContent(19,16.26177);
   hCCpi0inFV_stack_10->SetBinContent(20,14.37641);
   hCCpi0inFV_stack_10->SetBinContent(21,16.1863);
   hCCpi0inFV_stack_10->SetBinContent(22,23.03792);
   hCCpi0inFV_stack_10->SetBinContent(23,23.48933);
   hCCpi0inFV_stack_10->SetBinContent(24,25.28673);
   hCCpi0inFV_stack_10->SetBinContent(25,24.48744);
   hCCpi0inFV_stack_10->SetBinError(1,2.520596);
   hCCpi0inFV_stack_10->SetBinError(2,2.358599);
   hCCpi0inFV_stack_10->SetBinError(3,2.418652);
   hCCpi0inFV_stack_10->SetBinError(4,2.440798);
   hCCpi0inFV_stack_10->SetBinError(5,2.31269);
   hCCpi0inFV_stack_10->SetBinError(6,1.971616);
   hCCpi0inFV_stack_10->SetBinError(7,2.075989);
   hCCpi0inFV_stack_10->SetBinError(8,2.119029);
   hCCpi0inFV_stack_10->SetBinError(9,2.159699);
   hCCpi0inFV_stack_10->SetBinError(10,2.117702);
   hCCpi0inFV_stack_10->SetBinError(11,2.224276);
   hCCpi0inFV_stack_10->SetBinError(12,2.3717);
   hCCpi0inFV_stack_10->SetBinError(13,2.566249);
   hCCpi0inFV_stack_10->SetBinError(14,2.497852);
   hCCpi0inFV_stack_10->SetBinError(15,2.379199);
   hCCpi0inFV_stack_10->SetBinError(16,2.132119);
   hCCpi0inFV_stack_10->SetBinError(17,2.265364);
   hCCpi0inFV_stack_10->SetBinError(18,2.15889);
   hCCpi0inFV_stack_10->SetBinError(19,1.960432);
   hCCpi0inFV_stack_10->SetBinError(20,1.887332);
   hCCpi0inFV_stack_10->SetBinError(21,2.022168);
   hCCpi0inFV_stack_10->SetBinError(22,2.438595);
   hCCpi0inFV_stack_10->SetBinError(23,2.456283);
   hCCpi0inFV_stack_10->SetBinError(24,2.520869);
   hCCpi0inFV_stack_10->SetBinError(25,2.4769);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.03459);
   hNCinFV_stack_11->SetBinContent(2,11.75772);
   hNCinFV_stack_11->SetBinContent(3,10.09138);
   hNCinFV_stack_11->SetBinContent(4,11.14948);
   hNCinFV_stack_11->SetBinContent(5,11.34864);
   hNCinFV_stack_11->SetBinContent(6,10.19064);
   hNCinFV_stack_11->SetBinContent(7,11.2226);
   hNCinFV_stack_11->SetBinContent(8,8.710194);
   hNCinFV_stack_11->SetBinContent(9,10.47146);
   hNCinFV_stack_11->SetBinContent(10,7.601908);
   hNCinFV_stack_11->SetBinContent(11,7.290608);
   hNCinFV_stack_11->SetBinContent(12,10.23176);
   hNCinFV_stack_11->SetBinContent(13,12.43874);
   hNCinFV_stack_11->SetBinContent(14,13.9971);
   hNCinFV_stack_11->SetBinContent(15,18.15641);
   hNCinFV_stack_11->SetBinContent(16,12.31562);
   hNCinFV_stack_11->SetBinContent(17,13.37782);
   hNCinFV_stack_11->SetBinContent(18,12.80651);
   hNCinFV_stack_11->SetBinContent(19,12.71671);
   hNCinFV_stack_11->SetBinContent(20,11.82746);
   hNCinFV_stack_11->SetBinContent(21,8.819241);
   hNCinFV_stack_11->SetBinContent(22,9.940019);
   hNCinFV_stack_11->SetBinContent(23,13.85431);
   hNCinFV_stack_11->SetBinContent(24,11.82753);
   hNCinFV_stack_11->SetBinContent(25,10.23669);
   hNCinFV_stack_11->SetBinError(1,1.819873);
   hNCinFV_stack_11->SetBinError(2,1.802068);
   hNCinFV_stack_11->SetBinError(3,1.683316);
   hNCinFV_stack_11->SetBinError(4,1.896142);
   hNCinFV_stack_11->SetBinError(5,1.851536);
   hNCinFV_stack_11->SetBinError(6,1.644267);
   hNCinFV_stack_11->SetBinError(7,1.885101);
   hNCinFV_stack_11->SetBinError(8,1.448381);
   hNCinFV_stack_11->SetBinError(9,1.657115);
   hNCinFV_stack_11->SetBinError(10,1.323102);
   hNCinFV_stack_11->SetBinError(11,1.304284);
   hNCinFV_stack_11->SetBinError(12,1.669678);
   hNCinFV_stack_11->SetBinError(13,1.909654);
   hNCinFV_stack_11->SetBinError(14,2.12213);
   hNCinFV_stack_11->SetBinError(15,2.472343);
   hNCinFV_stack_11->SetBinError(16,2.013481);
   hNCinFV_stack_11->SetBinError(17,2.138122);
   hNCinFV_stack_11->SetBinError(18,2.010638);
   hNCinFV_stack_11->SetBinError(19,2.191164);
   hNCinFV_stack_11->SetBinError(20,2.131255);
   hNCinFV_stack_11->SetBinError(21,1.404801);
   hNCinFV_stack_11->SetBinError(22,1.753528);
   hNCinFV_stack_11->SetBinError(23,2.198235);
   hNCinFV_stack_11->SetBinError(24,2.072827);
   hNCinFV_stack_11->SetBinError(25,1.607595);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,26.76754);
   hnumuCCinFV_stack_12->SetBinContent(2,29.88199);
   hnumuCCinFV_stack_12->SetBinContent(3,16.7592);
   hnumuCCinFV_stack_12->SetBinContent(4,6.5551);
   hnumuCCinFV_stack_12->SetBinContent(5,6.646148);
   hnumuCCinFV_stack_12->SetBinContent(6,7.954225);
   hnumuCCinFV_stack_12->SetBinContent(7,8.125097);
   hnumuCCinFV_stack_12->SetBinContent(8,7.941944);
   hnumuCCinFV_stack_12->SetBinContent(9,12.01569);
   hnumuCCinFV_stack_12->SetBinContent(10,13.42938);
   hnumuCCinFV_stack_12->SetBinContent(11,19.70298);
   hnumuCCinFV_stack_12->SetBinContent(12,26.38054);
   hnumuCCinFV_stack_12->SetBinContent(13,25.87197);
   hnumuCCinFV_stack_12->SetBinContent(14,27.2698);
   hnumuCCinFV_stack_12->SetBinContent(15,20.32084);
   hnumuCCinFV_stack_12->SetBinContent(16,13.40707);
   hnumuCCinFV_stack_12->SetBinContent(17,13.57723);
   hnumuCCinFV_stack_12->SetBinContent(18,10.03614);
   hnumuCCinFV_stack_12->SetBinContent(19,9.88534);
   hnumuCCinFV_stack_12->SetBinContent(20,8.02202);
   hnumuCCinFV_stack_12->SetBinContent(21,8.494709);
   hnumuCCinFV_stack_12->SetBinContent(22,8.801905);
   hnumuCCinFV_stack_12->SetBinContent(23,11.86441);
   hnumuCCinFV_stack_12->SetBinContent(24,18.09197);
   hnumuCCinFV_stack_12->SetBinContent(25,28.90203);
   hnumuCCinFV_stack_12->SetBinError(1,2.745982);
   hnumuCCinFV_stack_12->SetBinError(2,4.099949);
   hnumuCCinFV_stack_12->SetBinError(3,2.10566);
   hnumuCCinFV_stack_12->SetBinError(4,1.424324);
   hnumuCCinFV_stack_12->SetBinError(5,1.321096);
   hnumuCCinFV_stack_12->SetBinError(6,1.484408);
   hnumuCCinFV_stack_12->SetBinError(7,1.701849);
   hnumuCCinFV_stack_12->SetBinError(8,1.405284);
   hnumuCCinFV_stack_12->SetBinError(9,2.317773);
   hnumuCCinFV_stack_12->SetBinError(10,2.253325);
   hnumuCCinFV_stack_12->SetBinError(11,2.59081);
   hnumuCCinFV_stack_12->SetBinError(12,3.009646);
   hnumuCCinFV_stack_12->SetBinError(13,2.866174);
   hnumuCCinFV_stack_12->SetBinError(14,2.947779);
   hnumuCCinFV_stack_12->SetBinError(15,2.41322);
   hnumuCCinFV_stack_12->SetBinError(16,1.982725);
   hnumuCCinFV_stack_12->SetBinError(17,2.536263);
   hnumuCCinFV_stack_12->SetBinError(18,1.942886);
   hnumuCCinFV_stack_12->SetBinError(19,2.045618);
   hnumuCCinFV_stack_12->SetBinError(20,1.419104);
   hnumuCCinFV_stack_12->SetBinError(21,1.673268);
   hnumuCCinFV_stack_12->SetBinError(22,1.44186);
   hnumuCCinFV_stack_12->SetBinError(23,1.821668);
   hnumuCCinFV_stack_12->SetBinError(24,2.400352);
   hnumuCCinFV_stack_12->SetBinError(25,3.175937);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.7571448);
   hnueCCinFV_stack_13->SetBinContent(3,0.8911057);
   hnueCCinFV_stack_13->SetBinContent(4,0.8732486);
   hnueCCinFV_stack_13->SetBinContent(5,2.349073);
   hnueCCinFV_stack_13->SetBinContent(6,0.6369559);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.817753);
   hnueCCinFV_stack_13->SetBinContent(9,0.7449375);
   hnueCCinFV_stack_13->SetBinContent(10,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,1.084235);
   hnueCCinFV_stack_13->SetBinContent(13,1.385622);
   hnueCCinFV_stack_13->SetBinContent(14,0.9179845);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.5508933);
   hnueCCinFV_stack_13->SetBinContent(18,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(19,1.203684);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(21,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(22,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(23,1.927507);
   hnueCCinFV_stack_13->SetBinContent(24,0.9830823);
   hnueCCinFV_stack_13->SetBinContent(25,1.711908);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.4585326);
   hnueCCinFV_stack_13->SetBinError(3,0.5252213);
   hnueCCinFV_stack_13->SetBinError(4,0.4388192);
   hnueCCinFV_stack_13->SetBinError(5,1.640599);
   hnueCCinFV_stack_13->SetBinError(6,0.3718508);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.4884076);
   hnueCCinFV_stack_13->SetBinError(9,0.444635);
   hnueCCinFV_stack_13->SetBinError(10,0.4394482);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.4883754);
   hnueCCinFV_stack_13->SetBinError(13,0.6563592);
   hnueCCinFV_stack_13->SetBinError(14,0.4757247);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4001523);
   hnueCCinFV_stack_13->SetBinError(18,0.3401776);
   hnueCCinFV_stack_13->SetBinError(19,0.7503767);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(21,0.2945335);
   hnueCCinFV_stack_13->SetBinError(22,0.2556439);
   hnueCCinFV_stack_13->SetBinError(23,1.244362);
   hnueCCinFV_stack_13->SetBinError(24,0.5055057);
   hnueCCinFV_stack_13->SetBinError(25,0.6670957);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__14->SetBinContent(1,147.1521);
   hmcerror__14->SetBinContent(2,146.6058);
   hmcerror__14->SetBinContent(3,130.8695);
   hmcerror__14->SetBinContent(4,116.2108);
   hmcerror__14->SetBinContent(5,111.1471);
   hmcerror__14->SetBinContent(6,115.7564);
   hmcerror__14->SetBinContent(7,113.5506);
   hmcerror__14->SetBinContent(8,108.6557);
   hmcerror__14->SetBinContent(9,108.2645);
   hmcerror__14->SetBinContent(10,114.1158);
   hmcerror__14->SetBinContent(11,120.5094);
   hmcerror__14->SetBinContent(12,123.5485);
   hmcerror__14->SetBinContent(13,132.0351);
   hmcerror__14->SetBinContent(14,137.1683);
   hmcerror__14->SetBinContent(15,132.4648);
   hmcerror__14->SetBinContent(16,119.9264);
   hmcerror__14->SetBinContent(17,120.8782);
   hmcerror__14->SetBinContent(18,112.0473);
   hmcerror__14->SetBinContent(19,116.1317);
   hmcerror__14->SetBinContent(20,100.2932);
   hmcerror__14->SetBinContent(21,111.1588);
   hmcerror__14->SetBinContent(22,117.4114);
   hmcerror__14->SetBinContent(23,128.6565);
   hmcerror__14->SetBinContent(24,128.3718);
   hmcerror__14->SetBinContent(25,136.7166);
   hmcerror__14->SetBinError(1,51.22251);
   hmcerror__14->SetBinError(2,51.51636);
   hmcerror__14->SetBinError(3,53.93719);
   hmcerror__14->SetBinError(4,48.65913);
   hmcerror__14->SetBinError(5,38.09003);
   hmcerror__14->SetBinError(6,39.58125);
   hmcerror__14->SetBinError(7,47.12535);
   hmcerror__14->SetBinError(8,42.95047);
   hmcerror__14->SetBinError(9,41.52946);
   hmcerror__14->SetBinError(10,42.61488);
   hmcerror__14->SetBinError(11,44.32548);
   hmcerror__14->SetBinError(12,45.8556);
   hmcerror__14->SetBinError(13,45.12276);
   hmcerror__14->SetBinError(14,44.94421);
   hmcerror__14->SetBinError(15,48.61827);
   hmcerror__14->SetBinError(16,42.89191);
   hmcerror__14->SetBinError(17,48.52883);
   hmcerror__14->SetBinError(18,44.99061);
   hmcerror__14->SetBinError(19,47.96872);
   hmcerror__14->SetBinError(20,42.42846);
   hmcerror__14->SetBinError(21,41.48888);
   hmcerror__14->SetBinError(22,45.41485);
   hmcerror__14->SetBinError(23,45.76481);
   hmcerror__14->SetBinError(24,47.10063);
   hmcerror__14->SetBinError(25,48.96062);
   hmcerror__14->SetBinError(26,0.3895343);
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
   
   Double_t _fx3017[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3017[25] = {
   128,
   141,
   94,
   111,
   121,
   108,
   80,
   92,
   92,
   115,
   122,
   104,
   106,
   120,
   127,
   108,
   95,
   87,
   101,
   84,
   89,
   92,
   85,
   108,
   111};
   Double_t _felx3017[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3017[25] = {
   11.31371,
   11.87434,
   9.8173,
   10.53565,
   11,
   10.3923,
   9.0683,
   9.7138,
   9.7138,
   10.72381,
   11.04536,
   10.19804,
   10.29563,
   10.95445,
   11.26943,
   10.3923,
   9.8686,
   9.4503,
   10.04988,
   9.2886,
   9.5566,
   9.7138,
   9.3428,
   10.3923,
   10.53565};
   Double_t _fehx3017[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3017[25] = {
   11.31371,
   11.87434,
   9.616,
   10.53565,
   11,
   10.3923,
   8.8665,
   9.513,
   9.513,
   10.72381,
   11.04536,
   10.19804,
   10.29563,
   10.95445,
   11.26943,
   10.3923,
   9.667,
   9.2488,
   10.04988,
   9.0869,
   9.3552,
   9.513,
   9.1411,
   10.3923,
   10.53565};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(62.73744);
   Graph_Graph3017->SetMaximum(161.0686);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3018[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3018[25] = {
   0.3480924,
   0.3513937,
   0.4121448,
   0.4187144,
   0.3426993,
   0.3419358,
   0.4150164,
   0.3952897,
   0.3835924,
   0.3734353,
   0.3678176,
   0.3711548,
   0.3417482,
   0.3276574,
   0.3670278,
   0.3576519,
   0.401469,
   0.4015323,
   0.4130544,
   0.4230442,
   0.3732398,
   0.3868011,
   0.3557131,
   0.366908,
   0.3581176};
   Double_t _fehx3018[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3018[25] = {
   0.3480924,
   0.3513937,
   0.4121448,
   0.4187144,
   0.3426993,
   0.3419358,
   0.4150164,
   0.3952897,
   0.3835924,
   0.3734353,
   0.3678176,
   0.3711548,
   0.3417482,
   0.3276574,
   0.3670278,
   0.3576519,
   0.401469,
   0.4015323,
   0.4130544,
   0.4230442,
   0.3732398,
   0.3868011,
   0.3557131,
   0.366908,
   0.3581176};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-3.78,3.78);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3019[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3019[25] = {
   0.3101577,
   0.3087779,
   0.3331933,
   0.3206873,
   0.3173143,
   0.2910478,
   0.3319964,
   0.3287175,
   0.3463477,
   0.344072,
   0.3380595,
   0.3399751,
   0.303389,
   0.2987458,
   0.323557,
   0.3246173,
   0.3300948,
   0.3309856,
   0.2899649,
   0.3173552,
   0.3004951,
   0.3310464,
   0.3245923,
   0.3382301,
   0.3229895};
   Double_t _fehx3019[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3019[25] = {
   0.3101577,
   0.3087779,
   0.3331933,
   0.3206873,
   0.3173143,
   0.2910478,
   0.3319964,
   0.3287175,
   0.3463477,
   0.344072,
   0.3380595,
   0.3399751,
   0.303389,
   0.2987458,
   0.323557,
   0.3246173,
   0.3300948,
   0.3309856,
   0.2899649,
   0.3173552,
   0.3004951,
   0.3310464,
   0.3245923,
   0.3382301,
   0.3229895};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.78,3.78);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3020[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3020[25] = {
   0.8698485,
   0.9617625,
   0.7182727,
   0.955161,
   1.088648,
   0.9329939,
   0.7045318,
   0.8467115,
   0.8497704,
   1.007748,
   1.012369,
   0.841775,
   0.8028167,
   0.8748378,
   0.9587451,
   0.9005522,
   0.7859154,
   0.7764579,
   0.869702,
   0.8375443,
   0.8006567,
   0.7835696,
   0.660674,
   0.8413065,
   0.8118984};
   Double_t _felx3020[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3020[25] = {
   0.07688448,
   0.08099502,
   0.07501595,
   0.09065987,
   0.09896797,
   0.08977738,
   0.07986132,
   0.08939985,
   0.08972282,
   0.09397299,
   0.09165559,
   0.08254283,
   0.07797645,
   0.0798614,
   0.08507487,
   0.08665568,
   0.08164089,
   0.08434207,
   0.08653858,
   0.09261445,
   0.08597254,
   0.08273303,
   0.07261818,
   0.08095476,
   0.07706199};
   Double_t _fehx3020[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3020[25] = {
   0.07688448,
   0.08099502,
   0.07347777,
   0.09065987,
   0.09896797,
   0.08977738,
   0.07808414,
   0.08755181,
   0.0878681,
   0.09397299,
   0.09165559,
   0.08254283,
   0.07797645,
   0.0798614,
   0.08507487,
   0.08665568,
   0.0799731,
   0.08254372,
   0.08653858,
   0.09060335,
   0.08416071,
   0.0810228,
   0.07105044,
   0.08095476,
   0.07706199};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.5280998);
   Graph_Graph3020->SetMaximum(1.247572);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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

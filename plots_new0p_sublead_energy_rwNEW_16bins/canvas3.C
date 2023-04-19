#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 20:02:45 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-7.496588,451.2821,828.9648);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__7->SetBinContent(1,267.7116);
   hmc__7->SetBinContent(2,374.8294);
   hmc__7->SetBinContent(3,310.0212);
   hmc__7->SetBinContent(4,245.8768);
   hmc__7->SetBinContent(5,143.6991);
   hmc__7->SetBinContent(6,112.8793);
   hmc__7->SetBinContent(7,69.74129);
   hmc__7->SetBinContent(8,42.7485);
   hmc__7->SetBinContent(9,20.06431);
   hmc__7->SetBinContent(10,15.15715);
   hmc__7->SetBinContent(11,11.15689);
   hmc__7->SetBinContent(12,7.714037);
   hmc__7->SetBinContent(13,2.610598);
   hmc__7->SetBinContent(14,2.673663);
   hmc__7->SetBinContent(15,2.052843);
   hmc__7->SetBinContent(16,1.506374);
   hmc__7->SetBinContent(17,4.350244);
   hmc__7->SetBinError(1,60.58527);
   hmc__7->SetBinError(2,75.74457);
   hmc__7->SetBinError(3,70.81908);
   hmc__7->SetBinError(4,58.66647);
   hmc__7->SetBinError(5,45.34305);
   hmc__7->SetBinError(6,35.86968);
   hmc__7->SetBinError(7,24.58652);
   hmc__7->SetBinError(8,19.49249);
   hmc__7->SetBinError(9,17.30969);
   hmc__7->SetBinError(10,8.924178);
   hmc__7->SetBinError(11,7.577327);
   hmc__7->SetBinError(12,5.784378);
   hmc__7->SetBinError(13,4.846617);
   hmc__7->SetBinError(14,3.694062);
   hmc__7->SetBinError(15,4.31038);
   hmc__7->SetBinError(16,2.181517);
   hmc__7->SetBinError(17,6.259287);
   hmc__7->SetMinimum(-7.496588);
   hmc__7->SetMaximum(787.1418);
   hmc__7->SetEntries(1602.903);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",16,0,400);
   hs3_stack_3->SetMinimum(-1.150846e-08);
   hs3_stack_3->SetMaximum(393.5709);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,8.025139);
   hbadmatch_stack_1->SetBinContent(2,11.19072);
   hbadmatch_stack_1->SetBinContent(3,13.33492);
   hbadmatch_stack_1->SetBinContent(4,9.362214);
   hbadmatch_stack_1->SetBinContent(5,4.713582);
   hbadmatch_stack_1->SetBinContent(6,3.242929);
   hbadmatch_stack_1->SetBinContent(7,3.124465);
   hbadmatch_stack_1->SetBinContent(8,0.7808771);
   hbadmatch_stack_1->SetBinContent(9,0.8753801);
   hbadmatch_stack_1->SetBinContent(10,0.7319179);
   hbadmatch_stack_1->SetBinContent(11,0.7363783);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinError(1,1.709324);
   hbadmatch_stack_1->SetBinError(2,1.685932);
   hbadmatch_stack_1->SetBinError(3,2.042221);
   hbadmatch_stack_1->SetBinError(4,1.630885);
   hbadmatch_stack_1->SetBinError(5,1.06293);
   hbadmatch_stack_1->SetBinError(6,0.9702014);
   hbadmatch_stack_1->SetBinError(7,0.9328109);
   hbadmatch_stack_1->SetBinError(8,0.462543);
   hbadmatch_stack_1->SetBinError(9,0.5191111);
   hbadmatch_stack_1->SetBinError(10,0.438694);
   hbadmatch_stack_1->SetBinError(11,0.5222028);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,53.87018);
   hext_stack_2->SetBinContent(2,78.36533);
   hext_stack_2->SetBinContent(3,40.74702);
   hext_stack_2->SetBinContent(4,29.58018);
   hext_stack_2->SetBinContent(5,14.49741);
   hext_stack_2->SetBinContent(6,8.275974);
   hext_stack_2->SetBinContent(7,3.897177);
   hext_stack_2->SetBinContent(8,2.827422);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,1.048213);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,0.9660115);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,4.729647);
   hext_stack_2->SetBinError(2,5.854153);
   hext_stack_2->SetBinError(3,4.159485);
   hext_stack_2->SetBinError(4,3.510974);
   hext_stack_2->SetBinError(5,2.494378);
   hext_stack_2->SetBinError(6,1.795123);
   hext_stack_2->SetBinError(7,1.182339);
   hext_stack_2->SetBinError(8,1.193541);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.7595995);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.7189592);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetEntries(595);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,5.125293);
   hdirt_stack_3->SetBinContent(2,7.744327);
   hdirt_stack_3->SetBinContent(3,5.524547);
   hdirt_stack_3->SetBinContent(4,2.148791);
   hdirt_stack_3->SetBinContent(5,1.715171);
   hdirt_stack_3->SetBinContent(6,0.4762587);
   hdirt_stack_3->SetBinContent(7,0.6177251);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,1.203784);
   hdirt_stack_3->SetBinError(2,1.620114);
   hdirt_stack_3->SetBinError(3,1.203466);
   hdirt_stack_3->SetBinError(4,0.7545756);
   hdirt_stack_3->SetBinError(5,0.7420071);
   hdirt_stack_3->SetBinError(6,0.3652866);
   hdirt_stack_3->SetBinError(7,0.4549508);
   hdirt_stack_3->SetBinError(8,0.4142698);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,58.3448);
   houtFV_stack_4->SetBinContent(2,85.29662);
   houtFV_stack_4->SetBinContent(3,66.64246);
   houtFV_stack_4->SetBinContent(4,43.15396);
   houtFV_stack_4->SetBinContent(5,21.40503);
   houtFV_stack_4->SetBinContent(6,19.29276);
   houtFV_stack_4->SetBinContent(7,12.75654);
   houtFV_stack_4->SetBinContent(8,8.041225);
   houtFV_stack_4->SetBinContent(9,2.879117);
   houtFV_stack_4->SetBinContent(10,2.980925);
   houtFV_stack_4->SetBinContent(11,2.682774);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.2510497);
   houtFV_stack_4->SetBinContent(17,0.2090315);
   houtFV_stack_4->SetBinError(1,3.792515);
   houtFV_stack_4->SetBinError(2,4.77457);
   houtFV_stack_4->SetBinError(3,4.282628);
   houtFV_stack_4->SetBinError(4,3.284363);
   houtFV_stack_4->SetBinError(5,2.298476);
   houtFV_stack_4->SetBinError(6,2.242168);
   houtFV_stack_4->SetBinError(7,1.84332);
   houtFV_stack_4->SetBinError(8,1.430686);
   houtFV_stack_4->SetBinError(9,0.8740501);
   houtFV_stack_4->SetBinError(10,0.8552677);
   houtFV_stack_4->SetBinError(11,0.8783089);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.2510497);
   houtFV_stack_4->SetBinError(17,0.2090315);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.28648);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.164006);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.758788);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.463426);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.28324);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.493158);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6968357);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.485122);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5992603);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5376379);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3743209);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3841566);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4606363);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1815295);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8373359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2981109);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,37.53312);
   hNCpi0inFVres_stack_7->SetBinContent(2,59.40299);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.65725);
   hNCpi0inFVres_stack_7->SetBinContent(4,47.46091);
   hNCpi0inFVres_stack_7->SetBinContent(5,27.40902);
   hNCpi0inFVres_stack_7->SetBinContent(6,21.88416);
   hNCpi0inFVres_stack_7->SetBinContent(7,12.11495);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.862184);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.666374);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.566312);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.52089);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.9338218);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2927861);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3620359);
   hNCpi0inFVres_stack_7->SetBinError(1,1.988908);
   hNCpi0inFVres_stack_7->SetBinError(2,2.503908);
   hNCpi0inFVres_stack_7->SetBinError(3,2.553343);
   hNCpi0inFVres_stack_7->SetBinError(4,2.247211);
   hNCpi0inFVres_stack_7->SetBinError(5,1.630812);
   hNCpi0inFVres_stack_7->SetBinError(6,1.565877);
   hNCpi0inFVres_stack_7->SetBinError(7,1.102736);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9165418);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6370896);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5122437);
   hNCpi0inFVres_stack_7->SetBinError(11,0.424506);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2812022);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(14,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2183542);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1536621);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.309247);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.76564);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.83481);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.34222);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.142679);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.478386);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.170406);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.494397);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.311308);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7674223);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9159753);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.269564);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.242684);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9994236);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9239082);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7715145);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7008465);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.442609);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4255744);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3555691);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.283386);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,40.33167);
   hCCpi0inFV_stack_10->SetBinContent(2,53.29594);
   hCCpi0inFV_stack_10->SetBinContent(3,59.48184);
   hCCpi0inFV_stack_10->SetBinContent(4,58.40425);
   hCCpi0inFV_stack_10->SetBinContent(5,33.43506);
   hCCpi0inFV_stack_10->SetBinContent(6,29.55274);
   hCCpi0inFV_stack_10->SetBinContent(7,17.87496);
   hCCpi0inFV_stack_10->SetBinContent(8,8.822332);
   hCCpi0inFV_stack_10->SetBinContent(9,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(10,4.598106);
   hCCpi0inFV_stack_10->SetBinContent(11,2.889025);
   hCCpi0inFV_stack_10->SetBinContent(12,1.91052);
   hCCpi0inFV_stack_10->SetBinContent(13,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(14,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(15,1.020533);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,0.9269427);
   hCCpi0inFV_stack_10->SetBinError(1,3.258485);
   hCCpi0inFV_stack_10->SetBinError(2,3.638297);
   hCCpi0inFV_stack_10->SetBinError(3,3.931107);
   hCCpi0inFV_stack_10->SetBinError(4,3.844222);
   hCCpi0inFV_stack_10->SetBinError(5,2.871597);
   hCCpi0inFV_stack_10->SetBinError(6,2.765568);
   hCCpi0inFV_stack_10->SetBinError(7,2.142329);
   hCCpi0inFV_stack_10->SetBinError(8,1.525106);
   hCCpi0inFV_stack_10->SetBinError(9,1.144335);
   hCCpi0inFV_stack_10->SetBinError(10,1.029585);
   hCCpi0inFV_stack_10->SetBinError(11,0.7845188);
   hCCpi0inFV_stack_10->SetBinError(12,0.6511312);
   hCCpi0inFV_stack_10->SetBinError(13,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(14,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(15,0.5892049);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.4800908);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,8.004605);
   hNCinFV_stack_11->SetBinContent(2,9.102533);
   hNCinFV_stack_11->SetBinContent(3,9.971611);
   hNCinFV_stack_11->SetBinContent(4,12.73798);
   hNCinFV_stack_11->SetBinContent(5,9.273416);
   hNCinFV_stack_11->SetBinContent(6,8.10604);
   hNCinFV_stack_11->SetBinContent(7,6.730722);
   hNCinFV_stack_11->SetBinContent(8,4.398269);
   hNCinFV_stack_11->SetBinContent(9,0.9286332);
   hNCinFV_stack_11->SetBinContent(10,1.513708);
   hNCinFV_stack_11->SetBinContent(11,1.123658);
   hNCinFV_stack_11->SetBinContent(12,0.785171);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinError(1,1.468997);
   hNCinFV_stack_11->SetBinError(2,1.442036);
   hNCinFV_stack_11->SetBinError(3,1.545793);
   hNCinFV_stack_11->SetBinError(4,1.85177);
   hNCinFV_stack_11->SetBinError(5,1.582663);
   hNCinFV_stack_11->SetBinError(6,1.441982);
   hNCinFV_stack_11->SetBinError(7,1.345026);
   hNCinFV_stack_11->SetBinError(8,1.075808);
   hNCinFV_stack_11->SetBinError(9,0.48078);
   hNCinFV_stack_11->SetBinError(10,0.5875827);
   hNCinFV_stack_11->SetBinError(11,0.5188295);
   hNCinFV_stack_11->SetBinError(12,0.3925882);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,41.05353);
   hnumuCCinFV_stack_12->SetBinContent(2,48.43865);
   hnumuCCinFV_stack_12->SetBinContent(3,34.63789);
   hnumuCCinFV_stack_12->SetBinContent(4,30.86281);
   hnumuCCinFV_stack_12->SetBinContent(5,21.40064);
   hnumuCCinFV_stack_12->SetBinContent(6,14.38305);
   hnumuCCinFV_stack_12->SetBinContent(7,7.365778);
   hnumuCCinFV_stack_12->SetBinContent(8,6.381207);
   hnumuCCinFV_stack_12->SetBinContent(9,4.146931);
   hnumuCCinFV_stack_12->SetBinContent(10,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(11,0.7800994);
   hnumuCCinFV_stack_12->SetBinContent(12,1.44612);
   hnumuCCinFV_stack_12->SetBinContent(13,0.4236077);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(17,1.521768);
   hnumuCCinFV_stack_12->SetBinError(1,3.805767);
   hnumuCCinFV_stack_12->SetBinError(2,4.112227);
   hnumuCCinFV_stack_12->SetBinError(3,3.36899);
   hnumuCCinFV_stack_12->SetBinError(4,2.936657);
   hnumuCCinFV_stack_12->SetBinError(5,3.613198);
   hnumuCCinFV_stack_12->SetBinError(6,1.919654);
   hnumuCCinFV_stack_12->SetBinError(7,1.368857);
   hnumuCCinFV_stack_12->SetBinError(8,1.299907);
   hnumuCCinFV_stack_12->SetBinError(9,1.009445);
   hnumuCCinFV_stack_12->SetBinError(10,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(11,0.3900497);
   hnumuCCinFV_stack_12->SetBinError(12,0.6620848);
   hnumuCCinFV_stack_12->SetBinError(13,0.3004743);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(17,0.6539689);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,4.715926);
   hnueCCinFV_stack_13->SetBinContent(2,3.127988);
   hnueCCinFV_stack_13->SetBinContent(3,0.536893);
   hnueCCinFV_stack_13->SetBinContent(4,1.108967);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.6380705);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.916754);
   hnueCCinFV_stack_13->SetBinError(2,1.406483);
   hnueCCinFV_stack_13->SetBinError(3,0.3929602);
   hnueCCinFV_stack_13->SetBinError(4,0.5044524);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.3706889);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__8->SetBinContent(1,267.7116);
   hmcerror__8->SetBinContent(2,374.8294);
   hmcerror__8->SetBinContent(3,310.0212);
   hmcerror__8->SetBinContent(4,245.8768);
   hmcerror__8->SetBinContent(5,143.6991);
   hmcerror__8->SetBinContent(6,112.8793);
   hmcerror__8->SetBinContent(7,69.74129);
   hmcerror__8->SetBinContent(8,42.7485);
   hmcerror__8->SetBinContent(9,20.06431);
   hmcerror__8->SetBinContent(10,15.15715);
   hmcerror__8->SetBinContent(11,11.15689);
   hmcerror__8->SetBinContent(12,7.714037);
   hmcerror__8->SetBinContent(13,2.610598);
   hmcerror__8->SetBinContent(14,2.673663);
   hmcerror__8->SetBinContent(15,2.052843);
   hmcerror__8->SetBinContent(16,1.506374);
   hmcerror__8->SetBinContent(17,4.350244);
   hmcerror__8->SetBinError(1,60.58527);
   hmcerror__8->SetBinError(2,75.74457);
   hmcerror__8->SetBinError(3,70.81908);
   hmcerror__8->SetBinError(4,58.66647);
   hmcerror__8->SetBinError(5,45.34305);
   hmcerror__8->SetBinError(6,35.86968);
   hmcerror__8->SetBinError(7,24.58652);
   hmcerror__8->SetBinError(8,19.49249);
   hmcerror__8->SetBinError(9,17.30969);
   hmcerror__8->SetBinError(10,8.924178);
   hmcerror__8->SetBinError(11,7.577327);
   hmcerror__8->SetBinError(12,5.784378);
   hmcerror__8->SetBinError(13,4.846617);
   hmcerror__8->SetBinError(14,3.694062);
   hmcerror__8->SetBinError(15,4.31038);
   hmcerror__8->SetBinError(16,2.181517);
   hmcerror__8->SetBinError(17,6.259287);
   hmcerror__8->SetEntries(1602.903);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3009[16] = {
   254,
   335,
   325,
   211,
   132,
   75,
   50,
   24,
   29,
   14,
   5,
   4,
   4,
   2,
   0,
   1};
   Double_t _felx3009[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3009[16] = {
   15.93738,
   18.30301,
   18.02776,
   14.52584,
   11.48913,
   8.7852,
   7.2025,
   5.0476,
   5.5285,
   3.9102,
   2.48995,
   2.29683,
   2.29683,
   2,
   0,
   1};
   Double_t _fehx3009[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3009[16] = {
   15.93738,
   18.30301,
   18.02776,
   14.52584,
   11.48913,
   8.5831,
   6.9985,
   4.837,
   5.3201,
   3.6898,
   2.21064,
   1.98186,
   1.98186,
   1.51917,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,440);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(388.6333);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1465.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 236.9","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 324.8","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  284.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  70.8","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 318.2","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.1","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 212.8","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3010[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3010[16] = {
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
   Double_t _felx3010[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3010[16] = {
   0.226308,
   0.2020774,
   0.228433,
   0.2386011,
   0.3155416,
   0.3177701,
   0.3525389,
   0.4559806,
   0.8627105,
   0.5887769,
   0.6791613,
   0.7498509,
   1.856516,
   1.381648,
   2.099712,
   1.448191};
   Double_t _fehx3010[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3010[16] = {
   0.226308,
   0.2020774,
   0.228433,
   0.2386011,
   0.3155416,
   0.3177701,
   0.3525389,
   0.4559806,
   0.8627105,
   0.5887769,
   0.6791613,
   0.7498509,
   1.856516,
   1.381648,
   2.099712,
   1.448191};
   grae = new TGraphAsymmErrors(16,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,440);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3011[16] = {
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
   Double_t _felx3011[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3011[16] = {
   0.162843,
   0.1682013,
   0.1853372,
   0.1951799,
   0.2124725,
   0.2256638,
   0.2180824,
   0.2612589,
   0.2777059,
   0.2860566,
   0.262005,
   0.2932243,
   0.4276914,
   0.4475653,
   0.490292,
   0.5888156};
   Double_t _fehx3011[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3011[16] = {
   0.162843,
   0.1682013,
   0.1853372,
   0.1951799,
   0.2124725,
   0.2256638,
   0.2180824,
   0.2612589,
   0.2777059,
   0.2860566,
   0.262005,
   0.2932243,
   0.4276914,
   0.4475653,
   0.490292,
   0.5888156};
   grae = new TGraphAsymmErrors(16,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,440);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3012[16] = {
   0.9487822,
   0.8937399,
   1.048315,
   0.8581533,
   0.918586,
   0.6644263,
   0.7169354,
   0.5614231,
   1.445352,
   0.9236567,
   0.4481536,
   0.5185352,
   1.532216,
   0.7480375,
   0,
   0.6638459};
   Double_t _felx3012[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3012[16] = {
   0.05953189,
   0.04883023,
   0.05815008,
   0.05907771,
   0.07995264,
   0.07782824,
   0.1032745,
   0.1180766,
   0.275539,
   0.2579773,
   0.223176,
   0.2977468,
   0.87981,
   0.7480375,
   0,
   0.6638459};
   Double_t _fehx3012[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3012[16] = {
   0.05953189,
   0.04883023,
   0.05815008,
   0.05907771,
   0.07995264,
   0.07603783,
   0.1003494,
   0.1131502,
   0.2651524,
   0.2434363,
   0.1981413,
   0.2569161,
   0.7591594,
   0.568198,
   0.5591269,
   0.9026379};
   grae = new TGraphAsymmErrors(16,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,440);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2.520513);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

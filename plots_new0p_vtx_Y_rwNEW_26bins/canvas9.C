#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Mar 13 18:29:34 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-0.7433899,163.3333,82.20327);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__25->SetBinContent(2,12.67052);
   hmc__25->SetBinContent(3,23.94459);
   hmc__25->SetBinContent(4,27.76949);
   hmc__25->SetBinContent(5,24.74739);
   hmc__25->SetBinContent(6,15.47304);
   hmc__25->SetBinContent(7,17.84663);
   hmc__25->SetBinContent(8,21.69984);
   hmc__25->SetBinContent(9,15.70315);
   hmc__25->SetBinContent(10,19.28228);
   hmc__25->SetBinContent(11,12.05828);
   hmc__25->SetBinContent(12,17.79245);
   hmc__25->SetBinContent(13,12.65899);
   hmc__25->SetBinContent(14,13.08595);
   hmc__25->SetBinContent(15,14.4085);
   hmc__25->SetBinContent(16,18.66945);
   hmc__25->SetBinContent(17,14.34789);
   hmc__25->SetBinContent(18,20.2043);
   hmc__25->SetBinContent(19,19.94911);
   hmc__25->SetBinContent(20,17.98827);
   hmc__25->SetBinContent(21,21.15896);
   hmc__25->SetBinContent(22,27.39653);
   hmc__25->SetBinContent(23,37.16949);
   hmc__25->SetBinContent(24,30.65509);
   hmc__25->SetBinContent(25,23.85526);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,8.504648);
   hmc__25->SetBinError(3,12.52835);
   hmc__25->SetBinError(4,12.29689);
   hmc__25->SetBinError(5,12.31252);
   hmc__25->SetBinError(6,8.327042);
   hmc__25->SetBinError(7,9.953303);
   hmc__25->SetBinError(8,12.36933);
   hmc__25->SetBinError(9,15.05029);
   hmc__25->SetBinError(10,10.91519);
   hmc__25->SetBinError(11,6.981534);
   hmc__25->SetBinError(12,12.98182);
   hmc__25->SetBinError(13,9.030386);
   hmc__25->SetBinError(14,8.065116);
   hmc__25->SetBinError(15,12.93863);
   hmc__25->SetBinError(16,11.12966);
   hmc__25->SetBinError(17,8.484113);
   hmc__25->SetBinError(18,18.40396);
   hmc__25->SetBinError(19,15.5035);
   hmc__25->SetBinError(20,7.331806);
   hmc__25->SetBinError(21,11.13274);
   hmc__25->SetBinError(22,10.29409);
   hmc__25->SetBinError(23,16.65543);
   hmc__25->SetBinError(24,13.2998);
   hmc__25->SetBinError(25,14.21189);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetBinError(27,0.3895343);
   hmc__25->SetMinimum(-0.7433899);
   hmc__25->SetMaximum(78.05594);
   hmc__25->SetEntries(469.1651);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",26,-130,130);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(39.02797);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.5352025);
   hbadmatch_stack_1->SetBinContent(4,0.536893);
   hbadmatch_stack_1->SetBinContent(5,0.3401776);
   hbadmatch_stack_1->SetBinContent(6,0.9801958);
   hbadmatch_stack_1->SetBinContent(7,1.125349);
   hbadmatch_stack_1->SetBinContent(8,0.7336084);
   hbadmatch_stack_1->SetBinContent(9,1.034205);
   hbadmatch_stack_1->SetBinContent(10,1.306821);
   hbadmatch_stack_1->SetBinContent(12,1.052975);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,0.9558206);
   hbadmatch_stack_1->SetBinContent(15,0.9779288);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.5850745);
   hbadmatch_stack_1->SetBinContent(18,1.832961);
   hbadmatch_stack_1->SetBinContent(19,0.4406995);
   hbadmatch_stack_1->SetBinContent(20,1.140798);
   hbadmatch_stack_1->SetBinContent(21,0.8770706);
   hbadmatch_stack_1->SetBinContent(22,0.4312661);
   hbadmatch_stack_1->SetBinContent(23,0.9571198);
   hbadmatch_stack_1->SetBinContent(24,0.4277573);
   hbadmatch_stack_1->SetBinContent(25,0.2193965);
   hbadmatch_stack_1->SetBinError(2,0.3921167);
   hbadmatch_stack_1->SetBinError(4,0.3929602);
   hbadmatch_stack_1->SetBinError(5,0.3401776);
   hbadmatch_stack_1->SetBinError(6,0.4383608);
   hbadmatch_stack_1->SetBinError(7,0.5194673);
   hbadmatch_stack_1->SetBinError(8,0.4394482);
   hbadmatch_stack_1->SetBinError(9,0.4651087);
   hbadmatch_stack_1->SetBinError(10,0.6028295);
   hbadmatch_stack_1->SetBinError(12,0.5578749);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.492529);
   hbadmatch_stack_1->SetBinError(15,0.5907033);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.337793);
   hbadmatch_stack_1->SetBinError(18,0.7676093);
   hbadmatch_stack_1->SetBinError(19,0.313409);
   hbadmatch_stack_1->SetBinError(20,0.6273058);
   hbadmatch_stack_1->SetBinError(21,0.5197486);
   hbadmatch_stack_1->SetBinError(22,0.3061225);
   hbadmatch_stack_1->SetBinError(23,0.493121);
   hbadmatch_stack_1->SetBinError(24,0.3034424);
   hbadmatch_stack_1->SetBinError(25,0.2193965);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,1.454812);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.8131978);
   hext_stack_2->SetBinContent(8,0.9660115);
   hext_stack_2->SetBinContent(9,0.7309963);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,1.779209);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,1.697008);
   hext_stack_2->SetBinContent(18,2.428004);
   hext_stack_2->SetBinContent(19,1.779209);
   hext_stack_2->SetBinContent(20,3.076798);
   hext_stack_2->SetBinContent(21,2.923985);
   hext_stack_2->SetBinContent(22,4.933801);
   hext_stack_2->SetBinContent(23,5.814838);
   hext_stack_2->SetBinContent(24,2.834603);
   hext_stack_2->SetBinContent(25,1.78639);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,0.8615765);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.5750177);
   hext_stack_2->SetBinError(8,0.7189592);
   hext_stack_2->SetBinError(9,0.5201503);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.9206235);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.8873887);
   hext_stack_2->SetBinError(18,1.028599);
   hext_stack_2->SetBinError(19,0.9206235);
   hext_stack_2->SetBinError(20,1.126269);
   hext_stack_2->SetBinError(21,1.040301);
   hext_stack_2->SetBinError(22,1.428634);
   hext_stack_2->SetBinError(23,1.683489);
   hext_stack_2->SetBinError(24,1.106046);
   hext_stack_2->SetBinError(25,0.8039566);
   hext_stack_2->SetEntries(92);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(6,0.002351481);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(21,0.5529928);
   hdirt_stack_3->SetBinContent(23,0.4026575);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinError(6,0.002351481);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(21,0.437291);
   hdirt_stack_3->SetBinError(23,0.2984452);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetEntries(11);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(2,8.758974);
   houtFV_stack_4->SetBinContent(3,7.213617);
   houtFV_stack_4->SetBinContent(4,2.840843);
   houtFV_stack_4->SetBinContent(5,1.125349);
   houtFV_stack_4->SetBinContent(6,1.010218);
   houtFV_stack_4->SetBinContent(7,2.252909);
   houtFV_stack_4->SetBinContent(8,2.124484);
   houtFV_stack_4->SetBinContent(9,2.983185);
   houtFV_stack_4->SetBinContent(10,3.079633);
   houtFV_stack_4->SetBinContent(11,1.997348);
   houtFV_stack_4->SetBinContent(12,2.623544);
   houtFV_stack_4->SetBinContent(13,0.3934307);
   houtFV_stack_4->SetBinContent(14,2.774489);
   houtFV_stack_4->SetBinContent(15,2.29651);
   houtFV_stack_4->SetBinContent(16,2.768624);
   houtFV_stack_4->SetBinContent(17,0.7738351);
   houtFV_stack_4->SetBinContent(18,1.713804);
   houtFV_stack_4->SetBinContent(19,2.862711);
   houtFV_stack_4->SetBinContent(20,1.323754);
   houtFV_stack_4->SetBinContent(21,2.672538);
   houtFV_stack_4->SetBinContent(22,1.568107);
   houtFV_stack_4->SetBinContent(23,1.660551);
   houtFV_stack_4->SetBinContent(24,5.178369);
   houtFV_stack_4->SetBinContent(25,16.94334);
   houtFV_stack_4->SetBinError(2,1.400865);
   houtFV_stack_4->SetBinError(3,1.365228);
   houtFV_stack_4->SetBinError(4,0.8098046);
   houtFV_stack_4->SetBinError(5,0.5194673);
   houtFV_stack_4->SetBinError(6,0.4526291);
   houtFV_stack_4->SetBinError(7,0.7350885);
   houtFV_stack_4->SetBinError(8,0.7308883);
   houtFV_stack_4->SetBinError(9,0.9445988);
   houtFV_stack_4->SetBinError(10,0.8986459);
   houtFV_stack_4->SetBinError(11,0.7334836);
   houtFV_stack_4->SetBinError(12,0.8183516);
   houtFV_stack_4->SetBinError(13,0.2781975);
   houtFV_stack_4->SetBinError(14,0.8938426);
   houtFV_stack_4->SetBinError(15,0.7483154);
   houtFV_stack_4->SetBinError(16,0.8642839);
   houtFV_stack_4->SetBinError(17,0.4588674);
   houtFV_stack_4->SetBinError(18,0.6207051);
   houtFV_stack_4->SetBinError(19,0.8362704);
   houtFV_stack_4->SetBinError(20,0.5560625);
   houtFV_stack_4->SetBinError(21,0.7930793);
   houtFV_stack_4->SetBinError(22,0.7364395);
   houtFV_stack_4->SetBinError(23,0.650847);
   houtFV_stack_4->SetBinError(24,1.144335);
   houtFV_stack_4->SetBinError(25,2.039094);
   houtFV_stack_4->SetEntries(344);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.339872);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.836678);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.398516);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.860271);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.839174);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.776637);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.118678);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.154796);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.331406);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.610238);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.800138);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.802466);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.73388);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.537084);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.823821);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.498974);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.654252);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.903856);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.616974);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.940732);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.710394);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.833466);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.192598);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.7949858);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4103648);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6578776);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9768074);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8516433);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7004295);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5398647);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7724392);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7242434);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6031445);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5820726);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5140132);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5378189);
   hNCpi0inFVres_stack_7->SetBinError(14,0.547561);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5372157);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7389186);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6334135);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6360197);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6369877);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7323929);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7999153);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8955645);
   hNCpi0inFVres_stack_7->SetBinError(23,1.047034);
   hNCpi0inFVres_stack_7->SetBinError(24,1.047685);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2483746);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.12929);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.468498);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.439934);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.24189);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.435694);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.96189);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8087721);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.795154);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4178359);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9904539);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.506608);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.982988);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.157686);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3424653);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5469685);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5584701);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4152364);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4148453);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3355772);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3187231);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3073253);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.158647);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.316066);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4319288);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5893275);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2679725);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3009266);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(3,5.069357);
   hCCpi0inFV_stack_10->SetBinContent(4,5.977071);
   hCCpi0inFV_stack_10->SetBinContent(5,5.612136);
   hCCpi0inFV_stack_10->SetBinContent(6,3.033632);
   hCCpi0inFV_stack_10->SetBinContent(7,3.888652);
   hCCpi0inFV_stack_10->SetBinContent(8,5.57503);
   hCCpi0inFV_stack_10->SetBinContent(9,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(10,2.824546);
   hCCpi0inFV_stack_10->SetBinContent(11,2.535408);
   hCCpi0inFV_stack_10->SetBinContent(12,4.364181);
   hCCpi0inFV_stack_10->SetBinContent(13,3.754255);
   hCCpi0inFV_stack_10->SetBinContent(14,2.248457);
   hCCpi0inFV_stack_10->SetBinContent(15,2.102163);
   hCCpi0inFV_stack_10->SetBinContent(16,4.161241);
   hCCpi0inFV_stack_10->SetBinContent(17,3.779787);
   hCCpi0inFV_stack_10->SetBinContent(18,3.404593);
   hCCpi0inFV_stack_10->SetBinContent(19,6.149486);
   hCCpi0inFV_stack_10->SetBinContent(20,2.442341);
   hCCpi0inFV_stack_10->SetBinContent(21,2.344322);
   hCCpi0inFV_stack_10->SetBinContent(22,6.032023);
   hCCpi0inFV_stack_10->SetBinContent(23,7.920219);
   hCCpi0inFV_stack_10->SetBinContent(24,4.764673);
   hCCpi0inFV_stack_10->SetBinContent(25,1.710423);
   hCCpi0inFV_stack_10->SetBinError(2,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(3,1.152214);
   hCCpi0inFV_stack_10->SetBinError(4,1.245734);
   hCCpi0inFV_stack_10->SetBinError(5,1.241732);
   hCCpi0inFV_stack_10->SetBinError(6,0.8686081);
   hCCpi0inFV_stack_10->SetBinError(7,0.9366581);
   hCCpi0inFV_stack_10->SetBinError(8,1.181507);
   hCCpi0inFV_stack_10->SetBinError(9,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(10,0.9207541);
   hCCpi0inFV_stack_10->SetBinError(11,0.8686657);
   hCCpi0inFV_stack_10->SetBinError(12,1.041495);
   hCCpi0inFV_stack_10->SetBinError(13,0.9431575);
   hCCpi0inFV_stack_10->SetBinError(14,0.774932);
   hCCpi0inFV_stack_10->SetBinError(15,0.6787356);
   hCCpi0inFV_stack_10->SetBinError(16,1.021326);
   hCCpi0inFV_stack_10->SetBinError(17,0.9758528);
   hCCpi0inFV_stack_10->SetBinError(18,0.9065294);
   hCCpi0inFV_stack_10->SetBinError(19,1.27977);
   hCCpi0inFV_stack_10->SetBinError(20,0.759212);
   hCCpi0inFV_stack_10->SetBinError(21,0.7524904);
   hCCpi0inFV_stack_10->SetBinError(22,1.276948);
   hCCpi0inFV_stack_10->SetBinError(23,1.381208);
   hCCpi0inFV_stack_10->SetBinError(24,1.133263);
   hCCpi0inFV_stack_10->SetBinError(25,0.6196373);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(3,1.515398);
   hNCinFV_stack_11->SetBinContent(4,1.320373);
   hNCinFV_stack_11->SetBinContent(5,2.252388);
   hNCinFV_stack_11->SetBinContent(6,0.8753801);
   hNCinFV_stack_11->SetBinContent(7,1.268811);
   hNCinFV_stack_11->SetBinContent(8,0.9286332);
   hNCinFV_stack_11->SetBinContent(9,0.785171);
   hNCinFV_stack_11->SetBinContent(10,1.610679);
   hNCinFV_stack_11->SetBinContent(12,1.555735);
   hNCinFV_stack_11->SetBinContent(13,0.3917402);
   hNCinFV_stack_11->SetBinContent(14,0.5352025);
   hNCinFV_stack_11->SetBinContent(15,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.8770706);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.9269427);
   hNCinFV_stack_11->SetBinContent(19,1.125349);
   hNCinFV_stack_11->SetBinContent(20,0.5884556);
   hNCinFV_stack_11->SetBinContent(21,1.518779);
   hNCinFV_stack_11->SetBinContent(22,0.8753801);
   hNCinFV_stack_11->SetBinContent(23,1.127039);
   hNCinFV_stack_11->SetBinContent(24,1.712114);
   hNCinFV_stack_11->SetBinContent(25,0.3917402);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.588146);
   hNCinFV_stack_11->SetBinError(4,0.5548703);
   hNCinFV_stack_11->SetBinError(5,0.7350883);
   hNCinFV_stack_11->SetBinError(6,0.5191111);
   hNCinFV_stack_11->SetBinError(7,0.5889569);
   hNCinFV_stack_11->SetBinError(8,0.48078);
   hNCinFV_stack_11->SetBinError(9,0.3925882);
   hNCinFV_stack_11->SetBinError(10,0.6806271);
   hNCinFV_stack_11->SetBinError(12,0.7077556);
   hNCinFV_stack_11->SetBinError(13,0.2770047);
   hNCinFV_stack_11->SetBinError(14,0.3921167);
   hNCinFV_stack_11->SetBinError(15,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.5197486);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.4800908);
   hNCinFV_stack_11->SetBinError(19,0.5194673);
   hNCinFV_stack_11->SetBinError(20,0.3397478);
   hNCinFV_stack_11->SetBinError(21,0.5892709);
   hNCinFV_stack_11->SetBinError(22,0.5191111);
   hNCinFV_stack_11->SetBinError(23,0.5201044);
   hNCinFV_stack_11->SetBinError(24,0.6201715);
   hNCinFV_stack_11->SetBinError(25,0.2770047);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinContent(3,4.124452);
   hnumuCCinFV_stack_12->SetBinContent(4,4.709091);
   hnumuCCinFV_stack_12->SetBinContent(5,3.923699);
   hnumuCCinFV_stack_12->SetBinContent(6,2.888968);
   hnumuCCinFV_stack_12->SetBinContent(7,3.479183);
   hnumuCCinFV_stack_12->SetBinContent(8,4.817698);
   hnumuCCinFV_stack_12->SetBinContent(9,2.685397);
   hnumuCCinFV_stack_12->SetBinContent(10,4.049852);
   hnumuCCinFV_stack_12->SetBinContent(11,2.927212);
   hnumuCCinFV_stack_12->SetBinContent(12,4.279415);
   hnumuCCinFV_stack_12->SetBinContent(13,3.67688);
   hnumuCCinFV_stack_12->SetBinContent(14,2.589619);
   hnumuCCinFV_stack_12->SetBinContent(15,3.461595);
   hnumuCCinFV_stack_12->SetBinContent(16,4.576123);
   hnumuCCinFV_stack_12->SetBinContent(17,2.882507);
   hnumuCCinFV_stack_12->SetBinContent(18,4.720385);
   hnumuCCinFV_stack_12->SetBinContent(19,3.408798);
   hnumuCCinFV_stack_12->SetBinContent(20,4.158391);
   hnumuCCinFV_stack_12->SetBinContent(21,2.683701);
   hnumuCCinFV_stack_12->SetBinContent(22,4.058534);
   hnumuCCinFV_stack_12->SetBinContent(23,6.331112);
   hnumuCCinFV_stack_12->SetBinContent(24,5.086491);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8770706);
   hnumuCCinFV_stack_12->SetBinError(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinError(3,1.605688);
   hnumuCCinFV_stack_12->SetBinError(4,1.180438);
   hnumuCCinFV_stack_12->SetBinError(5,0.9769137);
   hnumuCCinFV_stack_12->SetBinError(6,0.9026359);
   hnumuCCinFV_stack_12->SetBinError(7,0.9645501);
   hnumuCCinFV_stack_12->SetBinError(8,1.535708);
   hnumuCCinFV_stack_12->SetBinError(9,1.176193);
   hnumuCCinFV_stack_12->SetBinError(10,1.061919);
   hnumuCCinFV_stack_12->SetBinError(11,0.9643159);
   hnumuCCinFV_stack_12->SetBinError(12,1.074785);
   hnumuCCinFV_stack_12->SetBinError(13,0.967854);
   hnumuCCinFV_stack_12->SetBinError(14,0.9577556);
   hnumuCCinFV_stack_12->SetBinError(15,1.037023);
   hnumuCCinFV_stack_12->SetBinError(16,1.245186);
   hnumuCCinFV_stack_12->SetBinError(17,0.8692268);
   hnumuCCinFV_stack_12->SetBinError(18,1.431665);
   hnumuCCinFV_stack_12->SetBinError(19,0.9281316);
   hnumuCCinFV_stack_12->SetBinError(20,1.128679);
   hnumuCCinFV_stack_12->SetBinError(21,1.057141);
   hnumuCCinFV_stack_12->SetBinError(22,0.9823721);
   hnumuCCinFV_stack_12->SetBinError(23,1.396098);
   hnumuCCinFV_stack_12->SetBinError(24,1.275508);
   hnumuCCinFV_stack_12->SetBinError(25,0.5197486);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(5,0.5991279);
   hnueCCinFV_stack_13->SetBinContent(10,1.569686);
   hnueCCinFV_stack_13->SetBinContent(15,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(18,0.756103);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(5,0.4487026);
   hnueCCinFV_stack_13->SetBinError(10,1.569686);
   hnueCCinFV_stack_13->SetBinError(15,0.2502081);
   hnueCCinFV_stack_13->SetBinError(18,0.4499676);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.4334685);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__26->SetBinContent(2,12.67052);
   hmcerror__26->SetBinContent(3,23.94459);
   hmcerror__26->SetBinContent(4,27.76949);
   hmcerror__26->SetBinContent(5,24.74739);
   hmcerror__26->SetBinContent(6,15.47304);
   hmcerror__26->SetBinContent(7,17.84663);
   hmcerror__26->SetBinContent(8,21.69984);
   hmcerror__26->SetBinContent(9,15.70315);
   hmcerror__26->SetBinContent(10,19.28228);
   hmcerror__26->SetBinContent(11,12.05828);
   hmcerror__26->SetBinContent(12,17.79245);
   hmcerror__26->SetBinContent(13,12.65899);
   hmcerror__26->SetBinContent(14,13.08595);
   hmcerror__26->SetBinContent(15,14.4085);
   hmcerror__26->SetBinContent(16,18.66945);
   hmcerror__26->SetBinContent(17,14.34789);
   hmcerror__26->SetBinContent(18,20.2043);
   hmcerror__26->SetBinContent(19,19.94911);
   hmcerror__26->SetBinContent(20,17.98827);
   hmcerror__26->SetBinContent(21,21.15896);
   hmcerror__26->SetBinContent(22,27.39653);
   hmcerror__26->SetBinContent(23,37.16949);
   hmcerror__26->SetBinContent(24,30.65509);
   hmcerror__26->SetBinContent(25,23.85526);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,8.504648);
   hmcerror__26->SetBinError(3,12.52835);
   hmcerror__26->SetBinError(4,12.29689);
   hmcerror__26->SetBinError(5,12.31252);
   hmcerror__26->SetBinError(6,8.327042);
   hmcerror__26->SetBinError(7,9.953303);
   hmcerror__26->SetBinError(8,12.36933);
   hmcerror__26->SetBinError(9,15.05029);
   hmcerror__26->SetBinError(10,10.91519);
   hmcerror__26->SetBinError(11,6.981534);
   hmcerror__26->SetBinError(12,12.98182);
   hmcerror__26->SetBinError(13,9.030386);
   hmcerror__26->SetBinError(14,8.065116);
   hmcerror__26->SetBinError(15,12.93863);
   hmcerror__26->SetBinError(16,11.12966);
   hmcerror__26->SetBinError(17,8.484113);
   hmcerror__26->SetBinError(18,18.40396);
   hmcerror__26->SetBinError(19,15.5035);
   hmcerror__26->SetBinError(20,7.331806);
   hmcerror__26->SetBinError(21,11.13274);
   hmcerror__26->SetBinError(22,10.29409);
   hmcerror__26->SetBinError(23,16.65543);
   hmcerror__26->SetBinError(24,13.2998);
   hmcerror__26->SetBinError(25,14.21189);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetBinError(27,0.3895343);
   hmcerror__26->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[26] = {
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
   Double_t _fy3033[26] = {
   0,
   13,
   20,
   22,
   16,
   16,
   21,
   14,
   14,
   14,
   9,
   10,
   8,
   7,
   7,
   14,
   11,
   10,
   21,
   10,
   29,
   31,
   24,
   35,
   21,
   0};
   Double_t _felx3033[26] = {
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
   Double_t _fely3033[26] = {
   0,
   3.77763,
   4.6266,
   4.8417,
   4.1628,
   4.1628,
   4.7354,
   3.9102,
   3.9102,
   3.9102,
   3.19354,
   3.34883,
   3.0307,
   2.85954,
   2.85954,
   3.9102,
   3.4975,
   3.34883,
   4.7354,
   3.34883,
   5.5285,
   5.7094,
   5.0476,
   6.0548,
   4.7354,
   0};
   Double_t _fehx3033[26] = {
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
   Double_t _fehy3033[26] = {
   1.1478,
   3.5552,
   4.4133,
   4.6299,
   3.9454,
   3.9454,
   4.5229,
   3.6898,
   3.6898,
   3.6898,
   2.9582,
   3.1179,
   2.7896,
   2.61053,
   2.61053,
   3.6898,
   3.27,
   3.1179,
   4.5229,
   3.1179,
   5.3201,
   5.5017,
   4.837,
   5.8483,
   4.5229,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-156,156);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(44.93313);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.6/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 397.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.6","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[26] = {
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
   Double_t _fy3034[26] = {
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
   Double_t _felx3034[26] = {
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
   Double_t _fely3034[26] = {
   0,
   0.6712153,
   0.5232224,
   0.4428203,
   0.4975279,
   0.5381644,
   0.5577134,
   0.5700193,
   0.958425,
   0.5660737,
   0.5789824,
   0.7296256,
   0.7133574,
   0.6163188,
   0.8979864,
   0.5961428,
   0.5913143,
   0.9108935,
   0.7771528,
   0.4075881,
   0.5261476,
   0.3757444,
   0.448094,
   0.433853,
   0.5957549,
   0};
   Double_t _fehx3034[26] = {
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
   Double_t _fehy3034[26] = {
   0,
   0.6712153,
   0.5232224,
   0.4428203,
   0.4975279,
   0.5381644,
   0.5577134,
   0.5700193,
   0.958425,
   0.5660737,
   0.5789824,
   0.7296256,
   0.7133574,
   0.6163188,
   0.8979864,
   0.5961428,
   0.5913143,
   0.9108935,
   0.7771528,
   0.4075881,
   0.5261476,
   0.3757444,
   0.448094,
   0.433853,
   0.5957549,
   0};
   grae = new TGraphAsymmErrors(26,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-156,156);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[26] = {
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
   Double_t _fy3035[26] = {
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
   Double_t _felx3035[26] = {
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
   Double_t _fely3035[26] = {
   0,
   0.2607739,
   0.2285774,
   0.2487522,
   0.2375281,
   0.2662031,
   0.2474117,
   0.2306659,
   0.2691646,
   0.2442337,
   0.2774798,
   0.247166,
   0.2363799,
   0.2540907,
   0.2214016,
   0.2256012,
   0.243846,
   0.2313023,
   0.2579176,
   0.2096907,
   0.2316724,
   0.2235686,
   0.1899457,
   0.2379428,
   0.2132816,
   0};
   Double_t _fehx3035[26] = {
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
   Double_t _fehy3035[26] = {
   0,
   0.2607739,
   0.2285774,
   0.2487522,
   0.2375281,
   0.2662031,
   0.2474117,
   0.2306659,
   0.2691646,
   0.2442337,
   0.2774798,
   0.247166,
   0.2363799,
   0.2540907,
   0.2214016,
   0.2256012,
   0.243846,
   0.2313023,
   0.2579176,
   0.2096907,
   0.2316724,
   0.2235686,
   0.1899457,
   0.2379428,
   0.2132816,
   0};
   grae = new TGraphAsymmErrors(26,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-156,156);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[26] = {
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
   Double_t _fy3036[26] = {
   10,
   1.026004,
   0.8352617,
   0.7922365,
   0.6465327,
   1.034056,
   1.176693,
   0.6451661,
   0.891541,
   0.7260553,
   0.7463748,
   0.5620363,
   0.6319619,
   0.5349249,
   0.4858245,
   0.7498884,
   0.7666633,
   0.4949442,
   1.052679,
   0.5559178,
   1.370578,
   1.13153,
   0.6456908,
   1.141735,
   0.8803089,
   10};
   Double_t _felx3036[26] = {
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
   Double_t _fely3036[26] = {
   0,
   0.2981432,
   0.1932211,
   0.1743532,
   0.1682116,
   0.2690356,
   0.2653386,
   0.1801949,
   0.2490074,
   0.2027872,
   0.264842,
   0.1882164,
   0.2394109,
   0.2185199,
   0.1984621,
   0.2094438,
   0.2437641,
   0.1657484,
   0.237374,
   0.1861674,
   0.2612841,
   0.2083987,
   0.1357995,
   0.1975137,
   0.1985055,
   0};
   Double_t _fehx3036[26] = {
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
   Double_t _fehy3036[26] = {
   0,
   0.2805883,
   0.184313,
   0.1667262,
   0.1594269,
   0.2549854,
   0.2534316,
   0.1700381,
   0.234972,
   0.1913571,
   0.2453251,
   0.1752373,
   0.2203651,
   0.1994911,
   0.1811799,
   0.1976384,
   0.2279081,
   0.1543187,
   0.2267219,
   0.1733296,
   0.2514348,
   0.2008174,
   0.1301336,
   0.1907775,
   0.1895976,
   0};
   grae = new TGraphAsymmErrors(26,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-156,156);
   Graph_Graph3036->SetMinimum(0.2586262);
   Graph_Graph3036->SetMaximum(10.97126);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

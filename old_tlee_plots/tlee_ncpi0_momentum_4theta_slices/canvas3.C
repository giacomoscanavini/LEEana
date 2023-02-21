#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Tue Dec  6 22:18:02 2022) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-3.46,1353.846,382.6032);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,71.09703);
   hmc__7->SetBinContent(2,165.7831);
   hmc__7->SetBinContent(3,164.1254);
   hmc__7->SetBinContent(4,125.7099);
   hmc__7->SetBinContent(5,79.96943);
   hmc__7->SetBinContent(6,43.43073);
   hmc__7->SetBinContent(7,27.67998);
   hmc__7->SetBinContent(8,18.67878);
   hmc__7->SetBinContent(9,14.34512);
   hmc__7->SetBinContent(10,8.975837);
   hmc__7->SetBinContent(11,6.944479);
   hmc__7->SetBinContent(12,5.108155);
   hmc__7->SetBinContent(13,36.84622);
   hmc__7->SetBinError(1,21.27929);
   hmc__7->SetBinError(2,43.14917);
   hmc__7->SetBinError(3,50.22412);
   hmc__7->SetBinError(4,39.83146);
   hmc__7->SetBinError(5,30.22923);
   hmc__7->SetBinError(6,16.77143);
   hmc__7->SetBinError(7,10.43077);
   hmc__7->SetBinError(8,9.750909);
   hmc__7->SetBinError(9,9.440643);
   hmc__7->SetBinError(10,5.435721);
   hmc__7->SetBinError(11,5.35604);
   hmc__7->SetBinError(12,4.960469);
   hmc__7->SetBinError(13,17.96523);
   hmc__7->SetMinimum(-3.46);
   hmc__7->SetMaximum(363.3);
   hmc__7->SetEntries(806.2285);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1200);
   hs3_stack_3->SetMinimum(-1.396248e-08);
   hs3_stack_3->SetMaximum(174.0722);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.481104);
   hbadmatch_stack_1->SetBinContent(2,4.227002);
   hbadmatch_stack_1->SetBinContent(3,2.92817);
   hbadmatch_stack_1->SetBinContent(4,2.081256);
   hbadmatch_stack_1->SetBinContent(5,1.465125);
   hbadmatch_stack_1->SetBinContent(7,0.7378436);
   hbadmatch_stack_1->SetBinContent(8,0.3401776);
   hbadmatch_stack_1->SetBinContent(9,0.346149);
   hbadmatch_stack_1->SetBinContent(13,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.8116541);
   hbadmatch_stack_1->SetBinError(2,1.173401);
   hbadmatch_stack_1->SetBinError(3,0.870869);
   hbadmatch_stack_1->SetBinError(4,0.6398674);
   hbadmatch_stack_1->SetBinError(5,0.5559542);
   hbadmatch_stack_1->SetBinError(7,0.5233154);
   hbadmatch_stack_1->SetBinError(8,0.3401776);
   hbadmatch_stack_1->SetBinError(9,0.2551395);
   hbadmatch_stack_1->SetBinError(13,0.1950249);
   hbadmatch_stack_1->SetEntries(65);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,6.889002);
   hext_stack_2->SetBinContent(2,13.38577);
   hext_stack_2->SetBinContent(3,6.821162);
   hext_stack_2->SetBinContent(4,7.836244);
   hext_stack_2->SetBinContent(5,9.380438);
   hext_stack_2->SetBinContent(6,4.442228);
   hext_stack_2->SetBinContent(7,4.628173);
   hext_stack_2->SetBinContent(8,0.6487947);
   hext_stack_2->SetBinContent(9,1.055394);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,0.9660115);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,4.587862);
   hext_stack_2->SetBinError(1,1.715413);
   hext_stack_2->SetBinError(2,2.305984);
   hext_stack_2->SetBinError(3,1.57485);
   hext_stack_2->SetBinError(4,1.930499);
   hext_stack_2->SetBinError(5,2.080391);
   hext_stack_2->SetBinError(6,1.466939);
   hext_stack_2->SetBinError(7,1.291697);
   hext_stack_2->SetBinError(8,0.4587671);
   hext_stack_2->SetBinError(9,0.6130171);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,0.7189592);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,1.593539);
   hext_stack_2->SetEntries(152);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,2.070125);
   hdirt_stack_3->SetBinContent(2,1.682929);
   hdirt_stack_3->SetBinContent(3,0.9224617);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.5945103);
   hdirt_stack_3->SetBinContent(6,0.9486203);
   hdirt_stack_3->SetBinContent(7,0.6327636);
   hdirt_stack_3->SetBinContent(8,1.486485);
   hdirt_stack_3->SetBinContent(9,0.1627274);
   hdirt_stack_3->SetBinContent(10,0.2261411);
   hdirt_stack_3->SetBinContent(11,0.2524987);
   hdirt_stack_3->SetBinContent(12,0.4933271);
   hdirt_stack_3->SetBinError(1,0.7068254);
   hdirt_stack_3->SetBinError(2,0.6350317);
   hdirt_stack_3->SetBinError(3,0.5042345);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3469747);
   hdirt_stack_3->SetBinError(6,0.5291345);
   hdirt_stack_3->SetBinError(7,0.4484929);
   hdirt_stack_3->SetBinError(8,1.15304);
   hdirt_stack_3->SetBinError(9,0.1627274);
   hdirt_stack_3->SetBinError(10,0.2261411);
   hdirt_stack_3->SetBinError(11,0.2524987);
   hdirt_stack_3->SetBinError(12,0.3720739);
   hdirt_stack_3->SetEntries(43);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,13.40508);
   houtFV_stack_4->SetBinContent(2,20.03468);
   houtFV_stack_4->SetBinContent(3,14.12212);
   houtFV_stack_4->SetBinContent(4,13.64102);
   houtFV_stack_4->SetBinContent(5,6.663386);
   houtFV_stack_4->SetBinContent(6,2.451938);
   houtFV_stack_4->SetBinContent(7,2.951234);
   houtFV_stack_4->SetBinContent(8,1.125389);
   houtFV_stack_4->SetBinContent(9,2.066728);
   houtFV_stack_4->SetBinContent(10,1.182368);
   houtFV_stack_4->SetBinContent(11,1.123658);
   houtFV_stack_4->SetBinContent(12,0.9346231);
   houtFV_stack_4->SetBinContent(13,5.839869);
   houtFV_stack_4->SetBinError(1,1.856501);
   houtFV_stack_4->SetBinError(2,2.22065);
   houtFV_stack_4->SetBinError(3,1.804925);
   houtFV_stack_4->SetBinError(4,1.840304);
   houtFV_stack_4->SetBinError(5,1.333015);
   houtFV_stack_4->SetBinError(6,0.7999168);
   houtFV_stack_4->SetBinError(7,0.8697769);
   houtFV_stack_4->SetBinError(8,0.5194869);
   houtFV_stack_4->SetBinError(9,0.7318632);
   houtFV_stack_4->SetBinError(10,0.6607292);
   houtFV_stack_4->SetBinError(11,0.5188295);
   houtFV_stack_4->SetBinError(12,0.4832526);
   houtFV_stack_4->SetBinError(13,1.268385);
   houtFV_stack_4->SetEntries(390);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.901004);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.858428);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.823756);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.177694);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.278241);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5241813);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1509571);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.489911);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1075194);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01533249);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1715729);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2674278);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5369736);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7593535);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.836816);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4551315);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2415647);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.0673661);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2964973);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.100147);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01084171);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.07145746);
   hNCpi0inFVcoh_stack_5->SetEntries(260);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.241271);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8053044);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5742512);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5030756);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.07061718);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05038801);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02588351);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.09499781);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.35206);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3129564);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2054616);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04417715);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02912438);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02009868);
   hNCpi0inFVqe_stack_6->SetEntries(49);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.14155);
   hNCpi0inFVres_stack_7->SetBinContent(2,62.15248);
   hNCpi0inFVres_stack_7->SetBinContent(3,76.99902);
   hNCpi0inFVres_stack_7->SetBinContent(4,56.47739);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.45422);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.64975);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.812385);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.664115);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.167317);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.432493);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.75617);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.773877);
   hNCpi0inFVres_stack_7->SetBinContent(13,14.19807);
   hNCpi0inFVres_stack_7->SetBinError(1,1.499322);
   hNCpi0inFVres_stack_7->SetBinError(2,2.695417);
   hNCpi0inFVres_stack_7->SetBinError(3,3.069942);
   hNCpi0inFVres_stack_7->SetBinError(4,2.507117);
   hNCpi0inFVres_stack_7->SetBinError(5,1.762865);
   hNCpi0inFVres_stack_7->SetBinError(6,1.325472);
   hNCpi0inFVres_stack_7->SetBinError(7,1.039534);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9303224);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8599);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6434078);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5244952);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4907142);
   hNCpi0inFVres_stack_7->SetBinError(13,1.423506);
   hNCpi0inFVres_stack_7->SetEntries(6441);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.01695);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.29288);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.58733);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.152006);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.138095);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.865194);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.163168);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.405778);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.850493);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.974665);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2939053);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5075234);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.036311);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7551191);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.424394);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.05759);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8267149);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8318512);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.571101);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6601332);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3431918);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6118026);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4005404);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1038298);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2701743);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6194282);
   hNCpi0inFVdis_stack_8->SetEntries(1217);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(2);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,9.766566);
   hCCpi0inFV_stack_10->SetBinContent(2,22.35407);
   hCCpi0inFV_stack_10->SetBinContent(3,26.2802);
   hCCpi0inFV_stack_10->SetBinContent(4,18.31485);
   hCCpi0inFV_stack_10->SetBinContent(5,12.3621);
   hCCpi0inFV_stack_10->SetBinContent(6,7.174026);
   hCCpi0inFV_stack_10->SetBinContent(7,4.448141);
   hCCpi0inFV_stack_10->SetBinContent(8,3.582709);
   hCCpi0inFV_stack_10->SetBinContent(9,2.197444);
   hCCpi0inFV_stack_10->SetBinContent(10,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5850745);
   hCCpi0inFV_stack_10->SetBinContent(12,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(13,4.882329);
   hCCpi0inFV_stack_10->SetBinError(1,1.557839);
   hCCpi0inFV_stack_10->SetBinError(2,2.390534);
   hCCpi0inFV_stack_10->SetBinError(3,2.573503);
   hCCpi0inFV_stack_10->SetBinError(4,2.194979);
   hCCpi0inFV_stack_10->SetBinError(5,1.738735);
   hCCpi0inFV_stack_10->SetBinError(6,1.358984);
   hCCpi0inFV_stack_10->SetBinError(7,1.057219);
   hCCpi0inFV_stack_10->SetBinError(8,0.9566654);
   hCCpi0inFV_stack_10->SetBinError(9,0.760276);
   hCCpi0inFV_stack_10->SetBinError(10,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(11,0.337793);
   hCCpi0inFV_stack_10->SetBinError(12,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(13,1.101406);
   hCCpi0inFV_stack_10->SetEntries(481);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,6.078629);
   hNCinFV_stack_11->SetBinContent(2,10.16798);
   hNCinFV_stack_11->SetBinContent(3,10.88967);
   hNCinFV_stack_11->SetBinContent(4,6.533325);
   hNCinFV_stack_11->SetBinContent(5,4.854755);
   hNCinFV_stack_11->SetBinContent(6,3.288837);
   hNCinFV_stack_11->SetBinContent(7,0.760358);
   hNCinFV_stack_11->SetBinContent(8,2.37971);
   hNCinFV_stack_11->SetBinContent(9,0.9410849);
   hNCinFV_stack_11->SetBinContent(10,1.125349);
   hNCinFV_stack_11->SetBinContent(11,0.1950248);
   hNCinFV_stack_11->SetBinContent(12,0.3254665);
   hNCinFV_stack_11->SetBinContent(13,1.656823);
   hNCinFV_stack_11->SetBinError(1,1.290447);
   hNCinFV_stack_11->SetBinError(2,1.617425);
   hNCinFV_stack_11->SetBinError(3,1.768628);
   hNCinFV_stack_11->SetBinError(4,1.407011);
   hNCinFV_stack_11->SetBinError(5,1.118292);
   hNCinFV_stack_11->SetBinError(6,0.9162577);
   hNCinFV_stack_11->SetBinError(7,0.3808712);
   hNCinFV_stack_11->SetBinError(8,0.7791629);
   hNCinFV_stack_11->SetBinError(9,0.4860075);
   hNCinFV_stack_11->SetBinError(10,0.5194673);
   hNCinFV_stack_11->SetBinError(11,0.1950249);
   hNCinFV_stack_11->SetBinError(12,0.2351038);
   hNCinFV_stack_11->SetBinError(13,0.6039525);
   hNCinFV_stack_11->SetEntries(212);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,2.825474);
   hnumuCCinFV_stack_12->SetBinContent(2,12.47607);
   hnumuCCinFV_stack_12->SetBinContent(3,7.711404);
   hnumuCCinFV_stack_12->SetBinContent(4,7.72687);
   hnumuCCinFV_stack_12->SetBinContent(5,6.088482);
   hnumuCCinFV_stack_12->SetBinContent(6,3.035568);
   hnumuCCinFV_stack_12->SetBinContent(7,0.3949549);
   hnumuCCinFV_stack_12->SetBinContent(8,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(9,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(10,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(13,1.323755);
   hnumuCCinFV_stack_12->SetBinError(1,0.834894);
   hnumuCCinFV_stack_12->SetBinError(2,2.207137);
   hnumuCCinFV_stack_12->SetBinError(3,1.585842);
   hnumuCCinFV_stack_12->SetBinError(4,1.450594);
   hnumuCCinFV_stack_12->SetBinError(5,1.25997);
   hnumuCCinFV_stack_12->SetBinError(6,0.957428);
   hnumuCCinFV_stack_12->SetBinError(7,0.2770234);
   hnumuCCinFV_stack_12->SetBinError(8,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(9,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(10,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(13,0.5560625);
   hnumuCCinFV_stack_12->SetEntries(170);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.2802773);
   hnueCCinFV_stack_13->SetBinContent(2,0.326651);
   hnueCCinFV_stack_13->SetBinContent(3,1.465812);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(6,4.908035e-06);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(11,0.4679016);
   hnueCCinFV_stack_13->SetBinContent(13,0.9287254);
   hnueCCinFV_stack_13->SetBinError(1,0.2802773);
   hnueCCinFV_stack_13->SetBinError(2,0.326651);
   hnueCCinFV_stack_13->SetBinError(3,0.7558871);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.4670934);
   hnueCCinFV_stack_13->SetBinError(6,4.908035e-06);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.2758068);
   hnueCCinFV_stack_13->SetBinError(11,0.4679016);
   hnueCCinFV_stack_13->SetBinError(13,0.5760934);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,71.09703);
   hmcerror__8->SetBinContent(2,165.7831);
   hmcerror__8->SetBinContent(3,164.1254);
   hmcerror__8->SetBinContent(4,125.7099);
   hmcerror__8->SetBinContent(5,79.96943);
   hmcerror__8->SetBinContent(6,43.43073);
   hmcerror__8->SetBinContent(7,27.67998);
   hmcerror__8->SetBinContent(8,18.67878);
   hmcerror__8->SetBinContent(9,14.34512);
   hmcerror__8->SetBinContent(10,8.975837);
   hmcerror__8->SetBinContent(11,6.944479);
   hmcerror__8->SetBinContent(12,5.108155);
   hmcerror__8->SetBinContent(13,36.84622);
   hmcerror__8->SetBinError(1,21.27929);
   hmcerror__8->SetBinError(2,43.14917);
   hmcerror__8->SetBinError(3,50.22412);
   hmcerror__8->SetBinError(4,39.83146);
   hmcerror__8->SetBinError(5,30.22923);
   hmcerror__8->SetBinError(6,16.77143);
   hmcerror__8->SetBinError(7,10.43077);
   hmcerror__8->SetBinError(8,9.750909);
   hmcerror__8->SetBinError(9,9.440643);
   hmcerror__8->SetBinError(10,5.435721);
   hmcerror__8->SetBinError(11,5.35604);
   hmcerror__8->SetBinError(12,4.960469);
   hmcerror__8->SetBinError(13,17.96523);
   hmcerror__8->SetEntries(806.2285);

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
   
   Double_t _fx3009[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3009[12] = {
   91,
   173,
   167,
   117,
   71,
   49,
   30,
   18,
   16,
   7,
   4,
   5};
   Double_t _felx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3009[12] = {
   9.6617,
   13.15295,
   12.92285,
   10.81665,
   8.5518,
   7.1318,
   5.6197,
   4.4008,
   4.1628,
   2.85954,
   2.29683,
   2.48995};
   Double_t _fehx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3009[12] = {
   9.46,
   13.15295,
   12.92285,
   10.81665,
   8.3496,
   6.9277,
   5.4117,
   4.1858,
   3.9454,
   2.61053,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(1.532853);
   Graph_Graph3009->SetMaximum(204.5979);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.6/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 748.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 14.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 56.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 10.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 79.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  294.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  56.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 108.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 47.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 41.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3010[12] = {
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
   Double_t _felx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3010[12] = {
   0.2992993,
   0.2602749,
   0.3060107,
   0.3168523,
   0.3780098,
   0.386165,
   0.3768344,
   0.5220314,
   0.6581082,
   0.6055949,
   0.7712659,
   0.9710882};
   Double_t _fehx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3010[12] = {
   0.2992993,
   0.2602749,
   0.3060107,
   0.3168523,
   0.3780098,
   0.386165,
   0.3768344,
   0.5220314,
   0.6581082,
   0.6055949,
   0.7712659,
   0.9710882};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3011[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3011[12] = {
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
   Double_t _felx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3011[12] = {
   0.2127086,
   0.22683,
   0.2450082,
   0.2623069,
   0.2835823,
   0.2816501,
   0.2270751,
   0.2803397,
   0.2560571,
   0.2795739,
   0.3275817,
   0.3258746};
   Double_t _fehx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3011[12] = {
   0.2127086,
   0.22683,
   0.2450082,
   0.2623069,
   0.2835823,
   0.2816501,
   0.2270751,
   0.2803397,
   0.2560571,
   0.2795739,
   0.3275817,
   0.3258746};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
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
   
   Double_t _fx3012[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3012[12] = {
   1.279941,
   1.043532,
   1.017515,
   0.9307144,
   0.8878393,
   1.128233,
   1.083816,
   0.9636605,
   1.115362,
   0.7798716,
   0.5759971,
   0.978827};
   Double_t _felx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3012[12] = {
   0.1358946,
   0.07933831,
   0.07873766,
   0.08604458,
   0.1069384,
   0.1642109,
   0.203024,
   0.2356043,
   0.2901892,
   0.318582,
   0.3307419,
   0.4874461};
   Double_t _fehx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3012[12] = {
   0.1330576,
   0.07933831,
   0.07873766,
   0.08604458,
   0.1044099,
   0.1595115,
   0.1955095,
   0.2240939,
   0.2750342,
   0.2908397,
   0.2853864,
   0.4327668};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.1284809);
   Graph_Graph3012->SetMaximum(1.529773);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_theta2_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

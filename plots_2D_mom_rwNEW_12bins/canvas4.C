#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 20:30:56 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-3.82,1353.846,422.4116);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,75.97916);
   hmc__10->SetBinContent(2,153.4812);
   hmc__10->SetBinContent(3,166.9441);
   hmc__10->SetBinContent(4,144.1024);
   hmc__10->SetBinContent(5,112.1136);
   hmc__10->SetBinContent(6,75.18605);
   hmc__10->SetBinContent(7,45.3496);
   hmc__10->SetBinContent(8,24.11688);
   hmc__10->SetBinContent(9,19.9186);
   hmc__10->SetBinContent(10,11.23081);
   hmc__10->SetBinContent(11,11.52792);
   hmc__10->SetBinContent(12,9.828077);
   hmc__10->SetBinContent(13,75.35455);
   hmc__10->SetBinError(1,22.14558);
   hmc__10->SetBinError(2,41.93628);
   hmc__10->SetBinError(3,42.9226);
   hmc__10->SetBinError(4,46.00085);
   hmc__10->SetBinError(5,36.47846);
   hmc__10->SetBinError(6,26.96186);
   hmc__10->SetBinError(7,20.06745);
   hmc__10->SetBinError(8,10.38963);
   hmc__10->SetBinError(9,11.1009);
   hmc__10->SetBinError(10,6.507376);
   hmc__10->SetBinError(11,8.71825);
   hmc__10->SetBinError(12,6.634907);
   hmc__10->SetBinError(13,30.86609);
   hmc__10->SetMinimum(-3.82);
   hmc__10->SetMaximum(401.1);
   hmc__10->SetEntries(918.3784);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(175.2913);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.111156);
   hbadmatch_stack_1->SetBinContent(2,3.970056);
   hbadmatch_stack_1->SetBinContent(3,3.445745);
   hbadmatch_stack_1->SetBinContent(4,2.530981);
   hbadmatch_stack_1->SetBinContent(5,1.713804);
   hbadmatch_stack_1->SetBinContent(6,0.3917402);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.4594623);
   hbadmatch_stack_1->SetBinContent(9,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.4186046);
   hbadmatch_stack_1->SetBinContent(12,0.5972074);
   hbadmatch_stack_1->SetBinContent(13,1.49368);
   hbadmatch_stack_1->SetBinError(1,1.028885);
   hbadmatch_stack_1->SetBinError(2,1.160646);
   hbadmatch_stack_1->SetBinError(3,0.9610319);
   hbadmatch_stack_1->SetBinError(4,0.8673347);
   hbadmatch_stack_1->SetBinError(5,0.6207051);
   hbadmatch_stack_1->SetBinError(6,0.2770047);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.3249046);
   hbadmatch_stack_1->SetBinError(9,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.4186046);
   hbadmatch_stack_1->SetBinError(12,0.4461959);
   hbadmatch_stack_1->SetBinError(13,0.6304254);
   hbadmatch_stack_1->SetEntries(65);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,12.17473);
   hext_stack_2->SetBinContent(2,11.09622);
   hext_stack_2->SetBinContent(3,7.131198);
   hext_stack_2->SetBinContent(4,3.083979);
   hext_stack_2->SetBinContent(5,7.138379);
   hext_stack_2->SetBinContent(6,1.297589);
   hext_stack_2->SetBinContent(7,1.219797);
   hext_stack_2->SetBinContent(8,0.9660115);
   hext_stack_2->SetBinContent(9,1.454812);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(13,4.587862);
   hext_stack_2->SetBinError(1,2.534216);
   hext_stack_2->SetBinError(2,2.201864);
   hext_stack_2->SetBinError(3,1.728522);
   hext_stack_2->SetBinError(4,1.033093);
   hext_stack_2->SetBinError(5,1.669307);
   hext_stack_2->SetBinError(6,0.6487947);
   hext_stack_2->SetBinError(7,0.7042499);
   hext_stack_2->SetBinError(8,0.7189592);
   hext_stack_2->SetBinError(9,0.8615765);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(13,1.593539);
   hext_stack_2->SetEntries(122);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.3381872);
   hdirt_stack_3->SetBinContent(2,2.54815);
   hdirt_stack_3->SetBinContent(3,1.371529);
   hdirt_stack_3->SetBinContent(5,0.6951543);
   hdirt_stack_3->SetBinContent(6,0.6951551);
   hdirt_stack_3->SetBinContent(7,0.5508394);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.4182143);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinError(1,0.3381872);
   hdirt_stack_3->SetBinError(2,0.9817641);
   hdirt_stack_3->SetBinError(3,0.6403833);
   hdirt_stack_3->SetBinError(5,0.4258516);
   hdirt_stack_3->SetBinError(6,0.4258516);
   hdirt_stack_3->SetBinError(7,0.3901795);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(12,0.4182143);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetEntries(27);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,11.20253);
   houtFV_stack_4->SetBinContent(2,15.75148);
   houtFV_stack_4->SetBinContent(3,10.10339);
   houtFV_stack_4->SetBinContent(4,5.825149);
   houtFV_stack_4->SetBinContent(5,4.156145);
   houtFV_stack_4->SetBinContent(6,4.586532);
   houtFV_stack_4->SetBinContent(7,4.163168);
   houtFV_stack_4->SetBinContent(8,1.51709);
   houtFV_stack_4->SetBinContent(9,1.462145);
   houtFV_stack_4->SetBinContent(10,0.785171);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,2.033427);
   houtFV_stack_4->SetBinContent(13,4.658106);
   houtFV_stack_4->SetBinError(1,1.69641);
   houtFV_stack_4->SetBinError(2,1.974958);
   houtFV_stack_4->SetBinError(3,1.61781);
   houtFV_stack_4->SetBinError(4,1.178385);
   houtFV_stack_4->SetBinError(5,0.9806517);
   houtFV_stack_4->SetBinError(6,1.092131);
   houtFV_stack_4->SetBinError(7,1.021743);
   houtFV_stack_4->SetBinError(8,0.5887087);
   houtFV_stack_4->SetBinError(9,0.6198731);
   houtFV_stack_4->SetBinError(10,0.3925882);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.8021936);
   houtFV_stack_4->SetBinError(13,1.12052);
   houtFV_stack_4->SetEntries(285);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.798562);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.149323);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,10.87622);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.53629);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.72079);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.913496);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.165166);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.37118);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.05904);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7385219);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8916399);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.94514);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4636538);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.855254);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.04303);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.162334);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.093788);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7909446);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5471458);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5382413);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2988711);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2713408);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2909527);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.901341);
   hNCpi0inFVcoh_stack_5->SetEntries(1156);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.710622);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2699026);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetEntries(53);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.05752);
   hNCpi0inFVres_stack_7->SetBinContent(2,50.46566);
   hNCpi0inFVres_stack_7->SetBinContent(3,72.31977);
   hNCpi0inFVres_stack_7->SetBinContent(4,66.47353);
   hNCpi0inFVres_stack_7->SetBinContent(5,44.99739);
   hNCpi0inFVres_stack_7->SetBinContent(6,29.58441);
   hNCpi0inFVres_stack_7->SetBinContent(7,17.4854);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.367207);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.129398);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.791255);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.706892);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.620448);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.30175);
   hNCpi0inFVres_stack_7->SetBinError(1,1.38823);
   hNCpi0inFVres_stack_7->SetBinError(2,2.328041);
   hNCpi0inFVres_stack_7->SetBinError(3,2.832528);
   hNCpi0inFVres_stack_7->SetBinError(4,2.722873);
   hNCpi0inFVres_stack_7->SetBinError(5,2.172983);
   hNCpi0inFVres_stack_7->SetBinError(6,1.770475);
   hNCpi0inFVres_stack_7->SetBinError(7,1.396686);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9126052);
   hNCpi0inFVres_stack_7->SetBinError(9,0.954981);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5921271);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6014749);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4747821);
   hNCpi0inFVres_stack_7->SetBinError(13,1.612331);
   hNCpi0inFVres_stack_7->SetEntries(6370);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.089114);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.59854);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.00014);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.66075);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.16951);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.147256);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.922378);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.662798);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.812844);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9623858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.323926);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.213158);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.278108);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7465598);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.052286);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.243363);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.177057);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.110796);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.029037);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7342944);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5025915);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4567469);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2576051);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3690854);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3903545);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8662939);
   hNCpi0inFVdis_stack_8->SetEntries(1557);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(3);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,11.92093);
   hCCpi0inFV_stack_10->SetBinContent(2,21.4147);
   hCCpi0inFV_stack_10->SetBinContent(3,24.16143);
   hCCpi0inFV_stack_10->SetBinContent(4,22.86551);
   hCCpi0inFV_stack_10->SetBinContent(5,15.49984);
   hCCpi0inFV_stack_10->SetBinContent(6,11.76333);
   hCCpi0inFV_stack_10->SetBinContent(7,7.18755);
   hCCpi0inFV_stack_10->SetBinContent(8,2.537621);
   hCCpi0inFV_stack_10->SetBinContent(9,2.495594);
   hCCpi0inFV_stack_10->SetBinContent(10,2.108925);
   hCCpi0inFV_stack_10->SetBinContent(11,1.557426);
   hCCpi0inFV_stack_10->SetBinContent(12,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(13,10.50466);
   hCCpi0inFV_stack_10->SetBinError(1,1.767267);
   hCCpi0inFV_stack_10->SetBinError(2,2.316074);
   hCCpi0inFV_stack_10->SetBinError(3,2.437316);
   hCCpi0inFV_stack_10->SetBinError(4,2.378874);
   hCCpi0inFV_stack_10->SetBinError(5,1.943062);
   hCCpi0inFV_stack_10->SetBinError(6,1.685908);
   hCCpi0inFV_stack_10->SetBinError(7,1.360932);
   hCCpi0inFV_stack_10->SetBinError(8,0.8329108);
   hCCpi0inFV_stack_10->SetBinError(9,0.7335366);
   hCCpi0inFV_stack_10->SetBinError(10,0.6806842);
   hCCpi0inFV_stack_10->SetBinError(11,0.7082233);
   hCCpi0inFV_stack_10->SetBinError(12,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(13,1.580945);
   hCCpi0inFV_stack_10->SetEntries(587);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,7.335475);
   hNCinFV_stack_11->SetBinContent(2,15.34359);
   hNCinFV_stack_11->SetBinContent(3,12.35916);
   hNCinFV_stack_11->SetBinContent(4,9.326061);
   hNCinFV_stack_11->SetBinContent(5,11.07743);
   hNCinFV_stack_11->SetBinContent(6,6.890482);
   hNCinFV_stack_11->SetBinContent(7,2.589184);
   hNCinFV_stack_11->SetBinContent(8,2.250697);
   hNCinFV_stack_11->SetBinContent(9,2.484368);
   hNCinFV_stack_11->SetBinContent(10,1.463836);
   hNCinFV_stack_11->SetBinContent(11,1.467217);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,5.410349);
   hNCinFV_stack_11->SetBinError(1,1.316252);
   hNCinFV_stack_11->SetBinError(2,1.937513);
   hNCinFV_stack_11->SetBinError(3,1.777355);
   hNCinFV_stack_11->SetBinError(4,1.505945);
   hNCinFV_stack_11->SetBinError(5,1.733623);
   hNCinFV_stack_11->SetBinError(6,1.301582);
   hNCinFV_stack_11->SetBinError(7,0.809167);
   hNCinFV_stack_11->SetBinError(8,0.7346377);
   hNCinFV_stack_11->SetBinError(9,0.8556093);
   hNCinFV_stack_11->SetBinError(10,0.620407);
   hNCinFV_stack_11->SetBinError(11,0.6214735);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(13,1.225241);
   hNCinFV_stack_11->SetEntries(331);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,5.034217);
   hnumuCCinFV_stack_12->SetBinContent(2,12.51429);
   hnumuCCinFV_stack_12->SetBinContent(3,10.5762);
   hnumuCCinFV_stack_12->SetBinContent(4,7.23927);
   hnumuCCinFV_stack_12->SetBinContent(5,4.300455);
   hnumuCCinFV_stack_12->SetBinContent(6,4.081312);
   hnumuCCinFV_stack_12->SetBinContent(7,3.421412);
   hnumuCCinFV_stack_12->SetBinContent(8,1.336874);
   hnumuCCinFV_stack_12->SetBinContent(9,0.8236836);
   hnumuCCinFV_stack_12->SetBinContent(10,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(11,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(13,4.447108);
   hnumuCCinFV_stack_12->SetBinError(1,1.109858);
   hnumuCCinFV_stack_12->SetBinError(2,1.862833);
   hnumuCCinFV_stack_12->SetBinError(3,1.667347);
   hnumuCCinFV_stack_12->SetBinError(4,1.341864);
   hnumuCCinFV_stack_12->SetBinError(5,1.046703);
   hnumuCCinFV_stack_12->SetBinError(6,1.032551);
   hnumuCCinFV_stack_12->SetBinError(7,1.047548);
   hnumuCCinFV_stack_12->SetBinError(8,0.5583292);
   hnumuCCinFV_stack_12->SetBinError(9,0.4132321);
   hnumuCCinFV_stack_12->SetBinError(10,0.438694);
   hnumuCCinFV_stack_12->SetBinError(11,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(13,1.063517);
   hnumuCCinFV_stack_12->SetEntries(236);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(2,1.126856);
   hnueCCinFV_stack_13->SetBinContent(3,0.8607981);
   hnueCCinFV_stack_13->SetBinContent(4,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.5843148);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,1.149871);
   hnueCCinFV_stack_13->SetBinContent(11,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(13,6.059104);
   hnueCCinFV_stack_13->SetBinError(1,0.5866007);
   hnueCCinFV_stack_13->SetBinError(2,0.518214);
   hnueCCinFV_stack_13->SetBinError(3,0.435136);
   hnueCCinFV_stack_13->SetBinError(4,0.2781975);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.4187168);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.5850191);
   hnueCCinFV_stack_13->SetBinError(11,0.3582875);
   hnueCCinFV_stack_13->SetBinError(13,2.070322);
   hnueCCinFV_stack_13->SetEntries(42);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,75.97916);
   hmcerror__11->SetBinContent(2,153.4812);
   hmcerror__11->SetBinContent(3,166.9441);
   hmcerror__11->SetBinContent(4,144.1024);
   hmcerror__11->SetBinContent(5,112.1136);
   hmcerror__11->SetBinContent(6,75.18605);
   hmcerror__11->SetBinContent(7,45.3496);
   hmcerror__11->SetBinContent(8,24.11688);
   hmcerror__11->SetBinContent(9,19.9186);
   hmcerror__11->SetBinContent(10,11.23081);
   hmcerror__11->SetBinContent(11,11.52792);
   hmcerror__11->SetBinContent(12,9.828077);
   hmcerror__11->SetBinContent(13,75.35455);
   hmcerror__11->SetBinError(1,22.14558);
   hmcerror__11->SetBinError(2,41.93628);
   hmcerror__11->SetBinError(3,42.9226);
   hmcerror__11->SetBinError(4,46.00085);
   hmcerror__11->SetBinError(5,36.47846);
   hmcerror__11->SetBinError(6,26.96186);
   hmcerror__11->SetBinError(7,20.06745);
   hmcerror__11->SetBinError(8,10.38963);
   hmcerror__11->SetBinError(9,11.1009);
   hmcerror__11->SetBinError(10,6.507376);
   hmcerror__11->SetBinError(11,8.71825);
   hmcerror__11->SetBinError(12,6.634907);
   hmcerror__11->SetBinError(13,30.86609);
   hmcerror__11->SetEntries(918.3784);

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
   
   Double_t _fx3013[12] = {
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
   Double_t _fy3013[12] = {
   68,
   169,
   191,
   147,
   95,
   72,
   36,
   36,
   26,
   12,
   4,
   5};
   Double_t _felx3013[12] = {
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
   Double_t _fely3013[12] = {
   8.3726,
   13,
   13.82027,
   12.12436,
   9.8686,
   8.6108,
   6.1381,
   6.1381,
   5.2453,
   3.64022,
   2.29683,
   2.48995};
   Double_t _fehx3013[12] = {
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
   Double_t _fehy3013[12] = {
   8.1701,
   13,
   13.82027,
   12.12436,
   9.667,
   8.4085,
   5.9318,
   5.9318,
   5.0358,
   3.4155,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(1.532853);
   Graph_Graph3013->SetMaximum(225.132);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 861.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 16.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 46.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 62.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  56.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  326.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  77.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 125.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 72.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 51.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[12] = {
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
   Double_t _fy3014[12] = {
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
   Double_t _felx3014[12] = {
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
   Double_t _fely3014[12] = {
   0.2914691,
   0.2732339,
   0.2571076,
   0.3192234,
   0.3253705,
   0.3586019,
   0.4425056,
   0.4308033,
   0.5573133,
   0.5794219,
   0.7562724,
   0.6750972};
   Double_t _fehx3014[12] = {
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
   Double_t _fehy3014[12] = {
   0.2914691,
   0.2732339,
   0.2571076,
   0.3192234,
   0.3253705,
   0.3586019,
   0.4425056,
   0.4308033,
   0.5573133,
   0.5794219,
   0.7562724,
   0.6750972};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[12] = {
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
   Double_t _fy3015[12] = {
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
   Double_t _felx3015[12] = {
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
   Double_t _fely3015[12] = {
   0.1779117,
   0.1967108,
   0.2203696,
   0.2628352,
   0.2880102,
   0.288455,
   0.2808147,
   0.2705455,
   0.2749022,
   0.2896716,
   0.2562968,
   0.2973181};
   Double_t _fehx3015[12] = {
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
   Double_t _fehy3015[12] = {
   0.1779117,
   0.1967108,
   0.2203696,
   0.2628352,
   0.2880102,
   0.288455,
   0.2808147,
   0.2705455,
   0.2749022,
   0.2896716,
   0.2562968,
   0.2973181};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
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
   
   Double_t _fx3016[12] = {
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
   Double_t _fy3016[12] = {
   0.8949822,
   1.101112,
   1.144095,
   1.020108,
   0.8473548,
   0.9576244,
   0.7938328,
   1.492731,
   1.305313,
   1.06849,
   0.3469836,
   0.5087465};
   Double_t _felx3016[12] = {
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
   Double_t _fely3016[12] = {
   0.110196,
   0.08470092,
   0.08278384,
   0.08413711,
   0.08802322,
   0.1145266,
   0.1353507,
   0.2545147,
   0.2633368,
   0.3241281,
   0.1992406,
   0.2533507};
   Double_t _fehx3016[12] = {
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
   Double_t _fehy3016[12] = {
   0.1075308,
   0.08470092,
   0.08278384,
   0.08413711,
   0.08622504,
   0.1118359,
   0.1308016,
   0.2459605,
   0.252819,
   0.3041188,
   0.1719182,
   0.2249311};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.1329687);
   Graph_Graph3016->SetMaximum(1.897786);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_theta3_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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

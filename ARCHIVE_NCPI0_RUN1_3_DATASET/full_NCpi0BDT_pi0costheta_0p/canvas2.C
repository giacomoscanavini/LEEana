#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 00:33:31 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-8.092112,1.25641,681.8669);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(0,61.33416);
   hmc__4->SetBinContent(1,111.3152);
   hmc__4->SetBinContent(2,84.86581);
   hmc__4->SetBinContent(3,78.79141);
   hmc__4->SetBinContent(4,76.95371);
   hmc__4->SetBinContent(5,73.51262);
   hmc__4->SetBinContent(6,72.98483);
   hmc__4->SetBinContent(7,80.04342);
   hmc__4->SetBinContent(8,78.31324);
   hmc__4->SetBinContent(9,76.1028);
   hmc__4->SetBinContent(10,85.73648);
   hmc__4->SetBinContent(11,89.47547);
   hmc__4->SetBinContent(12,94.14378);
   hmc__4->SetBinContent(13,104.6257);
   hmc__4->SetBinContent(14,112.4791);
   hmc__4->SetBinContent(15,121.0312);
   hmc__4->SetBinContent(16,115.3107);
   hmc__4->SetBinContent(17,128.2698);
   hmc__4->SetBinContent(18,140.608);
   hmc__4->SetBinContent(19,155.006);
   hmc__4->SetBinContent(20,174.2862);
   hmc__4->SetBinContent(21,213.367);
   hmc__4->SetBinContent(22,219.4902);
   hmc__4->SetBinContent(23,244.2729);
   hmc__4->SetBinContent(24,308.006);
   hmc__4->SetBinContent(25,404.6056);
   hmc__4->SetBinError(0,3.489769);
   hmc__4->SetBinError(1,27.4369);
   hmc__4->SetBinError(2,22.50708);
   hmc__4->SetBinError(3,21.2823);
   hmc__4->SetBinError(4,17.82509);
   hmc__4->SetBinError(5,17.91075);
   hmc__4->SetBinError(6,17.58708);
   hmc__4->SetBinError(7,18.09981);
   hmc__4->SetBinError(8,17.50999);
   hmc__4->SetBinError(9,18.80235);
   hmc__4->SetBinError(10,18.2869);
   hmc__4->SetBinError(11,21.86071);
   hmc__4->SetBinError(12,21.56731);
   hmc__4->SetBinError(13,24.33091);
   hmc__4->SetBinError(14,25.97119);
   hmc__4->SetBinError(15,29.57039);
   hmc__4->SetBinError(16,30.32816);
   hmc__4->SetBinError(17,34.93249);
   hmc__4->SetBinError(18,38.49661);
   hmc__4->SetBinError(19,45.02108);
   hmc__4->SetBinError(20,51.50017);
   hmc__4->SetBinError(21,57.62265);
   hmc__4->SetBinError(22,60.21712);
   hmc__4->SetBinError(23,61.93801);
   hmc__4->SetBinError(24,72.7779);
   hmc__4->SetBinError(25,91.00183);
   hmc__4->SetBinError(26,0.4212968);
   hmc__4->SetMinimum(-8.092112);
   hmc__4->SetMaximum(647.369);
   hmc__4->SetEntries(3457.329);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(424.8359);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(0,0.3917402);
   hbadmatch_stack_1->SetBinContent(1,3.961321);
   hbadmatch_stack_1->SetBinContent(2,1.648155);
   hbadmatch_stack_1->SetBinContent(3,1.886144);
   hbadmatch_stack_1->SetBinContent(4,2.115549);
   hbadmatch_stack_1->SetBinContent(5,1.570342);
   hbadmatch_stack_1->SetBinContent(6,1.662242);
   hbadmatch_stack_1->SetBinContent(7,2.729266);
   hbadmatch_stack_1->SetBinContent(8,1.150244);
   hbadmatch_stack_1->SetBinContent(9,2.517215);
   hbadmatch_stack_1->SetBinContent(10,2.400026);
   hbadmatch_stack_1->SetBinContent(11,3.002795);
   hbadmatch_stack_1->SetBinContent(12,3.176759);
   hbadmatch_stack_1->SetBinContent(13,1.639008);
   hbadmatch_stack_1->SetBinContent(14,4.915462);
   hbadmatch_stack_1->SetBinContent(15,6.196298);
   hbadmatch_stack_1->SetBinContent(16,3.452355);
   hbadmatch_stack_1->SetBinContent(17,2.977613);
   hbadmatch_stack_1->SetBinContent(18,1.898032);
   hbadmatch_stack_1->SetBinContent(19,3.224377);
   hbadmatch_stack_1->SetBinContent(20,3.927243);
   hbadmatch_stack_1->SetBinContent(21,5.902574);
   hbadmatch_stack_1->SetBinContent(22,4.492133);
   hbadmatch_stack_1->SetBinContent(23,5.182343);
   hbadmatch_stack_1->SetBinContent(24,3.305016);
   hbadmatch_stack_1->SetBinContent(25,6.647564);
   hbadmatch_stack_1->SetBinError(0,0.2770047);
   hbadmatch_stack_1->SetBinError(1,1.036793);
   hbadmatch_stack_1->SetBinError(2,0.7560026);
   hbadmatch_stack_1->SetBinError(3,0.6887644);
   hbadmatch_stack_1->SetBinError(4,0.7260478);
   hbadmatch_stack_1->SetBinError(5,0.5552036);
   hbadmatch_stack_1->SetBinError(6,0.6513556);
   hbadmatch_stack_1->SetBinError(7,0.854664);
   hbadmatch_stack_1->SetBinError(8,0.5206207);
   hbadmatch_stack_1->SetBinError(9,0.8344072);
   hbadmatch_stack_1->SetBinError(10,0.8360728);
   hbadmatch_stack_1->SetBinError(11,0.9611134);
   hbadmatch_stack_1->SetBinError(12,0.8804403);
   hbadmatch_stack_1->SetBinError(13,0.6493966);
   hbadmatch_stack_1->SetBinError(14,1.163589);
   hbadmatch_stack_1->SetBinError(15,2.210194);
   hbadmatch_stack_1->SetBinError(16,1.346452);
   hbadmatch_stack_1->SetBinError(17,0.8869848);
   hbadmatch_stack_1->SetBinError(18,0.6927203);
   hbadmatch_stack_1->SetBinError(19,0.9787509);
   hbadmatch_stack_1->SetBinError(20,1.096771);
   hbadmatch_stack_1->SetBinError(21,1.39404);
   hbadmatch_stack_1->SetBinError(22,1.133859);
   hbadmatch_stack_1->SetBinError(23,1.230478);
   hbadmatch_stack_1->SetBinError(24,0.873816);
   hbadmatch_stack_1->SetBinError(25,1.301434);
   hbadmatch_stack_1->SetEntries(325);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(0,5.180405);
   hext_stack_2->SetBinContent(1,9.51889);
   hext_stack_2->SetBinContent(2,5.441371);
   hext_stack_2->SetBinContent(3,4.303776);
   hext_stack_2->SetBinContent(4,4.841647);
   hext_stack_2->SetBinContent(5,4.53161);
   hext_stack_2->SetBinContent(6,6.132056);
   hext_stack_2->SetBinContent(7,11.92094);
   hext_stack_2->SetBinContent(8,10.98806);
   hext_stack_2->SetBinContent(9,3.807795);
   hext_stack_2->SetBinContent(10,11.54748);
   hext_stack_2->SetBinContent(11,11.56902);
   hext_stack_2->SetBinContent(12,9.615453);
   hext_stack_2->SetBinContent(13,14.41679);
   hext_stack_2->SetBinContent(14,7.063358);
   hext_stack_2->SetBinContent(15,12.98793);
   hext_stack_2->SetBinContent(16,10.98806);
   hext_stack_2->SetBinContent(17,12.60287);
   hext_stack_2->SetBinContent(18,10.16768);
   hext_stack_2->SetBinContent(19,12.49913);
   hext_stack_2->SetBinContent(20,17.84394);
   hext_stack_2->SetBinContent(21,17.84394);
   hext_stack_2->SetBinContent(22,14.63586);
   hext_stack_2->SetBinContent(23,15.6769);
   hext_stack_2->SetBinContent(24,20.08599);
   hext_stack_2->SetBinContent(25,15.86284);
   hext_stack_2->SetBinError(0,1.49039);
   hext_stack_2->SetBinError(1,2.21736);
   hext_stack_2->SetBinError(2,1.413905);
   hext_stack_2->SetBinError(3,1.250299);
   hext_stack_2->SetBinError(4,1.586957);
   hext_stack_2->SetBinError(5,1.418025);
   hext_stack_2->SetBinError(6,1.772165);
   hext_stack_2->SetBinError(7,2.538343);
   hext_stack_2->SetBinError(8,2.292727);
   hext_stack_2->SetBinError(9,1.24058);
   hext_stack_2->SetBinError(10,2.368159);
   hext_stack_2->SetBinError(11,2.237091);
   hext_stack_2->SetBinError(12,2.138779);
   hext_stack_2->SetBinError(13,2.822001);
   hext_stack_2->SetBinError(14,1.589118);
   hext_stack_2->SetBinError(15,2.598633);
   hext_stack_2->SetBinError(16,2.292727);
   hext_stack_2->SetBinError(17,2.446215);
   hext_stack_2->SetBinError(18,2.264322);
   hext_stack_2->SetBinError(19,2.554894);
   hext_stack_2->SetBinError(20,2.978074);
   hext_stack_2->SetBinError(21,2.978074);
   hext_stack_2->SetBinError(22,2.609709);
   hext_stack_2->SetBinError(23,2.754773);
   hext_stack_2->SetBinError(24,3.22651);
   hext_stack_2->SetBinError(25,2.665586);
   hext_stack_2->SetEntries(634);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(0,0.5164824);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.7108223);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.6143302);
   hdirt_stack_3->SetBinContent(7,0.8385887);
   hdirt_stack_3->SetBinContent(8,0.6143302);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.2620035);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,2.044474);
   hdirt_stack_3->SetBinContent(16,0.1651799);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.8457079);
   hdirt_stack_3->SetBinContent(19,1.162207);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.4794168);
   hdirt_stack_3->SetBinContent(22,1.676579);
   hdirt_stack_3->SetBinContent(23,0.8527125);
   hdirt_stack_3->SetBinContent(24,0.7839588);
   hdirt_stack_3->SetBinContent(25,1.876656);
   hdirt_stack_3->SetBinError(0,0.3040134);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.4586315);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.39051);
   hdirt_stack_3->SetBinError(7,0.5064279);
   hdirt_stack_3->SetBinError(8,0.39051);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.2620035);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,1.090892);
   hdirt_stack_3->SetBinError(16,0.1651799);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.5238192);
   hdirt_stack_3->SetBinError(19,0.588785);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.3402743);
   hdirt_stack_3->SetBinError(22,0.6062382);
   hdirt_stack_3->SetBinError(23,0.5176777);
   hdirt_stack_3->SetBinError(24,0.3950683);
   hdirt_stack_3->SetBinError(25,0.6925181);
   hdirt_stack_3->SetEntries(72);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(0,4.500094);
   houtFV_stack_4->SetBinContent(1,14.10534);
   houtFV_stack_4->SetBinContent(2,6.622645);
   houtFV_stack_4->SetBinContent(3,5.687299);
   houtFV_stack_4->SetBinContent(4,6.235376);
   houtFV_stack_4->SetBinContent(5,5.968972);
   houtFV_stack_4->SetBinContent(6,4.339834);
   houtFV_stack_4->SetBinContent(7,4.418633);
   houtFV_stack_4->SetBinContent(8,4.189);
   houtFV_stack_4->SetBinContent(9,4.536039);
   houtFV_stack_4->SetBinContent(10,4.451522);
   houtFV_stack_4->SetBinContent(11,6.105006);
   houtFV_stack_4->SetBinContent(12,5.848352);
   houtFV_stack_4->SetBinContent(13,4.597244);
   houtFV_stack_4->SetBinContent(14,5.948448);
   houtFV_stack_4->SetBinContent(15,5.812434);
   houtFV_stack_4->SetBinContent(16,5.22824);
   houtFV_stack_4->SetBinContent(17,5.352092);
   houtFV_stack_4->SetBinContent(18,9.868056);
   houtFV_stack_4->SetBinContent(19,8.528826);
   houtFV_stack_4->SetBinContent(20,9.635741);
   houtFV_stack_4->SetBinContent(21,13.72271);
   houtFV_stack_4->SetBinContent(22,13.2519);
   houtFV_stack_4->SetBinContent(23,16.07215);
   houtFV_stack_4->SetBinContent(24,21.36227);
   houtFV_stack_4->SetBinContent(25,24.47974);
   houtFV_stack_4->SetBinError(0,1.067945);
   houtFV_stack_4->SetBinError(1,1.902662);
   houtFV_stack_4->SetBinError(2,1.300151);
   houtFV_stack_4->SetBinError(3,1.210302);
   houtFV_stack_4->SetBinError(4,1.227828);
   houtFV_stack_4->SetBinError(5,1.267631);
   houtFV_stack_4->SetBinError(6,1.02769);
   houtFV_stack_4->SetBinError(7,1.014108);
   houtFV_stack_4->SetBinError(8,1.083818);
   houtFV_stack_4->SetBinError(9,1.08978);
   houtFV_stack_4->SetBinError(10,1.057845);
   houtFV_stack_4->SetBinError(11,1.2114);
   houtFV_stack_4->SetBinError(12,1.181912);
   houtFV_stack_4->SetBinError(13,1.07431);
   houtFV_stack_4->SetBinError(14,1.26321);
   houtFV_stack_4->SetBinError(15,1.138157);
   houtFV_stack_4->SetBinError(16,1.126877);
   houtFV_stack_4->SetBinError(17,1.161854);
   houtFV_stack_4->SetBinError(18,1.620757);
   houtFV_stack_4->SetBinError(19,1.425224);
   houtFV_stack_4->SetBinError(20,1.58536);
   houtFV_stack_4->SetBinError(21,1.867135);
   houtFV_stack_4->SetBinError(22,1.76238);
   houtFV_stack_4->SetBinError(23,1.986327);
   houtFV_stack_4->SetBinError(24,2.292352);
   houtFV_stack_4->SetBinError(25,2.576167);
   houtFV_stack_4->SetEntries(950);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.697836);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.149388);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.29151);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5476789);
   hNCpi0inFVcoh_stack_5->SetEntries(117);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,35.20032);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,43.47851);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,42.0815);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,37.70617);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,37.88371);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,38.95869);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,37.07492);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,37.77773);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,37.25431);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,39.3609);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,40.82898);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,42.88895);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,49.1562);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,50.0108);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,57.48655);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,59.87382);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,60.50471);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,68.19469);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,72.108);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,86.22579);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,94.10587);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,105.4017);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,119.2019);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,139.7743);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,165.5995);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,203.5418);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.962593);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.155388);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.121963);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.015572);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.027077);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.056827);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,1.965433);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,1.959946);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,1.96725);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.999998);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.046995);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.118199);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.335483);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.324653);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.557532);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.570321);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.539995);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.710838);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.756494);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,3.02263);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.188323);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,3.389144);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,3.608348);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.906367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,4.218867);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,4.684134);
   hNCpi0inFVnoncoh_stack_6->SetEntries(33079);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_7->SetBinContent(0,4.102892);
   hCCpi0inFV_stack_7->SetBinContent(1,20.01729);
   hCCpi0inFV_stack_7->SetBinContent(2,13.59948);
   hCCpi0inFV_stack_7->SetBinContent(3,15.23805);
   hCCpi0inFV_stack_7->SetBinContent(4,13.00955);
   hCCpi0inFV_stack_7->SetBinContent(5,10.93269);
   hCCpi0inFV_stack_7->SetBinContent(6,11.81096);
   hCCpi0inFV_stack_7->SetBinContent(7,12.74921);
   hCCpi0inFV_stack_7->SetBinContent(8,10.82876);
   hCCpi0inFV_stack_7->SetBinContent(9,13.44079);
   hCCpi0inFV_stack_7->SetBinContent(10,13.77764);
   hCCpi0inFV_stack_7->SetBinContent(11,10.75016);
   hCCpi0inFV_stack_7->SetBinContent(12,11.22308);
   hCCpi0inFV_stack_7->SetBinContent(13,13.67563);
   hCCpi0inFV_stack_7->SetBinContent(14,18.6779);
   hCCpi0inFV_stack_7->SetBinContent(15,13.88132);
   hCCpi0inFV_stack_7->SetBinContent(16,16.54982);
   hCCpi0inFV_stack_7->SetBinContent(17,20.11764);
   hCCpi0inFV_stack_7->SetBinContent(18,21.92878);
   hCCpi0inFV_stack_7->SetBinContent(19,20.42655);
   hCCpi0inFV_stack_7->SetBinContent(20,22.78508);
   hCCpi0inFV_stack_7->SetBinContent(21,39.23727);
   hCCpi0inFV_stack_7->SetBinContent(22,37.09775);
   hCCpi0inFV_stack_7->SetBinContent(23,39.13354);
   hCCpi0inFV_stack_7->SetBinContent(24,57.88906);
   hCCpi0inFV_stack_7->SetBinContent(25,88.19763);
   hCCpi0inFV_stack_7->SetBinError(0,1.000002);
   hCCpi0inFV_stack_7->SetBinError(1,2.208919);
   hCCpi0inFV_stack_7->SetBinError(2,1.885426);
   hCCpi0inFV_stack_7->SetBinError(3,1.941774);
   hCCpi0inFV_stack_7->SetBinError(4,1.843929);
   hCCpi0inFV_stack_7->SetBinError(5,1.628819);
   hCCpi0inFV_stack_7->SetBinError(6,1.608368);
   hCCpi0inFV_stack_7->SetBinError(7,1.798627);
   hCCpi0inFV_stack_7->SetBinError(8,1.617454);
   hCCpi0inFV_stack_7->SetBinError(9,1.809008);
   hCCpi0inFV_stack_7->SetBinError(10,1.878241);
   hCCpi0inFV_stack_7->SetBinError(11,1.556007);
   hCCpi0inFV_stack_7->SetBinError(12,1.657307);
   hCCpi0inFV_stack_7->SetBinError(13,1.840956);
   hCCpi0inFV_stack_7->SetBinError(14,2.151003);
   hCCpi0inFV_stack_7->SetBinError(15,1.872847);
   hCCpi0inFV_stack_7->SetBinError(16,2.081865);
   hCCpi0inFV_stack_7->SetBinError(17,2.289693);
   hCCpi0inFV_stack_7->SetBinError(18,2.326142);
   hCCpi0inFV_stack_7->SetBinError(19,2.267848);
   hCCpi0inFV_stack_7->SetBinError(20,2.427367);
   hCCpi0inFV_stack_7->SetBinError(21,3.21908);
   hCCpi0inFV_stack_7->SetBinError(22,3.029179);
   hCCpi0inFV_stack_7->SetBinError(23,3.135713);
   hCCpi0inFV_stack_7->SetBinError(24,3.813161);
   hCCpi0inFV_stack_7->SetBinError(25,4.781645);
   hCCpi0inFV_stack_7->SetEntries(2444);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_8->SetBinContent(0,5.910286);
   hNCinFV_stack_8->SetBinContent(1,8.697876);
   hNCinFV_stack_8->SetBinContent(2,5.48159);
   hNCinFV_stack_8->SetBinContent(3,5.178369);
   hNCinFV_stack_8->SetBinContent(4,4.691348);
   hNCinFV_stack_8->SetBinContent(5,3.319412);
   hNCinFV_stack_8->SetBinContent(6,3.859685);
   hNCinFV_stack_8->SetBinContent(7,3.521199);
   hNCinFV_stack_8->SetBinContent(8,3.516127);
   hNCinFV_stack_8->SetBinContent(9,4.885142);
   hNCinFV_stack_8->SetBinContent(10,1.373626);
   hNCinFV_stack_8->SetBinContent(11,3.461183);
   hNCinFV_stack_8->SetBinContent(12,4.095047);
   hNCinFV_stack_8->SetBinContent(13,3.467945);
   hNCinFV_stack_8->SetBinContent(14,2.589184);
   hNCinFV_stack_8->SetBinContent(15,3.909558);
   hNCinFV_stack_8->SetBinContent(16,3.719604);
   hNCinFV_stack_8->SetBinContent(17,3.856305);
   hNCinFV_stack_8->SetBinContent(18,4.499704);
   hNCinFV_stack_8->SetBinContent(19,6.537388);
   hNCinFV_stack_8->SetBinContent(20,7.679034);
   hNCinFV_stack_8->SetBinContent(21,7.723835);
   hNCinFV_stack_8->SetBinContent(22,8.356009);
   hNCinFV_stack_8->SetBinContent(23,12.54742);
   hNCinFV_stack_8->SetBinContent(24,18.17247);
   hNCinFV_stack_8->SetBinContent(25,22.50457);
   hNCinFV_stack_8->SetBinError(0,1.225543);
   hNCinFV_stack_8->SetBinError(1,1.481913);
   hNCinFV_stack_8->SetBinError(2,1.127628);
   hNCinFV_stack_8->SetBinError(3,1.144335);
   hNCinFV_stack_8->SetBinError(4,1.056141);
   hNCinFV_stack_8->SetBinError(5,0.9200768);
   hNCinFV_stack_8->SetBinError(6,1.001141);
   hNCinFV_stack_8->SetBinError(7,0.9419262);
   hNCinFV_stack_8->SetBinError(8,0.940871);
   hNCinFV_stack_8->SetBinError(9,1.093611);
   hNCinFV_stack_8->SetBinError(10,0.519186);
   hNCinFV_stack_8->SetBinError(11,0.9606784);
   hNCinFV_stack_8->SetBinError(12,1.093307);
   hNCinFV_stack_8->SetBinError(13,0.9620561);
   hNCinFV_stack_8->SetBinError(14,0.809167);
   hNCinFV_stack_8->SetBinError(15,0.9811382);
   hNCinFV_stack_8->SetBinError(16,0.9625925);
   hNCinFV_stack_8->SetBinError(17,1.000479);
   hNCinFV_stack_8->SetBinError(18,1.038616);
   hNCinFV_stack_8->SetBinError(19,1.331061);
   hNCinFV_stack_8->SetBinError(20,1.359987);
   hNCinFV_stack_8->SetBinError(21,1.344592);
   hNCinFV_stack_8->SetBinError(22,1.44211);
   hNCinFV_stack_8->SetBinError(23,1.787282);
   hNCinFV_stack_8->SetBinError(24,2.131418);
   hNCinFV_stack_8->SetBinError(25,2.435562);
   hNCinFV_stack_8->SetEntries(696);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_9->SetBinContent(0,2.987827);
   hnumuCCinFV_stack_9->SetBinContent(1,10.69708);
   hnumuCCinFV_stack_9->SetBinContent(2,9.406082);
   hnumuCCinFV_stack_9->SetBinContent(3,7.541546);
   hnumuCCinFV_stack_9->SetBinContent(4,7.374614);
   hnumuCCinFV_stack_9->SetBinContent(5,7.54041);
   hnumuCCinFV_stack_9->SetBinContent(6,6.954788);
   hnumuCCinFV_stack_9->SetBinContent(7,5.290511);
   hnumuCCinFV_stack_9->SetBinContent(8,9.488858);
   hnumuCCinFV_stack_9->SetBinContent(9,6.960224);
   hnumuCCinFV_stack_9->SetBinContent(10,11.32931);
   hnumuCCinFV_stack_9->SetBinContent(11,11.50335);
   hnumuCCinFV_stack_9->SetBinContent(12,10.67193);
   hnumuCCinFV_stack_9->SetBinContent(13,16.55629);
   hnumuCCinFV_stack_9->SetBinContent(14,15.57936);
   hnumuCCinFV_stack_9->SetBinContent(15,15.85198);
   hnumuCCinFV_stack_9->SetBinContent(16,14.70273);
   hnumuCCinFV_stack_9->SetBinContent(17,14.57919);
   hnumuCCinFV_stack_9->SetBinContent(18,18.01691);
   hnumuCCinFV_stack_9->SetBinContent(19,16.18465);
   hnumuCCinFV_stack_9->SetBinContent(20,17.09925);
   hnumuCCinFV_stack_9->SetBinContent(21,22.32367);
   hnumuCCinFV_stack_9->SetBinContent(22,19.51022);
   hnumuCCinFV_stack_9->SetBinContent(23,13.5927);
   hnumuCCinFV_stack_9->SetBinContent(24,19.01326);
   hnumuCCinFV_stack_9->SetBinContent(25,27.85309);
   hnumuCCinFV_stack_9->SetBinError(0,0.8824253);
   hnumuCCinFV_stack_9->SetBinError(1,1.715409);
   hnumuCCinFV_stack_9->SetBinError(2,1.673867);
   hnumuCCinFV_stack_9->SetBinError(3,1.417366);
   hnumuCCinFV_stack_9->SetBinError(4,1.780388);
   hnumuCCinFV_stack_9->SetBinError(5,1.462885);
   hnumuCCinFV_stack_9->SetBinError(6,1.769327);
   hnumuCCinFV_stack_9->SetBinError(7,1.133441);
   hnumuCCinFV_stack_9->SetBinError(8,1.68794);
   hnumuCCinFV_stack_9->SetBinError(9,1.399546);
   hnumuCCinFV_stack_9->SetBinError(10,1.907895);
   hnumuCCinFV_stack_9->SetBinError(11,1.954677);
   hnumuCCinFV_stack_9->SetBinError(12,2.120312);
   hnumuCCinFV_stack_9->SetBinError(13,2.437701);
   hnumuCCinFV_stack_9->SetBinError(14,2.126634);
   hnumuCCinFV_stack_9->SetBinError(15,2.517796);
   hnumuCCinFV_stack_9->SetBinError(16,2.363206);
   hnumuCCinFV_stack_9->SetBinError(17,2.187916);
   hnumuCCinFV_stack_9->SetBinError(18,2.673339);
   hnumuCCinFV_stack_9->SetBinError(19,2.116351);
   hnumuCCinFV_stack_9->SetBinError(20,3.264015);
   hnumuCCinFV_stack_9->SetBinError(21,2.898105);
   hnumuCCinFV_stack_9->SetBinError(22,2.619928);
   hnumuCCinFV_stack_9->SetBinError(23,2.222308);
   hnumuCCinFV_stack_9->SetBinError(24,2.63398);
   hnumuCCinFV_stack_9->SetBinError(25,3.067312);
   hnumuCCinFV_stack_9->SetEntries(1303);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_10->SetBinContent(0,1.846285);
   hnueCCinFV_stack_10->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(3,0.441907);
   hnueCCinFV_stack_10->SetBinContent(4,0.497884);
   hnueCCinFV_stack_10->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_10->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_10->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_10->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_10->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_10->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(15,0.4454695);
   hnueCCinFV_stack_10->SetBinContent(17,0.2511644);
   hnueCCinFV_stack_10->SetBinContent(18,1.24724);
   hnueCCinFV_stack_10->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_10->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(21,0.7319179);
   hnueCCinFV_stack_10->SetBinContent(22,1.044464);
   hnueCCinFV_stack_10->SetBinContent(23,0.7302274);
   hnueCCinFV_stack_10->SetBinContent(24,1.292996);
   hnueCCinFV_stack_10->SetBinContent(25,10.49236);
   hnueCCinFV_stack_10->SetBinError(0,1.195901);
   hnueCCinFV_stack_10->SetBinError(1,0.2781975);
   hnueCCinFV_stack_10->SetBinError(3,0.3143499);
   hnueCCinFV_stack_10->SetBinError(4,0.3520617);
   hnueCCinFV_stack_10->SetBinError(5,0.3160204);
   hnueCCinFV_stack_10->SetBinError(6,0.3401778);
   hnueCCinFV_stack_10->SetBinError(7,0.4132436);
   hnueCCinFV_stack_10->SetBinError(8,0.2556436);
   hnueCCinFV_stack_10->SetBinError(9,0.5946997);
   hnueCCinFV_stack_10->SetBinError(11,0.1950249);
   hnueCCinFV_stack_10->SetBinError(15,0.3174228);
   hnueCCinFV_stack_10->SetBinError(17,0.2511644);
   hnueCCinFV_stack_10->SetBinError(18,0.6528325);
   hnueCCinFV_stack_10->SetBinError(19,0.2171002);
   hnueCCinFV_stack_10->SetBinError(20,0.1950249);
   hnueCCinFV_stack_10->SetBinError(21,0.438694);
   hnueCCinFV_stack_10->SetBinError(22,0.5321953);
   hnueCCinFV_stack_10->SetBinError(23,0.4379386);
   hnueCCinFV_stack_10->SetBinError(24,0.5974015);
   hnueCCinFV_stack_10->SetBinError(25,2.435422);
   hnueCCinFV_stack_10->SetEntries(77);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(0,61.33416);
   hmcerror__5->SetBinContent(1,111.3152);
   hmcerror__5->SetBinContent(2,84.86581);
   hmcerror__5->SetBinContent(3,78.79141);
   hmcerror__5->SetBinContent(4,76.95371);
   hmcerror__5->SetBinContent(5,73.51262);
   hmcerror__5->SetBinContent(6,72.98483);
   hmcerror__5->SetBinContent(7,80.04342);
   hmcerror__5->SetBinContent(8,78.31324);
   hmcerror__5->SetBinContent(9,76.1028);
   hmcerror__5->SetBinContent(10,85.73648);
   hmcerror__5->SetBinContent(11,89.47547);
   hmcerror__5->SetBinContent(12,94.14378);
   hmcerror__5->SetBinContent(13,104.6257);
   hmcerror__5->SetBinContent(14,112.4791);
   hmcerror__5->SetBinContent(15,121.0312);
   hmcerror__5->SetBinContent(16,115.3107);
   hmcerror__5->SetBinContent(17,128.2698);
   hmcerror__5->SetBinContent(18,140.608);
   hmcerror__5->SetBinContent(19,155.006);
   hmcerror__5->SetBinContent(20,174.2862);
   hmcerror__5->SetBinContent(21,213.367);
   hmcerror__5->SetBinContent(22,219.4902);
   hmcerror__5->SetBinContent(23,244.2729);
   hmcerror__5->SetBinContent(24,308.006);
   hmcerror__5->SetBinContent(25,404.6056);
   hmcerror__5->SetBinError(0,3.489769);
   hmcerror__5->SetBinError(1,27.4369);
   hmcerror__5->SetBinError(2,22.50708);
   hmcerror__5->SetBinError(3,21.2823);
   hmcerror__5->SetBinError(4,17.82509);
   hmcerror__5->SetBinError(5,17.91075);
   hmcerror__5->SetBinError(6,17.58708);
   hmcerror__5->SetBinError(7,18.09981);
   hmcerror__5->SetBinError(8,17.50999);
   hmcerror__5->SetBinError(9,18.80235);
   hmcerror__5->SetBinError(10,18.2869);
   hmcerror__5->SetBinError(11,21.86071);
   hmcerror__5->SetBinError(12,21.56731);
   hmcerror__5->SetBinError(13,24.33091);
   hmcerror__5->SetBinError(14,25.97119);
   hmcerror__5->SetBinError(15,29.57039);
   hmcerror__5->SetBinError(16,30.32816);
   hmcerror__5->SetBinError(17,34.93249);
   hmcerror__5->SetBinError(18,38.49661);
   hmcerror__5->SetBinError(19,45.02108);
   hmcerror__5->SetBinError(20,51.50017);
   hmcerror__5->SetBinError(21,57.62265);
   hmcerror__5->SetBinError(22,60.21712);
   hmcerror__5->SetBinError(23,61.93801);
   hmcerror__5->SetBinError(24,72.7779);
   hmcerror__5->SetBinError(25,91.00183);
   hmcerror__5->SetBinError(26,0.4212968);
   hmcerror__5->SetEntries(3457.329);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3005[25] = {
   81,
   67,
   52,
   70,
   52,
   72,
   64,
   68,
   62,
   73,
   69,
   66,
   69,
   87,
   90,
   79,
   86,
   113,
   97,
   123,
   142,
   167,
   220,
   238,
   314};
   Double_t _felx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3005[25] = {
   9.1239,
   8.3119,
   7.3419,
   8.4925,
   7.3419,
   8.6108,
   8.1273,
   8.3726,
   8.0018,
   8.6693,
   8.4327,
   8.2509,
   8.4327,
   9.4503,
   9.6093,
   9.0124,
   9.3967,
   10.63015,
   9.9704,
   11.09054,
   11.91638,
   12.92285,
   14.8324,
   15.42725,
   17.72005};
   Double_t _fehx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3005[25] = {
   8.9221,
   8.1094,
   7.1381,
   8.2902,
   7.1381,
   8.4085,
   7.9246,
   8.1701,
   7.7989,
   8.4672,
   8.2304,
   8.0483,
   8.2304,
   9.2488,
   9.4079,
   8.8105,
   9.1951,
   10.63015,
   9.769,
   11.09054,
   11.91638,
   12.92285,
   14.8324,
   15.42725,
   17.72005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(15.95191);
   Graph_Graph3005->SetMaximum(360.4262);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.6,0.9,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.6/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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

   ci = 1445;
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

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.5","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3006[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3006[25] = {
   0.2464793,
   0.2652079,
   0.2701094,
   0.2316339,
   0.2436418,
   0.240969,
   0.2261249,
   0.2235891,
   0.2470651,
   0.213292,
   0.2443207,
   0.2290891,
   0.232552,
   0.2308978,
   0.2443204,
   0.2630125,
   0.2723362,
   0.2737867,
   0.2904473,
   0.295492,
   0.2700636,
   0.2743499,
   0.2535607,
   0.2362873,
   0.2249149};
   Double_t _fehx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3006[25] = {
   0.2464793,
   0.2652079,
   0.2701094,
   0.2316339,
   0.2436418,
   0.240969,
   0.2261249,
   0.2235891,
   0.2470651,
   0.213292,
   0.2443207,
   0.2290891,
   0.232552,
   0.2308978,
   0.2443204,
   0.2630125,
   0.2723362,
   0.2737867,
   0.2904473,
   0.295492,
   0.2700636,
   0.2743499,
   0.2535607,
   0.2362873,
   0.2249149};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3007[25] = {
   0.2119733,
   0.2185182,
   0.218271,
   0.2168064,
   0.2213588,
   0.2247849,
   0.1907127,
   0.1979149,
   0.2251339,
   0.1914666,
   0.2130803,
   0.2167239,
   0.2160146,
   0.2185126,
   0.2274158,
   0.2468998,
   0.251645,
   0.2667018,
   0.2729596,
   0.2762356,
   0.2564484,
   0.2574951,
   0.2369018,
   0.2165311,
   0.2124969};
   Double_t _fehx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3007[25] = {
   0.2119733,
   0.2185182,
   0.218271,
   0.2168064,
   0.2213588,
   0.2247849,
   0.1907127,
   0.1979149,
   0.2251339,
   0.1914666,
   0.2130803,
   0.2167239,
   0.2160146,
   0.2185126,
   0.2274158,
   0.2468998,
   0.251645,
   0.2667018,
   0.2729596,
   0.2762356,
   0.2564484,
   0.2574951,
   0.2369018,
   0.2165311,
   0.2124969};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3008[25] = {
   0.7276632,
   0.7894817,
   0.6599704,
   0.9096377,
   0.7073615,
   0.9865064,
   0.799566,
   0.8683078,
   0.8146875,
   0.8514462,
   0.7711611,
   0.7010554,
   0.6594937,
   0.7734767,
   0.74361,
   0.6851055,
   0.670462,
   0.8036526,
   0.6257822,
   0.7057358,
   0.66552,
   0.7608541,
   0.900632,
   0.7727121,
   0.7760644};
   Double_t _felx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3008[25] = {
   0.08196452,
   0.09794168,
   0.09318147,
   0.1103585,
   0.09987265,
   0.1179807,
   0.1015361,
   0.1069117,
   0.1051446,
   0.1011157,
   0.09424594,
   0.08764148,
   0.08059874,
   0.08401824,
   0.07939524,
   0.07815752,
   0.07325733,
   0.07560128,
   0.06432267,
   0.06363405,
   0.0558492,
   0.05887665,
   0.0607206,
   0.05008749,
   0.04379585};
   Double_t _fehx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3008[25] = {
   0.08015165,
   0.09555556,
   0.0905949,
   0.1077297,
   0.09710034,
   0.1152089,
   0.09900377,
   0.1043259,
   0.1024785,
   0.09875843,
   0.09198499,
   0.08548945,
   0.07866518,
   0.0822268,
   0.07773121,
   0.0764066,
   0.07168564,
   0.07560128,
   0.06302336,
   0.06363405,
   0.0558492,
   0.05887665,
   0.0607206,
   0.05008749,
   0.04379585};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.5074339);
   Graph_Graph3008->SetMaximum(1.155741);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

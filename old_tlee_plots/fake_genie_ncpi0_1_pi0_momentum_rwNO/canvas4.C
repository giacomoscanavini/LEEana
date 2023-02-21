#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Jan 13 22:27:19 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(-184.6154,-22.02,1353.846,2434.948);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,465.3551);
   hmc__10->SetBinContent(2,834.8365);
   hmc__10->SetBinContent(3,764.8237);
   hmc__10->SetBinContent(4,548.1855);
   hmc__10->SetBinContent(5,376.5636);
   hmc__10->SetBinContent(6,238.366);
   hmc__10->SetBinContent(7,120.8098);
   hmc__10->SetBinContent(8,82.19368);
   hmc__10->SetBinContent(9,68.1667);
   hmc__10->SetBinContent(10,43.94818);
   hmc__10->SetBinContent(11,40.64581);
   hmc__10->SetBinContent(12,33.06289);
   hmc__10->SetBinContent(13,229.7042);
   hmc__10->SetBinError(1,117.1991);
   hmc__10->SetBinError(2,198.0467);
   hmc__10->SetBinError(3,189.6348);
   hmc__10->SetBinError(4,142.0658);
   hmc__10->SetBinError(5,119.1735);
   hmc__10->SetBinError(6,62.05479);
   hmc__10->SetBinError(7,35.78025);
   hmc__10->SetBinError(8,27.82156);
   hmc__10->SetBinError(9,29.70852);
   hmc__10->SetBinError(10,17.47786);
   hmc__10->SetBinError(11,19.63694);
   hmc__10->SetBinError(12,16.13474);
   hmc__10->SetBinError(13,64.91828);
   hmc__10->SetMinimum(-22.02);
   hmc__10->SetMaximum(2312.1);
   hmc__10->SetEntries(3797.715);
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
   hs4_stack_4->SetMinimum(-1.103704e-08);
   hs4_stack_4->SetMaximum(876.5782);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,21.98295);
   hbadmatch_stack_1->SetBinContent(2,18.44107);
   hbadmatch_stack_1->SetBinContent(3,22.39643);
   hbadmatch_stack_1->SetBinContent(4,13.43265);
   hbadmatch_stack_1->SetBinContent(5,10.4149);
   hbadmatch_stack_1->SetBinContent(6,4.135745);
   hbadmatch_stack_1->SetBinContent(7,0.9925678);
   hbadmatch_stack_1->SetBinContent(8,2.24943);
   hbadmatch_stack_1->SetBinContent(9,1.985136);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,4.12216);
   hbadmatch_stack_1->SetBinError(1,6.086401);
   hbadmatch_stack_1->SetBinError(2,4.357639);
   hbadmatch_stack_1->SetBinError(3,4.967723);
   hbadmatch_stack_1->SetBinError(4,3.735544);
   hbadmatch_stack_1->SetBinError(5,5.886495);
   hbadmatch_stack_1->SetBinError(6,2.072832);
   hbadmatch_stack_1->SetBinError(7,0.9925678);
   hbadmatch_stack_1->SetBinError(8,1.601529);
   hbadmatch_stack_1->SetBinError(9,1.403703);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.065273);
   hbadmatch_stack_1->SetEntries(91);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,98.26421);
   houtFV_stack_4->SetBinContent(2,136.9565);
   houtFV_stack_4->SetBinContent(3,94.89501);
   houtFV_stack_4->SetBinContent(4,65.50948);
   houtFV_stack_4->SetBinContent(5,43.11947);
   houtFV_stack_4->SetBinContent(6,23.98837);
   houtFV_stack_4->SetBinContent(7,30.10758);
   houtFV_stack_4->SetBinContent(8,14.16504);
   houtFV_stack_4->SetBinContent(9,16.12319);
   houtFV_stack_4->SetBinContent(10,6.155422);
   houtFV_stack_4->SetBinContent(11,8.93311);
   houtFV_stack_4->SetBinContent(12,5.955407);
   houtFV_stack_4->SetBinContent(13,38.29125);
   houtFV_stack_4->SetBinError(1,9.875925);
   houtFV_stack_4->SetBinError(2,11.76592);
   houtFV_stack_4->SetBinError(3,9.809748);
   houtFV_stack_4->SetBinError(4,8.063659);
   houtFV_stack_4->SetBinError(5,6.582697);
   houtFV_stack_4->SetBinError(6,4.899325);
   houtFV_stack_4->SetBinError(7,5.506466);
   houtFV_stack_4->SetBinError(8,3.794635);
   houtFV_stack_4->SetBinError(9,4.037609);
   houtFV_stack_4->SetBinError(10,2.519565);
   houtFV_stack_4->SetBinError(11,2.977704);
   houtFV_stack_4->SetBinError(12,2.431285);
   houtFV_stack_4->SetBinError(13,6.222692);
   houtFV_stack_4->SetEntries(585);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.92471);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,14.85883);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,20.30707);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,21.79295);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,18.82119);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.420005);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.962355);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.971766);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.467061);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.915298);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.712839);
   hNCpi0inFVcoh_stack_5->SetBinError(3,3.171431);
   hNCpi0inFVcoh_stack_5->SetBinError(4,3.285411);
   hNCpi0inFVcoh_stack_5->SetBinError(5,3.0532);
   hNCpi0inFVcoh_stack_5->SetBinError(6,2.042151);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.400904);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.213219);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.310426);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(13,2.101356);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.476472);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.107512);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.700452);
   hNCpi0inFVqe_stack_6->SetEntries(16);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,152.5507);
   hNCpi0inFVres_stack_7->SetBinContent(2,329.8661);
   hNCpi0inFVres_stack_7->SetBinContent(3,334.819);
   hNCpi0inFVres_stack_7->SetBinContent(4,247.8766);
   hNCpi0inFVres_stack_7->SetBinContent(5,144.1307);
   hNCpi0inFVres_stack_7->SetBinContent(6,79.74239);
   hNCpi0inFVres_stack_7->SetBinContent(7,43.58591);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.80236);
   hNCpi0inFVres_stack_7->SetBinContent(9,22.78354);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.84001);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.82119);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.915298);
   hNCpi0inFVres_stack_7->SetBinContent(13,64.38827);
   hNCpi0inFVres_stack_7->SetBinError(1,8.692381);
   hNCpi0inFVres_stack_7->SetBinError(2,12.78205);
   hNCpi0inFVres_stack_7->SetBinError(3,12.87765);
   hNCpi0inFVres_stack_7->SetBinError(4,11.08774);
   hNCpi0inFVres_stack_7->SetBinError(5,8.449089);
   hNCpi0inFVres_stack_7->SetBinError(6,6.284581);
   hNCpi0inFVres_stack_7->SetBinError(7,4.646273);
   hNCpi0inFVres_stack_7->SetBinError(8,3.209874);
   hNCpi0inFVres_stack_7->SetBinError(9,3.35925);
   hNCpi0inFVres_stack_7->SetBinError(10,2.888038);
   hNCpi0inFVres_stack_7->SetBinError(11,3.0532);
   hNCpi0inFVres_stack_7->SetBinError(12,2.101356);
   hNCpi0inFVres_stack_7->SetBinError(13,5.647225);
   hNCpi0inFVres_stack_7->SetEntries(2998);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,33.68002);
   hNCpi0inFVdis_stack_8->SetBinContent(2,74.29416);
   hNCpi0inFVdis_stack_8->SetBinContent(3,44.5765);
   hNCpi0inFVdis_stack_8->SetBinContent(4,45.56709);
   hNCpi0inFVdis_stack_8->SetBinContent(5,31.20355);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.81178);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.89648);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.934122);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.934122);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.981178);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.971766);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.467061);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.32589);
   hNCpi0inFVdis_stack_8->SetBinError(1,4.084302);
   hNCpi0inFVdis_stack_8->SetBinError(2,6.066093);
   hNCpi0inFVdis_stack_8->SetBinError(3,4.698775);
   hNCpi0inFVdis_stack_8->SetBinError(4,4.750697);
   hNCpi0inFVdis_stack_8->SetBinError(5,3.931277);
   hNCpi0inFVdis_stack_8->SetBinError(6,3.132517);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.323137);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.853222);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.853222);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9905888);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.213219);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.310426);
   hNCpi0inFVdis_stack_8->SetBinError(13,3.012758);
   hNCpi0inFVdis_stack_8->SetEntries(607);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,79.77113);
   hCCpi0inFV_stack_10->SetBinContent(2,132.0299);
   hCCpi0inFV_stack_10->SetBinContent(3,137.3342);
   hCCpi0inFV_stack_10->SetBinContent(4,87.49482);
   hCCpi0inFV_stack_10->SetBinContent(5,70.47232);
   hCCpi0inFV_stack_10->SetBinContent(6,56.70605);
   hCCpi0inFV_stack_10->SetBinContent(7,17.86622);
   hCCpi0inFV_stack_10->SetBinContent(8,10.91825);
   hCCpi0inFV_stack_10->SetBinContent(9,9.925678);
   hCCpi0inFV_stack_10->SetBinContent(10,4.962839);
   hCCpi0inFV_stack_10->SetBinContent(11,3.970271);
   hCCpi0inFV_stack_10->SetBinContent(12,2.977704);
   hCCpi0inFV_stack_10->SetBinContent(13,52.06968);
   hCCpi0inFV_stack_10->SetBinError(1,8.926085);
   hCCpi0inFV_stack_10->SetBinError(2,11.50047);
   hCCpi0inFV_stack_10->SetBinError(3,11.69349);
   hCCpi0inFV_stack_10->SetBinError(4,9.328153);
   hCCpi0inFV_stack_10->SetBinError(5,8.363525);
   hCCpi0inFV_stack_10->SetBinError(6,7.511999);
   hCCpi0inFV_stack_10->SetBinError(7,4.211109);
   hCCpi0inFV_stack_10->SetBinError(8,3.291975);
   hCCpi0inFV_stack_10->SetBinError(9,3.138775);
   hCCpi0inFV_stack_10->SetBinError(10,2.219449);
   hCCpi0inFV_stack_10->SetBinError(11,1.985136);
   hCCpi0inFV_stack_10->SetBinError(12,1.719178);
   hCCpi0inFV_stack_10->SetBinError(13,7.227694);
   hCCpi0inFV_stack_10->SetEntries(670);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,38.71015);
   hNCinFV_stack_11->SetBinContent(2,59.55407);
   hNCinFV_stack_11->SetBinContent(3,43.67299);
   hNCinFV_stack_11->SetBinContent(4,33.74731);
   hNCinFV_stack_11->SetBinContent(5,27.7919);
   hNCinFV_stack_11->SetBinContent(6,15.88109);
   hNCinFV_stack_11->SetBinContent(7,7.940543);
   hNCinFV_stack_11->SetBinContent(8,9.925678);
   hNCinFV_stack_11->SetBinContent(9,3.970271);
   hNCinFV_stack_11->SetBinContent(10,3.970271);
   hNCinFV_stack_11->SetBinContent(11,0.9925678);
   hNCinFV_stack_11->SetBinContent(12,2.977704);
   hNCinFV_stack_11->SetBinContent(13,19.85136);
   hNCinFV_stack_11->SetBinError(1,6.198584);
   hNCinFV_stack_11->SetBinError(2,7.688397);
   hNCinFV_stack_11->SetBinError(3,6.58395);
   hNCinFV_stack_11->SetBinError(4,5.787615);
   hNCinFV_stack_11->SetBinError(5,5.252175);
   hNCinFV_stack_11->SetBinError(6,3.970271);
   hNCinFV_stack_11->SetBinError(7,2.807406);
   hNCinFV_stack_11->SetBinError(8,3.138775);
   hNCinFV_stack_11->SetBinError(9,1.985136);
   hNCinFV_stack_11->SetBinError(10,1.985136);
   hNCinFV_stack_11->SetBinError(11,0.9925678);
   hNCinFV_stack_11->SetBinError(12,1.719178);
   hNCinFV_stack_11->SetBinError(13,4.438898);
   hNCinFV_stack_11->SetEntries(271);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,27.53901);
   hnumuCCinFV_stack_12->SetBinContent(2,61.71526);
   hnumuCCinFV_stack_12->SetBinContent(3,63.09243);
   hnumuCCinFV_stack_12->SetBinContent(4,30.78153);
   hnumuCCinFV_stack_12->SetBinContent(5,29.1217);
   hnumuCCinFV_stack_12->SetBinContent(6,28.68999);
   hnumuCCinFV_stack_12->SetBinContent(7,3.970271);
   hnumuCCinFV_stack_12->SetBinContent(8,11.95276);
   hnumuCCinFV_stack_12->SetBinContent(9,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(10,4.962839);
   hnumuCCinFV_stack_12->SetBinContent(11,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(12,4.30811);
   hnumuCCinFV_stack_12->SetBinContent(13,13.68197);
   hnumuCCinFV_stack_12->SetBinError(1,5.427096);
   hnumuCCinFV_stack_12->SetBinError(2,10.40863);
   hnumuCCinFV_stack_12->SetBinError(3,12.00038);
   hnumuCCinFV_stack_12->SetBinError(4,5.620728);
   hnumuCCinFV_stack_12->SetBinError(5,5.527884);
   hnumuCCinFV_stack_12->SetBinError(6,5.565213);
   hnumuCCinFV_stack_12->SetBinError(7,1.985136);
   hnumuCCinFV_stack_12->SetBinError(8,4.350136);
   hnumuCCinFV_stack_12->SetBinError(9,1.403703);
   hnumuCCinFV_stack_12->SetBinError(10,2.219449);
   hnumuCCinFV_stack_12->SetBinError(11,1.403703);
   hnumuCCinFV_stack_12->SetBinError(12,2.160843);
   hnumuCCinFV_stack_12->SetBinError(13,3.815557);
   hnumuCCinFV_stack_12->SetEntries(258);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(3,1.253684);
   hnueCCinFV_stack_13->SetBinContent(4,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(5,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,3.094444);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,10.05833);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(3,1.253684);
   hnueCCinFV_stack_13->SetBinError(4,0.9925678);
   hnueCCinFV_stack_13->SetBinError(5,0.9925678);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.789119);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,7.684029);
   hnueCCinFV_stack_13->SetEntries(25);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,465.3551);
   hmcerror__11->SetBinContent(2,834.8365);
   hmcerror__11->SetBinContent(3,764.8237);
   hmcerror__11->SetBinContent(4,548.1855);
   hmcerror__11->SetBinContent(5,376.5636);
   hmcerror__11->SetBinContent(6,238.366);
   hmcerror__11->SetBinContent(7,120.8098);
   hmcerror__11->SetBinContent(8,82.19368);
   hmcerror__11->SetBinContent(9,68.1667);
   hmcerror__11->SetBinContent(10,43.94818);
   hmcerror__11->SetBinContent(11,40.64581);
   hmcerror__11->SetBinContent(12,33.06289);
   hmcerror__11->SetBinContent(13,229.7042);
   hmcerror__11->SetBinError(1,117.1991);
   hmcerror__11->SetBinError(2,198.0467);
   hmcerror__11->SetBinError(3,189.6348);
   hmcerror__11->SetBinError(4,142.0658);
   hmcerror__11->SetBinError(5,119.1735);
   hmcerror__11->SetBinError(6,62.05479);
   hmcerror__11->SetBinError(7,35.78025);
   hmcerror__11->SetBinError(8,27.82156);
   hmcerror__11->SetBinError(9,29.70852);
   hmcerror__11->SetBinError(10,17.47786);
   hmcerror__11->SetBinError(11,19.63694);
   hmcerror__11->SetBinError(12,16.13474);
   hmcerror__11->SetBinError(13,64.91828);
   hmcerror__11->SetEntries(3797.715);

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
   651,
   1101,
   1080,
   789,
   482,
   310,
   176,
   104,
   77,
   64,
   34,
   45};
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
   25.5147,
   33.18132,
   32.86335,
   28.08914,
   21.9545,
   17.60682,
   13.2665,
   10.19804,
   8.8995,
   8.1273,
   5.9703,
   6.8416};
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
   25.5147,
   33.18132,
   32.86335,
   28.08914,
   21.9545,
   17.60682,
   13.2665,
   10.19804,
   8.6976,
   7.9246,
   5.7635,
   6.637};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(25.22673);
   Graph_Graph3013->SetMaximum(1244.796);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.36#pm0.31","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4913.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 544.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  109.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1420.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  282.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 614.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 249.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_4_pi0_momentum_all");
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
   0.2518487,
   0.2372281,
   0.2479458,
   0.2591564,
   0.3164765,
   0.2603341,
   0.2961702,
   0.3384878,
   0.4358216,
   0.3976925,
   0.4831234,
   0.4880016};
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
   0.2518487,
   0.2372281,
   0.2479458,
   0.2591564,
   0.3164765,
   0.2603341,
   0.2961702,
   0.3384878,
   0.4358216,
   0.3976925,
   0.4831234,
   0.4880016};
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
   0.2047634,
   0.2137833,
   0.2217466,
   0.2232354,
   0.2170088,
   0.2125726,
   0.218869,
   0.231245,
   0.2375515,
   0.2453389,
   0.24487,
   0.2625454};
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
   0.2047634,
   0.2137833,
   0.2217466,
   0.2232354,
   0.2170088,
   0.2125726,
   0.218869,
   0.231245,
   0.2375515,
   0.2453389,
   0.24487,
   0.2625454};
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
   1.398932,
   1.318821,
   1.41209,
   1.439294,
   1.279996,
   1.300521,
   1.456836,
   1.265304,
   1.129584,
   1.456261,
   0.8364947,
   1.361043};
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
   0.05482846,
   0.03974589,
   0.04296854,
   0.05124022,
   0.05830224,
   0.07386463,
   0.1098131,
   0.1240733,
   0.1305549,
   0.1849292,
   0.146886,
   0.2069269};
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
   0.05482846,
   0.03974589,
   0.04296854,
   0.05124022,
   0.05830224,
   0.07386463,
   0.1098131,
   0.1240733,
   0.1275931,
   0.1803169,
   0.1417981,
   0.2007387};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.5949118);
   Graph_Graph3016->SetMaximum(1.731274);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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

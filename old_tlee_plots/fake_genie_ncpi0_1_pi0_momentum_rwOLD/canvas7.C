#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Jan 13 22:53:52 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-17.3,1353.846,1913.016);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,238.5813);
   hmc__19->SetBinContent(2,652.7272);
   hmc__19->SetBinContent(3,539.2117);
   hmc__19->SetBinContent(4,329.0789);
   hmc__19->SetBinContent(5,245.5862);
   hmc__19->SetBinContent(6,145.1767);
   hmc__19->SetBinContent(7,82.18653);
   hmc__19->SetBinContent(8,50.03811);
   hmc__19->SetBinContent(9,43.00629);
   hmc__19->SetBinContent(10,28.16866);
   hmc__19->SetBinContent(11,22.04031);
   hmc__19->SetBinContent(12,27.57215);
   hmc__19->SetBinContent(13,157.8259);
   hmc__19->SetBinError(1,96.20694);
   hmc__19->SetBinError(2,318.1395);
   hmc__19->SetBinError(3,244.4852);
   hmc__19->SetBinError(4,138.3967);
   hmc__19->SetBinError(5,97.75595);
   hmc__19->SetBinError(6,51.76106);
   hmc__19->SetBinError(7,29.22496);
   hmc__19->SetBinError(8,18.47111);
   hmc__19->SetBinError(9,17.98814);
   hmc__19->SetBinError(10,16.18771);
   hmc__19->SetBinError(11,14.40195);
   hmc__19->SetBinError(12,16.04907);
   hmc__19->SetBinError(13,50.33455);
   hmc__19->SetMinimum(-17.3);
   hmc__19->SetMaximum(1816.5);
   hmc__19->SetEntries(3019.221);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-2.940502e-08);
   hs7_stack_7->SetMaximum(685.3636);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,8.883462);
   hbadmatch_stack_1->SetBinContent(2,11.40279);
   hbadmatch_stack_1->SetBinContent(3,7.516182);
   hbadmatch_stack_1->SetBinContent(4,3.519602);
   hbadmatch_stack_1->SetBinContent(5,5.717607);
   hbadmatch_stack_1->SetBinContent(6,3.34428);
   hbadmatch_stack_1->SetBinContent(7,1.931378);
   hbadmatch_stack_1->SetBinContent(9,2.101179);
   hbadmatch_stack_1->SetBinContent(10,2.681269);
   hbadmatch_stack_1->SetBinContent(13,0.9925678);
   hbadmatch_stack_1->SetBinError(1,2.956723);
   hbadmatch_stack_1->SetBinError(2,6.171744);
   hbadmatch_stack_1->SetBinError(3,2.778321);
   hbadmatch_stack_1->SetBinError(4,1.802561);
   hbadmatch_stack_1->SetBinError(5,2.515744);
   hbadmatch_stack_1->SetBinError(6,1.936542);
   hbadmatch_stack_1->SetBinError(7,1.428549);
   hbadmatch_stack_1->SetBinError(9,1.488022);
   hbadmatch_stack_1->SetBinError(10,2.195248);
   hbadmatch_stack_1->SetBinError(13,0.9925678);
   hbadmatch_stack_1->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,15.77871);
   houtFV_stack_4->SetBinContent(2,17.59855);
   houtFV_stack_4->SetBinContent(3,18.9934);
   houtFV_stack_4->SetBinContent(4,14.70016);
   houtFV_stack_4->SetBinContent(5,10.91825);
   houtFV_stack_4->SetBinContent(6,6.726357);
   houtFV_stack_4->SetBinContent(7,5.955407);
   houtFV_stack_4->SetBinContent(8,1.985136);
   houtFV_stack_4->SetBinContent(9,2.636451);
   houtFV_stack_4->SetBinContent(10,0.9925678);
   houtFV_stack_4->SetBinContent(11,0.9925678);
   houtFV_stack_4->SetBinContent(12,3.021497);
   houtFV_stack_4->SetBinContent(13,13.57273);
   houtFV_stack_4->SetBinError(1,3.962509);
   houtFV_stack_4->SetBinError(2,4.141916);
   houtFV_stack_4->SetBinError(3,4.196747);
   houtFV_stack_4->SetBinError(4,3.847578);
   houtFV_stack_4->SetBinError(5,3.291975);
   houtFV_stack_4->SetBinError(6,2.473842);
   houtFV_stack_4->SetBinError(7,2.431285);
   houtFV_stack_4->SetBinError(8,1.403703);
   houtFV_stack_4->SetBinError(9,1.547447);
   houtFV_stack_4->SetBinError(10,0.9925678);
   houtFV_stack_4->SetBinError(11,0.9925678);
   houtFV_stack_4->SetBinError(12,1.595303);
   houtFV_stack_4->SetBinError(13,3.640811);
   houtFV_stack_4->SetEntries(122);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4506357);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.952499);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.656095);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.798934);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.278937);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8272357);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3186475);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.328921);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.635401);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.044636);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8261371);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8272357);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetEntries(20);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.52417);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.972049);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.560491);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.65527);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3236006);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2648315);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3843462);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.9483206);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.421895);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.259034);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3236006);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2648314);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,82.40276);
   hNCpi0inFVres_stack_7->SetBinContent(2,274.7133);
   hNCpi0inFVres_stack_7->SetBinContent(3,245.7505);
   hNCpi0inFVres_stack_7->SetBinContent(4,158.0154);
   hNCpi0inFVres_stack_7->SetBinContent(5,89.89251);
   hNCpi0inFVres_stack_7->SetBinContent(6,63.63836);
   hNCpi0inFVres_stack_7->SetBinContent(7,28.81424);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.2138);
   hNCpi0inFVres_stack_7->SetBinContent(9,16.94295);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.457439);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.483933);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.995463);
   hNCpi0inFVres_stack_7->SetBinContent(13,49.71005);
   hNCpi0inFVres_stack_7->SetBinError(1,5.762196);
   hNCpi0inFVres_stack_7->SetBinError(2,10.12628);
   hNCpi0inFVres_stack_7->SetBinError(3,10.01751);
   hNCpi0inFVres_stack_7->SetBinError(4,7.771775);
   hNCpi0inFVres_stack_7->SetBinError(5,6.286458);
   hNCpi0inFVres_stack_7->SetBinError(6,5.914818);
   hNCpi0inFVres_stack_7->SetBinError(7,4.32569);
   hNCpi0inFVres_stack_7->SetBinError(8,3.092663);
   hNCpi0inFVres_stack_7->SetBinError(9,3.799979);
   hNCpi0inFVres_stack_7->SetBinError(10,2.098801);
   hNCpi0inFVres_stack_7->SetBinError(11,2.508639);
   hNCpi0inFVres_stack_7->SetBinError(12,2.008819);
   hNCpi0inFVres_stack_7->SetBinError(13,5.199138);
   hNCpi0inFVres_stack_7->SetEntries(3008);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,23.42711);
   hNCpi0inFVdis_stack_8->SetBinContent(2,69.32146);
   hNCpi0inFVdis_stack_8->SetBinContent(3,47.02693);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.62566);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.02734);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.7864);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.411273);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.58577);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.864745);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.002358);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7444656);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.901138);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.54744);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.380527);
   hNCpi0inFVdis_stack_8->SetBinError(2,5.280804);
   hNCpi0inFVdis_stack_8->SetBinError(3,4.702059);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.554928);
   hNCpi0inFVdis_stack_8->SetBinError(5,4.171006);
   hNCpi0inFVdis_stack_8->SetBinError(6,3.454774);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.386953);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.703804);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.920255);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.896605);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5368617);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.186388);
   hNCpi0inFVdis_stack_8->SetBinError(13,3.937949);
   hNCpi0inFVdis_stack_8->SetEntries(625);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,50.78267);
   hCCpi0inFV_stack_10->SetBinContent(2,156.793);
   hCCpi0inFV_stack_10->SetBinContent(3,89.52152);
   hCCpi0inFV_stack_10->SetBinContent(4,61.78218);
   hCCpi0inFV_stack_10->SetBinContent(5,43.93598);
   hCCpi0inFV_stack_10->SetBinContent(6,22.99562);
   hCCpi0inFV_stack_10->SetBinContent(7,8.93311);
   hCCpi0inFV_stack_10->SetBinContent(8,6.947975);
   hCCpi0inFV_stack_10->SetBinContent(9,6.947975);
   hCCpi0inFV_stack_10->SetBinContent(10,1.985136);
   hCCpi0inFV_stack_10->SetBinContent(11,4.193651);
   hCCpi0inFV_stack_10->SetBinContent(12,9.12064);
   hCCpi0inFV_stack_10->SetBinContent(13,19.85136);
   hCCpi0inFV_stack_10->SetBinError(1,7.112798);
   hCCpi0inFV_stack_10->SetBinError(2,12.51968);
   hCCpi0inFV_stack_10->SetBinError(3,9.438297);
   hCCpi0inFV_stack_10->SetBinError(4,7.850045);
   hCCpi0inFV_stack_10->SetBinError(5,6.628699);
   hCCpi0inFV_stack_10->SetBinError(6,4.797684);
   hCCpi0inFV_stack_10->SetBinError(7,2.977704);
   hCCpi0inFV_stack_10->SetBinError(8,2.626088);
   hCCpi0inFV_stack_10->SetBinError(9,2.626088);
   hCCpi0inFV_stack_10->SetBinError(10,1.403703);
   hCCpi0inFV_stack_10->SetBinError(11,2.105731);
   hCCpi0inFV_stack_10->SetBinError(12,3.04535);
   hCCpi0inFV_stack_10->SetBinError(13,4.438898);
   hCCpi0inFV_stack_10->SetEntries(486);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,36.37999);
   hNCinFV_stack_11->SetBinContent(2,65.41534);
   hNCinFV_stack_11->SetBinContent(3,62.57447);
   hNCinFV_stack_11->SetBinContent(4,22.52737);
   hNCinFV_stack_11->SetBinContent(5,25.27745);
   hNCinFV_stack_11->SetBinContent(6,18.13885);
   hNCinFV_stack_11->SetBinContent(7,14.13011);
   hNCinFV_stack_11->SetBinContent(8,3.970271);
   hNCinFV_stack_11->SetBinContent(9,1.985136);
   hNCinFV_stack_11->SetBinContent(10,3.705109);
   hNCinFV_stack_11->SetBinContent(11,4.356424);
   hNCinFV_stack_11->SetBinContent(12,4.962839);
   hNCinFV_stack_11->SetBinContent(13,16.54629);
   hNCinFV_stack_11->SetBinError(1,6.179483);
   hNCinFV_stack_11->SetBinError(2,8.397306);
   hNCinFV_stack_11->SetBinError(3,8.850842);
   hNCinFV_stack_11->SetBinError(4,5.554439);
   hNCinFV_stack_11->SetBinError(5,6.247632);
   hNCinFV_stack_11->SetBinError(6,4.711459);
   hNCinFV_stack_11->SetBinError(7,4.199586);
   hNCinFV_stack_11->SetBinError(8,1.985136);
   hNCinFV_stack_11->SetBinError(9,1.403703);
   hNCinFV_stack_11->SetBinError(10,1.866733);
   hNCinFV_stack_11->SetBinError(11,1.977094);
   hNCinFV_stack_11->SetBinError(12,2.219449);
   hNCinFV_stack_11->SetBinError(13,4.186417);
   hNCinFV_stack_11->SetEntries(276);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,19.9518);
   hnumuCCinFV_stack_12->SetBinContent(2,51.22418);
   hnumuCCinFV_stack_12->SetBinContent(3,58.62693);
   hnumuCCinFV_stack_12->SetBinContent(4,33.46922);
   hnumuCCinFV_stack_12->SetBinContent(5,44.222);
   hnumuCCinFV_stack_12->SetBinContent(6,14.71955);
   hnumuCCinFV_stack_12->SetBinContent(7,13.01844);
   hnumuCCinFV_stack_12->SetBinContent(8,10.33516);
   hnumuCCinFV_stack_12->SetBinContent(9,4.527863);
   hnumuCCinFV_stack_12->SetBinContent(10,5.079947);
   hnumuCCinFV_stack_12->SetBinContent(11,5.269264);
   hnumuCCinFV_stack_12->SetBinContent(12,2.311716);
   hnumuCCinFV_stack_12->SetBinContent(13,35.80588);
   hnumuCCinFV_stack_12->SetBinError(1,4.66011);
   hnumuCCinFV_stack_12->SetBinError(2,8.114555);
   hnumuCCinFV_stack_12->SetBinError(3,8.965906);
   hnumuCCinFV_stack_12->SetBinError(4,6.063934);
   hnumuCCinFV_stack_12->SetBinError(5,9.322515);
   hnumuCCinFV_stack_12->SetBinError(6,3.949964);
   hnumuCCinFV_stack_12->SetBinError(7,7.202951);
   hnumuCCinFV_stack_12->SetBinError(8,3.511255);
   hnumuCCinFV_stack_12->SetBinError(9,2.281229);
   hnumuCCinFV_stack_12->SetBinError(10,2.597632);
   hnumuCCinFV_stack_12->SetBinError(11,2.638701);
   hnumuCCinFV_stack_12->SetBinError(12,1.650861);
   hnumuCCinFV_stack_12->SetBinError(13,7.64441);
   hnumuCCinFV_stack_12->SetEntries(264);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,1.985136);
   hnueCCinFV_stack_13->SetBinContent(4,1.985136);
   hnueCCinFV_stack_13->SetBinContent(5,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,3.970271);
   hnueCCinFV_stack_13->SetBinError(3,1.403703);
   hnueCCinFV_stack_13->SetBinError(4,1.403703);
   hnueCCinFV_stack_13->SetBinError(5,0.9925678);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,1.985136);
   hnueCCinFV_stack_13->SetEntries(10);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,238.5813);
   hmcerror__20->SetBinContent(2,652.7272);
   hmcerror__20->SetBinContent(3,539.2117);
   hmcerror__20->SetBinContent(4,329.0789);
   hmcerror__20->SetBinContent(5,245.5862);
   hmcerror__20->SetBinContent(6,145.1767);
   hmcerror__20->SetBinContent(7,82.18653);
   hmcerror__20->SetBinContent(8,50.03811);
   hmcerror__20->SetBinContent(9,43.00629);
   hmcerror__20->SetBinContent(10,28.16866);
   hmcerror__20->SetBinContent(11,22.04031);
   hmcerror__20->SetBinContent(12,27.57215);
   hmcerror__20->SetBinContent(13,157.8259);
   hmcerror__20->SetBinError(1,96.20694);
   hmcerror__20->SetBinError(2,318.1395);
   hmcerror__20->SetBinError(3,244.4852);
   hmcerror__20->SetBinError(4,138.3967);
   hmcerror__20->SetBinError(5,97.75595);
   hmcerror__20->SetBinError(6,51.76106);
   hmcerror__20->SetBinError(7,29.22496);
   hmcerror__20->SetBinError(8,18.47111);
   hmcerror__20->SetBinError(9,17.98814);
   hmcerror__20->SetBinError(10,16.18771);
   hmcerror__20->SetBinError(11,14.40195);
   hmcerror__20->SetBinError(12,16.04907);
   hmcerror__20->SetBinError(13,50.33455);
   hmcerror__20->SetEntries(3019.221);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[12] = {
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
   Double_t _fy3025[12] = {
   361,
   865,
   793,
   594,
   336,
   202,
   118,
   76,
   43,
   35,
   24,
   18};
   Double_t _felx3025[12] = {
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
   Double_t _fely3025[12] = {
   19,
   29.41088,
   28.16026,
   24.37212,
   18.3303,
   14.21267,
   10.86278,
   8.8425,
   6.6917,
   6.0548,
   5.0476,
   4.4008};
   Double_t _fehx3025[12] = {
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
   Double_t _fehy3025[12] = {
   19,
   29.41088,
   28.16026,
   24.37212,
   18.3303,
   14.21267,
   10.86278,
   8.6406,
   6.4868,
   5.8483,
   4.837,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(12.23928);
   Graph_Graph3025->SetMaximum(982.4921);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.44#pm0.57","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.1/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3465.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 47.1","F");

   ci = 1512;
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

   ci = 1513;
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

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 100.3","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  11.0","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.6","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  998.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  239.7","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 463.9","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 263.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.8","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.0","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[12] = {
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
   Double_t _fy3026[12] = {
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
   Double_t _felx3026[12] = {
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
   Double_t _fely3026[12] = {
   0.4032459,
   0.4874004,
   0.4534124,
   0.4205577,
   0.3980514,
   0.3565384,
   0.355593,
   0.3691409,
   0.4182676,
   0.5746711,
   0.653437,
   0.5820753};
   Double_t _fehx3026[12] = {
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
   Double_t _fehy3026[12] = {
   0.4032459,
   0.4874004,
   0.4534124,
   0.4205577,
   0.3980514,
   0.3565384,
   0.355593,
   0.3691409,
   0.4182676,
   0.5746711,
   0.653437,
   0.5820753};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[12] = {
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
   Double_t _fy3027[12] = {
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
   Double_t _felx3027[12] = {
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
   Double_t _fely3027[12] = {
   0.3872039,
   0.4756535,
   0.4359679,
   0.4055991,
   0.364806,
   0.3134603,
   0.2721617,
   0.257279,
   0.308062,
   0.3246367,
   0.3198526,
   0.3028108};
   Double_t _fehx3027[12] = {
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
   Double_t _fehy3027[12] = {
   0.3872039,
   0.4756535,
   0.4359679,
   0.4055991,
   0.364806,
   0.3134603,
   0.2721617,
   0.257279,
   0.308062,
   0.3246367,
   0.3198526,
   0.3028108};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[12] = {
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
   Double_t _fy3028[12] = {
   1.513111,
   1.325209,
   1.470665,
   1.805038,
   1.368155,
   1.391408,
   1.435758,
   1.518842,
   0.9998536,
   1.242516,
   1.088914,
   0.6528326};
   Double_t _felx3028[12] = {
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
   Double_t _fely3028[12] = {
   0.07963742,
   0.04505846,
   0.05222486,
   0.07406162,
   0.07463896,
   0.09789915,
   0.1321723,
   0.1767153,
   0.1555982,
   0.2149481,
   0.2290168,
   0.1596103};
   Double_t _fehx3028[12] = {
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
   Double_t _fehy3028[12] = {
   0.07963742,
   0.04505846,
   0.05222486,
   0.07406162,
   0.07463896,
   0.09789915,
   0.1321723,
   0.1726804,
   0.1508337,
   0.2076173,
   0.2194616,
   0.1518126};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0.3546345);
   Graph_Graph3028->SetMaximum(2.017688);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 18:06:31 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
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
   pad1->Range(-230.7692,-11.17395,1692.308,1235.604);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__25->SetBinContent(1,94.59886);
   hmc__25->SetBinContent(2,377.3645);
   hmc__25->SetBinContent(3,558.6974);
   hmc__25->SetBinContent(4,497.7414);
   hmc__25->SetBinContent(5,354.0299);
   hmc__25->SetBinContent(6,300.4953);
   hmc__25->SetBinContent(7,238.9649);
   hmc__25->SetBinContent(8,168.5262);
   hmc__25->SetBinContent(9,107.4743);
   hmc__25->SetBinContent(10,85.18685);
   hmc__25->SetBinContent(11,47.06488);
   hmc__25->SetBinContent(12,44.04164);
   hmc__25->SetBinContent(13,32.41544);
   hmc__25->SetBinContent(14,23.70881);
   hmc__25->SetBinContent(15,14.70838);
   hmc__25->SetBinContent(16,11.95048);
   hmc__25->SetBinContent(17,10.45619);
   hmc__25->SetBinContent(18,11.29528);
   hmc__25->SetBinContent(19,9.952334);
   hmc__25->SetBinContent(20,5.240018);
   hmc__25->SetBinContent(21,7.235141);
   hmc__25->SetBinContent(22,5.235775);
   hmc__25->SetBinContent(23,5.029099);
   hmc__25->SetBinContent(24,3.17937);
   hmc__25->SetBinContent(25,3.63485);
   hmc__25->SetBinContent(26,28.116);
   hmc__25->SetBinError(1,30.58242);
   hmc__25->SetBinError(2,90.26263);
   hmc__25->SetBinError(3,137.7416);
   hmc__25->SetBinError(4,131.8982);
   hmc__25->SetBinError(5,97.69285);
   hmc__25->SetBinError(6,82.77444);
   hmc__25->SetBinError(7,60.31485);
   hmc__25->SetBinError(8,41.47198);
   hmc__25->SetBinError(9,26.16224);
   hmc__25->SetBinError(10,19.84519);
   hmc__25->SetBinError(11,11.8554);
   hmc__25->SetBinError(12,10.8802);
   hmc__25->SetBinError(13,8.486391);
   hmc__25->SetBinError(14,6.943798);
   hmc__25->SetBinError(15,3.975394);
   hmc__25->SetBinError(16,3.280966);
   hmc__25->SetBinError(17,2.887858);
   hmc__25->SetBinError(18,3.363628);
   hmc__25->SetBinError(19,3.113051);
   hmc__25->SetBinError(20,1.836971);
   hmc__25->SetBinError(21,2.213746);
   hmc__25->SetBinError(22,1.839325);
   hmc__25->SetBinError(23,1.812066);
   hmc__25->SetBinError(24,1.472539);
   hmc__25->SetBinError(25,1.403341);
   hmc__25->SetBinError(26,6.202869);
   hmc__25->SetMinimum(-11.17395);
   hmc__25->SetMaximum(1173.265);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1500);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(586.6323);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.689538);
   hbadmatch_stack_1->SetBinContent(4,1.270501);
   hbadmatch_stack_1->SetBinContent(5,0.7319179);
   hbadmatch_stack_1->SetBinContent(6,1.302499);
   hbadmatch_stack_1->SetBinContent(7,0.6382971);
   hbadmatch_stack_1->SetBinContent(8,1.048675);
   hbadmatch_stack_1->SetBinContent(9,0.827075);
   hbadmatch_stack_1->SetBinContent(10,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(12,0.6803553);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.305647);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6601866);
   hbadmatch_stack_1->SetBinError(4,0.5895188);
   hbadmatch_stack_1->SetBinError(5,0.438694);
   hbadmatch_stack_1->SetBinError(6,0.6010482);
   hbadmatch_stack_1->SetBinError(7,0.3433843);
   hbadmatch_stack_1->SetBinError(8,0.5723497);
   hbadmatch_stack_1->SetBinError(9,0.5848759);
   hbadmatch_stack_1->SetBinError(10,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(12,0.4810838);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.2242141);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.270645);
   hext_stack_2->SetBinContent(2,6.292049);
   hext_stack_2->SetBinContent(3,9.544841);
   hext_stack_2->SetBinContent(4,9.787037);
   hext_stack_2->SetBinContent(5,2.759582);
   hext_stack_2->SetBinContent(6,8.284733);
   hext_stack_2->SetBinContent(7,12.6304);
   hext_stack_2->SetBinContent(8,5.076662);
   hext_stack_2->SetBinContent(9,3.069618);
   hext_stack_2->SetBinContent(10,1.704188);
   hext_stack_2->SetBinContent(12,0.973192);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinError(1,1.4943);
   hext_stack_2->SetBinError(2,1.767944);
   hext_stack_2->SetBinError(3,2.109077);
   hext_stack_2->SetBinError(4,2.119752);
   hext_stack_2->SetBinError(5,0.98084);
   hext_stack_2->SetBinError(6,2.196161);
   hext_stack_2->SetBinError(7,2.705059);
   hext_stack_2->SetBinError(8,1.662762);
   hext_stack_2->SetBinError(9,1.212305);
   hext_stack_2->SetBinError(10,0.7656743);
   hext_stack_2->SetBinError(12,0.5618727);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.165896);
   hdirt_stack_3->SetBinContent(3,0.311381);
   hdirt_stack_3->SetBinContent(4,0.6708508);
   hdirt_stack_3->SetBinContent(5,1.167841e-06);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(2,0.165896);
   hdirt_stack_3->SetBinError(3,0.311381);
   hdirt_stack_3->SetBinError(4,0.4012365);
   hdirt_stack_3->SetBinError(5,1.167841e-06);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.7834939);
   houtFV_stack_4->SetBinContent(2,2.835772);
   houtFV_stack_4->SetBinContent(3,3.920088);
   houtFV_stack_4->SetBinContent(4,4.70614);
   houtFV_stack_4->SetBinContent(5,4.115963);
   houtFV_stack_4->SetBinContent(6,2.53255);
   houtFV_stack_4->SetBinContent(7,1.598262);
   houtFV_stack_4->SetBinContent(8,2.905331);
   houtFV_stack_4->SetBinContent(9,0.5352025);
   houtFV_stack_4->SetBinContent(10,1.599952);
   houtFV_stack_4->SetBinContent(11,0.209167);
   houtFV_stack_4->SetBinContent(12,0.629265);
   houtFV_stack_4->SetBinContent(16,0.1950248);
   houtFV_stack_4->SetBinContent(18,0.3401776);
   houtFV_stack_4->SetBinContent(19,0.3401776);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.5884556);
   houtFV_stack_4->SetBinError(1,0.3917439);
   houtFV_stack_4->SetBinError(2,0.808577);
   houtFV_stack_4->SetBinError(3,0.9569071);
   houtFV_stack_4->SetBinError(4,1.088654);
   houtFV_stack_4->SetBinError(5,1.07877);
   houtFV_stack_4->SetBinError(6,0.8317173);
   houtFV_stack_4->SetBinError(7,0.9710841);
   houtFV_stack_4->SetBinError(8,0.9137753);
   houtFV_stack_4->SetBinError(9,0.3921167);
   houtFV_stack_4->SetBinError(10,0.971425);
   houtFV_stack_4->SetBinError(11,0.2091671);
   houtFV_stack_4->SetBinError(12,0.4036711);
   houtFV_stack_4->SetBinError(16,0.1950249);
   houtFV_stack_4->SetBinError(18,0.3401776);
   houtFV_stack_4->SetBinError(19,0.3401776);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(26,0.3397478);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8273032);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.229079);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.36734);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.121514);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.509719);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.715975);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.859123);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.604156);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.843379);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6756821);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.414987);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6694362);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.322894);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2223495);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2825949);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.03212502);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.01677029);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.06201679);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.4153279);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02516554);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5996543);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1954681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1307988);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2278589);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4943251);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5787958);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5059393);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6153226);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6878553);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4065297);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4059021);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7249706);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1915904);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5173292);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3965094);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7034434);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1116144);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2562185);
   hNCpi0inFVres_stack_7->SetBinError(16,0.02281217);
   hNCpi0inFVres_stack_7->SetBinError(17,0.01677029);
   hNCpi0inFVres_stack_7->SetBinError(18,0.04940489);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2936812);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02516554);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5493525);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1954681);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(26,0.06747981);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.358133);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.347166);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.077201);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.096471);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.188904);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.153577);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.480993);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.53332);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.190679);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8277714);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.219783);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.007058);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4628208);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7319764);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.0809655);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2236621);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5446407);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.08074981);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.04620773);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05284983);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.4851358);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1538205);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7519665);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4931715);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5800688);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7470274);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5350303);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5511754);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5060861);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3515063);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2775244);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4971135);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4293746);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1685623);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3207682);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04679874);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1311528);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2101822);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.05976214);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.03337039);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.05284983);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2331603);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,70.6713);
   hCCpi0inFV_stack_10->SetBinContent(2,288.9275);
   hCCpi0inFV_stack_10->SetBinContent(3,445.6895);
   hCCpi0inFV_stack_10->SetBinContent(4,386.1766);
   hCCpi0inFV_stack_10->SetBinContent(5,280.6353);
   hCCpi0inFV_stack_10->SetBinContent(6,246.1169);
   hCCpi0inFV_stack_10->SetBinContent(7,190.3479);
   hCCpi0inFV_stack_10->SetBinContent(8,126.4103);
   hCCpi0inFV_stack_10->SetBinContent(9,80.28796);
   hCCpi0inFV_stack_10->SetBinContent(10,62.25615);
   hCCpi0inFV_stack_10->SetBinContent(11,33.84617);
   hCCpi0inFV_stack_10->SetBinContent(12,27.13202);
   hCCpi0inFV_stack_10->SetBinContent(13,24.17132);
   hCCpi0inFV_stack_10->SetBinContent(14,17.68714);
   hCCpi0inFV_stack_10->SetBinContent(15,9.919588);
   hCCpi0inFV_stack_10->SetBinContent(16,8.410952);
   hCCpi0inFV_stack_10->SetBinContent(17,6.677431);
   hCCpi0inFV_stack_10->SetBinContent(18,7.320868);
   hCCpi0inFV_stack_10->SetBinContent(19,6.085676);
   hCCpi0inFV_stack_10->SetBinContent(20,3.766744);
   hCCpi0inFV_stack_10->SetBinContent(21,6.005567);
   hCCpi0inFV_stack_10->SetBinContent(22,3.411311);
   hCCpi0inFV_stack_10->SetBinContent(23,4.148301);
   hCCpi0inFV_stack_10->SetBinContent(24,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(25,2.052291);
   hCCpi0inFV_stack_10->SetBinContent(26,16.12634);
   hCCpi0inFV_stack_10->SetBinError(1,4.334002);
   hCCpi0inFV_stack_10->SetBinError(2,8.51467);
   hCCpi0inFV_stack_10->SetBinError(3,10.70552);
   hCCpi0inFV_stack_10->SetBinError(4,9.842209);
   hCCpi0inFV_stack_10->SetBinError(5,8.448253);
   hCCpi0inFV_stack_10->SetBinError(6,7.890466);
   hCCpi0inFV_stack_10->SetBinError(7,6.985942);
   hCCpi0inFV_stack_10->SetBinError(8,5.666999);
   hCCpi0inFV_stack_10->SetBinError(9,4.517362);
   hCCpi0inFV_stack_10->SetBinError(10,4.014001);
   hCCpi0inFV_stack_10->SetBinError(11,2.915466);
   hCCpi0inFV_stack_10->SetBinError(12,2.74602);
   hCCpi0inFV_stack_10->SetBinError(13,2.495883);
   hCCpi0inFV_stack_10->SetBinError(14,2.085555);
   hCCpi0inFV_stack_10->SetBinError(15,1.544437);
   hCCpi0inFV_stack_10->SetBinError(16,1.428992);
   hCCpi0inFV_stack_10->SetBinError(17,1.342219);
   hCCpi0inFV_stack_10->SetBinError(18,1.387511);
   hCCpi0inFV_stack_10->SetBinError(19,1.290241);
   hCCpi0inFV_stack_10->SetBinError(20,0.9410679);
   hCCpi0inFV_stack_10->SetBinError(21,1.272514);
   hCCpi0inFV_stack_10->SetBinError(22,0.9810986);
   hCCpi0inFV_stack_10->SetBinError(23,1.075636);
   hCCpi0inFV_stack_10->SetBinError(24,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(25,0.7073425);
   hCCpi0inFV_stack_10->SetBinError(26,1.961284);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.3401776);
   hNCinFV_stack_11->SetBinContent(2,1.855576);
   hNCinFV_stack_11->SetBinContent(3,2.249007);
   hNCinFV_stack_11->SetBinContent(4,1.125349);
   hNCinFV_stack_11->SetBinContent(5,2.39585);
   hNCinFV_stack_11->SetBinContent(6,0.9286332);
   hNCinFV_stack_11->SetBinContent(7,1.412273);
   hNCinFV_stack_11->SetBinContent(9,0.3934307);
   hNCinFV_stack_11->SetBinContent(10,1.467217);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.3401776);
   hNCinFV_stack_11->SetBinError(2,0.6794384);
   hNCinFV_stack_11->SetBinError(3,0.7341869);
   hNCinFV_stack_11->SetBinError(4,0.5194673);
   hNCinFV_stack_11->SetBinError(5,0.7857345);
   hNCinFV_stack_11->SetBinError(6,0.48078);
   hNCinFV_stack_11->SetBinError(7,0.6510715);
   hNCinFV_stack_11->SetBinError(9,0.2781975);
   hNCinFV_stack_11->SetBinError(10,0.6214735);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,17.13436);
   hnumuCCinFV_stack_12->SetBinContent(2,71.31796);
   hnumuCCinFV_stack_12->SetBinContent(3,88.23186);
   hnumuCCinFV_stack_12->SetBinContent(4,87.23412);
   hnumuCCinFV_stack_12->SetBinContent(5,56.69272);
   hnumuCCinFV_stack_12->SetBinContent(6,36.26538);
   hnumuCCinFV_stack_12->SetBinContent(7,28.31723);
   hnumuCCinFV_stack_12->SetBinContent(8,29.75106);
   hnumuCCinFV_stack_12->SetBinContent(9,18.59332);
   hnumuCCinFV_stack_12->SetBinContent(10,15.11731);
   hnumuCCinFV_stack_12->SetBinContent(11,9.98303);
   hnumuCCinFV_stack_12->SetBinContent(12,12.95032);
   hnumuCCinFV_stack_12->SetBinContent(13,6.26169);
   hnumuCCinFV_stack_12->SetBinContent(14,4.870623);
   hnumuCCinFV_stack_12->SetBinContent(15,3.589106);
   hnumuCCinFV_stack_12->SetBinContent(16,3.312376);
   hnumuCCinFV_stack_12->SetBinContent(17,3.287596);
   hnumuCCinFV_stack_12->SetBinContent(18,2.274771);
   hnumuCCinFV_stack_12->SetBinContent(19,2.730956);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(21,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(22,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(23,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(24,1.660551);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8880365);
   hnumuCCinFV_stack_12->SetBinContent(26,9.0182);
   hnumuCCinFV_stack_12->SetBinError(1,2.123903);
   hnumuCCinFV_stack_12->SetBinError(2,5.038243);
   hnumuCCinFV_stack_12->SetBinError(3,5.422657);
   hnumuCCinFV_stack_12->SetBinError(4,6.520365);
   hnumuCCinFV_stack_12->SetBinError(5,4.365369);
   hnumuCCinFV_stack_12->SetBinError(6,3.052934);
   hnumuCCinFV_stack_12->SetBinError(7,2.700047);
   hnumuCCinFV_stack_12->SetBinError(8,2.883827);
   hnumuCCinFV_stack_12->SetBinError(9,2.369674);
   hnumuCCinFV_stack_12->SetBinError(10,1.904516);
   hnumuCCinFV_stack_12->SetBinError(11,1.526138);
   hnumuCCinFV_stack_12->SetBinError(12,2.780215);
   hnumuCCinFV_stack_12->SetBinError(13,1.193182);
   hnumuCCinFV_stack_12->SetBinError(14,1.16606);
   hnumuCCinFV_stack_12->SetBinError(15,0.9893842);
   hnumuCCinFV_stack_12->SetBinError(16,0.9515859);
   hnumuCCinFV_stack_12->SetBinError(17,0.9453517);
   hnumuCCinFV_stack_12->SetBinError(18,0.741447);
   hnumuCCinFV_stack_12->SetBinError(19,0.8550514);
   hnumuCCinFV_stack_12->SetBinError(20,0.438694);
   hnumuCCinFV_stack_12->SetBinError(21,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(22,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(23,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(24,0.650847);
   hnumuCCinFV_stack_12->SetBinError(25,0.5274915);
   hnumuCCinFV_stack_12->SetBinError(26,1.510001);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.6167127);
   hnueCCinFV_stack_13->SetBinContent(4,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,1.001686);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.8770706);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.4646023);
   hnueCCinFV_stack_13->SetBinError(4,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.4810838);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.5147626);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.5197486);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__26->SetBinContent(1,94.59886);
   hmcerror__26->SetBinContent(2,377.3645);
   hmcerror__26->SetBinContent(3,558.6974);
   hmcerror__26->SetBinContent(4,497.7414);
   hmcerror__26->SetBinContent(5,354.0299);
   hmcerror__26->SetBinContent(6,300.4953);
   hmcerror__26->SetBinContent(7,238.9649);
   hmcerror__26->SetBinContent(8,168.5262);
   hmcerror__26->SetBinContent(9,107.4743);
   hmcerror__26->SetBinContent(10,85.18685);
   hmcerror__26->SetBinContent(11,47.06488);
   hmcerror__26->SetBinContent(12,44.04164);
   hmcerror__26->SetBinContent(13,32.41544);
   hmcerror__26->SetBinContent(14,23.70881);
   hmcerror__26->SetBinContent(15,14.70838);
   hmcerror__26->SetBinContent(16,11.95048);
   hmcerror__26->SetBinContent(17,10.45619);
   hmcerror__26->SetBinContent(18,11.29528);
   hmcerror__26->SetBinContent(19,9.952334);
   hmcerror__26->SetBinContent(20,5.240018);
   hmcerror__26->SetBinContent(21,7.235141);
   hmcerror__26->SetBinContent(22,5.235775);
   hmcerror__26->SetBinContent(23,5.029099);
   hmcerror__26->SetBinContent(24,3.17937);
   hmcerror__26->SetBinContent(25,3.63485);
   hmcerror__26->SetBinContent(26,28.116);
   hmcerror__26->SetBinError(1,30.58242);
   hmcerror__26->SetBinError(2,90.26263);
   hmcerror__26->SetBinError(3,137.7416);
   hmcerror__26->SetBinError(4,131.8982);
   hmcerror__26->SetBinError(5,97.69285);
   hmcerror__26->SetBinError(6,82.77444);
   hmcerror__26->SetBinError(7,60.31485);
   hmcerror__26->SetBinError(8,41.47198);
   hmcerror__26->SetBinError(9,26.16224);
   hmcerror__26->SetBinError(10,19.84519);
   hmcerror__26->SetBinError(11,11.8554);
   hmcerror__26->SetBinError(12,10.8802);
   hmcerror__26->SetBinError(13,8.486391);
   hmcerror__26->SetBinError(14,6.943798);
   hmcerror__26->SetBinError(15,3.975394);
   hmcerror__26->SetBinError(16,3.280966);
   hmcerror__26->SetBinError(17,2.887858);
   hmcerror__26->SetBinError(18,3.363628);
   hmcerror__26->SetBinError(19,3.113051);
   hmcerror__26->SetBinError(20,1.836971);
   hmcerror__26->SetBinError(21,2.213746);
   hmcerror__26->SetBinError(22,1.839325);
   hmcerror__26->SetBinError(23,1.812066);
   hmcerror__26->SetBinError(24,1.472539);
   hmcerror__26->SetBinError(25,1.403341);
   hmcerror__26->SetBinError(26,6.202869);
   hmcerror__26->SetEntries(3014.754);

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
   
   Double_t _fx3033[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3033[25] = {
   69,
   382,
   534,
   423,
   305,
   242,
   156,
   125,
   107,
   73,
   51,
   44,
   30,
   18,
   11,
   11,
   8,
   8,
   8,
   8,
   5,
   5,
   4,
   2,
   4};
   Double_t _felx3033[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3033[25] = {
   8.4327,
   19.54482,
   23.10844,
   20.56696,
   17.46425,
   15.55635,
   12.49,
   11.18034,
   10.34408,
   8.6693,
   7.2725,
   6.7671,
   5.6197,
   4.4008,
   3.4975,
   3.4975,
   3.0307,
   3.0307,
   3.0307,
   3.0307,
   2.48995,
   2.48995,
   2.29683,
   2,
   2.29683};
   Double_t _fehx3033[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3033[25] = {
   8.2304,
   19.54482,
   23.10844,
   20.56696,
   17.46425,
   15.55635,
   12.49,
   11.18034,
   10.34408,
   8.4672,
   7.0686,
   6.5623,
   5.4117,
   4.1858,
   3.27,
   3.27,
   2.7896,
   2.7896,
   2.7896,
   2.7896,
   2.21064,
   2.21064,
   1.98186,
   1.51917,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1650);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(612.8193);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2633.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 27.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  24.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2339.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 14.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 503.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3034[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3034[25] = {
   0.3232853,
   0.2391922,
   0.2465406,
   0.2649934,
   0.2759452,
   0.27546,
   0.2524005,
   0.2460862,
   0.2434279,
   0.2329607,
   0.2518949,
   0.2470435,
   0.2618009,
   0.2928784,
   0.2702809,
   0.2745468,
   0.2761864,
   0.2977905,
   0.3127961,
   0.3505658,
   0.3059714,
   0.3512994,
   0.3603161,
   0.4631542,
   0.3860796};
   Double_t _fehx3034[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3034[25] = {
   0.3232853,
   0.2391922,
   0.2465406,
   0.2649934,
   0.2759452,
   0.27546,
   0.2524005,
   0.2460862,
   0.2434279,
   0.2329607,
   0.2518949,
   0.2470435,
   0.2618009,
   0.2928784,
   0.2702809,
   0.2745468,
   0.2761864,
   0.2977905,
   0.3127961,
   0.3505658,
   0.3059714,
   0.3512994,
   0.3603161,
   0.4631542,
   0.3860796};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1650);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3035[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3035[25] = {
   0.3232853,
   0.2391922,
   0.2465406,
   0.2649934,
   0.2759452,
   0.27546,
   0.2524005,
   0.2460862,
   0.2434279,
   0.2329607,
   0.2518949,
   0.2470435,
   0.2618009,
   0.2928784,
   0.2702809,
   0.2745468,
   0.2761864,
   0.2977905,
   0.3127961,
   0.3505658,
   0.3059714,
   0.3512994,
   0.3603161,
   0.4631542,
   0.3860796};
   Double_t _fehx3035[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3035[25] = {
   0.3232853,
   0.2391922,
   0.2465406,
   0.2649934,
   0.2759452,
   0.27546,
   0.2524005,
   0.2460862,
   0.2434279,
   0.2329607,
   0.2518949,
   0.2470435,
   0.2618009,
   0.2928784,
   0.2702809,
   0.2745468,
   0.2761864,
   0.2977905,
   0.3127961,
   0.3505658,
   0.3059714,
   0.3512994,
   0.3603161,
   0.4631542,
   0.3860796};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1650);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3036[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3036[25] = {
   0.7293957,
   1.012284,
   0.9557946,
   0.8498389,
   0.8615091,
   0.8053371,
   0.6528156,
   0.7417243,
   0.995587,
   0.8569398,
   1.083611,
   0.9990545,
   0.925485,
   0.7592115,
   0.747873,
   0.9204653,
   0.7650968,
   0.7082603,
   0.8038315,
   1.526712,
   0.6910716,
   0.9549685,
   0.795371,
   0.6290554,
   1.100458};
   Double_t _felx3036[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3036[25] = {
   0.08914166,
   0.05179295,
   0.04136128,
   0.04132058,
   0.04932987,
   0.05176903,
   0.05226708,
   0.06634184,
   0.09624703,
   0.1017681,
   0.1545207,
   0.1536523,
   0.1733649,
   0.1856188,
   0.2377896,
   0.2926661,
   0.2898473,
   0.2683156,
   0.3045215,
   0.5783758,
   0.3441467,
   0.4755647,
   0.456708,
   0.6290554,
   0.6318913};
   Double_t _fehx3036[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3036[25] = {
   0.08700316,
   0.05179295,
   0.04136128,
   0.04132058,
   0.04932987,
   0.05176903,
   0.05226708,
   0.06634184,
   0.09624703,
   0.09939562,
   0.1501884,
   0.1490022,
   0.1669482,
   0.1765504,
   0.2223223,
   0.2736292,
   0.2667892,
   0.2469704,
   0.280296,
   0.5323645,
   0.3055421,
   0.4222183,
   0.3940785,
   0.477821,
   0.5452385};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1650);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.264984);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

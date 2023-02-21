#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Feb 17 23:12:06 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-0.1538462,-4.189335,1.128205,463.2523);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__19->SetBinContent(1,127.6297);
   hmc__19->SetBinContent(2,133.9887);
   hmc__19->SetBinContent(3,136.7908);
   hmc__19->SetBinContent(4,126.0164);
   hmc__19->SetBinContent(5,126.1736);
   hmc__19->SetBinContent(6,142.1367);
   hmc__19->SetBinContent(7,131.568);
   hmc__19->SetBinContent(8,133.1202);
   hmc__19->SetBinContent(9,128.2904);
   hmc__19->SetBinContent(10,127.2945);
   hmc__19->SetBinContent(11,131.2884);
   hmc__19->SetBinContent(12,130.2844);
   hmc__19->SetBinContent(13,134.5992);
   hmc__19->SetBinContent(14,136.6103);
   hmc__19->SetBinContent(15,129.5163);
   hmc__19->SetBinContent(16,155.3724);
   hmc__19->SetBinContent(17,154.121);
   hmc__19->SetBinContent(18,167.2771);
   hmc__19->SetBinContent(19,181.0755);
   hmc__19->SetBinContent(20,209.4668);
   hmc__19->SetBinContent(21,0.02789998);
   hmc__19->SetBinError(1,51.44921);
   hmc__19->SetBinError(2,53.14603);
   hmc__19->SetBinError(3,56.43318);
   hmc__19->SetBinError(4,50.0106);
   hmc__19->SetBinError(5,49.58775);
   hmc__19->SetBinError(6,52.13107);
   hmc__19->SetBinError(7,58.37854);
   hmc__19->SetBinError(8,51.05563);
   hmc__19->SetBinError(9,48.55458);
   hmc__19->SetBinError(10,48.87849);
   hmc__19->SetBinError(11,52.99879);
   hmc__19->SetBinError(12,51.11951);
   hmc__19->SetBinError(13,50.18953);
   hmc__19->SetBinError(14,51.36795);
   hmc__19->SetBinError(15,51.53099);
   hmc__19->SetBinError(16,58.65408);
   hmc__19->SetBinError(17,51.12569);
   hmc__19->SetBinError(18,56.73518);
   hmc__19->SetBinError(19,56.01753);
   hmc__19->SetBinError(20,69.4414);
   hmc__19->SetBinError(21,0.2454704);
   hmc__19->SetMinimum(-4.189335);
   hmc__19->SetMaximum(439.8802);
   hmc__19->SetEntries(2811.899);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,1);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(219.9401);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,5.267226);
   hbadmatch_stack_1->SetBinContent(2,2.931052);
   hbadmatch_stack_1->SetBinContent(3,2.112221);
   hbadmatch_stack_1->SetBinContent(4,2.941494);
   hbadmatch_stack_1->SetBinContent(5,4.839668);
   hbadmatch_stack_1->SetBinContent(6,3.401275);
   hbadmatch_stack_1->SetBinContent(7,3.207514);
   hbadmatch_stack_1->SetBinContent(8,1.465526);
   hbadmatch_stack_1->SetBinContent(9,3.043274);
   hbadmatch_stack_1->SetBinContent(10,3.162607);
   hbadmatch_stack_1->SetBinContent(11,2.86213);
   hbadmatch_stack_1->SetBinContent(12,3.231398);
   hbadmatch_stack_1->SetBinContent(13,2.869878);
   hbadmatch_stack_1->SetBinContent(14,1.919615);
   hbadmatch_stack_1->SetBinContent(15,1.020962);
   hbadmatch_stack_1->SetBinContent(16,1.853958);
   hbadmatch_stack_1->SetBinContent(17,3.790946);
   hbadmatch_stack_1->SetBinContent(18,2.112391);
   hbadmatch_stack_1->SetBinContent(19,2.994507);
   hbadmatch_stack_1->SetBinContent(20,2.884222);
   hbadmatch_stack_1->SetBinError(1,1.347409);
   hbadmatch_stack_1->SetBinError(2,0.8781425);
   hbadmatch_stack_1->SetBinError(3,0.7258872);
   hbadmatch_stack_1->SetBinError(4,0.896386);
   hbadmatch_stack_1->SetBinError(5,1.150284);
   hbadmatch_stack_1->SetBinError(6,1.343002);
   hbadmatch_stack_1->SetBinError(7,0.9691869);
   hbadmatch_stack_1->SetBinError(8,0.6209405);
   hbadmatch_stack_1->SetBinError(9,0.9160903);
   hbadmatch_stack_1->SetBinError(10,0.9895055);
   hbadmatch_stack_1->SetBinError(11,0.9021319);
   hbadmatch_stack_1->SetBinError(12,0.942701);
   hbadmatch_stack_1->SetBinError(13,0.8995971);
   hbadmatch_stack_1->SetBinError(14,0.7561647);
   hbadmatch_stack_1->SetBinError(15,0.4579551);
   hbadmatch_stack_1->SetBinError(16,0.6204147);
   hbadmatch_stack_1->SetBinError(17,2.048302);
   hbadmatch_stack_1->SetBinError(18,0.7845426);
   hbadmatch_stack_1->SetBinError(19,0.8561024);
   hbadmatch_stack_1->SetBinError(20,0.9007322);
   hbadmatch_stack_1->SetEntries(226);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,6.891774);
   hext_stack_2->SetBinContent(2,11.28651);
   hext_stack_2->SetBinContent(3,9.544841);
   hext_stack_2->SetBinContent(4,4.207213);
   hext_stack_2->SetBinContent(5,6.806801);
   hext_stack_2->SetBinContent(6,12.09971);
   hext_stack_2->SetBinContent(7,4.221574);
   hext_stack_2->SetBinContent(8,10.82089);
   hext_stack_2->SetBinContent(9,7.67625);
   hext_stack_2->SetBinContent(10,7.746861);
   hext_stack_2->SetBinContent(11,7.787173);
   hext_stack_2->SetBinContent(12,7.436825);
   hext_stack_2->SetBinContent(13,7.918446);
   hext_stack_2->SetBinContent(14,10.25707);
   hext_stack_2->SetBinContent(15,9.690475);
   hext_stack_2->SetBinContent(16,10.42865);
   hext_stack_2->SetBinContent(17,7.765632);
   hext_stack_2->SetBinContent(18,15.70002);
   hext_stack_2->SetBinContent(19,18.11649);
   hext_stack_2->SetBinContent(20,12.02469);
   hext_stack_2->SetBinError(1,1.61441);
   hext_stack_2->SetBinError(2,2.414604);
   hext_stack_2->SetBinError(3,2.109077);
   hext_stack_2->SetBinError(4,1.380421);
   hext_stack_2->SetBinError(5,1.697809);
   hext_stack_2->SetBinError(6,2.482128);
   hext_stack_2->SetBinError(7,1.226034);
   hext_stack_2->SetBinError(8,2.33939);
   hext_stack_2->SetBinError(9,1.934366);
   hext_stack_2->SetBinError(10,1.966707);
   hext_stack_2->SetBinError(11,1.7312);
   hext_stack_2->SetBinError(12,1.833113);
   hext_stack_2->SetBinError(13,1.946);
   hext_stack_2->SetBinError(14,2.232945);
   hext_stack_2->SetBinError(15,2.199014);
   hext_stack_2->SetBinError(16,2.214728);
   hext_stack_2->SetBinError(17,1.89754);
   hext_stack_2->SetBinError(18,2.964292);
   hext_stack_2->SetBinError(19,2.929285);
   hext_stack_2->SetBinError(20,2.428923);
   hext_stack_2->SetEntries(428);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.1446783);
   hdirt_stack_3->SetBinContent(4,0.4950385);
   hdirt_stack_3->SetBinContent(5,1.487391);
   hdirt_stack_3->SetBinContent(6,0.9183763);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.5155978);
   hdirt_stack_3->SetBinContent(10,0.6436294);
   hdirt_stack_3->SetBinContent(12,0.1652832);
   hdirt_stack_3->SetBinContent(13,0.3896828);
   hdirt_stack_3->SetBinContent(14,1.115868);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.8009031);
   hdirt_stack_3->SetBinContent(17,0.7222627);
   hdirt_stack_3->SetBinContent(18,1.335616);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(20,1.271017);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(3,0.1446783);
   hdirt_stack_3->SetBinError(4,0.2933304);
   hdirt_stack_3->SetBinError(5,1.013785);
   hdirt_stack_3->SetBinError(6,0.477084);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.3035502);
   hdirt_stack_3->SetBinError(10,0.4778222);
   hdirt_stack_3->SetBinError(12,0.1652832);
   hdirt_stack_3->SetBinError(13,0.2870053);
   hdirt_stack_3->SetBinError(14,0.5242924);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.4983616);
   hdirt_stack_3->SetBinError(17,0.4353967);
   hdirt_stack_3->SetBinError(18,0.6103225);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(20,0.5442829);
   hdirt_stack_3->SetEntries(50);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,2.639056);
   houtFV_stack_4->SetBinContent(2,4.69811);
   houtFV_stack_4->SetBinContent(3,4.78963);
   houtFV_stack_4->SetBinContent(4,3.644783);
   houtFV_stack_4->SetBinContent(5,6.204117);
   houtFV_stack_4->SetBinContent(6,2.158798);
   houtFV_stack_4->SetBinContent(7,1.633299);
   houtFV_stack_4->SetBinContent(8,4.110586);
   houtFV_stack_4->SetBinContent(9,4.501686);
   houtFV_stack_4->SetBinContent(10,4.590109);
   houtFV_stack_4->SetBinContent(11,5.437568);
   houtFV_stack_4->SetBinContent(12,4.976131);
   houtFV_stack_4->SetBinContent(13,4.524615);
   houtFV_stack_4->SetBinContent(14,5.74392);
   houtFV_stack_4->SetBinContent(15,5.271546);
   houtFV_stack_4->SetBinContent(16,6.697148);
   houtFV_stack_4->SetBinContent(17,3.817658);
   houtFV_stack_4->SetBinContent(18,4.921706);
   houtFV_stack_4->SetBinContent(19,6.155753);
   houtFV_stack_4->SetBinContent(20,8.555403);
   houtFV_stack_4->SetBinError(1,0.784283);
   houtFV_stack_4->SetBinError(2,1.057394);
   houtFV_stack_4->SetBinError(3,1.145072);
   houtFV_stack_4->SetBinError(4,0.9837522);
   houtFV_stack_4->SetBinError(5,1.233903);
   houtFV_stack_4->SetBinError(6,0.6509067);
   houtFV_stack_4->SetBinError(7,0.5803195);
   houtFV_stack_4->SetBinError(8,1.040587);
   houtFV_stack_4->SetBinError(9,1.038935);
   houtFV_stack_4->SetBinError(10,1.163195);
   houtFV_stack_4->SetBinError(11,1.181535);
   houtFV_stack_4->SetBinError(12,1.153389);
   houtFV_stack_4->SetBinError(13,1.043664);
   houtFV_stack_4->SetBinError(14,1.215001);
   houtFV_stack_4->SetBinError(15,1.135173);
   houtFV_stack_4->SetBinError(16,1.287145);
   houtFV_stack_4->SetBinError(17,0.9201191);
   houtFV_stack_4->SetBinError(18,1.114475);
   houtFV_stack_4->SetBinError(19,1.249793);
   houtFV_stack_4->SetBinError(20,1.429539);
   houtFV_stack_4->SetEntries(411);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4450719);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.198595);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2338466);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.060704);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.269958);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.032804);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9617218);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.045422);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.576194);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.548126);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.005072);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6131358);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.35757);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4538266);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3564798);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2825829);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2866851);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4775079);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4409948);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3988212);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1749792);
   hNCpi0inFVqe_stack_6->SetEntries(314);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,61.37079);
   hNCpi0inFVres_stack_7->SetBinContent(2,59.77717);
   hNCpi0inFVres_stack_7->SetBinContent(3,67.50916);
   hNCpi0inFVres_stack_7->SetBinContent(4,60.36789);
   hNCpi0inFVres_stack_7->SetBinContent(5,56.66174);
   hNCpi0inFVres_stack_7->SetBinContent(6,61.24207);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.94462);
   hNCpi0inFVres_stack_7->SetBinContent(8,59.94337);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.60612);
   hNCpi0inFVres_stack_7->SetBinContent(10,59.45414);
   hNCpi0inFVres_stack_7->SetBinContent(11,66.74422);
   hNCpi0inFVres_stack_7->SetBinContent(12,65.1144);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.04976);
   hNCpi0inFVres_stack_7->SetBinContent(14,65.51645);
   hNCpi0inFVres_stack_7->SetBinContent(15,64.84568);
   hNCpi0inFVres_stack_7->SetBinContent(16,71.78535);
   hNCpi0inFVres_stack_7->SetBinContent(17,68.04154);
   hNCpi0inFVres_stack_7->SetBinContent(18,72.39882);
   hNCpi0inFVres_stack_7->SetBinContent(19,72.73061);
   hNCpi0inFVres_stack_7->SetBinContent(20,84.18942);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,2.589405);
   hNCpi0inFVres_stack_7->SetBinError(2,2.552771);
   hNCpi0inFVres_stack_7->SetBinError(3,2.754423);
   hNCpi0inFVres_stack_7->SetBinError(4,2.585105);
   hNCpi0inFVres_stack_7->SetBinError(5,2.42527);
   hNCpi0inFVres_stack_7->SetBinError(6,2.537798);
   hNCpi0inFVres_stack_7->SetBinError(7,2.82117);
   hNCpi0inFVres_stack_7->SetBinError(8,2.468721);
   hNCpi0inFVres_stack_7->SetBinError(9,2.59087);
   hNCpi0inFVres_stack_7->SetBinError(10,2.4942);
   hNCpi0inFVres_stack_7->SetBinError(11,2.688709);
   hNCpi0inFVres_stack_7->SetBinError(12,2.650611);
   hNCpi0inFVres_stack_7->SetBinError(13,2.57783);
   hNCpi0inFVres_stack_7->SetBinError(14,2.663683);
   hNCpi0inFVres_stack_7->SetBinError(15,2.64419);
   hNCpi0inFVres_stack_7->SetBinError(16,2.832643);
   hNCpi0inFVres_stack_7->SetBinError(17,2.627553);
   hNCpi0inFVres_stack_7->SetBinError(18,2.824088);
   hNCpi0inFVres_stack_7->SetBinError(19,2.797988);
   hNCpi0inFVres_stack_7->SetBinError(20,3.024068);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(24018);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.89758);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.41995);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.56808);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.69107);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.66664);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.82907);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.54417);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.70766);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.68367);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.17317);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.09319);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.13753);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.88935);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.02992);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.02768);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.9362);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.05161);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.94383);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.20838);
   hNCpi0inFVdis_stack_8->SetBinContent(20,16.29814);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.159596);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.119985);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.072285);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.183461);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.043465);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.182666);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.101176);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.069105);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.102942);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.196082);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9974091);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9907204);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.068316);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.046971);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.029761);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.288708);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.190974);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.282501);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.275222);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.245212);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(24);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,15.60554);
   hCCpi0inFV_stack_10->SetBinContent(2,19.42489);
   hCCpi0inFV_stack_10->SetBinContent(3,19.48991);
   hCCpi0inFV_stack_10->SetBinContent(4,21.48123);
   hCCpi0inFV_stack_10->SetBinContent(5,18.5048);
   hCCpi0inFV_stack_10->SetBinContent(6,20.04616);
   hCCpi0inFV_stack_10->SetBinContent(7,20.8076);
   hCCpi0inFV_stack_10->SetBinContent(8,24.21415);
   hCCpi0inFV_stack_10->SetBinContent(9,16.68693);
   hCCpi0inFV_stack_10->SetBinContent(10,16.92949);
   hCCpi0inFV_stack_10->SetBinContent(11,16.90366);
   hCCpi0inFV_stack_10->SetBinContent(12,16.763);
   hCCpi0inFV_stack_10->SetBinContent(13,21.19337);
   hCCpi0inFV_stack_10->SetBinContent(14,18.66311);
   hCCpi0inFV_stack_10->SetBinContent(15,15.08585);
   hCCpi0inFV_stack_10->SetBinContent(16,17.76666);
   hCCpi0inFV_stack_10->SetBinContent(17,22.77016);
   hCCpi0inFV_stack_10->SetBinContent(18,19.2171);
   hCCpi0inFV_stack_10->SetBinContent(19,19.73348);
   hCCpi0inFV_stack_10->SetBinContent(20,22.4974);
   hCCpi0inFV_stack_10->SetBinError(1,1.929273);
   hCCpi0inFV_stack_10->SetBinError(2,2.192154);
   hCCpi0inFV_stack_10->SetBinError(3,2.191995);
   hCCpi0inFV_stack_10->SetBinError(4,2.311707);
   hCCpi0inFV_stack_10->SetBinError(5,2.203175);
   hCCpi0inFV_stack_10->SetBinError(6,2.282884);
   hCCpi0inFV_stack_10->SetBinError(7,2.283949);
   hCCpi0inFV_stack_10->SetBinError(8,2.485437);
   hCCpi0inFV_stack_10->SetBinError(9,2.0726);
   hCCpi0inFV_stack_10->SetBinError(10,1.951773);
   hCCpi0inFV_stack_10->SetBinError(11,2.048432);
   hCCpi0inFV_stack_10->SetBinError(12,2.000497);
   hCCpi0inFV_stack_10->SetBinError(13,2.385218);
   hCCpi0inFV_stack_10->SetBinError(14,2.210889);
   hCCpi0inFV_stack_10->SetBinError(15,1.884566);
   hCCpi0inFV_stack_10->SetBinError(16,2.159404);
   hCCpi0inFV_stack_10->SetBinError(17,2.432798);
   hCCpi0inFV_stack_10->SetBinError(18,2.227501);
   hCCpi0inFV_stack_10->SetBinError(19,2.198214);
   hCCpi0inFV_stack_10->SetBinError(20,2.419073);
   hCCpi0inFV_stack_10->SetEntries(1641);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,13.82806);
   hNCinFV_stack_11->SetBinContent(2,16.21546);
   hNCinFV_stack_11->SetBinContent(3,10.07657);
   hNCinFV_stack_11->SetBinContent(4,10.46324);
   hNCinFV_stack_11->SetBinContent(5,11.92478);
   hNCinFV_stack_11->SetBinContent(6,15.39503);
   hNCinFV_stack_11->SetBinContent(7,9.189361);
   hNCinFV_stack_11->SetBinContent(8,13.57302);
   hNCinFV_stack_11->SetBinContent(9,12.78954);
   hNCinFV_stack_11->SetBinContent(10,9.761519);
   hNCinFV_stack_11->SetBinContent(11,9.247686);
   hNCinFV_stack_11->SetBinContent(12,10.16509);
   hNCinFV_stack_11->SetBinContent(13,8.857635);
   hNCinFV_stack_11->SetBinContent(14,9.226925);
   hNCinFV_stack_11->SetBinContent(15,10.75017);
   hNCinFV_stack_11->SetBinContent(16,10.40154);
   hNCinFV_stack_11->SetBinContent(17,11.91754);
   hNCinFV_stack_11->SetBinContent(18,13.531);
   hNCinFV_stack_11->SetBinContent(19,12.89774);
   hNCinFV_stack_11->SetBinContent(20,20.46012);
   hNCinFV_stack_11->SetBinError(1,1.883051);
   hNCinFV_stack_11->SetBinError(2,2.039595);
   hNCinFV_stack_11->SetBinError(3,1.570862);
   hNCinFV_stack_11->SetBinError(4,1.594475);
   hNCinFV_stack_11->SetBinError(5,1.651656);
   hNCinFV_stack_11->SetBinError(6,1.962857);
   hNCinFV_stack_11->SetBinError(7,1.481045);
   hNCinFV_stack_11->SetBinError(8,1.882425);
   hNCinFV_stack_11->SetBinError(9,1.841212);
   hNCinFV_stack_11->SetBinError(10,1.581432);
   hNCinFV_stack_11->SetBinError(11,1.468725);
   hNCinFV_stack_11->SetBinError(12,1.606952);
   hNCinFV_stack_11->SetBinError(13,1.442596);
   hNCinFV_stack_11->SetBinError(14,1.595556);
   hNCinFV_stack_11->SetBinError(15,1.642071);
   hNCinFV_stack_11->SetBinError(16,1.605418);
   hNCinFV_stack_11->SetBinError(17,1.766893);
   hNCinFV_stack_11->SetBinError(18,1.840614);
   hNCinFV_stack_11->SetBinError(19,1.820459);
   hNCinFV_stack_11->SetBinError(20,2.2883);
   hNCinFV_stack_11->SetEntries(1026);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.792418);
   hnumuCCinFV_stack_12->SetBinContent(2,6.597953);
   hnumuCCinFV_stack_12->SetBinContent(3,9.904272);
   hnumuCCinFV_stack_12->SetBinContent(4,9.025511);
   hnumuCCinFV_stack_12->SetBinContent(5,7.949968);
   hnumuCCinFV_stack_12->SetBinContent(6,11.54475);
   hnumuCCinFV_stack_12->SetBinContent(7,9.312466);
   hnumuCCinFV_stack_12->SetBinContent(8,7.575986);
   hnumuCCinFV_stack_12->SetBinContent(9,8.950668);
   hnumuCCinFV_stack_12->SetBinContent(10,10.55772);
   hnumuCCinFV_stack_12->SetBinContent(11,11.01422);
   hnumuCCinFV_stack_12->SetBinContent(12,10.99523);
   hnumuCCinFV_stack_12->SetBinContent(13,12.77677);
   hnumuCCinFV_stack_12->SetBinContent(14,10.54741);
   hnumuCCinFV_stack_12->SetBinContent(15,8.71926);
   hnumuCCinFV_stack_12->SetBinContent(16,17.76318);
   hnumuCCinFV_stack_12->SetBinContent(17,20.62223);
   hnumuCCinFV_stack_12->SetBinContent(18,20.96394);
   hnumuCCinFV_stack_12->SetBinContent(19,29.79251);
   hnumuCCinFV_stack_12->SetBinContent(20,36.98015);
   hnumuCCinFV_stack_12->SetBinError(1,1.66269);
   hnumuCCinFV_stack_12->SetBinError(2,1.327272);
   hnumuCCinFV_stack_12->SetBinError(3,1.701599);
   hnumuCCinFV_stack_12->SetBinError(4,1.472396);
   hnumuCCinFV_stack_12->SetBinError(5,1.493838);
   hnumuCCinFV_stack_12->SetBinError(6,1.819042);
   hnumuCCinFV_stack_12->SetBinError(7,1.737556);
   hnumuCCinFV_stack_12->SetBinError(8,1.476882);
   hnumuCCinFV_stack_12->SetBinError(9,1.618519);
   hnumuCCinFV_stack_12->SetBinError(10,1.666899);
   hnumuCCinFV_stack_12->SetBinError(11,1.707839);
   hnumuCCinFV_stack_12->SetBinError(12,1.928725);
   hnumuCCinFV_stack_12->SetBinError(13,2.200651);
   hnumuCCinFV_stack_12->SetBinError(14,1.773054);
   hnumuCCinFV_stack_12->SetBinError(15,1.605578);
   hnumuCCinFV_stack_12->SetBinError(16,2.693649);
   hnumuCCinFV_stack_12->SetBinError(17,2.991816);
   hnumuCCinFV_stack_12->SetBinError(18,2.372424);
   hnumuCCinFV_stack_12->SetBinError(19,4.065556);
   hnumuCCinFV_stack_12->SetBinError(20,3.601943);
   hnumuCCinFV_stack_12->SetEntries(1066);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(2,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.3893379);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.7421971);
   hnueCCinFV_stack_13->SetBinContent(13,0.5961891);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,1.225864);
   hnueCCinFV_stack_13->SetBinContent(16,1.000725);
   hnueCCinFV_stack_13->SetBinContent(17,0.9795939);
   hnueCCinFV_stack_13->SetBinContent(18,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(19,1.99158);
   hnueCCinFV_stack_13->SetBinContent(20,3.149173);
   hnueCCinFV_stack_13->SetBinError(1,0.2486649);
   hnueCCinFV_stack_13->SetBinError(2,0.4810838);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3893379);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.4287931);
   hnueCCinFV_stack_13->SetBinError(13,0.4255286);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.5609203);
   hnueCCinFV_stack_13->SetBinError(16,0.5349103);
   hnueCCinFV_stack_13->SetBinError(17,0.5037815);
   hnueCCinFV_stack_13->SetBinError(18,0.4383608);
   hnueCCinFV_stack_13->SetBinError(19,0.833575);
   hnueCCinFV_stack_13->SetBinError(20,0.9459876);
   hnueCCinFV_stack_13->SetEntries(54);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__20->SetBinContent(1,127.6297);
   hmcerror__20->SetBinContent(2,133.9887);
   hmcerror__20->SetBinContent(3,136.7908);
   hmcerror__20->SetBinContent(4,126.0164);
   hmcerror__20->SetBinContent(5,126.1736);
   hmcerror__20->SetBinContent(6,142.1367);
   hmcerror__20->SetBinContent(7,131.568);
   hmcerror__20->SetBinContent(8,133.1202);
   hmcerror__20->SetBinContent(9,128.2904);
   hmcerror__20->SetBinContent(10,127.2945);
   hmcerror__20->SetBinContent(11,131.2884);
   hmcerror__20->SetBinContent(12,130.2844);
   hmcerror__20->SetBinContent(13,134.5992);
   hmcerror__20->SetBinContent(14,136.6103);
   hmcerror__20->SetBinContent(15,129.5163);
   hmcerror__20->SetBinContent(16,155.3724);
   hmcerror__20->SetBinContent(17,154.121);
   hmcerror__20->SetBinContent(18,167.2771);
   hmcerror__20->SetBinContent(19,181.0755);
   hmcerror__20->SetBinContent(20,209.4668);
   hmcerror__20->SetBinContent(21,0.02789998);
   hmcerror__20->SetBinError(1,51.44921);
   hmcerror__20->SetBinError(2,53.14603);
   hmcerror__20->SetBinError(3,56.43318);
   hmcerror__20->SetBinError(4,50.0106);
   hmcerror__20->SetBinError(5,49.58775);
   hmcerror__20->SetBinError(6,52.13107);
   hmcerror__20->SetBinError(7,58.37854);
   hmcerror__20->SetBinError(8,51.05563);
   hmcerror__20->SetBinError(9,48.55458);
   hmcerror__20->SetBinError(10,48.87849);
   hmcerror__20->SetBinError(11,52.99879);
   hmcerror__20->SetBinError(12,51.11951);
   hmcerror__20->SetBinError(13,50.18953);
   hmcerror__20->SetBinError(14,51.36795);
   hmcerror__20->SetBinError(15,51.53099);
   hmcerror__20->SetBinError(16,58.65408);
   hmcerror__20->SetBinError(17,51.12569);
   hmcerror__20->SetBinError(18,56.73518);
   hmcerror__20->SetBinError(19,56.01753);
   hmcerror__20->SetBinError(20,69.4414);
   hmcerror__20->SetBinError(21,0.2454704);
   hmcerror__20->SetEntries(2811.899);

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
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   92,
   91,
   120,
   94,
   99,
   93,
   93,
   94,
   88,
   87,
   77,
   108,
   102,
   86,
   103,
   107,
   98,
   121,
   119,
   164};
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   9.7138,
   9.6617,
   10.95445,
   9.8173,
   10.0712,
   9.7658,
   9.7658,
   9.8173,
   9.5036,
   9.4503,
   8.8995,
   10.3923,
   10.0995,
   9.3967,
   10.14889,
   10.34408,
   10.0209,
   11,
   10.90871,
   12.80625};
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   9.513,
   9.46,
   10.95445,
   9.616,
   9.87,
   9.564,
   9.564,
   9.616,
   9.3021,
   9.2488,
   8.6976,
   10.3923,
   10.0995,
   9.1951,
   10.14889,
   10.34408,
   9.82,
   11,
   10.90871,
   12.80625};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1.1);
   Graph_Graph3025->SetMinimum(57.22993);
   Graph_Graph3025->SetMaximum(187.6768);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   0.4031131,
   0.3966456,
   0.4125508,
   0.3968579,
   0.3930121,
   0.366767,
   0.4437138,
   0.3835303,
   0.378474,
   0.3839796,
   0.4036823,
   0.3923686,
   0.3728814,
   0.376018,
   0.3978727,
   0.3775065,
   0.3317242,
   0.3391689,
   0.30936,
   0.3315151};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   0.4031131,
   0.3966456,
   0.4125508,
   0.3968579,
   0.3930121,
   0.366767,
   0.4437138,
   0.3835303,
   0.378474,
   0.3839796,
   0.4036823,
   0.3923686,
   0.3728814,
   0.376018,
   0.3978727,
   0.3775065,
   0.3317242,
   0.3391689,
   0.30936,
   0.3315151};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1.1);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
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
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0.3614389,
   0.3575006,
   0.366012,
   0.3624578,
   0.3542152,
   0.3310121,
   0.3758014,
   0.3451164,
   0.346799,
   0.3405331,
   0.3438462,
   0.3452767,
   0.3441716,
   0.335393,
   0.3360341,
   0.328975,
   0.3077914,
   0.3024587,
   0.2864144,
   0.2756314};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0.3614389,
   0.3575006,
   0.366012,
   0.3624578,
   0.3542152,
   0.3310121,
   0.3758014,
   0.3451164,
   0.346799,
   0.3405331,
   0.3438462,
   0.3452767,
   0.3441716,
   0.335393,
   0.3360341,
   0.328975,
   0.3077914,
   0.3024587,
   0.2864144,
   0.2756314};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1.1);
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
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
   0.7208353,
   0.6791618,
   0.8772517,
   0.7459347,
   0.7846332,
   0.6542995,
   0.7068588,
   0.7061287,
   0.6859437,
   0.6834546,
   0.5864952,
   0.8289556,
   0.7578054,
   0.6295278,
   0.7952668,
   0.6886681,
   0.6358638,
   0.7233507,
   0.6571843,
   0.7829405};
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
   0.07610924,
   0.07210832,
   0.08008175,
   0.07790494,
   0.07982018,
   0.06870708,
   0.07422625,
   0.07374763,
   0.07407881,
   0.07423966,
   0.06778589,
   0.07976629,
   0.07503392,
   0.0687847,
   0.07835997,
   0.06657606,
   0.06501967,
   0.06575916,
   0.06024399,
   0.06113738};
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
   0.07453593,
   0.07060297,
   0.08008175,
   0.07630753,
   0.07822555,
   0.06728732,
   0.07269244,
   0.07223546,
   0.07250815,
   0.07265672,
   0.06624806,
   0.07976629,
   0.07503392,
   0.06730897,
   0.07835997,
   0.06657606,
   0.06371615,
   0.06575916,
   0.06024399,
   0.06113738};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1.1);
   Graph_Graph3028->SetMinimum(0.4748469);
   Graph_Graph3028->SetMaximum(1.001196);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 15:03:37 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-276.9231,-12.12911,2030.769,1341.224);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__13->SetBinContent(0,0.3653432);
   hmc__13->SetBinContent(1,0.1967154);
   hmc__13->SetBinContent(2,6.14143);
   hmc__13->SetBinContent(3,85.17242);
   hmc__13->SetBinContent(4,308.785);
   hmc__13->SetBinContent(5,520.5859);
   hmc__13->SetBinContent(6,606.4553);
   hmc__13->SetBinContent(7,598.0972);
   hmc__13->SetBinContent(8,543.8394);
   hmc__13->SetBinContent(9,432.9132);
   hmc__13->SetBinContent(10,373.9174);
   hmc__13->SetBinContent(11,301.8477);
   hmc__13->SetBinContent(12,234.3156);
   hmc__13->SetBinContent(13,186.3715);
   hmc__13->SetBinContent(14,140.1668);
   hmc__13->SetBinContent(15,103.2538);
   hmc__13->SetBinContent(16,75.99756);
   hmc__13->SetBinContent(17,59.66803);
   hmc__13->SetBinContent(18,53.1208);
   hmc__13->SetBinContent(19,34.96284);
   hmc__13->SetBinContent(20,24.45722);
   hmc__13->SetBinContent(21,116.4217);
   hmc__13->SetBinError(0,0.3411072);
   hmc__13->SetBinError(1,0.4218229);
   hmc__13->SetBinError(2,5.947268);
   hmc__13->SetBinError(3,30.00423);
   hmc__13->SetBinError(4,104.4897);
   hmc__13->SetBinError(5,165.3306);
   hmc__13->SetBinError(6,190.0851);
   hmc__13->SetBinError(7,187.7313);
   hmc__13->SetBinError(8,164.2482);
   hmc__13->SetBinError(9,128.5007);
   hmc__13->SetBinError(10,128.6859);
   hmc__13->SetBinError(11,92.6082);
   hmc__13->SetBinError(12,69.75178);
   hmc__13->SetBinError(13,62.60536);
   hmc__13->SetBinError(14,55.75294);
   hmc__13->SetBinError(15,41.32432);
   hmc__13->SetBinError(16,33.38597);
   hmc__13->SetBinError(17,28.70553);
   hmc__13->SetBinError(18,28.79475);
   hmc__13->SetBinError(19,20.56523);
   hmc__13->SetBinError(20,16.9915);
   hmc__13->SetBinError(21,51.44337);
   hmc__13->SetMinimum(-12.12911);
   hmc__13->SetMaximum(1273.556);
   hmc__13->SetEntries(4774.494);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1800);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(636.7781);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(3,0.3900192);
   hbadmatch_stack_1->SetBinContent(4,0.536893);
   hbadmatch_stack_1->SetBinContent(5,1.712566);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,2.139138);
   hbadmatch_stack_1->SetBinContent(8,1.581521);
   hbadmatch_stack_1->SetBinContent(9,0.8753801);
   hbadmatch_stack_1->SetBinContent(10,2.348436);
   hbadmatch_stack_1->SetBinContent(11,1.967889);
   hbadmatch_stack_1->SetBinContent(12,1.102773);
   hbadmatch_stack_1->SetBinContent(13,1.150617);
   hbadmatch_stack_1->SetBinContent(14,2.063401);
   hbadmatch_stack_1->SetBinContent(15,0.7319179);
   hbadmatch_stack_1->SetBinContent(16,1.177033);
   hbadmatch_stack_1->SetBinContent(17,1.025423);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinError(3,0.3438095);
   hbadmatch_stack_1->SetBinError(4,0.3929602);
   hbadmatch_stack_1->SetBinError(5,0.7271124);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.6902687);
   hbadmatch_stack_1->SetBinError(8,0.6122125);
   hbadmatch_stack_1->SetBinError(9,0.5191111);
   hbadmatch_stack_1->SetBinError(10,0.7794154);
   hbadmatch_stack_1->SetBinError(11,0.6888657);
   hbadmatch_stack_1->SetBinError(12,0.5666393);
   hbadmatch_stack_1->SetBinError(13,0.6064331);
   hbadmatch_stack_1->SetBinError(14,0.7649792);
   hbadmatch_stack_1->SetBinError(15,0.438694);
   hbadmatch_stack_1->SetBinError(16,0.6914696);
   hbadmatch_stack_1->SetBinError(17,0.460434);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.9660115);
   hext_stack_2->SetBinContent(4,0.3243973);
   hext_stack_2->SetBinContent(5,5.483261);
   hext_stack_2->SetBinContent(6,5.243836);
   hext_stack_2->SetBinContent(7,9.436689);
   hext_stack_2->SetBinContent(8,8.000648);
   hext_stack_2->SetBinContent(9,4.449409);
   hext_stack_2->SetBinContent(10,4.628173);
   hext_stack_2->SetBinContent(11,8.202531);
   hext_stack_2->SetBinContent(12,2.923985);
   hext_stack_2->SetBinContent(13,7.553737);
   hext_stack_2->SetBinContent(14,3.565599);
   hext_stack_2->SetBinContent(15,1.614806);
   hext_stack_2->SetBinContent(16,1.379791);
   hext_stack_2->SetBinContent(17,4.352847);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,7.396514);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.7189592);
   hext_stack_2->SetBinError(4,0.3243973);
   hext_stack_2->SetBinError(5,1.711754);
   hext_stack_2->SetBinError(6,1.596444);
   hext_stack_2->SetBinError(7,2.203769);
   hext_stack_2->SetBinError(8,1.961378);
   hext_stack_2->SetBinError(9,1.396677);
   hext_stack_2->SetBinError(10,1.291697);
   hext_stack_2->SetBinError(11,2.182437);
   hext_stack_2->SetBinError(12,1.040301);
   hext_stack_2->SetBinError(13,2.133674);
   hext_stack_2->SetBinError(14,1.22225);
   hext_stack_2->SetBinError(15,0.8528597);
   hext_stack_2->SetBinError(16,0.6935586);
   hext_stack_2->SetBinError(17,1.514272);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,2.056985);
   hext_stack_2->SetEntries(171);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.577569);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinContent(11,1.167841e-06);
   hdirt_stack_3->SetBinContent(12,0.2665913);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4096513);
   hdirt_stack_3->SetBinError(10,0.165896);
   hdirt_stack_3->SetBinError(11,1.167841e-06);
   hdirt_stack_3->SetBinError(12,0.2665913);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(3,0.5884556);
   houtFV_stack_4->SetBinContent(4,3.79527);
   houtFV_stack_4->SetBinContent(5,2.145895);
   houtFV_stack_4->SetBinContent(6,3.607855);
   houtFV_stack_4->SetBinContent(7,4.280351);
   houtFV_stack_4->SetBinContent(8,3.440902);
   houtFV_stack_4->SetBinContent(9,2.708136);
   houtFV_stack_4->SetBinContent(10,2.61974);
   houtFV_stack_4->SetBinContent(11,1.652454);
   houtFV_stack_4->SetBinContent(12,2.026121);
   houtFV_stack_4->SetBinContent(13,1.079542);
   houtFV_stack_4->SetBinContent(14,0.8575791);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.4519673);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinError(3,0.3397478);
   houtFV_stack_4->SetBinError(4,0.9906097);
   houtFV_stack_4->SetBinError(5,0.785499);
   houtFV_stack_4->SetBinError(6,0.9933666);
   houtFV_stack_4->SetBinError(7,1.084762);
   houtFV_stack_4->SetBinError(8,0.9622512);
   houtFV_stack_4->SetBinError(9,0.8681093);
   houtFV_stack_4->SetBinError(10,1.07345);
   houtFV_stack_4->SetBinError(11,0.646652);
   houtFV_stack_4->SetBinError(12,1.017413);
   houtFV_stack_4->SetBinError(13,0.5158862);
   houtFV_stack_4->SetBinError(14,0.4331411);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.3222584);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetEntries(129);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.0750488);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.6182187);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.325685);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.821937);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.563767);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.788124);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.952519);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.413251);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.104404);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.811378);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.129223);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.797349);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.692847);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.137491);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.797806);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6927128);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.4543133);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.4741507);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1780678);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2399702);
   hNCpi0inFVres_stack_7->SetBinError(2,0.0750488);
   hNCpi0inFVres_stack_7->SetBinError(3,0.153907);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4710246);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5222915);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7685155);
   hNCpi0inFVres_stack_7->SetBinError(7,0.676955);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8331723);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7066431);
   hNCpi0inFVres_stack_7->SetBinError(10,1.191109);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9786194);
   hNCpi0inFVres_stack_7->SetBinError(12,0.916864);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7296301);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9334638);
   hNCpi0inFVres_stack_7->SetBinError(15,0.90145);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8162286);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2608836);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1510552);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2380131);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1142029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.08067537);
   hNCpi0inFVres_stack_7->SetEntries(1196);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3677958);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.366969);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.764966);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.055003);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.963457);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.553624);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.817004);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.145207);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.481195);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.974431);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.774817);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.531616);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.566128);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.787562);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.759597);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8279748);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.237766);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9683045);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.567677);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1577193);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3101272);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5249404);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3809376);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.597987);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6945563);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.10168);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9259708);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7041931);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8090855);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7983153);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7114491);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.696539);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4386089);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4249613);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2793878);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6552946);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.38192);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5007845);
   hNCpi0inFVdis_stack_8->SetEntries(964);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(3,59.63595);
   hCCpi0inFV_stack_10->SetBinContent(4,251.7171);
   hCCpi0inFV_stack_10->SetBinContent(5,435.883);
   hCCpi0inFV_stack_10->SetBinContent(6,503.8036);
   hCCpi0inFV_stack_10->SetBinContent(7,486.979);
   hCCpi0inFV_stack_10->SetBinContent(8,430.6305);
   hCCpi0inFV_stack_10->SetBinContent(9,348.2036);
   hCCpi0inFV_stack_10->SetBinContent(10,286.8082);
   hCCpi0inFV_stack_10->SetBinContent(11,231.1945);
   hCCpi0inFV_stack_10->SetBinContent(12,180.4651);
   hCCpi0inFV_stack_10->SetBinContent(13,136.1328);
   hCCpi0inFV_stack_10->SetBinContent(14,101.6337);
   hCCpi0inFV_stack_10->SetBinContent(15,78.97336);
   hCCpi0inFV_stack_10->SetBinContent(16,55.51723);
   hCCpi0inFV_stack_10->SetBinContent(17,40.66544);
   hCCpi0inFV_stack_10->SetBinContent(18,38.46072);
   hCCpi0inFV_stack_10->SetBinContent(19,25.29324);
   hCCpi0inFV_stack_10->SetBinContent(20,18.23037);
   hCCpi0inFV_stack_10->SetBinContent(21,82.10396);
   hCCpi0inFV_stack_10->SetBinError(2,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(3,3.807825);
   hCCpi0inFV_stack_10->SetBinError(4,8.027998);
   hCCpi0inFV_stack_10->SetBinError(5,10.54413);
   hCCpi0inFV_stack_10->SetBinError(6,11.24727);
   hCCpi0inFV_stack_10->SetBinError(7,11.1149);
   hCCpi0inFV_stack_10->SetBinError(8,10.43015);
   hCCpi0inFV_stack_10->SetBinError(9,9.453363);
   hCCpi0inFV_stack_10->SetBinError(10,8.483099);
   hCCpi0inFV_stack_10->SetBinError(11,7.624341);
   hCCpi0inFV_stack_10->SetBinError(12,6.772573);
   hCCpi0inFV_stack_10->SetBinError(13,5.903175);
   hCCpi0inFV_stack_10->SetBinError(14,5.110199);
   hCCpi0inFV_stack_10->SetBinError(15,4.480588);
   hCCpi0inFV_stack_10->SetBinError(16,3.771838);
   hCCpi0inFV_stack_10->SetBinError(17,3.214213);
   hCCpi0inFV_stack_10->SetBinError(18,3.142497);
   hCCpi0inFV_stack_10->SetBinError(19,2.535372);
   hCCpi0inFV_stack_10->SetBinError(20,2.183392);
   hCCpi0inFV_stack_10->SetBinError(21,4.572205);
   hCCpi0inFV_stack_10->SetEntries(16159);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,1.949166);
   hNCinFV_stack_11->SetBinContent(5,0.7817899);
   hNCinFV_stack_11->SetBinContent(6,3.074514);
   hNCinFV_stack_11->SetBinContent(7,4.496323);
   hNCinFV_stack_11->SetBinContent(8,5.521927);
   hNCinFV_stack_11->SetBinContent(9,1.323754);
   hNCinFV_stack_11->SetBinContent(10,2.88118);
   hNCinFV_stack_11->SetBinContent(11,1.662242);
   hNCinFV_stack_11->SetBinContent(12,2.392469);
   hNCinFV_stack_11->SetBinContent(13,1.807394);
   hNCinFV_stack_11->SetBinContent(14,1.857266);
   hNCinFV_stack_11->SetBinContent(15,0.7868615);
   hNCinFV_stack_11->SetBinContent(16,0.6803553);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.8753801);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.7834804);
   hNCinFV_stack_11->SetBinContent(21,1.270501);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.7604681);
   hNCinFV_stack_11->SetBinError(5,0.3908977);
   hNCinFV_stack_11->SetBinError(6,0.920955);
   hNCinFV_stack_11->SetBinError(7,1.037978);
   hNCinFV_stack_11->SetBinError(8,1.194382);
   hNCinFV_stack_11->SetBinError(9,0.5560625);
   hNCinFV_stack_11->SetBinError(10,0.9004364);
   hNCinFV_stack_11->SetBinError(11,0.6513556);
   hNCinFV_stack_11->SetBinError(12,0.7848912);
   hNCinFV_stack_11->SetBinError(13,0.7084844);
   hNCinFV_stack_11->SetBinError(14,0.6799255);
   hNCinFV_stack_11->SetBinError(15,0.3934307);
   hNCinFV_stack_11->SetBinError(16,0.4810838);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.5191111);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.3917439);
   hNCinFV_stack_11->SetBinError(21,0.5895188);
   hNCinFV_stack_11->SetEntries(136);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(1,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(2,4.224895);
   hnumuCCinFV_stack_12->SetBinContent(3,22.40926);
   hnumuCCinFV_stack_12->SetBinContent(4,46.42935);
   hnumuCCinFV_stack_12->SetBinContent(5,67.99247);
   hnumuCCinFV_stack_12->SetBinContent(6,82.01454);
   hnumuCCinFV_stack_12->SetBinContent(7,80.45634);
   hnumuCCinFV_stack_12->SetBinContent(8,81.74435);
   hnumuCCinFV_stack_12->SetBinContent(9,64.12267);
   hnumuCCinFV_stack_12->SetBinContent(10,59.24171);
   hnumuCCinFV_stack_12->SetBinContent(11,46.34028);
   hnumuCCinFV_stack_12->SetBinContent(12,35.5701);
   hnumuCCinFV_stack_12->SetBinContent(13,29.32278);
   hnumuCCinFV_stack_12->SetBinContent(14,22.42785);
   hnumuCCinFV_stack_12->SetBinContent(15,14.26632);
   hnumuCCinFV_stack_12->SetBinContent(16,13.26604);
   hnumuCCinFV_stack_12->SetBinContent(17,10.97529);
   hnumuCCinFV_stack_12->SetBinContent(18,8.977768);
   hnumuCCinFV_stack_12->SetBinContent(19,7.126733);
   hnumuCCinFV_stack_12->SetBinContent(20,2.980925);
   hnumuCCinFV_stack_12->SetBinContent(21,19.91204);
   hnumuCCinFV_stack_12->SetBinError(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(1,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(2,1.11061);
   hnumuCCinFV_stack_12->SetBinError(3,2.915043);
   hnumuCCinFV_stack_12->SetBinError(4,4.516676);
   hnumuCCinFV_stack_12->SetBinError(5,4.410758);
   hnumuCCinFV_stack_12->SetBinError(6,5.245576);
   hnumuCCinFV_stack_12->SetBinError(7,4.901662);
   hnumuCCinFV_stack_12->SetBinError(8,6.129033);
   hnumuCCinFV_stack_12->SetBinError(9,4.055589);
   hnumuCCinFV_stack_12->SetBinError(10,4.382605);
   hnumuCCinFV_stack_12->SetBinError(11,3.502016);
   hnumuCCinFV_stack_12->SetBinError(12,3.010724);
   hnumuCCinFV_stack_12->SetBinError(13,2.880338);
   hnumuCCinFV_stack_12->SetBinError(14,2.708643);
   hnumuCCinFV_stack_12->SetBinError(15,1.940678);
   hnumuCCinFV_stack_12->SetBinError(16,1.947846);
   hnumuCCinFV_stack_12->SetBinError(17,1.695864);
   hnumuCCinFV_stack_12->SetBinError(18,1.507839);
   hnumuCCinFV_stack_12->SetBinError(19,1.34592);
   hnumuCCinFV_stack_12->SetBinError(20,0.8552677);
   hnumuCCinFV_stack_12->SetBinError(21,2.222371);
   hnumuCCinFV_stack_12->SetEntries(2974);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.536893);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.9568903);
   hnueCCinFV_stack_13->SetBinContent(11,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.4647934);
   hnueCCinFV_stack_13->SetBinContent(13,1.752451);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,1.413964);
   hnueCCinFV_stack_13->SetBinContent(20,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(21,1.662242);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.3929602);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.5758265);
   hnueCCinFV_stack_13->SetBinError(11,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.3325098);
   hnueCCinFV_stack_13->SetBinError(13,0.7345848);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,0.6515799);
   hnueCCinFV_stack_13->SetBinError(20,0.337793);
   hnueCCinFV_stack_13->SetBinError(21,0.6513556);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__14->SetBinContent(0,0.3653432);
   hmcerror__14->SetBinContent(1,0.1967154);
   hmcerror__14->SetBinContent(2,6.14143);
   hmcerror__14->SetBinContent(3,85.17242);
   hmcerror__14->SetBinContent(4,308.785);
   hmcerror__14->SetBinContent(5,520.5859);
   hmcerror__14->SetBinContent(6,606.4553);
   hmcerror__14->SetBinContent(7,598.0972);
   hmcerror__14->SetBinContent(8,543.8394);
   hmcerror__14->SetBinContent(9,432.9132);
   hmcerror__14->SetBinContent(10,373.9174);
   hmcerror__14->SetBinContent(11,301.8477);
   hmcerror__14->SetBinContent(12,234.3156);
   hmcerror__14->SetBinContent(13,186.3715);
   hmcerror__14->SetBinContent(14,140.1668);
   hmcerror__14->SetBinContent(15,103.2538);
   hmcerror__14->SetBinContent(16,75.99756);
   hmcerror__14->SetBinContent(17,59.66803);
   hmcerror__14->SetBinContent(18,53.1208);
   hmcerror__14->SetBinContent(19,34.96284);
   hmcerror__14->SetBinContent(20,24.45722);
   hmcerror__14->SetBinContent(21,116.4217);
   hmcerror__14->SetBinError(0,0.3411072);
   hmcerror__14->SetBinError(1,0.4218229);
   hmcerror__14->SetBinError(2,5.947268);
   hmcerror__14->SetBinError(3,30.00423);
   hmcerror__14->SetBinError(4,104.4897);
   hmcerror__14->SetBinError(5,165.3306);
   hmcerror__14->SetBinError(6,190.0851);
   hmcerror__14->SetBinError(7,187.7313);
   hmcerror__14->SetBinError(8,164.2482);
   hmcerror__14->SetBinError(9,128.5007);
   hmcerror__14->SetBinError(10,128.6859);
   hmcerror__14->SetBinError(11,92.6082);
   hmcerror__14->SetBinError(12,69.75178);
   hmcerror__14->SetBinError(13,62.60536);
   hmcerror__14->SetBinError(14,55.75294);
   hmcerror__14->SetBinError(15,41.32432);
   hmcerror__14->SetBinError(16,33.38597);
   hmcerror__14->SetBinError(17,28.70553);
   hmcerror__14->SetBinError(18,28.79475);
   hmcerror__14->SetBinError(19,20.56523);
   hmcerror__14->SetBinError(20,16.9915);
   hmcerror__14->SetBinError(21,51.44337);
   hmcerror__14->SetEntries(4774.494);

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
   
   Double_t _fx3017[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3017[20] = {
   0,
   10,
   102,
   308,
   544,
   542,
   540,
   450,
   371,
   332,
   229,
   187,
   140,
   103,
   84,
   59,
   48,
   26,
   21,
   15};
   Double_t _felx3017[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3017[20] = {
   0,
   3.34883,
   10.0995,
   17.54993,
   23.32381,
   23.28089,
   23.2379,
   21.2132,
   19.26136,
   18.22087,
   15.13275,
   13.67479,
   11.83216,
   10.14889,
   9.2886,
   7.8097,
   7.0604,
   5.2453,
   4.7354,
   4.0385};
   Double_t _fehx3017[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3017[20] = {
   1.1478,
   3.1179,
   10.0995,
   17.54993,
   23.32381,
   23.28089,
   23.2379,
   21.2132,
   19.26136,
   18.22087,
   15.13275,
   13.67479,
   11.83216,
   10.14889,
   9.0869,
   7.6066,
   6.8561,
   5.0358,
   4.5229,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1980);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(624.0562);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4111.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 70.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 30.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  62.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  52.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3711.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 700.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3018[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3018[20] = {
   2.144331,
   0.9683849,
   0.3522763,
   0.3383898,
   0.3175857,
   0.3134362,
   0.313881,
   0.302016,
   0.2968278,
   0.344156,
   0.3068044,
   0.2976831,
   0.3359171,
   0.3977614,
   0.4002209,
   0.4393033,
   0.4810872,
   0.5420617,
   0.5882026,
   0.6947439};
   Double_t _fehx3018[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3018[20] = {
   2.144331,
   0.9683849,
   0.3522763,
   0.3383898,
   0.3175857,
   0.3134362,
   0.313881,
   0.302016,
   0.2968278,
   0.344156,
   0.3068044,
   0.2976831,
   0.3359171,
   0.3977614,
   0.4002209,
   0.4393033,
   0.4810872,
   0.5420617,
   0.5882026,
   0.6947439};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1980);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3019[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3019[20] = {
   2.144331,
   0.3133965,
   0.2339861,
   0.2661781,
   0.2645498,
   0.2726206,
   0.2670952,
   0.251838,
   0.2561225,
   0.2421439,
   0.2471886,
   0.2423867,
   0.238413,
   0.2382285,
   0.250168,
   0.2465504,
   0.2216296,
   0.2521136,
   0.22511,
   0.259635};
   Double_t _fehx3019[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3019[20] = {
   2.144331,
   0.3133965,
   0.2339861,
   0.2661781,
   0.2645498,
   0.2726206,
   0.2670952,
   0.251838,
   0.2561225,
   0.2421439,
   0.2471886,
   0.2423867,
   0.238413,
   0.2382285,
   0.250168,
   0.2465504,
   0.2216296,
   0.2521136,
   0.22511,
   0.259635};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1980);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3020[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3020[20] = {
   0,
   1.628285,
   1.197571,
   0.9974577,
   1.044976,
   0.8937179,
   0.9028633,
   0.8274502,
   0.8569847,
   0.8878966,
   0.7586607,
   0.798069,
   0.7511879,
   0.7348389,
   0.8135294,
   0.7763407,
   0.8044508,
   0.4894505,
   0.6006377,
   0.6133159};
   Double_t _felx3020[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3020[20] = {
   0,
   0.545285,
   0.1185772,
   0.05683543,
   0.044803,
   0.03838847,
   0.03885305,
   0.03900638,
   0.04449243,
   0.04872966,
   0.05013371,
   0.05836059,
   0.06348697,
   0.07240583,
   0.08995892,
   0.1027625,
   0.118328,
   0.09874287,
   0.1354409,
   0.1651251};
   Double_t _fehx3020[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3020[20] = {
   5.834826,
   0.507683,
   0.1185772,
   0.05683543,
   0.044803,
   0.03838847,
   0.03885305,
   0.03900638,
   0.04449243,
   0.04872966,
   0.05013371,
   0.05836059,
   0.06348697,
   0.07240583,
   0.08800548,
   0.1000901,
   0.1149041,
   0.09479902,
   0.1293631,
   0.1561788};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1980);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(6.418309);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

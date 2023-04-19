#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 20:57:04 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-0.7928477,3.553846,87.67227);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__25->SetBinContent(1,11.77964);
   hmc__25->SetBinContent(2,10.0612);
   hmc__25->SetBinContent(3,16.87497);
   hmc__25->SetBinContent(4,28.21684);
   hmc__25->SetBinContent(5,39.64239);
   hmc__25->SetBinContent(6,38.80164);
   hmc__25->SetBinContent(7,37.03392);
   hmc__25->SetBinContent(8,38.37209);
   hmc__25->SetBinContent(9,33.22777);
   hmc__25->SetBinContent(10,32.12642);
   hmc__25->SetBinContent(11,29.28804);
   hmc__25->SetBinContent(12,28.2252);
   hmc__25->SetBinContent(13,27.31086);
   hmc__25->SetBinContent(14,22.77499);
   hmc__25->SetBinContent(15,18.45528);
   hmc__25->SetBinContent(16,16.11618);
   hmc__25->SetBinContent(17,15.08098);
   hmc__25->SetBinContent(18,10.74195);
   hmc__25->SetBinContent(19,7.673206);
   hmc__25->SetBinContent(20,7.022126);
   hmc__25->SetBinContent(21,6.030532);
   hmc__25->SetBinContent(22,3.380017);
   hmc__25->SetBinContent(23,1.108596);
   hmc__25->SetBinContent(24,1.190627);
   hmc__25->SetBinError(1,16.74181);
   hmc__25->SetBinError(2,7.404136);
   hmc__25->SetBinError(3,10.49094);
   hmc__25->SetBinError(4,12.1571);
   hmc__25->SetBinError(5,17.07723);
   hmc__25->SetBinError(6,16.79382);
   hmc__25->SetBinError(7,18.04655);
   hmc__25->SetBinError(8,23.41975);
   hmc__25->SetBinError(9,15.09357);
   hmc__25->SetBinError(10,15.12781);
   hmc__25->SetBinError(11,13.95971);
   hmc__25->SetBinError(12,17.73259);
   hmc__25->SetBinError(13,13.74983);
   hmc__25->SetBinError(14,20.98979);
   hmc__25->SetBinError(15,10.07624);
   hmc__25->SetBinError(16,11.18565);
   hmc__25->SetBinError(17,11.12565);
   hmc__25->SetBinError(18,7.373112);
   hmc__25->SetBinError(19,5.722459);
   hmc__25->SetBinError(20,5.510725);
   hmc__25->SetBinError(21,5.966569);
   hmc__25->SetBinError(22,3.435868);
   hmc__25->SetBinError(23,1.341933);
   hmc__25->SetBinError(24,2.97582);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.7928477);
   hmc__25->SetMaximum(83.24901);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(41.6245);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,0.2193965);
   hbadmatch_stack_1->SetBinContent(3,0.7808771);
   hbadmatch_stack_1->SetBinContent(4,0.1967154);
   hbadmatch_stack_1->SetBinContent(5,0.9028341);
   hbadmatch_stack_1->SetBinContent(6,1.552167);
   hbadmatch_stack_1->SetBinContent(7,0.7302274);
   hbadmatch_stack_1->SetBinContent(8,1.599133);
   hbadmatch_stack_1->SetBinContent(9,1.370245);
   hbadmatch_stack_1->SetBinContent(10,1.658083);
   hbadmatch_stack_1->SetBinContent(11,0.8770706);
   hbadmatch_stack_1->SetBinContent(12,1.421232);
   hbadmatch_stack_1->SetBinContent(13,0.6297043);
   hbadmatch_stack_1->SetBinContent(14,0.3934307);
   hbadmatch_stack_1->SetBinContent(15,1.073786);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.7336084);
   hbadmatch_stack_1->SetBinContent(18,0.2150528);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.4223544);
   hbadmatch_stack_1->SetBinContent(21,1.428478);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.2193965);
   hbadmatch_stack_1->SetBinError(3,0.462543);
   hbadmatch_stack_1->SetBinError(4,0.1967154);
   hbadmatch_stack_1->SetBinError(5,0.5804185);
   hbadmatch_stack_1->SetBinError(6,0.6497164);
   hbadmatch_stack_1->SetBinError(7,0.4379386);
   hbadmatch_stack_1->SetBinError(8,0.618514);
   hbadmatch_stack_1->SetBinError(9,0.5179089);
   hbadmatch_stack_1->SetBinError(10,0.7064418);
   hbadmatch_stack_1->SetBinError(11,0.5197486);
   hbadmatch_stack_1->SetBinError(12,0.6218302);
   hbadmatch_stack_1->SetBinError(13,0.3651829);
   hbadmatch_stack_1->SetBinError(14,0.2781975);
   hbadmatch_stack_1->SetBinError(15,0.5557297);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.4394482);
   hbadmatch_stack_1->SetBinError(18,0.2150528);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.4223544);
   hbadmatch_stack_1->SetBinError(21,0.595108);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,0.3243973);
   hext_stack_2->SetBinContent(2,0.4065989);
   hext_stack_2->SetBinContent(3,1.939204);
   hext_stack_2->SetBinContent(4,2.192989);
   hext_stack_2->SetBinContent(5,4.125011);
   hext_stack_2->SetBinContent(6,1.697008);
   hext_stack_2->SetBinContent(7,1.78639);
   hext_stack_2->SetBinContent(8,3.793434);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,2.110787);
   hext_stack_2->SetBinContent(11,2.909624);
   hext_stack_2->SetBinContent(12,2.345802);
   hext_stack_2->SetBinContent(13,2.745221);
   hext_stack_2->SetBinContent(14,1.704188);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,2.185808);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.9660115);
   hext_stack_2->SetBinError(1,0.3243973);
   hext_stack_2->SetBinError(2,0.4065989);
   hext_stack_2->SetBinError(3,0.912471);
   hext_stack_2->SetBinError(4,0.9009267);
   hext_stack_2->SetBinError(5,1.358482);
   hext_stack_2->SetBinError(6,0.8873887);
   hext_stack_2->SetBinError(7,0.8039566);
   hext_stack_2->SetBinError(8,1.393356);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,0.8669371);
   hext_stack_2->SetBinError(11,1.218453);
   hext_stack_2->SetBinError(12,0.9989624);
   hext_stack_2->SetBinError(13,1.168097);
   hext_stack_2->SetBinError(14,0.7656743);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,1.006415);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.7189592);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(3,0.2623434);
   hdirt_stack_3->SetBinContent(5,0.2669376);
   hdirt_stack_3->SetBinContent(8,0.6910642);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(20,0.4049124);
   hdirt_stack_3->SetBinError(3,0.2623434);
   hdirt_stack_3->SetBinError(5,0.2645965);
   hdirt_stack_3->SetBinError(8,0.4585707);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(20,0.4049124);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.77135);
   houtFV_stack_4->SetBinContent(2,3.071134);
   houtFV_stack_4->SetBinContent(3,3.530262);
   houtFV_stack_4->SetBinContent(4,5.879614);
   houtFV_stack_4->SetBinContent(5,7.911015);
   houtFV_stack_4->SetBinContent(6,5.96068);
   houtFV_stack_4->SetBinContent(7,6.046814);
   houtFV_stack_4->SetBinContent(8,4.690957);
   houtFV_stack_4->SetBinContent(9,7.367547);
   houtFV_stack_4->SetBinContent(10,5.178369);
   houtFV_stack_4->SetBinContent(11,3.699181);
   houtFV_stack_4->SetBinContent(12,3.014471);
   houtFV_stack_4->SetBinContent(13,3.85878);
   houtFV_stack_4->SetBinContent(14,2.982615);
   houtFV_stack_4->SetBinContent(15,4.367981);
   houtFV_stack_4->SetBinContent(16,2.644128);
   houtFV_stack_4->SetBinContent(17,0.5867651);
   houtFV_stack_4->SetBinContent(18,1.662242);
   houtFV_stack_4->SetBinContent(19,0.9740888);
   houtFV_stack_4->SetBinContent(20,0.7834804);
   houtFV_stack_4->SetBinContent(21,1.175221);
   houtFV_stack_4->SetBinContent(22,0.5867651);
   houtFV_stack_4->SetBinContent(24,0.1967154);
   houtFV_stack_4->SetBinError(1,0.8223638);
   houtFV_stack_4->SetBinError(2,0.9202356);
   houtFV_stack_4->SetBinError(3,0.9560915);
   houtFV_stack_4->SetBinError(4,1.202515);
   houtFV_stack_4->SetBinError(5,1.428733);
   houtFV_stack_4->SetBinError(6,1.209257);
   houtFV_stack_4->SetBinError(7,1.199172);
   houtFV_stack_4->SetBinError(8,1.108518);
   houtFV_stack_4->SetBinError(9,1.428578);
   houtFV_stack_4->SetBinError(10,1.144335);
   houtFV_stack_4->SetBinError(11,0.989582);
   houtFV_stack_4->SetBinError(12,0.7816694);
   houtFV_stack_4->SetBinError(13,0.9296323);
   houtFV_stack_4->SetBinError(14,0.8556548);
   houtFV_stack_4->SetBinError(15,1.076769);
   houtFV_stack_4->SetBinError(16,0.7855485);
   houtFV_stack_4->SetBinError(17,0.3387718);
   houtFV_stack_4->SetBinError(18,0.6513556);
   houtFV_stack_4->SetBinError(19,0.5878418);
   houtFV_stack_4->SetBinError(20,0.3917439);
   houtFV_stack_4->SetBinError(21,0.4797863);
   houtFV_stack_4->SetBinError(22,0.3387718);
   houtFV_stack_4->SetBinError(24,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.631994);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.6825538);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.258748);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.789694);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.548058);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.44551);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.7428);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.58653);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.922472);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.822162);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.613908);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.259418);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.164436);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.893646);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.054398);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.876956);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.76178);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.854858);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.785944);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8931359);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5717859);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.390768);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4791353);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1982678);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5170337);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8811063);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9010524);
   hNCpi0inFVres_stack_7->SetBinError(6,1.04191);
   hNCpi0inFVres_stack_7->SetBinError(7,1.138026);
   hNCpi0inFVres_stack_7->SetBinError(8,1.176562);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9267826);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9153733);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9010168);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7643764);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8627679);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7205163);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5617126);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6760177);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5482713);
   hNCpi0inFVres_stack_7->SetBinError(18,0.41265);
   hNCpi0inFVres_stack_7->SetBinError(19,0.509769);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3007107);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2355051);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2089417);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.501704);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3347998);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.632658);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.305834);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.481948);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.051406);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.552366);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.315548);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8086039);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.059208);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.12929);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.3205179);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.073658);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5158178);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8933042);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2454852);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.09664838);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4648418);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6229323);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5230212);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5513385);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5781597);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5664855);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2784203);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2623461);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3494035);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3424653);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1252919);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.385337);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1454198);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3509784);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,2.23808);
   hCCpi0inFV_stack_10->SetBinContent(2,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(3,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(4,3.724743);
   hCCpi0inFV_stack_10->SetBinContent(5,6.551995);
   hCCpi0inFV_stack_10->SetBinContent(6,6.730889);
   hCCpi0inFV_stack_10->SetBinContent(7,8.473805);
   hCCpi0inFV_stack_10->SetBinContent(8,5.57349);
   hCCpi0inFV_stack_10->SetBinContent(9,6.832994);
   hCCpi0inFV_stack_10->SetBinContent(10,7.330404);
   hCCpi0inFV_stack_10->SetBinContent(11,7.093522);
   hCCpi0inFV_stack_10->SetBinContent(12,6.523681);
   hCCpi0inFV_stack_10->SetBinContent(13,6.086576);
   hCCpi0inFV_stack_10->SetBinContent(14,5.090032);
   hCCpi0inFV_stack_10->SetBinContent(15,2.836062);
   hCCpi0inFV_stack_10->SetBinContent(16,3.316031);
   hCCpi0inFV_stack_10->SetBinContent(17,3.482888);
   hCCpi0inFV_stack_10->SetBinContent(18,1.586306);
   hCCpi0inFV_stack_10->SetBinContent(19,1.227928);
   hCCpi0inFV_stack_10->SetBinContent(20,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(21,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(22,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(23,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,0.821495);
   hCCpi0inFV_stack_10->SetBinError(2,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(3,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(4,0.9956374);
   hCCpi0inFV_stack_10->SetBinError(5,1.256605);
   hCCpi0inFV_stack_10->SetBinError(6,1.323595);
   hCCpi0inFV_stack_10->SetBinError(7,1.466997);
   hCCpi0inFV_stack_10->SetBinError(8,1.177947);
   hCCpi0inFV_stack_10->SetBinError(9,1.361518);
   hCCpi0inFV_stack_10->SetBinError(10,1.315497);
   hCCpi0inFV_stack_10->SetBinError(11,1.417618);
   hCCpi0inFV_stack_10->SetBinError(12,1.264578);
   hCCpi0inFV_stack_10->SetBinError(13,1.3184);
   hCCpi0inFV_stack_10->SetBinError(14,1.157684);
   hCCpi0inFV_stack_10->SetBinError(15,0.8077659);
   hCCpi0inFV_stack_10->SetBinError(16,0.9193568);
   hCCpi0inFV_stack_10->SetBinError(17,0.937133);
   hCCpi0inFV_stack_10->SetBinError(18,0.6134751);
   hCCpi0inFV_stack_10->SetBinError(19,0.5031819);
   hCCpi0inFV_stack_10->SetBinError(20,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(21,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(22,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(23,0.1967154);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,1.123658);
   hNCinFV_stack_11->SetBinContent(4,2.249007);
   hNCinFV_stack_11->SetBinContent(5,1.518779);
   hNCinFV_stack_11->SetBinContent(6,2.835772);
   hNCinFV_stack_11->SetBinContent(7,1.465526);
   hNCinFV_stack_11->SetBinContent(8,1.857266);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,1.268811);
   hNCinFV_stack_11->SetBinContent(11,0.3917402);
   hNCinFV_stack_11->SetBinContent(12,0.8770706);
   hNCinFV_stack_11->SetBinContent(13,1.804013);
   hNCinFV_stack_11->SetBinContent(14,1.270501);
   hNCinFV_stack_11->SetBinContent(15,1.607298);
   hNCinFV_stack_11->SetBinContent(16,0.5884556);
   hNCinFV_stack_11->SetBinContent(17,0.9286332);
   hNCinFV_stack_11->SetBinContent(19,0.8770706);
   hNCinFV_stack_11->SetBinContent(20,0.3917402);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.536893);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.5188295);
   hNCinFV_stack_11->SetBinError(4,0.7341869);
   hNCinFV_stack_11->SetBinError(5,0.5892709);
   hNCinFV_stack_11->SetBinError(6,0.808577);
   hNCinFV_stack_11->SetBinError(7,0.6209405);
   hNCinFV_stack_11->SetBinError(8,0.6799255);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.5889569);
   hNCinFV_stack_11->SetBinError(11,0.2770047);
   hNCinFV_stack_11->SetBinError(12,0.5197486);
   hNCinFV_stack_11->SetBinError(13,0.7075491);
   hNCinFV_stack_11->SetBinError(14,0.5895188);
   hNCinFV_stack_11->SetBinError(15,0.6796534);
   hNCinFV_stack_11->SetBinError(16,0.3397478);
   hNCinFV_stack_11->SetBinError(17,0.48078);
   hNCinFV_stack_11->SetBinError(19,0.5197486);
   hNCinFV_stack_11->SetBinError(20,0.2770047);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.3929602);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,3.826415);
   hnumuCCinFV_stack_12->SetBinContent(2,2.70259);
   hnumuCCinFV_stack_12->SetBinContent(3,2.843672);
   hnumuCCinFV_stack_12->SetBinContent(4,4.866902);
   hnumuCCinFV_stack_12->SetBinContent(5,6.511922);
   hnumuCCinFV_stack_12->SetBinContent(6,5.14125);
   hnumuCCinFV_stack_12->SetBinContent(7,3.48613);
   hnumuCCinFV_stack_12->SetBinContent(8,5.902635);
   hnumuCCinFV_stack_12->SetBinContent(9,5.367016);
   hnumuCCinFV_stack_12->SetBinContent(10,5.496708);
   hnumuCCinFV_stack_12->SetBinContent(11,5.72842);
   hnumuCCinFV_stack_12->SetBinContent(12,6.530449);
   hnumuCCinFV_stack_12->SetBinContent(13,4.864937);
   hnumuCCinFV_stack_12->SetBinContent(14,5.698172);
   hnumuCCinFV_stack_12->SetBinContent(15,3.6832);
   hnumuCCinFV_stack_12->SetBinContent(16,3.942766);
   hnumuCCinFV_stack_12->SetBinContent(17,2.986717);
   hnumuCCinFV_stack_12->SetBinContent(18,2.693961);
   hnumuCCinFV_stack_12->SetBinContent(19,1.13728);
   hnumuCCinFV_stack_12->SetBinContent(20,2.31558);
   hnumuCCinFV_stack_12->SetBinContent(21,0.711896);
   hnumuCCinFV_stack_12->SetBinContent(22,0.2072084);
   hnumuCCinFV_stack_12->SetBinError(1,1.089668);
   hnumuCCinFV_stack_12->SetBinError(2,1.014864);
   hnumuCCinFV_stack_12->SetBinError(3,0.9966079);
   hnumuCCinFV_stack_12->SetBinError(4,1.102019);
   hnumuCCinFV_stack_12->SetBinError(5,1.266223);
   hnumuCCinFV_stack_12->SetBinError(6,1.158088);
   hnumuCCinFV_stack_12->SetBinError(7,0.994214);
   hnumuCCinFV_stack_12->SetBinError(8,1.757816);
   hnumuCCinFV_stack_12->SetBinError(9,1.242425);
   hnumuCCinFV_stack_12->SetBinError(10,1.215433);
   hnumuCCinFV_stack_12->SetBinError(11,1.263611);
   hnumuCCinFV_stack_12->SetBinError(12,1.414408);
   hnumuCCinFV_stack_12->SetBinError(13,1.291498);
   hnumuCCinFV_stack_12->SetBinError(14,1.550134);
   hnumuCCinFV_stack_12->SetBinError(15,0.9824335);
   hnumuCCinFV_stack_12->SetBinError(16,1.411713);
   hnumuCCinFV_stack_12->SetBinError(17,1.354151);
   hnumuCCinFV_stack_12->SetBinError(18,0.9257673);
   hnumuCCinFV_stack_12->SetBinError(19,0.5978982);
   hnumuCCinFV_stack_12->SetBinError(20,0.7891632);
   hnumuCCinFV_stack_12->SetBinError(21,0.4821166);
   hnumuCCinFV_stack_12->SetBinError(22,0.196995);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(3,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(4,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(6,0.900607);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(16,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.2331833);
   hnueCCinFV_stack_13->SetBinError(3,0.2192101);
   hnueCCinFV_stack_13->SetBinError(4,0.4494399);
   hnueCCinFV_stack_13->SetBinError(6,0.5359814);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.2171002);
   hnueCCinFV_stack_13->SetBinError(16,0.2502081);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__26->SetBinContent(1,11.77964);
   hmcerror__26->SetBinContent(2,10.0612);
   hmcerror__26->SetBinContent(3,16.87497);
   hmcerror__26->SetBinContent(4,28.21684);
   hmcerror__26->SetBinContent(5,39.64239);
   hmcerror__26->SetBinContent(6,38.80164);
   hmcerror__26->SetBinContent(7,37.03392);
   hmcerror__26->SetBinContent(8,38.37209);
   hmcerror__26->SetBinContent(9,33.22777);
   hmcerror__26->SetBinContent(10,32.12642);
   hmcerror__26->SetBinContent(11,29.28804);
   hmcerror__26->SetBinContent(12,28.2252);
   hmcerror__26->SetBinContent(13,27.31086);
   hmcerror__26->SetBinContent(14,22.77499);
   hmcerror__26->SetBinContent(15,18.45528);
   hmcerror__26->SetBinContent(16,16.11618);
   hmcerror__26->SetBinContent(17,15.08098);
   hmcerror__26->SetBinContent(18,10.74195);
   hmcerror__26->SetBinContent(19,7.673206);
   hmcerror__26->SetBinContent(20,7.022126);
   hmcerror__26->SetBinContent(21,6.030532);
   hmcerror__26->SetBinContent(22,3.380017);
   hmcerror__26->SetBinContent(23,1.108596);
   hmcerror__26->SetBinContent(24,1.190627);
   hmcerror__26->SetBinError(1,16.74181);
   hmcerror__26->SetBinError(2,7.404136);
   hmcerror__26->SetBinError(3,10.49094);
   hmcerror__26->SetBinError(4,12.1571);
   hmcerror__26->SetBinError(5,17.07723);
   hmcerror__26->SetBinError(6,16.79382);
   hmcerror__26->SetBinError(7,18.04655);
   hmcerror__26->SetBinError(8,23.41975);
   hmcerror__26->SetBinError(9,15.09357);
   hmcerror__26->SetBinError(10,15.12781);
   hmcerror__26->SetBinError(11,13.95971);
   hmcerror__26->SetBinError(12,17.73259);
   hmcerror__26->SetBinError(13,13.74983);
   hmcerror__26->SetBinError(14,20.98979);
   hmcerror__26->SetBinError(15,10.07624);
   hmcerror__26->SetBinError(16,11.18565);
   hmcerror__26->SetBinError(17,11.12565);
   hmcerror__26->SetBinError(18,7.373112);
   hmcerror__26->SetBinError(19,5.722459);
   hmcerror__26->SetBinError(20,5.510725);
   hmcerror__26->SetBinError(21,5.966569);
   hmcerror__26->SetBinError(22,3.435868);
   hmcerror__26->SetBinError(23,1.341933);
   hmcerror__26->SetBinError(24,2.97582);
   hmcerror__26->SetBinError(25,0.3895343);
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
   
   Double_t _fx3033[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3033[24] = {
   6,
   14,
   10,
   21,
   33,
   24,
   37,
   34,
   30,
   27,
   32,
   25,
   21,
   22,
   17,
   7,
   10,
   5,
   9,
   5,
   6,
   1,
   1,
   0};
   Double_t _felx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3033[24] = {
   2.67925,
   3.9102,
   3.34883,
   4.7354,
   5.8847,
   5.0476,
   6.2203,
   5.9703,
   5.6197,
   5.3414,
   5.7977,
   5.1474,
   4.7354,
   4.8417,
   4.2835,
   2.85954,
   3.34883,
   2.48995,
   3.19354,
   2.48995,
   2.67925,
   1,
   1,
   0};
   Double_t _fehx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3033[24] = {
   2.41858,
   3.6898,
   3.1179,
   4.5229,
   5.6776,
   4.837,
   6.0141,
   5.7635,
   5.4117,
   5.1322,
   5.5904,
   4.9374,
   4.5229,
   4.6299,
   4.0673,
   2.61053,
   3.1179,
   2.21064,
   2.9582,
   2.21064,
   2.41858,
   1.35971,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(47.31551);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3034[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3034[24] = {
   1.42125,
   0.7359097,
   0.6216866,
   0.4308454,
   0.430782,
   0.4328121,
   0.4872979,
   0.6103329,
   0.4542457,
   0.4708839,
   0.476635,
   0.6282538,
   0.5034565,
   0.9216157,
   0.5459814,
   0.6940633,
   0.7377274,
   0.6863852,
   0.7457715,
   0.7847659,
   0.9893935,
   1.016524,
   1.210479,
   2.499372};
   Double_t _fehx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3034[24] = {
   1.42125,
   0.7359097,
   0.6216866,
   0.4308454,
   0.430782,
   0.4328121,
   0.4872979,
   0.6103329,
   0.4542457,
   0.4708839,
   0.476635,
   0.6282538,
   0.5034565,
   0.9216157,
   0.5459814,
   0.6940633,
   0.7377274,
   0.6863852,
   0.7457715,
   0.7847659,
   0.9893935,
   1.016524,
   1.210479,
   2.499372};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
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
   
   Double_t _fx3035[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3035[24] = {
   0.2403058,
   0.2805264,
   0.229651,
   0.2465729,
   0.2506265,
   0.3133439,
   0.3238565,
   0.3029197,
   0.3043751,
   0.282445,
   0.2679344,
   0.256388,
   0.2817817,
   0.2557382,
   0.2854319,
   0.2984604,
   0.3196369,
   0.2675282,
   0.3122923,
   0.2772582,
   0.3475617,
   0.3871185,
   0.6283717,
   0.7145877};
   Double_t _fehx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3035[24] = {
   0.2403058,
   0.2805264,
   0.229651,
   0.2465729,
   0.2506265,
   0.3133439,
   0.3238565,
   0.3029197,
   0.3043751,
   0.282445,
   0.2679344,
   0.256388,
   0.2817817,
   0.2557382,
   0.2854319,
   0.2984604,
   0.3196369,
   0.2675282,
   0.3122923,
   0.2772582,
   0.3475617,
   0.3871185,
   0.6283717,
   0.7145877};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
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
   
   Double_t _fx3036[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3036[24] = {
   0.5093535,
   1.391484,
   0.5925937,
   0.7442364,
   0.8324423,
   0.6185306,
   0.9990842,
   0.8860607,
   0.9028593,
   0.8404299,
   1.092596,
   0.8857332,
   0.768925,
   0.965972,
   0.9211457,
   0.4343461,
   0.663087,
   0.465465,
   1.172913,
   0.7120351,
   0.9949371,
   0.2958565,
   0.9020418,
   0};
   Double_t _felx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3036[24] = {
   0.2274475,
   0.3886415,
   0.1984496,
   0.1678218,
   0.1484446,
   0.1300873,
   0.1679623,
   0.1555897,
   0.1691266,
   0.1662619,
   0.1979545,
   0.1823689,
   0.1733889,
   0.2125885,
   0.2321016,
   0.1774329,
   0.2220566,
   0.2317969,
   0.4161937,
   0.3545863,
   0.4442809,
   0.2958565,
   0.9020418,
   0};
   Double_t _fehx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3036[24] = {
   0.2053187,
   0.3667355,
   0.1847648,
   0.1602908,
   0.1432204,
   0.1246597,
   0.1623944,
   0.1502003,
   0.1628668,
   0.1597502,
   0.1908765,
   0.1749288,
   0.1656081,
   0.2032888,
   0.2203868,
   0.1619819,
   0.2067439,
   0.2057951,
   0.3855233,
   0.3148106,
   0.4010558,
   0.4022791,
   1.226515,
   0.96403};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.341413);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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

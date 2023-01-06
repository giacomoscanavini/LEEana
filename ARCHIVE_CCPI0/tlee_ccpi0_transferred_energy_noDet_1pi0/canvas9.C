#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Oct 21 13:43:28 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
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
   pad1->Range(-276.9231,-6.008987,2030.769,664.4674);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__25->SetBinContent(0,0.3401776);
   hmc__25->SetBinContent(2,0.718394);
   hmc__25->SetBinContent(3,14.90208);
   hmc__25->SetBinContent(4,71.27441);
   hmc__25->SetBinContent(5,166.8825);
   hmc__25->SetBinContent(6,254.1459);
   hmc__25->SetBinContent(7,293.8073);
   hmc__25->SetBinContent(8,300.4493);
   hmc__25->SetBinContent(9,295.3029);
   hmc__25->SetBinContent(10,269.7656);
   hmc__25->SetBinContent(11,220.5356);
   hmc__25->SetBinContent(12,188.3274);
   hmc__25->SetBinContent(13,169.2864);
   hmc__25->SetBinContent(14,146.7229);
   hmc__25->SetBinContent(15,112.8349);
   hmc__25->SetBinContent(16,93.34476);
   hmc__25->SetBinContent(17,88.25974);
   hmc__25->SetBinContent(18,61.99128);
   hmc__25->SetBinContent(19,51.15136);
   hmc__25->SetBinContent(20,41.10276);
   hmc__25->SetBinContent(21,30.79945);
   hmc__25->SetBinContent(22,34.89248);
   hmc__25->SetBinContent(23,22.56326);
   hmc__25->SetBinContent(24,19.10546);
   hmc__25->SetBinContent(25,12.23704);
   hmc__25->SetBinContent(26,97.05998);
   hmc__25->SetBinError(0,0.3401776);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,0.5974529);
   hmc__25->SetBinError(3,4.720772);
   hmc__25->SetBinError(4,18.19413);
   hmc__25->SetBinError(5,43.37156);
   hmc__25->SetBinError(6,64.55126);
   hmc__25->SetBinError(7,80.89229);
   hmc__25->SetBinError(8,84.82065);
   hmc__25->SetBinError(9,77.0417);
   hmc__25->SetBinError(10,71.40037);
   hmc__25->SetBinError(11,59.22905);
   hmc__25->SetBinError(12,47.80813);
   hmc__25->SetBinError(13,43.90246);
   hmc__25->SetBinError(14,36.19502);
   hmc__25->SetBinError(15,28.3465);
   hmc__25->SetBinError(16,23.35417);
   hmc__25->SetBinError(17,21.57183);
   hmc__25->SetBinError(18,16.049);
   hmc__25->SetBinError(19,13.59171);
   hmc__25->SetBinError(20,10.83205);
   hmc__25->SetBinError(21,7.644766);
   hmc__25->SetBinError(22,8.462043);
   hmc__25->SetBinError(23,5.583751);
   hmc__25->SetBinError(24,4.5514);
   hmc__25->SetBinError(25,3.665458);
   hmc__25->SetBinError(26,16.43878);
   hmc__25->SetMinimum(-6.008987);
   hmc__25->SetMaximum(630.9436);
   hmc__25->SetEntries(3023.689);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1800);
   hs9_stack_9->SetMinimum(-1.352654e-08);
   hs9_stack_9->SetMaximum(315.4718);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(4,0.3900192);
   hbadmatch_stack_1->SetBinContent(5,0.536893);
   hbadmatch_stack_1->SetBinContent(6,0.6387796);
   hbadmatch_stack_1->SetBinContent(8,0.7319179);
   hbadmatch_stack_1->SetBinContent(9,0.9269427);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.7336084);
   hbadmatch_stack_1->SetBinContent(13,0.9015994);
   hbadmatch_stack_1->SetBinContent(14,0.5867651);
   hbadmatch_stack_1->SetBinContent(15,0.7625952);
   hbadmatch_stack_1->SetBinContent(16,0.4186988);
   hbadmatch_stack_1->SetBinContent(17,1.473255);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(4,0.3438095);
   hbadmatch_stack_1->SetBinError(5,0.3929602);
   hbadmatch_stack_1->SetBinError(6,0.468889);
   hbadmatch_stack_1->SetBinError(8,0.438694);
   hbadmatch_stack_1->SetBinError(9,0.4800908);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.4394482);
   hbadmatch_stack_1->SetBinError(13,0.5058815);
   hbadmatch_stack_1->SetBinError(14,0.3387718);
   hbadmatch_stack_1->SetBinError(15,0.4531658);
   hbadmatch_stack_1->SetBinError(16,0.4186988);
   hbadmatch_stack_1->SetBinError(17,0.6849105);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(4,0.9660115);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,4.841647);
   hext_stack_2->SetBinContent(7,1.614806);
   hext_stack_2->SetBinContent(8,4.221574);
   hext_stack_2->SetBinContent(9,8.545698);
   hext_stack_2->SetBinContent(10,4.263464);
   hext_stack_2->SetBinContent(11,3.15182);
   hext_stack_2->SetBinContent(12,1.868591);
   hext_stack_2->SetBinContent(13,5.001641);
   hext_stack_2->SetBinContent(14,6.124875);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,4.345666);
   hext_stack_2->SetBinContent(17,2.510206);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.614806);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,3.297453);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,7.396514);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(4,0.7189592);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,1.586957);
   hext_stack_2->SetBinError(7,0.8528597);
   hext_stack_2->SetBinError(8,1.226034);
   hext_stack_2->SetBinError(9,2.144991);
   hext_stack_2->SetBinError(10,1.560171);
   hext_stack_2->SetBinError(11,1.23684);
   hext_stack_2->SetBinError(12,0.840497);
   hext_stack_2->SetBinError(13,1.582242);
   hext_stack_2->SetBinError(14,1.828051);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,1.579311);
   hext_stack_2->SetBinError(17,1.057404);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.8528597);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,1.384641);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,2.056985);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(9,0.4494525);
   hdirt_stack_3->SetBinContent(10,0.266188);
   hdirt_stack_3->SetBinContent(13,0.165896);
   hdirt_stack_3->SetBinContent(14,1.167841e-06);
   hdirt_stack_3->SetBinContent(15,0.2665913);
   hdirt_stack_3->SetBinContent(23,0.2441834);
   hdirt_stack_3->SetBinError(9,0.3406198);
   hdirt_stack_3->SetBinError(10,0.266188);
   hdirt_stack_3->SetBinError(13,0.165896);
   hdirt_stack_3->SetBinError(14,1.167841e-06);
   hdirt_stack_3->SetBinError(15,0.2665913);
   hdirt_stack_3->SetBinError(23,0.2441834);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(4,1.123658);
   houtFV_stack_4->SetBinContent(5,3.260067);
   houtFV_stack_4->SetBinContent(6,1.217262);
   houtFV_stack_4->SetBinContent(7,2.105544);
   houtFV_stack_4->SetBinContent(8,3.571791);
   houtFV_stack_4->SetBinContent(9,2.355781);
   houtFV_stack_4->SetBinContent(10,2.472175);
   houtFV_stack_4->SetBinContent(11,1.766258);
   houtFV_stack_4->SetBinContent(12,2.423816);
   houtFV_stack_4->SetBinContent(13,0.9346789);
   houtFV_stack_4->SetBinContent(14,0.9303237);
   houtFV_stack_4->SetBinContent(15,2.026121);
   houtFV_stack_4->SetBinContent(16,0.3401776);
   houtFV_stack_4->SetBinContent(17,0.7532358);
   houtFV_stack_4->SetBinContent(18,0.785171);
   houtFV_stack_4->SetBinContent(19,0.3900497);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.4519673);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.5352025);
   houtFV_stack_4->SetBinError(4,0.5188295);
   houtFV_stack_4->SetBinError(5,0.9096989);
   houtFV_stack_4->SetBinError(6,0.6211758);
   houtFV_stack_4->SetBinError(7,0.6797106);
   houtFV_stack_4->SetBinError(8,1.015954);
   houtFV_stack_4->SetBinError(9,0.7806296);
   houtFV_stack_4->SetBinError(10,0.8230409);
   houtFV_stack_4->SetBinError(11,0.6591463);
   houtFV_stack_4->SetBinError(12,1.093862);
   houtFV_stack_4->SetBinError(13,0.481064);
   houtFV_stack_4->SetBinError(14,0.4814682);
   houtFV_stack_4->SetBinError(15,1.017413);
   houtFV_stack_4->SetBinError(16,0.3401776);
   houtFV_stack_4->SetBinError(17,0.3967958);
   houtFV_stack_4->SetBinError(18,0.3925882);
   houtFV_stack_4->SetBinError(19,0.2758068);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(22,0.3222584);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.3921167);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.09724331);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.1670204);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.298545);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.86656);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.953182);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.34813);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.281816);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.868913);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.244766);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.758094);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.232105);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.336707);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.024818);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.240209);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.407249);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.344739);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5073301);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8576074);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1663883);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.1616681);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1153349);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1562702);
   hNCpi0inFVres_stack_7->SetBinError(3,0.05965881);
   hNCpi0inFVres_stack_7->SetBinError(4,0.0694857);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3981418);
   hNCpi0inFVres_stack_7->SetBinError(6,0.17067);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3706139);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4010954);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4451417);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3725331);
   hNCpi0inFVres_stack_7->SetBinError(11,0.258049);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3369001);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8625563);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7596185);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4217743);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4260844);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5616859);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9131865);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2985231);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5850676);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1021391);
   hNCpi0inFVres_stack_7->SetBinError(22,0.07420541);
   hNCpi0inFVres_stack_7->SetBinError(23,0.07142288);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinError(26,0.06460099);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.4136732);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.7793572);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8665684);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5804442);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.125836);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.238182);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.082426);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.551457);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.639924);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.364062);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9951125);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.699827);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.256678);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.829413);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.222361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.035056);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6464648);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.4388896);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8941495);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5737526);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1973578);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.912191);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1681375);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2529389);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2480834);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1547493);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2991572);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3081243);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2886874);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7399448);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4541248);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6124091);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3516675);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5088629);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4998064);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6181089);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4699277);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3971536);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3027973);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2308789);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3094795);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2539606);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.08508572);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4393031);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,6.803654);
   hCCpi0inFV_stack_10->SetBinContent(4,51.39053);
   hCCpi0inFV_stack_10->SetBinContent(5,127.7379);
   hCCpi0inFV_stack_10->SetBinContent(6,202.439);
   hCCpi0inFV_stack_10->SetBinContent(7,234.4867);
   hCCpi0inFV_stack_10->SetBinContent(8,232.6722);
   hCCpi0inFV_stack_10->SetBinContent(9,216.187);
   hCCpi0inFV_stack_10->SetBinContent(10,193.8208);
   hCCpi0inFV_stack_10->SetBinContent(11,159.7102);
   hCCpi0inFV_stack_10->SetBinContent(12,134.684);
   hCCpi0inFV_stack_10->SetBinContent(13,109.6872);
   hCCpi0inFV_stack_10->SetBinContent(14,94.27806);
   hCCpi0inFV_stack_10->SetBinContent(15,70.73715);
   hCCpi0inFV_stack_10->SetBinContent(16,56.0915);
   hCCpi0inFV_stack_10->SetBinContent(17,46.79526);
   hCCpi0inFV_stack_10->SetBinContent(18,35.68448);
   hCCpi0inFV_stack_10->SetBinContent(19,26.83506);
   hCCpi0inFV_stack_10->SetBinContent(20,25.33254);
   hCCpi0inFV_stack_10->SetBinContent(21,15.05485);
   hCCpi0inFV_stack_10->SetBinContent(22,18.11306);
   hCCpi0inFV_stack_10->SetBinContent(23,9.975067);
   hCCpi0inFV_stack_10->SetBinContent(24,9.668537);
   hCCpi0inFV_stack_10->SetBinContent(25,7.774972);
   hCCpi0inFV_stack_10->SetBinContent(26,46.62086);
   hCCpi0inFV_stack_10->SetBinError(3,1.257016);
   hCCpi0inFV_stack_10->SetBinError(4,3.552232);
   hCCpi0inFV_stack_10->SetBinError(5,5.750504);
   hCCpi0inFV_stack_10->SetBinError(6,7.250613);
   hCCpi0inFV_stack_10->SetBinError(7,7.709213);
   hCCpi0inFV_stack_10->SetBinError(8,7.663841);
   hCCpi0inFV_stack_10->SetBinError(9,7.387376);
   hCCpi0inFV_stack_10->SetBinError(10,7.01006);
   hCCpi0inFV_stack_10->SetBinError(11,6.447);
   hCCpi0inFV_stack_10->SetBinError(12,5.850386);
   hCCpi0inFV_stack_10->SetBinError(13,5.231874);
   hCCpi0inFV_stack_10->SetBinError(14,4.879517);
   hCCpi0inFV_stack_10->SetBinError(15,4.238792);
   hCCpi0inFV_stack_10->SetBinError(16,3.757373);
   hCCpi0inFV_stack_10->SetBinError(17,3.396735);
   hCCpi0inFV_stack_10->SetBinError(18,3.071552);
   hCCpi0inFV_stack_10->SetBinError(19,2.578258);
   hCCpi0inFV_stack_10->SetBinError(20,2.57744);
   hCCpi0inFV_stack_10->SetBinError(21,1.933155);
   hCCpi0inFV_stack_10->SetBinError(22,2.185692);
   hCCpi0inFV_stack_10->SetBinError(23,1.552303);
   hCCpi0inFV_stack_10->SetBinError(24,1.607134);
   hCCpi0inFV_stack_10->SetBinError(25,1.424617);
   hCCpi0inFV_stack_10->SetBinError(26,3.476111);
   hCCpi0inFV_stack_10->SetEntries(9073);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(5,0.3188656);
   hNCinFV_stack_11->SetBinContent(6,1.097187);
   hNCinFV_stack_11->SetBinContent(7,1.184285);
   hNCinFV_stack_11->SetBinContent(8,1.535064);
   hNCinFV_stack_11->SetBinContent(9,1.83476);
   hNCinFV_stack_11->SetBinContent(10,2.634794);
   hNCinFV_stack_11->SetBinContent(11,1.850813);
   hNCinFV_stack_11->SetBinContent(12,0.9368594);
   hNCinFV_stack_11->SetBinContent(13,1.610679);
   hNCinFV_stack_11->SetBinContent(14,1.14044);
   hNCinFV_stack_11->SetBinContent(15,1.14997);
   hNCinFV_stack_11->SetBinContent(16,0.9226101);
   hNCinFV_stack_11->SetBinContent(17,3.059834);
   hNCinFV_stack_11->SetBinContent(18,1.431307);
   hNCinFV_stack_11->SetBinContent(20,0.8904712);
   hNCinFV_stack_11->SetBinContent(21,1.247992);
   hNCinFV_stack_11->SetBinContent(22,0.8770706);
   hNCinFV_stack_11->SetBinContent(23,0.7319179);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,1.715495);
   hNCinFV_stack_11->SetBinError(5,0.2315548);
   hNCinFV_stack_11->SetBinError(6,0.7578831);
   hNCinFV_stack_11->SetBinError(7,0.5423922);
   hNCinFV_stack_11->SetBinError(8,0.662738);
   hNCinFV_stack_11->SetBinError(9,0.6323805);
   hNCinFV_stack_11->SetBinError(10,0.837577);
   hNCinFV_stack_11->SetBinError(11,0.6768678);
   hNCinFV_stack_11->SetBinError(12,0.521528);
   hNCinFV_stack_11->SetBinError(13,0.6806271);
   hNCinFV_stack_11->SetBinError(14,0.6472355);
   hNCinFV_stack_11->SetBinError(15,0.505117);
   hNCinFV_stack_11->SetBinError(16,0.7520773);
   hNCinFV_stack_11->SetBinError(17,1.372663);
   hNCinFV_stack_11->SetBinError(18,0.6948349);
   hNCinFV_stack_11->SetBinError(20,0.6469496);
   hNCinFV_stack_11->SetBinError(21,0.7697427);
   hNCinFV_stack_11->SetBinError(22,0.5197486);
   hNCinFV_stack_11->SetBinError(23,0.438694);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.6212384);
   hNCinFV_stack_11->SetEntries(99);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3939967);
   hnumuCCinFV_stack_12->SetBinContent(3,8.001187);
   hnumuCCinFV_stack_12->SetBinContent(4,16.82351);
   hnumuCCinFV_stack_12->SetBinContent(5,32.28629);
   hnumuCCinFV_stack_12->SetBinContent(6,42.17893);
   hnumuCCinFV_stack_12->SetBinContent(7,51.66717);
   hnumuCCinFV_stack_12->SetBinContent(8,54.04782);
   hnumuCCinFV_stack_12->SetBinContent(9,61.48337);
   hnumuCCinFV_stack_12->SetBinContent(10,62.9651);
   hnumuCCinFV_stack_12->SetBinContent(11,49.92013);
   hnumuCCinFV_stack_12->SetBinContent(12,44.2825);
   hnumuCCinFV_stack_12->SetBinContent(13,44.75425);
   hnumuCCinFV_stack_12->SetBinContent(14,39.99047);
   hnumuCCinFV_stack_12->SetBinContent(15,33.64767);
   hnumuCCinFV_stack_12->SetBinContent(16,27.65713);
   hnumuCCinFV_stack_12->SetBinContent(17,30.43129);
   hnumuCCinFV_stack_12->SetBinContent(18,18.87768);
   hnumuCCinFV_stack_12->SetBinContent(19,20.1806);
   hnumuCCinFV_stack_12->SetBinContent(20,12.85456);
   hnumuCCinFV_stack_12->SetBinContent(21,12.83594);
   hnumuCCinFV_stack_12->SetBinContent(22,11.09711);
   hnumuCCinFV_stack_12->SetBinContent(23,9.442618);
   hnumuCCinFV_stack_12->SetBinContent(24,8.642933);
   hnumuCCinFV_stack_12->SetBinContent(25,3.284146);
   hnumuCCinFV_stack_12->SetBinContent(26,37.05951);
   hnumuCCinFV_stack_12->SetBinError(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.2781981);
   hnumuCCinFV_stack_12->SetBinError(3,1.751333);
   hnumuCCinFV_stack_12->SetBinError(4,2.448028);
   hnumuCCinFV_stack_12->SetBinError(5,4.138035);
   hnumuCCinFV_stack_12->SetBinError(6,3.562546);
   hnumuCCinFV_stack_12->SetBinError(7,4.031429);
   hnumuCCinFV_stack_12->SetBinError(8,4.122829);
   hnumuCCinFV_stack_12->SetBinError(9,4.210179);
   hnumuCCinFV_stack_12->SetBinError(10,5.69924);
   hnumuCCinFV_stack_12->SetBinError(11,3.543797);
   hnumuCCinFV_stack_12->SetBinError(12,3.790973);
   hnumuCCinFV_stack_12->SetBinError(13,3.502766);
   hnumuCCinFV_stack_12->SetBinError(14,3.216967);
   hnumuCCinFV_stack_12->SetBinError(15,2.937809);
   hnumuCCinFV_stack_12->SetBinError(16,2.805188);
   hnumuCCinFV_stack_12->SetBinError(17,3.071083);
   hnumuCCinFV_stack_12->SetBinError(18,2.184205);
   hnumuCCinFV_stack_12->SetBinError(19,2.295579);
   hnumuCCinFV_stack_12->SetBinError(20,1.840931);
   hnumuCCinFV_stack_12->SetBinError(21,1.827451);
   hnumuCCinFV_stack_12->SetBinError(22,1.677727);
   hnumuCCinFV_stack_12->SetBinError(23,1.606659);
   hnumuCCinFV_stack_12->SetBinError(24,1.494567);
   hnumuCCinFV_stack_12->SetBinError(25,0.832782);
   hnumuCCinFV_stack_12->SetBinError(26,3.054727);
   hnumuCCinFV_stack_12->SetEntries(3028);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.6167127);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.4647934);
   hnueCCinFV_stack_13->SetBinContent(16,1.072095);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,1.270501);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.4646023);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.3325098);
   hnueCCinFV_stack_13->SetBinError(16,0.5551335);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.5197486);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.5895188);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__26->SetBinContent(0,0.3401776);
   hmcerror__26->SetBinContent(2,0.718394);
   hmcerror__26->SetBinContent(3,14.90208);
   hmcerror__26->SetBinContent(4,71.27441);
   hmcerror__26->SetBinContent(5,166.8825);
   hmcerror__26->SetBinContent(6,254.1459);
   hmcerror__26->SetBinContent(7,293.8073);
   hmcerror__26->SetBinContent(8,300.4493);
   hmcerror__26->SetBinContent(9,295.3029);
   hmcerror__26->SetBinContent(10,269.7656);
   hmcerror__26->SetBinContent(11,220.5356);
   hmcerror__26->SetBinContent(12,188.3274);
   hmcerror__26->SetBinContent(13,169.2864);
   hmcerror__26->SetBinContent(14,146.7229);
   hmcerror__26->SetBinContent(15,112.8349);
   hmcerror__26->SetBinContent(16,93.34476);
   hmcerror__26->SetBinContent(17,88.25974);
   hmcerror__26->SetBinContent(18,61.99128);
   hmcerror__26->SetBinContent(19,51.15136);
   hmcerror__26->SetBinContent(20,41.10276);
   hmcerror__26->SetBinContent(21,30.79945);
   hmcerror__26->SetBinContent(22,34.89248);
   hmcerror__26->SetBinContent(23,22.56326);
   hmcerror__26->SetBinContent(24,19.10546);
   hmcerror__26->SetBinContent(25,12.23704);
   hmcerror__26->SetBinContent(26,97.05998);
   hmcerror__26->SetBinError(0,0.3401776);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,0.5974529);
   hmcerror__26->SetBinError(3,4.720772);
   hmcerror__26->SetBinError(4,18.19413);
   hmcerror__26->SetBinError(5,43.37156);
   hmcerror__26->SetBinError(6,64.55126);
   hmcerror__26->SetBinError(7,80.89229);
   hmcerror__26->SetBinError(8,84.82065);
   hmcerror__26->SetBinError(9,77.0417);
   hmcerror__26->SetBinError(10,71.40037);
   hmcerror__26->SetBinError(11,59.22905);
   hmcerror__26->SetBinError(12,47.80813);
   hmcerror__26->SetBinError(13,43.90246);
   hmcerror__26->SetBinError(14,36.19502);
   hmcerror__26->SetBinError(15,28.3465);
   hmcerror__26->SetBinError(16,23.35417);
   hmcerror__26->SetBinError(17,21.57183);
   hmcerror__26->SetBinError(18,16.049);
   hmcerror__26->SetBinError(19,13.59171);
   hmcerror__26->SetBinError(20,10.83205);
   hmcerror__26->SetBinError(21,7.644766);
   hmcerror__26->SetBinError(22,8.462043);
   hmcerror__26->SetBinError(23,5.583751);
   hmcerror__26->SetBinError(24,4.5514);
   hmcerror__26->SetBinError(25,3.665458);
   hmcerror__26->SetBinError(26,16.43878);
   hmcerror__26->SetEntries(3023.689);

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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3033[25] = {
   0,
   2,
   16,
   93,
   165,
   259,
   278,
   288,
   253,
   214,
   183,
   164,
   142,
   112,
   86,
   77,
   58,
   60,
   37,
   33,
   26,
   18,
   12,
   15,
   6};
   Double_t _felx3033[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3033[25] = {
   0,
   2,
   4.1628,
   9.7658,
   12.84523,
   16.09348,
   16.67333,
   16.97056,
   15.90597,
   14.62874,
   13.52775,
   12.80625,
   11.91638,
   10.58301,
   9.3967,
   8.8995,
   7.7446,
   7.8743,
   6.2203,
   5.8847,
   5.2453,
   4.4008,
   3.64022,
   4.0385,
   2.67925};
   Double_t _fehx3033[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3033[25] = {
   1.1478,
   1.51917,
   3.9454,
   9.564,
   12.84523,
   16.09348,
   16.67333,
   16.97056,
   15.90597,
   14.62874,
   13.52775,
   12.80625,
   11.91638,
   10.58301,
   9.1951,
   8.6976,
   7.5415,
   7.6713,
   6.0141,
   5.6776,
   5.0358,
   4.1858,
   3.4155,
   3.8197,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1980);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(335.4676);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2597.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 27.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  23.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2086.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 697.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3034[25] = {
   0,
   0.8316508,
   0.316786,
   0.2552688,
   0.2598929,
   0.2539929,
   0.2753243,
   0.2823127,
   0.2608904,
   0.2646756,
   0.2685691,
   0.2538565,
   0.2593384,
   0.2466896,
   0.251221,
   0.2501926,
   0.2444131,
   0.2588913,
   0.2657156,
   0.2635359,
   0.2482111,
   0.2425176,
   0.247471,
   0.2382251,
   0.299538};
   Double_t _fehx3034[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3034[25] = {
   0,
   0.8316508,
   0.316786,
   0.2552688,
   0.2598929,
   0.2539929,
   0.2753243,
   0.2823127,
   0.2608904,
   0.2646756,
   0.2685691,
   0.2538565,
   0.2593384,
   0.2466896,
   0.251221,
   0.2501926,
   0.2444131,
   0.2588913,
   0.2657156,
   0.2635359,
   0.2482111,
   0.2425176,
   0.247471,
   0.2382251,
   0.299538};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1980);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3035[25] = {
   0,
   0.8316508,
   0.316786,
   0.2552688,
   0.2598929,
   0.2539929,
   0.2753243,
   0.2823127,
   0.2608904,
   0.2646756,
   0.2685691,
   0.2538565,
   0.2593384,
   0.2466896,
   0.251221,
   0.2501926,
   0.2444131,
   0.2588913,
   0.2657156,
   0.2635359,
   0.2482111,
   0.2425176,
   0.247471,
   0.2382251,
   0.299538};
   Double_t _fehx3035[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3035[25] = {
   0,
   0.8316508,
   0.316786,
   0.2552688,
   0.2598929,
   0.2539929,
   0.2753243,
   0.2823127,
   0.2608904,
   0.2646756,
   0.2685691,
   0.2538565,
   0.2593384,
   0.2466896,
   0.251221,
   0.2501926,
   0.2444131,
   0.2588913,
   0.2657156,
   0.2635359,
   0.2482111,
   0.2425176,
   0.247471,
   0.2382251,
   0.299538};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1980);
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3036[25] = {
   10,
   2.783988,
   1.073675,
   1.304816,
   0.9887198,
   1.0191,
   0.9461985,
   0.9585643,
   0.8567473,
   0.7932813,
   0.8297981,
   0.870824,
   0.8388152,
   0.7633435,
   0.7621753,
   0.824899,
   0.6571513,
   0.9678781,
   0.7233435,
   0.8028658,
   0.8441709,
   0.5158704,
   0.5318381,
   0.7851158,
   0.4903147};
   Double_t _felx3036[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3036[25] = {
   0,
   2.783988,
   0.2793435,
   0.1370169,
   0.07697173,
   0.06332377,
   0.05674921,
   0.05648394,
   0.05386324,
   0.05422759,
   0.06134044,
   0.06799993,
   0.07039181,
   0.07212918,
   0.08327828,
   0.09534011,
   0.08774783,
   0.1270227,
   0.1216058,
   0.1431704,
   0.170305,
   0.1261246,
   0.161334,
   0.2113794,
   0.218946};
   Double_t _fehx3036[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3036[25] = {
   0,
   2.114675,
   0.2647549,
   0.1341856,
   0.07697173,
   0.06332377,
   0.05674921,
   0.05648394,
   0.05386324,
   0.05422759,
   0.06134044,
   0.06799993,
   0.07039181,
   0.07212918,
   0.0814916,
   0.09317716,
   0.08544666,
   0.1237481,
   0.1175746,
   0.1381318,
   0.1635029,
   0.1199628,
   0.1513744,
   0.1999271,
   0.1976442};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1980);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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

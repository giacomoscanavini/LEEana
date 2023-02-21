#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 21:57:10 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
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
   pad1->Range(-7.692308,-1.812352,56.41026,200.408);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__25->SetBinContent(1,90.6176);
   hmc__25->SetBinContent(2,33.06407);
   hmc__25->SetBinContent(3,37.36946);
   hmc__25->SetBinContent(4,37.17908);
   hmc__25->SetBinContent(5,31.2525);
   hmc__25->SetBinContent(6,26.72455);
   hmc__25->SetBinContent(7,27.16788);
   hmc__25->SetBinContent(8,27.12213);
   hmc__25->SetBinContent(9,24.90844);
   hmc__25->SetBinContent(10,27.08414);
   hmc__25->SetBinContent(11,23.07958);
   hmc__25->SetBinContent(12,21.34978);
   hmc__25->SetBinContent(13,19.33163);
   hmc__25->SetBinContent(14,17.04565);
   hmc__25->SetBinContent(15,13.48846);
   hmc__25->SetBinContent(16,11.88548);
   hmc__25->SetBinContent(17,19.15368);
   hmc__25->SetBinContent(18,9.771287);
   hmc__25->SetBinContent(19,12.70757);
   hmc__25->SetBinContent(20,12.7499);
   hmc__25->SetBinContent(21,137.5363);
   hmc__25->SetBinError(1,33.37871);
   hmc__25->SetBinError(2,18.41759);
   hmc__25->SetBinError(3,20.59096);
   hmc__25->SetBinError(4,15.55254);
   hmc__25->SetBinError(5,15.10547);
   hmc__25->SetBinError(6,12.42291);
   hmc__25->SetBinError(7,12.7791);
   hmc__25->SetBinError(8,13.99264);
   hmc__25->SetBinError(9,10.42254);
   hmc__25->SetBinError(10,12.18422);
   hmc__25->SetBinError(11,19.50265);
   hmc__25->SetBinError(12,19.87346);
   hmc__25->SetBinError(13,9.970371);
   hmc__25->SetBinError(14,18.63752);
   hmc__25->SetBinError(15,7.085597);
   hmc__25->SetBinError(16,8.016376);
   hmc__25->SetBinError(17,10.21478);
   hmc__25->SetBinError(18,6.911699);
   hmc__25->SetBinError(19,8.784103);
   hmc__25->SetBinError(20,8.250416);
   hmc__25->SetBinError(21,36.56492);
   hmc__25->SetMinimum(-1.812352);
   hmc__25->SetMaximum(190.297);
   hmc__25->SetEntries(704.9513);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,50);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(95.14849);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,2.636262);
   hbadmatch_stack_1->SetBinContent(2,0.7816361);
   hbadmatch_stack_1->SetBinContent(3,1.663476);
   hbadmatch_stack_1->SetBinContent(4,1.133774);
   hbadmatch_stack_1->SetBinContent(5,0.4189704);
   hbadmatch_stack_1->SetBinContent(6,0.8712258);
   hbadmatch_stack_1->SetBinContent(7,0.7851236);
   hbadmatch_stack_1->SetBinContent(9,0.9484212);
   hbadmatch_stack_1->SetBinContent(10,1.542387);
   hbadmatch_stack_1->SetBinContent(12,0.323776);
   hbadmatch_stack_1->SetBinContent(13,0.4314405);
   hbadmatch_stack_1->SetBinContent(14,0.9441714);
   hbadmatch_stack_1->SetBinContent(16,0.08619046);
   hbadmatch_stack_1->SetBinContent(17,0.9509078);
   hbadmatch_stack_1->SetBinContent(18,0.7470089);
   hbadmatch_stack_1->SetBinContent(19,0.4578955);
   hbadmatch_stack_1->SetBinContent(21,6.321912);
   hbadmatch_stack_1->SetBinError(1,0.9276426);
   hbadmatch_stack_1->SetBinError(2,0.3892619);
   hbadmatch_stack_1->SetBinError(3,0.6230685);
   hbadmatch_stack_1->SetBinError(4,0.5324622);
   hbadmatch_stack_1->SetBinError(5,0.2968067);
   hbadmatch_stack_1->SetBinError(6,0.4043511);
   hbadmatch_stack_1->SetBinError(7,0.4635258);
   hbadmatch_stack_1->SetBinError(9,0.4687528);
   hbadmatch_stack_1->SetBinError(10,0.5760023);
   hbadmatch_stack_1->SetBinError(12,0.2336911);
   hbadmatch_stack_1->SetBinError(13,0.3064752);
   hbadmatch_stack_1->SetBinError(14,0.4276408);
   hbadmatch_stack_1->SetBinError(16,0.08619046);
   hbadmatch_stack_1->SetBinError(17,0.5245767);
   hbadmatch_stack_1->SetBinError(18,0.584397);
   hbadmatch_stack_1->SetBinError(19,0.2698389);
   hbadmatch_stack_1->SetBinError(21,1.328992);
   hbadmatch_stack_1->SetEntries(97);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,16.90822);
   hext_stack_2->SetBinContent(2,3.704052);
   hext_stack_2->SetBinContent(3,3.297453);
   hext_stack_2->SetBinContent(4,2.663019);
   hext_stack_2->SetBinContent(5,2.028585);
   hext_stack_2->SetBinContent(6,1.78639);
   hext_stack_2->SetBinContent(7,1.379791);
   hext_stack_2->SetBinContent(8,1.697008);
   hext_stack_2->SetBinContent(9,3.076798);
   hext_stack_2->SetBinContent(10,4.028449);
   hext_stack_2->SetBinContent(11,3.654981);
   hext_stack_2->SetBinContent(12,1.454812);
   hext_stack_2->SetBinContent(13,4.677244);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,3.539649);
   hext_stack_2->SetBinContent(16,0.8131978);
   hext_stack_2->SetBinContent(17,3.62185);
   hext_stack_2->SetBinContent(18,1.37261);
   hext_stack_2->SetBinContent(19,1.626396);
   hext_stack_2->SetBinContent(20,3.704052);
   hext_stack_2->SetBinContent(21,21.32733);
   hext_stack_2->SetBinError(1,3.057626);
   hext_stack_2->SetBinError(2,1.443106);
   hext_stack_2->SetBinError(3,1.384641);
   hext_stack_2->SetBinError(4,1.142086);
   hext_stack_2->SetBinError(5,0.8315593);
   hext_stack_2->SetBinError(6,0.8039566);
   hext_stack_2->SetBinError(7,0.6935586);
   hext_stack_2->SetBinError(8,0.8873887);
   hext_stack_2->SetBinError(9,1.126269);
   hext_stack_2->SetBinError(10,1.479117);
   hext_stack_2->SetBinError(11,1.163091);
   hext_stack_2->SetBinError(12,0.8615765);
   hext_stack_2->SetBinError(13,1.54863);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,1.400848);
   hext_stack_2->SetBinError(16,0.5750177);
   hext_stack_2->SetBinError(17,1.422134);
   hext_stack_2->SetBinError(18,0.8259691);
   hext_stack_2->SetBinError(19,0.8131978);
   hext_stack_2->SetBinError(20,1.443106);
   hext_stack_2->SetBinError(21,3.209787);
   hext_stack_2->SetEntries(193);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,1.0052);
   hdirt_stack_3->SetBinContent(2,0.2628198);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(5,0.585362);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(21,1.005443);
   hdirt_stack_3->SetBinError(1,0.5216239);
   hdirt_stack_3->SetBinError(2,0.2628198);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(5,0.4565478);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(21,0.5891933);
   hdirt_stack_3->SetEntries(19);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,17.67176);
   houtFV_stack_4->SetBinContent(2,5.190784);
   houtFV_stack_4->SetBinContent(3,5.59714);
   houtFV_stack_4->SetBinContent(4,4.988998);
   houtFV_stack_4->SetBinContent(5,4.428671);
   houtFV_stack_4->SetBinContent(6,3.87328);
   houtFV_stack_4->SetBinContent(7,5.466066);
   houtFV_stack_4->SetBinContent(8,4.075156);
   houtFV_stack_4->SetBinContent(9,4.913691);
   houtFV_stack_4->SetBinContent(10,3.173606);
   houtFV_stack_4->SetBinContent(11,4.20035);
   houtFV_stack_4->SetBinContent(12,6.00959);
   houtFV_stack_4->SetBinContent(13,3.337157);
   houtFV_stack_4->SetBinContent(14,2.293792);
   houtFV_stack_4->SetBinContent(15,2.224114);
   houtFV_stack_4->SetBinContent(16,3.061087);
   houtFV_stack_4->SetBinContent(17,3.864293);
   houtFV_stack_4->SetBinContent(18,1.400133);
   houtFV_stack_4->SetBinContent(19,3.927959);
   houtFV_stack_4->SetBinContent(20,2.11998);
   houtFV_stack_4->SetBinContent(21,24.42966);
   houtFV_stack_4->SetBinError(1,2.093719);
   houtFV_stack_4->SetBinError(2,1.098967);
   houtFV_stack_4->SetBinError(3,1.146745);
   houtFV_stack_4->SetBinError(4,1.300674);
   houtFV_stack_4->SetBinError(5,0.9925248);
   houtFV_stack_4->SetBinError(6,0.9377411);
   houtFV_stack_4->SetBinError(7,1.383654);
   houtFV_stack_4->SetBinError(8,0.960424);
   houtFV_stack_4->SetBinError(9,1.067935);
   houtFV_stack_4->SetBinError(10,0.831208);
   houtFV_stack_4->SetBinError(11,1.10388);
   houtFV_stack_4->SetBinError(12,1.341138);
   houtFV_stack_4->SetBinError(13,1.041811);
   houtFV_stack_4->SetBinError(14,0.7995);
   houtFV_stack_4->SetBinError(15,0.7190137);
   houtFV_stack_4->SetBinError(16,0.8772387);
   houtFV_stack_4->SetBinError(17,1.076477);
   houtFV_stack_4->SetBinError(18,0.5297972);
   houtFV_stack_4->SetBinError(19,1.006074);
   houtFV_stack_4->SetBinError(20,0.7417909);
   houtFV_stack_4->SetBinError(21,2.517004);
   houtFV_stack_4->SetEntries(520);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2318218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2196091);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3173344);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1988199);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1969532);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1843019);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1635575);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1299747);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03762904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03762904);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05495516);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.07222776);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1123118);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06939814);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02660775);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02660775);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03172866);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.0339708);
   hNCpi0inFVqe_stack_6->SetEntries(33);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.928098);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.040026);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.898587);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.217131);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.11474);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.757961);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.919867);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.948063);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.464148);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.781029);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.524632);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.530408);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.015683);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.945721);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.658894);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.926481);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.028287);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.325453);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.426423);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.641164);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.43757);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8816012);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6910509);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9281044);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7759135);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6588752);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6102444);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7663548);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7767858);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7631994);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6606836);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4844112);
   hNCpi0inFVres_stack_7->SetBinError(12,0.604194);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4764336);
   hNCpi0inFVres_stack_7->SetBinError(14,0.473009);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5963141);
   hNCpi0inFVres_stack_7->SetBinError(16,0.343094);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3718907);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2678333);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3197277);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3546308);
   hNCpi0inFVres_stack_7->SetBinError(21,1.27331);
   hNCpi0inFVres_stack_7->SetEntries(2792);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.628601);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.082152);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.164243);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.456868);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.990191);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.881262);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9796407);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.135274);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.583393);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.820775);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8719145);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.320322);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4853151);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.046122);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.516633);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5546039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6391717);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5242703);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.7100462);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3424237);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.147855);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4908986);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5310582);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6156586);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3104137);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5593198);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6893085);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.197759);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5738816);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4371005);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5004898);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2452989);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.77293);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1434454);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3213354);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7157955);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1668583);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2002527);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.179577);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5040413);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1846995);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.057809);
   hNCpi0inFVdis_stack_8->SetEntries(645);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,14.80715);
   hCCpi0inFV_stack_10->SetBinContent(2,6.654045);
   hCCpi0inFV_stack_10->SetBinContent(3,8.760703);
   hCCpi0inFV_stack_10->SetBinContent(4,10.81122);
   hCCpi0inFV_stack_10->SetBinContent(5,7.673684);
   hCCpi0inFV_stack_10->SetBinContent(6,7.295517);
   hCCpi0inFV_stack_10->SetBinContent(7,6.647276);
   hCCpi0inFV_stack_10->SetBinContent(8,7.635344);
   hCCpi0inFV_stack_10->SetBinContent(9,3.821039);
   hCCpi0inFV_stack_10->SetBinContent(10,7.386808);
   hCCpi0inFV_stack_10->SetBinContent(11,5.466984);
   hCCpi0inFV_stack_10->SetBinContent(12,4.678399);
   hCCpi0inFV_stack_10->SetBinContent(13,2.653809);
   hCCpi0inFV_stack_10->SetBinContent(14,5.413457);
   hCCpi0inFV_stack_10->SetBinContent(15,1.568651);
   hCCpi0inFV_stack_10->SetBinContent(16,2.782649);
   hCCpi0inFV_stack_10->SetBinContent(17,3.274098);
   hCCpi0inFV_stack_10->SetBinContent(18,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(19,1.997348);
   hCCpi0inFV_stack_10->SetBinContent(20,1.236993);
   hCCpi0inFV_stack_10->SetBinContent(21,20.56248);
   hCCpi0inFV_stack_10->SetBinError(1,1.950187);
   hCCpi0inFV_stack_10->SetBinError(2,1.334904);
   hCCpi0inFV_stack_10->SetBinError(3,1.490786);
   hCCpi0inFV_stack_10->SetBinError(4,1.648397);
   hCCpi0inFV_stack_10->SetBinError(5,1.433317);
   hCCpi0inFV_stack_10->SetBinError(6,1.373906);
   hCCpi0inFV_stack_10->SetBinError(7,1.302457);
   hCCpi0inFV_stack_10->SetBinError(8,1.447052);
   hCCpi0inFV_stack_10->SetBinError(9,0.9208385);
   hCCpi0inFV_stack_10->SetBinError(10,1.348003);
   hCCpi0inFV_stack_10->SetBinError(11,1.210046);
   hCCpi0inFV_stack_10->SetBinError(12,1.075134);
   hCCpi0inFV_stack_10->SetBinError(13,0.8258628);
   hCCpi0inFV_stack_10->SetBinError(14,1.194608);
   hCCpi0inFV_stack_10->SetBinError(15,0.5546069);
   hCCpi0inFV_stack_10->SetBinError(16,0.7445045);
   hCCpi0inFV_stack_10->SetBinError(17,0.9838091);
   hCCpi0inFV_stack_10->SetBinError(18,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(19,0.7334836);
   hCCpi0inFV_stack_10->SetBinError(20,0.5078406);
   hCCpi0inFV_stack_10->SetBinError(21,2.237142);
   hCCpi0inFV_stack_10->SetEntries(564);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,1.59038);
   hNCinFV_stack_11->SetBinContent(2,1.880908);
   hNCinFV_stack_11->SetBinContent(3,1.844587);
   hNCinFV_stack_11->SetBinContent(4,2.241562);
   hNCinFV_stack_11->SetBinContent(5,2.837523);
   hNCinFV_stack_11->SetBinContent(6,2.333579);
   hNCinFV_stack_11->SetBinContent(7,1.506943);
   hNCinFV_stack_11->SetBinContent(8,1.811697);
   hNCinFV_stack_11->SetBinContent(9,1.25989);
   hNCinFV_stack_11->SetBinContent(10,1.215864);
   hNCinFV_stack_11->SetBinContent(11,2.761139);
   hNCinFV_stack_11->SetBinContent(12,1.040895);
   hNCinFV_stack_11->SetBinContent(13,1.282447);
   hNCinFV_stack_11->SetBinContent(14,0.2522188);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.9033966);
   hNCinFV_stack_11->SetBinContent(17,0.5810992);
   hNCinFV_stack_11->SetBinContent(18,0.9220121);
   hNCinFV_stack_11->SetBinContent(19,0.3178158);
   hNCinFV_stack_11->SetBinContent(20,0.656303);
   hNCinFV_stack_11->SetBinContent(21,8.005511);
   hNCinFV_stack_11->SetBinError(1,0.6234701);
   hNCinFV_stack_11->SetBinError(2,0.6670789);
   hNCinFV_stack_11->SetBinError(3,0.7017328);
   hNCinFV_stack_11->SetBinError(4,0.756907);
   hNCinFV_stack_11->SetBinError(5,0.8044946);
   hNCinFV_stack_11->SetBinError(6,0.7373132);
   hNCinFV_stack_11->SetBinError(7,0.6951692);
   hNCinFV_stack_11->SetBinError(8,0.8062619);
   hNCinFV_stack_11->SetBinError(9,0.778654);
   hNCinFV_stack_11->SetBinError(10,0.5597721);
   hNCinFV_stack_11->SetBinError(11,1.166556);
   hNCinFV_stack_11->SetBinError(12,0.4954746);
   hNCinFV_stack_11->SetBinError(13,0.532365);
   hNCinFV_stack_11->SetBinError(14,0.1783783);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.4096866);
   hNCinFV_stack_11->SetBinError(17,0.3804778);
   hNCinFV_stack_11->SetBinError(18,0.4862477);
   hNCinFV_stack_11->SetBinError(19,0.2310027);
   hNCinFV_stack_11->SetBinError(20,0.4103911);
   hNCinFV_stack_11->SetBinError(21,1.63262);
   hNCinFV_stack_11->SetEntries(158);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,25.04655);
   hnumuCCinFV_stack_12->SetBinContent(2,5.306809);
   hnumuCCinFV_stack_12->SetBinContent(3,5.093537);
   hnumuCCinFV_stack_12->SetBinContent(4,6.233364);
   hnumuCCinFV_stack_12->SetBinContent(5,5.137145);
   hnumuCCinFV_stack_12->SetBinContent(6,2.74615);
   hnumuCCinFV_stack_12->SetBinContent(7,4.204141);
   hnumuCCinFV_stack_12->SetBinContent(8,3.774374);
   hnumuCCinFV_stack_12->SetBinContent(9,3.445924);
   hnumuCCinFV_stack_12->SetBinContent(10,2.527328);
   hnumuCCinFV_stack_12->SetBinContent(11,2.37994);
   hnumuCCinFV_stack_12->SetBinContent(12,1.559476);
   hnumuCCinFV_stack_12->SetBinContent(13,3.384284);
   hnumuCCinFV_stack_12->SetBinContent(14,1.465526);
   hnumuCCinFV_stack_12->SetBinContent(15,1.347186);
   hnumuCCinFV_stack_12->SetBinContent(16,1.72997);
   hnumuCCinFV_stack_12->SetBinContent(17,4.055905);
   hnumuCCinFV_stack_12->SetBinContent(18,2.100952);
   hnumuCCinFV_stack_12->SetBinContent(19,2.024795);
   hnumuCCinFV_stack_12->SetBinContent(20,2.700199);
   hnumuCCinFV_stack_12->SetBinContent(21,30.05514);
   hnumuCCinFV_stack_12->SetBinError(1,3.069544);
   hnumuCCinFV_stack_12->SetBinError(2,1.228354);
   hnumuCCinFV_stack_12->SetBinError(3,1.177876);
   hnumuCCinFV_stack_12->SetBinError(4,1.256823);
   hnumuCCinFV_stack_12->SetBinError(5,1.434753);
   hnumuCCinFV_stack_12->SetBinError(6,0.8130343);
   hnumuCCinFV_stack_12->SetBinError(7,1.233992);
   hnumuCCinFV_stack_12->SetBinError(8,1.009885);
   hnumuCCinFV_stack_12->SetBinError(9,1.103233);
   hnumuCCinFV_stack_12->SetBinError(10,0.8629591);
   hnumuCCinFV_stack_12->SetBinError(11,0.784696);
   hnumuCCinFV_stack_12->SetBinError(12,0.6535876);
   hnumuCCinFV_stack_12->SetBinError(13,1.008425);
   hnumuCCinFV_stack_12->SetBinError(14,0.6209405);
   hnumuCCinFV_stack_12->SetBinError(15,0.5648525);
   hnumuCCinFV_stack_12->SetBinError(16,0.7381251);
   hnumuCCinFV_stack_12->SetBinError(17,1.130576);
   hnumuCCinFV_stack_12->SetBinError(18,0.7752351);
   hnumuCCinFV_stack_12->SetBinError(19,0.7319543);
   hnumuCCinFV_stack_12->SetBinError(20,1.275301);
   hnumuCCinFV_stack_12->SetBinError(21,3.197299);
   hnumuCCinFV_stack_12->SetEntries(444);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,4.853817);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.2502081);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2655531);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.103622);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__26->SetBinContent(1,90.6176);
   hmcerror__26->SetBinContent(2,33.06407);
   hmcerror__26->SetBinContent(3,37.36946);
   hmcerror__26->SetBinContent(4,37.17908);
   hmcerror__26->SetBinContent(5,31.2525);
   hmcerror__26->SetBinContent(6,26.72455);
   hmcerror__26->SetBinContent(7,27.16788);
   hmcerror__26->SetBinContent(8,27.12213);
   hmcerror__26->SetBinContent(9,24.90844);
   hmcerror__26->SetBinContent(10,27.08414);
   hmcerror__26->SetBinContent(11,23.07958);
   hmcerror__26->SetBinContent(12,21.34978);
   hmcerror__26->SetBinContent(13,19.33163);
   hmcerror__26->SetBinContent(14,17.04565);
   hmcerror__26->SetBinContent(15,13.48846);
   hmcerror__26->SetBinContent(16,11.88548);
   hmcerror__26->SetBinContent(17,19.15368);
   hmcerror__26->SetBinContent(18,9.771287);
   hmcerror__26->SetBinContent(19,12.70757);
   hmcerror__26->SetBinContent(20,12.7499);
   hmcerror__26->SetBinContent(21,137.5363);
   hmcerror__26->SetBinError(1,33.37871);
   hmcerror__26->SetBinError(2,18.41759);
   hmcerror__26->SetBinError(3,20.59096);
   hmcerror__26->SetBinError(4,15.55254);
   hmcerror__26->SetBinError(5,15.10547);
   hmcerror__26->SetBinError(6,12.42291);
   hmcerror__26->SetBinError(7,12.7791);
   hmcerror__26->SetBinError(8,13.99264);
   hmcerror__26->SetBinError(9,10.42254);
   hmcerror__26->SetBinError(10,12.18422);
   hmcerror__26->SetBinError(11,19.50265);
   hmcerror__26->SetBinError(12,19.87346);
   hmcerror__26->SetBinError(13,9.970371);
   hmcerror__26->SetBinError(14,18.63752);
   hmcerror__26->SetBinError(15,7.085597);
   hmcerror__26->SetBinError(16,8.016376);
   hmcerror__26->SetBinError(17,10.21478);
   hmcerror__26->SetBinError(18,6.911699);
   hmcerror__26->SetBinError(19,8.784103);
   hmcerror__26->SetBinError(20,8.250416);
   hmcerror__26->SetBinError(21,36.56492);
   hmcerror__26->SetEntries(704.9513);

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
   
   Double_t _fx3033[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3033[20] = {
   78,
   27,
   38,
   35,
   27,
   30,
   34,
   22,
   24,
   25,
   22,
   17,
   12,
   14,
   15,
   10,
   10,
   11,
   11,
   8};
   Double_t _felx3033[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3033[20] = {
   8.9562,
   5.3414,
   6.3013,
   6.0548,
   5.3414,
   5.6197,
   5.9703,
   4.8417,
   5.0476,
   5.1474,
   4.8417,
   4.2835,
   3.64022,
   3.9102,
   4.0385,
   3.34883,
   3.34883,
   3.4975,
   3.4975,
   3.0307};
   Double_t _fehx3033[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3033[20] = {
   8.7542,
   5.1322,
   6.0955,
   5.8483,
   5.1322,
   5.4117,
   5.7635,
   4.6299,
   4.837,
   4.9374,
   4.6299,
   4.0673,
   3.4155,
   3.6898,
   3.8197,
   3.1179,
   3.1179,
   3.27,
   3.27,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,55);
   Graph_Graph3033->SetMinimum(4.47237);
   Graph_Graph3033->SetMaximum(94.93269);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 14.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 67.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 91.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  89.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  27.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 111.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3034[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3034[20] = {
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
   Double_t _felx3034[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3034[20] = {
   0.3683468,
   0.5570272,
   0.5510103,
   0.4183142,
   0.4833362,
   0.4648502,
   0.4703752,
   0.5159121,
   0.418434,
   0.4498655,
   0.8450176,
   0.9308508,
   0.5157542,
   1.093389,
   0.5253081,
   0.6744683,
   0.5333065,
   0.7073478,
   0.6912494,
   0.6470965};
   Double_t _fehx3034[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3034[20] = {
   0.3683468,
   0.5570272,
   0.5510103,
   0.4183142,
   0.4833362,
   0.4648502,
   0.4703752,
   0.5159121,
   0.418434,
   0.4498655,
   0.8450176,
   0.9308508,
   0.5157542,
   1.093389,
   0.5253081,
   0.6744683,
   0.5333065,
   0.7073478,
   0.6912494,
   0.6470965};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,55);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3035[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3035[20] = {
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
   Double_t _felx3035[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3035[20] = {
   0.1941889,
   0.3418292,
   0.3059695,
   0.3049022,
   0.3356796,
   0.3329962,
   0.3312117,
   0.2850917,
   0.2924582,
   0.3060319,
   0.2864117,
   0.269906,
   0.2779485,
   0.2795698,
   0.2701945,
   0.2953187,
   0.2336303,
   0.3031631,
   0.2728688,
   0.2688556};
   Double_t _fehx3035[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3035[20] = {
   0.1941889,
   0.3418292,
   0.3059695,
   0.3049022,
   0.3356796,
   0.3329962,
   0.3312117,
   0.2850917,
   0.2924582,
   0.3060319,
   0.2864117,
   0.269906,
   0.2779485,
   0.2795698,
   0.2701945,
   0.2953187,
   0.2336303,
   0.3031631,
   0.2728688,
   0.2688556};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,55);
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
   
   Double_t _fx3036[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3036[20] = {
   0.8607599,
   0.8165963,
   1.016873,
   0.9413896,
   0.8639309,
   1.122563,
   1.251478,
   0.8111457,
   0.9635289,
   0.9230496,
   0.9532237,
   0.7962611,
   0.6207442,
   0.8213241,
   1.112062,
   0.8413631,
   0.5220928,
   1.125747,
   0.8656254,
   0.6274559};
   Double_t _felx3036[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3036[20] = {
   0.09883511,
   0.161547,
   0.1686216,
   0.162855,
   0.1709111,
   0.2102823,
   0.2197559,
   0.1785147,
   0.2026462,
   0.1900522,
   0.2097829,
   0.2006344,
   0.1883038,
   0.2293958,
   0.2994041,
   0.2817582,
   0.17484,
   0.3579365,
   0.2752295,
   0.2377038};
   Double_t _fehx3036[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3036[20] = {
   0.09660596,
   0.1552198,
   0.1631145,
   0.1573008,
   0.1642173,
   0.2024992,
   0.2121439,
   0.1707056,
   0.1941912,
   0.1822986,
   0.2006059,
   0.1905078,
   0.1766793,
   0.2164658,
   0.2831828,
   0.2623286,
   0.1627833,
   0.334654,
   0.2573268,
   0.2187939};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,55);
   Graph_Graph3036->SetMinimum(0.2356159);
   Graph_Graph3036->SetMaximum(1.575259);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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

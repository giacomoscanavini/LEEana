#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 15:23:26 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-61.53846,-12.63629,451.2821,1397.307);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__19->SetBinContent(1,430.3251);
   hmc__19->SetBinContent(2,631.8143);
   hmc__19->SetBinContent(3,584.7646);
   hmc__19->SetBinContent(4,431.6566);
   hmc__19->SetBinContent(5,285.2375);
   hmc__19->SetBinContent(6,169.0232);
   hmc__19->SetBinContent(7,109.8025);
   hmc__19->SetBinContent(8,71.28831);
   hmc__19->SetBinContent(9,48.63434);
   hmc__19->SetBinContent(10,25.94837);
   hmc__19->SetBinContent(11,20.76477);
   hmc__19->SetBinContent(12,13.00387);
   hmc__19->SetBinContent(13,7.304896);
   hmc__19->SetBinContent(14,3.680987);
   hmc__19->SetBinContent(15,3.06124);
   hmc__19->SetBinContent(16,2.044888);
   hmc__19->SetBinContent(17,4.292916);
   hmc__19->SetBinError(1,116.3455);
   hmc__19->SetBinError(2,210.7109);
   hmc__19->SetBinError(3,207.6898);
   hmc__19->SetBinError(4,165.1607);
   hmc__19->SetBinError(5,117.1375);
   hmc__19->SetBinError(6,72.34089);
   hmc__19->SetBinError(7,45.59087);
   hmc__19->SetBinError(8,32.42929);
   hmc__19->SetBinError(9,27.61219);
   hmc__19->SetBinError(10,12.38463);
   hmc__19->SetBinError(11,13.18657);
   hmc__19->SetBinError(12,10.62077);
   hmc__19->SetBinError(13,5.898634);
   hmc__19->SetBinError(14,6.915609);
   hmc__19->SetBinError(15,4.677024);
   hmc__19->SetBinError(16,2.728495);
   hmc__19->SetBinError(17,4.701018);
   hmc__19->SetMinimum(-12.63629);
   hmc__19->SetMaximum(1326.81);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",16,0,400);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(663.4051);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,9.395252);
   hbadmatch_stack_1->SetBinContent(2,10.52626);
   hbadmatch_stack_1->SetBinContent(3,16.1905);
   hbadmatch_stack_1->SetBinContent(4,9.030066);
   hbadmatch_stack_1->SetBinContent(5,3.869007);
   hbadmatch_stack_1->SetBinContent(6,3.823843);
   hbadmatch_stack_1->SetBinContent(7,2.053982);
   hbadmatch_stack_1->SetBinContent(8,0.8770706);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.565386);
   hbadmatch_stack_1->SetBinError(2,1.673892);
   hbadmatch_stack_1->SetBinError(3,2.845255);
   hbadmatch_stack_1->SetBinError(4,1.848518);
   hbadmatch_stack_1->SetBinError(5,0.9676466);
   hbadmatch_stack_1->SetBinError(6,1.063618);
   hbadmatch_stack_1->SetBinError(7,0.7078105);
   hbadmatch_stack_1->SetBinError(8,0.5197486);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,41.80116);
   hext_stack_2->SetBinContent(2,48.53854);
   hext_stack_2->SetBinContent(3,41.37144);
   hext_stack_2->SetBinContent(4,27.19124);
   hext_stack_2->SetBinContent(5,13.43925);
   hext_stack_2->SetBinContent(6,5.572643);
   hext_stack_2->SetBinContent(7,5.326038);
   hext_stack_2->SetBinContent(8,2.021405);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,4.598445);
   hext_stack_2->SetBinError(2,4.66518);
   hext_stack_2->SetBinError(3,4.44771);
   hext_stack_2->SetBinError(4,3.723793);
   hext_stack_2->SetBinError(5,2.486454);
   hext_stack_2->SetBinError(6,1.670027);
   hext_stack_2->SetBinError(7,1.615154);
   hext_stack_2->SetBinError(8,0.9448239);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,2.906476);
   hdirt_stack_3->SetBinContent(2,3.425118);
   hdirt_stack_3->SetBinContent(3,3.119702);
   hdirt_stack_3->SetBinContent(4,1.02759);
   hdirt_stack_3->SetBinContent(5,0.4950385);
   hdirt_stack_3->SetBinContent(6,0.1446783);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinError(1,0.8494717);
   hdirt_stack_3->SetBinError(2,0.9353166);
   hdirt_stack_3->SetBinError(3,1.178697);
   hdirt_stack_3->SetBinError(4,0.5229813);
   hdirt_stack_3->SetBinError(5,0.2933304);
   hdirt_stack_3->SetBinError(6,0.1446783);
   hdirt_stack_3->SetBinError(7,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,22.01003);
   houtFV_stack_4->SetBinContent(2,22.00459);
   houtFV_stack_4->SetBinContent(3,18.74041);
   houtFV_stack_4->SetBinContent(4,13.9542);
   houtFV_stack_4->SetBinContent(5,8.222278);
   houtFV_stack_4->SetBinContent(6,2.353822);
   houtFV_stack_4->SetBinContent(7,3.036621);
   houtFV_stack_4->SetBinContent(8,2.105544);
   houtFV_stack_4->SetBinContent(9,0.536893);
   houtFV_stack_4->SetBinContent(10,1.322064);
   houtFV_stack_4->SetBinContent(11,0.5884556);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,2.406942);
   houtFV_stack_4->SetBinError(2,2.306409);
   houtFV_stack_4->SetBinError(3,2.172004);
   houtFV_stack_4->SetBinError(4,1.909755);
   houtFV_stack_4->SetBinError(5,1.402481);
   houtFV_stack_4->SetBinError(6,0.6794956);
   houtFV_stack_4->SetBinError(7,0.8696604);
   houtFV_stack_4->SetBinError(8,0.6797106);
   houtFV_stack_4->SetBinError(9,0.3929602);
   houtFV_stack_4->SetBinError(10,0.5554667);
   houtFV_stack_4->SetBinError(11,0.3397478);
   houtFV_stack_4->SetBinError(14,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9331579);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7526357);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.6397079);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.304249);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.185768);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2416228);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.728976);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.393606);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.224205);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.179616);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.325422);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4165616);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7052752);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.623452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5707629);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3768256);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,150.3934);
   hNCpi0inFVres_stack_7->SetBinContent(2,314.523);
   hNCpi0inFVres_stack_7->SetBinContent(3,296.3087);
   hNCpi0inFVres_stack_7->SetBinContent(4,216.6139);
   hNCpi0inFVres_stack_7->SetBinContent(5,133.8362);
   hNCpi0inFVres_stack_7->SetBinContent(6,79.56645);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.2691);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.09343);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.18947);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.01465);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.966472);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.028578);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.379726);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.185922);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.9771723);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6267538);
   hNCpi0inFVres_stack_7->SetBinError(1,3.949035);
   hNCpi0inFVres_stack_7->SetBinError(2,5.835433);
   hNCpi0inFVres_stack_7->SetBinError(3,5.612917);
   hNCpi0inFVres_stack_7->SetBinError(4,4.882889);
   hNCpi0inFVres_stack_7->SetBinError(5,3.835413);
   hNCpi0inFVres_stack_7->SetBinError(6,2.97665);
   hNCpi0inFVres_stack_7->SetBinError(7,2.238259);
   hNCpi0inFVres_stack_7->SetBinError(8,1.786324);
   hNCpi0inFVres_stack_7->SetBinError(9,1.469598);
   hNCpi0inFVres_stack_7->SetBinError(10,1.068104);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8052094);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6798927);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3711885);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3716255);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3978442);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1943021);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,29.93532);
   hNCpi0inFVdis_stack_8->SetBinContent(2,54.35287);
   hNCpi0inFVdis_stack_8->SetBinContent(3,49.31509);
   hNCpi0inFVdis_stack_8->SetBinContent(4,36.96166);
   hNCpi0inFVdis_stack_8->SetBinContent(5,28.99105);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.4795);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.67893);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.249712);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.448742);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.49623);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.478708);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.018354);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.697836);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6701043);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5711221);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8654041);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.750522);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.332425);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.223663);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.95481);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.819748);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.331317);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.059689);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8921538);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.715865);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5169081);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4310268);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.317295);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.29151);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3419921);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2625936);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3498677);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3205179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.5583361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1252919);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2847561);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,35.81429);
   hCCpi0inFV_stack_10->SetBinContent(2,73.45325);
   hCCpi0inFV_stack_10->SetBinContent(3,83.87427);
   hCCpi0inFV_stack_10->SetBinContent(4,64.47614);
   hCCpi0inFV_stack_10->SetBinContent(5,46.26994);
   hCCpi0inFV_stack_10->SetBinContent(6,28.47685);
   hCCpi0inFV_stack_10->SetBinContent(7,17.52038);
   hCCpi0inFV_stack_10->SetBinContent(8,11.8474);
   hCCpi0inFV_stack_10->SetBinContent(9,7.62409);
   hCCpi0inFV_stack_10->SetBinContent(10,4.749909);
   hCCpi0inFV_stack_10->SetBinContent(11,3.284146);
   hCCpi0inFV_stack_10->SetBinContent(12,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(13,1.997238);
   hCCpi0inFV_stack_10->SetBinContent(14,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,1.072095);
   hCCpi0inFV_stack_10->SetBinError(1,3.065507);
   hCCpi0inFV_stack_10->SetBinError(2,4.328887);
   hCCpi0inFV_stack_10->SetBinError(3,4.558861);
   hCCpi0inFV_stack_10->SetBinError(4,4.084059);
   hCCpi0inFV_stack_10->SetBinError(5,3.369893);
   hCCpi0inFV_stack_10->SetBinError(6,2.631568);
   hCCpi0inFV_stack_10->SetBinError(7,2.126495);
   hCCpi0inFV_stack_10->SetBinError(8,1.736457);
   hCCpi0inFV_stack_10->SetBinError(9,1.373765);
   hCCpi0inFV_stack_10->SetBinError(10,1.113447);
   hCCpi0inFV_stack_10->SetBinError(11,0.832782);
   hCCpi0inFV_stack_10->SetBinError(12,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(13,0.6324952);
   hCCpi0inFV_stack_10->SetBinError(14,0.438694);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.5551335);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,45.82789);
   hNCinFV_stack_11->SetBinContent(2,34.75286);
   hNCinFV_stack_11->SetBinContent(3,32.6182);
   hNCinFV_stack_11->SetBinContent(4,26.73196);
   hNCinFV_stack_11->SetBinContent(5,25.66433);
   hNCinFV_stack_11->SetBinContent(6,21.25145);
   hNCinFV_stack_11->SetBinContent(7,13.91658);
   hNCinFV_stack_11->SetBinContent(8,11.09035);
   hNCinFV_stack_11->SetBinContent(9,9.703803);
   hNCinFV_stack_11->SetBinContent(10,4.498013);
   hNCinFV_stack_11->SetBinContent(11,6.163636);
   hNCinFV_stack_11->SetBinContent(12,3.522889);
   hNCinFV_stack_11->SetBinContent(13,1.607298);
   hNCinFV_stack_11->SetBinContent(14,0.7834804);
   hNCinFV_stack_11->SetBinContent(15,1.217248);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.9303237);
   hNCinFV_stack_11->SetBinError(1,3.488611);
   hNCinFV_stack_11->SetBinError(2,2.937673);
   hNCinFV_stack_11->SetBinError(3,2.796233);
   hNCinFV_stack_11->SetBinError(4,2.581467);
   hNCinFV_stack_11->SetBinError(5,2.481765);
   hNCinFV_stack_11->SetBinError(6,2.279136);
   hNCinFV_stack_11->SetBinError(7,1.913262);
   hNCinFV_stack_11->SetBinError(8,1.676938);
   hNCinFV_stack_11->SetBinError(9,1.654054);
   hNCinFV_stack_11->SetBinError(10,1.038297);
   hNCinFV_stack_11->SetBinError(11,1.226234);
   hNCinFV_stack_11->SetBinError(12,0.9422777);
   hNCinFV_stack_11->SetBinError(13,0.6796534);
   hNCinFV_stack_11->SetBinError(14,0.3917439);
   hNCinFV_stack_11->SetBinError(15,0.6211758);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.4814682);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,85.59548);
   hnumuCCinFV_stack_12->SetBinContent(2,61.85851);
   hnumuCCinFV_stack_12->SetBinContent(3,36.35083);
   hnumuCCinFV_stack_12->SetBinContent(4,30.11971);
   hnumuCCinFV_stack_12->SetBinContent(5,21.1619);
   hnumuCCinFV_stack_12->SetBinContent(6,9.223049);
   hnumuCCinFV_stack_12->SetBinContent(7,8.894608);
   hnumuCCinFV_stack_12->SetBinContent(8,5.304597);
   hnumuCCinFV_stack_12->SetBinContent(9,4.142251);
   hnumuCCinFV_stack_12->SetBinContent(10,2.107235);
   hnumuCCinFV_stack_12->SetBinContent(11,2.590875);
   hnumuCCinFV_stack_12->SetBinContent(12,0.9818863);
   hnumuCCinFV_stack_12->SetBinContent(13,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,5.724974);
   hnumuCCinFV_stack_12->SetBinError(2,5.059112);
   hnumuCCinFV_stack_12->SetBinError(3,3.214844);
   hnumuCCinFV_stack_12->SetBinError(4,3.075121);
   hnumuCCinFV_stack_12->SetBinError(5,2.65039);
   hnumuCCinFV_stack_12->SetBinError(6,1.52703);
   hnumuCCinFV_stack_12->SetBinError(7,1.591571);
   hnumuCCinFV_stack_12->SetBinError(8,1.16815);
   hnumuCCinFV_stack_12->SetBinError(9,1.019469);
   hnumuCCinFV_stack_12->SetBinError(10,0.6801976);
   hnumuCCinFV_stack_12->SetBinError(11,0.8095761);
   hnumuCCinFV_stack_12->SetBinError(12,0.4391155);
   hnumuCCinFV_stack_12->SetBinError(13,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(17,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,3.955828);
   hnueCCinFV_stack_13->SetBinContent(2,2.91258);
   hnueCCinFV_stack_13->SetBinContent(3,1.758832);
   hnueCCinFV_stack_13->SetBinContent(4,1.240429);
   hnueCCinFV_stack_13->SetBinContent(5,1.475801);
   hnueCCinFV_stack_13->SetBinContent(6,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,1.093036);
   hnueCCinFV_stack_13->SetBinError(2,0.9598948);
   hnueCCinFV_stack_13->SetBinError(3,0.683336);
   hnueCCinFV_stack_13->SetBinError(4,0.5090713);
   hnueCCinFV_stack_13->SetBinError(5,0.6822474);
   hnueCCinFV_stack_13->SetBinError(6,0.5197486);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.2486649);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__20->SetBinContent(1,430.3251);
   hmcerror__20->SetBinContent(2,631.8143);
   hmcerror__20->SetBinContent(3,584.7646);
   hmcerror__20->SetBinContent(4,431.6566);
   hmcerror__20->SetBinContent(5,285.2375);
   hmcerror__20->SetBinContent(6,169.0232);
   hmcerror__20->SetBinContent(7,109.8025);
   hmcerror__20->SetBinContent(8,71.28831);
   hmcerror__20->SetBinContent(9,48.63434);
   hmcerror__20->SetBinContent(10,25.94837);
   hmcerror__20->SetBinContent(11,20.76477);
   hmcerror__20->SetBinContent(12,13.00387);
   hmcerror__20->SetBinContent(13,7.304896);
   hmcerror__20->SetBinContent(14,3.680987);
   hmcerror__20->SetBinContent(15,3.06124);
   hmcerror__20->SetBinContent(16,2.044888);
   hmcerror__20->SetBinContent(17,4.292916);
   hmcerror__20->SetBinError(1,116.3455);
   hmcerror__20->SetBinError(2,210.7109);
   hmcerror__20->SetBinError(3,207.6898);
   hmcerror__20->SetBinError(4,165.1607);
   hmcerror__20->SetBinError(5,117.1375);
   hmcerror__20->SetBinError(6,72.34089);
   hmcerror__20->SetBinError(7,45.59087);
   hmcerror__20->SetBinError(8,32.42929);
   hmcerror__20->SetBinError(9,27.61219);
   hmcerror__20->SetBinError(10,12.38463);
   hmcerror__20->SetBinError(11,13.18657);
   hmcerror__20->SetBinError(12,10.62077);
   hmcerror__20->SetBinError(13,5.898634);
   hmcerror__20->SetBinError(14,6.915609);
   hmcerror__20->SetBinError(15,4.677024);
   hmcerror__20->SetBinError(16,2.728495);
   hmcerror__20->SetBinError(17,4.701018);
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
   
   Double_t _fx3025[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3025[16] = {
   327,
   456,
   434,
   300,
   218,
   118,
   76,
   38,
   23,
   16,
   8,
   9,
   6,
   3,
   2,
   0};
   Double_t _felx3025[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3025[16] = {
   18.08314,
   21.35416,
   20.83267,
   17.32051,
   14.76482,
   10.86278,
   8.8425,
   6.3013,
   4.9457,
   4.1628,
   3.0307,
   3.19354,
   2.67925,
   2.143368,
   2,
   0};
   Double_t _fehx3025[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3025[16] = {
   18.08314,
   21.35416,
   20.83267,
   17.32051,
   14.76482,
   10.86278,
   8.6406,
   6.0955,
   4.7346,
   3.9454,
   2.7896,
   2.9582,
   2.41858,
   1.72422,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,440);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(525.0896);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.8/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2034.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1311.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  245.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 382.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 239.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3026[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3026[16] = {
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
   Double_t _felx3026[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3026[16] = {
   0.2703665,
   0.3335013,
   0.3551681,
   0.3826206,
   0.4106664,
   0.4279939,
   0.415208,
   0.4549033,
   0.5677509,
   0.4772798,
   0.6350454,
   0.816739,
   0.8074904,
   1.878738,
   1.52782,
   1.3343};
   Double_t _fehx3026[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3026[16] = {
   0.2703665,
   0.3335013,
   0.3551681,
   0.3826206,
   0.4106664,
   0.4279939,
   0.415208,
   0.4549033,
   0.5677509,
   0.4772798,
   0.6350454,
   0.816739,
   0.8074904,
   1.878738,
   1.52782,
   1.3343};
   grae = new TGraphAsymmErrors(16,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,440);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3027[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3027[16] = {
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
   Double_t _felx3027[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3027[16] = {
   0.2547127,
   0.3248946,
   0.3442307,
   0.3634684,
   0.3770861,
   0.3922704,
   0.3610928,
   0.3735865,
   0.3597146,
   0.3335211,
   0.3061946,
   0.2926241,
   0.3566208,
   0.3707767,
   0.4940967,
   0.4644246};
   Double_t _fehx3027[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3027[16] = {
   0.2547127,
   0.3248946,
   0.3442307,
   0.3634684,
   0.3770861,
   0.3922704,
   0.3610928,
   0.3735865,
   0.3597146,
   0.3335211,
   0.3061946,
   0.2926241,
   0.3566208,
   0.3707767,
   0.4940967,
   0.4644246};
   grae = new TGraphAsymmErrors(16,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,440);
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
   
   Double_t _fx3028[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3028[16] = {
   0.7598905,
   0.721731,
   0.7421789,
   0.6949969,
   0.7642754,
   0.698129,
   0.6921519,
   0.5330467,
   0.4729169,
   0.6166091,
   0.385268,
   0.6921016,
   0.8213669,
   0.8149988,
   0.65333,
   0};
   Double_t _felx3028[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3028[16] = {
   0.04202204,
   0.03379815,
   0.03562573,
   0.04012567,
   0.05176326,
   0.06426798,
   0.08053096,
   0.08839177,
   0.1016915,
   0.1604263,
   0.145954,
   0.2455838,
   0.3667745,
   0.5822808,
   0.65333,
   0};
   Double_t _fehx3028[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3028[16] = {
   0.04202204,
   0.03379815,
   0.03562573,
   0.04012567,
   0.05176326,
   0.06426798,
   0.0786922,
   0.08550491,
   0.09735096,
   0.1520481,
   0.1343429,
   0.2274861,
   0.3310903,
   0.4684124,
   0.4962597,
   0.561302};
   grae = new TGraphAsymmErrors(16,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,440);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.411752);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Jun  8 12:45:29 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
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
   pad1->Range(-184.6154,-2.865203,1353.846,316.8311);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmc__25->SetBinContent(1,7.208422);
   hmc__25->SetBinContent(2,54.27317);
   hmc__25->SetBinContent(3,126.7691);
   hmc__25->SetBinContent(4,143.2601);
   hmc__25->SetBinContent(5,99.02755);
   hmc__25->SetBinContent(6,76.82845);
   hmc__25->SetBinContent(7,58.04758);
   hmc__25->SetBinContent(8,38.45927);
   hmc__25->SetBinContent(9,24.88134);
   hmc__25->SetBinContent(10,16.49112);
   hmc__25->SetBinContent(11,12.56765);
   hmc__25->SetBinContent(12,9.560456);
   hmc__25->SetBinContent(13,4.036334);
   hmc__25->SetBinContent(14,3.74723);
   hmc__25->SetBinContent(15,3.213097);
   hmc__25->SetBinContent(16,3.0264);
   hmc__25->SetBinContent(17,2.853122);
   hmc__25->SetBinContent(18,2.170851);
   hmc__25->SetBinContent(19,0.4238776);
   hmc__25->SetBinContent(20,0.5727581);
   hmc__25->SetBinContent(21,13.06802);
   hmc__25->SetBinError(1,3.624157);
   hmc__25->SetBinError(2,19.91641);
   hmc__25->SetBinError(3,24.95097);
   hmc__25->SetBinError(4,32.63254);
   hmc__25->SetBinError(5,23.34306);
   hmc__25->SetBinError(6,19.23995);
   hmc__25->SetBinError(7,18.4661);
   hmc__25->SetBinError(8,11.31346);
   hmc__25->SetBinError(9,8.783614);
   hmc__25->SetBinError(10,6.163802);
   hmc__25->SetBinError(11,7.322899);
   hmc__25->SetBinError(12,5.232979);
   hmc__25->SetBinError(13,2.395374);
   hmc__25->SetBinError(14,2.63212);
   hmc__25->SetBinError(15,2.629979);
   hmc__25->SetBinError(16,3.837021);
   hmc__25->SetBinError(17,5.536816);
   hmc__25->SetBinError(18,4.633679);
   hmc__25->SetBinError(19,0.7246945);
   hmc__25->SetBinError(20,1.323968);
   hmc__25->SetBinError(21,4.313514);
   hmc__25->SetMinimum(-2.865203);
   hmc__25->SetMaximum(300.8463);
   hmc__25->SetEntries(684.3796);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,1200);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(150.4232);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,1.918058);
   hbadmatch_stack_1->SetBinContent(3,4.301226);
   hbadmatch_stack_1->SetBinContent(4,7.181301);
   hbadmatch_stack_1->SetBinContent(5,2.214497);
   hbadmatch_stack_1->SetBinContent(6,2.422615);
   hbadmatch_stack_1->SetBinContent(7,2.023889);
   hbadmatch_stack_1->SetBinContent(8,0.6296583);
   hbadmatch_stack_1->SetBinContent(9,0.7319179);
   hbadmatch_stack_1->SetBinContent(10,0.9779288);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.7593626);
   hbadmatch_stack_1->SetBinError(3,1.049095);
   hbadmatch_stack_1->SetBinError(4,1.359597);
   hbadmatch_stack_1->SetBinError(5,0.6697072);
   hbadmatch_stack_1->SetBinError(6,0.7834442);
   hbadmatch_stack_1->SetBinError(7,0.8164266);
   hbadmatch_stack_1->SetBinError(8,0.4634329);
   hbadmatch_stack_1->SetBinError(9,0.438694);
   hbadmatch_stack_1->SetBinError(10,0.5907033);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,1.461993);
   hext_stack_2->SetBinContent(2,11.1337);
   hext_stack_2->SetBinContent(3,19.50781);
   hext_stack_2->SetBinContent(4,13.26325);
   hext_stack_2->SetBinContent(5,15.63936);
   hext_stack_2->SetBinContent(6,9.51171);
   hext_stack_2->SetBinContent(7,3.897177);
   hext_stack_2->SetBinContent(8,4.352847);
   hext_stack_2->SetBinContent(9,0.9660115);
   hext_stack_2->SetBinContent(10,1.779209);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(21,5.814838);
   hext_stack_2->SetBinError(1,0.7356036);
   hext_stack_2->SetBinError(2,2.375722);
   hext_stack_2->SetBinError(3,3.21342);
   hext_stack_2->SetBinError(4,2.475552);
   hext_stack_2->SetBinError(5,2.850147);
   hext_stack_2->SetBinError(6,2.262275);
   hext_stack_2->SetBinError(7,1.182339);
   hext_stack_2->SetBinError(8,1.514272);
   hext_stack_2->SetBinError(9,0.7189592);
   hext_stack_2->SetBinError(10,0.9206235);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(21,1.683489);
   hext_stack_2->SetEntries(193);

   ci = 1547;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.6677322);
   hdirt_stack_3->SetBinContent(3,0.5381464);
   hdirt_stack_3->SetBinContent(4,1.234325);
   hdirt_stack_3->SetBinContent(5,1.091296);
   hdirt_stack_3->SetBinContent(6,0.5570828);
   hdirt_stack_3->SetBinContent(7,0.2945329);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.48273);
   hdirt_stack_3->SetBinError(3,0.3267618);
   hdirt_stack_3->SetBinError(4,0.600765);
   hdirt_stack_3->SetBinError(5,0.6331673);
   hdirt_stack_3->SetBinError(6,0.4028472);
   hdirt_stack_3->SetBinError(7,0.2086718);
   hdirt_stack_3->SetEntries(19);

   ci = 1548;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,1.674987);
   houtFV_stack_4->SetBinContent(2,10.90408);
   houtFV_stack_4->SetBinContent(3,22.45512);
   houtFV_stack_4->SetBinContent(4,27.54456);
   houtFV_stack_4->SetBinContent(5,16.72313);
   houtFV_stack_4->SetBinContent(6,10.2251);
   houtFV_stack_4->SetBinContent(7,11.02678);
   houtFV_stack_4->SetBinContent(8,6.592332);
   houtFV_stack_4->SetBinContent(9,5.076145);
   houtFV_stack_4->SetBinContent(10,2.342597);
   houtFV_stack_4->SetBinContent(11,1.943721);
   houtFV_stack_4->SetBinContent(12,1.608988);
   houtFV_stack_4->SetBinContent(13,0.6427898);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.6803553);
   houtFV_stack_4->SetBinContent(16,0.7834804);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinError(1,0.7154363);
   houtFV_stack_4->SetBinError(2,1.602032);
   houtFV_stack_4->SetBinError(3,2.345956);
   houtFV_stack_4->SetBinError(4,2.716735);
   houtFV_stack_4->SetBinError(5,2.045346);
   houtFV_stack_4->SetBinError(6,1.50722);
   houtFV_stack_4->SetBinError(7,1.645648);
   houtFV_stack_4->SetBinError(8,1.316837);
   houtFV_stack_4->SetBinError(9,1.225907);
   houtFV_stack_4->SetBinError(10,0.8097566);
   houtFV_stack_4->SetBinError(11,0.7281245);
   houtFV_stack_4->SetBinError(12,0.6801404);
   houtFV_stack_4->SetBinError(13,0.3738416);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.4810838);
   houtFV_stack_4->SetBinError(16,0.3917439);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetEntries(520);

   ci = 1549;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2792353);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1550;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1551;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8079399);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.722436);
   hNCpi0inFVres_stack_7->SetBinContent(3,28.45778);
   hNCpi0inFVres_stack_7->SetBinContent(4,35.00087);
   hNCpi0inFVres_stack_7->SetBinContent(5,23.50684);
   hNCpi0inFVres_stack_7->SetBinContent(6,16.10699);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.08708);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.314487);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.918905);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.514584);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.18933);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.589644);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.767254);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.892472);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.501704);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.125218);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.3899359);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2869115);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8717435);
   hNCpi0inFVres_stack_7->SetBinError(3,1.721432);
   hNCpi0inFVres_stack_7->SetBinError(4,1.973454);
   hNCpi0inFVres_stack_7->SetBinError(5,1.561043);
   hNCpi0inFVres_stack_7->SetBinError(6,1.223482);
   hNCpi0inFVres_stack_7->SetBinError(7,1.279083);
   hNCpi0inFVres_stack_7->SetBinError(8,1.015297);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9220464);
   hNCpi0inFVres_stack_7->SetBinError(10,0.606523);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5085583);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4498782);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3060563);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3223657);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2454852);
   hNCpi0inFVres_stack_7->SetBinError(16,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1012383);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1561744);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1552;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.602926);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.440524);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.759218);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.643378);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.573296);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.72367);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.049494);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.439934);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.032804);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.157358);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7386901);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6143043);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.102054);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3794841);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.765098);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8211638);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7289748);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7322599);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6428168);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4349961);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5584701);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3564798);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3883553);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3261668);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3397083);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3209538);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1553;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1554;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(2,7.709619);
   hCCpi0inFV_stack_11->SetBinContent(3,20.85872);
   hCCpi0inFV_stack_11->SetBinContent(4,28.17752);
   hCCpi0inFV_stack_11->SetBinContent(5,20.32443);
   hCCpi0inFV_stack_11->SetBinContent(6,21.93595);
   hCCpi0inFV_stack_11->SetBinContent(7,14.62598);
   hCCpi0inFV_stack_11->SetBinContent(8,10.8516);
   hCCpi0inFV_stack_11->SetBinContent(9,5.251248);
   hCCpi0inFV_stack_11->SetBinContent(10,5.325212);
   hCCpi0inFV_stack_11->SetBinContent(11,3.954386);
   hCCpi0inFV_stack_11->SetBinContent(12,2.842848);
   hCCpi0inFV_stack_11->SetBinContent(13,1.662242);
   hCCpi0inFV_stack_11->SetBinContent(14,1.804013);
   hCCpi0inFV_stack_11->SetBinContent(15,0.5352025);
   hCCpi0inFV_stack_11->SetBinContent(16,1.195526);
   hCCpi0inFV_stack_11->SetBinContent(17,0.8753801);
   hCCpi0inFV_stack_11->SetBinContent(18,1.072095);
   hCCpi0inFV_stack_11->SetBinContent(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(21,2.87949);
   hCCpi0inFV_stack_11->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(2,1.35929);
   hCCpi0inFV_stack_11->SetBinError(3,2.285741);
   hCCpi0inFV_stack_11->SetBinError(4,2.703131);
   hCCpi0inFV_stack_11->SetBinError(5,2.246225);
   hCCpi0inFV_stack_11->SetBinError(6,2.365748);
   hCCpi0inFV_stack_11->SetBinError(7,1.947475);
   hCCpi0inFV_stack_11->SetBinError(8,1.617949);
   hCCpi0inFV_stack_11->SetBinError(9,1.167761);
   hCCpi0inFV_stack_11->SetBinError(10,1.178071);
   hCCpi0inFV_stack_11->SetBinError(11,0.9911791);
   hCCpi0inFV_stack_11->SetBinError(12,0.8482326);
   hCCpi0inFV_stack_11->SetBinError(13,0.6513556);
   hCCpi0inFV_stack_11->SetBinError(14,0.7075491);
   hCCpi0inFV_stack_11->SetBinError(15,0.3921167);
   hCCpi0inFV_stack_11->SetBinError(16,0.5685459);
   hCCpi0inFV_stack_11->SetBinError(17,0.5191111);
   hCCpi0inFV_stack_11->SetBinError(18,0.5551335);
   hCCpi0inFV_stack_11->SetBinError(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(21,0.9000686);
   hCCpi0inFV_stack_11->SetEntries(647);

   ci = 1556;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,0.536893);
   hNCinFV_stack_12->SetBinContent(2,1.073786);
   hNCinFV_stack_12->SetBinContent(3,2.884413);
   hNCinFV_stack_12->SetBinContent(4,2.590875);
   hNCinFV_stack_12->SetBinContent(5,1.072095);
   hNCinFV_stack_12->SetBinContent(6,1.804013);
   hNCinFV_stack_12->SetBinContent(7,1.765367);
   hNCinFV_stack_12->SetBinContent(8,0.6803553);
   hNCinFV_stack_12->SetBinContent(9,1.268811);
   hNCinFV_stack_12->SetBinContent(10,0.8753801);
   hNCinFV_stack_12->SetBinContent(11,1.127039);
   hNCinFV_stack_12->SetBinContent(12,0.3401776);
   hNCinFV_stack_12->SetBinContent(13,0.1950248);
   hNCinFV_stack_12->SetBinContent(15,0.3917402);
   hNCinFV_stack_12->SetBinError(1,0.3929602);
   hNCinFV_stack_12->SetBinError(2,0.5557297);
   hNCinFV_stack_12->SetBinError(3,0.8103477);
   hNCinFV_stack_12->SetBinError(4,0.8095761);
   hNCinFV_stack_12->SetBinError(5,0.5551335);
   hNCinFV_stack_12->SetBinError(6,0.7075491);
   hNCinFV_stack_12->SetBinError(7,0.5884604);
   hNCinFV_stack_12->SetBinError(8,0.4810838);
   hNCinFV_stack_12->SetBinError(9,0.5889569);
   hNCinFV_stack_12->SetBinError(10,0.5191111);
   hNCinFV_stack_12->SetBinError(11,0.5201044);
   hNCinFV_stack_12->SetBinError(12,0.3401776);
   hNCinFV_stack_12->SetBinError(13,0.1950249);
   hNCinFV_stack_12->SetBinError(15,0.2770047);
   hNCinFV_stack_12->SetEntries(70);

   ci = 1557;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,1.86183);
   hnumuCCinFV_stack_13->SetBinContent(2,12.34554);
   hnumuCCinFV_stack_13->SetBinContent(3,21.96264);
   hnumuCCinFV_stack_13->SetBinContent(4,21.89388);
   hnumuCCinFV_stack_13->SetBinContent(5,13.58932);
   hnumuCCinFV_stack_13->SetBinContent(6,8.807899);
   hnumuCCinFV_stack_13->SetBinContent(7,6.281189);
   hnumuCCinFV_stack_13->SetBinContent(8,3.123185);
   hnumuCCinFV_stack_13->SetBinContent(9,2.172566);
   hnumuCCinFV_stack_13->SetBinContent(10,0.6155058);
   hnumuCCinFV_stack_13->SetBinContent(11,1.191063);
   hnumuCCinFV_stack_13->SetBinContent(12,0.4212538);
   hnumuCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnumuCCinFV_stack_13->SetBinContent(14,0.3900497);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(21,1.105674);
   hnumuCCinFV_stack_13->SetBinError(1,0.7292348);
   hnumuCCinFV_stack_13->SetBinError(2,2.453552);
   hnumuCCinFV_stack_13->SetBinError(3,2.793655);
   hnumuCCinFV_stack_13->SetBinError(4,2.73356);
   hnumuCCinFV_stack_13->SetBinError(5,2.194329);
   hnumuCCinFV_stack_13->SetBinError(6,1.517319);
   hnumuCCinFV_stack_13->SetBinError(7,1.424965);
   hnumuCCinFV_stack_13->SetBinError(8,0.9433656);
   hnumuCCinFV_stack_13->SetBinError(9,0.7433042);
   hnumuCCinFV_stack_13->SetBinError(10,0.3560936);
   hnumuCCinFV_stack_13->SetBinError(11,0.5457671);
   hnumuCCinFV_stack_13->SetBinError(12,0.2986875);
   hnumuCCinFV_stack_13->SetBinError(13,0.1950249);
   hnumuCCinFV_stack_13->SetBinError(14,0.2758068);
   hnumuCCinFV_stack_13->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(21,0.5763212);
   hnumuCCinFV_stack_13->SetEntries(361);

   ci = 1558;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(4,0.34964);
   hnueCCinFV_stack_14->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(8,0.6419483);
   hnueCCinFV_stack_14->SetBinContent(12,1.569686);
   hnueCCinFV_stack_14->SetBinContent(15,0.3654046);
   hnueCCinFV_stack_14->SetBinContent(17,1.376641);
   hnueCCinFV_stack_14->SetBinContent(18,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,0.9891096);
   hnueCCinFV_stack_14->SetBinError(4,0.2491644);
   hnueCCinFV_stack_14->SetBinError(6,0.3921167);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(8,0.373277);
   hnueCCinFV_stack_14->SetBinError(12,1.569686);
   hnueCCinFV_stack_14->SetBinError(15,0.3654046);
   hnueCCinFV_stack_14->SetBinError(17,1.178006);
   hnueCCinFV_stack_14->SetBinError(18,0.2331833);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,0.5276695);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1559;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__26->SetBinContent(1,7.208422);
   hmcerror__26->SetBinContent(2,54.27317);
   hmcerror__26->SetBinContent(3,126.7691);
   hmcerror__26->SetBinContent(4,143.2601);
   hmcerror__26->SetBinContent(5,99.02755);
   hmcerror__26->SetBinContent(6,76.82845);
   hmcerror__26->SetBinContent(7,58.04758);
   hmcerror__26->SetBinContent(8,38.45927);
   hmcerror__26->SetBinContent(9,24.88134);
   hmcerror__26->SetBinContent(10,16.49112);
   hmcerror__26->SetBinContent(11,12.56765);
   hmcerror__26->SetBinContent(12,9.560456);
   hmcerror__26->SetBinContent(13,4.036334);
   hmcerror__26->SetBinContent(14,3.74723);
   hmcerror__26->SetBinContent(15,3.213097);
   hmcerror__26->SetBinContent(16,3.0264);
   hmcerror__26->SetBinContent(17,2.853122);
   hmcerror__26->SetBinContent(18,2.170851);
   hmcerror__26->SetBinContent(19,0.4238776);
   hmcerror__26->SetBinContent(20,0.5727581);
   hmcerror__26->SetBinContent(21,13.06802);
   hmcerror__26->SetBinError(1,3.624157);
   hmcerror__26->SetBinError(2,19.91641);
   hmcerror__26->SetBinError(3,24.95097);
   hmcerror__26->SetBinError(4,32.63254);
   hmcerror__26->SetBinError(5,23.34306);
   hmcerror__26->SetBinError(6,19.23995);
   hmcerror__26->SetBinError(7,18.4661);
   hmcerror__26->SetBinError(8,11.31346);
   hmcerror__26->SetBinError(9,8.783614);
   hmcerror__26->SetBinError(10,6.163802);
   hmcerror__26->SetBinError(11,7.322899);
   hmcerror__26->SetBinError(12,5.232979);
   hmcerror__26->SetBinError(13,2.395374);
   hmcerror__26->SetBinError(14,2.63212);
   hmcerror__26->SetBinError(15,2.629979);
   hmcerror__26->SetBinError(16,3.837021);
   hmcerror__26->SetBinError(17,5.536816);
   hmcerror__26->SetBinError(18,4.633679);
   hmcerror__26->SetBinError(19,0.7246945);
   hmcerror__26->SetBinError(20,1.323968);
   hmcerror__26->SetBinError(21,4.313514);
   hmcerror__26->SetEntries(684.3796);

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
   1170};
   Double_t _fy3033[20] = {
   8,
   59,
   115,
   130,
   87,
   53,
   33,
   35,
   16,
   14,
   6,
   4,
   4,
   5,
   3,
   0,
   5,
   1,
   0,
   1};
   Double_t _felx3033[20] = {
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
   Double_t _fely3033[20] = {
   3.0307,
   7.8097,
   10.72381,
   11.40175,
   9.4503,
   7.4105,
   5.8847,
   6.0548,
   4.1628,
   3.9102,
   2.67925,
   2.29683,
   2.29683,
   2.48995,
   2.143368,
   0,
   2.48995,
   1,
   0,
   1};
   Double_t _fehx3033[20] = {
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
   Double_t _fehy3033[20] = {
   2.7896,
   7.6066,
   10.72381,
   11.40175,
   9.2488,
   7.2068,
   5.6776,
   5.8483,
   3.9454,
   3.6898,
   2.41858,
   1.98186,
   1.98186,
   2.21064,
   1.72422,
   1.1478,
   2.21064,
   1.35971,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1320);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(155.5419);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 579.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 82.7","F");

   ci = 1547;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.0","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.7","F");

   ci = 1550;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  150.9","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  35.8","F");

   ci = 1553;
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

   ci = 1554;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 149.4","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 16.6","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 95.0","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 5.6","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[20] = {
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
   1170};
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
   Double_t _fely3034[20] = {
   0.5027671,
   0.3669661,
   0.1968222,
   0.2277852,
   0.2357229,
   0.2504274,
   0.3181201,
   0.2941671,
   0.3530202,
   0.3737649,
   0.5826783,
   0.5473566,
   0.5934529,
   0.7024175,
   0.8185184,
   1.26785,
   1.940617,
   2.134499,
   1.709679,
   2.311565};
   Double_t _fehx3034[20] = {
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
   Double_t _fehy3034[20] = {
   0.5027671,
   0.3669661,
   0.1968222,
   0.2277852,
   0.2357229,
   0.2504274,
   0.3181201,
   0.2941671,
   0.3530202,
   0.3737649,
   0.5826783,
   0.5473566,
   0.5934529,
   0.7024175,
   0.8185184,
   1.26785,
   1.940617,
   2.134499,
   1.709679,
   2.311565};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1320);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
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
   1170};
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
   Double_t _fely3035[20] = {
   0.2821668,
   0.1829459,
   0.1770641,
   0.1930581,
   0.2068248,
   0.2135009,
   0.2182096,
   0.2083815,
   0.244639,
   0.254899,
   0.2466335,
   0.3466501,
   0.3463843,
   0.3617516,
   0.4564623,
   0.4413558,
   1.504834,
   0.4878722,
   1.282599,
   0.9573797};
   Double_t _fehx3035[20] = {
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
   Double_t _fehy3035[20] = {
   0.2821668,
   0.1829459,
   0.1770641,
   0.1930581,
   0.2068248,
   0.2135009,
   0.2182096,
   0.2083815,
   0.244639,
   0.254899,
   0.2466335,
   0.3466501,
   0.3463843,
   0.3617516,
   0.4564623,
   0.4413558,
   1.504834,
   0.4878722,
   1.282599,
   0.9573797};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1320);
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
   1170};
   Double_t _fy3036[20] = {
   1.109813,
   1.087093,
   0.9071613,
   0.9074401,
   0.8785434,
   0.6898487,
   0.5684991,
   0.9100536,
   0.6430522,
   0.8489417,
   0.4774162,
   0.4183901,
   0.9909983,
   1.334319,
   0.9336787,
   0,
   1.752466,
   0.4606488,
   0,
   1.745938};
   Double_t _felx3036[20] = {
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
   Double_t _fely3036[20] = {
   0.4204388,
   0.1438961,
   0.08459322,
   0.07958776,
   0.09543102,
   0.09645516,
   0.1013772,
   0.1574341,
   0.1673061,
   0.2371094,
   0.2131862,
   0.2402427,
   0.5690386,
   0.6644774,
   0.6670723,
   0,
   0.8727106,
   0.4606488,
   0,
   1.745938};
   Double_t _fehx3036[20] = {
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
   Double_t _fehy3036[20] = {
   0.3869918,
   0.140154,
   0.08459322,
   0.07958776,
   0.09339623,
   0.0938038,
   0.09780941,
   0.1520648,
   0.1585686,
   0.2237446,
   0.1924449,
   0.2072976,
   0.491005,
   0.5899397,
   0.5366225,
   0.3792624,
   0.7748143,
   0.6263488,
   2.707857,
   2.373969};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1320);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(4.531897);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_energy_all",20,0,1200);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

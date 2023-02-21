#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 19:54:25 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-1.307692,-2.560338,1.25641,283.1195);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__25->SetBinContent(1,32.78519);
   hmc__25->SetBinContent(2,17.29321);
   hmc__25->SetBinContent(3,18.33994);
   hmc__25->SetBinContent(4,17.75023);
   hmc__25->SetBinContent(5,14.06219);
   hmc__25->SetBinContent(6,20.39323);
   hmc__25->SetBinContent(7,17.46977);
   hmc__25->SetBinContent(8,20.64355);
   hmc__25->SetBinContent(9,18.86745);
   hmc__25->SetBinContent(10,24.97848);
   hmc__25->SetBinContent(11,24.16122);
   hmc__25->SetBinContent(12,24.73021);
   hmc__25->SetBinContent(13,28.36094);
   hmc__25->SetBinContent(14,34.61023);
   hmc__25->SetBinContent(15,39.63186);
   hmc__25->SetBinContent(16,40.21903);
   hmc__25->SetBinContent(17,60.19802);
   hmc__25->SetBinContent(18,63.0966);
   hmc__25->SetBinContent(19,75.44938);
   hmc__25->SetBinContent(20,128.0169);
   hmc__25->SetBinError(1,16.08791);
   hmc__25->SetBinError(2,18.24075);
   hmc__25->SetBinError(3,10.93556);
   hmc__25->SetBinError(4,11.5195);
   hmc__25->SetBinError(5,8.490685);
   hmc__25->SetBinError(6,9.408224);
   hmc__25->SetBinError(7,16.15774);
   hmc__25->SetBinError(8,9.795956);
   hmc__25->SetBinError(9,11.18452);
   hmc__25->SetBinError(10,11.89068);
   hmc__25->SetBinError(11,10.99799);
   hmc__25->SetBinError(12,13.05926);
   hmc__25->SetBinError(13,11.45847);
   hmc__25->SetBinError(14,17.13735);
   hmc__25->SetBinError(15,19.0908);
   hmc__25->SetBinError(16,25.45131);
   hmc__25->SetBinError(17,22.50155);
   hmc__25->SetBinError(18,27.80877);
   hmc__25->SetBinError(19,28.63044);
   hmc__25->SetBinError(20,47.27965);
   hmc__25->SetBinError(21,0.3895343);
   hmc__25->SetMinimum(-2.560338);
   hmc__25->SetMaximum(268.8355);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,-1,1);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(134.4178);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.740623);
   hbadmatch_stack_1->SetBinContent(2,0.2239027);
   hbadmatch_stack_1->SetBinContent(3,1.073786);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,0.7319179);
   hbadmatch_stack_1->SetBinContent(6,0.6803553);
   hbadmatch_stack_1->SetBinContent(7,1.363313);
   hbadmatch_stack_1->SetBinContent(8,0.6084836);
   hbadmatch_stack_1->SetBinContent(9,2.260058);
   hbadmatch_stack_1->SetBinContent(10,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,1.497888);
   hbadmatch_stack_1->SetBinContent(12,1.403804);
   hbadmatch_stack_1->SetBinContent(13,0.5841618);
   hbadmatch_stack_1->SetBinContent(14,0.9286332);
   hbadmatch_stack_1->SetBinContent(15,1.499403);
   hbadmatch_stack_1->SetBinContent(16,1.281136);
   hbadmatch_stack_1->SetBinContent(17,1.88303);
   hbadmatch_stack_1->SetBinContent(18,2.124628);
   hbadmatch_stack_1->SetBinContent(19,0.8753801);
   hbadmatch_stack_1->SetBinContent(20,2.319254);
   hbadmatch_stack_1->SetBinError(1,0.6771485);
   hbadmatch_stack_1->SetBinError(2,0.2239027);
   hbadmatch_stack_1->SetBinError(3,0.5557297);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.438694);
   hbadmatch_stack_1->SetBinError(6,0.4810838);
   hbadmatch_stack_1->SetBinError(7,0.5713784);
   hbadmatch_stack_1->SetBinError(8,0.351627);
   hbadmatch_stack_1->SetBinError(9,0.844931);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.5718839);
   hbadmatch_stack_1->SetBinError(12,0.5312582);
   hbadmatch_stack_1->SetBinError(13,0.4186276);
   hbadmatch_stack_1->SetBinError(14,0.48078);
   hbadmatch_stack_1->SetBinError(15,0.6979065);
   hbadmatch_stack_1->SetBinError(16,0.6588732);
   hbadmatch_stack_1->SetBinError(17,0.7273553);
   hbadmatch_stack_1->SetBinError(18,0.7290748);
   hbadmatch_stack_1->SetBinError(19,0.5191111);
   hbadmatch_stack_1->SetBinError(20,0.7544221);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,5.654845);
   hext_stack_2->SetBinContent(2,2.192989);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,3.532468);
   hext_stack_2->SetBinContent(5,0.4065989);
   hext_stack_2->SetBinContent(6,5.236656);
   hext_stack_2->SetBinContent(7,2.103607);
   hext_stack_2->SetBinContent(8,5.166044);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,5.553873);
   hext_stack_2->SetBinContent(11,3.326175);
   hext_stack_2->SetBinContent(12,2.510206);
   hext_stack_2->SetBinContent(13,7.408103);
   hext_stack_2->SetBinContent(14,6.35989);
   hext_stack_2->SetBinContent(15,2.021405);
   hext_stack_2->SetBinContent(16,5.483261);
   hext_stack_2->SetBinContent(17,10.4849);
   hext_stack_2->SetBinContent(18,5.643255);
   hext_stack_2->SetBinContent(19,5.676386);
   hext_stack_2->SetBinContent(20,6.945253);
   hext_stack_2->SetBinError(1,1.687921);
   hext_stack_2->SetBinError(2,0.9009267);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,1.47091);
   hext_stack_2->SetBinError(5,0.4065989);
   hext_stack_2->SetBinError(6,1.658262);
   hext_stack_2->SetBinError(7,0.9761052);
   hext_stack_2->SetBinError(8,1.619774);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,1.748219);
   hext_stack_2->SetBinError(11,1.054716);
   hext_stack_2->SetBinError(12,1.057404);
   hext_stack_2->SetBinError(13,2.04086);
   hext_stack_2->SetBinError(14,1.894232);
   hext_stack_2->SetBinError(15,0.9448239);
   hext_stack_2->SetBinError(16,1.711754);
   hext_stack_2->SetBinError(17,2.331006);
   hext_stack_2->SetBinError(18,1.707383);
   hext_stack_2->SetBinError(19,1.49849);
   hext_stack_2->SetBinError(20,1.863119);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(3,0.4049124);
   hdirt_stack_3->SetBinContent(5,0.4762587);
   hdirt_stack_3->SetBinContent(10,0.400075);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.529281);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6197868);
   hdirt_stack_3->SetBinContent(19,0.4149213);
   hdirt_stack_3->SetBinContent(20,1.199692);
   hdirt_stack_3->SetBinError(3,0.4049124);
   hdirt_stack_3->SetBinError(5,0.3652866);
   hdirt_stack_3->SetBinError(10,0.296158);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.3726062);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(18,0.368854);
   hdirt_stack_3->SetBinError(19,0.4149213);
   hdirt_stack_3->SetBinError(20,0.6007778);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,8.494399);
   houtFV_stack_4->SetBinContent(2,6.160255);
   houtFV_stack_4->SetBinContent(3,4.943675);
   houtFV_stack_4->SetBinContent(4,4.356603);
   houtFV_stack_4->SetBinContent(5,2.289233);
   houtFV_stack_4->SetBinContent(6,3.230893);
   houtFV_stack_4->SetBinContent(7,3.652107);
   houtFV_stack_4->SetBinContent(8,3.326174);
   houtFV_stack_4->SetBinContent(9,4.281142);
   houtFV_stack_4->SetBinContent(10,3.084974);
   houtFV_stack_4->SetBinContent(11,4.100166);
   houtFV_stack_4->SetBinContent(12,3.189321);
   houtFV_stack_4->SetBinContent(13,1.907138);
   houtFV_stack_4->SetBinContent(14,3.907867);
   houtFV_stack_4->SetBinContent(15,6.571815);
   houtFV_stack_4->SetBinContent(16,4.974891);
   houtFV_stack_4->SetBinContent(17,7.133835);
   houtFV_stack_4->SetBinContent(18,10.96916);
   houtFV_stack_4->SetBinContent(19,13.12274);
   houtFV_stack_4->SetBinContent(20,21.59986);
   houtFV_stack_4->SetBinError(1,1.467896);
   houtFV_stack_4->SetBinError(2,1.225694);
   houtFV_stack_4->SetBinError(3,1.078698);
   houtFV_stack_4->SetBinError(4,1.069099);
   houtFV_stack_4->SetBinError(5,0.7459725);
   houtFV_stack_4->SetBinError(6,0.855484);
   houtFV_stack_4->SetBinError(7,1.010072);
   houtFV_stack_4->SetBinError(8,0.9215152);
   houtFV_stack_4->SetBinError(9,1.009569);
   houtFV_stack_4->SetBinError(10,0.8817142);
   houtFV_stack_4->SetBinError(11,1.074582);
   houtFV_stack_4->SetBinError(12,0.8374756);
   houtFV_stack_4->SetBinError(13,0.6501133);
   houtFV_stack_4->SetBinError(14,0.9808007);
   houtFV_stack_4->SetBinError(15,1.283849);
   houtFV_stack_4->SetBinError(16,1.126125);
   houtFV_stack_4->SetBinError(17,1.346681);
   houtFV_stack_4->SetBinError(18,1.621119);
   houtFV_stack_4->SetBinError(19,1.821961);
   houtFV_stack_4->SetBinError(20,2.451072);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3199419);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2847561);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.708556);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.733712);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.152716);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.026498);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.550366);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.09966);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.459616);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.221302);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.595788);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.523232);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.488428);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.302272);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.926946);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.326194);
   hNCpi0inFVres_stack_7->SetBinContent(15,10.26176);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.286747);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.43109);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.68951);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.94575);
   hNCpi0inFVres_stack_7->SetBinContent(20,24.58199);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6326962);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5167825);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6140171);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5610193);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4798108);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7137779);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6209505);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6053455);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5589336);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8247505);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6701383);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8424536);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7745773);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9608387);
   hNCpi0inFVres_stack_7->SetBinError(15,1.041287);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9582693);
   hNCpi0inFVres_stack_7->SetBinError(17,1.216544);
   hNCpi0inFVres_stack_7->SetBinError(18,1.351412);
   hNCpi0inFVres_stack_7->SetBinError(19,1.375249);
   hNCpi0inFVres_stack_7->SetBinError(20,1.609693);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.395008);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5709538);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7817042);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4321178);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.311308);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.533012);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6131358);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.380558);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.102054);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.507272);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.25958);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.15122);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.668375);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.321692);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.74827);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4283093);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1902537);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3465144);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1371558);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4255744);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4261073);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1749792);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3962917);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3209538);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4160165);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5353411);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6092976);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7140962);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6564466);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.043155);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,7.030563);
   hCCpi0inFV_stack_10->SetBinContent(2,3.204098);
   hCCpi0inFV_stack_10->SetBinContent(3,3.372665);
   hCCpi0inFV_stack_10->SetBinContent(4,2.15318);
   hCCpi0inFV_stack_10->SetBinContent(5,3.927361);
   hCCpi0inFV_stack_10->SetBinContent(6,3.19906);
   hCCpi0inFV_stack_10->SetBinContent(7,2.888475);
   hCCpi0inFV_stack_10->SetBinContent(8,4.889806);
   hCCpi0inFV_stack_10->SetBinContent(9,3.069831);
   hCCpi0inFV_stack_10->SetBinContent(10,3.152303);
   hCCpi0inFV_stack_10->SetBinContent(11,4.237316);
   hCCpi0inFV_stack_10->SetBinContent(12,3.43099);
   hCCpi0inFV_stack_10->SetBinContent(13,4.290405);
   hCCpi0inFV_stack_10->SetBinContent(14,5.870243);
   hCCpi0inFV_stack_10->SetBinContent(15,7.893747);
   hCCpi0inFV_stack_10->SetBinContent(16,6.966743);
   hCCpi0inFV_stack_10->SetBinContent(17,11.57655);
   hCCpi0inFV_stack_10->SetBinContent(18,11.85071);
   hCCpi0inFV_stack_10->SetBinContent(19,13.22262);
   hCCpi0inFV_stack_10->SetBinContent(20,25.88118);
   hCCpi0inFV_stack_10->SetBinError(1,1.330344);
   hCCpi0inFV_stack_10->SetBinError(2,0.8840164);
   hCCpi0inFV_stack_10->SetBinError(3,0.8990075);
   hCCpi0inFV_stack_10->SetBinError(4,0.6949942);
   hCCpi0inFV_stack_10->SetBinError(5,0.945463);
   hCCpi0inFV_stack_10->SetBinError(6,0.9292029);
   hCCpi0inFV_stack_10->SetBinError(7,0.8227751);
   hCCpi0inFV_stack_10->SetBinError(8,1.138278);
   hCCpi0inFV_stack_10->SetBinError(9,0.8416257);
   hCCpi0inFV_stack_10->SetBinError(10,0.9057424);
   hCCpi0inFV_stack_10->SetBinError(11,0.9670129);
   hCCpi0inFV_stack_10->SetBinError(12,0.8785637);
   hCCpi0inFV_stack_10->SetBinError(13,1.046838);
   hCCpi0inFV_stack_10->SetBinError(14,1.187027);
   hCCpi0inFV_stack_10->SetBinError(15,1.442152);
   hCCpi0inFV_stack_10->SetBinError(16,1.322726);
   hCCpi0inFV_stack_10->SetBinError(17,1.774252);
   hCCpi0inFV_stack_10->SetBinError(18,1.76223);
   hCCpi0inFV_stack_10->SetBinError(19,1.842026);
   hCCpi0inFV_stack_10->SetBinError(20,2.585575);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.180292);
   hNCinFV_stack_11->SetBinContent(2,0.9269427);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.7302274);
   hNCinFV_stack_11->SetBinContent(5,0.3934307);
   hNCinFV_stack_11->SetBinContent(6,0.7336084);
   hNCinFV_stack_11->SetBinContent(7,1.1723);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,1.072095);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinContent(12,0.7319179);
   hNCinFV_stack_11->SetBinContent(13,1.073786);
   hNCinFV_stack_11->SetBinContent(14,1.073786);
   hNCinFV_stack_11->SetBinContent(15,2.486059);
   hNCinFV_stack_11->SetBinContent(16,1.518779);
   hNCinFV_stack_11->SetBinContent(17,1.805704);
   hNCinFV_stack_11->SetBinContent(18,3.962811);
   hNCinFV_stack_11->SetBinContent(19,6.545233);
   hNCinFV_stack_11->SetBinContent(20,10.16002);
   hNCinFV_stack_11->SetBinError(1,0.4818523);
   hNCinFV_stack_11->SetBinError(2,0.4800908);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.4379386);
   hNCinFV_stack_11->SetBinError(5,0.2781975);
   hNCinFV_stack_11->SetBinError(6,0.4394482);
   hNCinFV_stack_11->SetBinError(7,0.5215848);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.5551335);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
   hNCinFV_stack_11->SetBinError(12,0.438694);
   hNCinFV_stack_11->SetBinError(13,0.5557297);
   hNCinFV_stack_11->SetBinError(14,0.5557297);
   hNCinFV_stack_11->SetBinError(15,0.8559962);
   hNCinFV_stack_11->SetBinError(16,0.5892709);
   hNCinFV_stack_11->SetBinError(17,0.7080169);
   hNCinFV_stack_11->SetBinError(18,0.961408);
   hNCinFV_stack_11->SetBinError(19,1.255551);
   hNCinFV_stack_11->SetBinError(20,1.606334);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.131675);
   hnumuCCinFV_stack_12->SetBinContent(2,1.167921);
   hnumuCCinFV_stack_12->SetBinContent(3,2.823159);
   hnumuCCinFV_stack_12->SetBinContent(4,2.751604);
   hnumuCCinFV_stack_12->SetBinContent(5,2.575575);
   hnumuCCinFV_stack_12->SetBinContent(6,2.55734);
   hnumuCCinFV_stack_12->SetBinContent(7,2.398232);
   hnumuCCinFV_stack_12->SetBinContent(8,2.579535);
   hnumuCCinFV_stack_12->SetBinContent(9,2.413596);
   hnumuCCinFV_stack_12->SetBinContent(10,4.994492);
   hnumuCCinFV_stack_12->SetBinContent(11,4.38554);
   hnumuCCinFV_stack_12->SetBinContent(12,6.54856);
   hnumuCCinFV_stack_12->SetBinContent(13,5.734039);
   hnumuCCinFV_stack_12->SetBinContent(14,6.619672);
   hnumuCCinFV_stack_12->SetBinContent(15,6.435287);
   hnumuCCinFV_stack_12->SetBinContent(16,8.281918);
   hnumuCCinFV_stack_12->SetBinContent(17,10.63438);
   hnumuCCinFV_stack_12->SetBinContent(18,8.512567);
   hnumuCCinFV_stack_12->SetBinContent(19,12.49684);
   hnumuCCinFV_stack_12->SetBinContent(20,19.27675);
   hnumuCCinFV_stack_12->SetBinError(1,0.8859258);
   hnumuCCinFV_stack_12->SetBinError(2,0.5370363);
   hnumuCCinFV_stack_12->SetBinError(3,0.8887324);
   hnumuCCinFV_stack_12->SetBinError(4,0.8973555);
   hnumuCCinFV_stack_12->SetBinError(5,0.8520038);
   hnumuCCinFV_stack_12->SetBinError(6,0.8366738);
   hnumuCCinFV_stack_12->SetBinError(7,0.8150516);
   hnumuCCinFV_stack_12->SetBinError(8,0.9417593);
   hnumuCCinFV_stack_12->SetBinError(9,0.77262);
   hnumuCCinFV_stack_12->SetBinError(10,1.567401);
   hnumuCCinFV_stack_12->SetBinError(11,1.145151);
   hnumuCCinFV_stack_12->SetBinError(12,1.377079);
   hnumuCCinFV_stack_12->SetBinError(13,1.435494);
   hnumuCCinFV_stack_12->SetBinError(14,1.460826);
   hnumuCCinFV_stack_12->SetBinError(15,1.392393);
   hnumuCCinFV_stack_12->SetBinError(16,1.685446);
   hnumuCCinFV_stack_12->SetBinError(17,1.698257);
   hnumuCCinFV_stack_12->SetBinError(18,1.481105);
   hnumuCCinFV_stack_12->SetBinError(19,2.095645);
   hnumuCCinFV_stack_12->SetBinError(20,2.888726);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(20,4.853817);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.2655531);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(20,2.103622);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__26->SetBinContent(1,32.78519);
   hmcerror__26->SetBinContent(2,17.29321);
   hmcerror__26->SetBinContent(3,18.33994);
   hmcerror__26->SetBinContent(4,17.75023);
   hmcerror__26->SetBinContent(5,14.06219);
   hmcerror__26->SetBinContent(6,20.39323);
   hmcerror__26->SetBinContent(7,17.46977);
   hmcerror__26->SetBinContent(8,20.64355);
   hmcerror__26->SetBinContent(9,18.86745);
   hmcerror__26->SetBinContent(10,24.97848);
   hmcerror__26->SetBinContent(11,24.16122);
   hmcerror__26->SetBinContent(12,24.73021);
   hmcerror__26->SetBinContent(13,28.36094);
   hmcerror__26->SetBinContent(14,34.61023);
   hmcerror__26->SetBinContent(15,39.63186);
   hmcerror__26->SetBinContent(16,40.21903);
   hmcerror__26->SetBinContent(17,60.19802);
   hmcerror__26->SetBinContent(18,63.0966);
   hmcerror__26->SetBinContent(19,75.44938);
   hmcerror__26->SetBinContent(20,128.0169);
   hmcerror__26->SetBinError(1,16.08791);
   hmcerror__26->SetBinError(2,18.24075);
   hmcerror__26->SetBinError(3,10.93556);
   hmcerror__26->SetBinError(4,11.5195);
   hmcerror__26->SetBinError(5,8.490685);
   hmcerror__26->SetBinError(6,9.408224);
   hmcerror__26->SetBinError(7,16.15774);
   hmcerror__26->SetBinError(8,9.795956);
   hmcerror__26->SetBinError(9,11.18452);
   hmcerror__26->SetBinError(10,11.89068);
   hmcerror__26->SetBinError(11,10.99799);
   hmcerror__26->SetBinError(12,13.05926);
   hmcerror__26->SetBinError(13,11.45847);
   hmcerror__26->SetBinError(14,17.13735);
   hmcerror__26->SetBinError(15,19.0908);
   hmcerror__26->SetBinError(16,25.45131);
   hmcerror__26->SetBinError(17,22.50155);
   hmcerror__26->SetBinError(18,27.80877);
   hmcerror__26->SetBinError(19,28.63044);
   hmcerror__26->SetBinError(20,47.27965);
   hmcerror__26->SetBinError(21,0.3895343);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3033[20] = {
   31,
   16,
   15,
   15,
   16,
   14,
   13,
   13,
   17,
   21,
   26,
   21,
   26,
   23,
   23,
   36,
   30,
   53,
   66,
   110};
   Double_t _felx3033[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3033[20] = {
   5.7094,
   4.1628,
   4.0385,
   4.0385,
   4.1628,
   3.9102,
   3.77763,
   3.77763,
   4.2835,
   4.7354,
   5.2453,
   4.7354,
   5.2453,
   4.9457,
   4.9457,
   6.1381,
   5.6197,
   7.4105,
   8.2509,
   10.48809};
   Double_t _fehx3033[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3033[20] = {
   5.5017,
   3.9454,
   3.8197,
   3.8197,
   3.9454,
   3.6898,
   3.5552,
   3.5552,
   4.0673,
   4.5229,
   5.0358,
   4.5229,
   5.0358,
   4.7346,
   4.7346,
   5.9318,
   5.4117,
   7.2068,
   8.0483,
   10.48809};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(8.300133);
   Graph_Graph3033->SetMaximum(131.6147);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3034[20] = {
   0.4907066,
   1.054793,
   0.5962702,
   0.6489771,
   0.6037952,
   0.4613406,
   0.9248972,
   0.4745288,
   0.5927945,
   0.4760369,
   0.4551917,
   0.5280692,
   0.404023,
   0.4951529,
   0.4817035,
   0.6328176,
   0.3737921,
   0.4407332,
   0.3794656,
   0.3693235};
   Double_t _fehx3034[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3034[20] = {
   0.4907066,
   1.054793,
   0.5962702,
   0.6489771,
   0.6037952,
   0.4613406,
   0.9248972,
   0.4745288,
   0.5927945,
   0.4760369,
   0.4551917,
   0.5280692,
   0.404023,
   0.4951529,
   0.4817035,
   0.6328176,
   0.3737921,
   0.4407332,
   0.3794656,
   0.3693235};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-1.2,1.2);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3035[20] = {
   0.2227636,
   0.2647247,
   0.2639758,
   0.2539483,
   0.2889528,
   0.2234594,
   0.2800825,
   0.2324234,
   0.2738319,
   0.2480566,
   0.2524887,
   0.2767334,
   0.2252363,
   0.270212,
   0.2902598,
   0.2825246,
   0.2418572,
   0.2801008,
   0.2561577,
   0.2279801};
   Double_t _fehx3035[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3035[20] = {
   0.2227636,
   0.2647247,
   0.2639758,
   0.2539483,
   0.2889528,
   0.2234594,
   0.2800825,
   0.2324234,
   0.2738319,
   0.2480566,
   0.2524887,
   0.2767334,
   0.2252363,
   0.270212,
   0.2902598,
   0.2825246,
   0.2418572,
   0.2801008,
   0.2561577,
   0.2279801};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-1.2,1.2);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3036[20] = {
   0.9455489,
   0.9252189,
   0.817887,
   0.8450593,
   1.137803,
   0.6865024,
   0.7441427,
   0.6297368,
   0.9010224,
   0.8407236,
   1.076105,
   0.849164,
   0.9167538,
   0.6645435,
   0.5803412,
   0.8950987,
   0.4983552,
   0.8399818,
   0.8747587,
   0.8592616};
   Double_t _felx3036[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3036[20] = {
   0.1741457,
   0.2407188,
   0.2202025,
   0.2275181,
   0.2960278,
   0.1917401,
   0.2162381,
   0.1829933,
   0.2270312,
   0.1895792,
   0.2170958,
   0.1914824,
   0.184948,
   0.1428971,
   0.124791,
   0.1526168,
   0.09335356,
   0.1174469,
   0.1093568,
   0.08192738};
   Double_t _fehx3036[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3036[20] = {
   0.1678105,
   0.2281474,
   0.2082722,
   0.2151915,
   0.2805679,
   0.1809326,
   0.2035059,
   0.1722185,
   0.2155723,
   0.1810718,
   0.2084249,
   0.1828897,
   0.1775611,
   0.1367977,
   0.1194645,
   0.1474874,
   0.0898983,
   0.1142185,
   0.1066715,
   0.08192738};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.3036648);
   Graph_Graph3036->SetMaximum(1.519707);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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

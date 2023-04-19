#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 19:21:12 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
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
   pad1->Range(-184.6154,-3.649889,1353.846,403.6008);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__25->SetBinContent(1,63.01838);
   hmc__25->SetBinContent(2,182.4944);
   hmc__25->SetBinContent(3,132.0677);
   hmc__25->SetBinContent(4,106.4783);
   hmc__25->SetBinContent(5,72.17981);
   hmc__25->SetBinContent(6,38.18668);
   hmc__25->SetBinContent(7,31.25724);
   hmc__25->SetBinContent(8,13.82363);
   hmc__25->SetBinContent(9,10.86559);
   hmc__25->SetBinContent(10,9.001872);
   hmc__25->SetBinContent(11,9.336388);
   hmc__25->SetBinContent(12,7.415599);
   hmc__25->SetBinContent(13,44.93193);
   hmc__25->SetBinError(1,21.99385);
   hmc__25->SetBinError(2,56.976);
   hmc__25->SetBinError(3,43.10668);
   hmc__25->SetBinError(4,38.67705);
   hmc__25->SetBinError(5,23.43811);
   hmc__25->SetBinError(6,17.35962);
   hmc__25->SetBinError(7,20.32716);
   hmc__25->SetBinError(8,10.09082);
   hmc__25->SetBinError(9,7.673206);
   hmc__25->SetBinError(10,7.56168);
   hmc__25->SetBinError(11,9.049606);
   hmc__25->SetBinError(12,6.374758);
   hmc__25->SetBinError(13,21.78143);
   hmc__25->SetMinimum(-3.649889);
   hmc__25->SetMaximum(383.2383);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",12,0,1200);
   hs9_stack_9->SetMinimum(-5.168879e-09);
   hs9_stack_9->SetMaximum(191.6191);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,3.387964);
   hbadmatch_stack_1->SetBinContent(2,6.332304);
   hbadmatch_stack_1->SetBinContent(3,5.963172);
   hbadmatch_stack_1->SetBinContent(4,1.507296);
   hbadmatch_stack_1->SetBinContent(5,2.486059);
   hbadmatch_stack_1->SetBinContent(6,1.49298);
   hbadmatch_stack_1->SetBinContent(7,0.9243394);
   hbadmatch_stack_1->SetBinContent(8,0.231042);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.4161119);
   hbadmatch_stack_1->SetBinError(1,1.012898);
   hbadmatch_stack_1->SetBinError(2,1.2678);
   hbadmatch_stack_1->SetBinError(3,1.243245);
   hbadmatch_stack_1->SetBinError(4,0.5750028);
   hbadmatch_stack_1->SetBinError(5,0.8559962);
   hbadmatch_stack_1->SetBinError(6,0.6730352);
   hbadmatch_stack_1->SetBinError(7,0.5394162);
   hbadmatch_stack_1->SetBinError(8,0.231042);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,12.56256);
   hext_stack_2->SetBinContent(2,28.70949);
   hext_stack_2->SetBinContent(3,9.324187);
   hext_stack_2->SetBinContent(4,8.407247);
   hext_stack_2->SetBinContent(5,10.47772);
   hext_stack_2->SetBinContent(6,3.401196);
   hext_stack_2->SetBinContent(7,6.829921);
   hext_stack_2->SetBinContent(8,1.055394);
   hext_stack_2->SetBinContent(9,1.055394);
   hext_stack_2->SetBinContent(10,1.137595);
   hext_stack_2->SetBinContent(11,0.9660115);
   hext_stack_2->SetBinContent(12,1.78639);
   hext_stack_2->SetBinContent(13,2.752401);
   hext_stack_2->SetBinError(1,2.618177);
   hext_stack_2->SetBinError(2,3.864753);
   hext_stack_2->SetBinError(3,1.94922);
   hext_stack_2->SetBinError(4,2.003079);
   hext_stack_2->SetBinError(5,2.373772);
   hext_stack_2->SetBinError(6,1.172056);
   hext_stack_2->SetBinError(7,2.020101);
   hext_stack_2->SetBinError(8,0.6130171);
   hext_stack_2->SetBinError(9,0.6130171);
   hext_stack_2->SetBinError(10,0.6602113);
   hext_stack_2->SetBinError(11,0.7189592);
   hext_stack_2->SetBinError(12,0.8039566);
   hext_stack_2->SetBinError(13,1.07854);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.2628198);
   hdirt_stack_3->SetBinContent(2,0.8049874);
   hdirt_stack_3->SetBinContent(3,0.9099599);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(5,0.7694393);
   hdirt_stack_3->SetBinContent(6,0.7408447);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1564614);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinError(1,0.2628198);
   hdirt_stack_3->SetBinError(2,0.5016609);
   hdirt_stack_3->SetBinError(3,0.5081362);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(5,0.5461976);
   hdirt_stack_3->SetBinError(6,0.4510433);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1564614);
   hdirt_stack_3->SetBinError(11,0.2623434);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,8.989964);
   houtFV_stack_4->SetBinContent(2,27.8083);
   houtFV_stack_4->SetBinContent(3,23.1364);
   houtFV_stack_4->SetBinContent(4,13.90097);
   houtFV_stack_4->SetBinContent(5,12.9717);
   houtFV_stack_4->SetBinContent(6,7.013262);
   houtFV_stack_4->SetBinContent(7,4.733375);
   houtFV_stack_4->SetBinContent(8,3.212497);
   houtFV_stack_4->SetBinContent(9,2.732646);
   houtFV_stack_4->SetBinContent(10,2.782519);
   houtFV_stack_4->SetBinContent(11,2.205214);
   houtFV_stack_4->SetBinContent(12,2.105544);
   houtFV_stack_4->SetBinContent(13,9.703859);
   houtFV_stack_4->SetBinError(1,1.46862);
   houtFV_stack_4->SetBinError(2,2.629654);
   houtFV_stack_4->SetBinError(3,2.471889);
   houtFV_stack_4->SetBinError(4,1.838016);
   houtFV_stack_4->SetBinError(5,1.862756);
   houtFV_stack_4->SetBinError(6,1.258121);
   houtFV_stack_4->SetBinError(7,1.12743);
   houtFV_stack_4->SetBinError(8,0.9720344);
   houtFV_stack_4->SetBinError(9,0.8554385);
   houtFV_stack_4->SetBinError(10,0.8319397);
   houtFV_stack_4->SetBinError(11,0.776478);
   houtFV_stack_4->SetBinError(12,0.6797106);
   houtFV_stack_4->SetBinError(13,1.589359);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2792353);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.673285);
   hNCpi0inFVres_stack_7->SetBinContent(2,36.47624);
   hNCpi0inFVres_stack_7->SetBinContent(3,31.9609);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.427);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.86918);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.16544);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.677678);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.854026);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.313884);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.295194);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.7664219);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.7943219);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.038555);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9831953);
   hNCpi0inFVres_stack_7->SetBinError(2,1.96436);
   hNCpi0inFVres_stack_7->SetBinError(3,1.821083);
   hNCpi0inFVres_stack_7->SetBinError(4,1.833332);
   hNCpi0inFVres_stack_7->SetBinError(5,1.255407);
   hNCpi0inFVres_stack_7->SetBinError(6,1.061524);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8150188);
   hNCpi0inFVres_stack_7->SetBinError(8,0.388605);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5313882);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3408511);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2727714);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2741946);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8646456);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.803298);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.317882);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.279613);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.13928);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.583834);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.216894);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.25958);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.682722);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4746361);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.53858);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5554416);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8224266);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9490875);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9368078);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5863477);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4403318);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5353411);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2684567);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2806257);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5425626);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,13.00906);
   hCCpi0inFV_stack_10->SetBinContent(2,33.34136);
   hCCpi0inFV_stack_10->SetBinContent(3,25.91594);
   hCCpi0inFV_stack_10->SetBinContent(4,21.9089);
   hCCpi0inFV_stack_10->SetBinContent(5,12.61082);
   hCCpi0inFV_stack_10->SetBinContent(6,5.726582);
   hCCpi0inFV_stack_10->SetBinContent(7,3.999767);
   hCCpi0inFV_stack_10->SetBinContent(8,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(9,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(10,1.572032);
   hCCpi0inFV_stack_10->SetBinContent(11,1.605607);
   hCCpi0inFV_stack_10->SetBinContent(12,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(13,7.132905);
   hCCpi0inFV_stack_10->SetBinError(1,1.699411);
   hCCpi0inFV_stack_10->SetBinError(2,2.933591);
   hCCpi0inFV_stack_10->SetBinError(3,2.570066);
   hCCpi0inFV_stack_10->SetBinError(4,2.430682);
   hCCpi0inFV_stack_10->SetBinError(5,1.777645);
   hCCpi0inFV_stack_10->SetBinError(6,1.180717);
   hCCpi0inFV_stack_10->SetBinError(7,1.03826);
   hCCpi0inFV_stack_10->SetBinError(8,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(9,0.650338);
   hCCpi0inFV_stack_10->SetBinError(10,0.5557996);
   hCCpi0inFV_stack_10->SetBinError(11,0.679166);
   hCCpi0inFV_stack_10->SetBinError(12,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(13,1.353378);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,5.370472);
   hNCinFV_stack_11->SetBinContent(2,9.953772);
   hNCinFV_stack_11->SetBinContent(3,4.394888);
   hNCinFV_stack_11->SetBinContent(4,5.815006);
   hNCinFV_stack_11->SetBinContent(5,2.982615);
   hNCinFV_stack_11->SetBinContent(6,2.30226);
   hNCinFV_stack_11->SetBinContent(7,1.517089);
   hNCinFV_stack_11->SetBinContent(8,1.320373);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(11,1.125349);
   hNCinFV_stack_11->SetBinContent(13,1.858957);
   hNCinFV_stack_11->SetBinError(1,1.178725);
   hNCinFV_stack_11->SetBinError(2,1.654166);
   hNCinFV_stack_11->SetBinError(3,1.075193);
   hNCinFV_stack_11->SetBinError(4,1.176698);
   hNCinFV_stack_11->SetBinError(5,0.8556548);
   hNCinFV_stack_11->SetBinError(6,0.707604);
   hNCinFV_stack_11->SetBinError(7,0.5887087);
   hNCinFV_stack_11->SetBinError(8,0.5548703);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.5194673);
   hNCinFV_stack_11->SetBinError(13,0.6804124);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,7.652059);
   hnumuCCinFV_stack_12->SetBinContent(2,32.41529);
   hnumuCCinFV_stack_12->SetBinContent(3,21.83635);
   hnumuCCinFV_stack_12->SetBinContent(4,15.51533);
   hnumuCCinFV_stack_12->SetBinContent(5,9.684906);
   hnumuCCinFV_stack_12->SetBinContent(6,5.07142);
   hnumuCCinFV_stack_12->SetBinContent(7,4.781446);
   hnumuCCinFV_stack_12->SetBinContent(8,2.639083);
   hnumuCCinFV_stack_12->SetBinContent(9,1.361522);
   hnumuCCinFV_stack_12->SetBinContent(10,1.334706);
   hnumuCCinFV_stack_12->SetBinContent(11,1.568769);
   hnumuCCinFV_stack_12->SetBinContent(12,1.24492);
   hnumuCCinFV_stack_12->SetBinContent(13,11.21289);
   hnumuCCinFV_stack_12->SetBinError(1,1.571551);
   hnumuCCinFV_stack_12->SetBinError(2,3.279658);
   hnumuCCinFV_stack_12->SetBinError(3,2.919766);
   hnumuCCinFV_stack_12->SetBinError(4,2.137121);
   hnumuCCinFV_stack_12->SetBinError(5,1.864261);
   hnumuCCinFV_stack_12->SetBinError(6,1.166724);
   hnumuCCinFV_stack_12->SetBinError(7,1.099979);
   hnumuCCinFV_stack_12->SetBinError(8,0.8220901);
   hnumuCCinFV_stack_12->SetBinError(9,0.5570941);
   hnumuCCinFV_stack_12->SetBinError(10,0.6251273);
   hnumuCCinFV_stack_12->SetBinError(11,0.6806229);
   hnumuCCinFV_stack_12->SetBinError(12,0.6792096);
   hnumuCCinFV_stack_12->SetBinError(13,2.00719);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(4,2.353166);
   hnueCCinFV_stack_13->SetBinContent(5,0.4931023);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,2.747238);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(4,1.617831);
   hnueCCinFV_stack_13->SetBinError(5,0.3729702);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,1.344208);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__26->SetBinContent(1,63.01838);
   hmcerror__26->SetBinContent(2,182.4944);
   hmcerror__26->SetBinContent(3,132.0677);
   hmcerror__26->SetBinContent(4,106.4783);
   hmcerror__26->SetBinContent(5,72.17981);
   hmcerror__26->SetBinContent(6,38.18668);
   hmcerror__26->SetBinContent(7,31.25724);
   hmcerror__26->SetBinContent(8,13.82363);
   hmcerror__26->SetBinContent(9,10.86559);
   hmcerror__26->SetBinContent(10,9.001872);
   hmcerror__26->SetBinContent(11,9.336388);
   hmcerror__26->SetBinContent(12,7.415599);
   hmcerror__26->SetBinContent(13,44.93193);
   hmcerror__26->SetBinError(1,21.99385);
   hmcerror__26->SetBinError(2,56.976);
   hmcerror__26->SetBinError(3,43.10668);
   hmcerror__26->SetBinError(4,38.67705);
   hmcerror__26->SetBinError(5,23.43811);
   hmcerror__26->SetBinError(6,17.35962);
   hmcerror__26->SetBinError(7,20.32716);
   hmcerror__26->SetBinError(8,10.09082);
   hmcerror__26->SetBinError(9,7.673206);
   hmcerror__26->SetBinError(10,7.56168);
   hmcerror__26->SetBinError(11,9.049606);
   hmcerror__26->SetBinError(12,6.374758);
   hmcerror__26->SetBinError(13,21.78143);
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
   
   Double_t _fx3033[12] = {
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
   Double_t _fy3033[12] = {
   37,
   142,
   140,
   81,
   48,
   44,
   21,
   8,
   11,
   7,
   6,
   5};
   Double_t _felx3033[12] = {
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
   Double_t _fely3033[12] = {
   6.2203,
   11.91638,
   11.83216,
   9.1239,
   7.0604,
   6.7671,
   4.7354,
   3.0307,
   3.4975,
   2.85954,
   2.67925,
   2.48995};
   Double_t _fehx3033[12] = {
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
   Double_t _fehy3033[12] = {
   6.0141,
   11.91638,
   11.83216,
   8.9221,
   6.8561,
   6.5623,
   4.5229,
   2.7896,
   3.27,
   2.61053,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1320);
   Graph_Graph3033->SetMinimum(2.259045);
   Graph_Graph3033->SetMaximum(169.057);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 550.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 85.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 111.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  145.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 125.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 105.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all");
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
   
   Double_t _fx3034[12] = {
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
   Double_t _fy3034[12] = {
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
   Double_t _felx3034[12] = {
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
   Double_t _fely3034[12] = {
   0.3490069,
   0.3122068,
   0.3263983,
   0.3632386,
   0.3247183,
   0.4545987,
   0.6503183,
   0.7299691,
   0.7061935,
   0.8400119,
   0.9692834,
   0.8596416};
   Double_t _fehx3034[12] = {
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
   Double_t _fehy3034[12] = {
   0.3490069,
   0.3122068,
   0.3263983,
   0.3632386,
   0.3247183,
   0.4545987,
   0.6503183,
   0.7299691,
   0.7061935,
   0.8400119,
   0.9692834,
   0.8596416};
   grae = new TGraphAsymmErrors(12,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   
   Double_t _fx3035[12] = {
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
   Double_t _fy3035[12] = {
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
   Double_t _felx3035[12] = {
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
   Double_t _fely3035[12] = {
   0.1885273,
   0.2208841,
   0.2685406,
   0.2819188,
   0.2510167,
   0.28258,
   0.217903,
   0.2511267,
   0.2790332,
   0.2440819,
   0.2409993,
   0.2781698};
   Double_t _fehx3035[12] = {
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
   Double_t _fehy3035[12] = {
   0.1885273,
   0.2208841,
   0.2685406,
   0.2819188,
   0.2510167,
   0.28258,
   0.217903,
   0.2511267,
   0.2790332,
   0.2440819,
   0.2409993,
   0.2781698};
   grae = new TGraphAsymmErrors(12,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[12] = {
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
   Double_t _fy3036[12] = {
   0.5871303,
   0.7781059,
   1.060062,
   0.7607181,
   0.6650059,
   1.152234,
   0.6718443,
   0.5787194,
   1.012371,
   0.777616,
   0.6426468,
   0.6742544};
   Double_t _felx3036[12] = {
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
   Double_t _fely3036[12] = {
   0.09870612,
   0.0652972,
   0.0895916,
   0.08568785,
   0.09781683,
   0.177211,
   0.1514977,
   0.2192406,
   0.3218879,
   0.3176606,
   0.2869686,
   0.3357719};
   Double_t _fehx3036[12] = {
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
   Double_t _fehy3036[12] = {
   0.09543406,
   0.0652972,
   0.0895916,
   0.08379263,
   0.0949864,
   0.1718479,
   0.1446993,
   0.2017994,
   0.3009502,
   0.2899986,
   0.2590488,
   0.2981067};
   grae = new TGraphAsymmErrors(12,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1320);
   Graph_Graph3036->SetMinimum(0.2399225);
   Graph_Graph3036->SetMaximum(1.422642);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Mar 13 17:22:32 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.2307692,-4.895514,6.641026,541.3408);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__22->SetBinContent(4,234.918);
   hmc__22->SetBinContent(5,244.7757);
   hmc__22->SetBinContent(6,186.1331);
   hmc__22->SetBinContent(7,142.6893);
   hmc__22->SetBinContent(8,100.9969);
   hmc__22->SetBinContent(9,85.35827);
   hmc__22->SetBinContent(10,56.49009);
   hmc__22->SetBinContent(11,35.828);
   hmc__22->SetBinContent(12,26.76908);
   hmc__22->SetBinContent(13,19.41586);
   hmc__22->SetBinContent(14,10.14864);
   hmc__22->SetBinContent(15,5.14665);
   hmc__22->SetBinContent(16,3.411273);
   hmc__22->SetBinContent(17,1.744787);
   hmc__22->SetBinContent(18,0.307068);
   hmc__22->SetBinContent(19,0.125218);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,0.3895343);
   hmc__22->SetBinError(3,0.3895343);
   hmc__22->SetBinError(4,49.14757);
   hmc__22->SetBinError(5,60.42686);
   hmc__22->SetBinError(6,58.72345);
   hmc__22->SetBinError(7,42.81333);
   hmc__22->SetBinError(8,27.817);
   hmc__22->SetBinError(9,26.25775);
   hmc__22->SetBinError(10,20.42477);
   hmc__22->SetBinError(11,16.75464);
   hmc__22->SetBinError(12,12.62913);
   hmc__22->SetBinError(13,9.580012);
   hmc__22->SetBinError(14,5.885011);
   hmc__22->SetBinError(15,4.215158);
   hmc__22->SetBinError(16,3.501281);
   hmc__22->SetBinError(17,2.610707);
   hmc__22->SetBinError(18,0.867375);
   hmc__22->SetBinError(19,1.881581);
   hmc__22->SetBinError(20,0.3895343);
   hmc__22->SetBinError(21,0.3895343);
   hmc__22->SetMinimum(-4.895514);
   hmc__22->SetMaximum(514.029);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,1,6);
   hs8_stack_8->SetMinimum(-6.289654e-09);
   hs8_stack_8->SetMaximum(257.0145);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,11.12728);
   hbadmatch_stack_1->SetBinContent(5,10.64832);
   hbadmatch_stack_1->SetBinContent(6,6.01975);
   hbadmatch_stack_1->SetBinContent(7,3.035868);
   hbadmatch_stack_1->SetBinContent(8,3.478245);
   hbadmatch_stack_1->SetBinContent(9,2.08854);
   hbadmatch_stack_1->SetBinContent(10,0.9303263);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinError(4,1.862167);
   hbadmatch_stack_1->SetBinError(5,2.0031);
   hbadmatch_stack_1->SetBinError(6,1.244668);
   hbadmatch_stack_1->SetBinError(7,0.8329575);
   hbadmatch_stack_1->SetBinError(8,1.005214);
   hbadmatch_stack_1->SetBinError(9,0.7182678);
   hbadmatch_stack_1->SetBinError(10,0.4814682);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,56.76985);
   hext_stack_2->SetBinContent(5,51.09346);
   hext_stack_2->SetBinContent(6,34.39865);
   hext_stack_2->SetBinContent(7,25.14073);
   hext_stack_2->SetBinContent(8,17.10859);
   hext_stack_2->SetBinContent(9,8.115979);
   hext_stack_2->SetBinContent(10,5.359169);
   hext_stack_2->SetBinContent(11,1.689827);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinError(4,4.938797);
   hext_stack_2->SetBinError(5,4.70598);
   hext_stack_2->SetBinError(6,3.870082);
   hext_stack_2->SetBinError(7,3.136672);
   hext_stack_2->SetBinError(8,2.670737);
   hext_stack_2->SetBinError(9,1.79928);
   hext_stack_2->SetBinError(10,1.392494);
   hext_stack_2->SetBinError(11,0.9943139);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,4.020398);
   hdirt_stack_3->SetBinContent(5,7.137361);
   hdirt_stack_3->SetBinContent(6,4.62153);
   hdirt_stack_3->SetBinContent(7,1.590424);
   hdirt_stack_3->SetBinContent(8,2.561777);
   hdirt_stack_3->SetBinContent(9,0.7294204);
   hdirt_stack_3->SetBinContent(10,0.5897411);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(4,1.007295);
   hdirt_stack_3->SetBinError(5,1.598147);
   hdirt_stack_3->SetBinError(6,1.12084);
   hdirt_stack_3->SetBinError(7,0.6767614);
   hdirt_stack_3->SetBinError(8,0.889894);
   hdirt_stack_3->SetBinError(9,0.4071165);
   hdirt_stack_3->SetBinError(10,0.458067);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,62.5994);
   houtFV_stack_4->SetBinContent(5,58.15338);
   houtFV_stack_4->SetBinContent(6,47.63529);
   houtFV_stack_4->SetBinContent(7,29.33379);
   houtFV_stack_4->SetBinContent(8,18.92789);
   houtFV_stack_4->SetBinContent(9,14.1585);
   houtFV_stack_4->SetBinContent(10,7.787402);
   houtFV_stack_4->SetBinContent(11,2.484141);
   houtFV_stack_4->SetBinContent(12,2.984305);
   houtFV_stack_4->SetBinContent(13,1.127039);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.536893);
   houtFV_stack_4->SetBinError(4,4.052955);
   houtFV_stack_4->SetBinError(5,4.024938);
   houtFV_stack_4->SetBinError(6,3.580075);
   houtFV_stack_4->SetBinError(7,2.696582);
   houtFV_stack_4->SetBinError(8,2.195165);
   houtFV_stack_4->SetBinError(9,1.892494);
   houtFV_stack_4->SetBinError(10,1.404468);
   houtFV_stack_4->SetBinError(11,0.7708344);
   houtFV_stack_4->SetBinError(12,0.8560416);
   houtFV_stack_4->SetBinError(13,0.5201044);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.3929602);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.367108);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.075234);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.297522);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.617544);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.8501219);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7391858);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.078731);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.15719);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4273996);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4446564);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3757913);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4507425);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2770189);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2452205);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5545656);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3435999);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4467362);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2792353);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.55182);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.84336);
   hNCpi0inFVres_stack_7->SetBinContent(6,21.30838);
   hNCpi0inFVres_stack_7->SetBinContent(7,20.34133);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.74221);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.72056);
   hNCpi0inFVres_stack_7->SetBinContent(10,15.39056);
   hNCpi0inFVres_stack_7->SetBinContent(11,12.57797);
   hNCpi0inFVres_stack_7->SetBinContent(12,10.97254);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.478648);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.506782);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.926684);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.330494);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.074322);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2791681);
   hNCpi0inFVres_stack_7->SetBinError(4,1.342888);
   hNCpi0inFVres_stack_7->SetBinError(5,1.432907);
   hNCpi0inFVres_stack_7->SetBinError(6,1.527395);
   hNCpi0inFVres_stack_7->SetBinError(7,1.439433);
   hNCpi0inFVres_stack_7->SetBinError(8,1.240149);
   hNCpi0inFVres_stack_7->SetBinError(9,1.387646);
   hNCpi0inFVres_stack_7->SetBinError(10,1.256286);
   hNCpi0inFVres_stack_7->SetBinError(11,1.1797);
   hNCpi0inFVres_stack_7->SetBinError(12,1.022427);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9735149);
   hNCpi0inFVres_stack_7->SetBinError(14,0.741459);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4974669);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5486856);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3674124);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2013529);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.241063);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.511854);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.191);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.289654);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.749738);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.935996);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.352256);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.83103);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.189162);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.867812);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.142908);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.69541);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8419144);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7922146);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8686873);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5854063);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7391373);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7226742);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5258659);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4752605);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4369306);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3527294);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,39.19836);
   hCCpi0inFV_stack_10->SetBinContent(5,46.4021);
   hCCpi0inFV_stack_10->SetBinContent(6,34.11226);
   hCCpi0inFV_stack_10->SetBinContent(7,30.23061);
   hCCpi0inFV_stack_10->SetBinContent(8,22.95415);
   hCCpi0inFV_stack_10->SetBinContent(9,19.49811);
   hCCpi0inFV_stack_10->SetBinContent(10,12.8574);
   hCCpi0inFV_stack_10->SetBinContent(11,8.62364);
   hCCpi0inFV_stack_10->SetBinContent(12,4.302406);
   hCCpi0inFV_stack_10->SetBinContent(13,5.132142);
   hCCpi0inFV_stack_10->SetBinContent(14,1.591017);
   hCCpi0inFV_stack_10->SetBinContent(15,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,3.154972);
   hCCpi0inFV_stack_10->SetBinError(5,3.451834);
   hCCpi0inFV_stack_10->SetBinError(6,2.901085);
   hCCpi0inFV_stack_10->SetBinError(7,2.815742);
   hCCpi0inFV_stack_10->SetBinError(8,2.403367);
   hCCpi0inFV_stack_10->SetBinError(9,2.249535);
   hCCpi0inFV_stack_10->SetBinError(10,1.777377);
   hCCpi0inFV_stack_10->SetBinError(11,1.473902);
   hCCpi0inFV_stack_10->SetBinError(12,1.035344);
   hCCpi0inFV_stack_10->SetBinError(13,1.101472);
   hCCpi0inFV_stack_10->SetBinError(14,0.7182787);
   hCCpi0inFV_stack_10->SetBinError(15,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,6.887561);
   hNCinFV_stack_11->SetBinContent(5,8.252883);
   hNCinFV_stack_11->SetBinContent(6,7.22897);
   hNCinFV_stack_11->SetBinContent(7,9.181517);
   hNCinFV_stack_11->SetBinContent(8,4.44476);
   hNCinFV_stack_11->SetBinContent(9,4.931781);
   hNCinFV_stack_11->SetBinContent(10,3.372665);
   hNCinFV_stack_11->SetBinContent(11,2.340906);
   hNCinFV_stack_11->SetBinContent(12,1.907138);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinError(4,1.317562);
   hNCinFV_stack_11->SetBinError(5,1.468898);
   hNCinFV_stack_11->SetBinError(6,1.345055);
   hNCinFV_stack_11->SetBinError(7,1.545578);
   hNCinFV_stack_11->SetBinError(8,1.056592);
   hNCinFV_stack_11->SetBinError(9,1.144752);
   hNCinFV_stack_11->SetBinError(10,0.8990075);
   hNCinFV_stack_11->SetBinError(11,0.8093475);
   hNCinFV_stack_11->SetBinError(12,0.6501133);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,29.06221);
   hnumuCCinFV_stack_12->SetBinContent(5,30.83315);
   hnumuCCinFV_stack_12->SetBinContent(6,21.72006);
   hnumuCCinFV_stack_12->SetBinContent(7,14.73798);
   hnumuCCinFV_stack_12->SetBinContent(8,9.373434);
   hnumuCCinFV_stack_12->SetBinContent(9,12.07675);
   hnumuCCinFV_stack_12->SetBinContent(10,4.490788);
   hnumuCCinFV_stack_12->SetBinContent(11,2.160399);
   hnumuCCinFV_stack_12->SetBinContent(12,1.93727);
   hnumuCCinFV_stack_12->SetBinContent(13,0.7827154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(4,3.029149);
   hnumuCCinFV_stack_12->SetBinError(5,2.821057);
   hnumuCCinFV_stack_12->SetBinError(6,2.502691);
   hnumuCCinFV_stack_12->SetBinError(7,2.948198);
   hnumuCCinFV_stack_12->SetBinError(8,1.538742);
   hnumuCCinFV_stack_12->SetBinError(9,2.790636);
   hnumuCCinFV_stack_12->SetBinError(10,1.170261);
   hnumuCCinFV_stack_12->SetBinError(11,0.7394528);
   hnumuCCinFV_stack_12->SetBinError(12,0.7601304);
   hnumuCCinFV_stack_12->SetBinError(13,0.4635153);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,0.8137413);
   hnueCCinFV_stack_13->SetBinContent(5,2.740898);
   hnueCCinFV_stack_13->SetBinContent(6,1.599655);
   hnueCCinFV_stack_13->SetBinContent(7,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(8,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinError(4,0.4076545);
   hnueCCinFV_stack_13->SetBinError(5,1.288003);
   hnueCCinFV_stack_13->SetBinError(6,0.703031);
   hnueCCinFV_stack_13->SetBinError(7,0.7431478);
   hnueCCinFV_stack_13->SetBinError(8,0.4566905);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__23->SetBinContent(4,234.918);
   hmcerror__23->SetBinContent(5,244.7757);
   hmcerror__23->SetBinContent(6,186.1331);
   hmcerror__23->SetBinContent(7,142.6893);
   hmcerror__23->SetBinContent(8,100.9969);
   hmcerror__23->SetBinContent(9,85.35827);
   hmcerror__23->SetBinContent(10,56.49009);
   hmcerror__23->SetBinContent(11,35.828);
   hmcerror__23->SetBinContent(12,26.76908);
   hmcerror__23->SetBinContent(13,19.41586);
   hmcerror__23->SetBinContent(14,10.14864);
   hmcerror__23->SetBinContent(15,5.14665);
   hmcerror__23->SetBinContent(16,3.411273);
   hmcerror__23->SetBinContent(17,1.744787);
   hmcerror__23->SetBinContent(18,0.307068);
   hmcerror__23->SetBinContent(19,0.125218);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,0.3895343);
   hmcerror__23->SetBinError(3,0.3895343);
   hmcerror__23->SetBinError(4,49.14757);
   hmcerror__23->SetBinError(5,60.42686);
   hmcerror__23->SetBinError(6,58.72345);
   hmcerror__23->SetBinError(7,42.81333);
   hmcerror__23->SetBinError(8,27.817);
   hmcerror__23->SetBinError(9,26.25775);
   hmcerror__23->SetBinError(10,20.42477);
   hmcerror__23->SetBinError(11,16.75464);
   hmcerror__23->SetBinError(12,12.62913);
   hmcerror__23->SetBinError(13,9.580012);
   hmcerror__23->SetBinError(14,5.885011);
   hmcerror__23->SetBinError(15,4.215158);
   hmcerror__23->SetBinError(16,3.501281);
   hmcerror__23->SetBinError(17,2.610707);
   hmcerror__23->SetBinError(18,0.867375);
   hmcerror__23->SetBinError(19,1.881581);
   hmcerror__23->SetBinError(20,0.3895343);
   hmcerror__23->SetBinError(21,0.3895343);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3029[20] = {
   0,
   0,
   0,
   219,
   223,
   200,
   129,
   96,
   70,
   49,
   29,
   17,
   17,
   12,
   5,
   3,
   1,
   1,
   2,
   0};
   Double_t _felx3029[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3029[20] = {
   0,
   0,
   0,
   14.79865,
   14.93318,
   14.14214,
   11.35782,
   9.9196,
   8.4925,
   7.1318,
   5.5285,
   4.2835,
   4.2835,
   3.64022,
   2.48995,
   2.143368,
   1,
   1,
   2,
   0};
   Double_t _fehx3029[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3029[20] = {
   1.1478,
   1.1478,
   1.1478,
   14.79865,
   14.93318,
   14.14214,
   11.35782,
   9.718,
   8.2902,
   6.9277,
   5.3201,
   4.0673,
   4.0673,
   3.4155,
   2.21064,
   1.72422,
   1.35971,
   1.35971,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0.5,6.5);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(261.7265);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3030[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3030[20] = {
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
   Double_t _felx3030[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3030[20] = {
   0,
   0,
   0,
   0.2092116,
   0.2468663,
   0.3154918,
   0.3000457,
   0.2754245,
   0.3076182,
   0.3615638,
   0.4676411,
   0.4717806,
   0.4934118,
   0.5798816,
   0.8190101,
   1.026385,
   1.49629,
   2.8247,
   15.02644,
   0};
   Double_t _fehx3030[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3030[20] = {
   0,
   0,
   0,
   0.2092116,
   0.2468663,
   0.3154918,
   0.3000457,
   0.2754245,
   0.3076182,
   0.3615638,
   0.4676411,
   0.4717806,
   0.4934118,
   0.5798816,
   0.8190101,
   1.026385,
   1.49629,
   2.8247,
   15.02644,
   0};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0.5,6.5);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3031[20] = {
   0,
   0,
   0,
   0.1447345,
   0.1565243,
   0.1721773,
   0.1680096,
   0.1677766,
   0.1900087,
   0.2021619,
   0.2253875,
   0.228772,
   0.2425793,
   0.2883735,
   0.3169376,
   0.3902504,
   0.4308895,
   1.334127,
   2.616076,
   0};
   Double_t _fehx3031[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3031[20] = {
   0,
   0,
   0,
   0.1447345,
   0.1565243,
   0.1721773,
   0.1680096,
   0.1677766,
   0.1900087,
   0.2021619,
   0.2253875,
   0.228772,
   0.2425793,
   0.2883735,
   0.3169376,
   0.3902504,
   0.4308895,
   1.334127,
   2.616076,
   0};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0.5,6.5);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3032[20] = {
   10,
   10,
   10,
   0.9322404,
   0.9110381,
   1.0745,
   0.904062,
   0.9505246,
   0.8200729,
   0.8674088,
   0.8094228,
   0.6350611,
   0.8755731,
   1.182424,
   0.9715058,
   0.8794371,
   0.5731358,
   3.256607,
   15.97215,
   10};
   Double_t _felx3032[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3032[20] = {
   0,
   0,
   0,
   0.06299497,
   0.06100762,
   0.07597862,
   0.07959822,
   0.09821692,
   0.09949241,
   0.1262487,
   0.1543067,
   0.1600167,
   0.2206187,
   0.3586904,
   0.4838002,
   0.6283191,
   0.5731358,
   3.256607,
   15.97215,
   0};
   Double_t _fehx3032[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3032[20] = {
   0,
   0,
   0,
   0.06299497,
   0.06100762,
   0.07597862,
   0.07959822,
   0.09622082,
   0.0971224,
   0.1226357,
   0.14849,
   0.1519402,
   0.2094834,
   0.3365475,
   0.4295299,
   0.5054477,
   0.7792985,
   4.428041,
   12.1322,
   0};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0.5,6.5);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(30.91479);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(1,1,6,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

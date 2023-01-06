#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 20:33:12 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-12.9065,1.25641,1427.187);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__13->SetBinContent(1,112.9762);
   hmc__13->SetBinContent(2,115.8467);
   hmc__13->SetBinContent(3,111.4962);
   hmc__13->SetBinContent(4,116.0328);
   hmc__13->SetBinContent(5,124.5203);
   hmc__13->SetBinContent(6,130.7283);
   hmc__13->SetBinContent(7,148.0655);
   hmc__13->SetBinContent(8,151.938);
   hmc__13->SetBinContent(9,180.0101);
   hmc__13->SetBinContent(10,183.2484);
   hmc__13->SetBinContent(11,196.2388);
   hmc__13->SetBinContent(12,210.4213);
   hmc__13->SetBinContent(13,218.1922);
   hmc__13->SetBinContent(14,237.9017);
   hmc__13->SetBinContent(15,289.7603);
   hmc__13->SetBinContent(16,322.9207);
   hmc__13->SetBinContent(17,371.3704);
   hmc__13->SetBinContent(18,404.9852);
   hmc__13->SetBinContent(19,535.0745);
   hmc__13->SetBinContent(20,645.3251);
   hmc__13->SetBinError(1,32.7651);
   hmc__13->SetBinError(2,33.09063);
   hmc__13->SetBinError(3,32.4333);
   hmc__13->SetBinError(4,29.64068);
   hmc__13->SetBinError(5,34.70741);
   hmc__13->SetBinError(6,34.13059);
   hmc__13->SetBinError(7,39.78756);
   hmc__13->SetBinError(8,39.49346);
   hmc__13->SetBinError(9,46.64124);
   hmc__13->SetBinError(10,48.34237);
   hmc__13->SetBinError(11,50.89261);
   hmc__13->SetBinError(12,55.27649);
   hmc__13->SetBinError(13,57.17836);
   hmc__13->SetBinError(14,65.13165);
   hmc__13->SetBinError(15,74.93117);
   hmc__13->SetBinError(16,83.8983);
   hmc__13->SetBinError(17,98.60878);
   hmc__13->SetBinError(18,95.13031);
   hmc__13->SetBinError(19,120.8785);
   hmc__13->SetBinError(20,133.41);
   hmc__13->SetBinError(21,0.3895343);
   hmc__13->SetMinimum(-12.9065);
   hmc__13->SetMaximum(1355.183);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,-1,1);
   hs5_stack_5->SetMinimum(-9.311246e-09);
   hs5_stack_5->SetMaximum(677.5915);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.5514106);
   hbadmatch_stack_1->SetBinContent(3,0.7377276);
   hbadmatch_stack_1->SetBinContent(5,0.6803553);
   hbadmatch_stack_1->SetBinContent(6,1.012068);
   hbadmatch_stack_1->SetBinContent(7,0.9060575);
   hbadmatch_stack_1->SetBinContent(8,0.8384665);
   hbadmatch_stack_1->SetBinContent(9,1.099054);
   hbadmatch_stack_1->SetBinContent(10,0.693393);
   hbadmatch_stack_1->SetBinContent(11,0.9985224);
   hbadmatch_stack_1->SetBinContent(12,0.7817899);
   hbadmatch_stack_1->SetBinContent(13,1.320373);
   hbadmatch_stack_1->SetBinContent(14,1.329793);
   hbadmatch_stack_1->SetBinContent(15,1.270501);
   hbadmatch_stack_1->SetBinContent(16,1.073786);
   hbadmatch_stack_1->SetBinContent(17,1.937872);
   hbadmatch_stack_1->SetBinContent(18,0.7319469);
   hbadmatch_stack_1->SetBinContent(19,2.451529);
   hbadmatch_stack_1->SetBinContent(20,1.515398);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.400425);
   hbadmatch_stack_1->SetBinError(3,0.3797829);
   hbadmatch_stack_1->SetBinError(5,0.4810838);
   hbadmatch_stack_1->SetBinError(6,0.4980943);
   hbadmatch_stack_1->SetBinError(7,0.5313973);
   hbadmatch_stack_1->SetBinError(8,0.4216086);
   hbadmatch_stack_1->SetBinError(9,0.6377698);
   hbadmatch_stack_1->SetBinError(10,0.5342149);
   hbadmatch_stack_1->SetBinError(11,0.5318477);
   hbadmatch_stack_1->SetBinError(12,0.3908977);
   hbadmatch_stack_1->SetBinError(13,0.5548703);
   hbadmatch_stack_1->SetBinError(14,0.6261618);
   hbadmatch_stack_1->SetBinError(15,0.5895188);
   hbadmatch_stack_1->SetBinError(16,0.5557297);
   hbadmatch_stack_1->SetBinError(17,0.7051163);
   hbadmatch_stack_1->SetBinError(18,0.438694);
   hbadmatch_stack_1->SetBinError(19,0.8168725);
   hbadmatch_stack_1->SetBinError(20,0.588146);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,1.379791);
   hext_stack_2->SetBinContent(2,4.677244);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,4.028449);
   hext_stack_2->SetBinContent(5,3.61467);
   hext_stack_2->SetBinContent(6,1.379791);
   hext_stack_2->SetBinContent(7,2.357392);
   hext_stack_2->SetBinContent(8,2.021405);
   hext_stack_2->SetBinContent(9,9.105111);
   hext_stack_2->SetBinContent(10,3.229612);
   hext_stack_2->SetBinContent(11,10.22394);
   hext_stack_2->SetBinContent(12,7.643119);
   hext_stack_2->SetBinContent(13,2.681789);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,8.242843);
   hext_stack_2->SetBinContent(16,3.704052);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,1.704188);
   hext_stack_2->SetBinContent(19,2.595179);
   hext_stack_2->SetBinContent(20,6.284869);
   hext_stack_2->SetBinError(1,0.6935586);
   hext_stack_2->SetBinError(2,1.54863);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,1.479117);
   hext_stack_2->SetBinError(5,1.491196);
   hext_stack_2->SetBinError(6,0.6935586);
   hext_stack_2->SetBinError(7,0.9653222);
   hext_stack_2->SetBinError(8,0.9448239);
   hext_stack_2->SetBinError(9,2.225436);
   hext_stack_2->SetBinError(10,1.206126);
   hext_stack_2->SetBinError(11,2.378177);
   hext_stack_2->SetBinError(12,2.100346);
   hext_stack_2->SetBinError(13,1.018372);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,1.972853);
   hext_stack_2->SetBinError(16,1.443106);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.7656743);
   hext_stack_2->SetBinError(19,0.9175342);
   hext_stack_2->SetBinError(20,1.823959);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(6,0.311381);
   hdirt_stack_3->SetBinContent(8,0.2441834);
   hdirt_stack_3->SetBinContent(16,1.167841e-06);
   hdirt_stack_3->SetBinContent(18,0.4046628);
   hdirt_stack_3->SetBinContent(20,0.432084);
   hdirt_stack_3->SetBinError(6,0.311381);
   hdirt_stack_3->SetBinError(8,0.2441834);
   hdirt_stack_3->SetBinError(16,1.167841e-06);
   hdirt_stack_3->SetBinError(18,0.3002244);
   hdirt_stack_3->SetBinError(20,0.3136519);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,0.2873969);
   houtFV_stack_4->SetBinContent(2,0.3934307);
   houtFV_stack_4->SetBinContent(3,0.1306092);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,0.6039672);
   houtFV_stack_4->SetBinContent(6,0.3934307);
   houtFV_stack_4->SetBinContent(7,0.9286332);
   houtFV_stack_4->SetBinContent(8,1.349204);
   houtFV_stack_4->SetBinContent(9,1.17353);
   houtFV_stack_4->SetBinContent(10,0.536893);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,1.805704);
   houtFV_stack_4->SetBinContent(13,0.9768147);
   houtFV_stack_4->SetBinContent(14,2.694328);
   houtFV_stack_4->SetBinContent(15,1.184084);
   houtFV_stack_4->SetBinContent(16,3.512138);
   houtFV_stack_4->SetBinContent(17,2.364605);
   houtFV_stack_4->SetBinContent(18,2.746789);
   houtFV_stack_4->SetBinContent(19,2.969511);
   houtFV_stack_4->SetBinContent(20,6.573447);
   houtFV_stack_4->SetBinError(1,0.2157946);
   houtFV_stack_4->SetBinError(2,0.2781975);
   houtFV_stack_4->SetBinError(3,0.1306092);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.3490334);
   houtFV_stack_4->SetBinError(6,0.2781975);
   houtFV_stack_4->SetBinError(7,0.48078);
   houtFV_stack_4->SetBinError(8,0.5656477);
   houtFV_stack_4->SetBinError(9,0.4790957);
   houtFV_stack_4->SetBinError(10,0.3929602);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.7080169);
   houtFV_stack_4->SetBinError(13,0.4368475);
   houtFV_stack_4->SetBinError(14,0.9266902);
   houtFV_stack_4->SetBinError(15,0.5749346);
   houtFV_stack_4->SetBinError(16,1.384635);
   houtFV_stack_4->SetBinError(17,0.7408697);
   houtFV_stack_4->SetBinError(18,0.8587731);
   houtFV_stack_4->SetBinError(19,0.8589278);
   houtFV_stack_4->SetBinError(20,1.374813);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1300583);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1058996);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.15872);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.579272);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.508671);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.120378);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.788601);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.461887);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.149874);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.701783);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.317448);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.463539);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.989283);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.390778);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.28397);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.468601);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.634245);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.289582);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.851689);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.121377);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.663499);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.12507);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3190086);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4161955);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3487441);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2961674);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2071198);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3499222);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6391858);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4737542);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2795542);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4876152);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4448312);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5747001);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6962398);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4772414);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4879647);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8973495);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9749447);
   hNCpi0inFVres_stack_7->SetBinError(18,1.160171);
   hNCpi0inFVres_stack_7->SetBinError(19,1.041744);
   hNCpi0inFVres_stack_7->SetBinError(20,1.329942);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6910375);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.148011);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.190718);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.9144651);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8440489);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6672528);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.172706);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.128954);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.228533);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.325393);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8274251);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.797804);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.450111);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.017923);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.751557);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.81597);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.618475);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.686109);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.612769);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.647);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2663324);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4126197);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3584616);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2754572);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2526463);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2011359);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2998554);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3995495);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.329089);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4236656);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2179994);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.518239);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.536018);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4447399);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.783238);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6444409);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5620979);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9517072);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.309149);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.287236);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,95.52118);
   hCCpi0inFV_stack_10->SetBinContent(2,96.06303);
   hCCpi0inFV_stack_10->SetBinContent(3,96.7263);
   hCCpi0inFV_stack_10->SetBinContent(4,97.97081);
   hCCpi0inFV_stack_10->SetBinContent(5,106.4399);
   hCCpi0inFV_stack_10->SetBinContent(6,104.7662);
   hCCpi0inFV_stack_10->SetBinContent(7,123.1251);
   hCCpi0inFV_stack_10->SetBinContent(8,123.7859);
   hCCpi0inFV_stack_10->SetBinContent(9,141.5948);
   hCCpi0inFV_stack_10->SetBinContent(10,145.2458);
   hCCpi0inFV_stack_10->SetBinContent(11,147.1451);
   hCCpi0inFV_stack_10->SetBinContent(12,162.133);
   hCCpi0inFV_stack_10->SetBinContent(13,177.3639);
   hCCpi0inFV_stack_10->SetBinContent(14,189.6079);
   hCCpi0inFV_stack_10->SetBinContent(15,227.3057);
   hCCpi0inFV_stack_10->SetBinContent(16,259.0672);
   hCCpi0inFV_stack_10->SetBinContent(17,292.2803);
   hCCpi0inFV_stack_10->SetBinContent(18,308.5702);
   hCCpi0inFV_stack_10->SetBinContent(19,416.7502);
   hCCpi0inFV_stack_10->SetBinContent(20,482.3862);
   hCCpi0inFV_stack_10->SetBinError(1,4.941728);
   hCCpi0inFV_stack_10->SetBinError(2,4.912294);
   hCCpi0inFV_stack_10->SetBinError(3,4.974948);
   hCCpi0inFV_stack_10->SetBinError(4,5.018481);
   hCCpi0inFV_stack_10->SetBinError(5,5.18538);
   hCCpi0inFV_stack_10->SetBinError(6,5.138667);
   hCCpi0inFV_stack_10->SetBinError(7,5.562011);
   hCCpi0inFV_stack_10->SetBinError(8,5.576674);
   hCCpi0inFV_stack_10->SetBinError(9,6.107581);
   hCCpi0inFV_stack_10->SetBinError(10,6.010377);
   hCCpi0inFV_stack_10->SetBinError(11,6.038391);
   hCCpi0inFV_stack_10->SetBinError(12,6.389169);
   hCCpi0inFV_stack_10->SetBinError(13,6.707686);
   hCCpi0inFV_stack_10->SetBinError(14,6.874023);
   hCCpi0inFV_stack_10->SetBinError(15,7.61572);
   hCCpi0inFV_stack_10->SetBinError(16,8.139522);
   hCCpi0inFV_stack_10->SetBinError(17,8.652065);
   hCCpi0inFV_stack_10->SetBinError(18,8.801967);
   hCCpi0inFV_stack_10->SetBinError(19,10.33936);
   hCCpi0inFV_stack_10->SetBinError(20,11.04281);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,0.7319179);
   hNCinFV_stack_11->SetBinContent(4,0.8770706);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(6,0.5867651);
   hNCinFV_stack_11->SetBinContent(7,0.3900497);
   hNCinFV_stack_11->SetBinContent(8,0.9286332);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,0.7868615);
   hNCinFV_stack_11->SetBinContent(11,1.412273);
   hNCinFV_stack_11->SetBinContent(12,1.465526);
   hNCinFV_stack_11->SetBinContent(13,0.9286332);
   hNCinFV_stack_11->SetBinContent(14,1.608988);
   hNCinFV_stack_11->SetBinContent(15,0.7319179);
   hNCinFV_stack_11->SetBinContent(16,2.39585);
   hNCinFV_stack_11->SetBinContent(17,1.566961);
   hNCinFV_stack_11->SetBinContent(18,3.416383);
   hNCinFV_stack_11->SetBinContent(19,6.54415);
   hNCinFV_stack_11->SetBinContent(20,6.987453);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.438694);
   hNCinFV_stack_11->SetBinError(4,0.5197486);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(6,0.3387718);
   hNCinFV_stack_11->SetBinError(7,0.2758068);
   hNCinFV_stack_11->SetBinError(8,0.48078);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.3934307);
   hNCinFV_stack_11->SetBinError(11,0.6510715);
   hNCinFV_stack_11->SetBinError(12,0.6209405);
   hNCinFV_stack_11->SetBinError(13,0.48078);
   hNCinFV_stack_11->SetBinError(14,0.6801404);
   hNCinFV_stack_11->SetBinError(15,0.438694);
   hNCinFV_stack_11->SetBinError(16,0.7857345);
   hNCinFV_stack_11->SetBinError(17,0.5540095);
   hNCinFV_stack_11->SetBinError(18,0.9821106);
   hNCinFV_stack_11->SetBinError(19,1.332056);
   hNCinFV_stack_11->SetBinError(20,1.346148);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,13.20448);
   hnumuCCinFV_stack_12->SetBinContent(2,10.57229);
   hnumuCCinFV_stack_12->SetBinContent(3,10.28535);
   hnumuCCinFV_stack_12->SetBinContent(4,10.58475);
   hnumuCCinFV_stack_12->SetBinContent(5,10.76695);
   hnumuCCinFV_stack_12->SetBinContent(6,19.80928);
   hnumuCCinFV_stack_12->SetBinContent(7,17.03573);
   hnumuCCinFV_stack_12->SetBinContent(8,19.93949);
   hnumuCCinFV_stack_12->SetBinContent(9,23.7065);
   hnumuCCinFV_stack_12->SetBinContent(10,28.96699);
   hnumuCCinFV_stack_12->SetBinContent(11,32.91029);
   hnumuCCinFV_stack_12->SetBinContent(12,32.38514);
   hnumuCCinFV_stack_12->SetBinContent(13,29.18667);
   hnumuCCinFV_stack_12->SetBinContent(14,36.77855);
   hnumuCCinFV_stack_12->SetBinContent(15,43.82604);
   hnumuCCinFV_stack_12->SetBinContent(16,44.13519);
   hnumuCCinFV_stack_12->SetBinContent(17,62.09349);
   hnumuCCinFV_stack_12->SetBinContent(18,72.19125);
   hnumuCCinFV_stack_12->SetBinContent(19,87.36058);
   hnumuCCinFV_stack_12->SetBinContent(20,114.5996);
   hnumuCCinFV_stack_12->SetBinError(1,4.313688);
   hnumuCCinFV_stack_12->SetBinError(2,1.581298);
   hnumuCCinFV_stack_12->SetBinError(3,1.669046);
   hnumuCCinFV_stack_12->SetBinError(4,1.640774);
   hnumuCCinFV_stack_12->SetBinError(5,2.105197);
   hnumuCCinFV_stack_12->SetBinError(6,3.27021);
   hnumuCCinFV_stack_12->SetBinError(7,2.125007);
   hnumuCCinFV_stack_12->SetBinError(8,2.290843);
   hnumuCCinFV_stack_12->SetBinError(9,2.510201);
   hnumuCCinFV_stack_12->SetBinError(10,3.06499);
   hnumuCCinFV_stack_12->SetBinError(11,2.956238);
   hnumuCCinFV_stack_12->SetBinError(12,3.37087);
   hnumuCCinFV_stack_12->SetBinError(13,3.537657);
   hnumuCCinFV_stack_12->SetBinError(14,3.370909);
   hnumuCCinFV_stack_12->SetBinError(15,3.699367);
   hnumuCCinFV_stack_12->SetBinError(16,3.491543);
   hnumuCCinFV_stack_12->SetBinError(17,4.025499);
   hnumuCCinFV_stack_12->SetBinError(18,4.688421);
   hnumuCCinFV_stack_12->SetBinError(19,4.887338);
   hnumuCCinFV_stack_12->SetBinError(20,5.705854);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.2680781);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.813428);
   hnueCCinFV_stack_13->SetBinContent(16,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,1.412273);
   hnueCCinFV_stack_13->SetBinContent(19,1.127039);
   hnueCCinFV_stack_13->SetBinContent(20,3.75656);
   hnueCCinFV_stack_13->SetBinError(3,0.2680781);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.5045317);
   hnueCCinFV_stack_13->SetBinError(16,0.4800908);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.6510715);
   hnueCCinFV_stack_13->SetBinError(19,0.5201044);
   hnueCCinFV_stack_13->SetBinError(20,1.039357);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__14->SetBinContent(1,112.9762);
   hmcerror__14->SetBinContent(2,115.8467);
   hmcerror__14->SetBinContent(3,111.4962);
   hmcerror__14->SetBinContent(4,116.0328);
   hmcerror__14->SetBinContent(5,124.5203);
   hmcerror__14->SetBinContent(6,130.7283);
   hmcerror__14->SetBinContent(7,148.0655);
   hmcerror__14->SetBinContent(8,151.938);
   hmcerror__14->SetBinContent(9,180.0101);
   hmcerror__14->SetBinContent(10,183.2484);
   hmcerror__14->SetBinContent(11,196.2388);
   hmcerror__14->SetBinContent(12,210.4213);
   hmcerror__14->SetBinContent(13,218.1922);
   hmcerror__14->SetBinContent(14,237.9017);
   hmcerror__14->SetBinContent(15,289.7603);
   hmcerror__14->SetBinContent(16,322.9207);
   hmcerror__14->SetBinContent(17,371.3704);
   hmcerror__14->SetBinContent(18,404.9852);
   hmcerror__14->SetBinContent(19,535.0745);
   hmcerror__14->SetBinContent(20,645.3251);
   hmcerror__14->SetBinError(1,32.7651);
   hmcerror__14->SetBinError(2,33.09063);
   hmcerror__14->SetBinError(3,32.4333);
   hmcerror__14->SetBinError(4,29.64068);
   hmcerror__14->SetBinError(5,34.70741);
   hmcerror__14->SetBinError(6,34.13059);
   hmcerror__14->SetBinError(7,39.78756);
   hmcerror__14->SetBinError(8,39.49346);
   hmcerror__14->SetBinError(9,46.64124);
   hmcerror__14->SetBinError(10,48.34237);
   hmcerror__14->SetBinError(11,50.89261);
   hmcerror__14->SetBinError(12,55.27649);
   hmcerror__14->SetBinError(13,57.17836);
   hmcerror__14->SetBinError(14,65.13165);
   hmcerror__14->SetBinError(15,74.93117);
   hmcerror__14->SetBinError(16,83.8983);
   hmcerror__14->SetBinError(17,98.60878);
   hmcerror__14->SetBinError(18,95.13031);
   hmcerror__14->SetBinError(19,120.8785);
   hmcerror__14->SetBinError(20,133.41);
   hmcerror__14->SetBinError(21,0.3895343);
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
   Double_t _fy3017[20] = {
   88,
   73,
   83,
   91,
   104,
   102,
   113,
   127,
   129,
   146,
   180,
   161,
   218,
   231,
   243,
   291,
   334,
   413,
   509,
   562};
   Double_t _felx3017[20] = {
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
   Double_t _fely3017[20] = {
   9.5036,
   8.6693,
   9.234,
   9.6617,
   10.19804,
   10.0995,
   10.63015,
   11.26943,
   11.35782,
   12.08305,
   13.41641,
   12.68858,
   14.76482,
   15.19868,
   15.58846,
   17.05872,
   18.27567,
   20.3224,
   22.56103,
   23.70654};
   Double_t _fehx3017[20] = {
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
   Double_t _fehy3017[20] = {
   9.3021,
   8.4672,
   9.0323,
   9.46,
   10.19804,
   10.0995,
   10.63015,
   11.26943,
   11.35782,
   12.08305,
   13.41641,
   12.68858,
   14.76482,
   15.19868,
   15.58846,
   17.05872,
   18.27567,
   20.3224,
   22.56103,
   23.70654};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(12.19312);
   Graph_Graph3017->SetMaximum(637.8441);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4198.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 78.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 31.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  63.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  55.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3793.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 32.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 720.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
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
   Double_t _fely3018[20] = {
   0.2900177,
   0.2856416,
   0.2908914,
   0.2554508,
   0.278729,
   0.2610804,
   0.2687159,
   0.2599314,
   0.2591035,
   0.2638078,
   0.2593402,
   0.2626944,
   0.262055,
   0.2737755,
   0.2585971,
   0.2598109,
   0.2655268,
   0.2348983,
   0.2259097,
   0.206733};
   Double_t _fehx3018[20] = {
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
   Double_t _fehy3018[20] = {
   0.2900177,
   0.2856416,
   0.2908914,
   0.2554508,
   0.278729,
   0.2610804,
   0.2687159,
   0.2599314,
   0.2591035,
   0.2638078,
   0.2593402,
   0.2626944,
   0.262055,
   0.2737755,
   0.2585971,
   0.2598109,
   0.2655268,
   0.2348983,
   0.2259097,
   0.206733};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
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
   Double_t _fely3019[20] = {
   0.2900177,
   0.2856416,
   0.2908914,
   0.2554508,
   0.278729,
   0.2610804,
   0.2687159,
   0.2599314,
   0.2591035,
   0.2638078,
   0.2593402,
   0.2626944,
   0.262055,
   0.2737755,
   0.2585971,
   0.2598109,
   0.2655268,
   0.2348983,
   0.2259097,
   0.206733};
   Double_t _fehx3019[20] = {
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
   Double_t _fehy3019[20] = {
   0.2900177,
   0.2856416,
   0.2908914,
   0.2554508,
   0.278729,
   0.2610804,
   0.2687159,
   0.2599314,
   0.2591035,
   0.2638078,
   0.2593402,
   0.2626944,
   0.262055,
   0.2737755,
   0.2585971,
   0.2598109,
   0.2655268,
   0.2348983,
   0.2259097,
   0.206733};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3020[20] = {
   0.778925,
   0.6301433,
   0.7444197,
   0.7842609,
   0.8352053,
   0.7802445,
   0.7631756,
   0.8358673,
   0.7166265,
   0.7967326,
   0.9172499,
   0.7651318,
   0.9991189,
   0.9709895,
   0.8386241,
   0.9011501,
   0.8993716,
   1.01979,
   0.9512695,
   0.8708788};
   Double_t _felx3020[20] = {
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
   Double_t _fely3020[20] = {
   0.08412036,
   0.07483426,
   0.08281893,
   0.08326696,
   0.08189862,
   0.07725572,
   0.07179353,
   0.07417123,
   0.06309544,
   0.06593806,
   0.06836777,
   0.06030083,
   0.06766887,
   0.06388642,
   0.05379776,
   0.05282635,
   0.04921143,
   0.05018061,
   0.04216428,
   0.03673581};
   Double_t _fehx3020[20] = {
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
   Double_t _fehy3020[20] = {
   0.0823368,
   0.07308971,
   0.0810099,
   0.08152866,
   0.08189862,
   0.07725572,
   0.07179353,
   0.07417123,
   0.06309544,
   0.06593806,
   0.06836777,
   0.06030083,
   0.06766887,
   0.06388642,
   0.05379776,
   0.05282635,
   0.04921143,
   0.05018061,
   0.04216428,
   0.03673581};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.5038428);
   Graph_Graph3020->SetMaximum(1.121437);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

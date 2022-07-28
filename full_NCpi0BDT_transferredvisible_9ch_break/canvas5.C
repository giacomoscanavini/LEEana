#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Jun  5 00:24:18 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
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
   pad1->Range(-230.7692,-8.735665,1692.308,965.9806);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmc__13->SetBinContent(2,0.02789998);
   hmc__13->SetBinContent(3,22.03887);
   hmc__13->SetBinContent(4,159.8298);
   hmc__13->SetBinContent(5,318.7069);
   hmc__13->SetBinContent(6,428.0642);
   hmc__13->SetBinContent(7,436.7832);
   hmc__13->SetBinContent(8,398.4909);
   hmc__13->SetBinContent(9,375.4059);
   hmc__13->SetBinContent(10,288.291);
   hmc__13->SetBinContent(11,234.2723);
   hmc__13->SetBinContent(12,181.9459);
   hmc__13->SetBinContent(13,137.6396);
   hmc__13->SetBinContent(14,107.5718);
   hmc__13->SetBinContent(15,73.18703);
   hmc__13->SetBinContent(16,57.59468);
   hmc__13->SetBinContent(17,47.60373);
   hmc__13->SetBinContent(18,37.44512);
   hmc__13->SetBinContent(19,27.83144);
   hmc__13->SetBinContent(20,21.05034);
   hmc__13->SetBinContent(21,89.81636);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.2222319);
   hmc__13->SetBinError(3,7.205888);
   hmc__13->SetBinError(4,35.59172);
   hmc__13->SetBinError(5,71.68016);
   hmc__13->SetBinError(6,102.3557);
   hmc__13->SetBinError(7,105.1227);
   hmc__13->SetBinError(8,98.79264);
   hmc__13->SetBinError(9,93.02528);
   hmc__13->SetBinError(10,72.85497);
   hmc__13->SetBinError(11,63.10275);
   hmc__13->SetBinError(12,46.10456);
   hmc__13->SetBinError(13,40.34806);
   hmc__13->SetBinError(14,30.60318);
   hmc__13->SetBinError(15,25.55922);
   hmc__13->SetBinError(16,19.71759);
   hmc__13->SetBinError(17,17.52032);
   hmc__13->SetBinError(18,15.38217);
   hmc__13->SetBinError(19,10.22982);
   hmc__13->SetBinError(20,10.16192);
   hmc__13->SetBinError(21,28.33376);
   hmc__13->SetMinimum(-8.735665);
   hmc__13->SetMaximum(917.2448);
   hmc__13->SetEntries(3396.741);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1500);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(458.6224);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.5867651);
   hbadmatch_stack_1->SetBinContent(4,3.522078);
   hbadmatch_stack_1->SetBinContent(5,7.928977);
   hbadmatch_stack_1->SetBinContent(6,9.364809);
   hbadmatch_stack_1->SetBinContent(7,9.522371);
   hbadmatch_stack_1->SetBinContent(8,7.434544);
   hbadmatch_stack_1->SetBinContent(9,10.90997);
   hbadmatch_stack_1->SetBinContent(10,4.831664);
   hbadmatch_stack_1->SetBinContent(11,6.837413);
   hbadmatch_stack_1->SetBinContent(12,4.268601);
   hbadmatch_stack_1->SetBinContent(13,3.836202);
   hbadmatch_stack_1->SetBinContent(14,3.173044);
   hbadmatch_stack_1->SetBinContent(15,2.392469);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,1.02611);
   hbadmatch_stack_1->SetBinContent(18,1.608988);
   hbadmatch_stack_1->SetBinContent(19,1.295998);
   hbadmatch_stack_1->SetBinContent(20,0.6475976);
   hbadmatch_stack_1->SetBinContent(21,1.802323);
   hbadmatch_stack_1->SetBinError(3,0.3387718);
   hbadmatch_stack_1->SetBinError(4,1.077456);
   hbadmatch_stack_1->SetBinError(5,1.554134);
   hbadmatch_stack_1->SetBinError(6,2.389803);
   hbadmatch_stack_1->SetBinError(7,1.893742);
   hbadmatch_stack_1->SetBinError(8,1.336286);
   hbadmatch_stack_1->SetBinError(9,1.738137);
   hbadmatch_stack_1->SetBinError(10,1.171848);
   hbadmatch_stack_1->SetBinError(11,1.333605);
   hbadmatch_stack_1->SetBinError(12,1.074775);
   hbadmatch_stack_1->SetBinError(13,1.068792);
   hbadmatch_stack_1->SetBinError(14,0.9107915);
   hbadmatch_stack_1->SetBinError(15,0.7848912);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.5555328);
   hbadmatch_stack_1->SetBinError(18,0.6801404);
   hbadmatch_stack_1->SetBinError(19,0.5985864);
   hbadmatch_stack_1->SetBinError(20,0.3768218);
   hbadmatch_stack_1->SetBinError(21,0.7070809);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,21.8652);
   hext_stack_2->SetBinContent(5,34.29649);
   hext_stack_2->SetBinContent(6,26.19329);
   hext_stack_2->SetBinContent(7,32.28944);
   hext_stack_2->SetBinContent(8,24.09132);
   hext_stack_2->SetBinContent(9,27.70599);
   hext_stack_2->SetBinContent(10,17.03074);
   hext_stack_2->SetBinContent(11,21.47297);
   hext_stack_2->SetBinContent(12,19.8438);
   hext_stack_2->SetBinContent(13,9.820168);
   hext_stack_2->SetBinContent(14,5.191995);
   hext_stack_2->SetBinContent(15,2.759582);
   hext_stack_2->SetBinContent(16,6.538654);
   hext_stack_2->SetBinContent(17,3.083979);
   hext_stack_2->SetBinContent(18,2.923985);
   hext_stack_2->SetBinContent(19,2.587998);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,17.08699);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,3.355282);
   hext_stack_2->SetBinError(5,4.162079);
   hext_stack_2->SetBinError(6,3.446917);
   hext_stack_2->SetBinError(7,4.003475);
   hext_stack_2->SetBinError(8,3.376374);
   hext_stack_2->SetBinError(9,3.691011);
   hext_stack_2->SetBinError(10,2.922034);
   hext_stack_2->SetBinError(11,3.269585);
   hext_stack_2->SetBinError(12,3.219506);
   hext_stack_2->SetBinError(13,1.95542);
   hext_stack_2->SetBinError(14,1.468055);
   hext_stack_2->SetBinError(15,0.98084);
   hext_stack_2->SetBinError(16,1.818211);
   hext_stack_2->SetBinError(17,1.033093);
   hext_stack_2->SetBinError(18,1.040301);
   hext_stack_2->SetBinError(19,1.021308);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,3.011121);
   hext_stack_2->SetEntries(621);

   ci = 1491;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(3,0.4247338);
   hdirt_stack_3->SetBinContent(4,1.184374);
   hdirt_stack_3->SetBinContent(5,3.577902);
   hdirt_stack_3->SetBinContent(6,3.181329);
   hdirt_stack_3->SetBinContent(7,2.41108);
   hdirt_stack_3->SetBinContent(8,2.13641);
   hdirt_stack_3->SetBinContent(9,0.9099599);
   hdirt_stack_3->SetBinContent(10,1.180891);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinError(3,0.4247338);
   hdirt_stack_3->SetBinError(4,0.4939299);
   hdirt_stack_3->SetBinError(5,0.9787727);
   hdirt_stack_3->SetBinError(6,1.216167);
   hdirt_stack_3->SetBinError(7,0.7385812);
   hdirt_stack_3->SetBinError(8,0.7405108);
   hdirt_stack_3->SetBinError(9,0.5081362);
   hdirt_stack_3->SetBinError(10,0.6116823);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetEntries(69);

   ci = 1492;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(3,2.642058);
   houtFV_stack_4->SetBinContent(4,17.24858);
   houtFV_stack_4->SetBinContent(5,22.91266);
   houtFV_stack_4->SetBinContent(6,29.39562);
   houtFV_stack_4->SetBinContent(7,26.75282);
   houtFV_stack_4->SetBinContent(8,26.9242);
   houtFV_stack_4->SetBinContent(9,21.17607);
   houtFV_stack_4->SetBinContent(10,17.87808);
   houtFV_stack_4->SetBinContent(11,9.551661);
   houtFV_stack_4->SetBinContent(12,9.646017);
   houtFV_stack_4->SetBinContent(13,8.368484);
   houtFV_stack_4->SetBinContent(14,6.19609);
   houtFV_stack_4->SetBinContent(15,6.003504);
   houtFV_stack_4->SetBinContent(16,2.547157);
   houtFV_stack_4->SetBinContent(17,1.462145);
   houtFV_stack_4->SetBinContent(18,2.682774);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,1.270501);
   houtFV_stack_4->SetBinContent(21,3.317721);
   houtFV_stack_4->SetBinError(3,0.8327783);
   houtFV_stack_4->SetBinError(4,2.102877);
   houtFV_stack_4->SetBinError(5,2.506179);
   houtFV_stack_4->SetBinError(6,2.628835);
   houtFV_stack_4->SetBinError(7,2.526427);
   houtFV_stack_4->SetBinError(8,2.592221);
   houtFV_stack_4->SetBinError(9,2.326064);
   houtFV_stack_4->SetBinError(10,2.131575);
   houtFV_stack_4->SetBinError(11,1.477054);
   houtFV_stack_4->SetBinError(12,1.586647);
   houtFV_stack_4->SetBinError(13,1.486555);
   houtFV_stack_4->SetBinError(14,1.347391);
   houtFV_stack_4->SetBinError(15,1.253982);
   houtFV_stack_4->SetBinError(16,0.7064607);
   houtFV_stack_4->SetBinError(17,0.6198731);
   houtFV_stack_4->SetBinError(18,0.8783089);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.5895188);
   houtFV_stack_4->SetBinError(21,0.9197169);
   houtFV_stack_4->SetEntries(931);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7800399);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2855518);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.336735);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3162714);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1494;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.760452);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.482275);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.984316);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.826789);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.841408);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.477708);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7817042);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6701043);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5723521);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4410676);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5659695);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3697874);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4426097);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3657307);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3465144);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3419921);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1495;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.6223);
   hNCpi0inFVres_stack_7->SetBinContent(4,79.57309);
   hNCpi0inFVres_stack_7->SetBinContent(5,171.5345);
   hNCpi0inFVres_stack_7->SetBinContent(6,228.6067);
   hNCpi0inFVres_stack_7->SetBinContent(7,233.9252);
   hNCpi0inFVres_stack_7->SetBinContent(8,194.2475);
   hNCpi0inFVres_stack_7->SetBinContent(9,154.8604);
   hNCpi0inFVres_stack_7->SetBinContent(10,117.7119);
   hNCpi0inFVres_stack_7->SetBinContent(11,82.82748);
   hNCpi0inFVres_stack_7->SetBinContent(12,58.2508);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.78979);
   hNCpi0inFVres_stack_7->SetBinContent(14,28.02616);
   hNCpi0inFVres_stack_7->SetBinContent(15,18.72962);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.76673);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.958681);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.451646);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.524233);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.860098);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.43583);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,1.049818);
   hNCpi0inFVres_stack_7->SetBinError(4,2.856836);
   hNCpi0inFVres_stack_7->SetBinError(5,4.288296);
   hNCpi0inFVres_stack_7->SetBinError(6,4.914055);
   hNCpi0inFVres_stack_7->SetBinError(7,5.03443);
   hNCpi0inFVres_stack_7->SetBinError(8,4.5719);
   hNCpi0inFVres_stack_7->SetBinError(9,4.109403);
   hNCpi0inFVres_stack_7->SetBinError(10,3.594335);
   hNCpi0inFVres_stack_7->SetBinError(11,3.00728);
   hNCpi0inFVres_stack_7->SetBinError(12,2.532118);
   hNCpi0inFVres_stack_7->SetBinError(13,2.018803);
   hNCpi0inFVres_stack_7->SetBinError(14,1.744361);
   hNCpi0inFVres_stack_7->SetBinError(15,1.465671);
   hNCpi0inFVres_stack_7->SetBinError(16,1.285735);
   hNCpi0inFVres_stack_7->SetBinError(17,1.063591);
   hNCpi0inFVres_stack_7->SetBinError(18,0.73124);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8557094);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6017452);
   hNCpi0inFVres_stack_7->SetBinError(21,1.000338);
   hNCpi0inFVres_stack_7->SetEntries(26811);

   ci = 1496;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.300266);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.01099);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.42537);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.74765);
   hNCpi0inFVdis_stack_8->SetBinContent(7,31.63473);
   hNCpi0inFVdis_stack_8->SetBinContent(8,33.57346);
   hNCpi0inFVdis_stack_8->SetBinContent(9,30.60393);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.86041);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.90715);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.67108);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.29797);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.2949);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.491434);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.325932);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.294456);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.679656);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.998102);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.640306);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.981512);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5246312);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9991312);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.462813);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.744397);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.788447);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.883731);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.781997);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.612975);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.542924);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.418667);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.154072);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.129989);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9672645);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7554564);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6454851);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5894921);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6001799);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6902145);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9737813);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1497;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1498;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);

   ci = 1499;
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
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(3,0.7336084);
   hCCpi0inFV_stack_11->SetBinContent(4,4.338254);
   hCCpi0inFV_stack_11->SetBinContent(5,10.53644);
   hCCpi0inFV_stack_11->SetBinContent(6,30.17975);
   hCCpi0inFV_stack_11->SetBinContent(7,42.83133);
   hCCpi0inFV_stack_11->SetBinContent(8,53.06763);
   hCCpi0inFV_stack_11->SetBinContent(9,70.09264);
   hCCpi0inFV_stack_11->SetBinContent(10,60.82555);
   hCCpi0inFV_stack_11->SetBinContent(11,49.68245);
   hCCpi0inFV_stack_11->SetBinContent(12,44.43479);
   hCCpi0inFV_stack_11->SetBinContent(13,42.03509);
   hCCpi0inFV_stack_11->SetBinContent(14,33.08266);
   hCCpi0inFV_stack_11->SetBinContent(15,24.88155);
   hCCpi0inFV_stack_11->SetBinContent(16,17.66909);
   hCCpi0inFV_stack_11->SetBinContent(17,19.9353);
   hCCpi0inFV_stack_11->SetBinContent(18,15.38172);
   hCCpi0inFV_stack_11->SetBinContent(19,10.06643);
   hCCpi0inFV_stack_11->SetBinContent(20,6.456715);
   hCCpi0inFV_stack_11->SetBinContent(21,30.74463);
   hCCpi0inFV_stack_11->SetBinError(3,0.4394482);
   hCCpi0inFV_stack_11->SetBinError(4,1.092264);
   hCCpi0inFV_stack_11->SetBinError(5,1.585178);
   hCCpi0inFV_stack_11->SetBinError(6,2.82578);
   hCCpi0inFV_stack_11->SetBinError(7,3.185389);
   hCCpi0inFV_stack_11->SetBinError(8,3.671426);
   hCCpi0inFV_stack_11->SetBinError(9,4.201236);
   hCCpi0inFV_stack_11->SetBinError(10,3.901173);
   hCCpi0inFV_stack_11->SetBinError(11,3.51847);
   hCCpi0inFV_stack_11->SetBinError(12,3.3303);
   hCCpi0inFV_stack_11->SetBinError(13,3.297255);
   hCCpi0inFV_stack_11->SetBinError(14,2.983316);
   hCCpi0inFV_stack_11->SetBinError(15,2.423572);
   hCCpi0inFV_stack_11->SetBinError(16,2.065478);
   hCCpi0inFV_stack_11->SetBinError(17,2.290678);
   hCCpi0inFV_stack_11->SetBinError(18,2.016337);
   hCCpi0inFV_stack_11->SetBinError(19,1.569596);
   hCCpi0inFV_stack_11->SetBinError(20,1.209016);
   hCCpi0inFV_stack_11->SetBinError(21,2.825891);
   hCCpi0inFV_stack_11->SetEntries(2425);

   ci = 1500;
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
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(3,1.123658);
   hNCinFV_stack_12->SetBinContent(4,5.413731);
   hNCinFV_stack_12->SetBinContent(5,12.95606);
   hNCinFV_stack_12->SetBinContent(6,17.97407);
   hNCinFV_stack_12->SetBinContent(7,19.23442);
   hNCinFV_stack_12->SetBinContent(8,17.12513);
   hNCinFV_stack_12->SetBinContent(9,16.75851);
   hNCinFV_stack_12->SetBinContent(10,13.93119);
   hNCinFV_stack_12->SetBinContent(11,11.08696);
   hNCinFV_stack_12->SetBinContent(12,8.057858);
   hNCinFV_stack_12->SetBinContent(13,7.080435);
   hNCinFV_stack_12->SetBinContent(14,5.513934);
   hNCinFV_stack_12->SetBinContent(15,4.781557);
   hNCinFV_stack_12->SetBinContent(16,4.061472);
   hNCinFV_stack_12->SetBinContent(17,3.608027);
   hNCinFV_stack_12->SetBinContent(18,2.199135);
   hNCinFV_stack_12->SetBinContent(19,1.804013);
   hNCinFV_stack_12->SetBinContent(20,1.320373);
   hNCinFV_stack_12->SetBinContent(21,3.613098);
   hNCinFV_stack_12->SetBinError(3,0.5188295);
   hNCinFV_stack_12->SetBinError(4,1.225781);
   hNCinFV_stack_12->SetBinError(5,1.81045);
   hNCinFV_stack_12->SetBinError(6,2.122165);
   hNCinFV_stack_12->SetBinError(7,2.201623);
   hNCinFV_stack_12->SetBinError(8,2.011486);
   hNCinFV_stack_12->SetBinError(9,2.029381);
   hNCinFV_stack_12->SetBinError(10,1.862231);
   hNCinFV_stack_12->SetBinError(11,1.676543);
   hNCinFV_stack_12->SetBinError(12,1.455893);
   hNCinFV_stack_12->SetBinError(13,1.315357);
   hNCinFV_stack_12->SetBinError(14,1.210957);
   hNCinFV_stack_12->SetBinError(15,1.109407);
   hNCinFV_stack_12->SetBinError(16,1.021258);
   hNCinFV_stack_12->SetBinError(17,1.000625);
   hNCinFV_stack_12->SetBinError(18,0.7607114);
   hNCinFV_stack_12->SetBinError(19,0.7075491);
   hNCinFV_stack_12->SetBinError(20,0.5548703);
   hNCinFV_stack_12->SetBinError(21,1.001618);
   hNCinFV_stack_12->SetEntries(671);

   ci = 1501;
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
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(3,1.988877);
   hnumuCCinFV_stack_13->SetBinContent(4,14.82362);
   hnumuCCinFV_stack_13->SetBinContent(5,30.16387);
   hnumuCCinFV_stack_13->SetBinContent(6,49.87914);
   hnumuCCinFV_stack_13->SetBinContent(7,33.84204);
   hnumuCCinFV_stack_13->SetBinContent(8,36.17994);
   hnumuCCinFV_stack_13->SetBinContent(9,38.22895);
   hnumuCCinFV_stack_13->SetBinContent(10,27.49222);
   hnumuCCinFV_stack_13->SetBinContent(11,28.2634);
   hnumuCCinFV_stack_13->SetBinContent(12,19.00569);
   hnumuCCinFV_stack_13->SetBinContent(13,11.72384);
   hnumuCCinFV_stack_13->SetBinContent(14,13.36445);
   hnumuCCinFV_stack_13->SetBinContent(15,4.812798);
   hnumuCCinFV_stack_13->SetBinContent(16,6.09296);
   hnumuCCinFV_stack_13->SetBinContent(17,3.709814);
   hnumuCCinFV_stack_13->SetBinContent(18,2.621022);
   hnumuCCinFV_stack_13->SetBinContent(19,2.456656);
   hnumuCCinFV_stack_13->SetBinContent(20,3.140568);
   hnumuCCinFV_stack_13->SetBinContent(21,7.832143);
   hnumuCCinFV_stack_13->SetBinError(3,0.7088378);
   hnumuCCinFV_stack_13->SetBinError(4,2.689144);
   hnumuCCinFV_stack_13->SetBinError(5,3.559221);
   hnumuCCinFV_stack_13->SetBinError(6,4.316688);
   hnumuCCinFV_stack_13->SetBinError(7,3.362118);
   hnumuCCinFV_stack_13->SetBinError(8,3.595815);
   hnumuCCinFV_stack_13->SetBinError(9,3.37158);
   hnumuCCinFV_stack_13->SetBinError(10,2.930464);
   hnumuCCinFV_stack_13->SetBinError(11,3.790183);
   hnumuCCinFV_stack_13->SetBinError(12,2.292054);
   hnumuCCinFV_stack_13->SetBinError(13,2.186097);
   hnumuCCinFV_stack_13->SetBinError(14,2.128322);
   hnumuCCinFV_stack_13->SetBinError(15,1.142638);
   hnumuCCinFV_stack_13->SetBinError(16,1.264391);
   hnumuCCinFV_stack_13->SetBinError(17,0.9921139);
   hnumuCCinFV_stack_13->SetBinError(18,0.8174905);
   hnumuCCinFV_stack_13->SetBinError(19,0.8029903);
   hnumuCCinFV_stack_13->SetBinError(20,0.8606334);
   hnumuCCinFV_stack_13->SetBinError(21,1.466758);
   hnumuCCinFV_stack_13->SetEntries(1290);

   ci = 1502;
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
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(4,0.6089847);
   hnueCCinFV_stack_14->SetBinContent(5,0.8477485);
   hnueCCinFV_stack_14->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_14->SetBinContent(8,0.8950397);
   hnueCCinFV_stack_14->SetBinContent(9,1.328308);
   hnueCCinFV_stack_14->SetBinContent(10,1.624943);
   hnueCCinFV_stack_14->SetBinContent(11,0.7820846);
   hnueCCinFV_stack_14->SetBinContent(13,2.599681);
   hnueCCinFV_stack_14->SetBinContent(14,0.6428206);
   hnueCCinFV_stack_14->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(16,0.7936127);
   hnueCCinFV_stack_14->SetBinContent(17,0.4694181);
   hnueCCinFV_stack_14->SetBinContent(18,0.7302274);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(20,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(21,7.025779);
   hnueCCinFV_stack_14->SetBinError(4,0.4575996);
   hnueCCinFV_stack_14->SetBinError(5,0.4945047);
   hnueCCinFV_stack_14->SetBinError(6,0.1950249);
   hnueCCinFV_stack_14->SetBinError(7,0.4132436);
   hnueCCinFV_stack_14->SetBinError(8,0.450777);
   hnueCCinFV_stack_14->SetBinError(9,0.7394474);
   hnueCCinFV_stack_14->SetBinError(10,0.6861003);
   hnueCCinFV_stack_14->SetBinError(11,0.463181);
   hnueCCinFV_stack_14->SetBinError(13,1.660553);
   hnueCCinFV_stack_14->SetBinError(14,0.3735155);
   hnueCCinFV_stack_14->SetBinError(15,0.1950249);
   hnueCCinFV_stack_14->SetBinError(16,0.4753206);
   hnueCCinFV_stack_14->SetBinError(17,0.3326517);
   hnueCCinFV_stack_14->SetBinError(18,0.4379386);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(20,0.438694);
   hnueCCinFV_stack_14->SetBinError(21,1.704373);
   hnueCCinFV_stack_14->SetEntries(72);

   ci = 1503;
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
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__14->SetBinContent(2,0.02789998);
   hmcerror__14->SetBinContent(3,22.03887);
   hmcerror__14->SetBinContent(4,159.8298);
   hmcerror__14->SetBinContent(5,318.7069);
   hmcerror__14->SetBinContent(6,428.0642);
   hmcerror__14->SetBinContent(7,436.7832);
   hmcerror__14->SetBinContent(8,398.4909);
   hmcerror__14->SetBinContent(9,375.4059);
   hmcerror__14->SetBinContent(10,288.291);
   hmcerror__14->SetBinContent(11,234.2723);
   hmcerror__14->SetBinContent(12,181.9459);
   hmcerror__14->SetBinContent(13,137.6396);
   hmcerror__14->SetBinContent(14,107.5718);
   hmcerror__14->SetBinContent(15,73.18703);
   hmcerror__14->SetBinContent(16,57.59468);
   hmcerror__14->SetBinContent(17,47.60373);
   hmcerror__14->SetBinContent(18,37.44512);
   hmcerror__14->SetBinContent(19,27.83144);
   hmcerror__14->SetBinContent(20,21.05034);
   hmcerror__14->SetBinContent(21,89.81636);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.2222319);
   hmcerror__14->SetBinError(3,7.205888);
   hmcerror__14->SetBinError(4,35.59172);
   hmcerror__14->SetBinError(5,71.68016);
   hmcerror__14->SetBinError(6,102.3557);
   hmcerror__14->SetBinError(7,105.1227);
   hmcerror__14->SetBinError(8,98.79264);
   hmcerror__14->SetBinError(9,93.02528);
   hmcerror__14->SetBinError(10,72.85497);
   hmcerror__14->SetBinError(11,63.10275);
   hmcerror__14->SetBinError(12,46.10456);
   hmcerror__14->SetBinError(13,40.34806);
   hmcerror__14->SetBinError(14,30.60318);
   hmcerror__14->SetBinError(15,25.55922);
   hmcerror__14->SetBinError(16,19.71759);
   hmcerror__14->SetBinError(17,17.52032);
   hmcerror__14->SetBinError(18,15.38217);
   hmcerror__14->SetBinError(19,10.22982);
   hmcerror__14->SetBinError(20,10.16192);
   hmcerror__14->SetBinError(21,28.33376);
   hmcerror__14->SetEntries(3396.741);

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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3017[20] = {
   0,
   0,
   22,
   141,
   260,
   360,
   348,
   307,
   270,
   206,
   155,
   124,
   102,
   68,
   53,
   49,
   38,
   27,
   12,
   17};
   Double_t _felx3017[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3017[20] = {
   0,
   0,
   4.8417,
   11.87434,
   16.12452,
   18.97367,
   18.65476,
   17.52142,
   16.43168,
   14.3527,
   12.4499,
   11.13553,
   10.0995,
   8.3726,
   7.4105,
   7.1318,
   6.3013,
   5.3414,
   3.64022,
   4.2835};
   Double_t _fehx3017[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3017[20] = {
   1.1478,
   1.1478,
   4.6299,
   11.87434,
   16.12452,
   18.97367,
   18.65476,
   17.52142,
   16.43168,
   14.3527,
   12.4499,
   11.13553,
   10.0995,
   8.1701,
   7.2068,
   6.9277,
   6.0955,
   5.1322,
   3.4155,
   4.0673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(416.871);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2559.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 79.8","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 259.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 213.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1455.3","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  274.8","F");

   ci = 1497;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1498;
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

   ci = 1499;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 536.2","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 154.0","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 327.8","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3018[20] = {
   0,
   7.965305,
   0.3269626,
   0.2226851,
   0.2249093,
   0.2391129,
   0.2406748,
   0.2479169,
   0.2477992,
   0.2527133,
   0.2693564,
   0.2533971,
   0.2931428,
   0.2844907,
   0.3492315,
   0.3423508,
   0.3680451,
   0.4107924,
   0.3675635,
   0.4827438};
   Double_t _fehx3018[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3018[20] = {
   0,
   7.965305,
   0.3269626,
   0.2226851,
   0.2249093,
   0.2391129,
   0.2406748,
   0.2479169,
   0.2477992,
   0.2527133,
   0.2693564,
   0.2533971,
   0.2931428,
   0.2844907,
   0.3492315,
   0.3423508,
   0.3680451,
   0.4107924,
   0.3675635,
   0.4827438};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3019[20] = {
   0,
   7.528128,
   0.251098,
   0.2092169,
   0.2117627,
   0.2271945,
   0.2254513,
   0.2294976,
   0.2323585,
   0.2335484,
   0.226479,
   0.2222852,
   0.2238707,
   0.2214221,
   0.2451928,
   0.2149244,
   0.2348082,
   0.2247308,
   0.2374924,
   0.2463033};
   Double_t _fehx3019[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3019[20] = {
   0,
   7.528128,
   0.251098,
   0.2092169,
   0.2117627,
   0.2271945,
   0.2254513,
   0.2294976,
   0.2323585,
   0.2335484,
   0.226479,
   0.2222852,
   0.2238707,
   0.2214221,
   0.2451928,
   0.2149244,
   0.2348082,
   0.2247308,
   0.2374924,
   0.2463033};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3020[20] = {
   10,
   0,
   0.9982361,
   0.8821885,
   0.8157965,
   0.8409953,
   0.7967339,
   0.7704065,
   0.7192214,
   0.7145557,
   0.6616231,
   0.6815214,
   0.7410658,
   0.6321359,
   0.724172,
   0.8507731,
   0.7982568,
   0.7210552,
   0.4311671,
   0.8075878};
   Double_t _felx3020[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3020[20] = {
   0,
   0,
   0.2196891,
   0.07429367,
   0.05059355,
   0.04432434,
   0.04270942,
   0.04396942,
   0.04377042,
   0.04978545,
   0.05314285,
   0.06120242,
   0.07337645,
   0.07783267,
   0.1012543,
   0.1238274,
   0.1323699,
   0.1426461,
   0.1307953,
   0.2034884};
   Double_t _fehx3020[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3020[20] = {
   0,
   41.13981,
   0.2100788,
   0.07429367,
   0.05059355,
   0.04432434,
   0.04270942,
   0.04396942,
   0.04377042,
   0.04978545,
   0.05314285,
   0.06120242,
   0.07337645,
   0.0759502,
   0.09847099,
   0.1202837,
   0.1280467,
   0.1370592,
   0.1227209,
   0.1932178};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(45.25379);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_transferred_visible_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 01:05:08 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-8.735665,1692.308,736.0947);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hmc__4->SetBinContent(0,61.33416);
   hmc__4->SetBinContent(2,0.02789998);
   hmc__4->SetBinContent(3,22.03887);
   hmc__4->SetBinContent(4,159.8298);
   hmc__4->SetBinContent(5,318.7069);
   hmc__4->SetBinContent(6,428.0642);
   hmc__4->SetBinContent(7,436.7833);
   hmc__4->SetBinContent(8,398.4909);
   hmc__4->SetBinContent(9,375.4059);
   hmc__4->SetBinContent(10,288.291);
   hmc__4->SetBinContent(11,234.2724);
   hmc__4->SetBinContent(12,181.9459);
   hmc__4->SetBinContent(13,137.6396);
   hmc__4->SetBinContent(14,107.5718);
   hmc__4->SetBinContent(15,73.18703);
   hmc__4->SetBinContent(16,57.59468);
   hmc__4->SetBinContent(17,47.60373);
   hmc__4->SetBinContent(18,37.44512);
   hmc__4->SetBinContent(19,27.83143);
   hmc__4->SetBinContent(20,21.05034);
   hmc__4->SetBinContent(21,89.81636);
   hmc__4->SetBinError(0,3.489769);
   hmc__4->SetBinError(1,0.4212968);
   hmc__4->SetBinError(2,0.2349993);
   hmc__4->SetBinError(3,7.200484);
   hmc__4->SetBinError(4,35.59886);
   hmc__4->SetBinError(5,71.65776);
   hmc__4->SetBinError(6,102.3282);
   hmc__4->SetBinError(7,105.1202);
   hmc__4->SetBinError(8,98.80214);
   hmc__4->SetBinError(9,93.0006);
   hmc__4->SetBinError(10,72.8368);
   hmc__4->SetBinError(11,63.12331);
   hmc__4->SetBinError(12,46.10412);
   hmc__4->SetBinError(13,40.40881);
   hmc__4->SetBinError(14,30.63189);
   hmc__4->SetBinError(15,25.56106);
   hmc__4->SetBinError(16,19.72873);
   hmc__4->SetBinError(17,17.5439);
   hmc__4->SetBinError(18,15.32357);
   hmc__4->SetBinError(19,10.23037);
   hmc__4->SetBinError(20,10.15228);
   hmc__4->SetBinError(21,28.35535);
   hmc__4->SetMinimum(-8.735665);
   hmc__4->SetMaximum(698.8532);
   hmc__4->SetEntries(3457.329);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(458.6224);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(0,0.3917402);
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
   hbadmatch_stack_1->SetBinError(0,0.2770047);
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
   hbadmatch_stack_1->SetEntries(325);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hext_stack_2->SetBinContent(0,5.180405);
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
   hext_stack_2->SetBinError(0,1.49039);
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
   hext_stack_2->SetEntries(634);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hdirt_stack_3->SetBinContent(0,0.5164824);
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
   hdirt_stack_3->SetBinError(0,0.3040134);
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
   hdirt_stack_3->SetEntries(72);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   houtFV_stack_4->SetBinContent(0,4.500094);
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
   houtFV_stack_4->SetBinError(0,1.067945);
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
   houtFV_stack_4->SetEntries(950);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.697836);
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
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.29151);
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
   hNCpi0inFVcoh_stack_5->SetEntries(117);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,35.20032);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,13.03417);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,90.54663);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,195.0553);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,261.1437);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,268.7675);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,229.8567);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,187.3058);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,143.05);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,106.2649);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,76.66124);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,51.86946);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,39.99117);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,27.33266);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,19.27368);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,14.25314);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,9.159202);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,8.550235);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,6.695873);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,17.64071);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.962593);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.174934);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.042843);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.571542);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.237053);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,5.373134);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.959843);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.500957);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.956601);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.387018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.918412);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.351068);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.10633);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.756959);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.495204);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.244137);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.9396761);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.045578);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.9363232);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.409933);
   hNCpi0inFVnoncoh_stack_6->SetEntries(33079);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(0,4.102892);
   hCCpi0inFV_stack_7->SetBinContent(3,0.7336084);
   hCCpi0inFV_stack_7->SetBinContent(4,4.338254);
   hCCpi0inFV_stack_7->SetBinContent(5,10.53644);
   hCCpi0inFV_stack_7->SetBinContent(6,30.17975);
   hCCpi0inFV_stack_7->SetBinContent(7,42.83133);
   hCCpi0inFV_stack_7->SetBinContent(8,53.06763);
   hCCpi0inFV_stack_7->SetBinContent(9,70.09264);
   hCCpi0inFV_stack_7->SetBinContent(10,60.82555);
   hCCpi0inFV_stack_7->SetBinContent(11,49.68245);
   hCCpi0inFV_stack_7->SetBinContent(12,44.43479);
   hCCpi0inFV_stack_7->SetBinContent(13,42.03509);
   hCCpi0inFV_stack_7->SetBinContent(14,33.08266);
   hCCpi0inFV_stack_7->SetBinContent(15,24.88155);
   hCCpi0inFV_stack_7->SetBinContent(16,17.66909);
   hCCpi0inFV_stack_7->SetBinContent(17,19.9353);
   hCCpi0inFV_stack_7->SetBinContent(18,15.38172);
   hCCpi0inFV_stack_7->SetBinContent(19,10.06643);
   hCCpi0inFV_stack_7->SetBinContent(20,6.456715);
   hCCpi0inFV_stack_7->SetBinContent(21,30.74463);
   hCCpi0inFV_stack_7->SetBinError(0,1.000002);
   hCCpi0inFV_stack_7->SetBinError(3,0.4394482);
   hCCpi0inFV_stack_7->SetBinError(4,1.092264);
   hCCpi0inFV_stack_7->SetBinError(5,1.585178);
   hCCpi0inFV_stack_7->SetBinError(6,2.82578);
   hCCpi0inFV_stack_7->SetBinError(7,3.185389);
   hCCpi0inFV_stack_7->SetBinError(8,3.671426);
   hCCpi0inFV_stack_7->SetBinError(9,4.201236);
   hCCpi0inFV_stack_7->SetBinError(10,3.901173);
   hCCpi0inFV_stack_7->SetBinError(11,3.51847);
   hCCpi0inFV_stack_7->SetBinError(12,3.3303);
   hCCpi0inFV_stack_7->SetBinError(13,3.297255);
   hCCpi0inFV_stack_7->SetBinError(14,2.983316);
   hCCpi0inFV_stack_7->SetBinError(15,2.423572);
   hCCpi0inFV_stack_7->SetBinError(16,2.065478);
   hCCpi0inFV_stack_7->SetBinError(17,2.290678);
   hCCpi0inFV_stack_7->SetBinError(18,2.016337);
   hCCpi0inFV_stack_7->SetBinError(19,1.569596);
   hCCpi0inFV_stack_7->SetBinError(20,1.209016);
   hCCpi0inFV_stack_7->SetBinError(21,2.825891);
   hCCpi0inFV_stack_7->SetEntries(2444);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(0,5.910286);
   hNCinFV_stack_8->SetBinContent(3,1.123658);
   hNCinFV_stack_8->SetBinContent(4,5.413731);
   hNCinFV_stack_8->SetBinContent(5,12.95606);
   hNCinFV_stack_8->SetBinContent(6,17.97407);
   hNCinFV_stack_8->SetBinContent(7,19.23442);
   hNCinFV_stack_8->SetBinContent(8,17.12513);
   hNCinFV_stack_8->SetBinContent(9,16.75851);
   hNCinFV_stack_8->SetBinContent(10,13.93119);
   hNCinFV_stack_8->SetBinContent(11,11.08696);
   hNCinFV_stack_8->SetBinContent(12,8.057858);
   hNCinFV_stack_8->SetBinContent(13,7.080435);
   hNCinFV_stack_8->SetBinContent(14,5.513934);
   hNCinFV_stack_8->SetBinContent(15,4.781557);
   hNCinFV_stack_8->SetBinContent(16,4.061472);
   hNCinFV_stack_8->SetBinContent(17,3.608027);
   hNCinFV_stack_8->SetBinContent(18,2.199135);
   hNCinFV_stack_8->SetBinContent(19,1.804013);
   hNCinFV_stack_8->SetBinContent(20,1.320373);
   hNCinFV_stack_8->SetBinContent(21,3.613098);
   hNCinFV_stack_8->SetBinError(0,1.225543);
   hNCinFV_stack_8->SetBinError(3,0.5188295);
   hNCinFV_stack_8->SetBinError(4,1.225781);
   hNCinFV_stack_8->SetBinError(5,1.81045);
   hNCinFV_stack_8->SetBinError(6,2.122165);
   hNCinFV_stack_8->SetBinError(7,2.201623);
   hNCinFV_stack_8->SetBinError(8,2.011486);
   hNCinFV_stack_8->SetBinError(9,2.029381);
   hNCinFV_stack_8->SetBinError(10,1.862231);
   hNCinFV_stack_8->SetBinError(11,1.676543);
   hNCinFV_stack_8->SetBinError(12,1.455893);
   hNCinFV_stack_8->SetBinError(13,1.315357);
   hNCinFV_stack_8->SetBinError(14,1.210957);
   hNCinFV_stack_8->SetBinError(15,1.109407);
   hNCinFV_stack_8->SetBinError(16,1.021258);
   hNCinFV_stack_8->SetBinError(17,1.000625);
   hNCinFV_stack_8->SetBinError(18,0.7607114);
   hNCinFV_stack_8->SetBinError(19,0.7075491);
   hNCinFV_stack_8->SetBinError(20,0.5548703);
   hNCinFV_stack_8->SetBinError(21,1.001618);
   hNCinFV_stack_8->SetEntries(696);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(0,2.987827);
   hnumuCCinFV_stack_9->SetBinContent(3,1.988877);
   hnumuCCinFV_stack_9->SetBinContent(4,14.82362);
   hnumuCCinFV_stack_9->SetBinContent(5,30.16387);
   hnumuCCinFV_stack_9->SetBinContent(6,49.87914);
   hnumuCCinFV_stack_9->SetBinContent(7,33.84204);
   hnumuCCinFV_stack_9->SetBinContent(8,36.17994);
   hnumuCCinFV_stack_9->SetBinContent(9,38.22895);
   hnumuCCinFV_stack_9->SetBinContent(10,27.49222);
   hnumuCCinFV_stack_9->SetBinContent(11,28.2634);
   hnumuCCinFV_stack_9->SetBinContent(12,19.00569);
   hnumuCCinFV_stack_9->SetBinContent(13,11.72384);
   hnumuCCinFV_stack_9->SetBinContent(14,13.36445);
   hnumuCCinFV_stack_9->SetBinContent(15,4.812798);
   hnumuCCinFV_stack_9->SetBinContent(16,6.09296);
   hnumuCCinFV_stack_9->SetBinContent(17,3.709814);
   hnumuCCinFV_stack_9->SetBinContent(18,2.621022);
   hnumuCCinFV_stack_9->SetBinContent(19,2.456656);
   hnumuCCinFV_stack_9->SetBinContent(20,3.140568);
   hnumuCCinFV_stack_9->SetBinContent(21,7.832143);
   hnumuCCinFV_stack_9->SetBinError(0,0.8824253);
   hnumuCCinFV_stack_9->SetBinError(3,0.7088378);
   hnumuCCinFV_stack_9->SetBinError(4,2.689144);
   hnumuCCinFV_stack_9->SetBinError(5,3.559221);
   hnumuCCinFV_stack_9->SetBinError(6,4.316688);
   hnumuCCinFV_stack_9->SetBinError(7,3.362118);
   hnumuCCinFV_stack_9->SetBinError(8,3.595815);
   hnumuCCinFV_stack_9->SetBinError(9,3.37158);
   hnumuCCinFV_stack_9->SetBinError(10,2.930464);
   hnumuCCinFV_stack_9->SetBinError(11,3.790183);
   hnumuCCinFV_stack_9->SetBinError(12,2.292054);
   hnumuCCinFV_stack_9->SetBinError(13,2.186097);
   hnumuCCinFV_stack_9->SetBinError(14,2.128322);
   hnumuCCinFV_stack_9->SetBinError(15,1.142638);
   hnumuCCinFV_stack_9->SetBinError(16,1.264391);
   hnumuCCinFV_stack_9->SetBinError(17,0.9921139);
   hnumuCCinFV_stack_9->SetBinError(18,0.8174905);
   hnumuCCinFV_stack_9->SetBinError(19,0.8029903);
   hnumuCCinFV_stack_9->SetBinError(20,0.8606334);
   hnumuCCinFV_stack_9->SetBinError(21,1.466758);
   hnumuCCinFV_stack_9->SetEntries(1303);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(0,1.846285);
   hnueCCinFV_stack_10->SetBinContent(4,0.6089847);
   hnueCCinFV_stack_10->SetBinContent(5,0.8477485);
   hnueCCinFV_stack_10->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_10->SetBinContent(8,0.8950397);
   hnueCCinFV_stack_10->SetBinContent(9,1.328308);
   hnueCCinFV_stack_10->SetBinContent(10,1.624943);
   hnueCCinFV_stack_10->SetBinContent(11,0.7820846);
   hnueCCinFV_stack_10->SetBinContent(13,2.599681);
   hnueCCinFV_stack_10->SetBinContent(14,0.6428206);
   hnueCCinFV_stack_10->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(16,0.7936127);
   hnueCCinFV_stack_10->SetBinContent(17,0.4694181);
   hnueCCinFV_stack_10->SetBinContent(18,0.7302274);
   hnueCCinFV_stack_10->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(20,0.7319179);
   hnueCCinFV_stack_10->SetBinContent(21,7.025779);
   hnueCCinFV_stack_10->SetBinError(0,1.195901);
   hnueCCinFV_stack_10->SetBinError(4,0.4575996);
   hnueCCinFV_stack_10->SetBinError(5,0.4945047);
   hnueCCinFV_stack_10->SetBinError(6,0.1950249);
   hnueCCinFV_stack_10->SetBinError(7,0.4132436);
   hnueCCinFV_stack_10->SetBinError(8,0.450777);
   hnueCCinFV_stack_10->SetBinError(9,0.7394474);
   hnueCCinFV_stack_10->SetBinError(10,0.6861003);
   hnueCCinFV_stack_10->SetBinError(11,0.463181);
   hnueCCinFV_stack_10->SetBinError(13,1.660553);
   hnueCCinFV_stack_10->SetBinError(14,0.3735155);
   hnueCCinFV_stack_10->SetBinError(15,0.1950249);
   hnueCCinFV_stack_10->SetBinError(16,0.4753206);
   hnueCCinFV_stack_10->SetBinError(17,0.3326517);
   hnueCCinFV_stack_10->SetBinError(18,0.4379386);
   hnueCCinFV_stack_10->SetBinError(19,0.3401776);
   hnueCCinFV_stack_10->SetBinError(20,0.438694);
   hnueCCinFV_stack_10->SetBinError(21,1.704373);
   hnueCCinFV_stack_10->SetEntries(77);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);
   hmcerror__5->SetBinContent(0,61.33416);
   hmcerror__5->SetBinContent(2,0.02789998);
   hmcerror__5->SetBinContent(3,22.03887);
   hmcerror__5->SetBinContent(4,159.8298);
   hmcerror__5->SetBinContent(5,318.7069);
   hmcerror__5->SetBinContent(6,428.0642);
   hmcerror__5->SetBinContent(7,436.7833);
   hmcerror__5->SetBinContent(8,398.4909);
   hmcerror__5->SetBinContent(9,375.4059);
   hmcerror__5->SetBinContent(10,288.291);
   hmcerror__5->SetBinContent(11,234.2724);
   hmcerror__5->SetBinContent(12,181.9459);
   hmcerror__5->SetBinContent(13,137.6396);
   hmcerror__5->SetBinContent(14,107.5718);
   hmcerror__5->SetBinContent(15,73.18703);
   hmcerror__5->SetBinContent(16,57.59468);
   hmcerror__5->SetBinContent(17,47.60373);
   hmcerror__5->SetBinContent(18,37.44512);
   hmcerror__5->SetBinContent(19,27.83143);
   hmcerror__5->SetBinContent(20,21.05034);
   hmcerror__5->SetBinContent(21,89.81636);
   hmcerror__5->SetBinError(0,3.489769);
   hmcerror__5->SetBinError(1,0.4212968);
   hmcerror__5->SetBinError(2,0.2349993);
   hmcerror__5->SetBinError(3,7.200484);
   hmcerror__5->SetBinError(4,35.59886);
   hmcerror__5->SetBinError(5,71.65776);
   hmcerror__5->SetBinError(6,102.3282);
   hmcerror__5->SetBinError(7,105.1202);
   hmcerror__5->SetBinError(8,98.80214);
   hmcerror__5->SetBinError(9,93.0006);
   hmcerror__5->SetBinError(10,72.8368);
   hmcerror__5->SetBinError(11,63.12331);
   hmcerror__5->SetBinError(12,46.10412);
   hmcerror__5->SetBinError(13,40.40881);
   hmcerror__5->SetBinError(14,30.63189);
   hmcerror__5->SetBinError(15,25.56106);
   hmcerror__5->SetBinError(16,19.72873);
   hmcerror__5->SetBinError(17,17.5439);
   hmcerror__5->SetBinError(18,15.32357);
   hmcerror__5->SetBinError(19,10.23037);
   hmcerror__5->SetBinError(20,10.15228);
   hmcerror__5->SetBinError(21,28.35535);
   hmcerror__5->SetEntries(3457.329);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
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
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
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
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(416.871);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.6,0.9,0.93,NULL,"brNDC");
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

   ci = 1444;
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

   ci = 1445;
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

   ci = 1446;
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

   ci = 1447;
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

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1748.8","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 536.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 154.0","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 327.8","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_reco_Enu_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0,
   8.422917,
   0.3267174,
   0.2227298,
   0.224839,
   0.2390488,
   0.2406689,
   0.2479408,
   0.2477334,
   0.2526502,
   0.2694441,
   0.2533947,
   0.2935841,
   0.2847576,
   0.3492567,
   0.3425443,
   0.3685405,
   0.4092275,
   0.3675832,
   0.4822858};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0,
   8.422917,
   0.3267174,
   0.2227298,
   0.224839,
   0.2390488,
   0.2406689,
   0.2479408,
   0.2477334,
   0.2526502,
   0.2694441,
   0.2533947,
   0.2935841,
   0.2847576,
   0.3492567,
   0.3425443,
   0.3685405,
   0.4092275,
   0.3675832,
   0.4822858};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0,
   8.006731,
   0.2513387,
   0.2092229,
   0.2117656,
   0.2271952,
   0.2254514,
   0.2294983,
   0.2323588,
   0.2335485,
   0.22648,
   0.2222866,
   0.2238754,
   0.2214296,
   0.2452245,
   0.2149412,
   0.2348896,
   0.2249041,
   0.2375726,
   0.2466056};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0,
   8.006731,
   0.2513387,
   0.2092229,
   0.2117656,
   0.2271952,
   0.2254514,
   0.2294983,
   0.2323588,
   0.2335485,
   0.22648,
   0.2222866,
   0.2238754,
   0.2214296,
   0.2452245,
   0.2149412,
   0.2348896,
   0.2249041,
   0.2375726,
   0.2466056};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   10,
   0,
   0.9982361,
   0.8821885,
   0.8157965,
   0.8409953,
   0.7967338,
   0.7704065,
   0.7192214,
   0.7145557,
   0.6616231,
   0.6815213,
   0.7410658,
   0.6321359,
   0.724172,
   0.8507731,
   0.7982568,
   0.7210552,
   0.4311671,
   0.8075878};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
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
   0.05314284,
   0.06120242,
   0.07337645,
   0.07783267,
   0.1012543,
   0.1238274,
   0.1323699,
   0.1426461,
   0.1307953,
   0.2034884};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
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
   0.05314284,
   0.06120242,
   0.07337645,
   0.0759502,
   0.09847099,
   0.1202837,
   0.1280467,
   0.1370592,
   0.1227209,
   0.1932178};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(45.25379);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_reco_Enu_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 22:15:17 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-1.307692,-15.95011,1.25641,1763.746);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmc__13->SetBinContent(1,25.25307);
   hmc__13->SetBinContent(2,25.95109);
   hmc__13->SetBinContent(3,27.08835);
   hmc__13->SetBinContent(4,36.93878);
   hmc__13->SetBinContent(5,36.08803);
   hmc__13->SetBinContent(6,40.2851);
   hmc__13->SetBinContent(7,44.41084);
   hmc__13->SetBinContent(8,53.64986);
   hmc__13->SetBinContent(9,52.0762);
   hmc__13->SetBinContent(10,66.07346);
   hmc__13->SetBinContent(11,69.12733);
   hmc__13->SetBinContent(12,79.04793);
   hmc__13->SetBinContent(13,99.78362);
   hmc__13->SetBinContent(14,111.4064);
   hmc__13->SetBinContent(15,113.6382);
   hmc__13->SetBinContent(16,140.5576);
   hmc__13->SetBinContent(17,179.1888);
   hmc__13->SetBinContent(18,172.7184);
   hmc__13->SetBinContent(19,227.5841);
   hmc__13->SetBinContent(20,287.1149);
   hmc__13->SetBinContent(21,351.8236);
   hmc__13->SetBinContent(22,418.6753);
   hmc__13->SetBinContent(23,559.2939);
   hmc__13->SetBinContent(24,791.7722);
   hmc__13->SetBinContent(25,797.5056);
   hmc__13->SetBinError(1,6.41683);
   hmc__13->SetBinError(2,7.492845);
   hmc__13->SetBinError(3,7.441217);
   hmc__13->SetBinError(4,9.13994);
   hmc__13->SetBinError(5,10.74592);
   hmc__13->SetBinError(6,10.82785);
   hmc__13->SetBinError(7,12.16831);
   hmc__13->SetBinError(8,14.53176);
   hmc__13->SetBinError(9,14.29804);
   hmc__13->SetBinError(10,20.07668);
   hmc__13->SetBinError(11,17.84491);
   hmc__13->SetBinError(12,21.37971);
   hmc__13->SetBinError(13,25.62878);
   hmc__13->SetBinError(14,30.65501);
   hmc__13->SetBinError(15,30.17224);
   hmc__13->SetBinError(16,39.66361);
   hmc__13->SetBinError(17,48.6448);
   hmc__13->SetBinError(18,46.78444);
   hmc__13->SetBinError(19,58.32279);
   hmc__13->SetBinError(20,72.8599);
   hmc__13->SetBinError(21,89.53475);
   hmc__13->SetBinError(22,100.7095);
   hmc__13->SetBinError(23,137.6804);
   hmc__13->SetBinError(24,190.2428);
   hmc__13->SetBinError(25,184.6704);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-15.95011);
   hmc__13->SetMaximum(1674.762);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-1,1);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(837.3808);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.4386579);
   hbadmatch_stack_1->SetBinContent(11,0.5514397);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1950248);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.1106221);
   hbadmatch_stack_1->SetBinContent(17,0.4433452);
   hbadmatch_stack_1->SetBinContent(18,0.9303237);
   hbadmatch_stack_1->SetBinContent(19,1.592784);
   hbadmatch_stack_1->SetBinContent(20,2.135739);
   hbadmatch_stack_1->SetBinContent(21,2.568299);
   hbadmatch_stack_1->SetBinContent(22,2.569494);
   hbadmatch_stack_1->SetBinContent(23,2.355635);
   hbadmatch_stack_1->SetBinContent(24,2.640747);
   hbadmatch_stack_1->SetBinContent(25,2.221022);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.3118223);
   hbadmatch_stack_1->SetBinError(11,0.400425);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1950249);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.1106221);
   hbadmatch_stack_1->SetBinError(17,0.3157494);
   hbadmatch_stack_1->SetBinError(18,0.4814682);
   hbadmatch_stack_1->SetBinError(19,0.6984583);
   hbadmatch_stack_1->SetBinError(20,0.784953);
   hbadmatch_stack_1->SetBinError(21,0.8406231);
   hbadmatch_stack_1->SetBinError(22,0.8658395);
   hbadmatch_stack_1->SetBinError(23,0.842407);
   hbadmatch_stack_1->SetBinError(24,0.784705);
   hbadmatch_stack_1->SetBinError(25,0.8217494);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,0.973192);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,5.132913);
   hext_stack_2->SetBinContent(5,0.8131978);
   hext_stack_2->SetBinContent(6,1.626396);
   hext_stack_2->SetBinContent(7,1.939204);
   hext_stack_2->SetBinContent(8,4.028449);
   hext_stack_2->SetBinContent(9,1.779209);
   hext_stack_2->SetBinContent(10,5.243836);
   hext_stack_2->SetBinContent(11,4.587862);
   hext_stack_2->SetBinContent(12,2.270781);
   hext_stack_2->SetBinContent(13,5.027592);
   hext_stack_2->SetBinContent(14,5.683567);
   hext_stack_2->SetBinContent(15,4.028449);
   hext_stack_2->SetBinContent(16,1.950793);
   hext_stack_2->SetBinContent(17,8.291914);
   hext_stack_2->SetBinContent(18,1.283228);
   hext_stack_2->SetBinContent(19,2.973055);
   hext_stack_2->SetBinContent(20,6.505524);
   hext_stack_2->SetBinContent(21,3.490578);
   hext_stack_2->SetBinContent(22,1.614806);
   hext_stack_2->SetBinContent(23,3.946247);
   hext_stack_2->SetBinContent(24,2.103607);
   hext_stack_2->SetBinContent(25,1.779209);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,0.5618727);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.814759);
   hext_stack_2->SetBinError(5,0.5750177);
   hext_stack_2->SetBinError(6,0.8131978);
   hext_stack_2->SetBinError(7,0.912471);
   hext_stack_2->SetBinError(8,1.479117);
   hext_stack_2->SetBinError(9,0.9206235);
   hext_stack_2->SetBinError(10,1.596444);
   hext_stack_2->SetBinError(11,1.593539);
   hext_stack_2->SetBinError(12,0.8582747);
   hext_stack_2->SetBinError(13,1.426537);
   hext_stack_2->SetBinError(14,1.429781);
   hext_stack_2->SetBinError(15,1.479117);
   hext_stack_2->SetBinError(16,0.8755137);
   hext_stack_2->SetBinError(17,2.149865);
   hext_stack_2->SetBinError(18,0.9073794);
   hext_stack_2->SetBinError(19,1.346105);
   hext_stack_2->SetBinError(20,1.993884);
   hext_stack_2->SetBinError(21,1.110227);
   hext_stack_2->SetBinError(22,0.8528597);
   hext_stack_2->SetBinError(23,1.458663);
   hext_stack_2->SetBinError(24,0.9761052);
   hext_stack_2->SetBinError(25,0.9206235);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.311381);
   hdirt_stack_3->SetBinContent(6,0.2441834);
   hdirt_stack_3->SetBinContent(12,1.167841e-06);
   hdirt_stack_3->SetBinContent(16,0.2665913);
   hdirt_stack_3->SetBinContent(20,0.165896);
   hdirt_stack_3->SetBinContent(22,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.266188);
   hdirt_stack_3->SetBinError(1,0.311381);
   hdirt_stack_3->SetBinError(6,0.2441834);
   hdirt_stack_3->SetBinError(12,1.167841e-06);
   hdirt_stack_3->SetBinError(16,0.2665913);
   hdirt_stack_3->SetBinError(20,0.165896);
   hdirt_stack_3->SetBinError(22,0.1380715);
   hdirt_stack_3->SetBinError(24,0.266188);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.310595);
   houtFV_stack_4->SetBinContent(2,0.7664332);
   houtFV_stack_4->SetBinContent(3,0.1967154);
   houtFV_stack_4->SetBinContent(4,0.267433);
   houtFV_stack_4->SetBinContent(6,1.263592);
   houtFV_stack_4->SetBinContent(8,0.9557728);
   houtFV_stack_4->SetBinContent(10,0.7302274);
   houtFV_stack_4->SetBinContent(11,0.3024228);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.3917402);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(17,1.268811);
   houtFV_stack_4->SetBinContent(18,0.3917402);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,1.925454);
   houtFV_stack_4->SetBinContent(21,2.588468);
   houtFV_stack_4->SetBinContent(22,2.504272);
   houtFV_stack_4->SetBinContent(23,2.916509);
   houtFV_stack_4->SetBinContent(24,6.341196);
   houtFV_stack_4->SetBinContent(25,5.66809);
   houtFV_stack_4->SetBinError(1,0.6040812);
   houtFV_stack_4->SetBinError(2,0.5453574);
   houtFV_stack_4->SetBinError(3,0.1967154);
   houtFV_stack_4->SetBinError(4,0.267433);
   houtFV_stack_4->SetBinError(6,0.5980343);
   houtFV_stack_4->SetBinError(8,0.4925073);
   houtFV_stack_4->SetBinError(10,0.4379386);
   houtFV_stack_4->SetBinError(11,0.222641);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetBinError(14,0.2770047);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(17,0.5889569);
   houtFV_stack_4->SetBinError(18,0.2770047);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.7159781);
   houtFV_stack_4->SetBinError(21,0.8076976);
   houtFV_stack_4->SetBinError(22,0.7772927);
   houtFV_stack_4->SetBinError(23,0.8429157);
   houtFV_stack_4->SetBinError(24,1.484685);
   houtFV_stack_4->SetBinError(25,1.440584);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01841896);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3161793);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.6245954);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.2531109);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3856834);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.7401639);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.7549738);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.5718877);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.1035);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9346534);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.673047);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.57562);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.366724);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.070541);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.249577);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.876596);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.633837);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.113195);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.529668);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.964993);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.479099);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.764085);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.697297);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.579487);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.92892);
   hNCpi0inFVres_stack_7->SetBinContent(25,10.88083);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1483122);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3159616);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1061462);
   hNCpi0inFVres_stack_7->SetBinError(4,0.121995);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2483066);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2514626);
   hNCpi0inFVres_stack_7->SetBinError(7,0.2785327);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3574817);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2910321);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5090257);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1515276);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3805014);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6549308);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3734137);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4839955);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3416625);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2560564);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6835256);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6413197);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6102841);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6701404);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6905743);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9722772);
   hNCpi0inFVres_stack_7->SetBinError(24,1.328917);
   hNCpi0inFVres_stack_7->SetBinError(25,1.473129);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4689575);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2864453);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.4259865);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.365254);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6742129);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7151577);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.027831);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.4237618);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4880677);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6002853);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6460394);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9352768);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.285487);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9833073);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.715372);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7974594);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8403621);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.31641);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.749276);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.463322);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.031786);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.270788);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.090115);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.042088);
   hNCpi0inFVdis_stack_8->SetBinContent(25,13.89321);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1846656);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1203239);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2113803);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5337789);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2628324);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3001258);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3528245);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2174606);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.303913);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.305973);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1901823);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3441073);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3943102);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3161786);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8482405);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3069072);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1916625);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3148328);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6357339);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5320731);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6451913);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7043588);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7607619);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9988207);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.441865);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.41215);
   hCCpi0inFV_stack_10->SetBinContent(2,15.19552);
   hCCpi0inFV_stack_10->SetBinContent(3,18.45665);
   hCCpi0inFV_stack_10->SetBinContent(4,23.29372);
   hCCpi0inFV_stack_10->SetBinContent(5,23.63051);
   hCCpi0inFV_stack_10->SetBinContent(6,28.73445);
   hCCpi0inFV_stack_10->SetBinContent(7,31.86267);
   hCCpi0inFV_stack_10->SetBinContent(8,36.7824);
   hCCpi0inFV_stack_10->SetBinContent(9,37.79073);
   hCCpi0inFV_stack_10->SetBinContent(10,46.86996);
   hCCpi0inFV_stack_10->SetBinContent(11,49.95968);
   hCCpi0inFV_stack_10->SetBinContent(12,59.93179);
   hCCpi0inFV_stack_10->SetBinContent(13,71.49529);
   hCCpi0inFV_stack_10->SetBinContent(14,86.29249);
   hCCpi0inFV_stack_10->SetBinContent(15,85.11712);
   hCCpi0inFV_stack_10->SetBinContent(16,112.6239);
   hCCpi0inFV_stack_10->SetBinContent(17,138.3228);
   hCCpi0inFV_stack_10->SetBinContent(18,136.4883);
   hCCpi0inFV_stack_10->SetBinContent(19,184.7099);
   hCCpi0inFV_stack_10->SetBinContent(20,227.8764);
   hCCpi0inFV_stack_10->SetBinContent(21,275.6825);
   hCCpi0inFV_stack_10->SetBinContent(22,336.9088);
   hCCpi0inFV_stack_10->SetBinContent(23,458.6825);
   hCCpi0inFV_stack_10->SetBinContent(24,641.2927);
   hCCpi0inFV_stack_10->SetBinContent(25,653.4355);
   hCCpi0inFV_stack_10->SetBinError(1,1.794114);
   hCCpi0inFV_stack_10->SetBinError(2,1.967372);
   hCCpi0inFV_stack_10->SetBinError(3,2.198392);
   hCCpi0inFV_stack_10->SetBinError(4,2.430423);
   hCCpi0inFV_stack_10->SetBinError(5,2.459916);
   hCCpi0inFV_stack_10->SetBinError(6,2.706336);
   hCCpi0inFV_stack_10->SetBinError(7,2.868178);
   hCCpi0inFV_stack_10->SetBinError(8,3.098128);
   hCCpi0inFV_stack_10->SetBinError(9,3.070151);
   hCCpi0inFV_stack_10->SetBinError(10,3.438776);
   hCCpi0inFV_stack_10->SetBinError(11,3.564044);
   hCCpi0inFV_stack_10->SetBinError(12,3.890885);
   hCCpi0inFV_stack_10->SetBinError(13,4.23581);
   hCCpi0inFV_stack_10->SetBinError(14,4.686737);
   hCCpi0inFV_stack_10->SetBinError(15,4.638641);
   hCCpi0inFV_stack_10->SetBinError(16,5.340103);
   hCCpi0inFV_stack_10->SetBinError(17,6.070428);
   hCCpi0inFV_stack_10->SetBinError(18,5.850528);
   hCCpi0inFV_stack_10->SetBinError(19,6.789523);
   hCCpi0inFV_stack_10->SetBinError(20,7.589191);
   hCCpi0inFV_stack_10->SetBinError(21,8.344857);
   hCCpi0inFV_stack_10->SetBinError(22,9.225413);
   hCCpi0inFV_stack_10->SetBinError(23,10.8082);
   hCCpi0inFV_stack_10->SetBinError(24,12.76093);
   hCCpi0inFV_stack_10->SetBinError(25,12.8438);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(7,0.5867651);
   hNCinFV_stack_11->SetBinContent(8,0.7336084);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.3934307);
   hNCinFV_stack_11->SetBinContent(11,1.412273);
   hNCinFV_stack_11->SetBinContent(12,0.5901461);
   hNCinFV_stack_11->SetBinContent(13,1.805704);
   hNCinFV_stack_11->SetBinContent(14,0.7336084);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.6803553);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,1.660551);
   hNCinFV_stack_11->SetBinContent(19,1.413964);
   hNCinFV_stack_11->SetBinContent(20,0.9286332);
   hNCinFV_stack_11->SetBinContent(21,1.465526);
   hNCinFV_stack_11->SetBinContent(22,2.931052);
   hNCinFV_stack_11->SetBinContent(23,4.396579);
   hNCinFV_stack_11->SetBinContent(24,6.10193);
   hNCinFV_stack_11->SetBinContent(25,4.843263);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(7,0.3387718);
   hNCinFV_stack_11->SetBinError(8,0.4394482);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.2781975);
   hNCinFV_stack_11->SetBinError(11,0.6510715);
   hNCinFV_stack_11->SetBinError(12,0.340721);
   hNCinFV_stack_11->SetBinError(13,0.7080169);
   hNCinFV_stack_11->SetBinError(14,0.4394482);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.4810838);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.650847);
   hNCinFV_stack_11->SetBinError(19,0.6515799);
   hNCinFV_stack_11->SetBinError(20,0.48078);
   hNCinFV_stack_11->SetBinError(21,0.6209405);
   hNCinFV_stack_11->SetBinError(22,0.8781425);
   hNCinFV_stack_11->SetBinError(23,1.075501);
   hNCinFV_stack_11->SetBinError(24,1.240429);
   hNCinFV_stack_11->SetBinError(25,1.093512);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,9.398762);
   hnumuCCinFV_stack_12->SetBinContent(2,8.104901);
   hnumuCCinFV_stack_12->SetBinContent(3,7.234771);
   hnumuCCinFV_stack_12->SetBinContent(4,5.956884);
   hnumuCCinFV_stack_12->SetBinContent(5,9.641487);
   hnumuCCinFV_stack_12->SetBinContent(6,6.409451);
   hnumuCCinFV_stack_12->SetBinContent(7,8.029044);
   hnumuCCinFV_stack_12->SetBinContent(8,9.427344);
   hnumuCCinFV_stack_12->SetBinContent(9,10.74336);
   hnumuCCinFV_stack_12->SetBinContent(10,9.783834);
   hnumuCCinFV_stack_12->SetBinContent(11,11.07444);
   hnumuCCinFV_stack_12->SetBinContent(12,12.97566);
   hnumuCCinFV_stack_12->SetBinContent(13,17.51225);
   hnumuCCinFV_stack_12->SetBinContent(14,15.53518);
   hnumuCCinFV_stack_12->SetBinContent(15,18.32623);
   hnumuCCinFV_stack_12->SetBinContent(16,21.82122);
   hnumuCCinFV_stack_12->SetBinContent(17,28.71167);
   hnumuCCinFV_stack_12->SetBinContent(18,27.49976);
   hnumuCCinFV_stack_12->SetBinContent(19,30.25319);
   hnumuCCinFV_stack_12->SetBinContent(20,40.67999);
   hnumuCCinFV_stack_12->SetBinContent(21,58.21181);
   hnumuCCinFV_stack_12->SetBinContent(22,61.96695);
   hnumuCCinFV_stack_12->SetBinContent(23,75.11166);
   hnumuCCinFV_stack_12->SetBinContent(24,111.6812);
   hnumuCCinFV_stack_12->SetBinContent(25,104.2476);
   hnumuCCinFV_stack_12->SetBinError(1,1.624061);
   hnumuCCinFV_stack_12->SetBinError(2,1.431857);
   hnumuCCinFV_stack_12->SetBinError(3,1.491292);
   hnumuCCinFV_stack_12->SetBinError(4,1.248569);
   hnumuCCinFV_stack_12->SetBinError(5,1.907719);
   hnumuCCinFV_stack_12->SetBinError(6,1.343775);
   hnumuCCinFV_stack_12->SetBinError(7,1.470445);
   hnumuCCinFV_stack_12->SetBinError(8,1.661787);
   hnumuCCinFV_stack_12->SetBinError(9,1.701674);
   hnumuCCinFV_stack_12->SetBinError(10,1.592856);
   hnumuCCinFV_stack_12->SetBinError(11,1.689285);
   hnumuCCinFV_stack_12->SetBinError(12,1.990346);
   hnumuCCinFV_stack_12->SetBinError(13,2.405138);
   hnumuCCinFV_stack_12->SetBinError(14,2.129739);
   hnumuCCinFV_stack_12->SetBinError(15,2.287036);
   hnumuCCinFV_stack_12->SetBinError(16,2.417278);
   hnumuCCinFV_stack_12->SetBinError(17,2.753863);
   hnumuCCinFV_stack_12->SetBinError(18,2.745447);
   hnumuCCinFV_stack_12->SetBinError(19,2.789751);
   hnumuCCinFV_stack_12->SetBinError(20,3.246945);
   hnumuCCinFV_stack_12->SetBinError(21,6.017683);
   hnumuCCinFV_stack_12->SetBinError(22,4.002977);
   hnumuCCinFV_stack_12->SetBinError(23,4.686892);
   hnumuCCinFV_stack_12->SetBinError(24,6.170003);
   hnumuCCinFV_stack_12->SetBinError(25,5.784093);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.6184032);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(21,1.020533);
   hnueCCinFV_stack_13->SetBinContent(22,1.073786);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,2.373622);
   hnueCCinFV_stack_13->SetBinContent(25,0.536893);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4810838);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.4653145);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,0.4800908);
   hnueCCinFV_stack_13->SetBinError(21,0.5892049);
   hnueCCinFV_stack_13->SetBinError(22,0.5557297);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.7306657);
   hnueCCinFV_stack_13->SetBinError(25,0.3929602);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__14->SetBinContent(1,25.25307);
   hmcerror__14->SetBinContent(2,25.95109);
   hmcerror__14->SetBinContent(3,27.08835);
   hmcerror__14->SetBinContent(4,36.93878);
   hmcerror__14->SetBinContent(5,36.08803);
   hmcerror__14->SetBinContent(6,40.2851);
   hmcerror__14->SetBinContent(7,44.41084);
   hmcerror__14->SetBinContent(8,53.64986);
   hmcerror__14->SetBinContent(9,52.0762);
   hmcerror__14->SetBinContent(10,66.07346);
   hmcerror__14->SetBinContent(11,69.12733);
   hmcerror__14->SetBinContent(12,79.04793);
   hmcerror__14->SetBinContent(13,99.78362);
   hmcerror__14->SetBinContent(14,111.4064);
   hmcerror__14->SetBinContent(15,113.6382);
   hmcerror__14->SetBinContent(16,140.5576);
   hmcerror__14->SetBinContent(17,179.1888);
   hmcerror__14->SetBinContent(18,172.7184);
   hmcerror__14->SetBinContent(19,227.5841);
   hmcerror__14->SetBinContent(20,287.1149);
   hmcerror__14->SetBinContent(21,351.8236);
   hmcerror__14->SetBinContent(22,418.6753);
   hmcerror__14->SetBinContent(23,559.2939);
   hmcerror__14->SetBinContent(24,791.7722);
   hmcerror__14->SetBinContent(25,797.5056);
   hmcerror__14->SetBinError(1,6.41683);
   hmcerror__14->SetBinError(2,7.492845);
   hmcerror__14->SetBinError(3,7.441217);
   hmcerror__14->SetBinError(4,9.13994);
   hmcerror__14->SetBinError(5,10.74592);
   hmcerror__14->SetBinError(6,10.82785);
   hmcerror__14->SetBinError(7,12.16831);
   hmcerror__14->SetBinError(8,14.53176);
   hmcerror__14->SetBinError(9,14.29804);
   hmcerror__14->SetBinError(10,20.07668);
   hmcerror__14->SetBinError(11,17.84491);
   hmcerror__14->SetBinError(12,21.37971);
   hmcerror__14->SetBinError(13,25.62878);
   hmcerror__14->SetBinError(14,30.65501);
   hmcerror__14->SetBinError(15,30.17224);
   hmcerror__14->SetBinError(16,39.66361);
   hmcerror__14->SetBinError(17,48.6448);
   hmcerror__14->SetBinError(18,46.78444);
   hmcerror__14->SetBinError(19,58.32279);
   hmcerror__14->SetBinError(20,72.8599);
   hmcerror__14->SetBinError(21,89.53475);
   hmcerror__14->SetBinError(22,100.7095);
   hmcerror__14->SetBinError(23,137.6804);
   hmcerror__14->SetBinError(24,190.2428);
   hmcerror__14->SetBinError(25,184.6704);
   hmcerror__14->SetBinError(26,0.3895343);
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
   
   Double_t _fx3017[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3017[25] = {
   19,
   18,
   28,
   34,
   36,
   31,
   48,
   50,
   64,
   60,
   87,
   76,
   109,
   104,
   146,
   151,
   160,
   179,
   207,
   278,
   292,
   394,
   446,
   627,
   554};
   Double_t _felx3017[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3017[25] = {
   4.5151,
   4.4008,
   5.4358,
   5.9703,
   6.1381,
   5.7094,
   7.0604,
   7.2025,
   8.1273,
   7.8743,
   9.4503,
   8.8425,
   10.44031,
   10.19804,
   12.08305,
   12.28821,
   12.64911,
   13.37909,
   14.38749,
   16.67333,
   17.08801,
   19.84943,
   21.11871,
   25.03997,
   23.5372};
   Double_t _fehx3017[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3017[25] = {
   4.3011,
   4.1858,
   5.2271,
   5.7635,
   5.9318,
   5.5017,
   6.8561,
   6.9985,
   7.9246,
   7.6713,
   9.2488,
   8.6406,
   10.44031,
   10.19804,
   12.08305,
   12.28821,
   12.64911,
   13.37909,
   14.38749,
   16.67333,
   17.08801,
   19.84943,
   21.11871,
   25.03997,
   23.5372};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(12.23928);
   Graph_Graph3017->SetMaximum(715.884);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.9/25","");
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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_muon_costheta_all");
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
   
   Double_t _fx3018[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3018[25] = {
   0.254101,
   0.2887295,
   0.2747017,
   0.2474348,
   0.2977697,
   0.2687804,
   0.2739941,
   0.270863,
   0.2745599,
   0.303854,
   0.2581455,
   0.2704651,
   0.2568435,
   0.2751639,
   0.2655114,
   0.2821875,
   0.2714723,
   0.2708712,
   0.2562692,
   0.2537657,
   0.2544876,
   0.2405431,
   0.2461682,
   0.2402747,
   0.23156};
   Double_t _fehx3018[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3018[25] = {
   0.254101,
   0.2887295,
   0.2747017,
   0.2474348,
   0.2977697,
   0.2687804,
   0.2739941,
   0.270863,
   0.2745599,
   0.303854,
   0.2581455,
   0.2704651,
   0.2568435,
   0.2751639,
   0.2655114,
   0.2821875,
   0.2714723,
   0.2708712,
   0.2562692,
   0.2537657,
   0.2544876,
   0.2405431,
   0.2461682,
   0.2402747,
   0.23156};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
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
   Graph_Graph3018->GetXaxis()->SetTitle("Muon cos #theta");
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
   
   Double_t _fx3019[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3019[25] = {
   0.254101,
   0.2887295,
   0.2747017,
   0.2474348,
   0.2977697,
   0.2687804,
   0.2739941,
   0.270863,
   0.2745599,
   0.303854,
   0.2581455,
   0.2704651,
   0.2568435,
   0.2751639,
   0.2655114,
   0.2821875,
   0.2714723,
   0.2708712,
   0.2562692,
   0.2537657,
   0.2544876,
   0.2405431,
   0.2461682,
   0.2402747,
   0.23156};
   Double_t _fehx3019[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3019[25] = {
   0.254101,
   0.2887295,
   0.2747017,
   0.2474348,
   0.2977697,
   0.2687804,
   0.2739941,
   0.270863,
   0.2745599,
   0.303854,
   0.2581455,
   0.2704651,
   0.2568435,
   0.2751639,
   0.2655114,
   0.2821875,
   0.2714723,
   0.2708712,
   0.2562692,
   0.2537657,
   0.2544876,
   0.2405431,
   0.2461682,
   0.2402747,
   0.23156};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
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
   
   Double_t _fx3020[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3020[25] = {
   0.7523839,
   0.6936125,
   1.033655,
   0.9204419,
   0.9975606,
   0.7695153,
   1.080817,
   0.9319688,
   1.228968,
   0.9080801,
   1.258547,
   0.961442,
   1.092364,
   0.9335193,
   1.284779,
   1.074292,
   0.8929127,
   1.036369,
   0.909554,
   0.9682536,
   0.8299614,
   0.9410633,
   0.7974341,
   0.7918944,
   0.694666};
   Double_t _felx3020[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3020[25] = {
   0.1787941,
   0.1695806,
   0.2006693,
   0.1616269,
   0.1700869,
   0.1417249,
   0.1589792,
   0.1342501,
   0.1560655,
   0.1191749,
   0.1367086,
   0.1118625,
   0.1046295,
   0.0915391,
   0.1063291,
   0.08742467,
   0.07059095,
   0.07746186,
   0.06321837,
   0.05807199,
   0.04856982,
   0.04741009,
   0.0377596,
   0.03162522,
   0.02951353};
   Double_t _fehx3020[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3020[25] = {
   0.1703199,
   0.1612957,
   0.1929649,
   0.1560284,
   0.1643703,
   0.1365691,
   0.154379,
   0.1304477,
   0.1521732,
   0.1161026,
   0.1337937,
   0.1093084,
   0.1046295,
   0.0915391,
   0.1063291,
   0.08742467,
   0.07059095,
   0.07746186,
   0.06321837,
   0.05807199,
   0.04856982,
   0.04741009,
   0.0377596,
   0.03162522,
   0.02951353};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.4372011);
   Graph_Graph3020->SetMaximum(1.479172);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_muon_costheta_all",25,-1,1);

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

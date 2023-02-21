#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Jan  9 21:29:50 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",60,83,1200,900);
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
   pad1->Range(-1.307692,-2.459874,1.25641,272.0103);
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
   hmc__25->SetBinContent(1,31.48425);
   hmc__25->SetBinContent(2,15.8466);
   hmc__25->SetBinContent(3,16.70967);
   hmc__25->SetBinContent(4,16.50137);
   hmc__25->SetBinContent(5,12.64917);
   hmc__25->SetBinContent(6,18.42272);
   hmc__25->SetBinContent(7,15.45458);
   hmc__25->SetBinContent(8,19.61091);
   hmc__25->SetBinContent(9,16.76477);
   hmc__25->SetBinContent(10,22.14639);
   hmc__25->SetBinContent(11,21.0492);
   hmc__25->SetBinContent(12,22.03094);
   hmc__25->SetBinContent(13,25.85354);
   hmc__25->SetBinContent(14,30.80088);
   hmc__25->SetBinContent(15,35.10405);
   hmc__25->SetBinContent(16,37.07092);
   hmc__25->SetBinContent(17,54.03951);
   hmc__25->SetBinContent(18,55.99601);
   hmc__25->SetBinContent(19,70.05997);
   hmc__25->SetBinContent(20,122.9937);
   hmc__25->SetBinError(1,15.13331);
   hmc__25->SetBinError(2,21.94662);
   hmc__25->SetBinError(3,11.20368);
   hmc__25->SetBinError(4,10.04225);
   hmc__25->SetBinError(5,7.967729);
   hmc__25->SetBinError(6,8.177785);
   hmc__25->SetBinError(7,11.59729);
   hmc__25->SetBinError(8,8.971832);
   hmc__25->SetBinError(9,9.600519);
   hmc__25->SetBinError(10,10.88884);
   hmc__25->SetBinError(11,9.753588);
   hmc__25->SetBinError(12,11.3006);
   hmc__25->SetBinError(13,10.56919);
   hmc__25->SetBinError(14,14.84331);
   hmc__25->SetBinError(15,18.78859);
   hmc__25->SetBinError(16,23.17732);
   hmc__25->SetBinError(17,21.31606);
   hmc__25->SetBinError(18,25.54809);
   hmc__25->SetBinError(19,28.3093);
   hmc__25->SetBinError(20,45.82263);
   hmc__25->SetBinError(21,0.3895343);
   hmc__25->SetMinimum(-2.459874);
   hmc__25->SetMaximum(258.2868);
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
   hs9_stack_9->SetMaximum(129.1434);
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
   hbadmatch_stack_1->SetBinContent(1,1.654529);
   hbadmatch_stack_1->SetBinContent(2,0.2239027);
   hbadmatch_stack_1->SetBinContent(3,0.9876927);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,0.6637264);
   hbadmatch_stack_1->SetBinContent(6,0.4516559);
   hbadmatch_stack_1->SetBinContent(7,0.8345929);
   hbadmatch_stack_1->SetBinContent(8,0.6084836);
   hbadmatch_stack_1->SetBinContent(9,2.260058);
   hbadmatch_stack_1->SetBinContent(10,0.3293715);
   hbadmatch_stack_1->SetBinContent(11,1.218764);
   hbadmatch_stack_1->SetBinContent(12,1.132463);
   hbadmatch_stack_1->SetBinContent(13,0.4578882);
   hbadmatch_stack_1->SetBinContent(14,1.282211);
   hbadmatch_stack_1->SetBinContent(15,1.368392);
   hbadmatch_stack_1->SetBinContent(16,1.214862);
   hbadmatch_stack_1->SetBinContent(17,1.681116);
   hbadmatch_stack_1->SetBinContent(18,1.693935);
   hbadmatch_stack_1->SetBinContent(19,0.6913732);
   hbadmatch_stack_1->SetBinContent(20,2.094536);
   hbadmatch_stack_1->SetBinError(1,0.6573206);
   hbadmatch_stack_1->SetBinError(2,0.2239027);
   hbadmatch_stack_1->SetBinError(3,0.5313904);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.4126426);
   hbadmatch_stack_1->SetBinError(6,0.3194089);
   hbadmatch_stack_1->SetBinError(7,0.3701396);
   hbadmatch_stack_1->SetBinError(8,0.351627);
   hbadmatch_stack_1->SetBinError(9,0.844931);
   hbadmatch_stack_1->SetBinError(10,0.2372648);
   hbadmatch_stack_1->SetBinError(11,0.4975547);
   hbadmatch_stack_1->SetBinError(12,0.4490922);
   hbadmatch_stack_1->SetBinError(13,0.3244737);
   hbadmatch_stack_1->SetBinError(14,0.7037581);
   hbadmatch_stack_1->SetBinError(15,0.6442853);
   hbadmatch_stack_1->SetBinError(16,0.6423831);
   hbadmatch_stack_1->SetBinError(17,0.6909619);
   hbadmatch_stack_1->SetBinError(18,0.596507);
   hbadmatch_stack_1->SetBinError(19,0.4265279);
   hbadmatch_stack_1->SetBinError(20,0.7055618);
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
   houtFV_stack_4->SetBinContent(1,8.536579);
   houtFV_stack_4->SetBinContent(2,5.694542);
   houtFV_stack_4->SetBinContent(3,4.794298);
   houtFV_stack_4->SetBinContent(4,4.436097);
   houtFV_stack_4->SetBinContent(5,2.085217);
   houtFV_stack_4->SetBinContent(6,2.864362);
   houtFV_stack_4->SetBinContent(7,3.54133);
   houtFV_stack_4->SetBinContent(8,3.089219);
   houtFV_stack_4->SetBinContent(9,4.091517);
   houtFV_stack_4->SetBinContent(10,2.891649);
   houtFV_stack_4->SetBinContent(11,3.654632);
   houtFV_stack_4->SetBinContent(12,3.114756);
   houtFV_stack_4->SetBinContent(13,1.834746);
   houtFV_stack_4->SetBinContent(14,3.559922);
   houtFV_stack_4->SetBinContent(15,6.125951);
   houtFV_stack_4->SetBinContent(16,5.045778);
   houtFV_stack_4->SetBinContent(17,6.83672);
   houtFV_stack_4->SetBinContent(18,9.963062);
   houtFV_stack_4->SetBinContent(19,12.15137);
   houtFV_stack_4->SetBinContent(20,21.93552);
   houtFV_stack_4->SetBinError(1,1.518169);
   houtFV_stack_4->SetBinError(2,1.199936);
   houtFV_stack_4->SetBinError(3,1.061276);
   houtFV_stack_4->SetBinError(4,1.141453);
   houtFV_stack_4->SetBinError(5,0.6809492);
   houtFV_stack_4->SetBinError(6,0.7635749);
   houtFV_stack_4->SetBinError(7,0.9783397);
   houtFV_stack_4->SetBinError(8,0.860989);
   houtFV_stack_4->SetBinError(9,1.013696);
   houtFV_stack_4->SetBinError(10,0.8281284);
   houtFV_stack_4->SetBinError(11,0.961426);
   houtFV_stack_4->SetBinError(12,0.8231581);
   houtFV_stack_4->SetBinError(13,0.6321797);
   houtFV_stack_4->SetBinError(14,0.9066515);
   houtFV_stack_4->SetBinError(15,1.213671);
   houtFV_stack_4->SetBinError(16,1.233494);
   houtFV_stack_4->SetBinError(17,1.317252);
   houtFV_stack_4->SetBinError(18,1.515558);
   houtFV_stack_4->SetBinError(19,1.717841);
   houtFV_stack_4->SetBinError(20,2.657603);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7485337);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2776807);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.03712227);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03723348);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.04620773);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1067359);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3879936);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02625185);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02632953);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03337039);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04622833);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1816864);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,2.603205);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.788261);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.946862);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.041399);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.654885);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.75646);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.246968);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.152465);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.161561);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.311614);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.603275);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.224761);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.823061);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.210602);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.820814);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.457336);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.008619);
   hNCpi0inFVres_stack_7->SetBinContent(18,10.95496);
   hNCpi0inFVres_stack_7->SetBinContent(19,13.38106);
   hNCpi0inFVres_stack_7->SetBinContent(20,18.3822);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5071168);
   hNCpi0inFVres_stack_7->SetBinError(2,0.333958);
   hNCpi0inFVres_stack_7->SetBinError(3,0.391297);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4046918);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3182635);
   hNCpi0inFVres_stack_7->SetBinError(6,0.50557);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4261564);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4299423);
   hNCpi0inFVres_stack_7->SetBinError(9,0.331418);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5018911);
   hNCpi0inFVres_stack_7->SetBinError(11,0.394991);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6341359);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5507971);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6299547);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7265585);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7633019);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8285675);
   hNCpi0inFVres_stack_7->SetBinError(18,1.162906);
   hNCpi0inFVres_stack_7->SetBinError(19,1.167196);
   hNCpi0inFVres_stack_7->SetBinError(20,1.332924);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.280437);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3626849);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3910915);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6509864);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3452174);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6777824);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3331357);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.9098278);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4953935);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.960434);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.117561);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4271249);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.059063);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6977654);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.105849);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.138537);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.524285);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.168515);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.923412);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.31197);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4950574);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1129511);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1442999);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3115768);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.144115);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3465538);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1216296);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5816532);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2072926);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2932344);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3485719);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.120902);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3414578);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2039382);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3417231);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6607297);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5260977);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7073125);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7682756);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.477784);
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
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02405068);
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
   hNCinFV_stack_11->SetBinContent(1,1.168072);
   hNCinFV_stack_11->SetBinContent(2,1.175077);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.5273583);
   hNCinFV_stack_11->SetBinContent(5,0.3188656);
   hNCinFV_stack_11->SetBinContent(6,0.6605878);
   hNCinFV_stack_11->SetBinContent(7,1.10824);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,0.8823131);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.4687016);
   hNCinFV_stack_11->SetBinContent(12,0.6420774);
   hNCinFV_stack_11->SetBinContent(13,1.221843);
   hNCinFV_stack_11->SetBinContent(14,0.7973693);
   hNCinFV_stack_11->SetBinContent(15,2.398791);
   hNCinFV_stack_11->SetBinContent(16,1.325601);
   hNCinFV_stack_11->SetBinContent(17,1.233097);
   hNCinFV_stack_11->SetBinContent(18,3.56027);
   hNCinFV_stack_11->SetBinContent(19,7.2783);
   hNCinFV_stack_11->SetBinContent(20,9.942314);
   hNCinFV_stack_11->SetBinError(1,0.5065469);
   hNCinFV_stack_11->SetBinError(2,0.6718897);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.3119605);
   hNCinFV_stack_11->SetBinError(5,0.2315548);
   hNCinFV_stack_11->SetBinError(6,0.4119686);
   hNCinFV_stack_11->SetBinError(7,0.5009505);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.4663359);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.3636471);
   hNCinFV_stack_11->SetBinError(12,0.3715262);
   hNCinFV_stack_11->SetBinError(13,0.7689385);
   hNCinFV_stack_11->SetBinError(14,0.4339838);
   hNCinFV_stack_11->SetBinError(15,1.117897);
   hNCinFV_stack_11->SetBinError(16,0.5330392);
   hNCinFV_stack_11->SetBinError(17,0.475614);
   hNCinFV_stack_11->SetBinError(18,0.9038153);
   hNCinFV_stack_11->SetBinError(19,1.509857);
   hNCinFV_stack_11->SetBinError(20,1.715437);
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
   hmcerror__26->SetBinContent(1,31.48425);
   hmcerror__26->SetBinContent(2,15.8466);
   hmcerror__26->SetBinContent(3,16.70967);
   hmcerror__26->SetBinContent(4,16.50137);
   hmcerror__26->SetBinContent(5,12.64917);
   hmcerror__26->SetBinContent(6,18.42272);
   hmcerror__26->SetBinContent(7,15.45458);
   hmcerror__26->SetBinContent(8,19.61091);
   hmcerror__26->SetBinContent(9,16.76477);
   hmcerror__26->SetBinContent(10,22.14639);
   hmcerror__26->SetBinContent(11,21.0492);
   hmcerror__26->SetBinContent(12,22.03094);
   hmcerror__26->SetBinContent(13,25.85354);
   hmcerror__26->SetBinContent(14,30.80088);
   hmcerror__26->SetBinContent(15,35.10405);
   hmcerror__26->SetBinContent(16,37.07092);
   hmcerror__26->SetBinContent(17,54.03951);
   hmcerror__26->SetBinContent(18,55.99601);
   hmcerror__26->SetBinContent(19,70.05997);
   hmcerror__26->SetBinContent(20,122.9937);
   hmcerror__26->SetBinError(1,15.13331);
   hmcerror__26->SetBinError(2,21.94662);
   hmcerror__26->SetBinError(3,11.20368);
   hmcerror__26->SetBinError(4,10.04225);
   hmcerror__26->SetBinError(5,7.967729);
   hmcerror__26->SetBinError(6,8.177785);
   hmcerror__26->SetBinError(7,11.59729);
   hmcerror__26->SetBinError(8,8.971832);
   hmcerror__26->SetBinError(9,9.600519);
   hmcerror__26->SetBinError(10,10.88884);
   hmcerror__26->SetBinError(11,9.753588);
   hmcerror__26->SetBinError(12,11.3006);
   hmcerror__26->SetBinError(13,10.56919);
   hmcerror__26->SetBinError(14,14.84331);
   hmcerror__26->SetBinError(15,18.78859);
   hmcerror__26->SetBinError(16,23.17732);
   hmcerror__26->SetBinError(17,21.31606);
   hmcerror__26->SetBinError(18,25.54809);
   hmcerror__26->SetBinError(19,28.3093);
   hmcerror__26->SetBinError(20,45.82263);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

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
   0.4806627,
   1.384942,
   0.6704906,
   0.6085706,
   0.6299011,
   0.4438967,
   0.7504109,
   0.4574919,
   0.5726602,
   0.4916754,
   0.463371,
   0.5129422,
   0.4088101,
   0.4819118,
   0.5352257,
   0.6252157,
   0.3944532,
   0.4562484,
   0.4040724,
   0.3725608};
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
   0.4806627,
   1.384942,
   0.6704906,
   0.6085706,
   0.6299011,
   0.4438967,
   0.7504109,
   0.4574919,
   0.5726602,
   0.4916754,
   0.463371,
   0.5129422,
   0.4088101,
   0.4819118,
   0.5352257,
   0.6252157,
   0.3944532,
   0.4562484,
   0.4040724,
   0.3725608};
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
   0.2339672,
   0.2973007,
   0.2788843,
   0.2679958,
   0.344664,
   0.2383037,
   0.3068834,
   0.2536229,
   0.3056805,
   0.2889634,
   0.2943723,
   0.3303434,
   0.2430863,
   0.3060002,
   0.3096746,
   0.2801831,
   0.26126,
   0.2923794,
   0.2604604,
   0.2079132};
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
   0.2339672,
   0.2973007,
   0.2788843,
   0.2679958,
   0.344664,
   0.2383037,
   0.3068834,
   0.2536229,
   0.3056805,
   0.2889634,
   0.2943723,
   0.3303434,
   0.2430863,
   0.3060002,
   0.3096746,
   0.2801831,
   0.26126,
   0.2923794,
   0.2604604,
   0.2079132};
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
   0.9846191,
   1.00968,
   0.8976837,
   0.9090155,
   1.264905,
   0.7599312,
   0.8411746,
   0.6628964,
   1.014031,
   0.9482356,
   1.235201,
   0.953205,
   1.005665,
   0.7467318,
   0.6551951,
   0.9711115,
   0.5551494,
   0.9464961,
   0.9420501,
   0.8943548};
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
   0.1813414,
   0.2626936,
   0.2416864,
   0.2447373,
   0.3290966,
   0.2122488,
   0.2444343,
   0.192629,
   0.255506,
   0.2138226,
   0.2491924,
   0.2149432,
   0.2028852,
   0.1605701,
   0.1408869,
   0.1655772,
   0.1039924,
   0.1323398,
   0.1177691,
   0.08527338};
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
   0.1747445,
   0.2489746,
   0.2285922,
   0.2314778,
   0.3119097,
   0.2002853,
   0.2300418,
   0.1812869,
   0.2426099,
   0.2042274,
   0.2392395,
   0.2052977,
   0.1947818,
   0.1537164,
   0.1348733,
   0.1600122,
   0.1001434,
   0.128702,
   0.1148773,
   0.08527338};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.3385912);
   Graph_Graph3036->SetMaximum(1.68938);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 20:33:12 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-11.29082,1.25641,1248.527);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,37.73261);
   hmc__10->SetBinContent(2,38.45059);
   hmc__10->SetBinContent(3,40.93249);
   hmc__10->SetBinContent(4,45.42921);
   hmc__10->SetBinContent(5,47.61352);
   hmc__10->SetBinContent(6,60.31899);
   hmc__10->SetBinContent(7,56.92217);
   hmc__10->SetBinContent(8,71.23847);
   hmc__10->SetBinContent(9,72.55722);
   hmc__10->SetBinContent(10,76.78642);
   hmc__10->SetBinContent(11,92.39281);
   hmc__10->SetBinContent(12,95.58998);
   hmc__10->SetBinContent(13,107.7504);
   hmc__10->SetBinContent(14,129.7216);
   hmc__10->SetBinContent(15,150.137);
   hmc__10->SetBinContent(16,175.9599);
   hmc__10->SetBinContent(17,212.5511);
   hmc__10->SetBinContent(18,270.7504);
   hmc__10->SetBinContent(19,373.0754);
   hmc__10->SetBinContent(20,564.541);
   hmc__10->SetBinError(1,9.51994);
   hmc__10->SetBinError(2,9.273052);
   hmc__10->SetBinError(3,9.418447);
   hmc__10->SetBinError(4,11.51998);
   hmc__10->SetBinError(5,11.12567);
   hmc__10->SetBinError(6,12.87219);
   hmc__10->SetBinError(7,12.53278);
   hmc__10->SetBinError(8,17.53953);
   hmc__10->SetBinError(9,18.70318);
   hmc__10->SetBinError(10,20.17433);
   hmc__10->SetBinError(11,21.87088);
   hmc__10->SetBinError(12,22.59439);
   hmc__10->SetBinError(13,27.62512);
   hmc__10->SetBinError(14,28.94223);
   hmc__10->SetBinError(15,36.41264);
   hmc__10->SetBinError(16,41.7858);
   hmc__10->SetBinError(17,47.63274);
   hmc__10->SetBinError(18,56.21221);
   hmc__10->SetBinError(19,79.32042);
   hmc__10->SetBinError(20,111.4826);
   hmc__10->SetBinError(21,0.3895343);
   hmc__10->SetMinimum(-11.29082);
   hmc__10->SetMaximum(1185.536);
   hmc__10->SetEntries(2693.828);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,-1,1);
   hs4_stack_4->SetMinimum(-6.297554e-09);
   hs4_stack_4->SetMaximum(592.768);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(3,0.4261321);
   hbadmatch_stack_1->SetBinContent(5,0.2211568);
   hbadmatch_stack_1->SetBinContent(7,0.3917402);
   hbadmatch_stack_1->SetBinContent(8,0.5165828);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.7174533);
   hbadmatch_stack_1->SetBinContent(11,1.661957);
   hbadmatch_stack_1->SetBinContent(12,0.9303237);
   hbadmatch_stack_1->SetBinContent(13,0.5352025);
   hbadmatch_stack_1->SetBinContent(14,0.8832588);
   hbadmatch_stack_1->SetBinContent(15,0.785171);
   hbadmatch_stack_1->SetBinContent(16,0.5884556);
   hbadmatch_stack_1->SetBinContent(17,1.152718);
   hbadmatch_stack_1->SetBinContent(18,1.298315);
   hbadmatch_stack_1->SetBinContent(19,1.878497);
   hbadmatch_stack_1->SetBinContent(20,3.37643);
   hbadmatch_stack_1->SetBinError(3,0.3022068);
   hbadmatch_stack_1->SetBinError(5,0.2211568);
   hbadmatch_stack_1->SetBinError(7,0.2770047);
   hbadmatch_stack_1->SetBinError(8,0.4136081);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.4427765);
   hbadmatch_stack_1->SetBinError(11,0.708593);
   hbadmatch_stack_1->SetBinError(12,0.4814682);
   hbadmatch_stack_1->SetBinError(13,0.3921167);
   hbadmatch_stack_1->SetBinError(14,0.5221221);
   hbadmatch_stack_1->SetBinError(15,0.3925882);
   hbadmatch_stack_1->SetBinError(16,0.3397478);
   hbadmatch_stack_1->SetBinError(17,0.7875952);
   hbadmatch_stack_1->SetBinError(18,0.4990243);
   hbadmatch_stack_1->SetBinError(19,0.6863165);
   hbadmatch_stack_1->SetBinError(20,0.977003);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,1.290409);
   hext_stack_2->SetBinContent(3,0.973192);
   hext_stack_2->SetBinContent(4,1.779209);
   hext_stack_2->SetBinContent(5,1.697008);
   hext_stack_2->SetBinContent(6,10.13455);
   hext_stack_2->SetBinContent(7,2.681789);
   hext_stack_2->SetBinContent(8,7.250881);
   hext_stack_2->SetBinContent(9,1.137595);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,3.236793);
   hext_stack_2->SetBinContent(12,7.904085);
   hext_stack_2->SetBinContent(13,1.219797);
   hext_stack_2->SetBinContent(14,5.105384);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,2.27519);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,5.241065);
   hext_stack_2->SetBinContent(19,4.296596);
   hext_stack_2->SetBinContent(20,3.386835);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,0.788756);
   hext_stack_2->SetBinError(3,0.5618727);
   hext_stack_2->SetBinError(4,0.9206235);
   hext_stack_2->SetBinError(5,0.8873887);
   hext_stack_2->SetBinError(6,2.407662);
   hext_stack_2->SetBinError(7,1.018372);
   hext_stack_2->SetBinError(8,1.960543);
   hext_stack_2->SetBinError(9,0.6602113);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,1.119615);
   hext_stack_2->SetBinError(12,2.046782);
   hext_stack_2->SetBinError(13,0.7042499);
   hext_stack_2->SetBinError(14,1.39999);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,0.9336798);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,1.698516);
   hext_stack_2->SetBinError(19,1.328326);
   hext_stack_2->SetBinError(20,1.332711);
   hext_stack_2->SetEntries(152);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4927738);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.2574102);
   hdirt_stack_3->SetBinContent(8,0.1661453);
   hdirt_stack_3->SetBinContent(10,0.2761429);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.7801647);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.4853765);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3718435);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.2574102);
   hdirt_stack_3->SetBinError(8,0.1661453);
   hdirt_stack_3->SetBinError(10,0.1952625);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4753739);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3448585);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetEntries(23);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,1.256314);
   houtFV_stack_4->SetBinContent(2,0.3934307);
   houtFV_stack_4->SetBinContent(3,1.713804);
   houtFV_stack_4->SetBinContent(5,0.785171);
   houtFV_stack_4->SetBinContent(6,0.5583416);
   houtFV_stack_4->SetBinContent(7,0.4958611);
   houtFV_stack_4->SetBinContent(8,0.5901461);
   houtFV_stack_4->SetBinContent(9,1.458746);
   houtFV_stack_4->SetBinContent(10,1.26712);
   houtFV_stack_4->SetBinContent(11,1.128717);
   houtFV_stack_4->SetBinContent(12,0.9303237);
   houtFV_stack_4->SetBinContent(13,1.174245);
   houtFV_stack_4->SetBinContent(14,1.625354);
   houtFV_stack_4->SetBinContent(15,3.024735);
   houtFV_stack_4->SetBinContent(17,2.860735);
   houtFV_stack_4->SetBinContent(18,3.739865);
   houtFV_stack_4->SetBinContent(19,4.964598);
   houtFV_stack_4->SetBinContent(20,4.823979);
   houtFV_stack_4->SetBinError(1,0.5355201);
   houtFV_stack_4->SetBinError(2,0.2781975);
   houtFV_stack_4->SetBinError(3,0.6207051);
   houtFV_stack_4->SetBinError(5,0.3925882);
   houtFV_stack_4->SetBinError(6,0.4116679);
   houtFV_stack_4->SetBinError(7,0.3585208);
   houtFV_stack_4->SetBinError(8,0.340721);
   houtFV_stack_4->SetBinError(9,0.6275324);
   houtFV_stack_4->SetBinError(10,0.5883944);
   houtFV_stack_4->SetBinError(11,0.4813146);
   houtFV_stack_4->SetBinError(12,0.4814682);
   houtFV_stack_4->SetBinError(13,0.5402058);
   houtFV_stack_4->SetBinError(14,0.5768572);
   houtFV_stack_4->SetBinError(15,0.959582);
   houtFV_stack_4->SetBinError(17,1.749595);
   houtFV_stack_4->SetBinError(18,0.9739694);
   houtFV_stack_4->SetBinError(19,1.147504);
   houtFV_stack_4->SetBinError(20,1.093305);
   houtFV_stack_4->SetEntries(138);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.100176);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1815945);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07212181);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1073833);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1213757);
   hNCpi0inFVqe_stack_6->SetEntries(5);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3603561);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.536015);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.5146145);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.8322766);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.9177915);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.8191359);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.3662104);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.508266);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.376966);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.9780188);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.287374);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.396367);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.519089);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.453357);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.891155);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.013788);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.971375);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.879428);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.974552);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.012146);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1197662);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1689326);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1691786);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4211075);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3847368);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2312523);
   hNCpi0inFVres_stack_7->SetBinError(7,0.1191636);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5329403);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4509848);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4289809);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5404222);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4325092);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3662591);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2970184);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5302596);
   hNCpi0inFVres_stack_7->SetBinError(16,0.738223);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3960944);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5923315);
   hNCpi0inFVres_stack_7->SetBinError(19,0.772621);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9630436);
   hNCpi0inFVres_stack_7->SetEntries(874);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.072256);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4049942);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3529355);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5609863);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3091379);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3935616);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5563827);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.021193);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5856001);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6580213);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.485658);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5493499);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.139628);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.257395);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.306352);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.478694);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.36383);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.728773);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.527316);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.55002);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4843716);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2169574);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1368477);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3471722);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1215354);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2402809);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2431983);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4523407);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2109709);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2955294);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4997166);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2338072);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5292471);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3337513);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2943807);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3443102);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7401601);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8777485);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.067965);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.330645);
   hNCpi0inFVdis_stack_8->SetEntries(672);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,26.85236);
   hCCpi0inFV_stack_10->SetBinContent(2,29.93824);
   hCCpi0inFV_stack_10->SetBinContent(3,30.57393);
   hCCpi0inFV_stack_10->SetBinContent(4,34.92253);
   hCCpi0inFV_stack_10->SetBinContent(5,34.06704);
   hCCpi0inFV_stack_10->SetBinContent(6,38.02293);
   hCCpi0inFV_stack_10->SetBinContent(7,41.43094);
   hCCpi0inFV_stack_10->SetBinContent(8,44.25328);
   hCCpi0inFV_stack_10->SetBinContent(9,53.61306);
   hCCpi0inFV_stack_10->SetBinContent(10,59.82964);
   hCCpi0inFV_stack_10->SetBinContent(11,63.48184);
   hCCpi0inFV_stack_10->SetBinContent(12,66.45271);
   hCCpi0inFV_stack_10->SetBinContent(13,78.7588);
   hCCpi0inFV_stack_10->SetBinContent(14,91.13704);
   hCCpi0inFV_stack_10->SetBinContent(15,109.2917);
   hCCpi0inFV_stack_10->SetBinContent(16,128.7648);
   hCCpi0inFV_stack_10->SetBinContent(17,157.4969);
   hCCpi0inFV_stack_10->SetBinContent(18,191.2995);
   hCCpi0inFV_stack_10->SetBinContent(19,268.3058);
   hCCpi0inFV_stack_10->SetBinContent(20,389.883);
   hCCpi0inFV_stack_10->SetBinError(1,2.632556);
   hCCpi0inFV_stack_10->SetBinError(2,2.742928);
   hCCpi0inFV_stack_10->SetBinError(3,2.789549);
   hCCpi0inFV_stack_10->SetBinError(4,2.942452);
   hCCpi0inFV_stack_10->SetBinError(5,3.006537);
   hCCpi0inFV_stack_10->SetBinError(6,3.062389);
   hCCpi0inFV_stack_10->SetBinError(7,3.246529);
   hCCpi0inFV_stack_10->SetBinError(8,3.337125);
   hCCpi0inFV_stack_10->SetBinError(9,3.688575);
   hCCpi0inFV_stack_10->SetBinError(10,3.872414);
   hCCpi0inFV_stack_10->SetBinError(11,4.037578);
   hCCpi0inFV_stack_10->SetBinError(12,4.1009);
   hCCpi0inFV_stack_10->SetBinError(13,4.454613);
   hCCpi0inFV_stack_10->SetBinError(14,4.709871);
   hCCpi0inFV_stack_10->SetBinError(15,5.261464);
   hCCpi0inFV_stack_10->SetBinError(16,5.673442);
   hCCpi0inFV_stack_10->SetBinError(17,6.314352);
   hCCpi0inFV_stack_10->SetBinError(18,6.940351);
   hCCpi0inFV_stack_10->SetBinError(19,8.203602);
   hCCpi0inFV_stack_10->SetBinError(20,9.923444);
   hCCpi0inFV_stack_10->SetEntries(8276);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.9286332);
   hNCinFV_stack_11->SetBinContent(2,0.9286332);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.3917402);
   hNCinFV_stack_11->SetBinContent(5,0.1967154);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(8,0.1950248);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,0.7868615);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.9286332);
   hNCinFV_stack_11->SetBinContent(16,2.679393);
   hNCinFV_stack_11->SetBinContent(17,1.123658);
   hNCinFV_stack_11->SetBinContent(18,0.5884556);
   hNCinFV_stack_11->SetBinContent(19,4.067626);
   hNCinFV_stack_11->SetBinContent(20,4.841572);
   hNCinFV_stack_11->SetBinError(1,0.48078);
   hNCinFV_stack_11->SetBinError(2,0.48078);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.2770047);
   hNCinFV_stack_11->SetBinError(5,0.1967154);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(8,0.1950249);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.3934307);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.48078);
   hNCinFV_stack_11->SetBinError(16,0.8775546);
   hNCinFV_stack_11->SetBinError(17,0.5188295);
   hNCinFV_stack_11->SetBinError(18,0.3397478);
   hNCinFV_stack_11->SetBinError(19,0.9203201);
   hNCinFV_stack_11->SetBinError(20,1.093209);
   hNCinFV_stack_11->SetEntries(89);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.856092);
   hnumuCCinFV_stack_12->SetBinContent(2,4.704419);
   hnumuCCinFV_stack_12->SetBinContent(3,5.580356);
   hnumuCCinFV_stack_12->SetBinContent(4,6.449705);
   hnumuCCinFV_stack_12->SetBinContent(5,9.084715);
   hnumuCCinFV_stack_12->SetBinContent(6,9.936338);
   hnumuCCinFV_stack_12->SetBinContent(7,10.99924);
   hnumuCCinFV_stack_12->SetBinContent(8,15.73695);
   hnumuCCinFV_stack_12->SetBinContent(9,13.45493);
   hnumuCCinFV_stack_12->SetBinContent(10,10.67032);
   hnumuCCinFV_stack_12->SetBinContent(11,18.23879);
   hnumuCCinFV_stack_12->SetBinContent(12,16.55515);
   hnumuCCinFV_stack_12->SetBinContent(13,21.39791);
   hnumuCCinFV_stack_12->SetBinContent(14,26.57692);
   hnumuCCinFV_stack_12->SetBinContent(15,28.53046);
   hnumuCCinFV_stack_12->SetBinContent(16,36.47923);
   hnumuCCinFV_stack_12->SetBinContent(17,42.00574);
   hnumuCCinFV_stack_12->SetBinContent(18,59.22834);
   hnumuCCinFV_stack_12->SetBinContent(19,75.98788);
   hnumuCCinFV_stack_12->SetBinContent(20,135.5461);
   hnumuCCinFV_stack_12->SetBinError(1,1.289765);
   hnumuCCinFV_stack_12->SetBinError(2,1.050441);
   hnumuCCinFV_stack_12->SetBinError(3,1.17551);
   hnumuCCinFV_stack_12->SetBinError(4,1.258327);
   hnumuCCinFV_stack_12->SetBinError(5,1.480127);
   hnumuCCinFV_stack_12->SetBinError(6,1.663448);
   hnumuCCinFV_stack_12->SetBinError(7,1.685401);
   hnumuCCinFV_stack_12->SetBinError(8,3.418791);
   hnumuCCinFV_stack_12->SetBinError(9,2.3287);
   hnumuCCinFV_stack_12->SetBinError(10,1.684409);
   hnumuCCinFV_stack_12->SetBinError(11,2.506516);
   hnumuCCinFV_stack_12->SetBinError(12,2.176612);
   hnumuCCinFV_stack_12->SetBinError(13,2.358896);
   hnumuCCinFV_stack_12->SetBinError(14,2.656783);
   hnumuCCinFV_stack_12->SetBinError(15,2.774258);
   hnumuCCinFV_stack_12->SetBinError(16,3.286474);
   hnumuCCinFV_stack_12->SetBinError(17,4.089876);
   hnumuCCinFV_stack_12->SetBinError(18,4.084725);
   hnumuCCinFV_stack_12->SetBinError(19,4.567726);
   hnumuCCinFV_stack_12->SetBinError(20,6.424045);
   hnumuCCinFV_stack_12->SetEntries(2276);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.2384502);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(19,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(20,4.341635);
   hnueCCinFV_stack_13->SetBinError(3,0.2384502);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.438694);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.340721);
   hnueCCinFV_stack_13->SetBinError(19,0.48078);
   hnueCCinFV_stack_13->SetBinError(20,1.092871);
   hnueCCinFV_stack_13->SetEntries(35);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,37.73261);
   hmcerror__11->SetBinContent(2,38.45059);
   hmcerror__11->SetBinContent(3,40.93249);
   hmcerror__11->SetBinContent(4,45.42921);
   hmcerror__11->SetBinContent(5,47.61352);
   hmcerror__11->SetBinContent(6,60.31899);
   hmcerror__11->SetBinContent(7,56.92217);
   hmcerror__11->SetBinContent(8,71.23847);
   hmcerror__11->SetBinContent(9,72.55722);
   hmcerror__11->SetBinContent(10,76.78642);
   hmcerror__11->SetBinContent(11,92.39281);
   hmcerror__11->SetBinContent(12,95.58998);
   hmcerror__11->SetBinContent(13,107.7504);
   hmcerror__11->SetBinContent(14,129.7216);
   hmcerror__11->SetBinContent(15,150.137);
   hmcerror__11->SetBinContent(16,175.9599);
   hmcerror__11->SetBinContent(17,212.5511);
   hmcerror__11->SetBinContent(18,270.7504);
   hmcerror__11->SetBinContent(19,373.0754);
   hmcerror__11->SetBinContent(20,564.541);
   hmcerror__11->SetBinError(1,9.51994);
   hmcerror__11->SetBinError(2,9.273052);
   hmcerror__11->SetBinError(3,9.418447);
   hmcerror__11->SetBinError(4,11.51998);
   hmcerror__11->SetBinError(5,11.12567);
   hmcerror__11->SetBinError(6,12.87219);
   hmcerror__11->SetBinError(7,12.53278);
   hmcerror__11->SetBinError(8,17.53953);
   hmcerror__11->SetBinError(9,18.70318);
   hmcerror__11->SetBinError(10,20.17433);
   hmcerror__11->SetBinError(11,21.87088);
   hmcerror__11->SetBinError(12,22.59439);
   hmcerror__11->SetBinError(13,27.62512);
   hmcerror__11->SetBinError(14,28.94223);
   hmcerror__11->SetBinError(15,36.41264);
   hmcerror__11->SetBinError(16,41.7858);
   hmcerror__11->SetBinError(17,47.63274);
   hmcerror__11->SetBinError(18,56.21221);
   hmcerror__11->SetBinError(19,79.32042);
   hmcerror__11->SetBinError(20,111.4826);
   hmcerror__11->SetBinError(21,0.3895343);
   hmcerror__11->SetEntries(2693.828);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   54,
   50,
   57,
   41,
   57,
   62,
   54,
   56,
   68,
   81,
   82,
   87,
   109,
   120,
   148,
   177,
   221,
   289,
   397,
   542};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   7.4785,
   7.2025,
   7.679,
   6.5384,
   7.679,
   8.0018,
   7.4785,
   7.6127,
   8.3726,
   9.1239,
   9.1791,
   9.4503,
   10.44031,
   10.95445,
   12.16553,
   13.30413,
   14.86607,
   17,
   19.92486,
   23.28089};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   7.275,
   6.9985,
   7.4757,
   6.3331,
   7.4757,
   7.7989,
   7.275,
   7.4094,
   8.1701,
   8.9221,
   8.9774,
   9.2488,
   10.44031,
   10.95445,
   12.16553,
   13.30413,
   14.86607,
   17,
   19.92486,
   23.28089};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(31.01544);
   Graph_Graph3013->SetMaximum(618.3628);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2752.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.8","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 66.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.8","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.6","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.3","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1938.4","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 554.0","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.3","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.2523001,
   0.241168,
   0.2300971,
   0.2535809,
   0.2336662,
   0.2134019,
   0.220174,
   0.2462086,
   0.2577714,
   0.2627331,
   0.2367162,
   0.2363678,
   0.2563806,
   0.2231103,
   0.2425293,
   0.2374734,
   0.2241002,
   0.2076164,
   0.2126123,
   0.1974747};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.2523001,
   0.241168,
   0.2300971,
   0.2535809,
   0.2336662,
   0.2134019,
   0.220174,
   0.2462086,
   0.2577714,
   0.2627331,
   0.2367162,
   0.2363678,
   0.2563806,
   0.2231103,
   0.2425293,
   0.2374734,
   0.2241002,
   0.2076164,
   0.2126123,
   0.1974747};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.2523001,
   0.241168,
   0.2300971,
   0.2535809,
   0.2336662,
   0.2134019,
   0.220174,
   0.2462086,
   0.2577714,
   0.2627331,
   0.2367162,
   0.2363678,
   0.2563806,
   0.2231103,
   0.2425293,
   0.2374734,
   0.2241002,
   0.2076164,
   0.2126123,
   0.1974747};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.2523001,
   0.241168,
   0.2300971,
   0.2535809,
   0.2336662,
   0.2134019,
   0.220174,
   0.2462086,
   0.2577714,
   0.2627331,
   0.2367162,
   0.2363678,
   0.2563806,
   0.2231103,
   0.2425293,
   0.2374734,
   0.2241002,
   0.2076164,
   0.2126123,
   0.1974747};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   1.431123,
   1.30037,
   1.392537,
   0.9025029,
   1.197139,
   1.027869,
   0.9486638,
   0.7860921,
   0.9371914,
   1.054874,
   0.8875149,
   0.9101372,
   1.011597,
   0.9250578,
   0.9857661,
   1.005911,
   1.03975,
   1.067404,
   1.064128,
   0.960072};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.1981973,
   0.1873183,
   0.1876016,
   0.143925,
   0.1612777,
   0.1326581,
   0.1313812,
   0.1068622,
   0.1153931,
   0.1188218,
   0.09934863,
   0.09886287,
   0.0968934,
   0.08444584,
   0.08102947,
   0.07560888,
   0.06994116,
   0.06278847,
   0.05340705,
   0.04123862};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.1928041,
   0.1820128,
   0.1826349,
   0.1394059,
   0.1570079,
   0.1292943,
   0.1278061,
   0.1040084,
   0.1126022,
   0.1161937,
   0.09716556,
   0.09675491,
   0.0968934,
   0.08444584,
   0.08102947,
   0.07560888,
   0.06994116,
   0.06278847,
   0.05340705,
   0.04123862};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.5847602);
   Graph_Graph3016->SetMaximum(1.718397);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

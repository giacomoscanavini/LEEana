#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 22:15:18 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
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
   pad1->Range(-1.307692,-11.39046,1.25641,1259.545);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmc__25->SetBinContent(1,14.11631);
   hmc__25->SetBinContent(2,12.34541);
   hmc__25->SetBinContent(3,9.625072);
   hmc__25->SetBinContent(4,19.21045);
   hmc__25->SetBinContent(5,14.86707);
   hmc__25->SetBinContent(6,18.34976);
   hmc__25->SetBinContent(7,19.01465);
   hmc__25->SetBinContent(8,26.43464);
   hmc__25->SetBinContent(9,26.00225);
   hmc__25->SetBinContent(10,33.20545);
   hmc__25->SetBinContent(11,35.2672);
   hmc__25->SetBinContent(12,41.14532);
   hmc__25->SetBinContent(13,46.87354);
   hmc__25->SetBinContent(14,55.83826);
   hmc__25->SetBinContent(15,60.19999);
   hmc__25->SetBinContent(16,75.88763);
   hmc__25->SetBinContent(17,103.0654);
   hmc__25->SetBinContent(18,95.5354);
   hmc__25->SetBinContent(19,137.9212);
   hmc__25->SetBinContent(20,183.5697);
   hmc__25->SetBinContent(21,229.2545);
   hmc__25->SetBinContent(22,278.9819);
   hmc__25->SetBinContent(23,379.9702);
   hmc__25->SetBinContent(24,560.1389);
   hmc__25->SetBinContent(25,569.523);
   hmc__25->SetBinError(1,3.646843);
   hmc__25->SetBinError(2,3.295611);
   hmc__25->SetBinError(3,2.830947);
   hmc__25->SetBinError(4,4.353134);
   hmc__25->SetBinError(5,4.743817);
   hmc__25->SetBinError(6,4.962503);
   hmc__25->SetBinError(7,5.641776);
   hmc__25->SetBinError(8,7.800422);
   hmc__25->SetBinError(9,7.260662);
   hmc__25->SetBinError(10,9.911127);
   hmc__25->SetBinError(11,9.360466);
   hmc__25->SetBinError(12,11.02353);
   hmc__25->SetBinError(13,12.62047);
   hmc__25->SetBinError(14,15.04235);
   hmc__25->SetBinError(15,18.62478);
   hmc__25->SetBinError(16,21.98895);
   hmc__25->SetBinError(17,29.12569);
   hmc__25->SetBinError(18,30.87807);
   hmc__25->SetBinError(19,38.59036);
   hmc__25->SetBinError(20,48.99101);
   hmc__25->SetBinError(21,60.29246);
   hmc__25->SetBinError(22,71.24909);
   hmc__25->SetBinError(23,96.93144);
   hmc__25->SetBinError(24,137.424);
   hmc__25->SetBinError(25,128.8989);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-11.39046);
   hmc__25->SetMaximum(1195.998);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-1,1);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(597.9992);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.1950248);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.1106221);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.859176);
   hbadmatch_stack_1->SetBinContent(20,1.561887);
   hbadmatch_stack_1->SetBinContent(21,0.95762);
   hbadmatch_stack_1->SetBinContent(22,1.65714);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.8770706);
   hbadmatch_stack_1->SetBinContent(25,1.343951);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.1950249);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.1106221);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.5428897);
   hbadmatch_stack_1->SetBinError(20,0.6677024);
   hbadmatch_stack_1->SetBinError(21,0.4933497);
   hbadmatch_stack_1->SetBinError(22,0.6814785);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.5197486);
   hbadmatch_stack_1->SetBinError(25,0.636501);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,0.6487947);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,5.132913);
   hext_stack_2->SetBinContent(5,0.8131978);
   hext_stack_2->SetBinContent(6,1.626396);
   hext_stack_2->SetBinContent(7,1.939204);
   hext_stack_2->SetBinContent(8,1.461993);
   hext_stack_2->SetBinContent(9,1.779209);
   hext_stack_2->SetBinContent(10,4.919439);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,2.270781);
   hext_stack_2->SetBinContent(13,3.565599);
   hext_stack_2->SetBinContent(14,5.359169);
   hext_stack_2->SetBinContent(15,3.379654);
   hext_stack_2->SetBinContent(16,1.544194);
   hext_stack_2->SetBinContent(17,5.40106);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,2.973055);
   hext_stack_2->SetBinContent(20,6.505524);
   hext_stack_2->SetBinContent(21,2.759582);
   hext_stack_2->SetBinContent(22,0.9660115);
   hext_stack_2->SetBinContent(23,3.215251);
   hext_stack_2->SetBinContent(24,1.779209);
   hext_stack_2->SetBinContent(25,1.454812);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,0.4587671);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.814759);
   hext_stack_2->SetBinError(5,0.5750177);
   hext_stack_2->SetBinError(6,0.8131978);
   hext_stack_2->SetBinError(7,0.912471);
   hext_stack_2->SetBinError(8,0.7356036);
   hext_stack_2->SetBinError(9,0.9206235);
   hext_stack_2->SetBinError(10,1.563138);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,0.8582747);
   hext_stack_2->SetBinError(13,1.22225);
   hext_stack_2->SetBinError(14,1.392494);
   hext_stack_2->SetBinError(15,1.406172);
   hext_stack_2->SetBinError(16,0.7753719);
   hext_stack_2->SetBinError(17,1.694111);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,1.346105);
   hext_stack_2->SetBinError(20,1.993884);
   hext_stack_2->SetBinError(21,0.98084);
   hext_stack_2->SetBinError(22,0.7189592);
   hext_stack_2->SetBinError(23,1.36277);
   hext_stack_2->SetBinError(24,0.9206235);
   hext_stack_2->SetBinError(25,0.8615765);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.310595);
   houtFV_stack_4->SetBinContent(2,0.7664332);
   houtFV_stack_4->SetBinContent(3,0.1967154);
   houtFV_stack_4->SetBinContent(4,0.267433);
   houtFV_stack_4->SetBinContent(6,1.00834);
   houtFV_stack_4->SetBinContent(8,0.9557728);
   houtFV_stack_4->SetBinContent(10,0.5352025);
   houtFV_stack_4->SetBinContent(11,0.3024228);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.3917402);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(17,1.268811);
   houtFV_stack_4->SetBinContent(18,0.3917402);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,1.925454);
   houtFV_stack_4->SetBinContent(21,2.053266);
   houtFV_stack_4->SetBinContent(22,2.309247);
   houtFV_stack_4->SetBinContent(23,2.719793);
   houtFV_stack_4->SetBinContent(24,5.465816);
   houtFV_stack_4->SetBinContent(25,4.595994);
   houtFV_stack_4->SetBinError(1,0.6040812);
   houtFV_stack_4->SetBinError(2,0.5453574);
   houtFV_stack_4->SetBinError(3,0.1967154);
   houtFV_stack_4->SetBinError(4,0.267433);
   houtFV_stack_4->SetBinError(6,0.5408248);
   houtFV_stack_4->SetBinError(8,0.4925073);
   houtFV_stack_4->SetBinError(10,0.3921167);
   houtFV_stack_4->SetBinError(11,0.222641);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetBinError(14,0.2770047);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(17,0.5889569);
   houtFV_stack_4->SetBinError(18,0.2770047);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.7159781);
   houtFV_stack_4->SetBinError(21,0.7061303);
   houtFV_stack_4->SetBinError(22,0.7524289);
   houtFV_stack_4->SetBinError(23,0.8196401);
   houtFV_stack_4->SetBinError(24,1.390976);
   houtFV_stack_4->SetBinError(25,1.329327);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1652256);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.5101458);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.07685941);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.1329798);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.2437506);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.1321216);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.0823867);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2123566);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3015878);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5163876);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1642093);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.4329455);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.088061);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3401943);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6297742);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5730106);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6140311);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.475268);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.856143);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.681019);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.915882);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.439177);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.45197);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.171631);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.433547);
   hNCpi0inFVres_stack_7->SetBinError(1,0.08733598);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3043375);
   hNCpi0inFVres_stack_7->SetBinError(3,0.06200441);
   hNCpi0inFVres_stack_7->SetBinError(4,0.06801513);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1459023);
   hNCpi0inFVres_stack_7->SetBinError(6,0.05701431);
   hNCpi0inFVres_stack_7->SetBinError(7,0.03689258);
   hNCpi0inFVres_stack_7->SetBinError(8,0.1355781);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1495831);
   hNCpi0inFVres_stack_7->SetBinError(10,0.246044);
   hNCpi0inFVres_stack_7->SetBinError(11,0.07930249);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1361318);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5852617);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1254908);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2368902);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1714143);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2128937);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6408361);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5735859);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4256799);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5676659);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4788786);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6554272);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7278525);
   hNCpi0inFVres_stack_7->SetBinError(25,1.063002);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.171854);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05297247);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.07051601);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5650959);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3205773);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3651583);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3753867);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3746043);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3502464);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.268215);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.04439513);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.172439);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2024107);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2272077);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8027609);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4314384);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2790664);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5069118);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.88728);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6866349);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.091726);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.972068);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.476395);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.930612);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.773012);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1321982);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03989788);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.04358459);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4140069);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2146959);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2633273);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2137523);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2155958);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2960499);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2540523);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.02563704);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.09239464);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.07551674);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1196786);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2915491);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2802491);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.08330683);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1651077);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5573239);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1879154);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3056869);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4963559);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5331981);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7489013);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.079066);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.088289);
   hCCpi0inFV_stack_10->SetBinContent(2,5.768515);
   hCCpi0inFV_stack_10->SetBinContent(3,4.736808);
   hCCpi0inFV_stack_10->SetBinContent(4,8.68975);
   hCCpi0inFV_stack_10->SetBinContent(5,7.080314);
   hCCpi0inFV_stack_10->SetBinContent(6,11.28107);
   hCCpi0inFV_stack_10->SetBinContent(7,12.50136);
   hCCpi0inFV_stack_10->SetBinContent(8,17.09859);
   hCCpi0inFV_stack_10->SetBinContent(9,15.76581);
   hCCpi0inFV_stack_10->SetBinContent(10,22.18258);
   hCCpi0inFV_stack_10->SetBinContent(11,23.42467);
   hCCpi0inFV_stack_10->SetBinContent(12,29.59571);
   hCCpi0inFV_stack_10->SetBinContent(13,31.25823);
   hCCpi0inFV_stack_10->SetBinContent(14,39.84726);
   hCCpi0inFV_stack_10->SetBinContent(15,42.12393);
   hCCpi0inFV_stack_10->SetBinContent(16,57.58485);
   hCCpi0inFV_stack_10->SetBinContent(17,75.80663);
   hCCpi0inFV_stack_10->SetBinContent(18,73.78745);
   hCCpi0inFV_stack_10->SetBinContent(19,109.7673);
   hCCpi0inFV_stack_10->SetBinContent(20,141.2309);
   hCCpi0inFV_stack_10->SetBinContent(21,172.5528);
   hCCpi0inFV_stack_10->SetBinContent(22,220.6378);
   hCCpi0inFV_stack_10->SetBinContent(23,311.1892);
   hCCpi0inFV_stack_10->SetBinContent(24,450.6249);
   hCCpi0inFV_stack_10->SetBinContent(25,464.9269);
   hCCpi0inFV_stack_10->SetBinError(1,1.244198);
   hCCpi0inFV_stack_10->SetBinError(2,1.193982);
   hCCpi0inFV_stack_10->SetBinError(3,1.065336);
   hCCpi0inFV_stack_10->SetBinError(4,1.512145);
   hCCpi0inFV_stack_10->SetBinError(5,1.309997);
   hCCpi0inFV_stack_10->SetBinError(6,1.729981);
   hCCpi0inFV_stack_10->SetBinError(7,1.737149);
   hCCpi0inFV_stack_10->SetBinError(8,2.138913);
   hCCpi0inFV_stack_10->SetBinError(9,1.947258);
   hCCpi0inFV_stack_10->SetBinError(10,2.43573);
   hCCpi0inFV_stack_10->SetBinError(11,2.463588);
   hCCpi0inFV_stack_10->SetBinError(12,2.733689);
   hCCpi0inFV_stack_10->SetBinError(13,2.814356);
   hCCpi0inFV_stack_10->SetBinError(14,3.163033);
   hCCpi0inFV_stack_10->SetBinError(15,3.246569);
   hCCpi0inFV_stack_10->SetBinError(16,3.79526);
   hCCpi0inFV_stack_10->SetBinError(17,4.581308);
   hCCpi0inFV_stack_10->SetBinError(18,4.321475);
   hCCpi0inFV_stack_10->SetBinError(19,5.246389);
   hCCpi0inFV_stack_10->SetBinError(20,5.978916);
   hCCpi0inFV_stack_10->SetBinError(21,6.639092);
   hCCpi0inFV_stack_10->SetBinError(22,7.497903);
   hCCpi0inFV_stack_10->SetBinError(23,8.92254);
   hCCpi0inFV_stack_10->SetBinError(24,10.69402);
   hCCpi0inFV_stack_10->SetBinError(25,10.84199);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.3934307);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.536893);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(18,0.5884556);
   hNCinFV_stack_11->SetBinContent(19,0.7336084);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.5884556);
   hNCinFV_stack_11->SetBinContent(22,1.268811);
   hNCinFV_stack_11->SetBinContent(23,2.342597);
   hNCinFV_stack_11->SetBinContent(24,2.589184);
   hNCinFV_stack_11->SetBinContent(25,3.521199);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.2781975);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.3929602);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(18,0.3397478);
   hNCinFV_stack_11->SetBinError(19,0.4394482);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.3397478);
   hNCinFV_stack_11->SetBinError(22,0.5889569);
   hNCinFV_stack_11->SetBinError(23,0.8097566);
   hNCinFV_stack_11->SetBinError(24,0.809167);
   hNCinFV_stack_11->SetBinError(25,0.9419262);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.230637);
   hnumuCCinFV_stack_12->SetBinContent(2,4.598549);
   hnumuCCinFV_stack_12->SetBinContent(3,4.02306);
   hnumuCCinFV_stack_12->SetBinContent(4,4.082097);
   hnumuCCinFV_stack_12->SetBinContent(5,6.212513);
   hnumuCCinFV_stack_12->SetBinContent(6,3.495776);
   hnumuCCinFV_stack_12->SetBinContent(7,3.921297);
   hnumuCCinFV_stack_12->SetBinContent(8,5.742868);
   hnumuCCinFV_stack_12->SetBinContent(9,7.465217);
   hnumuCCinFV_stack_12->SetBinContent(10,4.443444);
   hnumuCCinFV_stack_12->SetBinContent(11,6.694539);
   hnumuCCinFV_stack_12->SetBinContent(12,8.136551);
   hnumuCCinFV_stack_12->SetBinContent(13,9.63558);
   hnumuCCinFV_stack_12->SetBinContent(14,9.279259);
   hnumuCCinFV_stack_12->SetBinContent(15,11.6894);
   hnumuCCinFV_stack_12->SetBinContent(16,14.75562);
   hnumuCCinFV_stack_12->SetBinContent(17,19.6958);
   hnumuCCinFV_stack_12->SetBinContent(18,17.13214);
   hnumuCCinFV_stack_12->SetBinContent(19,19.4529);
   hnumuCCinFV_stack_12->SetBinContent(20,29.08043);
   hnumuCCinFV_stack_12->SetBinContent(21,46.65479);
   hnumuCCinFV_stack_12->SetBinContent(22,46.86001);
   hnumuCCinFV_stack_12->SetBinContent(23,54.96638);
   hnumuCCinFV_stack_12->SetBinContent(24,88.64912);
   hnumuCCinFV_stack_12->SetBinContent(25,80.27688);
   hnumuCCinFV_stack_12->SetBinError(1,1.205664);
   hnumuCCinFV_stack_12->SetBinError(2,1.094385);
   hnumuCCinFV_stack_12->SetBinError(3,1.090758);
   hnumuCCinFV_stack_12->SetBinError(4,1.042571);
   hnumuCCinFV_stack_12->SetBinError(5,1.622582);
   hnumuCCinFV_stack_12->SetBinError(6,1.057473);
   hnumuCCinFV_stack_12->SetBinError(7,1.008846);
   hnumuCCinFV_stack_12->SetBinError(8,1.325702);
   hnumuCCinFV_stack_12->SetBinError(9,1.435332);
   hnumuCCinFV_stack_12->SetBinError(10,1.049695);
   hnumuCCinFV_stack_12->SetBinError(11,1.298839);
   hnumuCCinFV_stack_12->SetBinError(12,1.651203);
   hnumuCCinFV_stack_12->SetBinError(13,1.613066);
   hnumuCCinFV_stack_12->SetBinError(14,1.665483);
   hnumuCCinFV_stack_12->SetBinError(15,1.767779);
   hnumuCCinFV_stack_12->SetBinError(16,2.014658);
   hnumuCCinFV_stack_12->SetBinError(17,2.274811);
   hnumuCCinFV_stack_12->SetBinError(18,2.175364);
   hnumuCCinFV_stack_12->SetBinError(19,2.229724);
   hnumuCCinFV_stack_12->SetBinError(20,2.770313);
   hnumuCCinFV_stack_12->SetBinError(21,5.749941);
   hnumuCCinFV_stack_12->SetBinError(22,3.495552);
   hnumuCCinFV_stack_12->SetBinError(23,4.101572);
   hnumuCCinFV_stack_12->SetBinError(24,5.684467);
   hnumuCCinFV_stack_12->SetBinError(25,5.190524);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(18,0.6184032);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(21,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(22,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,1.785167);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(18,0.4653145);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.3921167);
   hnueCCinFV_stack_13->SetBinError(21,0.4810838);
   hnueCCinFV_stack_13->SetBinError(22,0.4394482);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.6468723);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__26->SetBinContent(1,14.11631);
   hmcerror__26->SetBinContent(2,12.34541);
   hmcerror__26->SetBinContent(3,9.625072);
   hmcerror__26->SetBinContent(4,19.21045);
   hmcerror__26->SetBinContent(5,14.86707);
   hmcerror__26->SetBinContent(6,18.34976);
   hmcerror__26->SetBinContent(7,19.01465);
   hmcerror__26->SetBinContent(8,26.43464);
   hmcerror__26->SetBinContent(9,26.00225);
   hmcerror__26->SetBinContent(10,33.20545);
   hmcerror__26->SetBinContent(11,35.2672);
   hmcerror__26->SetBinContent(12,41.14532);
   hmcerror__26->SetBinContent(13,46.87354);
   hmcerror__26->SetBinContent(14,55.83826);
   hmcerror__26->SetBinContent(15,60.19999);
   hmcerror__26->SetBinContent(16,75.88763);
   hmcerror__26->SetBinContent(17,103.0654);
   hmcerror__26->SetBinContent(18,95.5354);
   hmcerror__26->SetBinContent(19,137.9212);
   hmcerror__26->SetBinContent(20,183.5697);
   hmcerror__26->SetBinContent(21,229.2545);
   hmcerror__26->SetBinContent(22,278.9819);
   hmcerror__26->SetBinContent(23,379.9702);
   hmcerror__26->SetBinContent(24,560.1389);
   hmcerror__26->SetBinContent(25,569.523);
   hmcerror__26->SetBinError(1,3.646843);
   hmcerror__26->SetBinError(2,3.295611);
   hmcerror__26->SetBinError(3,2.830947);
   hmcerror__26->SetBinError(4,4.353134);
   hmcerror__26->SetBinError(5,4.743817);
   hmcerror__26->SetBinError(6,4.962503);
   hmcerror__26->SetBinError(7,5.641776);
   hmcerror__26->SetBinError(8,7.800422);
   hmcerror__26->SetBinError(9,7.260662);
   hmcerror__26->SetBinError(10,9.911127);
   hmcerror__26->SetBinError(11,9.360466);
   hmcerror__26->SetBinError(12,11.02353);
   hmcerror__26->SetBinError(13,12.62047);
   hmcerror__26->SetBinError(14,15.04235);
   hmcerror__26->SetBinError(15,18.62478);
   hmcerror__26->SetBinError(16,21.98895);
   hmcerror__26->SetBinError(17,29.12569);
   hmcerror__26->SetBinError(18,30.87807);
   hmcerror__26->SetBinError(19,38.59036);
   hmcerror__26->SetBinError(20,48.99101);
   hmcerror__26->SetBinError(21,60.29246);
   hmcerror__26->SetBinError(22,71.24909);
   hmcerror__26->SetBinError(23,96.93144);
   hmcerror__26->SetBinError(24,137.424);
   hmcerror__26->SetBinError(25,128.8989);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetEntries(3014.754);

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
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   7,
   11,
   6,
   12,
   20,
   16,
   18,
   23,
   24,
   35,
   42,
   38,
   50,
   67,
   79,
   75,
   97,
   112,
   135,
   171,
   177,
   269,
   308,
   451,
   416};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   2.85954,
   3.4975,
   2.67925,
   3.64022,
   4.6266,
   4.1628,
   4.4008,
   4.9457,
   5.0476,
   6.0548,
   6.6155,
   6.3013,
   7.2025,
   8.3119,
   9.0124,
   8.7852,
   9.9704,
   10.58301,
   11.61895,
   13.0767,
   13.30413,
   16.40122,
   17.54993,
   21.23676,
   20.39608};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   2.61053,
   3.27,
   2.41858,
   3.4155,
   4.4133,
   3.9454,
   4.1858,
   4.7346,
   4.837,
   5.8483,
   6.4104,
   6.0955,
   6.9985,
   8.1094,
   8.8105,
   8.5831,
   9.769,
   10.58301,
   11.61895,
   13.0767,
   13.30413,
   16.40122,
   17.54993,
   21.23676,
   20.39608};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(2.988675);
   Graph_Graph3033->SetMaximum(519.1284);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2659.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2355.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 512.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_muon_costheta_all");
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.2583425,
   0.2669503,
   0.2941222,
   0.2266024,
   0.3190822,
   0.2704397,
   0.2967068,
   0.2950834,
   0.2792321,
   0.2984789,
   0.2654156,
   0.2679168,
   0.2692451,
   0.2693914,
   0.3093819,
   0.2897567,
   0.2825942,
   0.3232107,
   0.2798,
   0.2668796,
   0.2629936,
   0.2553896,
   0.2551027,
   0.2453392,
   0.2263279};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0.2583425,
   0.2669503,
   0.2941222,
   0.2266024,
   0.3190822,
   0.2704397,
   0.2967068,
   0.2950834,
   0.2792321,
   0.2984789,
   0.2654156,
   0.2679168,
   0.2692451,
   0.2693914,
   0.3093819,
   0.2897567,
   0.2825942,
   0.3232107,
   0.2798,
   0.2668796,
   0.2629936,
   0.2553896,
   0.2551027,
   0.2453392,
   0.2263279};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   Graph_Graph3034->GetXaxis()->SetTitle("Muon cos #theta");
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
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0.2583425,
   0.2669503,
   0.2941222,
   0.2266024,
   0.3190822,
   0.2704397,
   0.2967068,
   0.2950834,
   0.2792321,
   0.2984789,
   0.2654156,
   0.2679168,
   0.2692451,
   0.2693914,
   0.3093819,
   0.2897567,
   0.2825942,
   0.3232107,
   0.2798,
   0.2668796,
   0.2629936,
   0.2553896,
   0.2551027,
   0.2453392,
   0.2263279};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0.2583425,
   0.2669503,
   0.2941222,
   0.2266024,
   0.3190822,
   0.2704397,
   0.2967068,
   0.2950834,
   0.2792321,
   0.2984789,
   0.2654156,
   0.2679168,
   0.2692451,
   0.2693914,
   0.3093819,
   0.2897567,
   0.2825942,
   0.3232107,
   0.2798,
   0.2668796,
   0.2629936,
   0.2553896,
   0.2551027,
   0.2453392,
   0.2263279};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   0.4958803,
   0.8910193,
   0.623372,
   0.6246602,
   1.345255,
   0.8719461,
   0.9466383,
   0.8700706,
   0.9229972,
   1.054044,
   1.190908,
   0.9235557,
   1.0667,
   1.199894,
   1.312293,
   0.9883034,
   0.94115,
   1.17234,
   0.9788194,
   0.9315262,
   0.7720677,
   0.9642202,
   0.8105899,
   0.8051574,
   0.7304358};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0.2025699,
   0.2833036,
   0.2783616,
   0.1894917,
   0.3111979,
   0.2268586,
   0.2314425,
   0.1870917,
   0.1941217,
   0.1823436,
   0.1875822,
   0.1531474,
   0.1536581,
   0.1488567,
   0.1497077,
   0.1157659,
   0.09673858,
   0.1107757,
   0.08424336,
   0.07123559,
   0.05803216,
   0.05878955,
   0.04618764,
   0.03791338,
   0.03581256};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0.1849301,
   0.2648757,
   0.2512792,
   0.1777939,
   0.2968507,
   0.215011,
   0.2201355,
   0.1791059,
   0.1860224,
   0.1761247,
   0.1817666,
   0.1481456,
   0.149306,
   0.1452302,
   0.1463539,
   0.1131028,
   0.09478448,
   0.1107757,
   0.08424336,
   0.07123559,
   0.05803216,
   0.05878955,
   0.04618764,
   0.03791338,
   0.03581256};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.1584308);
   Graph_Graph3036->SetMaximum(1.776985);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

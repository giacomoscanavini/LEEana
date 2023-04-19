#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Mar 15 16:23:04 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-25.34028,1692.308,2802.101);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__1->SetBinContent(1,0.02789998);
   hmc__1->SetBinContent(2,157.2931);
   hmc__1->SetBinContent(3,959.4287);
   hmc__1->SetBinContent(4,1244.093);
   hmc__1->SetBinContent(5,1267.014);
   hmc__1->SetBinContent(6,1013.729);
   hmc__1->SetBinContent(7,815.9054);
   hmc__1->SetBinContent(8,557.5544);
   hmc__1->SetBinContent(9,400.6177);
   hmc__1->SetBinContent(10,273.2526);
   hmc__1->SetBinContent(11,189.3379);
   hmc__1->SetBinContent(12,117.9431);
   hmc__1->SetBinContent(13,90.80616);
   hmc__1->SetBinContent(14,64.75107);
   hmc__1->SetBinContent(15,51.18533);
   hmc__1->SetBinContent(16,131.3657);
   hmc__1->SetBinError(1,0.2101219);
   hmc__1->SetBinError(2,46.79189);
   hmc__1->SetBinError(3,250.4577);
   hmc__1->SetBinError(4,298.19);
   hmc__1->SetBinError(5,385.3991);
   hmc__1->SetBinError(6,349.551);
   hmc__1->SetBinError(7,266.2326);
   hmc__1->SetBinError(8,185.9036);
   hmc__1->SetBinError(9,133.652);
   hmc__1->SetBinError(10,87.15857);
   hmc__1->SetBinError(11,58.51692);
   hmc__1->SetBinError(12,42.68125);
   hmc__1->SetBinError(13,35.89675);
   hmc__1->SetBinError(14,26.63978);
   hmc__1->SetBinError(15,24.13194);
   hmc__1->SetBinError(16,37.99557);
   hmc__1->SetMinimum(-25.34028);
   hmc__1->SetMaximum(2660.729);
   hmc__1->SetEntries(7241.585);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",15,0,1500);
   hs1_stack_1->SetMinimum(-5.219833e-10);
   hs1_stack_1->SetMaximum(1330.364);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,7.136661);
   hbadmatch_stack_1->SetBinContent(3,31.15125);
   hbadmatch_stack_1->SetBinContent(4,26.78828);
   hbadmatch_stack_1->SetBinContent(5,30.52824);
   hbadmatch_stack_1->SetBinContent(6,20.51564);
   hbadmatch_stack_1->SetBinContent(7,19.11113);
   hbadmatch_stack_1->SetBinContent(8,12.62201);
   hbadmatch_stack_1->SetBinContent(9,10.0759);
   hbadmatch_stack_1->SetBinContent(10,7.252903);
   hbadmatch_stack_1->SetBinContent(11,4.72878);
   hbadmatch_stack_1->SetBinContent(12,2.30395);
   hbadmatch_stack_1->SetBinContent(13,2.149768);
   hbadmatch_stack_1->SetBinContent(14,1.754141);
   hbadmatch_stack_1->SetBinContent(15,1.066525);
   hbadmatch_stack_1->SetBinContent(16,3.348246);
   hbadmatch_stack_1->SetBinError(2,1.375796);
   hbadmatch_stack_1->SetBinError(3,3.569036);
   hbadmatch_stack_1->SetBinError(4,2.761283);
   hbadmatch_stack_1->SetBinError(5,3.543348);
   hbadmatch_stack_1->SetBinError(6,2.318612);
   hbadmatch_stack_1->SetBinError(7,2.340189);
   hbadmatch_stack_1->SetBinError(8,2.328508);
   hbadmatch_stack_1->SetBinError(9,1.688628);
   hbadmatch_stack_1->SetBinError(10,1.40344);
   hbadmatch_stack_1->SetBinError(11,1.153455);
   hbadmatch_stack_1->SetBinError(12,0.7080718);
   hbadmatch_stack_1->SetBinError(13,0.7601321);
   hbadmatch_stack_1->SetBinError(14,0.7350354);
   hbadmatch_stack_1->SetBinError(15,0.4797518);
   hbadmatch_stack_1->SetBinError(16,0.9265678);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,33.46741);
   hext_stack_2->SetBinContent(3,133.1872);
   hext_stack_2->SetBinContent(4,131.2866);
   hext_stack_2->SetBinContent(5,90.37685);
   hext_stack_2->SetBinContent(6,57.34967);
   hext_stack_2->SetBinContent(7,46.27058);
   hext_stack_2->SetBinContent(8,34.63531);
   hext_stack_2->SetBinContent(9,24.37383);
   hext_stack_2->SetBinContent(10,16.70199);
   hext_stack_2->SetBinContent(11,9.00697);
   hext_stack_2->SetBinContent(12,9.48859);
   hext_stack_2->SetBinContent(13,6.884593);
   hext_stack_2->SetBinContent(14,6.000783);
   hext_stack_2->SetBinContent(15,2.841783);
   hext_stack_2->SetBinContent(16,12.9604);
   hext_stack_2->SetBinError(2,3.776558);
   hext_stack_2->SetBinError(3,7.498638);
   hext_stack_2->SetBinError(4,7.442113);
   hext_stack_2->SetBinError(5,6.199597);
   hext_stack_2->SetBinError(6,4.994744);
   hext_stack_2->SetBinError(7,4.40006);
   hext_stack_2->SetBinError(8,3.961732);
   hext_stack_2->SetBinError(9,3.251793);
   hext_stack_2->SetBinError(10,2.639604);
   hext_stack_2->SetBinError(11,1.868963);
   hext_stack_2->SetBinError(12,1.979807);
   hext_stack_2->SetBinError(13,1.675566);
   hext_stack_2->SetBinError(14,1.533202);
   hext_stack_2->SetBinError(15,1.011007);
   hext_stack_2->SetBinError(16,2.327986);
   hext_stack_2->SetEntries(1541);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,6.626352);
   hdirt_stack_3->SetBinContent(3,23.03388);
   hdirt_stack_3->SetBinContent(4,15.01084);
   hdirt_stack_3->SetBinContent(5,11.96727);
   hdirt_stack_3->SetBinContent(6,6.937168);
   hdirt_stack_3->SetBinContent(7,3.629764);
   hdirt_stack_3->SetBinContent(8,3.72754);
   hdirt_stack_3->SetBinContent(9,0.5624726);
   hdirt_stack_3->SetBinContent(11,1.059498);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinError(2,1.35709);
   hdirt_stack_3->SetBinError(3,2.473746);
   hdirt_stack_3->SetBinError(4,2.040894);
   hdirt_stack_3->SetBinError(5,1.94364);
   hdirt_stack_3->SetBinError(6,1.540769);
   hdirt_stack_3->SetBinError(7,1.036864);
   hdirt_stack_3->SetBinError(8,1.421941);
   hdirt_stack_3->SetBinError(9,0.2813747);
   hdirt_stack_3->SetBinError(11,0.587332);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,33.0016);
   houtFV_stack_4->SetBinContent(3,161.4388);
   houtFV_stack_4->SetBinContent(4,153.214);
   houtFV_stack_4->SetBinContent(5,118.5453);
   houtFV_stack_4->SetBinContent(6,84.98604);
   houtFV_stack_4->SetBinContent(7,62.07908);
   houtFV_stack_4->SetBinContent(8,32.909);
   houtFV_stack_4->SetBinContent(9,25.61836);
   houtFV_stack_4->SetBinContent(10,16.58844);
   houtFV_stack_4->SetBinContent(11,12.38455);
   houtFV_stack_4->SetBinContent(12,6.7074);
   houtFV_stack_4->SetBinContent(13,4.26159);
   houtFV_stack_4->SetBinContent(14,3.75487);
   houtFV_stack_4->SetBinContent(15,2.639779);
   houtFV_stack_4->SetBinContent(16,4.102892);
   houtFV_stack_4->SetBinError(2,2.787893);
   houtFV_stack_4->SetBinError(3,6.376355);
   houtFV_stack_4->SetBinError(4,6.401363);
   houtFV_stack_4->SetBinError(5,5.461607);
   houtFV_stack_4->SetBinError(6,4.58072);
   houtFV_stack_4->SetBinError(7,3.987466);
   houtFV_stack_4->SetBinError(8,2.821859);
   houtFV_stack_4->SetBinError(9,2.569667);
   houtFV_stack_4->SetBinError(10,2.138719);
   houtFV_stack_4->SetBinError(11,1.824221);
   houtFV_stack_4->SetBinError(12,1.270794);
   houtFV_stack_4->SetBinError(13,1.079781);
   houtFV_stack_4->SetBinError(14,1.039038);
   houtFV_stack_4->SetBinError(15,0.8228277);
   houtFV_stack_4->SetBinError(16,1.000002);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.839248);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.00653);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,22.87742);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,22.86831);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,15.97896);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.87432);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.858528);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.751906);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.14598);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.630826);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5852358);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5996859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.756876);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4512456);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.316126);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.519389);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.614864);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.340495);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.057207);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8020615);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6924664);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4235873);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3805083);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1727406);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.237152);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4174949);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.929844);
   hNCpi0inFVqe_stack_6->SetBinContent(4,6.385972);
   hNCpi0inFVqe_stack_6->SetBinContent(5,4.167901);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.975266);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.706644);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.784776);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.32559);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.422244);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5401659);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.8438385);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5374559);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.6115288);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5343706);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4184261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4180388);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4446571);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,46.9044);
   hNCpi0inFVres_stack_7->SetBinContent(3,388.4082);
   hNCpi0inFVres_stack_7->SetBinContent(4,583.2537);
   hNCpi0inFVres_stack_7->SetBinContent(5,565.9467);
   hNCpi0inFVres_stack_7->SetBinContent(6,426.2999);
   hNCpi0inFVres_stack_7->SetBinContent(7,291.1021);
   hNCpi0inFVres_stack_7->SetBinContent(8,179.1792);
   hNCpi0inFVres_stack_7->SetBinContent(9,111.6759);
   hNCpi0inFVres_stack_7->SetBinContent(10,60.78968);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.91801);
   hNCpi0inFVres_stack_7->SetBinContent(12,23.85013);
   hNCpi0inFVres_stack_7->SetBinContent(13,14.92307);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.480145);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.215332);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.43069);
   hNCpi0inFVres_stack_7->SetBinError(2,2.212608);
   hNCpi0inFVres_stack_7->SetBinError(3,6.374992);
   hNCpi0inFVres_stack_7->SetBinError(4,7.902198);
   hNCpi0inFVres_stack_7->SetBinError(5,7.766804);
   hNCpi0inFVres_stack_7->SetBinError(6,6.754393);
   hNCpi0inFVres_stack_7->SetBinError(7,5.599441);
   hNCpi0inFVres_stack_7->SetBinError(8,4.421258);
   hNCpi0inFVres_stack_7->SetBinError(9,3.508135);
   hNCpi0inFVres_stack_7->SetBinError(10,2.502067);
   hNCpi0inFVres_stack_7->SetBinError(11,2.059585);
   hNCpi0inFVres_stack_7->SetBinError(12,1.678137);
   hNCpi0inFVres_stack_7->SetBinError(13,1.277527);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9764757);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7871631);
   hNCpi0inFVres_stack_7->SetBinError(16,1.128328);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.48562);
   hNCpi0inFVdis_stack_8->SetBinContent(3,54.09681);
   hNCpi0inFVdis_stack_8->SetBinContent(4,74.31675);
   hNCpi0inFVdis_stack_8->SetBinContent(5,88.44582);
   hNCpi0inFVdis_stack_8->SetBinContent(6,78.63379);
   hNCpi0inFVdis_stack_8->SetBinContent(7,65.91285);
   hNCpi0inFVdis_stack_8->SetBinContent(8,50.99127);
   hNCpi0inFVdis_stack_8->SetBinContent(9,36.38592);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.02871);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.46208);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.911173);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.665468);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.832876);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.437868);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.7564);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.037793);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.384165);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.788687);
   hNCpi0inFVdis_stack_8->SetBinError(5,3.02529);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.856155);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.649312);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.327498);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.017148);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.481255);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.468081);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9648802);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8207288);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9070803);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.799591);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.075969);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.9069222);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3626998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3610006);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1005948);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(3,38.49624);
   hCCpi0inFV_stack_10->SetBinContent(4,83.80248);
   hCCpi0inFV_stack_10->SetBinContent(5,159.0376);
   hCCpi0inFV_stack_10->SetBinContent(6,169.8932);
   hCCpi0inFV_stack_10->SetBinContent(7,168.9221);
   hCCpi0inFV_stack_10->SetBinContent(8,126.8329);
   hCCpi0inFV_stack_10->SetBinContent(9,93.28553);
   hCCpi0inFV_stack_10->SetBinContent(10,77.41405);
   hCCpi0inFV_stack_10->SetBinContent(11,53.49623);
   hCCpi0inFV_stack_10->SetBinContent(12,30.77137);
   hCCpi0inFV_stack_10->SetBinContent(13,27.26219);
   hCCpi0inFV_stack_10->SetBinContent(14,16.73763);
   hCCpi0inFV_stack_10->SetBinContent(15,11.01305);
   hCCpi0inFV_stack_10->SetBinContent(16,34.73317);
   hCCpi0inFV_stack_10->SetBinError(2,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(3,3.071829);
   hCCpi0inFV_stack_10->SetBinError(4,4.562503);
   hCCpi0inFV_stack_10->SetBinError(5,6.289513);
   hCCpi0inFV_stack_10->SetBinError(6,6.515564);
   hCCpi0inFV_stack_10->SetBinError(7,6.516497);
   hCCpi0inFV_stack_10->SetBinError(8,5.6712);
   hCCpi0inFV_stack_10->SetBinError(9,4.874304);
   hCCpi0inFV_stack_10->SetBinError(10,4.485266);
   hCCpi0inFV_stack_10->SetBinError(11,3.736229);
   hCCpi0inFV_stack_10->SetBinError(12,2.710896);
   hCCpi0inFV_stack_10->SetBinError(13,2.67069);
   hCCpi0inFV_stack_10->SetBinError(14,2.008385);
   hCCpi0inFV_stack_10->SetBinError(15,1.582226);
   hCCpi0inFV_stack_10->SetBinError(16,3.042636);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,7.143832);
   hNCinFV_stack_11->SetBinContent(3,40.26962);
   hNCinFV_stack_11->SetBinContent(4,54.34883);
   hNCinFV_stack_11->SetBinContent(5,72.78625);
   hNCinFV_stack_11->SetBinContent(6,66.01038);
   hNCinFV_stack_11->SetBinContent(7,62.49689);
   hNCinFV_stack_11->SetBinContent(8,49.31899);
   hNCinFV_stack_11->SetBinContent(9,43.42429);
   hNCinFV_stack_11->SetBinContent(10,31.44551);
   hNCinFV_stack_11->SetBinContent(11,22.00572);
   hNCinFV_stack_11->SetBinContent(12,17.41881);
   hNCinFV_stack_11->SetBinContent(13,12.11426);
   hNCinFV_stack_11->SetBinContent(14,8.164365);
   hNCinFV_stack_11->SetBinContent(15,10.35058);
   hNCinFV_stack_11->SetBinContent(16,14.79196);
   hNCinFV_stack_11->SetBinError(2,1.302233);
   hNCinFV_stack_11->SetBinError(3,3.284632);
   hNCinFV_stack_11->SetBinError(4,3.660979);
   hNCinFV_stack_11->SetBinError(5,4.253369);
   hNCinFV_stack_11->SetBinError(6,4.072155);
   hNCinFV_stack_11->SetBinError(7,3.954459);
   hNCinFV_stack_11->SetBinError(8,3.488879);
   hNCinFV_stack_11->SetBinError(9,3.318737);
   hNCinFV_stack_11->SetBinError(10,2.823173);
   hNCinFV_stack_11->SetBinError(11,2.394423);
   hNCinFV_stack_11->SetBinError(12,2.050067);
   hNCinFV_stack_11->SetBinError(13,1.777809);
   hNCinFV_stack_11->SetBinError(14,1.429326);
   hNCinFV_stack_11->SetBinError(15,1.677791);
   hNCinFV_stack_11->SetBinError(16,1.982434);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,6.117997);
   hnumuCCinFV_stack_12->SetBinContent(3,65.53812);
   hnumuCCinFV_stack_12->SetBinContent(4,86.88498);
   hnumuCCinFV_stack_12->SetBinContent(5,99.08581);
   hnumuCCinFV_stack_12->SetBinContent(6,78.10425);
   hnumuCCinFV_stack_12->SetBinContent(7,79.13077);
   hnumuCCinFV_stack_12->SetBinContent(8,56.39788);
   hnumuCCinFV_stack_12->SetBinContent(9,49.24123);
   hnumuCCinFV_stack_12->SetBinContent(10,33.78621);
   hnumuCCinFV_stack_12->SetBinContent(11,24.0837);
   hnumuCCinFV_stack_12->SetBinContent(12,15.79064);
   hnumuCCinFV_stack_12->SetBinContent(13,15.26764);
   hnumuCCinFV_stack_12->SetBinContent(14,11.04775);
   hnumuCCinFV_stack_12->SetBinContent(15,9.297441);
   hnumuCCinFV_stack_12->SetBinContent(16,23.98686);
   hnumuCCinFV_stack_12->SetBinError(2,1.355528);
   hnumuCCinFV_stack_12->SetBinError(3,5.306193);
   hnumuCCinFV_stack_12->SetBinError(4,5.899499);
   hnumuCCinFV_stack_12->SetBinError(5,6.202403);
   hnumuCCinFV_stack_12->SetBinError(6,4.859779);
   hnumuCCinFV_stack_12->SetBinError(7,4.77143);
   hnumuCCinFV_stack_12->SetBinError(8,4.082881);
   hnumuCCinFV_stack_12->SetBinError(9,4.399462);
   hnumuCCinFV_stack_12->SetBinError(10,3.375444);
   hnumuCCinFV_stack_12->SetBinError(11,2.539188);
   hnumuCCinFV_stack_12->SetBinError(12,2.267253);
   hnumuCCinFV_stack_12->SetBinError(13,2.010692);
   hnumuCCinFV_stack_12->SetBinError(14,1.685745);
   hnumuCCinFV_stack_12->SetBinError(15,1.497227);
   hnumuCCinFV_stack_12->SetBinError(16,2.480222);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(3,4.537317);
   hnueCCinFV_stack_13->SetBinContent(4,5.016703);
   hnueCCinFV_stack_13->SetBinContent(5,2.895093);
   hnueCCinFV_stack_13->SetBinContent(6,4.780084);
   hnueCCinFV_stack_13->SetBinContent(7,4.668981);
   hnueCCinFV_stack_13->SetBinContent(8,3.296939);
   hnueCCinFV_stack_13->SetBinContent(9,0.8689706);
   hnueCCinFV_stack_13->SetBinContent(10,4.676863);
   hnueCCinFV_stack_13->SetBinContent(11,3.03107);
   hnueCCinFV_stack_13->SetBinContent(12,0.9905936);
   hnueCCinFV_stack_13->SetBinContent(13,0.664443);
   hnueCCinFV_stack_13->SetBinContent(14,1.26543);
   hnueCCinFV_stack_13->SetBinContent(15,2.49992);
   hnueCCinFV_stack_13->SetBinContent(16,13.27486);
   hnueCCinFV_stack_13->SetBinError(2,0.545424);
   hnueCCinFV_stack_13->SetBinError(3,1.650801);
   hnueCCinFV_stack_13->SetBinError(4,1.269414);
   hnueCCinFV_stack_13->SetBinError(5,0.8583606);
   hnueCCinFV_stack_13->SetBinError(6,1.136761);
   hnueCCinFV_stack_13->SetBinError(7,1.252702);
   hnueCCinFV_stack_13->SetBinError(8,1.395643);
   hnueCCinFV_stack_13->SetBinError(9,0.4365468);
   hnueCCinFV_stack_13->SetBinError(10,1.859138);
   hnueCCinFV_stack_13->SetBinError(11,0.8717758);
   hnueCCinFV_stack_13->SetBinError(12,0.5144188);
   hnueCCinFV_stack_13->SetBinError(13,0.3856058);
   hnueCCinFV_stack_13->SetBinError(14,0.5878314);
   hnueCCinFV_stack_13->SetBinError(15,1.011306);
   hnueCCinFV_stack_13->SetBinError(16,2.66944);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__2->SetBinContent(1,0.02789998);
   hmcerror__2->SetBinContent(2,157.2931);
   hmcerror__2->SetBinContent(3,959.4287);
   hmcerror__2->SetBinContent(4,1244.093);
   hmcerror__2->SetBinContent(5,1267.014);
   hmcerror__2->SetBinContent(6,1013.729);
   hmcerror__2->SetBinContent(7,815.9054);
   hmcerror__2->SetBinContent(8,557.5544);
   hmcerror__2->SetBinContent(9,400.6177);
   hmcerror__2->SetBinContent(10,273.2526);
   hmcerror__2->SetBinContent(11,189.3379);
   hmcerror__2->SetBinContent(12,117.9431);
   hmcerror__2->SetBinContent(13,90.80616);
   hmcerror__2->SetBinContent(14,64.75107);
   hmcerror__2->SetBinContent(15,51.18533);
   hmcerror__2->SetBinContent(16,131.3657);
   hmcerror__2->SetBinError(1,0.2101219);
   hmcerror__2->SetBinError(2,46.79189);
   hmcerror__2->SetBinError(3,250.4577);
   hmcerror__2->SetBinError(4,298.19);
   hmcerror__2->SetBinError(5,385.3991);
   hmcerror__2->SetBinError(6,349.551);
   hmcerror__2->SetBinError(7,266.2326);
   hmcerror__2->SetBinError(8,185.9036);
   hmcerror__2->SetBinError(9,133.652);
   hmcerror__2->SetBinError(10,87.15857);
   hmcerror__2->SetBinError(11,58.51692);
   hmcerror__2->SetBinError(12,42.68125);
   hmcerror__2->SetBinError(13,35.89675);
   hmcerror__2->SetBinError(14,26.63978);
   hmcerror__2->SetBinError(15,24.13194);
   hmcerror__2->SetBinError(16,37.99557);
   hmcerror__2->SetEntries(7241.585);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3001[15] = {
   0,
   205,
   1109,
   1260,
   1053,
   826,
   647,
   409,
   288,
   187,
   124,
   98,
   70,
   46,
   32};
   Double_t _felx3001[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3001[15] = {
   0,
   14.31782,
   33.30165,
   35.49648,
   32.44996,
   28.74022,
   25.43619,
   20.22375,
   16.97056,
   13.67479,
   11.13553,
   10.0209,
   8.4925,
   6.9153,
   5.7977};
   Double_t _fehx3001[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3001[15] = {
   1.1478,
   14.31782,
   33.30165,
   35.49648,
   32.44996,
   28.74022,
   25.43619,
   20.22375,
   16.97056,
   13.67479,
   11.13553,
   9.82,
   8.2902,
   6.7108,
   5.5904};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1425.046);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.5/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6354.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 177.2","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 601.9","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 718.1","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.7","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2744.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  527.6","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1060.3","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 497.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 629.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 39.9","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3002[15] = {
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
   Double_t _felx3002[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3002[15] = {
   7.531253,
   0.2974822,
   0.2610488,
   0.2396846,
   0.304179,
   0.344817,
   0.3263033,
   0.3334268,
   0.3336148,
   0.3189671,
   0.3090609,
   0.36188,
   0.3953119,
   0.4114184,
   0.4714621};
   Double_t _fehx3002[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3002[15] = {
   7.531253,
   0.2974822,
   0.2610488,
   0.2396846,
   0.304179,
   0.344817,
   0.3263033,
   0.3334268,
   0.3336148,
   0.3189671,
   0.3090609,
   0.36188,
   0.3953119,
   0.4114184,
   0.4714621};
   grae = new TGraphAsymmErrors(15,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3003[15] = {
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
   Double_t _felx3003[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3003[15] = {
   7.531253,
   0.2340315,
   0.2206951,
   0.2264627,
   0.2994207,
   0.3403644,
   0.31971,
   0.3083608,
   0.2911892,
   0.2563094,
   0.2414977,
   0.2198899,
   0.2233269,
   0.2087061,
   0.2319404};
   Double_t _fehx3003[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3003[15] = {
   7.531253,
   0.2340315,
   0.2206951,
   0.2264627,
   0.2994207,
   0.3403644,
   0.31971,
   0.3083608,
   0.2911892,
   0.2563094,
   0.2414977,
   0.2198899,
   0.2233269,
   0.2087061,
   0.2319404};
   grae = new TGraphAsymmErrors(15,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3004[15] = {
   0,
   1.3033,
   1.155896,
   1.012786,
   0.831088,
   0.8148134,
   0.7929841,
   0.7335607,
   0.7188898,
   0.6843486,
   0.6549139,
   0.8309091,
   0.7708728,
   0.710413,
   0.6251791};
   Double_t _felx3004[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3004[15] = {
   0,
   0.09102639,
   0.03470988,
   0.02853201,
   0.02561137,
   0.02835098,
   0.03117542,
   0.03627224,
   0.04236099,
   0.05004452,
   0.05881301,
   0.08496385,
   0.09352339,
   0.1067982,
   0.1132688};
   Double_t _fehx3004[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3004[15] = {
   41.13981,
   0.09102639,
   0.03470988,
   0.02853201,
   0.02561137,
   0.02835098,
   0.03117542,
   0.03627224,
   0.04236099,
   0.05004452,
   0.05881301,
   0.08326048,
   0.09129557,
   0.10364,
   0.1092188};
   grae = new TGraphAsymmErrors(15,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(45.25379);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

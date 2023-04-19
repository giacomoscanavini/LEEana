#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Mar 15 16:23:06 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-211.68,1692.308,23407.35);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__16->SetBinContent(3,613.4084);
   hmc__16->SetBinContent(4,3840.304);
   hmc__16->SetBinContent(5,7234.219);
   hmc__16->SetBinContent(6,9249.812);
   hmc__16->SetBinContent(7,9947.474);
   hmc__16->SetBinContent(8,9557.706);
   hmc__16->SetBinContent(9,8313.123);
   hmc__16->SetBinContent(10,6804.994);
   hmc__16->SetBinContent(11,5390.423);
   hmc__16->SetBinContent(12,4037.344);
   hmc__16->SetBinContent(13,2954.788);
   hmc__16->SetBinContent(14,2120.581);
   hmc__16->SetBinContent(15,1460.917);
   hmc__16->SetBinContent(16,4183.884);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,0.3895343);
   hmc__16->SetBinError(3,132.345);
   hmc__16->SetBinError(4,689.9448);
   hmc__16->SetBinError(5,1280.912);
   hmc__16->SetBinError(6,1653.926);
   hmc__16->SetBinError(7,1762.478);
   hmc__16->SetBinError(8,1726.467);
   hmc__16->SetBinError(9,1508.792);
   hmc__16->SetBinError(10,1298.143);
   hmc__16->SetBinError(11,1102.663);
   hmc__16->SetBinError(12,901.8213);
   hmc__16->SetBinError(13,677.2401);
   hmc__16->SetBinError(14,513.0202);
   hmc__16->SetBinError(15,400.0326);
   hmc__16->SetBinError(16,1177.392);
   hmc__16->SetMinimum(-211.68);
   hmc__16->SetMaximum(22226.4);
   hmc__16->SetEntries(63250.55);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",15,0,1500);
   hs6_stack_6->SetMinimum(-5.219833e-10);
   hs6_stack_6->SetMaximum(10444.85);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(3,2.900271);
   hbadmatch_stack_1->SetBinContent(4,17.9418);
   hbadmatch_stack_1->SetBinContent(5,29.69552);
   hbadmatch_stack_1->SetBinContent(6,27.90796);
   hbadmatch_stack_1->SetBinContent(7,35.39407);
   hbadmatch_stack_1->SetBinContent(8,32.29345);
   hbadmatch_stack_1->SetBinContent(9,26.72695);
   hbadmatch_stack_1->SetBinContent(10,19.89512);
   hbadmatch_stack_1->SetBinContent(11,27.80282);
   hbadmatch_stack_1->SetBinContent(12,16.46926);
   hbadmatch_stack_1->SetBinContent(13,14.94652);
   hbadmatch_stack_1->SetBinContent(14,10.56778);
   hbadmatch_stack_1->SetBinContent(15,9.678356);
   hbadmatch_stack_1->SetBinContent(16,34.70292);
   hbadmatch_stack_1->SetBinError(3,1.00247);
   hbadmatch_stack_1->SetBinError(4,3.284248);
   hbadmatch_stack_1->SetBinError(5,3.961195);
   hbadmatch_stack_1->SetBinError(6,2.938855);
   hbadmatch_stack_1->SetBinError(7,4.566828);
   hbadmatch_stack_1->SetBinError(8,3.939819);
   hbadmatch_stack_1->SetBinError(9,2.861462);
   hbadmatch_stack_1->SetBinError(10,2.368253);
   hbadmatch_stack_1->SetBinError(11,4.709836);
   hbadmatch_stack_1->SetBinError(12,2.241523);
   hbadmatch_stack_1->SetBinError(13,2.265513);
   hbadmatch_stack_1->SetBinError(14,1.646252);
   hbadmatch_stack_1->SetBinError(15,1.65104);
   hbadmatch_stack_1->SetBinError(16,4.319112);
   hbadmatch_stack_1->SetEntries(1129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(3,2.192989);
   hext_stack_2->SetBinContent(4,15.86561);
   hext_stack_2->SetBinContent(5,49.46152);
   hext_stack_2->SetBinContent(6,62.80653);
   hext_stack_2->SetBinContent(7,73.78301);
   hext_stack_2->SetBinContent(8,83.84702);
   hext_stack_2->SetBinContent(9,72.66418);
   hext_stack_2->SetBinContent(10,74.02684);
   hext_stack_2->SetBinContent(11,51.13655);
   hext_stack_2->SetBinContent(12,34.99561);
   hext_stack_2->SetBinContent(13,34.80803);
   hext_stack_2->SetBinContent(14,21.83327);
   hext_stack_2->SetBinContent(15,18.32398);
   hext_stack_2->SetBinContent(16,81.71859);
   hext_stack_2->SetBinError(3,0.9009267);
   hext_stack_2->SetBinError(4,2.601735);
   hext_stack_2->SetBinError(5,4.707186);
   hext_stack_2->SetBinError(6,5.073107);
   hext_stack_2->SetBinError(7,5.573069);
   hext_stack_2->SetBinError(8,5.949736);
   hext_stack_2->SetBinError(9,5.509622);
   hext_stack_2->SetBinError(10,5.619225);
   hext_stack_2->SetBinError(11,4.575919);
   hext_stack_2->SetBinError(12,3.846369);
   hext_stack_2->SetBinError(13,3.847925);
   hext_stack_2->SetBinError(14,3.128804);
   hext_stack_2->SetBinError(15,2.737459);
   hext_stack_2->SetBinError(16,5.840144);
   hext_stack_2->SetEntries(1711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(3,0.2713922);
   hdirt_stack_3->SetBinContent(4,4.276048);
   hdirt_stack_3->SetBinContent(5,8.244959);
   hdirt_stack_3->SetBinContent(6,6.896261);
   hdirt_stack_3->SetBinContent(7,7.035496);
   hdirt_stack_3->SetBinContent(8,6.734444);
   hdirt_stack_3->SetBinContent(9,8.654208);
   hdirt_stack_3->SetBinContent(10,4.113098);
   hdirt_stack_3->SetBinContent(11,3.250316);
   hdirt_stack_3->SetBinContent(12,2.719066);
   hdirt_stack_3->SetBinContent(13,1.432345);
   hdirt_stack_3->SetBinContent(14,1.303247);
   hdirt_stack_3->SetBinContent(15,0.7766966);
   hdirt_stack_3->SetBinContent(16,7.12747);
   hdirt_stack_3->SetBinError(3,0.2713922);
   hdirt_stack_3->SetBinError(4,1.104961);
   hdirt_stack_3->SetBinError(5,1.590594);
   hdirt_stack_3->SetBinError(6,1.369057);
   hdirt_stack_3->SetBinError(7,1.374237);
   hdirt_stack_3->SetBinError(8,1.511998);
   hdirt_stack_3->SetBinError(9,2.391104);
   hdirt_stack_3->SetBinError(10,1.105593);
   hdirt_stack_3->SetBinError(11,1.01556);
   hdirt_stack_3->SetBinError(12,0.8507606);
   hdirt_stack_3->SetBinError(13,0.6177675);
   hdirt_stack_3->SetBinError(14,0.5404811);
   hdirt_stack_3->SetBinError(15,0.3986627);
   hdirt_stack_3->SetBinError(16,1.626772);
   hdirt_stack_3->SetEntries(246);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(3,9.553386);
   houtFV_stack_4->SetBinContent(4,48.3665);
   houtFV_stack_4->SetBinContent(5,80.49046);
   houtFV_stack_4->SetBinContent(6,85.14911);
   houtFV_stack_4->SetBinContent(7,88.38544);
   houtFV_stack_4->SetBinContent(8,67.78777);
   houtFV_stack_4->SetBinContent(9,74.58048);
   houtFV_stack_4->SetBinContent(10,44.84456);
   houtFV_stack_4->SetBinContent(11,40.718);
   houtFV_stack_4->SetBinContent(12,23.44247);
   houtFV_stack_4->SetBinContent(13,20.58864);
   houtFV_stack_4->SetBinContent(14,11.06938);
   houtFV_stack_4->SetBinContent(15,11.25408);
   houtFV_stack_4->SetBinContent(16,28.3396);
   houtFV_stack_4->SetBinError(3,1.565995);
   houtFV_stack_4->SetBinError(4,4.186697);
   houtFV_stack_4->SetBinError(5,5.887429);
   houtFV_stack_4->SetBinError(6,6.209741);
   houtFV_stack_4->SetBinError(7,5.307195);
   houtFV_stack_4->SetBinError(8,4.401598);
   houtFV_stack_4->SetBinError(9,7.024869);
   houtFV_stack_4->SetBinError(10,3.973065);
   houtFV_stack_4->SetBinError(11,4.072069);
   houtFV_stack_4->SetBinError(12,2.67748);
   houtFV_stack_4->SetBinError(13,3.384735);
   houtFV_stack_4->SetBinError(14,1.695789);
   houtFV_stack_4->SetBinError(15,1.68102);
   houtFV_stack_4->SetBinError(16,4.408477);
   houtFV_stack_4->SetEntries(2424);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(5);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.798394);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.167405);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.99779);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.44611);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.76498);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.17717);
   hNCpi0inFVres_stack_7->SetBinContent(10,17.43906);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.05685);
   hNCpi0inFVres_stack_7->SetBinContent(12,10.0271);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.925601);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.913832);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.378987);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.461949);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4268676);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5788873);
   hNCpi0inFVres_stack_7->SetBinError(6,1.04886);
   hNCpi0inFVres_stack_7->SetBinError(7,1.22621);
   hNCpi0inFVres_stack_7->SetBinError(8,1.398472);
   hNCpi0inFVres_stack_7->SetBinError(9,1.350787);
   hNCpi0inFVres_stack_7->SetBinError(10,1.36381);
   hNCpi0inFVres_stack_7->SetBinError(11,1.268951);
   hNCpi0inFVres_stack_7->SetBinError(12,1.031115);
   hNCpi0inFVres_stack_7->SetBinError(13,1.081534);
   hNCpi0inFVres_stack_7->SetBinError(14,0.831331);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6620064);
   hNCpi0inFVres_stack_7->SetBinError(16,0.860848);
   hNCpi0inFVres_stack_7->SetEntries(2487);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.793658);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.451472);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.713292);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.497404);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.244734);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.52597);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.15506);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.29032);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.920312);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.104242);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.970376);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.69404);
   hNCpi0inFVdis_stack_8->SetBinContent(16,21.78453);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2977841);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4141412);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7027411);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.826086);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9780684);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.000072);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.098847);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.035164);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9309379);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.022364);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8500803);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8974463);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.442962);
   hNCpi0inFVdis_stack_8->SetEntries(2000);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,3.66297);
   hCCpi0inFV_stack_10->SetBinContent(4,29.75901);
   hCCpi0inFV_stack_10->SetBinContent(5,106.2986);
   hCCpi0inFV_stack_10->SetBinContent(6,254.9891);
   hCCpi0inFV_stack_10->SetBinContent(7,447.0356);
   hCCpi0inFV_stack_10->SetBinContent(8,610.9913);
   hCCpi0inFV_stack_10->SetBinContent(9,712.9558);
   hCCpi0inFV_stack_10->SetBinContent(10,708.7415);
   hCCpi0inFV_stack_10->SetBinContent(11,660.1611);
   hCCpi0inFV_stack_10->SetBinContent(12,579.2888);
   hCCpi0inFV_stack_10->SetBinContent(13,470.4321);
   hCCpi0inFV_stack_10->SetBinContent(14,386.5312);
   hCCpi0inFV_stack_10->SetBinContent(15,292.3604);
   hCCpi0inFV_stack_10->SetBinContent(16,1012);
   hCCpi0inFV_stack_10->SetBinError(3,0.9816245);
   hCCpi0inFV_stack_10->SetBinError(4,2.651299);
   hCCpi0inFV_stack_10->SetBinError(5,5.112951);
   hCCpi0inFV_stack_10->SetBinError(6,8.055397);
   hCCpi0inFV_stack_10->SetBinError(7,10.67699);
   hCCpi0inFV_stack_10->SetBinError(8,12.36742);
   hCCpi0inFV_stack_10->SetBinError(9,13.42947);
   hCCpi0inFV_stack_10->SetBinError(10,13.35954);
   hCCpi0inFV_stack_10->SetBinError(11,12.9481);
   hCCpi0inFV_stack_10->SetBinError(12,12.09134);
   hCCpi0inFV_stack_10->SetBinError(13,10.84701);
   hCCpi0inFV_stack_10->SetBinError(14,9.885881);
   hCCpi0inFV_stack_10->SetBinError(15,8.61932);
   hCCpi0inFV_stack_10->SetBinError(16,16.07943);
   hCCpi0inFV_stack_10->SetEntries(26812);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(3,19.90524);
   hNCinFV_stack_11->SetBinContent(4,129.1804);
   hNCinFV_stack_11->SetBinContent(5,196.5353);
   hNCinFV_stack_11->SetBinContent(6,216.7784);
   hNCinFV_stack_11->SetBinContent(7,208.8614);
   hNCinFV_stack_11->SetBinContent(8,166.4567);
   hNCinFV_stack_11->SetBinContent(9,146.5114);
   hNCinFV_stack_11->SetBinContent(10,98.45526);
   hNCinFV_stack_11->SetBinContent(11,67.1602);
   hNCinFV_stack_11->SetBinContent(12,53.67424);
   hNCinFV_stack_11->SetBinContent(13,42.7134);
   hNCinFV_stack_11->SetBinContent(14,31.12407);
   hNCinFV_stack_11->SetBinContent(15,18.27789);
   hNCinFV_stack_11->SetBinContent(16,65.71515);
   hNCinFV_stack_11->SetBinError(3,2.296354);
   hNCinFV_stack_11->SetBinError(4,5.743208);
   hNCinFV_stack_11->SetBinError(5,7.008951);
   hNCinFV_stack_11->SetBinError(6,7.511364);
   hNCinFV_stack_11->SetBinError(7,7.260162);
   hNCinFV_stack_11->SetBinError(8,6.550143);
   hNCinFV_stack_11->SetBinError(9,6.083802);
   hNCinFV_stack_11->SetBinError(10,4.992182);
   hNCinFV_stack_11->SetBinError(11,4.143914);
   hNCinFV_stack_11->SetBinError(12,3.710778);
   hNCinFV_stack_11->SetBinError(13,3.320929);
   hNCinFV_stack_11->SetBinError(14,2.831486);
   hNCinFV_stack_11->SetBinError(15,2.159689);
   hNCinFV_stack_11->SetBinError(16,4.052767);
   hNCinFV_stack_11->SetEntries(6196);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(3,574.3604);
   hnumuCCinFV_stack_12->SetBinContent(4,3590.78);
   hnumuCCinFV_stack_12->SetBinContent(5,6753.351);
   hnumuCCinFV_stack_12->SetBinContent(6,8573.456);
   hnumuCCinFV_stack_12->SetBinContent(7,9061.979);
   hnumuCCinFV_stack_12->SetBinContent(8,8559.386);
   hnumuCCinFV_stack_12->SetBinContent(9,7238.9);
   hnumuCCinFV_stack_12->SetBinContent(10,5821.742);
   hnumuCCinFV_stack_12->SetBinContent(11,4512.548);
   hnumuCCinFV_stack_12->SetBinContent(12,3305.757);
   hnumuCCinFV_stack_12->SetBinContent(13,2346.568);
   hnumuCCinFV_stack_12->SetBinContent(14,1639.803);
   hnumuCCinFV_stack_12->SetBinContent(15,1095.655);
   hnumuCCinFV_stack_12->SetBinContent(16,2903.252);
   hnumuCCinFV_stack_12->SetBinError(3,17.03494);
   hnumuCCinFV_stack_12->SetBinError(4,42.57353);
   hnumuCCinFV_stack_12->SetBinError(5,60.55715);
   hnumuCCinFV_stack_12->SetBinError(6,67.59435);
   hnumuCCinFV_stack_12->SetBinError(7,70.45105);
   hnumuCCinFV_stack_12->SetBinError(8,68.95265);
   hnumuCCinFV_stack_12->SetBinError(9,62.4932);
   hnumuCCinFV_stack_12->SetBinError(10,55.7279);
   hnumuCCinFV_stack_12->SetBinError(11,49.22692);
   hnumuCCinFV_stack_12->SetBinError(12,41.91337);
   hnumuCCinFV_stack_12->SetBinError(13,35.50891);
   hnumuCCinFV_stack_12->SetBinError(14,29.06418);
   hnumuCCinFV_stack_12->SetBinError(15,23.4749);
   hnumuCCinFV_stack_12->SetBinError(16,38.04741);
   hnumuCCinFV_stack_12->SetEntries(229314);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.4086692);
   hnueCCinFV_stack_13->SetBinContent(4,1.542641);
   hnueCCinFV_stack_13->SetBinContent(5,4.523542);
   hnueCCinFV_stack_13->SetBinContent(6,6.116182);
   hnueCCinFV_stack_13->SetBinContent(7,3.861034);
   hnueCCinFV_stack_13->SetBinContent(8,2.143771);
   hnueCCinFV_stack_13->SetBinContent(9,4.426955);
   hnueCCinFV_stack_13->SetBinContent(10,4.329726);
   hnueCCinFV_stack_13->SetBinContent(11,3.270646);
   hnueCCinFV_stack_13->SetBinContent(12,3.04981);
   hnueCCinFV_stack_13->SetBinContent(13,6.268939);
   hnueCCinFV_stack_13->SetBinContent(14,5.464924);
   hnueCCinFV_stack_13->SetBinContent(15,3.517817);
   hnueCCinFV_stack_13->SetBinContent(16,21.75344);
   hnueCCinFV_stack_13->SetBinError(3,0.2892725);
   hnueCCinFV_stack_13->SetBinError(4,0.7052656);
   hnueCCinFV_stack_13->SetBinError(5,1.580482);
   hnueCCinFV_stack_13->SetBinError(6,2.653686);
   hnueCCinFV_stack_13->SetBinError(7,1.109632);
   hnueCCinFV_stack_13->SetBinError(8,0.7126492);
   hnueCCinFV_stack_13->SetBinError(9,0.977903);
   hnueCCinFV_stack_13->SetBinError(10,1.158465);
   hnueCCinFV_stack_13->SetBinError(11,0.9148018);
   hnueCCinFV_stack_13->SetBinError(12,0.885335);
   hnueCCinFV_stack_13->SetBinError(13,1.306632);
   hnueCCinFV_stack_13->SetBinError(14,1.218739);
   hnueCCinFV_stack_13->SetBinError(15,0.9412229);
   hnueCCinFV_stack_13->SetBinError(16,2.320332);
   hnueCCinFV_stack_13->SetEntries(282);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__17->SetBinContent(3,613.4084);
   hmcerror__17->SetBinContent(4,3840.304);
   hmcerror__17->SetBinContent(5,7234.219);
   hmcerror__17->SetBinContent(6,9249.812);
   hmcerror__17->SetBinContent(7,9947.474);
   hmcerror__17->SetBinContent(8,9557.706);
   hmcerror__17->SetBinContent(9,8313.123);
   hmcerror__17->SetBinContent(10,6804.994);
   hmcerror__17->SetBinContent(11,5390.423);
   hmcerror__17->SetBinContent(12,4037.344);
   hmcerror__17->SetBinContent(13,2954.788);
   hmcerror__17->SetBinContent(14,2120.581);
   hmcerror__17->SetBinContent(15,1460.917);
   hmcerror__17->SetBinContent(16,4183.884);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,0.3895343);
   hmcerror__17->SetBinError(3,132.345);
   hmcerror__17->SetBinError(4,689.9448);
   hmcerror__17->SetBinError(5,1280.912);
   hmcerror__17->SetBinError(6,1653.926);
   hmcerror__17->SetBinError(7,1762.478);
   hmcerror__17->SetBinError(8,1726.467);
   hmcerror__17->SetBinError(9,1508.792);
   hmcerror__17->SetBinError(10,1298.143);
   hmcerror__17->SetBinError(11,1102.663);
   hmcerror__17->SetBinError(12,901.8213);
   hmcerror__17->SetBinError(13,677.2401);
   hmcerror__17->SetBinError(14,513.0202);
   hmcerror__17->SetBinError(15,400.0326);
   hmcerror__17->SetBinError(16,1177.392);
   hmcerror__17->SetEntries(63250.55);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[15] = {
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
   Double_t _fy3021[15] = {
   0,
   0,
   583,
   4079,
   7685,
   9974,
   10584,
   9888,
   8358,
   6681,
   5048,
   3681,
   2500,
   1707,
   1125};
   Double_t _felx3021[15] = {
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
   Double_t _fely3021[15] = {
   0,
   0,
   24.14539,
   63.86705,
   87.66413,
   99.86992,
   102.8786,
   99.43842,
   91.4221,
   81.73738,
   71.04928,
   60.67125,
   50,
   41.31586,
   33.54102};
   Double_t _fehx3021[15] = {
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
   Double_t _fehy3021[15] = {
   1.1478,
   1.1478,
   24.14539,
   63.86705,
   87.66413,
   99.86992,
   102.8786,
   99.43842,
   91.4221,
   81.73738,
   71.04928,
   60.67125,
   50,
   41.31586,
   33.54102};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1650);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(11755.57);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 71893.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 272.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 595.7","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 55.7","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 606.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  127.2","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  85.4","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5263.2","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 1395.6","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 63074.3","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 48.9","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("numuCC_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[15] = {
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
   Double_t _fy3022[15] = {
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
   Double_t _felx3022[15] = {
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
   Double_t _fely3022[15] = {
   0,
   0,
   0.2157535,
   0.1796589,
   0.177063,
   0.1788065,
   0.1771785,
   0.1806361,
   0.1814952,
   0.1907632,
   0.2045596,
   0.22337,
   0.2292009,
   0.2419243,
   0.2738229};
   Double_t _fehx3022[15] = {
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
   Double_t _fehy3022[15] = {
   0,
   0,
   0.2157535,
   0.1796589,
   0.177063,
   0.1788065,
   0.1771785,
   0.1806361,
   0.1814952,
   0.1907632,
   0.2045596,
   0.22337,
   0.2292009,
   0.2419243,
   0.2738229};
   grae = new TGraphAsymmErrors(15,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1650);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[15] = {
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
   Double_t _fy3023[15] = {
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
   Double_t _felx3023[15] = {
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
   Double_t _fely3023[15] = {
   0,
   0,
   0.1888993,
   0.1604201,
   0.1603588,
   0.1621776,
   0.1651022,
   0.1676504,
   0.1685312,
   0.1736463,
   0.1843389,
   0.1867723,
   0.196676,
   0.1979361,
   0.2022866};
   Double_t _fehx3023[15] = {
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
   Double_t _fehy3023[15] = {
   0,
   0,
   0.1888993,
   0.1604201,
   0.1603588,
   0.1621776,
   0.1651022,
   0.1676504,
   0.1685312,
   0.1736463,
   0.1843389,
   0.1867723,
   0.196676,
   0.1979361,
   0.2022866};
   grae = new TGraphAsymmErrors(15,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1650);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[15] = {
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
   Double_t _fy3024[15] = {
   10,
   10,
   0.9504271,
   1.062156,
   1.062312,
   1.078292,
   1.063989,
   1.034558,
   1.005398,
   0.9817789,
   0.9364757,
   0.9117381,
   0.8460844,
   0.8049681,
   0.7700641};
   Double_t _felx3024[15] = {
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
   Double_t _fely3024[15] = {
   0,
   0,
   0.03936267,
   0.01663073,
   0.01211798,
   0.01079697,
   0.01034218,
   0.01040401,
   0.01099732,
   0.01201138,
   0.01318065,
   0.01502752,
   0.01692169,
   0.01948327,
   0.02295888};
   Double_t _fehx3024[15] = {
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
   Double_t _fehy3024[15] = {
   0,
   0,
   0.03936267,
   0.01663073,
   0.01211798,
   0.01079697,
   0.01034218,
   0.01040401,
   0.01099732,
   0.01201138,
   0.01318065,
   0.01502752,
   0.01692169,
   0.01948327,
   0.02295888};
   grae = new TGraphAsymmErrors(15,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1650);
   Graph_Graph3024->SetMinimum(0.6723947);
   Graph_Graph3024->SetMaximum(10.92529);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

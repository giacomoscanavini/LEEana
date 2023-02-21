#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 16:15:26 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",190,172,1200,900);
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
   pad1->Range(-246.1538,-1.461185,1805.128,161.5763);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__25->SetBinContent(3,1.266723);
   hmc__25->SetBinContent(4,25.82638);
   hmc__25->SetBinContent(5,33.99078);
   hmc__25->SetBinContent(6,53.1639);
   hmc__25->SetBinContent(7,70.43903);
   hmc__25->SetBinContent(8,60.43659);
   hmc__25->SetBinContent(9,66.56596);
   hmc__25->SetBinContent(10,73.05923);
   hmc__25->SetBinContent(11,54.69284);
   hmc__25->SetBinContent(12,45.59982);
   hmc__25->SetBinContent(13,43.75253);
   hmc__25->SetBinContent(14,34.4896);
   hmc__25->SetBinContent(15,28.69006);
   hmc__25->SetBinContent(16,22.09296);
   hmc__25->SetBinContent(17,15.99431);
   hmc__25->SetBinContent(18,13.00384);
   hmc__25->SetBinContent(19,12.30546);
   hmc__25->SetBinContent(20,5.886708);
   hmc__25->SetBinContent(21,9.439425);
   hmc__25->SetBinContent(22,6.322996);
   hmc__25->SetBinContent(23,3.36784);
   hmc__25->SetBinContent(24,4.314279);
   hmc__25->SetBinContent(25,36.35635);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,0.3895343);
   hmc__25->SetBinError(3,3.13402);
   hmc__25->SetBinError(4,10.04315);
   hmc__25->SetBinError(5,12.04792);
   hmc__25->SetBinError(6,21.04952);
   hmc__25->SetBinError(7,25.5519);
   hmc__25->SetBinError(8,24.89496);
   hmc__25->SetBinError(9,24.32848);
   hmc__25->SetBinError(10,26.52094);
   hmc__25->SetBinError(11,21.99341);
   hmc__25->SetBinError(12,21.01269);
   hmc__25->SetBinError(13,16.53577);
   hmc__25->SetBinError(14,27.90939);
   hmc__25->SetBinError(15,14.98793);
   hmc__25->SetBinError(16,13.69001);
   hmc__25->SetBinError(17,13.73161);
   hmc__25->SetBinError(18,11.76478);
   hmc__25->SetBinError(19,11.40044);
   hmc__25->SetBinError(20,6.227727);
   hmc__25->SetBinError(21,18.22878);
   hmc__25->SetBinError(22,10.43653);
   hmc__25->SetBinError(23,5.062875);
   hmc__25->SetBinError(24,4.300668);
   hmc__25->SetBinError(25,17.42374);
   hmc__25->SetMinimum(-1.461185);
   hmc__25->SetMaximum(153.4244);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,1600);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(76.7122);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.3917402);
   hbadmatch_stack_1->SetBinContent(5,0.6803553);
   hbadmatch_stack_1->SetBinContent(6,2.175684);
   hbadmatch_stack_1->SetBinContent(7,2.37542);
   hbadmatch_stack_1->SetBinContent(8,1.020533);
   hbadmatch_stack_1->SetBinContent(9,2.003762);
   hbadmatch_stack_1->SetBinContent(10,3.034666);
   hbadmatch_stack_1->SetBinContent(11,2.201714);
   hbadmatch_stack_1->SetBinContent(12,2.233909);
   hbadmatch_stack_1->SetBinContent(13,0.9785835);
   hbadmatch_stack_1->SetBinContent(14,0.7834804);
   hbadmatch_stack_1->SetBinContent(15,1.268811);
   hbadmatch_stack_1->SetBinContent(16,0.785171);
   hbadmatch_stack_1->SetBinContent(17,0.7302274);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.6360607);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.6803553);
   hbadmatch_stack_1->SetBinContent(22,0.2239027);
   hbadmatch_stack_1->SetBinContent(25,0.5352025);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.2770047);
   hbadmatch_stack_1->SetBinError(5,0.4810838);
   hbadmatch_stack_1->SetBinError(6,0.7619957);
   hbadmatch_stack_1->SetBinError(7,0.7701835);
   hbadmatch_stack_1->SetBinError(8,0.5892049);
   hbadmatch_stack_1->SetBinError(9,0.6810301);
   hbadmatch_stack_1->SetBinError(10,0.9201965);
   hbadmatch_stack_1->SetBinError(11,0.8372062);
   hbadmatch_stack_1->SetBinError(12,0.719656);
   hbadmatch_stack_1->SetBinError(13,0.5031178);
   hbadmatch_stack_1->SetBinError(14,0.3917439);
   hbadmatch_stack_1->SetBinError(15,0.5889569);
   hbadmatch_stack_1->SetBinError(16,0.3925882);
   hbadmatch_stack_1->SetBinError(17,0.4379386);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.4822316);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.4810838);
   hbadmatch_stack_1->SetBinError(22,0.2239027);
   hbadmatch_stack_1->SetBinError(25,0.3921167);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(4,10.44459);
   hext_stack_2->SetBinContent(5,4.435048);
   hext_stack_2->SetBinContent(6,6.221437);
   hext_stack_2->SetBinContent(7,3.318994);
   hext_stack_2->SetBinContent(8,3.807795);
   hext_stack_2->SetBinContent(9,4.620993);
   hext_stack_2->SetBinContent(10,8.705693);
   hext_stack_2->SetBinContent(11,5.725457);
   hext_stack_2->SetBinContent(12,5.102613);
   hext_stack_2->SetBinContent(13,7.180269);
   hext_stack_2->SetBinContent(14,4.994461);
   hext_stack_2->SetBinContent(15,3.15182);
   hext_stack_2->SetBinContent(16,1.461993);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,2.185808);
   hext_stack_2->SetBinContent(19,2.352983);
   hext_stack_2->SetBinContent(21,1.614806);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,11.35435);
   hext_stack_2->SetBinError(4,2.510871);
   hext_stack_2->SetBinError(5,1.533985);
   hext_stack_2->SetBinError(6,1.731894);
   hext_stack_2->SetBinError(7,1.146136);
   hext_stack_2->SetBinError(8,1.24058);
   hext_stack_2->SetBinError(9,1.367364);
   hext_stack_2->SetBinError(10,2.141505);
   hext_stack_2->SetBinError(11,1.72489);
   hext_stack_2->SetBinError(12,1.515354);
   hext_stack_2->SetBinError(13,1.928098);
   hext_stack_2->SetBinError(14,1.644594);
   hext_stack_2->SetBinError(15,1.23684);
   hext_stack_2->SetBinError(16,0.7356036);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,1.006415);
   hext_stack_2->SetBinError(19,0.8925942);
   hext_stack_2->SetBinError(21,0.8528597);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,2.508547);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(5,0.9558302);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.7382622);
   hdirt_stack_3->SetBinContent(8,0.8516157);
   hdirt_stack_3->SetBinContent(9,0.4032428);
   hdirt_stack_3->SetBinContent(10,0.4149213);
   hdirt_stack_3->SetBinContent(11,0.7430996);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinError(5,0.5681422);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.4495333);
   hdirt_stack_3->SetBinError(8,0.4536847);
   hdirt_stack_3->SetBinError(9,0.2968897);
   hdirt_stack_3->SetBinError(10,0.4149213);
   hdirt_stack_3->SetBinError(11,0.5275648);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(20,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(3,0.1950248);
   houtFV_stack_4->SetBinContent(4,4.858498);
   houtFV_stack_4->SetBinContent(5,8.406206);
   houtFV_stack_4->SetBinContent(6,6.849172);
   houtFV_stack_4->SetBinContent(7,14.28807);
   houtFV_stack_4->SetBinContent(8,9.780632);
   houtFV_stack_4->SetBinContent(9,12.46368);
   houtFV_stack_4->SetBinContent(10,13.01538);
   houtFV_stack_4->SetBinContent(11,11.71843);
   houtFV_stack_4->SetBinContent(12,7.179254);
   houtFV_stack_4->SetBinContent(13,6.428041);
   houtFV_stack_4->SetBinContent(14,5.180059);
   houtFV_stack_4->SetBinContent(15,4.394848);
   houtFV_stack_4->SetBinContent(16,3.949895);
   houtFV_stack_4->SetBinContent(17,4.144547);
   houtFV_stack_4->SetBinContent(18,1.570342);
   houtFV_stack_4->SetBinContent(19,1.070405);
   houtFV_stack_4->SetBinContent(20,1.608988);
   houtFV_stack_4->SetBinContent(21,0.8770706);
   houtFV_stack_4->SetBinContent(22,0.5352025);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,0.5867651);
   houtFV_stack_4->SetBinContent(25,1.65886);
   houtFV_stack_4->SetBinError(3,0.1950249);
   houtFV_stack_4->SetBinError(4,1.133978);
   houtFV_stack_4->SetBinError(5,1.50826);
   houtFV_stack_4->SetBinError(6,1.310966);
   houtFV_stack_4->SetBinError(7,1.804138);
   houtFV_stack_4->SetBinError(8,1.514831);
   houtFV_stack_4->SetBinError(9,1.777883);
   houtFV_stack_4->SetBinError(10,1.817527);
   houtFV_stack_4->SetBinError(11,1.760458);
   houtFV_stack_4->SetBinError(12,1.308203);
   houtFV_stack_4->SetBinError(13,1.26185);
   houtFV_stack_4->SetBinError(14,1.144624);
   houtFV_stack_4->SetBinError(15,1.173948);
   houtFV_stack_4->SetBinError(16,1.057182);
   houtFV_stack_4->SetBinError(17,1.053332);
   houtFV_stack_4->SetBinError(18,0.5552036);
   houtFV_stack_4->SetBinError(19,0.5545368);
   houtFV_stack_4->SetBinError(20,0.6801404);
   houtFV_stack_4->SetBinError(21,0.5197486);
   houtFV_stack_4->SetBinError(22,0.3921167);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.3387718);
   houtFV_stack_4->SetBinError(25,0.650338);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2792353);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1954681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.96656);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.15082);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.58288);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.61595);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.07745);
   hNCpi0inFVres_stack_7->SetBinContent(9,16.17626);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.56537);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.04446);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.617316);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.790686);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.221629);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.503214);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.733048);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.840744);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.5015358);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9346539);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.5717859);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.9492723);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.07349);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(4,0.798536);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9608041);
   hNCpi0inFVres_stack_7->SetBinError(6,1.35957);
   hNCpi0inFVres_stack_7->SetBinError(7,1.525781);
   hNCpi0inFVres_stack_7->SetBinError(8,1.441213);
   hNCpi0inFVres_stack_7->SetBinError(9,1.327365);
   hNCpi0inFVres_stack_7->SetBinError(10,1.382588);
   hNCpi0inFVres_stack_7->SetBinError(11,1.120882);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9655864);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8269492);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5361274);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7355304);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5296762);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4575982);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1658436);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3135935);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2355051);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3968647);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3401847);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.4178359);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.492158);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.840576);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.320284);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.12656);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.905352);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.207852);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.83203);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.300098);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.384798);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.868812);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9617218);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.757212);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.96189);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.784776);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.158647);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4002008);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4202823);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6437751);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6769285);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6415035);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6261522);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5732015);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4924215);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5448296);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4928828);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2825829);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.489714);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3355772);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4184261);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(4,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(5,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(6,2.950065);
   hCCpi0inFV_stack_10->SetBinContent(7,7.740245);
   hCCpi0inFV_stack_10->SetBinContent(8,10.03068);
   hCCpi0inFV_stack_10->SetBinContent(9,13.53498);
   hCCpi0inFV_stack_10->SetBinContent(10,14.5548);
   hCCpi0inFV_stack_10->SetBinContent(11,9.400663);
   hCCpi0inFV_stack_10->SetBinContent(12,11.38836);
   hCCpi0inFV_stack_10->SetBinContent(13,9.635406);
   hCCpi0inFV_stack_10->SetBinContent(14,10.24688);
   hCCpi0inFV_stack_10->SetBinContent(15,9.131121);
   hCCpi0inFV_stack_10->SetBinContent(16,6.15495);
   hCCpi0inFV_stack_10->SetBinContent(17,4.249735);
   hCCpi0inFV_stack_10->SetBinContent(18,3.096197);
   hCCpi0inFV_stack_10->SetBinContent(19,2.929362);
   hCCpi0inFV_stack_10->SetBinContent(20,1.422163);
   hCCpi0inFV_stack_10->SetBinContent(21,2.730956);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(23,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9489381);
   hCCpi0inFV_stack_10->SetBinContent(25,8.933238);
   hCCpi0inFV_stack_10->SetBinError(4,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(5,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(6,0.8124244);
   hCCpi0inFV_stack_10->SetBinError(7,1.370888);
   hCCpi0inFV_stack_10->SetBinError(8,1.603074);
   hCCpi0inFV_stack_10->SetBinError(9,1.869805);
   hCCpi0inFV_stack_10->SetBinError(10,1.96929);
   hCCpi0inFV_stack_10->SetBinError(11,1.497022);
   hCCpi0inFV_stack_10->SetBinError(12,1.660775);
   hCCpi0inFV_stack_10->SetBinError(13,1.59817);
   hCCpi0inFV_stack_10->SetBinError(14,1.56384);
   hCCpi0inFV_stack_10->SetBinError(15,1.577962);
   hCCpi0inFV_stack_10->SetBinError(16,1.226762);
   hCCpi0inFV_stack_10->SetBinError(17,1.038438);
   hCCpi0inFV_stack_10->SetBinError(18,0.8492308);
   hCCpi0inFV_stack_10->SetBinError(19,0.8777653);
   hCCpi0inFV_stack_10->SetBinError(20,0.5396069);
   hCCpi0inFV_stack_10->SetBinError(21,0.8550514);
   hCCpi0inFV_stack_10->SetBinError(22,0.48078);
   hCCpi0inFV_stack_10->SetBinError(23,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(24,0.5693847);
   hCCpi0inFV_stack_10->SetBinError(25,1.545672);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,1.268811);
   hNCinFV_stack_11->SetBinContent(6,1.805704);
   hNCinFV_stack_11->SetBinContent(7,3.17764);
   hNCinFV_stack_11->SetBinContent(8,3.089121);
   hNCinFV_stack_11->SetBinContent(9,3.572761);
   hNCinFV_stack_11->SetBinContent(10,1.761986);
   hNCinFV_stack_11->SetBinContent(11,3.606336);
   hNCinFV_stack_11->SetBinContent(12,1.91052);
   hNCinFV_stack_11->SetBinContent(13,2.732646);
   hNCinFV_stack_11->SetBinContent(14,2.052291);
   hNCinFV_stack_11->SetBinContent(15,1.120737);
   hNCinFV_stack_11->SetBinContent(16,2.874418);
   hNCinFV_stack_11->SetBinContent(17,1.465526);
   hNCinFV_stack_11->SetBinContent(18,1.125349);
   hNCinFV_stack_11->SetBinContent(19,1.412273);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.9286332);
   hNCinFV_stack_11->SetBinContent(22,1.270501);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,1.072095);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.5889569);
   hNCinFV_stack_11->SetBinError(6,0.7080169);
   hNCinFV_stack_11->SetBinError(7,0.8775989);
   hNCinFV_stack_11->SetBinError(8,0.8096241);
   hNCinFV_stack_11->SetBinError(9,0.9209972);
   hNCinFV_stack_11->SetBinError(10,0.587334);
   hNCinFV_stack_11->SetBinError(11,1.000295);
   hNCinFV_stack_11->SetBinError(12,0.6511312);
   hNCinFV_stack_11->SetBinError(13,0.8554385);
   hNCinFV_stack_11->SetBinError(14,0.7073425);
   hNCinFV_stack_11->SetBinError(15,0.5577095);
   hNCinFV_stack_11->SetBinError(16,0.8989642);
   hNCinFV_stack_11->SetBinError(17,0.6209405);
   hNCinFV_stack_11->SetBinError(18,0.5194673);
   hNCinFV_stack_11->SetBinError(19,0.6510715);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.48078);
   hNCinFV_stack_11->SetBinError(22,0.5895188);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.5551335);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,0.2472291);
   hnumuCCinFV_stack_12->SetBinContent(4,3.452138);
   hnumuCCinFV_stack_12->SetBinContent(5,5.931095);
   hnumuCCinFV_stack_12->SetBinContent(6,13.46081);
   hnumuCCinFV_stack_12->SetBinContent(7,13.43204);
   hnumuCCinFV_stack_12->SetBinContent(8,7.512701);
   hnumuCCinFV_stack_12->SetBinContent(9,9.661572);
   hnumuCCinFV_stack_12->SetBinContent(10,11.17799);
   hnumuCCinFV_stack_12->SetBinContent(11,7.056527);
   hnumuCCinFV_stack_12->SetBinContent(12,6.547511);
   hnumuCCinFV_stack_12->SetBinContent(13,7.594206);
   hnumuCCinFV_stack_12->SetBinContent(14,4.391479);
   hnumuCCinFV_stack_12->SetBinContent(15,3.668288);
   hnumuCCinFV_stack_12->SetBinContent(16,2.182401);
   hnumuCCinFV_stack_12->SetBinContent(17,2.473545);
   hnumuCCinFV_stack_12->SetBinContent(18,2.767411);
   hnumuCCinFV_stack_12->SetBinContent(19,2.040283);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(21,1.072095);
   hnumuCCinFV_stack_12->SetBinContent(22,1.514091);
   hnumuCCinFV_stack_12->SetBinContent(23,1.318683);
   hnumuCCinFV_stack_12->SetBinContent(24,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(25,7.352757);
   hnumuCCinFV_stack_12->SetBinError(3,0.2472291);
   hnumuCCinFV_stack_12->SetBinError(4,1.541926);
   hnumuCCinFV_stack_12->SetBinError(5,1.347576);
   hnumuCCinFV_stack_12->SetBinError(6,2.293313);
   hnumuCCinFV_stack_12->SetBinError(7,2.078503);
   hnumuCCinFV_stack_12->SetBinError(8,1.695033);
   hnumuCCinFV_stack_12->SetBinError(9,2.044969);
   hnumuCCinFV_stack_12->SetBinError(10,1.764791);
   hnumuCCinFV_stack_12->SetBinError(11,1.346764);
   hnumuCCinFV_stack_12->SetBinError(12,1.569642);
   hnumuCCinFV_stack_12->SetBinError(13,1.436734);
   hnumuCCinFV_stack_12->SetBinError(14,1.14646);
   hnumuCCinFV_stack_12->SetBinError(15,1.03038);
   hnumuCCinFV_stack_12->SetBinError(16,0.7953534);
   hnumuCCinFV_stack_12->SetBinError(17,0.7678201);
   hnumuCCinFV_stack_12->SetBinError(18,0.8733286);
   hnumuCCinFV_stack_12->SetBinError(19,0.7956339);
   hnumuCCinFV_stack_12->SetBinError(20,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(21,0.5551335);
   hnumuCCinFV_stack_12->SetBinError(22,0.6381241);
   hnumuCCinFV_stack_12->SetBinError(23,0.5542732);
   hnumuCCinFV_stack_12->SetBinError(24,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(25,1.395886);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,1.72261);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(19,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,2.14485);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,1.577117);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.4334685);
   hnueCCinFV_stack_13->SetBinError(19,0.3326517);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.271778);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__26->SetBinContent(3,1.266723);
   hmcerror__26->SetBinContent(4,25.82638);
   hmcerror__26->SetBinContent(5,33.99078);
   hmcerror__26->SetBinContent(6,53.1639);
   hmcerror__26->SetBinContent(7,70.43903);
   hmcerror__26->SetBinContent(8,60.43659);
   hmcerror__26->SetBinContent(9,66.56596);
   hmcerror__26->SetBinContent(10,73.05923);
   hmcerror__26->SetBinContent(11,54.69284);
   hmcerror__26->SetBinContent(12,45.59982);
   hmcerror__26->SetBinContent(13,43.75253);
   hmcerror__26->SetBinContent(14,34.4896);
   hmcerror__26->SetBinContent(15,28.69006);
   hmcerror__26->SetBinContent(16,22.09296);
   hmcerror__26->SetBinContent(17,15.99431);
   hmcerror__26->SetBinContent(18,13.00384);
   hmcerror__26->SetBinContent(19,12.30546);
   hmcerror__26->SetBinContent(20,5.886708);
   hmcerror__26->SetBinContent(21,9.439425);
   hmcerror__26->SetBinContent(22,6.322996);
   hmcerror__26->SetBinContent(23,3.36784);
   hmcerror__26->SetBinContent(24,4.314279);
   hmcerror__26->SetBinContent(25,36.35635);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,0.3895343);
   hmcerror__26->SetBinError(3,3.13402);
   hmcerror__26->SetBinError(4,10.04315);
   hmcerror__26->SetBinError(5,12.04792);
   hmcerror__26->SetBinError(6,21.04952);
   hmcerror__26->SetBinError(7,25.5519);
   hmcerror__26->SetBinError(8,24.89496);
   hmcerror__26->SetBinError(9,24.32848);
   hmcerror__26->SetBinError(10,26.52094);
   hmcerror__26->SetBinError(11,21.99341);
   hmcerror__26->SetBinError(12,21.01269);
   hmcerror__26->SetBinError(13,16.53577);
   hmcerror__26->SetBinError(14,27.90939);
   hmcerror__26->SetBinError(15,14.98793);
   hmcerror__26->SetBinError(16,13.69001);
   hmcerror__26->SetBinError(17,13.73161);
   hmcerror__26->SetBinError(18,11.76478);
   hmcerror__26->SetBinError(19,11.40044);
   hmcerror__26->SetBinError(20,6.227727);
   hmcerror__26->SetBinError(21,18.22878);
   hmcerror__26->SetBinError(22,10.43653);
   hmcerror__26->SetBinError(23,5.062875);
   hmcerror__26->SetBinError(24,4.300668);
   hmcerror__26->SetBinError(25,17.42374);
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
   
   Double_t _fx3033[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3033[24] = {
   0,
   0,
   0,
   10,
   44,
   46,
   71,
   67,
   54,
   51,
   50,
   29,
   32,
   26,
   20,
   15,
   12,
   8,
   8,
   6,
   7,
   4,
   5,
   2};
   Double_t _felx3033[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3033[24] = {
   0,
   0,
   0,
   3.34883,
   6.7671,
   6.9153,
   8.5518,
   8.3119,
   7.4785,
   7.2725,
   7.2025,
   5.5285,
   5.7977,
   5.2453,
   4.6266,
   4.0385,
   3.64022,
   3.0307,
   3.0307,
   2.67925,
   2.85954,
   2.29683,
   2.48995,
   2};
   Double_t _fehx3033[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3033[24] = {
   1.1478,
   1.1478,
   1.1478,
   3.1179,
   6.5623,
   6.7108,
   8.3496,
   8.1094,
   7.275,
   7.0686,
   6.9985,
   5.3201,
   5.5904,
   5.0358,
   4.4133,
   3.8197,
   3.4155,
   2.7896,
   2.7896,
   2.41858,
   2.61053,
   1.98186,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1760);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(87.28456);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 567.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 77.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 119.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  150.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  35.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 123.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 109.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3034[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3034[24] = {
   0,
   0,
   2.474115,
   0.3888716,
   0.3544466,
   0.3959363,
   0.362752,
   0.4119186,
   0.3654792,
   0.363006,
   0.4021259,
   0.4608064,
   0.3779385,
   0.8092116,
   0.5224085,
   0.6196548,
   0.8585312,
   0.9047157,
   0.9264538,
   1.05793,
   1.931132,
   1.650567,
   1.5033,
   0.9968453};
   Double_t _fehx3034[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3034[24] = {
   0,
   0,
   2.474115,
   0.3888716,
   0.3544466,
   0.3959363,
   0.362752,
   0.4119186,
   0.3654792,
   0.363006,
   0.4021259,
   0.4608064,
   0.3779385,
   0.8092116,
   0.5224085,
   0.6196548,
   0.8585312,
   0.9047157,
   0.9264538,
   1.05793,
   1.931132,
   1.650567,
   1.5033,
   0.9968453};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1760);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3035[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3035[24] = {
   0,
   0,
   0.6198694,
   0.1931235,
   0.237498,
   0.2919591,
   0.2923986,
   0.3156809,
   0.2997664,
   0.2610671,
   0.244638,
   0.281792,
   0.2471359,
   0.2458083,
   0.2484454,
   0.2382643,
   0.3061037,
   0.2431955,
   0.2468037,
   0.3126468,
   0.288054,
   0.3377745,
   0.4491582,
   0.3429497};
   Double_t _fehx3035[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3035[24] = {
   0,
   0,
   0.6198694,
   0.1931235,
   0.237498,
   0.2919591,
   0.2923986,
   0.3156809,
   0.2997664,
   0.2610671,
   0.244638,
   0.281792,
   0.2471359,
   0.2458083,
   0.2484454,
   0.2382643,
   0.3061037,
   0.2431955,
   0.2468037,
   0.3126468,
   0.288054,
   0.3377745,
   0.4491582,
   0.3429497};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1760);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3036[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3036[24] = {
   10,
   10,
   0,
   0.3872009,
   1.294469,
   0.8652488,
   1.007964,
   1.1086,
   0.8112254,
   0.6980637,
   0.9141965,
   0.6359674,
   0.7313862,
   0.7538503,
   0.6971055,
   0.6789494,
   0.7502668,
   0.6152031,
   0.6501181,
   1.019245,
   0.7415706,
   0.6326115,
   1.484631,
   0.4635769};
   Double_t _felx3036[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3036[24] = {
   0,
   0,
   0,
   0.129667,
   0.1990863,
   0.1300751,
   0.1214071,
   0.1375309,
   0.1123472,
   0.09954252,
   0.13169,
   0.1212395,
   0.1325112,
   0.1520835,
   0.1612614,
   0.1827958,
   0.2275947,
   0.233062,
   0.2462891,
   0.4551355,
   0.3029358,
   0.3632503,
   0.7393315,
   0.4635769};
   Double_t _fehx3036[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3036[24] = {
   0,
   0,
   0.9061173,
   0.1207254,
   0.1930612,
   0.1262285,
   0.1185366,
   0.1341803,
   0.1092901,
   0.09675163,
   0.1279601,
   0.1166693,
   0.1277732,
   0.1460092,
   0.1538268,
   0.1728922,
   0.2135447,
   0.2145213,
   0.2266962,
   0.4108544,
   0.2765561,
   0.3134369,
   0.656397,
   0.3521261};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1760);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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

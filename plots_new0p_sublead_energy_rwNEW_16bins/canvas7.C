#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 20:02:47 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-8.938865,451.2821,988.4503);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__19->SetBinContent(1,301.4092);
   hmc__19->SetBinContent(2,446.9433);
   hmc__19->SetBinContent(3,426.2682);
   hmc__19->SetBinContent(4,319.4538);
   hmc__19->SetBinContent(5,203.4028);
   hmc__19->SetBinContent(6,115.6198);
   hmc__19->SetBinContent(7,72.10526);
   hmc__19->SetBinContent(8,49.43385);
   hmc__19->SetBinContent(9,32.55703);
   hmc__19->SetBinContent(10,16.28021);
   hmc__19->SetBinContent(11,13.08697);
   hmc__19->SetBinContent(12,7.726991);
   hmc__19->SetBinContent(13,3.65921);
   hmc__19->SetBinContent(14,2.115527);
   hmc__19->SetBinContent(15,2.300979);
   hmc__19->SetBinContent(16,0.9551177);
   hmc__19->SetBinContent(17,3.188475);
   hmc__19->SetBinError(1,82.76214);
   hmc__19->SetBinError(2,160.3991);
   hmc__19->SetBinError(3,166.3391);
   hmc__19->SetBinError(4,129.1579);
   hmc__19->SetBinError(5,87.51663);
   hmc__19->SetBinError(6,50.9661);
   hmc__19->SetBinError(7,32.51952);
   hmc__19->SetBinError(8,24.29329);
   hmc__19->SetBinError(9,22.36682);
   hmc__19->SetBinError(10,9.07023);
   hmc__19->SetBinError(11,8.170594);
   hmc__19->SetBinError(12,7.426411);
   hmc__19->SetBinError(13,4.590363);
   hmc__19->SetBinError(14,4.348954);
   hmc__19->SetBinError(15,4.799096);
   hmc__19->SetBinError(16,1.656017);
   hmc__19->SetBinError(17,4.37606);
   hmc__19->SetMinimum(-8.938865);
   hmc__19->SetMaximum(938.5809);
   hmc__19->SetEntries(1993.425);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",16,0,400);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(469.2905);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,7.140582);
   hbadmatch_stack_1->SetBinContent(2,7.673022);
   hbadmatch_stack_1->SetBinContent(3,9.06095);
   hbadmatch_stack_1->SetBinContent(4,7.121741);
   hbadmatch_stack_1->SetBinContent(5,3.083837);
   hbadmatch_stack_1->SetBinContent(6,2.750057);
   hbadmatch_stack_1->SetBinContent(7,1.662242);
   hbadmatch_stack_1->SetBinContent(8,0.8770706);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.381816);
   hbadmatch_stack_1->SetBinError(2,1.405464);
   hbadmatch_stack_1->SetBinError(3,1.624211);
   hbadmatch_stack_1->SetBinError(4,1.712315);
   hbadmatch_stack_1->SetBinError(5,0.8844289);
   hbadmatch_stack_1->SetBinError(6,0.9068888);
   hbadmatch_stack_1->SetBinError(7,0.6513556);
   hbadmatch_stack_1->SetBinError(8,0.5197486);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,20.62229);
   hext_stack_2->SetBinContent(2,25.43918);
   hext_stack_2->SetBinContent(3,20.02098);
   hext_stack_2->SetBinContent(4,12.45006);
   hext_stack_2->SetBinContent(5,7.549386);
   hext_stack_2->SetBinContent(6,1.461993);
   hext_stack_2->SetBinContent(7,2.028585);
   hext_stack_2->SetBinContent(8,1.37261);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,3.092522);
   hext_stack_2->SetBinError(2,3.226829);
   hext_stack_2->SetBinError(3,2.877697);
   hext_stack_2->SetBinError(4,2.407844);
   hext_stack_2->SetBinError(5,1.756995);
   hext_stack_2->SetBinError(6,0.7356036);
   hext_stack_2->SetBinError(7,0.8315593);
   hext_stack_2->SetBinError(8,0.8259691);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,2.411438);
   hdirt_stack_3->SetBinContent(2,1.576459);
   hdirt_stack_3->SetBinContent(3,1.646451);
   hdirt_stack_3->SetBinContent(4,0.6894026);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.1446783);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinError(1,0.7972198);
   hdirt_stack_3->SetBinError(2,0.6404587);
   hdirt_stack_3->SetBinError(3,0.6498364);
   hdirt_stack_3->SetBinError(4,0.3989221);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.1446783);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,13.74118);
   houtFV_stack_4->SetBinContent(2,12.14244);
   houtFV_stack_4->SetBinContent(3,10.23737);
   houtFV_stack_4->SetBinContent(4,7.478108);
   houtFV_stack_4->SetBinContent(5,5.925089);
   houtFV_stack_4->SetBinContent(6,1.570342);
   houtFV_stack_4->SetBinContent(7,2.499728);
   houtFV_stack_4->SetBinContent(8,1.712114);
   houtFV_stack_4->SetBinContent(10,0.7336084);
   houtFV_stack_4->SetBinError(1,1.940511);
   houtFV_stack_4->SetBinError(2,1.724488);
   houtFV_stack_4->SetBinError(3,1.593163);
   houtFV_stack_4->SetBinError(4,1.396641);
   houtFV_stack_4->SetBinError(5,1.211708);
   houtFV_stack_4->SetBinError(6,0.5552036);
   houtFV_stack_4->SetBinError(7,0.7758166);
   houtFV_stack_4->SetBinError(8,0.6201715);
   houtFV_stack_4->SetBinError(10,0.4394482);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.380558);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.082298);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.721838);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.994358);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8373359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3962917);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5624051);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5847411);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4173393);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2981109);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,97.42052);
   hNCpi0inFVres_stack_7->SetBinContent(2,227.3552);
   hNCpi0inFVres_stack_7->SetBinContent(3,224.9742);
   hNCpi0inFVres_stack_7->SetBinContent(4,166.9864);
   hNCpi0inFVres_stack_7->SetBinContent(5,98.28365);
   hNCpi0inFVres_stack_7->SetBinContent(6,54.99706);
   hNCpi0inFVres_stack_7->SetBinContent(7,32.62718);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.79323);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.09022);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.263083);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.666374);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.356066);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.557504);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5438859);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.7817042);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4457358);
   hNCpi0inFVres_stack_7->SetBinError(1,3.160906);
   hNCpi0inFVres_stack_7->SetBinError(2,4.938416);
   hNCpi0inFVres_stack_7->SetBinError(3,4.863668);
   hNCpi0inFVres_stack_7->SetBinError(4,4.287941);
   hNCpi0inFVres_stack_7->SetBinError(5,3.277864);
   hNCpi0inFVres_stack_7->SetBinError(6,2.436265);
   hNCpi0inFVres_stack_7->SetBinError(7,1.844584);
   hNCpi0inFVres_stack_7->SetBinError(8,1.516014);
   hNCpi0inFVres_stack_7->SetBinError(9,1.18494);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8525572);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6370896);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5261128);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2486359);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2338466);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3465144);
   hNCpi0inFVres_stack_7->SetBinError(16,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1610816);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,19.26884);
   hNCpi0inFVdis_stack_8->SetBinContent(2,38.18261);
   hNCpi0inFVdis_stack_8->SetBinContent(3,38.14774);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.00822);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.72165);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.31523);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.92545);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.28051);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.39908);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.450808);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6835541);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6422043);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.417134);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.961104);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.961534);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.704866);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.515693);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.02995);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7708414);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6989464);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5389639);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4301228);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3022172);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3408521);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.283386);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.5304361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.283386);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,21.31185);
   hCCpi0inFV_stack_10->SetBinContent(2,52.43458);
   hCCpi0inFV_stack_10->SetBinContent(3,64.07219);
   hCCpi0inFV_stack_10->SetBinContent(4,48.95895);
   hCCpi0inFV_stack_10->SetBinContent(5,31.65006);
   hCCpi0inFV_stack_10->SetBinContent(6,22.22724);
   hCCpi0inFV_stack_10->SetBinContent(7,11.61009);
   hCCpi0inFV_stack_10->SetBinContent(8,8.22477);
   hCCpi0inFV_stack_10->SetBinContent(9,5.229931);
   hCCpi0inFV_stack_10->SetBinContent(10,2.499212);
   hCCpi0inFV_stack_10->SetBinContent(11,1.176911);
   hCCpi0inFV_stack_10->SetBinContent(12,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(13,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(14,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(17,0.8770706);
   hCCpi0inFV_stack_10->SetBinError(1,2.358244);
   hCCpi0inFV_stack_10->SetBinError(2,3.670438);
   hCCpi0inFV_stack_10->SetBinError(3,4.001269);
   hCCpi0inFV_stack_10->SetBinError(4,3.549743);
   hCCpi0inFV_stack_10->SetBinError(5,2.762756);
   hCCpi0inFV_stack_10->SetBinError(6,2.333563);
   hCCpi0inFV_stack_10->SetBinError(7,1.737822);
   hCCpi0inFV_stack_10->SetBinError(8,1.485496);
   hCCpi0inFV_stack_10->SetBinError(9,1.12717);
   hCCpi0inFV_stack_10->SetBinError(10,0.8367028);
   hCCpi0inFV_stack_10->SetBinError(11,0.4804759);
   hCCpi0inFV_stack_10->SetBinError(12,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(13,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(14,0.438694);
   hCCpi0inFV_stack_10->SetBinError(17,0.5197486);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,36.84478);
   hNCinFV_stack_11->SetBinContent(2,25.12297);
   hNCinFV_stack_11->SetBinContent(3,25.47944);
   hNCinFV_stack_11->SetBinContent(4,21.2907);
   hNCinFV_stack_11->SetBinContent(5,17.15194);
   hNCinFV_stack_11->SetBinContent(6,13.38415);
   hNCinFV_stack_11->SetBinContent(7,8.988182);
   hNCinFV_stack_11->SetBinContent(8,7.625781);
   hNCinFV_stack_11->SetBinContent(9,7.701384);
   hNCinFV_stack_11->SetBinContent(10,3.56769);
   hNCinFV_stack_11->SetBinContent(11,4.499704);
   hNCinFV_stack_11->SetBinContent(12,1.662242);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,0.6803553);
   hNCinFV_stack_11->SetBinContent(16,0.1950248);
   hNCinFV_stack_11->SetBinContent(17,0.7336084);
   hNCinFV_stack_11->SetBinError(1,3.133841);
   hNCinFV_stack_11->SetBinError(2,2.490257);
   hNCinFV_stack_11->SetBinError(3,2.474893);
   hNCinFV_stack_11->SetBinError(4,2.355298);
   hNCinFV_stack_11->SetBinError(5,2.048361);
   hNCinFV_stack_11->SetBinError(6,1.819206);
   hNCinFV_stack_11->SetBinError(7,1.53344);
   hNCinFV_stack_11->SetBinError(8,1.374006);
   hNCinFV_stack_11->SetBinError(9,1.48186);
   hNCinFV_stack_11->SetBinError(10,0.919918);
   hNCinFV_stack_11->SetBinError(11,1.038616);
   hNCinFV_stack_11->SetBinError(12,0.6513556);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.4810838);
   hNCinFV_stack_11->SetBinError(16,0.1950249);
   hNCinFV_stack_11->SetBinError(17,0.4394482);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,77.70258);
   hnumuCCinFV_stack_12->SetBinContent(2,51.49903);
   hnumuCCinFV_stack_12->SetBinContent(3,27.54931);
   hnumuCCinFV_stack_12->SetBinContent(4,23.05701);
   hnumuCCinFV_stack_12->SetBinContent(5,16.522);
   hnumuCCinFV_stack_12->SetBinContent(6,7.113204);
   hnumuCCinFV_stack_12->SetBinContent(7,5.965872);
   hnumuCCinFV_stack_12->SetBinContent(8,3.932661);
   hnumuCCinFV_stack_12->SetBinContent(9,2.538255);
   hnumuCCinFV_stack_12->SetBinContent(10,1.373626);
   hnumuCCinFV_stack_12->SetBinContent(11,2.39585);
   hnumuCCinFV_stack_12->SetBinContent(12,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(13,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(17,0.1950248);
   hnumuCCinFV_stack_12->SetBinError(1,5.540389);
   hnumuCCinFV_stack_12->SetBinError(2,4.590124);
   hnumuCCinFV_stack_12->SetBinError(3,2.816344);
   hnumuCCinFV_stack_12->SetBinError(4,2.500029);
   hnumuCCinFV_stack_12->SetBinError(5,2.410011);
   hnumuCCinFV_stack_12->SetBinError(6,1.343911);
   hnumuCCinFV_stack_12->SetBinError(7,1.323335);
   hnumuCCinFV_stack_12->SetBinError(8,1.046749);
   hnumuCCinFV_stack_12->SetBinError(9,0.7917311);
   hnumuCCinFV_stack_12->SetBinError(10,0.519186);
   hnumuCCinFV_stack_12->SetBinError(11,0.7857345);
   hnumuCCinFV_stack_12->SetBinError(12,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(13,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(17,0.1950249);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,3.13229);
   hnueCCinFV_stack_13->SetBinContent(2,2.115012);
   hnueCCinFV_stack_13->SetBinContent(3,0.7715192);
   hnueCCinFV_stack_13->SetBinContent(4,0.9865627);
   hnueCCinFV_stack_13->SetBinContent(5,1.265086);
   hnueCCinFV_stack_13->SetBinContent(6,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,1.011879);
   hnueCCinFV_stack_13->SetBinError(2,0.7764536);
   hnueCCinFV_stack_13->SetBinError(3,0.4576759);
   hnueCCinFV_stack_13->SetBinError(4,0.4412547);
   hnueCCinFV_stack_13->SetBinError(5,0.6488917);
   hnueCCinFV_stack_13->SetBinError(6,0.4810838);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.2486649);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__20->SetBinContent(1,301.4092);
   hmcerror__20->SetBinContent(2,446.9433);
   hmcerror__20->SetBinContent(3,426.2682);
   hmcerror__20->SetBinContent(4,319.4538);
   hmcerror__20->SetBinContent(5,203.4028);
   hmcerror__20->SetBinContent(6,115.6198);
   hmcerror__20->SetBinContent(7,72.10526);
   hmcerror__20->SetBinContent(8,49.43385);
   hmcerror__20->SetBinContent(9,32.55703);
   hmcerror__20->SetBinContent(10,16.28021);
   hmcerror__20->SetBinContent(11,13.08697);
   hmcerror__20->SetBinContent(12,7.726991);
   hmcerror__20->SetBinContent(13,3.65921);
   hmcerror__20->SetBinContent(14,2.115527);
   hmcerror__20->SetBinContent(15,2.300979);
   hmcerror__20->SetBinContent(16,0.9551177);
   hmcerror__20->SetBinContent(17,3.188475);
   hmcerror__20->SetBinError(1,82.76214);
   hmcerror__20->SetBinError(2,160.3991);
   hmcerror__20->SetBinError(3,166.3391);
   hmcerror__20->SetBinError(4,129.1579);
   hmcerror__20->SetBinError(5,87.51663);
   hmcerror__20->SetBinError(6,50.9661);
   hmcerror__20->SetBinError(7,32.51952);
   hmcerror__20->SetBinError(8,24.29329);
   hmcerror__20->SetBinError(9,22.36682);
   hmcerror__20->SetBinError(10,9.07023);
   hmcerror__20->SetBinError(11,8.170594);
   hmcerror__20->SetBinError(12,7.426411);
   hmcerror__20->SetBinError(13,4.590363);
   hmcerror__20->SetBinError(14,4.348954);
   hmcerror__20->SetBinError(15,4.799096);
   hmcerror__20->SetBinError(16,1.656017);
   hmcerror__20->SetBinError(17,4.37606);
   hmcerror__20->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3025[16] = {
   223,
   330,
   323,
   211,
   170,
   80,
   43,
   24,
   16,
   10,
   6,
   6,
   4,
   2,
   2,
   0};
   Double_t _felx3025[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3025[16] = {
   14.93318,
   18.1659,
   17.9722,
   14.52584,
   13.0384,
   9.0683,
   6.6917,
   5.0476,
   4.1628,
   3.34883,
   2.67925,
   2.67925,
   2.29683,
   2,
   2,
   0};
   Double_t _fehx3025[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3025[16] = {
   14.93318,
   18.1659,
   17.9722,
   14.52584,
   13.0384,
   8.8665,
   6.4868,
   4.837,
   3.9454,
   3.1179,
   2.41858,
   2.41858,
   1.98186,
   1.51917,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,440);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(382.9825);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1450.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 93.7","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  949.9","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.0","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.0","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 175.7","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.2","F");

   ci = 1523;
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

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3026[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3026[16] = {
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
   Double_t _felx3026[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3026[16] = {
   0.274584,
   0.3588802,
   0.3902217,
   0.4043087,
   0.4302627,
   0.4408077,
   0.4510007,
   0.4914302,
   0.6870042,
   0.5571322,
   0.6243305,
   0.9611,
   1.254468,
   2.05573,
   2.085676,
   1.733835};
   Double_t _fehx3026[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3026[16] = {
   0.274584,
   0.3588802,
   0.3902217,
   0.4043087,
   0.4302627,
   0.4408077,
   0.4510007,
   0.4914302,
   0.6870042,
   0.5571322,
   0.6243305,
   0.9611,
   1.254468,
   2.05573,
   2.085676,
   1.733835};
   grae = new TGraphAsymmErrors(16,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,440);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3027[16] = {
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
   Double_t _felx3027[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3027[16] = {
   0.2538199,
   0.3499827,
   0.3740316,
   0.3846729,
   0.4001213,
   0.4072327,
   0.3902548,
   0.3810756,
   0.3714868,
   0.3639255,
   0.3383197,
   0.3206833,
   0.5856678,
   0.4606469,
   0.5128971,
   0.7387538};
   Double_t _fehx3027[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3027[16] = {
   0.2538199,
   0.3499827,
   0.3740316,
   0.3846729,
   0.4001213,
   0.4072327,
   0.3902548,
   0.3810756,
   0.3714868,
   0.3639255,
   0.3383197,
   0.3206833,
   0.5856678,
   0.4606469,
   0.5128971,
   0.7387538};
   grae = new TGraphAsymmErrors(16,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,440);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3028[16] = {
   0.7398579,
   0.7383487,
   0.7577388,
   0.6605025,
   0.83578,
   0.6919228,
   0.5963504,
   0.4854973,
   0.4914453,
   0.6142427,
   0.4584713,
   0.7764989,
   1.093132,
   0.9453907,
   0.8691952,
   0};
   Double_t _felx3028[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3028[16] = {
   0.04954455,
   0.04064476,
   0.04216172,
   0.04547086,
   0.0641014,
   0.07843205,
   0.0928046,
   0.1021082,
   0.1278618,
   0.2056994,
   0.2047266,
   0.3467391,
   0.6276846,
   0.9453907,
   0.8691952,
   0};
   Double_t _fehx3028[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3028[16] = {
   0.04954455,
   0.04064476,
   0.04216172,
   0.04547086,
   0.0641014,
   0.07668667,
   0.08996292,
   0.09784793,
   0.1211843,
   0.1915147,
   0.1848083,
   0.3130041,
   0.5416087,
   0.7181046,
   0.6602276,
   1.201737};
   grae = new TGraphAsymmErrors(16,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,440);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.829845);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

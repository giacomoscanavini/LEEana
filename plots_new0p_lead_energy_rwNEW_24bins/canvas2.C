#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 15:06:03 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-92.30769,-13.02302,676.9231,1440.072);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__4->SetBinContent(1,12.31706);
   hmc__4->SetBinContent(2,72.97938);
   hmc__4->SetBinContent(3,190.4897);
   hmc__4->SetBinContent(4,415.7555);
   hmc__4->SetBinContent(5,634.1313);
   hmc__4->SetBinContent(6,651.151);
   hmc__4->SetBinContent(7,640.2809);
   hmc__4->SetBinContent(8,527.9673);
   hmc__4->SetBinContent(9,434.4772);
   hmc__4->SetBinContent(10,377.0849);
   hmc__4->SetBinContent(11,299.627);
   hmc__4->SetBinContent(12,255.7393);
   hmc__4->SetBinContent(13,211.0251);
   hmc__4->SetBinContent(14,170.4506);
   hmc__4->SetBinContent(15,129.7076);
   hmc__4->SetBinContent(16,116.6474);
   hmc__4->SetBinContent(17,92.8703);
   hmc__4->SetBinContent(18,74.91655);
   hmc__4->SetBinContent(19,64.86057);
   hmc__4->SetBinContent(20,47.28636);
   hmc__4->SetBinContent(21,33.60491);
   hmc__4->SetBinContent(22,30.30607);
   hmc__4->SetBinContent(23,27.10694);
   hmc__4->SetBinContent(24,22.24693);
   hmc__4->SetBinContent(25,166.4822);
   hmc__4->SetBinError(1,9.173817);
   hmc__4->SetBinError(2,26.35436);
   hmc__4->SetBinError(3,50.34795);
   hmc__4->SetBinError(4,114.6122);
   hmc__4->SetBinError(5,144.3351);
   hmc__4->SetBinError(6,159.4839);
   hmc__4->SetBinError(7,168.4154);
   hmc__4->SetBinError(8,144.975);
   hmc__4->SetBinError(9,124.7697);
   hmc__4->SetBinError(10,114.4026);
   hmc__4->SetBinError(11,97.55331);
   hmc__4->SetBinError(12,88.01892);
   hmc__4->SetBinError(13,72.57954);
   hmc__4->SetBinError(14,63.03898);
   hmc__4->SetBinError(15,49.60693);
   hmc__4->SetBinError(16,43.08901);
   hmc__4->SetBinError(17,36.49488);
   hmc__4->SetBinError(18,34.29032);
   hmc__4->SetBinError(19,25.77089);
   hmc__4->SetBinError(20,21.50602);
   hmc__4->SetBinError(21,17.15404);
   hmc__4->SetBinError(22,15.66332);
   hmc__4->SetBinError(23,13.04119);
   hmc__4->SetBinError(24,14.86907);
   hmc__4->SetBinError(25,45.13564);
   hmc__4->SetMinimum(-13.02302);
   hmc__4->SetMaximum(1367.417);
   hmc__4->SetEntries(5638.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,600);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(683.7086);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,5.561501);
   hbadmatch_stack_1->SetBinContent(3,11.07089);
   hbadmatch_stack_1->SetBinContent(4,16.55734);
   hbadmatch_stack_1->SetBinContent(5,14.7271);
   hbadmatch_stack_1->SetBinContent(6,17.39631);
   hbadmatch_stack_1->SetBinContent(7,15.12307);
   hbadmatch_stack_1->SetBinContent(8,14.71865);
   hbadmatch_stack_1->SetBinContent(9,7.376754);
   hbadmatch_stack_1->SetBinContent(10,5.584563);
   hbadmatch_stack_1->SetBinContent(11,2.055739);
   hbadmatch_stack_1->SetBinContent(12,4.573884);
   hbadmatch_stack_1->SetBinContent(13,1.610679);
   hbadmatch_stack_1->SetBinContent(14,0.7336084);
   hbadmatch_stack_1->SetBinContent(15,0.785171);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.8770706);
   hbadmatch_stack_1->SetBinContent(20,0.8176194);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,1.125349);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,1.231708);
   hbadmatch_stack_1->SetBinError(3,1.9847);
   hbadmatch_stack_1->SetBinError(4,2.069674);
   hbadmatch_stack_1->SetBinError(5,1.918367);
   hbadmatch_stack_1->SetBinError(6,2.357884);
   hbadmatch_stack_1->SetBinError(7,2.098359);
   hbadmatch_stack_1->SetBinError(8,3.151003);
   hbadmatch_stack_1->SetBinError(9,1.399457);
   hbadmatch_stack_1->SetBinError(10,1.239776);
   hbadmatch_stack_1->SetBinError(11,0.7078126);
   hbadmatch_stack_1->SetBinError(12,1.925541);
   hbadmatch_stack_1->SetBinError(13,0.6806271);
   hbadmatch_stack_1->SetBinError(14,0.4394482);
   hbadmatch_stack_1->SetBinError(15,0.3925882);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.5197486);
   hbadmatch_stack_1->SetBinError(20,0.4096766);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.5194673);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,3.15182);
   hext_stack_2->SetBinContent(2,15.16498);
   hext_stack_2->SetBinContent(3,23.9038);
   hext_stack_2->SetBinContent(4,38.5265);
   hext_stack_2->SetBinContent(5,62.18968);
   hext_stack_2->SetBinContent(6,55.05407);
   hext_stack_2->SetBinContent(7,47.53227);
   hext_stack_2->SetBinContent(8,36.43606);
   hext_stack_2->SetBinContent(9,21.06479);
   hext_stack_2->SetBinContent(10,19.29717);
   hext_stack_2->SetBinContent(11,12.49755);
   hext_stack_2->SetBinContent(12,13.93082);
   hext_stack_2->SetBinContent(13,5.918582);
   hext_stack_2->SetBinContent(14,5.911401);
   hext_stack_2->SetBinContent(15,2.185808);
   hext_stack_2->SetBinContent(16,5.509212);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,2.420823);
   hext_stack_2->SetBinContent(19,1.461993);
   hext_stack_2->SetBinContent(20,1.37261);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.973192);
   hext_stack_2->SetBinError(1,1.23684);
   hext_stack_2->SetBinError(2,2.482964);
   hext_stack_2->SetBinError(3,3.175133);
   hext_stack_2->SetBinError(4,3.893105);
   hext_stack_2->SetBinError(5,5.195618);
   hext_stack_2->SetBinError(6,4.885851);
   hext_stack_2->SetBinError(7,4.559328);
   hext_stack_2->SetBinError(8,3.992401);
   hext_stack_2->SetBinError(9,2.953474);
   hext_stack_2->SetBinError(10,2.794527);
   hext_stack_2->SetBinError(11,2.17385);
   hext_stack_2->SetBinError(12,2.46405);
   hext_stack_2->SetBinError(13,1.513479);
   hext_stack_2->SetBinError(14,1.57855);
   hext_stack_2->SetBinError(15,1.006415);
   hext_stack_2->SetBinError(16,1.568955);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,1.122148);
   hext_stack_2->SetBinError(19,0.7356036);
   hext_stack_2->SetBinError(20,0.8259691);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.5618727);
   hext_stack_2->SetEntries(946);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,2.8953);
   hdirt_stack_3->SetBinContent(3,3.505285);
   hdirt_stack_3->SetBinContent(4,6.439578);
   hdirt_stack_3->SetBinContent(5,7.990116);
   hdirt_stack_3->SetBinContent(6,8.129582);
   hdirt_stack_3->SetBinContent(7,5.060772);
   hdirt_stack_3->SetBinContent(8,3.121896);
   hdirt_stack_3->SetBinContent(9,3.772856);
   hdirt_stack_3->SetBinContent(10,1.092396);
   hdirt_stack_3->SetBinContent(11,1.795931);
   hdirt_stack_3->SetBinContent(12,1.907867);
   hdirt_stack_3->SetBinContent(13,0.2261411);
   hdirt_stack_3->SetBinContent(14,0.7005532);
   hdirt_stack_3->SetBinContent(15,0.5105644);
   hdirt_stack_3->SetBinContent(16,0.1580268);
   hdirt_stack_3->SetBinContent(18,1.330832);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(2,0.8516203);
   hdirt_stack_3->SetBinError(3,0.92274);
   hdirt_stack_3->SetBinError(4,1.326196);
   hdirt_stack_3->SetBinError(5,1.664148);
   hdirt_stack_3->SetBinError(6,1.476817);
   hdirt_stack_3->SetBinError(7,1.226388);
   hdirt_stack_3->SetBinError(8,0.9083469);
   hdirt_stack_3->SetBinError(9,1.029414);
   hdirt_stack_3->SetBinError(10,0.5172839);
   hdirt_stack_3->SetBinError(11,0.6857104);
   hdirt_stack_3->SetBinError(12,0.7144176);
   hdirt_stack_3->SetBinError(13,0.2261411);
   hdirt_stack_3->SetBinError(14,0.4531529);
   hdirt_stack_3->SetBinError(15,0.3646725);
   hdirt_stack_3->SetBinError(16,0.1580268);
   hdirt_stack_3->SetBinError(18,1.107563);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.26712);
   houtFV_stack_4->SetBinContent(2,5.445157);
   houtFV_stack_4->SetBinContent(3,20.2344);
   houtFV_stack_4->SetBinContent(4,35.30587);
   houtFV_stack_4->SetBinContent(5,54.01216);
   houtFV_stack_4->SetBinContent(6,50.35849);
   houtFV_stack_4->SetBinContent(7,47.93769);
   houtFV_stack_4->SetBinContent(8,41.62647);
   houtFV_stack_4->SetBinContent(9,29.51292);
   houtFV_stack_4->SetBinContent(10,25.67627);
   houtFV_stack_4->SetBinContent(11,19.39496);
   houtFV_stack_4->SetBinContent(12,15.19493);
   houtFV_stack_4->SetBinContent(13,11.38985);
   houtFV_stack_4->SetBinContent(14,6.919839);
   houtFV_stack_4->SetBinContent(15,5.591551);
   houtFV_stack_4->SetBinContent(16,4.35286);
   houtFV_stack_4->SetBinContent(17,4.979086);
   houtFV_stack_4->SetBinContent(18,2.832225);
   houtFV_stack_4->SetBinContent(19,4.498013);
   houtFV_stack_4->SetBinContent(20,1.513708);
   houtFV_stack_4->SetBinContent(21,0.9286332);
   houtFV_stack_4->SetBinContent(22,0.1950248);
   houtFV_stack_4->SetBinContent(23,2.826237);
   houtFV_stack_4->SetBinContent(24,1.368555);
   houtFV_stack_4->SetBinContent(25,3.861376);
   houtFV_stack_4->SetBinError(1,0.5883944);
   houtFV_stack_4->SetBinError(2,1.231309);
   houtFV_stack_4->SetBinError(3,2.21795);
   houtFV_stack_4->SetBinError(4,2.965217);
   houtFV_stack_4->SetBinError(5,3.725683);
   houtFV_stack_4->SetBinError(6,3.541592);
   houtFV_stack_4->SetBinError(7,3.488001);
   houtFV_stack_4->SetBinError(8,3.233175);
   houtFV_stack_4->SetBinError(9,2.677213);
   houtFV_stack_4->SetBinError(10,2.467399);
   houtFV_stack_4->SetBinError(11,2.22868);
   houtFV_stack_4->SetBinError(12,1.952636);
   houtFV_stack_4->SetBinError(13,1.683737);
   houtFV_stack_4->SetBinError(14,1.329746);
   houtFV_stack_4->SetBinError(15,1.181125);
   houtFV_stack_4->SetBinError(16,1.000187);
   houtFV_stack_4->SetBinError(17,1.105433);
   houtFV_stack_4->SetBinError(18,0.8343277);
   houtFV_stack_4->SetBinError(19,1.038297);
   houtFV_stack_4->SetBinError(20,0.5875827);
   houtFV_stack_4->SetBinError(21,0.48078);
   houtFV_stack_4->SetBinError(22,0.1950249);
   houtFV_stack_4->SetBinError(23,0.9211137);
   houtFV_stack_4->SetBinError(24,0.5172691);
   houtFV_stack_4->SetBinError(25,1.001472);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.339952);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.085042);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.743104);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.817426);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.622285);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.153722);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.286654);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.289814);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.528969);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.768428);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.9903);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.26922);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.852633);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.053734);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,2.120744);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.49507);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.799226);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.603094);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.8373359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5581679);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8373359);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.957253);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4602831);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6710575);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7806253);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8627675);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7919277);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8714827);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7736552);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8017782);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9087239);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7133684);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7362793);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.711639);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.780709);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5735973);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.51885);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5717852);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4488676);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4204368);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2981109);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2198343);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2981109);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8180766);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.018186);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.635393);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.90652);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.466666);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.59338);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.700244);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.567312);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.28748);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.004736);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2606093);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4533963);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.7044933);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4773711);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4938683);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3917639);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5607306);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.5360676);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.305844);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2013529);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.548454);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.44845);
   hNCpi0inFVres_stack_7->SetBinContent(3,66.22175);
   hNCpi0inFVres_stack_7->SetBinContent(4,168.7843);
   hNCpi0inFVres_stack_7->SetBinContent(5,284.7797);
   hNCpi0inFVres_stack_7->SetBinContent(6,298.3595);
   hNCpi0inFVres_stack_7->SetBinContent(7,294.4316);
   hNCpi0inFVres_stack_7->SetBinContent(8,238.8336);
   hNCpi0inFVres_stack_7->SetBinContent(9,210.7958);
   hNCpi0inFVres_stack_7->SetBinContent(10,174.5949);
   hNCpi0inFVres_stack_7->SetBinContent(11,138.6144);
   hNCpi0inFVres_stack_7->SetBinContent(12,109.0622);
   hNCpi0inFVres_stack_7->SetBinContent(13,94.22182);
   hNCpi0inFVres_stack_7->SetBinContent(14,78.83859);
   hNCpi0inFVres_stack_7->SetBinContent(15,54.97551);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.24179);
   hNCpi0inFVres_stack_7->SetBinContent(17,35.93318);
   hNCpi0inFVres_stack_7->SetBinContent(18,28.93808);
   hNCpi0inFVres_stack_7->SetBinContent(19,24.20867);
   hNCpi0inFVres_stack_7->SetBinContent(20,19.38477);
   hNCpi0inFVres_stack_7->SetBinContent(21,12.06131);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.61949);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.972447);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.228548);
   hNCpi0inFVres_stack_7->SetBinContent(25,42.12336);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3398027);
   hNCpi0inFVres_stack_7->SetBinError(2,1.415485);
   hNCpi0inFVres_stack_7->SetBinError(3,2.67048);
   hNCpi0inFVres_stack_7->SetBinError(4,4.138212);
   hNCpi0inFVres_stack_7->SetBinError(5,5.596478);
   hNCpi0inFVres_stack_7->SetBinError(6,5.614494);
   hNCpi0inFVres_stack_7->SetBinError(7,5.661013);
   hNCpi0inFVres_stack_7->SetBinError(8,4.966266);
   hNCpi0inFVres_stack_7->SetBinError(9,4.780545);
   hNCpi0inFVres_stack_7->SetBinError(10,4.360866);
   hNCpi0inFVres_stack_7->SetBinError(11,3.842139);
   hNCpi0inFVres_stack_7->SetBinError(12,3.375007);
   hNCpi0inFVres_stack_7->SetBinError(13,3.230561);
   hNCpi0inFVres_stack_7->SetBinError(14,2.954585);
   hNCpi0inFVres_stack_7->SetBinError(15,2.413681);
   hNCpi0inFVres_stack_7->SetBinError(16,2.257565);
   hNCpi0inFVres_stack_7->SetBinError(17,1.961629);
   hNCpi0inFVres_stack_7->SetBinError(18,1.813481);
   hNCpi0inFVres_stack_7->SetBinError(19,1.652251);
   hNCpi0inFVres_stack_7->SetBinError(20,1.463035);
   hNCpi0inFVres_stack_7->SetBinError(21,1.098522);
   hNCpi0inFVres_stack_7->SetBinError(22,1.18305);
   hNCpi0inFVres_stack_7->SetBinError(23,0.851833);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9963688);
   hNCpi0inFVres_stack_7->SetBinError(25,2.139196);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.885829);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.73383);
   hNCpi0inFVdis_stack_8->SetBinContent(4,33.73503);
   hNCpi0inFVdis_stack_8->SetBinContent(5,52.90443);
   hNCpi0inFVdis_stack_8->SetBinContent(6,48.59533);
   hNCpi0inFVdis_stack_8->SetBinContent(7,44.58022);
   hNCpi0inFVdis_stack_8->SetBinContent(8,39.73706);
   hNCpi0inFVdis_stack_8->SetBinContent(9,30.68662);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.85153);
   hNCpi0inFVdis_stack_8->SetBinContent(11,26.43952);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.54909);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.28593);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.21303);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.99598);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.32346);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.64082);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.32453);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.55778);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.483122);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.714292);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.858266);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.91573);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.082634);
   hNCpi0inFVdis_stack_8->SetBinContent(25,24.20683);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4754646);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.17992);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.809343);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.406535);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.224625);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.164068);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.031999);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.768);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.63954);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.731034);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.464342);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.305535);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.237636);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.204002);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.124349);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.111554);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9405736);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.943019);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8299248);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7388302);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5392643);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5752349);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6179137);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.585596);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6701043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3419921);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.6384395);
   hCCpi0inFV_stack_10->SetBinContent(2,4.876838);
   hCCpi0inFV_stack_10->SetBinContent(3,16.17512);
   hCCpi0inFV_stack_10->SetBinContent(4,48.17366);
   hCCpi0inFV_stack_10->SetBinContent(5,70.65411);
   hCCpi0inFV_stack_10->SetBinContent(6,75.64296);
   hCCpi0inFV_stack_10->SetBinContent(7,80.16698);
   hCCpi0inFV_stack_10->SetBinContent(8,68.90314);
   hCCpi0inFV_stack_10->SetBinContent(9,57.01012);
   hCCpi0inFV_stack_10->SetBinContent(10,55.30704);
   hCCpi0inFV_stack_10->SetBinContent(11,48.76932);
   hCCpi0inFV_stack_10->SetBinContent(12,38.85207);
   hCCpi0inFV_stack_10->SetBinContent(13,38.54976);
   hCCpi0inFV_stack_10->SetBinContent(14,27.01043);
   hCCpi0inFV_stack_10->SetBinContent(15,24.99244);
   hCCpi0inFV_stack_10->SetBinContent(16,21.14497);
   hCCpi0inFV_stack_10->SetBinContent(17,14.81784);
   hCCpi0inFV_stack_10->SetBinContent(18,12.83432);
   hCCpi0inFV_stack_10->SetBinContent(19,10.77855);
   hCCpi0inFV_stack_10->SetBinContent(20,8.360885);
   hCCpi0inFV_stack_10->SetBinContent(21,7.6224);
   hCCpi0inFV_stack_10->SetBinContent(22,6.003877);
   hCCpi0inFV_stack_10->SetBinContent(23,5.371703);
   hCCpi0inFV_stack_10->SetBinContent(24,3.56769);
   hCCpi0inFV_stack_10->SetBinContent(25,29.69659);
   hCCpi0inFV_stack_10->SetBinError(1,0.3709342);
   hCCpi0inFV_stack_10->SetBinError(2,1.161086);
   hCCpi0inFV_stack_10->SetBinError(3,2.001236);
   hCCpi0inFV_stack_10->SetBinError(4,3.45927);
   hCCpi0inFV_stack_10->SetBinError(5,4.213819);
   hCCpi0inFV_stack_10->SetBinError(6,4.308072);
   hCCpi0inFV_stack_10->SetBinError(7,4.502571);
   hCCpi0inFV_stack_10->SetBinError(8,4.126716);
   hCCpi0inFV_stack_10->SetBinError(9,3.727582);
   hCCpi0inFV_stack_10->SetBinError(10,3.780984);
   hCCpi0inFV_stack_10->SetBinError(11,3.545762);
   hCCpi0inFV_stack_10->SetBinError(12,3.112748);
   hCCpi0inFV_stack_10->SetBinError(13,3.140889);
   hCCpi0inFV_stack_10->SetBinError(14,2.6105);
   hCCpi0inFV_stack_10->SetBinError(15,2.488157);
   hCCpi0inFV_stack_10->SetBinError(16,2.308971);
   hCCpi0inFV_stack_10->SetBinError(17,1.878303);
   hCCpi0inFV_stack_10->SetBinError(18,1.816224);
   hCCpi0inFV_stack_10->SetBinError(19,1.645811);
   hCCpi0inFV_stack_10->SetBinError(20,1.464469);
   hCCpi0inFV_stack_10->SetBinError(21,1.373524);
   hCCpi0inFV_stack_10->SetBinError(22,1.272254);
   hCCpi0inFV_stack_10->SetBinError(23,1.160549);
   hCCpi0inFV_stack_10->SetBinError(24,0.919918);
   hCCpi0inFV_stack_10->SetBinError(25,2.754534);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.339216);
   hNCinFV_stack_11->SetBinContent(2,8.244431);
   hNCinFV_stack_11->SetBinContent(3,15.72844);
   hNCinFV_stack_11->SetBinContent(4,27.36075);
   hNCinFV_stack_11->SetBinContent(5,39.17419);
   hNCinFV_stack_11->SetBinContent(6,39.95804);
   hNCinFV_stack_11->SetBinContent(7,45.95177);
   hNCinFV_stack_11->SetBinContent(8,39.48406);
   hNCinFV_stack_11->SetBinContent(9,28.43623);
   hNCinFV_stack_11->SetBinContent(10,31.81734);
   hNCinFV_stack_11->SetBinContent(11,19.53994);
   hNCinFV_stack_11->SetBinContent(12,19.74112);
   hNCinFV_stack_11->SetBinContent(13,17.48258);
   hNCinFV_stack_11->SetBinContent(14,13.20204);
   hNCinFV_stack_11->SetBinContent(15,13.92612);
   hNCinFV_stack_11->SetBinContent(16,11.62724);
   hNCinFV_stack_11->SetBinContent(17,10.54838);
   hNCinFV_stack_11->SetBinContent(18,8.689424);
   hNCinFV_stack_11->SetBinContent(19,7.235731);
   hNCinFV_stack_11->SetBinContent(20,3.572761);
   hNCinFV_stack_11->SetBinContent(21,3.764405);
   hNCinFV_stack_11->SetBinContent(22,3.716223);
   hNCinFV_stack_11->SetBinContent(23,3.127768);
   hNCinFV_stack_11->SetBinContent(24,1.517089);
   hNCinFV_stack_11->SetBinContent(25,22.44347);
   hNCinFV_stack_11->SetBinError(1,0.8089383);
   hNCinFV_stack_11->SetBinError(2,1.46777);
   hNCinFV_stack_11->SetBinError(3,1.991452);
   hNCinFV_stack_11->SetBinError(4,2.633326);
   hNCinFV_stack_11->SetBinError(5,3.098052);
   hNCinFV_stack_11->SetBinError(6,3.176339);
   hNCinFV_stack_11->SetBinError(7,3.421079);
   hNCinFV_stack_11->SetBinError(8,3.092554);
   hNCinFV_stack_11->SetBinError(9,2.69145);
   hNCinFV_stack_11->SetBinError(10,2.838208);
   hNCinFV_stack_11->SetBinError(11,2.237963);
   hNCinFV_stack_11->SetBinError(12,2.202393);
   hNCinFV_stack_11->SetBinError(13,2.122771);
   hNCinFV_stack_11->SetBinError(14,1.754465);
   hNCinFV_stack_11->SetBinError(15,1.861697);
   hNCinFV_stack_11->SetBinError(16,1.722364);
   hNCinFV_stack_11->SetBinError(17,1.629636);
   hNCinFV_stack_11->SetBinError(18,1.480795);
   hNCinFV_stack_11->SetBinError(19,1.34604);
   hNCinFV_stack_11->SetBinError(20,0.9209972);
   hNCinFV_stack_11->SetBinError(21,0.9407157);
   hNCinFV_stack_11->SetBinError(22,0.9619042);
   hNCinFV_stack_11->SetBinError(23,0.8999062);
   hNCinFV_stack_11->SetBinError(24,0.5887087);
   hNCinFV_stack_11->SetBinError(25,2.483064);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,2.225779);
   hnumuCCinFV_stack_12->SetBinContent(2,8.676237);
   hnumuCCinFV_stack_12->SetBinContent(3,17.41507);
   hnumuCCinFV_stack_12->SetBinContent(4,32.58336);
   hnumuCCinFV_stack_12->SetBinContent(5,38.21873);
   hnumuCCinFV_stack_12->SetBinContent(6,46.43282);
   hnumuCCinFV_stack_12->SetBinContent(7,45.81549);
   hnumuCCinFV_stack_12->SetBinContent(8,33.53098);
   hnumuCCinFV_stack_12->SetBinContent(9,33.91385);
   hnumuCCinFV_stack_12->SetBinContent(10,29.38784);
   hnumuCCinFV_stack_12->SetBinContent(11,22.49976);
   hnumuCCinFV_stack_12->SetBinContent(12,22.91322);
   hnumuCCinFV_stack_12->SetBinContent(13,18.33642);
   hnumuCCinFV_stack_12->SetBinContent(14,16.16355);
   hnumuCCinFV_stack_12->SetBinContent(15,8.802437);
   hnumuCCinFV_stack_12->SetBinContent(16,9.777422);
   hnumuCCinFV_stack_12->SetBinContent(17,8.707973);
   hnumuCCinFV_stack_12->SetBinContent(18,6.177945);
   hnumuCCinFV_stack_12->SetBinContent(19,4.692257);
   hnumuCCinFV_stack_12->SetBinContent(20,3.535805);
   hnumuCCinFV_stack_12->SetBinContent(21,1.982134);
   hnumuCCinFV_stack_12->SetBinContent(22,2.736653);
   hnumuCCinFV_stack_12->SetBinContent(23,3.139117);
   hnumuCCinFV_stack_12->SetBinContent(24,2.898308);
   hnumuCCinFV_stack_12->SetBinContent(25,18.84065);
   hnumuCCinFV_stack_12->SetBinError(1,0.9437165);
   hnumuCCinFV_stack_12->SetBinError(2,1.647628);
   hnumuCCinFV_stack_12->SetBinError(3,2.420041);
   hnumuCCinFV_stack_12->SetBinError(4,3.522685);
   hnumuCCinFV_stack_12->SetBinError(5,3.846751);
   hnumuCCinFV_stack_12->SetBinError(6,4.15302);
   hnumuCCinFV_stack_12->SetBinError(7,4.362838);
   hnumuCCinFV_stack_12->SetBinError(8,3.039518);
   hnumuCCinFV_stack_12->SetBinError(9,3.035362);
   hnumuCCinFV_stack_12->SetBinError(10,3.038208);
   hnumuCCinFV_stack_12->SetBinError(11,2.438356);
   hnumuCCinFV_stack_12->SetBinError(12,2.850857);
   hnumuCCinFV_stack_12->SetBinError(13,2.230488);
   hnumuCCinFV_stack_12->SetBinError(14,2.188243);
   hnumuCCinFV_stack_12->SetBinError(15,1.904287);
   hnumuCCinFV_stack_12->SetBinError(16,1.562483);
   hnumuCCinFV_stack_12->SetBinError(17,1.507493);
   hnumuCCinFV_stack_12->SetBinError(18,1.298411);
   hnumuCCinFV_stack_12->SetBinError(19,1.122283);
   hnumuCCinFV_stack_12->SetBinError(20,0.9652918);
   hnumuCCinFV_stack_12->SetBinError(21,0.6760425);
   hnumuCCinFV_stack_12->SetBinError(22,0.8567487);
   hnumuCCinFV_stack_12->SetBinError(23,0.9467231);
   hnumuCCinFV_stack_12->SetBinError(24,0.836812);
   hnumuCCinFV_stack_12->SetBinError(25,3.21174);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,0.7309457);
   hnueCCinFV_stack_13->SetBinContent(4,2.643614);
   hnueCCinFV_stack_13->SetBinContent(5,1.322064);
   hnueCCinFV_stack_13->SetBinContent(6,2.833079);
   hnueCCinFV_stack_13->SetBinContent(7,4.00561);
   hnueCCinFV_stack_13->SetBinContent(8,3.224952);
   hnueCCinFV_stack_13->SetBinContent(9,2.186287);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,0.7253264);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,0.9980428);
   hnueCCinFV_stack_13->SetBinContent(15,0.3937986);
   hnueCCinFV_stack_13->SetBinContent(16,0.5391986);
   hnueCCinFV_stack_13->SetBinContent(17,1.128268);
   hnueCCinFV_stack_13->SetBinContent(18,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,15.75602);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.4265486);
   hnueCCinFV_stack_13->SetBinError(4,1.469246);
   hnueCCinFV_stack_13->SetBinError(5,0.5554667);
   hnueCCinFV_stack_13->SetBinError(6,1.04544);
   hnueCCinFV_stack_13->SetBinError(7,1.116258);
   hnueCCinFV_stack_13->SetBinError(8,0.9934481);
   hnueCCinFV_stack_13->SetBinError(9,0.9201631);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.4228395);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.5314795);
   hnueCCinFV_stack_13->SetBinError(15,0.2781978);
   hnueCCinFV_stack_13->SetBinError(16,0.3921371);
   hnueCCinFV_stack_13->SetBinError(17,0.5772539);
   hnueCCinFV_stack_13->SetBinError(18,0.2758068);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,2.595081);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__5->SetBinContent(1,12.31706);
   hmcerror__5->SetBinContent(2,72.97938);
   hmcerror__5->SetBinContent(3,190.4897);
   hmcerror__5->SetBinContent(4,415.7555);
   hmcerror__5->SetBinContent(5,634.1313);
   hmcerror__5->SetBinContent(6,651.151);
   hmcerror__5->SetBinContent(7,640.2809);
   hmcerror__5->SetBinContent(8,527.9673);
   hmcerror__5->SetBinContent(9,434.4772);
   hmcerror__5->SetBinContent(10,377.0849);
   hmcerror__5->SetBinContent(11,299.627);
   hmcerror__5->SetBinContent(12,255.7393);
   hmcerror__5->SetBinContent(13,211.0251);
   hmcerror__5->SetBinContent(14,170.4506);
   hmcerror__5->SetBinContent(15,129.7076);
   hmcerror__5->SetBinContent(16,116.6474);
   hmcerror__5->SetBinContent(17,92.8703);
   hmcerror__5->SetBinContent(18,74.91655);
   hmcerror__5->SetBinContent(19,64.86057);
   hmcerror__5->SetBinContent(20,47.28636);
   hmcerror__5->SetBinContent(21,33.60491);
   hmcerror__5->SetBinContent(22,30.30607);
   hmcerror__5->SetBinContent(23,27.10694);
   hmcerror__5->SetBinContent(24,22.24693);
   hmcerror__5->SetBinContent(25,166.4822);
   hmcerror__5->SetBinError(1,9.173817);
   hmcerror__5->SetBinError(2,26.35436);
   hmcerror__5->SetBinError(3,50.34795);
   hmcerror__5->SetBinError(4,114.6122);
   hmcerror__5->SetBinError(5,144.3351);
   hmcerror__5->SetBinError(6,159.4839);
   hmcerror__5->SetBinError(7,168.4154);
   hmcerror__5->SetBinError(8,144.975);
   hmcerror__5->SetBinError(9,124.7697);
   hmcerror__5->SetBinError(10,114.4026);
   hmcerror__5->SetBinError(11,97.55331);
   hmcerror__5->SetBinError(12,88.01892);
   hmcerror__5->SetBinError(13,72.57954);
   hmcerror__5->SetBinError(14,63.03898);
   hmcerror__5->SetBinError(15,49.60693);
   hmcerror__5->SetBinError(16,43.08901);
   hmcerror__5->SetBinError(17,36.49488);
   hmcerror__5->SetBinError(18,34.29032);
   hmcerror__5->SetBinError(19,25.77089);
   hmcerror__5->SetBinError(20,21.50602);
   hmcerror__5->SetBinError(21,17.15404);
   hmcerror__5->SetBinError(22,15.66332);
   hmcerror__5->SetBinError(23,13.04119);
   hmcerror__5->SetBinError(24,14.86907);
   hmcerror__5->SetBinError(25,45.13564);
   hmcerror__5->SetEntries(5638.682);

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
   
   Double_t _fx3005[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3005[24] = {
   10,
   58,
   166,
   427,
   619,
   644,
   556,
   484,
   395,
   301,
   250,
   208,
   144,
   112,
   103,
   79,
   62,
   68,
   48,
   34,
   32,
   21,
   15,
   21};
   Double_t _felx3005[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3005[24] = {
   3.34883,
   7.7446,
   12.8841,
   20.66398,
   24.87971,
   25.37716,
   23.57965,
   22,
   19.87461,
   17.34935,
   15.81139,
   14.42221,
   12,
   10.58301,
   10.14889,
   9.0124,
   8.0018,
   8.3726,
   7.0604,
   5.9703,
   5.7977,
   4.7354,
   4.0385,
   4.7354};
   Double_t _fehx3005[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3005[24] = {
   3.1179,
   7.5415,
   12.8841,
   20.66398,
   24.87971,
   25.37716,
   23.57965,
   22,
   19.87461,
   17.34935,
   15.81139,
   14.42221,
   12,
   10.58301,
   10.14889,
   8.8105,
   7.7989,
   8.1701,
   6.8561,
   5.7635,
   5.5904,
   4.5229,
   3.8197,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,660);
   Graph_Graph3005->SetMinimum(5.986053);
   Graph_Graph3005->SetMaximum(735.6498);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4857.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 376.5","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.0","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 393.4","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  84.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.7","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2428.1","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  443.8","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 746.2","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 416.2","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 420.6","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 26.0","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3006[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3006[24] = {
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
   Double_t _felx3006[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3006[24] = {
   0.7448056,
   0.3611206,
   0.264308,
   0.2756721,
   0.2276108,
   0.2449261,
   0.2630336,
   0.2745908,
   0.2871721,
   0.3033869,
   0.3255825,
   0.3441744,
   0.343938,
   0.3698373,
   0.382452,
   0.3693954,
   0.3929661,
   0.4577135,
   0.3973275,
   0.4548039,
   0.5104625,
   0.5168378,
   0.4811014,
   0.6683651};
   Double_t _fehx3006[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3006[24] = {
   0.7448056,
   0.3611206,
   0.264308,
   0.2756721,
   0.2276108,
   0.2449261,
   0.2630336,
   0.2745908,
   0.2871721,
   0.3033869,
   0.3255825,
   0.3441744,
   0.343938,
   0.3698373,
   0.382452,
   0.3693954,
   0.3929661,
   0.4577135,
   0.3973275,
   0.4548039,
   0.5104625,
   0.5168378,
   0.4811014,
   0.6683651};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,660);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3007[24] = {
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
   Double_t _felx3007[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3007[24] = {
   0.2367074,
   0.1836882,
   0.2094982,
   0.2151673,
   0.2188346,
   0.234813,
   0.2469754,
   0.2590279,
   0.2779786,
   0.2883445,
   0.3029919,
   0.2932939,
   0.3290441,
   0.3326375,
   0.3448795,
   0.3319592,
   0.3387905,
   0.3273038,
   0.3225931,
   0.3409263,
   0.3362837,
   0.3208859,
   0.2877285,
   0.2946778};
   Double_t _fehx3007[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3007[24] = {
   0.2367074,
   0.1836882,
   0.2094982,
   0.2151673,
   0.2188346,
   0.234813,
   0.2469754,
   0.2590279,
   0.2779786,
   0.2883445,
   0.3029919,
   0.2932939,
   0.3290441,
   0.3326375,
   0.3448795,
   0.3319592,
   0.3387905,
   0.3273038,
   0.3225931,
   0.3409263,
   0.3362837,
   0.3208859,
   0.2877285,
   0.2946778};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,660);
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
   
   Double_t _fx3008[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3008[24] = {
   0.8118819,
   0.7947451,
   0.8714383,
   1.027046,
   0.9761386,
   0.9890179,
   0.8683688,
   0.9167234,
   0.9091386,
   0.7982287,
   0.8343709,
   0.8133282,
   0.6823834,
   0.6570819,
   0.7940938,
   0.6772547,
   0.6675977,
   0.9076766,
   0.7400491,
   0.7190234,
   0.9522419,
   0.6929306,
   0.5533638,
   0.9439503};
   Double_t _felx3008[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3008[24] = {
   0.2718854,
   0.1061204,
   0.06763673,
   0.04970223,
   0.03923432,
   0.03897277,
   0.03682704,
   0.04166924,
   0.04574373,
   0.04600914,
   0.05277025,
   0.05639416,
   0.05686529,
   0.0620884,
   0.07824439,
   0.07726191,
   0.08616102,
   0.111759,
   0.108855,
   0.1262584,
   0.1725254,
   0.1562525,
   0.148984,
   0.2128563};
   Double_t _fehx3008[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3008[24] = {
   0.2531367,
   0.1033374,
   0.06763673,
   0.04970223,
   0.03923432,
   0.03897277,
   0.03682704,
   0.04166924,
   0.04574373,
   0.04600914,
   0.05277025,
   0.05639416,
   0.05686529,
   0.0620884,
   0.07824439,
   0.07553105,
   0.08397625,
   0.109056,
   0.1057052,
   0.121885,
   0.1663567,
   0.1492407,
   0.1409122,
   0.2033044};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,660);
   Graph_Graph3008->SetMinimum(0.3300923);
   Graph_Graph3008->SetMaximum(1.221542);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

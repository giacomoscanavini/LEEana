#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Mar 15 16:23:05 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-11.92186,1692.308,1318.307);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__7->SetBinContent(2,5.665478);
   hmc__7->SetBinContent(3,169.4088);
   hmc__7->SetBinContent(4,438.3072);
   hmc__7->SetBinContent(5,596.0929);
   hmc__7->SetBinContent(6,541.7211);
   hmc__7->SetBinContent(7,490.825);
   hmc__7->SetBinContent(8,348.631);
   hmc__7->SetBinContent(9,266.1897);
   hmc__7->SetBinContent(10,186.9182);
   hmc__7->SetBinContent(11,127.9635);
   hmc__7->SetBinContent(12,86.63571);
   hmc__7->SetBinContent(13,65.2569);
   hmc__7->SetBinContent(14,49.41476);
   hmc__7->SetBinContent(15,35.25115);
   hmc__7->SetBinContent(16,89.43954);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,5.419691);
   hmc__7->SetBinError(3,52.14427);
   hmc__7->SetBinError(4,150.1998);
   hmc__7->SetBinError(5,229.0372);
   hmc__7->SetBinError(6,223.7834);
   hmc__7->SetBinError(7,185.2343);
   hmc__7->SetBinError(8,134.7186);
   hmc__7->SetBinError(9,105.8481);
   hmc__7->SetBinError(10,67.54847);
   hmc__7->SetBinError(11,44.36495);
   hmc__7->SetBinError(12,35.53491);
   hmc__7->SetBinError(13,28.69034);
   hmc__7->SetBinError(14,21.93341);
   hmc__7->SetBinError(15,18.1269);
   hmc__7->SetBinError(16,31.57763);
   hmc__7->SetMinimum(-11.92186);
   hmc__7->SetMaximum(1251.795);
   hmc__7->SetEntries(3450.865);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",15,0,1500);
   hs3_stack_3->SetMinimum(-6.289654e-09);
   hs3_stack_3->SetMaximum(625.8975);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,3.912128);
   hbadmatch_stack_1->SetBinContent(4,11.2351);
   hbadmatch_stack_1->SetBinContent(5,13.69177);
   hbadmatch_stack_1->SetBinContent(6,9.32383);
   hbadmatch_stack_1->SetBinContent(7,13.35891);
   hbadmatch_stack_1->SetBinContent(8,7.578723);
   hbadmatch_stack_1->SetBinContent(9,5.910016);
   hbadmatch_stack_1->SetBinContent(10,4.961551);
   hbadmatch_stack_1->SetBinContent(11,3.119791);
   hbadmatch_stack_1->SetBinContent(12,1.91052);
   hbadmatch_stack_1->SetBinContent(13,1.758028);
   hbadmatch_stack_1->SetBinContent(14,1.754141);
   hbadmatch_stack_1->SetBinContent(15,1.066525);
   hbadmatch_stack_1->SetBinContent(16,1.802323);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,1.112196);
   hbadmatch_stack_1->SetBinError(4,1.811229);
   hbadmatch_stack_1->SetBinError(5,2.820706);
   hbadmatch_stack_1->SetBinError(6,1.50382);
   hbadmatch_stack_1->SetBinError(7,1.964405);
   hbadmatch_stack_1->SetBinError(8,1.355609);
   hbadmatch_stack_1->SetBinError(9,1.277275);
   hbadmatch_stack_1->SetBinError(10,1.188344);
   hbadmatch_stack_1->SetBinError(11,0.9315944);
   hbadmatch_stack_1->SetBinError(12,0.6511312);
   hbadmatch_stack_1->SetBinError(13,0.7078624);
   hbadmatch_stack_1->SetBinError(14,0.7350354);
   hbadmatch_stack_1->SetBinError(15,0.4797518);
   hbadmatch_stack_1->SetBinError(16,0.7070809);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,0.4065989);
   hext_stack_2->SetBinContent(3,15.13903);
   hext_stack_2->SetBinContent(4,31.41124);
   hext_stack_2->SetBinContent(5,31.70968);
   hext_stack_2->SetBinContent(6,27.29063);
   hext_stack_2->SetBinContent(7,24.86981);
   hext_stack_2->SetBinContent(8,19.80191);
   hext_stack_2->SetBinContent(9,18.69026);
   hext_stack_2->SetBinContent(10,11.68158);
   hext_stack_2->SetBinContent(11,4.628173);
   hext_stack_2->SetBinContent(12,6.158006);
   hext_stack_2->SetBinContent(13,3.814975);
   hext_stack_2->SetBinContent(14,4.132192);
   hext_stack_2->SetBinContent(15,1.78639);
   hext_stack_2->SetBinContent(16,9.387619);
   hext_stack_2->SetBinError(2,0.4065989);
   hext_stack_2->SetBinError(3,2.575576);
   hext_stack_2->SetBinError(4,3.683468);
   hext_stack_2->SetBinError(5,3.760539);
   hext_stack_2->SetBinError(6,3.443485);
   hext_stack_2->SetBinError(7,3.255514);
   hext_stack_2->SetBinError(8,3.071522);
   hext_stack_2->SetBinError(9,2.920597);
   hext_stack_2->SetBinError(10,2.175156);
   hext_stack_2->SetBinError(11,1.291697);
   hext_stack_2->SetBinError(12,1.634652);
   hext_stack_2->SetBinError(13,1.156649);
   hext_stack_2->SetBinError(14,1.282292);
   hext_stack_2->SetBinError(15,0.8039566);
   hext_stack_2->SetBinError(16,2.031459);
   hext_stack_2->SetEntries(519);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(3,1.609107);
   hdirt_stack_3->SetBinContent(4,3.838423);
   hdirt_stack_3->SetBinContent(5,5.049139);
   hdirt_stack_3->SetBinContent(6,2.419159);
   hdirt_stack_3->SetBinContent(7,1.248147);
   hdirt_stack_3->SetBinContent(8,1.061599);
   hdirt_stack_3->SetBinContent(11,0.2761429);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinError(3,0.6514334);
   hdirt_stack_3->SetBinError(4,1.012851);
   hdirt_stack_3->SetBinError(5,1.384448);
   hdirt_stack_3->SetBinError(6,0.7670409);
   hdirt_stack_3->SetBinError(7,0.6103876);
   hdirt_stack_3->SetBinError(8,0.5547071);
   hdirt_stack_3->SetBinError(11,0.1952625);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetEntries(69);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,0.1950248);
   houtFV_stack_4->SetBinContent(3,19.69561);
   houtFV_stack_4->SetBinContent(4,30.42397);
   houtFV_stack_4->SetBinContent(5,40.36018);
   houtFV_stack_4->SetBinContent(6,35.20114);
   houtFV_stack_4->SetBinContent(7,28.65077);
   houtFV_stack_4->SetBinContent(8,16.86592);
   houtFV_stack_4->SetBinContent(9,12.73514);
   houtFV_stack_4->SetBinContent(10,10.41965);
   houtFV_stack_4->SetBinContent(11,7.322559);
   houtFV_stack_4->SetBinContent(12,5.37302);
   houtFV_stack_4->SetBinContent(13,2.247316);
   houtFV_stack_4->SetBinContent(14,2.094319);
   houtFV_stack_4->SetBinContent(15,1.465526);
   houtFV_stack_4->SetBinContent(16,3.317721);
   houtFV_stack_4->SetBinError(2,0.1950249);
   houtFV_stack_4->SetBinError(3,2.253348);
   houtFV_stack_4->SetBinError(4,2.828547);
   houtFV_stack_4->SetBinError(5,3.111468);
   houtFV_stack_4->SetBinError(6,2.93466);
   houtFV_stack_4->SetBinError(7,2.741092);
   houtFV_stack_4->SetBinError(8,1.991681);
   houtFV_stack_4->SetBinError(9,1.781275);
   houtFV_stack_4->SetBinError(10,1.694001);
   houtFV_stack_4->SetBinError(11,1.38775);
   houtFV_stack_4->SetBinError(12,1.140779);
   houtFV_stack_4->SetBinError(13,0.7337357);
   houtFV_stack_4->SetBinError(14,0.809937);
   houtFV_stack_4->SetBinError(15,0.6209405);
   houtFV_stack_4->SetBinError(16,0.9197169);
   houtFV_stack_4->SetEntries(931);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.12929);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2882649);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3424653);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3162714);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.848392);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.234247);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.971194);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.036708);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.449808);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.074322);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.005072);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6853571);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4924866);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5166568);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4487229);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.364665);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3674124);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3988212);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.219638);
   hNCpi0inFVres_stack_7->SetBinContent(3,87.00365);
   hNCpi0inFVres_stack_7->SetBinContent(4,245.0611);
   hNCpi0inFVres_stack_7->SetBinContent(5,314.3363);
   hNCpi0inFVres_stack_7->SetBinContent(6,268.9165);
   hNCpi0inFVres_stack_7->SetBinContent(7,198.8689);
   hNCpi0inFVres_stack_7->SetBinContent(8,131.6949);
   hNCpi0inFVres_stack_7->SetBinContent(9,82.98956);
   hNCpi0inFVres_stack_7->SetBinContent(10,48.2828);
   hNCpi0inFVres_stack_7->SetBinContent(11,31.46138);
   hNCpi0inFVres_stack_7->SetBinContent(12,19.56813);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.26027);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.224972);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.30941);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.43583);
   hNCpi0inFVres_stack_7->SetBinError(2,0.572635);
   hNCpi0inFVres_stack_7->SetBinError(3,2.989397);
   hNCpi0inFVres_stack_7->SetBinError(4,5.103223);
   hNCpi0inFVres_stack_7->SetBinError(5,5.807486);
   hNCpi0inFVres_stack_7->SetBinError(6,5.386594);
   hNCpi0inFVres_stack_7->SetBinError(7,4.669473);
   hNCpi0inFVres_stack_7->SetBinError(8,3.799542);
   hNCpi0inFVres_stack_7->SetBinError(9,3.001968);
   hNCpi0inFVres_stack_7->SetBinError(10,2.249534);
   hNCpi0inFVres_stack_7->SetBinError(11,1.880803);
   hNCpi0inFVres_stack_7->SetBinError(12,1.52376);
   hNCpi0inFVres_stack_7->SetBinError(13,1.174512);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9162237);
   hNCpi0inFVres_stack_7->SetBinError(15,0.735751);
   hNCpi0inFVres_stack_7->SetBinError(16,1.000338);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.5719);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.26081);
   hNCpi0inFVdis_stack_8->SetBinContent(5,42.99339);
   hNCpi0inFVdis_stack_8->SetBinContent(6,44.12701);
   hNCpi0inFVdis_stack_8->SetBinContent(7,38.53869);
   hNCpi0inFVdis_stack_8->SetBinContent(8,32.15472);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.34916);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.78449);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.41872);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.207026);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.172478);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.200882);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.239161);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.981512);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.086558);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.70861);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.093324);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.151366);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.017067);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.860255);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.625215);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.29082);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.321218);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8385943);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7029715);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7702104);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7164991);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9737813);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5862361);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2861196);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,4.731685);
   hCCpi0inFV_stack_10->SetBinContent(4,16.21915);
   hCCpi0inFV_stack_10->SetBinContent(5,52.13988);
   hCCpi0inFV_stack_10->SetBinContent(6,66.39884);
   hCCpi0inFV_stack_10->SetBinContent(7,88.88481);
   hCCpi0inFV_stack_10->SetBinContent(8,68.74537);
   hCCpi0inFV_stack_10->SetBinContent(9,53.41911);
   hCCpi0inFV_stack_10->SetBinContent(10,49.81963);
   hCCpi0inFV_stack_10->SetBinContent(11,35.26044);
   hCCpi0inFV_stack_10->SetBinContent(12,20.35802);
   hCCpi0inFV_stack_10->SetBinContent(13,18.85292);
   hCCpi0inFV_stack_10->SetBinContent(14,12.99892);
   hCCpi0inFV_stack_10->SetBinContent(15,5.87164);
   hCCpi0inFV_stack_10->SetBinContent(16,22.1919);
   hCCpi0inFV_stack_10->SetBinError(3,1.127136);
   hCCpi0inFV_stack_10->SetBinError(4,1.976006);
   hCCpi0inFV_stack_10->SetBinError(5,3.63388);
   hCCpi0inFV_stack_10->SetBinError(6,4.068404);
   hCCpi0inFV_stack_10->SetBinError(7,4.739554);
   hCCpi0inFV_stack_10->SetBinError(8,4.140416);
   hCCpi0inFV_stack_10->SetBinError(9,3.647385);
   hCCpi0inFV_stack_10->SetBinError(10,3.60428);
   hCCpi0inFV_stack_10->SetBinError(11,3.031531);
   hCCpi0inFV_stack_10->SetBinError(12,2.200374);
   hCCpi0inFV_stack_10->SetBinError(13,2.256375);
   hCCpi0inFV_stack_10->SetBinError(14,1.760323);
   hCCpi0inFV_stack_10->SetBinError(15,1.160868);
   hCCpi0inFV_stack_10->SetBinError(16,2.422247);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(3,7.414459);
   hNCinFV_stack_11->SetBinContent(4,19.59827);
   hNCinFV_stack_11->SetBinContent(5,34.58066);
   hNCinFV_stack_11->SetBinContent(6,33.6455);
   hNCinFV_stack_11->SetBinContent(7,38.25438);
   hNCinFV_stack_11->SetBinContent(8,30.44926);
   hNCinFV_stack_11->SetBinContent(9,29.65009);
   hNCinFV_stack_11->SetBinContent(10,19.73313);
   hNCinFV_stack_11->SetBinContent(11,15.22174);
   hNCinFV_stack_11->SetBinContent(12,13.84943);
   hNCinFV_stack_11->SetBinContent(13,9.861872);
   hNCinFV_stack_11->SetBinContent(14,6.595713);
   hNCinFV_stack_11->SetBinContent(15,8.059549);
   hNCinFV_stack_11->SetBinContent(16,10.93566);
   hNCinFV_stack_11->SetBinError(3,1.428937);
   hNCinFV_stack_11->SetBinError(4,2.229829);
   hNCinFV_stack_11->SetBinError(5,2.922608);
   hNCinFV_stack_11->SetBinError(6,2.858099);
   hNCinFV_stack_11->SetBinError(7,3.115738);
   hNCinFV_stack_11->SetBinError(8,2.718689);
   hNCinFV_stack_11->SetBinError(9,2.761962);
   hNCinFV_stack_11->SetBinError(10,2.211425);
   hNCinFV_stack_11->SetBinError(11,1.990601);
   hNCinFV_stack_11->SetBinError(12,1.831902);
   hNCinFV_stack_11->SetBinError(13,1.618719);
   hNCinFV_stack_11->SetBinError(14,1.317339);
   hNCinFV_stack_11->SetBinError(15,1.456121);
   hNCinFV_stack_11->SetBinError(16,1.711458);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,0.810829);
   hnumuCCinFV_stack_12->SetBinContent(3,16.34184);
   hnumuCCinFV_stack_12->SetBinContent(4,46.294);
   hnumuCCinFV_stack_12->SetBinContent(5,56.16877);
   hnumuCCinFV_stack_12->SetBinContent(6,49.4595);
   hnumuCCinFV_stack_12->SetBinContent(7,52.81279);
   hnumuCCinFV_stack_12->SetBinContent(8,37.2893);
   hnumuCCinFV_stack_12->SetBinContent(9,36.87431);
   hnumuCCinFV_stack_12->SetBinContent(10,22.32438);
   hnumuCCinFV_stack_12->SetBinContent(11,14.71884);
   hnumuCCinFV_stack_12->SetBinContent(12,11.18112);
   hnumuCCinFV_stack_12->SetBinContent(13,10.73591);
   hnumuCCinFV_stack_12->SetBinContent(14,7.866959);
   hnumuCCinFV_stack_12->SetBinContent(15,7.441866);
   hnumuCCinFV_stack_12->SetBinContent(16,16.38487);
   hnumuCCinFV_stack_12->SetBinError(2,0.4721419);
   hnumuCCinFV_stack_12->SetBinError(3,2.761657);
   hnumuCCinFV_stack_12->SetBinError(4,4.422192);
   hnumuCCinFV_stack_12->SetBinError(5,4.474402);
   hnumuCCinFV_stack_12->SetBinError(6,4.052384);
   hnumuCCinFV_stack_12->SetBinError(7,3.96373);
   hnumuCCinFV_stack_12->SetBinError(8,3.420617);
   hnumuCCinFV_stack_12->SetBinError(9,3.94875);
   hnumuCCinFV_stack_12->SetBinError(10,2.878339);
   hnumuCCinFV_stack_12->SetBinError(11,2.006167);
   hnumuCCinFV_stack_12->SetBinError(12,1.671178);
   hnumuCCinFV_stack_12->SetBinError(13,1.717773);
   hnumuCCinFV_stack_12->SetBinError(14,1.416989);
   hnumuCCinFV_stack_12->SetBinError(15,1.334187);
   hnumuCCinFV_stack_12->SetBinError(16,2.066339);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(4,0.8477485);
   hnueCCinFV_stack_13->SetBinContent(5,0.7698287);
   hnueCCinFV_stack_13->SetBinContent(6,0.8950397);
   hnueCCinFV_stack_13->SetBinContent(7,2.171805);
   hnueCCinFV_stack_13->SetBinContent(8,1.121624);
   hnueCCinFV_stack_13->SetBinContent(9,0.441907);
   hnueCCinFV_stack_13->SetBinContent(10,2.599681);
   hnueCCinFV_stack_13->SetBinContent(11,0.8378454);
   hnueCCinFV_stack_13->SetBinContent(12,0.7936127);
   hnueCCinFV_stack_13->SetBinContent(13,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(14,1.070405);
   hnueCCinFV_stack_13->SetBinContent(15,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(16,7.025779);
   hnueCCinFV_stack_13->SetBinError(3,0.4575996);
   hnueCCinFV_stack_13->SetBinError(4,0.4945047);
   hnueCCinFV_stack_13->SetBinError(5,0.4569518);
   hnueCCinFV_stack_13->SetBinError(6,0.450777);
   hnueCCinFV_stack_13->SetBinError(7,0.8883694);
   hnueCCinFV_stack_13->SetBinError(8,0.5865463);
   hnueCCinFV_stack_13->SetBinError(9,0.3143499);
   hnueCCinFV_stack_13->SetBinError(10,1.660553);
   hnueCCinFV_stack_13->SetBinError(11,0.4213651);
   hnueCCinFV_stack_13->SetBinError(12,0.4753206);
   hnueCCinFV_stack_13->SetBinError(13,0.3326517);
   hnueCCinFV_stack_13->SetBinError(14,0.5545368);
   hnueCCinFV_stack_13->SetBinError(15,0.438694);
   hnueCCinFV_stack_13->SetBinError(16,1.704373);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__8->SetBinContent(2,5.665478);
   hmcerror__8->SetBinContent(3,169.4088);
   hmcerror__8->SetBinContent(4,438.3072);
   hmcerror__8->SetBinContent(5,596.0929);
   hmcerror__8->SetBinContent(6,541.7211);
   hmcerror__8->SetBinContent(7,490.825);
   hmcerror__8->SetBinContent(8,348.631);
   hmcerror__8->SetBinContent(9,266.1897);
   hmcerror__8->SetBinContent(10,186.9182);
   hmcerror__8->SetBinContent(11,127.9635);
   hmcerror__8->SetBinContent(12,86.63571);
   hmcerror__8->SetBinContent(13,65.2569);
   hmcerror__8->SetBinContent(14,49.41476);
   hmcerror__8->SetBinContent(15,35.25115);
   hmcerror__8->SetBinContent(16,89.43954);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,5.419691);
   hmcerror__8->SetBinError(3,52.14427);
   hmcerror__8->SetBinError(4,150.1998);
   hmcerror__8->SetBinError(5,229.0372);
   hmcerror__8->SetBinError(6,223.7834);
   hmcerror__8->SetBinError(7,185.2343);
   hmcerror__8->SetBinError(8,134.7186);
   hmcerror__8->SetBinError(9,105.8481);
   hmcerror__8->SetBinError(10,67.54847);
   hmcerror__8->SetBinError(11,44.36495);
   hmcerror__8->SetBinError(12,35.53491);
   hmcerror__8->SetBinError(13,28.69034);
   hmcerror__8->SetBinError(14,21.93341);
   hmcerror__8->SetBinError(15,18.1269);
   hmcerror__8->SetBinError(16,31.57763);
   hmcerror__8->SetEntries(3450.865);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[15] = {
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
   Double_t _fy3009[15] = {
   0,
   8,
   155,
   380,
   457,
   438,
   343,
   236,
   176,
   124,
   86,
   62,
   45,
   29,
   20};
   Double_t _felx3009[15] = {
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
   Double_t _fely3009[15] = {
   0,
   3.0307,
   12.4499,
   19.49359,
   21.37756,
   20.92845,
   18.52026,
   15.36229,
   13.2665,
   11.13553,
   9.3967,
   8.0018,
   6.8416,
   5.5285,
   4.6266};
   Double_t _fehx3009[15] = {
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
   Double_t _fehy3009[15] = {
   1.1478,
   2.7896,
   12.4499,
   19.49359,
   21.37756,
   20.92845,
   18.52026,
   15.36229,
   13.2665,
   11.13553,
   9.1951,
   7.7989,
   6.637,
   5.3201,
   4.4133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(526.2153);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.75#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.4/15","");
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

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 201.5","F");

   ci = 1461;
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

   ci = 1462;
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

   ci = 1463;
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

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1455.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  274.8","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 493.7","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 266.9","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 370.3","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[15] = {
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
   Double_t _fy3010[15] = {
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
   Double_t _felx3010[15] = {
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
   Double_t _fely3010[15] = {
   0,
   0.9566167,
   0.3078015,
   0.3426817,
   0.3842308,
   0.4130971,
   0.3773938,
   0.3864217,
   0.3976416,
   0.3613798,
   0.3467001,
   0.4101647,
   0.4396522,
   0.4438635,
   0.5142216};
   Double_t _fehx3010[15] = {
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
   Double_t _fehy3010[15] = {
   0,
   0.9566167,
   0.3078015,
   0.3426817,
   0.3842308,
   0.4130971,
   0.3773938,
   0.3864217,
   0.3976416,
   0.3613798,
   0.3467001,
   0.4101647,
   0.4396522,
   0.4438635,
   0.5142216};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[15] = {
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
   Double_t _fy3011[15] = {
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
   Double_t _felx3011[15] = {
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
   Double_t _fely3011[15] = {
   0,
   0.3232622,
   0.2622529,
   0.3280753,
   0.3717829,
   0.398963,
   0.3640293,
   0.3566264,
   0.3261674,
   0.2835408,
   0.2694235,
   0.2385865,
   0.2393042,
   0.2196107,
   0.2413828};
   Double_t _fehx3011[15] = {
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
   Double_t _fehy3011[15] = {
   0,
   0.3232622,
   0.2622529,
   0.3280753,
   0.3717829,
   0.398963,
   0.3640293,
   0.3566264,
   0.3261674,
   0.2835408,
   0.2694235,
   0.2385865,
   0.2393042,
   0.2196107,
   0.2413828};
   grae = new TGraphAsymmErrors(15,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[15] = {
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
   Double_t _fy3012[15] = {
   10,
   1.412061,
   0.9149467,
   0.8669719,
   0.766659,
   0.8085342,
   0.6988234,
   0.6769336,
   0.6611826,
   0.6633918,
   0.6720668,
   0.7156402,
   0.6895822,
   0.5868691,
   0.5673573};
   Double_t _felx3012[15] = {
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
   Double_t _fely3012[15] = {
   0,
   0.5349416,
   0.07349028,
   0.04447472,
   0.0358628,
   0.03863326,
   0.03773292,
   0.04406462,
   0.04983851,
   0.05957434,
   0.07343268,
   0.09236145,
   0.104841,
   0.1118795,
   0.1312468};
   Double_t _fehx3012[15] = {
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
   Double_t _fehy3012[15] = {
   0,
   0.4923856,
   0.07349028,
   0.04447472,
   0.0358628,
   0.03863326,
   0.03773292,
   0.04406462,
   0.04983851,
   0.05957434,
   0.07185723,
   0.09001946,
   0.1017057,
   0.1076622,
   0.1251959};
   grae = new TGraphAsymmErrors(15,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.3924995);
   Graph_Graph3012->SetMaximum(10.95639);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

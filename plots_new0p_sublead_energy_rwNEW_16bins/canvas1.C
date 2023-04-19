#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 20:02:45 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-61.53846,-32.48635,451.2821,3592.306);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__1->SetBinContent(1,1176.686);
   hmc__1->SetBinContent(2,1624.317);
   hmc__1->SetBinContent(3,1434.031);
   hmc__1->SetBinContent(4,1085.374);
   hmc__1->SetBinContent(5,730.0167);
   hmc__1->SetBinContent(6,469.5702);
   hmc__1->SetBinContent(7,295.935);
   hmc__1->SetBinContent(8,197.0121);
   hmc__1->SetBinContent(9,115.4273);
   hmc__1->SetBinContent(10,67.91302);
   hmc__1->SetBinContent(11,50.33944);
   hmc__1->SetBinContent(12,33.11142);
   hmc__1->SetBinContent(13,17.78941);
   hmc__1->SetBinContent(14,10.25989);
   hmc__1->SetBinContent(15,8.893151);
   hmc__1->SetBinContent(16,5.375694);
   hmc__1->SetBinContent(17,12.25461);
   hmc__1->SetBinError(1,253.7222);
   hmc__1->SetBinError(2,353.8563);
   hmc__1->SetBinError(3,335.5168);
   hmc__1->SetBinError(4,274.3873);
   hmc__1->SetBinError(5,199.9889);
   hmc__1->SetBinError(6,138.8988);
   hmc__1->SetBinError(7,92.88695);
   hmc__1->SetBinError(8,67.10303);
   hmc__1->SetBinError(9,46.17647);
   hmc__1->SetBinError(10,26.46888);
   hmc__1->SetBinError(11,21.09307);
   hmc__1->SetBinError(12,15.09152);
   hmc__1->SetBinError(13,9.402969);
   hmc__1->SetBinError(14,8.302486);
   hmc__1->SetBinError(15,8.402687);
   hmc__1->SetBinError(16,5.281936);
   hmc__1->SetBinError(17,9.5894);
   hmc__1->SetMinimum(-32.48635);
   hmc__1->SetMaximum(3411.067);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",16,0,400);
   hs1_stack_1->SetMinimum(-3.646956e-09);
   hs1_stack_1->SetMaximum(1705.533);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,28.25389);
   hbadmatch_stack_1->SetBinContent(2,39.62949);
   hbadmatch_stack_1->SetBinContent(3,42.42852);
   hbadmatch_stack_1->SetBinContent(4,31.1041);
   hbadmatch_stack_1->SetBinContent(5,14.04992);
   hbadmatch_stack_1->SetBinContent(6,10.12802);
   hbadmatch_stack_1->SetBinContent(7,6.158643);
   hbadmatch_stack_1->SetBinContent(8,2.485592);
   hbadmatch_stack_1->SetBinContent(9,1.947476);
   hbadmatch_stack_1->SetBinContent(10,1.804013);
   hbadmatch_stack_1->SetBinContent(11,1.273271);
   hbadmatch_stack_1->SetBinContent(12,0.8770706);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,2.888993);
   hbadmatch_stack_1->SetBinError(2,3.655428);
   hbadmatch_stack_1->SetBinError(3,3.979672);
   hbadmatch_stack_1->SetBinError(4,3.083693);
   hbadmatch_stack_1->SetBinError(5,1.883609);
   hbadmatch_stack_1->SetBinError(6,2.295349);
   hbadmatch_stack_1->SetBinError(7,1.250317);
   hbadmatch_stack_1->SetBinError(8,0.8103854);
   hbadmatch_stack_1->SetBinError(9,0.7600326);
   hbadmatch_stack_1->SetBinError(10,0.7075491);
   hbadmatch_stack_1->SetBinError(11,0.6535392);
   hbadmatch_stack_1->SetBinError(12,0.5197486);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,138.5463);
   hext_stack_2->SetBinContent(2,187.9875);
   hext_stack_2->SetBinContent(3,121.7264);
   hext_stack_2->SetBinContent(4,70.06623);
   hext_stack_2->SetBinContent(5,45.04802);
   hext_stack_2->SetBinContent(6,18.88339);
   hext_stack_2->SetBinContent(7,13.0426);
   hext_stack_2->SetBinContent(8,9.234804);
   hext_stack_2->SetBinContent(9,2.435184);
   hext_stack_2->SetBinContent(10,1.861411);
   hext_stack_2->SetBinContent(11,1.704188);
   hext_stack_2->SetBinContent(12,1.290409);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,0.8131978);
   hext_stack_2->SetBinError(1,7.713561);
   hext_stack_2->SetBinError(2,8.951092);
   hext_stack_2->SetBinError(3,7.128576);
   hext_stack_2->SetBinError(4,5.463551);
   hext_stack_2->SetBinError(5,4.381882);
   hext_stack_2->SetBinError(6,2.800939);
   hext_stack_2->SetBinError(7,2.340856);
   hext_stack_2->SetBinError(8,1.985087);
   hext_stack_2->SetBinError(9,0.9256422);
   hext_stack_2->SetBinError(10,0.9526997);
   hext_stack_2->SetBinError(11,0.7656743);
   hext_stack_2->SetBinError(12,0.788756);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,15.62508);
   hdirt_stack_3->SetBinContent(2,24.12189);
   hdirt_stack_3->SetBinContent(3,17.41566);
   hdirt_stack_3->SetBinContent(4,7.162881);
   hdirt_stack_3->SetBinContent(5,5.576915);
   hdirt_stack_3->SetBinContent(6,1.539529);
   hdirt_stack_3->SetBinContent(7,1.174808);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,2.0316);
   hdirt_stack_3->SetBinError(2,2.623676);
   hdirt_stack_3->SetBinError(3,2.335392);
   hdirt_stack_3->SetBinError(4,1.44427);
   hdirt_stack_3->SetBinError(5,1.555969);
   hdirt_stack_3->SetBinError(6,0.6478081);
   hdirt_stack_3->SetBinError(7,0.6076727);
   hdirt_stack_3->SetBinError(8,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,138.8571);
   houtFV_stack_4->SetBinContent(2,189.2373);
   houtFV_stack_4->SetBinContent(3,151.7647);
   houtFV_stack_4->SetBinContent(4,100.8541);
   houtFV_stack_4->SetBinContent(5,53.04305);
   houtFV_stack_4->SetBinContent(6,32.18799);
   houtFV_stack_4->SetBinContent(7,24.23674);
   houtFV_stack_4->SetBinContent(8,14.20148);
   houtFV_stack_4->SetBinContent(9,5.810169);
   houtFV_stack_4->SetBinContent(10,5.770205);
   houtFV_stack_4->SetBinContent(11,3.611408);
   houtFV_stack_4->SetBinContent(12,0.8753801);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.447765);
   houtFV_stack_4->SetBinContent(17,0.4057469);
   houtFV_stack_4->SetBinError(1,5.896698);
   houtFV_stack_4->SetBinError(2,6.947939);
   houtFV_stack_4->SetBinError(3,6.329429);
   houtFV_stack_4->SetBinError(4,5.007864);
   houtFV_stack_4->SetBinError(5,3.623586);
   houtFV_stack_4->SetBinError(6,2.863952);
   houtFV_stack_4->SetBinError(7,2.531695);
   houtFV_stack_4->SetBinError(8,1.883928);
   houtFV_stack_4->SetBinError(9,1.238991);
   houtFV_stack_4->SetBinError(10,1.194259);
   houtFV_stack_4->SetBinError(11,1.001287);
   houtFV_stack_4->SetBinError(12,0.5191111);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.3189402);
   houtFV_stack_4->SetBinError(17,0.2870385);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,17.66693);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,18.83456);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,18.19287);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.91043);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.86752);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.17582);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.148818);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.184688);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.988893);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7526357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.435553);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.36112);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.406866);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.109714);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.162585);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.02284);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7957278);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6962964);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7250045);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.185768);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.691362);
   hNCpi0inFVqe_stack_6->SetBinContent(2,7.196904);
   hNCpi0inFVqe_stack_6->SetBinContent(3,6.930017);
   hNCpi0inFVqe_stack_6->SetBinContent(4,4.867906);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.952176);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.004904);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4897795);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.8977352);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.8093072);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.714595);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4239703);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3553864);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,382.1065);
   hNCpi0inFVres_stack_7->SetBinContent(2,623.9026);
   hNCpi0inFVres_stack_7->SetBinContent(3,578.0885);
   hNCpi0inFVres_stack_7->SetBinContent(4,437.2051);
   hNCpi0inFVres_stack_7->SetBinContent(5,286.0901);
   hNCpi0inFVres_stack_7->SetBinContent(6,182.9789);
   hNCpi0inFVres_stack_7->SetBinContent(7,105.8259);
   hNCpi0inFVres_stack_7->SetBinContent(8,68.01516);
   hNCpi0inFVres_stack_7->SetBinContent(9,38.01057);
   hNCpi0inFVres_stack_7->SetBinContent(10,21.16571);
   hNCpi0inFVres_stack_7->SetBinContent(11,13.38774);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.629606);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.750074);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.274526);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.925444);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.8365039);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.18409);
   hNCpi0inFVres_stack_7->SetBinError(1,6.352616);
   hNCpi0inFVres_stack_7->SetBinError(2,8.181634);
   hNCpi0inFVres_stack_7->SetBinError(3,7.861197);
   hNCpi0inFVres_stack_7->SetBinError(4,6.842343);
   hNCpi0inFVres_stack_7->SetBinError(5,5.555782);
   hNCpi0inFVres_stack_7->SetBinError(6,4.472305);
   hNCpi0inFVres_stack_7->SetBinError(7,3.323263);
   hNCpi0inFVres_stack_7->SetBinError(8,2.709726);
   hNCpi0inFVres_stack_7->SetBinError(9,2.009475);
   hNCpi0inFVres_stack_7->SetBinError(10,1.462946);
   hNCpi0inFVres_stack_7->SetBinError(11,1.243102);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9830962);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6389197);
   hNCpi0inFVres_stack_7->SetBinError(14,0.516469);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5135722);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2638255);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2584844);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,69.79842);
   hNCpi0inFVdis_stack_8->SetBinContent(2,113.2389);
   hNCpi0inFVdis_stack_8->SetBinContent(3,104.6575);
   hNCpi0inFVdis_stack_8->SetBinContent(4,82.39135);
   hNCpi0inFVdis_stack_8->SetBinContent(5,60.08838);
   hNCpi0inFVdis_stack_8->SetBinContent(6,37.02708);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.36849);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.91469);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.7927);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.638231);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.073088);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.72043);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.297354);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.770662);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.20054);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.87819);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.53534);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.687538);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.448606);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.30816);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.956219);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.56451);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.940722);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.540525);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.358759);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.123772);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8119881);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6940569);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5704791);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.329333);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4628136);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4441466);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3320795);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4545405);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.6554859);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.725736);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.2404119);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2928421);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,125.9855);
   hCCpi0inFV_stack_10->SetBinContent(2,195.0218);
   hCCpi0inFV_stack_10->SetBinContent(3,209.3088);
   hCCpi0inFV_stack_10->SetBinContent(4,181.1911);
   hCCpi0inFV_stack_10->SetBinContent(5,131.9475);
   hCCpi0inFV_stack_10->SetBinContent(6,93.07784);
   hCCpi0inFV_stack_10->SetBinContent(7,53.57474);
   hCCpi0inFV_stack_10->SetBinContent(8,37.1018);
   hCCpi0inFV_stack_10->SetBinContent(9,22.37572);
   hCCpi0inFV_stack_10->SetBinContent(10,15.16978);
   hCCpi0inFV_stack_10->SetBinContent(11,10.81634);
   hCCpi0inFV_stack_10->SetBinContent(12,6.021864);
   hCCpi0inFV_stack_10->SetBinContent(13,4.783138);
   hCCpi0inFV_stack_10->SetBinContent(14,2.050601);
   hCCpi0inFV_stack_10->SetBinContent(15,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(16,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(17,3.462874);
   hCCpi0inFV_stack_10->SetBinError(1,5.679756);
   hCCpi0inFV_stack_10->SetBinError(2,7.009547);
   hCCpi0inFV_stack_10->SetBinError(3,7.229716);
   hCCpi0inFV_stack_10->SetBinError(4,6.810357);
   hCCpi0inFV_stack_10->SetBinError(5,5.71535);
   hCCpi0inFV_stack_10->SetBinError(6,4.839607);
   hCCpi0inFV_stack_10->SetBinError(7,3.676917);
   hCCpi0inFV_stack_10->SetBinError(8,3.103406);
   hCCpi0inFV_stack_10->SetBinError(9,2.379553);
   hCCpi0inFV_stack_10->SetBinError(10,1.920176);
   hCCpi0inFV_stack_10->SetBinError(11,1.56995);
   hCCpi0inFV_stack_10->SetBinError(12,1.194691);
   hCCpi0inFV_stack_10->SetBinError(13,1.045705);
   hCCpi0inFV_stack_10->SetBinError(14,0.7068742);
   hCCpi0inFV_stack_10->SetBinError(15,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(16,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(17,0.961023);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,87.34227);
   hNCinFV_stack_11->SetBinContent(2,72.32796);
   hNCinFV_stack_11->SetBinContent(3,74.88572);
   hNCinFV_stack_11->SetBinContent(4,67.40393);
   hNCinFV_stack_11->SetBinContent(5,57.60654);
   hNCinFV_stack_11->SetBinContent(6,44.46402);
   hNCinFV_stack_11->SetBinContent(7,33.55289);
   hNCinFV_stack_11->SetBinContent(8,24.07829);
   hNCinFV_stack_11->SetBinContent(9,14.4036);
   hNCinFV_stack_11->SetBinContent(10,9.139489);
   hNCinFV_stack_11->SetBinContent(11,9.62989);
   hNCinFV_stack_11->SetBinContent(12,6.608629);
   hNCinFV_stack_11->SetBinContent(13,3.411311);
   hNCinFV_stack_11->SetBinContent(14,1.907138);
   hNCinFV_stack_11->SetBinContent(15,2.094319);
   hNCinFV_stack_11->SetBinContent(16,0.785171);
   hNCinFV_stack_11->SetBinContent(17,2.449103);
   hNCinFV_stack_11->SetBinError(1,4.791563);
   hNCinFV_stack_11->SetBinError(2,4.231825);
   hNCinFV_stack_11->SetBinError(3,4.29588);
   hNCinFV_stack_11->SetBinError(4,4.139673);
   hNCinFV_stack_11->SetBinError(5,3.779461);
   hNCinFV_stack_11->SetBinError(6,3.291509);
   hNCinFV_stack_11->SetBinError(7,2.930601);
   hNCinFV_stack_11->SetBinError(8,2.498307);
   hNCinFV_stack_11->SetBinError(9,1.963323);
   hNCinFV_stack_11->SetBinError(10,1.494371);
   hNCinFV_stack_11->SetBinError(11,1.558377);
   hNCinFV_stack_11->SetBinError(12,1.241795);
   hNCinFV_stack_11->SetBinError(13,0.9810986);
   hNCinFV_stack_11->SetBinError(14,0.6501133);
   hNCinFV_stack_11->SetBinError(15,0.809937);
   hNCinFV_stack_11->SetBinError(16,0.3925882);
   hNCinFV_stack_11->SetBinError(17,0.7609545);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,152.3241);
   hnumuCCinFV_stack_12->SetBinContent(2,142.3516);
   hnumuCCinFV_stack_12->SetBinContent(3,101.3838);
   hnumuCCinFV_stack_12->SetBinContent(4,83.87971);
   hnumuCCinFV_stack_12->SetBinContent(5,59.17244);
   hnumuCCinFV_stack_12->SetBinContent(6,36.76906);
   hnumuCCinFV_stack_12->SetBinContent(7,26.73626);
   hnumuCCinFV_stack_12->SetBinContent(8,17.81404);
   hnumuCCinFV_stack_12->SetBinContent(9,13.81505);
   hnumuCCinFV_stack_12->SetBinContent(10,4.744601);
   hnumuCCinFV_stack_12->SetBinContent(11,4.831429);
   hnumuCCinFV_stack_12->SetBinContent(12,3.831003);
   hnumuCCinFV_stack_12->SetBinContent(13,1.944077);
   hnumuCCinFV_stack_12->SetBinContent(14,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(15,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(16,0.8753801);
   hnumuCCinFV_stack_12->SetBinContent(17,2.110223);
   hnumuCCinFV_stack_12->SetBinError(1,7.489688);
   hnumuCCinFV_stack_12->SetBinError(2,7.322198);
   hnumuCCinFV_stack_12->SetBinError(3,5.778668);
   hnumuCCinFV_stack_12->SetBinError(4,5.024216);
   hnumuCCinFV_stack_12->SetBinError(5,5.040057);
   hnumuCCinFV_stack_12->SetBinError(6,3.181387);
   hnumuCCinFV_stack_12->SetBinError(7,2.681449);
   hnumuCCinFV_stack_12->SetBinError(8,2.15987);
   hnumuCCinFV_stack_12->SetBinError(9,1.883517);
   hnumuCCinFV_stack_12->SetBinError(10,1.037837);
   hnumuCCinFV_stack_12->SetBinError(11,1.09139);
   hnumuCCinFV_stack_12->SetBinError(12,0.955537);
   hnumuCCinFV_stack_12->SetBinError(13,0.6619571);
   hnumuCCinFV_stack_12->SetBinError(14,0.340721);
   hnumuCCinFV_stack_12->SetBinError(15,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(16,0.5191111);
   hnumuCCinFV_stack_12->SetBinError(17,0.7369558);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,17.43238);
   hnueCCinFV_stack_13->SetBinContent(2,9.811429);
   hnueCCinFV_stack_13->SetBinContent(3,6.522495);
   hnueCCinFV_stack_13->SetBinContent(4,6.001971);
   hnueCCinFV_stack_13->SetBinContent(5,3.518294);
   hnueCCinFV_stack_13->SetBinContent(6,2.236378);
   hnueCCinFV_stack_13->SetBinContent(7,1.515398);
   hnueCCinFV_stack_13->SetBinContent(8,0.9818863);
   hnueCCinFV_stack_13->SetBinContent(9,1.568795);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(12,1.476148);
   hnueCCinFV_stack_13->SetBinContent(13,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,3.197351);
   hnueCCinFV_stack_13->SetBinError(2,1.986844);
   hnueCCinFV_stack_13->SetBinError(3,1.418009);
   hnueCCinFV_stack_13->SetBinError(4,1.654951);
   hnueCCinFV_stack_13->SetBinError(5,1.055969);
   hnueCCinFV_stack_13->SetBinError(6,0.7652764);
   hnueCCinFV_stack_13->SetBinError(7,0.588146);
   hnueCCinFV_stack_13->SetBinError(8,0.4391155);
   hnueCCinFV_stack_13->SetBinError(9,1.131016);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(12,0.716223);
   hnueCCinFV_stack_13->SetBinError(13,0.5197486);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__2->SetBinContent(1,1176.686);
   hmcerror__2->SetBinContent(2,1624.317);
   hmcerror__2->SetBinContent(3,1434.031);
   hmcerror__2->SetBinContent(4,1085.374);
   hmcerror__2->SetBinContent(5,730.0167);
   hmcerror__2->SetBinContent(6,469.5702);
   hmcerror__2->SetBinContent(7,295.935);
   hmcerror__2->SetBinContent(8,197.0121);
   hmcerror__2->SetBinContent(9,115.4273);
   hmcerror__2->SetBinContent(10,67.91302);
   hmcerror__2->SetBinContent(11,50.33944);
   hmcerror__2->SetBinContent(12,33.11142);
   hmcerror__2->SetBinContent(13,17.78941);
   hmcerror__2->SetBinContent(14,10.25989);
   hmcerror__2->SetBinContent(15,8.893151);
   hmcerror__2->SetBinContent(16,5.375694);
   hmcerror__2->SetBinContent(17,12.25461);
   hmcerror__2->SetBinError(1,253.7222);
   hmcerror__2->SetBinError(2,353.8563);
   hmcerror__2->SetBinError(3,335.5168);
   hmcerror__2->SetBinError(4,274.3873);
   hmcerror__2->SetBinError(5,199.9889);
   hmcerror__2->SetBinError(6,138.8988);
   hmcerror__2->SetBinError(7,92.88695);
   hmcerror__2->SetBinError(8,67.10303);
   hmcerror__2->SetBinError(9,46.17647);
   hmcerror__2->SetBinError(10,26.46888);
   hmcerror__2->SetBinError(11,21.09307);
   hmcerror__2->SetBinError(12,15.09152);
   hmcerror__2->SetBinError(13,9.402969);
   hmcerror__2->SetBinError(14,8.302486);
   hmcerror__2->SetBinError(15,8.402687);
   hmcerror__2->SetBinError(16,5.281936);
   hmcerror__2->SetBinError(17,9.5894);
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
   
   Double_t _fx3001[16] = {
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
   Double_t _fy3001[16] = {
   1083,
   1511,
   1312,
   951,
   629,
   362,
   227,
   118,
   90,
   54,
   28,
   30,
   18,
   11,
   3,
   4};
   Double_t _felx3001[16] = {
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
   Double_t _fely3001[16] = {
   32.90897,
   38.87158,
   36.22154,
   30.83829,
   25.07987,
   19.0263,
   15.06652,
   10.86278,
   9.6093,
   7.4785,
   5.4358,
   5.6197,
   4.4008,
   3.4975,
   2.143368,
   2.29683};
   Double_t _fehx3001[16] = {
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
   Double_t _fehy3001[16] = {
   32.90897,
   38.87158,
   36.22154,
   30.83829,
   25.07987,
   19.0263,
   15.06652,
   10.86278,
   9.4079,
   7.275,
   5.2271,
   5.4117,
   4.1858,
   3.27,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(0.7709688);
   Graph_Graph3001->SetMaximum(1704.773);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("","BNB Data, 6431.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 614.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 721.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2754.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  537.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1091.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 509.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 651.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[16] = {
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
   Double_t _fy3002[16] = {
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
   Double_t _felx3002[16] = {
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
   Double_t _fely3002[16] = {
   0.2156245,
   0.2178492,
   0.2339677,
   0.2528044,
   0.2739511,
   0.2957999,
   0.3138762,
   0.3406036,
   0.400048,
   0.3897467,
   0.4190167,
   0.45578,
   0.5285712,
   0.8092179,
   0.9448492,
   0.982559};
   Double_t _fehx3002[16] = {
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
   Double_t _fehy3002[16] = {
   0.2156245,
   0.2178492,
   0.2339677,
   0.2528044,
   0.2739511,
   0.2957999,
   0.3138762,
   0.3406036,
   0.400048,
   0.3897467,
   0.4190167,
   0.45578,
   0.5285712,
   0.8092179,
   0.9448492,
   0.982559};
   grae = new TGraphAsymmErrors(16,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3003[16] = {
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
   Double_t _fy3003[16] = {
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
   Double_t _felx3003[16] = {
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
   Double_t _fely3003[16] = {
   0.1981985,
   0.2146149,
   0.2289258,
   0.2479064,
   0.2673428,
   0.2830619,
   0.2880889,
   0.3131559,
   0.3147845,
   0.3011423,
   0.2588417,
   0.257517,
   0.2858368,
   0.3267495,
   0.2881899,
   0.3242725};
   Double_t _fehx3003[16] = {
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
   Double_t _fehy3003[16] = {
   0.1981985,
   0.2146149,
   0.2289258,
   0.2479064,
   0.2673428,
   0.2830619,
   0.2880889,
   0.3131559,
   0.3147845,
   0.3011423,
   0.2588417,
   0.257517,
   0.2858368,
   0.3267495,
   0.2881899,
   0.3242725};
   grae = new TGraphAsymmErrors(16,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
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
   
   Double_t _fx3004[16] = {
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
   Double_t _fy3004[16] = {
   0.9203816,
   0.9302369,
   0.9149038,
   0.8761958,
   0.8616241,
   0.7709177,
   0.7670603,
   0.598948,
   0.7797114,
   0.7951347,
   0.5562239,
   0.9060319,
   1.011838,
   1.072136,
   0.3373382,
   0.74409};
   Double_t _felx3004[16] = {
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
   Double_t _fely3004[16] = {
   0.0279675,
   0.02393103,
   0.02525856,
   0.0284126,
   0.0343552,
   0.04051854,
   0.05091158,
   0.05513763,
   0.08324979,
   0.1101188,
   0.1079829,
   0.1697209,
   0.2473831,
   0.3408906,
   0.2410133,
   0.4272621};
   Double_t _fehx3004[16] = {
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
   Double_t _fehy3004[16] = {
   0.0279675,
   0.02393103,
   0.02525856,
   0.0284126,
   0.0343552,
   0.04051854,
   0.05091158,
   0.05513763,
   0.08150497,
   0.1071223,
   0.1038371,
   0.1634391,
   0.2352973,
   0.3187169,
   0.1938818,
   0.3686706};
   grae = new TGraphAsymmErrors(16,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0.08669242);
   Graph_Graph3004->SetMaximum(1.520306);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

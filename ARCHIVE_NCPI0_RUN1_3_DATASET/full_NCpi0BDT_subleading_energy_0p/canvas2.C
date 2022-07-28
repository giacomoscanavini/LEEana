#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 19:06:09 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-61.53846,-15.64798,451.2821,1647.979);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__4->SetBinContent(1,533.5302);
   hmc__4->SetBinContent(2,782.3989);
   hmc__4->SetBinContent(3,719.2344);
   hmc__4->SetBinContent(4,524.6735);
   hmc__4->SetBinContent(5,326.4548);
   hmc__4->SetBinContent(6,200.8073);
   hmc__4->SetBinContent(7,129.5964);
   hmc__4->SetBinContent(8,84.00668);
   hmc__4->SetBinContent(9,50.0215);
   hmc__4->SetBinContent(10,32.52712);
   hmc__4->SetBinContent(11,22.71362);
   hmc__4->SetBinContent(12,13.74834);
   hmc__4->SetBinContent(13,7.189724);
   hmc__4->SetBinContent(14,4.397592);
   hmc__4->SetBinContent(15,4.019298);
   hmc__4->SetBinContent(16,2.737807);
   hmc__4->SetBinContent(17,5.54015);
   hmc__4->SetBinError(1,109.2751);
   hmc__4->SetBinError(2,168.0297);
   hmc__4->SetBinError(3,159.4752);
   hmc__4->SetBinError(4,128.2165);
   hmc__4->SetBinError(5,86.10024);
   hmc__4->SetBinError(6,53.04824);
   hmc__4->SetBinError(7,35.13951);
   hmc__4->SetBinError(8,23.98811);
   hmc__4->SetBinError(9,17.82528);
   hmc__4->SetBinError(10,10.04453);
   hmc__4->SetBinError(11,7.92796);
   hmc__4->SetBinError(12,6.80755);
   hmc__4->SetBinError(13,4.954337);
   hmc__4->SetBinError(14,3.352835);
   hmc__4->SetBinError(15,2.548925);
   hmc__4->SetBinError(16,3.110384);
   hmc__4->SetBinError(17,2.883906);
   hmc__4->SetMinimum(-15.64798);
   hmc__4->SetMaximum(1564.798);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",16,0,400);
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(821.5188);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,12.41133);
   hbadmatch_stack_1->SetBinContent(2,14.20176);
   hbadmatch_stack_1->SetBinContent(3,21.62493);
   hbadmatch_stack_1->SetBinContent(4,13.77623);
   hbadmatch_stack_1->SetBinContent(5,5.489522);
   hbadmatch_stack_1->SetBinContent(6,5.632611);
   hbadmatch_stack_1->SetBinContent(7,4.104661);
   hbadmatch_stack_1->SetBinContent(8,1.31777);
   hbadmatch_stack_1->SetBinContent(9,0.7302274);
   hbadmatch_stack_1->SetBinContent(10,0.8770706);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.784737);
   hbadmatch_stack_1->SetBinError(2,1.905943);
   hbadmatch_stack_1->SetBinError(3,3.115459);
   hbadmatch_stack_1->SetBinError(4,2.198004);
   hbadmatch_stack_1->SetBinError(5,1.124992);
   hbadmatch_stack_1->SetBinError(6,1.280464);
   hbadmatch_stack_1->SetBinError(7,1.030678);
   hbadmatch_stack_1->SetBinError(8,0.6069298);
   hbadmatch_stack_1->SetBinError(9,0.4379386);
   hbadmatch_stack_1->SetBinError(10,0.5197486);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,54.41121);
   hext_stack_2->SetBinContent(2,71.64666);
   hext_stack_2->SetBinContent(3,64.52264);
   hext_stack_2->SetBinContent(4,36.90326);
   hext_stack_2->SetBinContent(5,17.96368);
   hext_stack_2->SetBinContent(6,13.16669);
   hext_stack_2->SetBinContent(7,6.303639);
   hext_stack_2->SetBinContent(8,3.814975);
   hext_stack_2->SetBinContent(9,1.37261);
   hext_stack_2->SetBinContent(10,3.946247);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.8131978);
   hext_stack_2->SetBinError(1,5.189265);
   hext_stack_2->SetBinError(2,5.892032);
   hext_stack_2->SetBinError(3,5.614895);
   hext_stack_2->SetBinError(4,4.254256);
   hext_stack_2->SetBinError(5,2.897318);
   hext_stack_2->SetBinError(6,2.543751);
   hext_stack_2->SetBinError(7,1.749156);
   hext_stack_2->SetBinError(8,1.156649);
   hext_stack_2->SetBinError(9,0.8259691);
   hext_stack_2->SetBinError(10,1.458663);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.5750177);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,4.96895);
   hdirt_stack_3->SetBinContent(2,4.833838);
   hdirt_stack_3->SetBinContent(3,3.416586);
   hdirt_stack_3->SetBinContent(4,1.02759);
   hdirt_stack_3->SetBinContent(5,0.9099599);
   hdirt_stack_3->SetBinContent(6,0.4828655);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinError(1,1.172394);
   hdirt_stack_3->SetBinError(2,1.103787);
   hdirt_stack_3->SetBinError(3,1.197028);
   hdirt_stack_3->SetBinError(4,0.5229813);
   hdirt_stack_3->SetBinError(5,0.5081362);
   hdirt_stack_3->SetBinError(6,0.3678347);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,43.1667);
   houtFV_stack_4->SetBinContent(2,49.76495);
   houtFV_stack_4->SetBinContent(3,43.89523);
   houtFV_stack_4->SetBinContent(4,29.36092);
   houtFV_stack_4->SetBinContent(5,17.30592);
   houtFV_stack_4->SetBinContent(6,9.548101);
   houtFV_stack_4->SetBinContent(7,9.541004);
   houtFV_stack_4->SetBinContent(8,6.550304);
   houtFV_stack_4->SetBinContent(9,1.752078);
   houtFV_stack_4->SetBinContent(10,2.640747);
   houtFV_stack_4->SetBinContent(11,1.857266);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.2510497);
   houtFV_stack_4->SetBinError(1,3.333871);
   houtFV_stack_4->SetBinError(2,3.520546);
   houtFV_stack_4->SetBinError(3,3.333598);
   houtFV_stack_4->SetBinError(4,2.746698);
   houtFV_stack_4->SetBinError(5,2.024771);
   houtFV_stack_4->SetBinError(6,1.542089);
   houtFV_stack_4->SetBinError(7,1.59242);
   houtFV_stack_4->SetBinError(8,1.256342);
   houtFV_stack_4->SetBinError(9,0.7024635);
   houtFV_stack_4->SetBinError(10,0.784705);
   houtFV_stack_4->SetBinError(11,0.6799255);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.2510497);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.184426);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.9057537);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.030644);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3637747);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2133949);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3671473);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,204.3128);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,414.5523);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,394.1228);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,286.6758);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,182.3909);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,109.8258);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,66.31408);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,43.31144);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,26.73297);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,14.60356);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,8.450085);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,5.786286);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,2.31438);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,1.883758);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,1.870645);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,1.142908);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,2.18933);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,4.611439);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,6.671617);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,6.454698);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.580265);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.476309);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.492109);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.650536);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.169457);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.747959);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.282072);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,0.9800233);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,0.8098286);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,0.4859236);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.4723172);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.5605575);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.3527294);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.5085583);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_7->SetBinContent(1,48.99841);
   hCCpi0inFV_stack_7->SetBinContent(2,102.2838);
   hCCpi0inFV_stack_7->SetBinContent(3,117.7927);
   hCCpi0inFV_stack_7->SetBinContent(4,98.05856);
   hCCpi0inFV_stack_7->SetBinContent(5,68.55523);
   hCCpi0inFV_stack_7->SetBinContent(6,43.59757);
   hCCpi0inFV_stack_7->SetBinContent(7,29.99957);
   hCCpi0inFV_stack_7->SetBinContent(8,20.13284);
   hCCpi0inFV_stack_7->SetBinContent(9,11.78531);
   hCCpi0inFV_stack_7->SetBinContent(10,7.303828);
   hCCpi0inFV_stack_7->SetBinContent(11,6.605248);
   hCCpi0inFV_stack_7->SetBinContent(12,4.109654);
   hCCpi0inFV_stack_7->SetBinContent(13,2.925871);
   hCCpi0inFV_stack_7->SetBinContent(14,0.9286332);
   hCCpi0inFV_stack_7->SetBinContent(15,1.020533);
   hCCpi0inFV_stack_7->SetBinContent(16,0.536893);
   hCCpi0inFV_stack_7->SetBinContent(17,2.340906);
   hCCpi0inFV_stack_7->SetBinError(1,3.546134);
   hCCpi0inFV_stack_7->SetBinError(2,5.078825);
   hCCpi0inFV_stack_7->SetBinError(3,5.452387);
   hCCpi0inFV_stack_7->SetBinError(4,5.007142);
   hCCpi0inFV_stack_7->SetBinError(5,4.142759);
   hCCpi0inFV_stack_7->SetBinError(6,3.258808);
   hCCpi0inFV_stack_7->SetBinError(7,2.773543);
   hCCpi0inFV_stack_7->SetBinError(8,2.277457);
   hCCpi0inFV_stack_7->SetBinError(9,1.688459);
   hCCpi0inFV_stack_7->SetBinError(10,1.319659);
   hCCpi0inFV_stack_7->SetBinError(11,1.241261);
   hCCpi0inFV_stack_7->SetBinError(12,1.001326);
   hCCpi0inFV_stack_7->SetBinError(13,0.7944806);
   hCCpi0inFV_stack_7->SetBinError(14,0.48078);
   hCCpi0inFV_stack_7->SetBinError(15,0.5892049);
   hCCpi0inFV_stack_7->SetBinError(16,0.3929602);
   hCCpi0inFV_stack_7->SetBinError(17,0.8093475);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_8->SetBinContent(1,44.75748);
   hNCinFV_stack_8->SetBinContent(2,31.53657);
   hNCinFV_stack_8->SetBinContent(3,23.62372);
   hNCinFV_stack_8->SetBinContent(4,18.47123);
   hNCinFV_stack_8->SetBinContent(5,10.78652);
   hNCinFV_stack_8->SetBinContent(6,7.319179);
   hNCinFV_stack_8->SetBinContent(7,5.415421);
   hNCinFV_stack_8->SetBinContent(8,3.032487);
   hNCinFV_stack_8->SetBinContent(9,3.269539);
   hNCinFV_stack_8->SetBinContent(10,2.590875);
   hNCinFV_stack_8->SetBinContent(11,3.374355);
   hNCinFV_stack_8->SetBinContent(12,1.465526);
   hNCinFV_stack_8->SetBinContent(13,0.5352025);
   hNCinFV_stack_8->SetBinContent(14,0.3917402);
   hNCinFV_stack_8->SetBinContent(15,0.6803553);
   hNCinFV_stack_8->SetBinContent(16,0.1967154);
   hNCinFV_stack_8->SetBinContent(17,0.1967154);
   hNCinFV_stack_8->SetBinError(1,3.444256);
   hNCinFV_stack_8->SetBinError(2,2.77586);
   hNCinFV_stack_8->SetBinError(3,2.346916);
   hNCinFV_stack_8->SetBinError(4,2.168324);
   hNCinFV_stack_8->SetBinError(5,1.628327);
   hNCinFV_stack_8->SetBinError(6,1.387272);
   hNCinFV_stack_8->SetBinError(7,1.226051);
   hNCinFV_stack_8->SetBinError(8,0.832162);
   hNCinFV_stack_8->SetBinError(9,0.9413781);
   hNCinFV_stack_8->SetBinError(10,0.8095761);
   hNCinFV_stack_8->SetBinError(11,0.8993757);
   hNCinFV_stack_8->SetBinError(12,0.6209405);
   hNCinFV_stack_8->SetBinError(13,0.3921167);
   hNCinFV_stack_8->SetBinError(14,0.2770047);
   hNCinFV_stack_8->SetBinError(15,0.4810838);
   hNCinFV_stack_8->SetBinError(16,0.1967154);
   hNCinFV_stack_8->SetBinError(17,0.1967154);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_9->SetBinContent(1,112.6624);
   hnumuCCinFV_stack_9->SetBinContent(2,87.54446);
   hnumuCCinFV_stack_9->SetBinContent(3,47.45278);
   hnumuCCinFV_stack_9->SetBinContent(4,38.18332);
   hnumuCCinFV_stack_9->SetBinContent(5,20.74985);
   hnumuCCinFV_stack_9->SetBinContent(6,9.13172);
   hnumuCCinFV_stack_9->SetBinContent(7,6.784132);
   hnumuCCinFV_stack_9->SetBinContent(8,5.146806);
   hnumuCCinFV_stack_9->SetBinContent(9,3.934631);
   hnumuCCinFV_stack_9->SetBinContent(10,0.536893);
   hnumuCCinFV_stack_9->SetBinContent(11,1.176911);
   hnumuCCinFV_stack_9->SetBinContent(12,0.9624805);
   hnumuCCinFV_stack_9->SetBinContent(13,0.4252982);
   hnumuCCinFV_stack_9->SetBinContent(14,0.3934307);
   hnumuCCinFV_stack_9->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_9->SetBinError(1,6.52421);
   hnumuCCinFV_stack_9->SetBinError(2,6.020472);
   hnumuCCinFV_stack_9->SetBinError(3,3.810877);
   hnumuCCinFV_stack_9->SetBinError(4,3.502184);
   hnumuCCinFV_stack_9->SetBinError(5,2.575302);
   hnumuCCinFV_stack_9->SetBinError(6,1.580694);
   hnumuCCinFV_stack_9->SetBinError(7,1.44406);
   hnumuCCinFV_stack_9->SetBinError(8,1.191536);
   hnumuCCinFV_stack_9->SetBinError(9,1.028231);
   hnumuCCinFV_stack_9->SetBinError(10,0.3929602);
   hnumuCCinFV_stack_9->SetBinError(11,0.4804759);
   hnumuCCinFV_stack_9->SetBinError(12,0.4955922);
   hnumuCCinFV_stack_9->SetBinError(13,0.3015743);
   hnumuCCinFV_stack_9->SetBinError(14,0.2781975);
   hnumuCCinFV_stack_9->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_10->SetBinContent(1,6.656484);
   hnueCCinFV_stack_10->SetBinContent(2,5.128695);
   hnueCCinFV_stack_10->SetBinContent(3,2.295725);
   hnueCCinFV_stack_10->SetBinContent(4,1.240429);
   hnueCCinFV_stack_10->SetBinContent(5,1.815979);
   hnueCCinFV_stack_10->SetBinContent(6,1.072095);
   hnueCCinFV_stack_10->SetBinContent(7,0.5867651);
   hnueCCinFV_stack_10->SetBinContent(8,0.5884556);
   hnueCCinFV_stack_10->SetBinContent(9,0.2486649);
   hnueCCinFV_stack_10->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_10->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_10->SetBinError(1,1.985194);
   hnueCCinFV_stack_10->SetBinError(2,1.603318);
   hnueCCinFV_stack_10->SetBinError(3,0.7882676);
   hnueCCinFV_stack_10->SetBinError(4,0.5090713);
   hnueCCinFV_stack_10->SetBinError(5,0.7623532);
   hnueCCinFV_stack_10->SetBinError(6,0.5551335);
   hnueCCinFV_stack_10->SetBinError(7,0.3387718);
   hnueCCinFV_stack_10->SetBinError(8,0.3397478);
   hnueCCinFV_stack_10->SetBinError(9,0.2486649);
   hnueCCinFV_stack_10->SetBinError(11,0.2171002);
   hnueCCinFV_stack_10->SetBinError(12,0.1950249);
   hnueCCinFV_stack_10->SetBinError(13,0.3401776);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__5->SetBinContent(1,533.5302);
   hmcerror__5->SetBinContent(2,782.3989);
   hmcerror__5->SetBinContent(3,719.2344);
   hmcerror__5->SetBinContent(4,524.6735);
   hmcerror__5->SetBinContent(5,326.4548);
   hmcerror__5->SetBinContent(6,200.8073);
   hmcerror__5->SetBinContent(7,129.5964);
   hmcerror__5->SetBinContent(8,84.00668);
   hmcerror__5->SetBinContent(9,50.0215);
   hmcerror__5->SetBinContent(10,32.52712);
   hmcerror__5->SetBinContent(11,22.71362);
   hmcerror__5->SetBinContent(12,13.74834);
   hmcerror__5->SetBinContent(13,7.189724);
   hmcerror__5->SetBinContent(14,4.397592);
   hmcerror__5->SetBinContent(15,4.019298);
   hmcerror__5->SetBinContent(16,2.737807);
   hmcerror__5->SetBinContent(17,5.54015);
   hmcerror__5->SetBinError(1,109.2751);
   hmcerror__5->SetBinError(2,168.0297);
   hmcerror__5->SetBinError(3,159.4752);
   hmcerror__5->SetBinError(4,128.2165);
   hmcerror__5->SetBinError(5,86.10024);
   hmcerror__5->SetBinError(6,53.04824);
   hmcerror__5->SetBinError(7,35.13951);
   hmcerror__5->SetBinError(8,23.98811);
   hmcerror__5->SetBinError(9,17.82528);
   hmcerror__5->SetBinError(10,10.04453);
   hmcerror__5->SetBinError(11,7.92796);
   hmcerror__5->SetBinError(12,6.80755);
   hmcerror__5->SetBinError(13,4.954337);
   hmcerror__5->SetBinError(14,3.352835);
   hmcerror__5->SetBinError(15,2.548925);
   hmcerror__5->SetBinError(16,3.110384);
   hmcerror__5->SetBinError(17,2.883906);
   hmcerror__5->SetEntries(3396.741);

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
   
   Double_t _fx3005[16] = {
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
   Double_t _fy3005[16] = {
   391,
   588,
   530,
   408,
   260,
   173,
   104,
   51,
   42,
   20,
   16,
   12,
   11,
   3,
   5,
   2};
   Double_t _felx3005[16] = {
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
   Double_t _fely3005[16] = {
   19.77372,
   24.24871,
   23.02173,
   20.19901,
   16.12452,
   13.15295,
   10.19804,
   7.2725,
   6.6155,
   4.6266,
   4.1628,
   3.64022,
   3.4975,
   2.143368,
   2.48995,
   2};
   Double_t _fehx3005[16] = {
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
   Double_t _fehy3005[16] = {
   19.77372,
   24.24871,
   23.02173,
   20.19901,
   16.12452,
   13.15295,
   10.19804,
   7.0686,
   6.4104,
   4.4133,
   3.9454,
   3.4155,
   3.27,
   1.72422,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(673.4736);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2616.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.1","F");

   ci = 1445;
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

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1764.3","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 564.6","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.4","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[16] = {
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
   Double_t _fy3006[16] = {
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
   Double_t _felx3006[16] = {
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
   Double_t _fely3006[16] = {
   0.2048151,
   0.2147622,
   0.2217291,
   0.2443739,
   0.2637432,
   0.2641749,
   0.2711458,
   0.28555,
   0.3563524,
   0.3088049,
   0.34904,
   0.4951543,
   0.6890859,
   0.7624253,
   0.6341717,
   1.136086};
   Double_t _fehx3006[16] = {
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
   Double_t _fehy3006[16] = {
   0.2048151,
   0.2147622,
   0.2217291,
   0.2443739,
   0.2637432,
   0.2641749,
   0.2711458,
   0.28555,
   0.3563524,
   0.3088049,
   0.34904,
   0.4951543,
   0.6890859,
   0.7624253,
   0.6341717,
   1.136086};
   grae = new TGraphAsymmErrors(16,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[16] = {
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
   Double_t _fy3007[16] = {
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
   Double_t _felx3007[16] = {
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
   Double_t _fely3007[16] = {
   0.189627,
   0.2070675,
   0.2151696,
   0.2272054,
   0.2438484,
   0.2399038,
   0.2365195,
   0.2499438,
   0.2562358,
   0.2369584,
   0.2519455,
   0.2535535,
   0.3224201,
   0.3669167,
   0.3820418,
   0.4121658};
   Double_t _fehx3007[16] = {
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
   Double_t _fehy3007[16] = {
   0.189627,
   0.2070675,
   0.2151696,
   0.2272054,
   0.2438484,
   0.2399038,
   0.2365195,
   0.2499438,
   0.2562358,
   0.2369584,
   0.2519455,
   0.2535535,
   0.3224201,
   0.3669167,
   0.3820418,
   0.4121658};
   grae = new TGraphAsymmErrors(16,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,440);
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
   
   Double_t _fx3008[16] = {
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
   Double_t _fy3008[16] = {
   0.7328545,
   0.7515348,
   0.7368947,
   0.7776264,
   0.7964349,
   0.8615227,
   0.8024916,
   0.6070946,
   0.839639,
   0.6148716,
   0.7044233,
   0.8728327,
   1.529961,
   0.6821916,
   1.243998,
   0.7305118};
   Double_t _felx3008[16] = {
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
   Double_t _fely3008[16] = {
   0.03706204,
   0.03099277,
   0.03200866,
   0.03849825,
   0.0493928,
   0.06550036,
   0.07869077,
   0.08657049,
   0.1322531,
   0.1422382,
   0.1832733,
   0.2647752,
   0.4864582,
   0.4873959,
   0.6194988,
   0.7305118};
   Double_t _fehx3008[16] = {
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
   Double_t _fehy3008[16] = {
   0.03706204,
   0.03099277,
   0.03200866,
   0.03849825,
   0.0493928,
   0.06550036,
   0.07869077,
   0.08414331,
   0.1281529,
   0.1356806,
   0.173702,
   0.24843,
   0.4548158,
   0.3920828,
   0.5500065,
   0.5548858};
   grae = new TGraphAsymmErrors(16,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.183255);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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

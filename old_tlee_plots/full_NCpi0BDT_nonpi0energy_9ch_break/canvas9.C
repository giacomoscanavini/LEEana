#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Jun  8 11:41:06 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
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
   pad1->Range(-342.3077,-1.44,1260.256,159.2337);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__25->SetBinContent(0,0.1967154);
   hmc__25->SetBinContent(1,0.4623989);
   hmc__25->SetBinContent(3,1.116389);
   hmc__25->SetBinContent(4,8.364684);
   hmc__25->SetBinContent(5,34.5099);
   hmc__25->SetBinContent(6,68.51797);
   hmc__25->SetBinContent(7,57.86763);
   hmc__25->SetBinContent(8,61.41533);
   hmc__25->SetBinContent(9,60.04389);
   hmc__25->SetBinContent(10,59.35353);
   hmc__25->SetBinContent(11,50.63908);
   hmc__25->SetBinContent(12,43.88109);
   hmc__25->SetBinContent(13,47.72446);
   hmc__25->SetBinContent(14,30.14883);
   hmc__25->SetBinContent(15,33.49459);
   hmc__25->SetBinContent(16,23.5672);
   hmc__25->SetBinContent(17,22.45052);
   hmc__25->SetBinContent(18,13.57853);
   hmc__25->SetBinContent(19,15.299);
   hmc__25->SetBinContent(20,10.29036);
   hmc__25->SetBinContent(21,5.951551);
   hmc__25->SetBinContent(22,6.699818);
   hmc__25->SetBinContent(23,6.181181);
   hmc__25->SetBinContent(24,4.61692);
   hmc__25->SetBinContent(25,3.603223);
   hmc__25->SetBinContent(26,30.51115);
   hmc__25->SetBinError(0,0.1967154);
   hmc__25->SetBinError(1,0.5896435);
   hmc__25->SetBinError(2,0.3895343);
   hmc__25->SetBinError(3,1.548933);
   hmc__25->SetBinError(4,2.724922);
   hmc__25->SetBinError(5,8.699313);
   hmc__25->SetBinError(6,18.55135);
   hmc__25->SetBinError(7,15.51908);
   hmc__25->SetBinError(8,16.23641);
   hmc__25->SetBinError(9,14.04047);
   hmc__25->SetBinError(10,16.69621);
   hmc__25->SetBinError(11,12.69793);
   hmc__25->SetBinError(12,13.78758);
   hmc__25->SetBinError(13,16.26927);
   hmc__25->SetBinError(14,9.536581);
   hmc__25->SetBinError(15,12.1923);
   hmc__25->SetBinError(16,7.402321);
   hmc__25->SetBinError(17,7.967163);
   hmc__25->SetBinError(18,6.384045);
   hmc__25->SetBinError(19,5.524803);
   hmc__25->SetBinError(20,7.132298);
   hmc__25->SetBinError(21,5.491141);
   hmc__25->SetBinError(22,5.054301);
   hmc__25->SetBinError(23,4.077996);
   hmc__25->SetBinError(24,3.865183);
   hmc__25->SetBinError(25,3.394585);
   hmc__25->SetBinError(26,14.70461);
   hmc__25->SetMinimum(-1.44);
   hmc__25->SetMaximum(151.2);
   hmc__25->SetEntries(684.3796);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-150,1100);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(71.94387);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,1.234824);
   hbadmatch_stack_1->SetBinContent(7,1.869591);
   hbadmatch_stack_1->SetBinContent(8,1.431781);
   hbadmatch_stack_1->SetBinContent(9,2.022191);
   hbadmatch_stack_1->SetBinContent(10,1.805704);
   hbadmatch_stack_1->SetBinContent(11,2.585094);
   hbadmatch_stack_1->SetBinContent(12,1.713804);
   hbadmatch_stack_1->SetBinContent(13,2.834167);
   hbadmatch_stack_1->SetBinContent(14,0.7204499);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,1.318106);
   hbadmatch_stack_1->SetBinContent(18,0.5867651);
   hbadmatch_stack_1->SetBinContent(19,0.9269427);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.5640803);
   hbadmatch_stack_1->SetBinContent(24,0.5352025);
   hbadmatch_stack_1->SetBinContent(26,0.5352025);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.5631118);
   hbadmatch_stack_1->SetBinError(7,0.7413113);
   hbadmatch_stack_1->SetBinError(8,0.5423093);
   hbadmatch_stack_1->SetBinError(9,0.8681008);
   hbadmatch_stack_1->SetBinError(10,0.7080169);
   hbadmatch_stack_1->SetBinError(11,0.7595106);
   hbadmatch_stack_1->SetBinError(12,0.6207051);
   hbadmatch_stack_1->SetBinError(13,0.888663);
   hbadmatch_stack_1->SetBinError(14,0.4163992);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.6816532);
   hbadmatch_stack_1->SetBinError(18,0.3387718);
   hbadmatch_stack_1->SetBinError(19,0.4800908);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.4072508);
   hbadmatch_stack_1->SetBinError(24,0.3921167);
   hbadmatch_stack_1->SetBinError(26,0.3921167);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(4,3.215251);
   hext_stack_2->SetBinContent(5,3.297453);
   hext_stack_2->SetBinContent(6,10.85837);
   hext_stack_2->SetBinContent(7,3.15182);
   hext_stack_2->SetBinContent(8,2.834603);
   hext_stack_2->SetBinContent(9,5.765768);
   hext_stack_2->SetBinContent(10,5.001641);
   hext_stack_2->SetBinContent(11,3.807795);
   hext_stack_2->SetBinContent(12,2.916804);
   hext_stack_2->SetBinContent(13,9.257925);
   hext_stack_2->SetBinContent(14,4.759445);
   hext_stack_2->SetBinContent(15,6.78085);
   hext_stack_2->SetBinContent(16,4.460999);
   hext_stack_2->SetBinContent(17,2.827422);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(19,3.297453);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.9660115);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,2.103607);
   hext_stack_2->SetBinContent(24,0.973192);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,8.940708);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(4,1.36277);
   hext_stack_2->SetBinError(5,1.384641);
   hext_stack_2->SetBinError(6,2.503716);
   hext_stack_2->SetBinError(7,1.23684);
   hext_stack_2->SetBinError(8,1.106046);
   hext_stack_2->SetBinError(9,1.450642);
   hext_stack_2->SetBinError(10,1.582242);
   hext_stack_2->SetBinError(11,1.24058);
   hext_stack_2->SetBinError(12,1.132884);
   hext_stack_2->SetBinError(13,2.266897);
   hext_stack_2->SetBinError(14,1.567911);
   hext_stack_2->SetBinError(15,1.830584);
   hext_stack_2->SetBinError(16,1.372818);
   hext_stack_2->SetBinError(17,1.193541);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(19,1.384641);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.7189592);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.9761052);
   hext_stack_2->SetBinError(24,0.5618727);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,2.198269);
   hext_stack_2->SetEntries(193);

   ci = 1547;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(5,0.5269295);
   hdirt_stack_3->SetBinContent(6,0.9235492);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,0.4762587);
   hdirt_stack_3->SetBinContent(9,0.2620035);
   hdirt_stack_3->SetBinContent(10,0.140423);
   hdirt_stack_3->SetBinContent(11,0.5529928);
   hdirt_stack_3->SetBinContent(12,0.7390785);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(5,0.3725988);
   hdirt_stack_3->SetBinError(6,0.5681606);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.3652866);
   hdirt_stack_3->SetBinError(9,0.2620035);
   hdirt_stack_3->SetBinError(10,0.1380915);
   hdirt_stack_3->SetBinError(11,0.437291);
   hdirt_stack_3->SetBinError(12,0.4500095);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(19);

   ci = 1548;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(3,0.2153807);
   houtFV_stack_4->SetBinContent(4,1.513708);
   houtFV_stack_4->SetBinContent(5,7.557873);
   houtFV_stack_4->SetBinContent(6,12.62641);
   houtFV_stack_4->SetBinContent(7,10.37869);
   houtFV_stack_4->SetBinContent(8,11.17146);
   houtFV_stack_4->SetBinContent(9,8.298594);
   houtFV_stack_4->SetBinContent(10,9.1805);
   houtFV_stack_4->SetBinContent(11,10.20104);
   houtFV_stack_4->SetBinContent(12,8.448565);
   houtFV_stack_4->SetBinContent(13,10.77005);
   houtFV_stack_4->SetBinContent(14,6.504462);
   houtFV_stack_4->SetBinContent(15,5.66708);
   houtFV_stack_4->SetBinContent(16,3.267849);
   houtFV_stack_4->SetBinContent(17,3.322793);
   houtFV_stack_4->SetBinContent(18,2.587494);
   houtFV_stack_4->SetBinContent(19,2.60193);
   houtFV_stack_4->SetBinContent(20,1.073786);
   houtFV_stack_4->SetBinContent(21,1.121968);
   houtFV_stack_4->SetBinContent(22,1.412273);
   houtFV_stack_4->SetBinContent(23,0.5884556);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,0.5901461);
   houtFV_stack_4->SetBinContent(26,1.463836);
   houtFV_stack_4->SetBinError(3,0.2153807);
   houtFV_stack_4->SetBinError(4,0.5875827);
   houtFV_stack_4->SetBinError(5,1.465978);
   houtFV_stack_4->SetBinError(6,1.781583);
   houtFV_stack_4->SetBinError(7,1.626148);
   houtFV_stack_4->SetBinError(8,1.647217);
   houtFV_stack_4->SetBinError(9,1.33407);
   houtFV_stack_4->SetBinError(10,1.45368);
   houtFV_stack_4->SetBinError(11,1.611794);
   houtFV_stack_4->SetBinError(12,1.46204);
   houtFV_stack_4->SetBinError(13,1.737117);
   houtFV_stack_4->SetBinError(14,1.296707);
   houtFV_stack_4->SetBinError(15,1.226472);
   houtFV_stack_4->SetBinError(16,0.9410263);
   houtFV_stack_4->SetBinError(17,0.9207963);
   houtFV_stack_4->SetBinError(18,0.8087577);
   houtFV_stack_4->SetBinError(19,0.8615894);
   houtFV_stack_4->SetBinError(20,0.5557297);
   houtFV_stack_4->SetBinError(21,0.5181909);
   houtFV_stack_4->SetBinError(22,0.6510715);
   houtFV_stack_4->SetBinError(23,0.3397478);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,0.340721);
   houtFV_stack_4->SetBinError(26,0.620407);
   houtFV_stack_4->SetEntries(520);

   ci = 1549;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1550;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1551;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.133194);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.52807);
   hNCpi0inFVres_stack_7->SetBinContent(6,21.39608);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.65764);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.39298);
   hNCpi0inFVres_stack_7->SetBinContent(9,15.14062);
   hNCpi0inFVres_stack_7->SetBinContent(10,15.12434);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.45989);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.523303);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.206786);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.329901);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.142338);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.219142);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.497062);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.074154);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.519394);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.744426);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.4042178);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.046422);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.4467362);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.5996859);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4376721);
   hNCpi0inFVres_stack_7->SetBinError(5,1.193286);
   hNCpi0inFVres_stack_7->SetBinError(6,1.54882);
   hNCpi0inFVres_stack_7->SetBinError(7,1.58531);
   hNCpi0inFVres_stack_7->SetBinError(8,1.386734);
   hNCpi0inFVres_stack_7->SetBinError(9,1.229432);
   hNCpi0inFVres_stack_7->SetBinError(10,1.248334);
   hNCpi0inFVres_stack_7->SetBinError(11,1.101383);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7610166);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8783784);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4620406);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6764972);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6116882);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5352198);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3197389);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4176504);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5019466);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1342881);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3663515);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2792353);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(26,0.237152);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1552;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.522634);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.628016);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.40332);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.097748);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.33207);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.197642);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.719766);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.177456);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.008144);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.33904);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.46409);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9627222);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.046422);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.864572);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.8222219);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5120536);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6650376);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.655953);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6282725);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5918536);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.710955);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5821848);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5774855);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4626733);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3861776);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3558418);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3631504);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3663515);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3211561);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2756104);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1553;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1554;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(3,0.536893);
   hCCpi0inFV_stack_11->SetBinContent(4,0.536893);
   hCCpi0inFV_stack_11->SetBinContent(5,1.65886);
   hCCpi0inFV_stack_11->SetBinContent(6,3.718939);
   hCCpi0inFV_stack_11->SetBinContent(7,6.65343);
   hCCpi0inFV_stack_11->SetBinContent(8,10.08338);
   hCCpi0inFV_stack_11->SetBinContent(9,12.56668);
   hCCpi0inFV_stack_11->SetBinContent(10,12.48743);
   hCCpi0inFV_stack_11->SetBinContent(11,11.25712);
   hCCpi0inFV_stack_11->SetBinContent(12,10.83249);
   hCCpi0inFV_stack_11->SetBinContent(13,10.84511);
   hCCpi0inFV_stack_11->SetBinContent(14,8.86684);
   hCCpi0inFV_stack_11->SetBinContent(15,10.10963);
   hCCpi0inFV_stack_11->SetBinContent(16,6.905941);
   hCCpi0inFV_stack_11->SetBinContent(17,9.024961);
   hCCpi0inFV_stack_11->SetBinContent(18,4.736743);
   hCCpi0inFV_stack_11->SetBinContent(19,4.313594);
   hCCpi0inFV_stack_11->SetBinContent(20,5.610779);
   hCCpi0inFV_stack_11->SetBinContent(21,2.000729);
   hCCpi0inFV_stack_11->SetBinContent(22,2.144191);
   hCCpi0inFV_stack_11->SetBinContent(23,2.002419);
   hCCpi0inFV_stack_11->SetBinContent(24,1.123658);
   hCCpi0inFV_stack_11->SetBinContent(25,1.460455);
   hCCpi0inFV_stack_11->SetBinContent(26,12.59934);
   hCCpi0inFV_stack_11->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(3,0.3929602);
   hCCpi0inFV_stack_11->SetBinError(4,0.3929602);
   hCCpi0inFV_stack_11->SetBinError(5,0.650338);
   hCCpi0inFV_stack_11->SetBinError(6,1.003077);
   hCCpi0inFV_stack_11->SetBinError(7,1.224915);
   hCCpi0inFV_stack_11->SetBinError(8,1.641647);
   hCCpi0inFV_stack_11->SetBinError(9,1.82092);
   hCCpi0inFV_stack_11->SetBinError(10,1.813857);
   hCCpi0inFV_stack_11->SetBinError(11,1.619898);
   hCCpi0inFV_stack_11->SetBinError(12,1.61084);
   hCCpi0inFV_stack_11->SetBinError(13,1.671673);
   hCCpi0inFV_stack_11->SetBinError(14,1.395544);
   hCCpi0inFV_stack_11->SetBinError(15,1.637517);
   hCCpi0inFV_stack_11->SetBinError(16,1.387685);
   hCCpi0inFV_stack_11->SetBinError(17,1.527553);
   hCCpi0inFV_stack_11->SetBinError(18,1.094199);
   hCCpi0inFV_stack_11->SetBinError(19,1.051498);
   hCCpi0inFV_stack_11->SetBinError(20,1.1848);
   hCCpi0inFV_stack_11->SetBinError(21,0.7343859);
   hCCpi0inFV_stack_11->SetBinError(22,0.7850774);
   hCCpi0inFV_stack_11->SetBinError(23,0.7348366);
   hCCpi0inFV_stack_11->SetBinError(24,0.5188295);
   hCCpi0inFV_stack_11->SetBinError(25,0.6193387);
   hCCpi0inFV_stack_11->SetBinError(26,1.793689);
   hCCpi0inFV_stack_11->SetEntries(647);

   ci = 1556;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(4,0.1967154);
   hNCinFV_stack_12->SetBinContent(5,0.3934307);
   hNCinFV_stack_12->SetBinContent(6,2.145881);
   hNCinFV_stack_12->SetBinContent(7,2.589184);
   hNCinFV_stack_12->SetBinContent(8,2.105544);
   hNCinFV_stack_12->SetBinContent(9,1.513708);
   hNCinFV_stack_12->SetBinContent(11,1.073786);
   hNCinFV_stack_12->SetBinContent(12,1.270501);
   hNCinFV_stack_12->SetBinContent(13,0.785171);
   hNCinFV_stack_12->SetBinContent(14,0.9269427);
   hNCinFV_stack_12->SetBinContent(15,0.1950248);
   hNCinFV_stack_12->SetBinContent(16,0.1967154);
   hNCinFV_stack_12->SetBinContent(17,0.5352025);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinContent(20,0.3871285);
   hNCinFV_stack_12->SetBinContent(22,1.020533);
   hNCinFV_stack_12->SetBinContent(26,1.073786);
   hNCinFV_stack_12->SetBinError(4,0.1967154);
   hNCinFV_stack_12->SetBinError(5,0.2781975);
   hNCinFV_stack_12->SetBinError(6,0.785499);
   hNCinFV_stack_12->SetBinError(7,0.809167);
   hNCinFV_stack_12->SetBinError(8,0.6797106);
   hNCinFV_stack_12->SetBinError(9,0.5875827);
   hNCinFV_stack_12->SetBinError(11,0.5557297);
   hNCinFV_stack_12->SetBinError(12,0.5895188);
   hNCinFV_stack_12->SetBinError(13,0.3925882);
   hNCinFV_stack_12->SetBinError(14,0.4800908);
   hNCinFV_stack_12->SetBinError(15,0.1950249);
   hNCinFV_stack_12->SetBinError(16,0.1967154);
   hNCinFV_stack_12->SetBinError(17,0.3921167);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetBinError(20,0.3434024);
   hNCinFV_stack_12->SetBinError(22,0.5892049);
   hNCinFV_stack_12->SetBinError(26,0.5557297);
   hNCinFV_stack_12->SetEntries(70);

   ci = 1557;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(4,0.4622982);
   hnumuCCinFV_stack_13->SetBinContent(5,4.091772);
   hnumuCCinFV_stack_13->SetBinContent(6,11.38985);
   hnumuCCinFV_stack_13->SetBinContent(7,7.608839);
   hnumuCCinFV_stack_13->SetBinContent(8,9.483379);
   hnumuCCinFV_stack_13->SetBinContent(9,10.75565);
   hnumuCCinFV_stack_13->SetBinContent(10,10.00908);
   hnumuCCinFV_stack_13->SetBinContent(11,7.488306);
   hnumuCCinFV_stack_13->SetBinContent(12,7.512672);
   hnumuCCinFV_stack_13->SetBinContent(13,4.736689);
   hnumuCCinFV_stack_13->SetBinContent(14,3.604431);
   hnumuCCinFV_stack_13->SetBinContent(15,4.37407);
   hnumuCCinFV_stack_13->SetBinContent(16,3.197331);
   hnumuCCinFV_stack_13->SetBinContent(17,1.697725);
   hnumuCCinFV_stack_13->SetBinContent(18,2.014292);
   hnumuCCinFV_stack_13->SetBinContent(19,1.915845);
   hnumuCCinFV_stack_13->SetBinContent(20,0.4916978);
   hnumuCCinFV_stack_13->SetBinContent(21,0.9286332);
   hnumuCCinFV_stack_13->SetBinContent(22,0.4436859);
   hnumuCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(24,0.4297273);
   hnumuCCinFV_stack_13->SetBinContent(26,3.12392);
   hnumuCCinFV_stack_13->SetBinError(3,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(4,0.3270282);
   hnumuCCinFV_stack_13->SetBinError(5,1.115125);
   hnumuCCinFV_stack_13->SetBinError(6,2.172364);
   hnumuCCinFV_stack_13->SetBinError(7,1.664283);
   hnumuCCinFV_stack_13->SetBinError(8,1.708016);
   hnumuCCinFV_stack_13->SetBinError(9,2.09381);
   hnumuCCinFV_stack_13->SetBinError(10,1.811062);
   hnumuCCinFV_stack_13->SetBinError(11,1.607009);
   hnumuCCinFV_stack_13->SetBinError(12,1.73177);
   hnumuCCinFV_stack_13->SetBinError(13,1.128067);
   hnumuCCinFV_stack_13->SetBinError(14,1.306585);
   hnumuCCinFV_stack_13->SetBinError(15,1.0918);
   hnumuCCinFV_stack_13->SetBinError(16,0.9190164);
   hnumuCCinFV_stack_13->SetBinError(17,0.7285859);
   hnumuCCinFV_stack_13->SetBinError(18,0.7785078);
   hnumuCCinFV_stack_13->SetBinError(19,0.8144799);
   hnumuCCinFV_stack_13->SetBinError(20,0.3479216);
   hnumuCCinFV_stack_13->SetBinError(21,0.48078);
   hnumuCCinFV_stack_13->SetBinError(22,0.3157394);
   hnumuCCinFV_stack_13->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(24,0.4297273);
   hnumuCCinFV_stack_13->SetBinError(26,0.9406754);
   hnumuCCinFV_stack_13->SetEntries(361);

   ci = 1558;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(6,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(8,1.766401);
   hnueCCinFV_stack_14->SetBinContent(9,0.2192101);
   hnueCCinFV_stack_14->SetBinContent(10,1.071798);
   hnueCCinFV_stack_14->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(12,0.6212033);
   hnueCCinFV_stack_14->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,0.1529246);
   hnueCCinFV_stack_14->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(26,1.352455);
   hnueCCinFV_stack_14->SetBinError(6,0.2331833);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(8,1.581964);
   hnueCCinFV_stack_14->SetBinError(9,0.2192101);
   hnueCCinFV_stack_14->SetBinError(10,0.5626565);
   hnueCCinFV_stack_14->SetBinError(11,0.3401776);
   hnueCCinFV_stack_14->SetBinError(12,0.4587285);
   hnueCCinFV_stack_14->SetBinError(13,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,0.1529246);
   hnueCCinFV_stack_14->SetBinError(19,0.2502081);
   hnueCCinFV_stack_14->SetBinError(26,1.173746);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1559;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__26->SetBinContent(0,0.1967154);
   hmcerror__26->SetBinContent(1,0.4623989);
   hmcerror__26->SetBinContent(3,1.116389);
   hmcerror__26->SetBinContent(4,8.364684);
   hmcerror__26->SetBinContent(5,34.5099);
   hmcerror__26->SetBinContent(6,68.51797);
   hmcerror__26->SetBinContent(7,57.86763);
   hmcerror__26->SetBinContent(8,61.41533);
   hmcerror__26->SetBinContent(9,60.04389);
   hmcerror__26->SetBinContent(10,59.35353);
   hmcerror__26->SetBinContent(11,50.63908);
   hmcerror__26->SetBinContent(12,43.88109);
   hmcerror__26->SetBinContent(13,47.72446);
   hmcerror__26->SetBinContent(14,30.14883);
   hmcerror__26->SetBinContent(15,33.49459);
   hmcerror__26->SetBinContent(16,23.5672);
   hmcerror__26->SetBinContent(17,22.45052);
   hmcerror__26->SetBinContent(18,13.57853);
   hmcerror__26->SetBinContent(19,15.299);
   hmcerror__26->SetBinContent(20,10.29036);
   hmcerror__26->SetBinContent(21,5.951551);
   hmcerror__26->SetBinContent(22,6.699818);
   hmcerror__26->SetBinContent(23,6.181181);
   hmcerror__26->SetBinContent(24,4.61692);
   hmcerror__26->SetBinContent(25,3.603223);
   hmcerror__26->SetBinContent(26,30.51115);
   hmcerror__26->SetBinError(0,0.1967154);
   hmcerror__26->SetBinError(1,0.5896435);
   hmcerror__26->SetBinError(2,0.3895343);
   hmcerror__26->SetBinError(3,1.548933);
   hmcerror__26->SetBinError(4,2.724922);
   hmcerror__26->SetBinError(5,8.699313);
   hmcerror__26->SetBinError(6,18.55135);
   hmcerror__26->SetBinError(7,15.51908);
   hmcerror__26->SetBinError(8,16.23641);
   hmcerror__26->SetBinError(9,14.04047);
   hmcerror__26->SetBinError(10,16.69621);
   hmcerror__26->SetBinError(11,12.69793);
   hmcerror__26->SetBinError(12,13.78758);
   hmcerror__26->SetBinError(13,16.26927);
   hmcerror__26->SetBinError(14,9.536581);
   hmcerror__26->SetBinError(15,12.1923);
   hmcerror__26->SetBinError(16,7.402321);
   hmcerror__26->SetBinError(17,7.967163);
   hmcerror__26->SetBinError(18,6.384045);
   hmcerror__26->SetBinError(19,5.524803);
   hmcerror__26->SetBinError(20,7.132298);
   hmcerror__26->SetBinError(21,5.491141);
   hmcerror__26->SetBinError(22,5.054301);
   hmcerror__26->SetBinError(23,4.077996);
   hmcerror__26->SetBinError(24,3.865183);
   hmcerror__26->SetBinError(25,3.394585);
   hmcerror__26->SetBinError(26,14.70461);
   hmcerror__26->SetEntries(684.3796);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3033[25] = {
   0,
   0,
   0,
   3,
   25,
   47,
   53,
   72,
   59,
   56,
   40,
   47,
   33,
   22,
   20,
   20,
   17,
   16,
   8,
   5,
   9,
   4,
   5,
   3,
   1};
   Double_t _felx3033[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3033[25] = {
   0,
   0,
   0,
   2.143368,
   5.1474,
   6.9882,
   7.4105,
   8.6108,
   7.8097,
   7.6127,
   6.4604,
   6.9882,
   5.8847,
   4.8417,
   4.6266,
   4.6266,
   4.2835,
   4.1628,
   3.0307,
   2.48995,
   3.19354,
   2.29683,
   2.48995,
   2.143368,
   1};
   Double_t _fehx3033[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3033[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.72422,
   4.9374,
   6.7839,
   7.2068,
   8.4085,
   7.6066,
   7.4094,
   6.2549,
   6.7839,
   5.6776,
   4.6299,
   4.4133,
   4.4133,
   4.0673,
   3.9454,
   2.7896,
   2.21064,
   2.9582,
   1.98186,
   2.21064,
   1.72422,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-275,1225);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(88.44935);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 565.0","lp");
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

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 79.5","F");

   ci = 1547;
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

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 119.8","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1550;
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

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  150.7","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.1","F");

   ci = 1553;
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

   ci = 1554;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 139.5","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 15.5","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 93.0","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3034[25] = {
   1.275184,
   0,
   1.387449,
   0.325765,
   0.2520817,
   0.2707516,
   0.2681824,
   0.2643706,
   0.2338368,
   0.2813011,
   0.2507537,
   0.3142033,
   0.3408999,
   0.3163168,
   0.3640082,
   0.3140942,
   0.3548765,
   0.4701574,
   0.3611218,
   0.6931046,
   0.9226402,
   0.7543939,
   0.6597438,
   0.8371779,
   0.942097};
   Double_t _fehx3034[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3034[25] = {
   1.275184,
   0,
   1.387449,
   0.325765,
   0.2520817,
   0.2707516,
   0.2681824,
   0.2643706,
   0.2338368,
   0.2813011,
   0.2507537,
   0.3142033,
   0.3408999,
   0.3163168,
   0.3640082,
   0.3140942,
   0.3548765,
   0.4701574,
   0.3611218,
   0.6931046,
   0.9226402,
   0.7543939,
   0.6597438,
   0.8371779,
   0.942097};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-275,1225);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3035[25] = {
   1.263558,
   0,
   0.6383314,
   0.2464072,
   0.2154338,
   0.1993123,
   0.2287597,
   0.2124142,
   0.201723,
   0.2266565,
   0.197426,
   0.2144029,
   0.1837477,
   0.209789,
   0.2103428,
   0.2243196,
   0.2345207,
   0.2409834,
   0.2481568,
   0.330041,
   0.2986613,
   0.4488021,
   0.2925748,
   0.3450013,
   0.3518455};
   Double_t _fehx3035[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3035[25] = {
   1.263558,
   0,
   0.6383314,
   0.2464072,
   0.2154338,
   0.1993123,
   0.2287597,
   0.2124142,
   0.201723,
   0.2266565,
   0.197426,
   0.2144029,
   0.1837477,
   0.209789,
   0.2103428,
   0.2243196,
   0.2345207,
   0.2409834,
   0.2481568,
   0.330041,
   0.2986613,
   0.4488021,
   0.2925748,
   0.3450013,
   0.3518455};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-275,1225);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3036[25] = {
   0,
   10,
   0,
   0.3586507,
   0.7244299,
   0.6859514,
   0.9158834,
   1.172346,
   0.9826145,
   0.9434991,
   0.7899038,
   1.071076,
   0.6914693,
   0.7297132,
   0.5971114,
   0.8486371,
   0.7572208,
   1.178331,
   0.5229099,
   0.4858915,
   1.512211,
   0.5970312,
   0.8089068,
   0.6497839,
   0.2775293};
   Double_t _felx3036[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3036[25] = {
   0,
   0,
   0,
   0.2562402,
   0.1491572,
   0.1019908,
   0.1280595,
   0.140206,
   0.1300665,
   0.1282603,
   0.1275774,
   0.1592531,
   0.1233057,
   0.1605933,
   0.1381298,
   0.1963152,
   0.1907974,
   0.3065722,
   0.1980979,
   0.2419691,
   0.5365895,
   0.3428198,
   0.4028275,
   0.464242,
   0.2775293};
   Double_t _fehx3036[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3036[25] = {
   2.482273,
   0,
   1.028136,
   0.2061309,
   0.143072,
   0.09900906,
   0.1245394,
   0.1369121,
   0.126684,
   0.124835,
   0.1235192,
   0.1545973,
   0.1189662,
   0.1535681,
   0.1317616,
   0.1872645,
   0.1811673,
   0.2905617,
   0.1823387,
   0.2148262,
   0.4970469,
   0.2958081,
   0.3576404,
   0.3734568,
   0.3773594};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-275,1225);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

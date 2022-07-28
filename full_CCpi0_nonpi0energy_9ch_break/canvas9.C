#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Jun  8 17:52:20 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
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
   pad1->Range(-342.3077,-5.499026,1260.256,608.0766);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__25->SetBinContent(0,638.6851);
   hmc__25->SetBinContent(1,0.9818863);
   hmc__25->SetBinContent(2,1.465526);
   hmc__25->SetBinContent(3,3.70508);
   hmc__25->SetBinContent(4,16.57939);
   hmc__25->SetBinContent(5,117.0725);
   hmc__25->SetBinContent(6,218.0977);
   hmc__25->SetBinContent(7,260.345);
   hmc__25->SetBinContent(8,258.7892);
   hmc__25->SetBinContent(9,274.9513);
   hmc__25->SetBinContent(10,253.8073);
   hmc__25->SetBinContent(11,239.597);
   hmc__25->SetBinContent(12,212.5848);
   hmc__25->SetBinContent(13,180.0255);
   hmc__25->SetBinContent(14,159.3014);
   hmc__25->SetBinContent(15,136.2471);
   hmc__25->SetBinContent(16,104.1806);
   hmc__25->SetBinContent(17,92.19729);
   hmc__25->SetBinContent(18,74.6027);
   hmc__25->SetBinContent(19,68.18875);
   hmc__25->SetBinContent(20,54.1558);
   hmc__25->SetBinContent(21,48.44597);
   hmc__25->SetBinContent(22,44.30713);
   hmc__25->SetBinContent(23,34.88041);
   hmc__25->SetBinContent(24,23.48494);
   hmc__25->SetBinContent(25,22.09897);
   hmc__25->SetBinContent(26,145.0215);
   hmc__25->SetBinError(0,13.7059);
   hmc__25->SetBinError(1,0.7180388);
   hmc__25->SetBinError(2,3.378886);
   hmc__25->SetBinError(3,5.072973);
   hmc__25->SetBinError(4,10.24968);
   hmc__25->SetBinError(5,44.2846);
   hmc__25->SetBinError(6,79.01855);
   hmc__25->SetBinError(7,87.08611);
   hmc__25->SetBinError(8,85.74364);
   hmc__25->SetBinError(9,89.9924);
   hmc__25->SetBinError(10,77.11005);
   hmc__25->SetBinError(11,71.77074);
   hmc__25->SetBinError(12,68.26371);
   hmc__25->SetBinError(13,72.28721);
   hmc__25->SetBinError(14,51.27068);
   hmc__25->SetBinError(15,45.5277);
   hmc__25->SetBinError(16,36.63582);
   hmc__25->SetBinError(17,32.90859);
   hmc__25->SetBinError(18,28.65656);
   hmc__25->SetBinError(19,35.75475);
   hmc__25->SetBinError(20,26.07565);
   hmc__25->SetBinError(21,22.86826);
   hmc__25->SetBinError(22,20.86306);
   hmc__25->SetBinError(23,16.20151);
   hmc__25->SetBinError(24,13.86556);
   hmc__25->SetBinError(25,13.33721);
   hmc__25->SetBinError(26,44.98935);
   hmc__25->SetMinimum(-5.499026);
   hmc__25->SetMaximum(577.3978);
   hmc__25->SetEntries(3636.854);
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
   hs9_stack_9->SetMinimum(-1.545644e-08);
   hs9_stack_9->SetMaximum(288.6989);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,7.836802);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,0.9452692);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.7319179);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.4271187);
   hbadmatch_stack_1->SetBinContent(11,0.536893);
   hbadmatch_stack_1->SetBinContent(12,1.007154);
   hbadmatch_stack_1->SetBinContent(13,0.9269427);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,1.608988);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.2257022);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.4011598);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(0,1.441618);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.5667353);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.438694);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.3029565);
   hbadmatch_stack_1->SetBinError(11,0.3929602);
   hbadmatch_stack_1->SetBinError(12,0.5392005);
   hbadmatch_stack_1->SetBinError(13,0.4800908);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.6801404);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.2257022);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.4011598);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
   hbadmatch_stack_1->SetEntries(72);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,18.35705);
   hext_stack_2->SetBinContent(4,0.7309963);
   hext_stack_2->SetBinContent(5,1.290409);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,1.704188);
   hext_stack_2->SetBinContent(8,1.697008);
   hext_stack_2->SetBinContent(9,4.270645);
   hext_stack_2->SetBinContent(10,4.435048);
   hext_stack_2->SetBinContent(11,5.814838);
   hext_stack_2->SetBinContent(12,5.166044);
   hext_stack_2->SetBinContent(13,2.916804);
   hext_stack_2->SetBinContent(14,6.519885);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,1.614806);
   hext_stack_2->SetBinContent(17,1.544194);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,4.263464);
   hext_stack_2->SetBinContent(20,1.544194);
   hext_stack_2->SetBinContent(21,3.297453);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,2.510206);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,11.91376);
   hext_stack_2->SetBinError(0,2.855593);
   hext_stack_2->SetBinError(4,0.5201503);
   hext_stack_2->SetBinError(5,0.788756);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.7656743);
   hext_stack_2->SetBinError(8,0.8873887);
   hext_stack_2->SetBinError(9,1.4943);
   hext_stack_2->SetBinError(10,1.533985);
   hext_stack_2->SetBinError(11,1.683489);
   hext_stack_2->SetBinError(12,1.619774);
   hext_stack_2->SetBinError(13,1.132884);
   hext_stack_2->SetBinError(14,1.890284);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.8528597);
   hext_stack_2->SetBinError(17,0.7753719);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,1.560171);
   hext_stack_2->SetBinError(20,0.7753719);
   hext_stack_2->SetBinError(21,1.384641);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,1.057404);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.577671);
   hext_stack_2->SetEntries(186);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,1.587297);
   hdirt_stack_3->SetBinContent(12,0.4042594);
   hdirt_stack_3->SetBinContent(13,0.311381);
   hdirt_stack_3->SetBinContent(18,0.165896);
   hdirt_stack_3->SetBinContent(19,1.167841e-06);
   hdirt_stack_3->SetBinContent(20,0.2665913);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(0,0.7303459);
   hdirt_stack_3->SetBinError(12,0.2998663);
   hdirt_stack_3->SetBinError(13,0.311381);
   hdirt_stack_3->SetBinError(18,0.165896);
   hdirt_stack_3->SetBinError(19,1.167841e-06);
   hdirt_stack_3->SetBinError(20,0.2665913);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(12);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,14.77436);
   houtFV_stack_4->SetBinContent(1,0.1967154);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(3,0.3401776);
   houtFV_stack_4->SetBinContent(4,0.3917402);
   houtFV_stack_4->SetBinContent(5,1.073786);
   houtFV_stack_4->SetBinContent(6,4.293926);
   houtFV_stack_4->SetBinContent(7,1.690385);
   houtFV_stack_4->SetBinContent(8,1.853885);
   houtFV_stack_4->SetBinContent(9,2.87949);
   houtFV_stack_4->SetBinContent(10,2.570217);
   houtFV_stack_4->SetBinContent(11,2.287653);
   houtFV_stack_4->SetBinContent(12,1.463836);
   houtFV_stack_4->SetBinContent(13,0.3917402);
   houtFV_stack_4->SetBinContent(14,1.5941);
   houtFV_stack_4->SetBinContent(15,1.140283);
   houtFV_stack_4->SetBinContent(16,0.1950248);
   houtFV_stack_4->SetBinContent(17,0.8558886);
   houtFV_stack_4->SetBinContent(18,0.9303237);
   houtFV_stack_4->SetBinContent(19,0.6245749);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(0,1.957246);
   houtFV_stack_4->SetBinError(1,0.1967154);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(3,0.3401776);
   houtFV_stack_4->SetBinError(4,0.2770047);
   houtFV_stack_4->SetBinError(5,0.5557297);
   houtFV_stack_4->SetBinError(6,1.061696);
   houtFV_stack_4->SetBinError(7,0.7242895);
   houtFV_stack_4->SetBinError(8,0.6789509);
   houtFV_stack_4->SetBinError(9,0.9000686);
   houtFV_stack_4->SetBinError(10,0.8126621);
   houtFV_stack_4->SetBinError(11,0.8326886);
   houtFV_stack_4->SetBinError(12,0.620407);
   houtFV_stack_4->SetBinError(13,0.2770047);
   houtFV_stack_4->SetBinError(14,0.5642168);
   houtFV_stack_4->SetBinError(15,0.5987479);
   houtFV_stack_4->SetBinError(16,0.1950249);
   houtFV_stack_4->SetBinError(17,0.432376);
   houtFV_stack_4->SetBinError(18,0.4814682);
   houtFV_stack_4->SetBinError(19,0.3616925);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(177);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,23.2589);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3206861);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.5294358);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.464922);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.413362);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.093756);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.327166);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.096748);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.998766);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.811844);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.937894);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.423572);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.423572);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.15719);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8933042);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.9906222);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9627222);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.515986);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.222536);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.4321178);
   hNCpi0inFVres_stack_7->SetBinError(0,1.572945);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2201295);
   hNCpi0inFVres_stack_7->SetBinError(5,0.168174);
   hNCpi0inFVres_stack_7->SetBinError(6,0.381955);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5330337);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5754601);
   hNCpi0inFVres_stack_7->SetBinError(9,0.473277);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5854069);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5888321);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3957178);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4314023);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4132003);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4132003);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3435999);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3509784);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3642206);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3631504);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2321763);
   hNCpi0inFVres_stack_7->SetBinError(21,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1404279);
   hNCpi0inFVres_stack_7->SetBinError(24,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1371558);
   hNCpi0inFVres_stack_7->SetEntries(969);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,13.84527);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.291954);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.018522);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.82663);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.212158);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.339872);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.464258);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.561408);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.158022);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.101886);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.35249);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.67168);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.742098);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.060704);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.004072);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.697004);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.7386901);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.341755);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.227637);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1685597);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3652876);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.49851);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3167831);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4103648);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3992271);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3689095);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3705767);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2650518);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3514395);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4076681);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4763515);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.35757);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3271594);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2563433);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3261668);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.283386);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5062211);
   hNCpi0inFVdis_stack_8->SetEntries(683);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,343.2165);
   hCCpi0inFV_stack_11->SetBinContent(1,0.5884556);
   hCCpi0inFV_stack_11->SetBinContent(2,0.5352025);
   hCCpi0inFV_stack_11->SetBinContent(3,1.804013);
   hCCpi0inFV_stack_11->SetBinContent(4,7.066394);
   hCCpi0inFV_stack_11->SetBinContent(5,90.17438);
   hCCpi0inFV_stack_11->SetBinContent(6,181.3315);
   hCCpi0inFV_stack_11->SetBinContent(7,213.7142);
   hCCpi0inFV_stack_11->SetBinContent(8,208.9194);
   hCCpi0inFV_stack_11->SetBinContent(9,219.4755);
   hCCpi0inFV_stack_11->SetBinContent(10,201.9012);
   hCCpi0inFV_stack_11->SetBinContent(11,183.9538);
   hCCpi0inFV_stack_11->SetBinContent(12,164.2081);
   hCCpi0inFV_stack_11->SetBinContent(13,138.3949);
   hCCpi0inFV_stack_11->SetBinContent(14,118.0716);
   hCCpi0inFV_stack_11->SetBinContent(15,103.1711);
   hCCpi0inFV_stack_11->SetBinContent(16,78.42216);
   hCCpi0inFV_stack_11->SetBinContent(17,72.35397);
   hCCpi0inFV_stack_11->SetBinContent(18,58.61897);
   hCCpi0inFV_stack_11->SetBinContent(19,48.83699);
   hCCpi0inFV_stack_11->SetBinContent(20,40.86724);
   hCCpi0inFV_stack_11->SetBinContent(21,34.98015);
   hCCpi0inFV_stack_11->SetBinContent(22,32.38261);
   hCCpi0inFV_stack_11->SetBinContent(23,23.017);
   hCCpi0inFV_stack_11->SetBinContent(24,18.46366);
   hCCpi0inFV_stack_11->SetBinContent(25,14.43549);
   hCCpi0inFV_stack_11->SetBinContent(26,99.71861);
   hCCpi0inFV_stack_11->SetBinError(0,9.363838);
   hCCpi0inFV_stack_11->SetBinError(1,0.3397478);
   hCCpi0inFV_stack_11->SetBinError(2,0.3921167);
   hCCpi0inFV_stack_11->SetBinError(3,0.7075491);
   hCCpi0inFV_stack_11->SetBinError(4,1.336067);
   hCCpi0inFV_stack_11->SetBinError(5,4.733404);
   hCCpi0inFV_stack_11->SetBinError(6,6.898011);
   hCCpi0inFV_stack_11->SetBinError(7,7.401579);
   hCCpi0inFV_stack_11->SetBinError(8,7.268919);
   hCCpi0inFV_stack_11->SetBinError(9,7.44052);
   hCCpi0inFV_stack_11->SetBinError(10,7.260498);
   hCCpi0inFV_stack_11->SetBinError(11,6.772693);
   hCCpi0inFV_stack_11->SetBinError(12,6.372209);
   hCCpi0inFV_stack_11->SetBinError(13,5.890995);
   hCCpi0inFV_stack_11->SetBinError(14,5.544247);
   hCCpi0inFV_stack_11->SetBinError(15,5.098885);
   hCCpi0inFV_stack_11->SetBinError(16,4.419937);
   hCCpi0inFV_stack_11->SetBinError(17,4.281241);
   hCCpi0inFV_stack_11->SetBinError(18,3.885528);
   hCCpi0inFV_stack_11->SetBinError(19,3.499792);
   hCCpi0inFV_stack_11->SetBinError(20,3.263629);
   hCCpi0inFV_stack_11->SetBinError(21,2.973984);
   hCCpi0inFV_stack_11->SetBinError(22,2.918193);
   hCCpi0inFV_stack_11->SetBinError(23,2.449484);
   hCCpi0inFV_stack_11->SetBinError(24,2.109429);
   hCCpi0inFV_stack_11->SetBinError(25,2.001582);
   hCCpi0inFV_stack_11->SetBinError(26,5.067174);
   hCCpi0inFV_stack_11->SetEntries(11461);

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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,13.53776);
   hNCinFV_stack_12->SetBinContent(5,0.1967154);
   hNCinFV_stack_12->SetBinContent(6,0.536893);
   hNCinFV_stack_12->SetBinContent(7,0.1950248);
   hNCinFV_stack_12->SetBinContent(8,1.073786);
   hNCinFV_stack_12->SetBinContent(9,0.7319179);
   hNCinFV_stack_12->SetBinContent(10,1.072095);
   hNCinFV_stack_12->SetBinContent(11,1.663932);
   hNCinFV_stack_12->SetBinContent(12,1.807394);
   hNCinFV_stack_12->SetBinContent(13,1.715495);
   hNCinFV_stack_12->SetBinContent(14,1.127039);
   hNCinFV_stack_12->SetBinContent(15,0.8770706);
   hNCinFV_stack_12->SetBinContent(16,0.3917402);
   hNCinFV_stack_12->SetBinContent(18,0.7319179);
   hNCinFV_stack_12->SetBinContent(19,0.7302274);
   hNCinFV_stack_12->SetBinContent(20,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.3401776);
   hNCinFV_stack_12->SetBinContent(22,0.1967154);
   hNCinFV_stack_12->SetBinContent(25,0.3934307);
   hNCinFV_stack_12->SetBinContent(26,0.7834804);
   hNCinFV_stack_12->SetBinError(0,1.841333);
   hNCinFV_stack_12->SetBinError(5,0.1967154);
   hNCinFV_stack_12->SetBinError(6,0.3929602);
   hNCinFV_stack_12->SetBinError(7,0.1950249);
   hNCinFV_stack_12->SetBinError(8,0.5557297);
   hNCinFV_stack_12->SetBinError(9,0.438694);
   hNCinFV_stack_12->SetBinError(10,0.5551335);
   hNCinFV_stack_12->SetBinError(11,0.6518637);
   hNCinFV_stack_12->SetBinError(12,0.7084844);
   hNCinFV_stack_12->SetBinError(13,0.6212384);
   hNCinFV_stack_12->SetBinError(14,0.5201044);
   hNCinFV_stack_12->SetBinError(15,0.5197486);
   hNCinFV_stack_12->SetBinError(16,0.2770047);
   hNCinFV_stack_12->SetBinError(18,0.438694);
   hNCinFV_stack_12->SetBinError(19,0.4379386);
   hNCinFV_stack_12->SetBinError(20,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.3401776);
   hNCinFV_stack_12->SetBinError(22,0.1967154);
   hNCinFV_stack_12->SetBinError(25,0.2781975);
   hNCinFV_stack_12->SetBinError(26,0.3917439);
   hNCinFV_stack_12->SetEntries(121);

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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,198.8361);
   hnumuCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(2,0.7336084);
   hnumuCCinFV_stack_13->SetBinContent(3,1.532989);
   hnumuCCinFV_stack_13->SetBinContent(4,7.169362);
   hnumuCCinFV_stack_13->SetBinContent(5,21.84403);
   hnumuCCinFV_stack_13->SetBinContent(6,28.47066);
   hnumuCCinFV_stack_13->SetBinContent(7,37.19223);
   hnumuCCinFV_stack_13->SetBinContent(8,40.93923);
   hnumuCCinFV_stack_13->SetBinContent(9,42.99809);
   hnumuCCinFV_stack_13->SetBinContent(10,38.84059);
   hnumuCCinFV_stack_13->SetBinContent(11,40.55509);
   hnumuCCinFV_stack_13->SetBinContent(12,35.55816);
   hnumuCCinFV_stack_13->SetBinContent(13,31.74171);
   hnumuCCinFV_stack_13->SetBinContent(14,29.21276);
   hnumuCCinFV_stack_13->SetBinContent(15,26.37117);
   hnumuCCinFV_stack_13->SetBinContent(16,18.25879);
   hnumuCCinFV_stack_13->SetBinContent(17,15.29251);
   hnumuCCinFV_stack_13->SetBinContent(18,12.04631);
   hnumuCCinFV_stack_13->SetBinContent(19,10.88963);
   hnumuCCinFV_stack_13->SetBinContent(20,9.108757);
   hnumuCCinFV_stack_13->SetBinContent(21,8.36108);
   hnumuCCinFV_stack_13->SetBinContent(22,9.848437);
   hnumuCCinFV_stack_13->SetBinContent(23,7.606803);
   hnumuCCinFV_stack_13->SetBinContent(24,4.278656);
   hnumuCCinFV_stack_13->SetBinContent(25,4.823351);
   hnumuCCinFV_stack_13->SetBinContent(26,27.42878);
   hnumuCCinFV_stack_13->SetBinError(0,8.79693);
   hnumuCCinFV_stack_13->SetBinError(1,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(2,0.4394482);
   hnumuCCinFV_stack_13->SetBinError(3,0.7088412);
   hnumuCCinFV_stack_13->SetBinError(4,1.384675);
   hnumuCCinFV_stack_13->SetBinError(5,2.852849);
   hnumuCCinFV_stack_13->SetBinError(6,3.40981);
   hnumuCCinFV_stack_13->SetBinError(7,3.436551);
   hnumuCCinFV_stack_13->SetBinError(8,4.083357);
   hnumuCCinFV_stack_13->SetBinError(9,3.586278);
   hnumuCCinFV_stack_13->SetBinError(10,3.420607);
   hnumuCCinFV_stack_13->SetBinError(11,3.760151);
   hnumuCCinFV_stack_13->SetBinError(12,3.169436);
   hnumuCCinFV_stack_13->SetBinError(13,4.915407);
   hnumuCCinFV_stack_13->SetBinError(14,2.702849);
   hnumuCCinFV_stack_13->SetBinError(15,3.154089);
   hnumuCCinFV_stack_13->SetBinError(16,2.14606);
   hnumuCCinFV_stack_13->SetBinError(17,1.951694);
   hnumuCCinFV_stack_13->SetBinError(18,1.989926);
   hnumuCCinFV_stack_13->SetBinError(19,1.734436);
   hnumuCCinFV_stack_13->SetBinError(20,1.550653);
   hnumuCCinFV_stack_13->SetBinError(21,1.442799);
   hnumuCCinFV_stack_13->SetBinError(22,1.549435);
   hnumuCCinFV_stack_13->SetBinError(23,1.708914);
   hnumuCCinFV_stack_13->SetBinError(24,1.020911);
   hnumuCCinFV_stack_13->SetBinError(25,1.054207);
   hnumuCCinFV_stack_13->SetBinError(26,2.612699);
   hnumuCCinFV_stack_13->SetEntries(2863);

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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,3.254014);
   hnueCCinFV_stack_14->SetBinContent(4,0.2680781);
   hnueCCinFV_stack_14->SetBinContent(7,0.8770706);
   hnueCCinFV_stack_14->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_14->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(16,0.7618654);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,0.785171);
   hnueCCinFV_stack_14->SetBinError(0,0.8965973);
   hnueCCinFV_stack_14->SetBinError(4,0.2680781);
   hnueCCinFV_stack_14->SetBinError(7,0.5197486);
   hnueCCinFV_stack_14->SetBinError(9,0.4394482);
   hnueCCinFV_stack_14->SetBinError(11,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.3387718);
   hnueCCinFV_stack_14->SetBinError(15,0.3401776);
   hnueCCinFV_stack_14->SetBinError(16,0.5417947);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(18,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,0.3401776);
   hnueCCinFV_stack_14->SetBinError(23,0.1967154);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,0.3925882);
   hnueCCinFV_stack_14->SetEntries(38);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__26->SetBinContent(0,638.6851);
   hmcerror__26->SetBinContent(1,0.9818863);
   hmcerror__26->SetBinContent(2,1.465526);
   hmcerror__26->SetBinContent(3,3.70508);
   hmcerror__26->SetBinContent(4,16.57939);
   hmcerror__26->SetBinContent(5,117.0725);
   hmcerror__26->SetBinContent(6,218.0977);
   hmcerror__26->SetBinContent(7,260.345);
   hmcerror__26->SetBinContent(8,258.7892);
   hmcerror__26->SetBinContent(9,274.9513);
   hmcerror__26->SetBinContent(10,253.8073);
   hmcerror__26->SetBinContent(11,239.597);
   hmcerror__26->SetBinContent(12,212.5848);
   hmcerror__26->SetBinContent(13,180.0255);
   hmcerror__26->SetBinContent(14,159.3014);
   hmcerror__26->SetBinContent(15,136.2471);
   hmcerror__26->SetBinContent(16,104.1806);
   hmcerror__26->SetBinContent(17,92.19729);
   hmcerror__26->SetBinContent(18,74.6027);
   hmcerror__26->SetBinContent(19,68.18875);
   hmcerror__26->SetBinContent(20,54.1558);
   hmcerror__26->SetBinContent(21,48.44597);
   hmcerror__26->SetBinContent(22,44.30713);
   hmcerror__26->SetBinContent(23,34.88041);
   hmcerror__26->SetBinContent(24,23.48494);
   hmcerror__26->SetBinContent(25,22.09897);
   hmcerror__26->SetBinContent(26,145.0215);
   hmcerror__26->SetBinError(0,13.7059);
   hmcerror__26->SetBinError(1,0.7180388);
   hmcerror__26->SetBinError(2,3.378886);
   hmcerror__26->SetBinError(3,5.072973);
   hmcerror__26->SetBinError(4,10.24968);
   hmcerror__26->SetBinError(5,44.2846);
   hmcerror__26->SetBinError(6,79.01855);
   hmcerror__26->SetBinError(7,87.08611);
   hmcerror__26->SetBinError(8,85.74364);
   hmcerror__26->SetBinError(9,89.9924);
   hmcerror__26->SetBinError(10,77.11005);
   hmcerror__26->SetBinError(11,71.77074);
   hmcerror__26->SetBinError(12,68.26371);
   hmcerror__26->SetBinError(13,72.28721);
   hmcerror__26->SetBinError(14,51.27068);
   hmcerror__26->SetBinError(15,45.5277);
   hmcerror__26->SetBinError(16,36.63582);
   hmcerror__26->SetBinError(17,32.90859);
   hmcerror__26->SetBinError(18,28.65656);
   hmcerror__26->SetBinError(19,35.75475);
   hmcerror__26->SetBinError(20,26.07565);
   hmcerror__26->SetBinError(21,22.86826);
   hmcerror__26->SetBinError(22,20.86306);
   hmcerror__26->SetBinError(23,16.20151);
   hmcerror__26->SetBinError(24,13.86556);
   hmcerror__26->SetBinError(25,13.33721);
   hmcerror__26->SetBinError(26,44.98935);
   hmcerror__26->SetEntries(3636.854);

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
   6,
   7,
   17,
   95,
   213,
   231,
   256,
   259,
   259,
   197,
   177,
   155,
   121,
   125,
   85,
   82,
   51,
   60,
   48,
   31,
   28,
   25,
   17,
   15};
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
   2.67925,
   2.85954,
   4.2835,
   9.8686,
   14.59452,
   15.19868,
   16,
   16.09348,
   16.09348,
   14.03567,
   13.30413,
   12.4499,
   11,
   11.18034,
   9.3428,
   9.1791,
   7.2725,
   7.8743,
   7.0604,
   5.7094,
   5.4358,
   5.1474,
   4.2835,
   4.0385};
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
   2.41858,
   2.61053,
   4.0673,
   9.667,
   14.59452,
   15.19868,
   16,
   16.09348,
   16.09348,
   14.03567,
   13.30413,
   12.4499,
   11,
   11.18034,
   9.1411,
   8.9774,
   7.0686,
   7.6713,
   6.8561,
   5.5017,
   5.2271,
   4.9374,
   4.0673,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-275,1225);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(302.6028);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2560.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 26.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  28.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  22.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 2255.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 483.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 5.4","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all");
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
   0.7312851,
   2.305578,
   1.369194,
   0.6182183,
   0.3782664,
   0.3623081,
   0.3345027,
   0.3313262,
   0.327303,
   0.3038133,
   0.2995477,
   0.3211129,
   0.4015388,
   0.321847,
   0.3341553,
   0.351657,
   0.3569366,
   0.3841223,
   0.5243496,
   0.4814933,
   0.4720364,
   0.4708736,
   0.4644874,
   0.590402,
   0.6035216};
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
   0.7312851,
   2.305578,
   1.369194,
   0.6182183,
   0.3782664,
   0.3623081,
   0.3345027,
   0.3313262,
   0.327303,
   0.3038133,
   0.2995477,
   0.3211129,
   0.4015388,
   0.321847,
   0.3341553,
   0.351657,
   0.3569366,
   0.3841223,
   0.5243496,
   0.4814933,
   0.4720364,
   0.4708736,
   0.4644874,
   0.590402,
   0.6035216};
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
   Graph_Graph3034->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
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
   0.7312851,
   0.7626234,
   0.4171953,
   0.2500307,
   0.2695373,
   0.2613194,
   0.2657994,
   0.2535239,
   0.2715729,
   0.254693,
   0.2471379,
   0.2715341,
   0.2439448,
   0.2521139,
   0.2503026,
   0.2515912,
   0.2725354,
   0.2550726,
   0.2412111,
   0.2701453,
   0.260824,
   0.2748645,
   0.2717728,
   0.2587675,
   0.2383604};
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
   0.7312851,
   0.7626234,
   0.4171953,
   0.2500307,
   0.2695373,
   0.2613194,
   0.2657994,
   0.2535239,
   0.2715729,
   0.254693,
   0.2471379,
   0.2715341,
   0.2439448,
   0.2521139,
   0.2503026,
   0.2515912,
   0.2725354,
   0.2550726,
   0.2412111,
   0.2701453,
   0.260824,
   0.2748645,
   0.2717728,
   0.2587675,
   0.2383604};
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
   4.094093,
   1.889298,
   1.025369,
   0.8114627,
   0.9766267,
   0.8872841,
   0.9892222,
   0.9419849,
   1.020459,
   0.8222139,
   0.8326089,
   0.8609893,
   0.7595665,
   0.9174504,
   0.8158912,
   0.8893971,
   0.6836214,
   0.8799105,
   0.8863317,
   0.6398881,
   0.6319524,
   0.7167348,
   0.7238682,
   0.6787646};
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
   1.828183,
   0.771789,
   0.258363,
   0.08429475,
   0.06691736,
   0.05837901,
   0.06182639,
   0.05853209,
   0.06340824,
   0.05858032,
   0.06258272,
   0.06915632,
   0.0690515,
   0.08205926,
   0.08967892,
   0.09955933,
   0.09748307,
   0.115478,
   0.130372,
   0.1178509,
   0.1226845,
   0.1475728,
   0.1823935,
   0.1827461};
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
   1.168974,
   1.650315,
   0.7045813,
   0.2453227,
   0.08257274,
   0.06691736,
   0.05837901,
   0.06182639,
   0.05853209,
   0.06340824,
   0.05858032,
   0.06258272,
   0.06915632,
   0.0690515,
   0.08205926,
   0.08774286,
   0.09737163,
   0.09474992,
   0.112501,
   0.1265996,
   0.1135636,
   0.1179742,
   0.1415523,
   0.1731876,
   0.1728451};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-275,1225);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(6.318848);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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

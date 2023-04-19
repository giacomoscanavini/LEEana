#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Feb 17 19:54:22 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-1.307692,-28.9582,1.25641,3202.167);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(1,224.0352);
   hmc__1->SetBinContent(2,178.987);
   hmc__1->SetBinContent(3,161.8309);
   hmc__1->SetBinContent(4,157.6647);
   hmc__1->SetBinContent(5,161.1335);
   hmc__1->SetBinContent(6,172.9824);
   hmc__1->SetBinContent(7,148.6641);
   hmc__1->SetBinContent(8,170.7691);
   hmc__1->SetBinContent(9,195.2764);
   hmc__1->SetBinContent(10,217.8849);
   hmc__1->SetBinContent(11,236.1567);
   hmc__1->SetBinContent(12,263.7861);
   hmc__1->SetBinContent(13,290.368);
   hmc__1->SetBinContent(14,327.6617);
   hmc__1->SetBinContent(15,383.0612);
   hmc__1->SetBinContent(16,478.7776);
   hmc__1->SetBinContent(17,602.7269);
   hmc__1->SetBinContent(18,702.4016);
   hmc__1->SetBinContent(19,951.7329);
   hmc__1->SetBinContent(20,1447.91);
   hmc__1->SetBinError(1,56.82865);
   hmc__1->SetBinError(2,53.35291);
   hmc__1->SetBinError(3,44.89273);
   hmc__1->SetBinError(4,48.91825);
   hmc__1->SetBinError(5,45.313);
   hmc__1->SetBinError(6,42.91597);
   hmc__1->SetBinError(7,45.8056);
   hmc__1->SetBinError(8,47.1053);
   hmc__1->SetBinError(9,55.72988);
   hmc__1->SetBinError(10,57.01215);
   hmc__1->SetBinError(11,63.08824);
   hmc__1->SetBinError(12,71.32537);
   hmc__1->SetBinError(13,79.97762);
   hmc__1->SetBinError(14,90.11489);
   hmc__1->SetBinError(15,107.159);
   hmc__1->SetBinError(16,135.8596);
   hmc__1->SetBinError(17,163.1583);
   hmc__1->SetBinError(18,183.937);
   hmc__1->SetBinError(19,227.8818);
   hmc__1->SetBinError(20,336.823);
   hmc__1->SetBinError(21,0.3895343);
   hmc__1->SetMinimum(-28.9582);
   hmc__1->SetMaximum(3040.611);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1520.305);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,8.367557);
   hbadmatch_stack_1->SetBinContent(2,4.662516);
   hbadmatch_stack_1->SetBinContent(3,5.199047);
   hbadmatch_stack_1->SetBinContent(4,3.596334);
   hbadmatch_stack_1->SetBinContent(5,4.203849);
   hbadmatch_stack_1->SetBinContent(6,5.795568);
   hbadmatch_stack_1->SetBinContent(7,2.56512);
   hbadmatch_stack_1->SetBinContent(8,5.424896);
   hbadmatch_stack_1->SetBinContent(9,7.08869);
   hbadmatch_stack_1->SetBinContent(10,4.822338);
   hbadmatch_stack_1->SetBinContent(11,10.02786);
   hbadmatch_stack_1->SetBinContent(12,12.26187);
   hbadmatch_stack_1->SetBinContent(13,7.775405);
   hbadmatch_stack_1->SetBinContent(14,7.777695);
   hbadmatch_stack_1->SetBinContent(15,6.498975);
   hbadmatch_stack_1->SetBinContent(16,11.66763);
   hbadmatch_stack_1->SetBinContent(17,13.57907);
   hbadmatch_stack_1->SetBinContent(18,16.70909);
   hbadmatch_stack_1->SetBinContent(19,14.67889);
   hbadmatch_stack_1->SetBinContent(20,27.83104);
   hbadmatch_stack_1->SetBinError(1,1.527518);
   hbadmatch_stack_1->SetBinError(2,1.894663);
   hbadmatch_stack_1->SetBinError(3,1.174433);
   hbadmatch_stack_1->SetBinError(4,0.848771);
   hbadmatch_stack_1->SetBinError(5,1.094783);
   hbadmatch_stack_1->SetBinError(6,1.279157);
   hbadmatch_stack_1->SetBinError(7,0.7473486);
   hbadmatch_stack_1->SetBinError(8,1.23504);
   hbadmatch_stack_1->SetBinError(9,1.440329);
   hbadmatch_stack_1->SetBinError(10,1.124158);
   hbadmatch_stack_1->SetBinError(11,2.246389);
   hbadmatch_stack_1->SetBinError(12,2.617403);
   hbadmatch_stack_1->SetBinError(13,1.749419);
   hbadmatch_stack_1->SetBinError(14,1.478173);
   hbadmatch_stack_1->SetBinError(15,1.366927);
   hbadmatch_stack_1->SetBinError(16,1.795776);
   hbadmatch_stack_1->SetBinError(17,2.013547);
   hbadmatch_stack_1->SetBinError(18,2.156838);
   hbadmatch_stack_1->SetBinError(19,1.961066);
   hbadmatch_stack_1->SetBinError(20,2.979483);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,22.20837);
   hext_stack_2->SetBinContent(2,17.06387);
   hext_stack_2->SetBinContent(3,13.19982);
   hext_stack_2->SetBinContent(4,18.08613);
   hext_stack_2->SetBinContent(5,16.64568);
   hext_stack_2->SetBinContent(6,30.81586);
   hext_stack_2->SetBinContent(7,13.938);
   hext_stack_2->SetBinContent(8,24.62756);
   hext_stack_2->SetBinContent(9,30.67747);
   hext_stack_2->SetBinContent(10,36.41446);
   hext_stack_2->SetBinContent(11,32.44786);
   hext_stack_2->SetBinContent(12,36.26605);
   hext_stack_2->SetBinContent(13,39.31091);
   hext_stack_2->SetBinContent(14,43.2113);
   hext_stack_2->SetBinContent(15,45.55547);
   hext_stack_2->SetBinContent(16,52.18798);
   hext_stack_2->SetBinContent(17,59.26286);
   hext_stack_2->SetBinContent(18,52.83242);
   hext_stack_2->SetBinContent(19,75.82477);
   hext_stack_2->SetBinContent(20,93.7613);
   hext_stack_2->SetBinError(1,3.331046);
   hext_stack_2->SetBinError(2,2.805102);
   hext_stack_2->SetBinError(3,2.408524);
   hext_stack_2->SetBinError(4,2.985644);
   hext_stack_2->SetBinError(5,2.787356);
   hext_stack_2->SetBinError(6,3.943701);
   hext_stack_2->SetBinError(7,2.422879);
   hext_stack_2->SetBinError(8,3.447265);
   hext_stack_2->SetBinError(9,3.692385);
   hext_stack_2->SetBinError(10,4.227681);
   hext_stack_2->SetBinError(11,3.769749);
   hext_stack_2->SetBinError(12,4.221629);
   hext_stack_2->SetBinError(13,4.197872);
   hext_stack_2->SetBinError(14,4.614473);
   hext_stack_2->SetBinError(15,4.671171);
   hext_stack_2->SetBinError(16,4.877431);
   hext_stack_2->SetBinError(17,5.251568);
   hext_stack_2->SetBinError(18,4.747027);
   hext_stack_2->SetBinError(19,5.786741);
   hext_stack_2->SetBinError(20,6.669894);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,2.28857);
   hdirt_stack_3->SetBinContent(2,1.667938);
   hdirt_stack_3->SetBinContent(3,2.780338);
   hdirt_stack_3->SetBinContent(4,3.413966);
   hdirt_stack_3->SetBinContent(5,1.283134);
   hdirt_stack_3->SetBinContent(6,2.269204);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,2.134555);
   hdirt_stack_3->SetBinContent(9,1.179927);
   hdirt_stack_3->SetBinContent(10,1.098429);
   hdirt_stack_3->SetBinContent(11,1.651058);
   hdirt_stack_3->SetBinContent(12,4.931287);
   hdirt_stack_3->SetBinContent(13,3.233474);
   hdirt_stack_3->SetBinContent(14,3.415478);
   hdirt_stack_3->SetBinContent(15,3.103051);
   hdirt_stack_3->SetBinContent(16,4.896255);
   hdirt_stack_3->SetBinContent(17,7.032725);
   hdirt_stack_3->SetBinContent(18,8.229164);
   hdirt_stack_3->SetBinContent(19,6.355253);
   hdirt_stack_3->SetBinContent(20,11.01512);
   hdirt_stack_3->SetBinError(1,0.670287);
   hdirt_stack_3->SetBinError(2,0.6118832);
   hdirt_stack_3->SetBinError(3,0.9371791);
   hdirt_stack_3->SetBinError(4,1.251303);
   hdirt_stack_3->SetBinError(5,0.5765025);
   hdirt_stack_3->SetBinError(6,0.7924553);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.786332);
   hdirt_stack_3->SetBinError(9,0.4862253);
   hdirt_stack_3->SetBinError(10,0.5014312);
   hdirt_stack_3->SetBinError(11,0.6984735);
   hdirt_stack_3->SetBinError(12,1.414082);
   hdirt_stack_3->SetBinError(13,0.9509713);
   hdirt_stack_3->SetBinError(14,0.9857688);
   hdirt_stack_3->SetBinError(15,0.9168535);
   hdirt_stack_3->SetBinError(16,1.05989);
   hdirt_stack_3->SetBinError(17,1.649609);
   hdirt_stack_3->SetBinError(18,1.48527);
   hdirt_stack_3->SetBinError(19,1.410379);
   hdirt_stack_3->SetBinError(20,1.762405);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,28.28875);
   houtFV_stack_4->SetBinContent(2,21.60048);
   houtFV_stack_4->SetBinContent(3,18.52274);
   houtFV_stack_4->SetBinContent(4,18.24926);
   houtFV_stack_4->SetBinContent(5,18.2127);
   houtFV_stack_4->SetBinContent(6,17.50807);
   houtFV_stack_4->SetBinContent(7,15.42896);
   houtFV_stack_4->SetBinContent(8,15.45263);
   houtFV_stack_4->SetBinContent(9,18.19745);
   houtFV_stack_4->SetBinContent(10,18.78511);
   houtFV_stack_4->SetBinContent(11,21.98383);
   houtFV_stack_4->SetBinContent(12,23.74933);
   houtFV_stack_4->SetBinContent(13,22.75846);
   houtFV_stack_4->SetBinContent(14,31.93213);
   houtFV_stack_4->SetBinContent(15,40.49278);
   houtFV_stack_4->SetBinContent(16,46.80846);
   houtFV_stack_4->SetBinContent(17,64.54122);
   houtFV_stack_4->SetBinContent(18,75.90682);
   houtFV_stack_4->SetBinContent(19,92.7653);
   houtFV_stack_4->SetBinContent(20,111.0473);
   houtFV_stack_4->SetBinError(1,2.70041);
   houtFV_stack_4->SetBinError(2,2.318301);
   houtFV_stack_4->SetBinError(3,2.111821);
   houtFV_stack_4->SetBinError(4,2.125527);
   houtFV_stack_4->SetBinError(5,2.135507);
   houtFV_stack_4->SetBinError(6,2.370517);
   houtFV_stack_4->SetBinError(7,1.966679);
   houtFV_stack_4->SetBinError(8,1.973489);
   houtFV_stack_4->SetBinError(9,2.102832);
   houtFV_stack_4->SetBinError(10,2.157311);
   houtFV_stack_4->SetBinError(11,2.351895);
   houtFV_stack_4->SetBinError(12,2.444407);
   houtFV_stack_4->SetBinError(13,2.420328);
   houtFV_stack_4->SetBinError(14,2.828209);
   houtFV_stack_4->SetBinError(15,3.170544);
   houtFV_stack_4->SetBinError(16,3.490501);
   houtFV_stack_4->SetBinError(17,3.985598);
   houtFV_stack_4->SetBinError(18,4.477025);
   houtFV_stack_4->SetBinError(19,4.839361);
   houtFV_stack_4->SetBinError(20,5.339973);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.23592);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6546538);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5151539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8502901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.314052);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.97153);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.15389);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,16.54875);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,67.37279);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6523832);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1962949);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1861173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3309054);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5613665);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5765866);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8900793);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.322248);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.682102);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.310644);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6410357);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.869476);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.645772);
   hNCpi0inFVqe_stack_6->SetBinContent(18,3.919138);
   hNCpi0inFVqe_stack_6->SetBinContent(19,4.057806);
   hNCpi0inFVqe_stack_6->SetBinContent(20,5.077487);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4411421);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1771895);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4789997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3534638);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.6718789);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.6603386);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.7139592);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,68.9269);
   hNCpi0inFVres_stack_7->SetBinContent(2,60.83702);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.39752);
   hNCpi0inFVres_stack_7->SetBinContent(4,59.2649);
   hNCpi0inFVres_stack_7->SetBinContent(5,58.8146);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.35673);
   hNCpi0inFVres_stack_7->SetBinContent(7,59.80173);
   hNCpi0inFVres_stack_7->SetBinContent(8,61.84274);
   hNCpi0inFVres_stack_7->SetBinContent(9,70.10865);
   hNCpi0inFVres_stack_7->SetBinContent(10,82.29767);
   hNCpi0inFVres_stack_7->SetBinContent(11,88.73714);
   hNCpi0inFVres_stack_7->SetBinContent(12,100.3966);
   hNCpi0inFVres_stack_7->SetBinContent(13,110.3037);
   hNCpi0inFVres_stack_7->SetBinContent(14,131.3087);
   hNCpi0inFVres_stack_7->SetBinContent(15,149.5666);
   hNCpi0inFVres_stack_7->SetBinContent(16,190.488);
   hNCpi0inFVres_stack_7->SetBinContent(17,231.034);
   hNCpi0inFVres_stack_7->SetBinContent(18,280.6815);
   hNCpi0inFVres_stack_7->SetBinContent(19,362.693);
   hNCpi0inFVres_stack_7->SetBinContent(20,470.5193);
   hNCpi0inFVres_stack_7->SetBinError(1,2.72236);
   hNCpi0inFVres_stack_7->SetBinError(2,2.530438);
   hNCpi0inFVres_stack_7->SetBinError(3,2.508102);
   hNCpi0inFVres_stack_7->SetBinError(4,2.562289);
   hNCpi0inFVres_stack_7->SetBinError(5,2.517923);
   hNCpi0inFVres_stack_7->SetBinError(6,2.494447);
   hNCpi0inFVres_stack_7->SetBinError(7,2.471353);
   hNCpi0inFVres_stack_7->SetBinError(8,2.501925);
   hNCpi0inFVres_stack_7->SetBinError(9,2.703422);
   hNCpi0inFVres_stack_7->SetBinError(10,3.024711);
   hNCpi0inFVres_stack_7->SetBinError(11,3.092075);
   hNCpi0inFVres_stack_7->SetBinError(12,3.304423);
   hNCpi0inFVres_stack_7->SetBinError(13,3.390808);
   hNCpi0inFVres_stack_7->SetBinError(14,3.771052);
   hNCpi0inFVres_stack_7->SetBinError(15,3.900325);
   hNCpi0inFVres_stack_7->SetBinError(16,4.552777);
   hNCpi0inFVres_stack_7->SetBinError(17,4.991852);
   hNCpi0inFVres_stack_7->SetBinError(18,5.482393);
   hNCpi0inFVres_stack_7->SetBinError(19,6.266705);
   hNCpi0inFVres_stack_7->SetBinError(20,7.105508);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.12909);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.55579);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.41604);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.08673);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.365128);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.004091);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.147247);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.13074);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.69562);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.98145);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.09809);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.5944);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.23787);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.1257);
   hNCpi0inFVdis_stack_8->SetBinContent(15,24.55176);
   hNCpi0inFVdis_stack_8->SetBinContent(16,31.17605);
   hNCpi0inFVdis_stack_8->SetBinContent(17,42.00263);
   hNCpi0inFVdis_stack_8->SetBinContent(18,55.22231);
   hNCpi0inFVdis_stack_8->SetBinContent(19,77.56296);
   hNCpi0inFVdis_stack_8->SetBinContent(20,132.3076);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.264008);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.056255);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.017626);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.137655);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.940228);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9552182);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9562364);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.166178);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.088616);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.174631);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.058832);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.19657);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.397312);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.510827);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.601654);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.815625);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.140848);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.448025);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.826291);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.746329);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.515986);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2321763);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,33.67398);
   hCCpi0inFV_stack_10->SetBinContent(2,29.06198);
   hCCpi0inFV_stack_10->SetBinContent(3,25.29364);
   hCCpi0inFV_stack_10->SetBinContent(4,18.07314);
   hCCpi0inFV_stack_10->SetBinContent(5,23.49884);
   hCCpi0inFV_stack_10->SetBinContent(6,22.10345);
   hCCpi0inFV_stack_10->SetBinContent(7,21.31635);
   hCCpi0inFV_stack_10->SetBinContent(8,22.01645);
   hCCpi0inFV_stack_10->SetBinContent(9,21.62688);
   hCCpi0inFV_stack_10->SetBinContent(10,27.57011);
   hCCpi0inFV_stack_10->SetBinContent(11,32.81432);
   hCCpi0inFV_stack_10->SetBinContent(12,30.60559);
   hCCpi0inFV_stack_10->SetBinContent(13,39.60758);
   hCCpi0inFV_stack_10->SetBinContent(14,39.85707);
   hCCpi0inFV_stack_10->SetBinContent(15,50.13068);
   hCCpi0inFV_stack_10->SetBinContent(16,60.35975);
   hCCpi0inFV_stack_10->SetBinContent(17,92.51428);
   hCCpi0inFV_stack_10->SetBinContent(18,103.9701);
   hCCpi0inFV_stack_10->SetBinContent(19,151.5294);
   hCCpi0inFV_stack_10->SetBinContent(20,249.3935);
   hCCpi0inFV_stack_10->SetBinError(1,2.874072);
   hCCpi0inFV_stack_10->SetBinError(2,2.726989);
   hCCpi0inFV_stack_10->SetBinError(3,2.516262);
   hCCpi0inFV_stack_10->SetBinError(4,2.085074);
   hCCpi0inFV_stack_10->SetBinError(5,2.319796);
   hCCpi0inFV_stack_10->SetBinError(6,2.366182);
   hCCpi0inFV_stack_10->SetBinError(7,2.268522);
   hCCpi0inFV_stack_10->SetBinError(8,2.371966);
   hCCpi0inFV_stack_10->SetBinError(9,2.247113);
   hCCpi0inFV_stack_10->SetBinError(10,2.627198);
   hCCpi0inFV_stack_10->SetBinError(11,2.814035);
   hCCpi0inFV_stack_10->SetBinError(12,2.784367);
   hCCpi0inFV_stack_10->SetBinError(13,3.198209);
   hCCpi0inFV_stack_10->SetBinError(14,3.17688);
   hCCpi0inFV_stack_10->SetBinError(15,3.598222);
   hCCpi0inFV_stack_10->SetBinError(16,3.87778);
   hCCpi0inFV_stack_10->SetBinError(17,4.876454);
   hCCpi0inFV_stack_10->SetBinError(18,5.100182);
   hCCpi0inFV_stack_10->SetBinError(19,6.213755);
   hCCpi0inFV_stack_10->SetBinError(20,7.961741);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,18.27898);
   hNCinFV_stack_11->SetBinContent(2,14.36942);
   hNCinFV_stack_11->SetBinContent(3,12.18043);
   hNCinFV_stack_11->SetBinContent(4,9.376541);
   hNCinFV_stack_11->SetBinContent(5,12.75766);
   hNCinFV_stack_11->SetBinContent(6,8.807764);
   hNCinFV_stack_11->SetBinContent(7,10.64689);
   hNCinFV_stack_11->SetBinContent(8,5.426647);
   hNCinFV_stack_11->SetBinContent(9,12.67628);
   hNCinFV_stack_11->SetBinContent(10,10.94857);
   hNCinFV_stack_11->SetBinContent(11,9.959925);
   hNCinFV_stack_11->SetBinContent(12,14.41652);
   hNCinFV_stack_11->SetBinContent(13,14.47146);
   hNCinFV_stack_11->SetBinContent(14,15.19493);
   hNCinFV_stack_11->SetBinContent(15,23.73812);
   hNCinFV_stack_11->SetBinContent(16,29.23093);
   hNCinFV_stack_11->SetBinContent(17,33.1673);
   hNCinFV_stack_11->SetBinContent(18,45.37008);
   hNCinFV_stack_11->SetBinContent(19,77.16109);
   hNCinFV_stack_11->SetBinContent(20,133.9108);
   hNCinFV_stack_11->SetBinError(1,2.11336);
   hNCinFV_stack_11->SetBinError(2,1.871806);
   hNCinFV_stack_11->SetBinError(3,1.711418);
   hNCinFV_stack_11->SetBinError(4,1.557833);
   hNCinFV_stack_11->SetBinError(5,1.799547);
   hNCinFV_stack_11->SetBinError(6,1.456275);
   hNCinFV_stack_11->SetBinError(7,1.618311);
   hNCinFV_stack_11->SetBinError(8,1.144207);
   hNCinFV_stack_11->SetBinError(9,1.8612);
   hNCinFV_stack_11->SetBinError(10,1.654013);
   hNCinFV_stack_11->SetBinError(11,1.593828);
   hNCinFV_stack_11->SetBinError(12,1.913455);
   hNCinFV_stack_11->SetBinError(13,1.903587);
   hNCinFV_stack_11->SetBinError(14,1.952636);
   hNCinFV_stack_11->SetBinError(15,2.475039);
   hNCinFV_stack_11->SetBinError(16,2.68391);
   hNCinFV_stack_11->SetBinError(17,2.883697);
   hNCinFV_stack_11->SetBinError(18,3.404556);
   hNCinFV_stack_11->SetBinError(19,4.37037);
   hNCinFV_stack_11->SetBinError(20,5.869675);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,21.65071);
   hnumuCCinFV_stack_12->SetBinContent(2,14.82505);
   hnumuCCinFV_stack_12->SetBinContent(3,14.42482);
   hnumuCCinFV_stack_12->SetBinContent(4,12.79425);
   hnumuCCinFV_stack_12->SetBinContent(5,14.27328);
   hnumuCCinFV_stack_12->SetBinContent(6,14.53366);
   hnumuCCinFV_stack_12->SetBinContent(7,13.17817);
   hnumuCCinFV_stack_12->SetBinContent(8,20.63873);
   hnumuCCinFV_stack_12->SetBinContent(9,19.8234);
   hnumuCCinFV_stack_12->SetBinContent(10,22.97657);
   hnumuCCinFV_stack_12->SetBinContent(11,26.38937);
   hnumuCCinFV_stack_12->SetBinContent(12,24.66167);
   hnumuCCinFV_stack_12->SetBinContent(13,33.4483);
   hnumuCCinFV_stack_12->SetBinContent(14,29.94961);
   hnumuCCinFV_stack_12->SetBinContent(15,34.4286);
   hnumuCCinFV_stack_12->SetBinContent(16,45.9055);
   hnumuCCinFV_stack_12->SetBinContent(17,52.55578);
   hnumuCCinFV_stack_12->SetBinContent(18,48.50027);
   hnumuCCinFV_stack_12->SetBinContent(19,68.39314);
   hnumuCCinFV_stack_12->SetBinContent(20,120.4104);
   hnumuCCinFV_stack_12->SetBinError(1,2.371554);
   hnumuCCinFV_stack_12->SetBinError(2,2.081025);
   hnumuCCinFV_stack_12->SetBinError(3,2.229134);
   hnumuCCinFV_stack_12->SetBinError(4,1.872088);
   hnumuCCinFV_stack_12->SetBinError(5,2.262318);
   hnumuCCinFV_stack_12->SetBinError(6,2.137806);
   hnumuCCinFV_stack_12->SetBinError(7,2.114705);
   hnumuCCinFV_stack_12->SetBinError(8,2.939422);
   hnumuCCinFV_stack_12->SetBinError(9,2.508561);
   hnumuCCinFV_stack_12->SetBinError(10,2.837424);
   hnumuCCinFV_stack_12->SetBinError(11,2.977083);
   hnumuCCinFV_stack_12->SetBinError(12,2.940913);
   hnumuCCinFV_stack_12->SetBinError(13,3.399695);
   hnumuCCinFV_stack_12->SetBinError(14,3.014267);
   hnumuCCinFV_stack_12->SetBinError(15,3.387892);
   hnumuCCinFV_stack_12->SetBinError(16,4.945195);
   hnumuCCinFV_stack_12->SetBinError(17,4.077496);
   hnumuCCinFV_stack_12->SetBinError(18,3.769317);
   hnumuCCinFV_stack_12->SetBinError(19,4.949547);
   hnumuCCinFV_stack_12->SetBinError(20,6.240379);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.647793);
   hnueCCinFV_stack_13->SetBinContent(2,1.641809);
   hnueCCinFV_stack_13->SetBinContent(3,1.287416);
   hnueCCinFV_stack_13->SetBinContent(4,1.85986);
   hnueCCinFV_stack_13->SetBinContent(5,0.6430945);
   hnueCCinFV_stack_13->SetBinContent(6,1.006494);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,1.226073);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.6905964);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,2.202207);
   hnueCCinFV_stack_13->SetBinContent(15,2.832999);
   hnueCCinFV_stack_13->SetBinContent(16,1.622312);
   hnueCCinFV_stack_13->SetBinContent(17,2.363974);
   hnueCCinFV_stack_13->SetBinContent(18,3.851004);
   hnueCCinFV_stack_13->SetBinContent(19,3.855467);
   hnueCCinFV_stack_13->SetBinContent(20,24.74744);
   hnueCCinFV_stack_13->SetBinError(1,0.7359977);
   hnueCCinFV_stack_13->SetBinError(2,0.5823823);
   hnueCCinFV_stack_13->SetBinError(3,0.57742);
   hnueCCinFV_stack_13->SetBinError(4,1.1719);
   hnueCCinFV_stack_13->SetBinError(5,0.4552547);
   hnueCCinFV_stack_13->SetBinError(6,0.5976004);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.56795);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.4010541);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.8569281);
   hnueCCinFV_stack_13->SetBinError(15,1.411245);
   hnueCCinFV_stack_13->SetBinError(16,0.7115599);
   hnueCCinFV_stack_13->SetBinError(17,0.8363957);
   hnueCCinFV_stack_13->SetBinError(18,1.167976);
   hnueCCinFV_stack_13->SetBinError(19,0.959592);
   hnueCCinFV_stack_13->SetBinError(20,3.608147);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(1,224.0352);
   hmcerror__2->SetBinContent(2,178.987);
   hmcerror__2->SetBinContent(3,161.8309);
   hmcerror__2->SetBinContent(4,157.6647);
   hmcerror__2->SetBinContent(5,161.1335);
   hmcerror__2->SetBinContent(6,172.9824);
   hmcerror__2->SetBinContent(7,148.6641);
   hmcerror__2->SetBinContent(8,170.7691);
   hmcerror__2->SetBinContent(9,195.2764);
   hmcerror__2->SetBinContent(10,217.8849);
   hmcerror__2->SetBinContent(11,236.1567);
   hmcerror__2->SetBinContent(12,263.7861);
   hmcerror__2->SetBinContent(13,290.368);
   hmcerror__2->SetBinContent(14,327.6617);
   hmcerror__2->SetBinContent(15,383.0612);
   hmcerror__2->SetBinContent(16,478.7776);
   hmcerror__2->SetBinContent(17,602.7269);
   hmcerror__2->SetBinContent(18,702.4016);
   hmcerror__2->SetBinContent(19,951.7329);
   hmcerror__2->SetBinContent(20,1447.91);
   hmcerror__2->SetBinError(1,56.82865);
   hmcerror__2->SetBinError(2,53.35291);
   hmcerror__2->SetBinError(3,44.89273);
   hmcerror__2->SetBinError(4,48.91825);
   hmcerror__2->SetBinError(5,45.313);
   hmcerror__2->SetBinError(6,42.91597);
   hmcerror__2->SetBinError(7,45.8056);
   hmcerror__2->SetBinError(8,47.1053);
   hmcerror__2->SetBinError(9,55.72988);
   hmcerror__2->SetBinError(10,57.01215);
   hmcerror__2->SetBinError(11,63.08824);
   hmcerror__2->SetBinError(12,71.32537);
   hmcerror__2->SetBinError(13,79.97762);
   hmcerror__2->SetBinError(14,90.11489);
   hmcerror__2->SetBinError(15,107.159);
   hmcerror__2->SetBinError(16,135.8596);
   hmcerror__2->SetBinError(17,163.1583);
   hmcerror__2->SetBinError(18,183.937);
   hmcerror__2->SetBinError(19,227.8818);
   hmcerror__2->SetBinError(20,336.823);
   hmcerror__2->SetBinError(21,0.3895343);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3001[20] = {
   196,
   134,
   147,
   124,
   149,
   145,
   151,
   179,
   152,
   170,
   182,
   207,
   234,
   297,
   285,
   407,
   472,
   650,
   886,
   1277};
   Double_t _felx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3001[20] = {
   14,
   11.57584,
   12.12436,
   11.13553,
   12.20656,
   12.04159,
   12.28821,
   13.37909,
   12.32883,
   13.0384,
   13.49074,
   14.38749,
   15.29706,
   17.23369,
   16.88194,
   20.17424,
   21.72556,
   25.4951,
   29.76575,
   35.73514};
   Double_t _fehx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3001[20] = {
   14,
   11.57584,
   12.12436,
   11.13553,
   12.20656,
   12.04159,
   12.28821,
   13.37909,
   12.32883,
   13.0384,
   13.49074,
   14.38749,
   15.29706,
   17.23369,
   16.88194,
   20.17424,
   21.72556,
   25.4951,
   29.76575,
   35.73514};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(101.578);
   Graph_Graph3001->SetMaximum(1432.722);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3002[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3002[20] = {
   0.2536595,
   0.2980827,
   0.2774051,
   0.3102676,
   0.281214,
   0.2480944,
   0.3081147,
   0.2758421,
   0.2853897,
   0.2616618,
   0.2671457,
   0.2703909,
   0.2754353,
   0.2750242,
   0.2797439,
   0.2837634,
   0.2707002,
   0.2618687,
   0.2394389,
   0.2326271};
   Double_t _fehx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3002[20] = {
   0.2536595,
   0.2980827,
   0.2774051,
   0.3102676,
   0.281214,
   0.2480944,
   0.3081147,
   0.2758421,
   0.2853897,
   0.2616618,
   0.2671457,
   0.2703909,
   0.2754353,
   0.2750242,
   0.2797439,
   0.2837634,
   0.2707002,
   0.2618687,
   0.2394389,
   0.2326271};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3003[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3003[20] = {
   0.2312774,
   0.234215,
   0.240136,
   0.2523267,
   0.2441643,
   0.2208224,
   0.2440924,
   0.2268304,
   0.2341796,
   0.2362306,
   0.2412057,
   0.242007,
   0.250576,
   0.2575449,
   0.2677723,
   0.2699068,
   0.2605734,
   0.2503875,
   0.2297643,
   0.2223051};
   Double_t _fehx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3003[20] = {
   0.2312774,
   0.234215,
   0.240136,
   0.2523267,
   0.2441643,
   0.2208224,
   0.2440924,
   0.2268304,
   0.2341796,
   0.2362306,
   0.2412057,
   0.242007,
   0.250576,
   0.2575449,
   0.2677723,
   0.2699068,
   0.2605734,
   0.2503875,
   0.2297643,
   0.2223051};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3004[20] = {
   0.8748627,
   0.7486579,
   0.9083555,
   0.7864791,
   0.9246992,
   0.8382354,
   1.015712,
   1.048199,
   0.7783838,
   0.7802284,
   0.7706748,
   0.7847268,
   0.8058738,
   0.9064228,
   0.7440065,
   0.8500815,
   0.7831075,
   0.9253966,
   0.9309334,
   0.8819609};
   Double_t _felx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3004[20] = {
   0.06249019,
   0.06467419,
   0.0749199,
   0.07062791,
   0.07575431,
   0.06961166,
   0.08265751,
   0.07834608,
   0.06313526,
   0.05984079,
   0.05712622,
   0.05454228,
   0.05268162,
   0.05259599,
   0.04407114,
   0.04213697,
   0.03604545,
   0.03629704,
   0.03127532,
   0.0246805};
   Double_t _fehx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3004[20] = {
   0.06249019,
   0.06467419,
   0.0749199,
   0.07062791,
   0.07575431,
   0.06961166,
   0.08265751,
   0.07834608,
   0.06313526,
   0.05984079,
   0.05712622,
   0.05454228,
   0.05268162,
   0.05259599,
   0.04407114,
   0.04213697,
   0.03604545,
   0.03629704,
   0.03127532,
   0.0246805};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.6397276);
   Graph_Graph3004->SetMaximum(1.170801);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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

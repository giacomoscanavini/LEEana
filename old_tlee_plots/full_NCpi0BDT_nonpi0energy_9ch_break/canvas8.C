#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Jun  8 11:41:06 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-4.36,1260.256,482.1242);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__22->SetBinContent(0,0.05579997);
   hmc__22->SetBinContent(1,1.20866);
   hmc__22->SetBinContent(2,8.858245);
   hmc__22->SetBinContent(3,15.53092);
   hmc__22->SetBinContent(4,209.76);
   hmc__22->SetBinContent(5,134.1966);
   hmc__22->SetBinContent(6,95.681);
   hmc__22->SetBinContent(7,92.61396);
   hmc__22->SetBinContent(8,79.62138);
   hmc__22->SetBinContent(9,65.77673);
   hmc__22->SetBinContent(10,49.01097);
   hmc__22->SetBinContent(11,42.87178);
   hmc__22->SetBinContent(12,31.3296);
   hmc__22->SetBinContent(13,24.23764);
   hmc__22->SetBinContent(14,17.48839);
   hmc__22->SetBinContent(15,11.36814);
   hmc__22->SetBinContent(16,9.964168);
   hmc__22->SetBinContent(17,10.48069);
   hmc__22->SetBinContent(18,10.13558);
   hmc__22->SetBinContent(19,3.890152);
   hmc__22->SetBinContent(20,2.79249);
   hmc__22->SetBinContent(21,3.244018);
   hmc__22->SetBinContent(22,3.592713);
   hmc__22->SetBinContent(23,3.799246);
   hmc__22->SetBinContent(24,1.474265);
   hmc__22->SetBinContent(25,1.931734);
   hmc__22->SetBinContent(26,11.70884);
   hmc__22->SetBinError(0,0.03945654);
   hmc__22->SetBinError(1,1.41574);
   hmc__22->SetBinError(2,3.168867);
   hmc__22->SetBinError(3,4.188615);
   hmc__22->SetBinError(4,37.69497);
   hmc__22->SetBinError(5,24.68104);
   hmc__22->SetBinError(6,17.50676);
   hmc__22->SetBinError(7,20.29997);
   hmc__22->SetBinError(8,21.0364);
   hmc__22->SetBinError(9,16.29278);
   hmc__22->SetBinError(10,14.14341);
   hmc__22->SetBinError(11,11.74384);
   hmc__22->SetBinError(12,11.73179);
   hmc__22->SetBinError(13,10.2921);
   hmc__22->SetBinError(14,10.24571);
   hmc__22->SetBinError(15,6.114482);
   hmc__22->SetBinError(16,5.939724);
   hmc__22->SetBinError(17,4.869072);
   hmc__22->SetBinError(18,11.72441);
   hmc__22->SetBinError(19,6.683972);
   hmc__22->SetBinError(20,3.064002);
   hmc__22->SetBinError(21,9.564877);
   hmc__22->SetBinError(22,5.746663);
   hmc__22->SetBinError(23,4.725087);
   hmc__22->SetBinError(24,3.340235);
   hmc__22->SetBinError(25,3.844942);
   hmc__22->SetBinError(26,7.455917);
   hmc__22->SetMinimum(-4.36);
   hmc__22->SetMaximum(457.8);
   hmc__22->SetEntries(926.8397);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-150,1100);
   hs8_stack_8->SetMinimum(-4.830136e-08);
   hs8_stack_8->SetMaximum(220.248);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,1.214546);
   hbadmatch_stack_1->SetBinContent(4,4.271624);
   hbadmatch_stack_1->SetBinContent(5,3.569379);
   hbadmatch_stack_1->SetBinContent(6,2.121815);
   hbadmatch_stack_1->SetBinContent(7,3.39333);
   hbadmatch_stack_1->SetBinContent(8,4.612841);
   hbadmatch_stack_1->SetBinContent(9,3.136514);
   hbadmatch_stack_1->SetBinContent(10,2.394159);
   hbadmatch_stack_1->SetBinContent(11,2.069319);
   hbadmatch_stack_1->SetBinContent(12,1.114261);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinContent(14,0.7834804);
   hbadmatch_stack_1->SetBinContent(15,1.097771);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,0.7319179);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.9557772);
   hbadmatch_stack_1->SetBinError(3,0.6522134);
   hbadmatch_stack_1->SetBinError(4,1.119862);
   hbadmatch_stack_1->SetBinError(5,0.9933448);
   hbadmatch_stack_1->SetBinError(6,0.7789687);
   hbadmatch_stack_1->SetBinError(7,1.076818);
   hbadmatch_stack_1->SetBinError(8,1.485209);
   hbadmatch_stack_1->SetBinError(9,0.9363926);
   hbadmatch_stack_1->SetBinError(10,0.785313);
   hbadmatch_stack_1->SetBinError(11,0.7539482);
   hbadmatch_stack_1->SetBinError(12,0.5713123);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetBinError(14,0.3917439);
   hbadmatch_stack_1->SetBinError(15,0.5646656);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.438694);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.4924161);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(2,5.86391);
   hext_stack_2->SetBinContent(3,6.705829);
   hext_stack_2->SetBinContent(4,42.1212);
   hext_stack_2->SetBinContent(5,28.7195);
   hext_stack_2->SetBinContent(6,23.21305);
   hext_stack_2->SetBinContent(7,18.71899);
   hext_stack_2->SetBinContent(8,14.55643);
   hext_stack_2->SetBinContent(9,10.51803);
   hext_stack_2->SetBinContent(10,7.619999);
   hext_stack_2->SetBinContent(11,11.16683);
   hext_stack_2->SetBinContent(12,5.758588);
   hext_stack_2->SetBinContent(13,6.385841);
   hext_stack_2->SetBinContent(14,2.916804);
   hext_stack_2->SetBinContent(15,1.626396);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinContent(17,2.192989);
   hext_stack_2->SetBinContent(18,2.103607);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,0.8131978);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,4.95257);
   hext_stack_2->SetBinError(2,1.887831);
   hext_stack_2->SetBinError(3,1.757767);
   hext_stack_2->SetBinError(4,4.448078);
   hext_stack_2->SetBinError(5,3.615022);
   hext_stack_2->SetBinError(6,3.204752);
   hext_stack_2->SetBinError(7,2.779403);
   hext_stack_2->SetBinError(8,2.532621);
   hext_stack_2->SetBinError(9,2.182638);
   hext_stack_2->SetBinError(10,1.79254);
   hext_stack_2->SetBinError(11,2.23033);
   hext_stack_2->SetBinError(12,1.518408);
   hext_stack_2->SetBinError(13,1.766249);
   hext_stack_2->SetBinError(14,1.132884);
   hext_stack_2->SetBinError(15,0.8131978);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetBinError(17,0.9009267);
   hext_stack_2->SetBinError(18,0.9761052);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.5750177);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,1.331809);
   hext_stack_2->SetEntries(479);

   ci = 1533;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(4,5.300666);
   hdirt_stack_3->SetBinContent(5,3.415567);
   hdirt_stack_3->SetBinContent(6,4.065757);
   hdirt_stack_3->SetBinContent(7,1.6319);
   hdirt_stack_3->SetBinContent(8,0.9792153);
   hdirt_stack_3->SetBinContent(9,0.9584211);
   hdirt_stack_3->SetBinContent(10,0.2805693);
   hdirt_stack_3->SetBinContent(11,0.4950385);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(13,0.6763744);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(21,0.3895662);
   hdirt_stack_3->SetBinError(4,1.232761);
   hdirt_stack_3->SetBinError(5,0.9228969);
   hdirt_stack_3->SetBinError(6,1.32974);
   hdirt_stack_3->SetBinError(7,0.6829059);
   hdirt_stack_3->SetBinError(8,0.5231539);
   hdirt_stack_3->SetBinError(9,0.4387171);
   hdirt_stack_3->SetBinError(10,0.2015666);
   hdirt_stack_3->SetBinError(11,0.2933304);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(13,0.4782689);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(21,0.3895662);
   hdirt_stack_3->SetEntries(82);

   ci = 1534;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(2,0.8770706);
   houtFV_stack_4->SetBinContent(3,1.860647);
   houtFV_stack_4->SetBinContent(4,44.10225);
   houtFV_stack_4->SetBinContent(5,37.67982);
   houtFV_stack_4->SetBinContent(6,23.3333);
   houtFV_stack_4->SetBinContent(7,20.81126);
   houtFV_stack_4->SetBinContent(8,18.17455);
   houtFV_stack_4->SetBinContent(9,15.62774);
   houtFV_stack_4->SetBinContent(10,10.72187);
   houtFV_stack_4->SetBinContent(11,8.087242);
   houtFV_stack_4->SetBinContent(12,6.61831);
   houtFV_stack_4->SetBinContent(13,4.034746);
   houtFV_stack_4->SetBinContent(14,2.531945);
   houtFV_stack_4->SetBinContent(15,1.165478);
   houtFV_stack_4->SetBinContent(16,2.108793);
   houtFV_stack_4->SetBinContent(17,1.125349);
   houtFV_stack_4->SetBinContent(18,1.805704);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.4069764);
   houtFV_stack_4->SetBinContent(22,0.3401776);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(26,1.17353);
   houtFV_stack_4->SetBinError(2,0.5197486);
   houtFV_stack_4->SetBinError(3,0.6808988);
   houtFV_stack_4->SetBinError(4,3.339053);
   houtFV_stack_4->SetBinError(5,3.073565);
   houtFV_stack_4->SetBinError(6,2.634814);
   houtFV_stack_4->SetBinError(7,2.365956);
   houtFV_stack_4->SetBinError(8,2.153936);
   houtFV_stack_4->SetBinError(9,2.213733);
   houtFV_stack_4->SetBinError(10,1.656882);
   houtFV_stack_4->SetBinError(11,1.390413);
   houtFV_stack_4->SetBinError(12,1.345202);
   houtFV_stack_4->SetBinError(13,1.042151);
   houtFV_stack_4->SetBinError(14,0.743873);
   houtFV_stack_4->SetBinError(15,0.5359521);
   houtFV_stack_4->SetBinError(16,0.723795);
   houtFV_stack_4->SetBinError(17,0.5194673);
   houtFV_stack_4->SetBinError(18,0.7080169);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(21,0.4069764);
   houtFV_stack_4->SetBinError(22,0.3401776);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(26,0.4790957);
   houtFV_stack_4->SetEntries(862);

   ci = 1535;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.946716);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.509016);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9282512);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.505038);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.336735);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1536;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1537;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2783359);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.6691039);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.464922);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.7884);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.75667);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.69795);
   hNCpi0inFVres_stack_7->SetBinContent(7,13.53737);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.73689);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.613571);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.308402);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.321364);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.147476);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.326334);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.324758);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6403718);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9212041);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3477539);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2504359);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.3206861);
   hNCpi0inFVres_stack_7->SetBinError(0,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1458657);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2548204);
   hNCpi0inFVres_stack_7->SetBinError(3,0.381955);
   hNCpi0inFVres_stack_7->SetBinError(4,2.279241);
   hNCpi0inFVres_stack_7->SetBinError(5,1.428054);
   hNCpi0inFVres_stack_7->SetBinError(6,1.100056);
   hNCpi0inFVres_stack_7->SetBinError(7,1.202708);
   hNCpi0inFVres_stack_7->SetBinError(8,1.056777);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8638943);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5871763);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7140957);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4303483);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4524654);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3943225);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2118699);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3520856);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1731161);
   hNCpi0inFVres_stack_7->SetBinError(18,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1431726);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(22,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(23,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(24,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2201295);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1538;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.66365);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.590818);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.765188);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.723006);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.854858);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.924108);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.575858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.19854);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5025361);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3909362);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.037918);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7858845);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6489433);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6532275);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.41265);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3823787);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4031079);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3053129);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2820092);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2764336);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1539;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1540;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1541;
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
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(1,0.3934307);
   hCCpi0inFV_stack_11->SetBinContent(2,0.9269427);
   hCCpi0inFV_stack_11->SetBinContent(3,1.318683);
   hCCpi0inFV_stack_11->SetBinContent(4,19.99582);
   hCCpi0inFV_stack_11->SetBinContent(5,18.06691);
   hCCpi0inFV_stack_11->SetBinContent(6,18.36279);
   hCCpi0inFV_stack_11->SetBinContent(7,18.31966);
   hCCpi0inFV_stack_11->SetBinContent(8,22.52612);
   hCCpi0inFV_stack_11->SetBinContent(9,17.92677);
   hCCpi0inFV_stack_11->SetBinContent(10,16.76888);
   hCCpi0inFV_stack_11->SetBinContent(11,10.54342);
   hCCpi0inFV_stack_11->SetBinContent(12,10.30856);
   hCCpi0inFV_stack_11->SetBinContent(13,7.085507);
   hCCpi0inFV_stack_11->SetBinContent(14,7.700652);
   hCCpi0inFV_stack_11->SetBinContent(15,5.449381);
   hCCpi0inFV_stack_11->SetBinContent(16,4.644856);
   hCCpi0inFV_stack_11->SetBinContent(17,4.671056);
   hCCpi0inFV_stack_11->SetBinContent(18,4.196482);
   hCCpi0inFV_stack_11->SetBinContent(19,1.858957);
   hCCpi0inFV_stack_11->SetBinContent(20,1.344548);
   hCCpi0inFV_stack_11->SetBinContent(21,1.662242);
   hCCpi0inFV_stack_11->SetBinContent(22,2.537621);
   hCCpi0inFV_stack_11->SetBinContent(23,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(24,1.121968);
   hCCpi0inFV_stack_11->SetBinContent(25,0.6803553);
   hCCpi0inFV_stack_11->SetBinContent(26,3.659589);
   hCCpi0inFV_stack_11->SetBinError(1,0.2781975);
   hCCpi0inFV_stack_11->SetBinError(2,0.4800908);
   hCCpi0inFV_stack_11->SetBinError(3,0.5542732);
   hCCpi0inFV_stack_11->SetBinError(4,2.267618);
   hCCpi0inFV_stack_11->SetBinError(5,2.117169);
   hCCpi0inFV_stack_11->SetBinError(6,2.151051);
   hCCpi0inFV_stack_11->SetBinError(7,2.163927);
   hCCpi0inFV_stack_11->SetBinError(8,2.38167);
   hCCpi0inFV_stack_11->SetBinError(9,2.164257);
   hCCpi0inFV_stack_11->SetBinError(10,2.045347);
   hCCpi0inFV_stack_11->SetBinError(11,1.638287);
   hCCpi0inFV_stack_11->SetBinError(12,1.630742);
   hCCpi0inFV_stack_11->SetBinError(13,1.316112);
   hCCpi0inFV_stack_11->SetBinError(14,1.434419);
   hCCpi0inFV_stack_11->SetBinError(15,1.184707);
   hCCpi0inFV_stack_11->SetBinError(16,1.075365);
   hCCpi0inFV_stack_11->SetBinError(17,1.080508);
   hCCpi0inFV_stack_11->SetBinError(18,1.056731);
   hCCpi0inFV_stack_11->SetBinError(19,0.6804124);
   hCCpi0inFV_stack_11->SetBinError(20,0.5640542);
   hCCpi0inFV_stack_11->SetBinError(21,0.6513556);
   hCCpi0inFV_stack_11->SetBinError(22,0.8329108);
   hCCpi0inFV_stack_11->SetBinError(23,0.48078);
   hCCpi0inFV_stack_11->SetBinError(24,0.5181909);
   hCCpi0inFV_stack_11->SetBinError(25,0.4810838);
   hCCpi0inFV_stack_11->SetBinError(26,0.9809496);
   hCCpi0inFV_stack_11->SetEntries(859);

   ci = 1542;
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
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.1967154);
   hNCinFV_stack_12->SetBinContent(3,0.3917402);
   hNCinFV_stack_12->SetBinContent(4,3.859685);
   hNCinFV_stack_12->SetBinContent(5,3.074514);
   hNCinFV_stack_12->SetBinContent(6,1.370245);
   hNCinFV_stack_12->SetBinContent(7,1.125349);
   hNCinFV_stack_12->SetBinContent(8,0.8753801);
   hNCinFV_stack_12->SetBinContent(9,1.717185);
   hNCinFV_stack_12->SetBinContent(10,0.3900497);
   hNCinFV_stack_12->SetBinContent(11,0.3401776);
   hNCinFV_stack_12->SetBinContent(12,0.5884556);
   hNCinFV_stack_12->SetBinContent(13,0.3917402);
   hNCinFV_stack_12->SetBinContent(15,0.1967154);
   hNCinFV_stack_12->SetBinContent(17,0.3917402);
   hNCinFV_stack_12->SetBinError(1,0.1967154);
   hNCinFV_stack_12->SetBinError(3,0.2770047);
   hNCinFV_stack_12->SetBinError(4,1.001141);
   hNCinFV_stack_12->SetBinError(5,0.920955);
   hNCinFV_stack_12->SetBinError(6,0.5179089);
   hNCinFV_stack_12->SetBinError(7,0.5194673);
   hNCinFV_stack_12->SetBinError(8,0.5191111);
   hNCinFV_stack_12->SetBinError(9,0.6217711);
   hNCinFV_stack_12->SetBinError(10,0.2758068);
   hNCinFV_stack_12->SetBinError(11,0.3401776);
   hNCinFV_stack_12->SetBinError(12,0.3397478);
   hNCinFV_stack_12->SetBinError(13,0.2770047);
   hNCinFV_stack_12->SetBinError(15,0.1967154);
   hNCinFV_stack_12->SetBinError(17,0.2770047);
   hNCinFV_stack_12->SetEntries(65);

   ci = 1543;
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
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(2,0.3401995);
   hnumuCCinFV_stack_13->SetBinContent(3,2.156719);
   hnumuCCinFV_stack_13->SetBinContent(4,20.24259);
   hnumuCCinFV_stack_13->SetBinContent(5,8.35552);
   hnumuCCinFV_stack_13->SetBinContent(6,6.274925);
   hnumuCCinFV_stack_13->SetBinContent(7,10.08289);
   hnumuCCinFV_stack_13->SetBinContent(8,4.970123);
   hnumuCCinFV_stack_13->SetBinContent(9,5.675768);
   hnumuCCinFV_stack_13->SetBinContent(10,4.727816);
   hnumuCCinFV_stack_13->SetBinContent(11,4.413027);
   hnumuCCinFV_stack_13->SetBinContent(12,3.190036);
   hnumuCCinFV_stack_13->SetBinContent(13,2.299912);
   hnumuCCinFV_stack_13->SetBinContent(14,1.443091);
   hnumuCCinFV_stack_13->SetBinContent(15,0.661589);
   hnumuCCinFV_stack_13->SetBinContent(16,0.4230697);
   hnumuCCinFV_stack_13->SetBinContent(17,0.785171);
   hnumuCCinFV_stack_13->SetBinContent(18,1.158372);
   hnumuCCinFV_stack_13->SetBinContent(19,0.8247588);
   hnumuCCinFV_stack_13->SetBinContent(20,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(21,0.4329366);
   hnumuCCinFV_stack_13->SetBinContent(23,0.8770706);
   hnumuCCinFV_stack_13->SetBinContent(25,1.195579);
   hnumuCCinFV_stack_13->SetBinContent(26,0.6187906);
   hnumuCCinFV_stack_13->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(3,0.9825595);
   hnumuCCinFV_stack_13->SetBinError(4,2.971869);
   hnumuCCinFV_stack_13->SetBinError(5,1.463397);
   hnumuCCinFV_stack_13->SetBinError(6,1.475639);
   hnumuCCinFV_stack_13->SetBinError(7,2.674214);
   hnumuCCinFV_stack_13->SetBinError(8,1.112706);
   hnumuCCinFV_stack_13->SetBinError(9,1.235539);
   hnumuCCinFV_stack_13->SetBinError(10,1.127327);
   hnumuCCinFV_stack_13->SetBinError(11,1.062996);
   hnumuCCinFV_stack_13->SetBinError(12,0.8752263);
   hnumuCCinFV_stack_13->SetBinError(13,0.748547);
   hnumuCCinFV_stack_13->SetBinError(14,0.6217345);
   hnumuCCinFV_stack_13->SetBinError(15,0.3832093);
   hnumuCCinFV_stack_13->SetBinError(16,0.3000652);
   hnumuCCinFV_stack_13->SetBinError(17,0.3925882);
   hnumuCCinFV_stack_13->SetBinError(18,0.6010811);
   hnumuCCinFV_stack_13->SetBinError(19,0.5132618);
   hnumuCCinFV_stack_13->SetBinError(20,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(21,0.3074043);
   hnumuCCinFV_stack_13->SetBinError(23,0.5197486);
   hnumuCCinFV_stack_13->SetBinError(25,1.195579);
   hnumuCCinFV_stack_13->SetBinError(26,0.3580236);
   hnumuCCinFV_stack_13->SetEntries(320);

   ci = 1544;
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
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(4,1.077453);
   hnueCCinFV_stack_14->SetBinContent(5,2.347263);
   hnueCCinFV_stack_14->SetBinContent(6,0.6113933);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(9,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,0.5954382);
   hnueCCinFV_stack_14->SetBinError(5,1.01571);
   hnueCCinFV_stack_14->SetBinError(6,0.3534142);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(9,0.2463303);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(22,0.1967154);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1545;
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
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__23->SetBinContent(0,0.05579997);
   hmcerror__23->SetBinContent(1,1.20866);
   hmcerror__23->SetBinContent(2,8.858245);
   hmcerror__23->SetBinContent(3,15.53092);
   hmcerror__23->SetBinContent(4,209.76);
   hmcerror__23->SetBinContent(5,134.1966);
   hmcerror__23->SetBinContent(6,95.681);
   hmcerror__23->SetBinContent(7,92.61396);
   hmcerror__23->SetBinContent(8,79.62138);
   hmcerror__23->SetBinContent(9,65.77673);
   hmcerror__23->SetBinContent(10,49.01097);
   hmcerror__23->SetBinContent(11,42.87178);
   hmcerror__23->SetBinContent(12,31.3296);
   hmcerror__23->SetBinContent(13,24.23764);
   hmcerror__23->SetBinContent(14,17.48839);
   hmcerror__23->SetBinContent(15,11.36814);
   hmcerror__23->SetBinContent(16,9.964168);
   hmcerror__23->SetBinContent(17,10.48069);
   hmcerror__23->SetBinContent(18,10.13558);
   hmcerror__23->SetBinContent(19,3.890152);
   hmcerror__23->SetBinContent(20,2.79249);
   hmcerror__23->SetBinContent(21,3.244018);
   hmcerror__23->SetBinContent(22,3.592713);
   hmcerror__23->SetBinContent(23,3.799246);
   hmcerror__23->SetBinContent(24,1.474265);
   hmcerror__23->SetBinContent(25,1.931734);
   hmcerror__23->SetBinContent(26,11.70884);
   hmcerror__23->SetBinError(0,0.03945654);
   hmcerror__23->SetBinError(1,1.41574);
   hmcerror__23->SetBinError(2,3.168867);
   hmcerror__23->SetBinError(3,4.188615);
   hmcerror__23->SetBinError(4,37.69497);
   hmcerror__23->SetBinError(5,24.68104);
   hmcerror__23->SetBinError(6,17.50676);
   hmcerror__23->SetBinError(7,20.29997);
   hmcerror__23->SetBinError(8,21.0364);
   hmcerror__23->SetBinError(9,16.29278);
   hmcerror__23->SetBinError(10,14.14341);
   hmcerror__23->SetBinError(11,11.74384);
   hmcerror__23->SetBinError(12,11.73179);
   hmcerror__23->SetBinError(13,10.2921);
   hmcerror__23->SetBinError(14,10.24571);
   hmcerror__23->SetBinError(15,6.114482);
   hmcerror__23->SetBinError(16,5.939724);
   hmcerror__23->SetBinError(17,4.869072);
   hmcerror__23->SetBinError(18,11.72441);
   hmcerror__23->SetBinError(19,6.683972);
   hmcerror__23->SetBinError(20,3.064002);
   hmcerror__23->SetBinError(21,9.564877);
   hmcerror__23->SetBinError(22,5.746663);
   hmcerror__23->SetBinError(23,4.725087);
   hmcerror__23->SetBinError(24,3.340235);
   hmcerror__23->SetBinError(25,3.844942);
   hmcerror__23->SetBinError(26,7.455917);
   hmcerror__23->SetEntries(926.8397);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   2,
   1,
   15,
   218,
   118,
   90,
   90,
   65,
   54,
   45,
   46,
   28,
   28,
   18,
   12,
   8,
   6,
   5,
   8,
   4,
   5,
   1,
   4,
   2,
   1};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   2,
   1,
   4.0385,
   14.76482,
   10.86278,
   9.6093,
   9.6093,
   8.1893,
   7.4785,
   6.8416,
   6.9153,
   5.4358,
   5.4358,
   4.4008,
   3.64022,
   3.0307,
   2.67925,
   2.48995,
   3.0307,
   2.29683,
   2.48995,
   1,
   2.29683,
   2,
   1};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   1.51917,
   1.35971,
   3.8197,
   14.76482,
   10.86278,
   9.4079,
   9.4079,
   7.9866,
   7.275,
   6.637,
   6.7108,
   5.2271,
   5.2271,
   4.1858,
   3.4155,
   2.7896,
   2.41858,
   2.21064,
   2.7896,
   1.98186,
   2.21064,
   1.35971,
   1.98186,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-275,1225);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(256.0413);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 874.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 31.8","F");

   ci = 1532;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 194.2","F");

   ci = 1533;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 202.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

   ci = 1536;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1537;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.5","F");

   ci = 1538;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

   ci = 1539;
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

   ci = 1540;
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

   ci = 1541;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 199.3","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 81.4","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   1.17133,
   0.3577308,
   0.2696952,
   0.1797052,
   0.1839171,
   0.1829701,
   0.2191891,
   0.2642054,
   0.2476983,
   0.2885764,
   0.2739293,
   0.3744633,
   0.4246331,
   0.5858579,
   0.5378614,
   0.5961084,
   0.4645755,
   1.156758,
   1.718178,
   1.09723,
   2.948466,
   1.599533,
   1.243691,
   2.265695,
   1.99041};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   1.17133,
   0.3577308,
   0.2696952,
   0.1797052,
   0.1839171,
   0.1829701,
   0.2191891,
   0.2642054,
   0.2476983,
   0.2885764,
   0.2739293,
   0.3744633,
   0.4246331,
   0.5858579,
   0.5378614,
   0.5961084,
   0.4645755,
   1.156758,
   1.718178,
   1.09723,
   2.948466,
   1.599533,
   1.243691,
   2.265695,
   1.99041};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-275,1225);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.8294809,
   0.2496642,
   0.189887,
   0.155736,
   0.1679281,
   0.1521589,
   0.1795787,
   0.1792301,
   0.1870771,
   0.1866655,
   0.1726402,
   0.1900439,
   0.197648,
   0.2475718,
   0.2483125,
   0.2528304,
   0.2820077,
   0.2383741,
   0.3665771,
   0.4530443,
   0.4201522,
   0.437295,
   0.3801802,
   0.5893809,
   1.139646};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.8294809,
   0.2496642,
   0.189887,
   0.155736,
   0.1679281,
   0.1521589,
   0.1795787,
   0.1792301,
   0.1870771,
   0.1866655,
   0.1726402,
   0.1900439,
   0.197648,
   0.2475718,
   0.2483125,
   0.2528304,
   0.2820077,
   0.2383741,
   0.3665771,
   0.4530443,
   0.4201522,
   0.437295,
   0.3801802,
   0.5893809,
   1.139646};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-275,1225);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   1.654726,
   0.1128892,
   0.9658152,
   1.039283,
   0.8793071,
   0.9406256,
   0.9717757,
   0.8163636,
   0.820959,
   0.9181618,
   1.072967,
   0.8937235,
   1.155228,
   1.029254,
   1.055582,
   0.8028769,
   0.5724814,
   0.4933116,
   2.056475,
   1.432414,
   1.541298,
   0.2783412,
   1.05284,
   1.356608,
   0.5176696};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   1.654726,
   0.1128892,
   0.2600296,
   0.07038913,
   0.08094678,
   0.1004306,
   0.1037565,
   0.102853,
   0.1136952,
   0.1395932,
   0.1613019,
   0.1735036,
   0.224271,
   0.2516413,
   0.3202126,
   0.3041599,
   0.2556368,
   0.2456642,
   0.7790698,
   0.8225026,
   0.7675512,
   0.2783412,
   0.6045489,
   1.356608,
   0.5176696};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   1.256905,
   0.1534965,
   0.2459416,
   0.07038913,
   0.08094678,
   0.09832569,
   0.1015819,
   0.1003072,
   0.1106014,
   0.1354187,
   0.1565319,
   0.1668422,
   0.2156605,
   0.2393474,
   0.300445,
   0.2799632,
   0.2307653,
   0.2181069,
   0.7170928,
   0.7097108,
   0.6814511,
   0.3784633,
   0.5216456,
   1.030459,
   0.7038805};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-275,1225);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(3.202793);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 22:15:18 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-1.307692,-7.780157,1.25641,860.3216);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmc__22->SetBinContent(1,7.552906);
   hmc__22->SetBinContent(2,4.302752);
   hmc__22->SetBinContent(3,5.575248);
   hmc__22->SetBinContent(4,8.906241);
   hmc__22->SetBinContent(5,6.109437);
   hmc__22->SetBinContent(6,6.273849);
   hmc__22->SetBinContent(7,8.729741);
   hmc__22->SetBinContent(8,11.27708);
   hmc__22->SetBinContent(9,11.79264);
   hmc__22->SetBinContent(10,14.46527);
   hmc__22->SetBinContent(11,12.50151);
   hmc__22->SetBinContent(12,19.60249);
   hmc__22->SetBinContent(13,25.58616);
   hmc__22->SetBinContent(14,28.505);
   hmc__22->SetBinContent(15,31.05872);
   hmc__22->SetBinContent(16,40.5881);
   hmc__22->SetBinContent(17,50.1828);
   hmc__22->SetBinContent(18,61.74825);
   hmc__22->SetBinContent(19,71.8924);
   hmc__22->SetBinContent(20,89.1966);
   hmc__22->SetBinContent(21,121.9921);
   hmc__22->SetBinContent(22,161.7644);
   hmc__22->SetBinContent(23,232.7894);
   hmc__22->SetBinContent(24,343.2803);
   hmc__22->SetBinContent(25,389.0079);
   hmc__22->SetBinError(1,2.923341);
   hmc__22->SetBinError(2,1.422091);
   hmc__22->SetBinError(3,2.040449);
   hmc__22->SetBinError(4,2.820704);
   hmc__22->SetBinError(5,1.956715);
   hmc__22->SetBinError(6,2.355985);
   hmc__22->SetBinError(7,2.758646);
   hmc__22->SetBinError(8,3.691295);
   hmc__22->SetBinError(9,3.451348);
   hmc__22->SetBinError(10,4.107994);
   hmc__22->SetBinError(11,3.413645);
   hmc__22->SetBinError(12,5.037673);
   hmc__22->SetBinError(13,6.667698);
   hmc__22->SetBinError(14,7.986022);
   hmc__22->SetBinError(15,7.675068);
   hmc__22->SetBinError(16,9.800558);
   hmc__22->SetBinError(17,11.98274);
   hmc__22->SetBinError(18,15.35772);
   hmc__22->SetBinError(19,15.96777);
   hmc__22->SetBinError(20,19.85689);
   hmc__22->SetBinError(21,27.71229);
   hmc__22->SetBinError(22,36.04483);
   hmc__22->SetBinError(23,50.8583);
   hmc__22->SetBinError(24,76.02343);
   hmc__22->SetBinError(25,81.33846);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-7.780157);
   hmc__22->SetMaximum(816.9165);
   hmc__22->SetEntries(1748.127);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-1,1);
   hs8_stack_8->SetMinimum(-2.264013e-08);
   hs8_stack_8->SetMaximum(408.4583);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.2211568);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.4100147);
   hbadmatch_stack_1->SetBinContent(14,0.5352025);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.3954824);
   hbadmatch_stack_1->SetBinContent(17,0.4129704);
   hbadmatch_stack_1->SetBinContent(18,0.5901461);
   hbadmatch_stack_1->SetBinContent(19,0.4530355);
   hbadmatch_stack_1->SetBinContent(20,0.9983876);
   hbadmatch_stack_1->SetBinContent(21,0.7319179);
   hbadmatch_stack_1->SetBinContent(22,0.9243553);
   hbadmatch_stack_1->SetBinContent(23,0.4250777);
   hbadmatch_stack_1->SetBinContent(24,1.458377);
   hbadmatch_stack_1->SetBinContent(25,1.660551);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.2211568);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.4100147);
   hbadmatch_stack_1->SetBinError(14,0.3921167);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.3954824);
   hbadmatch_stack_1->SetBinError(17,0.2923408);
   hbadmatch_stack_1->SetBinError(18,0.340721);
   hbadmatch_stack_1->SetBinError(19,0.3231052);
   hbadmatch_stack_1->SetBinError(20,0.510916);
   hbadmatch_stack_1->SetBinError(21,0.438694);
   hbadmatch_stack_1->SetBinError(22,0.7537618);
   hbadmatch_stack_1->SetBinError(23,0.3014072);
   hbadmatch_stack_1->SetBinError(24,0.5740054);
   hbadmatch_stack_1->SetBinError(25,0.650847);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(4,0.7309963);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.7309963);
   hext_stack_2->SetBinContent(8,1.137595);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(10,1.461993);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,5.553873);
   hext_stack_2->SetBinContent(13,5.572643);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,1.78639);
   hext_stack_2->SetBinContent(17,2.580818);
   hext_stack_2->SetBinContent(18,1.779209);
   hext_stack_2->SetBinContent(19,6.292049);
   hext_stack_2->SetBinContent(20,3.946247);
   hext_stack_2->SetBinContent(21,6.207077);
   hext_stack_2->SetBinContent(22,5.166044);
   hext_stack_2->SetBinContent(23,2.263601);
   hext_stack_2->SetBinContent(24,4.345666);
   hext_stack_2->SetBinContent(25,1.868591);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(4,0.5201503);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.5201503);
   hext_stack_2->SetBinError(8,0.6602113);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(10,0.7356036);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,1.748219);
   hext_stack_2->SetBinError(13,1.670027);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,0.8039566);
   hext_stack_2->SetBinError(17,1.115469);
   hext_stack_2->SetBinError(18,0.9206235);
   hext_stack_2->SetBinError(19,1.767944);
   hext_stack_2->SetBinError(20,1.458663);
   hext_stack_2->SetBinError(21,1.844413);
   hext_stack_2->SetBinError(22,1.619774);
   hext_stack_2->SetBinError(23,0.9684198);
   hext_stack_2->SetBinError(24,1.579311);
   hext_stack_2->SetBinError(25,0.840497);
   hext_stack_2->SetEntries(130);

   ci = 1526;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.3820091);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.3042167);
   hdirt_stack_3->SetBinContent(21,0.3981555);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,0.6308452);
   hdirt_stack_3->SetBinContent(24,0.4045523);
   hdirt_stack_3->SetBinContent(25,0.5758626);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(6,0.3381872);
   hdirt_stack_3->SetBinError(9,0.3820091);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(17,0.2160277);
   hdirt_stack_3->SetBinError(21,0.28293);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.3966501);
   hdirt_stack_3->SetBinError(24,0.3001263);
   hdirt_stack_3->SetBinError(25,0.3389606);
   hdirt_stack_3->SetEntries(20);

   ci = 1527;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(2,0.2489929);
   houtFV_stack_4->SetBinContent(3,1.320373);
   houtFV_stack_4->SetBinContent(4,0.1967154);
   houtFV_stack_4->SetBinContent(5,0.1967154);
   houtFV_stack_4->SetBinContent(6,0.1950248);
   houtFV_stack_4->SetBinContent(7,0.536893);
   houtFV_stack_4->SetBinContent(8,0.3934307);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,0.3900497);
   houtFV_stack_4->SetBinContent(11,0.3401776);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.3401776);
   houtFV_stack_4->SetBinContent(14,0.9853203);
   houtFV_stack_4->SetBinContent(15,0.6695492);
   houtFV_stack_4->SetBinContent(16,1.443838);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,0.8358426);
   houtFV_stack_4->SetBinContent(19,0.608196);
   houtFV_stack_4->SetBinContent(20,1.717094);
   houtFV_stack_4->SetBinContent(21,1.901032);
   houtFV_stack_4->SetBinContent(22,3.032628);
   houtFV_stack_4->SetBinContent(23,4.560956);
   houtFV_stack_4->SetBinContent(24,4.04128);
   houtFV_stack_4->SetBinContent(25,3.420846);
   houtFV_stack_4->SetBinError(2,0.2489929);
   houtFV_stack_4->SetBinError(3,0.5548703);
   houtFV_stack_4->SetBinError(4,0.1967154);
   houtFV_stack_4->SetBinError(5,0.1967154);
   houtFV_stack_4->SetBinError(6,0.1950249);
   houtFV_stack_4->SetBinError(7,0.3929602);
   houtFV_stack_4->SetBinError(8,0.2781975);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.2758068);
   houtFV_stack_4->SetBinError(11,0.3401776);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.3401776);
   houtFV_stack_4->SetBinError(14,0.4406842);
   houtFV_stack_4->SetBinError(15,0.4147474);
   houtFV_stack_4->SetBinError(16,0.6258244);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.3946172);
   houtFV_stack_4->SetBinError(19,0.4330758);
   houtFV_stack_4->SetBinError(20,0.6821058);
   houtFV_stack_4->SetBinError(21,0.6732091);
   houtFV_stack_4->SetBinError(22,0.8684202);
   houtFV_stack_4->SetBinError(23,1.871162);
   houtFV_stack_4->SetBinError(24,1.096941);
   houtFV_stack_4->SetBinError(25,0.8762995);
   houtFV_stack_4->SetEntries(118);

   ci = 1528;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03076306);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1529;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1099207);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1530;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.270555);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.01269218);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.01830775);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.01677029);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.01754354);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.04146549);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2238641);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.03092161);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.1148666);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.08233447);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2314837);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.4795454);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2981304);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2129751);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4131344);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.5612454);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2338362);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.5309042);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.535209);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.401563);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.088707);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.520169);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.866512);
   hNCpi0inFVres_stack_7->SetBinError(1,0.149781);
   hNCpi0inFVres_stack_7->SetBinError(2,0.01269218);
   hNCpi0inFVres_stack_7->SetBinError(3,0.01830775);
   hNCpi0inFVres_stack_7->SetBinError(4,0.01677029);
   hNCpi0inFVres_stack_7->SetBinError(6,0.01754354);
   hNCpi0inFVres_stack_7->SetBinError(7,0.02971407);
   hNCpi0inFVres_stack_7->SetBinError(8,0.1373408);
   hNCpi0inFVres_stack_7->SetBinError(9,0.02186727);
   hNCpi0inFVres_stack_7->SetBinError(10,0.07234602);
   hNCpi0inFVres_stack_7->SetBinError(11,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(12,0.04284628);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1863547);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1972227);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1771391);
   hNCpi0inFVres_stack_7->SetBinError(16,0.07625011);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1794474);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2447637);
   hNCpi0inFVres_stack_7->SetBinError(19,0.07624242);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1727376);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4463923);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3742814);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6102209);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8631658);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7449072);
   hNCpi0inFVres_stack_7->SetEntries(413);

   ci = 1531;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.135997);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.04248147);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.1551759);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.07103214);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.0508617);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.08302341);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.09689997);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1201886);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3212953);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.07801536);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.21925);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2311003);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4404342);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.213397);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1923023);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3749821);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.323627);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.978936);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.71898);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.841421);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.07355);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.851625);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.08070529);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03148061);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.113218);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.04229465);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.05086169);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.06309388);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.08143953);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1201886);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1580589);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.05853553);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1473025);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1970865);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1991332);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1219939);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1133901);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.18172);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1689408);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3187133);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.502156);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8291491);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8438644);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.065368);
   hNCpi0inFVdis_stack_8->SetEntries(337);

   ci = 1532;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);

   ci = 1533;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(2,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(3,3.843136);
   hCCpi0inFV_stack_10->SetBinContent(4,4.845035);
   hCCpi0inFV_stack_10->SetBinContent(5,3.655537);
   hCCpi0inFV_stack_10->SetBinContent(6,3.804742);
   hCCpi0inFV_stack_10->SetBinContent(7,4.402447);
   hCCpi0inFV_stack_10->SetBinContent(8,6.49367);
   hCCpi0inFV_stack_10->SetBinContent(9,5.699508);
   hCCpi0inFV_stack_10->SetBinContent(10,8.590237);
   hCCpi0inFV_stack_10->SetBinContent(11,8.149246);
   hCCpi0inFV_stack_10->SetBinContent(12,9.963919);
   hCCpi0inFV_stack_10->SetBinContent(13,13.34061);
   hCCpi0inFV_stack_10->SetBinContent(14,19.81289);
   hCCpi0inFV_stack_10->SetBinContent(15,20.5969);
   hCCpi0inFV_stack_10->SetBinContent(16,27.15818);
   hCCpi0inFV_stack_10->SetBinContent(17,32.52718);
   hCCpi0inFV_stack_10->SetBinContent(18,42.86646);
   hCCpi0inFV_stack_10->SetBinContent(19,47.18743);
   hCCpi0inFV_stack_10->SetBinContent(20,58.03772);
   hCCpi0inFV_stack_10->SetBinContent(21,82.23434);
   hCCpi0inFV_stack_10->SetBinContent(22,109.8012);
   hCCpi0inFV_stack_10->SetBinContent(23,163.8391);
   hCCpi0inFV_stack_10->SetBinContent(24,250.5308);
   hCCpi0inFV_stack_10->SetBinContent(25,300.2201);
   hCCpi0inFV_stack_10->SetBinError(1,0.785313);
   hCCpi0inFV_stack_10->SetBinError(2,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(3,1.071556);
   hCCpi0inFV_stack_10->SetBinError(4,1.122214);
   hCCpi0inFV_stack_10->SetBinError(5,1.056712);
   hCCpi0inFV_stack_10->SetBinError(6,1.019779);
   hCCpi0inFV_stack_10->SetBinError(7,1.011195);
   hCCpi0inFV_stack_10->SetBinError(8,1.270983);
   hCCpi0inFV_stack_10->SetBinError(9,1.201221);
   hCCpi0inFV_stack_10->SetBinError(10,1.476414);
   hCCpi0inFV_stack_10->SetBinError(11,1.377904);
   hCCpi0inFV_stack_10->SetBinError(12,1.61376);
   hCCpi0inFV_stack_10->SetBinError(13,1.902495);
   hCCpi0inFV_stack_10->SetBinError(14,2.194478);
   hCCpi0inFV_stack_10->SetBinError(15,2.246549);
   hCCpi0inFV_stack_10->SetBinError(16,2.603384);
   hCCpi0inFV_stack_10->SetBinError(17,2.876849);
   hCCpi0inFV_stack_10->SetBinError(18,3.325276);
   hCCpi0inFV_stack_10->SetBinError(19,3.429564);
   hCCpi0inFV_stack_10->SetBinError(20,3.829867);
   hCCpi0inFV_stack_10->SetBinError(21,4.557049);
   hCCpi0inFV_stack_10->SetBinError(22,5.290274);
   hCCpi0inFV_stack_10->SetBinError(23,6.374356);
   hCCpi0inFV_stack_10->SetBinError(24,7.877896);
   hCCpi0inFV_stack_10->SetBinError(25,8.700716);
   hCCpi0inFV_stack_10->SetEntries(5273);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(7,0.1967154);
   hNCinFV_stack_11->SetBinContent(8,0.3917402);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(19,0.3934307);
   hNCinFV_stack_11->SetBinContent(20,0.5352025);
   hNCinFV_stack_11->SetBinContent(21,0.5867651);
   hNCinFV_stack_11->SetBinContent(22,0.5901461);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,1.715495);
   hNCinFV_stack_11->SetBinContent(25,2.534241);
   hNCinFV_stack_11->SetBinError(7,0.1967154);
   hNCinFV_stack_11->SetBinError(8,0.2770047);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(19,0.2781975);
   hNCinFV_stack_11->SetBinError(20,0.3921167);
   hNCinFV_stack_11->SetBinError(21,0.3387718);
   hNCinFV_stack_11->SetBinError(22,0.340721);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.6212384);
   hNCinFV_stack_11->SetBinError(25,0.8321153);
   hNCinFV_stack_11->SetEntries(43);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.500086);
   hnumuCCinFV_stack_12->SetBinContent(2,1.408633);
   hnumuCCinFV_stack_12->SetBinContent(3,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(4,2.579355);
   hnumuCCinFV_stack_12->SetBinContent(5,1.777611);
   hnumuCCinFV_stack_12->SetBinContent(6,1.440721);
   hnumuCCinFV_stack_12->SetBinContent(7,2.624509);
   hnumuCCinFV_stack_12->SetBinContent(8,2.389205);
   hnumuCCinFV_stack_12->SetBinContent(9,4.361617);
   hnumuCCinFV_stack_12->SetBinContent(10,3.274332);
   hnumuCCinFV_stack_12->SetBinContent(11,2.994926);
   hnumuCCinFV_stack_12->SetBinContent(12,2.752438);
   hnumuCCinFV_stack_12->SetBinContent(13,5.613222);
   hnumuCCinFV_stack_12->SetBinContent(14,5.210285);
   hnumuCCinFV_stack_12->SetBinContent(15,7.006183);
   hnumuCCinFV_stack_12->SetBinContent(16,9.150793);
   hnumuCCinFV_stack_12->SetBinContent(17,12.80077);
   hnumuCCinFV_stack_12->SetBinContent(18,14.72634);
   hnumuCCinFV_stack_12->SetBinContent(19,15.6094);
   hnumuCCinFV_stack_12->SetBinContent(20,23.10742);
   hnumuCCinFV_stack_12->SetBinContent(21,26.3785);
   hnumuCCinFV_stack_12->SetBinContent(22,38.17899);
   hnumuCCinFV_stack_12->SetBinContent(23,54.88363);
   hnumuCCinFV_stack_12->SetBinContent(24,70.15356);
   hnumuCCinFV_stack_12->SetBinContent(25,66.50328);
   hnumuCCinFV_stack_12->SetBinError(1,1.651792);
   hnumuCCinFV_stack_12->SetBinError(2,0.6123192);
   hnumuCCinFV_stack_12->SetBinError(3,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(4,0.8974783);
   hnumuCCinFV_stack_12->SetBinError(5,0.7029867);
   hnumuCCinFV_stack_12->SetBinError(6,0.5460792);
   hnumuCCinFV_stack_12->SetBinError(7,0.8230702);
   hnumuCCinFV_stack_12->SetBinError(8,0.8224225);
   hnumuCCinFV_stack_12->SetBinError(9,1.14324);
   hnumuCCinFV_stack_12->SetBinError(10,0.911464);
   hnumuCCinFV_stack_12->SetBinError(11,0.942815);
   hnumuCCinFV_stack_12->SetBinError(12,0.752699);
   hnumuCCinFV_stack_12->SetBinError(13,1.259069);
   hnumuCCinFV_stack_12->SetBinError(14,1.276657);
   hnumuCCinFV_stack_12->SetBinError(15,1.37741);
   hnumuCCinFV_stack_12->SetBinError(16,1.586699);
   hnumuCCinFV_stack_12->SetBinError(17,2.159104);
   hnumuCCinFV_stack_12->SetBinError(18,1.902416);
   hnumuCCinFV_stack_12->SetBinError(19,2.093367);
   hnumuCCinFV_stack_12->SetBinError(20,2.452252);
   hnumuCCinFV_stack_12->SetBinError(21,2.745979);
   hnumuCCinFV_stack_12->SetBinError(22,3.234039);
   hnumuCCinFV_stack_12->SetBinError(23,4.226654);
   hnumuCCinFV_stack_12->SetBinError(24,4.672243);
   hnumuCCinFV_stack_12->SetBinError(25,4.168796);
   hnumuCCinFV_stack_12->SetEntries(1565);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(21,0.9188055);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(24,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(25,1.465526);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.4810838);
   hnueCCinFV_stack_13->SetBinError(21,0.5369359);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.2781975);
   hnueCCinFV_stack_13->SetBinError(24,0.4800908);
   hnueCCinFV_stack_13->SetBinError(25,0.6209405);
   hnueCCinFV_stack_13->SetEntries(23);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__23->SetBinContent(1,7.552906);
   hmcerror__23->SetBinContent(2,4.302752);
   hmcerror__23->SetBinContent(3,5.575248);
   hmcerror__23->SetBinContent(4,8.906241);
   hmcerror__23->SetBinContent(5,6.109437);
   hmcerror__23->SetBinContent(6,6.273849);
   hmcerror__23->SetBinContent(7,8.729741);
   hmcerror__23->SetBinContent(8,11.27708);
   hmcerror__23->SetBinContent(9,11.79264);
   hmcerror__23->SetBinContent(10,14.46527);
   hmcerror__23->SetBinContent(11,12.50151);
   hmcerror__23->SetBinContent(12,19.60249);
   hmcerror__23->SetBinContent(13,25.58616);
   hmcerror__23->SetBinContent(14,28.505);
   hmcerror__23->SetBinContent(15,31.05872);
   hmcerror__23->SetBinContent(16,40.5881);
   hmcerror__23->SetBinContent(17,50.1828);
   hmcerror__23->SetBinContent(18,61.74825);
   hmcerror__23->SetBinContent(19,71.8924);
   hmcerror__23->SetBinContent(20,89.1966);
   hmcerror__23->SetBinContent(21,121.9921);
   hmcerror__23->SetBinContent(22,161.7644);
   hmcerror__23->SetBinContent(23,232.7894);
   hmcerror__23->SetBinContent(24,343.2803);
   hmcerror__23->SetBinContent(25,389.0079);
   hmcerror__23->SetBinError(1,2.923341);
   hmcerror__23->SetBinError(2,1.422091);
   hmcerror__23->SetBinError(3,2.040449);
   hmcerror__23->SetBinError(4,2.820704);
   hmcerror__23->SetBinError(5,1.956715);
   hmcerror__23->SetBinError(6,2.355985);
   hmcerror__23->SetBinError(7,2.758646);
   hmcerror__23->SetBinError(8,3.691295);
   hmcerror__23->SetBinError(9,3.451348);
   hmcerror__23->SetBinError(10,4.107994);
   hmcerror__23->SetBinError(11,3.413645);
   hmcerror__23->SetBinError(12,5.037673);
   hmcerror__23->SetBinError(13,6.667698);
   hmcerror__23->SetBinError(14,7.986022);
   hmcerror__23->SetBinError(15,7.675068);
   hmcerror__23->SetBinError(16,9.800558);
   hmcerror__23->SetBinError(17,11.98274);
   hmcerror__23->SetBinError(18,15.35772);
   hmcerror__23->SetBinError(19,15.96777);
   hmcerror__23->SetBinError(20,19.85689);
   hmcerror__23->SetBinError(21,27.71229);
   hmcerror__23->SetBinError(22,36.04483);
   hmcerror__23->SetBinError(23,50.8583);
   hmcerror__23->SetBinError(24,76.02343);
   hmcerror__23->SetBinError(25,81.33846);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(1748.127);

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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3029[25] = {
   3,
   7,
   4,
   7,
   9,
   9,
   10,
   11,
   14,
   18,
   22,
   17,
   17,
   31,
   34,
   44,
   47,
   62,
   84,
   107,
   147,
   151,
   234,
   335,
   369};
   Double_t _felx3029[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3029[25] = {
   2.143368,
   2.85954,
   2.29683,
   2.85954,
   3.19354,
   3.19354,
   3.34883,
   3.4975,
   3.9102,
   4.4008,
   4.8417,
   4.2835,
   4.2835,
   5.7094,
   5.9703,
   6.7671,
   6.9882,
   8.0018,
   9.2886,
   10.34408,
   12.12436,
   12.28821,
   15.29706,
   18.30301,
   19.20937};
   Double_t _fehx3029[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3029[25] = {
   1.72422,
   2.61053,
   1.98186,
   2.61053,
   2.9582,
   2.9582,
   3.1179,
   3.27,
   3.6898,
   4.1858,
   4.6299,
   4.0673,
   4.0673,
   5.5017,
   5.7635,
   6.5623,
   6.7839,
   7.7989,
   9.0869,
   10.34408,
   12.12436,
   12.28821,
   15.29706,
   18.30301,
   19.20937};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(426.9446);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1793.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.3","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.7","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1231.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.7","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 378.8","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.6","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3030[25] = {
   0.3870486,
   0.3305072,
   0.3659835,
   0.316711,
   0.3202774,
   0.3755246,
   0.3160055,
   0.3273272,
   0.2926697,
   0.2839901,
   0.2730587,
   0.2569915,
   0.2605978,
   0.2801622,
   0.2471147,
   0.2414638,
   0.2387818,
   0.248715,
   0.2221066,
   0.2226193,
   0.2271646,
   0.222823,
   0.2184734,
   0.2214617,
   0.2090921};
   Double_t _fehx3030[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3030[25] = {
   0.3870486,
   0.3305072,
   0.3659835,
   0.316711,
   0.3202774,
   0.3755246,
   0.3160055,
   0.3273272,
   0.2926697,
   0.2839901,
   0.2730587,
   0.2569915,
   0.2605978,
   0.2801622,
   0.2471147,
   0.2414638,
   0.2387818,
   0.248715,
   0.2221066,
   0.2226193,
   0.2271646,
   0.222823,
   0.2184734,
   0.2214617,
   0.2090921};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3031[25] = {
   0.3870486,
   0.3305072,
   0.3659835,
   0.316711,
   0.3202774,
   0.3755246,
   0.3160055,
   0.3273272,
   0.2926697,
   0.2839901,
   0.2730587,
   0.2569915,
   0.2605978,
   0.2801622,
   0.2471147,
   0.2414638,
   0.2387818,
   0.248715,
   0.2221066,
   0.2226193,
   0.2271646,
   0.222823,
   0.2184734,
   0.2214617,
   0.2090921};
   Double_t _fehx3031[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3031[25] = {
   0.3870486,
   0.3305072,
   0.3659835,
   0.316711,
   0.3202774,
   0.3755246,
   0.3160055,
   0.3273272,
   0.2926697,
   0.2839901,
   0.2730587,
   0.2569915,
   0.2605978,
   0.2801622,
   0.2471147,
   0.2414638,
   0.2387818,
   0.248715,
   0.2221066,
   0.2226193,
   0.2271646,
   0.222823,
   0.2184734,
   0.2214617,
   0.2090921};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3032[25] = {
   0.3971981,
   1.626866,
   0.7174569,
   0.7859657,
   1.473131,
   1.434526,
   1.145509,
   0.9754296,
   1.187181,
   1.24436,
   1.759788,
   0.8672366,
   0.6644216,
   1.087529,
   1.094701,
   1.084062,
   0.9365758,
   1.004077,
   1.168413,
   1.199597,
   1.204996,
   0.9334563,
   1.0052,
   0.975879,
   0.9485669};
   Double_t _felx3032[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3032[25] = {
   0.2837806,
   0.6645839,
   0.4119691,
   0.3210715,
   0.5227225,
   0.509024,
   0.3836116,
   0.3101423,
   0.3315798,
   0.3042321,
   0.3872893,
   0.2185181,
   0.1674147,
   0.2002947,
   0.1922262,
   0.1667262,
   0.1392549,
   0.1295875,
   0.1292014,
   0.1159694,
   0.09938639,
   0.0759636,
   0.06571199,
   0.05331796,
   0.04938042};
   Double_t _fehx3032[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3032[25] = {
   0.2282856,
   0.6067116,
   0.3554748,
   0.2931124,
   0.4842017,
   0.4715127,
   0.3571584,
   0.2899686,
   0.3128901,
   0.2893689,
   0.3703474,
   0.2074889,
   0.1589648,
   0.1930083,
   0.1855678,
   0.1616804,
   0.1351838,
   0.1263015,
   0.1263958,
   0.1159694,
   0.09938639,
   0.0759636,
   0.06571199,
   0.05331796,
   0.04938042};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.1020758);
   Graph_Graph3032->SetMaximum(2.445593);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_muon_costheta_all",25,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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

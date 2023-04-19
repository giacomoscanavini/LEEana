#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Mar 11 22:37:06 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-144.04,1692.308,15927.79);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__13->SetBinContent(2,82.38239);
   hmc__13->SetBinContent(3,2437.872);
   hmc__13->SetBinContent(4,4307.65);
   hmc__13->SetBinContent(5,5409.265);
   hmc__13->SetBinContent(6,5661.724);
   hmc__13->SetBinContent(7,5484.406);
   hmc__13->SetBinContent(8,5069.932);
   hmc__13->SetBinContent(9,4355.557);
   hmc__13->SetBinContent(10,3553.317);
   hmc__13->SetBinContent(11,2896.654);
   hmc__13->SetBinContent(12,2259.7);
   hmc__13->SetBinContent(13,1642.622);
   hmc__13->SetBinContent(14,1212.065);
   hmc__13->SetBinContent(15,868.1007);
   hmc__13->SetBinContent(16,2758.199);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,37.11928);
   hmc__13->SetBinError(3,528.4147);
   hmc__13->SetBinError(4,860.2691);
   hmc__13->SetBinError(5,1109.682);
   hmc__13->SetBinError(6,1088.163);
   hmc__13->SetBinError(7,1045.472);
   hmc__13->SetBinError(8,980.6079);
   hmc__13->SetBinError(9,842.1357);
   hmc__13->SetBinError(10,649.14);
   hmc__13->SetBinError(11,651.3226);
   hmc__13->SetBinError(12,438.2477);
   hmc__13->SetBinError(13,341.5884);
   hmc__13->SetBinError(14,266.5747);
   hmc__13->SetBinError(15,226.3072);
   hmc__13->SetBinError(16,633.6965);
   hmc__13->SetMinimum(-144.04);
   hmc__13->SetMaximum(15124.2);
   hmc__13->SetEntries(42986.98);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",15,0,1500);
   hs5_stack_5->SetMinimum(-5.219833e-10);
   hs5_stack_5->SetMaximum(5944.81);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.175579);
   hbadmatch_stack_1->SetBinContent(3,54.94666);
   hbadmatch_stack_1->SetBinContent(4,70.53014);
   hbadmatch_stack_1->SetBinContent(5,74.31364);
   hbadmatch_stack_1->SetBinContent(6,61.63895);
   hbadmatch_stack_1->SetBinContent(7,58.00178);
   hbadmatch_stack_1->SetBinContent(8,48.64981);
   hbadmatch_stack_1->SetBinContent(9,35.68414);
   hbadmatch_stack_1->SetBinContent(10,21.82519);
   hbadmatch_stack_1->SetBinContent(11,28.57749);
   hbadmatch_stack_1->SetBinContent(12,12.71923);
   hbadmatch_stack_1->SetBinContent(13,11.85923);
   hbadmatch_stack_1->SetBinContent(14,8.493073);
   hbadmatch_stack_1->SetBinContent(15,6.834533);
   hbadmatch_stack_1->SetBinContent(16,23.69859);
   hbadmatch_stack_1->SetBinError(2,0.4797864);
   hbadmatch_stack_1->SetBinError(3,4.511655);
   hbadmatch_stack_1->SetBinError(4,4.73353);
   hbadmatch_stack_1->SetBinError(5,5.500168);
   hbadmatch_stack_1->SetBinError(6,4.255527);
   hbadmatch_stack_1->SetBinError(7,9.336952);
   hbadmatch_stack_1->SetBinError(8,4.434052);
   hbadmatch_stack_1->SetBinError(9,3.487506);
   hbadmatch_stack_1->SetBinError(10,2.520538);
   hbadmatch_stack_1->SetBinError(11,4.316451);
   hbadmatch_stack_1->SetBinError(12,1.91341);
   hbadmatch_stack_1->SetBinError(13,1.797276);
   hbadmatch_stack_1->SetBinError(14,1.737584);
   hbadmatch_stack_1->SetBinError(15,1.350872);
   hbadmatch_stack_1->SetBinError(16,3.160086);
   hbadmatch_stack_1->SetEntries(1976);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,2.110787);
   hext_stack_2->SetBinContent(3,113.009);
   hext_stack_2->SetBinContent(4,205.9894);
   hext_stack_2->SetBinContent(5,266.4996);
   hext_stack_2->SetBinContent(6,302.4369);
   hext_stack_2->SetBinContent(7,278.7785);
   hext_stack_2->SetBinContent(8,262.4987);
   hext_stack_2->SetBinContent(9,219.9614);
   hext_stack_2->SetBinContent(10,151.1381);
   hext_stack_2->SetBinContent(11,109.3727);
   hext_stack_2->SetBinContent(12,72.15108);
   hext_stack_2->SetBinContent(13,45.28858);
   hext_stack_2->SetBinContent(14,30.79992);
   hext_stack_2->SetBinContent(15,25.95834);
   hext_stack_2->SetBinContent(16,79.40913);
   hext_stack_2->SetBinError(2,0.8669371);
   hext_stack_2->SetBinError(3,6.996961);
   hext_stack_2->SetBinError(4,9.195898);
   hext_stack_2->SetBinError(5,10.67581);
   hext_stack_2->SetBinError(6,11.41158);
   hext_stack_2->SetBinError(7,11.06622);
   hext_stack_2->SetBinError(8,10.63571);
   hext_stack_2->SetBinError(9,9.814014);
   hext_stack_2->SetBinError(10,8.255828);
   hext_stack_2->SetBinError(11,6.880218);
   hext_stack_2->SetBinError(12,5.574088);
   hext_stack_2->SetBinError(13,4.332965);
   hext_stack_2->SetBinError(14,3.76209);
   hext_stack_2->SetBinError(15,3.210059);
   hext_stack_2->SetBinError(16,5.891772);
   hext_stack_2->SetEntries(5368);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,2.696215);
   hdirt_stack_3->SetBinContent(3,42.15942);
   hdirt_stack_3->SetBinContent(4,76.69466);
   hdirt_stack_3->SetBinContent(5,77.27724);
   hdirt_stack_3->SetBinContent(6,76.8288);
   hdirt_stack_3->SetBinContent(7,65.65871);
   hdirt_stack_3->SetBinContent(8,51.66953);
   hdirt_stack_3->SetBinContent(9,34.02361);
   hdirt_stack_3->SetBinContent(10,27.92565);
   hdirt_stack_3->SetBinContent(11,28.64111);
   hdirt_stack_3->SetBinContent(12,19.98612);
   hdirt_stack_3->SetBinContent(13,17.02029);
   hdirt_stack_3->SetBinContent(14,11.8158);
   hdirt_stack_3->SetBinContent(15,12.04026);
   hdirt_stack_3->SetBinContent(16,36.50573);
   hdirt_stack_3->SetBinError(2,1.818472);
   hdirt_stack_3->SetBinError(3,3.992725);
   hdirt_stack_3->SetBinError(4,6.91687);
   hdirt_stack_3->SetBinError(5,4.888224);
   hdirt_stack_3->SetBinError(6,5.178419);
   hdirt_stack_3->SetBinError(7,4.416248);
   hdirt_stack_3->SetBinError(8,5.059542);
   hdirt_stack_3->SetBinError(9,3.834467);
   hdirt_stack_3->SetBinError(10,3.533628);
   hdirt_stack_3->SetBinError(11,4.476724);
   hdirt_stack_3->SetBinError(12,3.335181);
   hdirt_stack_3->SetBinError(13,2.54607);
   hdirt_stack_3->SetBinError(14,2.126221);
   hdirt_stack_3->SetBinError(15,2.248202);
   hdirt_stack_3->SetBinError(16,3.545359);
   hdirt_stack_3->SetEntries(2347);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,1.523409);
   houtFV_stack_4->SetBinContent(3,48.5749);
   houtFV_stack_4->SetBinContent(4,79.28723);
   houtFV_stack_4->SetBinContent(5,111.1344);
   houtFV_stack_4->SetBinContent(6,106.9646);
   houtFV_stack_4->SetBinContent(7,95.54495);
   houtFV_stack_4->SetBinContent(8,78.65002);
   houtFV_stack_4->SetBinContent(9,71.5576);
   houtFV_stack_4->SetBinContent(10,60.50037);
   houtFV_stack_4->SetBinContent(11,43.10965);
   houtFV_stack_4->SetBinContent(12,34.78927);
   houtFV_stack_4->SetBinContent(13,22.57257);
   houtFV_stack_4->SetBinContent(14,24.90892);
   houtFV_stack_4->SetBinContent(15,16.66365);
   houtFV_stack_4->SetBinContent(16,47.65688);
   houtFV_stack_4->SetBinError(2,0.6470716);
   houtFV_stack_4->SetBinError(3,4.001089);
   houtFV_stack_4->SetBinError(4,5.491167);
   houtFV_stack_4->SetBinError(5,6.239776);
   houtFV_stack_4->SetBinError(6,6.313909);
   houtFV_stack_4->SetBinError(7,6.113554);
   houtFV_stack_4->SetBinError(8,4.994234);
   houtFV_stack_4->SetBinError(9,5.707292);
   houtFV_stack_4->SetBinError(10,5.802372);
   houtFV_stack_4->SetBinError(11,3.88473);
   houtFV_stack_4->SetBinError(12,3.922095);
   houtFV_stack_4->SetBinError(13,2.484808);
   houtFV_stack_4->SetBinError(14,3.123142);
   houtFV_stack_4->SetBinError(15,2.255422);
   houtFV_stack_4->SetBinError(16,4.352688);
   houtFV_stack_4->SetEntries(3252);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(30);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(17);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.7391858);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.03381);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.16801);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.66731);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.34565);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.53363);
   hNCpi0inFVres_stack_7->SetBinContent(9,16.10434);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.43855);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.6816);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.962831);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.937492);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.030906);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.440926);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.176718);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2452205);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7138228);
   hNCpi0inFVres_stack_7->SetBinError(5,1.040944);
   hNCpi0inFVres_stack_7->SetBinError(6,1.185651);
   hNCpi0inFVres_stack_7->SetBinError(7,1.387365);
   hNCpi0inFVres_stack_7->SetBinError(8,1.26131);
   hNCpi0inFVres_stack_7->SetBinError(9,1.302078);
   hNCpi0inFVres_stack_7->SetBinError(10,1.196353);
   hNCpi0inFVres_stack_7->SetBinError(11,1.101589);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9625925);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7430325);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6980643);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4683861);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7962167);
   hNCpi0inFVres_stack_7->SetEntries(2490);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.701076);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.615974);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.20779);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.648288);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.875984);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.691797);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.130221);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.335899);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.427154);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.552867);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.51924);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.925042);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.41698);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4156262);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.69597);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.07425);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9940542);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.075277);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9775375);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.886976);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8435306);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8089867);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7864204);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7852652);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7935653);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.359976);
   hNCpi0inFVdis_stack_8->SetEntries(1952);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,12.66069);
   hCCpi0inFV_stack_10->SetBinContent(4,44.06735);
   hCCpi0inFV_stack_10->SetBinContent(5,109.6552);
   hCCpi0inFV_stack_10->SetBinContent(6,220.0648);
   hCCpi0inFV_stack_10->SetBinContent(7,327.9705);
   hCCpi0inFV_stack_10->SetBinContent(8,408.5266);
   hCCpi0inFV_stack_10->SetBinContent(9,420.0169);
   hCCpi0inFV_stack_10->SetBinContent(10,427.9614);
   hCCpi0inFV_stack_10->SetBinContent(11,398.5839);
   hCCpi0inFV_stack_10->SetBinContent(12,345.6283);
   hCCpi0inFV_stack_10->SetBinContent(13,275.4528);
   hCCpi0inFV_stack_10->SetBinContent(14,229.2588);
   hCCpi0inFV_stack_10->SetBinContent(15,187.9472);
   hCCpi0inFV_stack_10->SetBinContent(16,734.0998);
   hCCpi0inFV_stack_10->SetBinError(3,1.766457);
   hCCpi0inFV_stack_10->SetBinError(4,3.318883);
   hCCpi0inFV_stack_10->SetBinError(5,5.277297);
   hCCpi0inFV_stack_10->SetBinError(6,7.471454);
   hCCpi0inFV_stack_10->SetBinError(7,9.14236);
   hCCpi0inFV_stack_10->SetBinError(8,10.12491);
   hCCpi0inFV_stack_10->SetBinError(9,10.27791);
   hCCpi0inFV_stack_10->SetBinError(10,10.31198);
   hCCpi0inFV_stack_10->SetBinError(11,10.02313);
   hCCpi0inFV_stack_10->SetBinError(12,9.326366);
   hCCpi0inFV_stack_10->SetBinError(13,8.334604);
   hCCpi0inFV_stack_10->SetBinError(14,7.612074);
   hCCpi0inFV_stack_10->SetBinError(15,6.892587);
   hCCpi0inFV_stack_10->SetBinError(16,13.64706);
   hCCpi0inFV_stack_10->SetEntries(17682);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.857266);
   hNCinFV_stack_11->SetBinContent(3,83.94067);
   hNCinFV_stack_11->SetBinContent(4,125.6446);
   hNCinFV_stack_11->SetBinContent(5,121.7097);
   hNCinFV_stack_11->SetBinContent(6,116.4123);
   hNCinFV_stack_11->SetBinContent(7,98.858);
   hNCinFV_stack_11->SetBinContent(8,83.64485);
   hNCinFV_stack_11->SetBinContent(9,67.83878);
   hNCinFV_stack_11->SetBinContent(10,47.80357);
   hNCinFV_stack_11->SetBinContent(11,32.93074);
   hNCinFV_stack_11->SetBinContent(12,27.28613);
   hNCinFV_stack_11->SetBinContent(13,26.16923);
   hNCinFV_stack_11->SetBinContent(14,18.95825);
   hNCinFV_stack_11->SetBinContent(15,11.1744);
   hNCinFV_stack_11->SetBinContent(16,43.87666);
   hNCinFV_stack_11->SetBinError(2,0.6799255);
   hNCinFV_stack_11->SetBinError(3,4.608053);
   hNCinFV_stack_11->SetBinError(4,5.588888);
   hNCinFV_stack_11->SetBinError(5,5.456416);
   hNCinFV_stack_11->SetBinError(6,5.409813);
   hNCinFV_stack_11->SetBinError(7,4.992941);
   hNCinFV_stack_11->SetBinError(8,4.65835);
   hNCinFV_stack_11->SetBinError(9,4.14383);
   hNCinFV_stack_11->SetBinError(10,3.506926);
   hNCinFV_stack_11->SetBinError(11,2.849957);
   hNCinFV_stack_11->SetBinError(12,2.676331);
   hNCinFV_stack_11->SetBinError(13,2.626064);
   hNCinFV_stack_11->SetBinError(14,2.212622);
   hNCinFV_stack_11->SetBinError(15,1.767328);
   hNCinFV_stack_11->SetBinError(16,3.354653);
   hNCinFV_stack_11->SetEntries(3860);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,72.99124);
   hnumuCCinFV_stack_12->SetBinContent(3,2080.556);
   hnumuCCinFV_stack_12->SetBinContent(4,3697.68);
   hnumuCCinFV_stack_12->SetBinContent(5,4630.957);
   hnumuCCinFV_stack_12->SetBinContent(6,4749.842);
   hnumuCCinFV_stack_12->SetBinContent(7,4528.331);
   hnumuCCinFV_stack_12->SetBinContent(8,4106.632);
   hnumuCCinFV_stack_12->SetBinContent(9,3477.036);
   hnumuCCinFV_stack_12->SetBinContent(10,2789.353);
   hnumuCCinFV_stack_12->SetBinContent(11,2234.113);
   hnumuCCinFV_stack_12->SetBinContent(12,1729.164);
   hnumuCCinFV_stack_12->SetBinContent(13,1227.216);
   hnumuCCinFV_stack_12->SetBinContent(14,873.9689);
   hnumuCCinFV_stack_12->SetBinContent(15,596.3183);
   hnumuCCinFV_stack_12->SetBinContent(16,1750.029);
   hnumuCCinFV_stack_12->SetBinError(2,5.620414);
   hnumuCCinFV_stack_12->SetBinError(3,30.82085);
   hnumuCCinFV_stack_12->SetBinError(4,40.66099);
   hnumuCCinFV_stack_12->SetBinError(5,44.91665);
   hnumuCCinFV_stack_12->SetBinError(6,45.81987);
   hnumuCCinFV_stack_12->SetBinError(7,44.28301);
   hnumuCCinFV_stack_12->SetBinError(8,43.68806);
   hnumuCCinFV_stack_12->SetBinError(9,39.43617);
   hnumuCCinFV_stack_12->SetBinError(10,33.70308);
   hnumuCCinFV_stack_12->SetBinError(11,31.78305);
   hnumuCCinFV_stack_12->SetBinError(12,28.50656);
   hnumuCCinFV_stack_12->SetBinError(13,24.45808);
   hnumuCCinFV_stack_12->SetBinError(14,20.32232);
   hnumuCCinFV_stack_12->SetBinError(15,15.35695);
   hnumuCCinFV_stack_12->SetBinError(16,27.15392);
   hnumuCCinFV_stack_12->SetEntries(144429);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.882241);
   hnueCCinFV_stack_13->SetBinContent(5,1.516571);
   hnueCCinFV_stack_13->SetBinContent(6,2.130048);
   hnueCCinFV_stack_13->SetBinContent(7,2.808411);
   hnueCCinFV_stack_13->SetBinContent(8,2.94359);
   hnueCCinFV_stack_13->SetBinContent(9,3.419129);
   hnueCCinFV_stack_13->SetBinContent(10,5.045808);
   hnueCCinFV_stack_13->SetBinContent(11,3.127429);
   hnueCCinFV_stack_13->SetBinContent(12,3.530478);
   hnueCCinFV_stack_13->SetBinContent(13,5.552611);
   hnueCCinFV_stack_13->SetBinContent(14,4.283119);
   hnueCCinFV_stack_13->SetBinContent(15,3.770129);
   hnueCCinFV_stack_13->SetBinContent(16,19.30109);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.4437851);
   hnueCCinFV_stack_13->SetBinError(5,0.6318529);
   hnueCCinFV_stack_13->SetBinError(6,0.7918634);
   hnueCCinFV_stack_13->SetBinError(7,1.206343);
   hnueCCinFV_stack_13->SetBinError(8,1.263623);
   hnueCCinFV_stack_13->SetBinError(9,0.945718);
   hnueCCinFV_stack_13->SetBinError(10,1.298874);
   hnueCCinFV_stack_13->SetBinError(11,0.8998768);
   hnueCCinFV_stack_13->SetBinError(12,1.057202);
   hnueCCinFV_stack_13->SetBinError(13,1.173397);
   hnueCCinFV_stack_13->SetBinError(14,0.9773894);
   hnueCCinFV_stack_13->SetBinError(15,1.004929);
   hnueCCinFV_stack_13->SetBinError(16,2.176392);
   hnueCCinFV_stack_13->SetEntries(240);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__14->SetBinContent(2,82.38239);
   hmcerror__14->SetBinContent(3,2437.872);
   hmcerror__14->SetBinContent(4,4307.65);
   hmcerror__14->SetBinContent(5,5409.265);
   hmcerror__14->SetBinContent(6,5661.724);
   hmcerror__14->SetBinContent(7,5484.406);
   hmcerror__14->SetBinContent(8,5069.932);
   hmcerror__14->SetBinContent(9,4355.557);
   hmcerror__14->SetBinContent(10,3553.317);
   hmcerror__14->SetBinContent(11,2896.654);
   hmcerror__14->SetBinContent(12,2259.7);
   hmcerror__14->SetBinContent(13,1642.622);
   hmcerror__14->SetBinContent(14,1212.065);
   hmcerror__14->SetBinContent(15,868.1007);
   hmcerror__14->SetBinContent(16,2758.199);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,37.11928);
   hmcerror__14->SetBinError(3,528.4147);
   hmcerror__14->SetBinError(4,860.2691);
   hmcerror__14->SetBinError(5,1109.682);
   hmcerror__14->SetBinError(6,1088.163);
   hmcerror__14->SetBinError(7,1045.472);
   hmcerror__14->SetBinError(8,980.6079);
   hmcerror__14->SetBinError(9,842.1357);
   hmcerror__14->SetBinError(10,649.14);
   hmcerror__14->SetBinError(11,651.3226);
   hmcerror__14->SetBinError(12,438.2477);
   hmcerror__14->SetBinError(13,341.5884);
   hmcerror__14->SetBinError(14,266.5747);
   hmcerror__14->SetBinError(15,226.3072);
   hmcerror__14->SetBinError(16,633.6965);
   hmcerror__14->SetEntries(42986.98);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[15] = {
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
   Double_t _fy3017[15] = {
   0,
   137,
   3193,
   5623,
   7136,
   7202,
   6583,
   5975,
   5034,
   3987,
   3111,
   2222,
   1618,
   1069,
   740};
   Double_t _felx3017[15] = {
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
   Double_t _fely3017[15] = {
   0,
   11.7047,
   56.50664,
   74.98667,
   84.47485,
   84.8646,
   81.13569,
   77.29812,
   70.95069,
   63.1427,
   55.77634,
   47.13809,
   40.22437,
   32.69557,
   27.20294};
   Double_t _fehx3017[15] = {
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
   Double_t _fehy3017[15] = {
   1.1478,
   11.7047,
   56.50664,
   74.98667,
   84.47485,
   84.8646,
   81.13569,
   77.29812,
   70.95069,
   63.1427,
   55.77634,
   47.13809,
   40.22437,
   32.69557,
   27.20294};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(8015.551);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.19#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 53630.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 495.2","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 2086.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 544.4","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 795.8","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  126.1","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  85.7","F");

   ci = 1493;
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

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3407.8","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 864.2","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 36794.2","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 39.2","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("numuCC_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[15] = {
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
   Double_t _fy3018[15] = {
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
   Double_t _felx3018[15] = {
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
   Double_t _fely3018[15] = {
   0,
   0.450573,
   0.2167525,
   0.1997073,
   0.2051448,
   0.1921964,
   0.1906264,
   0.1934164,
   0.1933474,
   0.1826856,
   0.2248534,
   0.1939406,
   0.2079531,
   0.2199344,
   0.2606923};
   Double_t _fehx3018[15] = {
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
   Double_t _fehy3018[15] = {
   0,
   0.450573,
   0.2167525,
   0.1997073,
   0.2051448,
   0.1921964,
   0.1906264,
   0.1934164,
   0.1933474,
   0.1826856,
   0.2248534,
   0.1939406,
   0.2079531,
   0.2199344,
   0.2606923};
   grae = new TGraphAsymmErrors(15,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[15] = {
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
   Double_t _fy3019[15] = {
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
   Double_t _felx3019[15] = {
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
   Double_t _fely3019[15] = {
   0,
   0.260063,
   0.1792666,
   0.1571882,
   0.1464349,
   0.1438292,
   0.1429645,
   0.1463486,
   0.1492267,
   0.1509185,
   0.1617396,
   0.1693963,
   0.1743168,
   0.1780443,
   0.1840129};
   Double_t _fehx3019[15] = {
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
   Double_t _fehy3019[15] = {
   0,
   0.260063,
   0.1792666,
   0.1571882,
   0.1464349,
   0.1438292,
   0.1429645,
   0.1463486,
   0.1492267,
   0.1509185,
   0.1617396,
   0.1693963,
   0.1743168,
   0.1780443,
   0.1840129};
   grae = new TGraphAsymmErrors(15,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[15] = {
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
   Double_t _fy3020[15] = {
   10,
   1.662977,
   1.309749,
   1.305352,
   1.319218,
   1.272051,
   1.200312,
   1.178517,
   1.155765,
   1.12205,
   1.073998,
   0.9833163,
   0.9850107,
   0.881966,
   0.8524357};
   Double_t _felx3020[15] = {
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
   Double_t _fely3020[15] = {
   0,
   0.1420777,
   0.02317868,
   0.01740779,
   0.0156167,
   0.01498918,
   0.01479389,
   0.01524638,
   0.01628969,
   0.01777007,
   0.01925544,
   0.02086033,
   0.02448791,
   0.0269751,
   0.03133616};
   Double_t _fehx3020[15] = {
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
   Double_t _fehy3020[15] = {
   0,
   0.1420777,
   0.02317868,
   0.01740779,
   0.0156167,
   0.01498918,
   0.01479389,
   0.01524638,
   0.01628969,
   0.01777007,
   0.01925544,
   0.02086033,
   0.02448791,
   0.0269751,
   0.03133616};
   grae = new TGraphAsymmErrors(15,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0.7389896);
   Graph_Graph3020->SetMaximum(10.91789);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

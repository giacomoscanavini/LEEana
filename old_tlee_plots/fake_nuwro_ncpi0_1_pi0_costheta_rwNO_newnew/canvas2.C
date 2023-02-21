#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Jan 16 04:37:10 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-1.307692,-19.66564,1.25641,2174.606);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(1,147.12);
   hmc__4->SetBinContent(2,123.9009);
   hmc__4->SetBinContent(3,114.8216);
   hmc__4->SetBinContent(4,107.6266);
   hmc__4->SetBinContent(5,108.3617);
   hmc__4->SetBinContent(6,104.2234);
   hmc__4->SetBinContent(7,98.91927);
   hmc__4->SetBinContent(8,117.1253);
   hmc__4->SetBinContent(9,124.3927);
   hmc__4->SetBinContent(10,143.7677);
   hmc__4->SetBinContent(11,156.8591);
   hmc__4->SetBinContent(12,175.5377);
   hmc__4->SetBinContent(13,199.0935);
   hmc__4->SetBinContent(14,223.2552);
   hmc__4->SetBinContent(15,250.8104);
   hmc__4->SetBinContent(16,339.8297);
   hmc__4->SetBinContent(17,418.3616);
   hmc__4->SetBinContent(18,494.049);
   hmc__4->SetBinContent(19,657.0208);
   hmc__4->SetBinContent(20,983.282);
   hmc__4->SetBinError(1,37.70643);
   hmc__4->SetBinError(2,35.95138);
   hmc__4->SetBinError(3,34.39793);
   hmc__4->SetBinError(4,31.96902);
   hmc__4->SetBinError(5,31.50844);
   hmc__4->SetBinError(6,28.44195);
   hmc__4->SetBinError(7,29.25522);
   hmc__4->SetBinError(8,33.3422);
   hmc__4->SetBinError(9,38.49394);
   hmc__4->SetBinError(10,41.23605);
   hmc__4->SetBinError(11,44.60056);
   hmc__4->SetBinError(12,52.66805);
   hmc__4->SetBinError(13,59.4852);
   hmc__4->SetBinError(14,67.17087);
   hmc__4->SetBinError(15,77.77219);
   hmc__4->SetBinError(16,102.7574);
   hmc__4->SetBinError(17,127.2004);
   hmc__4->SetBinError(18,131.635);
   hmc__4->SetBinError(19,154.8257);
   hmc__4->SetBinError(20,228.6075);
   hmc__4->SetBinError(21,0.4673072);
   hmc__4->SetMinimum(-19.66564);
   hmc__4->SetMaximum(2064.892);
   hmc__4->SetEntries(5038.244);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,-1,1);
   hs2_stack_2->SetMinimum(-1.00941e-09);
   hs2_stack_2->SetMaximum(1032.446);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,5.865355);
   hbadmatch_stack_1->SetBinContent(2,4.366402);
   hbadmatch_stack_1->SetBinContent(3,3.303495);
   hbadmatch_stack_1->SetBinContent(4,1.867182);
   hbadmatch_stack_1->SetBinContent(5,3.004795);
   hbadmatch_stack_1->SetBinContent(6,4.521787);
   hbadmatch_stack_1->SetBinContent(7,1.194494);
   hbadmatch_stack_1->SetBinContent(8,4.677383);
   hbadmatch_stack_1->SetBinContent(9,2.535748);
   hbadmatch_stack_1->SetBinContent(10,4.081631);
   hbadmatch_stack_1->SetBinContent(11,8.097714);
   hbadmatch_stack_1->SetBinContent(12,9.222671);
   hbadmatch_stack_1->SetBinContent(13,4.455387);
   hbadmatch_stack_1->SetBinContent(14,7.151683);
   hbadmatch_stack_1->SetBinContent(15,4.062619);
   hbadmatch_stack_1->SetBinContent(16,8.450201);
   hbadmatch_stack_1->SetBinContent(17,9.913577);
   hbadmatch_stack_1->SetBinContent(18,11.07028);
   hbadmatch_stack_1->SetBinContent(19,8.734021);
   hbadmatch_stack_1->SetBinContent(20,18.65144);
   hbadmatch_stack_1->SetBinError(1,1.492334);
   hbadmatch_stack_1->SetBinError(2,2.199943);
   hbadmatch_stack_1->SetBinError(3,0.9909863);
   hbadmatch_stack_1->SetBinError(4,0.6601484);
   hbadmatch_stack_1->SetBinError(5,1.109128);
   hbadmatch_stack_1->SetBinError(6,1.311001);
   hbadmatch_stack_1->SetBinError(7,0.5226174);
   hbadmatch_stack_1->SetBinError(8,1.368333);
   hbadmatch_stack_1->SetBinError(9,0.948794);
   hbadmatch_stack_1->SetBinError(10,1.153442);
   hbadmatch_stack_1->SetBinError(11,2.477219);
   hbadmatch_stack_1->SetBinError(12,2.810899);
   hbadmatch_stack_1->SetBinError(13,1.284624);
   hbadmatch_stack_1->SetBinError(14,1.6462);
   hbadmatch_stack_1->SetBinError(15,1.207677);
   hbadmatch_stack_1->SetBinError(16,1.823791);
   hbadmatch_stack_1->SetBinError(17,2.017184);
   hbadmatch_stack_1->SetBinError(18,2.136693);
   hbadmatch_stack_1->SetBinError(19,1.722522);
   hbadmatch_stack_1->SetBinError(20,2.614602);
   hbadmatch_stack_1->SetEntries(371);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,11.54);
   houtFV_stack_4->SetBinContent(2,8.214388);
   houtFV_stack_4->SetBinContent(3,8.337853);
   houtFV_stack_4->SetBinContent(4,9.838827);
   houtFV_stack_4->SetBinContent(5,9.53125);
   houtFV_stack_4->SetBinContent(6,7.006768);
   houtFV_stack_4->SetBinContent(7,6.197333);
   houtFV_stack_4->SetBinContent(8,7.86946);
   houtFV_stack_4->SetBinContent(9,8.385292);
   houtFV_stack_4->SetBinContent(10,11.31743);
   houtFV_stack_4->SetBinContent(11,9.989599);
   houtFV_stack_4->SetBinContent(12,12.24399);
   houtFV_stack_4->SetBinContent(13,16.01136);
   houtFV_stack_4->SetBinContent(14,19.9811);
   houtFV_stack_4->SetBinContent(15,21.12042);
   houtFV_stack_4->SetBinContent(16,34.4752);
   houtFV_stack_4->SetBinContent(17,36.17889);
   houtFV_stack_4->SetBinContent(18,42.71737);
   houtFV_stack_4->SetBinContent(19,47.3686);
   houtFV_stack_4->SetBinContent(20,49.17934);
   houtFV_stack_4->SetBinError(1,2.0499);
   houtFV_stack_4->SetBinError(2,1.664361);
   houtFV_stack_4->SetBinError(3,1.667998);
   houtFV_stack_4->SetBinError(4,1.857097);
   houtFV_stack_4->SetBinError(5,1.859168);
   houtFV_stack_4->SetBinError(6,1.496689);
   houtFV_stack_4->SetBinError(7,1.385736);
   houtFV_stack_4->SetBinError(8,1.668738);
   houtFV_stack_4->SetBinError(9,1.636932);
   houtFV_stack_4->SetBinError(10,1.901073);
   houtFV_stack_4->SetBinError(11,1.886715);
   houtFV_stack_4->SetBinError(12,2.043271);
   houtFV_stack_4->SetBinError(13,2.335965);
   houtFV_stack_4->SetBinError(14,2.616781);
   houtFV_stack_4->SetBinError(15,2.65425);
   houtFV_stack_4->SetBinError(16,3.492521);
   houtFV_stack_4->SetBinError(17,3.430544);
   houtFV_stack_4->SetBinError(18,3.859009);
   houtFV_stack_4->SetBinError(19,4.063902);
   houtFV_stack_4->SetBinError(20,4.076351);
   houtFV_stack_4->SetEntries(1234);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.266001);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8434762);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3972314);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2648209);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1986157);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5210459);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3224303);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4548407);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6779631);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.686559);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.967684);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.283193);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.376366);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,13.12546);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,53.92268);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7890749);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3771742);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1146708);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.09362833);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.08108451);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2727958);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2604666);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2687489);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3698398);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2826596);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6388684);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7133507);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9768719);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.365184);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.821222);
   hNCpi0inFVcoh_stack_5->SetEntries(1448);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9010857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6534564);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4634366);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2648209);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.265214);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.042485);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.704144);
   hNCpi0inFVqe_stack_6->SetBinContent(18,3.894951);
   hNCpi0inFVqe_stack_6->SetBinContent(19,3.481809);
   hNCpi0inFVqe_stack_6->SetBinContent(20,4.664907);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4487059);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2807146);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.08758128);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1238586);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09362833);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4619422);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.5945245);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.41322);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.802159);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.7179442);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.7821618);
   hNCpi0inFVqe_stack_6->SetEntries(428);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,61.55566);
   hNCpi0inFVres_stack_7->SetBinContent(2,53.29501);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.20134);
   hNCpi0inFVres_stack_7->SetBinContent(4,52.46488);
   hNCpi0inFVres_stack_7->SetBinContent(5,53.02031);
   hNCpi0inFVres_stack_7->SetBinContent(6,51.60934);
   hNCpi0inFVres_stack_7->SetBinContent(7,52.17208);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.00211);
   hNCpi0inFVres_stack_7->SetBinContent(9,62.35141);
   hNCpi0inFVres_stack_7->SetBinContent(10,72.3398);
   hNCpi0inFVres_stack_7->SetBinContent(11,77.97163);
   hNCpi0inFVres_stack_7->SetBinContent(12,88.07744);
   hNCpi0inFVres_stack_7->SetBinContent(13,94.97869);
   hNCpi0inFVres_stack_7->SetBinContent(14,113.3022);
   hNCpi0inFVres_stack_7->SetBinContent(15,126.3691);
   hNCpi0inFVres_stack_7->SetBinContent(16,169.5884);
   hNCpi0inFVres_stack_7->SetBinContent(17,203.5695);
   hNCpi0inFVres_stack_7->SetBinContent(18,242.6441);
   hNCpi0inFVres_stack_7->SetBinContent(19,313.0555);
   hNCpi0inFVres_stack_7->SetBinContent(20,398.2305);
   hNCpi0inFVres_stack_7->SetBinError(1,3.030487);
   hNCpi0inFVres_stack_7->SetBinError(2,2.77666);
   hNCpi0inFVres_stack_7->SetBinError(3,2.811105);
   hNCpi0inFVres_stack_7->SetBinError(4,2.853019);
   hNCpi0inFVres_stack_7->SetBinError(5,2.826056);
   hNCpi0inFVres_stack_7->SetBinError(6,2.682663);
   hNCpi0inFVres_stack_7->SetBinError(7,2.686133);
   hNCpi0inFVres_stack_7->SetBinError(8,2.761873);
   hNCpi0inFVres_stack_7->SetBinError(9,2.996917);
   hNCpi0inFVres_stack_7->SetBinError(10,3.324769);
   hNCpi0inFVres_stack_7->SetBinError(11,3.424645);
   hNCpi0inFVres_stack_7->SetBinError(12,3.64972);
   hNCpi0inFVres_stack_7->SetBinError(13,3.696382);
   hNCpi0inFVres_stack_7->SetBinError(14,4.124795);
   hNCpi0inFVres_stack_7->SetBinError(15,4.183737);
   hNCpi0inFVres_stack_7->SetBinError(16,5.075835);
   hNCpi0inFVres_stack_7->SetBinError(17,5.49697);
   hNCpi0inFVres_stack_7->SetBinError(18,5.979916);
   hNCpi0inFVres_stack_7->SetBinError(19,6.88266);
   hNCpi0inFVres_stack_7->SetBinError(20,7.705549);
   hNCpi0inFVres_stack_7->SetEntries(39877);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.87655);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.974281);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.643648);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.568848);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.245236);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.749091);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.047408);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.49444);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.188807);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.92477);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.643255);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.95955);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.29176);
   hNCpi0inFVdis_stack_8->SetBinContent(14,18.69876);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.76664);
   hNCpi0inFVdis_stack_8->SetBinContent(16,25.43195);
   hNCpi0inFVdis_stack_8->SetBinContent(17,36.30643);
   hNCpi0inFVdis_stack_8->SetBinContent(18,47.4887);
   hNCpi0inFVdis_stack_8->SetBinContent(19,63.22067);
   hNCpi0inFVdis_stack_8->SetBinContent(20,104.8773);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.403505);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.07453);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.161156);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.184473);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8492701);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9536495);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.060157);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.2893);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.129627);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.294812);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.069419);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.285933);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.509455);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.687777);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.6813);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.90871);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.330748);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.635515);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.992176);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.912264);
   hNCpi0inFVdis_stack_8->SetEntries(7581);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.3886355);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.4217381);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.2604666);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.2604666);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2646402);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2667025);
   hNCpi0inFVmec_stack_9->SetEntries(32);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,17.7155);
   hCCpi0inFV_stack_10->SetBinContent(2,22.30456);
   hCCpi0inFV_stack_10->SetBinContent(3,17.94822);
   hCCpi0inFV_stack_10->SetBinContent(4,13.51782);
   hCCpi0inFV_stack_10->SetBinContent(5,15.19544);
   hCCpi0inFV_stack_10->SetBinContent(6,15.9411);
   hCCpi0inFV_stack_10->SetBinContent(7,12.82283);
   hCCpi0inFV_stack_10->SetBinContent(8,16.03648);
   hCCpi0inFV_stack_10->SetBinContent(9,12.91286);
   hCCpi0inFV_stack_10->SetBinContent(10,17.7874);
   hCCpi0inFV_stack_10->SetBinContent(11,22.84025);
   hCCpi0inFV_stack_10->SetBinContent(12,22.17811);
   hCCpi0inFV_stack_10->SetBinContent(13,31.62792);
   hCCpi0inFV_stack_10->SetBinContent(14,29.76074);
   hCCpi0inFV_stack_10->SetBinContent(15,32.00319);
   hCCpi0inFV_stack_10->SetBinContent(16,43.02807);
   hCCpi0inFV_stack_10->SetBinContent(17,68.38233);
   hCCpi0inFV_stack_10->SetBinContent(18,66.89317);
   hCCpi0inFV_stack_10->SetBinContent(19,101.1179);
   hCCpi0inFV_stack_10->SetBinContent(20,156.4471);
   hCCpi0inFV_stack_10->SetBinError(1,2.476989);
   hCCpi0inFV_stack_10->SetBinError(2,2.822064);
   hCCpi0inFV_stack_10->SetBinError(3,2.47008);
   hCCpi0inFV_stack_10->SetBinError(4,2.119568);
   hCCpi0inFV_stack_10->SetBinError(5,2.119958);
   hCCpi0inFV_stack_10->SetBinError(6,2.34971);
   hCCpi0inFV_stack_10->SetBinError(7,2.081349);
   hCCpi0inFV_stack_10->SetBinError(8,2.369661);
   hCCpi0inFV_stack_10->SetBinError(9,1.99402);
   hCCpi0inFV_stack_10->SetBinError(10,2.459029);
   hCCpi0inFV_stack_10->SetBinError(11,2.794054);
   hCCpi0inFV_stack_10->SetBinError(12,2.774967);
   hCCpi0inFV_stack_10->SetBinError(13,3.328316);
   hCCpi0inFV_stack_10->SetBinError(14,3.262191);
   hCCpi0inFV_stack_10->SetBinError(15,3.323419);
   hCCpi0inFV_stack_10->SetBinError(16,3.856583);
   hCCpi0inFV_stack_10->SetBinError(17,4.92566);
   hCCpi0inFV_stack_10->SetBinError(18,4.744006);
   hCCpi0inFV_stack_10->SetBinError(19,5.922573);
   hCCpi0inFV_stack_10->SetBinError(20,7.3472);
   hCCpi0inFV_stack_10->SetEntries(2377);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,15.49518);
   hNCinFV_stack_11->SetBinContent(2,11.86523);
   hNCinFV_stack_11->SetBinContent(3,10.78176);
   hNCinFV_stack_11->SetBinContent(4,8.426905);
   hNCinFV_stack_11->SetBinContent(5,12.99045);
   hNCinFV_stack_11->SetBinContent(6,8.25615);
   hNCinFV_stack_11->SetBinContent(7,7.514194);
   hNCinFV_stack_11->SetBinContent(8,4.351032);
   hNCinFV_stack_11->SetBinContent(9,10.59383);
   hNCinFV_stack_11->SetBinContent(10,10.03981);
   hNCinFV_stack_11->SetBinContent(11,7.939228);
   hNCinFV_stack_11->SetBinContent(12,13.90316);
   hNCinFV_stack_11->SetBinContent(13,12.33202);
   hNCinFV_stack_11->SetBinContent(14,12.99045);
   hNCinFV_stack_11->SetBinContent(15,19.35854);
   hNCinFV_stack_11->SetBinContent(16,25.78927);
   hNCinFV_stack_11->SetBinContent(17,26.4477);
   hNCinFV_stack_11->SetBinContent(18,36.12883);
   hNCinFV_stack_11->SetBinContent(19,62.29766);
   hNCinFV_stack_11->SetBinContent(20,107.4076);
   hNCinFV_stack_11->SetBinError(1,2.30701);
   hNCinFV_stack_11->SetBinError(2,2.000313);
   hNCinFV_stack_11->SetBinError(3,1.83557);
   hNCinFV_stack_11->SetBinError(4,1.70718);
   hNCinFV_stack_11->SetBinError(5,2.110309);
   hNCinFV_stack_11->SetBinError(6,1.609446);
   hNCinFV_stack_11->SetBinError(7,1.61452);
   hNCinFV_stack_11->SetBinError(8,1.180922);
   hNCinFV_stack_11->SetBinError(9,2.044097);
   hNCinFV_stack_11->SetBinError(10,1.84002);
   hNCinFV_stack_11->SetBinError(11,1.701589);
   hNCinFV_stack_11->SetBinError(12,2.182016);
   hNCinFV_stack_11->SetBinError(13,2.027363);
   hNCinFV_stack_11->SetBinError(14,2.110309);
   hNCinFV_stack_11->SetBinError(15,2.588014);
   hNCinFV_stack_11->SetBinError(16,2.94492);
   hNCinFV_stack_11->SetBinError(17,3.002625);
   hNCinFV_stack_11->SetBinError(18,3.58975);
   hNCinFV_stack_11->SetBinError(19,4.58084);
   hNCinFV_stack_11->SetBinError(20,6.146435);
   hNCinFV_stack_11->SetEntries(1366);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,16.27625);
   hnumuCCinFV_stack_12->SetBinContent(2,12.3346);
   hnumuCCinFV_stack_12->SetBinContent(3,10.68608);
   hnumuCCinFV_stack_12->SetBinContent(4,9.394946);
   hnumuCCinFV_stack_12->SetBinContent(5,7.042618);
   hnumuCCinFV_stack_12->SetBinContent(6,7.90619);
   hnumuCCinFV_stack_12->SetBinContent(7,9.176149);
   hnumuCCinFV_stack_12->SetBinContent(8,16.5199);
   hnumuCCinFV_stack_12->SetBinContent(9,16.54762);
   hnumuCCinFV_stack_12->SetBinContent(10,16.43338);
   hnumuCCinFV_stack_12->SetBinContent(11,20.55675);
   hnumuCCinFV_stack_12->SetBinContent(12,16.51269);
   hnumuCCinFV_stack_12->SetBinContent(13,22.96544);
   hnumuCCinFV_stack_12->SetBinContent(14,17.39909);
   hnumuCCinFV_stack_12->SetBinContent(15,23.76299);
   hnumuCCinFV_stack_12->SetBinContent(16,27.39883);
   hnumuCCinFV_stack_12->SetBinContent(17,30.53023);
   hnumuCCinFV_stack_12->SetBinContent(18,32.12407);
   hnumuCCinFV_stack_12->SetBinContent(19,41.56398);
   hnumuCCinFV_stack_12->SetBinContent(20,73.22119);
   hnumuCCinFV_stack_12->SetBinError(1,2.399409);
   hnumuCCinFV_stack_12->SetBinError(2,2.217388);
   hnumuCCinFV_stack_12->SetBinError(3,2.325128);
   hnumuCCinFV_stack_12->SetBinError(4,1.831775);
   hnumuCCinFV_stack_12->SetBinError(5,1.6139);
   hnumuCCinFV_stack_12->SetBinError(6,1.877162);
   hnumuCCinFV_stack_12->SetBinError(7,2.129434);
   hnumuCCinFV_stack_12->SetBinError(8,3.281193);
   hnumuCCinFV_stack_12->SetBinError(9,2.603675);
   hnumuCCinFV_stack_12->SetBinError(10,2.641759);
   hnumuCCinFV_stack_12->SetBinError(11,3.09831);
   hnumuCCinFV_stack_12->SetBinError(12,2.600205);
   hnumuCCinFV_stack_12->SetBinError(13,3.279712);
   hnumuCCinFV_stack_12->SetBinError(14,2.584272);
   hnumuCCinFV_stack_12->SetBinError(15,3.261981);
   hnumuCCinFV_stack_12->SetBinError(16,4.636494);
   hnumuCCinFV_stack_12->SetBinError(17,3.793896);
   hnumuCCinFV_stack_12->SetBinError(18,3.69185);
   hnumuCCinFV_stack_12->SetBinError(19,4.04952);
   hnumuCCinFV_stack_12->SetBinError(20,5.012384);
   hnumuCCinFV_stack_12->SetEntries(1301);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.595328);
   hnueCCinFV_stack_13->SetBinContent(2,1.016379);
   hnueCCinFV_stack_13->SetBinContent(3,0.9678156);
   hnueCCinFV_stack_13->SetBinContent(4,2.017587);
   hnueCCinFV_stack_13->SetBinContent(5,0.4463965);
   hnueCCinFV_stack_13->SetBinContent(6,1.290163);
   hnueCCinFV_stack_13->SetBinContent(7,1.00891);
   hnueCCinFV_stack_13->SetBinContent(9,0.9919206);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.5879829);
   hnueCCinFV_stack_13->SetBinContent(13,0.3557058);
   hnueCCinFV_stack_13->SetBinContent(14,2.706033);
   hnueCCinFV_stack_13->SetBinContent(15,2.348907);
   hnueCCinFV_stack_13->SetBinContent(16,1.335174);
   hnueCCinFV_stack_13->SetBinContent(17,1.979397);
   hnueCCinFV_stack_13->SetBinContent(18,4.644978);
   hnueCCinFV_stack_13->SetBinContent(19,2.666575);
   hnueCCinFV_stack_13->SetBinContent(20,16.25815);
   hnueCCinFV_stack_13->SetBinError(1,0.8796341);
   hnueCCinFV_stack_13->SetBinError(2,0.5103821);
   hnueCCinFV_stack_13->SetBinError(3,0.5608966);
   hnueCCinFV_stack_13->SetBinError(4,1.384084);
   hnueCCinFV_stack_13->SetBinError(5,0.4459146);
   hnueCCinFV_stack_13->SetBinError(6,0.7723624);
   hnueCCinFV_stack_13->SetBinError(7,0.7680269);
   hnueCCinFV_stack_13->SetBinError(9,0.5890672);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.4157906);
   hnueCCinFV_stack_13->SetBinError(13,0.3557058);
   hnueCCinFV_stack_13->SetBinError(14,1.059069);
   hnueCCinFV_stack_13->SetBinError(15,1.743667);
   hnueCCinFV_stack_13->SetBinError(16,0.8135793);
   hnueCCinFV_stack_13->SetBinError(17,0.9368097);
   hnueCCinFV_stack_13->SetBinError(18,1.479731);
   hnueCCinFV_stack_13->SetBinError(19,0.8662789);
   hnueCCinFV_stack_13->SetBinError(20,2.692131);
   hnueCCinFV_stack_13->SetEntries(119);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(1,147.12);
   hmcerror__5->SetBinContent(2,123.9009);
   hmcerror__5->SetBinContent(3,114.8216);
   hmcerror__5->SetBinContent(4,107.6266);
   hmcerror__5->SetBinContent(5,108.3617);
   hmcerror__5->SetBinContent(6,104.2234);
   hmcerror__5->SetBinContent(7,98.91927);
   hmcerror__5->SetBinContent(8,117.1253);
   hmcerror__5->SetBinContent(9,124.3927);
   hmcerror__5->SetBinContent(10,143.7677);
   hmcerror__5->SetBinContent(11,156.8591);
   hmcerror__5->SetBinContent(12,175.5377);
   hmcerror__5->SetBinContent(13,199.0935);
   hmcerror__5->SetBinContent(14,223.2552);
   hmcerror__5->SetBinContent(15,250.8104);
   hmcerror__5->SetBinContent(16,339.8297);
   hmcerror__5->SetBinContent(17,418.3616);
   hmcerror__5->SetBinContent(18,494.049);
   hmcerror__5->SetBinContent(19,657.0208);
   hmcerror__5->SetBinContent(20,983.282);
   hmcerror__5->SetBinError(1,37.70643);
   hmcerror__5->SetBinError(2,35.95138);
   hmcerror__5->SetBinError(3,34.39793);
   hmcerror__5->SetBinError(4,31.96902);
   hmcerror__5->SetBinError(5,31.50844);
   hmcerror__5->SetBinError(6,28.44195);
   hmcerror__5->SetBinError(7,29.25522);
   hmcerror__5->SetBinError(8,33.3422);
   hmcerror__5->SetBinError(9,38.49394);
   hmcerror__5->SetBinError(10,41.23605);
   hmcerror__5->SetBinError(11,44.60056);
   hmcerror__5->SetBinError(12,52.66805);
   hmcerror__5->SetBinError(13,59.4852);
   hmcerror__5->SetBinError(14,67.17087);
   hmcerror__5->SetBinError(15,77.77219);
   hmcerror__5->SetBinError(16,102.7574);
   hmcerror__5->SetBinError(17,127.2004);
   hmcerror__5->SetBinError(18,131.635);
   hmcerror__5->SetBinError(19,154.8257);
   hmcerror__5->SetBinError(20,228.6075);
   hmcerror__5->SetBinError(21,0.4673072);
   hmcerror__5->SetEntries(5038.244);

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
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   118,
   128,
   113,
   83,
   90,
   100,
   96,
   95,
   121,
   118,
   140,
   157,
   179,
   212,
   241,
   292,
   363,
   497,
   636,
   977};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   10.86278,
   11.31371,
   10.63015,
   9.234,
   9.6093,
   10.1212,
   9.9196,
   9.8686,
   11,
   10.86278,
   11.83216,
   12.52996,
   13.37909,
   14.56022,
   15.52417,
   17.08801,
   19.05256,
   22.2935,
   25.21904,
   31.257};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   10.86278,
   11.31371,
   10.63015,
   9.0323,
   9.4079,
   9.92,
   9.718,
   9.667,
   11,
   10.86278,
   11.83216,
   12.52996,
   13.37909,
   14.56022,
   15.52417,
   17.08801,
   19.05256,
   22.2935,
   25.21904,
   31.257};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(66.3894);
   Graph_Graph3005->SetMaximum(1101.706);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4756.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 125.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 377.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2394.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  444.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 736.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 424.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 428.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 42.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.2562971,
   0.2901624,
   0.2995772,
   0.2970364,
   0.2907711,
   0.2728942,
   0.2957485,
   0.2846712,
   0.309455,
   0.2868241,
   0.2843353,
   0.3000385,
   0.2987803,
   0.3008703,
   0.3100836,
   0.3023792,
   0.3040441,
   0.2664412,
   0.2356482,
   0.2324944};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.2562971,
   0.2901624,
   0.2995772,
   0.2970364,
   0.2907711,
   0.2728942,
   0.2957485,
   0.2846712,
   0.309455,
   0.2868241,
   0.2843353,
   0.3000385,
   0.2987803,
   0.3008703,
   0.3100836,
   0.3023792,
   0.3040441,
   0.2664412,
   0.2356482,
   0.2324944};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.2257167,
   0.2204561,
   0.2257183,
   0.2352954,
   0.2340015,
   0.2231495,
   0.2372936,
   0.2184447,
   0.2390344,
   0.2433189,
   0.2445712,
   0.2547968,
   0.2703471,
   0.2763964,
   0.2902564,
   0.2835677,
   0.2710523,
   0.2467435,
   0.2199522,
   0.2164919};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.2257167,
   0.2204561,
   0.2257183,
   0.2352954,
   0.2340015,
   0.2231495,
   0.2372936,
   0.2184447,
   0.2390344,
   0.2433189,
   0.2445712,
   0.2547968,
   0.2703471,
   0.2763964,
   0.2902564,
   0.2835677,
   0.2710523,
   0.2467435,
   0.2199522,
   0.2164919};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   0.8020663,
   1.033084,
   0.9841354,
   0.7711846,
   0.8305519,
   0.9594777,
   0.9704884,
   0.8110971,
   0.9727261,
   0.8207685,
   0.8925209,
   0.894395,
   0.8990752,
   0.9495857,
   0.9608852,
   0.8592539,
   0.8676704,
   1.005973,
   0.9680059,
   0.9936112};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.07383619,
   0.09131257,
   0.09257967,
   0.08579661,
   0.08867803,
   0.09711066,
   0.1002798,
   0.08425677,
   0.08842964,
   0.07555787,
   0.07543178,
   0.07138049,
   0.06720004,
   0.06521782,
   0.06189606,
   0.05028403,
   0.04554089,
   0.04512406,
   0.03838393,
   0.03178844};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.07383619,
   0.09131257,
   0.09257967,
   0.08392254,
   0.08681944,
   0.09518019,
   0.09824173,
   0.08253554,
   0.08842964,
   0.07555787,
   0.07543178,
   0.07138049,
   0.06720004,
   0.06521782,
   0.06189606,
   0.05028403,
   0.04554089,
   0.04512406,
   0.03838393,
   0.03178844};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.6414871);
   Graph_Graph3008->SetMaximum(1.168297);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_6_pi0_costheta_all",20,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

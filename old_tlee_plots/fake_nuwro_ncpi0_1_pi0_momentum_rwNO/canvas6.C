#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sun Jan 15 16:41:42 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-11.88,1353.846,1313.678);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__16->SetBinContent(1,317.2119);
   hmc__16->SetBinContent(2,571.1796);
   hmc__16->SetBinContent(3,503.2256);
   hmc__16->SetBinContent(4,372.5702);
   hmc__16->SetBinContent(5,232.686);
   hmc__16->SetBinContent(6,144.7602);
   hmc__16->SetBinContent(7,90.0704);
   hmc__16->SetBinContent(8,52.33628);
   hmc__16->SetBinContent(9,42.71014);
   hmc__16->SetBinContent(10,25.96883);
   hmc__16->SetBinContent(11,22.60418);
   hmc__16->SetBinContent(12,17.8452);
   hmc__16->SetBinContent(13,150.5476);
   hmc__16->SetBinError(1,83.83529);
   hmc__16->SetBinError(2,140.6986);
   hmc__16->SetBinError(3,124.372);
   hmc__16->SetBinError(4,99.8685);
   hmc__16->SetBinError(5,66.81662);
   hmc__16->SetBinError(6,38.42618);
   hmc__16->SetBinError(7,27.23819);
   hmc__16->SetBinError(8,16.8407);
   hmc__16->SetBinError(9,19.49894);
   hmc__16->SetBinError(10,10.26823);
   hmc__16->SetBinError(11,11.66177);
   hmc__16->SetBinError(12,9.495866);
   hmc__16->SetBinError(13,46.31196);
   hmc__16->SetMinimum(-11.88);
   hmc__16->SetMaximum(1247.4);
   hmc__16->SetEntries(2519.262);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",12,0,1200);
   hs6_stack_6->SetMinimum(-1.505544e-08);
   hs6_stack_6->SetMaximum(599.7385);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,9.61464);
   hbadmatch_stack_1->SetBinContent(2,18.16822);
   hbadmatch_stack_1->SetBinContent(3,8.311981);
   hbadmatch_stack_1->SetBinContent(4,9.76734);
   hbadmatch_stack_1->SetBinContent(5,6.238534);
   hbadmatch_stack_1->SetBinContent(6,2.48385);
   hbadmatch_stack_1->SetBinContent(7,1.721529);
   hbadmatch_stack_1->SetBinContent(8,1.224452);
   hbadmatch_stack_1->SetBinContent(9,1.624393);
   hbadmatch_stack_1->SetBinContent(10,0.2333977);
   hbadmatch_stack_1->SetBinContent(11,1.440547);
   hbadmatch_stack_1->SetBinContent(12,1.204301);
   hbadmatch_stack_1->SetBinContent(13,3.680928);
   hbadmatch_stack_1->SetBinError(1,1.904918);
   hbadmatch_stack_1->SetBinError(2,3.207255);
   hbadmatch_stack_1->SetBinError(3,1.682233);
   hbadmatch_stack_1->SetBinError(4,2.573759);
   hbadmatch_stack_1->SetBinError(5,1.306322);
   hbadmatch_stack_1->SetBinError(6,0.9791741);
   hbadmatch_stack_1->SetBinError(7,0.8924247);
   hbadmatch_stack_1->SetBinError(8,0.6339695);
   hbadmatch_stack_1->SetBinError(9,0.7597771);
   hbadmatch_stack_1->SetBinError(10,0.2333977);
   hbadmatch_stack_1->SetBinError(11,0.8359254);
   hbadmatch_stack_1->SetBinError(12,0.7272648);
   hbadmatch_stack_1->SetBinError(13,1.293858);
   hbadmatch_stack_1->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,59.13071);
   houtFV_stack_4->SetBinContent(2,65.95505);
   houtFV_stack_4->SetBinContent(3,46.34815);
   houtFV_stack_4->SetBinContent(4,35.01935);
   houtFV_stack_4->SetBinContent(5,18.21082);
   houtFV_stack_4->SetBinContent(6,13.03809);
   houtFV_stack_4->SetBinContent(7,10.84128);
   houtFV_stack_4->SetBinContent(8,3.438324);
   houtFV_stack_4->SetBinContent(9,4.83967);
   houtFV_stack_4->SetBinContent(10,4.075872);
   houtFV_stack_4->SetBinContent(11,3.163163);
   houtFV_stack_4->SetBinContent(12,5.080369);
   houtFV_stack_4->SetBinContent(13,20.08628);
   houtFV_stack_4->SetBinError(1,4.479994);
   houtFV_stack_4->SetBinError(2,4.694785);
   houtFV_stack_4->SetBinError(3,3.957199);
   houtFV_stack_4->SetBinError(4,3.435746);
   houtFV_stack_4->SetBinError(5,2.449105);
   houtFV_stack_4->SetBinError(6,2.140087);
   houtFV_stack_4->SetBinError(7,1.959229);
   houtFV_stack_4->SetBinError(8,1.042492);
   houtFV_stack_4->SetBinError(9,1.402911);
   houtFV_stack_4->SetBinError(10,1.232836);
   houtFV_stack_4->SetBinError(11,1.100952);
   houtFV_stack_4->SetBinError(12,1.42504);
   houtFV_stack_4->SetBinError(13,2.632171);
   houtFV_stack_4->SetEntries(945);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.632591);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,10.46134);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.06171);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,15.90351);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.98238);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.963617);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.36659);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.919064);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9182773);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8434762);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.5210459);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7196617);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.244742);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.009916);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.288875);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.498923);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.553397);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.317427);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.015326);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.63031);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7048515);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2959171);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3771742);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2727958);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2845914);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.165823);
   hNCpi0inFVcoh_stack_5->SetEntries(1381);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9844825);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.150389);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.852466);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9182773);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4548407);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2995972);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5475963);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5385162);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2959171);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2687489);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08758128);
   hNCpi0inFVqe_stack_6->SetEntries(143);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,116.5707);
   hNCpi0inFVres_stack_7->SetBinContent(2,256.0197);
   hNCpi0inFVres_stack_7->SetBinContent(3,245.1628);
   hNCpi0inFVres_stack_7->SetBinContent(4,183.0106);
   hNCpi0inFVres_stack_7->SetBinContent(5,105.1214);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.89617);
   hNCpi0inFVres_stack_7->SetBinContent(7,36.73676);
   hNCpi0inFVres_stack_7->SetBinContent(8,21.10666);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.24353);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.619142);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.989799);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.839409);
   hNCpi0inFVres_stack_7->SetBinContent(13,56.91398);
   hNCpi0inFVres_stack_7->SetBinError(1,4.144792);
   hNCpi0inFVres_stack_7->SetBinError(2,6.106421);
   hNCpi0inFVres_stack_7->SetBinError(3,5.96042);
   hNCpi0inFVres_stack_7->SetBinError(4,5.265491);
   hNCpi0inFVres_stack_7->SetBinError(5,3.910908);
   hNCpi0inFVres_stack_7->SetBinError(6,2.950366);
   hNCpi0inFVres_stack_7->SetBinError(7,2.333802);
   hNCpi0inFVres_stack_7->SetBinError(8,1.727851);
   hNCpi0inFVres_stack_7->SetBinError(9,1.603665);
   hNCpi0inFVres_stack_7->SetBinError(10,1.135914);
   hNCpi0inFVres_stack_7->SetBinError(11,1.031919);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8746401);
   hNCpi0inFVres_stack_7->SetBinError(13,2.976355);
   hNCpi0inFVres_stack_7->SetEntries(18867);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.06782);
   hNCpi0inFVdis_stack_8->SetBinContent(2,47.27418);
   hNCpi0inFVdis_stack_8->SetBinContent(3,37.1168);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.01395);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.85814);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.74699);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.33752);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.144255);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.382501);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.41521);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.761754);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.563138);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.14957);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.905549);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.612374);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.360837);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.93097);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.815542);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.598532);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.264883);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8613849);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7156511);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.555543);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4794031);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4724962);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.310375);
   hNCpi0inFVdis_stack_8->SetEntries(3612);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2583545);
   hNCpi0inFVmec_stack_9->SetEntries(9);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,47.63225);
   hCCpi0inFV_stack_10->SetBinContent(2,80.6733);
   hCCpi0inFV_stack_10->SetBinContent(3,80.23666);
   hCCpi0inFV_stack_10->SetBinContent(4,56.33686);
   hCCpi0inFV_stack_10->SetBinContent(5,33.10455);
   hCCpi0inFV_stack_10->SetBinContent(6,21.54635);
   hCCpi0inFV_stack_10->SetBinContent(7,14.17832);
   hCCpi0inFV_stack_10->SetBinContent(8,9.200079);
   hCCpi0inFV_stack_10->SetBinContent(9,5.709657);
   hCCpi0inFV_stack_10->SetBinContent(10,3.692601);
   hCCpi0inFV_stack_10->SetBinContent(11,2.48385);
   hCCpi0inFV_stack_10->SetBinContent(12,2.525613);
   hCCpi0inFV_stack_10->SetBinContent(13,18.48759);
   hCCpi0inFV_stack_10->SetBinError(1,4.029378);
   hCCpi0inFV_stack_10->SetBinError(2,5.242116);
   hCCpi0inFV_stack_10->SetBinError(3,5.220538);
   hCCpi0inFV_stack_10->SetBinError(4,4.395573);
   hCCpi0inFV_stack_10->SetBinError(5,3.368019);
   hCCpi0inFV_stack_10->SetBinError(6,2.805672);
   hCCpi0inFV_stack_10->SetBinError(7,2.153111);
   hCCpi0inFV_stack_10->SetBinError(8,1.765582);
   hCCpi0inFV_stack_10->SetBinError(9,1.378842);
   hCCpi0inFV_stack_10->SetBinError(10,1.025365);
   hCCpi0inFV_stack_10->SetBinError(11,0.9791741);
   hCCpi0inFV_stack_10->SetBinError(12,0.8826101);
   hCCpi0inFV_stack_10->SetBinError(13,2.492037);
   hCCpi0inFV_stack_10->SetEntries(1222);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,26.10619);
   hNCinFV_stack_11->SetBinContent(2,45.23156);
   hNCinFV_stack_11->SetBinContent(3,37.29581);
   hNCinFV_stack_11->SetBinContent(4,17.08721);
   hNCinFV_stack_11->SetBinContent(5,19.97521);
   hNCinFV_stack_11->SetBinContent(6,12.50278);
   hNCinFV_stack_11->SetBinContent(7,6.197333);
   hNCinFV_stack_11->SetBinContent(8,5.49714);
   hNCinFV_stack_11->SetBinContent(9,5.180218);
   hNCinFV_stack_11->SetBinContent(10,3.629958);
   hNCinFV_stack_11->SetBinContent(11,2.271334);
   hNCinFV_stack_11->SetBinContent(12,0.2333977);
   hNCinFV_stack_11->SetBinContent(13,10.42308);
   hNCinFV_stack_11->SetBinError(1,2.892657);
   hNCinFV_stack_11->SetBinError(2,3.90025);
   hNCinFV_stack_11->SetBinError(3,3.627489);
   hNCinFV_stack_11->SetBinError(4,2.425572);
   hNCinFV_stack_11->SetBinError(5,2.687155);
   hNCinFV_stack_11->SetBinError(6,2.105789);
   hNCinFV_stack_11->SetBinError(7,1.385736);
   hNCinFV_stack_11->SetBinError(8,1.325459);
   hNCinFV_stack_11->SetBinError(9,1.435942);
   hNCinFV_stack_11->SetBinError(10,1.149367);
   hNCinFV_stack_11->SetBinError(11,0.9024504);
   hNCinFV_stack_11->SetBinError(12,0.2333977);
   hNCinFV_stack_11->SetBinError(13,1.963208);
   hNCinFV_stack_11->SetEntries(616);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,20.41064);
   hnumuCCinFV_stack_12->SetBinContent(2,43.36397);
   hnumuCCinFV_stack_12->SetBinContent(3,27.39927);
   hnumuCCinFV_stack_12->SetBinContent(4,23.23159);
   hnumuCCinFV_stack_12->SetBinContent(5,14.9888);
   hnumuCCinFV_stack_12->SetBinContent(6,9.158529);
   hnumuCCinFV_stack_12->SetBinContent(7,5.567068);
   hnumuCCinFV_stack_12->SetBinContent(8,2.011348);
   hnumuCCinFV_stack_12->SetBinContent(9,3.811899);
   hnumuCCinFV_stack_12->SetBinContent(10,1.146108);
   hnumuCCinFV_stack_12->SetBinContent(11,1.59792);
   hnumuCCinFV_stack_12->SetBinContent(12,0.6793121);
   hnumuCCinFV_stack_12->SetBinContent(13,12.19521);
   hnumuCCinFV_stack_12->SetBinError(1,2.723058);
   hnumuCCinFV_stack_12->SetBinError(2,4.065396);
   hnumuCCinFV_stack_12->SetBinError(3,3.477304);
   hnumuCCinFV_stack_12->SetBinError(4,3.056738);
   hnumuCCinFV_stack_12->SetBinError(5,2.695551);
   hnumuCCinFV_stack_12->SetBinError(6,1.895289);
   hnumuCCinFV_stack_12->SetBinError(7,1.529293);
   hnumuCCinFV_stack_12->SetBinError(8,0.7821998);
   hnumuCCinFV_stack_12->SetBinError(9,2.057944);
   hnumuCCinFV_stack_12->SetBinError(10,0.601883);
   hnumuCCinFV_stack_12->SetBinError(11,0.7490911);
   hnumuCCinFV_stack_12->SetBinError(12,0.5033032);
   hnumuCCinFV_stack_12->SetBinError(13,2.135273);
   hnumuCCinFV_stack_12->SetEntries(499);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,4.995702);
   hnueCCinFV_stack_13->SetBinContent(2,1.815597);
   hnueCCinFV_stack_13->SetBinContent(3,3.406828);
   hnueCCinFV_stack_13->SetBinContent(4,3.215258);
   hnueCCinFV_stack_13->SetBinContent(5,1.68504);
   hnueCCinFV_stack_13->SetBinContent(6,0.9689803);
   hnueCCinFV_stack_13->SetBinContent(7,0.7684534);
   hnueCCinFV_stack_13->SetBinContent(8,1.150101);
   hnueCCinFV_stack_13->SetBinContent(10,0.3130678);
   hnueCCinFV_stack_13->SetBinContent(11,1.341662);
   hnueCCinFV_stack_13->SetBinContent(13,8.134442);
   hnueCCinFV_stack_13->SetBinError(1,1.805233);
   hnueCCinFV_stack_13->SetBinError(2,0.8592407);
   hnueCCinFV_stack_13->SetBinError(3,1.218081);
   hnueCCinFV_stack_13->SetBinError(4,1.819089);
   hnueCCinFV_stack_13->SetBinError(5,0.810284);
   hnueCCinFV_stack_13->SetBinError(6,0.5807051);
   hnueCCinFV_stack_13->SetBinError(7,0.4471538);
   hnueCCinFV_stack_13->SetBinError(8,0.681457);
   hnueCCinFV_stack_13->SetBinError(10,0.3130678);
   hnueCCinFV_stack_13->SetBinError(11,0.8146586);
   hnueCCinFV_stack_13->SetBinError(13,2.114878);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__17->SetBinContent(1,317.2119);
   hmcerror__17->SetBinContent(2,571.1796);
   hmcerror__17->SetBinContent(3,503.2256);
   hmcerror__17->SetBinContent(4,372.5702);
   hmcerror__17->SetBinContent(5,232.686);
   hmcerror__17->SetBinContent(6,144.7602);
   hmcerror__17->SetBinContent(7,90.0704);
   hmcerror__17->SetBinContent(8,52.33628);
   hmcerror__17->SetBinContent(9,42.71014);
   hmcerror__17->SetBinContent(10,25.96883);
   hmcerror__17->SetBinContent(11,22.60418);
   hmcerror__17->SetBinContent(12,17.8452);
   hmcerror__17->SetBinContent(13,150.5476);
   hmcerror__17->SetBinError(1,83.83529);
   hmcerror__17->SetBinError(2,140.6986);
   hmcerror__17->SetBinError(3,124.372);
   hmcerror__17->SetBinError(4,99.8685);
   hmcerror__17->SetBinError(5,66.81662);
   hmcerror__17->SetBinError(6,38.42618);
   hmcerror__17->SetBinError(7,27.23819);
   hmcerror__17->SetBinError(8,16.8407);
   hmcerror__17->SetBinError(9,19.49894);
   hmcerror__17->SetBinError(10,10.26823);
   hmcerror__17->SetBinError(11,11.66177);
   hmcerror__17->SetBinError(12,9.495866);
   hmcerror__17->SetBinError(13,46.31196);
   hmcerror__17->SetEntries(2519.262);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[12] = {
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
   1150};
   Double_t _fy3021[12] = {
   362,
   594,
   562,
   396,
   252,
   160,
   98,
   59,
   52,
   32,
   25,
   22};
   Double_t _felx3021[12] = {
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
   Double_t _fely3021[12] = {
   19.0263,
   24.37212,
   23.70654,
   19.89975,
   15.87451,
   12.64911,
   10.0209,
   7.8097,
   7.3419,
   5.7977,
   5.1474,
   4.8417};
   Double_t _fehx3021[12] = {
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
   Double_t _fehy3021[12] = {
   19.0263,
   24.37212,
   23.70654,
   19.89975,
   15.87451,
   12.64911,
   9.82,
   7.6066,
   7.1381,
   5.5904,
   4.9374,
   4.6299};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1320);
   Graph_Graph3021->SetMinimum(15.44247);
   Graph_Graph3021->SetMaximum(678.4935);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.09#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2614.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 62.0","F");

   ci = 1499;
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

   ci = 1500;
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

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 269.1","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  76.3","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.6","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1065.3","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  200.7","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 357.3","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 181.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 153.4","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.7","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3022[12] = {
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
   1150};
   Double_t _fy3022[12] = {
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
   Double_t _felx3022[12] = {
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
   Double_t _fely3022[12] = {
   0.2642879,
   0.2463299,
   0.2471497,
   0.2680529,
   0.2871536,
   0.2654471,
   0.30241,
   0.3217787,
   0.4565412,
   0.395406,
   0.515912,
   0.5321243};
   Double_t _fehx3022[12] = {
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
   Double_t _fehy3022[12] = {
   0.2642879,
   0.2463299,
   0.2471497,
   0.2680529,
   0.2871536,
   0.2654471,
   0.30241,
   0.3217787,
   0.4565412,
   0.395406,
   0.515912,
   0.5321243};
   grae = new TGraphAsymmErrors(12,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1320);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[12] = {
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
   1150};
   Double_t _fy3023[12] = {
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
   Double_t _felx3023[12] = {
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
   Double_t _fely3023[12] = {
   0.2078258,
   0.2209138,
   0.223783,
   0.2279672,
   0.2188692,
   0.2149596,
   0.2109603,
   0.2202991,
   0.2321499,
   0.2356295,
   0.2375935,
   0.2525111};
   Double_t _fehx3023[12] = {
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
   Double_t _fehy3023[12] = {
   0.2078258,
   0.2209138,
   0.223783,
   0.2279672,
   0.2188692,
   0.2149596,
   0.2109603,
   0.2202991,
   0.2321499,
   0.2356295,
   0.2375935,
   0.2525111};
   grae = new TGraphAsymmErrors(12,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1320);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[12] = {
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
   1150};
   Double_t _fy3024[12] = {
   1.141193,
   1.039953,
   1.116795,
   1.062887,
   1.083005,
   1.105276,
   1.088038,
   1.127325,
   1.217509,
   1.232246,
   1.10599,
   1.232824};
   Double_t _felx3024[12] = {
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
   Double_t _fely3024[12] = {
   0.05997976,
   0.0426698,
   0.04710917,
   0.05341208,
   0.06822289,
   0.08737976,
   0.1112563,
   0.1492215,
   0.1719006,
   0.2232561,
   0.227719,
   0.2713166};
   Double_t _fehx3024[12] = {
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
   Double_t _fehy3024[12] = {
   0.05997976,
   0.0426698,
   0.04710917,
   0.05341208,
   0.06822289,
   0.08737976,
   0.1090258,
   0.1453409,
   0.1671289,
   0.2152734,
   0.2184287,
   0.2594479};
   grae = new TGraphAsymmErrors(12,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1320);
   Graph_Graph3024->SetMinimum(0.8168713);
   Graph_Graph3024->SetMaximum(1.553672);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,1200,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

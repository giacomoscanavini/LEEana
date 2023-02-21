#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Jan 15 16:41:41 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-184.6154,-30.94701,1353.846,3422.087);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,688.6424);
   hmc__1->SetBinContent(2,1547.35);
   hmc__1->SetBinContent(3,1298.292);
   hmc__1->SetBinContent(4,928.5161);
   hmc__1->SetBinContent(5,590.7451);
   hmc__1->SetBinContent(6,354.6064);
   hmc__1->SetBinContent(7,206.4738);
   hmc__1->SetBinContent(8,129.8529);
   hmc__1->SetBinContent(9,92.52248);
   hmc__1->SetBinContent(10,65.08041);
   hmc__1->SetBinContent(11,55.96369);
   hmc__1->SetBinContent(12,47.21945);
   hmc__1->SetBinContent(13,415.2071);
   hmc__1->SetBinError(1,148.8878);
   hmc__1->SetBinError(2,348.2425);
   hmc__1->SetBinError(3,317.2943);
   hmc__1->SetBinError(4,227.0804);
   hmc__1->SetBinError(5,151.366);
   hmc__1->SetBinError(6,84.66912);
   hmc__1->SetBinError(7,50.17139);
   hmc__1->SetBinError(8,35.04646);
   hmc__1->SetBinError(9,28.87847);
   hmc__1->SetBinError(10,19.87531);
   hmc__1->SetBinError(11,23.29948);
   hmc__1->SetBinError(12,16.68195);
   hmc__1->SetBinError(13,100.6757);
   hmc__1->SetMinimum(-30.94701);
   hmc__1->SetMaximum(3249.436);
   hmc__1->SetEntries(6341.03);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-1.505544e-08);
   hs1_stack_1->SetMaximum(1624.718);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,30.06016);
   hbadmatch_stack_1->SetBinContent(2,47.89407);
   hbadmatch_stack_1->SetBinContent(3,29.24058);
   hbadmatch_stack_1->SetBinContent(4,20.80841);
   hbadmatch_stack_1->SetBinContent(5,14.85124);
   hbadmatch_stack_1->SetBinContent(6,8.237297);
   hbadmatch_stack_1->SetBinContent(7,5.246276);
   hbadmatch_stack_1->SetBinContent(8,4.183009);
   hbadmatch_stack_1->SetBinContent(9,2.749624);
   hbadmatch_stack_1->SetBinContent(10,1.146108);
   hbadmatch_stack_1->SetBinContent(11,2.409531);
   hbadmatch_stack_1->SetBinContent(12,3.464303);
   hbadmatch_stack_1->SetBinContent(13,12.16264);
   hbadmatch_stack_1->SetBinError(1,3.404055);
   hbadmatch_stack_1->SetBinError(2,5.031632);
   hbadmatch_stack_1->SetBinError(3,3.286809);
   hbadmatch_stack_1->SetBinError(4,3.233324);
   hbadmatch_stack_1->SetBinError(5,2.318438);
   hbadmatch_stack_1->SetBinError(6,1.762098);
   hbadmatch_stack_1->SetBinError(7,1.458963);
   hbadmatch_stack_1->SetBinError(8,1.278667);
   hbadmatch_stack_1->SetBinError(9,1.014601);
   hbadmatch_stack_1->SetBinError(10,0.601883);
   hbadmatch_stack_1->SetBinError(11,1.029521);
   hbadmatch_stack_1->SetBinError(12,1.160221);
   hbadmatch_stack_1->SetBinError(13,2.211894);
   hbadmatch_stack_1->SetEntries(542);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,108.9267);
   houtFV_stack_4->SetBinContent(2,148.6714);
   houtFV_stack_4->SetBinContent(3,120.587);
   houtFV_stack_4->SetBinContent(4,87.65334);
   houtFV_stack_4->SetBinContent(5,52.00359);
   houtFV_stack_4->SetBinContent(6,36.99186);
   houtFV_stack_4->SetBinContent(7,25.62688);
   houtFV_stack_4->SetBinContent(8,15.239);
   houtFV_stack_4->SetBinContent(9,10.99524);
   houtFV_stack_4->SetBinContent(10,12.11489);
   houtFV_stack_4->SetBinContent(11,7.93543);
   houtFV_stack_4->SetBinContent(12,9.950217);
   houtFV_stack_4->SetBinContent(13,55.02096);
   houtFV_stack_4->SetBinError(1,6.098462);
   houtFV_stack_4->SetBinError(2,7.25096);
   houtFV_stack_4->SetBinError(3,6.416873);
   houtFV_stack_4->SetBinError(4,5.588296);
   houtFV_stack_4->SetBinError(5,4.245377);
   houtFV_stack_4->SetBinError(6,3.571896);
   houtFV_stack_4->SetBinError(7,2.98809);
   houtFV_stack_4->SetBinError(8,2.25298);
   houtFV_stack_4->SetBinError(9,2.016979);
   houtFV_stack_4->SetBinError(10,2.06542);
   houtFV_stack_4->SetBinError(11,1.784864);
   houtFV_stack_4->SetBinError(12,1.917305);
   houtFV_stack_4->SetBinError(13,4.407049);
   houtFV_stack_4->SetEntries(2242);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.575376);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.82625);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,18.66694);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.92149);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.86835);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.551262);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.119354);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.44011);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.340015);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.108297);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.686559);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9182773);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.21371);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.079573);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.443087);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.618289);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.645759);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.493765);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.145479);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6923718);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7557997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3983681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3886215);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2826596);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2959171);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.240428);
   hNCpi0inFVcoh_stack_5->SetEntries(1663);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.061745);
   hNCpi0inFVqe_stack_6->SetBinContent(2,8.617468);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.773204);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.738034);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.406221);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8434762);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4217381);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3224303);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.108297);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6483072);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.146435);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.8733864);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.762296);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4011093);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3771742);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2667025);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2604666);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3886215);
   hNCpi0inFVqe_stack_6->SetEntries(480);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,234.7192);
   hNCpi0inFVres_stack_7->SetBinContent(2,675.8965);
   hNCpi0inFVres_stack_7->SetBinContent(3,606.553);
   hNCpi0inFVres_stack_7->SetBinContent(4,422.38);
   hNCpi0inFVres_stack_7->SetBinContent(5,262.2452);
   hNCpi0inFVres_stack_7->SetBinContent(6,137.5205);
   hNCpi0inFVres_stack_7->SetBinContent(7,75.83971);
   hNCpi0inFVres_stack_7->SetBinContent(8,42.58604);
   hNCpi0inFVres_stack_7->SetBinContent(9,32.90801);
   hNCpi0inFVres_stack_7->SetBinContent(10,19.08996);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.26112);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.60402);
   hNCpi0inFVres_stack_7->SetBinContent(13,127.824);
   hNCpi0inFVres_stack_7->SetBinError(1,5.909768);
   hNCpi0inFVres_stack_7->SetBinError(2,9.969019);
   hNCpi0inFVres_stack_7->SetBinError(3,9.461952);
   hNCpi0inFVres_stack_7->SetBinError(4,7.94103);
   hNCpi0inFVres_stack_7->SetBinError(5,6.269386);
   hNCpi0inFVres_stack_7->SetBinError(6,4.483571);
   hNCpi0inFVres_stack_7->SetBinError(7,3.329554);
   hNCpi0inFVres_stack_7->SetBinError(8,2.434359);
   hNCpi0inFVres_stack_7->SetBinError(9,2.192114);
   hNCpi0inFVres_stack_7->SetBinError(10,1.56887);
   hNCpi0inFVres_stack_7->SetBinError(11,1.631746);
   hNCpi0inFVres_stack_7->SetBinError(12,1.258842);
   hNCpi0inFVres_stack_7->SetBinError(13,4.395915);
   hNCpi0inFVres_stack_7->SetEntries(44527);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,52.44422);
   hNCpi0inFVdis_stack_8->SetBinContent(2,118.5582);
   hNCpi0inFVdis_stack_8->SetBinContent(3,94.06773);
   hNCpi0inFVdis_stack_8->SetBinContent(4,71.82095);
   hNCpi0inFVdis_stack_8->SetBinContent(5,51.92061);
   hNCpi0inFVdis_stack_8->SetBinContent(6,36.0919);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.3122);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.71884);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.716775);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.053542);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.978348);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.160166);
   hNCpi0inFVdis_stack_8->SetBinContent(13,34.74329);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.719527);
   hNCpi0inFVdis_stack_8->SetBinError(2,4.125096);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.707752);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.221987);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.789029);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.304549);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.720224);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.224015);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.147868);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8257188);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7293015);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9256618);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.282352);
   hNCpi0inFVdis_stack_8->SetEntries(8714);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.6203538);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.9096814);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1324105);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.278756);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3800684);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2604666);
   hNCpi0inFVmec_stack_9->SetEntries(38);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,112.9597);
   hCCpi0inFV_stack_10->SetBinContent(2,248.6124);
   hCCpi0inFV_stack_10->SetBinContent(3,220.5571);
   hCCpi0inFV_stack_10->SetBinContent(4,159.7607);
   hCCpi0inFV_stack_10->SetBinContent(5,91.48663);
   hCCpi0inFV_stack_10->SetBinContent(6,60.84528);
   hCCpi0inFV_stack_10->SetBinContent(7,35.23393);
   hCCpi0inFV_stack_10->SetBinContent(8,20.23612);
   hCCpi0inFV_stack_10->SetBinContent(9,15.52128);
   hCCpi0inFV_stack_10->SetBinContent(10,10.56925);
   hCCpi0inFV_stack_10->SetBinContent(11,8.831057);
   hCCpi0inFV_stack_10->SetBinContent(12,5.963935);
   hCCpi0inFV_stack_10->SetBinContent(13,56.05571);
   hCCpi0inFV_stack_10->SetBinError(1,6.148639);
   hCCpi0inFV_stack_10->SetBinError(2,9.30389);
   hCCpi0inFV_stack_10->SetBinError(3,8.729912);
   hCCpi0inFV_stack_10->SetBinError(4,7.460711);
   hCCpi0inFV_stack_10->SetBinError(5,5.552667);
   hCCpi0inFV_stack_10->SetBinError(6,4.651665);
   hCCpi0inFV_stack_10->SetBinError(7,3.527131);
   hCCpi0inFV_stack_10->SetBinError(8,2.539917);
   hCCpi0inFV_stack_10->SetBinError(9,2.331592);
   hCCpi0inFV_stack_10->SetBinError(10,1.795815);
   hCCpi0inFV_stack_10->SetBinError(11,1.814685);
   hCCpi0inFV_stack_10->SetBinError(12,1.365939);
   hCCpi0inFV_stack_10->SetBinError(13,4.473076);
   hCCpi0inFV_stack_10->SetEntries(3371);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,66.13533);
   hNCinFV_stack_11->SetBinContent(2,130.0755);
   hNCinFV_stack_11->SetBinContent(3,89.83253);
   hNCinFV_stack_11->SetBinContent(4,52.70377);
   hNCinFV_stack_11->SetBinContent(5,43.70567);
   hNCinFV_stack_11->SetBinContent(6,30.0359);
   hNCinFV_stack_11->SetBinContent(7,15.77035);
   hNCinFV_stack_11->SetBinContent(8,13.20297);
   hNCinFV_stack_11->SetBinContent(9,7.005637);
   hNCinFV_stack_11->SetBinContent(10,7.0474);
   hNCinFV_stack_11->SetBinContent(11,5.688775);
   hNCinFV_stack_11->SetBinContent(12,2.271334);
   hNCinFV_stack_11->SetBinContent(13,33.3907);
   hNCinFV_stack_11->SetBinError(1,4.656146);
   hNCinFV_stack_11->SetBinError(2,6.712626);
   hNCinFV_stack_11->SetBinError(3,5.62806);
   hNCinFV_stack_11->SetBinError(4,4.21868);
   hNCinFV_stack_11->SetBinError(5,3.901705);
   hNCinFV_stack_11->SetBinError(6,3.242929);
   hNCinFV_stack_11->SetBinError(7,2.279691);
   hNCinFV_stack_11->SetBinError(8,2.144241);
   hNCinFV_stack_11->SetBinError(9,1.636309);
   hNCinFV_stack_11->SetBinError(10,1.580419);
   hNCinFV_stack_11->SetBinError(11,1.411062);
   hNCinFV_stack_11->SetBinError(12,0.9024504);
   hNCinFV_stack_11->SetBinError(13,3.458748);
   hNCinFV_stack_11->SetEntries(1594);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,64.3585);
   hnumuCCinFV_stack_12->SetBinContent(2,151.4145);
   hnumuCCinFV_stack_12->SetBinContent(3,107.0371);
   hnumuCCinFV_stack_12->SetBinContent(4,84.73917);
   hnumuCCinFV_stack_12->SetBinContent(5,56.29856);
   hnumuCCinFV_stack_12->SetBinContent(6,33.78668);
   hnumuCCinFV_stack_12->SetBinContent(7,22.18931);
   hnumuCCinFV_stack_12->SetBinContent(8,17.8408);
   hnumuCCinFV_stack_12->SetBinContent(9,12.31724);
   hnumuCCinFV_stack_12->SetBinContent(10,8.315475);
   hnumuCCinFV_stack_12->SetBinContent(11,6.798105);
   hnumuCCinFV_stack_12->SetBinContent(12,6.668406);
   hnumuCCinFV_stack_12->SetBinContent(13,64.92025);
   hnumuCCinFV_stack_12->SetBinError(1,5.458089);
   hnumuCCinFV_stack_12->SetBinError(2,7.957994);
   hnumuCCinFV_stack_12->SetBinError(3,6.897165);
   hnumuCCinFV_stack_12->SetBinError(4,5.907871);
   hnumuCCinFV_stack_12->SetBinError(5,5.096154);
   hnumuCCinFV_stack_12->SetBinError(6,4.717797);
   hnumuCCinFV_stack_12->SetBinError(7,2.910737);
   hnumuCCinFV_stack_12->SetBinError(8,2.719471);
   hnumuCCinFV_stack_12->SetBinError(9,2.72959);
   hnumuCCinFV_stack_12->SetBinError(10,2.046104);
   hnumuCCinFV_stack_12->SetBinError(11,1.566909);
   hnumuCCinFV_stack_12->SetBinError(12,1.71963);
   hnumuCCinFV_stack_12->SetBinError(13,5.401395);
   hnumuCCinFV_stack_12->SetEntries(1922);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,6.7811);
   hnueCCinFV_stack_13->SetBinContent(2,3.874414);
   hnueCCinFV_stack_13->SetBinContent(3,5.844269);
   hnueCCinFV_stack_13->SetBinContent(4,6.92395);
   hnueCCinFV_stack_13->SetBinContent(5,2.892785);
   hnueCCinFV_stack_13->SetBinContent(6,1.669173);
   hnueCCinFV_stack_13->SetBinContent(7,1.515382);
   hnueCCinFV_stack_13->SetBinContent(8,1.661876);
   hnueCCinFV_stack_13->SetBinContent(9,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(10,0.3130678);
   hnueCCinFV_stack_13->SetBinContent(11,1.341662);
   hnueCCinFV_stack_13->SetBinContent(12,1.18569);
   hnueCCinFV_stack_13->SetBinContent(13,19.76762);
   hnueCCinFV_stack_13->SetBinError(1,1.982575);
   hnueCCinFV_stack_13->SetBinError(2,1.186738);
   hnueCCinFV_stack_13->SetBinError(3,1.623109);
   hnueCCinFV_stack_13->SetBinError(4,2.702457);
   hnueCCinFV_stack_13->SetBinError(5,1.025375);
   hnueCCinFV_stack_13->SetBinError(6,0.7075605);
   hnueCCinFV_stack_13->SetBinError(7,0.6995683);
   hnueCCinFV_stack_13->SetBinError(8,0.7722386);
   hnueCCinFV_stack_13->SetBinError(9,0.5033032);
   hnueCCinFV_stack_13->SetBinError(10,0.3130678);
   hnueCCinFV_stack_13->SetBinError(11,0.8146586);
   hnueCCinFV_stack_13->SetBinError(12,0.6957252);
   hnueCCinFV_stack_13->SetBinError(13,3.31093);
   hnueCCinFV_stack_13->SetEntries(147);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,688.6424);
   hmcerror__2->SetBinContent(2,1547.35);
   hmcerror__2->SetBinContent(3,1298.292);
   hmcerror__2->SetBinContent(4,928.5161);
   hmcerror__2->SetBinContent(5,590.7451);
   hmcerror__2->SetBinContent(6,354.6064);
   hmcerror__2->SetBinContent(7,206.4738);
   hmcerror__2->SetBinContent(8,129.8529);
   hmcerror__2->SetBinContent(9,92.52248);
   hmcerror__2->SetBinContent(10,65.08041);
   hmcerror__2->SetBinContent(11,55.96369);
   hmcerror__2->SetBinContent(12,47.21945);
   hmcerror__2->SetBinContent(13,415.2071);
   hmcerror__2->SetBinError(1,148.8878);
   hmcerror__2->SetBinError(2,348.2425);
   hmcerror__2->SetBinError(3,317.2943);
   hmcerror__2->SetBinError(4,227.0804);
   hmcerror__2->SetBinError(5,151.366);
   hmcerror__2->SetBinError(6,84.66912);
   hmcerror__2->SetBinError(7,50.17139);
   hmcerror__2->SetBinError(8,35.04646);
   hmcerror__2->SetBinError(9,28.87847);
   hmcerror__2->SetBinError(10,19.87531);
   hmcerror__2->SetBinError(11,23.29948);
   hmcerror__2->SetBinError(12,16.68195);
   hmcerror__2->SetBinError(13,100.6757);
   hmcerror__2->SetEntries(6341.03);

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
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   657,
   1428,
   1178,
   827,
   568,
   352,
   193,
   125,
   96,
   75,
   59,
   46};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   25.63201,
   37.78889,
   34.322,
   28.75761,
   23.83275,
   18.76166,
   13.89244,
   11.18034,
   9.9196,
   8.7852,
   7.8097,
   6.9153};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   25.63201,
   37.78889,
   34.322,
   28.75761,
   23.83275,
   18.76166,
   13.89244,
   11.18034,
   9.718,
   8.5831,
   7.6066,
   6.7108};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(35.17623);
   Graph_Graph3001->SetMaximum(1608.459);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5604.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 170.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 636.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2539.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  478.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 990.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 463.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 571.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 34.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[12] = {
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
   Double_t _fy3002[12] = {
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
   Double_t _felx3002[12] = {
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
   Double_t _fely3002[12] = {
   0.2162048,
   0.2250573,
   0.2443937,
   0.2445627,
   0.2562289,
   0.2387693,
   0.2429916,
   0.2698934,
   0.3121238,
   0.3053962,
   0.4163322,
   0.3532855};
   Double_t _fehx3002[12] = {
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
   Double_t _fehy3002[12] = {
   0.2162048,
   0.2250573,
   0.2443937,
   0.2445627,
   0.2562289,
   0.2387693,
   0.2429916,
   0.2698934,
   0.3121238,
   0.3053962,
   0.4163322,
   0.3532855};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
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
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.1980905,
   0.2206059,
   0.241121,
   0.2378868,
   0.2261531,
   0.2202403,
   0.2088857,
   0.2051588,
   0.2257863,
   0.2162645,
   0.2065142,
   0.2092888};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.1980905,
   0.2206059,
   0.241121,
   0.2378868,
   0.2261531,
   0.2202403,
   0.2088857,
   0.2051588,
   0.2257863,
   0.2162645,
   0.2065142,
   0.2092888};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[12] = {
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
   Double_t _fy3004[12] = {
   0.954051,
   0.9228679,
   0.907346,
   0.8906684,
   0.9614977,
   0.9926499,
   0.9347435,
   0.9626274,
   1.037586,
   1.15242,
   1.054255,
   0.9741749};
   Double_t _felx3004[12] = {
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
   Double_t _fely3004[12] = {
   0.03722108,
   0.02442168,
   0.02643628,
   0.03097158,
   0.04034355,
   0.05290842,
   0.06728431,
   0.08610002,
   0.1072129,
   0.1349899,
   0.1395494,
   0.1464503};
   Double_t _fehx3004[12] = {
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
   Double_t _fehy3004[12] = {
   0.03722108,
   0.02442168,
   0.02643628,
   0.03097158,
   0.04034355,
   0.05290842,
   0.06728431,
   0.08610002,
   0.1050339,
   0.1318845,
   0.1359203,
   0.1421194};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.7820666);
   Graph_Graph3004->SetMaximum(1.329963);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_6_pi0_momentum_all",12,0,1200);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

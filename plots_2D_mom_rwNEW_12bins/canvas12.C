#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas12()
{
//=========Macro generated from canvas: canvas12/channel12
//=========  (Sat Feb 18 20:30:59 2023) by ROOT version 6.26/00
   TCanvas *canvas12 = new TCanvas("canvas12", "channel12",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas12->SetHighLightColor(2);
   canvas12->Range(0,0,1,1);
   canvas12->SetFillColor(0);
   canvas12->SetBorderMode(0);
   canvas12->SetBorderSize(2);
   canvas12->SetLeftMargin(0.12);
   canvas12->SetRightMargin(0.12);
   canvas12->SetTopMargin(0.05);
   canvas12->SetBottomMargin(0.12);
   canvas12->SetFrameLineWidth(2);
   canvas12->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-1.160644,1353.846,128.3427);
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
   
   TH1F *hmc__34 = new TH1F("hmc__34","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__34->SetBinContent(1,20.55436);
   hmc__34->SetBinContent(2,51.95);
   hmc__34->SetBinContent(3,58.03218);
   hmc__34->SetBinContent(4,47.67351);
   hmc__34->SetBinContent(5,37.06938);
   hmc__34->SetBinContent(6,31.98489);
   hmc__34->SetBinContent(7,12.17737);
   hmc__34->SetBinContent(8,11.86263);
   hmc__34->SetBinContent(9,7.984484);
   hmc__34->SetBinContent(10,3.500169);
   hmc__34->SetBinContent(11,3.388564);
   hmc__34->SetBinContent(12,3.245759);
   hmc__34->SetBinContent(13,30.51071);
   hmc__34->SetBinError(1,14.83417);
   hmc__34->SetBinError(2,21.14214);
   hmc__34->SetBinError(3,21.23383);
   hmc__34->SetBinError(4,23.601);
   hmc__34->SetBinError(5,20.42387);
   hmc__34->SetBinError(6,14.62463);
   hmc__34->SetBinError(7,9.510116);
   hmc__34->SetBinError(8,9.187065);
   hmc__34->SetBinError(9,13.96386);
   hmc__34->SetBinError(10,4.878557);
   hmc__34->SetBinError(11,4.438033);
   hmc__34->SetBinError(12,5.875149);
   hmc__34->SetBinError(13,13.23258);
   hmc__34->SetMinimum(-1.160644);
   hmc__34->SetMaximum(121.8676);
   hmc__34->SetEntries(311.8897);
   hmc__34->SetLineWidth(5);
   hmc__34->GetXaxis()->SetLabelFont(42);
   hmc__34->GetXaxis()->SetTitleOffset(1);
   hmc__34->GetXaxis()->SetTitleFont(42);
   hmc__34->GetYaxis()->SetTitle("Event counts");
   hmc__34->GetYaxis()->SetLabelFont(132);
   hmc__34->GetYaxis()->SetLabelSize(0.04);
   hmc__34->GetYaxis()->SetTitleSize(0.05);
   hmc__34->GetYaxis()->SetTitleOffset(0.73);
   hmc__34->GetYaxis()->SetTitleFont(132);
   hmc__34->GetZaxis()->SetLabelFont(42);
   hmc__34->GetZaxis()->SetTitleOffset(1);
   hmc__34->GetZaxis()->SetTitleFont(42);
   hmc__34->Draw("hist");
   
   THStack *hs12 = new THStack();
   hs12->SetName("hs12");
   hs12->SetTitle("");
   
   TH1F *hs12_stack_12 = new TH1F("hs12_stack_12","",12,0,1200);
   hs12_stack_12->SetMinimum(-4.830136e-08);
   hs12_stack_12->SetMaximum(60.93378);
   hs12_stack_12->SetDirectory(0);
   hs12_stack_12->SetStats(0);
   hs12_stack_12->SetLineWidth(2);
   hs12_stack_12->SetMarkerStyle(20);
   hs12_stack_12->GetXaxis()->SetNdivisions(509);
   hs12_stack_12->GetXaxis()->SetLabelFont(132);
   hs12_stack_12->GetXaxis()->SetLabelOffset(0.01);
   hs12_stack_12->GetXaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetXaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetXaxis()->SetTitleOffset(0.95);
   hs12_stack_12->GetXaxis()->SetTitleFont(132);
   hs12_stack_12->GetYaxis()->SetNdivisions(509);
   hs12_stack_12->GetYaxis()->SetLabelFont(132);
   hs12_stack_12->GetYaxis()->SetLabelOffset(0.01);
   hs12_stack_12->GetYaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetYaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetYaxis()->SetTitleOffset(0.95);
   hs12_stack_12->GetYaxis()->SetTitleFont(132);
   hs12_stack_12->GetZaxis()->SetLabelFont(132);
   hs12_stack_12->GetZaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetZaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetZaxis()->SetTitleOffset(1.2);
   hs12_stack_12->GetZaxis()->SetTitleFont(132);
   hs12->SetHistogram(hs12_stack_12);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.8770706);
   hbadmatch_stack_1->SetBinContent(2,1.608988);
   hbadmatch_stack_1->SetBinContent(3,1.660551);
   hbadmatch_stack_1->SetBinContent(4,1.072095);
   hbadmatch_stack_1->SetBinContent(5,1.946627);
   hbadmatch_stack_1->SetBinContent(6,0.9818863);
   hbadmatch_stack_1->SetBinContent(7,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,1.326524);
   hbadmatch_stack_1->SetBinError(1,0.5197486);
   hbadmatch_stack_1->SetBinError(2,0.6801404);
   hbadmatch_stack_1->SetBinError(3,0.650847);
   hbadmatch_stack_1->SetBinError(4,0.5551335);
   hbadmatch_stack_1->SetBinError(5,1.190398);
   hbadmatch_stack_1->SetBinError(6,0.4391155);
   hbadmatch_stack_1->SetBinError(7,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.6235275);
   hbadmatch_stack_1->SetEntries(35);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1577;
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
   hs12->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,1.219797);
   hext_stack_2->SetBinContent(2,9.87201);
   hext_stack_2->SetBinContent(3,9.787037);
   hext_stack_2->SetBinContent(4,4.93821);
   hext_stack_2->SetBinContent(5,6.374251);
   hext_stack_2->SetBinContent(6,5.993603);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,0.8131978);
   hext_stack_2->SetBinContent(9,0.8131978);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(13,4.221574);
   hext_stack_2->SetBinError(1,0.7042499);
   hext_stack_2->SetBinError(2,2.053562);
   hext_stack_2->SetBinError(3,2.119752);
   hext_stack_2->SetBinError(4,1.475167);
   hext_stack_2->SetBinError(5,1.784857);
   hext_stack_2->SetBinError(6,1.59747);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.5750177);
   hext_stack_2->SetBinError(9,0.5750177);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(13,1.226034);
   hext_stack_2->SetEntries(111);

   ci = 1578;
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
   hs12->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,0.8448025);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(6,0.8130994);
   hdirt_stack_3->SetBinContent(7,0.3339859);
   hdirt_stack_3->SetBinContent(8,0.1608405);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.7374783);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.4564839);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(6,0.5750517);
   hdirt_stack_3->SetBinError(7,0.2473076);
   hdirt_stack_3->SetBinError(8,0.1608405);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(13,0.5232628);
   hdirt_stack_3->SetEntries(19);

   ci = 1579;
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
   hs12->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.350457);
   houtFV_stack_4->SetBinContent(2,6.755904);
   houtFV_stack_4->SetBinContent(3,8.514302);
   houtFV_stack_4->SetBinContent(4,8.148987);
   houtFV_stack_4->SetBinContent(5,4.571126);
   houtFV_stack_4->SetBinContent(6,5.220396);
   houtFV_stack_4->SetBinContent(7,2.911018);
   houtFV_stack_4->SetBinContent(8,4.346124);
   houtFV_stack_4->SetBinContent(9,0.9801958);
   houtFV_stack_4->SetBinContent(10,0.3917402);
   houtFV_stack_4->SetBinContent(11,0.7302274);
   houtFV_stack_4->SetBinContent(13,5.336135);
   houtFV_stack_4->SetBinError(1,1.130219);
   houtFV_stack_4->SetBinError(2,1.297181);
   houtFV_stack_4->SetBinError(3,1.516588);
   houtFV_stack_4->SetBinError(4,1.377861);
   houtFV_stack_4->SetBinError(5,1.098293);
   houtFV_stack_4->SetBinError(6,1.210441);
   houtFV_stack_4->SetBinError(7,0.790371);
   houtFV_stack_4->SetBinError(8,1.002739);
   houtFV_stack_4->SetBinError(9,0.4383608);
   houtFV_stack_4->SetBinError(10,0.2770047);
   houtFV_stack_4->SetBinError(11,0.4379386);
   houtFV_stack_4->SetBinError(13,1.161641);
   houtFV_stack_4->SetEntries(223);

   ci = 1580;
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
   hs12->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.074322);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.630826);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.616544);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.064112);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.58898);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9200356);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3674124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3805083);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3887721);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4983797);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4646323);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.0882275);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1979399);
   hNCpi0inFVcoh_stack_5->SetEntries(206);

   ci = 1581;
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
   hs12->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1582;
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
   hs12->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.286312);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.294951);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.213593);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.540993);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.693536);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.226206);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.357562);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.227272);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.007648);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5294358);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.6403718);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.69634);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.196474);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4500938);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6086045);
   hNCpi0inFVres_stack_7->SetBinError(3,0.931704);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8326555);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8409121);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7019563);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5315714);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3365421);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5102139);
   hNCpi0inFVres_stack_7->SetBinError(10,0.168174);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2118699);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2814331);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6485931);
   hNCpi0inFVres_stack_7->SetEntries(869);

   ci = 1583;
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
   hs12->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.613304);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.644444);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.854026);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.788184);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.728976);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.23068);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8096042);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8511223);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.063944);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2517472);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3897719);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.388605);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5436969);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4165616);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4835148);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3476357);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3588378);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4643526);
   hNCpi0inFVdis_stack_8->SetEntries(300);

   ci = 1584;
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
   hs12->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1585;
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
   hs12->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,3.587984);
   hCCpi0inFV_stack_10->SetBinContent(2,12.02699);
   hCCpi0inFV_stack_10->SetBinContent(3,13.46821);
   hCCpi0inFV_stack_10->SetBinContent(4,13.6453);
   hCCpi0inFV_stack_10->SetBinContent(5,9.720099);
   hCCpi0inFV_stack_10->SetBinContent(6,6.888792);
   hCCpi0inFV_stack_10->SetBinContent(7,3.175949);
   hCCpi0inFV_stack_10->SetBinContent(8,1.905448);
   hCCpi0inFV_stack_10->SetBinContent(9,1.754141);
   hCCpi0inFV_stack_10->SetBinContent(10,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(12,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(13,7.659437);
   hCCpi0inFV_stack_10->SetBinError(1,0.9583471);
   hCCpi0inFV_stack_10->SetBinError(2,1.78702);
   hCCpi0inFV_stack_10->SetBinError(3,1.902851);
   hCCpi0inFV_stack_10->SetBinError(4,1.86069);
   hCCpi0inFV_stack_10->SetBinError(5,1.594958);
   hCCpi0inFV_stack_10->SetBinError(6,1.301327);
   hCCpi0inFV_stack_10->SetBinError(7,0.8772215);
   hCCpi0inFV_stack_10->SetBinError(8,0.6496038);
   hCCpi0inFV_stack_10->SetBinError(9,0.7350354);
   hCCpi0inFV_stack_10->SetBinError(10,0.438694);
   hCCpi0inFV_stack_10->SetBinError(11,0.340721);
   hCCpi0inFV_stack_10->SetBinError(12,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(13,1.379464);
   hCCpi0inFV_stack_10->SetEntries(318);

   ci = 1586;
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
   hs12->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,2.002419);
   hNCinFV_stack_11->SetBinContent(2,4.485097);
   hNCinFV_stack_11->SetBinContent(3,3.322793);
   hNCinFV_stack_11->SetBinContent(4,1.949166);
   hNCinFV_stack_11->SetBinContent(5,2.052291);
   hNCinFV_stack_11->SetBinContent(6,1.467217);
   hNCinFV_stack_11->SetBinContent(7,0.7817899);
   hNCinFV_stack_11->SetBinContent(8,0.9269427);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinError(1,0.7348366);
   hNCinFV_stack_11->SetBinError(2,1.127559);
   hNCinFV_stack_11->SetBinError(3,0.9207963);
   hNCinFV_stack_11->SetBinError(4,0.7604681);
   hNCinFV_stack_11->SetBinError(5,0.7073425);
   hNCinFV_stack_11->SetBinError(6,0.6214735);
   hNCinFV_stack_11->SetBinError(7,0.3908977);
   hNCinFV_stack_11->SetBinError(8,0.4800908);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetEntries(74);

   ci = 1587;
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
   hs12->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,4.540909);
   hnumuCCinFV_stack_12->SetBinContent(2,9.342484);
   hnumuCCinFV_stack_12->SetBinContent(3,9.059816);
   hnumuCCinFV_stack_12->SetBinContent(4,4.851834);
   hnumuCCinFV_stack_12->SetBinContent(5,1.862558);
   hnumuCCinFV_stack_12->SetBinContent(6,2.546129);
   hnumuCCinFV_stack_12->SetBinContent(7,0.997251);
   hnumuCCinFV_stack_12->SetBinContent(8,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(9,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(10,1.195579);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(12,1.033692);
   hnumuCCinFV_stack_12->SetBinContent(13,0.9801958);
   hnumuCCinFV_stack_12->SetBinError(1,2.350237);
   hnumuCCinFV_stack_12->SetBinError(2,1.632904);
   hnumuCCinFV_stack_12->SetBinError(3,2.396877);
   hnumuCCinFV_stack_12->SetBinError(4,1.060074);
   hnumuCCinFV_stack_12->SetBinError(5,0.6815398);
   hnumuCCinFV_stack_12->SetBinError(6,0.7951971);
   hnumuCCinFV_stack_12->SetBinError(7,0.4462101);
   hnumuCCinFV_stack_12->SetBinError(8,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(9,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(10,1.195579);
   hnumuCCinFV_stack_12->SetBinError(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(12,0.5446248);
   hnumuCCinFV_stack_12->SetBinError(13,0.4383608);
   hnumuCCinFV_stack_12->SetEntries(144);

   ci = 1588;
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
   hs12->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(10,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(13,2.336996);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.340721);
   hnueCCinFV_stack_13->SetBinError(10,0.2179626);
   hnueCCinFV_stack_13->SetBinError(13,1.067966);
   hnueCCinFV_stack_13->SetEntries(11);

   ci = 1589;
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
   hs12->Add(hnueCCinFV_stack_13,"");
   hs12->Draw("hist same");
   
   TH1F *hmcerror__35 = new TH1F("hmcerror__35","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__35->SetBinContent(1,20.55436);
   hmcerror__35->SetBinContent(2,51.95);
   hmcerror__35->SetBinContent(3,58.03218);
   hmcerror__35->SetBinContent(4,47.67351);
   hmcerror__35->SetBinContent(5,37.06938);
   hmcerror__35->SetBinContent(6,31.98489);
   hmcerror__35->SetBinContent(7,12.17737);
   hmcerror__35->SetBinContent(8,11.86263);
   hmcerror__35->SetBinContent(9,7.984484);
   hmcerror__35->SetBinContent(10,3.500169);
   hmcerror__35->SetBinContent(11,3.388564);
   hmcerror__35->SetBinContent(12,3.245759);
   hmcerror__35->SetBinContent(13,30.51071);
   hmcerror__35->SetBinError(1,14.83417);
   hmcerror__35->SetBinError(2,21.14214);
   hmcerror__35->SetBinError(3,21.23383);
   hmcerror__35->SetBinError(4,23.601);
   hmcerror__35->SetBinError(5,20.42387);
   hmcerror__35->SetBinError(6,14.62463);
   hmcerror__35->SetBinError(7,9.510116);
   hmcerror__35->SetBinError(8,9.187065);
   hmcerror__35->SetBinError(9,13.96386);
   hmcerror__35->SetBinError(10,4.878557);
   hmcerror__35->SetBinError(11,4.438033);
   hmcerror__35->SetBinError(12,5.875149);
   hmcerror__35->SetBinError(13,13.23258);
   hmcerror__35->SetEntries(311.8897);

   ci = TColor::GetColor("#999999");
   hmcerror__35->SetFillColor(ci);
   hmcerror__35->SetFillStyle(3002);
   hmcerror__35->SetLineColor(12);
   hmcerror__35->SetLineWidth(0);
   hmcerror__35->SetMarkerColor(0);
   hmcerror__35->SetMarkerSize(0);
   hmcerror__35->GetXaxis()->SetLabelFont(42);
   hmcerror__35->GetXaxis()->SetTitleOffset(1);
   hmcerror__35->GetXaxis()->SetTitleFont(42);
   hmcerror__35->GetYaxis()->SetLabelFont(42);
   hmcerror__35->GetYaxis()->SetTitleFont(42);
   hmcerror__35->GetZaxis()->SetLabelFont(42);
   hmcerror__35->GetZaxis()->SetTitleOffset(1);
   hmcerror__35->GetZaxis()->SetTitleFont(42);
   hmcerror__35->Draw("same E2");
   
   Double_t _fx3045[12] = {
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
   Double_t _fy3045[12] = {
   22,
   47,
   47,
   44,
   35,
   19,
   14,
   14,
   9,
   6,
   6,
   5};
   Double_t _felx3045[12] = {
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
   Double_t _fely3045[12] = {
   4.8417,
   6.9882,
   6.9882,
   6.7671,
   6.0548,
   4.5151,
   3.9102,
   3.9102,
   3.19354,
   2.67925,
   2.67925,
   2.48995};
   Double_t _fehx3045[12] = {
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
   Double_t _fehy3045[12] = {
   4.6299,
   6.7839,
   6.7839,
   6.5623,
   5.8483,
   4.3011,
   3.6898,
   3.6898,
   2.9582,
   2.41858,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,1320);
   Graph_Graph3045->SetMinimum(2.259045);
   Graph_Graph3045->SetMaximum(58.91129);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineWidth(2);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetNdivisions(509);
   Graph_Graph3045->GetXaxis()->SetLabelFont(132);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3045->GetXaxis()->SetTitleFont(132);
   Graph_Graph3045->GetYaxis()->SetNdivisions(509);
   Graph_Graph3045->GetYaxis()->SetLabelFont(132);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3045->GetYaxis()->SetTitleFont(132);
   Graph_Graph3045->GetZaxis()->SetLabelFont(132);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3045->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 268.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 8.3","F");

   ci = 1577;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 40.9","F");

   ci = 1578;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.7","F");

   ci = 1579;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 46.9","F");

   ci = 1580;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  10.3","F");

   ci = 1581;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

   ci = 1582;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  40.7","F");

   ci = 1583;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  13.8","F");

   ci = 1584;
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

   ci = 1585;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 68.2","F");

   ci = 1586;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.4","F");

   ci = 1587;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 37.4","F");

   ci = 1588;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.1","F");

   ci = 1589;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas12->cd();
  
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
   
   Double_t _fx3046[12] = {
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
   Double_t _fy3046[12] = {
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
   Double_t _felx3046[12] = {
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
   Double_t _fely3046[12] = {
   0.721704,
   0.4069709,
   0.3658976,
   0.4950549,
   0.5509635,
   0.4572358,
   0.7809666,
   0.7744546,
   1.748874,
   1.393806,
   1.309709,
   1.8101};
   Double_t _fehx3046[12] = {
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
   Double_t _fehy3046[12] = {
   0.721704,
   0.4069709,
   0.3658976,
   0.4950549,
   0.5509635,
   0.4572358,
   0.7809666,
   0.7744546,
   1.748874,
   1.393806,
   1.309709,
   1.8101};
   grae = new TGraphAsymmErrors(12,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,1320);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(2);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineWidth(2);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3046->GetXaxis()->SetRange(1,91);
   Graph_Graph3046->GetXaxis()->SetNdivisions(509);
   Graph_Graph3046->GetXaxis()->SetLabelFont(132);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3046->GetXaxis()->SetTitleFont(132);
   Graph_Graph3046->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3046->GetYaxis()->SetNdivisions(210);
   Graph_Graph3046->GetYaxis()->SetLabelFont(132);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3046->GetYaxis()->SetTitleFont(132);
   Graph_Graph3046->GetZaxis()->SetLabelFont(132);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3046->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3046->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("a2");
   
   Double_t _fx3047[12] = {
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
   Double_t _fy3047[12] = {
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
   Double_t _felx3047[12] = {
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
   Double_t _fely3047[12] = {
   0.2770781,
   0.1656636,
   0.1850873,
   0.198772,
   0.2053337,
   0.2051848,
   0.2774844,
   0.256412,
   0.2968797,
   0.5929155,
   0.3552617,
   0.4118545};
   Double_t _fehx3047[12] = {
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
   Double_t _fehy3047[12] = {
   0.2770781,
   0.1656636,
   0.1850873,
   0.198772,
   0.2053337,
   0.2051848,
   0.2774844,
   0.256412,
   0.2968797,
   0.5929155,
   0.3552617,
   0.4118545};
   grae = new TGraphAsymmErrors(12,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,1320);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(2);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineWidth(2);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetRange(1,91);
   Graph_Graph3047->GetXaxis()->SetNdivisions(509);
   Graph_Graph3047->GetXaxis()->SetLabelFont(132);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3047->GetXaxis()->SetTitleFont(132);
   Graph_Graph3047->GetYaxis()->SetNdivisions(509);
   Graph_Graph3047->GetYaxis()->SetLabelFont(132);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3047->GetYaxis()->SetTitleFont(132);
   Graph_Graph3047->GetZaxis()->SetLabelFont(132);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3047->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2 ");
   
   Double_t _fx3048[12] = {
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
   Double_t _fy3048[12] = {
   1.070332,
   0.9047161,
   0.8098955,
   0.9229444,
   0.9441755,
   0.5940305,
   1.149674,
   1.180177,
   1.127186,
   1.714203,
   1.770661,
   1.540472};
   Double_t _felx3048[12] = {
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
   Double_t _fely3048[12] = {
   0.2355558,
   0.1345178,
   0.1204194,
   0.1419467,
   0.163337,
   0.1411635,
   0.3211039,
   0.3296235,
   0.3999682,
   0.7654631,
   0.7906741,
   0.7671394};
   Double_t _fehx3048[12] = {
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
   Double_t _fehy3048[12] = {
   0.2252514,
   0.1305852,
   0.1168989,
   0.1376509,
   0.1577663,
   0.1344729,
   0.3030048,
   0.3110441,
   0.3704936,
   0.6909895,
   0.7137477,
   0.6810856};
   grae = new TGraphAsymmErrors(12,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,1320);
   Graph_Graph3048->SetMinimum(0.2497128);
   Graph_Graph3048->SetMaximum(2.687563);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineWidth(2);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetNdivisions(509);
   Graph_Graph3048->GetXaxis()->SetLabelFont(132);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3048->GetXaxis()->SetTitleFont(132);
   Graph_Graph3048->GetYaxis()->SetNdivisions(509);
   Graph_Graph3048->GetYaxis()->SetLabelFont(132);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3048->GetYaxis()->SetTitleFont(132);
   Graph_Graph3048->GetZaxis()->SetLabelFont(132);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3048->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p ");
   
   TH1F *hist__36 = new TH1F("hist__36","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__36->SetLineColor(ci);
   hist__36->GetXaxis()->SetLabelFont(42);
   hist__36->GetXaxis()->SetTitleOffset(1);
   hist__36->GetXaxis()->SetTitleFont(42);
   hist__36->GetYaxis()->SetNdivisions(405);
   hist__36->GetYaxis()->SetLabelFont(42);
   hist__36->GetYaxis()->SetTitleFont(42);
   hist__36->GetZaxis()->SetLabelFont(42);
   hist__36->GetZaxis()->SetTitleOffset(1);
   hist__36->GetZaxis()->SetTitleFont(42);
   hist__36->Draw("axis same");
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
   canvas12->cd();
   canvas12->Modified();
   canvas12->cd();
   canvas12->SetSelected(canvas12);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Jun  5 00:41:47 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-5.462219,1128.205,604.0064);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__7->SetBinContent(0,37.68002);
   hmc__7->SetBinContent(1,273.1109);
   hmc__7->SetBinContent(2,220.5934);
   hmc__7->SetBinContent(3,201.8415);
   hmc__7->SetBinContent(4,179.4382);
   hmc__7->SetBinContent(5,163.7847);
   hmc__7->SetBinContent(6,126.8681);
   hmc__7->SetBinContent(7,101.7706);
   hmc__7->SetBinContent(8,75.81017);
   hmc__7->SetBinContent(9,58.72388);
   hmc__7->SetBinContent(10,44.59037);
   hmc__7->SetBinContent(11,38.37849);
   hmc__7->SetBinContent(12,24.44619);
   hmc__7->SetBinContent(13,17.21864);
   hmc__7->SetBinContent(14,12.51368);
   hmc__7->SetBinContent(15,12.81906);
   hmc__7->SetBinContent(16,53.52174);
   hmc__7->SetBinError(0,3.752683);
   hmc__7->SetBinError(1,46.88358);
   hmc__7->SetBinError(2,39.29971);
   hmc__7->SetBinError(3,39.36166);
   hmc__7->SetBinError(4,34.5965);
   hmc__7->SetBinError(5,32.57865);
   hmc__7->SetBinError(6,25.63989);
   hmc__7->SetBinError(7,30.6697);
   hmc__7->SetBinError(8,17.37749);
   hmc__7->SetBinError(9,15.29374);
   hmc__7->SetBinError(10,13.41949);
   hmc__7->SetBinError(11,14.22171);
   hmc__7->SetBinError(12,9.103383);
   hmc__7->SetBinError(13,8.085788);
   hmc__7->SetBinError(14,8.802389);
   hmc__7->SetBinError(15,8.374978);
   hmc__7->SetBinError(16,22.43412);
   hmc__7->SetMinimum(-5.462219);
   hmc__7->SetMaximum(573.533);
   hmc__7->SetEntries(1611.219);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",15,0,1000);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(286.7664);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,1.214546);
   hbadmatch_stack_1->SetBinContent(1,5.988198);
   hbadmatch_stack_1->SetBinContent(2,5.354597);
   hbadmatch_stack_1->SetBinContent(3,6.189864);
   hbadmatch_stack_1->SetBinContent(4,7.965579);
   hbadmatch_stack_1->SetBinContent(5,6.363826);
   hbadmatch_stack_1->SetBinContent(6,5.728199);
   hbadmatch_stack_1->SetBinContent(7,3.881377);
   hbadmatch_stack_1->SetBinContent(8,3.233222);
   hbadmatch_stack_1->SetBinContent(9,2.026404);
   hbadmatch_stack_1->SetBinContent(10,1.621328);
   hbadmatch_stack_1->SetBinContent(11,2.197444);
   hbadmatch_stack_1->SetBinContent(12,1.121968);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.3917402);
   hbadmatch_stack_1->SetBinContent(15,0.7607957);
   hbadmatch_stack_1->SetBinContent(16,2.026182);
   hbadmatch_stack_1->SetBinError(0,0.6522134);
   hbadmatch_stack_1->SetBinError(1,1.311086);
   hbadmatch_stack_1->SetBinError(2,1.234282);
   hbadmatch_stack_1->SetBinError(3,1.392683);
   hbadmatch_stack_1->SetBinError(4,1.729618);
   hbadmatch_stack_1->SetBinError(5,1.395695);
   hbadmatch_stack_1->SetBinError(6,1.205873);
   hbadmatch_stack_1->SetBinError(7,0.9670089);
   hbadmatch_stack_1->SetBinError(8,0.9654683);
   hbadmatch_stack_1->SetBinError(9,0.7416176);
   hbadmatch_stack_1->SetBinError(10,0.6532183);
   hbadmatch_stack_1->SetBinError(11,0.760276);
   hbadmatch_stack_1->SetBinError(12,0.5181909);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.2770047);
   hbadmatch_stack_1->SetBinError(15,0.4522722);
   hbadmatch_stack_1->SetBinError(16,0.7416095);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,20.67413);
   hext_stack_2->SetBinContent(1,56.47015);
   hext_stack_2->SetBinContent(2,42.99342);
   hext_stack_2->SetBinContent(3,30.41927);
   hext_stack_2->SetBinContent(4,23.87067);
   hext_stack_2->SetBinContent(5,18.59206);
   hext_stack_2->SetBinContent(6,20.16662);
   hext_stack_2->SetBinContent(7,13.50986);
   hext_stack_2->SetBinContent(8,13.57329);
   hext_stack_2->SetBinContent(9,9.95144);
   hext_stack_2->SetBinContent(10,6.165187);
   hext_stack_2->SetBinContent(11,5.662025);
   hext_stack_2->SetBinContent(12,4.352847);
   hext_stack_2->SetBinContent(13,0.973192);
   hext_stack_2->SetBinContent(14,1.37261);
   hext_stack_2->SetBinContent(15,3.241202);
   hext_stack_2->SetBinContent(16,15.59747);
   hext_stack_2->SetBinError(0,3.155494);
   hext_stack_2->SetBinError(1,5.223658);
   hext_stack_2->SetBinError(2,4.506472);
   hext_stack_2->SetBinError(3,3.67689);
   hext_stack_2->SetBinError(4,3.278895);
   hext_stack_2->SetBinError(5,2.898406);
   hext_stack_2->SetBinError(6,2.944248);
   hext_stack_2->SetBinError(7,2.511697);
   hext_stack_2->SetBinError(8,2.576042);
   hext_stack_2->SetBinError(9,2.147913);
   hext_stack_2->SetBinError(10,1.571905);
   hext_stack_2->SetBinError(11,1.62723);
   hext_stack_2->SetBinError(12,1.514272);
   hext_stack_2->SetBinError(13,0.5618727);
   hext_stack_2->SetBinError(14,0.8259691);
   hext_stack_2->SetBinError(15,1.178414);
   hext_stack_2->SetBinError(16,2.681858);
   hext_stack_2->SetEntries(672);

   ci = 1463;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,0.3988295);
   hdirt_stack_3->SetBinContent(1,5.758447);
   hdirt_stack_3->SetBinContent(2,5.73793);
   hdirt_stack_3->SetBinContent(3,4.188057);
   hdirt_stack_3->SetBinContent(4,1.593545);
   hdirt_stack_3->SetBinContent(5,1.500994);
   hdirt_stack_3->SetBinContent(6,1.050383);
   hdirt_stack_3->SetBinContent(7,1.296161);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.5429839);
   hdirt_stack_3->SetBinContent(14,0.3895662);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinError(0,0.3988295);
   hdirt_stack_3->SetBinError(1,1.267301);
   hdirt_stack_3->SetBinError(2,1.242992);
   hdirt_stack_3->SetBinError(3,1.343657);
   hdirt_stack_3->SetBinError(4,0.6528308);
   hdirt_stack_3->SetBinError(5,0.5493156);
   hdirt_stack_3->SetBinError(6,0.5265659);
   hdirt_stack_3->SetBinError(7,0.6039821);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.4278058);
   hdirt_stack_3->SetBinError(14,0.3895662);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetEntries(101);

   ci = 1464;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,3.149814);
   houtFV_stack_4->SetBinContent(1,62.69215);
   houtFV_stack_4->SetBinContent(2,49.66996);
   houtFV_stack_4->SetBinContent(3,45.4445);
   houtFV_stack_4->SetBinContent(4,37.64179);
   houtFV_stack_4->SetBinContent(5,28.75588);
   houtFV_stack_4->SetBinContent(6,25.06533);
   houtFV_stack_4->SetBinContent(7,18.71872);
   houtFV_stack_4->SetBinContent(8,17.79181);
   houtFV_stack_4->SetBinContent(9,9.230098);
   houtFV_stack_4->SetBinContent(10,6.503681);
   houtFV_stack_4->SetBinContent(11,5.910286);
   houtFV_stack_4->SetBinContent(12,4.797683);
   houtFV_stack_4->SetBinContent(13,2.21268);
   houtFV_stack_4->SetBinContent(14,1.65886);
   houtFV_stack_4->SetBinContent(15,1.805704);
   houtFV_stack_4->SetBinContent(16,3.95943);
   houtFV_stack_4->SetBinError(0,0.904902);
   houtFV_stack_4->SetBinError(1,4.018311);
   houtFV_stack_4->SetBinError(2,3.495785);
   houtFV_stack_4->SetBinError(3,3.611478);
   houtFV_stack_4->SetBinError(4,3.179465);
   houtFV_stack_4->SetBinError(5,2.674501);
   houtFV_stack_4->SetBinError(6,2.482083);
   houtFV_stack_4->SetBinError(7,2.183638);
   houtFV_stack_4->SetBinError(8,2.213428);
   houtFV_stack_4->SetBinError(9,1.552263);
   houtFV_stack_4->SetBinError(10,1.296117);
   houtFV_stack_4->SetBinError(11,1.225543);
   houtFV_stack_4->SetBinError(12,1.148779);
   houtFV_stack_4->SetBinError(13,0.8166503);
   houtFV_stack_4->SetBinError(14,0.650338);
   houtFV_stack_4->SetBinError(15,0.7080169);
   houtFV_stack_4->SetBinError(16,0.9607189);
   houtFV_stack_4->SetEntries(1382);

   ci = 1465;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.001683);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.370348);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.729144);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9186626);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5200361);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4541833);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,3.401983);
   hNCpi0inFVres_stack_7->SetBinContent(1,62.08653);
   hNCpi0inFVres_stack_7->SetBinContent(2,45.65455);
   hNCpi0inFVres_stack_7->SetBinContent(3,45.98787);
   hNCpi0inFVres_stack_7->SetBinContent(4,36.86933);
   hNCpi0inFVres_stack_7->SetBinContent(5,29.37399);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.85475);
   hNCpi0inFVres_stack_7->SetBinContent(7,12.19848);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.890411);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.552372);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.451654);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.300594);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.938062);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.078562);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.31114);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.502368);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.702076);
   hNCpi0inFVres_stack_7->SetBinError(0,0.5592239);
   hNCpi0inFVres_stack_7->SetBinError(1,2.532796);
   hNCpi0inFVres_stack_7->SetBinError(2,2.195036);
   hNCpi0inFVres_stack_7->SetBinError(3,2.26071);
   hNCpi0inFVres_stack_7->SetBinError(4,1.944963);
   hNCpi0inFVres_stack_7->SetBinError(5,1.723861);
   hNCpi0inFVres_stack_7->SetBinError(6,1.472801);
   hNCpi0inFVres_stack_7->SetBinError(7,1.088854);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8728211);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8152967);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8241604);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4429755);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4678321);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5241985);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3851684);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2162644);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4740994);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.8501219);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.15755);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.18563);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.785884);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.471663);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.004011);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.424914);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.058886);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.468826);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.55203);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.009144);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.603926);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6410357);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4321178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8934723);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.658894);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2770189);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.148663);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.13965);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.010847);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8209266);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9321913);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.786586);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7290634);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4692163);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5184118);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5158407);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4427564);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1771895);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1371558);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3948984);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4222841);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1469;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1470;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1471;
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
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,3.372665);
   hCCpi0inFV_stack_11->SetBinContent(1,27.27297);
   hCCpi0inFV_stack_11->SetBinContent(2,28.93307);
   hCCpi0inFV_stack_11->SetBinContent(3,31.10727);
   hCCpi0inFV_stack_11->SetBinContent(4,39.55889);
   hCCpi0inFV_stack_11->SetBinContent(5,43.91531);
   hCCpi0inFV_stack_11->SetBinContent(6,30.68559);
   hCCpi0inFV_stack_11->SetBinContent(7,30.36608);
   hCCpi0inFV_stack_11->SetBinContent(8,19.99529);
   hCCpi0inFV_stack_11->SetBinContent(9,20.83679);
   hCCpi0inFV_stack_11->SetBinContent(10,16.74006);
   hCCpi0inFV_stack_11->SetBinContent(11,15.82593);
   hCCpi0inFV_stack_11->SetBinContent(12,7.786598);
   hCCpi0inFV_stack_11->SetBinContent(13,8.954365);
   hCCpi0inFV_stack_11->SetBinContent(14,4.931781);
   hCCpi0inFV_stack_11->SetBinContent(15,4.345016);
   hCCpi0inFV_stack_11->SetBinContent(16,20.64536);
   hCCpi0inFV_stack_11->SetBinError(0,0.8990075);
   hCCpi0inFV_stack_11->SetBinError(1,2.628869);
   hCCpi0inFV_stack_11->SetBinError(2,2.715176);
   hCCpi0inFV_stack_11->SetBinError(3,2.781168);
   hCCpi0inFV_stack_11->SetBinError(4,3.186509);
   hCCpi0inFV_stack_11->SetBinError(5,3.355202);
   hCCpi0inFV_stack_11->SetBinError(6,2.781631);
   hCCpi0inFV_stack_11->SetBinError(7,2.767735);
   hCCpi0inFV_stack_11->SetBinError(8,2.198681);
   hCCpi0inFV_stack_11->SetBinError(9,2.318686);
   hCCpi0inFV_stack_11->SetBinError(10,2.115884);
   hCCpi0inFV_stack_11->SetBinError(11,2.007624);
   hCCpi0inFV_stack_11->SetBinError(12,1.399298);
   hCCpi0inFV_stack_11->SetBinError(13,1.503519);
   hCCpi0inFV_stack_11->SetBinError(14,1.144752);
   hCCpi0inFV_stack_11->SetBinError(15,1.093476);
   hCCpi0inFV_stack_11->SetBinError(16,2.30918);
   hCCpi0inFV_stack_11->SetEntries(1506);

   ci = 1472;
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
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,0.5884556);
   hNCinFV_stack_12->SetBinContent(1,5.663699);
   hNCinFV_stack_12->SetBinContent(2,4.696419);
   hNCinFV_stack_12->SetBinContent(3,4.394888);
   hNCinFV_stack_12->SetBinContent(4,3.56938);
   hNCinFV_stack_12->SetBinContent(5,3.032487);
   hNCinFV_stack_12->SetBinContent(6,1.413964);
   hNCinFV_stack_12->SetBinContent(7,2.250697);
   hNCinFV_stack_12->SetBinContent(8,1.176911);
   hNCinFV_stack_12->SetBinContent(9,0.9269427);
   hNCinFV_stack_12->SetBinContent(10,0.3917402);
   hNCinFV_stack_12->SetBinContent(11,0.9286332);
   hNCinFV_stack_12->SetBinContent(13,0.3871285);
   hNCinFV_stack_12->SetBinContent(14,1.020533);
   hNCinFV_stack_12->SetBinContent(16,1.073786);
   hNCinFV_stack_12->SetBinError(0,0.3397478);
   hNCinFV_stack_12->SetBinError(1,1.225932);
   hNCinFV_stack_12->SetBinError(2,1.057081);
   hNCinFV_stack_12->SetBinError(3,1.075193);
   hNCinFV_stack_12->SetBinError(4,0.9202779);
   hNCinFV_stack_12->SetBinError(5,0.832162);
   hNCinFV_stack_12->SetBinError(6,0.6515799);
   hNCinFV_stack_12->SetBinError(7,0.7346377);
   hNCinFV_stack_12->SetBinError(8,0.4804759);
   hNCinFV_stack_12->SetBinError(9,0.4800908);
   hNCinFV_stack_12->SetBinError(10,0.2770047);
   hNCinFV_stack_12->SetBinError(11,0.48078);
   hNCinFV_stack_12->SetBinError(13,0.3434024);
   hNCinFV_stack_12->SetBinError(14,0.5892049);
   hNCinFV_stack_12->SetBinError(16,0.5557297);
   hNCinFV_stack_12->SetEntries(135);

   ci = 1473;
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
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,3.37399);
   hnumuCCinFV_stack_13->SetBinContent(1,24.24319);
   hnumuCCinFV_stack_13->SetBinContent(2,21.11606);
   hnumuCCinFV_stack_13->SetBinContent(3,22.80927);
   hnumuCCinFV_stack_13->SetBinContent(4,19.11258);
   hnumuCCinFV_stack_13->SetBinContent(5,21.69028);
   hnumuCCinFV_stack_13->SetBinContent(6,16.72029);
   hnumuCCinFV_stack_13->SetBinContent(7,13.49142);
   hnumuCCinFV_stack_13->SetBinContent(8,8.073855);
   hnumuCCinFV_stack_13->SetBinContent(9,6.257214);
   hnumuCCinFV_stack_13->SetBinContent(10,4.745749);
   hnumuCCinFV_stack_13->SetBinContent(11,3.768825);
   hnumuCCinFV_stack_13->SetBinContent(12,3.50199);
   hnumuCCinFV_stack_13->SetBinContent(13,1.563793);
   hnumuCCinFV_stack_13->SetBinContent(14,1.073338);
   hnumuCCinFV_stack_13->SetBinContent(15,1.270501);
   hnumuCCinFV_stack_13->SetBinContent(16,5.368017);
   hnumuCCinFV_stack_13->SetBinError(0,1.162447);
   hnumuCCinFV_stack_13->SetBinError(1,3.130778);
   hnumuCCinFV_stack_13->SetBinError(2,2.523171);
   hnumuCCinFV_stack_13->SetBinError(3,3.585811);
   hnumuCCinFV_stack_13->SetBinError(4,2.342086);
   hnumuCCinFV_stack_13->SetBinError(5,2.780578);
   hnumuCCinFV_stack_13->SetBinError(6,2.261041);
   hnumuCCinFV_stack_13->SetBinError(7,2.14054);
   hnumuCCinFV_stack_13->SetBinError(8,1.420534);
   hnumuCCinFV_stack_13->SetBinError(9,1.559062);
   hnumuCCinFV_stack_13->SetBinError(10,1.097486);
   hnumuCCinFV_stack_13->SetBinError(11,1.085161);
   hnumuCCinFV_stack_13->SetBinError(12,1.063828);
   hnumuCCinFV_stack_13->SetBinError(13,0.6551509);
   hnumuCCinFV_stack_13->SetBinError(14,0.4825824);
   hnumuCCinFV_stack_13->SetBinError(15,0.5895188);
   hnumuCCinFV_stack_13->SetBinError(16,1.620841);
   hnumuCCinFV_stack_13->SetEntries(681);

   ci = 1474;
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
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(1,1.302738);
   hnueCCinFV_stack_14->SetBinContent(2,2.769839);
   hnueCCinFV_stack_14->SetBinContent(3,0.5901461);
   hnueCCinFV_stack_14->SetBinContent(4,1.766401);
   hnueCCinFV_stack_14->SetBinContent(5,1.537338);
   hnueCCinFV_stack_14->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(7,0.8179187);
   hnueCCinFV_stack_14->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(11,0.1529246);
   hnueCCinFV_stack_14->SetBinContent(12,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,1.352455);
   hnueCCinFV_stack_14->SetBinError(1,0.636632);
   hnueCCinFV_stack_14->SetBinError(2,1.059005);
   hnueCCinFV_stack_14->SetBinError(3,0.340721);
   hnueCCinFV_stack_14->SetBinError(4,1.581964);
   hnueCCinFV_stack_14->SetBinError(5,0.652161);
   hnueCCinFV_stack_14->SetBinError(6,0.3401776);
   hnueCCinFV_stack_14->SetBinError(7,0.499128);
   hnueCCinFV_stack_14->SetBinError(8,0.1967154);
   hnueCCinFV_stack_14->SetBinError(9,0.1967154);
   hnueCCinFV_stack_14->SetBinError(11,0.1529246);
   hnueCCinFV_stack_14->SetBinError(12,0.2502081);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,1.173746);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1475;
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
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__8->SetBinContent(0,37.68002);
   hmcerror__8->SetBinContent(1,273.1109);
   hmcerror__8->SetBinContent(2,220.5934);
   hmcerror__8->SetBinContent(3,201.8415);
   hmcerror__8->SetBinContent(4,179.4382);
   hmcerror__8->SetBinContent(5,163.7847);
   hmcerror__8->SetBinContent(6,126.8681);
   hmcerror__8->SetBinContent(7,101.7706);
   hmcerror__8->SetBinContent(8,75.81017);
   hmcerror__8->SetBinContent(9,58.72388);
   hmcerror__8->SetBinContent(10,44.59037);
   hmcerror__8->SetBinContent(11,38.37849);
   hmcerror__8->SetBinContent(12,24.44619);
   hmcerror__8->SetBinContent(13,17.21864);
   hmcerror__8->SetBinContent(14,12.51368);
   hmcerror__8->SetBinContent(15,12.81906);
   hmcerror__8->SetBinContent(16,53.52174);
   hmcerror__8->SetBinError(0,3.752683);
   hmcerror__8->SetBinError(1,46.88358);
   hmcerror__8->SetBinError(2,39.29971);
   hmcerror__8->SetBinError(3,39.36166);
   hmcerror__8->SetBinError(4,34.5965);
   hmcerror__8->SetBinError(5,32.57865);
   hmcerror__8->SetBinError(6,25.63989);
   hmcerror__8->SetBinError(7,30.6697);
   hmcerror__8->SetBinError(8,17.37749);
   hmcerror__8->SetBinError(9,15.29374);
   hmcerror__8->SetBinError(10,13.41949);
   hmcerror__8->SetBinError(11,14.22171);
   hmcerror__8->SetBinError(12,9.103383);
   hmcerror__8->SetBinError(13,8.085788);
   hmcerror__8->SetBinError(14,8.802389);
   hmcerror__8->SetBinError(15,8.374978);
   hmcerror__8->SetBinError(16,22.43412);
   hmcerror__8->SetEntries(1611.219);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3009[15] = {
   232,
   174,
   189,
   161,
   145,
   103,
   97,
   64,
   41,
   34,
   32,
   18,
   14,
   12,
   10};
   Double_t _felx3009[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3009[15] = {
   15.23155,
   13.19091,
   13.74773,
   12.68858,
   12.04159,
   10.14889,
   9.9704,
   8.1273,
   6.5384,
   5.9703,
   5.7977,
   4.4008,
   3.9102,
   3.64022,
   3.34883};
   Double_t _fehx3009[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3009[15] = {
   15.23155,
   13.19091,
   13.74773,
   12.68858,
   12.04159,
   10.14889,
   9.769,
   7.9246,
   6.3331,
   5.7635,
   5.5904,
   4.1858,
   3.6898,
   3.4155,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1100);
   Graph_Graph3009->SetMinimum(5.986053);
   Graph_Graph3009->SetMaximum(271.2896);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1326.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.2","F");

   ci = 1462;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 251.3","F");

   ci = 1463;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.2","F");

   ci = 1464;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 317.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.1","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  280.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  68.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1470;
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

   ci = 1471;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 331.3","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 29.9","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 169.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 10.1","F");

   ci = 1475;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3010[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3010[15] = {
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
   Double_t _felx3010[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3010[15] = {
   0.171665,
   0.1781545,
   0.1950128,
   0.1928046,
   0.1989114,
   0.2020988,
   0.3013611,
   0.2292238,
   0.2604348,
   0.3009505,
   0.3705646,
   0.3723845,
   0.4695951,
   0.7034212,
   0.6533224};
   Double_t _fehx3010[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3010[15] = {
   0.171665,
   0.1781545,
   0.1950128,
   0.1928046,
   0.1989114,
   0.2020988,
   0.3013611,
   0.2292238,
   0.2604348,
   0.3009505,
   0.3705646,
   0.3723845,
   0.4695951,
   0.7034212,
   0.6533224};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1100);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3011[15] = {
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
   Double_t _felx3011[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3011[15] = {
   0.1548942,
   0.1656275,
   0.1835974,
   0.1839531,
   0.1849221,
   0.1802602,
   0.1827116,
   0.179836,
   0.1924953,
   0.2090366,
   0.2075598,
   0.2194981,
   0.2726037,
   0.2811947,
   0.2705507};
   Double_t _fehx3011[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3011[15] = {
   0.1548942,
   0.1656275,
   0.1835974,
   0.1839531,
   0.1849221,
   0.1802602,
   0.1827116,
   0.179836,
   0.1924953,
   0.2090366,
   0.2075598,
   0.2194981,
   0.2726037,
   0.2811947,
   0.2705507};
   grae = new TGraphAsymmErrors(15,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1100);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3012[15] = {
   0.8494717,
   0.7887814,
   0.9363785,
   0.897245,
   0.8853085,
   0.811867,
   0.9531238,
   0.844214,
   0.6981828,
   0.7624965,
   0.8338005,
   0.736311,
   0.8130725,
   0.9589503,
   0.7800885};
   Double_t _felx3012[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3012[15] = {
   0.05577055,
   0.05979736,
   0.06811151,
   0.07071281,
   0.07352087,
   0.07999564,
   0.09796934,
   0.1072059,
   0.1113414,
   0.1338921,
   0.1510664,
   0.1800199,
   0.2270911,
   0.2908992,
   0.2612384};
   Double_t _fehx3012[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3012[15] = {
   0.05577055,
   0.05979736,
   0.06811151,
   0.07071281,
   0.07352087,
   0.07999564,
   0.09599038,
   0.1045322,
   0.1078454,
   0.1292544,
   0.1456649,
   0.171225,
   0.2142911,
   0.2729412,
   0.2432238};
   grae = new TGraphAsymmErrors(15,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1100);
   Graph_Graph3012->SetMinimum(0.447546);
   Graph_Graph3012->SetMaximum(1.303196);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

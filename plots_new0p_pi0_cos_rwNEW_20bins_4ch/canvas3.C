#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 21:59:47 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-1.307692,-5.878051,1.25641,649.9887);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,32.43162);
   hmc__7->SetBinContent(2,23.00466);
   hmc__7->SetBinContent(3,19.98365);
   hmc__7->SetBinContent(4,22.28497);
   hmc__7->SetBinContent(5,20.16433);
   hmc__7->SetBinContent(6,19.50484);
   hmc__7->SetBinContent(7,20.01796);
   hmc__7->SetBinContent(8,15.11314);
   hmc__7->SetBinContent(9,25.3572);
   hmc__7->SetBinContent(10,29.44128);
   hmc__7->SetBinContent(11,32.28997);
   hmc__7->SetBinContent(12,31.03212);
   hmc__7->SetBinContent(13,35.04506);
   hmc__7->SetBinContent(14,36.92513);
   hmc__7->SetBinContent(15,51.92512);
   hmc__7->SetBinContent(16,60.57845);
   hmc__7->SetBinContent(17,90.05759);
   hmc__7->SetBinContent(18,121.4461);
   hmc__7->SetBinContent(19,173.7522);
   hmc__7->SetBinContent(20,293.9026);
   hmc__7->SetBinError(1,18.7284);
   hmc__7->SetBinError(2,15.50433);
   hmc__7->SetBinError(3,14.4573);
   hmc__7->SetBinError(4,13.80392);
   hmc__7->SetBinError(5,15.66785);
   hmc__7->SetBinError(6,15.05726);
   hmc__7->SetBinError(7,13.60063);
   hmc__7->SetBinError(8,8.238645);
   hmc__7->SetBinError(9,11.94748);
   hmc__7->SetBinError(10,13.49022);
   hmc__7->SetBinError(11,13.79531);
   hmc__7->SetBinError(12,14.4666);
   hmc__7->SetBinError(13,16.06322);
   hmc__7->SetBinError(14,13.9203);
   hmc__7->SetBinError(15,23.56761);
   hmc__7->SetBinError(16,22.8379);
   hmc__7->SetBinError(17,35.94259);
   hmc__7->SetBinError(18,34.35488);
   hmc__7->SetBinError(19,44.20595);
   hmc__7->SetBinError(20,64.37949);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-5.878051);
   hmc__7->SetMaximum(617.1954);
   hmc__7->SetEntries(1133.738);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-8.530416e-09);
   hs3_stack_3->SetMaximum(308.5977);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.875574);
   hbadmatch_stack_1->SetBinContent(2,0.2441665);
   hbadmatch_stack_1->SetBinContent(3,1.608988);
   hbadmatch_stack_1->SetBinContent(4,1.007562);
   hbadmatch_stack_1->SetBinContent(5,0.7336084);
   hbadmatch_stack_1->SetBinContent(6,0.5368956);
   hbadmatch_stack_1->SetBinContent(8,0.4188842);
   hbadmatch_stack_1->SetBinContent(9,2.462452);
   hbadmatch_stack_1->SetBinContent(10,0.6673137);
   hbadmatch_stack_1->SetBinContent(11,2.081003);
   hbadmatch_stack_1->SetBinContent(12,2.597627);
   hbadmatch_stack_1->SetBinContent(13,1.268811);
   hbadmatch_stack_1->SetBinContent(14,1.108344);
   hbadmatch_stack_1->SetBinContent(15,1.720337);
   hbadmatch_stack_1->SetBinContent(16,2.021265);
   hbadmatch_stack_1->SetBinContent(17,3.129458);
   hbadmatch_stack_1->SetBinContent(18,3.985693);
   hbadmatch_stack_1->SetBinContent(19,3.999767);
   hbadmatch_stack_1->SetBinContent(20,7.714459);
   hbadmatch_stack_1->SetBinError(1,0.7287656);
   hbadmatch_stack_1->SetBinError(2,0.2441665);
   hbadmatch_stack_1->SetBinError(3,0.6801404);
   hbadmatch_stack_1->SetBinError(4,0.4511058);
   hbadmatch_stack_1->SetBinError(5,0.4394482);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.2967422);
   hbadmatch_stack_1->SetBinError(9,0.8650635);
   hbadmatch_stack_1->SetBinError(10,0.4825926);
   hbadmatch_stack_1->SetBinError(11,0.7996372);
   hbadmatch_stack_1->SetBinError(12,1.019947);
   hbadmatch_stack_1->SetBinError(13,0.5889569);
   hbadmatch_stack_1->SetBinError(14,0.568989);
   hbadmatch_stack_1->SetBinError(15,0.7321369);
   hbadmatch_stack_1->SetBinError(16,0.702276);
   hbadmatch_stack_1->SetBinError(17,0.9002741);
   hbadmatch_stack_1->SetBinError(18,1.009189);
   hbadmatch_stack_1->SetBinError(19,1.03826);
   hbadmatch_stack_1->SetBinError(20,1.726885);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,5.363578);
   hext_stack_2->SetBinContent(2,3.069618);
   hext_stack_2->SetBinContent(3,2.834603);
   hext_stack_2->SetBinContent(4,5.497622);
   hext_stack_2->SetBinContent(5,4.45659);
   hext_stack_2->SetBinContent(6,5.333219);
   hext_stack_2->SetBinContent(7,5.904221);
   hext_stack_2->SetBinContent(8,4.214394);
   hext_stack_2->SetBinContent(9,6.806801);
   hext_stack_2->SetBinContent(10,10.27861);
   hext_stack_2->SetBinContent(11,9.401979);
   hext_stack_2->SetBinContent(12,8.325045);
   hext_stack_2->SetBinContent(13,8.346586);
   hext_stack_2->SetBinContent(14,8.813845);
   hext_stack_2->SetBinContent(15,6.903363);
   hext_stack_2->SetBinContent(16,11.98721);
   hext_stack_2->SetBinContent(17,16.37318);
   hext_stack_2->SetBinContent(18,20.41322);
   hext_stack_2->SetBinContent(19,22.70277);
   hext_stack_2->SetBinContent(20,33.3808);
   hext_stack_2->SetBinError(1,1.440195);
   hext_stack_2->SetBinError(2,1.212305);
   hext_stack_2->SetBinError(3,1.106046);
   hext_stack_2->SetBinError(4,1.589874);
   hext_stack_2->SetBinError(5,1.322689);
   hext_stack_2->SetBinError(6,1.551619);
   hext_stack_2->SetBinError(7,1.641043);
   hext_stack_2->SetBinError(8,1.305512);
   hext_stack_2->SetBinError(9,1.697809);
   hext_stack_2->SetBinError(10,2.093427);
   hext_stack_2->SetBinError(11,1.929876);
   hext_stack_2->SetBinError(12,1.988024);
   hext_stack_2->SetBinError(13,1.829927);
   hext_stack_2->SetBinError(14,2.04393);
   hext_stack_2->SetBinError(15,1.593813);
   hext_stack_2->SetBinError(16,2.259163);
   hext_stack_2->SetBinError(17,2.593676);
   hext_stack_2->SetBinError(18,2.974704);
   hext_stack_2->SetBinError(19,3.052576);
   hext_stack_2->SetBinError(20,3.750624);
   hext_stack_2->SetEntries(503);

   ci = 1461;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(3,0.6084618);
   hdirt_stack_3->SetBinContent(4,2.09953);
   hdirt_stack_3->SetBinContent(5,0.165479);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.804172);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.5225666);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.5930034);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.6345888);
   hdirt_stack_3->SetBinContent(15,0.30685);
   hdirt_stack_3->SetBinContent(16,1.4492);
   hdirt_stack_3->SetBinContent(17,1.782619);
   hdirt_stack_3->SetBinContent(18,2.970133);
   hdirt_stack_3->SetBinContent(19,2.200987);
   hdirt_stack_3->SetBinContent(20,4.148087);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(3,0.4468525);
   hdirt_stack_3->SetBinError(4,1.084521);
   hdirt_stack_3->SetBinError(5,0.165479);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4725875);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.3695117);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.4234405);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(14,0.398124);
   hdirt_stack_3->SetBinError(15,0.2130001);
   hdirt_stack_3->SetBinError(16,0.5865551);
   hdirt_stack_3->SetBinError(17,0.7187535);
   hdirt_stack_3->SetBinError(18,0.8943818);
   hdirt_stack_3->SetBinError(19,0.7909911);
   hdirt_stack_3->SetBinError(20,1.132353);
   hdirt_stack_3->SetEntries(90);

   ci = 1462;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,9.527911);
   houtFV_stack_4->SetBinContent(2,8.792949);
   houtFV_stack_4->SetBinContent(3,6.068355);
   houtFV_stack_4->SetBinContent(4,6.328179);
   houtFV_stack_4->SetBinContent(5,6.015102);
   houtFV_stack_4->SetBinContent(6,7.030439);
   houtFV_stack_4->SetBinContent(7,6.19552);
   houtFV_stack_4->SetBinContent(8,3.804565);
   houtFV_stack_4->SetBinContent(9,5.642992);
   houtFV_stack_4->SetBinContent(10,5.523008);
   houtFV_stack_4->SetBinContent(11,7.031942);
   houtFV_stack_4->SetBinContent(12,7.72926);
   houtFV_stack_4->SetBinContent(13,5.610446);
   houtFV_stack_4->SetBinContent(14,8.010759);
   houtFV_stack_4->SetBinContent(15,13.20118);
   houtFV_stack_4->SetBinContent(16,11.07059);
   houtFV_stack_4->SetBinContent(17,19.23502);
   houtFV_stack_4->SetBinContent(18,25.69447);
   houtFV_stack_4->SetBinContent(19,36.46498);
   houtFV_stack_4->SetBinContent(20,47.09053);
   houtFV_stack_4->SetBinError(1,1.539048);
   houtFV_stack_4->SetBinError(2,1.475059);
   houtFV_stack_4->SetBinError(3,1.177417);
   houtFV_stack_4->SetBinError(4,1.212374);
   houtFV_stack_4->SetBinError(5,1.193582);
   houtFV_stack_4->SetBinError(6,1.774006);
   houtFV_stack_4->SetBinError(7,1.2866);
   houtFV_stack_4->SetBinError(8,0.9818739);
   houtFV_stack_4->SetBinError(9,1.224572);
   houtFV_stack_4->SetBinError(10,1.220329);
   houtFV_stack_4->SetBinError(11,1.277875);
   houtFV_stack_4->SetBinError(12,1.438618);
   houtFV_stack_4->SetBinError(13,1.241465);
   houtFV_stack_4->SetBinError(14,1.400705);
   houtFV_stack_4->SetBinError(15,1.854122);
   houtFV_stack_4->SetBinError(16,1.678895);
   houtFV_stack_4->SetBinError(17,2.240808);
   houtFV_stack_4->SetBinError(18,2.702093);
   houtFV_stack_4->SetBinError(19,3.054323);
   houtFV_stack_4->SetBinError(20,3.501611);
   houtFV_stack_4->SetEntries(1038);

   ci = 1463;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.300266);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,10.72128);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5246312);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.072437);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1464;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.473804);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.418668);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2438946);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2107962);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.400656);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.567144);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.43619);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.021762);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.773238);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.673176);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.161262);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.924444);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.98282);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.13677);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.377491);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.764683);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.5762);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.051332);
   hNCpi0inFVres_stack_7->SetBinContent(15,9.342052);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.05034);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.37877);
   hNCpi0inFVres_stack_7->SetBinContent(18,22.14173);
   hNCpi0inFVres_stack_7->SetBinContent(19,27.2021);
   hNCpi0inFVres_stack_7->SetBinContent(20,46.08267);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5828523);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5307164);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3547464);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4703213);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5616549);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4146887);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4744409);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4601427);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5608458);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5872323);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6576313);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5681995);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7472977);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7687347);
   hNCpi0inFVres_stack_7->SetBinError(15,0.982898);
   hNCpi0inFVres_stack_7->SetBinError(16,1.006924);
   hNCpi0inFVres_stack_7->SetBinError(17,1.281565);
   hNCpi0inFVres_stack_7->SetBinError(18,1.535655);
   hNCpi0inFVres_stack_7->SetBinError(19,1.658618);
   hNCpi0inFVres_stack_7->SetBinError(20,2.184817);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6403718);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.018522);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.045422);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7255678);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.910162);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.34228);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.97261);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.145082);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.156961);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.99424);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2118699);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3652876);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2866851);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.230212);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4669995);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4867239);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.65417);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7691991);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9204614);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.303099);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1467;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1468;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.77588);
   hCCpi0inFV_stack_10->SetBinContent(2,3.443745);
   hCCpi0inFV_stack_10->SetBinContent(3,4.118625);
   hCCpi0inFV_stack_10->SetBinContent(4,2.493903);
   hCCpi0inFV_stack_10->SetBinContent(5,2.392019);
   hCCpi0inFV_stack_10->SetBinContent(6,2.052291);
   hCCpi0inFV_stack_10->SetBinContent(7,3.050565);
   hCCpi0inFV_stack_10->SetBinContent(8,1.420146);
   hCCpi0inFV_stack_10->SetBinContent(9,3.74134);
   hCCpi0inFV_stack_10->SetBinContent(10,5.616466);
   hCCpi0inFV_stack_10->SetBinContent(11,4.354551);
   hCCpi0inFV_stack_10->SetBinContent(12,4.933472);
   hCCpi0inFV_stack_10->SetBinContent(13,7.174026);
   hCCpi0inFV_stack_10->SetBinContent(14,4.647923);
   hCCpi0inFV_stack_10->SetBinContent(15,9.848163);
   hCCpi0inFV_stack_10->SetBinContent(16,11.17292);
   hCCpi0inFV_stack_10->SetBinContent(17,15.58966);
   hCCpi0inFV_stack_10->SetBinContent(18,24.30494);
   hCCpi0inFV_stack_10->SetBinContent(19,39.14766);
   hCCpi0inFV_stack_10->SetBinContent(20,69.6058);
   hCCpi0inFV_stack_10->SetBinError(1,1.276324);
   hCCpi0inFV_stack_10->SetBinError(2,0.9156253);
   hCCpi0inFV_stack_10->SetBinError(3,1.042349);
   hCCpi0inFV_stack_10->SetBinError(4,0.733085);
   hCCpi0inFV_stack_10->SetBinError(5,0.823265);
   hCCpi0inFV_stack_10->SetBinError(6,0.7073425);
   hCCpi0inFV_stack_10->SetBinError(7,0.872394);
   hCCpi0inFV_stack_10->SetBinError(8,0.5385351);
   hCCpi0inFV_stack_10->SetBinError(9,0.9674);
   hCCpi0inFV_stack_10->SetBinError(10,1.185761);
   hCCpi0inFV_stack_10->SetBinError(11,1.000518);
   hCCpi0inFV_stack_10->SetBinError(12,1.145041);
   hCCpi0inFV_stack_10->SetBinError(13,1.358984);
   hCCpi0inFV_stack_10->SetBinError(14,1.010538);
   hCCpi0inFV_stack_10->SetBinError(15,1.679091);
   hCCpi0inFV_stack_10->SetBinError(16,1.627533);
   hCCpi0inFV_stack_10->SetBinError(17,1.937343);
   hCCpi0inFV_stack_10->SetBinError(18,2.500493);
   hCCpi0inFV_stack_10->SetBinError(19,3.19362);
   hCCpi0inFV_stack_10->SetBinError(20,4.226103);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(2,1.320373);
   hNCinFV_stack_11->SetBinContent(3,0.7336084);
   hNCinFV_stack_11->SetBinContent(4,0.7302274);
   hNCinFV_stack_11->SetBinContent(5,0.1950248);
   hNCinFV_stack_11->SetBinContent(7,0.9738935);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(9,0.3917402);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.7834804);
   hNCinFV_stack_11->SetBinContent(12,0.9286332);
   hNCinFV_stack_11->SetBinContent(13,1.663932);
   hNCinFV_stack_11->SetBinContent(14,1.125349);
   hNCinFV_stack_11->SetBinContent(15,2.684465);
   hNCinFV_stack_11->SetBinContent(16,1.322064);
   hNCinFV_stack_11->SetBinContent(17,3.267849);
   hNCinFV_stack_11->SetBinContent(18,4.591603);
   hNCinFV_stack_11->SetBinContent(19,9.616366);
   hNCinFV_stack_11->SetBinContent(20,18.75308);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(2,0.5548703);
   hNCinFV_stack_11->SetBinError(3,0.4394482);
   hNCinFV_stack_11->SetBinError(4,0.4379386);
   hNCinFV_stack_11->SetBinError(5,0.1950249);
   hNCinFV_stack_11->SetBinError(7,0.4823811);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(9,0.2770047);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.3917439);
   hNCinFV_stack_11->SetBinError(12,0.48078);
   hNCinFV_stack_11->SetBinError(13,0.6518637);
   hNCinFV_stack_11->SetBinError(14,0.5194673);
   hNCinFV_stack_11->SetBinError(15,0.8786858);
   hNCinFV_stack_11->SetBinError(16,0.5554667);
   hNCinFV_stack_11->SetBinError(17,0.9410263);
   hNCinFV_stack_11->SetBinError(18,1.09304);
   hNCinFV_stack_11->SetBinError(19,1.556676);
   hNCinFV_stack_11->SetBinError(20,2.203109);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.157732);
   hnumuCCinFV_stack_12->SetBinContent(2,1.662132);
   hnumuCCinFV_stack_12->SetBinContent(3,2.351617);
   hnumuCCinFV_stack_12->SetBinContent(4,1.46581);
   hnumuCCinFV_stack_12->SetBinContent(5,2.2517);
   hnumuCCinFV_stack_12->SetBinContent(6,2.573352);
   hnumuCCinFV_stack_12->SetBinContent(7,1.160713);
   hnumuCCinFV_stack_12->SetBinContent(8,1.501559);
   hnumuCCinFV_stack_12->SetBinContent(9,2.235774);
   hnumuCCinFV_stack_12->SetBinContent(10,2.5319);
   hnumuCCinFV_stack_12->SetBinContent(11,2.65602);
   hnumuCCinFV_stack_12->SetBinContent(12,1.839881);
   hnumuCCinFV_stack_12->SetBinContent(13,3.802559);
   hnumuCCinFV_stack_12->SetBinContent(14,5.667923);
   hnumuCCinFV_stack_12->SetBinContent(15,5.463434);
   hnumuCCinFV_stack_12->SetBinContent(16,9.134674);
   hnumuCCinFV_stack_12->SetBinContent(17,10.92278);
   hnumuCCinFV_stack_12->SetBinContent(18,11.33424);
   hnumuCCinFV_stack_12->SetBinContent(19,20.94962);
   hnumuCCinFV_stack_12->SetBinContent(20,35.04823);
   hnumuCCinFV_stack_12->SetBinError(1,0.8993941);
   hnumuCCinFV_stack_12->SetBinError(2,0.707748);
   hnumuCCinFV_stack_12->SetBinError(3,0.7121405);
   hnumuCCinFV_stack_12->SetBinError(4,0.6837274);
   hnumuCCinFV_stack_12->SetBinError(5,0.7758533);
   hnumuCCinFV_stack_12->SetBinError(6,0.9118552);
   hnumuCCinFV_stack_12->SetBinError(7,0.5215165);
   hnumuCCinFV_stack_12->SetBinError(8,0.6223483);
   hnumuCCinFV_stack_12->SetBinError(9,0.7530206);
   hnumuCCinFV_stack_12->SetBinError(10,0.8868977);
   hnumuCCinFV_stack_12->SetBinError(11,0.9159459);
   hnumuCCinFV_stack_12->SetBinError(12,0.6634445);
   hnumuCCinFV_stack_12->SetBinError(13,1.04916);
   hnumuCCinFV_stack_12->SetBinError(14,1.290514);
   hnumuCCinFV_stack_12->SetBinError(15,1.289969);
   hnumuCCinFV_stack_12->SetBinError(16,1.719823);
   hnumuCCinFV_stack_12->SetBinError(17,1.742268);
   hnumuCCinFV_stack_12->SetBinError(18,1.695299);
   hnumuCCinFV_stack_12->SetBinError(19,3.307431);
   hnumuCCinFV_stack_12->SetBinError(20,3.723124);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.34964);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,4.916772);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.2491644);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,1.665076);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,32.43162);
   hmcerror__8->SetBinContent(2,23.00466);
   hmcerror__8->SetBinContent(3,19.98365);
   hmcerror__8->SetBinContent(4,22.28497);
   hmcerror__8->SetBinContent(5,20.16433);
   hmcerror__8->SetBinContent(6,19.50484);
   hmcerror__8->SetBinContent(7,20.01796);
   hmcerror__8->SetBinContent(8,15.11314);
   hmcerror__8->SetBinContent(9,25.3572);
   hmcerror__8->SetBinContent(10,29.44128);
   hmcerror__8->SetBinContent(11,32.28997);
   hmcerror__8->SetBinContent(12,31.03212);
   hmcerror__8->SetBinContent(13,35.04506);
   hmcerror__8->SetBinContent(14,36.92513);
   hmcerror__8->SetBinContent(15,51.92512);
   hmcerror__8->SetBinContent(16,60.57845);
   hmcerror__8->SetBinContent(17,90.05759);
   hmcerror__8->SetBinContent(18,121.4461);
   hmcerror__8->SetBinContent(19,173.7522);
   hmcerror__8->SetBinContent(20,293.9026);
   hmcerror__8->SetBinError(1,18.7284);
   hmcerror__8->SetBinError(2,15.50433);
   hmcerror__8->SetBinError(3,14.4573);
   hmcerror__8->SetBinError(4,13.80392);
   hmcerror__8->SetBinError(5,15.66785);
   hmcerror__8->SetBinError(6,15.05726);
   hmcerror__8->SetBinError(7,13.60063);
   hmcerror__8->SetBinError(8,8.238645);
   hmcerror__8->SetBinError(9,11.94748);
   hmcerror__8->SetBinError(10,13.49022);
   hmcerror__8->SetBinError(11,13.79531);
   hmcerror__8->SetBinError(12,14.4666);
   hmcerror__8->SetBinError(13,16.06322);
   hmcerror__8->SetBinError(14,13.9203);
   hmcerror__8->SetBinError(15,23.56761);
   hmcerror__8->SetBinError(16,22.8379);
   hmcerror__8->SetBinError(17,35.94259);
   hmcerror__8->SetBinError(18,34.35488);
   hmcerror__8->SetBinError(19,44.20595);
   hmcerror__8->SetBinError(20,64.37949);
   hmcerror__8->SetBinError(21,0.3895343);
   hmcerror__8->SetEntries(1133.738);

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
   
   Double_t _fx3009[20] = {
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
   Double_t _fy3009[20] = {
   38,
   15,
   15,
   16,
   16,
   23,
   22,
   21,
   19,
   30,
   22,
   22,
   26,
   42,
   41,
   57,
   70,
   111,
   182,
   285};
   Double_t _felx3009[20] = {
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
   Double_t _fely3009[20] = {
   6.3013,
   4.0385,
   4.0385,
   4.1628,
   4.1628,
   4.9457,
   4.8417,
   4.7354,
   4.5151,
   5.6197,
   4.8417,
   4.8417,
   5.2453,
   6.6155,
   6.5384,
   7.679,
   8.4925,
   10.53565,
   13.49074,
   16.88194};
   Double_t _fehx3009[20] = {
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
   Double_t _fehy3009[20] = {
   6.0955,
   3.8197,
   3.8197,
   3.9454,
   3.9454,
   4.7346,
   4.6299,
   4.5229,
   4.3011,
   5.4117,
   4.6299,
   4.6299,
   5.0358,
   6.4104,
   6.3331,
   7.4757,
   8.2902,
   10.53565,
   13.49074,
   16.88194};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(9.86535);
   Graph_Graph3009->SetMaximum(330.974);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1464;
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

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[20] = {
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
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
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
   Double_t _fely3010[20] = {
   0.5774735,
   0.6739648,
   0.7234563,
   0.6194274,
   0.7770079,
   0.7719752,
   0.6794214,
   0.5451311,
   0.4711673,
   0.4582078,
   0.4272322,
   0.4661814,
   0.458359,
   0.3769871,
   0.4538769,
   0.3769971,
   0.3991068,
   0.2828817,
   0.2544195,
   0.2190505};
   Double_t _fehx3010[20] = {
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
   Double_t _fehy3010[20] = {
   0.5774735,
   0.6739648,
   0.7234563,
   0.6194274,
   0.7770079,
   0.7719752,
   0.6794214,
   0.5451311,
   0.4711673,
   0.4582078,
   0.4272322,
   0.4661814,
   0.458359,
   0.3769871,
   0.4538769,
   0.3769971,
   0.3991068,
   0.2828817,
   0.2544195,
   0.2190505};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[20] = {
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
   Double_t _fy3011[20] = {
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
   Double_t _felx3011[20] = {
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
   Double_t _fely3011[20] = {
   0.2031129,
   0.1908951,
   0.2043376,
   0.2201168,
   0.225733,
   0.206174,
   0.1965627,
   0.2152145,
   0.1842602,
   0.186168,
   0.1923327,
   0.1923963,
   0.1965997,
   0.2001406,
   0.2270569,
   0.1983303,
   0.1966539,
   0.1874511,
   0.1861433,
   0.1807292};
   Double_t _fehx3011[20] = {
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
   Double_t _fehy3011[20] = {
   0.2031129,
   0.1908951,
   0.2043376,
   0.2201168,
   0.225733,
   0.206174,
   0.1965627,
   0.2152145,
   0.1842602,
   0.186168,
   0.1923327,
   0.1923963,
   0.1965997,
   0.2001406,
   0.2270569,
   0.1983303,
   0.1966539,
   0.1874511,
   0.1861433,
   0.1807292};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3012[20] = {
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
   Double_t _fy3012[20] = {
   1.171696,
   0.6520419,
   0.7506137,
   0.7179728,
   0.7934803,
   1.179194,
   1.099013,
   1.389519,
   0.7492942,
   1.018977,
   0.6813261,
   0.7089429,
   0.7419019,
   1.137437,
   0.7895986,
   0.9409287,
   0.7772804,
   0.9139859,
   1.047469,
   0.9697092};
   Double_t _felx3012[20] = {
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
   Double_t _fely3012[20] = {
   0.194295,
   0.1755514,
   0.2020902,
   0.1867986,
   0.2064437,
   0.2535626,
   0.2418678,
   0.3133299,
   0.1780599,
   0.1908782,
   0.1499444,
   0.1560222,
   0.149673,
   0.1791598,
   0.1259198,
   0.1267613,
   0.09430076,
   0.0867517,
   0.07764356,
   0.05744061};
   Double_t _fehx3012[20] = {
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
   Double_t _fehy3012[20] = {
   0.1879493,
   0.1660403,
   0.1911413,
   0.1770431,
   0.1956623,
   0.2427397,
   0.2312873,
   0.2992693,
   0.1696205,
   0.1838133,
   0.1433851,
   0.149197,
   0.143695,
   0.1736053,
   0.121966,
   0.1234053,
   0.09205442,
   0.0867517,
   0.07764356,
   0.05744061};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.3552607);
   Graph_Graph3012->SetMaximum(1.810018);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 23:09:35 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-0.4846154,-4.36,3.553846,482.1242);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__16->SetBinContent(1,30.38345);
   hmc__16->SetBinContent(2,103.185);
   hmc__16->SetBinContent(3,151.1141);
   hmc__16->SetBinContent(4,175.4563);
   hmc__16->SetBinContent(5,193.0565);
   hmc__16->SetBinContent(6,198.2084);
   hmc__16->SetBinContent(7,187.6194);
   hmc__16->SetBinContent(8,180.4734);
   hmc__16->SetBinContent(9,173.2294);
   hmc__16->SetBinContent(10,157.9799);
   hmc__16->SetBinContent(11,141.7008);
   hmc__16->SetBinContent(12,131.6116);
   hmc__16->SetBinContent(13,126.2704);
   hmc__16->SetBinContent(14,112.0596);
   hmc__16->SetBinContent(15,96.71289);
   hmc__16->SetBinContent(16,96.19125);
   hmc__16->SetBinContent(17,92.12079);
   hmc__16->SetBinContent(18,77.99419);
   hmc__16->SetBinContent(19,84.0284);
   hmc__16->SetBinContent(20,72.95844);
   hmc__16->SetBinContent(21,75.90785);
   hmc__16->SetBinContent(22,59.90816);
   hmc__16->SetBinContent(23,43.56181);
   hmc__16->SetBinContent(24,26.28966);
   hmc__16->SetBinContent(25,7.874839);
   hmc__16->SetBinError(1,12.63135);
   hmc__16->SetBinError(2,27.01486);
   hmc__16->SetBinError(3,50.05733);
   hmc__16->SetBinError(4,47.3053);
   hmc__16->SetBinError(5,54.08116);
   hmc__16->SetBinError(6,54.12371);
   hmc__16->SetBinError(7,51.60619);
   hmc__16->SetBinError(8,44.98463);
   hmc__16->SetBinError(9,45.33695);
   hmc__16->SetBinError(10,43.05959);
   hmc__16->SetBinError(11,37.32418);
   hmc__16->SetBinError(12,35.71196);
   hmc__16->SetBinError(13,32.153);
   hmc__16->SetBinError(14,27.71666);
   hmc__16->SetBinError(15,30.3429);
   hmc__16->SetBinError(16,29.23773);
   hmc__16->SetBinError(17,27.3158);
   hmc__16->SetBinError(18,23.75074);
   hmc__16->SetBinError(19,26.28307);
   hmc__16->SetBinError(20,25.59978);
   hmc__16->SetBinError(21,25.92965);
   hmc__16->SetBinError(22,20.75805);
   hmc__16->SetBinError(23,14.55548);
   hmc__16->SetBinError(24,15.32057);
   hmc__16->SetBinError(25,7.626527);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-4.36);
   hmc__16->SetMaximum(457.8);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,3.15);
   hs6_stack_6->SetMinimum(-2.766408e-08);
   hs6_stack_6->SetMaximum(208.1188);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.2037106);
   hbadmatch_stack_1->SetBinContent(2,1.26316);
   hbadmatch_stack_1->SetBinContent(3,2.220617);
   hbadmatch_stack_1->SetBinContent(4,3.572872);
   hbadmatch_stack_1->SetBinContent(5,3.520903);
   hbadmatch_stack_1->SetBinContent(6,5.53795);
   hbadmatch_stack_1->SetBinContent(7,3.30062);
   hbadmatch_stack_1->SetBinContent(8,3.755938);
   hbadmatch_stack_1->SetBinContent(9,5.57254);
   hbadmatch_stack_1->SetBinContent(10,4.554359);
   hbadmatch_stack_1->SetBinContent(11,5.591234);
   hbadmatch_stack_1->SetBinContent(12,1.351976);
   hbadmatch_stack_1->SetBinContent(13,3.81457);
   hbadmatch_stack_1->SetBinContent(14,2.083403);
   hbadmatch_stack_1->SetBinContent(15,1.30893);
   hbadmatch_stack_1->SetBinContent(16,2.934947);
   hbadmatch_stack_1->SetBinContent(17,3.293883);
   hbadmatch_stack_1->SetBinContent(18,2.101315);
   hbadmatch_stack_1->SetBinContent(19,1.574035);
   hbadmatch_stack_1->SetBinContent(20,2.002258);
   hbadmatch_stack_1->SetBinContent(21,1.763104);
   hbadmatch_stack_1->SetBinContent(22,1.234288);
   hbadmatch_stack_1->SetBinContent(23,0.8002283);
   hbadmatch_stack_1->SetBinContent(24,1.243857);
   hbadmatch_stack_1->SetBinError(1,0.2037106);
   hbadmatch_stack_1->SetBinError(2,0.500509);
   hbadmatch_stack_1->SetBinError(3,0.764038);
   hbadmatch_stack_1->SetBinError(4,0.9740266);
   hbadmatch_stack_1->SetBinError(5,0.9184854);
   hbadmatch_stack_1->SetBinError(6,1.292028);
   hbadmatch_stack_1->SetBinError(7,0.9649269);
   hbadmatch_stack_1->SetBinError(8,1.011339);
   hbadmatch_stack_1->SetBinError(9,1.936822);
   hbadmatch_stack_1->SetBinError(10,1.145137);
   hbadmatch_stack_1->SetBinError(11,1.303275);
   hbadmatch_stack_1->SetBinError(12,0.5172502);
   hbadmatch_stack_1->SetBinError(13,1.023164);
   hbadmatch_stack_1->SetBinError(14,0.7875509);
   hbadmatch_stack_1->SetBinError(15,0.5509927);
   hbadmatch_stack_1->SetBinError(16,0.8947529);
   hbadmatch_stack_1->SetBinError(17,1.781126);
   hbadmatch_stack_1->SetBinError(18,0.7747179);
   hbadmatch_stack_1->SetBinError(19,0.7320569);
   hbadmatch_stack_1->SetBinError(20,0.7392828);
   hbadmatch_stack_1->SetBinError(21,0.6226983);
   hbadmatch_stack_1->SetBinError(22,0.6861579);
   hbadmatch_stack_1->SetBinError(23,0.5299338);
   hbadmatch_stack_1->SetBinError(24,0.9339452);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,2.110787);
   hext_stack_2->SetBinContent(2,8.250023);
   hext_stack_2->SetBinContent(3,11.25621);
   hext_stack_2->SetBinContent(4,11.56625);
   hext_stack_2->SetBinContent(5,14.41521);
   hext_stack_2->SetBinContent(6,18.59206);
   hext_stack_2->SetBinContent(7,12.32156);
   hext_stack_2->SetBinContent(8,15.66531);
   hext_stack_2->SetBinContent(9,17.31324);
   hext_stack_2->SetBinContent(10,14.31865);
   hext_stack_2->SetBinContent(11,16.4482);
   hext_stack_2->SetBinContent(12,18.44089);
   hext_stack_2->SetBinContent(13,25.01702);
   hext_stack_2->SetBinContent(14,19.80626);
   hext_stack_2->SetBinContent(15,12.52067);
   hext_stack_2->SetBinContent(16,10.06677);
   hext_stack_2->SetBinContent(17,12.64041);
   hext_stack_2->SetBinContent(18,5.84797);
   hext_stack_2->SetBinContent(19,7.467185);
   hext_stack_2->SetBinContent(20,6.418972);
   hext_stack_2->SetBinContent(21,7.896904);
   hext_stack_2->SetBinContent(22,5.972061);
   hext_stack_2->SetBinContent(23,2.681789);
   hext_stack_2->SetBinContent(25,1.290409);
   hext_stack_2->SetBinError(1,0.8669371);
   hext_stack_2->SetBinError(2,1.921184);
   hext_stack_2->SetBinError(3,2.198468);
   hext_stack_2->SetBinError(4,2.311038);
   hext_stack_2->SetBinError(5,2.482304);
   hext_stack_2->SetBinError(6,2.898406);
   hext_stack_2->SetBinError(7,2.161371);
   hext_stack_2->SetBinError(8,2.766741);
   hext_stack_2->SetBinError(9,2.777146);
   hext_stack_2->SetBinError(10,2.550323);
   hext_stack_2->SetBinError(11,2.643567);
   hext_stack_2->SetBinError(12,2.947193);
   hext_stack_2->SetBinError(13,3.575988);
   hext_stack_2->SetBinError(14,3.301482);
   hext_stack_2->SetBinError(15,2.433902);
   hext_stack_2->SetBinError(16,2.000983);
   hext_stack_2->SetBinError(17,2.334397);
   hext_stack_2->SetBinError(18,1.471207);
   hext_stack_2->SetBinError(19,1.739811);
   hext_stack_2->SetBinError(20,1.565232);
   hext_stack_2->SetBinError(21,2.095357);
   hext_stack_2->SetBinError(22,1.776376);
   hext_stack_2->SetBinError(23,1.018372);
   hext_stack_2->SetBinError(25,0.788756);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,1.572915);
   hdirt_stack_3->SetBinContent(3,1.727699);
   hdirt_stack_3->SetBinContent(4,2.019291);
   hdirt_stack_3->SetBinContent(5,1.699507);
   hdirt_stack_3->SetBinContent(6,1.424614);
   hdirt_stack_3->SetBinContent(7,2.861352);
   hdirt_stack_3->SetBinContent(8,1.160109);
   hdirt_stack_3->SetBinContent(9,3.077256);
   hdirt_stack_3->SetBinContent(10,2.522119);
   hdirt_stack_3->SetBinContent(11,2.482952);
   hdirt_stack_3->SetBinContent(12,1.313762);
   hdirt_stack_3->SetBinContent(13,1.906779);
   hdirt_stack_3->SetBinContent(14,0.7018014);
   hdirt_stack_3->SetBinContent(15,1.533529);
   hdirt_stack_3->SetBinContent(16,1.799093);
   hdirt_stack_3->SetBinContent(17,1.295024);
   hdirt_stack_3->SetBinContent(18,1.447556);
   hdirt_stack_3->SetBinContent(19,1.370621);
   hdirt_stack_3->SetBinContent(20,2.650883);
   hdirt_stack_3->SetBinContent(21,0.4950385);
   hdirt_stack_3->SetBinContent(22,0.7395225);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.6740478);
   hdirt_stack_3->SetBinError(3,0.7132677);
   hdirt_stack_3->SetBinError(4,0.7782287);
   hdirt_stack_3->SetBinError(5,0.6407106);
   hdirt_stack_3->SetBinError(6,0.6018728);
   hdirt_stack_3->SetBinError(7,0.9054134);
   hdirt_stack_3->SetBinError(8,0.6122148);
   hdirt_stack_3->SetBinError(9,0.900724);
   hdirt_stack_3->SetBinError(10,0.8169579);
   hdirt_stack_3->SetBinError(11,1.267797);
   hdirt_stack_3->SetBinError(12,0.5662638);
   hdirt_stack_3->SetBinError(13,0.6998363);
   hdirt_stack_3->SetBinError(14,0.4608864);
   hdirt_stack_3->SetBinError(15,0.6204248);
   hdirt_stack_3->SetBinError(16,0.6687785);
   hdirt_stack_3->SetBinError(17,0.6606512);
   hdirt_stack_3->SetBinError(18,0.5940634);
   hdirt_stack_3->SetBinError(19,0.5269762);
   hdirt_stack_3->SetBinError(20,1.014425);
   hdirt_stack_3->SetBinError(21,0.2933304);
   hdirt_stack_3->SetBinError(22,0.3764025);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.771057);
   houtFV_stack_4->SetBinContent(2,6.164582);
   houtFV_stack_4->SetBinContent(3,11.58099);
   houtFV_stack_4->SetBinContent(4,13.26876);
   houtFV_stack_4->SetBinContent(5,16.83186);
   houtFV_stack_4->SetBinContent(6,18.03166);
   houtFV_stack_4->SetBinContent(7,18.34662);
   houtFV_stack_4->SetBinContent(8,18.98718);
   houtFV_stack_4->SetBinContent(9,15.60692);
   houtFV_stack_4->SetBinContent(10,13.95585);
   houtFV_stack_4->SetBinContent(11,13.11995);
   houtFV_stack_4->SetBinContent(12,13.36426);
   houtFV_stack_4->SetBinContent(13,11.74587);
   houtFV_stack_4->SetBinContent(14,10.03248);
   houtFV_stack_4->SetBinContent(15,11.43795);
   houtFV_stack_4->SetBinContent(16,10.09428);
   houtFV_stack_4->SetBinContent(17,12.35638);
   houtFV_stack_4->SetBinContent(18,10.74368);
   houtFV_stack_4->SetBinContent(19,12.2013);
   houtFV_stack_4->SetBinContent(20,12.03913);
   houtFV_stack_4->SetBinContent(21,14.31137);
   houtFV_stack_4->SetBinContent(22,7.465804);
   houtFV_stack_4->SetBinContent(23,5.331457);
   houtFV_stack_4->SetBinContent(24,3.832492);
   houtFV_stack_4->SetBinContent(25,0.6803553);
   houtFV_stack_4->SetBinError(1,0.8444877);
   houtFV_stack_4->SetBinError(2,1.248939);
   houtFV_stack_4->SetBinError(3,1.629222);
   houtFV_stack_4->SetBinError(4,1.778565);
   houtFV_stack_4->SetBinError(5,2.095104);
   houtFV_stack_4->SetBinError(6,2.129982);
   houtFV_stack_4->SetBinError(7,2.147609);
   houtFV_stack_4->SetBinError(8,2.237869);
   houtFV_stack_4->SetBinError(9,2.017268);
   houtFV_stack_4->SetBinError(10,1.926894);
   houtFV_stack_4->SetBinError(11,1.869285);
   houtFV_stack_4->SetBinError(12,1.827351);
   houtFV_stack_4->SetBinError(13,1.716007);
   houtFV_stack_4->SetBinError(14,1.525819);
   houtFV_stack_4->SetBinError(15,1.692884);
   houtFV_stack_4->SetBinError(16,1.513619);
   houtFV_stack_4->SetBinError(17,1.80624);
   houtFV_stack_4->SetBinError(18,1.573132);
   houtFV_stack_4->SetBinError(19,1.766725);
   houtFV_stack_4->SetBinError(20,1.681833);
   houtFV_stack_4->SetBinError(21,1.96268);
   houtFV_stack_4->SetBinError(22,1.309796);
   houtFV_stack_4->SetBinError(23,1.104534);
   houtFV_stack_4->SetBinError(24,1.003923);
   houtFV_stack_4->SetBinError(25,0.4810838);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.617667);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.758654);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.889379);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.20258);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.906624);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.39978);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.200948);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.379689);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.423326);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.058607);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.077373);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.929672);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.534894);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.074749);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.546981);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.943055);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.110611);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.613208);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.471378);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.286794);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.189624);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.782983);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.546802);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.007673);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.428453);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6207927);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.124571);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.013289);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.127337);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.177264);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.098177);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9417159);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7986776);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9481803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6790838);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8245746);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6169438);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5886417);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5250658);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5052704);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4953616);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5065509);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5798401);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4641324);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4656608);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.410499);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5330303);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4084086);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3571295);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2947001);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.04354476);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05049197);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3264916);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.513211);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2508988);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.289056);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3317476);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7912665);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1523458);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4966712);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3008002);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4152738);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2205362);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5589551);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1967763);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.117276);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05350871);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3542736);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2518886);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03399719);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1348768);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1107695);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03228062);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02925917);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1601068);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1492961);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.09126397);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1220123);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1500462);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3844546);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06689776);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2318708);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1791355);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1693249);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08383054);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3052236);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08050544);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08611306);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04019807);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.181466);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1522468);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02411083);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.07208906);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05949881);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.669355);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.20754);
   hNCpi0inFVres_stack_7->SetBinContent(3,54.09216);
   hNCpi0inFVres_stack_7->SetBinContent(4,66.71936);
   hNCpi0inFVres_stack_7->SetBinContent(5,75.55615);
   hNCpi0inFVres_stack_7->SetBinContent(6,74.5623);
   hNCpi0inFVres_stack_7->SetBinContent(7,70.76258);
   hNCpi0inFVres_stack_7->SetBinContent(8,69.47597);
   hNCpi0inFVres_stack_7->SetBinContent(9,66.30119);
   hNCpi0inFVres_stack_7->SetBinContent(10,59.69098);
   hNCpi0inFVres_stack_7->SetBinContent(11,50.53378);
   hNCpi0inFVres_stack_7->SetBinContent(12,50.86258);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.92573);
   hNCpi0inFVres_stack_7->SetBinContent(14,43.24857);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.68008);
   hNCpi0inFVres_stack_7->SetBinContent(16,35.10732);
   hNCpi0inFVres_stack_7->SetBinContent(17,32.91287);
   hNCpi0inFVres_stack_7->SetBinContent(18,33.29105);
   hNCpi0inFVres_stack_7->SetBinContent(19,29.64104);
   hNCpi0inFVres_stack_7->SetBinContent(20,24.50021);
   hNCpi0inFVres_stack_7->SetBinContent(21,25.5803);
   hNCpi0inFVres_stack_7->SetBinContent(22,21.81533);
   hNCpi0inFVres_stack_7->SetBinContent(23,14.54434);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.290151);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.828995);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9834587);
   hNCpi0inFVres_stack_7->SetBinError(2,1.99422);
   hNCpi0inFVres_stack_7->SetBinError(3,2.581577);
   hNCpi0inFVres_stack_7->SetBinError(4,2.968751);
   hNCpi0inFVres_stack_7->SetBinError(5,3.039111);
   hNCpi0inFVres_stack_7->SetBinError(6,2.965277);
   hNCpi0inFVres_stack_7->SetBinError(7,2.800651);
   hNCpi0inFVres_stack_7->SetBinError(8,2.882428);
   hNCpi0inFVres_stack_7->SetBinError(9,2.850952);
   hNCpi0inFVres_stack_7->SetBinError(10,2.560325);
   hNCpi0inFVres_stack_7->SetBinError(11,2.325934);
   hNCpi0inFVres_stack_7->SetBinError(12,2.524756);
   hNCpi0inFVres_stack_7->SetBinError(13,2.289488);
   hNCpi0inFVres_stack_7->SetBinError(14,2.306703);
   hNCpi0inFVres_stack_7->SetBinError(15,2.28939);
   hNCpi0inFVres_stack_7->SetBinError(16,2.066274);
   hNCpi0inFVres_stack_7->SetBinError(17,1.945283);
   hNCpi0inFVres_stack_7->SetBinError(18,2.048441);
   hNCpi0inFVres_stack_7->SetBinError(19,1.846089);
   hNCpi0inFVres_stack_7->SetBinError(20,1.51241);
   hNCpi0inFVres_stack_7->SetBinError(21,1.723609);
   hNCpi0inFVres_stack_7->SetBinError(22,1.731373);
   hNCpi0inFVres_stack_7->SetBinError(23,1.306199);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9380595);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5467554);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.961191);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.856743);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.90367);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.10553);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.79326);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.65829);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.55595);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.55126);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.43595);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.779282);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.72636);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.642432);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.607944);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.187519);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.045088);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.309096);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.166536);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.488126);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.121774);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.894749);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.201776);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.235401);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.582717);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.349711);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.601805);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5686301);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.2277);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.214372);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.351184);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.467422);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.449867);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.325385);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.420631);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.312834);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.018507);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.150289);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9245365);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.089998);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8486569);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8676594);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7661245);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7072545);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7049238);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9288379);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5940882);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5726243);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7578548);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4700262);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3054662);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1960406);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08239723);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06630798);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.783247);
   hCCpi0inFV_stack_10->SetBinContent(2,16.80598);
   hCCpi0inFV_stack_10->SetBinContent(3,22.43174);
   hCCpi0inFV_stack_10->SetBinContent(4,25.00355);
   hCCpi0inFV_stack_10->SetBinContent(5,30.45264);
   hCCpi0inFV_stack_10->SetBinContent(6,25.75792);
   hCCpi0inFV_stack_10->SetBinContent(7,27.63816);
   hCCpi0inFV_stack_10->SetBinContent(8,25.29704);
   hCCpi0inFV_stack_10->SetBinContent(9,23.82616);
   hCCpi0inFV_stack_10->SetBinContent(10,23.89111);
   hCCpi0inFV_stack_10->SetBinContent(11,20.14604);
   hCCpi0inFV_stack_10->SetBinContent(12,17.78749);
   hCCpi0inFV_stack_10->SetBinContent(13,14.46808);
   hCCpi0inFV_stack_10->SetBinContent(14,13.85319);
   hCCpi0inFV_stack_10->SetBinContent(15,13.1706);
   hCCpi0inFV_stack_10->SetBinContent(16,11.90436);
   hCCpi0inFV_stack_10->SetBinContent(17,11.52276);
   hCCpi0inFV_stack_10->SetBinContent(18,8.593942);
   hCCpi0inFV_stack_10->SetBinContent(19,13.378);
   hCCpi0inFV_stack_10->SetBinContent(20,10.46324);
   hCCpi0inFV_stack_10->SetBinContent(21,9.654945);
   hCCpi0inFV_stack_10->SetBinContent(22,8.837957);
   hCCpi0inFV_stack_10->SetBinContent(23,8.210855);
   hCCpi0inFV_stack_10->SetBinContent(24,3.275865);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9818863);
   hCCpi0inFV_stack_10->SetBinError(1,1.109705);
   hCCpi0inFV_stack_10->SetBinError(2,2.102511);
   hCCpi0inFV_stack_10->SetBinError(3,2.329516);
   hCCpi0inFV_stack_10->SetBinError(4,2.543888);
   hCCpi0inFV_stack_10->SetBinError(5,2.718932);
   hCCpi0inFV_stack_10->SetBinError(6,2.505162);
   hCCpi0inFV_stack_10->SetBinError(7,2.60943);
   hCCpi0inFV_stack_10->SetBinError(8,2.480672);
   hCCpi0inFV_stack_10->SetBinError(9,2.470353);
   hCCpi0inFV_stack_10->SetBinError(10,2.451161);
   hCCpi0inFV_stack_10->SetBinError(11,2.204083);
   hCCpi0inFV_stack_10->SetBinError(12,2.113968);
   hCCpi0inFV_stack_10->SetBinError(13,1.90324);
   hCCpi0inFV_stack_10->SetBinError(14,1.922218);
   hCCpi0inFV_stack_10->SetBinError(15,1.846318);
   hCCpi0inFV_stack_10->SetBinError(16,1.732574);
   hCCpi0inFV_stack_10->SetBinError(17,1.68236);
   hCCpi0inFV_stack_10->SetBinError(18,1.461513);
   hCCpi0inFV_stack_10->SetBinError(19,1.872295);
   hCCpi0inFV_stack_10->SetBinError(20,1.594475);
   hCCpi0inFV_stack_10->SetBinError(21,1.523678);
   hCCpi0inFV_stack_10->SetBinError(22,1.507237);
   hCCpi0inFV_stack_10->SetBinError(23,1.414919);
   hCCpi0inFV_stack_10->SetBinError(24,0.8670216);
   hCCpi0inFV_stack_10->SetBinError(25,0.4391155);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.224261);
   hNCinFV_stack_11->SetBinContent(2,9.868331);
   hNCinFV_stack_11->SetBinContent(3,12.37781);
   hNCinFV_stack_11->SetBinContent(4,15.9049);
   hNCinFV_stack_11->SetBinContent(5,12.65091);
   hNCinFV_stack_11->SetBinContent(6,14.96358);
   hNCinFV_stack_11->SetBinContent(7,15.93846);
   hNCinFV_stack_11->SetBinContent(8,11.51786);
   hNCinFV_stack_11->SetBinContent(9,9.890423);
   hNCinFV_stack_11->SetBinContent(10,12.02187);
   hNCinFV_stack_11->SetBinContent(11,8.885055);
   hNCinFV_stack_11->SetBinContent(12,9.63208);
   hNCinFV_stack_11->SetBinContent(13,6.482725);
   hNCinFV_stack_11->SetBinContent(14,6.725733);
   hNCinFV_stack_11->SetBinContent(15,6.837934);
   hNCinFV_stack_11->SetBinContent(16,5.949853);
   hNCinFV_stack_11->SetBinContent(17,4.324571);
   hNCinFV_stack_11->SetBinContent(18,5.291023);
   hNCinFV_stack_11->SetBinContent(19,4.425458);
   hNCinFV_stack_11->SetBinContent(20,4.692656);
   hNCinFV_stack_11->SetBinContent(21,4.988002);
   hNCinFV_stack_11->SetBinContent(22,3.344861);
   hNCinFV_stack_11->SetBinContent(23,3.135495);
   hNCinFV_stack_11->SetBinContent(24,3.612369);
   hNCinFV_stack_11->SetBinContent(25,0.7106058);
   hNCinFV_stack_11->SetBinError(1,1.071956);
   hNCinFV_stack_11->SetBinError(2,2.06949);
   hNCinFV_stack_11->SetBinError(3,1.789685);
   hNCinFV_stack_11->SetBinError(4,2.166625);
   hNCinFV_stack_11->SetBinError(5,1.813831);
   hNCinFV_stack_11->SetBinError(6,2.058364);
   hNCinFV_stack_11->SetBinError(7,2.072861);
   hNCinFV_stack_11->SetBinError(8,1.81258);
   hNCinFV_stack_11->SetBinError(9,1.56328);
   hNCinFV_stack_11->SetBinError(10,1.96579);
   hNCinFV_stack_11->SetBinError(11,1.565549);
   hNCinFV_stack_11->SetBinError(12,1.716291);
   hNCinFV_stack_11->SetBinError(13,1.241909);
   hNCinFV_stack_11->SetBinError(14,1.232974);
   hNCinFV_stack_11->SetBinError(15,1.34956);
   hNCinFV_stack_11->SetBinError(16,1.191556);
   hNCinFV_stack_11->SetBinError(17,1.004009);
   hNCinFV_stack_11->SetBinError(18,1.136313);
   hNCinFV_stack_11->SetBinError(19,1.127601);
   hNCinFV_stack_11->SetBinError(20,1.213058);
   hNCinFV_stack_11->SetBinError(21,1.204378);
   hNCinFV_stack_11->SetBinError(22,0.8820964);
   hNCinFV_stack_11->SetBinError(23,0.8626697);
   hNCinFV_stack_11->SetBinError(24,0.9836234);
   hNCinFV_stack_11->SetBinError(25,0.3610391);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.247949);
   hnumuCCinFV_stack_12->SetBinContent(2,7.223881);
   hnumuCCinFV_stack_12->SetBinContent(3,11.29481);
   hnumuCCinFV_stack_12->SetBinContent(4,8.817522);
   hnumuCCinFV_stack_12->SetBinContent(5,11.28553);
   hnumuCCinFV_stack_12->SetBinContent(6,11.19688);
   hnumuCCinFV_stack_12->SetBinContent(7,12.34157);
   hnumuCCinFV_stack_12->SetBinContent(8,11.24098);
   hnumuCCinFV_stack_12->SetBinContent(9,10.81353);
   hnumuCCinFV_stack_12->SetBinContent(10,10.43999);
   hnumuCCinFV_stack_12->SetBinContent(11,8.588769);
   hnumuCCinFV_stack_12->SetBinContent(12,7.0123);
   hnumuCCinFV_stack_12->SetBinContent(13,5.957772);
   hnumuCCinFV_stack_12->SetBinContent(14,6.590186);
   hnumuCCinFV_stack_12->SetBinContent(15,3.100392);
   hnumuCCinFV_stack_12->SetBinContent(16,8.877737);
   hnumuCCinFV_stack_12->SetBinContent(17,6.496967);
   hnumuCCinFV_stack_12->SetBinContent(18,4.32609);
   hnumuCCinFV_stack_12->SetBinContent(19,4.788179);
   hnumuCCinFV_stack_12->SetBinContent(20,3.682035);
   hnumuCCinFV_stack_12->SetBinContent(21,5.379955);
   hnumuCCinFV_stack_12->SetBinContent(22,4.132671);
   hnumuCCinFV_stack_12->SetBinContent(23,2.66135);
   hnumuCCinFV_stack_12->SetBinContent(24,1.323432);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,0.5771583);
   hnumuCCinFV_stack_12->SetBinError(2,1.408724);
   hnumuCCinFV_stack_12->SetBinError(3,1.786131);
   hnumuCCinFV_stack_12->SetBinError(4,1.473717);
   hnumuCCinFV_stack_12->SetBinError(5,1.805347);
   hnumuCCinFV_stack_12->SetBinError(6,1.692067);
   hnumuCCinFV_stack_12->SetBinError(7,2.170555);
   hnumuCCinFV_stack_12->SetBinError(8,1.756649);
   hnumuCCinFV_stack_12->SetBinError(9,1.932738);
   hnumuCCinFV_stack_12->SetBinError(10,2.238408);
   hnumuCCinFV_stack_12->SetBinError(11,1.531106);
   hnumuCCinFV_stack_12->SetBinError(12,1.691714);
   hnumuCCinFV_stack_12->SetBinError(13,1.247609);
   hnumuCCinFV_stack_12->SetBinError(14,1.604885);
   hnumuCCinFV_stack_12->SetBinError(15,0.8930687);
   hnumuCCinFV_stack_12->SetBinError(16,1.940647);
   hnumuCCinFV_stack_12->SetBinError(17,1.370276);
   hnumuCCinFV_stack_12->SetBinError(18,1.742239);
   hnumuCCinFV_stack_12->SetBinError(19,1.366728);
   hnumuCCinFV_stack_12->SetBinError(20,0.9356206);
   hnumuCCinFV_stack_12->SetBinError(21,1.250673);
   hnumuCCinFV_stack_12->SetBinError(22,1.050131);
   hnumuCCinFV_stack_12->SetBinError(23,0.7825657);
   hnumuCCinFV_stack_12->SetBinError(24,0.5486071);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4915121);
   hnueCCinFV_stack_13->SetBinContent(2,2.162656);
   hnueCCinFV_stack_13->SetBinContent(3,2.972024);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,0.6106391);
   hnueCCinFV_stack_13->SetBinContent(6,2.794281);
   hnueCCinFV_stack_13->SetBinContent(7,1.890802);
   hnueCCinFV_stack_13->SetBinContent(8,1.650805);
   hnueCCinFV_stack_13->SetBinContent(9,0.8008012);
   hnueCCinFV_stack_13->SetBinContent(10,2.250398);
   hnueCCinFV_stack_13->SetBinContent(11,0.7820199);
   hnueCCinFV_stack_13->SetBinContent(12,0.8588594);
   hnueCCinFV_stack_13->SetBinContent(13,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.5017868);
   hnueCCinFV_stack_13->SetBinContent(16,1.007966);
   hnueCCinFV_stack_13->SetBinContent(17,0.8646749);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,1.219462);
   hnueCCinFV_stack_13->SetBinContent(20,1.075627);
   hnueCCinFV_stack_13->SetBinContent(21,0.4128287);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.21896);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinError(1,0.4915121);
   hnueCCinFV_stack_13->SetBinError(2,1.152896);
   hnueCCinFV_stack_13->SetBinError(3,1.593442);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,0.3530044);
   hnueCCinFV_stack_13->SetBinError(6,1.268495);
   hnueCCinFV_stack_13->SetBinError(7,0.7587566);
   hnueCCinFV_stack_13->SetBinError(8,0.7708366);
   hnueCCinFV_stack_13->SetBinError(9,0.4940269);
   hnueCCinFV_stack_13->SetBinError(10,1.346421);
   hnueCCinFV_stack_13->SetBinError(11,0.4631468);
   hnueCCinFV_stack_13->SetBinError(12,0.5193442);
   hnueCCinFV_stack_13->SetBinError(13,0.3397478);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.5017869);
   hnueCCinFV_stack_13->SetBinError(16,0.5830762);
   hnueCCinFV_stack_13->SetBinError(17,0.5032641);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.7265158);
   hnueCCinFV_stack_13->SetBinError(20,0.5691911);
   hnueCCinFV_stack_13->SetBinError(21,0.2922659);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.6597946);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__17->SetBinContent(1,30.38345);
   hmcerror__17->SetBinContent(2,103.185);
   hmcerror__17->SetBinContent(3,151.1141);
   hmcerror__17->SetBinContent(4,175.4563);
   hmcerror__17->SetBinContent(5,193.0565);
   hmcerror__17->SetBinContent(6,198.2084);
   hmcerror__17->SetBinContent(7,187.6194);
   hmcerror__17->SetBinContent(8,180.4734);
   hmcerror__17->SetBinContent(9,173.2294);
   hmcerror__17->SetBinContent(10,157.9799);
   hmcerror__17->SetBinContent(11,141.7008);
   hmcerror__17->SetBinContent(12,131.6116);
   hmcerror__17->SetBinContent(13,126.2704);
   hmcerror__17->SetBinContent(14,112.0596);
   hmcerror__17->SetBinContent(15,96.71289);
   hmcerror__17->SetBinContent(16,96.19125);
   hmcerror__17->SetBinContent(17,92.12079);
   hmcerror__17->SetBinContent(18,77.99419);
   hmcerror__17->SetBinContent(19,84.0284);
   hmcerror__17->SetBinContent(20,72.95844);
   hmcerror__17->SetBinContent(21,75.90785);
   hmcerror__17->SetBinContent(22,59.90816);
   hmcerror__17->SetBinContent(23,43.56181);
   hmcerror__17->SetBinContent(24,26.28966);
   hmcerror__17->SetBinContent(25,7.874839);
   hmcerror__17->SetBinError(1,12.63135);
   hmcerror__17->SetBinError(2,27.01486);
   hmcerror__17->SetBinError(3,50.05733);
   hmcerror__17->SetBinError(4,47.3053);
   hmcerror__17->SetBinError(5,54.08116);
   hmcerror__17->SetBinError(6,54.12371);
   hmcerror__17->SetBinError(7,51.60619);
   hmcerror__17->SetBinError(8,44.98463);
   hmcerror__17->SetBinError(9,45.33695);
   hmcerror__17->SetBinError(10,43.05959);
   hmcerror__17->SetBinError(11,37.32418);
   hmcerror__17->SetBinError(12,35.71196);
   hmcerror__17->SetBinError(13,32.153);
   hmcerror__17->SetBinError(14,27.71666);
   hmcerror__17->SetBinError(15,30.3429);
   hmcerror__17->SetBinError(16,29.23773);
   hmcerror__17->SetBinError(17,27.3158);
   hmcerror__17->SetBinError(18,23.75074);
   hmcerror__17->SetBinError(19,26.28307);
   hmcerror__17->SetBinError(20,25.59978);
   hmcerror__17->SetBinError(21,25.92965);
   hmcerror__17->SetBinError(22,20.75805);
   hmcerror__17->SetBinError(23,14.55548);
   hmcerror__17->SetBinError(24,15.32057);
   hmcerror__17->SetBinError(25,7.626527);
   hmcerror__17->SetBinError(26,0.3895343);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3021[25] = {
   29,
   100,
   152,
   199,
   218,
   210,
   192,
   185,
   166,
   164,
   149,
   134,
   121,
   105,
   112,
   95,
   103,
   91,
   78,
   80,
   80,
   76,
   52,
   28,
   19};
   Double_t _felx3021[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3021[25] = {
   5.5285,
   10.1212,
   12.32883,
   14.10674,
   14.76482,
   14.49138,
   13.85641,
   13.60147,
   12.8841,
   12.80625,
   12.20656,
   11.57584,
   11,
   10.24695,
   10.58301,
   9.8686,
   10.14889,
   9.6617,
   8.9562,
   9.0683,
   9.0683,
   8.8425,
   7.3419,
   5.4358,
   4.5151};
   Double_t _fehx3021[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3021[25] = {
   5.3201,
   9.92,
   12.32883,
   14.10674,
   14.76482,
   14.49138,
   13.85641,
   13.60147,
   12.8841,
   12.80625,
   12.20656,
   11.57584,
   11,
   10.24695,
   10.58301,
   9.667,
   10.14889,
   9.46,
   8.7542,
   8.8665,
   8.8665,
   8.6406,
   7.1381,
   5.2271,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(13.03641);
   Graph_Graph3021->SetMaximum(254.5928);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3022[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3022[25] = {
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
   Double_t _felx3022[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3022[25] = {
   0.4157314,
   0.26181,
   0.3312551,
   0.2696129,
   0.2801312,
   0.2730647,
   0.2750579,
   0.249259,
   0.2617163,
   0.2725638,
   0.2634014,
   0.2713436,
   0.2546362,
   0.2473387,
   0.3137421,
   0.3039542,
   0.2965215,
   0.3045193,
   0.3127879,
   0.3508817,
   0.3415938,
   0.3464978,
   0.334134,
   0.5827603,
   0.9684677};
   Double_t _fehx3022[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3022[25] = {
   0.4157314,
   0.26181,
   0.3312551,
   0.2696129,
   0.2801312,
   0.2730647,
   0.2750579,
   0.249259,
   0.2617163,
   0.2725638,
   0.2634014,
   0.2713436,
   0.2546362,
   0.2473387,
   0.3137421,
   0.3039542,
   0.2965215,
   0.3045193,
   0.3127879,
   0.3508817,
   0.3415938,
   0.3464978,
   0.334134,
   0.5827603,
   0.9684677};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3023[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3023[25] = {
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
   Double_t _felx3023[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3023[25] = {
   0.258227,
   0.2069488,
   0.2180335,
   0.2213004,
   0.2222063,
   0.219573,
   0.2243402,
   0.2145921,
   0.2240288,
   0.2307947,
   0.2104105,
   0.2130648,
   0.2072241,
   0.1967205,
   0.2317113,
   0.2114937,
   0.2101995,
   0.2277508,
   0.2347445,
   0.2356195,
   0.2192274,
   0.2186966,
   0.237923,
   0.2652094,
   0.3287469};
   Double_t _fehx3023[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3023[25] = {
   0.258227,
   0.2069488,
   0.2180335,
   0.2213004,
   0.2222063,
   0.219573,
   0.2243402,
   0.2145921,
   0.2240288,
   0.2307947,
   0.2104105,
   0.2130648,
   0.2072241,
   0.1967205,
   0.2317113,
   0.2114937,
   0.2101995,
   0.2277508,
   0.2347445,
   0.2356195,
   0.2192274,
   0.2186966,
   0.237923,
   0.2652094,
   0.3287469};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
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
   
   Double_t _fx3024[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3024[25] = {
   0.9544669,
   0.9691334,
   1.005862,
   1.134185,
   1.129203,
   1.059491,
   1.023348,
   1.025082,
   0.958267,
   1.038107,
   1.051512,
   1.018148,
   0.9582612,
   0.9370018,
   1.158067,
   0.9876158,
   1.118097,
   1.166754,
   0.9282576,
   1.096515,
   1.053909,
   1.268608,
   1.193706,
   1.065057,
   2.412748};
   Double_t _felx3024[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3024[25] = {
   0.1819576,
   0.09808793,
   0.08158621,
   0.08040026,
   0.07647927,
   0.07311183,
   0.0738538,
   0.07536551,
   0.07437594,
   0.08106252,
   0.08614319,
   0.08795455,
   0.08711465,
   0.09144201,
   0.109427,
   0.1025935,
   0.1101694,
   0.1238772,
   0.1065854,
   0.1242941,
   0.1194646,
   0.1476009,
   0.1685398,
   0.2067657,
   0.5733578};
   Double_t _fehx3024[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3024[25] = {
   0.1750986,
   0.09613804,
   0.08158621,
   0.08040026,
   0.07647927,
   0.07311183,
   0.0738538,
   0.07536551,
   0.07437594,
   0.08106252,
   0.08614319,
   0.08795455,
   0.08711465,
   0.09144201,
   0.109427,
   0.1004977,
   0.1101694,
   0.1212911,
   0.1041814,
   0.1215281,
   0.1168061,
   0.1442308,
   0.1638614,
   0.1988272,
   0.5461826};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.5538672);
   Graph_Graph3024->SetMaximum(3.177573);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

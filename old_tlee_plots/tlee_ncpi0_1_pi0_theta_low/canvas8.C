#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 23:09:36 2022) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-1.62,3.553846,179.1379);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__22->SetBinContent(1,10.46086);
   hmc__22->SetBinContent(2,40.70146);
   hmc__22->SetBinContent(3,55.77475);
   hmc__22->SetBinContent(4,70.72767);
   hmc__22->SetBinContent(5,73.88908);
   hmc__22->SetBinContent(6,65.09048);
   hmc__22->SetBinContent(7,61.92618);
   hmc__22->SetBinContent(8,70.66891);
   hmc__22->SetBinContent(9,47.55063);
   hmc__22->SetBinContent(10,51.78833);
   hmc__22->SetBinContent(11,40.45004);
   hmc__22->SetBinContent(12,35.87151);
   hmc__22->SetBinContent(13,36.35135);
   hmc__22->SetBinContent(14,29.75441);
   hmc__22->SetBinContent(15,30.15191);
   hmc__22->SetBinContent(16,32.56995);
   hmc__22->SetBinContent(17,31.0663);
   hmc__22->SetBinContent(18,22.379);
   hmc__22->SetBinContent(19,22.12048);
   hmc__22->SetBinContent(20,23.23972);
   hmc__22->SetBinContent(21,22.5515);
   hmc__22->SetBinContent(22,23.62488);
   hmc__22->SetBinContent(23,18.08943);
   hmc__22->SetBinContent(24,11.90646);
   hmc__22->SetBinContent(25,4.85899);
   hmc__22->SetBinError(1,6.668605);
   hmc__22->SetBinError(2,18.72443);
   hmc__22->SetBinError(3,18.48444);
   hmc__22->SetBinError(4,24.3643);
   hmc__22->SetBinError(5,20.66169);
   hmc__22->SetBinError(6,20.45079);
   hmc__22->SetBinError(7,19.29425);
   hmc__22->SetBinError(8,23.19301);
   hmc__22->SetBinError(9,21.09339);
   hmc__22->SetBinError(10,15.595);
   hmc__22->SetBinError(11,17.34168);
   hmc__22->SetBinError(12,15.38041);
   hmc__22->SetBinError(13,15.17873);
   hmc__22->SetBinError(14,10.47332);
   hmc__22->SetBinError(15,12.46274);
   hmc__22->SetBinError(16,15.68067);
   hmc__22->SetBinError(17,15.45191);
   hmc__22->SetBinError(18,11.4333);
   hmc__22->SetBinError(19,13.6063);
   hmc__22->SetBinError(20,12.50383);
   hmc__22->SetBinError(21,13.53582);
   hmc__22->SetBinError(22,11.27758);
   hmc__22->SetBinError(23,22.09257);
   hmc__22->SetBinError(24,8.245032);
   hmc__22->SetBinError(25,6.793493);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-1.62);
   hmc__22->SetMaximum(170.1);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,3.15);
   hs8_stack_8->SetMinimum(-1.223425e-08);
   hs8_stack_8->SetMaximum(77.58354);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,1.46908);
   hbadmatch_stack_1->SetBinContent(3,3.85975);
   hbadmatch_stack_1->SetBinContent(4,1.603389);
   hbadmatch_stack_1->SetBinContent(5,4.526185);
   hbadmatch_stack_1->SetBinContent(6,1.133391);
   hbadmatch_stack_1->SetBinContent(7,1.176911);
   hbadmatch_stack_1->SetBinContent(8,3.761837);
   hbadmatch_stack_1->SetBinContent(9,1.184441);
   hbadmatch_stack_1->SetBinContent(10,1.117875);
   hbadmatch_stack_1->SetBinContent(11,0.7758106);
   hbadmatch_stack_1->SetBinContent(12,0.99427);
   hbadmatch_stack_1->SetBinContent(13,0.8391231);
   hbadmatch_stack_1->SetBinContent(14,0.8941931);
   hbadmatch_stack_1->SetBinContent(15,0.7136659);
   hbadmatch_stack_1->SetBinContent(16,1.501453);
   hbadmatch_stack_1->SetBinContent(17,1.426547);
   hbadmatch_stack_1->SetBinContent(18,0.6770089);
   hbadmatch_stack_1->SetBinContent(19,1.564716);
   hbadmatch_stack_1->SetBinContent(20,1.560668);
   hbadmatch_stack_1->SetBinContent(21,0.2792383);
   hbadmatch_stack_1->SetBinContent(22,0.8586974);
   hbadmatch_stack_1->SetBinContent(24,1.066335);
   hbadmatch_stack_1->SetBinError(2,0.6220898);
   hbadmatch_stack_1->SetBinError(3,1.128167);
   hbadmatch_stack_1->SetBinError(4,0.6387394);
   hbadmatch_stack_1->SetBinError(5,1.415798);
   hbadmatch_stack_1->SetBinError(6,0.5795158);
   hbadmatch_stack_1->SetBinError(7,0.4804759);
   hbadmatch_stack_1->SetBinError(8,1.172908);
   hbadmatch_stack_1->SetBinError(9,0.5444146);
   hbadmatch_stack_1->SetBinError(10,0.5987456);
   hbadmatch_stack_1->SetBinError(11,0.548945);
   hbadmatch_stack_1->SetBinError(12,0.4862963);
   hbadmatch_stack_1->SetBinError(13,0.509075);
   hbadmatch_stack_1->SetBinError(14,0.4531997);
   hbadmatch_stack_1->SetBinError(15,0.4131322);
   hbadmatch_stack_1->SetBinError(16,0.893674);
   hbadmatch_stack_1->SetBinError(17,0.6586419);
   hbadmatch_stack_1->SetBinError(18,0.4234962);
   hbadmatch_stack_1->SetBinError(19,0.7151744);
   hbadmatch_stack_1->SetBinError(20,0.6746716);
   hbadmatch_stack_1->SetBinError(21,0.2172612);
   hbadmatch_stack_1->SetBinError(22,0.5018555);
   hbadmatch_stack_1->SetBinError(24,0.598597);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,1.861411);
   hext_stack_2->SetBinContent(2,8.172231);
   hext_stack_2->SetBinContent(3,8.033778);
   hext_stack_2->SetBinContent(4,11.66281);
   hext_stack_2->SetBinContent(5,17.06387);
   hext_stack_2->SetBinContent(6,10.14457);
   hext_stack_2->SetBinContent(7,13.2892);
   hext_stack_2->SetBinContent(8,14.0864);
   hext_stack_2->SetBinContent(9,8.760365);
   hext_stack_2->SetBinContent(10,14.69652);
   hext_stack_2->SetBinContent(11,6.082985);
   hext_stack_2->SetBinContent(12,5.925763);
   hext_stack_2->SetBinContent(13,11.9353);
   hext_stack_2->SetBinContent(14,9.704836);
   hext_stack_2->SetBinContent(15,9.051632);
   hext_stack_2->SetBinContent(16,9.843287);
   hext_stack_2->SetBinContent(17,8.09721);
   hext_stack_2->SetBinContent(18,3.814975);
   hext_stack_2->SetBinContent(19,5.572643);
   hext_stack_2->SetBinContent(20,5.814838);
   hext_stack_2->SetBinContent(21,4.028449);
   hext_stack_2->SetBinContent(22,6.855872);
   hext_stack_2->SetBinContent(23,2.110787);
   hext_stack_2->SetBinContent(24,1.290409);
   hext_stack_2->SetBinContent(25,1.219797);
   hext_stack_2->SetBinError(1,0.9526997);
   hext_stack_2->SetBinError(2,1.940613);
   hext_stack_2->SetBinError(3,1.782504);
   hext_stack_2->SetBinError(4,2.235751);
   hext_stack_2->SetBinError(5,2.805102);
   hext_stack_2->SetBinError(6,1.982145);
   hext_stack_2->SetBinError(7,2.379049);
   hext_stack_2->SetBinError(8,2.433408);
   hext_stack_2->SetBinError(9,1.820097);
   hext_stack_2->SetBinError(10,2.733912);
   hext_stack_2->SetBinError(11,1.552674);
   hext_stack_2->SetBinError(12,1.445482);
   hext_stack_2->SetBinError(13,2.4578);
   hext_stack_2->SetBinError(14,2.105531);
   hext_stack_2->SetBinError(15,2.021799);
   hext_stack_2->SetBinError(16,2.240964);
   hext_stack_2->SetBinError(17,1.872082);
   hext_stack_2->SetBinError(18,1.156649);
   hext_stack_2->SetBinError(19,1.670027);
   hext_stack_2->SetBinError(20,1.683489);
   hext_stack_2->SetBinError(21,1.479117);
   hext_stack_2->SetBinError(22,1.900612);
   hext_stack_2->SetBinError(23,0.8669371);
   hext_stack_2->SetBinError(24,0.788756);
   hext_stack_2->SetBinError(25,0.7042499);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(4,2.088105);
   hdirt_stack_3->SetBinContent(5,0.5294253);
   hdirt_stack_3->SetBinContent(6,1.390929);
   hdirt_stack_3->SetBinContent(7,2.359005);
   hdirt_stack_3->SetBinContent(8,2.107805);
   hdirt_stack_3->SetBinContent(9,0.7139341);
   hdirt_stack_3->SetBinContent(10,0.8229519);
   hdirt_stack_3->SetBinContent(11,1.588635);
   hdirt_stack_3->SetBinContent(12,1.60037);
   hdirt_stack_3->SetBinContent(13,0.7756181);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(16,0.9068468);
   hdirt_stack_3->SetBinContent(17,0.3569671);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.6763744);
   hdirt_stack_3->SetBinContent(21,0.4801876);
   hdirt_stack_3->SetBinContent(22,0.8010461);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(4,0.8253035);
   hdirt_stack_3->SetBinError(5,0.2653997);
   hdirt_stack_3->SetBinError(6,0.6524508);
   hdirt_stack_3->SetBinError(7,0.8292864);
   hdirt_stack_3->SetBinError(8,0.8018603);
   hdirt_stack_3->SetBinError(9,0.3660028);
   hdirt_stack_3->SetBinError(10,0.4194608);
   hdirt_stack_3->SetBinError(11,0.9873336);
   hdirt_stack_3->SetBinError(12,0.6509521);
   hdirt_stack_3->SetBinError(13,0.4758457);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(16,0.5334985);
   hdirt_stack_3->SetBinError(17,0.258803);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.4782689);
   hdirt_stack_3->SetBinError(21,0.3653078);
   hdirt_stack_3->SetBinError(22,0.4056913);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.368136);
   houtFV_stack_4->SetBinContent(2,7.322714);
   houtFV_stack_4->SetBinContent(3,14.00449);
   houtFV_stack_4->SetBinContent(4,15.98375);
   houtFV_stack_4->SetBinContent(5,13.07577);
   houtFV_stack_4->SetBinContent(6,12.04083);
   houtFV_stack_4->SetBinContent(7,13.16664);
   houtFV_stack_4->SetBinContent(8,13.40959);
   houtFV_stack_4->SetBinContent(9,11.00656);
   houtFV_stack_4->SetBinContent(10,8.411767);
   houtFV_stack_4->SetBinContent(11,7.058413);
   houtFV_stack_4->SetBinContent(12,7.608549);
   houtFV_stack_4->SetBinContent(13,6.168097);
   houtFV_stack_4->SetBinContent(14,6.153041);
   houtFV_stack_4->SetBinContent(15,6.704332);
   houtFV_stack_4->SetBinContent(16,5.20216);
   houtFV_stack_4->SetBinContent(17,6.838063);
   houtFV_stack_4->SetBinContent(18,6.145751);
   houtFV_stack_4->SetBinContent(19,4.707334);
   houtFV_stack_4->SetBinContent(20,6.936009);
   houtFV_stack_4->SetBinContent(21,6.652098);
   houtFV_stack_4->SetBinContent(22,4.023835);
   houtFV_stack_4->SetBinContent(23,3.737402);
   houtFV_stack_4->SetBinContent(24,2.997429);
   houtFV_stack_4->SetBinContent(25,0.7173742);
   houtFV_stack_4->SetBinError(1,0.816337);
   houtFV_stack_4->SetBinError(2,1.349524);
   houtFV_stack_4->SetBinError(3,1.944117);
   houtFV_stack_4->SetBinError(4,2.222741);
   houtFV_stack_4->SetBinError(5,1.783104);
   houtFV_stack_4->SetBinError(6,1.678912);
   houtFV_stack_4->SetBinError(7,1.830837);
   houtFV_stack_4->SetBinError(8,1.844068);
   houtFV_stack_4->SetBinError(9,1.655857);
   houtFV_stack_4->SetBinError(10,1.474903);
   houtFV_stack_4->SetBinError(11,1.386048);
   houtFV_stack_4->SetBinError(12,1.37921);
   houtFV_stack_4->SetBinError(13,1.71205);
   houtFV_stack_4->SetBinError(14,1.260258);
   houtFV_stack_4->SetBinError(15,1.303627);
   houtFV_stack_4->SetBinError(16,1.159486);
   houtFV_stack_4->SetBinError(17,1.287484);
   houtFV_stack_4->SetBinError(18,1.230791);
   houtFV_stack_4->SetBinError(19,1.073696);
   houtFV_stack_4->SetBinError(20,1.275529);
   houtFV_stack_4->SetBinError(21,1.264917);
   houtFV_stack_4->SetBinError(22,0.9465659);
   houtFV_stack_4->SetBinError(23,0.9707645);
   houtFV_stack_4->SetBinError(24,0.8674515);
   houtFV_stack_4->SetBinError(25,0.3630772);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3044679);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.543944);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.211442);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.720651);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.534646);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.02234);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9067796);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8328023);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7906337);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5246623);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.004716);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1133465);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5445461);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.304511);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2121149);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5668249);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3863148);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08515355);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.03568899);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1640856);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1788464);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4906192);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1531754);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1301691);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5263462);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3153319);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4519508);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4048903);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.385702);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2651394);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3295296);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3503668);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2928014);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4633067);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06634022);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2632659);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1522303);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1501908);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3239212);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2315733);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.049167);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02905246);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1321719);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1320636);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3088313);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1000354);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08614941);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.04799227);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1361127);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06852069);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04412046);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03878871);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1292372);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04924792);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.275977);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.883368);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.617015);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.98473);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.7168);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.385761);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.257878);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.812306);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.493621);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.639867);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.835258);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.410278);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.651175);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.210921);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.868619);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.21375);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.188344);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.013315);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.875016);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.913768);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.157024);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.435212);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.59536);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.6490331);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.6105468);
   hNCpi0inFVres_stack_7->SetBinError(1,0.394194);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5541905);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9473919);
   hNCpi0inFVres_stack_7->SetBinError(4,1.197726);
   hNCpi0inFVres_stack_7->SetBinError(5,1.201158);
   hNCpi0inFVres_stack_7->SetBinError(6,1.037819);
   hNCpi0inFVres_stack_7->SetBinError(7,0.942456);
   hNCpi0inFVres_stack_7->SetBinError(8,1.137544);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8172394);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8372528);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7689635);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6858109);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5107077);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7125049);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5410678);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5428514);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4167016);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5480234);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4195209);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5799569);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4563445);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3738325);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3938562);
   hNCpi0inFVres_stack_7->SetBinError(24,0.205804);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3299807);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4950249);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.8684);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.224747);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.984381);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.763769);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.246975);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.201154);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.91665);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.028052);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.722924);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.130815);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.395431);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7623328);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9614051);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.044887);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7987744);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7910361);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7118011);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8035035);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2483726);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5219737);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7919216);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.4030634);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1834882);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.06672066);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2199195);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6385555);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5340412);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6274748);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6454903);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7923137);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6117303);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4431226);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2547354);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6176417);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5736935);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3323025);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1946503);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3676373);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3254044);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2461209);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4383045);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.396045);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2630221);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.07823907);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2372481);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3388368);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1723854);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1474374);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03994832);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,2.931069);
   hCCpi0inFV_stack_10->SetBinContent(2,9.097826);
   hCCpi0inFV_stack_10->SetBinContent(3,9.917898);
   hCCpi0inFV_stack_10->SetBinContent(4,13.13327);
   hCCpi0inFV_stack_10->SetBinContent(5,15.53736);
   hCCpi0inFV_stack_10->SetBinContent(6,13.22127);
   hCCpi0inFV_stack_10->SetBinContent(7,12.74062);
   hCCpi0inFV_stack_10->SetBinContent(8,14.94834);
   hCCpi0inFV_stack_10->SetBinContent(9,11.23719);
   hCCpi0inFV_stack_10->SetBinContent(10,10.92098);
   hCCpi0inFV_stack_10->SetBinContent(11,9.327871);
   hCCpi0inFV_stack_10->SetBinContent(12,9.012198);
   hCCpi0inFV_stack_10->SetBinContent(13,6.879257);
   hCCpi0inFV_stack_10->SetBinContent(14,2.640747);
   hCCpi0inFV_stack_10->SetBinContent(15,4.197789);
   hCCpi0inFV_stack_10->SetBinContent(16,5.568418);
   hCCpi0inFV_stack_10->SetBinContent(17,7.317488);
   hCCpi0inFV_stack_10->SetBinContent(18,4.441379);
   hCCpi0inFV_stack_10->SetBinContent(19,5.129484);
   hCCpi0inFV_stack_10->SetBinContent(20,2.360584);
   hCCpi0inFV_stack_10->SetBinContent(21,3.819349);
   hCCpi0inFV_stack_10->SetBinContent(22,4.446451);
   hCCpi0inFV_stack_10->SetBinContent(23,4.02212);
   hCCpi0inFV_stack_10->SetBinContent(24,2.870305);
   hCCpi0inFV_stack_10->SetBinContent(25,1.268811);
   hCCpi0inFV_stack_10->SetBinError(1,0.7956916);
   hCCpi0inFV_stack_10->SetBinError(2,1.556426);
   hCCpi0inFV_stack_10->SetBinError(3,1.544222);
   hCCpi0inFV_stack_10->SetBinError(4,1.840607);
   hCCpi0inFV_stack_10->SetBinError(5,2.021162);
   hCCpi0inFV_stack_10->SetBinError(6,1.85683);
   hCCpi0inFV_stack_10->SetBinError(7,1.81453);
   hCCpi0inFV_stack_10->SetBinError(8,1.984436);
   hCCpi0inFV_stack_10->SetBinError(9,1.700138);
   hCCpi0inFV_stack_10->SetBinError(10,1.687024);
   hCCpi0inFV_stack_10->SetBinError(11,1.5262);
   hCCpi0inFV_stack_10->SetBinError(12,1.491182);
   hCCpi0inFV_stack_10->SetBinError(13,1.374084);
   hCCpi0inFV_stack_10->SetBinError(14,0.784705);
   hCCpi0inFV_stack_10->SetBinError(15,0.9898463);
   hCCpi0inFV_stack_10->SetBinError(16,1.177103);
   hCCpi0inFV_stack_10->SetBinError(17,1.387034);
   hCCpi0inFV_stack_10->SetBinError(18,1.055966);
   hCCpi0inFV_stack_10->SetBinError(19,1.128166);
   hCCpi0inFV_stack_10->SetBinError(20,0.681442);
   hCCpi0inFV_stack_10->SetBinError(21,0.9204789);
   hCCpi0inFV_stack_10->SetBinError(22,1.056906);
   hCCpi0inFV_stack_10->SetBinError(23,1.082924);
   hCCpi0inFV_stack_10->SetBinError(24,0.8175935);
   hCCpi0inFV_stack_10->SetBinError(25,0.5889569);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,1.560839);
   hNCinFV_stack_11->SetBinContent(3,2.561918);
   hNCinFV_stack_11->SetBinContent(4,2.804914);
   hNCinFV_stack_11->SetBinContent(5,1.362022);
   hNCinFV_stack_11->SetBinContent(6,1.701778);
   hNCinFV_stack_11->SetBinContent(7,1.358484);
   hNCinFV_stack_11->SetBinContent(8,2.43776);
   hNCinFV_stack_11->SetBinContent(9,1.361871);
   hNCinFV_stack_11->SetBinContent(10,1.832324);
   hNCinFV_stack_11->SetBinContent(11,1.582303);
   hNCinFV_stack_11->SetBinContent(12,0.7573478);
   hNCinFV_stack_11->SetBinContent(13,0.9396335);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,1.812293);
   hNCinFV_stack_11->SetBinContent(16,2.025701);
   hNCinFV_stack_11->SetBinContent(17,0.9033966);
   hNCinFV_stack_11->SetBinContent(18,1.263833);
   hNCinFV_stack_11->SetBinContent(19,0.250768);
   hNCinFV_stack_11->SetBinContent(20,0.8785674);
   hNCinFV_stack_11->SetBinContent(21,2.072476);
   hNCinFV_stack_11->SetBinContent(22,1.990525);
   hNCinFV_stack_11->SetBinContent(23,0.9554511);
   hNCinFV_stack_11->SetBinContent(24,1.02773);
   hNCinFV_stack_11->SetBinContent(25,0.2018398);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.6230413);
   hNCinFV_stack_11->SetBinError(3,1.027719);
   hNCinFV_stack_11->SetBinError(4,0.7574127);
   hNCinFV_stack_11->SetBinError(5,0.4770635);
   hNCinFV_stack_11->SetBinError(6,0.7045716);
   hNCinFV_stack_11->SetBinError(7,0.6045198);
   hNCinFV_stack_11->SetBinError(8,0.7675114);
   hNCinFV_stack_11->SetBinError(9,0.5170341);
   hNCinFV_stack_11->SetBinError(10,0.7351015);
   hNCinFV_stack_11->SetBinError(11,0.7402499);
   hNCinFV_stack_11->SetBinError(12,0.4235109);
   hNCinFV_stack_11->SetBinError(13,0.4028007);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.8305763);
   hNCinFV_stack_11->SetBinError(16,0.9471463);
   hNCinFV_stack_11->SetBinError(17,0.4096866);
   hNCinFV_stack_11->SetBinError(18,0.5420533);
   hNCinFV_stack_11->SetBinError(19,0.2040064);
   hNCinFV_stack_11->SetBinError(20,0.5207294);
   hNCinFV_stack_11->SetBinError(21,0.737272);
   hNCinFV_stack_11->SetBinError(22,0.8411154);
   hNCinFV_stack_11->SetBinError(23,0.46678);
   hNCinFV_stack_11->SetBinError(24,0.656198);
   hNCinFV_stack_11->SetBinError(25,0.2018398);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.028061);
   hnumuCCinFV_stack_12->SetBinContent(2,4.25501);
   hnumuCCinFV_stack_12->SetBinContent(3,5.242671);
   hnumuCCinFV_stack_12->SetBinContent(4,7.675529);
   hnumuCCinFV_stack_12->SetBinContent(5,6.30957);
   hnumuCCinFV_stack_12->SetBinContent(6,11.0115);
   hnumuCCinFV_stack_12->SetBinContent(7,4.693633);
   hnumuCCinFV_stack_12->SetBinContent(8,6.593606);
   hnumuCCinFV_stack_12->SetBinContent(9,4.97396);
   hnumuCCinFV_stack_12->SetBinContent(10,5.057956);
   hnumuCCinFV_stack_12->SetBinContent(11,5.063233);
   hnumuCCinFV_stack_12->SetBinContent(12,3.053954);
   hnumuCCinFV_stack_12->SetBinContent(13,3.856257);
   hnumuCCinFV_stack_12->SetBinContent(14,3.583821);
   hnumuCCinFV_stack_12->SetBinContent(15,3.47153);
   hnumuCCinFV_stack_12->SetBinContent(16,2.932024);
   hnumuCCinFV_stack_12->SetBinContent(17,3.078733);
   hnumuCCinFV_stack_12->SetBinContent(18,1.550109);
   hnumuCCinFV_stack_12->SetBinContent(19,1.970093);
   hnumuCCinFV_stack_12->SetBinContent(20,1.568673);
   hnumuCCinFV_stack_12->SetBinContent(21,2.308305);
   hnumuCCinFV_stack_12->SetBinContent(22,2.257236);
   hnumuCCinFV_stack_12->SetBinContent(23,4.889682);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9929213);
   hnumuCCinFV_stack_12->SetBinContent(25,0.6207258);
   hnumuCCinFV_stack_12->SetBinError(1,0.5549702);
   hnumuCCinFV_stack_12->SetBinError(2,1.003359);
   hnumuCCinFV_stack_12->SetBinError(3,1.199307);
   hnumuCCinFV_stack_12->SetBinError(4,1.429723);
   hnumuCCinFV_stack_12->SetBinError(5,1.644925);
   hnumuCCinFV_stack_12->SetBinError(6,2.567137);
   hnumuCCinFV_stack_12->SetBinError(7,1.224645);
   hnumuCCinFV_stack_12->SetBinError(8,1.257693);
   hnumuCCinFV_stack_12->SetBinError(9,1.169748);
   hnumuCCinFV_stack_12->SetBinError(10,1.161924);
   hnumuCCinFV_stack_12->SetBinError(11,1.194291);
   hnumuCCinFV_stack_12->SetBinError(12,0.9240661);
   hnumuCCinFV_stack_12->SetBinError(13,1.040842);
   hnumuCCinFV_stack_12->SetBinError(14,1.093015);
   hnumuCCinFV_stack_12->SetBinError(15,1.007391);
   hnumuCCinFV_stack_12->SetBinError(16,0.8710793);
   hnumuCCinFV_stack_12->SetBinError(17,0.8714014);
   hnumuCCinFV_stack_12->SetBinError(18,0.6004562);
   hnumuCCinFV_stack_12->SetBinError(19,0.6540549);
   hnumuCCinFV_stack_12->SetBinError(20,0.6567321);
   hnumuCCinFV_stack_12->SetBinError(21,0.8042858);
   hnumuCCinFV_stack_12->SetBinError(22,0.7395074);
   hnumuCCinFV_stack_12->SetBinError(23,2.359558);
   hnumuCCinFV_stack_12->SetBinError(24,0.5965343);
   hnumuCCinFV_stack_12->SetBinError(25,0.3593967);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,1.046837);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(5,0.4514454);
   hnueCCinFV_stack_13->SetBinContent(6,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(7,0.639761);
   hnueCCinFV_stack_13->SetBinContent(8,0.7155366);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.5697868);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(5,0.3192207);
   hnueCCinFV_stack_13->SetBinError(6,0.7431478);
   hnueCCinFV_stack_13->SetBinError(7,0.3715811);
   hnueCCinFV_stack_13->SetBinError(8,0.4208068);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__23->SetBinContent(1,10.46086);
   hmcerror__23->SetBinContent(2,40.70146);
   hmcerror__23->SetBinContent(3,55.77475);
   hmcerror__23->SetBinContent(4,70.72767);
   hmcerror__23->SetBinContent(5,73.88908);
   hmcerror__23->SetBinContent(6,65.09048);
   hmcerror__23->SetBinContent(7,61.92618);
   hmcerror__23->SetBinContent(8,70.66891);
   hmcerror__23->SetBinContent(9,47.55063);
   hmcerror__23->SetBinContent(10,51.78833);
   hmcerror__23->SetBinContent(11,40.45004);
   hmcerror__23->SetBinContent(12,35.87151);
   hmcerror__23->SetBinContent(13,36.35135);
   hmcerror__23->SetBinContent(14,29.75441);
   hmcerror__23->SetBinContent(15,30.15191);
   hmcerror__23->SetBinContent(16,32.56995);
   hmcerror__23->SetBinContent(17,31.0663);
   hmcerror__23->SetBinContent(18,22.379);
   hmcerror__23->SetBinContent(19,22.12048);
   hmcerror__23->SetBinContent(20,23.23972);
   hmcerror__23->SetBinContent(21,22.5515);
   hmcerror__23->SetBinContent(22,23.62488);
   hmcerror__23->SetBinContent(23,18.08943);
   hmcerror__23->SetBinContent(24,11.90646);
   hmcerror__23->SetBinContent(25,4.85899);
   hmcerror__23->SetBinError(1,6.668605);
   hmcerror__23->SetBinError(2,18.72443);
   hmcerror__23->SetBinError(3,18.48444);
   hmcerror__23->SetBinError(4,24.3643);
   hmcerror__23->SetBinError(5,20.66169);
   hmcerror__23->SetBinError(6,20.45079);
   hmcerror__23->SetBinError(7,19.29425);
   hmcerror__23->SetBinError(8,23.19301);
   hmcerror__23->SetBinError(9,21.09339);
   hmcerror__23->SetBinError(10,15.595);
   hmcerror__23->SetBinError(11,17.34168);
   hmcerror__23->SetBinError(12,15.38041);
   hmcerror__23->SetBinError(13,15.17873);
   hmcerror__23->SetBinError(14,10.47332);
   hmcerror__23->SetBinError(15,12.46274);
   hmcerror__23->SetBinError(16,15.68067);
   hmcerror__23->SetBinError(17,15.45191);
   hmcerror__23->SetBinError(18,11.4333);
   hmcerror__23->SetBinError(19,13.6063);
   hmcerror__23->SetBinError(20,12.50383);
   hmcerror__23->SetBinError(21,13.53582);
   hmcerror__23->SetBinError(22,11.27758);
   hmcerror__23->SetBinError(23,22.09257);
   hmcerror__23->SetBinError(24,8.245032);
   hmcerror__23->SetBinError(25,6.793493);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(948.2139);

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
   Double_t _fy3029[25] = {
   16,
   45,
   56,
   81,
   77,
   40,
   58,
   61,
   56,
   47,
   43,
   24,
   31,
   38,
   31,
   30,
   29,
   15,
   15,
   28,
   14,
   15,
   17,
   16,
   2};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   4.1628,
   6.8416,
   7.6127,
   9.1239,
   8.8995,
   6.4604,
   7.7446,
   7.9383,
   7.6127,
   6.9882,
   6.6917,
   5.0476,
   5.7094,
   6.3013,
   5.7094,
   5.6197,
   5.5285,
   4.0385,
   4.0385,
   5.4358,
   3.9102,
   4.0385,
   4.2835,
   4.1628,
   2};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   3.9454,
   6.637,
   7.4094,
   8.9221,
   8.6976,
   6.2549,
   7.5415,
   7.7354,
   7.4094,
   6.7839,
   6.4868,
   4.837,
   5.5017,
   6.0955,
   5.5017,
   5.4117,
   5.3201,
   3.8197,
   3.8197,
   5.2271,
   3.6898,
   3.8197,
   4.0673,
   3.9454,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(98.91431);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fely3030[25] = {
   0.6374814,
   0.4600431,
   0.3314123,
   0.3444805,
   0.2796311,
   0.3141901,
   0.3115686,
   0.3281926,
   0.4435986,
   0.3011295,
   0.4287184,
   0.4287641,
   0.4175563,
   0.3519921,
   0.4133317,
   0.4814458,
   0.497385,
   0.5108941,
   0.6150999,
   0.538037,
   0.6002182,
   0.4773603,
   1.221297,
   0.6924841,
   1.398129};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0.6374814,
   0.4600431,
   0.3314123,
   0.3444805,
   0.2796311,
   0.3141901,
   0.3115686,
   0.3281926,
   0.4435986,
   0.3011295,
   0.4287184,
   0.4287641,
   0.4175563,
   0.3519921,
   0.4133317,
   0.4814458,
   0.497385,
   0.5108941,
   0.6150999,
   0.538037,
   0.6002182,
   0.4773603,
   1.221297,
   0.6924841,
   1.398129};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   Double_t _fely3031[25] = {
   0.2395952,
   0.1846164,
   0.1897515,
   0.1783581,
   0.1610832,
   0.189009,
   0.1740015,
   0.1879667,
   0.1935369,
   0.1655658,
   0.2059734,
   0.198623,
   0.1831159,
   0.1894843,
   0.1938632,
   0.1822357,
   0.2036216,
   0.2302029,
   0.2190709,
   0.2239881,
   0.2258389,
   0.2035267,
   0.3024816,
   0.2506687,
   0.3233813};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.2395952,
   0.1846164,
   0.1897515,
   0.1783581,
   0.1610832,
   0.189009,
   0.1740015,
   0.1879667,
   0.1935369,
   0.1655658,
   0.2059734,
   0.198623,
   0.1831159,
   0.1894843,
   0.1938632,
   0.1822357,
   0.2036216,
   0.2302029,
   0.2190709,
   0.2239881,
   0.2258389,
   0.2035267,
   0.3024816,
   0.2506687,
   0.3233813};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3032[25] = {
   1.529511,
   1.105611,
   1.004039,
   1.145238,
   1.042103,
   0.6145291,
   0.9365991,
   0.8631802,
   1.177692,
   0.9075404,
   1.06304,
   0.6690547,
   0.8527883,
   1.277122,
   1.028127,
   0.9210943,
   0.9334873,
   0.6702713,
   0.6781048,
   1.204834,
   0.6208012,
   0.6349238,
   0.9397755,
   1.343809,
   0.4116082};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0.3979404,
   0.1680922,
   0.1364901,
   0.1290004,
   0.120444,
   0.0992526,
   0.1250618,
   0.1123309,
   0.1600967,
   0.1349377,
   0.1654312,
   0.1407134,
   0.1570616,
   0.211777,
   0.1893545,
   0.1725425,
   0.1779581,
   0.1804594,
   0.1825684,
   0.2339012,
   0.1733898,
   0.1709427,
   0.2367958,
   0.3496254,
   0.4116082};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0.3771582,
   0.1630654,
   0.1328451,
   0.1261472,
   0.1177116,
   0.09609546,
   0.1217821,
   0.1094597,
   0.1558213,
   0.1309928,
   0.1603657,
   0.1348424,
   0.1513479,
   0.2048604,
   0.182466,
   0.1661562,
   0.1712499,
   0.1706824,
   0.1726771,
   0.2249209,
   0.1636166,
   0.1616812,
   0.2248441,
   0.3313664,
   0.3126514};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.097336);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

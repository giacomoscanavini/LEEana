#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Apr 18 16:49:47 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-1.872794,1.25641,157.8076);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(0,21.43321);
   hmc__4->SetBinContent(1,14.2976);
   hmc__4->SetBinContent(2,12.11025);
   hmc__4->SetBinContent(3,10.46251);
   hmc__4->SetBinContent(4,8.922789);
   hmc__4->SetBinContent(5,12.23676);
   hmc__4->SetBinContent(6,10.87644);
   hmc__4->SetBinContent(7,10.58763);
   hmc__4->SetBinContent(8,10.68984);
   hmc__4->SetBinContent(9,12.99663);
   hmc__4->SetBinContent(10,14.25907);
   hmc__4->SetBinContent(11,15.60329);
   hmc__4->SetBinContent(12,17.90308);
   hmc__4->SetBinContent(13,19.27701);
   hmc__4->SetBinContent(14,20.70075);
   hmc__4->SetBinContent(15,26.64189);
   hmc__4->SetBinContent(16,31.75882);
   hmc__4->SetBinContent(17,42.23784);
   hmc__4->SetBinContent(18,44.55245);
   hmc__4->SetBinContent(19,62.468);
   hmc__4->SetBinContent(20,93.63971);
   hmc__4->SetBinError(0,1.146848);
   hmc__4->SetBinError(1,3.950554);
   hmc__4->SetBinError(2,4.185864);
   hmc__4->SetBinError(3,3.701539);
   hmc__4->SetBinError(4,3.191809);
   hmc__4->SetBinError(5,4.019388);
   hmc__4->SetBinError(6,3.23819);
   hmc__4->SetBinError(7,3.890395);
   hmc__4->SetBinError(8,3.654576);
   hmc__4->SetBinError(9,4.790244);
   hmc__4->SetBinError(10,4.561049);
   hmc__4->SetBinError(11,4.765955);
   hmc__4->SetBinError(12,5.695138);
   hmc__4->SetBinError(13,5.736685);
   hmc__4->SetBinError(14,5.898875);
   hmc__4->SetBinError(15,7.483822);
   hmc__4->SetBinError(16,8.933577);
   hmc__4->SetBinError(17,13.27943);
   hmc__4->SetBinError(18,12.54526);
   hmc__4->SetBinError(19,14.96679);
   hmc__4->SetBinError(20,21.66889);
   hmc__4->SetBinError(21,0.125509);
   hmc__4->SetMinimum(-1.872794);
   hmc__4->SetMaximum(149.8235);
   hmc__4->SetEntries(507.336);
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
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(98.32169);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(0,0.2560167);
   hbadmatch_stack_1->SetBinContent(1,0.2718162);
   hbadmatch_stack_1->SetBinContent(2,0.2420363);
   hbadmatch_stack_1->SetBinContent(3,0.02550039);
   hbadmatch_stack_1->SetBinContent(4,0.2605088);
   hbadmatch_stack_1->SetBinContent(5,0.1898089);
   hbadmatch_stack_1->SetBinContent(6,0.4122667);
   hbadmatch_stack_1->SetBinContent(7,0.06196366);
   hbadmatch_stack_1->SetBinContent(8,0.3631345);
   hbadmatch_stack_1->SetBinContent(9,0.2869626);
   hbadmatch_stack_1->SetBinContent(10,0.1790164);
   hbadmatch_stack_1->SetBinContent(11,0.2626345);
   hbadmatch_stack_1->SetBinContent(12,0.4624768);
   hbadmatch_stack_1->SetBinContent(13,0.8329728);
   hbadmatch_stack_1->SetBinContent(14,0.2443669);
   hbadmatch_stack_1->SetBinContent(15,0.2419109);
   hbadmatch_stack_1->SetBinContent(16,0.7887649);
   hbadmatch_stack_1->SetBinContent(17,0.6723071);
   hbadmatch_stack_1->SetBinContent(18,1.045515);
   hbadmatch_stack_1->SetBinContent(19,1.052523);
   hbadmatch_stack_1->SetBinContent(20,1.498144);
   hbadmatch_stack_1->SetBinError(0,0.1115538);
   hbadmatch_stack_1->SetBinError(1,0.1130348);
   hbadmatch_stack_1->SetBinError(2,0.1187905);
   hbadmatch_stack_1->SetBinError(3,0.0180315);
   hbadmatch_stack_1->SetBinError(4,0.1307167);
   hbadmatch_stack_1->SetBinError(5,0.09246249);
   hbadmatch_stack_1->SetBinError(6,0.1488148);
   hbadmatch_stack_1->SetBinError(7,0.06195629);
   hbadmatch_stack_1->SetBinError(8,0.1470522);
   hbadmatch_stack_1->SetBinError(9,0.1259668);
   hbadmatch_stack_1->SetBinError(10,0.1011096);
   hbadmatch_stack_1->SetBinError(11,0.1081982);
   hbadmatch_stack_1->SetBinError(12,0.1547524);
   hbadmatch_stack_1->SetBinError(13,0.3928113);
   hbadmatch_stack_1->SetBinError(14,0.09645268);
   hbadmatch_stack_1->SetBinError(15,0.1109384);
   hbadmatch_stack_1->SetBinError(16,0.2104465);
   hbadmatch_stack_1->SetBinError(17,0.1886865);
   hbadmatch_stack_1->SetBinError(18,0.2366421);
   hbadmatch_stack_1->SetBinError(19,0.2650895);
   hbadmatch_stack_1->SetBinError(20,0.368816);
   hbadmatch_stack_1->SetEntries(259);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(0,1.623739);
   hext_stack_2->SetBinContent(1,0.6830363);
   hext_stack_2->SetBinContent(2,0.3340175);
   hext_stack_2->SetBinContent(3,0.2849381);
   hext_stack_2->SetBinContent(4,0.6830363);
   hext_stack_2->SetBinContent(5,0.7321157);
   hext_stack_2->SetBinContent(6,1.191563);
   hext_stack_2->SetBinContent(7,0.2849381);
   hext_stack_2->SetBinContent(8,0.8057348);
   hext_stack_2->SetBinContent(9,1.252912);
   hext_stack_2->SetBinContent(10,1.353803);
   hext_stack_2->SetBinContent(11,0.8180047);
   hext_stack_2->SetBinContent(12,1.80098);
   hext_stack_2->SetBinContent(13,1.749169);
   hext_stack_2->SetBinContent(14,1.464231);
   hext_stack_2->SetBinContent(15,3.228402);
   hext_stack_2->SetBinContent(16,2.545366);
   hext_stack_2->SetBinContent(17,2.208617);
   hext_stack_2->SetBinContent(18,1.351071);
   hext_stack_2->SetBinContent(19,2.466284);
   hext_stack_2->SetBinContent(20,3.65104);
   hext_stack_2->SetBinError(0,0.4929427);
   hext_stack_2->SetBinError(1,0.3462882);
   hext_stack_2->SetBinError(2,0.2031664);
   hext_stack_2->SetBinError(3,0.2016789);
   hext_stack_2->SetBinError(4,0.3462882);
   hext_stack_2->SetBinError(5,0.3471566);
   hext_stack_2->SetBinError(6,0.4477851);
   hext_stack_2->SetBinError(7,0.2016789);
   hext_stack_2->SetBinError(8,0.3484551);
   hext_stack_2->SetBinError(9,0.4486249);
   hext_stack_2->SetBinError(10,0.4895717);
   hext_stack_2->SetBinError(11,0.3486711);
   hext_stack_2->SetBinError(12,0.5652643);
   hext_stack_2->SetBinError(13,0.5307634);
   hext_stack_2->SetBinError(14,0.4909535);
   hext_stack_2->SetBinError(15,0.7484033);
   hext_stack_2->SetBinError(16,0.6634696);
   hext_stack_2->SetBinError(17,0.601418);
   hext_stack_2->SetBinError(18,0.4499652);
   hext_stack_2->SetBinError(19,0.6040407);
   hext_stack_2->SetBinError(20,0.799781);
   hext_stack_2->SetEntries(584);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(0,0.262682);
   hdirt_stack_3->SetBinContent(1,0.3317445);
   hdirt_stack_3->SetBinContent(2,0.116928);
   hdirt_stack_3->SetBinContent(3,0.1326272);
   hdirt_stack_3->SetBinContent(4,0.06064831);
   hdirt_stack_3->SetBinContent(5,0.08841814);
   hdirt_stack_3->SetBinContent(6,0.05088758);
   hdirt_stack_3->SetBinContent(7,0.1048574);
   hdirt_stack_3->SetBinContent(8,0.1151102);
   hdirt_stack_3->SetBinContent(9,0.1179148);
   hdirt_stack_3->SetBinContent(10,0.01643923);
   hdirt_stack_3->SetBinContent(11,0.0255663);
   hdirt_stack_3->SetBinContent(12,0.525288);
   hdirt_stack_3->SetBinContent(13,0.2145591);
   hdirt_stack_3->SetBinContent(14,0.2162745);
   hdirt_stack_3->SetBinContent(15,0.1490664);
   hdirt_stack_3->SetBinContent(16,0.3780889);
   hdirt_stack_3->SetBinContent(17,0.5138479);
   hdirt_stack_3->SetBinContent(18,0.3191858);
   hdirt_stack_3->SetBinContent(19,0.3661161);
   hdirt_stack_3->SetBinContent(20,0.4597259);
   hdirt_stack_3->SetBinError(0,0.09771104);
   hdirt_stack_3->SetBinError(1,0.119445);
   hdirt_stack_3->SetBinError(2,0.07203711);
   hdirt_stack_3->SetBinError(3,0.07657235);
   hdirt_stack_3->SetBinError(4,0.04571177);
   hdirt_stack_3->SetBinError(5,0.06252107);
   hdirt_stack_3->SetBinError(6,0.02082414);
   hdirt_stack_3->SetBinError(7,0.06359251);
   hdirt_stack_3->SetBinError(8,0.07474051);
   hdirt_stack_3->SetBinError(9,0.07303154);
   hdirt_stack_3->SetBinError(10,0.01162429);
   hdirt_stack_3->SetBinError(11,0.0147793);
   hdirt_stack_3->SetBinError(12,0.3114083);
   hdirt_stack_3->SetBinError(13,0.09612751);
   hdirt_stack_3->SetBinError(14,0.09656686);
   hdirt_stack_3->SetBinError(15,0.07744966);
   hdirt_stack_3->SetBinError(16,0.1220155);
   hdirt_stack_3->SetBinError(17,0.1497836);
   hdirt_stack_3->SetBinError(18,0.1088668);
   hdirt_stack_3->SetBinError(19,0.215074);
   hdirt_stack_3->SetBinError(20,0.1357506);
   hdirt_stack_3->SetEntries(166);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(0,2.703927);
   houtFV_stack_4->SetBinContent(1,1.080873);
   houtFV_stack_4->SetBinContent(2,0.5484458);
   houtFV_stack_4->SetBinContent(3,0.6625414);
   houtFV_stack_4->SetBinContent(4,0.6486528);
   houtFV_stack_4->SetBinContent(5,1.033141);
   houtFV_stack_4->SetBinContent(6,0.7580204);
   houtFV_stack_4->SetBinContent(7,0.6833139);
   houtFV_stack_4->SetBinContent(8,0.9304799);
   houtFV_stack_4->SetBinContent(9,0.9581975);
   houtFV_stack_4->SetBinContent(10,0.8169583);
   houtFV_stack_4->SetBinContent(11,1.297842);
   houtFV_stack_4->SetBinContent(12,1.482211);
   houtFV_stack_4->SetBinContent(13,1.050543);
   houtFV_stack_4->SetBinContent(14,1.712434);
   houtFV_stack_4->SetBinContent(15,2.201149);
   houtFV_stack_4->SetBinContent(16,2.357868);
   houtFV_stack_4->SetBinContent(17,4.086374);
   houtFV_stack_4->SetBinContent(18,3.397241);
   houtFV_stack_4->SetBinContent(19,4.839929);
   houtFV_stack_4->SetBinContent(20,4.677149);
   houtFV_stack_4->SetBinError(0,0.3829607);
   houtFV_stack_4->SetBinError(1,0.243143);
   houtFV_stack_4->SetBinError(2,0.1683246);
   houtFV_stack_4->SetBinError(3,0.1895552);
   houtFV_stack_4->SetBinError(4,0.1807193);
   houtFV_stack_4->SetBinError(5,0.2363335);
   houtFV_stack_4->SetBinError(6,0.2078456);
   houtFV_stack_4->SetBinError(7,0.1979865);
   houtFV_stack_4->SetBinError(8,0.2288146);
   houtFV_stack_4->SetBinError(9,0.2343508);
   houtFV_stack_4->SetBinError(10,0.2095545);
   houtFV_stack_4->SetBinError(11,0.2736959);
   houtFV_stack_4->SetBinError(12,0.2989746);
   houtFV_stack_4->SetBinError(13,0.2345322);
   houtFV_stack_4->SetBinError(14,0.3060231);
   houtFV_stack_4->SetBinError(15,0.3501036);
   houtFV_stack_4->SetBinError(16,0.3460872);
   houtFV_stack_4->SetBinError(17,0.4859615);
   houtFV_stack_4->SetBinError(18,0.4240419);
   houtFV_stack_4->SetBinError(19,0.5165907);
   houtFV_stack_4->SetBinError(20,0.5102351);
   houtFV_stack_4->SetEntries(971);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(0,11.37909);
   hNCpi0inFV_stack_5->SetBinContent(1,7.119027);
   hNCpi0inFV_stack_5->SetBinContent(2,7.202895);
   hNCpi0inFV_stack_5->SetBinContent(3,6.534126);
   hNCpi0inFV_stack_5->SetBinContent(4,4.830421);
   hNCpi0inFV_stack_5->SetBinContent(5,6.470375);
   hNCpi0inFV_stack_5->SetBinContent(6,5.531869);
   hNCpi0inFV_stack_5->SetBinContent(7,6.007591);
   hNCpi0inFV_stack_5->SetBinContent(8,5.375244);
   hNCpi0inFV_stack_5->SetBinContent(9,6.962248);
   hNCpi0inFV_stack_5->SetBinContent(10,8.525701);
   hNCpi0inFV_stack_5->SetBinContent(11,8.718748);
   hNCpi0inFV_stack_5->SetBinContent(12,9.580564);
   hNCpi0inFV_stack_5->SetBinContent(13,10.76331);
   hNCpi0inFV_stack_5->SetBinContent(14,11.98535);
   hNCpi0inFV_stack_5->SetBinContent(15,14.55502);
   hNCpi0inFV_stack_5->SetBinContent(16,16.72707);
   hNCpi0inFV_stack_5->SetBinContent(17,23.81881);
   hNCpi0inFV_stack_5->SetBinContent(18,27.18442);
   hNCpi0inFV_stack_5->SetBinContent(19,37.7802);
   hNCpi0inFV_stack_5->SetBinContent(20,56.96658);
   hNCpi0inFV_stack_5->SetBinError(0,0.782001);
   hNCpi0inFV_stack_5->SetBinError(1,0.6216798);
   hNCpi0inFV_stack_5->SetBinError(2,0.6298421);
   hNCpi0inFV_stack_5->SetBinError(3,0.5955159);
   hNCpi0inFV_stack_5->SetBinError(4,0.5096563);
   hNCpi0inFV_stack_5->SetBinError(5,0.5948331);
   hNCpi0inFV_stack_5->SetBinError(6,0.5385477);
   hNCpi0inFV_stack_5->SetBinError(7,0.5767865);
   hNCpi0inFV_stack_5->SetBinError(8,0.5281595);
   hNCpi0inFV_stack_5->SetBinError(9,0.6076543);
   hNCpi0inFV_stack_5->SetBinError(10,0.6799596);
   hNCpi0inFV_stack_5->SetBinError(11,0.6795277);
   hNCpi0inFV_stack_5->SetBinError(12,0.7093888);
   hNCpi0inFV_stack_5->SetBinError(13,0.7670926);
   hNCpi0inFV_stack_5->SetBinError(14,0.8029164);
   hNCpi0inFV_stack_5->SetBinError(15,0.883211);
   hNCpi0inFV_stack_5->SetBinError(16,0.9530795);
   hNCpi0inFV_stack_5->SetBinError(17,1.139099);
   hNCpi0inFV_stack_5->SetBinError(18,1.214425);
   hNCpi0inFV_stack_5->SetBinError(19,1.43136);
   hNCpi0inFV_stack_5->SetBinError(20,1.75148);
   hNCpi0inFV_stack_5->SetEntries(7714);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(0,2.519635);
   hCCpi0inFV_stack_6->SetBinContent(1,2.781875);
   hCCpi0inFV_stack_6->SetBinContent(2,1.993369);
   hCCpi0inFV_stack_6->SetBinContent(3,1.510881);
   hCCpi0inFV_stack_6->SetBinContent(4,1.368423);
   hCCpi0inFV_stack_6->SetBinContent(5,1.924234);
   hCCpi0inFV_stack_6->SetBinContent(6,1.618042);
   hCCpi0inFV_stack_6->SetBinContent(7,1.789366);
   hCCpi0inFV_stack_6->SetBinContent(8,1.584314);
   hCCpi0inFV_stack_6->SetBinContent(9,1.614453);
   hCCpi0inFV_stack_6->SetBinContent(10,1.878707);
   hCCpi0inFV_stack_6->SetBinContent(11,2.636638);
   hCCpi0inFV_stack_6->SetBinContent(12,1.944697);
   hCCpi0inFV_stack_6->SetBinContent(13,2.195578);
   hCCpi0inFV_stack_6->SetBinContent(14,2.643215);
   hCCpi0inFV_stack_6->SetBinContent(15,3.349798);
   hCCpi0inFV_stack_6->SetBinContent(16,4.173125);
   hCCpi0inFV_stack_6->SetBinContent(17,5.938681);
   hCCpi0inFV_stack_6->SetBinContent(18,7.174738);
   hCCpi0inFV_stack_6->SetBinContent(19,10.18237);
   hCCpi0inFV_stack_6->SetBinContent(20,16.13935);
   hCCpi0inFV_stack_6->SetBinError(0,0.3820933);
   hCCpi0inFV_stack_6->SetBinError(1,0.4019931);
   hCCpi0inFV_stack_6->SetBinError(2,0.3235431);
   hCCpi0inFV_stack_6->SetBinError(3,0.2833789);
   hCCpi0inFV_stack_6->SetBinError(4,0.2745388);
   hCCpi0inFV_stack_6->SetBinError(5,0.3360722);
   hCCpi0inFV_stack_6->SetBinError(6,0.2961421);
   hCCpi0inFV_stack_6->SetBinError(7,0.3194982);
   hCCpi0inFV_stack_6->SetBinError(8,0.2902821);
   hCCpi0inFV_stack_6->SetBinError(9,0.3061889);
   hCCpi0inFV_stack_6->SetBinError(10,0.3237443);
   hCCpi0inFV_stack_6->SetBinError(11,0.3826446);
   hCCpi0inFV_stack_6->SetBinError(12,0.3226371);
   hCCpi0inFV_stack_6->SetBinError(13,0.3321249);
   hCCpi0inFV_stack_6->SetBinError(14,0.3729601);
   hCCpi0inFV_stack_6->SetBinError(15,0.4277692);
   hCCpi0inFV_stack_6->SetBinError(16,0.4732506);
   hCCpi0inFV_stack_6->SetBinError(17,0.5573107);
   hCCpi0inFV_stack_6->SetBinError(18,0.6305283);
   hCCpi0inFV_stack_6->SetBinError(19,0.7438649);
   hCCpi0inFV_stack_6->SetBinError(20,0.937334);
   hCCpi0inFV_stack_6->SetEntries(1977);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_7->SetBinContent(0,1.679999);
   hNCinFV_stack_7->SetBinContent(1,1.045891);
   hNCinFV_stack_7->SetBinContent(2,0.7725652);
   hNCinFV_stack_7->SetBinContent(3,0.646858);
   hNCinFV_stack_7->SetBinContent(4,0.4864895);
   hNCinFV_stack_7->SetBinContent(5,0.5119899);
   hNCinFV_stack_7->SetBinContent(6,0.1876636);
   hNCinFV_stack_7->SetBinContent(7,0.796271);
   hNCinFV_stack_7->SetBinContent(8,0.2478252);
   hNCinFV_stack_7->SetBinContent(9,0.8345215);
   hNCinFV_stack_7->SetBinContent(10,0.4245332);
   hNCinFV_stack_7->SetBinContent(11,0.4227385);
   hNCinFV_stack_7->SetBinContent(12,0.6231523);
   hNCinFV_stack_7->SetBinContent(13,0.6104021);
   hNCinFV_stack_7->SetBinContent(14,0.5356956);
   hNCinFV_stack_7->SetBinContent(15,1.133348);
   hNCinFV_stack_7->SetBinContent(16,1.49413);
   hNCinFV_stack_7->SetBinContent(17,1.765661);
   hNCinFV_stack_7->SetBinContent(18,2.155533);
   hNCinFV_stack_7->SetBinContent(19,3.359997);
   hNCinFV_stack_7->SetBinContent(20,5.180248);
   hNCinFV_stack_7->SetBinError(0,0.3025537);
   hNCinFV_stack_7->SetBinError(1,0.2366772);
   hNCinFV_stack_7->SetBinError(2,0.2008398);
   hNCinFV_stack_7->SetBinError(3,0.1889053);
   hNCinFV_stack_7->SetBinError(4,0.1565075);
   hNCinFV_stack_7->SetBinError(5,0.1575428);
   hNCinFV_stack_7->SetBinError(6,0.0921412);
   hNCinFV_stack_7->SetBinError(7,0.2090156);
   hNCinFV_stack_7->SetBinError(8,0.1239126);
   hNCinFV_stack_7->SetBinError(9,0.210179);
   hNCinFV_stack_7->SetBinError(10,0.143722);
   hNCinFV_stack_7->SetBinError(11,0.1538888);
   hNCinFV_stack_7->SetBinError(12,0.1798175);
   hNCinFV_stack_7->SetBinError(13,0.1793649);
   hNCinFV_stack_7->SetBinError(14,0.167841);
   hNCinFV_stack_7->SetBinError(15,0.2453157);
   hNCinFV_stack_7->SetBinError(16,0.2828834);
   hNCinFV_stack_7->SetBinError(17,0.3142104);
   hNCinFV_stack_7->SetBinError(18,0.3359241);
   hNCinFV_stack_7->SetBinError(19,0.4278755);
   hNCinFV_stack_7->SetBinError(20,0.5257418);
   hNCinFV_stack_7->SetEntries(669);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(0,0.8842041);
   hnumuCCinFV_stack_8->SetBinContent(1,0.951065);
   hnumuCCinFV_stack_8->SetBinContent(2,0.8380404);
   hnumuCCinFV_stack_8->SetBinContent(3,0.594672);
   hnumuCCinFV_stack_8->SetBinContent(4,0.5718588);
   hnumuCCinFV_stack_8->SetBinContent(5,1.273919);
   hnumuCCinFV_stack_8->SetBinContent(6,1.097199);
   hnumuCCinFV_stack_8->SetBinContent(7,0.8593245);
   hnumuCCinFV_stack_8->SetBinContent(8,1.268);
   hnumuCCinFV_stack_8->SetBinContent(9,0.8455024);
   hnumuCCinFV_stack_8->SetBinContent(10,1.001955);
   hnumuCCinFV_stack_8->SetBinContent(11,1.359161);
   hnumuCCinFV_stack_8->SetBinContent(12,1.421757);
   hnumuCCinFV_stack_8->SetBinContent(13,1.86048);
   hnumuCCinFV_stack_8->SetBinContent(14,1.871107);
   hnumuCCinFV_stack_8->SetBinContent(15,1.577955);
   hnumuCCinFV_stack_8->SetBinContent(16,3.077029);
   hnumuCCinFV_stack_8->SetBinContent(17,3.016881);
   hnumuCCinFV_stack_8->SetBinContent(18,1.832141);
   hnumuCCinFV_stack_8->SetBinContent(19,2.11819);
   hnumuCCinFV_stack_8->SetBinContent(20,3.712327);
   hnumuCCinFV_stack_8->SetBinError(0,0.2165192);
   hnumuCCinFV_stack_8->SetBinError(1,0.2302326);
   hnumuCCinFV_stack_8->SetBinError(2,0.2190094);
   hnumuCCinFV_stack_8->SetBinError(3,0.1845691);
   hnumuCCinFV_stack_8->SetBinError(4,0.1789206);
   hnumuCCinFV_stack_8->SetBinError(5,0.4646635);
   hnumuCCinFV_stack_8->SetBinError(6,0.2865778);
   hnumuCCinFV_stack_8->SetBinError(7,0.2473722);
   hnumuCCinFV_stack_8->SetBinError(8,0.2812129);
   hnumuCCinFV_stack_8->SetBinError(9,0.2912139);
   hnumuCCinFV_stack_8->SetBinError(10,0.2346559);
   hnumuCCinFV_stack_8->SetBinError(11,0.2911527);
   hnumuCCinFV_stack_8->SetBinError(12,0.4793376);
   hnumuCCinFV_stack_8->SetBinError(13,0.3978686);
   hnumuCCinFV_stack_8->SetBinError(14,0.3943421);
   hnumuCCinFV_stack_8->SetBinError(15,0.3642366);
   hnumuCCinFV_stack_8->SetBinError(16,0.7946687);
   hnumuCCinFV_stack_8->SetBinError(17,0.4875195);
   hnumuCCinFV_stack_8->SetBinError(18,0.3162837);
   hnumuCCinFV_stack_8->SetBinError(19,0.3446842);
   hnumuCCinFV_stack_8->SetBinError(20,0.4575805);
   hnumuCCinFV_stack_8->SetEntries(755);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_9->SetBinContent(0,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_9->SetBinContent(4,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(5,0.01276398);
   hnueCCinFV_stack_9->SetBinContent(6,0.02893035);
   hnueCCinFV_stack_9->SetBinContent(9,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(10,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.02808221);
   hnueCCinFV_stack_9->SetBinContent(15,0.2052407);
   hnueCCinFV_stack_9->SetBinContent(16,0.2173713);
   hnueCCinFV_stack_9->SetBinContent(17,0.2166657);
   hnueCCinFV_stack_9->SetBinContent(18,0.09260789);
   hnueCCinFV_stack_9->SetBinContent(19,0.3023913);
   hnueCCinFV_stack_9->SetBinContent(20,1.355151);
   hnueCCinFV_stack_9->SetBinError(0,0.08761943);
   hnueCCinFV_stack_9->SetBinError(1,0.02331381);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06910958);
   hnueCCinFV_stack_9->SetBinError(4,0.0127502);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.02060012);
   hnueCCinFV_stack_9->SetBinError(9,0.08761943);
   hnueCCinFV_stack_9->SetBinError(10,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.01994087);
   hnueCCinFV_stack_9->SetBinError(15,0.1146101);
   hnueCCinFV_stack_9->SetBinError(16,0.109601);
   hnueCCinFV_stack_9->SetBinError(17,0.1095627);
   hnueCCinFV_stack_9->SetBinError(18,0.03821179);
   hnueCCinFV_stack_9->SetBinError(19,0.1498229);
   hnueCCinFV_stack_9->SetBinError(20,0.5161839);
   hnueCCinFV_stack_9->SetEntries(72);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(0,21.43321);
   hmcerror__5->SetBinContent(1,14.2976);
   hmcerror__5->SetBinContent(2,12.11025);
   hmcerror__5->SetBinContent(3,10.46251);
   hmcerror__5->SetBinContent(4,8.922789);
   hmcerror__5->SetBinContent(5,12.23676);
   hmcerror__5->SetBinContent(6,10.87644);
   hmcerror__5->SetBinContent(7,10.58763);
   hmcerror__5->SetBinContent(8,10.68984);
   hmcerror__5->SetBinContent(9,12.99663);
   hmcerror__5->SetBinContent(10,14.25907);
   hmcerror__5->SetBinContent(11,15.60329);
   hmcerror__5->SetBinContent(12,17.90308);
   hmcerror__5->SetBinContent(13,19.27701);
   hmcerror__5->SetBinContent(14,20.70075);
   hmcerror__5->SetBinContent(15,26.64189);
   hmcerror__5->SetBinContent(16,31.75882);
   hmcerror__5->SetBinContent(17,42.23784);
   hmcerror__5->SetBinContent(18,44.55245);
   hmcerror__5->SetBinContent(19,62.468);
   hmcerror__5->SetBinContent(20,93.63971);
   hmcerror__5->SetBinError(0,1.146848);
   hmcerror__5->SetBinError(1,3.950554);
   hmcerror__5->SetBinError(2,4.185864);
   hmcerror__5->SetBinError(3,3.701539);
   hmcerror__5->SetBinError(4,3.191809);
   hmcerror__5->SetBinError(5,4.019388);
   hmcerror__5->SetBinError(6,3.23819);
   hmcerror__5->SetBinError(7,3.890395);
   hmcerror__5->SetBinError(8,3.654576);
   hmcerror__5->SetBinError(9,4.790244);
   hmcerror__5->SetBinError(10,4.561049);
   hmcerror__5->SetBinError(11,4.765955);
   hmcerror__5->SetBinError(12,5.695138);
   hmcerror__5->SetBinError(13,5.736685);
   hmcerror__5->SetBinError(14,5.898875);
   hmcerror__5->SetBinError(15,7.483822);
   hmcerror__5->SetBinError(16,8.933577);
   hmcerror__5->SetBinError(17,13.27943);
   hmcerror__5->SetBinError(18,12.54526);
   hmcerror__5->SetBinError(19,14.96679);
   hmcerror__5->SetBinError(20,21.66889);
   hmcerror__5->SetBinError(21,0.125509);
   hmcerror__5->SetEntries(507.336);

   ci = TColor::GetColor("#666666");
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
   9,
   10,
   11,
   9,
   7,
   14,
   12,
   7,
   8,
   14,
   14,
   11,
   14,
   18,
   11,
   26,
   35,
   39,
   54,
   72};
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
   3.19354,
   3.34883,
   3.4975,
   3.19354,
   2.85954,
   3.9102,
   3.64022,
   2.85954,
   3.0307,
   3.9102,
   3.9102,
   3.4975,
   3.9102,
   4.4008,
   3.4975,
   5.2453,
   6.0548,
   6.3813,
   7.4785,
   8.6108};
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
   2.9582,
   3.1179,
   3.27,
   2.9582,
   2.61053,
   3.6898,
   3.4155,
   2.61053,
   2.7896,
   3.6898,
   3.6898,
   3.27,
   3.6898,
   4.1858,
   3.27,
   5.0358,
   5.8483,
   6.1757,
   7.275,
   8.4085};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(3.726414);
   Graph_Graph3005->SetMaximum(88.0353);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.80#pm0.04(data err)#pm0.16(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.61/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 395.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 28.9","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.3","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 35.2","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  282.6","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 74.4","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 23.2","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 31.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.9","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_FC_bnb_10_pi0_costheta_all");
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
   0.276309,
   0.3456463,
   0.3537906,
   0.3577143,
   0.3284682,
   0.2977251,
   0.3674473,
   0.3418737,
   0.368576,
   0.31987,
   0.3054456,
   0.3181093,
   0.297592,
   0.2849594,
   0.2809044,
   0.2812944,
   0.3143965,
   0.281584,
   0.2395913,
   0.2314071};
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
   0.276309,
   0.3456463,
   0.3537906,
   0.3577143,
   0.3284682,
   0.2977251,
   0.3674473,
   0.3418737,
   0.368576,
   0.31987,
   0.3054456,
   0.3181093,
   0.297592,
   0.2849594,
   0.2809044,
   0.2812944,
   0.3143965,
   0.281584,
   0.2395913,
   0.2314071};
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
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos#theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   0.2158773,
   0.2133596,
   0.2258367,
   0.2239248,
   0.2192682,
   0.1955704,
   0.2273247,
   0.21261,
   0.2260416,
   0.2309214,
   0.2119009,
   0.2294258,
   0.2316283,
   0.2274251,
   0.2383592,
   0.2373346,
   0.2344119,
   0.237784,
   0.1992714,
   0.1952516};
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
   0.2158773,
   0.2133596,
   0.2258367,
   0.2239248,
   0.2192682,
   0.1955704,
   0.2273247,
   0.21261,
   0.2260416,
   0.2309214,
   0.2119009,
   0.2294258,
   0.2316283,
   0.2274251,
   0.2383592,
   0.2373346,
   0.2344119,
   0.237784,
   0.1992714,
   0.1952516};
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
   0.6294764,
   0.8257466,
   1.051373,
   1.008653,
   0.5720466,
   1.287186,
   1.133399,
   0.6548273,
   0.6155444,
   0.9818313,
   0.8972467,
   0.6144194,
   0.7262536,
   0.8695335,
   0.4128837,
   0.8186703,
   0.8286409,
   0.8753727,
   0.8644426,
   0.7689046};
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
   0.223362,
   0.2765285,
   0.3342887,
   0.3579083,
   0.2336843,
   0.3595109,
   0.3438183,
   0.2675007,
   0.2331913,
   0.2742255,
   0.250601,
   0.1953574,
   0.2028426,
   0.2125913,
   0.1312782,
   0.1651604,
   0.1433501,
   0.1432312,
   0.1197173,
   0.09195671};
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
   0.2069019,
   0.2574595,
   0.3125444,
   0.3315331,
   0.213335,
   0.3392469,
   0.3225935,
   0.2442066,
   0.2146403,
   0.2587686,
   0.2364758,
   0.1826501,
   0.1914093,
   0.2022052,
   0.1227391,
   0.1585638,
   0.1384612,
   0.1386164,
   0.1164596,
   0.08979631};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.1471227);
   Graph_Graph3008->SetMaximum(1.760915);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_FC_bnb_10_pi0_costheta_all",20,-1,1);

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
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
